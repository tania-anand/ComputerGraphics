#include <graphics.h>
#include <stdio.h>
#include <math.h>

 
int main()
{
// x and y are coordinates
// r is radius
// p is variable that decides where to plot coordinates
  int x,y,p,r;

// gd is in for graphic detecter and gm is for grahic mode
  int gd , gm;

// shifting centre so circle do not form at origin
  int xc=400,yc=400;

// DETECT is key word that is used to detect graphic driver in your system
  gd=DETECT;

  printf("Enter the value of radius");
  scanf("%d",&r);

//intialisation of variables
  x=0;
  y=r;
  p=1-r;

// starting of graph screen
  detectgraph(&gd,&gm);
  initgraph (&gd,&gm,"");
  putpixel(x, r, 5);

  while(x<=y)
  {
    if(p<0)
    {
    p=p+(2*x +3);
    y=y;
    }
    else
    {
    p=p+ 2*(x-y) +5;
    y=y-1;
    }
    x++;
 
    putpixel(xc+x,yc+y,5);
    putpixel(xc-y,yc-x,5);
    putpixel(xc+y,yc-x,5);
    putpixel(xc-y,yc+x,5);
    putpixel(xc+y,yc+x,5);
    putpixel(xc-x,yc-y,5);
    putpixel(xc+x,yc-y,5);
    putpixel(xc-x,yc+y,5);
  }


// so screen stops for seconds and then exit;
  delay(110000);
  closegraph();
return 0;
}
