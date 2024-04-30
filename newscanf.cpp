// scanf_s语句

#include<stdio.h>
#include<cstdio>
#include<iostream>

using namespace std;

int main(){
    int a;
    float b;
    char c;
    char name[10];

    cout<<"请输入整数a：";
    // scanf_s 函数是 Microsoft Visual Studio 特有的，不是 C 标准库的一部分,在code blocks中无法编译通过。
    //scanf_s("%d",&a);

    cout<<"请输入浮点数b：";
    //scanf_s("%f",&b);

    cout<<"请输入1个字符c：";
    //scanf_s("c%",&c);


return 0;
}
