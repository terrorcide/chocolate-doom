// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// $Id: d_ticcmd.h 18 2005-07-23 18:56:07Z fraggle $
//
// Copyright(C) 1993-1996 Id Software, Inc.
// Copyright(C) 2005 Simon Howard
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
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
// 02111-1307, USA.
//
// DESCRIPTION:
//	System specific interface stuff.
//
//-----------------------------------------------------------------------------


#ifndef __D_TICCMD__
#define __D_TICCMD__

#include "doomtype.h"


// The data sampled per tick (single player)
// and transmitted to other peers (multiplayer).
// Mainly movements/button commands per game tick,
// plus a checksum for internal state consistency.
typedef struct
{
    char	forwardmove;	// *2048 for move
    char	sidemove;	// *2048 for move
    short	angleturn;	// <<16 for angle delta
    short	consistancy;	// checks for net game
    byte	chatchar;
    byte	buttons;
} ticcmd_t;



#endif
//-----------------------------------------------------------------------------
//
// $Log$
// Revision 1.3  2005/07/23 18:56:07  fraggle
// Remove unneccessary pragmas
//
// Revision 1.2  2005/07/23 16:44:55  fraggle
// Update copyright to GNU GPL
//
// Revision 1.1.1.1  2005/07/23 16:20:13  fraggle
// Initial import
//
//
//-----------------------------------------------------------------------------
