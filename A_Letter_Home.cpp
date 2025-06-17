#include<bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    cin>>cases;
    while(cases--){
        int n,p,Min,Max,step=0;
        cin>>n>>p;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        Min=arr[0];
        Max=arr[n-1];
        step=min(abs(p-Min),abs(p-Max))+(Max-Min);
        cout<<step<<endl;
    }
}
