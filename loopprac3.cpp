// ��ϰ1����1��ʮ������������ת��Ϊ�����Ʊ�ʾ
// ��ϰ2������1��������������ת����ʮ��������
// ��ϰ3������1���ַ�����Ȼ����ת���
#include<iostream>
#include<string>
#define SZ 16
#define ba 2
using namespace std;

int fexp(int base,int exp){// ʵ��ָ������
    int value = 1;
    int i;

    if(0==exp){
        value = 1;
    }
    else{//ָ��exp>=1
        for(i=1;i<=exp;i++){
            value = value*base;
        }
    }

return value;
}

bool strlegal(string str){// �ж��ַ������϶������ַ�
    bool flag = true;//Ĭ���ַ������϶������ַ���
    int i,length;

    length = str.length();//�����ַ���str�ĳ���
    for(i=0;i<length;i++){
        if('0'!=str[i]&&'1'!=str[i]){//ֻҪ�����ַ�����'0'��'1'���ͱ���������"��"�Ĺ�ϵ
            flag = false;
            break;//ֱ����������
        }
    }

return flag;
}

int main(){
    string str("");//����1���ַ�������������ʼ��Ϊ�մ�
    int i,length=0;
    char tmp;

    cout<<"������1���ַ�����";
    cin>>str;

    length = str.length();//�����ַ�������
    for(i=0;i<=length/2;i++){
        tmp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = tmp;
    }

    cout<<"�ַ�����ת��"<<str<<endl;

    /*// ��ϰ2
    int i,a,length=0;
    int tmp,sum=0;
    bool flag;
    string arb("");//�洢�������ַ���

    cout<<"���������������ַ�����";
    cin>>arb;

    flag = strlegal(arb);//�ж������ַ����Ƿ�Ϸ�
    if(!flag){
        cout<<"�Ƿ����룡������������ַ�����"<<endl;
        return 1;//ֱ�ӷ���
    }

    length = arb.length();//�����ַ����ĳ���
    length--;//����ַ���arb���1���ַ������
    tmp = length;
    for(i=length;i>=0;i--){
        a = arb[i] - '0';//ת��Ϊ����

        sum += a * fexp(ba,tmp-i);

    }

    cout<<arb<<" ��ʮ���Ʊ�ʾ��"<<sum<<endl;
    //cout<<str[i]<<endl;
    */
    /*// ��ϰ1
    int i,num,tmp,a[SZ];
    int cot=0;

    cout<<"������1����������";
    cin>>num;

    if(num<=0){
        cout<<"�Ƿ����룬��������������";
        return 1;//����ֹͣ����
    }

    tmp = num;
    //i = 0;
    while(tmp!=0){
        a[cot++] = tmp%2;//�������Ķ�����λ
        tmp = tmp/2;//
    }

    for(i=cot-1;i>=0;i--){
        cout<<a[i];
    }
    */

return 0;
}
