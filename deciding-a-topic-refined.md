## Large Pages Problem
Breaking of 2Mb pages into smaller pages , because of >60% address not getting used.
> - TODO Ask from Prof. He told something about this problem, and it's not yet in mainline kernel.

## Better ways to achieve page compression in linux 
1. existing features in linux: **zram**
2. zswap is experimental - both zram and zswap are hacky in nature. No real runtime compression support.
3. Figure out why compression is yet to develop in linux.
4. Other popular OS like MacOS has compression enabled by default from several years.
   Refer - https://www.kernel.org/doc/html/latest/admin-guide/blockdev/zram.html
   Find - Windows / BSD / MacOS / Darwin -
5. Deliverable - On the Fly compression within the in-memory data structures, a strategy to select which pages to compress and
   which ones to keep uncompressed.
6. Future Scope - Abstraction of compression with a pluggable compression algorithm
7. Advantage - Aligned to assignment 2, will gives good knowledge of code in core areas of linux kernel
8. Complexity: High
9. Learning Curve : Very High 
10. Downsides:
    1. Learning and implementing compression algos may be a good scope for this course
    2. This may be  core problem of linux, should have been discussed 100s of times in community, still not a feature. Must 
        be strong reasons for this.
    
## Smarter, more responsive proactive OOM Killer focusing on user-space programs
1. Complexity: Very High
2. Learning Curve: High
3. Related Projects:
    1. https://github.com/facebookincubator/oomd
    2. https://github.com/rfjakob/earlyoom     
4. Deliverable -oom killing strategy -inputs - laggy from Desktop environment, latency , framedrops 
5. Read-> Soft threshold, hard threashold inside kernel
6. Advantage: A algorithm design 
7. Downsides - 
   1. The fb oomd offers a way to write your logic as plugin, then why not go with that.
   2. This is not a core kernel thing, more a no so important for the kernel working. 


## Distributed systems under linux - Draft
1. Complexity: Very High
2. Learning Curve: Very High
3. Problem - Study how the distributed system is managed in platforms like kubernetes and study the effect of scalability, memory managements, process isolation etc and possibilities of improvements in that area.
4. Read-> concepts of cgroups, namespace in linux
5. Advantage: Covers core components of linux


## Open Questions
> TODO Which version to use? mainline kernel? 


