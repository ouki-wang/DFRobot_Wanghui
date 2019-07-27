#include <DFRobot_Wanghui.h>
#include <string.h>

DFRobot_Wanghui::DFRobot_Wanghui()
{
  Serial.println("construct DFRobot_Wanghui!!!!!");
}
DFRobot_Wanghui::~DFRobot_Wanghui()
{
  Serial.println("~~~~destruct DFRobot_Wanghui");
}
  
int DFRobot_Wanghui::setName(const char * name)
{
  if(name == NULL){
    return -1;
  }
  if((strlen(name) == 0) || (strlen(name) > 20)){
    return -2;
  }
  _name = name;
}

int DFRobot_Wanghui::setAge(uint8_t age)
{
  if((age<18) || (age>100)){
    return -1;
  }
  _age = 18;
}

int DFRobot_Wanghui::setAge(String age)
{
  uint8_t tmp = age.toInt();
  if((tmp<18) || (tmp>100)){
    return -1;
  }
  _age = tmp;
}

String DFRobot_Wanghui::getName(void)
{
  return _name;
}
int DFRobot_Wanghui::getAge(void)
{
  return _age;
}
