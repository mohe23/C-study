// ͳ�����뵥�ʵĸ������Լ������ܳ���  C++��C 2��ʵ�ַ���

// C����д��

#include<stdio.h>
#include<string.h>

int main(){
    int i,le=8;
    int Count=0;
    int length=0;
    char word[20];

    printf("�����뵥�ʣ�\n");
    // ����������ʱ���Ȱ����س��������ٰ���Ctrl + z��
    while(1){
     // ������EOF���ļ������������ͻ᷵��-1��  ע��д����һ�У��о�Ч����
        if(scanf("%s",word)==EOF){
            break;//����ѭ��
        }

        Count++;
        length += strlen(word);//����strlen���������㵥�ʵĳ���
    }

    printf("�������� = %d\n",Count);
    printf("�ܵ��ʳ��� = %d\n",length);

    /*
    char word[8]="abcdefgh";// ���ᱨ����Ϊ"abcdefgh"����=8,8+1=9>8(�����鳤��)����ʱ�ͳ�����word���鳤�ȣ����������޷�
    // �洢���ַ�����������ף��ַ��������ַ���ʱ����Ҫ��ĩβ��һλ������'\0'��

    for(i=0;i<le;i++)
        printf("%c ",word[i]);
     */
return 0;
}

/*  // C++д��
#include<iostream>
#include<string>

using namespace std;

int main(){

    string word;
    int Count=0;//ͳ�Ƶ�������
    int length=0;//ͳ�Ƶ����ܳ���

    cout<<"�����뵥�ʣ�"<<endl;
    while(1){
        cin>>word;
        if(cin.eof()){// windowsϵͳ�����¡�Ctrl + z����1���ļ�������EOF,�䷵��ֵΪ0
            break;//����ѭ��
        }

        Count++;
        length += word.length();//һ�ּ��д��
    }

    cout<<"�����ܸ�����"<<Count<<endl;
    cout<<"�ܵĵ��ʳ��ȣ�"<<length<<endl;


return 0;
}
*/
