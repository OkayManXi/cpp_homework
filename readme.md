# 环境要求
1. ubuntu 16.04
2. gcc 5.4.0
3. cmake 2.8.3

# 编译
```
mkdir build
cd build
cmake ..
make -j4
```
# 运行
```
cd build
./Beverage_dispensers
```
# 程序说明
1. 基于c++11标准
2. main.cpp为主程序,include和src文件夹分别是头文件和源文件
3. 主要设计了drink类实现自动售货机中的饮料、cmachine类实现了自动售货机的设计、account类实现了投币金额的计算、customer类完成了顾客和supplier类实现了厂商上货
4. global.h中完成了全局参数的定义，sleep.h实现了时间延迟