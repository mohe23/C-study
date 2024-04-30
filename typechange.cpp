//  强制类型转换
#include<iostream>
#include<stdio.h>
using namespace std;


int main(){
    float a;
    int b;
    // 算术转换
    a = 15 + 3.14;// 15.0 + 3.14
    // 赋值转换
    b = 31.6; // 将浮点型转换成int型，只取其整数部分

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    //输出转换（C语言）
    // 1 0011 0001(十进制305) -> 0011 0001（十进制49），因为char型只占有1个字节，所以就低位到高位，就截取1个字节
    printf("%c\n",255+50);// '1'，ASCII码值=49
    printf("%d\n",255+50);// 305

    // 将int型，输出格式“%f”，输出发生错误
    printf("%f\n",255);//输出 0.000000


    // 将float型，输出为“%d”，输出发生错误
    printf("%d\n",34.56);// 343597384。

// 强制类型转换

    int x;
    x = 257+100;
    cout<<"x = "<<x<<endl;// 357

    x = (char)257 + 100;// 1 0000 0001(十进制257) =>  0000 0001(十进制1)
    cout<<"强制类型转换，x = "<<x<<endl;// 101

return 0;
}
