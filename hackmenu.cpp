// 黑客攻击系统，对输入的用户名，密码检查是否正确
// 优化1：输入的用户名与密码不正确，就再次输入用户名与密码
// 优化2：用户名/密码5次输入错误，就禁止再次输入
// 优化：将“登录”功能封装乘1个函数login
// 优化：设置终端窗口  菜单居中显示  在菜单上方打印标题
//
#include<iostream>
#include<string>
#include<windows.h>

using namespace std;

#define WIDTH 40
#define HEIGHT 15

void login(){// 将“登录”封装成1个函数
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

}

void titleShow(string title){
    int i,left;
    left = (WIDTH - title.length())/2;//一行，左边留空长度

    for(i=0;i<left;i++){
        cout<<" ";
    }

    cout<<title<<endl;

}

void menuShow(){//将菜单显示封装成1个函数，便于修改相关输出
     int maxlen=0;
     int i,j,len,leftspace;
     //system("cls");//清屏
     string menu[]={
         "1-网站 404攻击",
         "2-网站篡改攻击",
         "3-查看攻击记录",
         "4-网站攻击修复",
         "5-退出"

     };

     len = sizeof(menu)/sizeof(string);

     for(i=0;i<len;i++){
        if(menu[i].length()>maxlen){
            maxlen = menu[i].length();
        }
     }
     // 留空长度要以字符串数组中长度最大的字符串长度为准
     leftspace = (WIDTH - maxlen)/2;//打印一行，左边留空长度

     for(i=0;i<len;i++){
        for(j=0;j<leftspace;j++){//打印空格
            cout<<" ";
        }
        cout<<menu[i]<<endl;//打印菜单
     }
     /*
     cout<<"1-网站 404攻击"<<endl;
     cout<<"2-网站篡改攻击"<<endl;
     cout<<"3-查看攻击记录"<<endl;//查看攻击记录
     cout<<"4-网站攻击修复"<<endl;
     cout<<"5-退出"<<endl;
     */
}

int menuchoice(){
    int choice = 0;//定义返回值
    //int n;

    while(1){
          cout<<"请输入chioce: ";
          cin>>choice;

          if(cin.fail()){
             cin.clear();//清除错误表示符
             cin.sync();//清除缓冲区内容
             cout<<"输入内容类型与预期内容类型不符！"<<endl;
          }
          else{
              break;//跳出循环
              //cout<<"success!"<<endl;
          }
    }

return choice;
}

void attack404(){// 网站404攻击
    system("cls");//清屏
    cout<<"404攻击..."<<endl;
}

void siteEdit(){
    system("cls");//清屏
    cout<<"网站篡改攻击..."<<endl;
}

void attackRecord(){
    system("cls");//清屏
    cout<<"网站攻击记录...."<<endl;
}

void attackRepair(){
    system("cls");//清屏
    cout<<"网站攻击修复..."<<endl;
}

void init(){// 设置终端窗口大小
    // mode con cols=40 lines=10
    char cmd[128];
    sprintf(cmd,"mode con cols=%d lines=%d",WIDTH,HEIGHT);//将相关内容送到字符串cmd中
    system(cmd);//为便于修改终端窗口大小，可以使用宏定义
}

int main(){
      int n;
      init();//初始化终端窗口大小
      login();//登录
      system("cls");
//cout<<"11"<<endl;
      titleShow("黑客攻击系统");//显示标题
//cout<<"22"<<endl;
      menuShow();//显示功能菜单

      n = menuchoice();//指定菜单第几项

      switch(n){
      case 1:
          attack404();
          break;
      case 2:
          siteEdit();
          break;
      case 3:
          attackRecord();
          break;
      case 4:
          attackRepair();
          break;
      case 5:
          return 0;
      default:
          //system("cls");//清屏
          cout<<"无效输入，请重新输入！"<<endl;
          break;

      }





/*
     login();// 登录
     system("cls");//清屏
     cout<<"1-网站 404攻击"<<endl;
     cout<<"2-网站篡改攻击"<<endl;
     cout<<"3-网站攻击修复"<<endl;
     cout<<"4-查看攻击记录"<<endl;
     cout<<"5-DNS攻击"<<endl;
*/
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
