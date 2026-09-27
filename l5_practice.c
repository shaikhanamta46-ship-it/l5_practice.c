#include <stdio.h>

// float avg(float a, float b, float c){
//     return (a + b + c) /3;
// }

// int main() {
//     printf("Average of a, b and c is: %f\n", avg(3.0, 4.0, 5.0));
    
//     return 0;
// }
float calc_avg(float a, float b, float c) {
    return (a + b + c) / 3;
}

int main(){
    float a = 12.0;
    float b = 15.0;
    float c = 18.0;

    printf("The average of a, b, and c is %.2f\n", calc_avg(a,b,c));
    return 0;
}

//problem 2:
#include <stdio.h>

float c2f(float c);// function prototype

float c2f(float c){
    return (c * 9.0 / 5.0) + 32.0;
}
int main() {
    float c = 45.0;
    printf("Celsius to Fahrenheit for %f is %.2f\n", c, c2f(c));
    return 0;
}
//problem 3:
#include <stdio.h>
float force(float);

float force(float mass){
    return mass * 9.8; // F = m * a, where a is the acceleration due to gravity (9.8 m/s^2)
}

int main() {
    int m = 45; // mass in kilograms
    printf("The value of force is %.2f\n",force(m));
    return 0;
}

//problem:4
#include <stdio.h>
    // fibonnaci series 0,1,1,2,3,4,5,8,13,21,34....
    //fibonnaci(n) = fibonacci(n-1) + fibonacci(n-1);
int fibonacci(int);
int fibonacci(int n){
    if(n == 1 || n == 2){
        return n -1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int fibonacci(int);
int main() {
    int n = 5;
    printf("The vallue of fibonacci series at %d is %d\n",n, fibonacci(n));
    return 0;
}
//problem 5:
#include <stdio.h>

int main() {
    int a = 4;
    
    printf("%d %d %d \n", a, ++a, a++);
    //left to right ans 455
    //right to left 664
    return 0;
}
//problem 6:
#include <stdio.h>
int sum_natural(int);

int sum_natural(int n){
    if (n == 1){
        return 1;
    
    }
    return sum_natural(n-1) + n;
    //sum_natural(n) = 1 + 2 + 3 + ...n -1 + n;
    //sum_natural(n) = sum_natural(n-1) + n;
}


int main() {
    printf("The sum of first 10 natural numbers is %d\n", sum_natural(10));
    return 0;
}
//problem 7:
#include <stdio.h>

int main() {
    int  n = 5;
    for(int i = 0; i < n; i++){
        //This loops run 0 to 2
        // if i = 0 prints 1 star
        //if i = 1 prints 3 stars
        //if i = 2 prints 5 stars
        //no_of_stars = (2*i+1)
        //This loops prints(2*i+1) stars in each line
        for(int j = 0; j < (2*i+1); j++){
            printf("*");
        }
        printf("\n");//prints new line

    }
    return 0;
}