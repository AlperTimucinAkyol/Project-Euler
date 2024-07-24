#include<iostream>
#include<string>
/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 
2-digit numbers is 9009 = 91 x 99.
Find the largest palindrome made from the product of two 
3-digit numbers.
*/
using std::string;


int control(string& number){
    int count=0;
    int max = 5;
    for (int min = 0; min < 3; min++)
    {
        if((number.at(min) == number.at(max--)))
            ++count;
    }
    return count;
}


int main(){
    //999x999 = 998.001 -> 6-digit number. 
    string number;

    int foo;
    for (int i = 999; i > 100; i--)
    {
        for (int j = 999; j > i-99 ; j--)
        {
            foo = i*j;
            number = std::to_string(foo);
            if(control(number) == 3)
            {
                printf("number: %d ,i = %d , j = %d ",foo,i,j);
                return 0; 
            }
        }
        
    }
    
    

    return 0;
}