#include<iostream>
using namespace std;
/*
P֮ǰ��A��Ŀ����P��T֮���A����Ŀ����T�����A����Ŀ

1. �ַ����б������P, A, T�������ַ��������԰��������ַ���
2. �������� xPATx ���ַ��������Ի�á�����ȷ�������� x �����ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
(x * 1 = x)
3. ��� aPbTc ����ȷ�ģ���ô aPbATca Ҳ����ȷ�ģ����� a, b, c �������ǿ��ַ����������ǽ�����ĸ A ��ɵ��ַ�����
(b = A,a = c �� a * 2 = a * a = c * a)
*/
int main(){
  int n,i;
  int count_A1,count_A2,count_A3;//�ֱ����Pǰ��P��T�䡢T��A�ĸ���
  int position_A1,position_A2,position_A3;
  char ch[100];
  cin>>n;
  while(n--){
        count_A1 = count_A2 = count_A3 = position_A1 = position_A2 = position_A3 = 0;
        cin>>ch;
        for(i = 0;ch[i] != 'P';i++){
            if(ch[i] == 'A')
                count_A1++;
            position_A1++;
        }
        for(i = position_A1 + 1;ch[i] != 'T';i++){
            if(ch[i] == 'A')
                count_A2++;
            position_A2++;
        }
        for(i = position_A1 + position_A2 + 2;ch[i] != '\0';i++){
            if(ch[i] == 'A')
                count_A3++;
            position_A3++;
        }
        if(count_A1 != position_A1 || count_A2 != position_A2 || count_A2 == 0 || count_A3 != position_A3)
            //������Pǰֻ��A��P��T��ֻ��A��T��ֻ��A
            cout<<"NO"<<endl;
        else if(count_A1 * count_A2 == count_A3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
  }
  return 0;
}
