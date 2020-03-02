#include<iostream>
using namespace std;
int main(){
  string s1,s2;
  char a1,a2;
  int b1 = 0,b2 = 0;
  cin>>s1>>a1>>s2>>a2;
  for(int i = 0;i < s1.size();i++){
    if(s1[i] == a1)
       b1 = b1 * 10 + (a1 - '0');
  }
  for(int i = 0;i < s2.size();i++){
    if(s2[i] == a2)
       b2 = b2 * 10 + (a2 - '0');
  }
  cout<<b1 + b2<<endl;
  return 0;
}
