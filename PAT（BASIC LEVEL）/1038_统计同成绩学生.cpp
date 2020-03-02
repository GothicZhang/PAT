#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n],aa[100] = {0};
    for(int i = 0;i < n;i++){
        cin>>a[i];
        aa[a[i]]++;
    }
    int k;cin>>k;
    int b[k];
    for(int i = 0;i < k;i++)
        cin>>b[i];
    for(int i = 0;i < k;i++)
        if(i == 0)
            cout<<aa[b[i]];
        else
            cout<<" "<<aa[b[i]];
    return 0;
}
