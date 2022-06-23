#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H
/* Added code begin */
typedef int pid_t;
struct lock file_lock;
void syscall_init (void);
void exit(int);
/* Added code end */
#endif /* userprog/syscall.h */
