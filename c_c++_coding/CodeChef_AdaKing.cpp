#include<iostream>
using namespace std;
int main()
{
	int kMov;
	cin>>kMov;
	int numOfRow = kMov/8 - (kMov%8?0:1);
	cout<<numOfRow;
}

