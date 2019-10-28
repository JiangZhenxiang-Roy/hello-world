//一个旅行社有 72 人，其中会英语的有 48 人，会俄语的有 36 人，两样都不会的有 8 人，两样都会的有
//_______个。
//编程：输入旅行社有72人
//     输入会英语48人
//     输入会俄语36人
//     输入两样都不会有8人
//     输出两样都会的有   人 
//     输出：输入数据错误，无法计算
#include <stdio.h>
int main(){
    int an,en,rn,nn,bn;
    printf("Please enter the number of people in the travel agency:");
    scanf("%d",&an);
    printf("Please enter the number of people can speak english:");
    scanf("%d",&en);
    printf("Please enter the number of people can speak russian:");
    scanf("%d",&rn);
    printf("Please enter the number of people that can not speak both english and russian:");
    scanf("%d",&nn);
    bn=en+rn-an+nn;
    if (bn<0||bn>en||bn>rn||an<0||en<0||rn<0||nn<0||nn>an-en||nn>an-rn)
        printf("Input Errwor");
    else
        printf("The number of people that can speak both english and russian is %d",bn);
    return 0;
}