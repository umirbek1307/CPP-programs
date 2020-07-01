#include<iostream>
using namespace std;
int main () 
{
    int dtu;
    for ( dtu = 1; dtu <= 20; dtu ++  )
    {
           if ( dtu==10){
        continue;
           }
    
        cout << dtu << " You are still good. " << endl;
    }
    return 0 ;    
}