/// @description Write output in window

draw_set_valign(fa_bottom)
draw_set_font(fntCounter)

for (k = 0; k < lines; k ++)
draw_text(200,354 - k * 48,"Counter: " + string(count[k]))