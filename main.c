#include<stdio.h>

#include<stdlib.h>

#include<conio.h>


char p[20],q[20];
int flag=0;

void main()
{
    top();
    system("cls");
    frst_view();
    choose();
    getch();
}

void entry()
{//input players name

printf("\033[01;36m");                                        //player's entry
printf("\n\t\t Enter Name of Player 1 :->  ");scanf("%s",p);
printf("\n\t\t Enter Name of Player 2 :->  ");scanf("%s",q);

return p;

return q;

}


struct myDataType
{ // to store input values 0, X
    int i;
    char ch;

}inputValue();


void run();

int check(char sym[9],char ch,int count);                       //function decleration

struct myDataType inputValue(char sym[9],int count);

void Display(char sym[9]);


void ticTacToe()
{//executes tic tac toe

char reStart,a;
int h;

system("cls");
hadder();
printf("\033[1;32m");
printf("\t\t*                                                                                           *\n");
printf("\t\t*=================== T    i   c ------- T   a   c -------- T   o   e =======================*\n");
printf("\t\t*                                                                                           *\n");
printf("\t\t*********************************************************************************************\n");
printf("\033[0m");
printf("\033[01;33m");
printf("\n");
printf("\t\t Press 1   :  For INSTRUCTIONS\n");
printf("\t\t--------------------------------");
printf("\n\t\t Press 2   :  For Quick PLAY \n");
printf("\t\t-------------------------------");
printf("\n\t\t Choice    :  ");
h=getche();
switch(h)
{
case '1'    :
    instructions();
    break;
}
printf("\033[0m");
printf("\033[01;36m");
entry();
printf("\033[0m");


again:



run();
printf("\033[1;31m");
printf("\t\t*********************************************************************************************\n");
printf("\t\t*                                                                                           *\n");
printf("\t\t*------------------------------------THANKS FOR PLAYING ------------------------------------*\n");
printf("\t\t*                                                                                           *\n");
printf("\t\t*********************************************************************************************\n");
printf("\t\t*   Press 1     : To play Again.                                                            *\n");
printf("\t\t*   Press 2     : To Rename Player.                                                         *\n");
printf("\t\t*   Press 3     : To go back to Previous Menu.                                              *\n");
printf("\t\t*   Press 4     : To go back to Main Menu.                                                  *\n");
printf("\t\t*   Press 5     : To Quit.                                                                  *\n");
printf("\t\t*********************************************************************************************\n");
printf("\t\t    Choice      : ");


    a = getche();
        switch(a)
        {
        case '1' :
            system("cls");
            goto again;
            break;
        case '2'  :
            system("cls");
            entry();
            goto again;
            break;

        case '3' :
            system("cls");
            choose();
            break;
        case '4'  :
            system("cls");
            frst_view();
            choose();
            break;
        case '5'   :
            system("cls");
            thank();
            break;
        printf("\033[0m");
        }
}

void run()
{//replaces symbol to respective symbols
int count = 0;
struct myDataType info;
char symbol[9] = {'1','2','3','4','5','6','7','8','9'};


Display(symbol);
    again:

    info = inputValue(symbol,count);


   symbol[info.i] = info.ch;

    system("cls");                                  //to clear every time

    Display(symbol);

 if(check(symbol,info.ch,count)==1);

  else
    {
        count++;

      goto again;

    }
}

