#include<iostream>
#include<cstring>
using namespace std;
int main() {
    char A[1100], Q[1100];
    int B, i, j, length, sum;
    cin>>A>>B;
    length = strlen(A);
    sum = 0;
    for(i = 0, j = 0; i < length; i++) {
        sum = 10 * sum + A[i] - '0';
        if(i == 0 && sum < B && length > 1) {

        }
        else {
            Q[j++] = sum / B + '0';
        }
        sum = sum % B;
    }
    Q[j] = '\0';
    cout<<Q<<" "<<sum<<endl;
    return 0;
}
