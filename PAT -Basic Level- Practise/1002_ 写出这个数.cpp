#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
int main(){
  char ch;
  int sum = 0,flag = 1;//flag用于判断输出有无空格
  string spell[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
  stack<int> s;
  while((ch = getchar()) != '\n')
    sum = sum + (ch - '0');
  if(!sum)
    s.push(0);
  while(sum){
      s.push(sum % 10);
      sum = sum / 10;
  }
  while(!s.empty()){
      if(flag){
          cout<<spell[s.top()];
          flag = 0;
      }
      else{
          cout<<" "<<spell[s.top()];
      }
      s.pop();
  }
  return 0;
}
