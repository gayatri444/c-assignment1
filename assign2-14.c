//Accept the x and y coordinate of a point and find the quadrant in which the point lies.
#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter x & y Co-ordinates : ");
    scanf("%f%f",&x,&y);
    if(x == 0 && y == 0)
    printf("\n The point is at origin it self");
else if (x > 0 && y > 0)
printf("\n  the point lies in QUADRANT-I");

else if (x < 0 && y > 0)
printf("\n  the point lies in QUADRANT-II");

else if (x < 0 && y > 0)
printf("\n  the point lies in QUADRANT-III");

else if (x > 0 && y < 0)
printf("\n  the point lies in QUADRANT-Iv");

else if(x ==0)
printf("\n the point lies on the Y-AXIS");

else
printf("\n the point lies on the X-AXIS");

return 0;

}