#include"machine.h"

string MACHINE::get_pc_ip(){return pc_ip;}

string MACHINE::get_pc_mac(){return pc_mac;}

bool MACHINE::get_pc_etat(){return pc_etat;}

void MACHINE::set_pc_etat(bool etat){
    this->pc_etat = etat;
}
void MACHINE::set_pc_ip(string ip){
    this->pc_ip = ip;
}
void MACHINE::set_pc_mac(string mac){
    this->pc_mac = mac;
}