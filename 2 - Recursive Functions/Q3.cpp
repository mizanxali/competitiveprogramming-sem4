//Q3
//MIZANALI PANJWANI 19BCG10070
#include<iostream>
using namespace std;

bool isPrime(int n) 
{
	static int i=n/2;
	if(i==1)
		return true;
    else if(n%i==0)
        return false; 
    else
    {
    	i--;
    	isPrime(n);
	}
}
 
int main() 
{ 
    int n;
	cin>>n;
    if (isPrime(n)) 
        cout<<"It is a prime number"; 
    else
        cout<<"It is not a prime number"; 
  
    return 0; 
} 
