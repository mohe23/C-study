// C++�У�ʹ���±��������ַ����е�Ԫ��
// C����,�ַ��������ַ�����洢��
#include<iostream>
#include<string>

using namespace std;


int main(){
    int i,le;
    // C���ԣ����ַ�����洢�ַ���ʱ�����ַ������1���ַ����棬��Ҫ����1������ǡ�'\0'�������ַ����Ľ�β��
    char name[]="Rock";//��Ч�ڣ�char name[5]="Rock"
    cout<<"name: "<<name<<endl;
    cout<<"�����С = "<<sizeof(name)<<endl;// �����������������С��5���ֽ�


    /*
    char name[20]="Rock";//��Ч�ڣ�char name[20]={'R','o','c','k','\0'}
    cout<<"name: "<<name<<endl;
    */


   /*
   cout<<"�������������֣�";
   cin>>name;// ���롰Rock��
   le = 5;
   // ��������������������֪���ַ����洢���ַ�������ʱ�����滹���1��'\0'
   for(i=0;i<le;i++){
       if(name[i]=='\0')
           cout<<"0 ";
       else
            cout<<name[i]<<" ";
   }

   */
return 0;
}

/*
string name = "Rock";
    cout<<"name = "<<name<<endl;

    name[0]= 'L';//ͨ���±��������ַ����е�Ԫ��
    cout<<"name = "<<name<<endl;

     int i,le=10;
    int a[10]={0};
    for(i=0;i<le;i++)
        cout<<a[i]<<" ";//
    cout<<endl;

    a[-1]=45;// a[-1]����Խ���ˡ����������ͨ�����룬���Ǹ��ݣ�2������������û�иı��κ�����Ԫ�ص�ֵ
    for(i=0;i<le;i++)
        cout<<a[i]<<" ";
    cout<<endl;

*/
