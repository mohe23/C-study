// �ڿ͹���ϵͳ����������û������������Ƿ���ȷ
// �Ż�1��������û��������벻��ȷ�����ٴ������û���������
// �Ż�2���û���/����5��������󣬾ͽ�ֹ�ٴ�����
// �Ż���������¼�����ܷ�װ��1������login
// �Ż��������ն˴���  �˵�������ʾ  �ڲ˵��Ϸ���ӡ����
//
#include<iostream>
#include<string>
#include<windows.h>

using namespace std;

#define WIDTH 40
#define HEIGHT 15

void login(){// ������¼����װ��1������
    string name,pwd;//�����û������������

    while(1){
        system("cls");//����Ļ����
        cout<<"�������û�����";
        cin>>name;
        cout<<"���������룺";
        cin>>pwd;

        // �ж��û����������Ƿ���ȷ
        if(name=="54hk"&&pwd=="123456"){// �û���������������ȷ
           break;//����ѭ��
        }
        else{// �û��������������벻��ȷ
            cout<<"�û��������������벻��ȷ"<<endl;
            system("pause");
        }
    }

}

void titleShow(string title){
    int i,left;
    left = (WIDTH - title.length())/2;//һ�У�������ճ���

    for(i=0;i<left;i++){
        cout<<" ";
    }

    cout<<title<<endl;

}

void menuShow(){//���˵���ʾ��װ��1�������������޸�������
     int maxlen=0;
     int i,j,len,leftspace;
     //system("cls");//����
     string menu[]={
         "1-��վ 404����",
         "2-��վ�۸Ĺ���",
         "3-�鿴������¼",
         "4-��վ�����޸�",
         "5-�˳�"

     };

     len = sizeof(menu)/sizeof(string);

     for(i=0;i<len;i++){
        if(menu[i].length()>maxlen){
            maxlen = menu[i].length();
        }
     }
     // ���ճ���Ҫ���ַ��������г��������ַ�������Ϊ׼
     leftspace = (WIDTH - maxlen)/2;//��ӡһ�У�������ճ���

     for(i=0;i<len;i++){
        for(j=0;j<leftspace;j++){//��ӡ�ո�
            cout<<" ";
        }
        cout<<menu[i]<<endl;//��ӡ�˵�
     }
     /*
     cout<<"1-��վ 404����"<<endl;
     cout<<"2-��վ�۸Ĺ���"<<endl;
     cout<<"3-�鿴������¼"<<endl;//�鿴������¼
     cout<<"4-��վ�����޸�"<<endl;
     cout<<"5-�˳�"<<endl;
     */
}

int menuchoice(){
    int choice = 0;//���巵��ֵ
    //int n;

    while(1){
          cout<<"������chioce: ";
          cin>>choice;

          if(cin.fail()){
             cin.clear();//��������ʾ��
             cin.sync();//�������������
             cout<<"��������������Ԥ���������Ͳ�����"<<endl;
          }
          else{
              break;//����ѭ��
              //cout<<"success!"<<endl;
          }
    }

return choice;
}

void attack404(){// ��վ404����
    system("cls");//����
    cout<<"404����..."<<endl;
}

void siteEdit(){
    system("cls");//����
    cout<<"��վ�۸Ĺ���..."<<endl;
}

void attackRecord(){
    system("cls");//����
    cout<<"��վ������¼...."<<endl;
}

void attackRepair(){
    system("cls");//����
    cout<<"��վ�����޸�..."<<endl;
}

void init(){// �����ն˴��ڴ�С
    // mode con cols=40 lines=10
    char cmd[128];
    sprintf(cmd,"mode con cols=%d lines=%d",WIDTH,HEIGHT);//����������͵��ַ���cmd��
    system(cmd);//Ϊ�����޸��ն˴��ڴ�С������ʹ�ú궨��
}

int main(){
      int n;
      init();//��ʼ���ն˴��ڴ�С
      login();//��¼
      system("cls");
//cout<<"11"<<endl;
      titleShow("�ڿ͹���ϵͳ");//��ʾ����
//cout<<"22"<<endl;
      menuShow();//��ʾ���ܲ˵�

      n = menuchoice();//ָ���˵��ڼ���

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
          //system("cls");//����
          cout<<"��Ч���룬���������룡"<<endl;
          break;

      }





/*
     login();// ��¼
     system("cls");//����
     cout<<"1-��վ 404����"<<endl;
     cout<<"2-��վ�۸Ĺ���"<<endl;
     cout<<"3-��վ�����޸�"<<endl;
     cout<<"4-�鿴������¼"<<endl;
     cout<<"5-DNS����"<<endl;
*/
return 0;
}

/*
    string name,pwd;//�����û������������

    cout<<"�������û�����";
    cin>>name;
    cout<<"���������룺";
    cin>>pwd;

    // �ж��û����������Ƿ���ȷ
    if(name=="54hk"&&pwd=="123456"){// �û���������������ȷ
        cout<<"1-��վ 404����"<<endl;
        cout<<"2-��վ�۸Ĺ���"<<endl;
        cout<<"3-��վ�����޸�"<<endl;
        cout<<"4-�鿴������¼"<<endl;
        cout<<"5-DNS����"<<endl;
    }
    else{// �û��������������벻��ȷ
        cout<<"�û��������������벻��ȷ"<<endl;

    }
*/

 /*
    string name,pwd;//�����û������������
    int flag = 1;
    int cot=0;//��¼�����û�������

    while(flag){// ��flag==1����һֱѭ��
        cout<<"�������û�����";
        cin>>name;
        cout<<"���������룺";
        cin>>pwd;

        cot++;//ͳ���������
    // �ж��û����������Ƿ���ȷ
        if(cot<=5 && name=="54hk" && pwd=="123456"){// �û���������������ȷ
            cout<<"1-��վ 404����"<<endl;
            cout<<"2-��վ�۸Ĺ���"<<endl;
            cout<<"3-��վ�����޸�"<<endl;
            cout<<"4-�鿴������¼"<<endl;
            cout<<"5-DNS����"<<endl;

            flag = 0;//����ѭ��
        }
        else if(cot<=5 && (name!="54hk" || pwd!="123456")){// �û��������������벻��ȷ
            cout<<"�û��������������벻��ȷ��������"<<5-cot<<"��������ᣡ��"<<endl<<endl;
            flag = 1;//���������û�����������
        }
        else{//����û���������5�����ϣ���ֹ�ٴ�����
            cout<<"�������5���û���/���룬��һ����ٴ������¼����\n"<<endl<<endl;
            flag = 0��//��ʱ����ѭ��
        }


    }
    */
