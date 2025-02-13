/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) casadi_gen_ ## ID
#endif

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <casadi/mem.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[5] = {1, 1, 0, 1, 0};

#define CASADI_PRINTF printf

/* double_this:(x)->(y) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1;
  a0=2.;
  a1=arg[0] ? arg[0][0] : 0;
  a0=(a0*a1);
  if (res[0]!=0) res[0][0]=a0;
  return 0;
}

CASADI_SYMBOL_EXPORT int double_this(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void double_this_incref(void) {
}

CASADI_SYMBOL_EXPORT void double_this_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int double_this_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int double_this_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT const char* double_this_name_in(casadi_int i){
  switch (i) {
    case 0: return "x";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* double_this_name_out(casadi_int i){
  switch (i) {
    case 0: return "y";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* double_this_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* double_this_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int double_this_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}

casadi_int main_double_this(casadi_int argc, char* argv[]) {
  casadi_int *iw = 0;
  casadi_real w[4];
  const casadi_real* arg[1] = {w+0};
  casadi_real* res[1] = {w+1};
  casadi_int j;
  casadi_real* a = w;
  for (j=0; j<1; ++j) scanf("%lf", a++);
  casadi_int flag = double_this(arg, res, iw, w+2, 0);
  if (flag) return flag;
  const casadi_real* r = w+1;
  for (j=0; j<1; ++j) CASADI_PRINTF("%g ", *r++);
  CASADI_PRINTF("\n");
  return 0;
}

CASADI_SYMBOL_EXPORT casadi_functions* double_this_functions(void) {
  static casadi_functions fun = {
    double_this_incref,
    double_this_decref,
    double_this_n_in,
    double_this_n_out,
    double_this_name_in,
    double_this_name_out,
    double_this_sparsity_in,
    double_this_sparsity_out,
    double_this_work,
    double_this
  };
  return &fun;
}

int main(int argc, char* argv[]) {
  if (argc<2) {
    /* name error */
  } else if (strcmp(argv[1], "double_this")==0) {
    return main_double_this(argc-2, argv+2);
  }
  fprintf(stderr, "First input should be a command string. Possible values: 'double_this'\n");
  return 1;
}
#ifdef __cplusplus
} /* extern "C" */
#endif
