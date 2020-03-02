#include<bits/stdc++.h> 
#define MaxSize 100 //最多顶点数 
#define INF 65535  //int的最大值 
using namespace std;  
 
struct MGraph {  
    int n;  
    int m;  
    int s[MaxSize][MaxSize];  
};
MGraph g;
 
 
void FindAnimal() {
	//Floyd 算法，三重循环 建立任意两点的最短距离矩阵 
	for(int k=0; k<g.n; k++) { 
		for(int i=0; i<g.n; i++) {
			for(int j=0; j<g.n; j++) {
				if((i != k) && (j != i)) {
					g.s[i][j] = min(g.s[i][k] + g.s[k][j], g.s[i][j]);					
				}							
			}
		}
	}
	
	int animal;
	//从最长距离中找最端距离 
	int MinDist = INF;
	for(int i=0; i<g.n; i++) {
		//找最长距离 
		int MaxDist = 0; 
		for(int j=0; j<g.n; j++) {
			if((i !=j ) && (g.s[i][j] > MaxDist)) { //i!=j 去掉主对角线元，因为主对角线元肯定是 INF
				MaxDist = g.s[i][j]; 	
			}
		}
 
		if(MaxDist == INF) {//不是一整个连通集，而是多个分的连通集，即：有 i 无法变出的动物 
			cout<<"0"<<endl;
			return;//直接退出 
		}
		if(MaxDist < MinDist) {
			MinDist = MaxDist;
			animal = i+1;// i+1 是因为动物下边从 1 开始 
		} 
	}
	cout << animal << " " << MinDist << endl;
}
 
  
int main() {  
	int n, m, i, j, v1, v2, weight; 
	cin >> n >> m;
	g.n = n;
	g.m = m;

	for(i=0; i<g.n; i++) { 
		for(j=0; j<g.n; j++) {
			g.s[i][j] = INF;
		}
	}

    while(g.m--) {
        cin >> v1>> v2 >> weight;
        --v1;--v2;
        g.s[v1][v2] = weight;	
        g.s[v2][v1] = weight;		
    }

	FindAnimal(); 
	return 0;
}