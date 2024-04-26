// Programme de test d'accès à une BdD avec la lib PocoODBC utilisant les exceptions pour le traitrement des erreurs
// à compiler avec
//g++ testAccesODBC-exceptions.cpp -o testAccesODBC-exceptions -l PocoDataODBC  -l PocoData -l PocoFoundation
#include <iostream>
#include <string>
using namespace std;
#include <Poco/Data/Session.h>
#include <Poco/Data/ODBC/Connector.h>
#include <Poco/Data/RecordSet.h>
#include <Poco/Exception.h>
#include "Poco/Data/ODBC/ODBCException.h"
using namespace Poco::Data;
int main()
{
    // on va utiliser ODBC
    ODBC::Connector::registerConnector();
    Session *session=NULL;
    // on essaye de se connecteur à la bdd avec les info contenues dans le dsn
    try
    {
        session= new Session("ODBC", "DSN=PROJET_6_DATA_BASE");
    }
    catch (ConnectionFailedException& ce)
    {
        cerr << "Connexion à la bdd impossible !!! Exception retournée:"
                << endl << endl << ce.displayText() << endl;
    }

    // si on est connecté
    if (session != NULL)
    {
        // on essaye de faire un select
        try
        {
            Statement select(*session);
            select << "select * from mesures";
            RecordSet rs(select);
            // on récupère les données
            select.execute();
            bool more = rs.moveFirst();
            while (more)
            {
              for (std::size_t col = 0; col < rs.columnCount(); ++col)
              {
                  cout << rs[col].convert<string>() << " ";
              }
              cout << endl;
              more = rs.moveNext();
           }
        }
        catch (ODBC::StatementException& se)
        {
            cerr << "erreur lors du select !!! StatementException:"
                    << endl << endl << se.toString() << endl;
        }
    }
    return 0;
}
