// ������ݣ��·ݡ�����������ж�����


#include<iostream>

using namespace std;

bool leapyear(int year){// �ж�year���Ƿ�������
    bool flag=false;//Ĭ��ֵ0-��ʾ������ƽ��

    // �������1���ܱ�4����&&���ܱ�100����
    //�������2���ܱ�400������
    if((year%4==0&&year%100!=0)||(year%400==0))
        flag = true;//����

return flag;//����ֵ1-����
}

int main(){
    int year,month,day;
    bool f;
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};//����ƽ���12���·��ж�����

    cout<<"��������ݣ��·ݣ�2��֮���ÿո��������";
    cin>>year>>month;

    f = leapyear(year);//�ж������껹��ƽ�ꡣ����-1


    if(true==f&&2==month)//��ǰyear�����꣬���·���2��
        day = days[month-1]+1;
    else
        day = days[month-1];


    cout<<year<<"��"<<month<<"��"<<"��"<<day<<"�죡"<<endl;



return 0;
}
