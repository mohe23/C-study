#include <iostream>
#include"complex.h"

using namespace std;

int main()
{
     complexs c1;//(3.15,6.23);//���������ᱨ��
     complexs c2(3,5);
// ������complexs���˹ؼ��֡�const��������.h�ļ��У������غ���real()��impl()������û�мӡ�const����
//����.cpp�ļ��У�����real()�������ᱨ������취�����������еĶ�Ӧ�����У����Ϲؼ��֡�const��
    cout<<c2.real()<<endl;
    cout<<c2.impl()<<endl;

    cout<<c2.prit(c1)<<endl;
    //cout << "Hello world!" << endl;
    return 0;
}
