#include<bits/stdc++.h>
#include <graphics.h>
#include<math.h>

using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x=20,y=250,h=100,k=200;
    int xp,yp,th=30;
    xp=x*cos(th)-y*sin(th)-h*cos(th)+k*sin(th)+h;
    yp=x*sin(th)+y*cos(th)-h*sin(th)-k*cos(th)+k;
    putpixel(x,y,10);
    putpixel(xp,yp,10);

    getch();
    return 0;
}
