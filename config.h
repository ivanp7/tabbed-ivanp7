/* See LICENSE file for copyright and license details. */

#define FONT "xos4 Terminus:size=10"

/* appearance */
static const char font[]        = FONT;
static const char* normbgcolor  = "#222222";
static const char* normfgcolor  = "#cccccc";
static const char* selbgcolor   = "#555555";
static const char* selfgcolor   = "#ffffff";
static const char before[]      = "<";
static const char after[]       = ">";
static const int  tabwidth      = 200;
static const Bool foreground    = True;
static const char *wmclass      = "tabbed";

/*
 * Where to place a new tab when it is opened. When npisrelative is True,
 * then the current position is changed + newposition. If npisrelative
 * is False, then newposition is an absolute position.
 */
static int  newposition   = 1;
static Bool npisrelative  = True;

#define SETPROP(p) { \
    .v = (char *[]){ "/bin/sh", "-c", \
        "prop=\"`xwininfo -children -id $1 | grep '^     0x' | " \
        "sed -e's@^ *\\(0x[0-9a-f]*\\) \"\\([^\"]*\\)\".*@\\1 \\2@' | " \
        "xargs -0 printf %b | dmenu -fn \"" FONT "\" -l 10`\" &&" \
        "xprop -id $1 -f $0 8s -set $0 \"$prop\"", \
        p, winid, NULL \
    } \
}

#define MODKEY ControlMask|ShiftMask
static Key keys[] = { \
    /* modifier                     key        function        argument */
    { MODKEY,                       36 /*XK_Return*/, focusonce,      { 0 } },
    { MODKEY,                       36 /*XK_Return*/, spawn,          { 0 } },
    { MODKEY,                       28 /*XK_t*/,      spawn,          SETPROP("_TABBED_SELECT_TAB") },

    { MODKEY,                       46 /*XK_l*/,      rotate,         { .i = +1 } },
    { MODKEY,                       43 /*XK_h*/,      rotate,         { .i = -1 } },
    { MODKEY,                       44 /*XK_j*/,      movetab,        { .i = -1 } },
    { MODKEY,                       45 /*XK_k*/,      movetab,        { .i = +1 } },
    { MODKEY,                       23 /*XK_Tab*/,    rotate,         { .i = 0 } },

    { MODKEY,                       10 /*XK_1*/,      move,           { .i = 0 } },
    { MODKEY,                       11 /*XK_2*/,      move,           { .i = 1 } },
    { MODKEY,                       12 /*XK_3*/,      move,           { .i = 2 } },
    { MODKEY,                       13 /*XK_4*/,      move,           { .i = 3 } },
    { MODKEY,                       14 /*XK_5*/,      move,           { .i = 4 } },
    { MODKEY,                       15 /*XK_6*/,      move,           { .i = 5 } },
    { MODKEY,                       16 /*XK_7*/,      move,           { .i = 6 } },
    { MODKEY,                       17 /*XK_8*/,      move,           { .i = 7 } },
    { MODKEY,                       18 /*XK_9*/,      move,           { .i = 8 } },
    { MODKEY,                       19 /*XK_0*/,      move,           { .i = 9 } },

    { MODKEY,                       24 /*XK_q*/,      killclient,     { 0 } },
};

