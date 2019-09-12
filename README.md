# 基本信息
MagePad是一个适配Dan13 LaunchPad 工程的硬件工程。  
  
PCB绘制使用的软件为：SprintLayout  
单片机使用的是：ATMEGA 32U4  
单片机编程使用的是：Arduino
# 文件内容概述
现有两个分支：主分支Master和副分支NormalLight
## 主分支
主分支有两个.lay文件，分别是主控制器的PCB和键盘PCB。  
在Keyboard_test中的文件夹存放Arduino代码。 
  
*主分支的代码为开发阶段，详细见开发笔记*
## NormalLight分支
该分支存放稳定版本的代码。
Keyboard_test：  
实现基本按键功能和发光功能。  
Keyboard_test_KeyOnly：  
只实现基本按键功能。

# 开发笔记
目前正在开发按键可编程发光。  
