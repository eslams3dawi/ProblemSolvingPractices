#include <iostream>
using namespace std;

int Power(int number, int power)
{
    if(power <= 0)
        return 1;
    else
        return number * Power(number, power-1);
}

int main() 
{
//     Power 
// 2^3 → 2 * 2 * 2
  cout << Power(2, 3);
  return 0;
}