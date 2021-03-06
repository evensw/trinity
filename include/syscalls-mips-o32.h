#pragma once

/* Syscalls from  arch/mips/kernel/scall32-o32.S */
struct syscalltable syscalls_mips[] = {
		{ .entry = &syscall_ni_syscall },	/* 4000 */
/*		{ .entry = &syscall_syscall },		 4000 */
		{ .entry = &syscall_exit },
		{ .entry = &syscall_fork },
		{ .entry = &syscall_read },
		{ .entry = &syscall_write },
		{ .entry = &syscall_open },		/* 4005 */
		{ .entry = &syscall_close },
		{ .entry = &syscall_waitpid },
		{ .entry = &syscall_creat },
		{ .entry = &syscall_link },
		{ .entry = &syscall_unlink },		/* 4010 */
		{ .entry = &syscall_execve },
		{ .entry = &syscall_chdir },
		{ .entry = &syscall_time },
		{ .entry = &syscall_mknod },
		{ .entry = &syscall_chmod },		/* 4015 */
		{ .entry = &syscall_lchown },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_ni_syscall },	/* was sys_stat */
		{ .entry = &syscall_lseek },
		{ .entry = &syscall_getpid },		/* 4020 */
		{ .entry = &syscall_mount },
		{ .entry = &syscall_oldumount },
		{ .entry = &syscall_setuid },
		{ .entry = &syscall_getuid },
		{ .entry = &syscall_stime },		/* 4025 */
		{ .entry = &syscall_ptrace },
		{ .entry = &syscall_alarm },
		{ .entry = &syscall_ni_syscall },	/* was sys_fstat */
		{ .entry = &syscall_pause },
		{ .entry = &syscall_utime },		/* 4030 */
		{ .entry = &syscall_ni_syscall },		/* was sys_stty */
		{ .entry = &syscall_ni_syscall },		/* was sys_getty */
		{ .entry = &syscall_access },
		{ .entry = &syscall_nice },
		{ .entry = &syscall_ni_syscall },	/* 4035 */
		{ .entry = &syscall_sync },
		{ .entry = &syscall_kill },
		{ .entry = &syscall_rename },
		{ .entry = &syscall_mkdir },
		{ .entry = &syscall_rmdir },		/* 4040 */
		{ .entry = &syscall_dup },
		{ .entry = &syscall_pipe },
		{ .entry = &syscall_times },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_brk },		/* 4045 */
		{ .entry = &syscall_setgid },
		{ .entry = &syscall_getgid },
		{ .entry = &syscall_ni_syscall },	/* was signal(2) */
		{ .entry = &syscall_geteuid },
		{ .entry = &syscall_getegid },		/* 4050 */
		{ .entry = &syscall_acct },
		{ .entry = &syscall_umount },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_ioctl },
		{ .entry = &syscall_fcntl },		/* 4055 */
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_setpgid },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_olduname },
		{ .entry = &syscall_umask },		/* 4060 */
		{ .entry = &syscall_chroot },
		{ .entry = &syscall_ustat },
		{ .entry = &syscall_dup2 },
		{ .entry = &syscall_getppid },
		{ .entry = &syscall_getpgrp },		/* 4065 */
		{ .entry = &syscall_setsid },
		{ .entry = &syscall_sigaction },
		{ .entry = &syscall_sgetmask },
		{ .entry = &syscall_ssetmask },
		{ .entry = &syscall_setreuid },		/* 4070 */
		{ .entry = &syscall_setregid },
		{ .entry = &syscall_sigsuspend },
		{ .entry = &syscall_sigpending },
		{ .entry = &syscall_sethostname },
		{ .entry = &syscall_setrlimit },	/* 4075 */
		{ .entry = &syscall_getrlimit },
		{ .entry = &syscall_getrusage },
		{ .entry = &syscall_gettimeofday },
		{ .entry = &syscall_settimeofday },
		{ .entry = &syscall_getgroups },	/* 4080 */
		{ .entry = &syscall_setgroups },
		{ .entry = &syscall_ni_syscall },	/* old_select */
		{ .entry = &syscall_symlink },
		{ .entry = &syscall_ni_syscall },	/* was sys_lstat */
		{ .entry = &syscall_readlink },		/* 4085 */
		{ .entry = &syscall_uselib },
		{ .entry = &syscall_swapon },
		{ .entry = &syscall_reboot },
		{ .entry = &syscall_ni_syscall },
