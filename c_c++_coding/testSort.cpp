#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[] = {26,75,2,53,1,4};
	sort(arr, arr+sizeof(arr)/sizeof(arr[0]));
	for_each(arr,arr+sizeof(arr)/sizeof(arr[0]),[](int i){
		cout<<i<<" ";
	});
	for(auto& it: arr)
	{
		cout<<it<<" ";
	}
	return 0;
}
