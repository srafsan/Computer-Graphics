#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void gotoxy(int x, int y)
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}
int main()
{
 	int gd,gm,n;
	int w[]={220,140,420,140,420,340,220,340,220,140};
	detectgraph(&gd,&gm);
	initgraph(&gd,&gm,"");
	setcolor(RED);
	drawpoly(5,w);
	n=3;
	int x[] = {100, 110, 340, 210, 300, 380, 0, 0};
	x[n*2]=x[0];
	x[n*2+1]=x[1];
	setcolor(YELLOW);
	drawpoly(n+1,x);
	getch();
 	setcolor(RED);
 	drawpoly(5,w);
 	setfillstyle(SOLID_FILL,BLACK);
 	floodfill(2,2,RED);
 	gotoxy(1,1);
 	getch();
 	getch();

 	cleardevice();
 	closegraph();
 	return 0;
}
