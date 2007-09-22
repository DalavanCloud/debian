/////////////////////////////////////////////////////////////////////////////
// Name:        wx/brush.h
// Purpose:     Includes platform-specific wxBrush file
// Author:      Julian Smart
// Modified by:
// Created:
// RCS-ID:      $Id: brush.h,v 1.8.2.1 2005/05/04 18:23:23 JS Exp $
// Copyright:   Julian Smart
// Licence:     wxWindows Licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_BRUSH_H_BASE_
#define _WX_BRUSH_H_BASE_

#if defined(__WXMSW__)
#include "wx/msw/brush.h"
#elif defined(__WXMOTIF__)
#include "wx/motif/brush.h"
#elif defined(__WXGTK__)
#include "wx/gtk/brush.h"
#elif defined(__WXX11__)
#include "wx/x11/brush.h"
#elif defined(__WXMGL__)
#include "wx/mgl/brush.h"
#elif defined(__WXMAC__)
#include "wx/mac/brush.h"
#elif defined(__WXPM__)
#include "wx/os2/brush.h"
#elif defined(__WXSTUBS__)
#include "wx/stubs/brush.h"
#endif

#endif
    // _WX_BRUSH_H_BASE_
