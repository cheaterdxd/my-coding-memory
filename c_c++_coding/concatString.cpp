#include <iostream>
using namespace std;

int main() {
    string str,aux,aux_new="",temp;
    cin >> str >> aux;
    int a[26]={0};
    int b[26]={0};
    int len1=str.length();
    int len2=aux.length();
    for(int i=0;i<len1;i++){
        a[str[i]-65]++;
    }
    for(int i=0;i<len2;i++){
        b[aux[i]-65]++;
    }
    for(int i=0;i<26;i++){
        if(a[i]!=0 && b[i]==0){
            cout << -1 << endl;
            return 0;
        }
    }
    for(int i=0;i<len2;i++){
        if(a[aux[i]-65]==0){
            
        }
        else{
            aux_new+=aux[i];
        }
    }
    int cnt=0;
    len2=aux_new.length();
    int i=0;
    while(i!=len1){
        for(int j=0;j<len2 && i<len1;j++){
            if(str[i]==aux_new[j]){
                i++;
            }
        }
        cnt++;
    }
    cout << cnt << endl;
	// your code goes here
	return 0;
}

