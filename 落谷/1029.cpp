#include<iostream>
#include<cmath>
using namespace std;
int Getgcd(int a,int b);
//int Getlcm(int a,int b);//�����˻�����lcm*gcd
int main(){
    int x0,y0,count = 0;
    cin>>x0>>y0;
    for(int i = x0;i <= y0;i += x0){
        int j = (x0 * y0) / i;
        if((x0 * y0) == i * j && Getgcd(i,j) == x0)//��ȷ��x0*y0�ܱ�i��������j���ڣ�Ȼ����i,j�Ĺ�Լ������x0ʱ������һ��Ϊy0��i*j=x0*y0��
            count++;
    }
    cout<<count;
    return 0;
}

int Getgcd(int a,int b){
    /*int i,j;
    if(a < b)
        j = a;
    else
        j = b;
    for(i = a;i > 0;i--){
            if(a % i == 0 && b % i == 0){
                break;
        }
    }
    return i;*/
    if(b == 0)
        return a;
    return Getgcd(b,a % b);
}

/*int Getlcm(int a,int b){
    int i;
    for(i = 1;i <= a*b;i++){
            if(i % a == 0 && i % b == 0){
                break;
            }
    }
    return i;
}*/
