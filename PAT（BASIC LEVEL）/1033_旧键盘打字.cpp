#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char ch;
    int str[1000]={0};
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    /*
    ������cin����һ�п���Ϊ��
    cin�������ո�ʱ���ͻ�ֹͣ����
    getline(istream is,string str,������)���˴�������Ϊ��ѡ������Ĭ����ȻΪEnter��
    */
    for (int i = 0;i < str1.size();i++) {
        str[str1[i]] = 1;
    }
    for (int i = 0;i < str2.size();i++) {
        ch = str2[i];
        if (ch <= 'Z' && ch >= 'A') {if (!str[ch] && !str['+'])cout<<ch;}
        else if (!str[ch] && !str[toupper(ch)])cout<<ch;
    }
    cout<<endl;
    return 0;
}
