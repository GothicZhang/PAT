#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        if(n == -1)
            return 0;
        int speed,hour;
        int pre = 0,sum = 0;
        for(int i = 0;i < n;i++){
            cin>>speed>>hour;
            sum += (hour - pre) * speed;
            pre = hour;
        }
        cout<<sum<<" miles"<<endl;
    }
    return 0;
}
