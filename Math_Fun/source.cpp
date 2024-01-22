#include <iostream>
#include "math.h"
#include "windows.h"

using  std::cout;
using  std::cin;


int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
   int a, b, c;
   cout << "Введите первое число: ";
   cin >> a;
   cout << "\nВведите второе число: ";
   cin >> b;
   cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
   cin >> c;

   switch (c) {
   case 1: cout << a << " плюс " << b << " равно " << math(a, b, c); break;
   case 2: cout << a << " минус " << b << " равно " << math(a, b, c); break;
   case 3: cout << a << " умножить " << b << " равно " << math(a, b, c); break;
   case 4: cout << a << " деление " << b << " равно " << math(a, b, c); break;
   case 5: cout << a << " в степени " << b << " равно " << math(a, b, c); break;
   default: break;
   }
}