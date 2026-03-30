#include<conio.h>
#include<stdio.h>


void q1(int a,int b){		     //we take 1(\n)=2*(" ")
int i,j,k,x,y;
for(i=1;25>=i;i++){
printf("\n");
}
for(k=1;2*a>=k;k++){
printf(" ");               //it seems th esize of space and /n not similar
}
printf("@@\n@@");
/*
tried replacing printf("@@") something new happen
printf("@@\n@@");
*/
for(j=1;b>=j;j++){                                       //given in tp1
printf("\n");
}
}


void main(){
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
