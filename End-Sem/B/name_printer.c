// CED17I038
// Sreepathy Jayanand
#include<linux/init.h>
#include<linux/module.h>
#include<linux/fs.h>



int int_pass_init(void) {
	printk(KERN_ALERT "Name : Sreepathy Jayanand\n");	
	return 0;
}

void int_pass_exit(void) {
	printk(KERN_ALERT "Inside %s function\n", __FUNCTION__);
	
}

module_init(int_pass_init);
module_exit(int_pass_exit);
