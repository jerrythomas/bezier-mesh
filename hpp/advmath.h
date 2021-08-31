#ifndef __ADVMATH_H
#define __ADVMATH_H

#include <Math.h>
#include <Values.h>

#define csBlue     1
#define csGreen    2
#define csCyan     3
#define csRed      4
#define csMagenta  5
#define csYellow   6
#define csGray     7

#define Ln10            2.30358509299405E+000
#define OneOverLn10     0.43429448190325E+000
#define Pi              3.1415927
#define PiOver180       1.74532925199433E-002
#define PiUnder180      5.72957795130823E+001

#define Cavalier_Alpha  0.7853981633974485E+000
#define Cabinet_Alpha   1.1065387457644051E+000


#define Radians(Theta)  PiOver180*(Theta)
#define Round(x) (int)(x + 0.5)

double fact(int n);
double nCr(int n,int k);
double Bez(int n,float u,int k);

#endif

