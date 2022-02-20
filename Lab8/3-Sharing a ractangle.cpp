#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    int x1=100,y1=100,x2=200,y2=100,x3=200,y3=200,x4=100,y4=200;
    float a=1.1;
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x4,y4);
    line(x4,y4,x1,y1);
    x1=x1+a*y1;
    x2=x2+a*y2;
    x3=x3+a*y3;
    x4=x4+a*y4;
    setcolor(WHITE);
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x4,y4);
    line(x4,y4,x1,y1);

    getch();
}
