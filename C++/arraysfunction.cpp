#include<iostream>
using namespace std;
void sum(int [], int);
int main ()
{
    int summa [] ={25,44,98,75,45};
    int length = 5;
    sum (summa, length );
    return 0;
}
void sum(int summa[], int length )
{
    for  (int counter=0; counter < length; counter++) 
    {
    cout << summa [counter] << endl;
}
}