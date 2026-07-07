#include<iostream>
using namespace std;
int main()
{
    float n,x;
    cout<<"what is Cost price: ";
    cin>>n;
    cout<<"what is selling price: ";
    cin>>x;
    if(x>n){
        cout<<"Profit"<<endl;
        cout<<"total profit by: "<<x-n<<endl;
        cout<<"total profit percentage is: "<<(x-n)*100/n;
    }
    else{
        cout<<"Loss";
        cout<<"total Loss by : "<<n-x<<endl;
        cout<<"total Loss percentage is: "<<(n-x)*100/n;
    }
    if(x==n){
        cout<<"No Loss/No Profit";
    }

    
    return 0;
}