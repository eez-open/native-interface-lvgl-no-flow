#include <stdio.h>
#include <lvgl/lvgl.h>

#include "vars.h"
#include "screens.h"
#include "ui.h"

int32_t counter = 0;
int32_t selected_item_index = 0;

int32_t get_var_selected_item_index() {
    return selected_item_index;
}

void set_var_selected_item_index(int32_t value) {
    selected_item_index = value;
}

const char *get_var_selected_item_info() {
    static char selected_item_info[256];
    snprintf(selected_item_info, sizeof(selected_item_info), "Selected item index is %d", selected_item_index);
    return selected_item_info;
}

const char *get_var_counter_info() {
    static char counter_info[256];
    snprintf(counter_info, sizeof(counter_info), "Counter is %d", counter);
    return counter_info;
}
