#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <dos.h>
#include <stdlib.h>
#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()

int main()
{
int gd=DETECT,gm,x1,y1,x2,y2,a=0;
initgraph (&gd, &gm,"..\\bgi");

delay(40);
cleardevice();
line (200,150,400,150);
line (200,150,140,210);
line (200,150,240,220);
line (400,150,450,220);
line (240,220,450,220);


line (145,205,145,280);
line (235,213,235,310);
line (145,280,235,310);
line (445,220,445,290);
line (235,310,445,290);

line (145,280,130,288);
line (235,310,237,328);
line(445,290,466,301);

line(130,288,237,328);
line (237,328,466,301);
rectangle(170,270,200,230);


line (335,240,335,300);
line(360,240,360,297);
line (335,240,360,240);

line (347.5,240,337,238);
line(347.5,240,339,235);
line (347.5,240,342,232);
line(347.5,240,347,230);
line (347.5,240,352,232);
line (347.5,240,355,235);
line(347.5,240,357,238);


ellipse (347,250,336,210,15,20);
line (334,240,334,300);
line (333,240,333,300);
line (332,240,332,300);

line (361,240,361,297);
 line (362,240,362,297);
//window
line (176,270,176,230);
line (182,270,182,230);
line(188,270,188,230);
line (194,270,194,230);
//sun
circle(100,65,25);


line (75,65,30,65);
line (82,82,54,105);
line(100,90,100,125);
line (118,84,144,110);
line (125,65,170,65);
line (118,48,148,18);
line(100,40,100,5);
line (82,48,52,18);


line(76,75,65,80);
line (90,88,84,100);
line(110,87,115,100);
line (124,75,137,82);
line(123,57,137,50);
line (110,43,116,30);
line (90,40,85,27);
line (76,55,62,51);


line(1,205,100,220);
line(100,220,80,225);
line (80,225,145,230);
line(442,210,500,205);
line(500,205,485,210);
line (485,210,540,205);
line(540,205,525,210);
line (525,210,650,215);
//river down line
line (1,290,80,276);
line (80,276,70,282);
line (70,282,145,270);
line(445,280,525,288);
line (515,285,650,310);

//man
circle(170,355,15);
line(170,370,170,420);
line(170,380,155,405);
line(170,380,185,405);
line(170,420,155,455);
line(170,420,185,455);


//cloud
//1st cloud
ellipse (200,30,60,240,10,15);
ellipse (225,20,345,165,20,15);
ellipse (262,27,340,160,20,15);
ellipse (268,42,230,50,20,10);
ellipse (226,46,163,340,31,15);
ellipse (300,21,20,182,21,19);
ellipse (325,31,290,100,21,15);
ellipse (299,45,228,20,33,11);
//2nd right cloud
ellipse (450,30,60,240,10,15); ;
ellipse (475,20,345,165,20,15);
ellipse(512,27,340,160,20,15);
ellipse (518,42,230,50,20,10);
ellipse (476,46,163,340,31,15);

getch();
closegraph();

return 0;
}