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
int i,k,z,p;
double j;
scanf("%lf%d%d",&j,&i,&k);
for(z=0;k>z;z++){
for(p=1;25>=p;p++){
printf("\n");
}



linethh(j+z,i);//(angle,length)
getch();
}


}