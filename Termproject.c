#include "CreateProcess.h"

int now_time = 0, count = 0;

int main() {

	srandom(time(NULL));

	while (1) {
		if (get_random(0, 1))
			CreateProcess(now_time, count);
		else now_time++;

		if (count >= MAX_SIZE) break;
	}

	return 0;
}