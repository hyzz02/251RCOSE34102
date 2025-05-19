#pragma once
#include "base.h"

typedef struct {
	bool type_io;
	int id;
	int arrival_time;
	int cpu_burst;
	int io_burst;
	int io_request;
	int priority;
} Process;

void CreateProcess();
