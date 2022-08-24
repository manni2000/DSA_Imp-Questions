
// Problem Statement: 
// Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix

#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>&mat){
    int r=mat.size();
    int c=mat[0].size();
    bool row=false;
    bool col=false;
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            if(i==0&&mat[i][j]==0){
                row=true;
            }
            if(j==0&&mat[i][j]==0){
                col=true;
            }
            if(mat[i][j]==0){
                mat[0][j]=0;
                mat[i][0]=0;
            }
        }
    }
    for(int i=1;i<r;++i){
        for(int j=1;j<c;++j){
            if(mat[0][j]==0||mat[i][0]==0){
                mat[i][j]=0;
            }
        }
    }
    if(row==true){
                for(int i=0;i<c;++i){
                    mat[0][i]=0;
                }
            }
    if(col==true){
            for(int i=0;i<r;++i){
                    mat[i][0]=0;
                }
            }
}
int main(){
    int row,col;
    cin>>row>>col;
    vector<vector<int>>ans(row,vector<int>(col));
    for(int i=0;i<row;++i){
        for(int j=0;j<col;++j){
            cin>>ans[i][j];
        }
    }
    solve(ans);
    for(int i=0;i<row;++i){
        for(int j=0;j<col;++j){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}