#include<iostream>
using namespace std;
/*
P之前的A数目乘以P与T之间的A的数目等于T后面的A的数目

1. 字符串中必须仅有P, A, T这三种字符，不可以包含其它字符；
2. 任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
(x * 1 = x)
3. 如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a, b, c 均或者是空字符串，或者是仅由字母 A 组成的字符串。
(b = A,a = c → a * 2 = a * a = c * a)
*/
int main(){
  int n,i;
  int count_A1,count_A2,count_A3;//分别计算P前、P和T间、T后A的个数
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
            //不满足P前只有A、P与T间只有A、T后只有A
            cout<<"NO"<<endl;
        else if(count_A1 * count_A2 == count_A3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
  }
  return 0;
}
