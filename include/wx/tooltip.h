/////////////////////////////////////////////////////////////////////////////
// Name:        tooltip.h
// Purpose:     wxToolTip base header
// Author:      Robert Roebling
// Modified by:
// Created:
// Copyright:   (c) Robert Roebling
// RCS-ID:      $Id: tooltip.h,v 1.5.2.1 2005/05/04 18:23:31 JS Exp $
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifndef _WX_TOOLTIP_H_BASE_
#define _WX_TOOLTIP_H_BASE_

#include "wx/setup.h"

#if wxUSE_TOOLTIPS

#if defined(__WXMSW__)
#include "wx/msw/tooltip.h"
#elif defined(__WXMOTIF__)
// #include "wx/motif/tooltip.h"
#elif defined(__WXGTK__)
#include "wx/gtk/tooltip.h"
#elif defined(__WXMAC__)
#include "wx/mac/tooltip.h"
#elif defined(__WXPM__)
#include "wx/os2/tooltip.h"
#elif defined(__WXSTUBS__)
// #include "wx/stubs/tooltip.h"
#endif

#endif
    // wxUSE_TOOLTIPS

#endif
    // _WX_TOOLTIP_H_BASE_
