#include<stdio.h>
#include<conio.h>
#include<unistd.h>

int Arithmetic_operators() // this function is use for Arithmetic operators select and return the selection to a main function
{
    int select_Arithmetic_operators;
    printf("\n| 1 Addition \n| 2 Subtraction \n| 3 Multiplication \n| 4 Division  \n| 5 ALL IN ONE \n|--> ");
        scanf("%d",&select_Arithmetic_operators);
    
    return select_Arithmetic_operators;
}

int Number_system() // this function is use for Number system operation  return to a main function
{
    int select_Number_system;

    printf("\n| 1 Sum of 1 to user Numbers \n| 2 chack Palindrome Number \n| 3 find Factorial Number \n| 4 Armstrong Number \n| 5 Fibonacci Number \n| 6 Prime Number \n| 7 Number Swaping \n|--> ");
    scanf("%d",&select_Number_system);

    return select_Number_system;
}

    // here all ARITHMETIC operational functions
    void Addition();
    void Subtraction();
    void Multiplication();
    void Division();
    void all();
    
    // here all number system functions
    void sum();
    void palindrome();
    void factorial();
    void armstrong();
    void fibonacci();
    void prime();
    int swap();

int exit(int);

void main()
{
    int select;
        int select_Arithmetic,select_Number,select_Swap;

        system("cls");

            printf("\n\t\t\t\t\t- - -  A L L   L O G I C A L   O P E R A T I O N  - - - \n");
            printf("\t\t\t\t_______________________________________________________________________");
            printf("\n| 1 Arithmetic operators \n| 2 Number system \n| 0 Exit \n|--> ");
            scanf("%d",&select);

        system("cls");

        switch (select)
        {
        
            case 1:
                    select_Arithmetic=Arithmetic_operators();
                    system("cls");

                        switch(select_Arithmetic)
                        {
                            
                            case 1:
                                Addition();
                                    getch();
                                main();
                            break;

                            case 2:
                                Subtraction();
                                    getch();
                                main();
                            break;

                            case 3:
                                Multiplication();
                                    getch();
                                main();
                            break;

                            case 4:
                                Division();
                                    getch();
                                main();
                            break;

                            case 5:
                                all();
                                    getch();
                                main();
                            break;


                        default:
                            break;
                        }
            break;
        
            case 2:
                    select_Number=Number_system();
                    system("cls");
                        switch (select_Number)
                        {
                            case 1:
                                sum();
                                    getch();
                                main();
                            break;

                            case 2:
                                palindrome();
                                    getch();
                                main();
                            break;
                            
                            case 3:
                                factorial();
                                    getch();
                                main();
                            break;

                            case 4:
                                armstrong();
                                    getch();
                                main();
                            break;

                            case 5:
                                fibonacci();
                                    getch();
                                main();
                            break;

                            case 6:
                                prime();
                                    getch();
                                main();
                            break;

                            case 7:
                                  swap();
                                    getch();
                                main();
                            break;

                        default:
                            break;
                        }
            break;
            
            case 0:
                creator();
                exit(0);
            break;

        default:
                printf("Please select correct number ! ");
                getch();
                main();
            break;
        }

getch();
}

void Addition(){
    int First,Second;

        printf("| Enter First Digite : ");
            scanf("%d",&First);
        printf("| Enter Second Digite : ");
            scanf("%d",&Second);

    printf("|--> Here is the Addition of  %d + %d = %d",First,Second,First+Second);

}
void Subtraction(){
    int First,Second;

        printf("| Enter First Digite : ");
            scanf("%d",&First);
        printf("| Enter Second Digite : ");
            scanf("%d",&Second);

    printf("|--> Here is the  of Subtraction %d - %d = %d",First,Second,First-Second);

}
void Multiplication(){
    int First,Second;

        printf("| Enter First Digite : ");
            scanf("%d",&First);
        printf("| Enter Second Digite : ");
            scanf("%d",&Second);

    printf("|--> Here is the  of Multiplication %d * %d = %d",First,Second,First*Second);

}
void Division(){
    int First,Second;

        printf("| Enter First Digite : ");
            scanf("%d",&First);
        printf("| Enter Second Digite : ");
            scanf("%d",&Second);

    printf("|--> Here is the  of Division %d / %d = %d",First,Second,First/Second);

}
void all(){
    int a,b;
        printf("Enter First number : ");
        scanf("%d",&a);
        printf("Enter Second number :");
        scanf("%d",&b);

        printf("Sum   : %d \nSub   : %d \nMulti : %d \nDivi  : %d \nMode  : %d",a+b,a-b,a*b,a/b,a%b);
}

