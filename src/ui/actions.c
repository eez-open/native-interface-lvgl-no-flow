#include <lvgl/lvgl.h>

#include "actions.h"
#include "screens.h"
#include "ui.h"

extern int32_t counter;

void action_inc_counter(lv_event_t *e) {
    counter++;
}

void action_dec_counter(lv_event_t *e) {
    counter--;
}