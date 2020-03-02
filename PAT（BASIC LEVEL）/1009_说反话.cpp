#include<iostream>
#include<stack>
#include<cstdio>
using namespace std;
/*cin空字符（包括回车，TAB，空格）都会当成一个输入的结束。连续的空字符会被忽略*/
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
