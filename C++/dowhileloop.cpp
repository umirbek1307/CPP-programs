#include<iostream>
using namespace std;
int main()
{
    int input;
    do 
    {
      cout<< input << " This will be printed. " << endl;
      cout<< " If you want to print it again then press any key except 1. "<< endl;
      cout<< " If you want to exit print 1. " <<endl; 
      cout<< " Pleaee enter your choice: " ;
      cin>> input; 
    }
    while(input !=1);
    return 0;  
}