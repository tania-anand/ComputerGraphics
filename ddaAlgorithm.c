#include <graphics.h>
#include <stdio.h>
#include <math.h>

int main( )
{ 
// x1 and y1 for starting points
// x2 and y2 for ending points
// dx and dy for change in x and y respectively
// x and y ae variables that are uset to plot the line
    float x,y,x1,y1,x2,y2,dx,dy,pixel;


    int i,gd,gm;

    printf("Enter the value of x1 : ");
    scanf("%f",&x1);
    printf("Enter the value of y1 : ");
    scanf("%f",&y1);
    printf("Enter the value of x2 : ");
    scanf("%f",&x2);
    printf("Enter the value of y2 : ");
    scanf("%f",&y2);

    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,NULL);

    dx=abs(x2-x1);
    dy=abs(y2-y1);

    if(dx>=dy)
    pixel=dx;

    else
    pixel=dy;

    dx=dx/pixel;
    dy=dy/pixel;

    x=x1;
    y=y1;

    i=1;
    while(i<=pixel)
    {
          putpixel(x,y,1);
          x=x+dx;
          y=y+dy;
          i=i+1;
          delay(100);
    }

    delay(16000);

    closegraph();
}
