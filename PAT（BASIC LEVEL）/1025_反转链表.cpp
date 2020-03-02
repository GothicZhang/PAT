#include <bits/stdc++.h>
using namespace std;

struct node {
    int addr;
    int data;
    int next;
}nodes[100000];

int main() {
    int firstAddr, n, k;
    scanf("%d %d %d", &firstAddr, &n, &k);
    int addr, data, next, count = 0;
    vector<node> v;
    for(int i = 0; i < n; i++) {
        scanf("%d %d %d", &addr, &data, &next);
        nodes[addr].addr = addr;
        nodes[addr].data = data;
        nodes[addr].next = next;
    }
    while(firstAddr != -1) {
        v.push_back(nodes[firstAddr]);
        firstAddr = nodes[firstAddr].next;
        count++;
    }
    for(int i = 0; i+k <= count; i += k) {
        reverse(v.begin()+i, v.begin()+i+k);
    }
    for(int i = 0; i < count-1; i++) {
        v[i].next = v[i+1].addr;
    }
    // v[count-1].next = -1;
    for(int i = 0; i < count-1; i++) {
        printf("%05d %d %05d\n", v[i].addr, v[i].data, v[i].next);
    }
    // printf("%05d %d %d", v[count-1].addr, v[count-1].data, v[count-1].next);
    printf("%05d %d -1", v[count-1].addr, v[count-1].data);

    return 0;
}