
// Given an integer numRows, return the first numRows of Pascal's triangle.
// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
#include<bits/stdc++.h>
using namespace std;


      vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);

        for (int i = 0; i < numRows; i++) {
            r[i].resize(i + 1);
            r[i][0] = r[i][i] = 1;
  
            for (int j = 1; j < i; j++)
                r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
        }
        return r;
    }

int main(){
    int N;
    cin>>N;
    vector<int> numRows;
    for(int i=0;i<N;i++){
        cin>>numRows[i];
    }
 vector<int>ans;
vector<vector<int>> generate(numRows);
for(auto it:generate){
    for(auto i:it){
        ans.push_back(i);
    }
}
    return 0;
}