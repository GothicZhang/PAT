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

//Լ��
Fraction reduction(Fraction a){
    LL d = gcd(abs(a.up), abs(a.down));
    a.up /= d;
    a.down /= d;
    return a;
}

//�ӷ�
Fraction add(Fraction a, Fraction b) {
    Fraction res;
    res.up = a.up*b.down + b.up*a.down;
    res.down = a.down * b.down;
    return reduction(res);
}

//����
Fraction minu(Fraction a, Fraction b) {
    Fraction res;
    res.up = a.up*b.down - b.up*a.down;
    res.down = a.down * b.down;
    return reduction(res);
}

//�˷�
Fraction multi(Fraction a, Fraction b) {
    Fraction res;
    res.up = a.up*b.up;
    res.down = a.down * b.down;
    return reduction(res);
}

//����
Fraction divide(Fraction a, Fraction b) {
    Fraction res;
    res.up = a.up*b.down;
    res.down = a.down * b.up;
    return reduction(res);
}

//���ĳ������
void printFraction(Fraction a){
    a = reduction(a); //��a����

    if(a.up == 0){
        printf("0");
        return ;
    }

    if(abs(a.down) == 1){
        if(a.up * a.down > 0){ //������
            printf("%lld",abs(a.up));
        }else{  //������
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

    //���������������������
    if(a.up*a.down < 0){ //��������
        printf("(-%lld/%lld)",abs(a.up), abs(a.down));
    }else{ //����Ϊ��
        printf("%lld/%lld",abs(a.up),abs(a.down));
    }
}

//����Ⱥź���Ĳ���
void printRes(Fraction res){
    printf(" = ");
    printFraction(res);
    printf("\n");
}

int main(){

    Fraction a, b;

    scanf("%lld/%lld %lld/%lld",&a.up,&a.down,&b.up,&b.down);

    Fraction res;

    //�ӷ�
    res = add(a,b);
    printFraction(a);
    printf(" + ");
    printFraction(b);
    printRes(res);

    //����
    res = minu(a,b);
    printFraction(a);
    printf(" - ");
    printFraction(b);
    printRes(res);

    //�˷�
    res = multi(a,b);
    printFraction(a);
    printf(" * ");
    printFraction(b);
    printRes(res);

    //����
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
