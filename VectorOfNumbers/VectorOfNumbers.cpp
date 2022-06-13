#include <iostream>
#include <vector>

int main()
{
  std::vector<int> numbers = {4, 7, 2, 9, 11, 3, 2};
  int evenSum = 0;
  int oddProduct = 1;
  for (int i = 0; i < numbers.size(); i++)
  {
    if (numbers[i] % 2 == 0)
    {
      evenSum += numbers[i];
    }
    else
    {
      oddProduct *= numbers[i];
    }
  }
  std::cout << "Sum of even numbers is " << evenSum << "\n";
  std::cout << "Product of odd numbers is " << oddProduct << "\n";
}
