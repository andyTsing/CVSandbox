/*
    Standard image processing plug-ins of Computer Vision Sandbox

    Copyright (C) 2011-2018, cvsandbox
    http://www.cvsandbox.com/contacts.html

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

#include <iplugincpp.hpp>
#include <image_grayscale_to_rgb_16x16.h>
#include "GrayscaleToRgbPlugin.hpp"

// Version of the plug-in
static xversion PluginVersion = { 1, 0, 0 };

// ID of the plug-in
static xguid PluginID = { 0xAF000003, 0x00000000, 0x00000001, 0x0000001F };

// Register the plug-in
REGISTER_CPP_PLUGIN
(
    PluginID,
    PluginFamilyID_ColorFilter,

    PluginType_ImageProcessingFilter,
    PluginVersion,
    "Grayscale To RGB",
    "GrayscaleToRgb",
    "Converts grayscale image into RGB image.",

    "The plug-in converts 8 bpp grayscale image into 24 bpp RGB image. No any coloring is done. Just "
    "a change of pixel format so that the grayscale image could be used with other 24 bpp color images.",
    &image_grayscale_to_rgb_16x16,
    0,
    GrayscaleToRgbPlugin
);
