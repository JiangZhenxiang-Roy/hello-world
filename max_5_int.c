//小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
//数，这个五位数是_______。
//编程：任意输入5个数字，将它们组合为最大的5位数输出。
#include <stdio.h>
#include <math.h>
int main(){
    int x[5],i,temp,m,r;
    //Collect data
    printf("Please enter five integers:(one number each line)\n");
    for (i=0;i<5;i++){
        printf("No.%d:",i+1);
        scanf("%d",&x[i]);
    }
    //Sort
    for (m=5;m>0;m--) {
        for (i = 0; i < m-1; i++) {
            if (x[i] > x[i + 1]) {
                temp = x[i];
                x[i] = x[i + 1];
                x[i + 1] = temp;
            }
        }
    }
    r=0;
    for (i=0;i<5;i++){
        r=r+x[i]*pow(10,i);
    }
    printf("%d",r);
    return 0;
}