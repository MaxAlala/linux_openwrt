#include <linux/module.h>
#include <linux/version.h>
#include <linux/kmod.h>

#define DRV_NAME "example"

static int __init example_init(void)
{
	printk("hello example openwrt\n");
	return 0;
}

static void __exit example_exit(void)
{
	printk("hello example openwrt exit\n");
}

module_init(example_init);
module_exit(example_exit);

MODULE_AUTHOR("hello world");
MODULE_DESCRIPTION("example driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);
