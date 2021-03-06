#ifndef ELEPHANT_H
#define ELEPHANT_H

/* * * * * * * * * * * * * * * * * * * * *
*   File:     Elephant.h
*   Author:   Haodong LI
*   Usage:    UsageOfFile
*   Time:     2021-05-30
* * * * * * * * * * * * * * * * * * * * * */

#include "Chess.h"
#include "global.h"

class Elephant: public Chess
{
public:
    Elephant(int x = 0, int y = 0,
             const QString name = "Elephant", // empty name is illegal
             const bool camp = false, // black is default
             const int number = 0, // 0 is an error number, only 1-5 is legal
             bool alive = true);
    virtual double space_value(); // 0~100%
    virtual bool canChessMove();
    virtual bool canElephantMove(SGeoPoint* start, SGeoPoint* end);
    virtual bool canElephantMoveOrKill(SGeoPoint* start, SGeoPoint* end);
    virtual void generateMove();
};

#endif // ELEPHANT_H
