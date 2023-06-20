#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string>m; 
    /*map is a ordered structure. it will return the index in a ordered way even
    if you will write the values in an unordered way*/ 
    m[1]="Master";
    m[10]="Muskan";
    m[15]="Khushi";
    m[4]="Rani";
    m.insert({8,"Hiii"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"13 is present or not? : "<<m.count(13)<<endl;
    m.erase(10);
    cout<<"After erasing"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    /*unordered map is a structure in which the values will be printed in an 
    unordered way as how you input the values in it*/
}