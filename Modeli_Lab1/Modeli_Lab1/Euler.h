#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Euler
{
public:
   float h;
   vector<float> y;
   vector<float> yDerivative;
   float t;
   void EulerValues(float H);
   void FindY_1();
   void FindY_2();
   void FindY_3();

};