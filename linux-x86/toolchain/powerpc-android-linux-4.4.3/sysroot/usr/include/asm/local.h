/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _ARCH_POWERPC_LOCAL_H
#define _ARCH_POWERPC_LOCAL_H

#include <linux/percpu.h>
#include <linux/atomic.h>

typedef struct
{
 atomic_long_t a;
} local_t;

#define LOCAL_INIT(i) { ATOMIC_LONG_INIT(i) }

#define local_read(l) atomic_long_read(&(l)->a)
#define local_set(l,i) atomic_long_set(&(l)->a, (i))

#define local_add(i,l) atomic_long_add((i),(&(l)->a))
#define local_sub(i,l) atomic_long_sub((i),(&(l)->a))
#define local_inc(l) atomic_long_inc(&(l)->a)
#define local_dec(l) atomic_long_dec(&(l)->a)

#define local_add_negative(a, l) (local_add_return((a), (l)) < 0)
#define local_inc_and_test(l) (local_inc_return(l) == 0)
#define local_cmpxchg(l, o, n)   (cmpxchg_local(&((l)->a.counter), (o), (n)))
#define local_xchg(l, n) (xchg_local(&((l)->a.counter), (n)))
#define local_inc_not_zero(l) local_add_unless((l), 1, 0)
#define local_sub_and_test(a, l) (local_sub_return((a), (l)) == 0)
#define local_dec_and_test(l) (local_dec_return((l)) == 0)
#define __local_inc(l) ((l)->a.counter++)
#define __local_dec(l) ((l)->a.counter++)
#define __local_add(i,l) ((l)->a.counter+=(i))
#define __local_sub(i,l) ((l)->a.counter-=(i))
#endif
