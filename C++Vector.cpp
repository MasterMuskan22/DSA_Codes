#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(7);
    v.push_back(6);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    vector<int> a(5,1);
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<a.front()<<endl;
    cout<<v.back()<<endl;
}