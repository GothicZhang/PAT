#include <bits/stdc++.h>
using namespace std;
int N, pos=0;
vector<int> tree(10000), data;

void inorder(int root) {
    if(root > N) return;
    int left = root*2;
    int right = root*2 + 1;
    inorder(left);
    tree[root] = data[pos++];
    inorder(right);
}

int main() {
    scanf("%d", &N);
    data.resize(N);
    for(int i=0; i<N; i++) {
        scanf("%d", &data[i]);
    }
    sort(data.begin(), data.end());
    inorder(1);
    printf("%d", tree[1]);
    for(int i=2; i<=N; i++) {
        printf(" %d", tree[i]);
    }
    return 0;
}