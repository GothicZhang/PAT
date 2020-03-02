#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        scanf("%d", &vec[i]);
    }
    sort(vec.begin(), vec.end());
    printf("%d", vec[0]);
    for(vector<int>::iterator it=vec.begin()+1; it!=vec.end(); it++) {
        printf(" %d", *it);
    }
    return 0;
}