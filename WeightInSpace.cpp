#include <iostream>

int main()
{
  double earthWeight;
  int planet;
  std::cout << "Hello, what is your Earth weight in kg?\n";
  std::cin >> earthWeight;
  std::cout << "What planet would you like to fight on? Please select a number between 1 and 7.\n";
  std::cin >> planet;
  switch (planet)
  {
  case 1:
    std::cout << "Your weight on Mercury is " << earthWeight * 0.38 << "\n";
    break;
  case 2:
    std::cout << "Your weight on Venus is " << earthWeight * 0.91 << "\n";
    break;
  case 3:
    std::cout << "Your weight on Mars is " << earthWeight * 0.38 << "\n";
    break;
  case 4:
    std::cout << "Your weight on Jupiter is " << earthWeight * 2.34 << "\n";
    break;
  case 5:
    std::cout << "Your weight on Saturn is " << earthWeight * 1.06 << "\n";
    break;
  case 6:
    std::cout << "Your weight on Uranus is " << earthWeight * 0.92 << "\n";
    break;
  case 7:
    std::cout << "Your weight on Neptune is " << earthWeight * 1.19 << "\n";
    break;
  default:
    std::cout << "I'm sorry, you have entered an invalid planet\n";
    break;
  }
}