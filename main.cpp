#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
  setlocale(LC_ALL, "rus");

  Complex a(10,5);
  Complex b = a;
  Complex c;
  
  cout << "Введите 1 комплексное число в виде Re Im: ";
  cin >> c;
  
  //Перегрузки функций
  cout << "a + b = " << a + b;
  cout << "a - b = " << a - b;
  cout << "a * b = " << a * b;
  cout << "a / b = " << a / b;

  if (a == c)
  {
    cout << "a = c" << endl;
  }
  //Дополнительные задания
  cout << "Положительная степень: " <<a.IntPow(2);
  cout << "Отрицательная степень: " <<a.IntPow(-2);
  a.DrobPow(10,5).PrintTrigonomForm(); cout << ": Дробная степень в тригонометрической форме " << endl;
  
  return 0;
}