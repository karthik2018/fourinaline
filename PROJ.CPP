#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<process.h>
#include<dos.h>
#include<fstream.h>
 class game
 {
  public:
  void startgame();
  void ins();
 }C;
  int i,j,m,n,x,y,a=0,b,v,p=0,z=0;
 int ar[6][7];
 char choice,c,d,p1[30],p2[30];

 void main()
{

 for(x=0;x<=5;x++)
  {
   for(y=0;y<=6;y++)
   ar[x][y]=0;
  }
 menu:
 clrscr();
 char str[]={"\t\t* * * * F O U R  I N  A  L I N E * * * *"};
 cout<<"\n\n\n";
 for(i=0;str[i]!='\0';i++)
 {
  cout<<str[i];
  delay(90);
 }
 textcolor(12);
 cprintf("\r\n\r\n\r\n                          1.S T A R T G A M E\r\n\r\n");
 cprintf("                       2.I N S T R U C T I O N S\r\n\r\n");
 cprintf("                              3.E X I T\r\n\r\n          ");
 choice=getch();
 switch(choice)
 {
  case '1':clrscr();
  C.startgame();

  break;                           //end of case 1
  case '2':clrscr();
   C.ins();
  goto menu;
  break;
  case '3':exit(0);
  break;
  default:cprintf("                   INVALID CHOICE");
   delay(500);
   exit(0);
  break;
 }                              //end of switchcase
  getch();
}

 void game::startgame()
 {
  fstream file;
 file.open("player.txt",ios::in|ios::out);
 cout<<"enter player 1 name ";
 cin>>p1;
 cout<<"enter player 2 name ";
 cin>>p2;
  cout<<"\n\n\n\n\n\n\n\n\n\t\t\t     LOADING GAME";
  for(i=1;i<=6;i++)
  {
   cout<<".";
   delay(500);
  }
  delay(500);
  textcolor(15);
  loop:
  for(m=0;m<42;m++)
  {
   play1:
   clrscr();
   cout<<"   1     2     3     4     5     6     7  \n";
   for(x=0;x<=5;x++)
   {
    cout<<"|_____|_____|_____|_____|_____|_____|_____|\n";
    for(y=0;y<=6;y++)
    {
     cout<<"|  "<<ar[x][y]<<"  ";
     if(y==6)
      cout<<"|";
    }
    cout<<endl;
   }
   cout<<"|_____|_____|_____|_____|_____|_____|_____|\n";
   cout<<"|     |     |     |     |     |     |     |\n";



   cout<<p1<<endl;
   cout<<"enter column number (only 1 digit) ";                            //column no
   c=getch();

   c-=1;

  if(c=='0')                              //1st column
  {
  i=5;
  while(i>=0)                          //checking row 1
  {
   if((ar[i][0]==1)||(ar[i][0]==2))	  //checking if row 1 is filled
   {
    if(i==0)
     goto play1;
    i--;				      //goes to upper row
   }
   else
   {
   ar[i][0]=1;                               //coin inserted in empty row
   break;
   }
  }
  }

  else if(c=='1')           //2nd column
  {
  i=5;
  while(i>=0)
  {
   if((ar[i][1]==1)||(ar[i][1]==2))
   {
    if(i==0)
     goto play1;
    i--;
   }
   else
   {
   ar[i][1]=1;
   break;
   }
  }
  }

  else if(c=='2')                  //3rd column
  {
  i=5;
  while(i>=0)
  {
   if((ar[i][2]==1)||(ar[i][2]==2))
    {
    if(i==0)
     goto play1;
    i--;
   }
   else
   {
   ar[i][2]=1;
   break;
   }
  }
  }

  else if(c=='3')                              //4th column
  {
  i=5;
  while(i>=0)
  {
   if((ar[i][3]==1)||(ar[i][3]==2))
    {
    if(i==0)
     goto play1;
    i--;
   }
   else
   {
   ar[i][3]=1;
   break;
   }
  }
  }

  else if(c=='4')                              //5th column
  {
  i=5;
  while(i>=0)
  {
   if((ar[i][4]==1)||(ar[i][4]==2))
    {
    if(i==0)
     goto play1;
    i--;
   }
   else
   {
   ar[i][4]=1;
   break;
   }
  }
  }

  else if(c=='5')                              //6th column
  {
  i=5;
  while(i>=0)
  {
   if((ar[i][5]==1)||(ar[i][5]==2))
    {
    if(i==0)
     goto play1;
    i--;
   }
   else
   {
   ar[i][5]=1;
   break;
   }
  }
  }

  else if(c=='6')                              //7th column
  {
  i=5;
  while(i>=0)
  {
   if((ar[i][6]==1)||(ar[i][6]==2))
    {
    if(i==0)
     goto play1;
    i--;
   }
   else
   {
   ar[i][6]=1;
   break;
   }
  }
  }
  else if(c==27)
   exit(0);
  else if(c>54&&c<=57)             //to check if column number is more than 7
  {
   cout<<"Please enter correct column number.";
   delay(500);
   goto play1;
  }
  d=isdigit(c);           //to check if character entered is a digit
   if(d==0)
  {
   cout<<"Please enter a number not character!";
   delay(1000);
   goto play1;
  }
   clrscr();
   cout<<"   1     2     3     4     5     6     7  \n";
   for(x=0;x<=5;x++)
   {
    cout<<"|_____|_____|_____|_____|_____|_____|_____|\n";
    for(y=0;y<=6;y++)
    {
     cout<<"|  "<<ar[x][y]<<"  ";
     if(y==6)
      cout<<"|";
    }
    cout<<endl;
   }
   cout<<"|_____|_____|_____|_____|_____|_____|_____|\n";
   cout<<"|     |     |     |     |     |     |     |\n";
   cout<<"\n\n";

  for(b=5;b>=3;b--)
   for(v=0;v<=6;v++)
   {
   if(((ar[b][v]==1)&&(ar[b-1][v]==1)&&(ar[b-2][v]==1)&&(ar[b-3][v]==1))||
   ((ar[b][v]==2)&&(ar[b-1][v]==2)&&(ar[b-2][v]==2)&&(ar[b-3][v]==2)))
    p=1;

  }

  for(b=5;b>=0;b--)
   for(v=0;v<=3;v++)
   {
   if(((ar[b][v]==1)&&(ar[b][v+1]==1)&&(ar[b][v+2]==1)&&(ar[b][v+3]==1))||
   ((ar[b][v]==2)&&(ar[b][v+1]==2)&&(ar[b][v+2]==2)&&(ar[b][v+3]==2)))
    p=1;

  }

  for(b=5;b>=3;b--)
   for(v=0;v<=3;v++)
   {
   if(((ar[b][v]==1)&&(ar[b-1][v+1]==1)&&(ar[b-2][v+2]==1)&&(ar[b-3][v+3]==1))||
   ((ar[b][v]==2)&&(ar[b-1][v+1]==2)&&(ar[b-2][v+2]==2)&&(ar[b-3][v+3]==2)))
    p=1;

  }

  for(b=5;b>=3;b--)
   for(v=6;v>=3;v--)
   {
   if(((ar[b][v]==1)&&(ar[b-1][v-1]==1)&&(ar[b-2][v-2]==1)&&(ar[b-3][v-3]==1))||
   ((ar[b][v]==2)&&(ar[b-1][v-1]==2)&&(ar[b-2][v-2]==2)&&(ar[b-3][v-3]==2)))
    p=1;
  }

  if(p==1)
   break;
   play2:
   clrscr();
   cout<<"   1     2     3     4     5     6     7  \n";
   for(x=0;x<=5;x++)
   {
    cout<<"|_____|_____|_____|_____|_____|_____|_____|\n";
    for(y=0;y<=6;y++)
    {
     cout<<"|  "<<ar[x][y]<<"  ";
     if(y==6)
      cout<<"|";
    }
    cout<<endl;
   }
   cout<<"|_____|_____|_____|_____|_____|_____|_____|\n";
   cout<<"|     |     |     |     |     |     |     |\n";



   cout<<p2<<endl;

   cout<<"enter column number (only 1 digit) ";                            //column no
   c=getch();


   c-=1;

   if(c=='0')                              //1st column
  {
  i=5;                                   //checking row 1
  while(i>=0)
  {
   if((ar[i][0]==1)||(ar[i][0]==2))      //checking if row 1 is filled
    {
    if(i==0)
     goto play2;
    i--;
   }			   //goes to upper row
   else
   {
   ar[i][0]=2;                             //coin inserted in empty row
   break;
   }
  }
  }
   else if(c=='1')           //2nd column
  {
  i=5;
  while(i>=0)
  {
   if((ar[i][1]==1)||(ar[i][1]==2))
    {
    if(i==0)
     goto play2;
    i--;
   }
   else
   {
   ar[i][1]=2;
   break;
   }
  }
  }

  else if(c=='2')                  //3rd column
  {
  i=5;
  while(i>=0)
  {
   if((ar[i][2]==1)||(ar[i][2]==2))
    {
    if(i==0)
     goto play2;
    i--;
   }
   else
   {
   ar[i][2]=2;
   break;
   }
  }
  }

  else if(c=='3')                              //4th column
  {
  i=5;
  while(i>=0)
  {
   if((ar[i][3]==1)||(ar[i][3]==2))
    {
    if(i==0)
     goto play2;
    i--;
   }
   else
   {
   ar[i][3]=2;
   break;
   }
  }
  }

  else if(c=='4')                              //5th column
  {
  i=5;
  while(i>=0)
  {
   if((ar[i][4]==1)||(ar[i][4]==2))
    {
    if(i==0)
     goto play2;
    i--;
   }
   else
   {
   ar[i][4]=2;
   break;
   }
  }
  }

  else if(c=='5')                              //6th column
  {
  i=5;
  while(i>=0)
  {
   if((ar[i][5]==1)||(ar[i][5]==2))
    {
    if(i==0)
     goto play2;
    i--;
   }
   else
   {
   ar[i][5]=2;
   break;
   }
  }
  }

  else if(c=='6')                              //7th column
  {
  i=5;
  while(i>=0)
  {
   if((ar[i][6]==1)||(ar[i][6]==2))
    {
    if(i==0)
     goto play2;
    i--;
   }
   else
   {
   ar[i][6]=2;
   break;
   }
  }
  }
  else if(c>54&&c<=57)
  {
   cout<<"Please enter correct column number.";
   delay(500);
   goto play2;
  }
  d=isdigit(c);
   if(d==0)
  {
   cout<<"Please enter a number not character!";
   delay(1000);
   goto play1;
  }
   clrscr();
   cout<<"   1     2     3     4     5     6     7  \n";
   for(x=0;x<=5;x++)
   {
    cout<<"|_____|_____|_____|_____|_____|_____|_____|\n";
    for(y=0;y<=6;y++)
    {
     cout<<"|  "<<ar[x][y]<<"  ";
     if(y==6)
      cout<<"|";
    }
    cout<<endl;
   }
   cout<<"|_____|_____|_____|_____|_____|_____|_____|\n";
   cout<<"|     |     |     |     |     |     |     |\n";
   cout<<"\n\n";

  for(b=5;b>=3;b--)
   for(v=0;v<=6;v++)
   {
   if(((ar[b][v]==1)&&(ar[b-1][v]==1)&&(ar[b-2][v]==1)&&(ar[b-3][v]==1))||
   ((ar[b][v]==2)&&(ar[b-1][v]==2)&&(ar[b-2][v]==2)&&(ar[b-3][v]==2)))
    a=1;
   }

  for(b=5;b>=0;b--)
   for(v=0;v<=3;v++)
   {
   if(((ar[b][v]==1)&&(ar[b][v+1]==1)&&(ar[b][v+2]==1)&&(ar[b][v+3]==1))||
   ((ar[b][v]==2)&&(ar[b][v+1]==2)&&(ar[b][v+2]==2)&&(ar[b][v+3]==2)))
      a=1;
   }

  for(b=5;b>=3;b--)
   for(v=0;v<=3;v++)
   {
   if(((ar[b][v]==1)&&(ar[b-1][v+1]==1)&&(ar[b-2][v+2]==1)&&(ar[b-3][v+3]==1))||
   ((ar[b][v]==2)&&(ar[b-1][v+1]==2)&&(ar[b-2][v+2]==2)&&(ar[b-3][v+3]==2)))
    a=1;
   }

  for(b=5;b>=3;b--)
   for(v=6;v>=3;v--)
   {
   if(((ar[b][v]==1)&&(ar[b-1][v-1]==1)&&(ar[b-2][v-2]==1)&&(ar[b-3][v-3]==1))||
   ((ar[b][v]==2)&&(ar[b-1][v-1]==2)&&(ar[b-2][v-2]==2)&&(ar[b-3][v-3]==2)))
    a=1;
    }

  if(a==1)
   break;

   for(i=0;i<6;i++)
   {
    for(j=0;j<7;j++)
    {
     if(ar[i][j]!=0)
      z=1;
     else
     {
      z=0;
      break;
     }
    }
    if(z==0)
     break;
   }
   if(z==1)
   {
    cout<<"draw ";
    break;
   }
  }
   char str1[]={"G A M E  O V E R"};
   if(a==1)
  {
   file<<"winner:";
   file<<p2;
   delay(1000);
   clrscr();
   cout<<"\n\n\n\n\n\t\t\t    ";
   for(i=0;str1[i]!='\0';i++)
   {
    cout<<str1[i];
    delay(90);
   }
   cout<<"\n\n\n\n\n\t\t\t";
   char str2[]={"P L A Y E R  2  W I N S !"};
   for(i=0;str2[i]!='\0';i++)
   {
    cout<<str2[i];
    delay(90);
   }
  }
  else if(p==1)
   {
    file<<"winner:";
    file<<p1;
    delay(1000);
    clrscr();
    cout<<"\n\n\n\n\n\t\t\t    ";
    for(i=0;str1[i]!='\0';i++)
    {
     cout<<str1[i];
     delay(90);
    }
    cout<<"\n\n\n\n\n\t\t\t";
    char str3[]={"P L A Y E R  1  W I N S !"};
    for(i=0;str3[i]!='\0';i++)
    {
     cout<<str3[i];
     delay(90);
    }
   }
   file.close();
 }

 void game::ins()
 {
  char ch;
  fstream fout;
  fout.open("ins.txt",ios::in|ios::out);
   fout<<"I N S T R U C T I O N S:\n\n";
   fout<<"Four in a line is a simple two player game.It has a board \n\n";
   fout<<"of 7 columns and 6 rows.Player1 and Player2 both are assigned \n\n";
   fout<<"digits 1 and 2 respectively.Each player takes turns to select \n\n";
   fout<<"a column to insert his digit.The first empty box in that column\n\n";
   fout<<"gets filled.The objective of player is to form a line of his 4\n\n";
   fout<<"digits horizontally,vertically or diagonally.The first player\n\n";
   fout<<"to achieve this wins the game.\n\n\n\n\n";
   fout<<"\n\n\n\nPress any key to go back to main menu";
  fout.close();
  ifstream fin;
  fin.open("ins.txt");
   while(!fin.eof())
   {
    fin.get(ch);
    cout<<ch;
   }
   fin.close();
   getch();
 }
