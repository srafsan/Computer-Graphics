#include <graphics.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x=20,y=250;
    int xp,yp,th=(30*3.1416)/180;
    xp=(x*cos(30))-(y*sin(30));
    yp=(x*sin(30))+(y*cos(30));
    putpixel(x,y,10);
    putpixel(xp,yp,10);

    getch();
    return 0;
}
