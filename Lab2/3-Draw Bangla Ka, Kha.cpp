#include<graphics.h>
#include<conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    initwindow(getmaxwidth(), getmaxheight());
    line(50, 600, 300, 600);
    line(175, 600, 50, 700);
    line(50, 700, 175, 800);
    line(175, 600, 175, 800);
    arc(175, 600, -45, 0, 50);
    getch();
}
