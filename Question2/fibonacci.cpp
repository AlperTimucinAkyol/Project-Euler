#include<iostream>
/*Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1
 and 2
, the first 10
 terms will be:
        1,2,3,5,8,13,21,34,55,89,...
By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.*/
using std::cout;
int main(){
    long long number1=0,number2=0,number3=1;    
    long long sum=0;
    do
    {
        number1=number2+number3;
        number2 = number3;
        number3 = number1;
        cout<<number1<<"\n";
        if(number1%2 == 0)
            sum+=number1;
    }while(number1 < 4000000000);
    cout<<"result : "<<sum ;

    return 0;
}