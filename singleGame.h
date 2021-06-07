#ifndef SINGLEGAME_H
#define SINGLEGAME_H

/*****************************************************************
*   File:     singleGame.h
*   Author:   Haodong LI
*   Usage:    alpha-beta
*   Time:     2021-06-06 -> 14:25:53
*****************************************************************/

#include "Step.h"
#include "global.h"
#include "allBRChessesInclude.h"
#include "globalChesses.h"
#include <QVector>
#include <QtGlobal>

class singleGame
{
public:
    singleGame();
    virtual void setLevel(int level);
    virtual int getLevel();
    virtual void generateBlackAllPossibleMoves();
    virtual void displayBlackAllPossibleMoves();
    virtual void generateRedAllPossibleMoves();
    virtual void displayRedAllPossibleMoves();
    virtual void tranStructToClass();
    virtual void testChessing(int maxCount = 5);
    virtual void testFakeChessing(int maxCount = 5);
    virtual void testStepClass();
    virtual void testFakeBackMove();
    virtual int generateRandomNumber(int maxInt);

    // real play
    virtual void oneLevelChessing(int maxCount);
    virtual int oneLevelStepIndex(bool redOrBlack);
    virtual void normalPlay(int maxCount);

    // interface
    virtual void realMove(chessStep step);
    virtual void fakeMove(chessStep step);
    virtual void realBackMove(chessStep step);
    virtual void fakeBackMove(chessStep step, int lastPosX, int lastPosY);

    Step* finalChessStep;
    QVector<Step*> chessBlackStepList;
    QVector<Step*> chessRedStepList;
    QVector<chessStep> originBlackChessStepList;
    QVector<chessStep> originRedChessStepList;

private:
    int _level;
};

typedef NormalSingleton< singleGame > singleGameIn;

#endif // SINGLEGAME_H
