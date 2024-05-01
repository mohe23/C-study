// 暴力破解6位数字密码
#include<iostream>
#include<string.h>

using namespace std;


int main(){
    char pwd[7];
    char dict[64];// 字典，存放密码字符可能的字符。0-9，a-z,A-Z,下划线。10+26+26+1 = 63
    char tmp[32];
    int i,n,p1,p2,p3,p4,p5,p6;
    int index = 0;

    // 假设密码只有数字组成
    for(i=0;i<10;i++){ // 将数字字符0-9存储在字典中
        dict[index++] = '0'+i;// '3' = '0' + 3

    }
    /*
    for(i=0;i<26;i++){
        dict[index++] = 'a'+i;
    }

    for(i=0;i<26;i++){
        dict[index++] = 'A'+i;
    }

    dict[index++]= '_';//下划线

    */
    dict[index] = '\0';
    n = index;// 字典数组中的字符个数

    for(p1=0;p1<n;p1++){// 第1位密码有10种可能0-9
        for(p2=0;p2<n;p2++){// 第2位密码有10种可能0-9
            for(p3=0;p3<n;p3++){// 以此类推
                for(p4=0;p4<n;p4++){
                    for(p5=0;p5<n;p5++){
                        for(p6=0;p6<n;p6++){
                            tmp[0] = dict[p1];
                            tmp[1] = dict[p2];
                            tmp[2] = dict[p3];
                            tmp[3] = dict[p4];
                            tmp[4] = dict[p5];
                            tmp[5] = dict[p6];
                            tmp[6] = '\0';
                            cout<<tmp<<endl;
                        }
                    }
                }
            }
        }
    }
    //cout<<"n = "<<n<<endl;

return 0;
}
