// 输入年份，月份。输出：该月有多少天


#include<iostream>

using namespace std;

bool leapyear(int year){// 判断year年是否是闰年
    bool flag=false;//默认值0-表示该年是平年

    // 闰年情况1：能被4整除&&不能被100整除
    //闰年情况2：能被400整除。
    if((year%4==0&&year%100!=0)||(year%400==0))
        flag = true;//闰年

return flag;//返回值1-闰年
}

int main(){
    int year,month,day;
    bool f;
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};//按照平年的12个月份有多少年

    cout<<"请输入年份，月份（2者之间用空格隔开）：";
    cin>>year>>month;

    f = leapyear(year);//判断是闰年还是平年。闰年-1


    if(true==f&&2==month)//当前year是闰年，且月份是2月
        day = days[month-1]+1;
    else
        day = days[month-1];


    cout<<year<<"年"<<month<<"月"<<"有"<<day<<"天！"<<endl;



return 0;
}
