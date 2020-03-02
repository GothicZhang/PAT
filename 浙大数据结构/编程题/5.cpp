#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, n, k;
    scanf("%d %d %d", &m, &n, &k);
    while(k--) {
        stack<int> s;
        vector<int> v(n+1);
        for(int i = 1; i <= n; i++) {
            scanf("%d", &v[i]);
        }
        int cur = 1;
        for(int i = 1; i <= n; i++) {
            s.push(i);
            // 每进一个数字判断有无栈溢出，溢出则不行
            if(s.size() > m) {
                break;
            }
            // 判断数组数字是否与栈顶元素相等，相等则出栈
            while(!s.empty() && s.top() == v[cur]) {
                s.pop();
                cur++;
            }

        }
        // 如果所有数组数字都能遍历到即出栈顺序正确
        if(cur == n+1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}