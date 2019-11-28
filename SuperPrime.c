//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数。
//求 100~10000 内的所有超级素数，及它们的平均数。

#include <stdio.h>
#include <math.h>
int judge(int a){
    int j;
    for (j=2;j<a;j++){
        if (a%j==0)
            return 1;
    }
    return 0;
}
int main(){
    int i;
    int as[1000],m=0;
    for (i=100;i<=10000;i++){
        if(judge(i)==1)
            continue;
        int x[5]={},nu=i;
        for (int j=4;j>=0;j--){
            x[j]=nu/pow(10,j);
            nu=nu-x[j]*pow(10,j);
        }
        int su1=0,su2=0;
        for (int j=4;j>=0;j--){
            su1 += x[j];
            su2 += pow(x[j],2);
        }
        if (judge(su1)==1||judge(su2)==1)
            continue;
        printf("%d\n",i);
        as[m]=i;
        m++;
    }
    int cal=0;
    for (i=0;i<m;i++){
        cal += as[i];
    }
    float v = m;
    printf("%f",cal/v);
    return 0;
}