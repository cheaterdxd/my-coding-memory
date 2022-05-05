#include<algorithm>
#include<iostream>
#include<array>
using namespace std;
bool isEven(int num)
{
	return (num%2);
}
int main()
{
	bool (*func)(int){
		isEven
	};
	array<int,7> ar1 = {8,2,4,4,12,6,80};
	if(any_of(ar1.begin(),ar1.end(),func) )
	{
		cout<<"there is odd number";
	}
	return 0;
}
