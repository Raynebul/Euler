#include <iostream>
#include "Euler.h"

using namespace std;

int main()
{
   setlocale(LC_CTYPE, "Russian");
   int j;
   Euler X;
   cout << "0 - шаг h = 0.1" << endl;
   cout << "1 - шаг h = 0.05" << endl;
   cout << "2 - шаг h = 0.025" << endl;
   cin >> j;

   switch (j)
   {
   case 0:
   {
      X.EulerValues(0.1);
      break;
   }
   case 1:
   {
      X.EulerValues(0.05);
      break;
   }
   case 2:
   {
      X.EulerValues(0.025);
      break;
   }
   default:
   {
      return 0;
   }
   }
   cout << 1 / X.h + 1 << endl;

   cout << "0 - 1 сетка" << endl;
   cout << "1 - 2 сетка" << endl;
   cout << "2 - 3 сетка" << endl;
   cin >> j;

   switch (j)
   {
   case 0:
   {
      X.FindY_1();
      break;
   }
   case 1:
   {
      X.FindY_2();
      break;
   }
   case 2:
   {
      X.FindY_3();
      break;
   }
   default:
   {
      return 0;
   }
   }
   cout << endl;
   for (int i = 0; i < 1 / X.h + 1; i++)
   {
      cout << X.y[i] << endl;
   }
   cout << endl;
   for (int i = 0; i < 1 / X.h + 1; i++)
   {
      cout << X.yDerivative[i] << endl;
   }
   return 0;
}