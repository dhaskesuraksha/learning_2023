#include<stdio.h>
struct box
{
    float h,w,l;
};

float volume(struct box* ptr)
{
    float valume=ptr->h * ptr->w * ptr->l;

return valume;
}

float sarea(struct box* ptr)
{
    float area=2*(ptr->h*ptr->w)+(ptr->l*ptr->h)+(ptr->l*ptr->w);
    return area;
}
int main()
{
    struct box b;

    printf("Enter h,w,l:\n");
    scanf("%f\n",&(b.h));
    scanf("%f\n",&(b.w));
    scanf("%f",&(b.l));
    
    
     struct box *ptr=&b;

  float result= volume(ptr);
    printf("Volume is:%.2f\n",result);

    float surface_area=sarea(ptr);
    printf("Surface_area is:%.2f\n",surface_area);

    return 0;
}