#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main (){
    string a;
    int n;
	cin>>n;
    getchar();     //ÎüÊÕ»»ÐÐ
    for (int i = 0;i < n;i++)
    {
        getline(cin,a);
        reverse(a.begin(),a.end());
	    cout<<a<<endl;
    }
}
