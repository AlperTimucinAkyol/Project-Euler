#include<iostream>


int main()
{
    int primeNumber,count = 0;
    bool control;
    for (primeNumber = 3; count < 10001; primeNumber++)
    {
        control = false;
        for (size_t j = 3; j < primeNumber;  j++)
        {
            if(primeNumber%j == 0){control = true; break; }
        }
        if(!control)
            ++count;

    }

    printf("%d",primeNumber-1);
    


    return 0;
}