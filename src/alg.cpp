// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
if (n == 0) {return 1;}
else if (n == 1) return value;
if (value == 1 || value == 0) return value;
double res = 1;
for (uint16_t i = 0; i < n; i++) {res *= value;}
return res;
}

uint64_t fact(uint16_t n) {
uint16_t res = 1;
if (n == 0) {return 1;}
else if (n > 0) {
for (uint16_t i = n; i > 0; i--) {res *= i;}}
return res;
}

double calcItem(double x, uint16_t n) {
return (pown(x, n) / fact(n));
}

double expn(double x, uint16_t count) {
double res = 1;
for (uint16_t i = 1; i <= count; i++) {res += calcItem(x, i);}
return res;
}

double sinn(double x, uint16_t count) {
double res = x;
for (uint16_t i = 2; i <= count; i++) {
res += pown(x, 2 * i - 1) * pown(-1, i - 1) / fact(2 * i - 1);}
return res;
}

double cosn(double x, uint16_t count) {
double res = 1;
for (uint16_t i = 2; i <= count; i++) {
res += pown(x, 2 * i - 2) * pown(-1, i - 1) / fact(2 * i - 2);}
return res;
}
