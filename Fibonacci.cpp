// ���ָ��������쳲��������� 1 1 2 3 5 8 13 21...

#include<iostream>
#include<string>
using namespace std;


int main(){
    string str("ser 567");
    string st;
    st = str.substr(3,0);
    if(st==" ")
        cout<<"�ո�"<<endl;
    /*
    int i,j,k,t,sum;
    int cot = 0;
    i = 0; j=0; k=1;
    cout<<"������쳲���������������";
    cin>>sum;
// ���ǳ���Ľ�׳��
    if(sum<=0){
        cout<<"�Ƿ����룬������1����������"<<endl;
        return 1;
    }
    while(cot<sum){//ע�⣬���ﾭ����֤��Ӧ����"<"
        cout<<k<<" ";
        cot++;//�����Ѿ������������
        // ��iֵ����j����jֵ����k����kֵ����i
        t = k;
        k = j;
        j = i;
        i = t;
       // �����µ�kֵ
        k = i+j;
    }
    */
return 0;
}
