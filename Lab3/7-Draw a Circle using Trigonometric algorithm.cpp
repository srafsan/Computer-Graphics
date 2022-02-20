#include<graphics.h>
#include<math.h>
#define PI 3.14159

void plotcircle(int xc,int yc,int x,int y)
{
    putpixel(xc+x,yc+y,2);
    putpixel(xc-x,yc+y,2);
    putpixel(xc+x,yc-y,2);
    putpixel(xc+y,yc+x,2);
    putpixel(xc-y,yc-x,2);
    putpixel(xc-y,yc+x,2);
    putpixel(xc+y,yc-x,2);
    putpixel(xc-x,yc-y,2);
}

int main()
{
    int gd = DETECT, gm,
        xc, yc, x, y, xend, r, d, theta;
    float p;

    initgraph(&gd, &gm, "");

    xc = 100;
    yc = 100;

    printf("Enter radius: ");
    scanf("%d", &r);

    theta = 0;
    p = (PI*45);
    plotcircle(xc, yc, x, y);

    while(theta <= p)
    {
        x = r*cos(theta);
        y = r*sin(theta);
        plotcircle(xc, yc, x, y);
        theta++;
    }
    getch();
    closegraph();
}
