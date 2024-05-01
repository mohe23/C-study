// 练习1：将1个十进制正整数，转换为二进制表示
// 练习2：输入1个正二进制数，转换成十进制整数
// 练习3：输入1个字符串，然后逆转输出
#include<iostream>
#include<string>
#define SZ 16
#define ba 2
using namespace std;

int fexp(int base,int exp){// 实现指数功能
    int value = 1;
    int i;

    if(0==exp){
        value = 1;
    }
    else{//指数exp>=1
        for(i=1;i<=exp;i++){
            value = value*base;
        }
    }

return value;
}

bool strlegal(string str){// 判断字符串符合二进制字符
    bool flag = true;//默认字符串符合二进制字符串
    int i,length;

    length = str.length();//计算字符串str的长度
    for(i=0;i<length;i++){
        if('0'!=str[i]&&'1'!=str[i]){//只要发现字符不是'0'或'1'，就报错，这里是"与"的关系
            flag = false;
            break;//直接跳出程序
        }
    }

return flag;
}

int main(){
    string str("");//定义1个字符串变量，并初始化为空串
    int i,length=0;
    char tmp;

    cout<<"请输入1个字符串：";
    cin>>str;

    length = str.length();//计算字符串长度
    for(i=0;i<=length/2;i++){
        tmp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = tmp;
    }

    cout<<"字符串逆转后："<<str<<endl;

    /*// 练习2
    int i,a,length=0;
    int tmp,sum=0;
    bool flag;
    string arb("");//存储二进制字符串

    cout<<"请输入正二进制字符串：";
    cin>>arb;

    flag = strlegal(arb);//判断输入字符串是否合法
    if(!flag){
        cout<<"非法输入！请输入二进制字符串！"<<endl;
        return 1;//直接返回
    }

    length = arb.length();//计算字符串的长度
    length--;//获得字符串arb最后1个字符的序号
    tmp = length;
    for(i=length;i>=0;i--){
        a = arb[i] - '0';//转换为整型

        sum += a * fexp(ba,tmp-i);

    }

    cout<<arb<<" 的十进制表示："<<sum<<endl;
    //cout<<str[i]<<endl;
    */
    /*// 练习1
    int i,num,tmp,a[SZ];
    int cot=0;

    cout<<"请输入1个正整数：";
    cin>>num;

    if(num<=0){
        cout<<"非法输入，请输入正整数！";
        return 1;//程序停止运行
    }

    tmp = num;
    //i = 0;
    while(tmp!=0){
        a[cot++] = tmp%2;//这个是求的二进制位
        tmp = tmp/2;//
    }

    for(i=cot-1;i>=0;i--){
        cout<<a[i];
    }
    */

return 0;
}
