#include<bits/stdc++.h>
using namespace std;

//GFG Solution
class Solution {
    private:
     void dfs(int node, vector<int> adjls[], int vis[]){
         vis[node]=1;
         
         for(auto it: adjls[node]){
             if(!vis[it]){
                 dfs(it, adjls, vis);
             }
         }
     }
     
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<int> adjls[V];
        
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]==1 && i!=j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        int vis[V]={0};
        int cnt=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                cnt++;
                dfs(i, adjls, vis);
            }
        }
        return cnt;
    }
};// Time complexity- O(n2);


 // Leetcode Solution
class Solution {
    int n;
    void dfs(int i, vector<vector<int>>& isConnected, vector<int> &vis){
        vis[i] = 1;
        
        for(int j = 0; j<n; j++){
            if(isConnected[i][j] == 1 && vis[j] == 0)
                dfs(j, isConnected, vis);
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        n = isConnected.size();
        
        int ans = 0;
        vector<int> vis(n, 0);
        for(int i = 0; i<n; i++){
            if(vis[i] == 0){
                dfs(i, isConnected, vis);
                ans++;
            }
        }
        
        return ans;
    }
}; // T.C- O(n)
