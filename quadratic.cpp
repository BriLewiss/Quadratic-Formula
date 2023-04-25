#include <iostream>
#include <cmath>

int main() {
  double a;
  double b;
  double c;
  
  //user input for variable a
  std::cout << "Enter a: ";
  std::cin >> a;

//user input for variable b
  std::cout << "Enter b: ";
  std::cin >> b;

//user input for variable c
  std::cout << "Enter c: ";
  std::cin >> c;

  double root1 = (-b + std::sqrt(b*b - 4 * a * c)) / (2*a);
  double root2 = (-b - std::sqrt(b*b - 4 * a * c)) / (2*a);

  std::cout << "Root 1 is " << root1 << "\nRoot 2 is " << root2;
  
}