
    // short int a = -3;
    // signed short int b = 15000;

    // printf("a = %u\n", a);
    // printf("b = %d\n", b);

    // int i = 0;
    // do{
    //     printf("%d\n",i);
    //     i++;
    // }while (i<10);


    // int i = 1;
    // int sum = 0;
    // while (i<=10)
    // {
    //     sum= sum+ i;
    //     i++;
    // }
    // printf("sum=%d\n",sum);
    
//     int sum = 0;
// for (int i = 0; i <= 10; i++)
// {
//     sum = sum + i;
// }
// printf("%d\n", sum);

// int i = 1;
// int sum = 0;
// do
// {
//     sum = sum + i;
//     i++;
// } while (i<=11);
// printf("sum=%d\n",sum);

// 8 ke table ka sum 
// int num = 8;
// int sum = 0;
// for (int i = 1; i <= 10; i++)
// {
//      sum += (num * i);
// }
// printf("Sum of 8 times table is: %d\n", sum);

// factorial of a number
// int product = 1;
// for (int i = 1; i <= 0; i++)
// {
//     product *= i;

        // printf("Intermediate product after multipl/ying %d is: %d\n", i, product);
// }
// printf("Sum is: %d\n", product);


//using while loop factorial
// int n = 0;
// int product = 1;
// int i = 1;
// while(i<=n)
//     {
//         product *= i;
//         i++;
       
//     }
//     printf("Factorial of %d is: %d\n", n, product);


#include <stdio.h>

int main() {
int n = 20;
int prime = 0;
for(int i = 2; i<n; i++){
if(n%i==0){
    prime = 1;
}
if (prime)
{
printf("is prime%d\n", i);
}
    else{
        printf("not a prime%d\n", i);
    }
}

    return 0;
}

