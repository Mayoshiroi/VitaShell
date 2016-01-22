/*
	VitaShell
	Copyright (C) 2015-2016, TheFloW

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __PHOTO_H__
#define __PHOTO_H__

#define ZOOM_MIN 0.1f
#define ZOOM_MAX 10.0f
#define ZOOM_SPEED 0.05f
#define MOVE_SPEED 5.0f
#define ROTATION_SPEED 0.05f

int photoViewer(char *file, int type);

#endif
