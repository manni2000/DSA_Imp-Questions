#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5, m = 6, source = 1;
    vector<pair<int, int>> g[n + 1]; // assuming 1 based indexing of graph
    // Constructing the graph
    g[1].push_back({2, 2});
    g[1].push_back({4, 1});
    g[2].push_back({1, 2});
    g[2].push_back({5, 5});
    g[2].push_back({3, 4});
    g[3].push_back({2, 4});
    g[3].push_back({4, 3});
    g[3].push_back({5, 1});
    g[4].push_back({1, 1});
    g[4].push_back({3, 3});
    g[5].push_back({2, 5});
    g[5].push_back({3, 1});

    // dijstra algo
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // Min heap
    vector<int> disto(n + 1, INT_MAX);
    disto[source] = 0;
    pq.push(make_pair(0, source)); // pq = {dist,source}
    while (!pq.empty())
    {
        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop();

        for (auto it = g[prev].begin(); it != g[prev].end(); it++)
        {
            int next = it->first;
            int nextdist = it->second;

            if (disto[next] > disto[prev] + nextdist)
            {
                disto[next] = disto[prev] + nextdist;
                pq.push(make_pair(disto[next], next));
            }
        }
    }
    cout << "The distances from source " << source << " are : \n";
    for (int i = 1; i <= n; i++)
        cout << disto[i] << " ";
    cout << "\n";
    return 0;
}
