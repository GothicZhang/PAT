#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n,number;
    cin>>n;
    string s,ss;
    string a[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    string b[13] = {"###", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer","jou"};
    getchar();//ʹ��getlineʱ���Ὣ��һ��cin>>n��ʱ��س���¼���ڣ��Ӷ���һ��ѭ��������getchar()��׽�Ǹ��س�
    while(n--){
        number = 0;ss = "";
        getline(cin,s);
        if(s[0] >= '0' && s[0] <= '9'){//�������������ɻ�����
            for(int i = 0; i < s.size(); i++)
                number = number * 10 + s[i] - '0';
            if(number < 13)
                cout<<a[number]<<endl;
            else if(number % 13 == 0)//�������ֳ��˵�����0��ʱ��д0��ֻҪ��λ������������λ���������0��ʡ�Բ�д��
                cout<<b[number / 13]<<endl;
            else
                cout<<b[number / 13]<<" "<<a[number % 13]<<endl;
        }
        else{//��������������������
            for(int i = 0;i < s.size();i += 4){
                ss = ss + s[i] + s[i + 1] + s[i + 2];
                for(int j = 0; j < 13; j++){
                     if(ss == a[j])//�����������a�������ô����13�����еĸ�λ����ֻ���������
                         number = number + j;
                     if(ss == b[j])//�����b�����У���ÿ��Ҫ����13
                         number = number + j * 13;
                 }
                 ss = "";
            }
            cout<<number<<endl;
        }
    }
    return 0;
}
