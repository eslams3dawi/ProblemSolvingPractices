#include <iostream>
using namespace std;

int FindMax(int numbers[], int arraySize, int maxNumber) //1 -3 5
{

    if(arraySize <= 0)
        return maxNumber;

    if(numbers[arraySize-1] >= maxNumber)
    {
        maxNumber = numbers[arraySize-1];
    }
    return FindMax(numbers, arraySize-1, maxNumber);
}

int main() 
{
    int arraySize;
    cin >> arraySize;

    int* numbers = new int[arraySize];
    for(int i = 0; i < arraySize; i++)
        cin >> numbers[i];

    int maxNumber = numbers[0];
    int result = FindMax(numbers, arraySize, maxNumber);
    cout << result;
    return 0;
}