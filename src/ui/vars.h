#ifndef EEZ_LVGL_UI_VARS_H
#define EEZ_LVGL_UI_VARS_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// enum declarations



// Flow global variables

enum FlowGlobalVariables {
    FLOW_GLOBAL_VARIABLE_COUNTER_INFO = 0,
    FLOW_GLOBAL_VARIABLE_SELECTED_ITEM_INDEX = 1,
    FLOW_GLOBAL_VARIABLE_SELECTED_ITEM_INFO = 2,
    FLOW_GLOBAL_VARIABLE_INPUT_TEXT = 3
};

// Native global variables

extern const char *get_var_counter_info();
extern void set_var_counter_info(const char *value);
extern int32_t get_var_selected_item_index();
extern void set_var_selected_item_index(int32_t value);
extern const char *get_var_selected_item_info();
extern void set_var_selected_item_info(const char *value);
extern const char *get_var_input_text();
extern void set_var_input_text(const char *value);


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_VARS_H*/