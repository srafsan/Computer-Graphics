#include<graphics.h>
#include<stdio.h>
#include<math.h>

int main()
{
    float x1,y1,xNEW,yNEW,x2,y2,x1NEW,y1NEW;
    int i;
    initwindow(500,500, "");


    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    int dx,dy,dS,dT,x,y;
    x=x1;
    y=y1;
    dx=x2-x1;
    dy=y2-y1;
    dT=2*(dy-dx);
    dS=2*dy;
    int d = (2*dy) - dx;
    putpixel(x,y,10);
    while(x<x2)
    {
        x++;
        if(d<0)
            d=d+dS;
        else
        {
            y++;
            d=d+dT;
        }
        putpixel(x,y,10);
    }

    getch();
    closegraph();

    return 0;

}
