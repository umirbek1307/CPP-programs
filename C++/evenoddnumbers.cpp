#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout<< "Enter the numbers:";
    cin>> num1;
    if (num1 % 2 == 0 ) {
        cout<< num1 << " is even";
    }
    
    else
    {
        cout<< num1 <<" is odd";
    }
   
    

    return 0;
}