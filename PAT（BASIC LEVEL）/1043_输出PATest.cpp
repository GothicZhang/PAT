#include<iostream>
#include<cstring>
using namespace std;
int main(){
  string s;
  cin>>s;
  int P_num = 0,A_num = 0,T_num = 0,e_num = 0,s_num = 0,t_num = 0;
  for(int i = 0;i < s.size();i++){
    switch(s[i]){
        case 'P':P_num++;break;
        case 'A':A_num++;break;
        case 'T':T_num++;break;
        case 'e':e_num++;break;
        case 's':s_num++;break;
        case 't':t_num++;break;
        default:break;
    }
  }
  while(P_num || A_num || T_num || e_num || s_num || t_num){
    if(P_num){
        cout<<"P";
        P_num--;
    }
    if(A_num){
        cout<<"A";
        A_num--;
    }
    if(T_num){
        cout<<"T";
        T_num--;
    }
    if(e_num){
        cout<<"e";
        e_num--;
    }
    if(s_num){
        cout<<"s";
        s_num--;
    }
    if(t_num){
        cout<<"t";
        t_num--;
    }
  }
  return 0;
}
