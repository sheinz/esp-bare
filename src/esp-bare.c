#include "user_interface.h"
#include "esp/gpio.h"


void ICACHE_FLASH_ATTR call_user_start()
{
    gpio_pwm_312kHz(true, 127);
    gpio_enable_pwm(2);

    while (true);
}
