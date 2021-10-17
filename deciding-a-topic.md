# Disclaimer: 
I have never done any research in the past, neither have read papers.
I have read papers assigned in OS Theory class. 
Most of the topics listed may not even qualify to be a research topic.


## Smarter, more responsive proactive OOM Killer built natively in linux
1. Complexity: Medium
2. Learning Curve: Medium
3. Related Projects: 
   1. https://github.com/facebookincubator/oomd
   2. https://github.com/rfjakob/earlyoom
inputs - laggy from Desktop environment, latency , framedrops
   3. Deliverable -oom killing paper 
Read-> Soft threshold, hard threashold

## better Memory compression in RAM - can be aligned to assignment2
1. existing features in linux: **zram**
3. zswap - experimental
both are hacky in nature. No real runtime compression support.
4. Figure out why compression is yet to develop in linux.
5. Other popular OS like MacOS has compression enabled by default from several years.
Refer - https://www.kernel.org/doc/html/latest/admin-guide/blockdev/zram.html
Find - Windows / BSD / MacOS / Darwin -  
Deliver - On the Fly -
MLU - compress - 
- 

## A study of LXC Containers and how they relate/replace virtualization.
## A study of LXC containers vs Docker containers - Differences/Use-cases
1. Complexity: Medium
2. Learning Curve: High
3. Related Projects:
    1. https://linuxcontainers.org/lxc/introduction/


## Some in Desktop Environments maybe in KDE, or Display Server
Didn't find anything research level in desktop environments.
Maybe exploring [Wayland](https://en.wikipedia.org/wiki/Wayland_(display_server_protocol)) could fetch something.

## A comparison study of windows like package-managers in linux - appimages, snaps, flatpaks
1. Complex: Medium
2. Learning curve: Medium
3. Reference Projects:
   1. 
4. One-liner: A caching layer supporting large data to be used user-applications, use-cases like central auth.

## Deadlock detection tool with static code parsing for linux
A parser with specifc ruleset for linux code-base for possible deadlock. 
1. Complex: Medium
2. Learning curve: Medium
3. Reference Projects:

## Continuation of research pFSCK  - https://github.com/RutgersCSSystems/pFSCK 
1. Complex: Very High
2. Learning curve: High
- Increasing file system support - maybe XFS, zfs, btrfs
- Vault Conference

##  A application level cache (persistent key value store) optimized for NVM     
1. Complex: High 
2. Learning curve: High
3. Related Papers:
   1. [Hardware/software cooperative caching for hybrid DRAM/NVM memory architectures](https://dl.acm.org/doi/abs/10.1145/3079079.3079089) 
   2. [HiKV: A Hybrid Index Key-Value Store for DRAM-NVM Memory Systems](https://www.usenix.org/conference/atc17/technical-sessions/presentation/xia)
4. One-liner: A caching layer supporting large data to be used user-applications, use-cases like central auth.  


## Reactive programming - Non Blocking IO - Mechanism implementation in linux - 
1. Complex: High
2. Learning curve: High
3. Reference Links - https://www.reactivemanifesto.org/
4. Finding reasons to adopt reactive programming in linnux, and which parts will be benefitted the most.

## SAGA - Grid Computing - Native bindings for linux 
[SAGA: A Simple API for Grid Applications.
High-level application programming on the Grid](https://d1wqtxts1xzle7.cloudfront.net/40240373/01Goodale.pdf?1448126709=&response-content-disposition=inline%3B+filename%3DSAGA_A_Simple_API_for_Grid_Applications.pdf&Expires=1634255346&Signature=DZpif~hZb4ucqMgnZ7zgrK85Ff8Y9vfd968~x15BLr2ww-JR8~S1ep6j6XbX7WDBntfwrd-wnh6lo57G2WXcyH-ZhX6xGzWxAN-5-YAevfCwRAgdI3bOG~jje1ZbSDr-DfMCKxI~PIcBUkXW7m2JDcjvvhlBzdwWppXWh6BLT2wqd3ACWl7on4RZ0gcJXBkLpy47MWaBoFo~tt5PIs6b5oGOvhXDE63Ak4v7Di3iCFIIbRN8Rk4xlDvM--M0C25~1VBq9YvkR7BQlGadH5~z2UA5WpuWZzsuayq-7iMERqfzb6tsYdwnKIcoVWWRoWUUKn5q7dcpBnzSk6LoW3WHVw__&Key-Pair-Id=APKAJLOHF5GGSLRBV4ZA)
Porting an existing implementation/ making support in linux kernel


## Something realted to FPGA Devices
[pvFPGA: paravirtualising an FPGA-based hardware accelerator towards general purpose computing](https://dl.acm.org/doi/10.1504/IJHPCN.2017.084246)

[FPGA-based Data Partitioning ](https://dl.acm.org/doi/10.1145/3035918.3035946)

## HPC - JVM JDK 
[Open JDK Meets Xeon Phi: A Comprehensive Study of Java HPC on Intel Many-Core Architecture](http://ieeexplore.ieee.org/abstract/document/7349907/)
Complex: High 
Learning curve: Medium-High

## multikernel
[The multikernel: a new OS architecture for scalable multicore systems](https://dl.acm.org/doi/10.1145/1629575.1629579)



## Networking 
Split tunneling enhancement in OpenVPN


## Feasibility to port anbox to linux native
https://github.com/anbox/anbox
Not research driven - but a standard project.


## Replacing legacy DNS stack with encrypted DNS (Network Manager)
Currently linux distros comes pre-packed with plain text DNS support.
with recent evolution of protocols DNS-over-HTTps, dns-over-tls, dnscrypt linux should promote encrypted DNS by offering support in network stack.


## Linux Configuration management with distributed key-value store for data centers
A distributed key-value store which contains configuration for linux like vm.swapiness vm.blah 
this configuration is propogated to all operating systems in the data centers, in a reliable manner with feedback.


## A better Partitioning strategy in 
Reference : https://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&arnumber=8327002


## Increasing security in Malloc - 
Reference : https://github.com/GrapheneOS/hardened_malloc

## optimization with Copy on write in File system 
btrfs

## Compression in file system - zfs

## better resource utilization and mangement with cgroup2- optimization?

## snapshot 

## Fine Grained locking in mm


## Large Pages Problem 
Breaking of 2Mb pages into smaller pages , because of >60% address not getting used.  


## Which version to use??
mainline kernel?

## De-depulication -
Concurrency - FS -Golang
