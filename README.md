An embedded project be in common use which has about driver,lower_app and upper_app,you can also add an sever_app for those who want to control your Embedded development board.

## How to use this project on your board?
1. modify the gpio number in file 'driver/led/led_drv.c' and 'driver/motor/gpio_drv.c'
2. modify Makefile in floder driver/ , change the 'KERN_DIR =  Linux-4.9.88# 板子所用内核源码的目录' to your own linux kernel
3. add 'arm-linux-gcc' as your global path
4.type 'make' , copy 'app_demo' on your board and run
5.use Qt to open 'upper_app' and run
## 完整协议
![image](https://github.com/reallyblind/Common_Embedded/assets/101650178/67bd4c8a-9d60-4df9-ab8e-abdeb0dd0dd8)
## 数据格式
![image](https://github.com/reallyblind/Common_Embedded/assets/101650178/c902526b-b8a0-45a7-8c9d-1a2048fb196f)
## 数据示例
![image](https://github.com/reallyblind/Common_Embedded/assets/101650178/bea31bf9-f722-4812-b168-639a0855660a)

## 当前实现功能
![image](https://github.com/reallyblind/Common_Embedded/assets/101650178/d226c2ca-6bba-4a0a-b3b3-4cfd84ba3299)






