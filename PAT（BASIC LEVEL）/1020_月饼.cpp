#include<iostream>
#include<stdio.h>
using namespace std;
class MoonCake{
    public:
        double num;
        double total_price;
        double per_price;
};

int main(){
    int N,D,i,j;
    double sum = 0;
    cin>>N>>D;
    MoonCake m[N];
    for(i = 0;i < N;i++)
        cin>>m[i].num;
    for(i = 0;i < N;i++)
        cin>>m[i].total_price;
    for(i = 0;i < N;i++)
        m[i].per_price = m[i].total_price / m[i].num;
    for(i = 0;i < N - 1;i++)
        for(j = 0;j < N - i - 1;j++)
            if(m[j].per_price < m[j + 1].per_price){
                MoonCake m1;
                m1 = m[j];
                m[j] =  m[j + 1];
                m[j + 1] = m1;
            }
    for(i = 0;i < N;i++){
        if(m[i].num <= D){
            D -= m[i].num;
            sum += m[i].total_price;
        }
        else{
            sum += m[i].per_price * D;
            break;
        }
    }
    printf("%.2f",sum);
    return 0;
}
