//Q1
//MIZANALI PANJWANI 19BCG10070
#include<iostream>
using namespace std;

int sum(int n) 
{ 
    if(n<=1) 
        return n; 
    return n+sum(n-1); 
} 

int main() 
{ 
    int n=5; 
    cout<<sum(n); 
    return 0; 
}
