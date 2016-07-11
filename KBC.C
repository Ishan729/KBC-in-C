#include<stdio.h>
#include<conio.h>
#include<dos.h>
phone(char *name,char choose,char sol)
{
char s[20];
int a,bb,d,g,f,i,no;
a=440;
g=780;
bb=461;
d=586;
f=687;
printf("\nEnter the name of your friend\n");
fflush(stdin);
gets(s);
printf("\nNumber:\t");
scanf("%d",&no);
clrscr();
textcolor(4);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                           Airtel Calling ...");
for(i=0;i<2;i++)
{
sound(g);
delay(500);
nosound();
sound(g);
delay(250);
nosound();
sound(g);
delay(250);
nosound();
sound(g);
delay(500);
nosound();
sound(2*d);
delay(500);
nosound();
sound(2*a);
delay(250);
nosound();
sound(2*bb);
delay(250);
nosound();
sound(2*a);
delay(250);
nosound();
sound(g);
delay(250);
nosound();
sound(f);
delay(500);
nosound();
sound(2*a);
delay(500);
nosound();
sound(g);
delay(250);
nosound();
sound(2*a);
delay(250);
nosound();
sound(g);
delay(250);
nosound();
sound(f);
delay(250);
sound(g);
delay(250);
sound(2*a);
delay(250);
sound(2*bb);
delay(500);
sound(2*a);
delay(500);
sound(g);
delay(250);
sound(f);
delay(250);
sound(d);
delay(500);
nosound();
}
textcolor(RED);
cprintf("\nAmitabh: Namashkar %s I am Amitabh bachaan from kon banega crorepati",s);
textcolor(YELLOW);
cprintf("\n%s: Namashkar Amitabh ji I am glad that I am talking to you",s);
textcolor(RED);
cprintf("\nAmitabh: In front of me your friend %s is sitting so help your friend to win this amount.\nNow %s you have 30 sec to find out the answer",name,name);
textcolor(YELLOW);
cprintf("\nPress Enter to Talk\n");
getch();
printf("%s: %s the right Answer is  '%c'",s,name,sol);
printf("\nphone cut....\n\n Press 's' to continue");
for(i=100;i<3000;i=i+200)
{
sound(i);
delay(40);

}
nosound();
for(i=100;i<3000;i=i+200)
{
sound(i);
delay(40);

}
nosound();
}
five(char sol)
{
char owl='A';
if(owl==sol)
{
owl='B';
printf("\nNow you have two options %c,%c\nPress 's' to continue ",owl,sol);
}
else
printf("Now you have two options %c,%c\nPress 's' to continue ",owl,sol);
}
audience()
{
int a;
printf("\n\nAmitabh: So audience get ready,We need your help to win this amount.\nPress Enter to continue\n ");
getch();
printf("\n\n                                    Processing...");
for(a=200;a<5000;a=a+100)
{
sound(a);
delay(10);
}
for(a=200;a<2000;a=a+50)
{
sound(a);
delay(25);
sound(2*a);
delay(10);
sound(3*a);
delay(25);
sound(4*a*a);
delay(10);
}
nosound();
clrscr();
printf("\n\n\n\n\n\n\n\n\n\n                                 Audience vote:\n                                        A: 10 %\tB: 5 %\n                                        C:70%\tD: 15 %\n\n                                  Press 's' to continue");
}

right(int v,int n,char sol)
{
int sum,a;
textcolor(RED+BLINK);
textbackground(BLUE);
gotoxy(30,11);
if(v==15)
{
clrscr();
cprintf("* C O N G R A T U L A T I O N *");
gotoxy(28,11);
textcolor(YELLOW+BLINK);
cprintf("*  *");
gotoxy(27,12);
delay(1000);
cprintf(" * ");
gotoxy(62,11);
cprintf(" *  ");
delay(500);
gotoxy(65,11);
cprintf(" * ");
gotoxy(64,11);
delay(1000);
cprintf(" * ");
gotoxy(34,13);
cprintf(" You Won 1,0000000 Rs ");
}
else
{
cprintf("C O N G R A T U L A T I O N ");
}
for(a=100;a<2000;a=a+200)
{
sound(a);
delay(40);
sound(a);
delay(10);
sound(a);
delay(2);
}
for(a=100;a<2000;a=a+200)
{
sound(a);
delay(40);
sound(a);
delay(10);
sound(a);
delay(2);
}
for(a=100;a<2000;a=a+200)
{
sound(a);
delay(40);
sound(a);
delay(10);
sound(a);
delay(2);
}
nosound();
textbackground(BLACK);
textcolor(WHITE);
}
life(char *name,char choose,char sol,int*q,int*cut,int*aud)
{
int i;
int choice;
l:
clrscr();
printf("\nChoose which life line you want to choose\n(Press '0' if you don't wanna use your life line now)\n");
printf("1: Phone of friend\t2: 50-50\t3: Audience vote\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
if(*q==0)
{
phone(name,choose,sol);
*q=*q+1;
}
else
{printf("Already used\n");
goto l;
}
break;
case 2:
if(*cut==0)
{
five(sol);
*cut=*cut+1;
}
else
{printf("\nAlready used");
goto l;
}
break;
case 3:
if(*aud==0)
{
audience();
*aud=*aud+1;
}
else
{
printf("\nAlready used");
goto l;
}
break;
case 0:
printf("press 's' to continue");
break;
default:
exit(0);
}
}

