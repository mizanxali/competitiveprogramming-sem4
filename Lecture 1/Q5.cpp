//Q5
//MIZANALI PANJWANI 19BCG10070
#include<iostream>
using namespace std;

int main()
{
  int i,j;
  for (i=1;i<=5;i++)
  {
  	for (j=9-i;j>=1;j--)
	  	cout<<"* ";
  	for (j=1;j<=i;j++)
       	cout<<i<<" * ";
	for (j=i;j<=7;j++)
	  	cout<<"* ";
  	cout<<endl;
  }
  return 0;
}

