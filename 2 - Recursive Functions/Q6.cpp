//Q6
//MIZANALI PANJWANI 19BCG10070
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int binary (int dec_num)
{
	if(dec_num==0)
		return 0;
	return (dec_num%2+10*binary(dec_num/2));
}
 
int main() 
{ 
    int n;
    cin>>n;
    cout<<binary(n);
} 
