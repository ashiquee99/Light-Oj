#include <bits/stdc++.h>
using namespace std;
#define SIZE 1000000
#define MX 100000000
vector <int> G[SIZE];
set<int>st;
set<int>::iterator it;
int bicolor[SIZE];
int color1 = 0, color2 = 0;
void BFS(int source)
{
    queue <int> Q;
    Q.push(source);
    bicolor[source] = 1;
    color1++;
    while(Q.size()!=0)
    {
        int u = Q.front();
        Q.pop();
        for(int v = 0; v<G[u].size(); v++)
        {
            int curr = G[u][v];
            if(bicolor[curr] == 0)
            {
                Q.push(curr);
                if(bicolor[u] == 1)
                {
                    bicolor[curr] = 2;
                    color2++;
                }
                else
                {
                    bicolor[curr] = 1;
                    color1++;
                }
            }
        }
    }
}

void Clear()
{
    for(int i=0; i<SIZE; i++) G[i].clear();
     memset(bicolor, 0, sizeof(bicolor));
     st.clear();
}

int main()
{
    int T, u, v, n;
    cin>>T;
    for(int tc = 1; tc<=T; tc++)
    {
        Clear();
        cin>>n;
        memset(bicolor, 0, sizeof(bicolor));
        int mxnode = -124;
        for(int i = 0; i<n; i++)
        {
            cin>>u>>v;
            G[u].push_back(v);
            G[v].push_back(u);
            st.insert(u);
            st.insert(v);
        }
        int res = 0;
        for(it = st.begin(); it!=st.end(); it++)
        {
            if(bicolor[*it] == 0)
            {
               BFS(*it);
               int ans = max(color1, color2);
               res+=ans;
               color1 = 0, color2 = 0;
            }
        }
        cout<<"Case "<<tc<<": "<<res<<endl;
    }

    return 0;
}
