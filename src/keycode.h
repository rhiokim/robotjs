#pragma once
#ifndef KEYCODE_H
#define KEYCODE_H

#include "os.h"

#ifdef __cplusplus
extern "C" 
{
#endif

#if defined(IS_MACOSX)

#include <Carbon/Carbon.h> /* Really only need <HIToolbox/Events.h> */
#include <ApplicationServices/ApplicationServices.h>

enum _MMKeyCode {
	K_BACKSPACE = kVK_Delete,
	K_DELETE = kVK_ForwardDelete,
	K_RETURN = kVK_Return,
	K_TAB = kVK_Tab,
	K_ESCAPE = kVK_Escape,
	K_UP = kVK_UpArrow,
	K_DOWN = kVK_DownArrow,
	K_RIGHT = kVK_RightArrow,
	K_LEFT = kVK_LeftArrow,
	K_HOME = kVK_Home,
	K_END = kVK_End,
	K_PAGEUP = kVK_PageUp,
	K_PAGEDOWN = kVK_PageDown,
	K_F1 = kVK_F1,
	K_F2 = kVK_F2,
	K_F3 = kVK_F3,
	K_F4 = kVK_F4,
	K_F5 = kVK_F5,
	K_F6 = kVK_F6,
	K_F7 = kVK_F7,
	K_F8 = kVK_F8,
	K_F9 = kVK_F9,
	K_F10 = kVK_F10,
	K_F11 = kVK_F11,
	K_F12 = kVK_F12,
	K_META = kVK_Command,
	K_ALT = kVK_Option,
	K_CONTROL = kVK_Control,
	K_SHIFT = kVK_Shift,
	K_CAPSLOCK = kVK_CapsLock,
	K_SPACE = kVK_Space,
	K_0 = kVK_ANSI_0,
	K_1 = kVK_ANSI_1,
	K_2 = kVK_ANSI_2,
	K_3 = kVK_ANSI_3,
	K_4 = kVK_ANSI_4,
	K_5 = kVK_ANSI_5,
	K_6 = kVK_ANSI_6,
	K_7 = kVK_ANSI_7,
	K_8 = kVK_ANSI_8,
	K_9 = kVK_ANSI_9,
	K_A = kVK_ANSI_A,
	K_B = kVK_ANSI_B,
	K_C = kVK_ANSI_C,
	K_D = kVK_ANSI_D,
	K_E = kVK_ANSI_E,
	K_F = kVK_ANSI_F,
	K_G = kVK_ANSI_G,
	K_H = kVK_ANSI_H,
	K_I = kVK_ANSI_I,
	K_J = kVK_ANSI_J,
	K_K = kVK_ANSI_K,
	K_L = kVK_ANSI_L,
	K_M = kVK_ANSI_M,
	K_N = kVK_ANSI_N,
	K_O = kVK_ANSI_O,
	K_P = kVK_ANSI_P,
	K_Q = kVK_ANSI_Q,
	K_R = kVK_ANSI_R,
	K_S = kVK_ANSI_S,
	K_T = kVK_ANSI_T,
	K_U = kVK_ANSI_U,
	K_V = kVK_ANSI_V,
	K_W = kVK_ANSI_W,
	K_X = kVK_ANSI_X,
	K_Y = kVK_ANSI_Y,
	K_Z = kVK_ANSI_Z
};

typedef CGKeyCode MMKeyCode;

#elif defined(USE_X11)

#include <X11/Xutil.h>

enum _MMKeyCode {
	K_BACKSPACE = XK_BackSpace,
	K_DELETE = XK_Delete,
	K_RETURN = XK_Return,
	K_TAB = XK_Tab,
	K_ESCAPE = XK_Escape,
	K_UP = XK_Up,
	K_DOWN = XK_Down,
	K_RIGHT = XK_Right,
	K_LEFT = XK_Left,
	K_HOME = XK_Home,
	K_END = XK_End,
	K_PAGEUP = XK_Page_Up,
	K_PAGEDOWN = XK_Page_Down,
	K_F1 = XK_F1,
	K_F2 = XK_F2,
	K_F3 = XK_F3,
	K_F4 = XK_F4,
	K_F5 = XK_F5,
	K_F6 = XK_F6,
	K_F7 = XK_F7,
	K_F8 = XK_F8,
	K_F9 = XK_F9,
	K_F10 = XK_F10,
	K_F11 = XK_F11,
	K_F12 = XK_F12,
	K_META = XK_Super_L,
	K_ALT = XK_Alt_L,
	K_CONTROL = XK_Control_L,
	K_SHIFT = XK_Shift_L,
	K_CAPSLOCK = XK_Shift_Lock,
	K_SPACE = XK_space
};

typedef KeySym MMKeyCode;

#elif defined(IS_WINDOWS)

enum _MMKeyCode {
	K_BACKSPACE = VK_BACK,
	K_DELETE = VK_DELETE,
	K_RETURN = VK_RETURN,
	K_TAB = VK_TAB,
	K_ESCAPE = VK_ESCAPE,
	K_UP = VK_UP,
	K_DOWN = VK_DOWN,
	K_RIGHT = VK_RIGHT,
	K_LEFT = VK_LEFT,
	K_HOME = VK_HOME,
	K_END = VK_END,
	K_PAGEUP = VK_PRIOR,
	K_PAGEDOWN = VK_NEXT,
	K_F1 = VK_F1,
	K_F2 = VK_F2,
	K_F3 = VK_F3,
	K_F4 = VK_F4,
	K_F5 = VK_F5,
	K_F6 = VK_F6,
	K_F7 = VK_F7,
	K_F8 = VK_F8,
	K_F9 = VK_F9,
	K_F10 = VK_F10,
	K_F11 = VK_F11,
	K_F12 = VK_F12,
	K_META = VK_LWIN,
	K_CONTROL = VK_CONTROL,
	K_SHIFT = VK_SHIFT,
	K_ALT = VK_MENU,
	K_CAPSLOCK = VK_CAPITAL,
	K_SPACE = VK_SPACE,
	K_PRINTSCREEN = VK_SNAPSHOT
};

typedef int MMKeyCode;

#endif

/* Returns the keyCode corresponding to the current keyboard layout for the
 * given ASCII character. */
MMKeyCode keyCodeForChar(const char c);

#endif /* KEYCODE_H */

#ifdef __cplusplus
}
#endif
