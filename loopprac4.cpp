// ��ϰ1��1000Ԫ��Ҫ��100ֻ��  ����ÿֻ50   ĸ��ÿֻ30   С��ÿ3ֻ10  һ����������
// ��ϰ2������һ��Ӣ���ַ�����ͳ�Ƶ��ʸ������ַ�����ͷ��һ����Ӣ����ĸ������֮��Ŀո���Ҳ���ܲ�ֻ1��
// ��ϰ3������һ���ַ�����Ȼ����ַ����Ե���Ϊ��λ����ת���������Ѷ�����⣩
// ���磬���룺Alice call Jack     �����Jack call Alice �� Ҫ���ٶ�Խ��Խ��
#include<iostream>
#include<string>
#define MALEC 50
#define FEMALEC 30
#define LITTLEC 10

using namespace std;

bool alpha(char ch){// �ж�ch�Ƿ���Ӣ����ĸ
    bool value = false;//Ĭ���Ƿ�Ӣ����ĸ

    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
        value = true;//
    }

return value;
}

int main(){

    // ��ϰ3
    string str,tmpstr,newstr("");
    int i,first,length,tlength;
    int flag1=0,flag2 =0;// flag1 -��ǵ���  flag2-��ǿո�
    bool v;

    cout<<"������һ��Ӣ����䣺";
    getline(cin,str);//�������һ���ַ������� ��ֵ���ַ������� str��

    length = str.length();//
    //cout<<"length : "<<length<<endl;

    for(i=0;i<length;i++){
        v = alpha(str[i]);
        //cout<<"v: "<<v<<endl;
        if(v){// ��ǰɨ���ַ��� Ӣ����ĸ
            if(0==flag1&&0==flag2){//ɨ�赽���ʵĵ�1��Ӣ����ĸ,һ�����ַ�����Ӣ����ĸ��ͷ
                flag1 = 1;
                first = i;
            }
            else if(0==flag1&&1==flag2){//��ʱ���Խ�ȡ���ո��ַ���
                tlength = i-first;//ȷ���ո��ַ�������
                //cout<<"v1 tlength: "<<tlength<<endl;
                tmpstr = str.substr(first,tlength);
                //cout<<"v1 tmpstr: "<<tmpstr<<endl;
                newstr = tmpstr + newstr;
                flag2 = 0;
                flag1 = 1;//�ǵý�flag1=1����Ϊɨ�赽���ʵĵ�1����ĸ
                first = i;//��ǵ��ʵ�1����ĸ���±�

            }

            // �ַ���ĩβһ����Ӣ����ĸ
            if(length-1==i){//���������˵���ַ���ɨ�赽ĩβ��
                tlength = i-first+1;//ȷ���ո��ַ�������,ע�������ȡ�ַ������� �ļ��㹫ʽ
                //cout<<"v2 tlength: "<<tlength<<endl;
                tmpstr = str.substr(first,tlength);
                //cout<<"v2 tmpstr: "<<tmpstr<<endl;
                newstr = tmpstr + newstr;
            }
        }
        else{// ��ǰɨ���ַ��� �ո��
            if(0==flag1&&0==flag2){//ɨ�赽���ʵĵ�1���ո�һ�㣬���ַ����ԡ��ո񡱿�ͷ
                flag2 = 1;
                first = i;
            }
            else if(1==flag1&&0==flag2){// ��ȡ�����ַ���
                tlength = i-first;
                //cout<<"!v tlength: "<<tlength<<endl;
                tmpstr = str.substr(first,tlength);
                //cout<<"!v tmpstr: "<<tmpstr<<endl;
                newstr = tmpstr + newstr;
                flag1 = 0;
                flag2 = 1;//�ǵý�flag2=1����Ϊ����ǵ�ǰ��1��ɨ�赽���ո�
                first = i;//��ǵ�1�����ո�
            }

            // �ַ����Կո��β
            if(length-1==i){//���������˵���ַ���ɨ�赽ĩβ��
                tlength = i-first+1;//ȷ���ո��ַ�������,ע�������ȡ�ַ������� �ļ��㹫ʽ
                //cout<<"!v2 tlength: "<<tlength<<endl;
                tmpstr = str.substr(first,tlength);
                //cout<<"!v2 tmpstr: "<<tmpstr<<endl;
                newstr = tmpstr + newstr;
            }
        }

    }

    cout<<"�µ��ַ���:"<<newstr<<endl;

    /*

    // ��ϰ2
    /*
      �ؼ�˼·��
      ����1��Ӣ����ĸ����ʱ��1����ǣ�Ȼ�������������Ӣ����ĸ����ͳ�Ƶ�������1��ͬʱ���ϳ���֮ǰ�ı��

    */
    /*
    string str;
    bool v;
    int i,length;
    int flag=0,cot=0;// flag-1�����  cot-�洢���ʸ���

    cout<<"������һ��Ӣ���ַ�����";
    getline(cin,str);// �ַ�������ʱ���������ո񡱣���ֹͣ���ַ����������������ˡ�

    length = str.length();// �����ַ�������
     cout<<"length: "<<length<<endl;

    for(i=0;i<length;i++){
        v = alpha(str[i]);//�жϵ�ǰ�ַ��Ƿ���Ӣ����ĸ
        if(0==flag&&v){//ɨ�赽1�����ʵĵ�1��Ӣ����ĸ
            flag = 1;//��ʼ
        }
        else if(1==flag&&!v){// flag==1,��ǰɨ���ַ��Ƿ�Ӣ����ĸ
            cot++;//��������1
            flag = 0;//ͬʱ�����flag���¸�ֵΪ0
        }

        if(1==flag&&length-1==i&&v){
            cot++;//�ַ�����Ӣ����ĸ��βʱ��Ϊ��ͳ����ȷ�ĵ��ʸ������ǵý���������1
        }
    }

    cout<<"��ǰӢ���ַ���һ���� "<<cot<<" �����ʣ�"<<endl;
    */

    /*
    //��ϰ1
    int m,f,l;//m,f,l�ֱ��������,ĸ������С����
    int money,total,sum;//�ֱ������Ǯ�� ����ֻ��
    int msum,fsum;
    cout<<"������Ǯ������������";
    cin>>money>>total;

    msum = money/MALEC;//������๺��ֻ��
    fsum = money/FEMALEC;//ĸ����๺��ֻ��

    for(m=0;m<=msum;m++){
        for(f=0;f<=fsum;f++){
            l = total - m - f;//���С����

            if(0==l%3 && 1000==m*MALEC + f*FEMALEC + l/3*LITTLEC){
                cout<<"������ "<<m<<" ֻ��"<<"ĸ���� "<<f<<" ֻ��"<<"С���� "<<l<<" ֻ��"<<endl;
            }
            /*
            if(0!=l%3){
                continue;//С��������3�ı�����ֱ�ӽ�����һ��ѭ��
            }
            else{//С������3�ı���
                sum = m*MALEC + f*FEMALEC + l/3*LITTLEC;//���㵱ǰ��Ǯ��
                if(1000==sum){
                    cout<<"������ "<<m<<" ֻ��"<<"ĸ���� "<<f<<" ֻ��"<<"С���� "<<l<<" ֻ��"<<endl;
                }
            }
            */
        //}
    //}

return 0;
}
