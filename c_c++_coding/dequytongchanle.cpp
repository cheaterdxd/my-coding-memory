#include<iostream>
using namespace std;
int tongchanle(int s,int n)
{
	if(n<=0) return s;
	tongchanle(s+n,n-2);
	
}
int main()
{
	int n; cin >> n;
	cout<<tongchanle(0,n);
}

