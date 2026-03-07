#include <iostream>
using namespace std;

int Series(int number, int count)
{
    if(number == 1)
        return count;
    
    if(number % 2 == 0)
        return Series(number / 2, count+1);
    else
        return Series(3 * number + 1, count+1);
}

int main() 
{
    int number, count = 1;
    cin >> number;
    cout << Series(number, count);

    return 0;
}