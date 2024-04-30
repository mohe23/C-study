// 使用gets函数
#include<iostream>
#include<stdio.h>
#include<string.h>

int main(){
    char name[20];//姓名
    char addr[50];//地址
    ///*
    printf("请输入您的名字：");
    scanf("%s",name);
   // 输入 “Ming Li”。 输出“Ming”。可见scanf遇到“空格键”会停止输入，将“空格键”之前的字符串赋值到字符数组中。
    printf("您的名字是：%s\n",name);
    //*/
    // 没有 fflush(stdin);语句
    // name 输入“小方”，然后按下“回车键”，就会直接输出下面2行，不会给我们输入地址的机会。
    //这个是因为gets()函数遇到换行符“\n”，就会停止从键盘输入，而上面输入“小方\n”，其实只是把“小方”赋值到name中
    //但是“\n”还留在输入缓冲区，这样当gets函数遇到“\n”，就会直接停止输入，也就是说gets函数执行完毕了。于是
    //也就无法输入地址了。
    // 解决办法，就是在输入name后，清空输入缓冲区
    fflush(stdin);//清空输入缓冲区
    printf("请输入您的地址：");
    gets(addr);
    printf("\n您的地址是：%s\n",addr);

return 0;
}
