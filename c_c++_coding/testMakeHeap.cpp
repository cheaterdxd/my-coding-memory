#include<iostream>
#include<algorithm>
#include<array>
#include<iterator>
using namespace std;
int main()
{
	int arr[] = {1,32,74,2,7,8,21,456};
	make_heap(arr,arr+sizeof(arr)/sizeof(arr[0]));
	for_each(arr,arr+sizeof(arr)/sizeof(arr[0]),[](int x){
		cout<<x<<" ";
	});
	cout<<endl;
	sort_heap(arr,arr+sizeof(arr)/sizeof(arr[0]));
	for_each(arr,arr+sizeof(arr)/sizeof(arr[0]),[](int x){
		cout<<x<<" ";
	});
}
