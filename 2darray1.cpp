#include<bits/stdc++.h>  //spiral printing
using namespace std;
int32_t main(){
    int r,c,i,j,arr[100][100];
    cout<<"enter number of rows:";
    cin>>r;
    cout<<"enter number of colums:";
    cin>>c;
    cout<<"enter elements of array:"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    int row_start=0, row_end=r-1, column_start=0, column_end=c-1;
    while((row_start <=row_end) && (column_start<= column_end)){
        //for row_start
        for(i=column_start;i<=column_end;i++){
            cout<<arr[row_start][i]<<" ";
        }
        row_start++;
        
        //for column_end
        for(j=row_start;j<=row_end;j++){
            cout<<arr[j][column_end]<<" ";
        }
        column_end--;
        
        //for row_end
        for(i=column_end;i>=column_start;i--){
            cout<<arr[row_end][i]<<" ";
        }
        row_end--;
        
        //for column_start
        for(j=row_end;j>=row_start;j--){
            cout<<arr[j][column_start]<<" ";
        }
        column_start++;
        
    }
    return 0;
}