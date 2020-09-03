﻿#pragma once

#include <string>

enum class localized_string_id
{
	INVALID,

	RSX_OVERLAYS_TROPHY_BRONZE,
	RSX_OVERLAYS_TROPHY_SILVER,
	RSX_OVERLAYS_TROPHY_GOLD,
	RSX_OVERLAYS_TROPHY_PLATINUM,
	RSX_OVERLAYS_COMPILING_SHADERS,
	RSX_OVERLAYS_MSG_DIALOG_YES,
	RSX_OVERLAYS_MSG_DIALOG_NO,
	RSX_OVERLAYS_MSG_DIALOG_CANCEL,
	RSX_OVERLAYS_MSG_DIALOG_OK,
	RSX_OVERLAYS_SAVE_DIALOG_TITLE,
	RSX_OVERLAYS_SAVE_DIALOG_DELETE,
	RSX_OVERLAYS_SAVE_DIALOG_LOAD,
	RSX_OVERLAYS_SAVE_DIALOG_SAVE,
	RSX_OVERLAYS_OSK_DIALOG_ACCEPT,
	RSX_OVERLAYS_OSK_DIALOG_CANCEL,
	RSX_OVERLAYS_OSK_DIALOG_SPACE,
	RSX_OVERLAYS_OSK_DIALOG_BACKSPACE,
	RSX_OVERLAYS_OSK_DIALOG_SHIFT,
	RSX_OVERLAYS_OSK_DIALOG_ENTER_TEXT,
	RSX_OVERLAYS_OSK_DIALOG_ENTER_PASSWORD,
	RSX_OVERLAYS_LIST_SELECT,
	RSX_OVERLAYS_LIST_CANCEL,
};

std::string get_localized_string(localized_string_id id, const char* args = "");
std::u32string get_localized_u32string(localized_string_id id, const char* args = "");
