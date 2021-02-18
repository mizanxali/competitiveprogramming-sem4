//Q4
//MIZANALI PANJWANI 19BCG10070
#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int rev(int n, int temp)
{
	if(n==0)
		return temp;
	return rev(n/10, (temp*10)+(n%10));
}
 
int main() 
{ 
	int num;
	cin>>num;
    int rnum = rev(num, 0);
    if(num==rnum)
    	cout<<"Palindrome";
    else
    	cout<<"Not palindrome";
    return 0; 
} 
