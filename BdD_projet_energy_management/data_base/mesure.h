#ifndef MESURE_H
#define MESURE_H

#include <string>
using namespace std;

class MESURE
{
private:
    string nom_secteur;
    float intensite;
    float tension;
    float puissance;
    string date_mesure;
    
public:
    MESURE();
    ~MESURE();
    float get_intensite();
    float get_tension();
    float get_puissance();
    string get_nom_secteur();
    string get_date_mesure();
    void set_intensite(float intensite);
    void set_tension(float tension);
    void set_puissance(float puissance);
    void set_nom_secteur(string nom_secteur);
    void set_date_mesure(string date_mesure);

   
};

MESURE::MESURE()
{
}

MESURE::~MESURE()
{
}

#endif // MESURE_H