#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[10000] = {0},name,id,score;
    char ch;
    cin>>n;
    while(n--){
        cin>>name>>ch>>id>>score;
        a[name] += score;
    }
    int max = -1,index = -1;
    for(int i = 0;i < 10000;i++){
        if(max <a[i]){
            max = a[i];
            index = i;
        }
    }
    cout<<index<<" "<<max;
    return 0;
}
