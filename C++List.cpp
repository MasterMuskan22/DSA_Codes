//basically a doubly linked list
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    l.push_front(5);
    l.push_back(8);
    l.push_front(7);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
}