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
  for(int i = 0;i < N;i++)            //��������a[i]��Ϊ��С��
        for(int j = i + count;j < N;j++){ //j��ΪҪ������Ը������г��ȵ�ֵ������ѭ������
            if(a[j] > a[i] * p) //��������������ˣ�����һ��Ԫ����Ϊ��Сֵ
            break;
            if(j - i + 1 > count)         //����˴εĳ��ȴ�����һ�Σ��������г���
                count= j - i + 1;
        }
  cout<<count<<endl;
  return 0;
}
