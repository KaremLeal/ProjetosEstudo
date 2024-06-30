#include <iostream>
using namespace std;

double calculaArea(double base, double altura) {
  double x = base;
  double y = altura;
  double area = x * y;

  

  cout << "A area é: " << area;
}

int main() {
  double base, altura;
  cout << "Digite a base: ";
  scanf("%lf", &base);
  cout << "Digite a altura: ";
  scanf("%lf", &altura);

  calculaArea(base, altura);
}