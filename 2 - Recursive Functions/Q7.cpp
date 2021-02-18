//Q7
//MIZANALI PANJWANI 19BCG10070
#include<iostream>
using namespace std;

int prod(int x, int y) 
{ 
    if(x!=0 && y!=0)
        return (x+prod(x, y-1));
    return 0;
} 

int main() 
{ 
    int x,y;
    cin>>x>>y;
    cout<<prod(x, y); 
    return 0; 
} 
