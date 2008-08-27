#include <ruby.h>

typedef int bool;
#define FALSE 0
#define TRUE 1

double alngam2 ( double xvalue, int *ifault );
double alnorm ( double x, bool upper);
double betain ( double x, double p, double q, double beta, int *ifault );
double r8_abs ( double x );
double tnc ( double t, double df, double delta, int *ifault );

void cdfchi(int*,double*,double*,double*,double*,int*,double*);

void Init_rubyss_ext();
VALUE mRubySS_alngam2(VALUE self, VALUE x);
VALUE mRubySS_alnorm(VALUE self, VALUE x, VALUE upper);
VALUE mRubySS_betain(VALUE self, VALUE x, VALUE p,VALUE q, VALUE beta);
VALUE mRubySS_tnc(VALUE self, VALUE t, VALUE df,VALUE delta);
VALUE mRubySS_chi_square_p(VALUE self, VALUE x,VALUE df);
VALUE mRubySS_chi_square_x(VALUE self, VALUE p,VALUE df);
VALUE mRubySS_chi_square_df(VALUE self, VALUE p,VALUE x);
VALUE mRubySS_t_p(VALUE self, VALUE t,VALUE df);
VALUE mRubySS_t_t(VALUE self, VALUE p,VALUE df);
VALUE mRubySS_t_df(VALUE self, VALUE p,VALUE t);
VALUE mRubySS_gamma_p(VALUE self, VALUE x,VALUE shape,VALUE scale);
VALUE mRubySS_gamma_x(VALUE self, VALUE p,VALUE shape,VALUE scale);

VALUE mRubySS_normal_p(VALUE self, VALUE x,VALUE mean,VALUE sd);
VALUE mRubySS_normal_x(VALUE self, VALUE p,VALUE mean,VALUE sd);
VALUE mRubySS_normal_mean(VALUE self, VALUE p,VALUE x,VALUE sd);
VALUE mRubySS_normal_sd(VALUE self, VALUE p,VALUE x,VALUE mean);


