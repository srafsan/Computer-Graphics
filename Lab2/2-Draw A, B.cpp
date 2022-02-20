#include <graphics.h>
#include <conio.h>

 int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"");
	setlinestyle(0,0,3);
    line(200,200,300,300);
    line(200,200,100,300);
    line(150,250,250,250);

    line(350,200,350,300);
    arc(400,225,270,90,25);
    line(350,200,400,200);
    line(350,250,400,250);
    line(350,300,400,300);
    arc(400,275,270,90,25);
    //rectangle (100,400,100,300);

	getch();
	closegraph();
 return 0;
}
