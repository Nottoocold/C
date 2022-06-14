#pragma once

#ifndef __TEST_H__
#define __TEST_H__

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int is_prime(int);

int binary_search(const int*, int, int);

void print(int);

unsigned int my_strlen(const char*);

void bubble_sort(int arr[], int len);

char* my_strcpy(char* dest,const char* src);

void Icm(int a, int b);

int getMax(int x, int y);

char* reverse_string(char* start,char* end);//abc de -->  de abc


#endif //__TEST_H__