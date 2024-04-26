#ifndef MACHINE_H
#define MACHINE_H

#include <string>
using namespace std;

class MACHINE{

    private:
    string pc_ip;
    string pc_mac;
    bool pc_etat;

    public:
    string get_pc_ip();
    string get_pc_mac();
    bool get_pc_etat();
    void set_pc_ip(string ip);
    void set_pc_mac(string mac);
    void set_pc_etat(bool etat);
};

#endif // MACHINE_H