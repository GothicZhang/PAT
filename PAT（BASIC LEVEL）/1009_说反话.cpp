#include<iostream>
#include<stack>
#include<cstdio>
using namespace std;
/*cin���ַ��������س���TAB���ո񣩶��ᵱ��һ������Ľ����������Ŀ��ַ��ᱻ����*/
int main(){
    char c;
    string str;
    stack<string> s;
    while(cin>>str){
        s.push(str);
        if((c = getchar()) == '\n')
            break;
    }
    cout<<s.top();
    s.pop();
    while(!s.empty()){
        cout<<" "<<s.top();
        s.pop();
    }
    return 0;
}
