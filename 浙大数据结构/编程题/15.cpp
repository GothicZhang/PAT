#include <bits/stdc++.h>
using namespace std;
int N, E, G[10][10];
bool visited[10] = {false};

void init_visit() {
    for(int i=0; i<N; i++) {
        visited[i] = false;
    }
}

void dfs(int v) {
    // visited[v] = true;
    // printf(" %d", v);
    // for(int i=0; i<N; i++) {
    //     if(!visited[i] && G[v][i]) {
    //         dfs(i);
    //     }
    // }
    int i;
    stack<int> s;
    visited[v] = true;
    printf(" %d", v);
    s.push(v);
    while(!s.empty()) {
        int vertex = s.top();
        for(i=0; i<N; i++) {
            if(!visited[i] && G[vertex][i]) {
                printf(" %d", i);
                s.push(i);
                visited[i] = true;
                break;
            }
        }
        if(i == N) {
            s.pop();
        }
    }
}

void list_dfs() {
    for(int i=0; i<N; i++) {
        if(!visited[i]) {
            printf("{");
            dfs(i);
            printf(" }\n");
        }
    }
}


void bfs(int v) {
    queue<int> q;
    visited[v] = true;
    q.push(v);
    printf(" %d", v);
    while(!q.empty()) {
        int vertex = q.front();
        q.pop();
        for(int i=0; i<N; i++) {
            if(!visited[i] && G[vertex][i]) {
                printf(" %d", i);
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

void list_bfs() {
    for(int i=0; i<N; i++) {
        if(!visited[i]) {
            printf("{");
            bfs(i);
            printf(" }\n");
        }
    }
}

int main() {
    scanf("%d %d", &N, &E);
    int a, b;
    for(int i=0; i<E; i++) {
        scanf("%d %d", &a, &b);
        G[a][b] = G[b][a] = 1;
    }
    list_dfs();
    init_visit();
    list_bfs();
    return 0;
}