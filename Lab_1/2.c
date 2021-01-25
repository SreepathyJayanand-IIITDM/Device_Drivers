#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *buf = "system_profiler SPSoftwareDataType";
	printf("Software INFO\n");
	system(buf);
	buf = "system_profiler SPHardwareDataType";
	system(buf);
	buf = "system_profiler SPDisplaysDataType";
	system(buf);
	return 0;
}