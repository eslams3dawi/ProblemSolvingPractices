#include <iostream>
#include <string>
using namespace std;

void PrintDigits(int number)
{
    //base condition
    if(number < 10)//1
    {
        cout << number << " ";
        return;
    }

    PrintDigits(number/10);
    cout << number % 10 << " ";
}

int main() 
{
    int testCases;  
    cin >> testCases;

    while(testCases--)
    {
        int number;
        cin >> number;

        if(number == 0)
            cout << number;
        else   
            PrintDigits(number);
        cout << endl;
    }

    return 0;
}