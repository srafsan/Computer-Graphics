#include <graphics.h>
int main()
{

    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");
    setbkcolor(10);

    line(250, 10 , 10, 250);
    line(250, 15 , 15, 250);

    line(250, 10, 500, 250);
    line(250, 15, 500, 255);

    line(140, 120,  360, 120);
    line(140, 125,  363, 125);

    getch();
}
