#include<iostream>
using namespace std;
struct student{
    string number;
    int n1,n2;
}s[1000];
int main(){
    int n;
    cin>>n;
    for(int i = 0;i < n;i++){
        cin>>s[i].number>>s[i].n1>>s[i].n2;
    }
    int m,temp;
    cin>>m;
    for(int i = 0;i < m;i++){
        cin>>temp;
        for(int j = 0;j < n;j++)
            if(temp == s[j].n1){
                cout<<s[j].number<<" "<<s[j].n2<<endl;
                break;
            }
    }
    return 0;
}
