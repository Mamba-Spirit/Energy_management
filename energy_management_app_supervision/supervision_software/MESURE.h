#ifndef MESURE_H
#define MESURE_H

#include <string>
using namespace std;

class MESURE
{
private:
	string nom_module;
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
    string get_nom_module();
    string get_date_mesure();
    void set_intensite(float intensite);
    void set_tension(float tension);
    void set_puissance(float puissance);
    void set_nom_module(string nom_secteur);
    void set_date_mesure(string date_mesure);

};

#endif // MESURE_H
