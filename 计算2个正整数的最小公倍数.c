#include <stdio.h>

int main(){
    int n1,n2,bigger,i,lcm;
    lcm=0;
    printf("Please type in two positive integers:");
    scanf("%d,%d",&n1,&n2);
    if(n1>n2)
        bigger=n1;
    else
        bigger=n2;
    i=bigger;
    while(lcm == 0){
        if (i % n1 ==0 && i % n2 == 0)
            lcm = i;
        i = i + 1;
    }
    printf("The least common multiple of %d and %d is %d \n",n1,n2,lcm);
    return 0;
}
