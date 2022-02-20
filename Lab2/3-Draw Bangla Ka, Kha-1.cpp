//Draw Bangla Kha
#include<graphics.h>
#include<conio.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    initwindow(getmaxwidth(), getmaxheight());

    arc(550, 600, 230, 0, 50);
    line(600, 600, 600, 700);
    line(600, 700, 700, 700);
    line(700, 700, 700, 600);

    getch();
}
