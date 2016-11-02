#include<graphics.h>
#include <stdio.h>
#include<math.h>
void display(int xc , int yc ,int x, int y);

int main()
{
   int xc=250,yc=250;

   int major, minor;

   int x,y;

   int p1,p2;

   int gd , gm;
   gd=DETECT;

   int cond1,cond2;

// entering major and minor axis by user;
printf("Enter length of major axis ");
scanf("%d",&major);
major=major/2;

printf("Enter length of minor axis ");
scanf("%d",&minor);
minor=minor/2;

// starting of graph screen
detectgraph(&gd,&gm);
initgraph (&gd,&gm,"C:\cygnus\cygwin-b20\H-i586-cygwin32\bin");

// intialising x and y coordinate for region 1
x=0;
y=minor;



// intialising p1
p1=(minor*minor)-(major*major*minor)+(major*major)/4;

//for region1
display( xc,yc,x,y);
// for region 1
while(2*minor*minor*x<=2*major*major*y)
{
x=x+1;
if(p1<=0)
{
p1=p1+(2*minor*minor*x)+(minor*minor);
}
else
{
y=y-1;
p1=p1+(2*minor*minor*x)+(minor*minor)-(2*major*major*y);
}
display( xc,yc,x,y);
/*
x=-x;
display( xc,yc,x,y);
x=-x;
*/

}

//for region 2

x=major;
y=0;
display( xc,yc,x,y);
p2=(major*major)+(2*(minor*minor*major))+(minor*minor)/4;
while(2*minor*minor*x>2*major*major*y)
{
y++;
if(p2>0)
{
p2=p2+(major*major)-(2.0*major*major*y);
}
else
{
x=x-1;
p2=p2+(2.0*minor*minor*x)-(2.0*major*major*y)+(major*major);
}
display( xc ,  yc , x,  y);

/*
y=-y;
display( xc,yc,x,y);
y=-y;
*/
}


delay(20000);
closegraph();

return 0;
}
void display(int xc , int yc ,int x, int y)
{
putpixel(xc+x,yc+y,1);
putpixel(xc-x,yc+y,1);
putpixel(xc-x,yc-y,1);
putpixel(xc+x,yc-y,1);

}
