An embedded project be in common use which has about driver,lower_app and upper_app,you can also add an sever_app for those who want to control your Embedded development board.
How to use this project on your board?
1. modify the gpio number in file 'driver/led/led_drv.c' and 'driver/motor/gpio_drv.c'
2. modify Makefile in floder driver/ , change the 'KERN_DIR =  Linux-4.9.88# 板子所用内核源码的目录' to your own linux kernel
3. add arm-linux-gcc to your path
