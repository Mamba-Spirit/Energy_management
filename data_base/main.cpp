/* #include "data_base.cpp"
#include <chrono>
//g++ main.cpp -o test -l PocoDataODBC  -l PocoData -l PocoFoundation
using namespace std;

int main(){

    cout<<"thid is test!"<<endl;
    DATA_BASE my_data_base;
    string nom_module = "Module SA001";
    string secteur = "Secteur A";
    //1, 10.5, 1, 220, 0.5, '2024-04-18 10:00:00')
    bool etat = true;
    float intenite = 600;
    float tension = 600;
    float puissance = 600;
    my_data_base.set_etat_des_modules_du_secteur(secteur, etat);
    MESURE my_mesure, your_mesure;
    my_mesure.set_nom_module(nom_module);
    my_mesure.set_intensite(intenite);
    my_mesure.set_tension(tension);
    my_mesure.set_puissance(puissance);
    ////////////////////////////////
    your_mesure.set_nom_module("SA001");
    your_mesure.set_intensite(600);
    your_mesure.set_tension(600);
    your_mesure.set_puissance(600);
    //////////////////////////////////
    MACHINE my_computer;
    vector <MACHINE> computers;
    vector<string> secteurs;
    vector<string> modules;
    //my_data_base.enregistre_mesure_du_module(your_mesure, nom_module);
    //my_data_base.enregistre_mesure_du_module(your_mesure, nom_module);
    vector <MESURE> mesures, actuelle;

   computers = my_data_base.get_machines(secteur);
   secteurs = my_data_base.get_nom_secteur();
   modules = my_data_base.get_nom_modules();
   mesures = my_data_base.recuperer_mesures_historiques(nom_module);

    actuelle = my_data_base.recuperer_mesures_actuelles();
    
    for (int i = 0; i < actuelle.size(); i++) {
        cout<<"current : " << actuelle[i].get_intensite() << " voltage : "<<actuelle[i].get_tension()<< " power : "<<actuelle[i].get_puissance()<<" from : "<<actuelle[i].get_nom_module()<<" at : "<<actuelle[i].get_date_mesure()<<endl;
    }
    if( actuelle.size() == 0){
        cout<<"aucune mesures reçu"<<endl;
    }


    return 0;
} */
/**/
#include "data_base.cpp"
#include <chrono>
#include <thread>
#include <vector>

//g++ main.cpp -o test -l PocoDataODBC  -l PocoData -l PocoFoundation
using namespace std;

int main() {
    cout << "this is a test!" << endl;
    DATA_BASE my_data_base;
    vector<string> modules = {"Module SA001", "Module SA002", "Module SB001", "Module SB002", "Module SC001", "Module SC002", "Module SD001", "Module SD002"};
    string secteur = "Secteur A";
    bool etat = true;
    
    // Setting initial state of the sector
    my_data_base.set_etat_des_modules_du_secteur(secteur, etat);

    int duration = 500; // Total duration in seconds (3 minutes)
    int interval = 5; // Interval in seconds
    int num_iterations = duration / interval;

    for (int i = 0; i < num_iterations; ++i) {
        string nom_module = modules[i % modules.size()];
        
        // Generating random values for the measures
        float intensite = static_cast<float>(rand() % 1000); // Example random value
        float tension = static_cast<float>(rand() % 1000); // Example random value
        float puissance = static_cast<float>(rand() % 1000); // Example random value

        MESURE my_mesure;
        my_mesure.set_nom_module(nom_module);
        my_mesure.set_intensite(intensite);
        my_mesure.set_tension(tension);
        my_mesure.set_puissance(puissance);
        
        my_data_base.enregistre_mesure_du_module(my_mesure, nom_module);

        // Sleep for the specified interval
        this_thread::sleep_for(chrono::seconds(interval));
    }

    return 0;
}
