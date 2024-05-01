// 打印所有3位数的水仙花数

#include<iostream>
#define SZ 3// 利用宏定义，指定数组的大小

using namespace std;


int main(){
    int i,num,sum,tmp;
    int a[SZ];

    for(num=100;num<1000;num++){
        i=0;
        sum = 0;
        tmp = num;//如果不另定义1个变量，保存当前num值，那么经过下面的代码后，num=0，那么计算出的sum不会== num
        while(tmp!=0){// 将三位数num的个位，十位，百位都提取出来
            a[i++] = tmp%10;
            tmp = tmp/10;
        }

        for(i=0;i<SZ;i++){
            sum += a[i]*a[i]*a[i];
        }

        if(sum == num)
            cout<<num<<" ";


    }

return 0;
}
