#include<iostream>
#include<cstring>
using namespace std;
void aaaa(int i1,int i2,int i3){
    if(i1 >= i2 && i1 > i3)
        cout<<"C";
    else if(i2 > i1 && i2 > i3)
        cout<<"J";
    else if(i3 >= i1 && i3 >= i2)
        cout<<"B";
    else
        ;
}
int main() {
    int n;
    char a,b;
    int count1,count2,count3,a1,a2,a3,b1,b2,b3;
    cin>>n;
    count1 = count2 = count3 = a1 = a2 = a3 = b1 = b2 = b3 = 0;
    for(int i = 0;i < n;i++){
        cin>>a>>b;
        if(a == 'C' && b == 'J'){
            count1++;
            a1++;
        }
        else if(b == 'C' && a == 'J'){
            count2++;
            b1++;
        }
        else if(a == 'J' && b == 'B'){
            count1++;
            a2++;
        }
        else if(b == 'J' && a == 'B'){
            count2++;
            b2++;
        }
        else if(a == 'B' && b == 'C'){
            count1++;
            a3++;
        }
        else if(b == 'B' && a == 'C'){
            count2++;
            b3++;
        }
        else
            count3++;
    }
    cout<<count1<<" "<<count3<<" "<<n - count1 - count3<<endl;
    cout<<count2<<" "<<count3<<" "<<n - count2 - count3<<endl;
    aaaa(a1,a2,a3);cout<<" ";aaaa(b1,b2,b3);
    return 0;
}
