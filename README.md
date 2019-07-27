# DFRobot_Sensor
这是一个实习生培训用最简单arduino库<br>

这里需要显示拍照图片，可以一张图片，可以多张图片（不要用SVG图）

![正反面svg效果图](https://github.com/ouki-wang/DFRobot_Sensor/raw/master/resources/images/SEN0245svg1.png)


## 产品链接（链接到英文商城）
    SKU：产品名称
   
## Table of Contents

* [Summary](#summary)
* [Installation](#installation)
* [Methods](#methods)
* [Compatibility](#compatibility)
* [History](#history)
* [Credits](#credits)

## Summary

这个库具备设置名字，设置年龄，读取名字，读取年龄功能

## Installation

To use this library, first download the library file, paste it into the \Arduino\libraries directory, then open the examples folder and run the demo in the folder.

## Methods

```C++
  /**
   * @brief 初始化函数
   * @return 返回0表示初始化成功，返回其他值表示初始化失败
   */
  int setName(const char * name);
  
  /**
   * @brief 获取声音强度值
   * @return 返回声音强度，单位是DB
   */
  int setAge(uint8_t age);

  /**
   * @brief 获取光线强度值
   * @return 返回光线强度，单位是流明
   */
  String getName(void);
  
    /**
   * @brief 切换模式
   * @return 返回0操作成功, 返回其他值操作失败
   */
```

## Compatibility

MCU                | Work Well    | Work Wrong   | Untested    | Remarks
------------------ | :----------: | :----------: | :---------: | -----
Arduino uno        |      √       |              |             | 
Mega2560        |      √       |              |             | 
Leonardo        |      √       |              |             | 
ESP32        |      √       |              |             | 


## History

- data 2019-6-25
- version V0.1


## Credits

Written by Alexander(ouki.wang@dfrobot.com), 2019. (Welcome to our [website](https://www.dfrobot.com/))





