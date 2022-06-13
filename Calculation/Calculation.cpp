#include <iostream>

int main()
{
  int num1;
  int num2;
  std::cout << "Hello, welcome to our simple calculator!\n";
  std::cout << "Please enter two integers to be multiplied:\n";
  std::cin >> num1;
  std::cin >> num2;
  std::cout << num1 << " multiplied by " << num2 << " equals " << num1 * num2 << "!\n";
}
