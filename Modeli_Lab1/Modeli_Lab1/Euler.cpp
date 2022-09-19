#include "Euler.h"

void Euler::EulerValues(float H)
{
   h = H;
   t = 0;
   y.resize(1/h + 1);
   yDerivative.resize(1/h + 1);
   y[0] = 1;
   yDerivative[0] = 0;
}

void Euler::FindY_1()
{
   for (int i = 1; i < 1/h+1; i++)
   {
      //t += h;
      y[i] = y[i - 1] + h * (2 * t * y[i - 1]);
      t += h;
      yDerivative[i] = 2 * t * y[i];

   }
}

void Euler::FindY_2()
{
   for (int i = 1; i < 1 / h + 1; i++)
   {
      //t += h;
      y[i] = y[i - 1] + h / 2 * (2 * t * y[i - 1] - 2 * (t + h) * (y[i - 1] + h * (2 * t * y[i - 1])));
      t += h;
      yDerivative[i] = 2 * t * y[i];

   }
}

void Euler::FindY_3()
{
   for (int i = 1; i < 1 / h + 1; i++)
   {
      //t += h;
      y[i] = y[i - 1] + h * (2 * (t+h/2) * (y[i - 1]+ h/2* h * (2 * t * y[i - 1])));
      t += h;
      yDerivative[i] = 2 * t * y[i];

   }
}