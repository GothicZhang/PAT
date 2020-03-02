#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,m,i;
    int a[200];
    cin>>n>>m;
    for(i = 0;i < n;i++)
        cin>>a[i];
    for(i = n;i >= 0;i--)
        a[i + m] = a[i];//œÚ∫Û“∆mŒª
    for(i = n;i < n + m;i++)
        a[i % n] = a[i];
    cout<<a[0];
    for(i = 1;i < n;i++)
        cout<<" "<<a[i];
    return 0;
}
