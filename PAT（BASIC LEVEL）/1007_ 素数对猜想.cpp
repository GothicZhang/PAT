#include<iostream>
#include<cmath>
using namespace std;
bool IsPrime(int n){
    if((n == 0) || (n == 1))
        return false;
    for(int i = 2;i <= sqrt(n);i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
int main(){
    int n,count = 0;
    cin>>n;
    for(int i = 3;i <= n - 2;i++){
        if(IsPrime(i) && IsPrime(i + 2))
            count++;
    }
    cout<<count<<endl;
    return 0;
}
