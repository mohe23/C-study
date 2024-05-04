#include <iostream>
#include"complex.h"

using namespace std;

int main()
{
     complexs c1;//(3.15,6.23);//这种声明会报错。
     complexs c2(3,5);
// 当上述complexs加了关键字“const”，而在.h文件中，类的相关函数real()，impl()函数，没有加“const”。
//当在.cpp文件中，调用real()函数，会报错。解决办法：必须在类中的对应函数中，加上关键字“const”
    cout<<c2.real()<<endl;
    cout<<c2.impl()<<endl;

    cout<<c2.prit(c1)<<endl;
    //cout << "Hello world!" << endl;
    return 0;
}
