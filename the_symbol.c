#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main(){
int i,j,k,a,b;
scanf("%d",&a);
for(i=a;i>=1;i--){
for(j=(i-1)*2+25;j>=0;j--){
printf(" ");
}
printf("*");
printf("\n");}







for(i=a;i>=1;i--){
for(j=(a-i)*2+24;j>=1;j--){
printf(" ");
}
printf("*");
for(j=(i-1)*4;j>=0;j--){
printf(" ");
}
printf("*");
for(j=(a-i)*4;j>=1;j--){
printf(" ");
}
printf("*");
printf("\n");     }




for(i=a;i>=1;i--){
for(j=(a-i)*2+23-(a-1)*2;j>=1;j--){
printf(" ");
}
printf("*");
for(j=(i-1)*4;j>=1;j--){
printf(" ");
}
printf("*");
for(j=(a-i)*4+1;j>=1;j--){
printf(" ");
}
printf("*");


//
printf("\n");
}




for(i=a;i>=1;i--){
for(j=(i-1)*2+(a-1)*2+23;j>=0;j--){
printf(" ");
}
printf("*");
printf("\n");}
getch();
}
