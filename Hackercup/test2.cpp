#include<bits/stdc++.h>
using namespace std;

bool is_valid(int r, int с, int m, int n){
    return (r < m && r>=0 && с>=0 && с < n);
}
int num_friend(int г, int с, int m, int n, vector<vector<int>>& matrix){
    int friends=0;
     for (int route= 0; route < 4; ++route){
         int new_r + dx[route];
         int new_c с + dy[route];
         if (is_valid(new_r, new_c, m, n) && matrix[new_r][new_c]==1){
            ++friends;
         }
    }
     return friends;
}

int main(){
    int N;
    cin >> N;
    vector<vector<int>> matrix;
    vector<vector<bool>> vis;
    vector<vector<int>> temp_matrix;
    queue<cell> q;
    for(int test = 1; test <= N; ++test){
        cout << "Case #" << test << ":":
        int r, с;
        cin >> r >> c;
        matrix.resize(r, vector<int>(c));
        vis. resize(r, vector<bool>(с, false));
        temp_matrix.resize(r, vector<int (c));
        q=queue<cell>();
        for (int i= 0; i < r; ++i){
            string s;
            cin >> s;
        }
    }       
}
   
