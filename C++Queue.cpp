#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string>q;
    q.push("Master");
    q.push("Muskan");
    q.push("Khushi");
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
}