#include<iostream>

#define ll long long
/*
The prime factors of 13195 are 5,7,13 and 29.
What is the largest prime factor of the number 600851475143?
*/
int main(){

    //ll questionNumber = 13195;
    ll questionNumber = 600851475143;
    ll foo = 2;
    while (foo<<1 < questionNumber)
    {
        if(questionNumber % foo == 0)
        {
            questionNumber /= foo;      
            continue;
        }
        ++foo;

    }
    
    std::cout<<questionNumber;


    return 0;
}