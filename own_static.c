#include<linux/module.h>
#include<linux/types.h>
#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/fs.h>

dev_t my_dri=MKDEV(230,0);

static int __init static_own(void)
{
	register_chrdev_region(my_dri,1,"priya");
	printk("major=%d  minor=%d",MAJOR(my_dri),MINOR(my_dri));
	return 0;
}

void my_exit(void)
{
	unregister_chrdev_region(my_dri,1);
	printk(KERN_INFO"existing from static loading");
}

MODULE_VERSION("1:0.0");
MODULE_LICENSE("GPL");

module_init(static_own);
module_exit(my_exit);


