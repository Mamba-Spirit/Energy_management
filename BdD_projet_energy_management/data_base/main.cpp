#include "data_base.cpp"
//g++ main.cpp -o test -l PocoDataODBC  -l PocoData -l PocoFoundation
//This is to test the class DATA_BASE which will allowed us to acceès to the data base.
using namespace std;

int main(){

    cout<<"thid is test!"<<endl;
    DATA_BASE my_data_base(MY_DSN);
    string nom_module = "Module SA001";
    string secteur = "Secteur B";
    bool etat = false;
    //cout<<my_data_base.get_etat_secteur_demande(secteur)<<endl;
    //my_data_base.set_etat_secteur_demande(secteur, etat);
    //cout<<my_data_base.get_etat_secteur_demande(secteur)<<endl;
    my_data_base.set_etat_des_machines_du_module(nom_module, etat);
    my_data_base.set_etat_demande_des_machines_du_module(nom_module, etat);

    //cout<<my_data_base.get_etat_module_demande(nom_module)<<endl;
    

    return 0;
}