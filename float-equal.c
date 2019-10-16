//实现代码判断2个float变量相等
//误差精确到时小数点后5位
#include <stdio.h>
#include <math.h>
int main(){
    float float1,float2;
    printf("Please enter two floats:");
    scanf("%f,%f",&float1,&float2);
    if (fabs(float1-float2)<0.00001){
        printf("This two floats are equal");
    }
    else{
        printf("This two floats are not equal.");
    }
}