int check(char sym[9],char ch,int count)
{/* function to check the winner for tic tac toe*/

 int i;
printf("\033[01;36m");
  for(i = 0;i<=6; i+=3)                                     // winner = matching characters rowise

  if(sym[i] == ch && sym[i+1]==ch&&sym[i+2]==ch)
    {
        printf("\033[01;36m");
        printf("\t\t*********************************************************************************************\n");
        printf("\t\t*                                                                                           *\n");
        printf("\t\t*                                     The WINNER is : %c                                     *\n",ch);
        printf("\t\t*-------------------------------------CONGRATULATIONS!!-------------------------------------*\n");
        printf("\t\t*                                                                                           *\n");
        printf("\t\t*********************************************************************************************\n");
        return 1;
    }


  for(i = 0;i<3; i++)                                       //winner= matching character columnwise

   if(sym[i]==ch && sym[i+3]==ch&&sym[i+6]==ch)
    {
        printf("\033[01;36m");
        printf("\t\t*********************************************************************************************\n");
        printf("\t\t*                                                                                           *\n");
        printf("\t\t*                                     The WINNER is : %c                                     *\n",ch);
        printf("\t\t*-------------------------------------CONGRATULATIONS!!-------------------------------------*\n");
        printf("\t\t*                                                                                           *\n");
        printf("\t\t*********************************************************************************************\n");
        return 1;
    }

 if(sym[0]==ch && sym[4]==ch&&sym[8]==ch)
    {                                                           //Winner= Matching characters diagonally
        printf("\033[01;36m");
        printf("\t\t*********************************************************************************************\n");
        printf("\t\t*                                                                                           *\n");
        printf("\t\t*                                     The WINNER is : %c                                     *\n",ch);
        printf("\t\t*-------------------------------------CONGRATULATIONS!!-------------------------------------*\n");
        printf("\t\t*                                                                                           *\n");
        printf("\t\t*********************************************************************************************\n");
        return 1;

    }
    else
    if(sym[2]==ch && sym[4]==ch && sym[6]==ch)
    {
        printf("\033[01;36m");
        printf("\t\t*********************************************************************************************\n");
        printf("\t\t*                                                                                           *\n");
        printf("\t\t*                                     The WINNER is : %c                                     *\n",ch);
        printf("\t\t*-------------------------------------CONGRATULATIONS!!-------------------------------------*\n");
        printf("\t\t*                                                                                           *\n");
        printf("\t\t*********************************************************************************************\n");
        return 1;

   }
    else
    if(count==8)
    {
        printf("\033[01;36m");
        printf("\t\t*********************************************************************************************\n");
        printf("\t\t*                                                                                           *\n");
        printf("\t\t*                                 The Game is DRAW !!                                       *\n");
        printf("\t\t*--------------------------Better Luck Next Time, Best of Luck------------------------------*\n");
        printf("\t\t*                                                                                           *\n");
        printf("\t\t*********************************************************************************************\n");                                                        //if no element match in above conditions
        return 1;

    }else
    return 0;
    printf("\033[0m");
}

struct myDataType inputValue(char sym[9],int count)
{//enter values X and 0 alternatively
    char value;

    int i;

    struct myDataType info;

  inputAgain:

if(count%2 == 0)
    {
        printf("\033[1;31m");
        printf("\n\t\t\t\t\t        Enter Your Choice %s (X) :",p);
        printf("\033[0m");
    }else{
            printf("\033[1;31m");
            printf("\n\t\t\t\t\t        Enter Your Choice %s (O) :",q);
            printf("\033[0m");
         }
value=getche();

for(i=0;i<9;i++)
{
                                                        //entering values replaced by array memory
    if(value == sym[i])
        {

        info.i = i;

        if(count%2 == 0)

          info.ch = 'X';

     else

        info.ch = 'O';

       break;

    }else{

       info.i = -1;
            info.ch = ' ';

    }
    }
    if(info.i == -1)
    {                                                      //if number entered is either repeated or greater than 9
        printf("\n\t\t Input is not Valid");

        goto inputAgain;

    }

    return info;

}


void Display(char sym[9])
{//layout structure

system("cls");
if (flag >0)
{

hadder();
printf("\033[1;32m");
printf("\t\t*=================== T    i   c ------- T   a   c -------- T   o   e =======================*\n");
printf("\t\t*                                                                                           *\n");
printf("\t\t*============================ A Project By : HARSHIT TYAGI =================================*\n\n");

}
if(flag==0)
hadder();
printf("\033[01;33m");
printf("\t\t %s Symbol: X                                                     \n",p);
printf("\t\t %s Symbol: O                                                     \n\n",q);
printf("\033[01;36m");
printf("\t\t*********************************************************************************************\n");
printf("\t\t*                                                                                           *");
printf("\n\t\t*                               _______________________                                     *");
printf("\n\t\t*                              |       |       |       |                                    *");
printf("\n\t\t*                              |   %c   |   %c   |   %c   |                                    *",sym[0],sym[1],sym[2]);
printf("\n\t\t*                              |-------|-------|-------|                                    *");
printf("\n\t\t*                              |   %c   |   %c   |   %c   |                                    *",sym[3],sym[4],sym[5]);
printf("\n\t\t*                              |-------|-------|-------|                                    *");
printf("\n\t\t*                              |   %c   |   %c   |   %c   |                                    *",sym[6],sym[7],sym[8]);
printf("\n\t\t*                              |_______|_______|_______|                                    *\n");
printf("\t\t*                                                                                           *\n");
printf("\t\t*                                                                                           *\n");
printf("\t\t*********************************************************************************************\n");
printf("\n");
flag++;

}


