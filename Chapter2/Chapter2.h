//
// Created by kaiser on 18-9-29.
//

#ifndef CHAPTER2_CHAPTER2_H
#define CHAPTER2_CHAPTER2_H

#include "config.h"
#include <stddef.h>
#include <stdbool.h>

//2.55
void show_byte(byte_pointer start, size_t len);

//2.57
void show_byte_short(short x);

void show_byte_int(int x);

void show_byte_long(long x);

void show_byte_float(float x);

void show_byte_double(double x);

//2.58
bool is_little_endian(void);

//2.59
unsigned hw_2_59(unsigned x, unsigned y);

//2.60
unsigned replace_byte(unsigned x, int i, unsigned char b);

//2.61
bool hw_2_61_a(int x);

bool hw_2_61_b(int x);

bool hw_2_61_c(int x);

bool hw_2_61_d(int x);

//2.62
bool int_shifts_are_arithmetic(void);

//2.63
unsigned srl(unsigned x, int k);

int sra(int x, int k);

//2.64
int any_odd_one(unsigned x);

//2.65
int odd_ones(unsigned x);

//2.66
int leftmost_one(unsigned x);

//2.67
int int_size_is_32(void);

//2.68
int low_one_mask(int n);

//2.69
unsigned rotate_left(unsigned x, int n);

//2.70
int fits_bits(int x, int n);

//2.71
int xbyte(packed_t word, int bytenum);

//2.72
void copy_int(int val, void *buf, size_t maxbyte);

//2.73
int saturating_add(int x, int y);

//2.74
int tsub_ok(int x, int y);

//2.75
unsigned unsigned_high_prod(unsigned x, unsigned y);

int signed_high_prod(int x, int y);

//mine
void show_binary(byte_pointer start, size_t len);

void show_binary_short(short x);

void show_binary_int(int x);

void show_binary_unsigned(unsigned x);

void show_binary_long(long x);

void show_binary_long_long(long long x);

void show_binary_unsigned_long_long(unsigned long long x);

void show_binary_float(float x);

void show_binary_double(double x);

int unsigned_compare(unsigned x, unsigned y);

#endif //CHAPTER2_CHAPTER2_H
