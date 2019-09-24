#include "resources.h"

GBitmap* s_pin_bitmap_black; // 📍
GBitmap* s_cal_bitmap_black; // 📅
GFont s_emoji_font;

void resources_init(void) {
    s_pin_bitmap_black = gbitmap_create_with_resource(RESOURCE_ID_PIN_BLACK);
    s_cal_bitmap_black = gbitmap_create_with_resource(RESOURCE_ID_CAL_BLACK);
    s_emoji_font = fonts_load_custom_font(resource_get_handle(RESOURCE_ID_EMOJI_32));
}

void resources_deinit(void) {
    gbitmap_destroy(s_pin_bitmap_black);
    gbitmap_destroy(s_cal_bitmap_black);
    fonts_unload_custom_font(s_emoji_font);
}
