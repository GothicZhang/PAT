#include<iostream>
using namespace std;
int main(){
    int n,i = 0,j = 0;//前i条线共有j个数
    cin>>n;
    while(n > j){
        i++;
        j += i;
    }
    if(i % 2 == 1){
        cout<<(j - n + 1)<<"/"<<(i + n - j);//分子父母相加等于i + 1
    }
    else{
        cout<<(i + n - j)<<"/"<<(j - n + 1);
    }
    return 0;
}
