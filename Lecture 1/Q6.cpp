//Q6
//MIZANALI PANJWANI 19BCG10070
#include<iostream>
using namespace std;

int binomialCoeff(int n, int k) 
{ 
	int res = 1; 
	if (k>n-k){
		k=n-k;
	}
	for (int i=0; i<k; i++) 
	{ 
		res *= (n-i); 
		res /= (i+1); 
	}
	return res; 
} 

// Driver program 
int main() 
{ 
	for(int i=0; i<7; i++) 
	{
		for (int j=0; j<=i; j++)
		{
			cout<<binomialCoeff(i, j)<<" ";
		}
		cout<<endl;
	} 
	return 0; 
} 

