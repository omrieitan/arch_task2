typedef struct complex_num{
    double real;
    double imaginary;
}complex_num;

void print_input(int order, double epsilon, complex_num** coeff, complex_num* initial);
void print_complex(complex_num* num);

complex_num** deriv_coeff(complex_num** coeff, int order);

complex_num* calc_f(complex_num** coeff,int order, complex_num* initial);


complex_num* div_copmplex( complex_num* num1, complex_num* num2);

complex_num* pow_copmplex( complex_num* num1, int n);

complex_num* cumulative_sum( complex_num* num1, complex_num* num2);

complex_num* cumulative_mul( complex_num* num1, complex_num* num2);

complex_num* cumulative_sub( complex_num* num1, complex_num* num2);

double abstract_value(complex_num * num);
