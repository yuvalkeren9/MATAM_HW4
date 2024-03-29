//
// Created by יובל קרן on 07/06/2022.
//

#include "Dragon.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Dragon::Dragon() {
    m_stats.force = 25;
    m_stats.loot = 1000;
}


void Dragon::printInfo() const{
    printCardDetails( cout, "Dragon");
    printMonsterDetails(cout, m_stats.force, m_stats.hpLossOnDefeat, m_stats.loot, true);
    printEndOfCardDetails(cout);
}

void Dragon::applyEncounter(Player& player) const{
    if (player.getAttackStrength() >= this->m_stats.force) {
        player.levelUp();
        player.addCoins(this->m_stats.loot);
        printWinBattle(player.getName(), "Dragon");
    } else {
        int damageToInflict = player.getHP();
        player.damage(damageToInflict);
        printLossBattle(player.getName(), "Dragon");
    }
}

int Dragon::getStats(int typeOfStat) const {
    switch (typeOfStat){
        case RETURN_VALUE_FORCE_FLAG:
            return m_stats.force;
        case RETURN_VALUE_HP_LOSS_FLAG:
            return m_stats.hpLossOnDefeat;
        case RETURN_VALUE_LOOT_FLAG:
            return m_stats.loot;
        default:
            return 0;
    }
}

void Dragon::gangEncounter (Player &player) const {
    int damageToInflict = player.getHP();
    player.damage(damageToInflict);
    printLossBattle(player.getName(), "Dragon");
}




