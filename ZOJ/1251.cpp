#include<iostream>
using namespace std;
int main(){
    int x = 0,n,a[100],sum,av,m;
    while(cin>>n){
        if(n == 0)
            break;
        x++;
        sum = 0;m = 0;
        for(int i = 0;i < n;i++){
            cin>>a[i];
            sum += a[i];
        }
        av = sum / n;
        for(int i = 0;i < n;i++){
            if(a[i] < av)
               m += (av - a[i]);
        }
        cout<<"Set #"<<x<<endl;
        cout<<"The minimum number of moves is "<<m<<"."<<endl;
        cout<<endl;
    }
    return 0;
}
