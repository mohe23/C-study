// C++中，使用下标来访问字符串中的元素
// C语言,字符串（用字符数组存储）
#include<iostream>
#include<string>

using namespace std;


int main(){
    int i,le;
    // C语言，用字符数组存储字符串时，在字符串最后1个字符后面，还要加上1个“标记”'\0'，代表字符串的结尾。
    char name[]="Rock";//等效于：char name[5]="Rock"
    cout<<"name: "<<name<<endl;
    cout<<"数组大小 = "<<sizeof(name)<<endl;// 代表这个数组容量大小是5个字节


    /*
    char name[20]="Rock";//等效于：char name[20]={'R','o','c','k','\0'}
    cout<<"name: "<<name<<endl;
    */


   /*
   cout<<"请输入您的名字：";
   cin>>name;// 输入“Rock”
   le = 5;
   // 根据下面语句的输出结果可知，字符串存储在字符数组中时，后面还会加1个'\0'
   for(i=0;i<le;i++){
       if(name[i]=='\0')
           cout<<"0 ";
       else
            cout<<name[i]<<" ";
   }

   */
return 0;
}

/*
string name = "Rock";
    cout<<"name = "<<name<<endl;

    name[0]= 'L';//通过下标来访问字符串中的元素
    cout<<"name = "<<name<<endl;

     int i,le=10;
    int a[10]={0};
    for(i=0;i<le;i++)
        cout<<a[i]<<" ";//
    cout<<endl;

    a[-1]=45;// a[-1]，是越界了。这个语句可以通过编译，但是根据，2次输出结果，并没有改变任何数组元素的值
    for(i=0;i<le;i++)
        cout<<a[i]<<" ";
    cout<<endl;

*/
