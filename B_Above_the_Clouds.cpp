#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    while(cases--){
        int n;
        cin>>n;
        string Case;
        cin>>Case;
        map<char,int>freq;
        for(char ch:Case){
            freq[ch]++;
        }

        int sign = 0;
        for(int k=1;k<=n-2;k++){
            if(freq[Case[k]]>=2){
                sign=1;
                break;
            }
        }

        if(sign){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
