## Super Pages Problem
Project title: Optimized SuperPages 
project members: Bhavana, Somesh Mahule, Kartik Modi
## Abstract of the problem, importance and relevance8
The super pages gives significant boost in performance and coverage of TLB. Since TLB is accessed directly by hardware
has be small and fast. With so limited entries, we are trying to optimize the promotion/demotion mechanisms. 
Currently, the demotion removes from entry from TLB of superpage, and when base pages are accessed they are cached again in TLB.
This slows down the speed, increases I/O as we may have removed pages which were active, and since we don't a dirty bit per base page, we are paging out all base pages of the superpage.   

## Approach to analyze the problem. relevant papers, existing applications or systems, open-source projects, to motivate the importance of the problem.
#### Approach 1
The expectation from the approach should be that base pages which are clean, 
should not get paged out (though we might consider discarding depending something else)
Figure a way to categorize base pages as active/inactive. TODO discuss with prof
#### Project - https://github.com/rice-systems/quicksilver

### Papers - 
https://www.cse.iitd.ernet.in/~sbansal/pubs/hawkeye.pdf
https://research.fb.com/wp-content/uploads/2019/09/Automated-Hot-Text-and-Huge-Pages-An-Easy-to-adopt-Solution-Towards-High-Performing-Services.pdf
https://www.usenix.org/system/files/conference/osdi16/osdi16-kwon.pdf
https://www.usenix.org/system/files/atc20-zhu-weixi_0.pdf

### Tools
#### Metric Tooling -    
* perf
* time
* strace
* /proc/meminfo
* free
#### Benchmark Tooling - 
* httpd
* postgres
* FFTW
* rocksDB  
Breaking of 2Mb pages into smaller pages , because of >60% address not getting used.

## deliverables at the end of the semester; this includes a possible solution to the problem, code demos, and a brief description of what evaluations you will use to evaluate your system
* A approach that better demote superpages avoiding unnecessary page-out
* A analysis report of above stated application benchmarks
* A code implementation git patch for the linux kernel 
* A project which shows how benchmarking was done, tools used, noted metrics, and analysis report. 