#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define MAX_SIZE 10

extern int now_time, count;

static inline int get_random(int min, int max) {
	return random() % (max - min + 1) + min;
}