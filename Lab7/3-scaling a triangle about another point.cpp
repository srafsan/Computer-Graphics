#include<bits/stdc++.h>
#include<graphics.h>
#include<math.h>

using namespace std;

int main()
{
    int h=80, k=80, gd = DETECT, gm,
        x1=40,y1=80,x2=80,y2=80,x3=60,y3=40;
    float a=2.0, b=2.0;

    initgraph(&gd, &gm, "");
    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x2,y2,x3,y3);

    x1=a*x1 - a*h + h;
    y1=b*y1 - b*k + k;
    x2=a*x2 - a*h + h;
    y2=b*y2 - b*k + k;
    x3=a*x3 - a*h + h;
    y3=b*y3 - b*k + k;

    line(x1,y1,x2,y2);
    line(x1,y1,x3,y3);
    line(x2,y2,x3,y3);
    getch();
}
