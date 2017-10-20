//
//  main.c
//  Kaoyan
//
//  Created by 赵亮 on 2017/10/14.
//  Copyright © 2017年 赵亮. All rights reserved.
//

#include<stdio.h>
int main(){
    void hanni(int n,char,char,char);
    int m;
    printf("input the number of disks:");
    scanf("%d",&m);
    printf("the step to move %d disks:\n",m);
    hanni(m, 'A', 'B', 'C');
}

void hanni(int n,char one,char two,char three){
    void m_ove(char,char);
    if(n==1){
        m_ove(one, three);
    }else{
        hanni(n-1, one, three, two);
        m_ove(one, three);
        hanni(n-1, two, one, three);
    }
}
void m_ove(char x,char y){
    printf("%c --> %c\n",x,y);
}
