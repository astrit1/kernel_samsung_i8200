#define KCODE_CHECK(xname)     if (CR_KCODE_##xname != kallsyms_lookup_name(#xname))         return -EINVAL;

#define KDATA_CHECK(xname)     if (CR_KDATA_##xname != kallsyms_lookup_name(#xname))         return -EINVAL;
KCODE_CHECK(__kuser_cmpxchg)
KCODE_CHECK(__kuser_helper_start)
KCODE_CHECK(arch_pick_mmap_layout)
KCODE_CHECK(arch_unmap_area)
KCODE_CHECK(attach_pid)
KCODE_CHECK(change_pid)
KCODE_CHECK(copy_fs_struct)
KCODE_CHECK(copy_siginfo_to_user)
KCODE_CHECK(detach_pid)
KCODE_CHECK(do_pipe_flags)
KCODE_CHECK(do_sigaction)
KCODE_CHECK(do_sigaltstack)
KCODE_CHECK(expand_files)
KCODE_CHECK(find_task_by_pid_ns)
KCODE_CHECK(free_fs_struct)
KCODE_CHECK(free_pid)
KCODE_CHECK(get_dumpable)
KCODE_CHECK(group_send_sig_info)
KCODE_CHECK(groups_search)
KCODE_CHECK(pipe_fcntl)
KCODE_CHECK(set_dumpable)
KCODE_CHECK(set_fs_pwd)
KCODE_CHECK(sys_dup2)
KCODE_CHECK(sys_ftruncate)
KCODE_CHECK(sys_link)
KCODE_CHECK(sys_lseek)
KCODE_CHECK(sys_mprotect)
KCODE_CHECK(sys_mremap)
KCODE_CHECK(sys_munmap)
KCODE_CHECK(sys_prctl)
KCODE_CHECK(sys_setitimer)
KDATA_CHECK(anon_pipe_buf_ops)
KDATA_CHECK(pid_hash)
KDATA_CHECK(pidhash_shift)
KDATA_CHECK(ramfs_file_operations)
KDATA_CHECK(shmem_file_operations)
KDATA_CHECK(suid_dumpable)
KDATA_CHECK(tasklist_lock)
