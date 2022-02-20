#include<stdio.h>
#include<graphics.h>
#include<math.h>

void plotcircle(int,int,int,int);

int main()
{
    int gd=DETECT,gm;
    float xc, yc, x, y, xend, r, d, h, k, a, b, step, t, te;
    initgraph(&gd,&gm,"");

    h = 319, k = 239, a = 50, b = 40, step = 0.5;
    x = 0;
    xend = a;

    while(x < xend)
    {
        t= (1-((x * x)/ (a * a)));
        te = (t<0)? -t : t;

        y=b * sqrt (te);
        putpixel (h+x, k+y, GREEN);
        putpixel (h-x, k+y, GREEN);
        putpixel (h+x, k-y, GREEN);
        putpixel (h-x, k-y, GREEN);
        x+=step;
    }
    getch();
    closegraph();
    return 0;
}
