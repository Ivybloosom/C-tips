//
//  main.c
//  Kaoyan
//
//  Created by 赵亮 on 2017/10/14.
//  Copyright © 2017年 赵亮. All rights reserved.
//

//链表的建立和打印
#include <stdio.h>
#include <stdlib.h>

#define LEN sizeof(struct Student)

//定义链表的结构体，其中包含一个指向下一个节点的指针
struct Student{
    int stu_num;
    float score;
    struct Student * next;
};

int n;//记录输入的数据的数量

//定义建立链表的函数:返回指针类型的函数
struct Student * create(){
    struct Student *head;//定义头指针，头指针指向的变量中只储存了链表第一项的 地址
    struct Student *p1,*p2;
    
    n=0;
    
    p1 = p2 = ( struct Student * )malloc(LEN);//结构体指针p1和p2指向 新开辟 的节点，指向 新开辟的空间的默认void类型的 指针
                                              //被强制类型转化为指向Student结构体类型的 指针
    head = NULL;//初始化指针，防止野指针的出现
    printf("Please input records  (输入格式 : 学号,分数[换行])\n");
    printf("(input 0 to stop the input):\n学号  分数\n");
    scanf("%d,%f",&p1->stu_num,&p1->score);//输入数据链表第一项内容
    
    while (p1->stu_num != 0) {
        n++;
        if(n==1){
            head=p1;//给head头指针赋值p1的地址
        }else{
            p2 -> next = p1;//将p1的地址赋值给 p2指向的节点的 地址位置中
        }
        p2 = p1;//p2和p1指向同一个节点
        p1 = (struct Student *)malloc(LEN);
        scanf("%d,%f",&p1->stu_num,&p1->score);
        
    }
    
    p2->next = NULL;//舍弃输入的最后一项，将最后一项的上一项作为尾指针
    return head;
}

void print(struct Student *head){
    struct Student *p;
    printf("\nNow,These %d records are:\n",n);
    p = head;
    printf("学号   分数\n");
    if(head!=NULL){
        do{
            printf("%d %5.1f\n",p->stu_num,p->score);
            p = p->next;
        }while (p!=NULL);
    }
}

int main(){
    struct Student * head;
    head = create();
    print(head);
    printf("\n");
    return 0;
}

