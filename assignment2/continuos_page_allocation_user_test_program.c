//
// Created by kartikmodi on 10/1/21.
//
/* Getting page size information
 * shell -> getconf PAGESIZE
 * or check in file /proc/1/smaps
 * usually 4KiB or 4096B
 * sysconf(_SC_PAGE_SIZE).
 */
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

#define handle_error(msg) fprintf(stderr, "\n%s ::  %s \n",msg, strerror(errno)); exit(EXIT_FAILURE);
#define handle_error1(msg, arg1) fprintf(stderr, "\n%s ::  %s %s \n",msg, strerror(errno),arg1); exit(EXIT_FAILURE);

int main() {
    clock_t total_elapsed_time = 0;
    long int pagesize = sysconf(_SC_PAGE_SIZE);

    printf("The size of pagesize in current system is %ld\n", pagesize);
    printf("The size of pagesize in current system is %ld\n", sizeof(void));


    //  For fd passing as -1
    //  The fd argument is ignored; however, some  implementations require fd to be -1 if MAP_ANONYMOUS (or MAP_ANON) is
    //   specified, and portable applications should  ensure  this.
    size_t length = 2UL * 1024 * 1024 * 1024; // 2GB  size
    clock_t *clocks_time_sec = malloc(sizeof(clock_t) * length / 4);
    void *addr = mmap(NULL, length, PROT_WRITE,
                      MAP_ANONYMOUS | MAP_SHARED, -1, 0);
    if (addr == MAP_FAILED) { handle_error("map failed"); }


    unsigned char *virtualAddress = (unsigned char *) addr;

//    size_t iteration_on_every_4th_byte = length / (4* 1024);
    for (long i = 0; i < length; i+=4*1024) {
        virtualAddress[i] = 'a';
        printf("value of i %ld\n",i);
    }

    printf("\n program completed");
}