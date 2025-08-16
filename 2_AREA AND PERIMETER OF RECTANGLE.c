//AREA AND PERIMETER OF RECTANGLE
#include<stdio.h>
void main()
{
    int l,br,ar,pr ;
    printf("enter the length and breadth of rectangle:-");
    scanf("%d%d",&l,&br);
    ar=l*br;
    pr=2*(l+br);
    printf("the area=%d",ar);
    printf("\nPerimeter=%d",pr);
}
