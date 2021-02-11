//Q4
//MIZANALI PANJWANI 19BCG10070
#include<iostream>
using namespace std;

int print(int n) {
	for (int j=1;j<=10;j++)
	{
	   	if ((n>=j) || (j>10-n))
	 		cout<<" * ";
		else
		    cout<<"   ";	
	}
	cout<<endl;	
}
int main()
{
	// upper half of the pattern
	for (int i=1;i<=5;i++)
	{
		print(i);
	} 
	// lower half of the pattern
    for (int i=5;i>=1;i--)
	{
		print(i);
	}
	return 0;
}
