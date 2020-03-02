#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
  int a,b;
  int c;
  cin>>a>>b;
  c = (b - a)*1.0 / 100 + 0.5;
  printf("%02d:%02d:%02d", c / 3600, c % 3600 / 60, c % 60);
  return 0;
}
