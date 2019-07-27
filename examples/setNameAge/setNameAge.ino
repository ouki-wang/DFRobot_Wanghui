#include <DFRobot_Wanghui.h>
DFRobot_Wanghui wh;

void setup(void)
{
  Serial.begin(115200);
  delay(100);
  Serial.println("hello DFRobot");
  wh.setAge(18);
  wh.setName("Alexander");
  Serial.print("name=");Serial.println(wh.getName());
  Serial.print("age=");Serial.println(wh.getAge());
}

void loop(void)
{
  
}
