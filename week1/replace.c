#include <stdio.h>

int main(){
    int i = 0;
    printf("my frist value of interger is : %d\n", i);
    for (i = 1; i < 20; i++);
    printf("now the chang value is now : %d \n", i);
    int fristv = 30;
    printf("my first value is : %d \n", fristv);
    int secondv = 60;
    printf("my second value is : %d \n", secondv);
    fristv = secondv;
    printf("what is the real value %d\n",fristv);

    int myThrid;

    myThrid = secondv;
    printf("now the copyed value is now : %d\n", myThrid);
     
    int sum = fristv + secondv + myThrid;
    sum = sum + 1;
    printf("the total sum of both is : %d \n", sum);


    return 0;
}