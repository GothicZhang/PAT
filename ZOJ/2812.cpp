#include<iostream>
using namespace std;
int main(){
    char ch[300];
    while(cin.getline(ch,300)){
        int sum = 0;
        for(int i = 0;ch[i] != '\0';i++){
            if(ch[i] == ' ')
                continue;
            if(ch[i] == '#')
                return 0;
            sum += (i + 1) * (ch[i] - 'A' + 1);
        }
        cout<<sum<<endl;
    }
    return 0;
}
