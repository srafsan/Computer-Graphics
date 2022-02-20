#include<bits/stdc++.h>
#include <graphics.h>

using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x1=200,y1=250,x2=200,y2=50,h=200,k=250;
    int xp1,yp1,xp2,yp2;
    int angM=5,angT=0;

    for(int i=0; i<100; i++)
    {
        double th=angM*3.1416/180;
        double thH=angT*3.1416/180;

        line(x1,y1,x2,y2);
        delay(100);

        xp1 = x1*cos(th)-y1*sin(th)-h*cos(th)+k*sin(th)+h;
        yp1 = x1*sin(th)+y1*cos(th)-h*sin(th)-k*cos(th)+k;
        xp2 = x2*cos(th)-y2*sin(th)-h*cos(th)+k*sin(th)+h;
        yp2 = x2*sin(th)+y2*cos(th)-h*sin(th)-k*cos(th)+k;

        if(angM%360 == 0)
        {
            angT += 5;
            x1 = x1*cos(thH)-y1*sin(thH)-h*cos(thH)+k*sin(thH)+h;
            y1 = x1*sin(thH)+y1*cos(thH)-h*sin(thH)-k*cos(thH)+k;
            x2 = x2*cos(thH)-y2*sin(thH)-h*cos(thH)+k*sin(thH)+h;
            y2 = x2*sin(thH)+y2*cos(thH)-h*sin(thH)-k*cos(thH)+k;
            angM=5;
        }

        line(xp1,yp1,xp2,yp2);
        delay(100);
        cleardevice();
        putpixel(h,k,4);
        angM += 5;
    }

    getch();
    return 0;
}
