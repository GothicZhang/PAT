#include <bits/stdc++.h>
using namespace std;
int n, i, j;
int init[100], sorted[100];

void down_adjust(int high) {
    int i=0, j=i*2+1;
    while(j < high) {
        if(j+1 < high && sorted[j] < sorted[j+1]) {
            j++;
        }
        if(sorted[i] >= sorted[j]) {
            break;
        }
        swap(sorted[i], sorted[j]);
        i = j;
        j = i*2+1;
    }
}

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
        sort(sorted, sorted+i+2);
    } else {
        j = n-1;
        printf("Heap Sort\n");
        while(j > 1 && sorted[j] >= sorted[0]) {
            j--;
        }
        swap(sorted[0], sorted[j]);
        down_adjust(j);
    }

    printf("%d", sorted[0]);
    for(i=1; i<n; i++) {
        printf(" %d", sorted[i]);
    }
    return 0;
}