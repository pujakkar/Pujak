#include<bits/stdc++.h>                                             //all possible words from corresponding phone digits
using namespace std;
void combo(string s, string arr[],string ans){                       //the inputed string will be string of numbers
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    string code=arr[ch-'0'];
    for(int i=0;i<code.size();i++){
        combo(ros,arr,ans+code[i]);
    }
}
int32_t main(){
    string s;
    cout<<"enter a strng:";
    cin>>s;
    string arr[100]={"","","abc","def","ghi","jkl","mno","pqr","stu",};
    combo(s,arr,"");
    return 0;
}