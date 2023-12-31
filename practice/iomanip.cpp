#include<iostream>
// 引入库文件
#include<iomanip>
using namespace std;

int main(){
    int i=10;
	double a=1.0/7,b=2.0/7,c=1e-5,d=1e+4;

    // setw()设置打印文本整体宽幅
    // hex按十六进制输出，dec按十进制输出
    cout<<setw(8)<<hex<<i<<","<<endl;
    cout<<setw(4)<<dec<<i<<","<<endl;

    // setprecision()设置输出精度（整数+小数部分的位数），仅对浮点数有效
    // fixed固定输出小数点后输出位数
    cout<<a<<", "<<setprecision(3)<<a<<endl;
    float pi=3.1415926;
    cout<<setprecision(3)<<pi<<endl;
    cout<<fixed<<setprecision(3)<<pi<<endl;

    // scientific以科学计数法输出，仅对浮点数有效
    cout<<scientific<<b<<endl;

    // 一些科学计数法的表示方法，仅对浮点数有效
    if (c==0.00001){
        cout<<"c==1e-5"<<endl;
    }
    if (d==10000){
        cout<<"d==1e+4"<<endl;
    }

	system("pause");
	return 0;
}