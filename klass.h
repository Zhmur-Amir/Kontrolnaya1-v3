#pragma once
#define LENGTH 3
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "ComplexNum.h"
#include <iostream>
using namespace std;


class CComplexVector
{
    CComplexNum a[LENGTH];
public:
    CComplexVector(){for(int i=0; i<LENGTH; i++){CComplexNum m; a[i]=m;}}
    CComplexVector(const CComplexNum *b){for(int i=0; i<LENGTH; i++){a[i]=b[i];}}
    CComplexVector Conjugate();
    CComplexVector &operator=(const CComplexVector &b){for(int i=0; i<LENGTH; i++){a[i]=b.a[i];} return *this;}
    CComplexVector operator+(const CComplexVector &b);
    CComplexVector operator-(const CComplexVector &b);
    CComplexNum operator*(CComplexVector &b);
    void print();
};

CComplexVector FuncVvoda(CComplexNum* arr, const char t[256]);
ostream &operator<<(ostream &cout,  CComplexVector &s);
ostream &operator<<(ostream &cout,  CComplexNum &s);
CComplexNum Machinator3000( CComplexVector vect1,  CComplexVector vect2);
void Autotest(void);








