#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_front(4);
    d.push_front(7);
    d.push_back(3);
    d.push_front(8);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<d.at(2)<<endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    cout<<d.size()<<endl;
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    d.erase(d.begin(),d.begin()+1);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<d.empty();
    deque<int> hii(d);
    for(int i:hii){
        cout<<i<<" ";
    }
    cout<<endl;
}