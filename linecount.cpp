//  输入连续多行字符串，统计行数，以及字符个数。c C++2种方式实现

/*
// C++

#include<iostream>
#include<string>

using namespace std;

int main(){
    string word;
    int lcount=0;//行数
    int ccount=0;//字符数

    cout<<"请输入任意多行字符串："<<endl;
    while(1){
        // getline函数遇到文件结束符EOF,停止读入
        if(getline(cin,word).eof()){
            break;//从键盘输入的是文件结束符EOF，那么就跳出循环
        }

        lcount++;

        ccount += word.length();// 一行字符串中，计数也会把"空格"字符计算进去
    }

    cout<<"行数 = "<<lcount<<endl;
    cout<<"字符数 = "<<ccount<<endl;

return 0;
}
*/
///*
// C语言
#include<stdio.h>
#include<string.h>

int main(){
    int linecount=0;//行数
    int charcout=0;//字符数
    char word[20];//存储字符串

    printf("请输入多行字符串：\n");
    while(1){
            // Ctrl + z  => 文件结束符EOF
        if(gets(word)==0){//遇到文件结束符，跳出循环
            break;
        }

        charcout += strlen(word);//字符数加1


        linecount++;//遇到换行符，行数加1
    }

    printf("总行数 = %d\n",linecount);
    printf("总字符数 = %d\n",charcout);

return 0;
}
//*/
