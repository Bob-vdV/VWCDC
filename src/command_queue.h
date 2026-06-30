#ifndef CMD_QUEUE_H
#define CMD_QUEUE_H

#include "freertos/queue.h"

#define CMD_QUEUE_TIME 10 / portTICK_PERIOD_MS

QueueSetHandle_t command_queue;

#endif