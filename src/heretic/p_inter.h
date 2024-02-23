//
// Copyright(C) 1993-1996 Id Software, Inc.
// Copyright(C) 2005-2014 Simon Howard
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// DESCRIPTION:
//
//


#ifndef __P_INTER__
#define __P_INTER__

#include "doomdef.h"
#include "dstrings.h"

// [crispy] show weapon pickup messages in multiplayer games
constexpr const char *const WeaponPickupMessages[NUMWEAPONS] =
{
    NULL, // wp_staff
    NULL, // wp_goldwand
    TXT_WPNCROSSBOW,
    TXT_WPNBLASTER,
    TXT_WPNSKULLROD,
    TXT_WPNPHOENIXROD,
    TXT_WPNMACE,
    TXT_WPNGAUNTLETS,
    NULL // wp_beak
};

#endif