/*		{ .entry = &syscall_old_readdir },      */
/*		{ .entry = &syscall_mips_mmap },	   4090 */
		{ .entry = &syscall_ni_syscall },	/* 4090 */
		{ .entry = &syscall_munmap },
		{ .entry = &syscall_truncate },
		{ .entry = &syscall_ftruncate },
		{ .entry = &syscall_fchmod },
		{ .entry = &syscall_fchown },		/* 4095 */
		{ .entry = &syscall_getpriority },
		{ .entry = &syscall_setpriority },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_statfs },
		{ .entry = &syscall_fstatfs },		/* 4100 */
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_socketcall },
		{ .entry = &syscall_syslog },
		{ .entry = &syscall_setitimer },
		{ .entry = &syscall_getitimer },	/* 4105 */
		{ .entry = &syscall_newstat },
		{ .entry = &syscall_newlstat },
		{ .entry = &syscall_newfstat },
		{ .entry = &syscall_uname },
		{ .entry = &syscall_ni_syscall },	/* 4110  was ioperm(2) */
		{ .entry = &syscall_vhangup },
		{ .entry = &syscall_ni_syscall },	/* was sys_idle() */
		{ .entry = &syscall_ni_syscall },	/* was sys_vm86 */
		{ .entry = &syscall_wait4 },
		{ .entry = &syscall_swapoff },		/* 4115 */
		{ .entry = &syscall_sysinfo },
		{ .entry = &syscall_ipc },
		{ .entry = &syscall_fsync },
		{ .entry = &syscall_sigreturn },
		{ .entry = &syscall_clone },		/* 4120 */
		{ .entry = &syscall_setdomainname },
		{ .entry = &syscall_newuname },
		{ .entry = &syscall_ni_syscall },	/* sys_modify_ldt */
		{ .entry = &syscall_adjtimex },
		{ .entry = &syscall_mprotect },		/* 4125 */
		{ .entry = &syscall_sigprocmask },
		{ .entry = &syscall_ni_syscall },	/* was sys_create_module */
		{ .entry = &syscall_init_module },
		{ .entry = &syscall_delete_module },
		{ .entry = &syscall_ni_syscall },	/* 4130  was sys_get_kernel_syms */
		{ .entry = &syscall_quotactl },
		{ .entry = &syscall_getpgid },
		{ .entry = &syscall_fchdir },
		{ .entry = &syscall_bdflush },
		{ .entry = &syscall_sysfs },		/* 4135 */
		{ .entry = &syscall_personality },
		{ .entry = &syscall_ni_syscall },		/* reserved for afs_syscall */
		{ .entry = &syscall_setfsuid },
		{ .entry = &syscall_setfsgid },
		{ .entry = &syscall_llseek },		/* 4140 */
		{ .entry = &syscall_getdents },
		{ .entry = &syscall_select },
		{ .entry = &syscall_flock },
		{ .entry = &syscall_msync },
		{ .entry = &syscall_readv },		/* 4145 */
		{ .entry = &syscall_writev },
/*		{ .entry = &syscall_cacheflush },	*/
		{ .entry = &syscall_ni_syscall },
/*		{ .entry = &syscall_cachectl },		*/
		{ .entry = &syscall_ni_syscall },
/*		{ .entry = &syscall_sysmips },		*/
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_ni_syscall },	/* 4150 */
		{ .entry = &syscall_getsid },
		{ .entry = &syscall_fdatasync },
		{ .entry = &syscall_sysctl },
		{ .entry = &syscall_mlock },
		{ .entry = &syscall_munlock },		/* 4155 */
		{ .entry = &syscall_mlockall },
		{ .entry = &syscall_munlockall },
		{ .entry = &syscall_sched_setparam },
		{ .entry = &syscall_sched_getparam },
		{ .entry = &syscall_sched_setscheduler }, /* 4160 */
		{ .entry = &syscall_sched_getscheduler },
		{ .entry = &syscall_sched_yield },
		{ .entry = &syscall_sched_get_priority_max },
		{ .entry = &syscall_sched_get_priority_min },
		{ .entry = &syscall_sched_rr_get_interval }, /* 4165 */
		{ .entry = &syscall_nanosleep },
		{ .entry = &syscall_mremap },
		{ .entry = &syscall_accept },
		{ .entry = &syscall_bind },
		{ .entry = &syscall_connect },		/* 4170 */
		{ .entry = &syscall_getpeername },
		{ .entry = &syscall_getsockname },
		{ .entry = &syscall_getsockopt },
		{ .entry = &syscall_listen },
		{ .entry = &syscall_recv },		/* 4175 */
		{ .entry = &syscall_recvfrom },
		{ .entry = &syscall_recvmsg },
		{ .entry = &syscall_send },
		{ .entry = &syscall_sendmsg },
		{ .entry = &syscall_sendto },		/* 4180 */
		{ .entry = &syscall_setsockopt },
		{ .entry = &syscall_shutdown },
		{ .entry = &syscall_socket },
		{ .entry = &syscall_socketpair },
		{ .entry = &syscall_setresuid },	/* 4185 */
		{ .entry = &syscall_getresuid },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_poll },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_setresgid },	/* 4190 */
		{ .entry = &syscall_getresgid },
		{ .entry = &syscall_prctl },
		{ .entry = &syscall_rt_sigreturn },
		{ .entry = &syscall_rt_sigaction },
		{ .entry = &syscall_rt_sigprocmask },	/* 4195 */
		{ .entry = &syscall_rt_sigpending },
		{ .entry = &syscall_rt_sigtimedwait },
		{ .entry = &syscall_rt_sigqueueinfo },
		{ .entry = &syscall_rt_sigsuspend },
		{ .entry = &syscall_pread64 },		/* 4200 */
		{ .entry = &syscall_pwrite64 },
		{ .entry = &syscall_chown },
		{ .entry = &syscall_getcwd },
		{ .entry = &syscall_capget },
		{ .entry = &syscall_capset },		/* 4205 */
		{ .entry = &syscall_sigaltstack },
		{ .entry = &syscall_sendfile },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_ni_syscall },
