// switch���

#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"������1-7��";
    cin>>num;

    switch(num){// ����numһ�������ͱ������磺int ��short, long, long long
        case 1:// num==1
            cout<<"һ"<<endl;
            break;
        case 2:// num==2
            cout<<"��"<<endl;
            //int s = 0;// �������к󣬻ᱨ��
            break;
        case 3:
            { // ��1�������ţ�������������룬
                int x = 0;
            }
            cout<<"��"<<endl;
            break;
        case 4:
            cout<<"��"<<endl;
            break;
        case 5:
            cout<<"��"<<endl;
            break;
        case 6:// ����6��7����������ͬ��switch����У�������ôд��
        case 7:
            cout<<"ĩ"<<endl;
            break;
            /*
        case 7:
            cout<<"��"<<endl;
            break;
            */
        default://�����numֵ���������Ǽ������
            cout<<"������Ч��������1-7"<<endl;
            break;
    }

return 0;
}
