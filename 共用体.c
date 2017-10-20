//
//  main.c
//  Kaoyan
//
//  Created by 赵亮 on 2017/10/14.
//  Copyright © 2017年 赵亮. All rights reserved.
//
//共用体的实例：共同体是定义在同一个地址上的内容，每次只可以给他的实例赋一种类型的值。赋值可以覆盖

#include <stdio.h>

union{//定义一个共同体，其中有四种变量类型
    int a;
    long b;
    float c;
    double d;
}type;


int main(){
    
    printf("Please input a number type:\n");
    char ty;
    scanf("%c",&ty);
    
    switch (ty) {//函数实现了利用一个函数实现不同数据类型的功能；
        case 'A':
            printf("Please input int number:");
            scanf("%d",&type.a);
            printf("%d/2=%d\n",type.a,type.a/2);
            break;
        case 'B':
            printf("Please input long number:");
            scanf("%ld",&type.b);
            printf("%ld/2=%ld\n",type.b,type.b/2);
            break;
        case 'C':
            printf("Please input float number:");
            scanf("%f",&type.c);
            printf("%f/2=%f\n",type.c,type.c/2);
            break;
        case 'D':
            printf("Please input double number:");
            scanf("%lf",&type.d);
            printf("%lf/2=%lf\n",type.d,type.d/2);
            break;


        default:
            printf("Your input is wrong!");
            break;
    }
    
    return 0;
}



