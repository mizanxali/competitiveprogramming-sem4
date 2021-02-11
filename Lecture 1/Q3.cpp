//Q3
//MIZANALI PANJWANI 19BCG10070
#include<iostream>
using namespace std;
 
int main()
{
	int j;
	for (int i=1;i<=5; i++)
	{
		for (j=i;j<5;j++)
		   cout<<"  ";
		int k=i*2-1;
		for (j=i;j<=k;j++)
	       cout<<j<<" ";
	    for (j=k-1;j>=i;j--)
	        cout<<j<<" ";
		cout<<endl;  	
	}   
	return 0;
}

