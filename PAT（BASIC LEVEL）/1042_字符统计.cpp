#include<iostream>
#include<cstring>
using namespace std;
int main(){
  string s;
  int max = 0,a[26] = {0};
  char index;
  getline(cin,s);
  for(int i = 0;i < s.size();i++)
    s[i] = tolower(s[i]);
  for(int i = 0;i < s.size();i++){
    if(s[i] >= 'a' && s[i] <= 'z')
        a[s[i] - 'a']++;
  }
  for(int i = 0;i < 26;i++){
    if(a[i] > max){
        max = a[i];
        index = i + 'a';
    }
  }
  cout<<index<<" "<<max<<endl;
  return 0;
}