void frst_view()
{//after welcome

    int c;

    hadder();
printf("\033[1;31m");
printf("\n\t\t      *---------------------------------------------------------------------------*");
printf("\033[01;33m");
printf("\n\t\t      *       Project By       |     HARSHIT TYAGI                                *");
printf("\033[1;31m");
printf("\n\t\t      *---------------------------------------------------------------------------*");
printf("\033[01;33m");
printf("\n\t\t      *       Course           |     Bachelor Of Technology                       *");
printf("\033[1;31m");
printf("\n\t\t      *---------------------------------------------------------------------------*");
printf("\033[01;33m");
printf("\n\t\t      *       Branch           |     Information Technology                       *");
printf("\033[1;31m");
printf("\n\t\t      *---------------------------------------------------------------------------*");
printf("\033[01;33m");
printf("\n\t\t      *       Year             |     2nd                                          *");
printf("\033[1;31m");
printf("\n\t\t      *---------------------------------------------------------------------------*");
printf("\033[01;33m");
printf("\n\t\t      *       Semester         |     III                                          *");
printf("\033[1;31m");
printf("\n\t\t      *---------------------------------------------------------------------------*");
printf("\033[01;33m");
printf("\n\t\t      *       Roll No.         |     1902160130021                                *");
printf("\033[1;31m");
printf("\n\t\t      *---------------------------------------------------------------------------*");
printf("\033[01;33m");
printf("\n\t\t      *       College          |     (216)IIMT College Of Engineering, Gr. Noida  *");
printf("\033[1;31m");
printf("\n\t\t      *---------------------------------------------------------------------------*");
printf("\033[01;33m");
printf("\n\t\t      *       University       |     Dr. A.P.J. Abdul Kalam Technical University  *");
printf("\033[1;31m");
printf("\n\t\t      *---------------------------------------------------------------------------*");
printf("\033[01;33m");
printf("\n\t\t      *       Submitted To     |     (Asst. Professor) Mr. Vishwash Chandra       *");
printf("\033[1;31m");
printf("\n\t\t      *---------------------------------------------------------------------------*");
printf("\n\n\n");
printf("\033[0m");
printf("\033[1;31m");
printf("\n\t\t Press 1 : To Move Forward...  ");
c = getche();
printf("\033[0m");
system("cls");
}

void top()
{//welcome
       int g;
        printf("\033[1;97m");
       printf("\n\n\n\n\n");
printf("\t\t********************************************************************************************\n");
printf("\t\t********************************************************************************************\n");
printf("\t\t*******                                                                              *******\n");
printf("\t\t*******  0       0   0000000   0         000000      000000     0        0  0000000  *******\n");
printf("\t\t*******  0       0   0         0        0           0      0    00      00  0        *******\n");
printf("\t\t*******  0       0   0         0        0          0        0   0 0    0 0  0        *******\n");
printf("\t\t*******  0   0   0   0000000   0        0          0        0   0  0  0  0  0000000  *******\n");
printf("\t\t*******  0  0 0  0   0         0        0          0        0   0   00   0  0        *******\n");
printf("\t\t*******  0 0   0 0   0         0        0           0      0    0        0  0        *******\n");
printf("\t\t*******  00     00   0000000   0000000   000000      000000     0        0  0000000  *******\n");
printf("\t\t*******                                                                              *******\n");
printf("\t\t********************************************************************************************\n");
printf("\t\t********************************************************************************************\n");
printf("\n\n\t\tPress Any key To Continue...");
g = getche();

}

