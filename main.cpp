//
// Created by Александр Мангазеев on 18.02.2021.
//

#include <iostream>

struct Interval
{
    int vec;
    int dnc;
};

/*
Наример:
vvv = --011---10
vec = 0001100010
dnc = 1100011100
*/

bool IsEqual(struct Interval u, struct Interval v);
Interval* CreateBoolVector(std::string s);



int main(){
    struct Interval I, I2;
    I.vec = 98;
    I.dnc = 412;
    I2.vec = 98;
    I2.dnc = 412;
    std::cout<<CreateBoolVector("--011---10")->vec<<"  "<<CreateBoolVector("--011---10")->dnc<<std::endl;
    return 0;
}

int BinToDec(std::string s){
    int k = 1;
    int res = 0;
    for (int i=s.size()-1; i>-1; i--) {
        if (s[i] == '1')
            res += k;
        k*=2;
    }
    return res;
}

bool IsEqual(struct Interval u, struct Interval v) {
    // Проверка на равенство компактно, можно записать так
    if ((u.dnc == v.dnc) && (u.vec == v.vec))
        return true;
    return false;
}

Interval * CreateBoolVector(std::string s){
    Interval I;
    std::string s_dnc{""}, s_vec{""};
    for (auto item: s){
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
    std::cout<<s_vec<<" "<<s_dnc<<std::endl;
    I.dnc = BinToDec(s_dnc);
    I.vec = BinToDec(s_vec);
    return &I;
}