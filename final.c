#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int count2=0,count4=0;
int i,j,k,l,m,p,q,r=0,del, vei[8][10];
void menu(void);
void total();
void total_four();
void total_two();
void newv1(int);
void newv2(int);
int main(){
    for (l=0;l<8;l++)
    {
        for (m=0;m<10;m++)
        {
            vei[l][m]=0;
        }
    }
while(1)
{
menu();
scanf("%d",&i);
switch(i)
{
case 1 :
        vehicle();
        break;
case 2 :

        total();
        break;
case 3 :

        total_four();
        break;
case 4 :

        total_two();
        break;
case 5 :
        display();
        break;
case 6 :
        departure();
        break;
case 7 :
        exit(0);
default :
        printf(" INVALID CHOICE !");
        break;
}
}
getch();
}
void menu()
{
    system("cls");
    printf("\n                                             UPES AUTOMATED PARKING SYSTEM    ");
    printf("\n\n\n\n  1. New Vehicle Entry \n");
    printf("\n\n  2. Total No. Of Parked Vehicles \n");
    printf("\n\n  3. Total No. Of Four-Wheelers Parked \n");
    printf("\n\n  4. Total No. Of Two-Wheelers Parked \n");
    printf("\n\n  5. Display the total no. of Vehicles \n");
    printf("\n\n  6. Departure of the Vehicle \n");
    printf("\n\n  7. Exit \n");
    printf("\n\n\n  Enter your choice : ");
}
    int type;
    int row=0;
    int col=0;
    int row1=4;
    int col1=0;
void vehicle()
{

    system("cls");
    printf("\n\n Enter Vehicle Type ( 1. Two Wheeler  |  2. Four Wheeler ) : ");
    scanf("%d", &j);
    int two,four;
    switch(j)

    {
    case 1 :
             printf("\n\n Enter The Vehicle Number : ");
             scanf("%d", &two);
             for(p=0;p<4;p++)
             {
                 for(q=0;q<10;q++)
                 {
                     if(vei[p][q]==two)
                     {
                         printf("\n\n Another Vehicle Has Same Number. Please Recheck and Enter a Valid Number \n");
                         r=1;
                         system("pause");
                         goto abc;
                     }
                     else{
                        r=0;
                     }
                 }
             }
             abc :
             if (r==0)
             {
                 count2++;
                newv1(two);
             }

             break;

    case 2:
            printf("\n\n Enter The Vehicle Number :");
            scanf("%d",&four);
            for(p=4;p<8;p++)
             {
                 for(q=0;q<10;q++)
                 {
                     if(vei[p][q]==four)
                     {
                         printf("\n\n Another Vehicle Has Same Number. Please Recheck and Enter a Valid Number ");
                         r=1;
                         system("pause");
                         goto abcd;
                     }
                     else{
                        r=0;
                     }
                 }
             }
             abcd :
                 if (r==0)
            {
                count4++;
            newv2(four);
            }


             break;
}
}

void total_two()
{
    int left;
    left=40-count2;
    printf("\n The Total Number Of Two Wheeler Vehicles are = %d & the Spots left are = %d \n",count2,left);
    printf("\n");
    system("pause");
}
void total_four()
{
    int left;
    left=40-count4;
    printf("\n The Total Number Of Four Wheeler Vehicles are = %d & the Spots left are = %d\n ",count4,left);
    printf("\n");
    system("pause");

}
void total()
{
    int tot,left;
    tot=count2+count4;
    left=80-tot;
    printf("\n The Total Number Of Vehicles are = %d and the number of Spots left are = %d\n",tot,left);

system("pause");
}
void newv1(int a)
{
    if (count2<=10)
    {
        vei[row][col]=a;
        col++;


    }
    else if (count2==11)
    {
        row++;
        col=0;
        vei[row][col]=a;
        col++;
    }

  else if (count2>11 && count2<=20)
  {

      vei[row][col]=a;
      col++;
  }
 else if(count2==21)
 {
     row++;
     col=0;
     vei[row][col]=a;
     }
else if(count2>21 && count2<=30)
{
    col++;
    vei[row][col]=a;

}
else if(count2==31)
{
    col=0;
    row++;
    vei[row][col]=a;

}
else if(count2>31&&count2<=40)
{
    col++;
    vei[row][col]=a;
}
}
void display()
{ system ("cls");
  printf("\nYour current vehicle location is\n");
  printf("\n\n                               Two Wheelers : \n\n");
    for (l=0;l<4;l++)
    {
        printf("\n\n");
        for (m=0;m<10;m++)
        {
            printf("    %d    ", vei[l][m]);
        }
        printf("\n");
    }
  printf("\n\n                                Four Wheelers : \n\n");
     for (l=4;l<8;l++)
     {   printf("\n\n\n");
         for (m=0;m<10;m++)
         {
            printf("    %d    ", vei[l][m]);
         }
     }
     printf("\n\n");
     system("pause");

}
void departure()
{
     int n,o,choice;
    display();
    printf("\n Enter The Type Of Vehicle You Want to Take(1.Two Wheeler | 2.Four Wheeler ) :  ");
    scanf("%d",&choice);
    if(choice==1)
    {
        count2--;
        printf("\n\n Enter Your Vehicle Number :  ");
        scanf("%d", &del);

    for(n=0;n<4;n++)
    {
        for(o=0;o<10;o++)
        {
            if (vei[n][o]==del)
                {vei[n][o]=0;
                ;}
            }
        }
    }
    else if(choice==2)
    {
    count4--;
    printf("\n\n Enter Your Vehicle Number :  ");
        scanf("%d", &del);

    }

    for(n=4;n<=7;n++)
    {
        for(o=0;o<10;o++)
        {
            if(vei[n][o]==del)
                {vei[n][o]=0;
        }        ;}
    }
    display();
    }



void newv2(int a)
{
    if(count4<=10)
    {
        vei[row1][col1]=a;
        col1++;
    }
    else if(count4==11)
    {


    col1=0;
    row1++;
    vei[row1][col1]=a;

    }
    else if(count4>11 && count4<=20)
    {
        col1++;
        vei[row1][col1]=a;
    }

    else if(count4==21)
    {
        col1=0;
    row1++;
    vei[row1][col1]=a;
    }
    else if(count4>21 && count4<=30)
    {
        col1++;
        row1;
        vei[row1][col1]=a;

    }
    else if(count4==31)

    {
     col1=0;
    row1++;
    vei[row1][col1]=a;
    }
     else if(count4>31&&count4<=40)
     {
         col1++;
         vei[row1][col1]=a;
     }
}
