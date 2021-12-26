#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
 printf("WELCOME TO TIC-TAC-TOE\n");
 printf("WHICH PLAYER TO START 1 OR 2\n");
 int b;
 char c1,c2;
 scanf("%d",&b);
 printf("ENTER CHARACTER OF PLAYER 1\n");
 fflush(stdin);
 scanf("%c",&c1);
 printf("ENTER CHARACTER OF PLAYER 2\n");
 fflush(stdin);
 scanf("%c",&c2); 
 int n=9;
 char ch;
 char a[9]={'*','/','*','/','~','*','/','*','/'};
 for (int i=0;i<=4;i+=2)
 {
  printf("%c\t%c\t%c\n",a[i],a[i+1],a[i+2]);
 }
 for(int i=0;i<n;i++)
 {
  printf("ENTER THE POSITION TO FILL\n");
  int p=0;
  scanf("%d",&p);
  printf("ENTER THE CHARACTER TO FILL\n");
   fflush(stdin);
  scanf("%c",&ch);
  a[p-1]=ch;
  for (int i=0;i<=2;i++)
  {
   printf("%c\t",a[i]);
  }
  printf("\n");
  for (int i=3;i<=5;i++)
  {
   printf("%c\t",a[i]);
  }
  printf("\n");
  for (int i=6;i<=8;i++)
  {
   printf("%c\t",a[i]);
  }
  printf("\n");
  if((a[0]==a[4] && a[4]==a[8]) )
  {
   if(c1==a[0])
    printf("PLAYER 1 YOU WIN\n");
   else
    printf("PLAYER 2 YOU WIN\n");
   break;
  }
  else if((a[2]==a[4] && a[4]==a[6]))
  {
   if(c1==a[2])
    printf("PLAYER 1 YOU WIN\n");
   else
    printf("PLAYER 2 YOU WIN\n");
   break;
  }
  else if((a[0]==a[3] && a[3]==a[6]))
  {
   if(c1==a[0])
    printf("PLAYER 1 YOU WIN\n");
   else
    printf("PLAYER 2 YOU WIN\n");
   break;
  }
  else if((a[1]==a[4] && a[4]==a[7]))
  {
   if(c1==a[1])
    printf("PLAYER 1 YOU WIN\n");
   else
    printf("PLAYER 2 YOU WIN\n");
   break;
  }
  else if((a[2]==a[5] && a[5]==a[8]))
  {
   if(c1==a[2])
    printf("PLAYER 1 YOU WIN\n");
   else
    printf("PLAYER 2 YOU WIN\n");
   break;
  }
  else if((a[0]==a[1] && a[1]==a[2]))
  {
   if(c1==a[0])
    printf("PLAYER 1 YOU WIN\n");
   else
    printf("PLAYER 2 YOU WIN\n");
   break;
  }
  else if((a[3]==a[4] && a[4]==a[5]))
  {
   if(c1==a[3])
    printf("PLAYER 1 YOU WIN\n");
   else
    printf("PLAYER 2 YOU WIN\n");
   break;
  }
  else if((a[6]==a[7] && a[8]==a[6]))
  {
   if(c1==a[6])
    printf("PLAYER 1 YOU WIN\n");
   else
    printf("PLAYER 2 YOU WIN\n");
   break;
  }
  else
   continue;
 } 
 
}
//'*','/','*','/'
//*,/,*,/
//||(a[2]==a[4] && a[4]==a[6] )||(a[0]==a[3] && a[3]==a[6] )||(a[1]==a[4] && a[4]==a[7]) ||(a[2]==a[5] && a[5]==a[8]) ||(a[0]==a[1] && a[1]==a[2]) ||(a[3]==a[4] && a[4]==a[5]) ||(a[6]==a[7] && a[7]==a[8])