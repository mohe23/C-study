// ��ϰ1����ӡn��m��*��
// ��ϰ2����ӡn�У�ÿ��*����==��ǰ�����
// ��ϰ3����ӡn�У���i��i>=1�����У�n+1-i����*
// ��ϰ4����ӡn�У���i���У�i*2-1������*�������Ҿ��д�ӡ����ӡЧ�������ƽ�����
// ��ϰ5����ӡ�˷��ھ���
#include<iostream>
#include<iomanip>

using namespace std;


int main(){
    int i,j,k,t,w;
    int row=0,column=0,le=0;


    cout<<"����������(һ������9)��";
    cin>>row;

    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
           // cout<<i<<"*"<<j<<"="<<i*j<<" ";// ���1

            //cout<<j<<"*"<<i<<"="<<setw(2)<<i*j<<" ";//���2  setw(2)���������ŵ��ַ��������Ϊ2����������������Ҷ���
            //cout<<j<<"*"<<i<<"="<<setw(2)<<left<<i*j<<" ";// ����ļ������ǡ�����롱
            // w = (j==1)?1:2;//������Ĵ���
            if(1==j){
               w = 1;
             //   cout<<j<<"*"<<i<<"="<<setw(1)<<left<<i*j<<" ";//��ӡÿ�е�1��ʱ���������Ŀ�ȶ�Ϊ1
            }
            else{
                w =2;
                //cout<<j<<"*"<<i<<"="<<setw(2)<<left<<i*j<<" ";
            }
            cout<<j<<"*"<<i<<"="<<setw(w)<<left<<i*j<<" ";

            /*
            //���´��룬��Ϊ�˱����������
            if(i*j<10){
                cout<<"  ";
            }
            else{// i*j>=10
                cout<<" ";
            }
            */
        }
        cout<<endl;
    }
    /*
    // ��ϰ4
    // �ѵ㣬�Һ�ÿ1��*��ӡ�ķ�Χ��
    le = 2*row - 1;//ÿ1���ܴ�ӡ�ַ�����

    for(i=1;i<=row;i++){
        k = row+1-i;//��i�е�1��*���ڵ�λ��
        t = k + 2*i -2;//��i�����1��*���ڵ�λ��
        for(j=1;j<=2*row-1;j++){
            if(j>=k&&j<=t)
            cout<<"*";
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    */
    /*
    // ��ϰ3
    for(i=0;i<row;i++){
        for(j=0;j<row-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    */
    /* //��ϰ2
    for(i=0;i<row;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;//��ӡһ�к󣬻���
    }
    */
    /* // ��ϰ1
    cout<<"Please input rows and columns: ";
    cin>>row>>column;

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            cout<<"*";
        }
        cout<<endl;//ÿ��ӡ��һ�У��ͻ���
    }
    */
return 0;
}
