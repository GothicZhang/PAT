#include<iostream>
using namespace std;
int main(){
    int n;
    char c;
    cin>>n>>c;
    for(int i = 0;i < (n + 1)/2;i++){//注意四舍五入,简单的方法是直接(n+1)/2
        if(i == 0 || i == (n + 1)/2 - 1){
            for(int j = 0;j < n;j++)
                cout<<c;
        }
        else{
            for(int j = 0;j < n;j++)
                if(j == 0 || j == n - 1)
                  cout<<c;
                else
                  cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
