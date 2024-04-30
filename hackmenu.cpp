// 黑客攻击系统，对输入的用户名，密码检查是否正确
// 优化1：输入的用户名与密码不正确，就再次输入用户名与密码
// 优化2：用户名/密码5次输入错误，就禁止再次输入
#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

int main(){
    string name,pwd;//定义用户名，密码变量

    while(1){
        system("cls");//将屏幕清屏
        cout<<"请输入用户名：";
        cin>>name;
        cout<<"请输入密码：";
        cin>>pwd;

        // 判断用户名，密码是否正确
        if(name=="54hk"&&pwd=="123456"){// 用户名，密码输入正确
           break;//跳出循环
        }
        else{// 用户名，或密码输入不正确
            cout<<"用户名，或密码输入不正确"<<endl;
            system("pause");
        }
    }

        cout<<"1-网站 404攻击"<<endl;
        cout<<"2-网站篡改攻击"<<endl;
        cout<<"3-网站攻击修复"<<endl;
        cout<<"4-查看攻击记录"<<endl;
        cout<<"5-DNS攻击"<<endl;

return 0;
}

/*
    string name,pwd;//定义用户名，密码变量

    cout<<"请输入用户名：";
    cin>>name;
    cout<<"请输入密码：";
    cin>>pwd;

    // 判断用户名，密码是否正确
    if(name=="54hk"&&pwd=="123456"){// 用户名，密码输入正确
        cout<<"1-网站 404攻击"<<endl;
        cout<<"2-网站篡改攻击"<<endl;
        cout<<"3-网站攻击修复"<<endl;
        cout<<"4-查看攻击记录"<<endl;
        cout<<"5-DNS攻击"<<endl;
    }
    else{// 用户名，或密码输入不正确
        cout<<"用户名，或密码输入不正确"<<endl;

    }
*/

 /*
    string name,pwd;//定义用户名，密码变量
    int flag = 1;
    int cot=0;//记录输入用户名次数

    while(flag){// 若flag==1，则一直循环
        cout<<"请输入用户名：";
        cin>>name;
        cout<<"请输入密码：";
        cin>>pwd;

        cot++;//统计输入次数
    // 判断用户名，密码是否正确
        if(cot<=5 && name=="54hk" && pwd=="123456"){// 用户名，密码输入正确
            cout<<"1-网站 404攻击"<<endl;
            cout<<"2-网站篡改攻击"<<endl;
            cout<<"3-网站攻击修复"<<endl;
            cout<<"4-查看攻击记录"<<endl;
            cout<<"5-DNS攻击"<<endl;

            flag = 0;//跳出循环
        }
        else if(cot<=5 && (name!="54hk" || pwd!="123456")){// 用户名，或密码输入不正确
            cout<<"用户名，或密码输入不正确。您还有"<<5-cot<<"次输入机会！！"<<endl<<endl;
            flag = 1;//继续输入用户名，和密码
        }
        else{//输错用户名或密码5次以上，禁止再次输入
            cout<<"您已输错5次用户名/密码，请一年后再次输入登录密码\n"<<endl<<endl;
            flag = 0；//此时跳出循环
        }


    }
    */
