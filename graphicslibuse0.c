/*
#include<conio.h>
#include<stdio.h>
#include<graphics.h>

void main(){


int gd = DETECT,gm;
int i;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
setcolor(BLUE);
for(i=0;25>=i;i++){
cleardevice();
circle(500,200,50+i);
getch();
}
printf("width ;%d  height ;%d",getmaxx(),getmaxy());
for(i=0;600>=i;i=i+10){
line(i,0,getmaxx(),getmaxy());
getch();
}
getch();

closegraph();
}
*/