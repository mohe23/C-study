// ѭ��Ƕ��
//���ڲ�ѭ��������1�� ����䡱��
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
                   continue;// ������Ӧ��������������ѭ�����ִ�У�ֱ�ӽ�����һ��ѭ�����ִ�С�
                }

                cot++;
                cout<<i<<"::"<<j<<"::"<<k<<": ���� "<<cot<<"��"<<endl;
                Sleep(1000);// ����1��

            }
        }
    }


return 0;
}
