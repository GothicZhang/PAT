#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a1,a2,b1,b2,count1,count2;
    count1 = count2 = 0;
    cin>>n;
    while(n--){
        cin>>a1>>a2>>b1>>b2;
        if(a2 == b2)
            continue;
        if(a2 == a1 + b1)
            count2++;
        if(b2 == a1 + b1)
            count1++;
    }
    cout<<count1<<" "<<count2<<endl;
    return 0;
}
