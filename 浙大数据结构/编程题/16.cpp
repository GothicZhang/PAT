#include <bits/stdc++.h>
using namespace std;
int N, D;
bool visited[100] = {false};

struct crocodiles {
    double x;
    double y;
}cro[100];

bool jump(int x1, int y1, int x2, int y2) {
    return (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) <= D*D; // 两点距离小于可跳距离
}

bool is_safe(int v) {
    return (cro[v].x + D >= 50 || cro[v].y + D >=50 || cro[v].x - D <= -50 || cro[v].y - D <= -50); // 007能否跳到岸边
}

bool dfs(int v) {
    bool answer = false;
    visited[v] = true;
    if(is_safe(v)) answer = true;
    else {
        for(int i=0; i<N; i++) {
            if(!visited[i] && jump(cro[v].x, cro[v].y, cro[i].x, cro[i].y)) {
                answer = dfs(i);
                if(answer) break;
            }
        }
    }
    return answer;
}

bool first_jump(int x, int y) {
    return x*x + y*y <= (7.5+D)*(7.5+D);
}

void save_007() {
    bool answer=false;
    for(int i=0; i<N; i++) {
        if(!visited[i] && first_jump(cro[i].x, cro[i].y)) {
            answer = dfs(i);
            if(answer) break;
        }
    }
    if(answer) printf("Yes\n");
    else printf("No\n");
}

int main() {
    scanf("%d %d", &N, &D);
    for(int i=0; i<N; i++) {
        scanf("%lf %lf", &cro[i].x, &cro[i].y);
    }
    save_007();
    return 0;
}