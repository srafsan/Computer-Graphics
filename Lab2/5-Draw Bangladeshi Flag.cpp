#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>

int main()
{
    int gd = DETECT, gm;
    int midx, midy, radius =100;

    initgraph(&gd, &gm, "");
    circle(320,240,100);
    setfillstyle(1,RED);
    floodfill(320,240,WHITE);
    rectangle(40,80,600,400);
    setfillstyle(1,GREEN);
    floodfill(200,200,WHITE);

    getch();
    closegraph();
    return 0;
}
