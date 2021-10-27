
2. task_struct and current_task usage -> global/how to filter for calling process? 
3. rbtree of extents -> insertion and usage -> refer doc -> balancing -> start/end
4. page_list -> ll in kernel -> specilized use
5. alloc of physical pages -> hook on alloc -> call our rbtree extent

**Phase 2 concerns -** 
1. Merging/spliting of extents ->
   1. evaluate merging/splutting at the event of physical page allocation
   2. background thread which periodically merges/splits 