#include<iostream>

using namespace std;

int winner(int n,int k)
{
	if(n==1)
	return 0;
	else
	return (winner(n-1,k)+k)%n;
}

int main()
{
	int n,k;
	cin>>n>>k;
	cout<<winner(n,k);
}
