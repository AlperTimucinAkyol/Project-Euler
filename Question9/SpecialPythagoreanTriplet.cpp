#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include<math.h>
int main(){
    /*a<b<c
    a^2+b^2=c^2
    b^2 = (c-a)(c+a)
    a+b+c= 1000*/
    
    int a,b,c;
    int A,B,C;
    const int maxLenght=1000;
    for (a = 1; a < maxLenght; ++a)
    {
        for (b = a; b < maxLenght; ++b)
        {
            c = (int)sqrt((float)a*a+b*b);
            if( a*a + b*b == c*c && a+b+c == maxLenght)
            {
                A = a;
                B = b;
                C = c;
            }    
        }
        
    }
    std::cout<<"a :"<<A<<"\tb :"<<B<<"\tc :"<<C<<"\n";
    std::cout<<"abc= "<< A*B*C;

    return 0;

}