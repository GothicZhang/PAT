#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, thisNum, maxNum;
    int a[100001];
    // thisNum = 0;
    // maxNum = -1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    thisNum = maxNum = a[0];
    // for(int i = 0; i < n; i++) {
    //     thisNum += a[i];
    //     if(thisNum < 0) {
    //         thisNum = 0;
    //     } else if(thisNum > maxNum) {
    //         maxNum = thisNum;
    //     }
    // }
    for(int i=1; i<n; i++) {
        thisNum = max(thisNum+a[i], a[i]);
        maxNum = max(thisNum, maxNum);
        printf("thisNum:%d\tmaxNum:%d\n" ,thisNum, maxNum);
    }
    printf("%d", maxNum);
    return 0;
}\