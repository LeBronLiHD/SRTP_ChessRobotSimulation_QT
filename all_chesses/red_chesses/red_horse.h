#ifndef RED_HORSE_H
#define RED_HORSE_H

/*****************************************************************
*   File:     red_horse.h
*   Author:   Haodong LI
*   Usage:    TheUsageOfFile
*   Time:     2021-05-30 -> 21:03:38
*****************************************************************/

#include "Horse.h"

class red_horse: public Horse
{
public:
    red_horse(int x = 0, int y = 0,
              const QString name = "RHorse", // empty name is illegal
              const bool camp = true, // black is default
              const int number = 1, // 0 is an error number, only 1-5 is legal
              bool alive = true);
};

#endif // RED_HORSE_H
