#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

class complexs{

public:
    complexs(double r=0,double i=0):re(r),im(i){}

    //complexs(double r=3.15,double i=6.25):re(r),im(i){}
   // complexs():re(5.8),im(0){}

    double real() const {return re;}//����ʵ��
    double impl() const {return im;}//�����鲿

    // ��ͬ���µĲ�ͬ���󣬻�Ϊ��Ԫ��Ҳ����˵������ʵ���У�����ֱ��ͨ��comp.re�������˽�г�Աre
    double prit(complexs comp){
        return comp.re + comp.im;
    }

private:
    double re,im;//���帴����ʵ�����鲿
};

#endif // COMPLEX_H_INCLUDED
