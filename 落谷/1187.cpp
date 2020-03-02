#include<iostream>
#include<cstdio>
using namespace std;
int arr[1001][1001];
char input;
int up,front,ans_r,n,m;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            cin>>input;
            arr[i][j]=input-'0';
        }
    //上面
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            if(arr[i][j]>0) up+=1;
        }
    //正面
    for(int j=1;j<=m;j++)
    {
        front+=arr[1][j]; //第一个先加上
        for(int i=2;i<=n;i++)
        {
            if(arr[i][j]>arr[i-1][j])
                front+=(arr[i][j]-arr[i-1][j]); //后面的加上与前一个的差
        }
    }
    //侧面
    for(int i=1;i<=n;i++)
    {
        front+=arr[i][1]; //第一个先加上
        for(int j=2;j<=m;j++)
        {
            if(arr[i][j]>arr[i][j-1])
                ans_r+=(arr[i][j]-arr[i][j-1]); //后面的加上与前一个的差
        }
    }
    cout<<(up+front+ans_r)*2;
    return 0;
}