/*		{ .entry = &syscall_mips_mmap2 },	 4210 */
		{ .entry = &syscall_ni_syscall },	/* 4210 */
		{ .entry = &syscall_truncate64 },
		{ .entry = &syscall_ftruncate64 },
		{ .entry = &syscall_stat64 },
		{ .entry = &syscall_lstat64 },
		{ .entry = &syscall_fstat64 },		/* 4215 */
		{ .entry = &syscall_pivot_root },
		{ .entry = &syscall_mincore },
		{ .entry = &syscall_madvise },
		{ .entry = &syscall_getdents64 },
/*		{ .entry = &syscall_fcntl64 },		 4220 */
		{ .entry = &syscall_ni_syscall },	/* 4220 */
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_gettid },
		{ .entry = &syscall_readahead },
		{ .entry = &syscall_setxattr },
		{ .entry = &syscall_lsetxattr },	/* 4225 */
		{ .entry = &syscall_fsetxattr },
		{ .entry = &syscall_getxattr },
		{ .entry = &syscall_lgetxattr },
		{ .entry = &syscall_fgetxattr },
		{ .entry = &syscall_listxattr },	/* 4230 */
		{ .entry = &syscall_llistxattr },
		{ .entry = &syscall_flistxattr },
		{ .entry = &syscall_removexattr },
		{ .entry = &syscall_lremovexattr },
		{ .entry = &syscall_fremovexattr },	/* 4235 */
		{ .entry = &syscall_tkill },
		{ .entry = &syscall_sendfile64 },
		{ .entry = &syscall_futex },
		{ .entry = &syscall_sched_setaffinity },
		{ .entry = &syscall_sched_getaffinity },/* 4240 */
		{ .entry = &syscall_io_setup },
		{ .entry = &syscall_io_destroy },
		{ .entry = &syscall_io_getevents },
		{ .entry = &syscall_io_submit },
		{ .entry = &syscall_io_cancel },	/* 4245 */
		{ .entry = &syscall_exit_group },
		{ .entry = &syscall_lookup_dcookie },
		{ .entry = &syscall_epoll_create },
		{ .entry = &syscall_epoll_ctl },
		{ .entry = &syscall_epoll_wait },	/* 4250 */
		{ .entry = &syscall_remap_file_pages },
		{ .entry = &syscall_set_tid_address },
		{ .entry = &syscall_restart_syscall },
		{ .entry = &syscall_fadvise64_64 },
		{ .entry = &syscall_statfs64 },		/* 4255 */
		{ .entry = &syscall_fstatfs64 },
		{ .entry = &syscall_timer_create },
		{ .entry = &syscall_timer_settime },
		{ .entry = &syscall_timer_gettime },
		{ .entry = &syscall_timer_getoverrun },	/* 4260 */
		{ .entry = &syscall_timer_delete },
		{ .entry = &syscall_clock_settime },
		{ .entry = &syscall_clock_gettime },
		{ .entry = &syscall_clock_getres },
		{ .entry = &syscall_clock_nanosleep },	/* 4265 */
		{ .entry = &syscall_tgkill },
		{ .entry = &syscall_utimes },
		{ .entry = &syscall_mbind },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_ni_syscall },	/* 4270 */
		{ .entry = &syscall_mq_open },
		{ .entry = &syscall_mq_unlink },
		{ .entry = &syscall_mq_timedsend },
		{ .entry = &syscall_mq_timedreceive },
		{ .entry = &syscall_mq_notify },	/* 4275 */
		{ .entry = &syscall_mq_getsetattr },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_waitid },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_add_key },		/* 4280 */
		{ .entry = &syscall_request_key },
		{ .entry = &syscall_keyctl },
		{ .entry = &syscall_ni_syscall },	/* obsolete "set_thread_area" syscall */
		{ .entry = &syscall_inotify_init },
		{ .entry = &syscall_inotify_add_watch },/* 4285 */
		{ .entry = &syscall_inotify_rm_watch },
		{ .entry = &syscall_migrate_pages },
		{ .entry = &syscall_openat },
		{ .entry = &syscall_mkdirat },
		{ .entry = &syscall_mknodat },		/* 4290 */
		{ .entry = &syscall_fchownat },
		{ .entry = &syscall_futimesat },
		{ .entry = &syscall_fstatat64 },
		{ .entry = &syscall_unlinkat },
		{ .entry = &syscall_renameat },		/* 4295 */
		{ .entry = &syscall_linkat },
		{ .entry = &syscall_symlinkat },
		{ .entry = &syscall_readlinkat },
		{ .entry = &syscall_fchmodat },
		{ .entry = &syscall_faccessat },	/* 4300 */
		{ .entry = &syscall_pselect6 },
		{ .entry = &syscall_ppoll },
		{ .entry = &syscall_unshare },
		{ .entry = &syscall_splice },
		{ .entry = &syscall_sync_file_range },	/* 4305 */
		{ .entry = &syscall_tee },
		{ .entry = &syscall_vmsplice },
		{ .entry = &syscall_move_pages },
		{ .entry = &syscall_set_robust_list },
		{ .entry = &syscall_get_robust_list },	/* 4310 */
