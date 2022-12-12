#include<bits/stdc++.h>
using namespace std;

int f(int N, vector<int>&dp)
{
    if(N<=1) return N;

    else if(dp[N]!=-1) return dp[N];

    else return dp[N]= f(N-1,dp)+f(N-2,dp);
}
int main()
{
    int N;
    cin>>N;
    vector<int>dp(N+1,-1);
    cout<<f(N,dp);
}

//Memorization
//TC- o(N)
//SC- o(N)+o(N)

int main()
{
    int N;
    cin>>N;
    int prev2=0;
    int prev=1;
    for(int i=2;i<=N;i++)
    {
        int curi=prev+prev2;
        prev2=prev;
        prev=curi;
    }
    cout<<prev;
}

//optizime above code
//TC-o(N)
//sc-o(N)