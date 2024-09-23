#include <stdio.h>

int main()
{
    float x, y;

    printf("Enter the x and y coordinate: ");
    scanf("%f%f", &x,&y);

  
    if (x > 0 && y > 0) 
        printf("The point x=%.2f y= %.2f is in Quadrant I\n", x, y);
    else if (x < 0 && y > 0) 
        printf("The point x=%.2f y= %.2f is in Quadrant II\n", x, y);
    else if (x < 0 && y < 0) 
        printf("The point x=%.2f y= %.2f is in Quadrant III\n", x, y);
    else if (x > 0 && y < 0) 
        printf("The point x= %.2f y= %.2f is in Quadrant IV\n", x, y);
    else if (x == 0 && y == 0) 
        printf("The point x=%.2f y=%.2f is at the Origin\n", x, y);
    else if (x == 0) 
        printf("The point x=%.2f y=%.2f is on the Y-axis\n", x, y);
    else if (y == 0) 
        printf("The point x=%.2f y=%.2f is on the X-axis\n", x, y);
    else 
       
        printf("The point x=%.2f y= %.2f is in an undefined area\n", x, y);
    

    return 0;
}

