#include <bits/stdc++.h>
using namespace std;
int n, i, j;
int init[100], sorted[100];

int main() {
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &init[i]);
    }
    for(i=0; i<n; i++) {
        scanf("%d", &sorted[i]);
    }

    for(i=0; sorted[i]<=sorted[i+1] && i<n-1; i++); // i 表示排序后数组中已经排好的元素个数
    for(j=i+1; sorted[j]==init[j] && j<n; j++); // j 表示从 i 后两个数组是否一致

    if(j == n) { // 如果一致则是插入排序
        printf("Insertion Sort\n");
        sort(init, init+i+2);
    } else {
        printf("Merge Sort\n");
        for(int range=2; range<n; range*=2) { // 从归并长度为 2 开始，逐步试探当前长度大小
            for(i=0; i<n; i+=range) {
                if(i+range >= n) {
                    sort(init+i, init+n);
                } else {
                    sort(init+i, init+i+range);
                }
            }
            if(equal(init, init+n, sorted)) { // 如果此时找到归并长度，则进行下一步归并
                range *= 2;
                for(i=0; i<n; i+=range) {
                    if(i+range >= n) {
                        sort(init+i, init+n);
                    } else {
                        sort(init+i, init+i+range);
                    }
                }
                break;
            }
        }
        
    }

    printf("%d", init[0]);
    for(i=1; i<n; i++) {
        printf(" %d", init[i]);
    }
    return 0;
}
