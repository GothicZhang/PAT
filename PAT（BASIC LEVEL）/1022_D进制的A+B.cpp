#include<iostream>
#include<stack>
using namespace std;
int main(){
    int a,b,c,d,temp;
    stack<int> s;
    cin>>a>>b>>d;
    c = a + b;
    do{
        temp = c % d;
        s.push(temp);
        c = c / d;
    }while(c > 0);
    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}
