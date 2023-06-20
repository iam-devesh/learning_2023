#include <stdio.h>
struct complex
{
    float real;
    float imag;
};
void read_complex(struct complex *c)
{
    printf("Enter the real part of the complex number: ");
    scanf("%f", &c->real);
    printf("Enter the imaginary part of the complex number: ");
    scanf("%f", &c->imag);
}
void write_complex(struct complex c)
{
    printf("The complex number is %f + %fi.\n", c.real, c.imag);
}
struct complex add_complex(struct complex a, struct complex b)
{
    struct complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

struct complex multiply_complex(struct complex a, struct complex b)
{
    struct complex c;
    c.real = a.real * b.real - a.imag * b.imag;
    c.imag = a.real * b.imag + a.imag * b.real;
    return c;
}
int main()
{
    struct complex a, b, c;
    read_complex(&a);
    read_complex(&b);
    c = add_complex(a, b);
    write_complex(c);
    c = multiply_complex(a, b);
    write_complex(c);

    return 0;
}
