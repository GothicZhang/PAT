#include <bits/stdc++.h>
using namespace std;
int N;
vector<int> pre, ino, pos;
int findPos(int x); // 找出前序中第 x 个元素在中序的位置
// void post(int left, int right, int ro_pos); // 输出后序，参数为中序的左、右边界，前序的根位置

struct TreeNode {
    int val;
    TreeNode *left, *right;
};

TreeNode* build(int left, int right, int ro_pos) {
    if(left > right) return NULL;
    int ino_pos = findPos(ro_pos);
    TreeNode* t = new TreeNode();
    t->left = build(left, ino_pos-1, ro_pos+1); // 递归左子树
    t->right = build(ino_pos+1, right, (ro_pos+ino_pos-left+1)); // 递归右子树
    t->val = pre[ro_pos];
    return t;
}


void poster(TreeNode * t) {
    if(t) {
        poster(t->left);
        poster(t->right);
        pos.push_back(t->val);
    }
}

int main() {
    scanf("%d", &N);
    stack<int> sta;
    for(int i = 0; i < 2*N; i++) {
        string s;
        int data;
        cin >> s;
        if(s[1] == 'u') {
            scanf("%d", &data);
            sta.push(data);
            pre.push_back(data);
        } else {
            data = sta.top();
            sta.pop();
            ino.push_back(data);
        }
    }
    poster(build(0, N-1, 0));
    
    printf("%d", pos[0]);
    for(int i = 1; i < N; i++) {
        printf(" %d", pos[i]);
    }
    return 0;
}

int findPos(int x) {
    int i;
    for(i = 0; i < N; i++) {
        if(ino[i] == pre[x]) break;
    }
    return i;
}

// void post(int left, int right, int ro_pos) {
//     if(left > right) return;
//     int ino_pos = findPos(ro_pos);
//     post(left, ino_pos-1, ro_pos+1); // 递归左子树
//     post(ino_pos+1, right, (ro_pos+ino_pos-left+1)); // 递归右子树
//     pos.push_back(pre[ro_pos]);
// }

