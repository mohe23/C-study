// switch语句

#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"请输入1-7：";
    cin>>num;

    switch(num){// 变量num一定是整型变量，如：int ，short, long, long long
        case 1:// num==1
            cout<<"一"<<endl;
            break;
        case 2:// num==2
            cout<<"二"<<endl;
            //int s = 0;// 程序运行后，会报错
            break;
        case 3:
            { // 加1个大括号，程序会正常编译，
                int x = 0;
            }
            cout<<"三"<<endl;
            break;
        case 4:
            cout<<"四"<<endl;
            break;
        case 5:
            cout<<"五"<<endl;
            break;
        case 6:// 输入6或7，输出结果相同。switch语句中，可以这么写。
        case 7:
            cout<<"末"<<endl;
            break;
            /*
        case 7:
            cout<<"七"<<endl;
            break;
            */
        default://输入的num值不是上面那几种情况
            cout<<"输入无效，请输入1-7"<<endl;
            break;
    }

return 0;
}
