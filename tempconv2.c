#include<stdio.h>
int main()
{
float c,f,k,temp;
int choice;

printf("Enter 1 to convert from C to F\n");
printf("Enter 2 to convert from F to C\n");
printf("Enter 3 to convert from C to K\n");
printf("Enter 4 to convert from K to C\n");
printf("Enter 5 to convert from F to K\n");
printf("Enter 6 to convert from K to F\n");
scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("Enter the temp in C\n");
                scanf("%f",&c);
                temp=(((c*9)/5)+32);
                printf("The *F equivalent of %3.2f*c is %3.2f*F\n",c,temp);break;
        case 2:printf("Enter the temp in F\n");
                scanf("%f",&f);
                temp=(((f*5)/9)+32);
                printf("The *C equivalent temperature of %3.2f*F is %3.2f*C\n",f,temp);break;
        case 3:printf("Enter the temp in C\n");
                scanf("%f",&c);
                temp=c+273.15;
                printf("The *k equivalent temperature of %3.2f*c is %3.2f*k\n",c,temp);break;
        case 4:printf("Enter the temp in K\n");
                scanf("%f",&k);
                temp=k-273.15;
                printf("The *C equivalent of %3.2f*k is %3.2f*c\n",k,temp);break;
        case 5:printf("Enter the temp in F");
                scanf("%d",&f);
                temp=(((f*5)/9)+459.67);
                printf("The *k equivalent of %3.2f*f is %3.2f*k\n,f temp");break;
        case 6:printf("Enter the temp in k");
                scanf("%f",&k);
                temp=(((k*9)/5)-459.67);
                printf("The *F equivalent of %3.2f*k is %3.2f*f\n,k temp");break;
        default:printf("Please enter the correct number\n");
    }
}















