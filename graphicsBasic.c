#include<graphics.h>
#include<stdio.h>

int main()
 {
    int gd = DETECT, gm;
    /* initialization of graphic mode */
    initgraph(&gd, &gm, NULL); 

   // plotting pixel on screen
    putpixel(600,300,5);


    line(100,100,200,200);
    line(100,100,100,200);
    line(100,200,200,200);
    line(100,100,200,200);

line(400,400,500,400);
line(400,400,400,300);
line(400,300,500,300);
line(500,400,500,300);
    

    delay(20000);
    closegraph();

    return 0;
}
