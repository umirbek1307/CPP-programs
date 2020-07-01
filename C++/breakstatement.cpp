#include<iostream>
using namespace std;
int main() 
{
int counter;

    for(counter = 1; counter<=7; counter ++)
    {
        cout << counter << " Baap " << endl ;
        if( counter== 5)
        break;
    }
return 0;
}