#include <iostream>
using namespace std;
void lose(int turn)
{
	if(turn%2==0) cout<<"B"<<endl; // A lose then B win
    else cout<<"A"<<endl; //else 
}
int main() {
	// your code goes here
	int cases; 
	cin>>cases;
	int arr[cases];
	for(int i=0;i<cases;i++)
	{
	    cin>>arr[i];
	}
	int turn = 0; // %2 == 0 is A, %2==1 is B
	while(1)
	{
		int move = 0;
		int find;
		int lastIdex=0;
        for(find=lastIdex;find<(cases/2) && arr[find]==0;find++);
        if(find<(cases/2))
        {
        	lastIdex = find;
            arr[find]--;
            if(2*find<=(cases-1))
            {
                arr[2*find]++;
                move ++;
            }
            if(3*find<=(cases-1))
            {
                arr[3*find]++;
                move ++;
            }
            if(5*find<=(cases-1))
            {
                arr[5*find]++;
                move ++;
            }
            if(move == 0)
            {
                lose(turn);
                break;
            }
            turn++;
        }
        else
        {
        	lose(turn);
			break;	
		} 
	}
	return 0;
}
