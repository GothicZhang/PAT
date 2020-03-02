#include <bits/stdc++.h>
using namespace std;

#define MaxTree 10
#define Null -1

struct TreeNode {
    int data;
    int left;
    int right;
}T[MaxTree];

int BuildTree(struct TreeNode T[]);
void PrintLeaves(int root);

int main() {
    int R;
    R = BuildTree(T);
    PrintLeaves(R);
    return 0;
}

int BuildTree(struct TreeNode T[]) {
    int N;
    scanf("%d", &N);
    int check[MaxTree], Root = Null;
    char cl, cr;
    if(N) {
        for(int i = 0; i < N; i++) check[i] = 0;
        for(int i = 0; i < N; i++) {
            scanf("\n%c %c", &cl, &cr);
            T[i].data = i;
            if(cl != '-') {
                T[i].left = cl - '0';
                check[T[i].left] = 1;
            } else {
                T[i].left = Null;
            }
            if(cr != '-') {
                T[i].right = cr - '0';
                check[T[i].right] = 1;
            } else {
                T[i].right = Null;
            }
        }
        for(int i = 0; i < N; i++) {
            if(!check[i]) {
                Root = i;
                break;
            }
        }
    }
    return Root;
}

void PrintLeaves(int root) {
    queue<int> q;
    int t, count = 0;// count 为了输出空格
    q.push(root);
    while(!q.empty()) {
        t = q.front();
        q.pop();
        if(T[t].left == -1 && T[t].right == -1) {
            if(count) printf(" ");
            printf("%d", T[t].data);
            count++;
        }
        if(T[t].left != -1) q.push(T[t].left);
        if(T[t].right != -1) q.push(T[t].right);
    }
}