void main()
{
int i=0,n,a,p=0,f=0,c=0,v=0;
int *q=&p,*cut=&f,*aud=&c;
char ans,name[20],choose,sol,choice='y';
clrscr();
gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,6);
textcolor(RED+BLINK);
cprintf(" K O N  B A N E G A");
gotoxy(32,8);
textcolor(WHITE+BLINK);
cprintf(" C R O R E P A T I ");
textcolor(BLUE);
gotoxy(32,9);
cprintf("~~~~~~~~~~~~~~~~~~~");
textcolor(30);
nosound();
delay(1000);
sound(2000);
delay(50);
sound(1000);
delay(100);
nosound();
printf("\nNote:*If you choose option other than a,b,c,d that the game is terminated\n     *If you want to use your life line than Press l or L\n     *For minimum amount you should answer atleast 5 question ");
textcolor(WHITE+BLINK);
textbackground(BLUE);
gotoxy(30,18);
cprintf("Press ENTER to play the Game");
getche();
clrscr();
textcolor(RED+BLINK);
textbackground(BLACK);
printf("\n\n\n\n\n\n\n\n\n\n\n\n                                     LOADING...");
textcolor(10);
sound(2000);
delay(50);
sound(1000);
delay(100);
nosound();
delay(1000);
sound(2000);
delay(50);
sound(1000);
delay(100);
nosound();
delay(1000);
sound(2000);
delay(50);
sound(1000);
delay(100);
nosound();
delay(1000);
nosound();
delay(1000);
clrscr();
textcolor(BLUE);
gotoxy(35,12);
cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~");
for(i=12;i<18;i++)
{
gotoxy(35,i);
cprintf("|");
}
gotoxy(35,18);
cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~");
for(i=12;i<18;i++)
{
gotoxy(60,i);
cprintf("|");
}
gotoxy(37,13);
textcolor(RED+BLINK);
cprintf("P L A Y E R  N A M E ");
gotoxy(40,16);
fflush(stdin);
gets(name);
sound(2000);
delay(50);
sound(1000);
delay(100);
nosound();
gotoxy(3,19);
sound(2000);
delay(50);
sound(1000);
delay(100);
nosound();
delay(500);
clrscr();
textcolor(RED);
textbackground(BLACK);
gotoxy(35,14);
cprintf("L o a d i n g");
delay(2000);

clrscr();
gotoxy(32,10);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,11);
textcolor(RED+BLINK);
cprintf(" K O N  B A N E G A");
gotoxy(32,13);
textcolor(WHITE+BLINK);
cprintf(" C R O R E P A T I ");
textcolor(BLUE);
gotoxy(32,14);
cprintf("~~~~~~~~~~~~~~~~~~~");
for(a=100;a<500;a=a+50)
{sound(a);
delay(100);
}
for(a=200;a<1000;a=a+100)
{sound(a);
delay(100);
}
nosound();
for(a=100;a<500;a=a+50)
{sound(a);
delay(100);
}
for(a=200;a<1000;a=a+100)
{sound(a);
delay(100);
}
nosound();
for(a=200;a<500;a=a+20)
{
sound(a);
delay(100);
}

