#include <bits/stdc++.h>
using namespace std;
typedef struct PolyNode *Polynomial;

struct PolyNode {
	int coef;
	int expon;
	Polynomial link;
};

Polynomial ReadPoly();
void Attach(int c, int e, Polynomial *pRear);
Polynomial Add(Polynomial P1, Polynomial P2);
Polynomial Mult(Polynomial P1, Polynomial P2);
void PrintPoly(Polynomial P);

int main() {
	Polynomial P1, P2, PP, PS;
	P1 = ReadPoly();
	P2 = ReadPoly();
	PP = Mult(P1, P2);
	PrintPoly(PP);
	PS = Add(P1, P2);
	PrintPoly(PS);
	return 0;
}

Polynomial ReadPoly()
{
	Polynomial P, Rear, t;
	int c, e, N;
	scanf("%d", &N);
	P = (Polynomial)malloc(sizeof(struct PolyNode)); /* 链表头空结点 */
	P->link = NULL;
	Rear = P;
	while (N--) {
		scanf("%d %d", &c, &e);
		Attach(c, e, &Rear); /* 将当前项插入多项式尾部 */
	}
	t = P; P = P->link; free(t); /* 删除临时生成的头结点 */
	return P;
}

void Attach(int c, int e, Polynomial *pRear)
{
	Polynomial P;
	P = (Polynomial)malloc(sizeof(struct PolyNode));
	P->coef = c; /* 对新结点赋值 */
	P->expon = e;
	P->link = NULL;
	(*pRear)->link = P;
	*pRear = P; /* 修改pRear 值 */
}

Polynomial Mult(Polynomial P1, Polynomial P2)
{
	Polynomial P, Rear, t1, t2, t;
	int c, e;
	if (!P1 || !P2)
		return NULL;
	t1 = P1; t2 = P2;
	P = (Polynomial)malloc(sizeof(struct PolyNode));
	P->link = NULL;
	Rear = P;
	while (t2) { /* 先用P1 的第1 项乘以P2 ，得到P */
		Attach(t1->coef*t2->coef, t1->expon + t2->expon, &Rear);
		t2 = t2->link;
	}
	t1 = t1->link;
	while (t1) {
		t2 = P2; Rear = P;
		while (t2) {
			e = t1->expon + t2->expon;
			c = t1->coef * t2->coef;
			while (Rear->link && Rear->link->expon > e)
				Rear = Rear->link;
			if (Rear->link && Rear->link->expon == e) {
				if (Rear->link->coef + c) {
					Rear->link->coef += c;
                } else {
					t = Rear->link;
					Rear->link = t->link;
					free(t);
				}
			} else {
				t = (Polynomial)malloc(sizeof(struct PolyNode));
				t->coef = c;
				t->expon = e;
				t->link = Rear->link;
				Rear->link = t; 
				Rear = Rear->link;
			}
			t2 = t2->link;
		}
		t1 = t1->link;
	}
	t2 = P; P = P->link; free(t2);
	return P;
}

Polynomial Add(Polynomial P1, Polynomial P2)
{
	Polynomial P, Rear, t1, t2, t;
	int sum;
	t1 = P1; t2 = P2;
	P = (Polynomial)malloc(sizeof(struct PolyNode)); P->link = NULL;
	Rear = P;
	while (t1 && t2) {
		if (t1->expon == t2->expon) {
			sum = t1->coef + t2->coef;
			if (sum) {
				Attach(sum, t1->expon, &Rear);
			}
			t1 = t1->link;
			t2 = t2->link;
		} else if (t1->expon > t2->expon) {
			Attach(t1->coef, t1->expon, &Rear);
			t1 = t1->link;
		} else {
			Attach(t2->coef, t2->expon, &Rear);
			t2 = t2->link;
			
		}
	}
	while (t1) {
		Attach(t1->coef, t1->expon, &Rear);
		t1 = t1->link;
	}
	while (t2) {
		Attach(t2->coef, t2->expon, &Rear);
		t2 = t2->link;
	}
	Rear->link = NULL;
	t = P;
	P = P->link;
	free(t);
	return P;
}

void PrintPoly(Polynomial P)
{
	int flag = 0; /* 辅助调整输出格式用 */
	if (!P) {
		printf("0 0\n"); 
		return;
	}
	while (P) {
		if (!flag)
			flag = 1;
		else
			printf(" ");
		printf("%d %d", P->coef, P->expon);
		P = P->link;
	}
	printf("\n");
}