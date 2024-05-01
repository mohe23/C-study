// 练习1：1000元，要买100只鸡  公鸡每只50   母鸡每只30   小鸡每3只10  一共多少种买法
// 练习2：输入一段英文字符串，统计单词个数。字符串开头不一定是英文字母，单词之间的空格数也可能不只1个
// 练习3：输入一段字符串，然后把字符串以单词为单位，逆转输出。（腾讯笔试题）
// 比如，输入：Alice call Jack     输出：Jack call Alice 。 要求：速度越快越好
#include<iostream>
#include<string>
#define MALEC 50
#define FEMALEC 30
#define LITTLEC 10

using namespace std;

bool alpha(char ch){// 判断ch是否是英文字母
    bool value = false;//默认是非英文字母

    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
        value = true;//
    }

return value;
}

int main(){

    // 练习3
    string str,tmpstr,newstr("");
    int i,first,length,tlength;
    int flag1=0,flag2 =0;// flag1 -标记单词  flag2-标记空格
    bool v;

    cout<<"请输入一段英文语句：";
    getline(cin,str);//将输入的一行字符串内容 赋值到字符串变量 str中

    length = str.length();//
    //cout<<"length : "<<length<<endl;

    for(i=0;i<length;i++){
        v = alpha(str[i]);
        //cout<<"v: "<<v<<endl;
        if(v){// 当前扫描字符是 英文字母
            if(0==flag1&&0==flag2){//扫描到单词的第1个英文字母,一般是字符串以英文字母开头
                flag1 = 1;
                first = i;
            }
            else if(0==flag1&&1==flag2){//此时可以截取“空格”字符串
                tlength = i-first;//确定空格字符串长度
                //cout<<"v1 tlength: "<<tlength<<endl;
                tmpstr = str.substr(first,tlength);
                //cout<<"v1 tmpstr: "<<tmpstr<<endl;
                newstr = tmpstr + newstr;
                flag2 = 0;
                flag1 = 1;//记得将flag1=1，因为扫描到单词的第1个字母
                first = i;//标记单词第1个字母的下标

            }

            // 字符串末尾一定是英文字母
            if(length-1==i){//该种情况，说明字符串扫描到末尾了
                tlength = i-first+1;//确定空格字符串长度,注意这个截取字符串长度 的计算公式
                //cout<<"v2 tlength: "<<tlength<<endl;
                tmpstr = str.substr(first,tlength);
                //cout<<"v2 tmpstr: "<<tmpstr<<endl;
                newstr = tmpstr + newstr;
            }
        }
        else{// 当前扫描字符是 空格键
            if(0==flag1&&0==flag2){//扫描到单词的第1个空格，一般，该字符串以“空格”开头
                flag2 = 1;
                first = i;
            }
            else if(1==flag1&&0==flag2){// 截取单词字符串
                tlength = i-first;
                //cout<<"!v tlength: "<<tlength<<endl;
                tmpstr = str.substr(first,tlength);
                //cout<<"!v tmpstr: "<<tmpstr<<endl;
                newstr = tmpstr + newstr;
                flag1 = 0;
                flag2 = 1;//记得将flag2=1，因为这个是当前第1次扫描到“空格”
                first = i;//标记第1个“空格”
            }

            // 字符串以空格结尾
            if(length-1==i){//该种情况，说明字符串扫描到末尾了
                tlength = i-first+1;//确定空格字符串长度,注意这个截取字符串长度 的计算公式
                //cout<<"!v2 tlength: "<<tlength<<endl;
                tmpstr = str.substr(first,tlength);
                //cout<<"!v2 tmpstr: "<<tmpstr<<endl;
                newstr = tmpstr + newstr;
            }
        }

    }

    cout<<"新的字符串:"<<newstr<<endl;

    /*

    // 练习2
    /*
      关键思路：
      遇到1个英文字母，此时作1个标记，然后紧接着遇到非英文字母，将统计单词数加1，同时“废除”之前的标记

    */
    /*
    string str;
    bool v;
    int i,length;
    int flag=0,cot=0;// flag-1个标记  cot-存储单词个数

    cout<<"请输入一段英文字符串：";
    getline(cin,str);// 字符串输入时，遇到“空格”，就停止向字符串变量输入内容了。

    length = str.length();// 计算字符串长度
     cout<<"length: "<<length<<endl;

    for(i=0;i<length;i++){
        v = alpha(str[i]);//判断当前字符是否是英文字母
        if(0==flag&&v){//扫描到1个单词的第1个英文字母
            flag = 1;//开始
        }
        else if(1==flag&&!v){// flag==1,当前扫描字符是非英文字母
            cot++;//单词数加1
            flag = 0;//同时将标记flag重新赋值为0
        }

        if(1==flag&&length-1==i&&v){
            cot++;//字符串以英文字母结尾时，为了统计正确的单词个数，记得将单词数加1
        }
    }

    cout<<"当前英文字符串一共有 "<<cot<<" 个单词！"<<endl;
    */

    /*
    //练习1
    int m,f,l;//m,f,l分别代表公鸡数,母鸡数，小鸡数
    int money,total,sum;//分别代表总钱数 ，总只数
    int msum,fsum;
    cout<<"请输入钱数，鸡总数：";
    cin>>money>>total;

    msum = money/MALEC;//公鸡最多购买只数
    fsum = money/FEMALEC;//母鸡最多购买只数

    for(m=0;m<=msum;m++){
        for(f=0;f<=fsum;f++){
            l = total - m - f;//获得小鸡数

            if(0==l%3 && 1000==m*MALEC + f*FEMALEC + l/3*LITTLEC){
                cout<<"公鸡有 "<<m<<" 只，"<<"母鸡有 "<<f<<" 只，"<<"小鸡有 "<<l<<" 只！"<<endl;
            }
            /*
            if(0!=l%3){
                continue;//小鸡数不是3的倍数，直接进入下一次循环
            }
            else{//小鸡数是3的倍数
                sum = m*MALEC + f*FEMALEC + l/3*LITTLEC;//计算当前总钱数
                if(1000==sum){
                    cout<<"公鸡有 "<<m<<" 只，"<<"母鸡有 "<<f<<" 只，"<<"小鸡有 "<<l<<" 只！"<<endl;
                }
            }
            */
        //}
    //}

return 0;
}
