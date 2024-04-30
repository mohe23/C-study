// 循环嵌套
//把内层循环，看作1个 “语句”。
#include<iostream>
//#include<Windows.h>
#include<windows.h>

using namespace std;


int main(){
    int i,j,k,cot=0;
    int s1,s2,s3;
    s1 = 3;s2 = 2; s3 = 2;
    for(i=0;i<s1;i++){
        for(j=0;j<s2;j++){
            for(k=0;k<s3;k++){
                if(1==k){
                   continue;// 满足相应条件后，跳出本次循环体的执行，直接进入下一次循环体的执行。
                }

                cot++;
                cout<<i<<"::"<<j<<"::"<<k<<": 想念 "<<cot<<"次"<<endl;
                Sleep(1000);// 休眠1秒

            }
        }
    }


return 0;
}
