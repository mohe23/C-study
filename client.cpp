// 输入密码，根据输入内容，判断登录成功，还是重新输入

#include<iostream>
#include<string>
using namespace std;


int main(){
   string pwd;

   while(1){
       cout<<"Please input your password: ";
       cin>>pwd;

       if("000123"==pwd){
           break;//密码输入正确，跳出死循环
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
