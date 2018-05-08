#include<iostream>
using namespace std;
int main(){
  int count = 0;
  int n;
  cin>>n;
  while(n != 1){
    if(n % 2 == 0)
      n = n / 2;
    else
      n = (3 * n + 1) / 2;
    count++;
  }
  cout<<count<<endl;
  return 0;
}
