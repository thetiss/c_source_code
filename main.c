#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void Play(){
    /*ϵͳ���� 1<= X <=100,�������1�����֣�ֱ���������ƥ��ϵͳ����������;*/
    /*���������*/
    const int MAX=100,MIN=1;
    srand(time(NULL));//���������
    int targetNum=rand()%(MAX-MIN+1)+MIN;
    printf("%d",targetNum);
    printf("Let's start play the game!Please remember that X is [1,100]\n");
    /*ͳ�Ƴ��Դ���*/
    int counter=0;
    /*��ʼ��Ϸ*/
    while(targetNum){
        /*��ȡ�û���������*/
        int inputNum=0;
        printf("Input your number here��");
        scanf("%d",&inputNum);
        if(targetNum<inputNum){
            counter++;
            printf("�´���\n");
        } else if(targetNum>inputNum){
            counter++;
            printf("��С��\n");
        } else {
            printf("Well Done!������%d��",counter);
            break;
        }
    }
}

int main() {
/*    printf("Hello, World!\n");
    printf("My again C ����!\n");*/
    Play();
    return 0;
}