void hadder()
{//IIMT hadder

printf("\033[1;32m");
printf("\n\n\n");
printf("\t\t*********************************************************************************************\n");
printf("\t\t*                                                                                           *\n");
printf("\t\t*=========================== I I M T COLLEGE OF ENGINEERING ================================*\n");
printf("\t\t*                                                                                           *\n");
printf("\t\t*========================= MINI PROJECT BASED ON C PROGRAMMING =============================*\n");
printf("\t\t*                                                                                           *\n");
printf("\t\t*====================================== WELCOME ============================================*\n");
printf("\t\t*                                                                                           *\n");
printf("\t\t*********************************************************************************************\n");
printf("\033[0m");
}


void instructions()
{//instructions to tic tac toe
    int f;
    system("cls");
    hadder();
    printf("\033[1;32m");
    printf("\t\t*                                                                                           *\n");
    printf("\t\t*=================== T    i   c ------- T   a   c -------- T   o   e =======================*\n");
    printf("\t\t*                                                                                           *\n");
    printf("\t\t*********************************************************************************************\n");
    printf("\033[0m");

    printf("\033[01;33m");
    printf("\n\t\t General Instructions To Play Tic Tac Toe :");
    printf("\033[1;31m");
    printf("\n\t\t ==========================================");
    printf("\033[01;33m");
    printf("\n\t\t Note:    Always use minimize window");
    printf("\033[1;31m");
    printf("\n\t\t ===================================");
    printf("\033[01;33m");
    printf("\n\t\t Step 1 : Firstly enter player's names, symbols will be given automatically.");
    printf("\033[1;31m");
    printf("\n\t\t ---------------------------------------------------------------------------");
    printf("\033[01;33m");
    printf("\n\t\t Step 2 : Select the number to be replaced by your symbol.");
    printf("\033[1;31m");
    printf("\n\t\t ---------------------------------------------------------");
    printf("\033[01;33m");
    printf("\n\t\t Step 3 : Pass the turn to second player.");
    printf("\033[1;31m");
    printf("\n\t\t ----------------------------------------");
    printf("\033[01;33m");
    printf("\n\t\t Step 4 : Then second player will play his/her turn.");
    printf("\033[1;31m");
    printf("\n\t\t ---------------------------------------------------");
    printf("\033[01;33m");
    printf("\n\t\t Step 5 : Winner will be decided on matching three symbols either in a column,\n\t\t\t  in a row or in either of the diagonal.\n\t\t\t  In case of no matching game will be declared as DRAW.");
    printf("\033[1;31m");
    printf("\n\t\t -----------------------------------------------------------------------------");
    printf("\033[01;33m");
    printf("\n\t\t Result : Symbol of the winner will be given on WINNING.");
    printf("\033[1;31m");
    printf("\n\t\t =======================================================");
    printf("\033[01;32m");
    printf("\n\t\t Press any key to start game");
    f = getche();
    printf("\033[1;97m");
    system("cls");
    hadder();
}

void thank()
{//thank u
    int l;

        printf("\033[01;33m");
       printf("\n\n\n\n\n");
printf("\t\t********************************************************************************************\n");
printf("\t\t********************************************************************************************\n");
printf("\t\t*******                                                                              *******\n");
printf("\t\t*******   000000000   0      0     000     00      0   0       0        0       0    *******\n");
printf("\t\t*******       0       0      0    0   0    0 0     0   0     0          0       0    *******\n");
printf("\t\t*******       0       0      0   0     0   0  0    0   0   0            0       0    *******\n");
printf("\t\t*******       0       00000000   0000000   0   0   0   0 0              0       0    *******\n");
printf("\t\t*******       0       0      0   0     0   0    0  0   0   0            0       0    *******\n");
printf("\t\t*******       0       0      0   0     0   0     0 0   0     0          0       0    *******\n");
printf("\t\t*******       0       0      0   0     0   0      00   0       0        000000000    *******\n");
printf("\t\t*******                                                                              *******\n");
printf("\t\t********************************************************************************************\n");
printf("\t\t********************************************************************************************\n");
printf("\n\n\n\n");
l=getche();
exit(0);
}

