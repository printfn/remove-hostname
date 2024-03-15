#include <stdio.h>
#include <unistd.h>

int main(void) {
	if (sethostname("", 0)) {
		perror("sethostname(\"\", 0)");
		return 1;
	}
	return 0;
}
