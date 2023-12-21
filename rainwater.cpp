#include<bits/stdc++.h>
using namespace std;
int rainwater(vector<int> arr){
    stack<int> st;
    int ans=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]<arr[i]){
            int curr= st.top();
            st.pop();
            if(st.empty()){
                break;
            }
            int len=i-st.top()-1;
            ans+=(min(arr[st.top()],arr[i])-arr[curr])* len;
        }
        st.push(i);
    }
    return ans;
}
int32_t main(){
    vector<int> arr={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<rainwater(arr);
    return 0;
}