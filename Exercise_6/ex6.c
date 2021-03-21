#include<linux/init.h>
#include<linux/module.h>
#include<linux/fs.h>
#include<linux/moduleparam.h>

int var = 1;
module_param(var, int, 0);
int ex6_open (struct inode *pinode, struct file *pfile) {
	printk(KERN_ALERT "Inside %s function", __FUNCTION__);
	return 0;
}

ssize_t ex6_read (struct file *pfile, char __user *buffer, size_t length, loff_t *offset) {
	printk(KERN_ALERT "Inside %s function", __FUNCTION__);
	return 0;
}
ssize_t ex6_write (struct file *pfile, const char __user *buffer, size_t length, loff_t *offset) {
	printk(KERN_ALERT "Inside %s function", __FUNCTION__);
	return length;
}

int ex6_close (struct inode *pinode, struct file *pfile) {
	printk(KERN_ALERT "Inside %s function", __FUNCTION__);
	return 0;
}

struct file_operations ex6_data_structure = {
	.owner = THIS_MODULE,
	.open = ex6_open,
	.read = ex6_read,
	.write = ex6_write, 
	.release = ex6_close,
};

int ex6_init(void) {
	printk(KERN_ALERT "Inside %s function", __FUNCTION__);
	printk(KERN_ALERT "Passed value : %d", var);
	register_chrdev(11, "Ex 6 DD", &ex6_data_structure);
	return 0;
}

void ex6_exit(void) {
	printk(KERN_ALERT "Inside %s function", __FUNCTION__);
	unregister_chrdev(11, "Ex 6 DD");
}

module_init(ex6_init);
module_exit(ex6_exit);