#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void Play(){
    /*系统生成 1<= X <=100,玩家输入1个数字，直到你的输入匹配系统分配的随机数;*/
    /*生成随机数*/
    const int MAX=100,MIN=1;
    srand(time(NULL));//随机数种子
    int targetNum=rand()%(MAX-MIN+1)+MIN;
    printf("%d",targetNum);
    printf("Let's start play the game!Please remember that X is [1,100]\n");
    /*统计尝试次数*/
    int counter=0;
    /*开始游戏*/
    while(targetNum){
        /*读取用户输入数据*/
        int inputNum=0;
        printf("Input your number here：");
        scanf("%d",&inputNum);
        if(targetNum<inputNum){
            counter++;
            printf("猜大了\n");
        } else if(targetNum>inputNum){
            counter++;
            printf("猜小了\n");
        } else {
            printf("Well Done!共尝试%d次",counter);
            break;
        }
    }
}

int main() {
/*    printf("Hello, World!\n");
    printf("My again C 语言!\n");*/
    Play();
    return 0;
}
