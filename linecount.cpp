//  �������������ַ�����ͳ���������Լ��ַ�������c C++2�ַ�ʽʵ��

/*
// C++

#include<iostream>
#include<string>

using namespace std;

int main(){
    string word;
    int lcount=0;//����
    int ccount=0;//�ַ���

    cout<<"��������������ַ�����"<<endl;
    while(1){
        // getline���������ļ�������EOF,ֹͣ����
        if(getline(cin,word).eof()){
            break;//�Ӽ�����������ļ�������EOF����ô������ѭ��
        }

        lcount++;

        ccount += word.length();// һ���ַ����У�����Ҳ���"�ո�"�ַ������ȥ
    }

    cout<<"���� = "<<lcount<<endl;
    cout<<"�ַ��� = "<<ccount<<endl;

return 0;
}
*/
///*
// C����
#include<stdio.h>
#include<string.h>

int main(){
    int linecount=0;//����
    int charcout=0;//�ַ���
    char word[20];//�洢�ַ���

    printf("����������ַ�����\n");
    while(1){
            // Ctrl + z  => �ļ�������EOF
        if(gets(word)==0){//�����ļ�������������ѭ��
            break;
        }

        charcout += strlen(word);//�ַ�����1


        linecount++;//�������з���������1
    }

    printf("������ = %d\n",linecount);
    printf("���ַ��� = %d\n",charcout);

return 0;
}
//*/
