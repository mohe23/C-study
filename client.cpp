// �������룬�����������ݣ��жϵ�¼�ɹ���������������

#include<iostream>
#include<string>
using namespace std;


int main(){
   string pwd;

   while(1){
       cout<<"Please input your password: ";
       cin>>pwd;

       if("000123"==pwd){
           break;//����������ȷ��������ѭ��
       }
       else{
           cout<<"Password error!"<<endl;
       }

   }

   cout<<"login success!"<<endl;
   cout<<"1 login"<<endl;
   cout<<"2 manage"<<endl;
   cout<<"3 search"<<endl;
   cout<<"4 delete"<<endl;

return 0;
}
