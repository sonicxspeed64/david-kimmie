/// @description COUNT

var prevcount = count[0];

if keyboard_check_pressed(vk_up) or gamepad_button_check_pressed(currcon,gp_shoulderlb)
count[0] ++
if keyboard_check_pressed(vk_down) or gamepad_button_check_pressed(currcon,gp_shoulderrb)
count[0] --

if keyboard_check_pressed(vk_numpad0) or gamepad_button_check_pressed(currcon,gp_face3)
count[0] += 3

inputted = false

if timesince > 0
timesince --

if count[0] != prevcount
{
var file = file_text_open_write("NUMBER.txt");
file_text_write_real(file, count[0]);
file_text_close(file);

timesince = 308
inputted = true

if lines < 7
lines ++

for (k = lines - 1; k > 1; k --)
count[k] = count[k - 1]

count[1] = prevcount
}

if keyboard_check(vk_backspace)
{
for (k = 0; k < 19; k ++)
if gamepad_button_check_pressed(k,gp_stickl)
{
currcon = k
show_debug_message(k)
break
}
}