#include<bits/stdc++.h>
using namespace std;
vector<int> stock(vector<int> prices){
    vector<int> ans;
    stack<pair<int,int>> st;
    for(auto price: prices){
        int days=1;
        while(!st.empty() && st.top().first<=price){
            days+=st.top().second;
            st.pop();
        }
        ans.push_back(days);
        st.push({price,days});
    }
    return ans;
}
int32_t main(){
    vector<int> prices={100,80,60,70,60,75,85};
    vector<int> res=stock(prices);
    for(auto i:res){
        cout<<i<<" ";
    }
    return 0;
}