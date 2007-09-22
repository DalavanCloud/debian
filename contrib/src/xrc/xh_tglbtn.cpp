/////////////////////////////////////////////////////////////////////////////
// Name:        xh_tglbtn.cpp
// Purpose:     XRC resource for wxCheckBox
// Author:      Bob Mitchell
// Created:     2000/03/21
// RCS-ID:      $Id: xh_tglbtn.cpp,v 1.2.2.1 2004/12/06 16:29:19 JS Exp $
// Copyright:   (c) 2000 Bob Mitchell and Verant Interactive
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

#ifdef __GNUG__
#pragma implementation "xh_tglbtn.h"
#endif

// For compilers that support precompilation, includes "wx.h".
#include "wx/wxprec.h"

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

#include "wx/xrc/xh_tglbtn.h"
#include "wx/tglbtn.h"

#if wxUSE_TOGGLEBTN

IMPLEMENT_DYNAMIC_CLASS(wxToggleButtonXmlHandler, wxXmlResourceHandler)

wxToggleButtonXmlHandler::wxToggleButtonXmlHandler()
: wxXmlResourceHandler()
{
    AddWindowStyles();
}

wxObject *wxToggleButtonXmlHandler::DoCreateResource()
{
    XRC_MAKE_INSTANCE(control, wxToggleButton)

    control->Create(m_parentAsWindow,
                    GetID(),
                    GetText(wxT("label")),
                    GetPosition(), GetSize(),
                    GetStyle(),
                    wxDefaultValidator,
                    GetName());

    control->SetValue(GetBool( wxT("checked")));
    SetupWindow(control);

    return control;
}

bool wxToggleButtonXmlHandler::CanHandle(wxXmlNode *node)
{
    return IsOfClass(node, wxT("wxToggleButton"));
}

#endif
