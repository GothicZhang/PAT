#include<iostream>
using namespace std;
int main(){
  int n,max_school,max_score = 0;
  cin>>n;
  int school,score,sum[100001]={0};//注意数组要够大
  for(int i = 0;i < n;i++){
    cin>>school>>score;
    sum[school] += score;
    if(sum[school] > max_score){
        max_score = sum[school];
        max_school = school;
    }
  }
  cout<<max_school<<" "<<max_score<<endl;
  return 0;
}
