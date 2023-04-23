#include <kipr/wombat.h>
void clockwise_90();
void counterclockwise_90();
int main()
{
   
    enable_servos();
    set_servo_position(1,400);
    set_servo_position(2,900);
 clockwise_90();
    while((digital(1) == 0) || (digital(2) == 0))
    {
    motor(0,82);
    motor(1,81.5);
    }        
    motor(0,-65);
    motor(1,-32);
    msleep(1750);
    motor(0,-40);
    motor(1,-40);
    msleep(600);
    ao();
    set_servo_position(2,1900);
    msleep(500);
    set_servo_position(1,415);
    msleep(1000);
    motor(0,45);
    motor(1,50);
    msleep(1300);
    ao();
    set_servo_position(1,900);
    msleep(1000);
    set_servo_position(2,1190);// grabs cube
    msleep(1000);
    motor(0,-25);
    motor(1,-55);
    msleep(2050);
    set_servo_position(2,1400);
   while ((digital (0) == 0) || (digital (3) == 0))
          {
              motor (0,-80);
              motor (1,-78.5);
          }
    motor(1,-75);
    motor(0,75);
    msleep(1000);
    ao();
    set_servo_position(2,2047);
     while ((digital (0) == 0) || (digital (3) == 0))
          {
              motor (0,-70);
              motor (1,-70);
     }
    ao();
    motor(0,80);
    motor(1,60);
    msleep(400);
    ao();
    return 0;
}

























void clockwise_90()
{
    cmpc(1);
    while (gmpc(1) <= 2000)
    {
        motor(1,100);
        motor(0,0);
    }

    ao();
}

void counterclockwise_90()
{
    cmpc(0);
    while (gmpc(0) <= 750)
    {
        motor(1,-100);
        motor(0,100);
    }

    ao();
}

