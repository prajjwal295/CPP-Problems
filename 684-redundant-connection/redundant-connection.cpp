class Solution {
private:
        vector<int>parent;
        vector<int> rank;
public:
    int findUP(int node)
    {
        if(node == parent[node])
        return node;

        return findUP(parent[node]);
    }
    bool UnionByRank(int u,int v)
    {
        int ulp_u = findUP(u);
        int ulp_v = findUP(v);

        if(ulp_u == ulp_v) return true;

        if(rank[ulp_v] < rank[ulp_u])
        {
            parent[ulp_v] = ulp_u; 
        }
        else if(rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        }
        else{
            parent[ulp_u] = ulp_v;
            rank[ulp_u]++;
        }

        return false;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        
        int n = edges.size();

        rank.resize(n+1,0);
        parent.resize(n+1);

        for(int i=0;i<=n;i++)
            parent[i] = i;

        vector<int>ans;

        for(auto it:edges)
        {
            int u = it[0];
            int v = it[1];

            if(UnionByRank(u,v))
            {
                ans.push_back(u);
                ans.push_back(v);

                return ans;
            }
        }

        return ans;
        
    }
};