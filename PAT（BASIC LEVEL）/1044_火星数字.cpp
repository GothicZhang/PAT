#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n,number;
    cin>>n;
    string s,ss;
    string a[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
    string b[13] = {"###", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer","jou"};
    getchar();//使用getline时他会将第一次cin>>n的时候回车记录在内，从而少一次循环所以用getchar()捕捉那个回车
    while(n--){
        number = 0;ss = "";
        getline(cin,s);
        if(s[0] >= '0' && s[0] <= '9'){//如果是数字则翻译成火星文
            for(int i = 0; i < s.size(); i++)
                number = number * 10 + s[i] - '0';
            if(number < 13)
                cout<<a[number]<<endl;
            else if(number % 13 == 0)//火星数字除了单独是0的时候写0，只要高位数字有数，个位数字如果是0就省略不写。
                cout<<b[number / 13]<<endl;
            else
                cout<<b[number / 13]<<" "<<a[number % 13]<<endl;
        }
        else{//如果不是数字则翻译成数字
            for(int i = 0;i < s.size();i += 4){
                ss = ss + s[i] + s[i + 1] + s[i + 2];
                for(int j = 0; j < 13; j++){
                     if(ss == a[j])//如果火星文在a数组里，那么它是13进制中的个位数，只需加上坐标
                         number = number + j;
                     if(ss == b[j])//如果在b数组中，则每次要乘以13
                         number = number + j * 13;
                 }
                 ss = "";
            }
            cout<<number<<endl;
        }
    }
    return 0;
}
