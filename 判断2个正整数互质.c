#include <stdio.h>
int main(){
    int n1,n2,gcd,smaller,i;
    gcd = 1;
    i=1;
    printf("Please enter two different positive integers:");
    scanf("%d,%d",&n1,&n2);
    if (n1>n2)
        smaller=n2;
    else
        smaller=n1;
    while (i<=smaller){
        if (n1 % i ==0 && n2 % i ==0)
            gcd=i;
        i = i +1;
    }
    if (gcd == 1)
        printf("%d and %d are relatively prime numbers.",n1,n2);
    if (gcd != 1)
        printf("%d and %d are not relatively prime numbers.",n1,n2);
}