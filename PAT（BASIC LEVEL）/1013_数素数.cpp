#include<iostream>
#include<cmath>
using namespace std;
bool IsPrime(int n){
    if(n <= 0 || n == 1)
        return false;
    if(n == 2)
        return true;
    for(int i = 2;i <= sqrt(n);i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int i,j,count = 0,n = 0;
    cin>>i>>j;
    for(int m = 2;count != j;m++){
        if(IsPrime(m)){
            count++;
            if(count >= i){
                n++;
                if(n % 10 == 0)
                    cout<<m<<endl;
                else if(count != j)
                    cout<<m<<" ";
                else                //最后一个数字后面不能有空格- -
                    cout<<m;
            }
        }
    }
    return 0;
}
