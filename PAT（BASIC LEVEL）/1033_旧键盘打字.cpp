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
    不能用cin，第一行可能为空
    cin在遇到空格时，就会停止输入
    getline(istream is,string str,结束符)。此处结束符为可选参数（默认依然为Enter）
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
