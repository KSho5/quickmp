#include <cstddef>

void sliding_dot_product_fft(const double *T, const double *Q, double *QT, size_t n, size_t m);
void sliding_dot_product_naive(const double *T, const double *Q, double *QT, size_t n, size_t m);
void compute_mean_std(const double *T, double *mu, double *sigma, size_t n, size_t m);
void compute_sum_sq(const double *T, double *sum_sq, size_t n, size_t m);
void selfjoin(const double *T, double *P, size_t n, size_t m);
void selfjoin_nonnorm(const double *T, double *P, size_t n, size_t m);
void abjoin(const double *T1, const double *T2, double * P, size_t n1, size_t n2, size_t m);
