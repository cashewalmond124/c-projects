#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
void lineth(double theta,int y){
double s,x,rad,tanv;
int si,i,j,k,xi;
rad = theta*(3.1415/180);
/*s = (double)1/tan(rad);
if(s>(int)s+0.5){
si= ceil(x);}
else{
si = floor(x);
} */
for(i=1;y>i;i++){
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
for(j=(xi);j>0;j--){
printf(" ");
}
printf("*");

//}
}
}


void linethh(double theta,int y){
double s,x,rad,tanv;
int si,i,j,k,xi;
rad = theta*(3.1415/180);
/*s = (double)1/tan(rad);
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
for(j=(xi);j>0;j--){
printf(" ");
}
printf("*");

//}
}
}

void main(){

int i,j,k;
for(i=10;80>=i;i=i+10){
for(j=1;25>=j;j++){
printf("\n");
}

//lineth(10+i,5);
linethh(10+i,i);
printf("\n %d",10+i);
getch();           }
		       


}