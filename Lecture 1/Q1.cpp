//Q1
//MIZANALI PANJWANI 19BCG10070
#include<iostream>
using namespace std;
int main()
{
   for(int i=1; i<=5; i++)
   {
	   	for(int j=1; j<=i; j++)
		{
	   		if(j==1||i==j||i==5)
			{
	   			cout<<j;
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
   }
   return 0;
}
