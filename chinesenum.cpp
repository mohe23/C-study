// ������������0-9ת���ɺ��ֵĴ�д����
// "��","Ҽ","��","��","��","��","½","��","��","��"
// �� 132 ת���� Ҽ����

#include<iostream>

using namespace std;


int main(){
    int i,num,le=0;
    int a[10]={0};//����������num�Ĳ�ͬλ������
    string ret[10]={"��","Ҽ","��","��","��","��","½","��","��","��"};

    cout<<"������1�����֣�";
    cin>>num;

    while(num!=0){
        a[le++] = num%10;//��num��λ���������a�±�=0��ʮλ�����±�Ϊ1���Դ����ơ�
        num = num/10;
    }
    for(i=le-1;i>=0;i--){
        cout<<ret[a[i]];
    }

    /*
    int num;
    cout<<"������1������������0-9��";
    cin>>num;

    switch(num){
    case 0:
        cout<<"��"<<endl;
        break;
    case 1:
        cout<<"Ҽ"<<endl;
        break;
    case 2:
        cout<<"��"<<endl;
        break;
    case 3:
        cout<<"��"<<endl;
        break;
    case 4:
        cout<<"��"<<endl;
        break;
    case 5:
        cout<<"��"<<endl;
        break;
    case 6:
        cout<<"½"<<endl;
        break;
    case 7:
        cout<<"��"<<endl;
        break;
    case 8:
        cout<<"��"<<endl;
        break;
    case 9:
        cout<<"��"<<endl;
        break;
    default:
        cout<<"������������뵥������������0-9"<<endl;
        break;
    }
    */
return 0;
}