for(a=10;a<500;a=a+70)
{sound(a);
delay(20);
}
for(a=0;a<1000;a=a+200)
{sound(a);
delay(300);
}
nosound();
nosound();
delay(200);
textcolor(15);
printf("\nThe first question is on your computer screen\n");
v++;
clrscr();
textcolor(15);
fflush(stdin);
while(choice=='y' ||choice=='Y')
{
fflush(stdin);
choice='s';
while(choice=='s'|| choice=='S')
{
clrscr();
fflush(stdin);
choice='w';
textcolor(BLUE);
for(i=1;i<16;i++)
{

gotoxy(68,i);
cprintf("|");
}
gotoxy(68,16);
cprintf("~~~~~~~~~~~~~");
gotoxy(70,1);
textcolor(RED+BLINK);
printf("1,0000000");
gotoxy(70,2);
printf("50,00000");
gotoxy(70,3);
printf("25,00000");
gotoxy(70,4);
printf("13,50000");
gotoxy(70,5);
printf("6,75000");
gotoxy(70,6);
printf("3,37000");
gotoxy(70,7);
printf("1,68000");
gotoxy(70,8);
printf("84,000");
gotoxy(70,9);
printf("42,000");
gotoxy(70,10);
printf("21,000");
gotoxy(70,11);
printf("10,500");
gotoxy(70,12);
printf("5,250");
gotoxy(70,13);
printf("3000");
gotoxy(70,14);
printf("2000");
gotoxy(70,15);
cprintf("1000");

gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,6);
textcolor(RED+BLINK);
cprintf(" K O N  B A N E G A");
gotoxy(32,8);
textcolor(WHITE+BLINK);
cprintf(" C R O R E P A T I ");
textcolor(BLUE);
gotoxy(32,9);
cprintf("~~~~~~~~~~~~~~~~~~~");
gotoxy(1,17);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
printf("\nIn the film 'kuch kuch hota h' while playing what game does kajol say:\n Rahul is a cheater he is a cheater?");
textcolor(RED);
gotoxy(1,21);
cprintf("A: BADMINTON");
gotoxy(40,21);
cprintf("B: TENNIS");
gotoxy(1,22);
cprintf("C: BASKETBALL");
gotoxy(40,22);
cprintf("D: TABLE TENNIS");
printf("\n");
sol='C';
fflush(stdin);
scanf("%c",&ans);
switch(ans)
{
case 'a':
wrong(n,v);
break;
case 'b':
wrong(n,v);
break;
case 'c':
right(v,n,sol);
break;
case 'd':
wrong(n,v);
break;
case 'l':
life(name,choose,sol,q,cut,aud);
fflush(stdin);
choice=getche();
break;
default:
exit(0);
}
}
if(ans=='c')
{
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\                      Next question\n");
}
else
break;
v++;
clrscr();
fflush(stdin);
choice='s';
while(choice=='s' || choice=='S')
{
clrscr();
fflush(stdin);
choice='w';
textcolor(BLUE);
for(i=1;i<16;i++)
{

gotoxy(68,i);
cprintf("|");
}
gotoxy(68,16);
cprintf("~~~~~~~~~~~~~");
gotoxy(70,1);
textcolor(RED+BLINK);
printf("1,0000000");
gotoxy(70,2);
printf("50,00000");
gotoxy(70,3);
printf("25,00000");
gotoxy(70,4);
printf("13,50000");
gotoxy(70,5);
printf("6,75000");
gotoxy(70,6);
printf("3,37000");
gotoxy(70,7);
printf("1,68000");
gotoxy(70,8);
printf("84,000");
gotoxy(70,9);
printf("42,000");
gotoxy(70,10);
printf("21,000");
gotoxy(70,11);
printf("10,500");
gotoxy(70,12);
printf("5,250");
gotoxy(70,13);
printf("3000");
gotoxy(70,14);
cprintf("2000");
gotoxy(70,15);
printf("1000");

gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,6);
textcolor(RED+BLINK);
cprintf(" K O N  B A N E G A");
gotoxy(32,8);
textcolor(WHITE+BLINK);
cprintf(" C R O R E P A T I ");
textcolor(BLUE);
gotoxy(32,9);
cprintf("~~~~~~~~~~~~~~~~~~~");
gotoxy(1,17);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
gotoxy(1,19);
printf("Out of these which is created with Murmure?");
gotoxy(1,21);
textcolor(RED);
cprintf("A: Golgappa");
gotoxy(40,21);
cprintf("B: Daahi Bhalle");
gotoxy(1,22);
cprintf("C: Chat Papadi");
gotoxy(40,22);
cprintf("D:Bhelpuri");
printf("\n");
sol='D';
fflush(stdin);
scanf("%c",&ans);
switch(ans)
{
case 'a':
wrong(n,i);
break;
case 'b':
wrong(n,i);
break;
case 'c':
wrong(n,i);
break;
case 'd':
right(v,n,sol);
break;
case 'l':
life(name,choose,sol,q,cut,aud);
fflush(stdin);
choice=getche();
break;
default:
exit(0);
}
}
if(ans=='d')
{
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\                      Next question\n");
}
else
break;
i++;
clrscr();
fflush(stdin);
choice='s';
while(choice=='s' || choice=='S')
{
clrscr();
fflush(stdin);
choice='w';
textcolor(BLUE);
for(i=1;i<16;i++)
{

gotoxy(68,i);
cprintf("|");
}
gotoxy(68,16);
cprintf("~~~~~~~~~~~~~");
gotoxy(70,1);
textcolor(RED+BLINK);
printf("1,0000000");
gotoxy(70,2);
printf("50,00000");
gotoxy(70,3);
printf("25,00000");
gotoxy(70,4);
printf("13,50000");
gotoxy(70,5);
printf("6,75000");
gotoxy(70,6);
printf("3,37000");
gotoxy(70,7);
printf("1,68000");
gotoxy(70,8);
printf("84,000");
gotoxy(70,9);
printf("42,000");
gotoxy(70,10);
printf("21,000");
gotoxy(70,11);
printf("10,500");
gotoxy(70,12);
printf("5,250");
gotoxy(70,13);
cprintf("3000");
gotoxy(70,14);
printf("2000");
gotoxy(70,15);
printf("1000");

gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,6);
textcolor(RED+BLINK);
cprintf(" K O N  B A N E G A");
gotoxy(32,8);
textcolor(WHITE+BLINK);
cprintf(" C R O R E P A T I ");
textcolor(BLUE);
gotoxy(32,9);
cprintf("~~~~~~~~~~~~~~~~~~~");
gotoxy(1,17);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
gotoxy(1,19);
printf("In what language is the denomination of contemparary Indian currency note written at the bottom of the language panel of the note?");
gotoxy(1,21);
textcolor(RED);
cprintf("A: Tamil");
gotoxy(40,21);
cprintf("B: Sanskrit");
gotoxy(1,22);
cprintf("C: Nepali");
gotoxy(40,22);
cprintf("D: Urdu");
gotoxy(1,23);
sol='D';
fflush(stdin);
scanf("%c",&ans);
switch(ans)
{
case 'a':
wrong(n,v);
break;
case 'b':
wrong(n,v);
break;
case 'c':
wrong(n,v);
break;
case 'd':
right(v,n,sol);
break;
case 'l':
life(name,choose,sol,q,cut,aud);
fflush(stdin);
choice=getche();
break;
default:
exit(0);
}
if(ans=='d')
{
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\                      Next question\n");
}
else
break;
}
v++;
clrscr();
fflush(stdin);
choice='s';
while(choice=='s' || choice=='S')
{
clrscr();
fflush(stdin);
choice='w';
textcolor(BLUE);
for(i=1;i<16;i++)
{

gotoxy(68,i);
cprintf("|");
}
gotoxy(68,16);
cprintf("~~~~~~~~~~~~~");
gotoxy(70,1);
textcolor(RED+BLINK);
printf("1,0000000");
gotoxy(70,2);
printf("50,00000");
gotoxy(70,3);
printf("25,00000");
gotoxy(70,4);
printf("13,50000");
gotoxy(70,5);
printf("6,75000");
gotoxy(70,6);
printf("3,37000");
gotoxy(70,7);
printf("1,68000");
gotoxy(70,8);
printf("84,000");
gotoxy(70,9);
printf("42,000");
gotoxy(70,10);
printf("21,000");
gotoxy(70,11);
printf("10,500");
gotoxy(70,12);
cprintf("5,250");
gotoxy(70,13);
printf("3000");
gotoxy(70,14);
printf("2000");
gotoxy(70,15);
printf("1000");

gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,6);
textcolor(RED+BLINK);
cprintf(" K O N  B A N E G A");
gotoxy(32,8);
textcolor(WHITE+BLINK);
cprintf(" C R O R E P A T I ");
textcolor(BLUE);
gotoxy(32,9);
cprintf("~~~~~~~~~~~~~~~~~~~");
gotoxy(1,17);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
gotoxy(1,19);
printf("With which of these cards would you associate the pharse Aam Aadmi Ka Adhikaar?");
gotoxy(1,21);
textcolor(RED);
cprintf("A: PAN card");
gotoxy(40,21);
cprintf("B: Voter ID card");
gotoxy(1,22);
cprintf("C: AADHAR card");
gotoxy(40,22);
cprintf("D: Ration card");
gotoxy(1,23);
sol='c';
fflush(stdin);
scanf("%c",&ans);
switch(ans)
{
case 'a':
wrong(n,v);
break;
case 'b':
wrong(n,v);
break;
case 'c':
right(v,n,sol);
break;
case 'd':
wrong(n,v);
break;
case 'l':
life(name,choose,sol,q,cut,aud);
fflush(stdin);
choice=getche();
break;
default:
exit(0);
}
}
if(ans=='c')
{
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\                      Next question\n");
}
else
break;
v++;
clrscr();
fflush(stdin);
choice='s';
while(choice=='s' || choice=='S')
{
clrscr();
fflush(stdin);
choice='w';
textcolor(BLUE);
for(i=1;i<16;i++)
{

gotoxy(68,i);
cprintf("|");
}
gotoxy(68,16);
cprintf("~~~~~~~~~~~~~");
gotoxy(70,1);
textcolor(RED+BLINK);
printf("1,0000000");
gotoxy(70,2);
printf("50,00000");
gotoxy(70,3);
printf("25,00000");
gotoxy(70,4);
printf("13,50000");
gotoxy(70,5);
printf("6,75000");
gotoxy(70,6);
printf("3,37000");
gotoxy(70,7);
printf("1,68000");
gotoxy(70,8);
printf("84,000");
gotoxy(70,9);
printf("42,000");
gotoxy(70,10);
printf("21,000");
gotoxy(70,11);
cprintf("10,500");
gotoxy(70,12);
printf("5,250");
gotoxy(70,13);
printf("3000");
gotoxy(70,14);
printf("2000");
gotoxy(70,15);
printf("1000");

gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,6);
textcolor(RED+BLINK);
cprintf(" K O N  B A N E G A");
gotoxy(32,8);
textcolor(WHITE+BLINK);
cprintf(" C R O R E P A T I ");
textcolor(BLUE);
gotoxy(32,9);
cprintf("~~~~~~~~~~~~~~~~~~~");
gotoxy(1,17);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
gotoxy(1,19);
printf("Which of these person has not walked on the moon?");
gotoxy(1,21);
textcolor(RED);
cprintf("A: Charles Duke");
gotoxy(40,21);
cprintf("B: James A lovell");
gotoxy(1,22);
cprintf("C: Alan Bean");
gotoxy(40,22);
cprintf("D: Pete corned");
gotoxy(1,23);
sol='B';
fflush(stdin);
scanf("%c",&ans);
switch(ans)
{
case 'a':
wrong(n,v);
break;
case 'b':
right(v,n,sol);
break;
case 'c':
wrong(n,v);
break;
case 'd':
wrong(n,v);
break;
case 'l':
life(name,choose,sol,q,cut,aud);
fflush(stdin);
choice=getche();
break;
default:
exit(0);
}
}
if(ans=='b')
{
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\                      Next question\n");
}
else
break;
v++;
clrscr();
fflush(stdin);
choice='s';
while(choice=='s' || choice=='S')
{
clrscr();
fflush(stdin);
choice='w';
textcolor(BLUE);
for(i=1;i<16;i++)
{

gotoxy(68,i);
cprintf("|");
}
gotoxy(68,16);
cprintf("~~~~~~~~~~~~~");
gotoxy(70,1);
textcolor(RED+BLINK);
printf("1,0000000");
gotoxy(70,2);
printf("50,00000");
gotoxy(70,3);
printf("25,00000");
gotoxy(70,4);
printf("13,50000");
gotoxy(70,5);
printf("6,75000");
gotoxy(70,6);
printf("3,37000");
gotoxy(70,7);
printf("1,68000");
gotoxy(70,8);
printf("84,000");
gotoxy(70,9);
printf("42,000");
gotoxy(70,10);
cprintf("21,000");
gotoxy(70,11);
printf("10,500");
gotoxy(70,12);
printf("5,250");
gotoxy(70,13);
printf("3000");
gotoxy(70,14);
printf("2000");
gotoxy(70,15);
printf("1000");

gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,6);
textcolor(RED+BLINK);
cprintf(" K O N  B A N E G A");
gotoxy(32,8);
textcolor(WHITE+BLINK);
cprintf(" C R O R E P A T I ");
textcolor(BLUE);
gotoxy(32,9);
cprintf("~~~~~~~~~~~~~~~~~~~");
gotoxy(1,17);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
gotoxy(1,19);
printf("In 1850, the first experimental electric telegraph line in India was set up between calcutta and which place?");
gotoxy(1,21);
textcolor(RED);
cprintf("A: Diamond Harbour");
gotoxy(40,21);
cprintf("B: Darjeeling");
gotoxy(1,22);
cprintf("C: Murshidabad");
gotoxy(40,22);
cprintf("D: Dhaka");
gotoxy(1,23);
sol='A';
fflush(stdin);
scanf("%c",&ans);
switch(ans)
{
case 'a':
right(v,n,sol);
break;
case 'b':
wrong(n,v);
break;
case 'c':
wrong(n,v);
break;
case 'd':
wrong(n,v);
break;
case 'l':
life(name,choose,sol,q,cut,aud);
fflush(stdin);
choice=getche();
break;
default:
exit(0);
}
}
if(ans=='a')
{
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\                      Next question\n");
}
else
break;
v++;
clrscr();
fflush(stdin);
choice='s';
while(choice=='s' || choice=='S')
{
clrscr();
fflush(stdin);
choice='w';
textcolor(BLUE);
for(i=1;i<16;i++)
{

gotoxy(68,i);
cprintf("|");
}
gotoxy(68,16);
cprintf("~~~~~~~~~~~~~");
gotoxy(70,1);
textcolor(RED+BLINK);
printf("1,0000000");
gotoxy(70,2);
printf("50,00000");
gotoxy(70,3);
printf("25,00000");
gotoxy(70,4);
printf("13,50000");
gotoxy(70,5);
printf("6,75000");
gotoxy(70,6);
printf("3,37000");
gotoxy(70,7);
printf("1,68000");
gotoxy(70,8);
printf("84,000");
gotoxy(70,9);
cprintf("42,000");
gotoxy(70,10);
printf("21,000");
gotoxy(70,11);
printf("10,500");
gotoxy(70,12);
printf("5,250");
gotoxy(70,13);
printf("3000");
gotoxy(70,14);
printf("2000");
gotoxy(70,15);
printf("1000");

gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,6);
textcolor(RED+BLINK);
cprintf(" K O N  B A N E G A");
gotoxy(32,8);
textcolor(WHITE+BLINK);
cprintf(" C R O R E P A T I ");
textcolor(BLUE);
gotoxy(32,9);
cprintf("~~~~~~~~~~~~~~~~~~~");
gotoxy(1,17);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
gotoxy(1,19);
printf("The black widow, which eats the male counterpart after mating,as a female species of which animal?");
gotoxy(1,21);
textcolor(RED);
cprintf("A: sloth");
gotoxy(40,21);
cprintf("B: Ant");
gotoxy(1,22);
cprintf("C: Spider");
gotoxy(40,22);
cprintf("D: Termite");
gotoxy(1,23);
sol='C';
fflush(stdin);
scanf("%c",&ans);
switch(ans)
{
case 'a':
wrong(n,v);
break;
case 'b':
wrong(n,v);
break;
case 'c':
right(v,n,sol);
break;
case 'd':
wrong(n,v);
break;
case 'l':
life(name,choose,sol,q,cut,aud);
fflush(stdin);
choice=getche();
break;
default:
exit(0);
}
}
if(ans=='c')
{
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\                      Next question\n");
}
else
break;
v++;
clrscr();
fflush(stdin);
choice='s';
while(choice=='s' || choice=='S')
{
clrscr();
fflush(stdin);
choice='w';
textcolor(BLUE);
for(i=1;i<16;i++)
{

gotoxy(68,i);
cprintf("|");
}
gotoxy(68,16);
cprintf("~~~~~~~~~~~~~");
gotoxy(70,1);
textcolor(RED+BLINK);
printf("1,0000000");
gotoxy(70,2);
printf("50,00000");
gotoxy(70,3);
printf("25,00000");
gotoxy(70,4);
printf("13,50000");
gotoxy(70,5);
printf("6,75000");
gotoxy(70,6);
printf("3,37000");
gotoxy(70,7);
printf("1,68000");
gotoxy(70,8);
cprintf("84,000");
gotoxy(70,9);
printf("42,000");
gotoxy(70,10);
printf("21,000");
gotoxy(70,11);
printf("10,500");
gotoxy(70,12);
printf("5,250");
gotoxy(70,13);
printf("3000");
gotoxy(70,14);
printf("2000");
gotoxy(70,15);
printf("1000");

gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,6);
textcolor(RED+BLINK);
cprintf(" K O N  B A N E G A");
gotoxy(32,8);
textcolor(WHITE+BLINK);
cprintf(" C R O R E P A T I ");
textcolor(BLUE);
gotoxy(32,9);
cprintf("~~~~~~~~~~~~~~~~~~~");
gotoxy(1,17);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
gotoxy(1,19);
printf("In october 2013, which actress was honored by the British House of Commons?");
gotoxy(1,21);
textcolor(RED);
cprintf("A: Vidya Balan");
gotoxy(40,21);
cprintf("B: Madhuri Dixit");
gotoxy(1,22);
cprintf("C: Kareena kapoor");
gotoxy(40,22);
cprintf("D: Sonakshi sinha");
gotoxy(1,23);
sol='C';
fflush(stdin);
scanf("%c",&ans);
switch(ans)
{
case 'a':
wrong(n,v);
break;
case 'b':
wrong(n,v);
break;
case 'c':
right(v,n,sol);
break;
case 'd':
wrong(n,v);
break;
case 'l':
life(name,choose,sol,q,cut,aud);
fflush(stdin);
choice=getche();
break;
default:
exit(0);
}
}
if(ans=='c')
{
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\                      Next question\n");
}
else
break;
v++;
clrscr();
fflush(stdin);
choice='s';
while(choice=='s' || choice=='S')
{
clrscr();
fflush(stdin);
choice='w';
textcolor(BLUE);
for(i=1;i<16;i++)
{

gotoxy(68,i);
cprintf("|");
}
gotoxy(68,16);
cprintf("~~~~~~~~~~~~~");
gotoxy(70,1);
textcolor(RED+BLINK);
printf("1,0000000");
gotoxy(70,2);
printf("50,00000");
gotoxy(70,3);
printf("25,00000");
gotoxy(70,4);
printf("13,50000");
gotoxy(70,5);
printf("6,75000");
gotoxy(70,6);
printf("3,37000");
gotoxy(70,7);
cprintf("1,68000");
gotoxy(70,8);
printf("84,000");
gotoxy(70,9);
printf("42,000");
gotoxy(70,10);
printf("21,000");
gotoxy(70,11);
printf("10,500");
gotoxy(70,12);
printf("5,250");
gotoxy(70,13);
printf("3000");
gotoxy(70,14);
printf("2000");
gotoxy(70,15);
printf("1000");

gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,6);
textcolor(RED+BLINK);
cprintf(" K O N  B A N E G A");
gotoxy(32,8);
textcolor(WHITE+BLINK);
cprintf(" C R O R E P A T I ");
textcolor(BLUE);
gotoxy(32,9);
cprintf("~~~~~~~~~~~~~~~~~~~");
gotoxy(1,17);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
gotoxy(1,19);
printf("Which is the oldest mountain range in India?");
gotoxy(1,21);
textcolor(RED);
cprintf("A: Nilgris");
gotoxy(40,21);
cprintf("B: Aravalli");
gotoxy(1,22);
cprintf("C: Vindhya");
gotoxy(40,22);
cprintf("D: Satpura");
gotoxy(1,23);
sol='B';
fflush(stdin);
scanf("%c",&ans);
switch(ans)
{
case 'a':
wrong(n,v);
break;
case 'b':
right(v,n,sol);
break;
case 'c':
wrong(n,v);
break;
case 'd':
wrong(n,v);
break;
case 'l':
life(name,choose,sol,q,cut,aud);
fflush(stdin);
choice=getche();
break;
default:
exit(0);
}
}
if(ans=='b')
{
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\                      Next question\n");
}
else
break;
v++;
clrscr();
fflush(stdin);
choice='s';
while(choice=='s' || choice=='S')
{
clrscr();
fflush(stdin);
choice='w';
textcolor(BLUE);
for(i=1;i<16;i++)
{

gotoxy(68,i);
cprintf("|");
}
gotoxy(68,16);
cprintf("~~~~~~~~~~~~~");
gotoxy(70,1);
textcolor(RED+BLINK);
printf("1,0000000");
gotoxy(70,2);
printf("50,00000");
gotoxy(70,3);
printf("25,00000");
gotoxy(70,4);
printf("13,50000");
gotoxy(70,5);
printf("6,75000");
gotoxy(70,6);
cprintf("3,37000");
gotoxy(70,7);
printf("1,68000");
gotoxy(70,8);
printf("84,000");
gotoxy(70,9);
printf("42,000");
gotoxy(70,10);
printf("21,000");
gotoxy(70,11);
printf("10,500");
gotoxy(70,12);
printf("5,250");
gotoxy(70,13);
printf("3000");
gotoxy(70,14);
printf("2000");
gotoxy(70,15);
printf("1000");

gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,6);
textcolor(RED+BLINK);
cprintf(" K O N  B A N E G A");
gotoxy(32,8);
textcolor(WHITE+BLINK);
cprintf(" C R O R E P A T I ");
textcolor(BLUE);
gotoxy(32,9);
cprintf("~~~~~~~~~~~~~~~~~~~");
gotoxy(1,17);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
gotoxy(1,19);
printf("Which of these is the administrative head of a district in India?");
gotoxy(1,21);
textcolor(RED);
cprintf("A: DM");
gotoxy(40,21);
cprintf("B: DIG");
gotoxy(1,22);
cprintf("C: DCP");
gotoxy(40,22);
cprintf("D: DSP");
gotoxy(1,23);
sol='A';
fflush(stdin);
scanf("%c",&ans);
switch(ans)
{
case 'a':
right(v,n,sol);
break;
case 'b':
wrong(n,v);
break;
case 'c':
wrong(n,v);
break;
case 'd':
wrong(n,v);
break;
case 'l':
life(name,choose,sol,q,cut,aud);
fflush(stdin);
choice=getche();
break;
default:
exit(0);
}
}
if(ans=='a')
{
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\                      Next question\n");
}
else
break;
v++;
clrscr();
fflush(stdin);
choice='s';
while(choice=='s' || choice=='S')
{
clrscr();
fflush(stdin);
choice='w';
textcolor(BLUE);
for(i=1;i<16;i++)
{

gotoxy(68,i);
cprintf("|");
}
gotoxy(68,16);
cprintf("~~~~~~~~~~~~~");
gotoxy(70,1);
textcolor(RED+BLINK);
printf("1,0000000");
gotoxy(70,2);
printf("50,00000");
gotoxy(70,3);
printf("25,00000");
gotoxy(70,4);
printf("13,50000");
gotoxy(70,5);
cprintf("6,75000");
gotoxy(70,6);
printf("3,37000");
gotoxy(70,7);
printf("1,68000");
gotoxy(70,8);
printf("84,000");
gotoxy(70,9);
printf("42,000");
gotoxy(70,10);
printf("21,000");
gotoxy(70,11);
printf("10,500");
gotoxy(70,12);
printf("5,250");
gotoxy(70,13);
printf("3000");
gotoxy(70,14);
printf("2000");
gotoxy(70,15);
printf("1000");

gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,6);
textcolor(RED+BLINK);
cprintf(" K O N  B A N E G A");
gotoxy(32,8);
textcolor(WHITE+BLINK);
cprintf(" C R O R E P A T I ");
textcolor(BLUE);
gotoxy(32,9);
cprintf("~~~~~~~~~~~~~~~~~~~");
gotoxy(1,17);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
gotoxy(1,19);
printf("Which of these words means 'revolution' in Arabic?");
gotoxy(1,21);
textcolor(RED);
cprintf("A: Isteqbaal");
gotoxy(40,21);
cprintf("B: Intikhaab");
gotoxy(1,22);
cprintf("C: Inquilab");
gotoxy(40,22);
cprintf("D: Intequam");
gotoxy(1,23);
sol='C';
fflush(stdin);
scanf("%c",&ans);
switch(ans)
{
case 'a':
wrong(n,v);
break;
case 'b':
wrong(n,v);
break;
case 'c':
right(v,n,sol);
break;
case 'd':
wrong(n,v);
break;
case 'l':
life(name,choose,sol,q,cut,aud);
fflush(stdin);
choice=getche();
break;
default:
exit(0);
}
}
if(ans=='c')
{
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\                      Next question\n");
}
else
break;
v++;
clrscr();
fflush(stdin);
choice='s';
while(choice=='s' || choice=='S')
{
clrscr();
fflush(stdin);
choice='w';
textcolor(BLUE);
for(i=1;i<16;i++)
{

gotoxy(68,i);
cprintf("|");
}
gotoxy(68,16);
cprintf("~~~~~~~~~~~~~");
gotoxy(70,1);
textcolor(RED+BLINK);
printf("1,0000000");
gotoxy(70,2);
printf("50,00000");
gotoxy(70,3);
printf("25,00000");
gotoxy(70,4);
cprintf("13,50000");
gotoxy(70,5);
printf("6,75000");
gotoxy(70,6);
printf("3,37000");
gotoxy(70,7);
printf("1,68000");
gotoxy(70,8);
printf("84,000");
gotoxy(70,9);
printf("42,000");
gotoxy(70,10);
printf("21,000");
gotoxy(70,11);
printf("10,500");
gotoxy(70,12);
printf("5,250");
gotoxy(70,13);
printf("3000");
gotoxy(70,14);
printf("2000");
gotoxy(70,15);
printf("1000");

gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,6);
textcolor(RED+BLINK);
cprintf(" K O N  B A N E G A");
gotoxy(32,8);
textcolor(WHITE+BLINK);
cprintf(" C R O R E P A T I ");
textcolor(BLUE);
gotoxy(32,9);
cprintf("~~~~~~~~~~~~~~~~~~~");
gotoxy(1,17);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
gotoxy(1,19);
printf("Which of these Indian companies owes its origin to a firm co-founded by Malik Ghulam Mohammed, the first finance Minister of pakistan?");
gotoxy(1,21);
textcolor(RED);
cprintf("A: Wipro");
gotoxy(40,21);
cprintf("B: Bombey Dying");
gotoxy(1,22);
cprintf("C: Mahindra & Mahindra");
gotoxy(40,22);
cprintf("D:ACC");
gotoxy(1,23);
sol='C';
fflush(stdin);
scanf("%c",&ans);
switch(ans)
{
case 'a':
wrong(n,v);
break;
case 'b':
wrong(n,v);
break;
case 'c':
right(v,n,sol);
break;
case 'd':
wrong(n,v);
break;
case 'l':
life(name,choose,sol,q,cut,aud);
fflush(stdin);
choice=getche();
break;
default:
exit(0);
}
}
if(ans=='c')
{
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\                      Next question\n");
}
else
break;
v++;
clrscr();
fflush(stdin);
choice='s';
while(choice=='s' || choice=='S')
{
clrscr();
fflush(stdin);
choice='w';
textcolor(BLUE);
for(i=1;i<16;i++)
{

gotoxy(68,i);
cprintf("|");
}
gotoxy(68,16);
cprintf("~~~~~~~~~~~~~");
gotoxy(70,1);
textcolor(RED+BLINK);
printf("1,0000000");
gotoxy(70,2);
printf("50,00000");
gotoxy(70,3);
cprintf("25,00000");
gotoxy(70,4);
printf("13,50000");
gotoxy(70,5);
printf("6,75000");
gotoxy(70,6);
printf("3,37000");
gotoxy(70,7);
printf("1,68000");
gotoxy(70,8);
printf("84,000");
gotoxy(70,9);
printf("42,000");
gotoxy(70,10);
printf("21,000");
gotoxy(70,11);
printf("10,500");
gotoxy(70,12);
printf("5,250");
gotoxy(70,13);
printf("3000");
gotoxy(70,14);
printf("2000");
gotoxy(70,15);
printf("1000");

gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,6);
textcolor(RED+BLINK);
cprintf(" K O N  B A N E G A");
gotoxy(32,8);
textcolor(WHITE+BLINK);
cprintf(" C R O R E P A T I ");
textcolor(BLUE);
gotoxy(32,9);
cprintf("~~~~~~~~~~~~~~~~~~~");
gotoxy(1,17);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
gotoxy(1,19);
printf("Who amount of these was the first lady Air Marshal of Indian Air Froce?");
gotoxy(1,21);
textcolor(RED);
cprintf("A: Lakshmi Sehgal");
gotoxy(40,21);
cprintf("B:Padamavathy Bandopadhyay");
gotoxy(1,22);
cprintf("C:Nirmala Kannan");
gotoxy(40,22);
cprintf("D:Puneeta Arora");
gotoxy(1,23);
sol='B';
fflush(stdin);
scanf("%c",&ans);
switch(ans)
{
case 'a':
wrong(n,v);
break;
case 'b':
right(v,n,sol);
break;
case 'c':
wrong(n,v);
break;
case 'd':
wrong(n,v);
break;
case 'l':
life(name,choose,sol,q,cut,aud);
fflush(stdin);
choice=getche();
break;
default:
exit(0);
}
}
if(ans=='b')
{
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\                      Next question\n");
}
else
break;
v++;
clrscr();
fflush(stdin);
choice='s';
while(choice=='s' || choice=='S')
{
clrscr();
fflush(stdin);
choice='w';
textcolor(BLUE);
for(i=1;i<16;i++)
{

gotoxy(68,i);
cprintf("|");
}
gotoxy(68,16);
cprintf("~~~~~~~~~~~~~");
gotoxy(70,1);
textcolor(RED+BLINK);
printf("1,0000000");
gotoxy(70,2);
cprintf("50,00000");
gotoxy(70,3);
printf("25,00000");
gotoxy(70,4);
printf("13,50000");
gotoxy(70,5);
printf("6,75000");
gotoxy(70,6);
printf("3,37000");
gotoxy(70,7);
printf("1,68000");
gotoxy(70,8);
printf("84,000");
gotoxy(70,9);
printf("42,000");
gotoxy(70,10);
printf("21,000");
gotoxy(70,11);
printf("10,500");
gotoxy(70,12);
printf("5,250");
gotoxy(70,13);
printf("3000");
gotoxy(70,14);
printf("2000");
gotoxy(70,15);
printf("1000");

gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,6);
textcolor(RED+BLINK);
cprintf(" K O N  B A N E G A");
gotoxy(32,8);
textcolor(WHITE+BLINK);
cprintf(" C R O R E P A T I ");
textcolor(BLUE);
gotoxy(32,9);
cprintf("~~~~~~~~~~~~~~~~~~~");
gotoxy(1,17);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
gotoxy(1,19);
printf("Which of these did Bimbisara the king of Magadha,get as dowry on marring the daughter of the king of kosala?");
gotoxy(1,21);
textcolor(RED);
cprintf("A:Pataliputra");
gotoxy(40,21);
cprintf("B:Kashi");
gotoxy(1,22);
cprintf("C:Anga");
gotoxy(40,22);
cprintf("D:Vaisali");
gotoxy(1,23);
sol='B';
fflush(stdin);
scanf("%c",&ans);
switch(ans)
{
case 'a':
wrong(n,v);
break;
case 'b':
right(v,n,sol);
break;
case 'c':
wrong(n,v);
break;
case 'd':
wrong(n,v);
break;
case 'l':
life(name,choose,sol,q,cut,aud);
fflush(stdin);
choice=getche();
break;
default:
exit(0);
}
}
if(ans=='b')
{
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\                      Next question\n");
}
else
break;
v++;
clrscr();
fflush(stdin);
choice='s';
while(choice=='s' || choice=='S')
{
clrscr();
fflush(stdin);
choice='w';
textcolor(BLUE);
for(i=1;i<16;i++)
{

gotoxy(68,i);
cprintf("|");
}
gotoxy(68,16);
cprintf("~~~~~~~~~~~~~");
gotoxy(70,1);
textcolor(RED+BLINK);
cprintf("1,0000000");
gotoxy(70,2);
printf("50,00000");
gotoxy(70,3);
printf("25,00000");
gotoxy(70,4);
printf("13,50000");
gotoxy(70,5);
printf("6,75000");
gotoxy(70,6);
printf("3,37000");
gotoxy(70,7);
printf("1,68000");
gotoxy(70,8);
printf("84,000");
gotoxy(70,9);
printf("42,000");
gotoxy(70,10);
printf("21,000");
gotoxy(70,11);
printf("10,500");
gotoxy(70,12);
printf("5,250");
gotoxy(70,13);
printf("3000");
gotoxy(70,14);
printf("2000");
gotoxy(70,15);
printf("1000");

gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,5);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~");
gotoxy(32,6);
textcolor(RED+BLINK);
cprintf(" K O N  B A N E G A");
gotoxy(32,8);
textcolor(WHITE+BLINK);
cprintf(" C R O R E P A T I ");
textcolor(BLUE);
gotoxy(32,9);
cprintf("~~~~~~~~~~~~~~~~~~~");
gotoxy(1,17);
textcolor(BLUE);
cprintf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
gotoxy(1,19);
printf("Whose biography is titled 'Ek Thi Rani Aisi Bhi', written by Mridula Sinha?");
gotoxy(1,21);
textcolor(RED);
cprintf("A: Rani Lakshimibal");
gotoxy(40,21);
cprintf("B: Gayatri Devi");
gotoxy(1,22);
cprintf("C: Indira Gandhi");
gotoxy(40,22);
cprintf("D: Vijayraje Seindia");
gotoxy(1,23);
sol='D';
fflush(stdin);
scanf("%c",&ans);
switch(ans)
{
case 'a':
wrong(n,v);
break;
case 'b':
wrong(n,v);
break;
case 'c':
wrong(n,v);
break;
case 'd':
right(v,n,sol);
break;
case 'l':
life(name,choose,sol,q,cut,aud);
fflush(stdin);
choice=getche();
break;
default:
exit(0);
}
}
clrscr();
v=0;
textcolor(RED);
gotoxy(30,13);
cprintf("REPLAY?? [Y/N]");
choice==getche();
textcolor(WHITE);
}
getch();
}

wrong(int n,int v)
{
int a;
clrscr();
textcolor(RED+BLINK);
textbackground(BLACK);
gotoxy(35,11);
cprintf("~~~~~~~~~~~~~~~~~~~");
gotoxy(35,12);
cprintf("| G A M E  O V E R|");
gotoxy(35,13);
cprintf("~~~~~~~~~~~~~~~~~~~");
for(a=100;a<1000;a=a+200)
{
sound(a);
delay(130);
}
sound(20);
delay(200);
sound(1000);
delay(5);
sound(3000);
delay(20);
sound(110);
delay(30);
sound(230);
delay(10);
for(a=100;a<1000;a=a+200)
{
sound(a);
delay(130);
}
nosound();
gotoxy(32,20);
textcolor(RED);
if(v>=5)
cprintf("YOU WON 10,500 RS");
else
cprintf("YOU WON 0");
getch();
}

