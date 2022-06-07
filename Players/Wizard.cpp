//
// Created by eladm on 07/06/2022.
//

#include "Wizard.h"
#include <iostream>
#include <cassert>

using std::cout;
using std::endl;
using std::string;


Wizard::Wizard(const string& name, const int maxHP, const int force):Player( name,  maxHP,  force){
}
Wizard& Wizard::heal(const int addedHP){
    assert(addedHP >=0);
    if (addedHP < 0){
        return *this;
    }
    if(this->m_HP + 2*addedHP >= this->m_maxHP){
        this->m_HP = this->m_maxHP;
    }
    else{
        this->m_HP += 2*addedHP;
    }
    return *this;
}
void Wizard::printInfo(ostream &os) const {
    printPlayerDetails(os,m_name,"Wizard",m_level,m_force,m_HP,m_coins);

}