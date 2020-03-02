#include<iostream>
#include<cstdio>
#include<cstring>
#include<iomanip>
using namespace std;

int main(){
    int n, t = 0;
    char s[100];
    cin>>n;
    while (n--){
        int cnt = 0;
        double x, y;
        char str[2], ss[2];
        while ((s[cnt] = getchar()) != '=')
            cnt++;
        str[0] = s[cnt - 1];
        cin>>x;
        cnt++;
        s[cnt] = getchar();
        ss[0] = s[cnt];
        if (s[cnt] == 'm' || s[cnt] == 'k' || s[cnt] == 'M'){
            if (s[cnt] == 'm')
                x /= 1000;
            if (s[cnt] == 'k')
                x *= 1000;
            if (s[cnt] == 'M')
                x *= 1000000;
            cnt++;
        }
        while ((s[cnt] = getchar()) != '=')
            cnt++;
        str[1] = s[cnt - 1];
        cin>>y;
        cnt++;
        s[cnt] = getchar();
        ss[1] = s[cnt];
        if (s[cnt] == 'm' || s[cnt] == 'k' || s[cnt] == 'M'){
            if (s[cnt] == 'm')
                y /= 1000;
            if (s[cnt] == 'k')
                y *= 1000;
            if (s[cnt] == 'M')
                y *= 1000000;
            cnt++;
        }
        cout<<"Problem #"<<++t<<endl;
        cout.setf(ios::fixed,ios::floatfield);
        cout.precision(2);
        if ((str[0] == 'U' && str[1] == 'I') || (str[0] == 'I' && str[1] == 'U'))
            cout<<"P="<<x * y<<"W"<<endl;
        if (str[0] == 'P' && str[1] == 'U')
            cout<<"I="<<x / y<<"A"<<endl;
        if (str[0] == 'U' && str[1] == 'P')
            cout<<"I="<<y / x<<"A"<<endl;
        if (str[0] == 'P' && str[1] == 'I')
            cout<<"U="<<x / y<<"V"<<endl;
        if (str[0] == 'I' && str[1] == 'P')
            cout<<"U="<<y / x<<"V"<<endl;
        cout<<endl;
    }
    return 0;
}
