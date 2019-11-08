//f(n)函数的定义为0~n中包含的1的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值
#include <stdio.h>
int cal(int n){
    int count=0,temp=1,high=0,low=0,least=0;
    while(n/temp!=0) {
        low = n % temp;
        high = n / (temp * 10);
        least = (n / temp) % 10;
        if (least == 0) {
            count += high * temp;
        } else if (least == 1) {
            count += high * temp + low + 1;
        } else {
            count += (high + 1) * temp;
        }
        temp *= 10;
    }
    return count;
}

int main(){
    int i,res;
    i=2;
    while(1){
        res=cal(i);
        if (res==i){
            printf("%d",i);
            break;
        }
        i++;
    }
    return 0;
}






















/*#include <stdio.h>
#include <math.h>
int main(){
    int temp,i,n,a,count,j,b,sum;
    for (n=2;;n++){
        a=n;
        sum=0;
        for (i=1;i<=n;i++){
            temp=i;
            count=0;
            while(temp!=0){
                temp=temp/10;
                count++;
            }
            temp=i;
            for (j=count;j>=0;j--) {
                b = pow(10, j);
                if (temp/b==1){
                    sum++;
                }
                temp=temp%b;
            }
        }
        if (sum==n)
            break;
        printf("%d\n",n);
    }
    printf("%d",sum);
    return 0;
}*/