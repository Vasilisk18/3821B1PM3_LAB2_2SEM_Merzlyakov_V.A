#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
  setlocale(LC_ALL, "rus");

  Complex a(10,5);
  Complex b = a;
  Complex c;
  
  cout << "������� 1 ����������� ����� � ���� Re Im: ";
  cin >> c;
  
  //���������� �������
  cout << "a + b = " << a + b;
  cout << "a - b = " << a - b;
  cout << "a * b = " << a * b;
  cout << "a / b = " << a / b;

  if (a == c)
  {
    cout << "a = c" << endl;
  }
  //�������������� �������
  cout << "������������� �������: " <<a.IntPow(2);
  cout << "������������� �������: " <<a.IntPow(-2);
  a.DrobPow(10,5).PrintTrigonomForm(); cout << ": ������� ������� � ������������������ ����� " << endl;
  
  return 0;
}