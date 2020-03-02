#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,i,temp;
    cin>>n;
    int a[100];
    int b[10000];
    for(i = 0;i < n;i++)
        cin>>a[i];
    for(i = 0;i < n;i++){
        temp = a[i];
        while(temp != 1){
            if(temp % 2 == 0)
               temp = temp / 2;
            else
               temp = (3 * temp + 1) / 2;
            b[temp] = 1;//储存运算过程中出现的数
        }
    }
    for(i = 0;i < n;i++){
        if(b[a[i]] == 1)//如果运算过程中出现过则删去，即置为0
            a[i] = 0;
    }
    sort(a,a + n,greater<int>());//降序排列
    cout<<a[0];
    for(i = 1;i < n;i++){
        if(a[i])
            cout<<" "<<a[i];
    }
    return 0;
}
