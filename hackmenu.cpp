// �ڿ͹���ϵͳ����������û������������Ƿ���ȷ
// �Ż�1��������û��������벻��ȷ�����ٴ������û���������
// �Ż�2���û���/����5��������󣬾ͽ�ֹ�ٴ�����
#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;

int main(){
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

        cout<<"1-��վ 404����"<<endl;
        cout<<"2-��վ�۸Ĺ���"<<endl;
        cout<<"3-��վ�����޸�"<<endl;
        cout<<"4-�鿴������¼"<<endl;
        cout<<"5-DNS����"<<endl;

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