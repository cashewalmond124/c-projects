#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>

void lineth(double theta,int y,int bitt){
double l,s,x,rad,tanv;
int si,i,j,k,xi,li;
l = (double)bitt/y;
if(l>(int)l+0.5){
li = ceil(l);
}
else{
li = floor(l);
}
printf("\n%d",li);
rad = theta*(3.1415/180);
/* s = (double)1/tan(rad);
if(s>(int)s+0.5){
si= ceil(x);}
else{
si = floor(x);
} */
for(i=y;i>0;i--){
printf("\n");

//if((i%2)!=0){

x = (double)i/tan(rad);
if(x>(int)x+0.5){
xi = ceil(x);  }
else{
xi= floor(x);
}

//for(i=1;y>=i;i++){
//printf("\n");
//if(xi/2!=0){
for(j=xi;j>0;j--){
printf(" ");
}
for(k=li;k>0;k--){
printf("*");
}

//}
}
}

void rotath(double theta,int bitt){
double rad,y;
int yi,z;
z=bitt;
rad = (3.1415/180)*theta;
y = bitt*sin(rad)+1;
if(y>=(int)y+0.5){
yi=ceil(y);
}
else{
yi=floor(y);
}
printf("\n%d",yi);
lineth(theta,yi,z);
}

void main(){
int i,j,k;
scanf("%d%d",&i,&j);
for(j=1;25>=j;j++){
printf("\n");
}
rotath(i,j);
getch();
}
