#include<iostream>
using namespace std;
int main(){
    string s1,s2,s3,s4;
    int i,j = 0;
    cin>>s1>>s2>>s3>>s4;
    for(i = 0;i < s1.length();i++){
        if(j == 0 && s1[i] == s2[i] && (s1[i] >= 'A' && s1[i] <= 'G')){
            switch(s1[i]){
                case 'A':cout<<"MON ";break;
                case 'B':cout<<"TUE ";break;
                case 'C':cout<<"WED ";break;
                case 'D':cout<<"THU ";break;
                case 'E':cout<<"FRI ";break;
                case 'F':cout<<"SAT ";break;
                case 'G':cout<<"SUN ";break;
                default: break;
            }
            j++;
            continue;
        }
        if(j == 1 && s1[i] == s2[i] && ((s1[i] >= 'A' && s1[i] <= 'N') || (s1[i] >= '0' && s1[i] <= '9'))){
            if(s1[i] >= 'A' && s1[i] <= 'N')
                cout<<(s1[i] - 'A' + 10)<<":";
            if(s1[i] >= '0' && s1[i] <= '9')
                cout<<"0"<<(s1[i] - '0')<<":";
            break;
        }
    }
    for(i = 0;i < s3.length();i++){
        if(s3[i] == s4[i] && isalpha(s3[i])){
            if(i <= 9)
                cout<<"0"<<i;
            else
                cout<<i;
            break;
        }
    }
    return 0;
}
