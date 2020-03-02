#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;

typedef long long LL;

struct Fraction{
    LL up,down;
};

//gcd
LL gcd(LL a,LL b){
    if(b == 0) return a;
    else gcd(b,a%b);
}

//约分
Fraction reduction(Fraction a){
    LL d = gcd(abs(a.up), abs(a.down));
    a.up /= d;
    a.down /= d;
    return a;
}

//加法
Fraction add(Fraction a, Fraction b) {
    Fraction res;
    res.up = a.up*b.down + b.up*a.down;
    res.down = a.down * b.down;
    return reduction(res);
}

//减法
Fraction minu(Fraction a, Fraction b) {
    Fraction res;
    res.up = a.up*b.down - b.up*a.down;
    res.down = a.down * b.down;
    return reduction(res);
}

//乘法
Fraction multi(Fraction a, Fraction b) {
    Fraction res;
    res.up = a.up*b.up;
    res.down = a.down * b.down;
    return reduction(res);
}

//除法
Fraction divide(Fraction a, Fraction b) {
    Fraction res;
    res.up = a.up*b.down;
    res.down = a.down * b.up;
    return reduction(res);
}

//输出某个分数
void printFraction(Fraction a){
    a = reduction(a); //对a化简；

    if(a.up == 0){
        printf("0");
        return ;
    }

    if(abs(a.down) == 1){
        if(a.up * a.down > 0){ //正分数
            printf("%lld",abs(a.up));
        }else{  //负分数
            printf("(-%lld)",abs(a.up));
        }
        return;
    }

    if(abs(a.up) > abs(a.down)){
        LL integer = a.up / a.down;
        if(integer < 0){
            printf("(%lld %lld/%lld)",integer, abs(a.up)%abs(a.down), abs(a.down));
        }else{
            printf("%lld %lld/%lld",integer, abs(a.up)%abs(a.down), abs(a.down));
        }
        return ;
    }

    //如果是真分数，则正常输出
    if(a.up*a.down < 0){ //分数负数
        printf("(-%lld/%lld)",abs(a.up), abs(a.down));
    }else{ //分数为正
        printf("%lld/%lld",abs(a.up),abs(a.down));
    }
}

//输出等号后面的部分
void printRes(Fraction res){
    printf(" = ");
    printFraction(res);
    printf("\n");
}

int main(){

    Fraction a, b;

    scanf("%lld/%lld %lld/%lld",&a.up,&a.down,&b.up,&b.down);

    Fraction res;

    //加法
    res = add(a,b);
    printFraction(a);
    printf(" + ");
    printFraction(b);
    printRes(res);

    //减法
    res = minu(a,b);
    printFraction(a);
    printf(" - ");
    printFraction(b);
    printRes(res);

    //乘法
    res = multi(a,b);
    printFraction(a);
    printf(" * ");
    printFraction(b);
    printRes(res);

    //除法
    printFraction(a);
    printf(" / ");
    printFraction(b);
    if(abs(b.up) == 0 ){
        printf(" = Inf\n");
    }else{
        res = divide(a,b);
        printRes(res);
    }

    return 0;
}
