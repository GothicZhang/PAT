#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  long long int N,p;
  int count = 0;
  cin>>N>>p;
  int a[N];
  for(int i = 0;i < N;i++)
      cin>>a[i];
  sort(a,a+N);
  for(int i = 0;i < N;i++)            //遍历，将a[i]作为最小数
        for(int j = i + count;j < N;j++){ //j置为要满足可以更新数列长度的值，减少循环次数
            if(a[j] > a[i] * p) //如果不满足条件了，则将下一个元素最为最小值
            break;
            if(j - i + 1 > count)         //如果此次的长度大于上一次，更新数列长度
                count= j - i + 1;
        }
  cout<<count<<endl;
  return 0;
}
