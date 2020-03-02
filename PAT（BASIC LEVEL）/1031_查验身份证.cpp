#include<iostream>
using namespace std;
int main(){
  int n,z,sum,flag,count = 0;
  int weight[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
  char M[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
  string s;
  cin>>n;
  for(int i = 0;i < n;i++){
    cin>>s;
    sum = flag = 0;
    for(int j = 0;j < 17;j++){
        if(s[j] >= '0' && s[j] <='9'){
            sum += (s[j] - '0') * weight[j];
        }
        else{
            flag = 1;break;
        }
    }
    z = sum % 11;
    if(M[z] == s[17] && flag != 1)
        count++;
    else
        cout<<s<<endl;
  }
  if(count == n)
      cout<<"All passed"<<endl;
  return 0;
}
