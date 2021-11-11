//High/Low Game By Divyansh..

#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
#include<dos.h>

void main()
{
textbackground(WHITE);
textcolor(RED);
     C: clrscr();


 char ch,a[20],ch2;
 int num=100,rnum,guess,count,ch1,c=0;
 cout<<“nttt******************************”<<“nttt******************************”;
 cout<<“nttt**                          **”<<“nttt** Welcome To High/Low Game **”<<“nttt** ________________________ **”;
 cout<<“nttt**                          **”<<“nttt******************************”<<“nttt******************************”;
 cout<<“nnnn————“<<“n Main  Menu”<<“n————“<<“nnn 1.Rulesnn 2.Playnn 3.Exit”<<“nn Enter your choice(1-3):”;
 cin>>ch1;

 switch(ch1)
 {
  case 1:
    {
    clrscr();
    cout<<“nn———————“<<“n General Description”<<“n———————“;
    cout<<“nn1.The Computer picks a random number from 0 to 99.n  You must try to guess the number.”;
    cout<<“nn2.The Computer ask you to enter your guess.You have 8n  chances to guess the number.”;
    cout<<“nn3.The computer checks the number,if your guess isn  less than computer’s numer than it will show a messagen  that your guess is low and ask for higher number.”;
    cout<<“nn4.If your guess is higher than the computer’s numbern  than computer will show a message that your guess is high andn  ask for lower number.”;
    cout<<“nn5.If your guess is equal to the computer’s number,thann  computer will print a message congratulating youn  and will ask you to play the game again or exit.”;
    cout<<“nn6.If you are unable to guess the number than the computern  will a sorry message and ask you to play the game again or exit.”;
    D: cout<<“nnn  Press * to goto Main Menu:”;
    cin>>ch2;
    if(ch2==’*’)
    {
     ch2=’#’;
     goto C;
    }
    else
     goto D;
   }
    break;

 case 2:
  {
   clrscr();
   cout<<“nnnEnter Your Name:”;
   cin>>a;
   cout<<“nn”;
   for(int i=0;i<=100;i+=20)
   {
    cout<<“Loading…….”<<i<<“%r”;
    sleep(1);
   }
   cout<<“nnHi “<<a<<“………!!!!”;


       A: if(c>0)
    clrscr();
   randomize();
   rnum=random(num);
   cout<<“nnEnter Your Guess:”;
   cin>>guess;
   count=8;

     B: while(guess!=rnum)
        {
    count–;
    if(guess>rnum)
    {
     cout<<“nn”<<guess<<” is High….!!!!aa”<<“nnNow You Have “<<count<<” chance left”;
     if(count==0)
     break;
     cout<<“nnEnter Your Guess Again:”;
     cin>>guess;
     goto B;
    }
    if(guess<rnum)
    {
     cout<<“nn”<<guess<<” is Low…!!!aa”<<“nnNow You Have “<<count<<” chance left”;
     if(count==0)
      break;
     cout<<“nnEnter Your Guess Again:”;
     cin>>guess;
     goto B;
    }
   }
   if(guess==rnum)
   {
    cout<<“nnttCongratulation “<<a<<” You Have Done IT…….!!!!!aa”;
    switch(count)
    {
     case 7: cout<<“nnYour Score is 100 out of 100”;
      break;
     case 6: cout<<“nnYour Score is 85 out of 100”;
      break;
     case 5: cout<<“nnYour Score is 70 out of 100”;
      break;
     case 4: cout<<“nnYour Score is 55 out of 100”;
      break;
     case 3: cout<<“nnYour Score is 40 out of 100”;
      break;
     case 2: cout<<“nnYour Score is 25 out of 100”;
      break;
     case 1: cout<<“nnYour Score is 10 out of 100”;
      break;
    }
   }
   else
    cout<<“nnttSorry “<<a<<” Bad Luck……!!! Try Next Timeaaa”;
   cout<<“nnWant to Play More(y/n):”;
   cin>>ch;

   if(ch==’y’||ch==’Y’)
   {
    c++;
    goto A;
   }
   else
    {
     cout<<“nnnnttt    @@@@@@@@ THANK YOU @@@@@@@@   nn”;
     cout<<“================================================================================”;

     cout<<“aanntttt Special Thanks Tontttt___________________nntttt  Mrs.Rakhi Jain”;
     cout<<“nnnntttt Game Developed Byntttt___________________nntttt  Neeraj Mishra”;
     cout<<“nn================================================================================”;
     delay(10000);
     exit(0);
    }
  }
   break;
 case 3:
  {
   cout<<“nnn================================================================================”;
    cout<<“nntttt Special Thanks Tontttt___________________nntttt  Mrs.Rakhi Jain”;
    cout<<“nnnntttt Game Developed Byntttt___________________nntttt  Neeraj Mishra”;
    cout<<“nnn================================================================================”;
    delay(10000);
    exit(0);

  }
 }
 getch();
}
