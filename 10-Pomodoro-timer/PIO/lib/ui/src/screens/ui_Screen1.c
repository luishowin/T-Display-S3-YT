// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: PTspj

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x232323), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_img_focus_sec = lv_img_create(ui_Screen1);
lv_img_set_src(ui_img_focus_sec, &ui_img_elements_focus_sec_png);
lv_obj_set_width( ui_img_focus_sec, 195);
lv_obj_set_height( ui_img_focus_sec, 195);
lv_obj_set_x( ui_img_focus_sec, -7 );
lv_obj_set_y( ui_img_focus_sec, -12 );
lv_obj_add_flag( ui_img_focus_sec, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_img_focus_sec, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_img_break_sec = lv_img_create(ui_Screen1);
lv_img_set_src(ui_img_break_sec, &ui_img_elements_break_sec_png);
lv_obj_set_width( ui_img_break_sec, LV_SIZE_CONTENT);  /// 162
lv_obj_set_height( ui_img_break_sec, LV_SIZE_CONTENT);   /// 162
lv_obj_set_x( ui_img_break_sec, 172 );
lv_obj_set_y( ui_img_break_sec, 16 );
lv_obj_add_flag( ui_img_break_sec, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_img_break_sec, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_img_face = lv_img_create(ui_Screen1);
lv_img_set_src(ui_img_face, &ui_img_elements_face_png);
lv_obj_set_width( ui_img_face, 321);
lv_obj_set_height( ui_img_face, 170);
lv_obj_add_flag( ui_img_face, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_img_face, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_label_focus = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_label_focus, 97);
lv_obj_set_height( ui_label_focus, 95);
lv_obj_set_x( ui_label_focus, 43 );
lv_obj_set_y( ui_label_focus, 21 );
lv_label_set_text(ui_label_focus,"25");
lv_obj_set_style_text_color(ui_label_focus, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_label_focus, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_label_focus, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_label_focus, &ui_font_be110, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_label_break = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_label_break, 85);
lv_obj_set_height( ui_label_break, 71);
lv_obj_set_x( ui_label_break, 211 );
lv_obj_set_y( ui_label_break, 54 );
lv_label_set_text(ui_label_break,"5");
lv_obj_set_style_text_color(ui_label_break, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_label_break, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_label_break, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_label_break, &ui_font_be75, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_label_focus_title = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_label_focus_title, 85);
lv_obj_set_height( ui_label_focus_title, 26);
lv_obj_set_x( ui_label_focus_title, 50 );
lv_obj_set_y( ui_label_focus_title, 124 );
lv_label_set_text(ui_label_focus_title,"focus");
lv_obj_set_style_text_color(ui_label_focus_title, lv_color_hex(0x727272), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_label_focus_title, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_label_focus_title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_label_focus_title, &ui_font_be20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_label_focus_break = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_label_focus_break, 85);
lv_obj_set_height( ui_label_focus_break, 26);
lv_obj_set_x( ui_label_focus_break, 211 );
lv_obj_set_y( ui_label_focus_break, 126 );
lv_label_set_text(ui_label_focus_break,"break");
lv_obj_set_style_text_color(ui_label_focus_break, lv_color_hex(0x727272), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_label_focus_break, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_label_focus_break, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_label_focus_break, &ui_font_be20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_label_cycle = lv_label_create(ui_Screen1);
lv_obj_set_width( ui_label_cycle, 31);
lv_obj_set_height( ui_label_cycle, 21);
lv_obj_set_x( ui_label_cycle, 163 );
lv_obj_set_y( ui_label_cycle, 139 );
lv_label_set_text(ui_label_cycle,"0/0");
lv_obj_set_style_text_color(ui_label_cycle, lv_color_hex(0x727272), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_label_cycle, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_label_cycle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_label_cycle, &ui_font_be20, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_img_start_pause = lv_img_create(ui_Screen1);
lv_img_set_src(ui_img_start_pause, &ui_img_elements_start_png);
lv_obj_set_width( ui_img_start_pause, 20);
lv_obj_set_height( ui_img_start_pause, 20);
lv_obj_add_flag( ui_img_start_pause, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_img_start_pause, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_opa(ui_img_start_pause, 200, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_img_reset = lv_img_create(ui_Screen1);
lv_img_set_src(ui_img_reset, &ui_img_elements_reset_png);
lv_obj_set_width( ui_img_reset, 20);
lv_obj_set_height( ui_img_reset, 20);
lv_obj_set_x( ui_img_reset, 0 );
lv_obj_set_y( ui_img_reset, 148 );
lv_obj_add_flag( ui_img_reset, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_img_reset, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_opa(ui_img_reset, 200, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_img_pause = lv_img_create(ui_Screen1);
lv_img_set_src(ui_img_pause, &ui_img_elements_pause_png);
lv_obj_set_width( ui_img_pause, LV_SIZE_CONTENT);  /// 7
lv_obj_set_height( ui_img_pause, LV_SIZE_CONTENT);   /// 9
lv_obj_set_x( ui_img_pause, 6 );
lv_obj_set_y( ui_img_pause, 6 );
lv_obj_add_flag( ui_img_pause, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_img_pause, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_Image1 = lv_img_create(ui_Screen1);
lv_img_set_src(ui_Image1, &ui_img_elements_yt_png);
lv_obj_set_width( ui_Image1, LV_SIZE_CONTENT);  /// 109
lv_obj_set_height( ui_Image1, LV_SIZE_CONTENT);   /// 25
lv_obj_set_x( ui_Image1, 184 );
lv_obj_set_y( ui_Image1, 0 );
lv_obj_add_flag( ui_Image1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_Image1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

}