#ifndef EEZ_LVGL_UI_VARS_H
#define EEZ_LVGL_UI_VARS_H

#include <stdint.h>

extern const char *get_var_counter_info();
extern void set_var_counter_info(const char *value);
extern int32_t get_var_selected_item_index();
extern void set_var_selected_item_index(int32_t value);
extern const char *get_var_selected_item_info();
extern void set_var_selected_item_info(const char *value);
extern const char *get_var_input_text();
extern void set_var_input_text(const char *value);


#endif /*EEZ_LVGL_UI_VARS_H*/