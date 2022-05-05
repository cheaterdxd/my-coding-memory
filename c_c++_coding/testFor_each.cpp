#include<iostream>
#include<algorithm>
#include<array>
#include<iterator>
using namespace std;
void addOne(int a)
{
	cout<<++a<<" ";
}

int main()
{
	int arr[] = {1,2,3,4,45,5,6,5};
	void (*func)(int){
		addOne
	};
	for_each(arr,arr+sizeof(arr)/sizeof(arr[0]),func);
}
