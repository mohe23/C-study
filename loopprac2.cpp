// ��ӡ����3λ����ˮ�ɻ���

#include<iostream>
#define SZ 3// ���ú궨�壬ָ������Ĵ�С

using namespace std;


int main(){
    int i,num,sum,tmp;
    int a[SZ];

    for(num=100;num<1000;num++){
        i=0;
        sum = 0;
        tmp = num;//���������1�����������浱ǰnumֵ����ô��������Ĵ����num=0����ô�������sum����== num
        while(tmp!=0){// ����λ��num�ĸ�λ��ʮλ����λ����ȡ����
            a[i++] = tmp%10;
            tmp = tmp/10;
        }

        for(i=0;i<SZ;i++){
            sum += a[i]*a[i]*a[i];
        }

        if(sum == num)
            cout<<num<<" ";


    }

return 0;
}
