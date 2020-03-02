#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int high,low;
void BlackHole(int n){
    int x[4];
    x[0] = n / 1000;
    x[1] = n /100 % 10;
    x[2] = n / 10 % 10;
    x[3] = n % 10;
    sort(x,x + 4);
    high = x[3] * 1000 + x[2] * 100 + x[1] * 10 + x[0];
    low = x[0] * 1000 + x[1] * 100 + x[2] * 10 + x[3];
}
int main(){
    int n,m = 0;
    cin>>n;
    BlackHole(n);
    if(high == low){
        printf("%04d - %04d = 0000\n", n, n);
        return 0;
    }
    while(m != 6174){
        m = high - low;
        printf("%04d - %04d = %04d\n", high, low, m);
        BlackHole(m);
    }
    return 0;
}
