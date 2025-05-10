#include<stdio.h>
#include<math.h>

int main()
{
    int T,i;
    scanf("%d",&T);

    for (i = 1; i <= T; i++) {
        float c1,c2,C,d;
        scanf("%f %f",&c1,&d);

        c2 = d * 5.0 / 9.0;
        C = c1 + c2;

        printf("Case %d: %.2f\n",i,C);
    }

    return 0;
}
