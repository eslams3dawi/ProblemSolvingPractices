#include <iostream>
using namespace std;

int Summation(int numbers[], int arraySize)
{
    if(arraySize <= 0)
        return 0;

    return numbers[arraySize - 1] + Summation(numbers, arraySize-1);//1 2 3 → 3
}

int main() 
{
    int arraySize;
    cin >> arraySize;
    
    int* numbers = new int[arraySize];
    for(int i = 0; i < arraySize; i++)
        cin >> numbers[i];

    cout << Summation(numbers, arraySize);

    return 0;
}