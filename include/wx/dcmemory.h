/////////////////////////////////////////////////////////////////////////////
// Name:        wx/dcmemory.h
// Purpose:     wxMemoryDC base header
// Author:      Julian Smart
// Modified by:
// Created:
// Copyright:   (c) Julian Smart
// RCS-ID:      $Id: dcmemory.h,v 1.8.2.1 2005/05/04 18:23:24 JS Exp $
// Licence:     wxWindows Licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_DCMEMORY_H_BASE_
#define _WX_DCMEMORY_H_BASE_

#if defined(__WXMSW__)
#include "wx/msw/dcmemory.h"
#elif defined(__WXMOTIF__)
#include "wx/motif/dcmemory.h"
#elif defined(__WXGTK__)
#include "wx/gtk/dcmemory.h"
#elif defined(__WXX11__)
#include "wx/x11/dcmemory.h"
#elif defined(__WXMGL__)
#include "wx/mgl/dcmemory.h"
#elif defined(__WXMAC__)
#include "wx/mac/dcmemory.h"
#elif defined(__WXPM__)
#include "wx/os2/dcmemory.h"
#elif defined(__WXSTUBS__)
#include "wx/stubs/dcmemory.h"
#endif

#endif
    // _WX_DCMEMORY_H_BASE_