/* vserver */	{ .entry = &syscall_kexec_load },
		{ .entry = &syscall_getcpu },
		{ .entry = &syscall_epoll_pwait },
		{ .entry = &syscall_ioprio_set },
		{ .entry = &syscall_ioprio_get },	/* 4315 */
		{ .entry = &syscall_utimensat },
		{ .entry = &syscall_signalfd },
		{ .entry = &syscall_ni_syscall },
		{ .entry = &syscall_eventfd },
		{ .entry = &syscall_fallocate },	/* 4320 */
		{ .entry = &syscall_timerfd_create },
		{ .entry = &syscall_timerfd_gettime },
		{ .entry = &syscall_timerfd_settime },
		{ .entry = &syscall_signalfd4 },
		{ .entry = &syscall_eventfd2 },		/* 4325 */
		{ .entry = &syscall_epoll_create1 },
		{ .entry = &syscall_dup3 },
		{ .entry = &syscall_pipe2 },
		{ .entry = &syscall_inotify_init1 },
		{ .entry = &syscall_preadv },		/* 4330 */
		{ .entry = &syscall_pwritev },
		{ .entry = &syscall_rt_tgsigqueueinfo },
		{ .entry = &syscall_perf_event_open },
		{ .entry = &syscall_accept4 },
		{ .entry = &syscall_recvmmsg },		/* 4335 */
		{ .entry = &syscall_accept4 },
		{ .entry = &syscall_fanotify_init },
		{ .entry = &syscall_fanotify_mark },
		{ .entry = &syscall_prlimit64 },
		{ .entry = &syscall_name_to_handle_at },
		{ .entry = &syscall_open_by_handle_at },/* 4340 */
		{ .entry = &syscall_clock_adjtime },
		{ .entry = &syscall_syncfs },
		{ .entry = &syscall_sendmmsg },
		{ .entry = &syscall_setns },
		{ .entry = &syscall_process_vm_readv },	/* 4345 */
		{ .entry = &syscall_process_vm_writev },
		{ .entry = &syscall_kcmp },
		{ .entry = &syscall_finit_module },
		{ .entry = &syscall_sched_setattr },
		{ .entry = &syscall_sched_getattr },	/* 4350 */
		{ .entry = &syscall_renameat2 },
		{ .entry = &syscall_seccomp },
		{ .entry = &syscall_getrandom },
		{ .entry = &syscall_memfd_create },
#ifdef USE_BPF
		{ .entry = &syscall_bpf },		/* 4355 */
#else
		{ .entry = NULL },
#endif
		{ .entry = &syscall_execveat },
		{ .entry = &syscall_userfaultfd },
		{ .entry = &syscall_membarrier },
		{ .entry = &syscall_mlock2 },
		{ .entry = &syscall_copy_file_range },	/* 4360 */
		{ .entry = &syscall_preadv2 },
		{ .entry = &syscall_pwritev2 },
		{ .entry = &syscall_pkey_mprotect },
		{ .entry = &syscall_pkey_alloc },
		{ .entry = &syscall_pkey_free },	/* 4365 */
		{ .entry = &syscall_statx },
};
