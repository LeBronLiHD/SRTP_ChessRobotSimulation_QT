#include "Chess.h"

namespace ChessTable {
    enum CHESS_TABLE {
        BLACK_GENERAL = 1,
        BLACK_ADVISOR,
        BLACK_ELEPHANT,
        BLACK_HORSE,
        BLACK_CHARIOT,
        BLACK_CANNON,
        BLACK_SOLDIER,
        RED_GENERAL,
        RED_ADVISOR,
        RED_ELEPHANT,
        RED_HORSE,
        RED_CHARIOT,
        RED_CANNON,
        RED_SOLDIER,
    };
    std::unordered_map<int, QString> Chess_Int2Qstr_simple {
        {1,  "b_gen_"},
        {2,  "b_adv_"},
        {3,  "b_ele_"},
        {4,  "b_hor_"},
        {5,  "b_cha_"},
        {6,  "b_can_"},
        {7,  "b_sol_"},
        {8,  "r_gen_"},
        {9,  "r_adv_"},
        {10, "r_ele_"},
        {11, "r_hor_"},
        {12, "r_cha_"},
        {13, "r_can_"},
        {14, "r_sol_"},
    };
}

Chess::Chess(int x, int y, QString name, bool camp, int number, bool isAlive):
    SGeoPoint(x, y), _name(name), _redOrBlack(camp), _number(number), _isAlive(isAlive)
{
    // StepList.clear(); // make it empty
    // StepKillList.clear();
    chessStepList.clear(); // make it empty
    SchessStepList.clear();
    _spaceValue = 0;
}

bool Chess::isAlive() {
    return _isAlive;
}

void Chess::setAlive(bool isAliveNow) {
    _isAlive = isAliveNow;
}

bool Chess::canKill() {
    return _canKill;
}

bool Chess::canMove() {
    return _canMove;
}

bool Chess::chessCamp() {
    // false is black
    // true is red
    return _redOrBlack;
}

QString Chess::chessName() {
    return _name;
}

int Chess::chessNumber() {
    return _number;
}

void Chess::setSpaceValue(double value) {
    _spaceValue = value;
}

double Chess::getSpaceValue() {
    return _spaceValue;
}

void Chess::printStepList() {
    const int countStep = chessStepList.size();
    if(countStep == 0) {
        qDebug() << "Chess.cpp printStepList() line:50 error:chessStepList is EMPTY!!!";
        return;
    }
    // print every element of the list
    for(int i = 0; i < countStep; i++) {
        std::cout << "=================== <" << i << "> ===================" << std::endl;
        int Num = chessStepList.at(i)._chessNum;
        int Number = chessStepList.at(i)._chessNumber;
        int PosX = chessStepList.at(i)._deltaX;
        int PosY = chessStepList.at(i)._deltaY;
        bool kill = chessStepList.at(i)._isKill;
        QString killString = kill ? "True" : "False";
        int killNum = chessStepList.at(i)._chessKilledNum;
        int killNumber = chessStepList.at(i)._chessKilledNumber;
        std::cout << "Num\t = " << Num << std::endl;
        std::cout << "Number\t = " << Number << std::endl;
        std::cout << "Name\t = " << ChessTable::Chess_Int2Qstr_simple[Num].toStdString() << std::endl;
        std::cout << "PosX\t = " << PosX << std::endl;
        std::cout << "PosY\t = " << PosY << std::endl;
        std::cout << "kill\t = " << killString.toStdString() << std::endl;
        if(kill) {
            std::cout << "k_Num\t = " << killNum << std::endl;
            std::cout << "k_Number\t = " << killNumber << std::endl;
            std::cout << "k_Name\t = " << ChessTable::Chess_Int2Qstr_simple[killNum].toStdString() << std::endl;
        }
    }
}
