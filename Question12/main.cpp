#include"iostream"
#include"stdint.h"
#include"stdlib.h"


uint32_t count(uint32_t number){
    uint32_t div = 2;
    uint32_t exp=0;
    int count = 1;
    while (number>1)
    {
        exp = 0;
        while (number % div == 0)
        {
            number /= div; 
            ++exp;
        }

        count *= (exp+1);
        ++div;
        
    }
    return count;
}


int main(void){
    static const uint32_t TARGET  = 500;
    uint32_t N;
    uint32_t triangle;
    uint32_t numdiv;
    for (N = 1;; ++N)
    {
        triangle = N*(N+1)/2;
        numdiv = count(triangle);
        if (numdiv > TARGET )
        {
            std::cout << triangle << " and  " << numdiv-1;
            return 0;
        }
        
    }
    

    return 0;
}