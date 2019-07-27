#ifndef __DFRobot_WANGHUI_H
#define __DFRobot_WANGHUI_H
#include <Arduino.h>

class DFRobot_Wanghui
{
public:
  DFRobot_Wanghui();
  ~DFRobot_Wanghui();
  
  int setName(const char * name);
  int setAge(uint8_t age);
  int setAge(String age);
  String getName(void);
  int getAge(void);
private:
  String _name;
  int _age;
};

#endif
