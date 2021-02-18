//Q7
//MIZANALI PANJWANI 19BCG10070
#include<iostream>
using namespace std;

int main()
{
	int i,j;
    for(i=4; i>1; i--)
    {
        for(j=4;j>=1;j--)
            if(j>i) 
				cout<<j<<" ";
            else 
				cout<<i<<" ";
        for(j=2;j<=4;j++)
            if(j>i) 
				cout<<j<<" ";
            else 
				cout<<i<<" ";
        cout<<endl;
    }    
    for(i=1; i<=4; i++)
    {
        for(j=4;j>=1;j--)
            if(j>i) 
				cout<<j<<" ";
            else 
				cout<<i<<" ";
        for(j=2;j<=4;j++)
            if(j>i) 
				cout<<j<<" ";
            else 
				cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
