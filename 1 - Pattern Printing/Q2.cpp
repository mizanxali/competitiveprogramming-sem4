//Q2
//MIZANALI PANJWANI 19BCG10070
#include<iostream>
using namespace std;

int print(int n) {
	cout<<"* ";
	for(int j=1;j<=n;j++)
  		cout<<j<<" ";
	for(int j=n-1;j>=1;j--)
  		cout<<j<<" ";
	cout<<"* "<<endl;
}

int main()
{
	cout<<"* "<<endl;
  	for(int i=1;i<=3;i++)
  	{
  		print(i);
    }
    for(int i=2;i>=1;i--)
  	{
  		print(i);
    }
    cout<<"* "<<endl;
	return 0;
}
