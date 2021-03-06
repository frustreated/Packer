/* loader.h --

   This file is part of the "PE Maker".

   Copyright (C) 2005-2006 Ashkbiz Danehkar
   All Rights Reserved.

   "PE Maker" library are free software; you can redistribute them
   and/or modify them under the terms of the GNU General Public License as
   published by the Free Software Foundation.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYRIGHT.TXT.
   If not, write to the Free Software Foundation, Inc.,
   59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

   yodap's Forum:
   http://yodap.sourceforge.net/forum/

   yodap's Site:
   http://yodap.has.it
   http://yodap.cjb.net
   http://yodap.sourceforge.net

   Ashkbiz Danehkar
   <ashkbiz@yahoo.com>
*/
#pragma once
//----------------------------------------------------------------
#define DYN_LOADER_START_MAGIC			0xC0DE51A9
#define DYN_LOADER_END_MAGIC			0xC0DEE2DE
//----------------------------------------------------------------
extern void __stdcall DynLoader();
#pragma once

#define DYN_LOADER_START_MAGIC	0xC0DE51A9
#define DYN_LOADER_END_MAGIC	0xC0DEE2DE
#define DYN_LOADER_START_DATA1	0xDA1EDA1E

extern VOID __stdcall  DynLoader();