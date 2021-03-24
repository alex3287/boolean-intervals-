//
// Created by Александр Мангазеев on 25.03.2021.
//

#include "BBV.h"

BBV::BBV(const std::string interval) {
    std::string s_dnc{""}, s_vec{""};
    for (auto item: interval){
        if (item != '1')
            s_vec +="0";
        else {
            s_vec +="1";
        }
        if (item != '-')
            s_dnc +="0";
        else {
            s_dnc +="1";
        }
    }
    this->interval.dnc = BinToDec(s_dnc);
    this->interval.vec = BinToDec(s_vec);
}


int BBV::BinToDec(std::string s) {
//    Перевод из вектора строки в десятичное число
    int k = 1;
    int res = 0;
    for (int i=s.size()-1; i>-1; i--) {
        if (s[i] == '1')
            res += k;
        k*=2;
    }
    return res;
}

void BBV::getInterval() {
    std::cout<<"dnc -> "<<interval.dnc<<"\nvec -> "<<interval.vec<<std::endl;
}

bool BBV::IsEqual(BBV &obj) {
// Проверка на равенство компактно, можно записать так
    if ((this->interval.dnc == obj.interval.dnc) && (this->interval.vec == obj.interval.vec))
        return true;
    return false;
}
