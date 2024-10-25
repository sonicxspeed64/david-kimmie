/// @description Initialize

var file = file_text_open_read("NUMBER.txt");
count[0] = file_text_read_real(file);
file_text_close(file);