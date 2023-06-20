#include<bits/stdc++.h>
using namespace std;

class DisJointSet{
    vector<int> rank;
    vector<int> parent;
    vector<int> size;
public:
    DisJointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
            size[i]=i;
        }
    }
    int findUltimateParent(int node){
        if(node==parent[node]) return node;
        return parent[node]=findUltimateParent(parent[node]);
    }
    void unionByRank(int node1,int node2){
        int ultParentNode1=findUltimateParent(node1);
        int ultParentNode2=findUltimateParent(node2);
        if(ultParentNode1==ultParentNode2) return ;
        if(rank[ultParentNode1]>rank[ultParentNode2]){
            parent[ultParentNode2]=ultParentNode1;
        }
        else if(rank[ultParentNode1]<rank[ultParentNode2]){
            parent[ultParentNode1]=ultParentNode2;
        }
        else{
            parent[ultParentNode1]=ultParentNode2;
            rank[ultParentNode1]++;
        }
    }
    void unionBySize(int node1,int node2){
        int ultParentNode1=findUltimateParent(node1);
        int ultParentNode2=findUltimateParent(node2);
        if(ultParentNode1==ultParentNode2) return ;
        if(size[ultParentNode1]>size[ultParentNode2]){
            parent[ultParentNode2]=ultParentNode1;
            size[ultParentNode1]+=size[ultParentNode2];
        }
        else{
            parent[ultParentNode1]=ultParentNode2;
            size[ultParentNode2]+=size[ultParentNode1];
        }
    }
};