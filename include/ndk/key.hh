#pragma once

#include <curses.h>

namespace ndk
{
  enum class key
  {
    ctrl_a = '\001',
    ctrl_b = '\002',
    ctrl_c = '\003',
    ctrl_d = '\004',
    ctrl_e = '\005',
    ctrl_f = '\006',
    ctrl_g = '\007',
    ctrl_h = '\010',
    ctrl_i = '\011',
    ctrl_j = '\012',
    ctrl_k = '\013',
    ctrl_l = '\014',
    ctrl_m = '\015',
    ctrl_n = '\016',
    ctrl_o = '\017',
    ctrl_p = '\020',
    ctrl_q = '\021',
    ctrl_r = '\022',
    ctrl_s = '\023',
    ctrl_t = '\024',
    ctrl_u = '\025',
    ctrl_v = '\026',
    ctrl_w = '\027',
    ctrl_x = '\030',
    ctrl_y = '\031',
    ctrl_z = '\032',

    tab   = '\t',
    enter = '\r',

    space = ' ',
    comma = ',',
    dot = '.',
    dquote = '"',
    squote = '\'',

    k1 = '1',
    k2 = '2',
    k3 = '3',
    k4 = '4',
    k5 = '5',
    k6 = '6',
    k7 = '7',
    k8 = '8',
    k9 = '9',
    k0 = '0',

    a = 'a',
    b = 'b',
    c = 'c',
    d = 'd',
    e = 'e',
    f = 'f',
    g = 'g',
    h = 'h',
    i = 'i',
    j = 'j',
    k = 'k',
    l = 'l',
    m = 'm',
    n = 'n',
    o = 'o',
    p = 'p',
    q = 'q',
    r = 'r',
    s = 's',
    t = 't',
    u = 'u',
    v = 'v',
    w = 'w',
    x = 'x',
    y = 'y',
    z = 'z',

    A = 'A',
    B = 'B',
    C = 'C',
    D = 'D',
    E = 'E',
    F = 'F',
    G = 'G',
    H = 'H',
    I = 'I',
    J = 'J',
    K = 'K',
    L = 'L',
    M = 'M',
    N = 'N',
    O = 'O',
    P = 'P',
    Q = 'Q',
    R = 'R',
    S = 'S',
    T = 'T',
    U = 'U',
    V = 'V',
    W = 'W',
    X = 'X',
    Y = 'Y',
    Z = 'Z',

    intermediate = 0200,
    mouse = KEY_MOUSE,

    backspace = KEY_BACKSPACE,

    up = KEY_UP,
    right = KEY_RIGHT,
    left = KEY_LEFT,
    down = KEY_DOWN,

    pg_up = KEY_PPAGE,
    pg_dn = KEY_NPAGE,
    home = KEY_HOME,
    end = KEY_END,

    shift_right = KEY_SRIGHT,
    shift_left = KEY_SLEFT,

    shift_home = KEY_SHOME,
    shift_end = KEY_SEND,

    F1 = KEY_F (1),
    F2 = KEY_F (2),
    F3 = KEY_F (3),
    F4 = KEY_F (4),
    F5 = KEY_F (5),
    F6 = KEY_F (6),
    F7 = KEY_F (7),
    F8 = KEY_F (8),
    F9 = KEY_F (9),
    F10 = KEY_F (10),
    F11 = KEY_F (11),
    F12 = KEY_F (12),

    dc = KEY_DC,

    resize = KEY_RESIZE,

    error = 01000,

    numpad_center,

    shift_up,
    shift_down,

    shift_pg_up,
    shift_pg_dn,

    ctrl_up,
    ctrl_right,
    ctrl_left,
    ctrl_down,

    ctrl_pg_up,
    ctrl_pg_dn,
    ctrl_home,
    ctrl_end,

    unknown
  };
}
