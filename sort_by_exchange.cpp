//交换排序
#include <stdio.h>
#include <stdlib.h>
int main() {
    //Collect numbers
    int n, i, *x;
    int init = 5;
    x = (int *) malloc(init * sizeof(int));
    printf("Please enter the number of numbers:");
    scanf("%d", &n);
    printf("Please enter numbers in row (one number each line)\n");
    for (i = 0; i < n; i++) {
        printf("No.%d:", i+1);
        if (i < init)
            scanf("%d", x + i);
        else {
            x=(int*) realloc(x,(i+1)* sizeof(int));
            scanf("%d", x + i);
        }
    }

    //Sort numbers
    int j,temp;
    for (i = 0 ;i<n;i++){
        for (j=i+1;j<n;j++){
            if (x[i]>x[j]){
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    for (i=0;i<j;i++)
        printf("%d ",x[i]);
    return 0;
}

//  int x[3] = {5, 2, 1}, i;
//  while(1) {
//    scanf("%d %d %d", &x[0], &x[1], &x[2]);
//    for(i=0;i<2;i++) {
//      if( x[i] > x[i+1]) {
//  	    int temp = x[i];
//  	    x[i] = x[i+1];
//  	    x[i+1] = temp;
//      }
//      i = i + 1;
//      i = i - 1;
//    }
//   printf(" %d, %d, %d", x[0], x[1], x[2]);
//  }
//  return 0;
//}