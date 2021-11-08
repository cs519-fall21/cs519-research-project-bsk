#include <sys/mman.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define SYS_TRAVERSE 334
#define SYS_FALLOS 333
#define MEM_2GB (1073741824) 
#define MEM_PGSIZE (4096)
#define MEM_PGCOUNT (MEM_2GB/MEM_PGSIZE) 
#define MEM_INTCOUNT_PAGE (MEM_PGSIZE/sizeof(int))
#define MEM_INTCOUNT (MEM_PGCOUNT * MEM_INTCOUNT_PAGE) 

long long GetRT() {
     struct timespec tp;
     clock_gettime(CLOCK_REALTIME, &tp);
     return (long long) tp.tv_sec * 1000000000 + tp.tv_nsec;
 }

int main(int argc, char *argv[]) {
	
	int *addr, iter;
	long long ret = 0;
	addr = mmap(NULL, MEM_2GB, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
	if (addr == MAP_FAILED)
		return 1;
	if (syscall(SYS_FALLOS) == -1)
		printf("went wrong\n");

	for (iter = 0; iter < MEM_PGCOUNT; iter++) 
	{	
		if (iter == MEM_PGCOUNT-1)	
			if(syscall(SYS_TRAVERSE) == -1)
				printf("went wrong 2\n");
        long long t1 = GetRT();
		addr[iter*MEM_INTCOUNT_PAGE] = iter*MEM_INTCOUNT_PAGE;
		long long t2 = GetRT();
        ret += t2 - t1;
        printf("cost: %lld nanosec\n", (t2 - t1));
	}

	printf("\n%d %ld", iter, MEM_PGCOUNT);
	    printf("\nTotal Cost : %lld nanosec\n", ret);

	return 0;
}
