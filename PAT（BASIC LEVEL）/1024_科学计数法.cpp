#include <stdio.h>

int main()
{
    char head, a[10001] = {0};
    int ex = 0;

    scanf("%c%c.%[0-9]E%d", &head, &a[0], a+1, &ex); // 拆解输入数据
    if (head == '-') printf("-"); // 输出符号位
    if (ex >= 0)
        for (int i = 0; i < ex+1 || a[i] != 0; i++) { // 因为向右移动可能会超出有效数字范围，判断条件增加了字符串结束符判断
            if (i == ex+1) printf("."); // 到小数点位置时，输出小数点
            printf("%c", a[i]==0 ? '0' : a[i]); // 超出有效数字范围时补0
        }
    else {
        printf("0.");
        for (int i = 1; i < (-ex); i++) printf("0");
        printf("%s", a);
    }

    printf("\n");
    return 0;
}
