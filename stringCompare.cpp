// C���� �Ƚ�2���ַ���

#include<stdio.h>
#include<string.h>// ʹ��strcmp����

int main(){
    int i;
    short s;
    char c;
    float f;
    double d;
    int dt=0;
    int it=0,ct=0,ft=0,st=0;
    it = sizeof(i);
    ct = sizeof(c);
    ft = sizeof(f);
    dt = sizeof(d);
    st = sizeof(s);

    printf("short�ͱ���ռ���ֽ�����%d\n",st);
    printf("int�ͱ���ռ���ֽ�����%d\n",it);
    printf("char�ͱ���ռ���ֽ�����%d\n",ct);
    printf("float�ͱ���ռ���ֽ�����%d\n",ft);
    printf("double�ͱ���ռ���ֽ�����%d\n",dt);
    /*
    char str1[20];
    char str2[20];

    printf("������str1: ");
    scanf("%s",str1);//����str1

    printf("������str2��");
    scanf("%s",str2);//����str2

    if(strcmp(str1,str2)==0)//�����ַ�����ͬ������ֵ==0
        printf("\n�ַ���str1,str2��ͬ��\n");
    else
        printf("\n�ַ���str1,str2����ͬ��\n");
    */
return 0;
}
