// 统计输入单词的个数，以及单词总长度  C++，C 2种实现方法

// C语言写法

#include<stdio.h>
#include<string.h>

int main(){
    int i,le=8;
    int Count=0;
    int length=0;
    char word[20];

    printf("请输入单词：\n");
    // 当不想输入时，先按“回车键”，再按“Ctrl + z”
    while(1){
     // 当遇到EOF（文件结束符），就会返回-1。  注释写在上一行，感觉效果好
        if(scanf("%s",word)==EOF){
            break;//跳出循环
        }

        Count++;
        length += strlen(word);//调用strlen函数，计算单词的长度
    }

    printf("单词总数 = %d\n",Count);
    printf("总单词长度 = %d\n",length);

    /*
    char word[8]="abcdefgh";// 这句会报错，因为"abcdefgh"长度=8,8+1=9>8(即数组长度)，此时就超过了word数组长度，于是数组无法
    // 存储该字符串。归根到底，字符数组存放字符串时，还要在末尾后一位，加上'\0'。

    for(i=0;i<le;i++)
        printf("%c ",word[i]);
     */
return 0;
}

/*  // C++写法
#include<iostream>
#include<string>

using namespace std;

int main(){

    string word;
    int Count=0;//统计单词数量
    int length=0;//统计单词总长度

    cout<<"请输入单词："<<endl;
    while(1){
        cin>>word;
        if(cin.eof()){// windows系统，按下“Ctrl + z”，1个文件结束符EOF,其返回值为0
            break;//跳出循环
        }

        Count++;
        length += word.length();//一种简便写法
    }

    cout<<"单词总个数："<<Count<<endl;
    cout<<"总的单词长度："<<length<<endl;


return 0;
}
*/
