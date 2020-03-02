#include<stdio.h>
#include<string.h>

int main(){

    int n;
    int year,month,day;
    int count = 0;  //有效年龄个数
    char name[6], max_name[6], min_name[6];
    long long maxAge = 20140907, minAge = 18140905;

    scanf("%d",&n);


    for(int i = 0; i < n; i++){

        scanf("%s %d/%d/%d",&name,&year,&month,&day);

        //方便年龄比较
        long long birth = year*10000+month*100+day;

        //过滤不合理日期
        if(birth < 18140906 || birth > 20140906);
        else{ //得到最年长和最年轻的人
            count++;
            if(birth < maxAge){ //得到最年长
                strcpy(max_name,name);
                maxAge = birth;
            }
            if(birth > minAge){ //得到最年轻
                strcpy(min_name,name);
                minAge = birth;
            }
        }
    }
    if(count)
        printf("%d %s %s\n",count,max_name,min_name);
    else
        printf("0\n");
    return 0;
}
