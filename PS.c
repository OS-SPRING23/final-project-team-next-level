#include <linux/kernel.h>	
#include <linux/syscalls.h>
	
	
	
SYSCALL_DEFINE2(PS, int, a, char*, buff)
{
	
	printk("\n[ICECREAM SHOP]: Customer[%d]:%s",a,buff);
	return 0;
	
}
