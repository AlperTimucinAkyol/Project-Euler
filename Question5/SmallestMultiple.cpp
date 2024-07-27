#include<iostream>
/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 
1 to 20?
*/
int main(){

    long sMultiple=1;bool control=false;
    // 9 and 8 is not prime
    //Prime number:
    for (int i = 19; i > 3; i--)
    {
        control = false;
        for (int j = 2; j < i; j++)  
            if (i%j == 0){control = true; break;}
        if(control == false)
        {
            sMultiple *= i;
        }    
    }
    sMultiple*=144;//9*8
    std::cout<<sMultiple;

    


    return 0; 
}