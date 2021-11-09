# Team - BSK [In-order]
1. Bhavana - bvs17
2. Somesh - shm85
3. Kartik - km1449

# How we generated the patch from multiple commits - 
> git format-patch c81a77210fee917f40df440ab73b6a55a950e9a2^..ea50da2f15afaff58437fb59387133f1391538c4 --stdout > assignment_submission.patch

# Apply series of Patches - 
git am assignment_submission.patch

# Linux Version
> Stock 4.17 kenel
```shell
# SPDX-License-Identifier: GPL-2.0
VERSION = 4
PATCHLEVEL = 17
SUBLEVEL = 0
EXTRAVERSION =
NAME = Merciless Moray

```
# Part 1
We have added the patch [patch](part1/assignment_submission.patch)
The user benchmark program is [program](part2/a/test_mmap.c)

# Part 2 
## a
| Mmap Size | Stock Time (ns) | Extent Patched Time (ns) | Additional Overhead % | 
| ----| ----|----| ----| 
| 40KB | 225842 | 445728| 97 |
| 1GB | 6511221296 | 26239509693| 302| 
| 2GB | 15910880934| 77709252732| 388|

## b
We have tested on 1GB Memory allocation.

From [log](part2/b/1GB_extent_count.log) we have 
> [   71.458579] fallOS extent count 3372 
 as extent count. 

The total page faults in stock kernel would be 256 000
 
So, 256000 TLB entries are required to store all pages but with extent 3372 entries would be required in TLB for 100% assured coverage.
The 3372 count is based on sequential access pattern. See [user benchmark code](part2/a/test_mmap.c) 