void sum(){
    int user,total=0;

        printf("| Enter Your number :");
        scanf("%d",&user);

            for(int i=1; i<=user; i++){
                
                total = total + i;
                printf("%d",i);

                    if(i!=user){
                        printf(" + ");
                    }
                    else
                        printf(" = ");
            }
            printf("%d ",total);
}
void palindrome(){
    int user,rast,revers=0,tamp;

        printf("| Enter any number to chack it palindrome or not : ");
        scanf("%d",&user);

        tamp = user;
            while (user>0)
            {
                rast = user % 10;
                revers = revers * 10 + rast;
                user = user / 10;
            }
            if(tamp==revers){

                printf("|--> %d is palindrome number !",revers);
            }
            else
                printf("|--> %d is not a palindrome number !",revers);
            
}
void factorial(){
    int user,total=1;

        printf("| Enter any number : ");
        scanf("%d",&user);


            for(int i=1; i<=user; i++)
            {
                total = total * i;
                printf("%d",i);

                if(i!=user)
                {
                    printf(" * ");
                }
                else
                    printf(" = ");
            
            }
            printf("%d ",total);
}
void armstrong(){
    int user,r,revers=0,tamp;

        printf("Enter any number to chack armstrong or not : ");
        scanf("%d",&user);

           tamp=user;

            while (user>0)
            {
                r = user % 10;
                revers = (r*r*r) +revers;
                user = user / 10;

            }
            printf("%d ",revers);

                if(tamp==revers){
                    printf("is armstrong number !");
                }
                else
                    printf("is not armstrong number !");
            

}
void fibonacci(){
    int n,a=0,b=1;

        printf("Enter any number : ");
        scanf("%d",&n);

            printf("Fibonacci => %d %d ",a,b);
    int tamp;

            for(int i=1; i<=n; i++)
            {
                tamp = a + b;
                    printf("%d ",tamp);
                a=b;
                b=tamp;
            }
}
void prime(){

    int n,c=0;

        printf("Enter any number :");
        scanf("%d",&n);
        system("cls");

        for(int i=1; i<=n; i++)
        {
            if(n % i == 0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d is prime number !\n \n--> ",n);
        }

    int isprime;
        for(int i=2; i<=n; i++)
        {
            isprime=1;

            for(int j=2; j*j<=i; j++)
            {
                if(i % j == 0)
                {
                    isprime=0;
                }
            }
            if(isprime)
            {
                printf("%d ",i);
            }
    
    } 
}
int swap()
{
    int N1,N2,selectS;

    printf("1.First logic \n2.Second logic \n3.Last logic \n:");
    scanf("%d",&selectS);

    printf("Enter First number : ");
    scanf("%d",&N1);
    printf("Enter Second number : ");
    scanf("%d",&N2);


        if(selectS==1)
        {
            swap1(N1,N2);
        }
        else if(selectS==2)
        {
             swap2( N1, N2);
        }
        else if(selectS==3)
        {
            swap3( N1, N2);
        }
        else
            printf("select right number !");


    return selectS;
        
    
}

        void swap1(int N1,int N2)
        {
            int MT;
                MT = N1;
                N1 = N2;
                N1 = MT; 
    
            printf("%d %d",N1,N2);
        }
        void swap2(int N1,int N2)
{
    N1 = N1 + N2;
    N2 = N1 - N2;
    N1 = N1 - N2;  

    printf("%d %d",N1,N2);

}
        void swap3(int N1,int N2)
        {

            N1 = N1 * N2;
            N2 = N1 / N2;    
            N1 = N1 / N2;

            printf("%d %d",N1,N2);
        }



void creator()
{
    char name[15]="Ronak Hedambha";

        sleep(2);
        printf("created by -: ");
    for(int i=0; i<=15; i++)
    {
        printf("%c",name[i]);
        sleep(1);
    }
}