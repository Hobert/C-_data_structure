#include <iostream>
using namespace std;
typedef struct // 结构体要定义在main函数外面
{
    float realpart;
    float imagpart;

} Complex;
void assign(Complex *A, float real, float imag);
void add(Complex *A, Complex B, Complex C);
void minus(Complex *A, Complex B, Complex C);
void mul(Complex *A, Complex B, Complex C);
void div(Complex *A, Complex B, Complex C);

void assign(Complex *A, float real, float imag)
{
    A->realpart = real;
    A->imagpart = imag;
};
void add(Complex *A, Complex B, Complex C)
{
    A->realpart = B.realpart + C.realpart;
    A->imagpart = B.imagpart + C.realpart;
}
void minus(Complex *A, Complex B, Complex C)
{
    A->realpart = B.realpart - C.realpart;
    A->imagpart = B.imagpart - C.realpart;
}
void mul(Complex *A, Complex B, Complex C)
{
    A->realpart = B.realpart * C.realpart;
    A->imagpart = (B.imagpart * C.realpart) + (B.realpart * C.imagpart) + (B.imagpart * C.imagpart);
}
void div(Complex *A, Complex B, Complex C)
{
    A->realpart = B.realpart - C.realpart;
    A->imagpart = B.imagpart - C.realpart;
}

int main()
{

    return 0;
}