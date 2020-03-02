#include<iostream>
using namespace std;
int main(){
    int i,n;
    cin>>n;
    if(n / 100 > 0)
        for(i = 0;i < n / 100;i++)
            cout<<"B";
    if((n % 100) / 10 > 0)
        for(i = 0;i < (n % 100) / 10;i++)
            cout<<"S";
    if(n % 10 > 0)
        for(i = 0;i < n % 10;i++)
            cout<<(i + 1);
    return 0;
}
