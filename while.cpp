// й╣ож 1+2+3+...+100

#include<iostream>

using namespace std;


int main(){
    int i=1,sum=0;
    while(i<=100){
        sum+=i;
        i++;
    }

    cout<<"1+2+3+...+100 ="<<sum<<endl;

return 0;
}
