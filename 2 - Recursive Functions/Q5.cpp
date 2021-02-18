//Q5
//MIZANALI PANJWANI 19BCG10070
#include<iostream>
using namespace std;

int log2n(int n) 
{
	if(n<=1)
		return 0;
	return 1 + log2n(n/2);
} 
  
int main() 
{ 
    int n;
	cin>>n; 
    cout<<log2n(n);
    return 0; 
}
