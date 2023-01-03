#obj-m+=module_param.o
#obj-m+=Second_device_driver.o
#obj-m+=First_device_driver.o
# obj-m is to build as module 
#obj-y is to build as statically


#obj-m :=dynamic_load.o

#obj-m :=kernel_thread.o

#obj-m :=jiffies.o

# it refer the kernel build scripts form below path and build  the driver


#obj-m :=own_static.o

#obj-m :=hello.o


obj-m :=own_dynamic.o

KDIR = /lib/modules/$(shell uname -r)/build

all:
	make -C $(KDIR)  M=$(shell pwd) modules
clean:
	make -C $(KDIR)  M=$(shell pwd) clean
