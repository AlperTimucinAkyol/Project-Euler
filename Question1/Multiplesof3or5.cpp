#include <iostream>

#ifndef MaxNumber 
#define MaxNumber 1000
#endif
// If we list all the natural numbers below 10 that are multiples of 3 or 5 we get 3,5,6,9 and The sum of these multiples is 23 Find the sum of all the multiples of or below 1000 

using std::cout;

int main(){

    int numbers = 0;
    for (int i = 1; i < MaxNumber; i++)
    {
        if(i%3 == 0 || i % 5 == 0)
        {
            printf("\t Numbers :%d \n",i); numbers += i;
        }
    }
    printf("\t\t\t\n Sum = %d" , numbers);

    
}