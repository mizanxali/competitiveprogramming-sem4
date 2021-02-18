//Q2
//MIZANALI PANJWANI 19BCG10070
#include<iostream>
using namespace std;

int mul(int n) 
{
	if(n%10==0)
		return 0;
	else if (n<10)
		return n;
	return (n%10*(mul(n/10)));
}

int main() 
{ 
    int n;
    cin>>n;
    cout<<mul(n); 
    return 0;
}
