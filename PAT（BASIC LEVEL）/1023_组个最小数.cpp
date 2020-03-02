#include<iostream>
using namespace std;
int main(){
    int zero, nonzero;
    cin>>zero;
    for(int i = 1; i < 10; i++){
        cin>>nonzero;
        while(nonzero--){
            cout<<i;
            while(zero-- > 0)
                cout<<"0";
        }
    }
    return 0;
}
