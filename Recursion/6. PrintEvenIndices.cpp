#include <iostream>
#include <string>
using namespace std;

void PrintEvenIndicies(int numbers[], int evenIndex)//12
{
    //base condition
    if(evenIndex < 0)//1
        return;

    cout << numbers[evenIndex] << " ";//2 & 1
    PrintEvenIndicies(numbers, evenIndex-=2);
}


int main() 
{
    int arraySize;  
    cin >> arraySize;

    int* numbers = new int[arraySize];
    for(int i = 0; i < arraySize; i++)
    {
        cin >> numbers[i];
    }

    int lastEven = (arraySize % 2 == 0)? arraySize - 2 : arraySize - 1;
    PrintEvenIndicies(numbers, lastEven);
}