typedef struct
{//diary structure
  int day;
  int month;
  int y;
  char note[255];
} Note;

int get_first_week_day(int y)
{//first day of the year
    int d;
    d = (((y - 1) * 365) + ((y - 1) / 4) - ((y - 1) / 100) + ((y) / 400) + 1) % 7;
    return d;

}

char *getName(int day)
{ //returns the name of the day

   switch(day)
   {
      case 0 :return("Sunday");
      case 1 :return("Monday");
      case 2 :return("Tuesday");
      case 3 :return("Wednesday");
      case 4 :return("Thursday");
      case 5 :return("Friday");
      case 6 :return("Saturday");
      default:return("Error: Invalid Argument Passed");
   }
}

void flush()
{//check whether file is empty or not
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int isLeapYear( int y )
{//check if leap year
    return(y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0));
}

int leapYears( int y )
{//return leap year
    return y/4 - y/100 + y/400;
}

int todayOf( int y, int m, int d)
{//return no of days of corrosponding months
    static int DayOfMonth[] =
        { -1,0,31,59,90,120,151,181,212,243,273,304,334};
    return DayOfMonth[m] + d + ((m>2 && isLeapYear(y))? 1 : 0);
}

long days( int y, int m, int d)
{//return week day of last year
    int lastYear;
    lastYear = y - 1;
    return 365L * lastYear + leapYears(lastYear) + todayOf(y,m,d);
}

