#include <stdio.h>

int main()
{
    char head, a[10001] = {0};
    int ex = 0;

    scanf("%c%c.%[0-9]E%d", &head, &a[0], a+1, &ex); // �����������
    if (head == '-') printf("-"); // �������λ
    if (ex >= 0)
        for (int i = 0; i < ex+1 || a[i] != 0; i++) { // ��Ϊ�����ƶ����ܻᳬ����Ч���ַ�Χ���ж������������ַ����������ж�
            if (i == ex+1) printf("."); // ��С����λ��ʱ�����С����
            printf("%c", a[i]==0 ? '0' : a[i]); // ������Ч���ַ�Χʱ��0
        }
    else {
        printf("0.");
        for (int i = 1; i < (-ex); i++) printf("0");
        printf("%s", a);
    }

    printf("\n");
    return 0;
}
