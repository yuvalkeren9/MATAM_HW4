//
// Created by eladm on 07/06/2022.
//

#ifndef HW4_FIGHTER_H
#define HW4_FIGHTER_H
#include "Player.h"
#include "../utilities.h"

class Fighter: public Player{

public:
    ~Fighter() override =default;
  explicit Fighter(const string& name, const int maxHP = DEFAULT_MAX_HP ,const int force = DEFAULT_FORCE);
    int getAttackStrength() const override;
    void printInfo(ostream &os) const override;
};

#endif //HW4_FIGHTER_H