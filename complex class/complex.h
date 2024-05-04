#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class complexs{

public:
    complexs(double r=0,double i=0):re(r),im(i){}

    //complexs(double r=3.15,double i=6.25):re(r),im(i){}
   // complexs():re(5.8),im(0){}

    double real() const {return re;}//返回实部
    double impl() const {return im;}//返回虚部

    // 相同类下的不同对象，互为友元。也就是说，函数实现中，可以直接通过comp.re访问类的私有成员re
    double prit(complexs comp){
        return comp.re + comp.im;
    }

private:
    double re,im;//定义复数的实部，虚部
};

#endif // COMPLEX_H_INCLUDED
