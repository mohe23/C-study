// ʹ�� do-while���ʵ�� 1+2+3+...+100

#include<iostream>

using namespace std;


int main(){
    int i=1;
    int sum = 0;
    // do-while���
    do{
        sum += i;
        i++;
    }while(i<101);

    cout<<"1+2+3+...+100 ="<<sum<<endl;

return 0;
}
