#include <iostream>
using namespace std;

int main()
{
  // Add your code below
  string thing;
  double earthWeight;
  std::cout << "Please enter the name of your object:\n";
  std::cin >> thing;
  std::cout << "Please enter the weight of this object in kg on Earth:\n";
  std::cin >> earthWeight;

  std::cout << thing << " weighs " << earthWeight * (3.72 / 9.81) << "kg on Mars!\n";
}