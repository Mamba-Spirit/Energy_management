#ifndef MACHINE_H
#define MACHINE_H

#include <string>
using namespace std;

class MACHINE
{
private:
	string pc_ip;
    string pc_mac;
    bool pc_etat;

	
public:
	MACHINE();
	~MACHINE();
	string get_adresse_ip();
    string get_adresse_mac();
    bool get_pc_etat();
    void set_adresse_ip(string ip);
    void set_adresse_mac(string mac);
    void set_pc_etat(bool etat);

};

#endif // MACHINE_H
