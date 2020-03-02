#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int m,n,flag = 0;
    char c;
    while(cin>>m>>n){
        if(n){
            if(!flag){
                cout<<m * n<<" "<<(n - 1);
                flag = 1;
            }
            else
                cout<<" "<<m * n<<" "<<(n - 1);
        }
        if((c = getchar()) == '\n')
            break;
    }
    if(!flag)
        cout<<"0 0";
    return 0;
}
