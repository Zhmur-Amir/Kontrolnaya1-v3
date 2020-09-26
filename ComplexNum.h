#pragma once
#include "klass.h"


class CComplexNum
{
    double re, im;
public:
    CComplexNum(){re=0; im=0;}
    CComplexNum(double re, double im){this->re=re; this->im=im;}
    double Re()const{return re;}
    double Im()const{return im;}
    CComplexNum operator+(const CComplexNum &b){CComplexNum m(re+b.Re(), im+b.Im()); return m;}
    CComplexNum operator-(const CComplexNum &b){CComplexNum m(re-b.Re(), im-b.Im()); return m;}
    CComplexNum operator*(const CComplexNum &b){CComplexNum m(re*b.Re()-im*b.Im(), re*b.Im()+ im*b.Re()); return m;}
    void print(){if (im>=0){printf("%lg+%lgi", re, im);}else{printf("%lg%lgi", re, im);}}
};
