// Сд��ĸת��д����д��ĸתСд��ĸ�������ַ���ת��

#include<iostream>

using namespace std;


int main(){
    char letter;
    cout<<"������һ����ĸletter��";
    cin>>letter;

    if(letter>='a' && letter<='z'){// ��&&�������ȼ� < ">="��<=�������ȼ������öԡ�&&�����ߵı��ʽ������
        letter = letter - 'a' + 'A';//Сд->��д
    }
    else if(letter>='A' && letter<='Z'){
        letter = letter - 'A' + 'a';// ��д -> Сд
    }// ������Ϳ����ˣ�����Ϊ�˿����else������else

    cout<<"letter = "<<letter<<endl;

return 0;
}
