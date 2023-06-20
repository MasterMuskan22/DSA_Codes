#include<iostream>
#include<queue>
using namespace std;

int main(){
    //maximum priority queue
    priority_queue<int> maxm;
    maxm.push(3);
    maxm.push(8);
    maxm.push(5);
    maxm.push(10);
    cout<<"Maxm is empty or not? : "<<maxm.empty()<<endl;
    int m=maxm.size();
    for(int i=0;i<m;i++){
        cout<<maxm.top()<<" ";
        maxm.pop();
    }
    cout<<endl;
    //minimum priority queue
    priority_queue<int,vector<int>,greater<int>>mini;
    mini.push(7);
    mini.push(1);
    mini.push(4);
    mini.push(3);
    int n=mini.size();
    for(int i=0;i<n;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout<<"Mini is empty or not? : "<<mini.empty()<<endl;
}