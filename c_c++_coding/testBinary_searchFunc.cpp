#include<iostream>
#include<algorithm>
#include<array>
#include<iterator>
using namespace std;
int main()
{
	int arr[] = { 1,2,3,4,5,1,1,2,,45,3,12};
	auto first = begin(arr);
	auto last = end(arr);
	if(binary_search(arr,arr+5,1))
	cout<<"found";
	else cout<<"not found";
}
