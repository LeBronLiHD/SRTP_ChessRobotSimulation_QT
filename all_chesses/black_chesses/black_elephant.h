#ifndef BLACK_ELEPHANT_H
#define BLACK_ELEPHANT_H

/* * * * * * * * * * * * * * * * * * * * *
*   File:     black_elephant.h
*   Author:   Haodong LI
*   Usage:    TheUsageOfFile
*   Time:     2021-05-30
* * * * * * * * * * * * * * * * * * * * * */

#include "Elephant.h"

class black_elephant: public Elephant
{
public:
    black_elephant(int x = 0, int y = 0,
                   const QString name = "BElephant", // empty name is illegal
                   const bool camp = false, // black is default
                   const int number = 1, // 0 is an error number, only 1-5 is legal
                   bool alive = true);
};

#endif // BLACK_ELEPHANT_H
