//
// Created by Александр Мангазеев on 25.03.2021.
//

#ifndef BOOLEAN_INTERVALS_BBV_H
#define BOOLEAN_INTERVALS_BBV_H

#include <iostream>

struct Interval
{
    int vec;
    int dnc;
} ;

class BBV {
public:
    BBV(const std::string interval);
    void getInterval();
    bool IsEqual(BBV &obj);
private:
    Interval interval;
    int BinToDec(std::string s);
};


#endif //BOOLEAN_INTERVALS_BBV_H
