#include<bits/stdc++.h>
using namespace std;

  
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int N=g.size(); //N=3
        int M=s.size(); //M=2
       sort(g.begin(),g.end());
       sort(s.begin(),s.end());
       int is=0, ig=0;

       while(ig<N && is<M)
       {
           if(s[is]>=g[ig])
           {
               ig++;
           }
           is++;
       }
       return ig;
    }

//g={1,2,3} s={1,1} N=3,M=2