#include<bits/stdc++.h>
using namespace std;
int getmax(vector<int> arr){
    stack<int> st;
    int n=arr.size();
    int i=0;
    int ans=0;
    arr.push_back(0);
    while(i<n){
        while(!st.empty() && arr[st.top()]>arr[i] ){
            int t=st.top();
            int h=arr[t];
            st.pop();
            if(st.empty()){
                ans= max(ans,i*h );
            }
            else{
                int len=i-st.top()-1;
                ans=max(ans, h*len);
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}
int32_t main(){
    vector<int> arr={2,1,5,6,2,3};
    cout<<getmax(arr);
    return 0;
}