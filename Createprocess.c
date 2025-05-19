#include "CreateProcess.h"

void CreateProcess() {
	Process p;

	p.id = count++;

	p.arrival_time = now_time;
	p.type_io = get_random(0, 1);

	p.priority = get_random(1, 10);

	p.cpu_burst = (p.type_io) ?
		get_random(1, 10) : get_random(10, 100);
	p.io_burst = (p.type_io) ?
		get_random(10, 50) : 0;
	p.io_request = (p.type_io) ?
		get_random(now_time, now_time + p.cpu_burst - 1) : 0;

	printf("프로세스 정보(id / 도착시간 / cpu burst time / io burst time / io request time / priority ) : ");
	printf("%d / %d / %d / %d / %d / %d\n", p.id, now_time, p.cpu_burst, p.io_burst, p.io_request, p.priority);
}

