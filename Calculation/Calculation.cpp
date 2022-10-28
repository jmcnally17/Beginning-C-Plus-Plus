#include <iostream>
#include <limits>

int main()
{
  int num1;
  int num2;
  std::cout << "Hello, welcome to our simple multiplication calculator!\n";

  std::cout << "Please enter your first integer to be multiplied:\n";
  std::cin >> num1;
  while (std::cin.fail())
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "You did not enter an integer!\n";
    std::cout << "Please enter your first integer to be multiplied:\n";
    std::cin >> num1;
  }

  std::cout << "Please enter your second integer to be multiplied:\n";
  std::cin >> num2;
  while (std::cin.fail())
  {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "You did not enter an integer!\n";
    std::cout << "Please enter your second integer to be multiplied:\n";
    std::cin >> num2;
  }

  std::cout << num1 << " multiplied by " << num2 << " equals " << num1 * num2 << "!\n";
}
