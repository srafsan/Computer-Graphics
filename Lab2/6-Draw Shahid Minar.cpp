#include<graphics.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    line( 11, 405, 533, 405);

    rectangle(191, 110, 328, 405);
    rectangle(267, 128, 311, 405);
    rectangle(207, 128, 251, 405);
    circle(257, 290, 84);
    rectangle(98, 196, 148, 405);
    rectangle(106, 207, 138, 405);
    rectangle(44, 237, 83, 405);
    rectangle(53, 247, 75, 405);
    rectangle(367, 196, 418, 405);
    rectangle(377, 207, 409, 405);
    rectangle(432, 237, 471, 405);
    rectangle(441, 247, 463, 405);
  getch();

}
