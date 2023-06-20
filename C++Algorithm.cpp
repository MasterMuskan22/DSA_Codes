#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(8);
    v.push_back(2);
    v.push_back(5);
    v.push_back(18);
    cout<<"Binary Search of 2 : "<<binary_search(v.begin(),v.end(),5)<<endl;
    int a=7;
    int b=2;
    cout<<"Maximum : "<<max(a,b)<<endl;
    cout<<"Minimum : "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"Value of a : "<<a<<endl;
    string s="abcde";
    reverse(s.begin(),s.end());
    cout<<"Reversed string is : "<<s<<endl;
    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"After rotation : "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Elements after sorting : "<<endl;
    sort(v.begin(),v.end());
    /*sort function uses Introsort Algorithm which uses three sorting algorithms
    Quick Sort, Heap Sort and Insertion Sort*/

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}