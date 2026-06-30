#include "vwcdc.h"
#include "freertos/queue.h"

#include "command_queue.h"

void setup()
{
    Serial.begin(9600);

    command_queue = xQueueCreate(10, sizeof(uint8_t));

    xTaskCreate(
        vwcdc_start,
        "VWCDC",
        10000,
        NULL,
        1,
        NULL);
}

void loop()
{
}