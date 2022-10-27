#include <stdio.h>
struct madhu
{
    int m;
    char a[10];
    char P;
    float d;
    // double a;
    int *q;
};
struct madhu s1;
int main()
{
    struct madhu s1 = {1, "12545454678", 'c', 555.7, 10};
    // printf("size of struct %d\n", sizeof(struct madhu));
    // printf("size of struct %d\n", sizeof(s1.m));
    // printf("size of struct %d\n", sizeof(s1.P));
    // printf("size of struct %d\n", sizeof(s1.q));
    // printf("size of struct %d\n", sizeof(s1.d));
    // printf("size of struct %d\n", sizeof(s1.a));
    st(&s1);
}

void st(struct madhu *s2)
{
    printf("%d,%s,%c,%f,%d", s2->m, s2->a, s2->P, s2->d, s2->q);
}
