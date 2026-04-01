#include<conio.h>
#include<stdio.h>
#include<math.h>
void linethh(double theta,int y){
double s,x,rad,tanv;
int si,i,j,k,xi;
rad = theta*(3.1415/180);

for(i=y;i>0;i--){
printf("\n");

//if((i%2)!=0){
x = (double)i/tan(rad);
if(x>(int)x+0.5){
xi = ceil(x);  }
else{
xi= floor(x);
}


for(j=(xi)*2;j>0;j--){
printf(" ");
}
printf("*");

//}
}
}


void sidd(int y,int t){
int i,j;
for(i=1;25>=i;i++){
printf("\n");
}
for(i=1;t>=i;i++){
printf("\n");
for(j=1;78>=j;j++){
printf("*");
}
}

for(i=1;y>=i;i++){
printf("\n");
}
getch();
}
void doww(int x,int t){
int i,j,k;


for(j=1;25>=j;j++){    //after executing 1 \n pointer is on second line
printf("=\n");         //executing it 25 times an then i am on 26 line
}


for(k=1;25>=k;k++){
printf("\n");
for(j=1;x>=j;j++){
printf(" ");
}
for(j=t;j>=1;j--){
printf("*");
}
}


}


void q1(int a,int b){		     //we take 1(\n)=2*(" ")
int i,j,k,x,y;
for(i=1;25>=i;i++){
printf("\n");
}
for(k=1;2*a>=k;k++){
printf(" ");               //it seems th esize of space and /n not similar
}
printf("@");
/*
tried replacing printf("@@") something new happen
printf("@");
*/
for(j=1;b>=j;j++){                                       //given in tp1
printf("\n");
}
}


void game(){
int i,j=0,k=25,x,y,s=0;
char ch,t,sp = 'x';
q1(0,0);




for(;ch!=sp;t=t){
if(kbhit()){
   ch=getch();
   if(ch == 'i'){
     q1(s,j+1);
     j=j+1;

     }
   if(ch == 'k'&& j>=1){
     q1(s,j-1);
     if(j>0){
     j=j-1;
     }
     }

   if((j==10 && s==10)){

     doww(20,2);
     if(ch == 'n'){
     game();
     }
   }

   if(j==10 && s==5){

     sidd(10,3);              // x is s,and y is j
     if(ch == 'n'){
     game();
     }
     }
   if(j==s  && s!=0 ){//j/s==1  for this why does it not work
     linethh(45,45);
     if(ch == 'n'){
     game();
     }

   }
   if(ch == 'l'){
     q1(s+1,j);
     s=s+1;
     }
   if(ch == 'j'&& s>=1){
     q1(s-1,j);
     s=s-1;
     }
}
}


/*
printf("%d,",getch());
*/
getch();

}

void main(){
game();

}