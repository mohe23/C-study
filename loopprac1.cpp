// 练习1：打印n行m列*号
// 练习2：打印n行，每行*个数==当前行序号
// 练习3：打印n行，第i（i>=1）行有（n+1-i）个*
// 练习4：打印n行，第i行有（i*2-1）个“*”，并且居中打印。打印效果，类似金字塔
// 练习5：打印乘法口诀表
#include<iostream>
#include<iomanip>

using namespace std;


int main(){
    int i,j,k,t,w;
    int row=0,column=0,le=0;


    cout<<"请输入行数(一般输入9)：";
    cin>>row;

    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
           // cout<<i<<"*"<<j<<"="<<i*j<<" ";// 情况1

            //cout<<j<<"*"<<i<<"="<<setw(2)<<i*j<<" ";//情况2  setw(2)，将紧跟着的字符输出长度为2，输出的运算结果是右对齐
            //cout<<j<<"*"<<i<<"="<<setw(2)<<left<<i*j<<" ";// 输出的计算结果是“左对齐”
            // w = (j==1)?1:2;//更精简的代码
            if(1==j){
               w = 1;
             //   cout<<j<<"*"<<i<<"="<<setw(1)<<left<<i*j<<" ";//打印每行第1列时，运算结果的宽度定为1
            }
            else{
                w =2;
                //cout<<j<<"*"<<i<<"="<<setw(2)<<left<<i*j<<" ";
            }
            cout<<j<<"*"<<i<<"="<<setw(w)<<left<<i*j<<" ";

            /*
            //以下代码，是为了保持输出对齐
            if(i*j<10){
                cout<<"  ";
            }
            else{// i*j>=10
                cout<<" ";
            }
            */
        }
        cout<<endl;
    }
    /*
    // 练习4
    // 难点，找好每1行*打印的范围。
    le = 2*row - 1;//每1行总打印字符个数

    for(i=1;i<=row;i++){
        k = row+1-i;//第i行第1个*所在的位置
        t = k + 2*i -2;//第i行最后1个*所在的位置
        for(j=1;j<=2*row-1;j++){
            if(j>=k&&j<=t)
            cout<<"*";
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    */
    /*
    // 练习3
    for(i=0;i<row;i++){
        for(j=0;j<row-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    */
    /* //练习2
    for(i=0;i<row;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;//打印一行后，换行
    }
    */
    /* // 练习1
    cout<<"Please input rows and columns: ";
    cin>>row>>column;

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            cout<<"*";
        }
        cout<<endl;//每打印完一行，就换行
    }
    */
return 0;
}
