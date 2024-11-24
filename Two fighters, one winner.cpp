#include <cmath>

/* source link: https://www.codewars.com/kata/577bd8d4ae2807c64b00045b/cpp */

std::string declareWinner(Fighter* fighter1, Fighter* fighter2, std::string firstAttacker)
{
    int fighter1_moves = std::ceil(static_cast<double>(fighter2->getHealth()) / fighter1->getDamagePerAttack());
    int fighter2_moves = std::ceilf(static_cast<double>(fighter1->getHealth()) / fighter2->getDamagePerAttack());

    if (fighter1_moves < fighter2_moves)return fighter1->getName();
    else if (fighter1_moves > fighter2_moves)return fighter2->getName();
    return firstAttacker;
}