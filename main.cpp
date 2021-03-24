//
// Created by Александр Мангазеев on 18.02.2021.
//

#include <iostream>
#include "BBV.h"
//struct Interval
//{
//    int vec;
//    int dnc;
//};

/*
Наример:
vvv = --011---10
vec = 0001100010
dnc = 1100011100
*/
// 1 -> 1, 2 -> 10, 11, 100, 101, 110


int main(){

    BBV A("--011---10");
    BBV B("--011---10");
    A.getInterval();
    std::cout<<A.IsEqual(B);

    return 0;
}
