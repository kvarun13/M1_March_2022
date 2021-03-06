#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#include <math.h>
#define PI 3.14159265
float sine(float  a);
float cosine(float a);
float tangent(float a);
float sineh(float a);
float cosineh(float a);
float tangenth(float a);
float logten(float a);
float squareroot(float a);
float exponent(float a);
float power(float a,float b);

void Dec_to_Bin(){
    int number;
    long long res = 0;
  int reminder, j = 1;
    printf("Enter a Decimal Number : \n");
    scanf("%d",&number);
  while (number!=0) {
    reminder = number % 2;
    number = number/ 2;
    res += reminder * j;
    j *= 10;
  }
  printf("Binary number = %lld",res);
}

void Dec_to_Oct(){
    int output = 0, j = 1;
    int input;
    printf("Enter a Decimal Number : \n");
    scanf("%d",&input);
    while (input != 0){
        output += (input % 8) * j;
        input = input/8;
        j *= 10;
    }

    printf("Octal value =  %d",output);
}
void Dec_to_Hex(){
    int input;
    printf("Enter a Decimal Number : \n");
    scanf("%d",&input);
    char res[100];
    int j=0;
    while (input!=0) {
        int temp=0;
        temp=input%16;
        if (temp < 10) {
            res[j]=temp+48;
            j++;
        }
        else {
            res[j]=temp+55;
            j++;
        }
        input=input/16;
    }
    printf("Hexa Decimal value : ");
    for (int k=j-1;k>=0;k--)
        printf("%c",res[k]);
}
void Bin_to_Dec(){
    long long input;
    int output = 0, j = 0, reminder;
    printf("Enter value in Binary : \n");
    scanf("%lld",&input);
    while (input!=0) {
    reminder = input % 10;
    input /= 10;
    output += reminder * pow(2, j);
    ++j;
  }
  printf("Decimal value =  %d",output);
}
void Oct_to_Dec(){
    int decimal=0,i=0;
    int octal;
    printf("Enter number to be converted : \n");
    scanf("%d",&octal);
    while(octal!= 0){
        decimal+= (octal%10)*pow(8,i);
        ++i;
        octal/=10;
    }
    i = 1;
    printf("Decimal nmber = %d",decimal);
}
void Hex_to_Dec(){
    char hexi[17];
    long long decimalval, placed;
    int i=0, value, leng;
    decimalval=0;
    placed = 1;
    printf("Enter value in Hexa Decimal: ");
    scanf("%s",hexi);
    leng=strlen(hexi);
    leng--;
    for(i=0; hexi[i]!='\0'; i++)
    {
        if(hexi[i]>='0' && hexi[i]<='9')
        {
            value=hexi[i] - 48;
        }
        else if(hexi[i]>='a'&&hexi[i]<='f')
        {
            value=hexi[i]-97+10;
        }
        else if(hexi[i]>='A'&&hexi[i]<='F')
        {
            value=hexi[i]-65+10;
        }

        decimalval+= value*pow(16,leng);
        leng--;
    }
    printf("Decimal number = %lld", decimalval);
}

int main()
{
  float a,b,ans;
  int n;
  //char ch;

  printf("Select the Operation\n");
  printf("Type 1 for Addition\n");
  printf("Type 2 for Subtraction\n");
  printf("Type 3 for Multiplication\n");
  printf("Type 4 for Division\n");
   printf("5.sin 6.cos 7. tan 8. sinh 9.cosh 10.tanh 11.1og10 12. square root. 13.exponent 14.power.\n");
  printf("15.Decimal to Binary\n16.Decimal to Octal\n17.Decimal to Hexadecimal\n");
  printf("18.Binary to Decimal\n19.Octal to Decimal\n20.Hexadecimal to Decimal\n");
  scanf("%d",&n);
  
  if (n>=5 && n<=13)
    {
        printf("\n What is x? ");
        scanf("%f",&a);
    }
    else if(n>0 && n<=4||n==14)
    {
        printf("Enter any two numbers\n");
          scanf("%f%f",&a,&b);
    }
    
    switch(n)
  {
  case 1:
      printf("%f + %f = %lf",a,b,a+b);
      break;
  case 2:
      printf("%f - %f = %lf",a,b,(a-b));
      break;
  case 3:
      printf("%f * %f = %lf",a,b,(a*b));
      break;
  case 4:
      if(b==0)
      {
          printf("Sorry, You can not divide a number by 0");
          return 0;
      }
      printf("%f / %f = %0.2f",a,b,(a/(float)b));
      break;
  case 5:
         ans = sine(a);
       break;
  case 6:
         ans= cosine(a);
         break;
    case 7: 
         ans= tangent(a);
            break;
    case 8:
            ans = sineh(a);
            break;
    case 9:
            ans = cosineh(a);
            break;
    case 10:
            ans= tangenth(a);
            break;
    case 11:
            ans= logten(a);
            break;
    case 12:
            ans = squareroot(a);
            break;
    case 13:
            ans = exponent(a);
            break;
    case 14:
            ans = power(a,b);
            break;
    case 15:
            Dec_to_Bin();
            break;
    case 16:
            Dec_to_Oct();
            break;
    case 17:
            Dec_to_Hex();
            break;
    case 18: 
            Bin_to_Dec();
            break;
    case 19: 
            Oct_to_Dec();
            break;
    case 20: 
            Hex_to_Dec();
            break;
    default:
            printf("Invalid Input");
  }
  
    if (n>=5 && n<=14)
    {
        printf("%0.4f",ans);
        return 0;
    }
    return 0;
}
float sine(float a)
{
    return (sin (a*PI/180));
}
float cosine(float a)
{
    return (cos (a*PI/180));
}
float tangent(float a)
{
    return (tan(a*PI/180));
}
float sineh(float a)
{
    return (sinh(a));
}
float cosineh(float a)
{
    return (sinh(a));
}
float tangenth(float a)
{
    return (sinh(a));
}
float logten(float a)
{
    return (log10(a));
}
float squareroot(float a)
{
    return (sqrt(a));
}
float exponent(float a)
{
    return(exp(a));
}
float power(float a, float b)
{
    return (pow(a,b));
}
