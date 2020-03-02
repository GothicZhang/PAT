#include<iostream>
using namespace std;

int main(){
    int temp,a[10] = {0};
    string s;
    cin>>s;
    for(int i = 0;i < s.size();i++){
        temp = s[i] - '0';
        a[temp]++;
    }
    for(int i = 0;i < 10;i++){
        if(a[i] != 0)
            cout<<i<<":"<<a[i]<<endl;
    }
    return 0;
}
