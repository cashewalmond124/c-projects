#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
void lineth(double theta,int y){
double s,x,rad,tanv;
int si,i,j,k,xi;
rad = theta*(3.1415/180);

for(i=1;y>i;i++){
printf("\n");

//if((i%2)!=0){
x = (double)i/tan(rad);
if(x>(int)x+0.5){
xi = ceil(x);  }
else{
xi= floor(x);
}


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

for(i=y;i>0;i--){
printf("\n");


x = (double)i/tan(rad);
if(x>(int)x+0.5){
xi = ceil(x);  }
else{
xi= floor(x);
}


for(j=(xi);j>0;j--){
printf(" ");
}
printf("*");


}
}

void main(){
int i;
double j;
scanf("%lf%d",&j,&i);
linethh(j,i);//(angle,length)
getch();

}