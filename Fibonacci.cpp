// 输出指定个数的斐波拉契数列 1 1 2 3 5 8 13 21...

#include<iostream>
#include<string>
using namespace std;


int main(){
    string str("ser 567");
    string st;
    st = str.substr(3,0);
    if(st==" ")
        cout<<"空格"<<endl;
    /*
    int i,j,k,t,sum;
    int cot = 0;
    i = 0; j=0; k=1;
    cout<<"请输入斐波拉契数列项数：";
    cin>>sum;
// 考虑程序的健壮性
    if(sum<=0){
        cout<<"非法输入，请输入1个正整数！"<<endl;
        return 1;
    }
    while(cot<sum){//注意，这里经过验证，应该是"<"
        cout<<k<<" ";
        cot++;//计数已经输出的项数。
        // 将i值赋给j；将j值赋给k；将k值赋给i
        t = k;
        k = j;
        j = i;
        i = t;
       // 计算新的k值
        k = i+j;
    }
    */
return 0;
}
