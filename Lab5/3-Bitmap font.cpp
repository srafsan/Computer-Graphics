#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int i,j,k,x,y;
    int gd=DETECT,gm;

    int ch1[][11]={ {0,0,1,1,1,1,1,0,0,0},
                    {0,0,0,1,1,1,0,0,0,0},
                    {0,0,0,1,1,1,0,0,0,0},
                    {0,0,0,1,1,1,0,0,0,0},
                    {0,0,0,1,1,1,0,0,0,0},
                    {0,0,0,1,1,1,0,0,0,0},
                    {0,0,0,1,1,1,0,0,0,0},
                    {0,0,0,1,1,1,0,0,0,0},
                    {0,0,0,1,1,1,0,0,0,0},
                    {0,0,0,1,1,1,0,0,0,0},
                    {0,0,1,1,1,1,1,0,0,0}};
    int ch2[][11]={ {0,0,1,1,1,1,1,0,0,0},
                    {0,0,0,1,1,1,0,0,0,0},
                    {0,0,0,1,1,1,0,0,0,0},
                    {0,0,0,1,1,1,0,0,0,0},
                    {0,0,0,1,1,1,0,0,0,0},
                    {0,0,0,1,1,1,0,0,0,0},
                    {0,0,0,1,1,1,0,0,0,0},
                    {0,0,0,1,1,1,0,0,0,0},
                    {0,0,0,1,1,1,0,0,0,0},
                    {0,0,0,1,1,1,0,0,0,0},
                    {0,0,1,1,1,1,1,0,0,0}};
    int ch3[][11]={ {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,0,0,0,0,0,0,1,1},
                    {1,1,1,1,1,1,1,1,1,1},
                    {1,1,1,1,1,1,1,1,1,1}};

    int ch4[][11]={ {1,1,1,1,1,1,1,1,0,0},
                    {1,1,1,1,1,1,1,1,0,0},
                    {1,1,0,0,0,0,0,0,0,0},
                    {1,1,0,0,0,0,0,0,0,0},
                    {1,1,0,0,0,0,0,0,0,0},
                    {1,1,0,0,0,0,0,0,0,0},
                    {1,1,0,0,0,0,0,0,0,0},
                    {1,1,0,0,0,0,0,0,0,0},
                    {1,1,0,0,0,0,0,0,0,0},
                    {1,1,1,1,1,1,1,1,0,0},
                    {1,1,1,1,1,1,1,1,0,0}};

    initgraph(&gd,&gm,"D:\\TC\\BGI");
    setbkcolor(LIGHTGRAY);//
    for(k=0;k<4;k++)
    {
        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                if(k==0)
                {
                    if(ch1[i][j]==1)
                    putpixel(j+250,i+230,WHITE);
                }
                if(k==1)
                {
                    if(ch2[i][j]==1)
                    putpixel(j+300,i+230,WHITE);
                }
                if(k==2)
                {
                    if(ch3[i][j]==1)
                    putpixel(j+350,i+230,WHITE);
                }
                if(k==3)
                {
                    if(ch4[i][j]==1)
                    putpixel(j+400,i+230,WHITE);
                }
            }
            delay(200);
        }
    }
    getch();
    closegraph();
}
