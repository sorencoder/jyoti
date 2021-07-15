#include<stdio.h>
int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int sumEven = 0;
    int sumOdd = 0;
    int n,i;
    n=fork();
    if (n>0){
        for(i=0;i<10;i++){
        if(a[i]%2==0)
        sumEven = sumEven + a[i];
            
        }
    printf("Parent Process\n");
    printf("Sum of even number: %d",sumEven);
    }
    else{
        for(i=0;i<10;i++){
            if(a[i]%2==1)
            sumOdd = sumOdd + a[i];
        }
        printf("Child Process\n");
        printf("Sum of odd number: %d",sumOdd);
    }
    return 0;
}
