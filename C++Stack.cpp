#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> name;
    name.push("Master");
    name.push("Muskan");
    name.push("Khushi");
    name.push("Rani");
    cout<<name.top()<<endl;
    name.pop();
    cout<<name.top()<<endl;
    cout<<name.size()<<endl;
    cout<<name.empty()<<endl;
}