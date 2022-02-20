#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    line(90,62,244,62);
    circle(160,182,75);
    rectangle(100,338,263,453);


    getch();
    closegraph();
    return 0;
}
