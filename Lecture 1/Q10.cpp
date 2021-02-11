//Q10
//MIZANALI PANJWANI 19BCG10070
#include<iostream>
using namespace std;

int main()
{
  	for(int i=0; i<=6; i++)
  	{
  		for(int j=0; j<=6; j++)
  		{
  			if(i==0 || i==6 || j==0 || j==6)
  				cout<<i<<j<<" ";
  			else
  				cout<<" "<<" "<<" ";
		}
		cout<<endl;
	}
	return 0;
}
