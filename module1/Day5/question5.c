#include<stdio.h>
struct point
{
    int x;
    int y;

};
void swap(struct point *s1,struct point *s2)
{
    int temp= s1->x;
    s1->x=s2->x;
    s2->x=temp;

    temp=s1->y;
    s1->y=s2->y;
    s2->y=temp;



}

int main()
{
    struct point s1,s2;
    s1.x=10;
    s1.y=20;

    s2.x=30;
    s2.y=40;

    printf("before swapping:\n");
    printf("%d\n",s1.x);
    printf("%d\n",s1.y);
    printf("%d\n",s2.x);
    printf("%d\n",s2.y);

    swap(&s1,&s2);

    printf("after swapping:\n");
    printf("%d\n",s1.x);
    printf("%d\n",s1.y);
    printf("%d\n",s2.x);
    printf("%d\n",s2.y);


    return 0;
}