int getDayNumber(int d, int m, int y)
{ //returns the day number
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

void more_calander_options()
{//more options in calander
    int m;
     printf("\033[01;36m");
        printf("\n\t\t WELCOME To CALANDER OPTIONS:");
        printf("\033[01;33m");
        printf("\n\t\t ----------------------------");
        printf("\n\t\t Press 1 : To View Year calendar.");
        printf("\n\t\t --------------------------------");
        printf("\n\t\t Press 2 : To view a Month.");
        printf("\n\t\t --------------------------");
        printf("\n\t\t Press 3 : To Find Day.");
        printf("\n\t\t --------------------------");
        printf("\n\t\t Press 4 : To Add Note.");
        printf("\n\t\t ----------------------");
        printf("\n\t\t Choice  : ");
        printf("\033[1;97m");
        m = getche();
        switch(m)
        {
    case '1' ://yearly calander
        system("cls");
        cal();
        break;
    case '2' ://return month calander
         system("cls");
         int y,month;
            hadder();
            printf("\033[01;36m");
            printf("\n\t\t Month No.(MM) :"); scanf("%d",&month);
            printf("\n\t\t Year (YYYY)   :"); scanf("%d",&y);
            calendar(y, month);
            thank();
            break;
    case '3' ://return day of the date
        system("cls");
        hadder();
        int d;
            printf("\033[01;36m");
             printf("\n\t\t Enter the following: \n");
             printf("\t\t Day (DD):"); scanf("%d",&d);
             printf("\n\t\t Month No.(MM) :"); scanf("%d",&month);
             printf("\n\t\t Year (YYYY)   :"); scanf("%d",&y);
             printf("\033[01;33m");
             printf("\n\t\t The day is : %s\n", getName(getDayNumber(d, month, y)));
             printf("\033[1;97m");
             thank();
            break;
    case '4' ://input note at first calendar option
         system("cls");
         hadder();
         addnote();
            break;
        }


}

void addnote()
{//add note to date
    int q;
    Note note;
    FILE *fp;

    fp = fopen("note.bin", "r");
    if (fp == NULL)
        {
            fp = fopen("note.bin", "w");
        }
    fclose(fp);
    printf("\033[01;36m");
            printf("\n\t\t Enter the following: \n");
            printf("\t\t Day (DD)        :"); scanf("%d",&note.day);
            printf("\n\t\t Month No.(MM) :"); scanf("%d",&note.month);
            printf("\n\t\t Year (YYYY)   :"); scanf("%d",&note.y);
            flush();

            printf("\n\t\t Enter the note:  ");
            printf("\033[01;33m");
            fgets(note.note, 255, stdin);
            fp = fopen("note.bin", "a+");
            if (fp == NULL)
                {
                    printf("\n\t\t File note.bin can not be opened.\n");
                    exit(1);
                }
            fwrite(&note, sizeof(Note), 1, fp);
            printf("\n\t\t Note added Successfully...\n");

            fclose(fp);
            printf("\033[1;97m");
            printf("\n\t\t Press 1 :  To Continue");
            printf("\n\t\t ----------------------");
            printf("\n\t\t Press 2 :  To EXIT ");
            q = getche();
            switch(q)
            {
            case '1' :
                system("cls");
                choose();
                break;
            case '2' :
                system("cls");
                thank();
                break;
            }
}

void choose()
{//choose weather calendar or tic tac toe

    int d,m;
    back:
    printf("\033[1;32m");
    hadder();
    printf("\033[0m");
    printf("\033[01;33m");
    printf("\n\t\t You Have Two choices");
    printf("\n\t\t --------------------");
    printf("\n\t\t Press 1 :----------->    CALENDER");
    printf("\n\t\t ---------------------------------");
    printf("\n\t\t Press 2 :----------->    To PLAY Tic Tac Toe");
    printf("\n\t\t ---------------------------------------------");
    printf("\n\t\t Choice  :----------->    ");
    d= getche();
    system("cls");
    hadder();
switch(d)
{
    case '1' : //more options on calander
        more_calander_options();
        break;
    case '2' :
        ticTacToe();
        break;

}
printf("\033[0m");
}

void calendar(int y, int m)
{//month view
    FILE *fp;
    Note* notes, note;
    int len, j, hasNote = 0;
    char choice;
    const char *NameOfMonth[] = { NULL/*dummp*/,
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    char Week[] = "Sun     Mon      Tus     Wed     Thurs      Fri      Sat";
    int DayOfMonth[] =
        { -1,31,28,31,30,31,30,31,31,30,31,30,31 };
    int weekOfTopDay;
    int i,day;

    weekOfTopDay = days(y, m, 1) % 7;

    fp = fopen("note.bin", "rb");

    if (fp == NULL)
        {
            printf("\n\t\t Couldn't read notes. \n");
        }
    len = 0;
    while(fread(&note, sizeof(Note), 1, fp))
        {
            if (note.y == y && note.month == m)
                {
                    len++;
                }
        }
    rewind(fp);

    j = 0;
    notes = (Note*) malloc (sizeof(Note) * len);
    while(fread(&note, sizeof(Note), 1, fp))
        {
      if (note.y == y && note.month == m)
       {
        notes[j] = note;
        j++;
      }
    }

    fclose(fp);

    if(isLeapYear(y))
        DayOfMonth[2] = 29;
        printf("\033[01;36m");
    printf("\n---------------------%s %d---------------------\n", NameOfMonth[m], y);
        printf("\033[01;33m");
        printf("\n Sun \t Mon \t Tue \t Wed \t Thurs \t Fri \t Sat \n");
        printf("\033[01;36m");
    for(i=0;i<weekOfTopDay;i++)
        printf("\t ");
    for(i=weekOfTopDay,day=1;day <= DayOfMonth[m];i++,day++){
        hasNote = 0;
        for (j = 0; j < len; j++)
            {
          if (notes[j].day == day)
          {
            printf("\033[01;33m");
            printf("%2d\t ",day);
            hasNote = 1;
             printf("\033[01;36m");

            break;
          }
        }
        if (hasNote == 0)
        {
          printf("%2d\t ",day);
           printf("\033[01;36m");
        }
        if(i % 7 == 6)
            {
                printf("\n");
                printf("\033[1;31m");
            }

    }
    printf("\n");
     printf("\n\t\t Press 'N' : To see Notes. ");
     printf("\n\t\t -------------------------");
     printf("\n\t\t Press 'Q' : To Exit.");
     printf("\n\t\t --------------------");
     printf("\n\t\t Choice    : ");
    scanf("\n %c", &choice);
    if (choice == 'N')
        {
      printf("\n\t\t Here are list of notes for %d %d\n\t\t", m, y);
      printf("\n\t\t --------------------------------------\n");
      for (j = 0; j < len; j++)
      {
        printf("\t\t %d : %s\n", notes[j].day, notes[j].note);
        printf("\n\t\t ---------------------------------------");
      }
    } else
     {
     thank();
     }
}

int cal()
{//print yearly calander
    system("cls");
    int y, month,day,daysINMonth,weekday=0,startingDay;

     Note note;
    FILE *fp;

    fp = fopen("note.bin", "r");
    if (fp == NULL)
        {
            fp = fopen("note.bin", "w");
        }
    fclose(fp);

    printf("\033[1;32m");
    hadder();
    printf("\033[0m");
    printf("\033[01;36m");
    printf("\n\n");
    printf("\n                                 Enter the desired year to see the Calender: ");
    scanf("%d", &y);

    char *months[]={"January", "February", "March", "April", "May", "June ", "July","August", "September", "October", "November","December"};
    int e;
    int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};

    if ((y%4==0&&y%100!=0)||(y%400==0))
        monthDay[1]=29;


    startingDay=get_first_week_day(y);

    for(month=0;month<12;month++)
    {
        printf("\t\t");
        daysINMonth=monthDay[month];
        printf("\033[01;36m");
        printf("\n\n-------------------------%s-------------------------\n",months[month]);
        printf("\033[0m");
        printf("\033[01;33m");
        printf("\n Sun \t Mon \t Tue \t Wed \t Thurs \t Fri \t Sat \n");
        printf("\033[0m");
        for(weekday=0; weekday<startingDay; weekday++)
        {
            printf("\t");

        }

        for(day=1;day<=daysINMonth;day++)
        {

            printf("  %d\t",day);
            printf("\033[01;36m");


            if(++weekday>6)
                {
                    printf("\n");
                    printf("\033[1;31m");
                    weekday=0;

                }

            startingDay = weekday;

        }

    }
    int r;
    printf("\n Press Any key to continue...");
    r = getche();
    system("cls");
    hadder();
    printf("\033[0m");
    printf("\033[01;33m");
    printf("\n\n\t\t Press 1    :  To go back to Previous Menu.");
    printf("\n\t\t --------------------------------------------");
    printf("\n\t\t Press 2    :  To go back to Main Menu.");
    printf("\n\t\t --------------------------------------");
    printf("\n\t\t Press 3    :  To change the year.");
    printf("\n\t\t ---------------------------------");
    printf("\n\t\t Press 4    :  To Find the Day.");
    printf("\n\t\t ------------------------------");
    printf("\n\t\t Press 5    :  To Add Note.");
    printf("\n\t\t --------------------------");
    printf("\n\t\t Press 6    :  To View a Month.");
    printf("\n\t\t ------------------------------");
    printf("\n\t\t Press 7    :  To Quit. ");
    printf("\n\t\t -----------------------");
    printf("\n\t\t Choice     :  ");
    e = getche();
        switch(e)
        {
        case '1' :
            system("cls");
            choose();
            break;
        case '2'  :
            system("cls");
            frst_view();
            choose();
            break;
        case '3'  :
            system("cls");
            cal();
            break;
        case '4'  :
            system("cls");
            hadder();
            printf("\033[01;36m");
             printf("\n\t\t Enter the following: \n");
             printf("\t\t Day (DD):"); scanf("%d",&day);
             printf("\n\t\t Month No.(MM) :"); scanf("%d",&month);
             printf("\n\t\t Year (YYYY)   :"); scanf("%d",&y);

             printf("\n\t\t The day is : %s\n", getName(getDayNumber(day, month, y)));
             printf("\033[1;97m");
            break;
        case '5' :
            system("cls");
            hadder();
            addnote();
            break;
        case '6'  :
            system("cls");
            hadder();
            printf("\033[01;36m");
            printf("\n\t\t Month No.(MM) :"); scanf("%d",&month);
            printf("\n\t\t Year (YYYY)   :"); scanf("%d",&y);

            calendar(y, month);
            thank();

            break;
        case '7'  :
            system("cls");
            hadder();
            thank();
            break;
        }



}
