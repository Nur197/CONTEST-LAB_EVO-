#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];

    for(k=0 ; k<n ; k++){
        if(n == 0)
           break;
        scanf("%d",&a[k]);
    }
    for(i=0 ; i<n ; i++){
        for(j=0 ; j < n-1 ; j++){
            if(a[j] > a[j+1]){
                int swap = a[j];
                a[j] = a[j+1];
                a[j+1] = swap;
            }
        }
    }
    for(i=0 ; i<n ; i++){
        printf("%d ",a[i]);
    }
    return 0;
}
