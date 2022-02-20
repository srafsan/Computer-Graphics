#include <graphics.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x1=100,y1=200,x2=200,y2=200,x3=150,y3=150,h=200,k=200;
    int xp1,yp1,xp2,yp2,xp3,yp3;
    int ang=10;
    putpixel(h,k,10);
    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x2,y2,x3,y3);
    delay(100);
    for(int i=0; i<100; i++)
    {

        double th=ang*3.1416/180;
        xp1=x1*cos(th)-y1*sin(th)-h*cos(th)+k*sin(th)+h;
        yp1=x1*sin(th)+y1*cos(th)-h*sin(th)-k*cos(th)+k;
        xp2=x2*cos(th)-y2*sin(th)-h*cos(th)+k*sin(th)+h;
        yp2=x2*sin(th)+y2*cos(th)-h*sin(th)-k*cos(th)+k;
        xp3=x3*cos(th)-y3*sin(th)-h*cos(th)+k*sin(th)+h;
        yp3=x3*sin(th)+y3*cos(th)-h*sin(th)-k*cos(th)+k;
        line(xp1,yp1,xp2,yp2);
        line(xp1,yp1,xp3,yp3);
        line(xp2,yp2,xp3,yp3);
        delay(100);
        ang+=5;
        if(ang%360==0){
            ang=5;
        }
    }

    getch();
    return 0;
}
