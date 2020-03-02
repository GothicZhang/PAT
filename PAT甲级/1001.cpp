#include<bits/stdc++.h>
int main() {
    int a, b, sum;
    scanf("%d%d", &a, &b);
    sum = a + b;
    if(abs(sum) < 1000)
      printf("%d", sum);
    return 0;
}