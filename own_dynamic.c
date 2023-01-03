#include<linux/module.h>
#include<linux/types.h>
#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/fs.h>

dev_t my_dri=0;

static int __init dynamic_own(void)
{
	if(alloc_chrdev_region(&my_dri,0,1,"priya")<0)
		printk("driver not register");
	printk("major=%d  minor=%d",MAJOR(my_dri),MINOR(my_dri));
	return 0;
}

void my_exit(void)
{
	unregister_chrdev_region(my_dri,1);
	printk(KERN_INFO"existing from dynamic loading");
}

MODULE_VERSION("1:0.0");
MODULE_LICENSE("GPL");

module_init(dynamic_own);
module_exit(my_exit);


