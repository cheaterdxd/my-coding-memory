#include <iostream>
#include<string>
using namespace std;
int process(string str, int min, int max)
{
    string concat="";
    int countCutter= 0;
	for(int j=0;j<str.length();j++)
	{
	    concat+=str[j];
	    int temp = stoi(concat);
	    if(temp>=min && temp<=max)
	    {
	        continue;
	    }
	    else
	    {
	        if(concat.length() == 1) return -1;
	        countCutter++;
	        concat = "";
	        j--;
	    }
	}
	return countCutter;
}
int main() {
	// your code goes here
	int cases;
	cin>>cases;
	int min[cases];
	int max[cases];
	string str[cases];
	for(int i = 0; i < cases; i++)
	{
		cin.ignore();
	    getline(cin,str[i]);
	    cin>>min[i]>>max[i];
	}
	for(int i = 0; i < cases; i++)
	{
	    cout<<process(str[i],min[i],max[i])<<endl;
	}
	return 0;
}

