#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    circle(300,230,100);
    circle(250,210,15);
    circle(350,210,15);
    arc(300,260,180,360,40);

    getch();
    closegraph();
    return 0;
}
