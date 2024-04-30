// 小写字母转大写，大写字母转小写字母，其他字符不转换

#include<iostream>

using namespace std;


int main(){
    char letter;
    cout<<"请输入一个字母letter：";
    cin>>letter;

    if(letter>='a' && letter<='z'){// “&&”的优先级 < ">="或“<=”的优先级，不用对“&&”两边的表达式加括号
        letter = letter - 'a' + 'A';//小写->大写
    }
    else if(letter>='A' && letter<='Z'){
        letter = letter - 'A' + 'a';// 大写 -> 小写
    }// 程序到这就可以了，不用为了刻意加else，而加else

    cout<<"letter = "<<letter<<endl;

return 0;
}
