#include <iostream>
#include <ios>
#include <limits>
using namespace std;

int main()
{
  int num1;
  int num2;
  cout << "Hello, welcome to our simple multiplication calculator!\n";

  while (true)
  {
    cout << "Please enter your first integer to be multiplied:\n";
    cin >> num1;
    if (cin.fail())
    {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "You did not enter an integer!\n";
    }
    else
    {
      break;
    }
  }

  while (true)
  {
    cout << "Please enter your second integer to be multiplied:\n";
    cin >> num2;
    if (cin.fail())
    {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "You did not enter an integer!\n";
    }
    else
    {
      break;
    }
  }

  cout << num1 << " multiplied by " << num2 << " equals " << num1 * num2 << "!\n";
}
