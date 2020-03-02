#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char ch[1000];
    int flag[26];
    int num,leave;//num是已占床位数，leave是离开顾客人数
    int n;
    while(cin>>n){
        if(n == 0)
            break;
        for(int i = 0;i < 26;i++)
            flag[i] = 0;
        num = leave = 0;
        cin>>ch;
        for(int i = 0;i < strlen(ch);i++){
            if(flag[ch[i]-'A']){
                if(flag[ch[i]-'A'] == 1)
                    num--;
                flag[ch[i]-'A'] = 0;
            }
            else{
                if(num == n){
                    flag[ch[i]-'A'] = 2;
                    leave++;
                }
                else{
                    flag[ch[i]-'A'] = 1;
                    num++;
                }
            }
        }
        if(leave == 0)
            cout<<"All customers tanned successfully."<<endl;
        else
            cout<<leave<<" customer(s) walked away."<<endl;
    }
    return 0;
}
