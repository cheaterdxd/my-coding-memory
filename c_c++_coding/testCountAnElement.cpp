#include<iostream>
#include<algorithm>
#include<array>
#include<iterator>
using namespace std;
int main()
{
	int arr[] = { 1,2,3,4,5,1,1,2,45,3,12};
	int freq=count(arr,arr+sizeof(arr)/sizeof(arr[0]),1);
	cout<<freq;
}
