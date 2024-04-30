// C语言 比较2个字符串

#include<stdio.h>
#include<string.h>// 使用strcmp函数

int main(){
    int i;
    short s;
    char c;
    float f;
    double d;
    int dt=0;
    int it=0,ct=0,ft=0,st=0;
    it = sizeof(i);
    ct = sizeof(c);
    ft = sizeof(f);
    dt = sizeof(d);
    st = sizeof(s);

    printf("short型变量占用字节数：%d\n",st);
    printf("int型变量占用字节数：%d\n",it);
    printf("char型变量占用字节数：%d\n",ct);
    printf("float型变量占用字节数：%d\n",ft);
    printf("double型变量占用字节数：%d\n",dt);
    /*
    char str1[20];
    char str2[20];

    printf("请输入str1: ");
    scanf("%s",str1);//输入str1

    printf("请输入str2：");
    scanf("%s",str2);//输入str2

    if(strcmp(str1,str2)==0)//两个字符串相同，返回值==0
        printf("\n字符串str1,str2相同！\n");
    else
        printf("\n字符串str1,str2不相同！\n");
    */
return 0;
}
