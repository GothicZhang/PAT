#include<iostream>
#include<stdio.h>
using namespace std;
struct money{
    long long Galleon,Sickle,Knut;
};
int main(){
    money P,A;
    scanf("%lld.%d.%d %lld.%d.%d",&P.Galleon,&P.Sickle,&P.Knut,&A.Galleon,&A.Sickle,&A.Knut);
    long long price,paid,sum;
    price = P.Galleon * 17 * 29 + P.Sickle * 29 + P.Knut;
    paid = A.Galleon * 17 * 29 + A.Sickle * 29 + A.Knut;
    sum = paid - price;
    long long g,s,k;
    int flag = 1;
    if(sum < 0){
        flag = 0;
        sum = price - paid;
    }
    g = sum / 29 / 17;
    s = (sum - g * 29 * 17) / 29;
    k = sum - (g * 17 + s) * 29;
    if(flag){
        cout<<g<<"."<<s<<"."<<k<<endl;
    }
    else{
        cout<<"-"<<g<<"."<<s<<"."<<k<<endl;
    }

    return 0;
}
