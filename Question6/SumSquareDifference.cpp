#include<iostream>

int main(){

    float sSquares=0,sSum=0,diff=0;

    for (int i = 1; i <= 100; i++)
    {
        sSquares+=i;
        sSum += i*i;
    }
    sSquares*=sSquares;
    diff = sSquares - sSum;
    printf("%0.0f",diff);

    return 0;


}