#include<iostream>
using namespace std;
int main(){
    long long int A,B,C;
    int count = 1;
    int T;
    cin>>T;
    while(T--){
        cin>>A>>B>>C;
        if(A + B > C)
            cout<<"Case #"<<count<<": true"<<endl;
        else
            cout<<"Case #"<<count<<": false"<<endl;
        count++;
    }
    return 0;
}
