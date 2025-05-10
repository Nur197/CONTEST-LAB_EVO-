// Input
// The input contains two numbers in every line. These two numbers in each line denotes the number
// soldiers in Hashmat’s army and his opponent’s army or vice versa. The input numbers are not greater
// than 232. Input is terminated by ‘End of File’.
// Output
// For each line of input, print the difference of number of soldiers between Hashmat’s army and his
// opponent’s army. Each output should be in seperate line.
// Sample Input
// 10 12
// 10 14
// 100 200
// Sample Output
// 2
// 4
// 100


#include<stdio.h>
int main()
{
    long long int a,b,c;
    while(scanf("%lld %lld",&a,&b) != EOF){
        c = a-b;
        if(c < 0)
            c *= (-1);
        printf("%lld\n",c);
    }
    return 0;

}

