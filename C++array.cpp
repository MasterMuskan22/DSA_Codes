#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,4> a={1,4,7,6};
    int size=a.size();
    cout<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<a.at(3)<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    cout<<a.empty()<<endl;
}