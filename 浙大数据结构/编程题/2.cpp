#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, thisNum, maxNum, left, right, temp;
    int a[100001];
    scanf("%d", &n);
    thisNum = 0;
    maxNum = -1;
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++) {
        thisNum += a[i];
        if(thisNum < 0) {
            thisNum = 0;
            temp = i + 1;
        } else if(thisNum > maxNum) {
            maxNum = thisNum;
            left = temp;
            right = i;
        }
    }
    // If all the K numbers are negative, then its maximum sum is defined to be 0, output the first and the last numbers of the whole sequence.
    if(maxNum < 0) { 
        printf("%d %d %d", 0, a[0], a[n-1]);
    } else
        printf("%d %d %d", maxNum, a[left], a[right]);
    return 0;
}