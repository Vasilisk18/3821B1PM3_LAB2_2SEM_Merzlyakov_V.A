#pragma once
#include <iostream>

class Complex
{
public:
  Complex();
  Complex(double Re, double Im);
  Complex(const Complex &other);

  double GetIm();
  double GetRe();
  void SetIm(double Im);
  void SetRe(double Re);
    
  Complex operator + (Complex a);
  Complex operator - (Complex a);
  Complex operator * (Complex a);
  Complex operator / (Complex a);
    
  Complex& operator = (const Complex &other);
    
  bool operator == (Complex a);
  
  friend std::ostream& operator << (std::ostream &out, Complex a);
  friend std::istream& operator >> (std::istream &in, Complex &a);
  
  //Доп задания
  
  double Module();
  Complex IntPow(int m);
  Complex DrobPow(int m, int n);
  void PrintTrigonomForm();

protected:
  double Im;
  double Re;
   
};