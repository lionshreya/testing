// Calculator example using C code
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<assert.h>
#define KEY "Enter the calculator Operation you want to do:"

// Function prototype declaration
int addition();
void subtraction();
int multiplication();
void division();
void modulus();
int power();
int factorial();
void calculator_operations();

// Start of Main Program
int main()
{
    int X=1;
    char Calc_oprn;

    // Function call
    calculator_operations();

    while(X)
    {
        printf("\n");
        printf("%s : ", KEY);

        Calc_oprn=getche();

        switch(Calc_oprn)
        {
            case '+': addition();
                      break;

            case '-': subtraction();
                      break;

            case '*': multiplication();
                      break;

            case '/': division();
                      break;

            case '?': modulus();
                      break;

            case '!': factorial();
                      break;

            case '^': power();
                      break;

            case 'H':
            case 'h': calculator_operations();
                      break;

            case 'Q':
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      calculator_operations();
                      break;

            case 'a':
            case 'A': test_addition();
                    break;

            case 'm':
            case 'M': test_multiplication();
                    break;

            case 'p':
            case 'P': test_power();
                    break;

            default : system("cls");

    printf("\n**********You have entered unavailable option");
    printf("***********\n");
    printf("\n*****Please Enter any one of below available ");
    printf("options****\n");
                      calculator_operations();
        }
    }
}

//Function Definitions

void calculator_operations()
{//abc
    //system("cls");  use system function to clear
    //screen instead of clrscr();
    printf("\n             Welcome to C calculator \n\n");

    printf("******* Press 'Q' or 'q' to quit ");
    printf("the program ********\n");
    printf("***** Press 'H' or 'h' to display ");
    printf("below options *****\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");

    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter ? symbol for Modulus\n");
    printf("Enter ^ symbol for Power \n");
    printf("Enter ! symbol for Factorial \n");
    printf("Enter a symbol for assert testing addition\n");
    printf("Enter m symbol for assert testing multiplication\n");
    printf("Enter p symbol for assert testing power\n");
}

int addition()
{
    int a,b;
    printf("\nEnter First number=");
    scanf("%d",&a);
    printf("\nEnter Second number=");
    scanf("%d",&b);
    //sum=a+b;
    return(a+b);
}

void subtraction()
{
    int a, b, c = 0;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    c = a - b;
    printf("\n%d - %d = %d\n", a, b, c);
}

int multiplication()
{
    int a, b, mul=0;
    printf("\nPlease enter first numb   : ");
    scanf("%d", &a);
    printf("Please enter second number: ");
    scanf("%d", &b);
    mul=a*b;
    printf("\nMultiplication of entered numbers = %d\n",mul);
    return(mul);
}

void division()
{
    int a, b, d=0;
    printf("\nPlease enter first number  : ");
    scanf("%d", &a);
    printf("Please enter second number : ");
    scanf("%d", &b);
    d=a/b;
    printf("\nDivision of entered numbers=%d\n",d);
}

void modulus()
{
    int a, b, d=0;
    printf("\nPlease enter first number   : ");
    scanf("%d", &a);
    printf("Please enter second number  : ");
    scanf("%d", &b);
    d=a%b;
    printf("\nModulus of entered numbers = %d\n",d);
}

int power()
{
    double a,num, p;
    printf("\nEnter two numbers to find the power \n");
    printf("number: ");
    scanf("%lf",&a);

    printf("power : ");
    scanf("%lf",&num);

    p=pow(a,num);

    printf("\n%lf to the power %lf = %lf \n",a,num,p);
    return(p);
}

int factorial()
{
    int i,fact=1,num;

    printf("\nEnter a number to find factorial : ");
    scanf("%d",&num);

    if (num<0)
    {
        printf("\nPlease enter a positive number to");
        printf(" find factorial and try again. \n");
        printf("\nFactorial can't be found for negative");
        printf(" values. It can be only positive or 0  \n");
        return 1;
    }

    for(i=1;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
    return 0;
}

void test_addition()
{    int a,b;
    int sum=0;
    printf("\nEnter First number=");
    scanf("%d",&a);
    printf("\nEnter Second number=");
    scanf("%d",&b);
    assert(addition(a,b)==a+b);
    printf("\nOK");
}
void test_multiplication()
{    int a,b;
    //int sum=0;
    printf("\nEnter First number=");
    scanf("%d",&a);
    printf("\nEnter Second number=");
    scanf("%d",&b);
    assert(multiplication(a,b)==a*b);
    printf("\nOK");
}
void test_power()
{    int a,b;
    int sum=0;
    printf("\nEnter First number=");
    scanf("%d",&a);
    printf("\nEnter Second number=");
    scanf("%d",&b);
    assert(power(a,b)==pow(a,b));
    printf("\nOK");
}
