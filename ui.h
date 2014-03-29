int swap_window(void);
int delete_window(void);
int hide_window(void);
char ask_negate_regexp(NEWWIN *win, int line);
int select_schemes(void *schemes_in, int n_schemes_in, scheme_t tscheme, int_array_t *schemes_out);
char ask_colors(NEWWIN *win, int line, char cur, char *fieldnr, char **fielddel, int_array_t *color_schemes, myattr_t *attrs);
char ask_regex_type(NEWWIN *win, int line);
int add_window(void);
int toggle_colors(void);
int edit_regexp(void);
int toggle_vertical_split(void);
void do_pause(void);
void set_buffering(void);
void list_keybindings(void);
void write_script(void);
int set_window_widths(void);
int set_window_sizes(void);
void selective_pause();
void wipe_window(void);
void wipe_all_windows(void);
void do_terminal(char c);
void set_linewrap(void);
void horizontal_scroll(int d);
void terminal_mode(void);
void regexp_error_popup(int rc, regex_t *pre);
void draw_gui_window_header(proginfo *last_changed_window);
void send_signal(void);
void screendump_do(WINDOW *win);
void screendump(void);
void truncate_file(void);
void edit_colors(int index);
int color_management(myattr_t *org, myattr_t *new);
int hide_all_but(void);
int unhide_all_windows(void);
void error_popup(char *title, int help, char *message, ...);
void add_markerline(int index, proginfo *cur, proginfo *type, char *text);
void draw_marker_line(NEWWIN *win, char *string, proginfo *marker_type);
void search_in_all_windows(void);
void highlight_in_all_windows(void);
void toggle_regexp_case_insensitive(void);
void restart_window(void);
void inverse_on(NEWWIN *win);
void inverse_off(NEWWIN *win);
void select_conversionschemes(void);
void toggle_subwindow_nr(void);
void clear_a_buffer(void);
void clear_all_buffers(void);
void ask_case_insensitive(mybool_t *pcase_insensitive);
