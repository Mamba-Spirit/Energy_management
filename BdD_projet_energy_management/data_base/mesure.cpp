#include"mesure.h"

string MESURE::get_date_mesure(){return date_mesure;}
string MESURE::get_nom_secteur(){return nom_secteur;}
float MESURE::get_tension(){return tension;}
float MESURE::get_intensite(){return intensite;}
float MESURE::get_puissance(){return puissance;}

void MESURE::set_date_mesure(string date_mesure){
    this->date_mesure = date_mesure;
}
void MESURE::set_intensite(float intensite){
    this->intensite = intensite;
}
void MESURE::set_nom_secteur(string noom_secteur){
    this->nom_secteur = nom_secteur;
}
void MESURE::set_puissance(float puissance){
    this->puissance = puissance;
}
void MESURE::set_tension(float tension){
    this->tension = tension;
}