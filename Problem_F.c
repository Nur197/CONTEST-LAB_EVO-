#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int l[n],b[n],h[n];
    for(i = 0; i<n ; i++)
        scanf("%d %d %d",&l[i],&b[i],&h[i]);
    for(i = 0; i<n ; i++){
        if(l[i]+b[i] > h[i] && b[i]+h[i] > l[i] && l[i]+h[i] > b[i])
            printf("OK\n");
        else
            printf("Wrong!!\n");

    }
    return 0;
}
