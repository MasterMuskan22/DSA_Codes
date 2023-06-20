#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int>s;
    s.insert(7);
    s.insert(6);
    s.insert(1);
    s.insert(1);
    s.insert(9);
    s.insert(7);
    s.insert(9);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"5 is present or not? : "<<s.count(5)<<endl;
    set<int>::iterator itr=s.begin();
    itr++;
    itr++;
    s.erase(itr);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
}