#include <iostream>
using namespace std;

void ILoveRecursion(int times)
{
    if(times == 0)
        return;
    
        ILoveRecursion(times-1);
        cout << "I Love Recursion" << endl;
        
}

int main() 
{
    int times;
    cin >> times;
    ILoveRecursion(times);

    return 0;
}