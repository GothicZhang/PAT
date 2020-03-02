#include<iostream>
using namespace std;
int main(){
    string s1,s2,s3 = "";//s2是s1的子集
    cin>>s1>>s2;
    int count = 0;
    for(int i = 0;s1[i] != '\0';i++){
        if(s1[i] != s2[count]){
            char ch = s1[i];
            if(ch >= 'a' && ch <= 'z')
                ch += 'Z' -'z';
            if(s3.find(ch) == -1)
               s3 += ch;
        }
        else
            count++;
    }
    cout<<s3;
    return 0;
}
