#include <graphics.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x1=20,y1=50,x2=30,y2=50,x3=25,y3=25,h=50,k=50;
    int xp1,yp1,xp2,yp2,xp3,yp3;
    double th=90*3.1416/180;
    xp1=x1*cos(th)-y1*sin(th)-h*cos(th)+k*sin(th)+h;
    yp1=x1*sin(th)+y1*cos(th)-h*sin(th)-k*cos(th)+k;
    xp2=x2*cos(th)-y2*sin(th)-h*cos(th)+k*sin(th)+h;
    yp2=x2*sin(th)+y2*cos(th)-h*sin(th)-k*cos(th)+k;
    xp3=x3*cos(th)-y3*sin(th)-h*cos(th)+k*sin(th)+h;
    yp3=x3*sin(th)+y3*cos(th)-h*sin(th)-k*cos(th)+k;

    cout<<xp1<<"_"<<yp1<<"_"<<xp2<<"_"<<yp2<<"_"<<xp3<<"_"<<yp3;
    putpixel(h,k,10);
    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x2,y2,x3,y3);
    line(xp1,yp1,xp2,yp2);
    line(xp1,yp1,xp3,yp3);
    line(xp2,yp2,xp3,yp3);

    getch();
    return 0;
}
