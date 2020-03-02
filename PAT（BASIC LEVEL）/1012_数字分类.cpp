#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    int exist[5]={0};//表明五类值的个数
    int num, i;
    int A[5]={0};
    double A3;
    cin>>num;
    while(num--)
    {
        cin>>i;
        int temp = i%5;
        switch(temp)
        {
        case 0:
            if (i%2==0)
            {
                exist[0]++;
                A[0] += i;
            }
            break;
        case 1:
            exist[1]++;
            if(exist[1] %2==1)
                A[1] += i;
            else
                A[1] -= i;
            break;
        case 2:
            exist[2]++;
            A[2]++;
            break;
        case 3:
            exist[3]++;
            A[3] += i;
            break;
        case 4:
            exist[4]++;
            if(i>A[4])
                A[4] = i;
        }
    }

    for(int i=0;i<3;i++)
    {
        if(exist[i]!=0)
            cout<<A[i]<<" ";
        else
            cout<<"N ";
    }
    if(exist[3]!=0)
    {
        A3 = (double)A[3]/exist[3];
        cout << setiosflags( ios::fixed ) << setprecision( 1 ) << A3 <<" ";//控制输出格式
    }
    else
        cout<<"N ";
    if(exist[4]!=0)
        cout<<A[4];
    else
        cout<<"N";
    return 0;
}
