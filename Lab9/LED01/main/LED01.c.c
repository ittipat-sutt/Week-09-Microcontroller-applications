#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    gpio_set_direction(2, GPIO_MODE_OUTPUT);
    gpio_set_direction(0, GPIO_MODE_OUTPUT);
    gpio_set_direction(4, GPIO_MODE_OUTPUT);
    gpio_set_direction(16, GPIO_MODE_OUTPUT);


    while(1){
        gpio_set_level(2,1);
        gpio_set_level(0,0);
        gpio_set_level(4,0);
        gpio_set_level(16,0);
        vTaskDelay(pdMS_TO_TICKS(250));
        gpio_set_level(2,0);
        gpio_set_level(0,1);
        gpio_set_level(4,0);
        gpio_set_level(16,0);
        vTaskDelay(pdMS_TO_TICKS(250));
        gpio_set_level(2,0);
        gpio_set_level(0,0);
        gpio_set_level(4,1);
        gpio_set_level(16,0);
        vTaskDelay(pdMS_TO_TICKS(250));
        gpio_set_level(2,0);
        gpio_set_level(0,0);
        gpio_set_level(4,0);
        gpio_set_level(16,1);
        vTaskDelay(pdMS_TO_TICKS(250));
        gpio_set_level(2,0);
        gpio_set_level(0,0);
        gpio_set_level(4,1);
        gpio_set_level(16,0);
        vTaskDelay(pdMS_TO_TICKS(250));
        gpio_set_level(2,0);
        gpio_set_level(0,1);
        gpio_set_level(4,0);
        gpio_set_level(16,0);
        vTaskDelay(pdMS_TO_TICKS(250));
    }
    
}
