#include<linux/module.h>
static int __init my_own(void)
{
	printk(KERN_INFO"hai hello pinky");
	return 0;
}

void my_exit(void)
{
	printk(KERN_INFO"bye pinky");
}

MODULE_LICENSE("GPL");
MODULE_VERSION("1:0.0");

module_init(my_own);
module_exit(my_exit);
