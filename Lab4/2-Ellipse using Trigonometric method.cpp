#include<stdio.h>
#include<graphics.h>
#include<math.h>
#define PI 3.14

void plotcircle(int,int,int,int);

int main()
{
    int gd = DETECT,gm,i;
    float a, b, h, k, theta, thetaEnd, step, x, y, xend;
    initgraph(&gd,&gm,"");

    h=219, k=229, a=50, b=60, step=0.005, theta= 0, thetaEnd=(PI*90)/180;

    while (theta < thetaEnd)
    {
        x = a * cos(theta);
        y = b * sin(theta);
        putpixel(x+h, y+k, GREEN);
        putpixel(-x+h, y+k, GREEN);
        putpixel(-x+h, -y+k, GREEN);
        putpixel(x+h, -y+k, GREEN);
        theta += step;
    }

    getch();
    closegraph();

    return 0;
}
