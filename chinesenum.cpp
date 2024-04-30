// 将阿拉伯数字0-9转换成汉字的大写数字
// "零","壹","贰","叁","肆","伍","陆","柒","捌","玖"
// 将 132 转换成 壹叁贰

#include<iostream>

using namespace std;


int main(){
    int i,num,le=0;
    int a[10]={0};//用这个来存放num的不同位的数字
    string ret[10]={"零","壹","贰","叁","肆","伍","陆","柒","捌","玖"};

    cout<<"请输入1个数字：";
    cin>>num;

    while(num!=0){
        a[le++] = num%10;//将num个位存放在数组a下标=0，十位放在下标为1，以此类推。
        num = num/10;
    }
    for(i=le-1;i>=0;i--){
        cout<<ret[a[i]];
    }

    /*
    int num;
    cout<<"请输入1个阿拉伯数字0-9：";
    cin>>num;

    switch(num){
    case 0:
        cout<<"零"<<endl;
        break;
    case 1:
        cout<<"壹"<<endl;
        break;
    case 2:
        cout<<"贰"<<endl;
        break;
    case 3:
        cout<<"叁"<<endl;
        break;
    case 4:
        cout<<"肆"<<endl;
        break;
    case 5:
        cout<<"伍"<<endl;
        break;
    case 6:
        cout<<"陆"<<endl;
        break;
    case 7:
        cout<<"柒"<<endl;
        break;
    case 8:
        cout<<"捌"<<endl;
        break;
    case 9:
        cout<<"玖"<<endl;
        break;
    default:
        cout<<"输入错误，请输入单个阿拉伯数字0-9"<<endl;
        break;
    }
    */
return 0;
}

