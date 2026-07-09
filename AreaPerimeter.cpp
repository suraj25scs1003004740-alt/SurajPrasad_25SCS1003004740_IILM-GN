#include<iostream>
using namespace std;
 int main(){
    int l,b;
    cout<<"Enter Length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;
    int a,p;
    a=l*b;
    p=2*(l+b);
    if(a>p){
        cout<<"YES! The area is greater than perimeter";
    }
    else{
        cout<<"NO! The perimeter is greater than area";
    }
    return 0;
 }