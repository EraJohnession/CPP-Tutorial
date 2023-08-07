
#include <stdio.h>

int main()
{
    int a = 10;
    int* pInt = &a;
    int** ppInt  = &pInt;
    // int** ppInt = &b; // 报错，必须存的是指针的地址

    printf("value of pInt: %p\n", pInt);
    printf("address of pInt: %p\n\n", &pInt);

    printf("value of ppInt: %p\n", ppInt);
    printf("address of ppInt: %p\n\n", &ppInt);

    // 拜托🙏🏻不要那么丧心病狂 
    // CUDA 也就用到了二级指针, 你非要搞多级, 要上天吗
    int*** pppInt = &ppInt; 
    printf("value of pppInt: %p\n", pppInt);
    printf("address of pppInt: %p\n", &pppInt);
    return 0;
}