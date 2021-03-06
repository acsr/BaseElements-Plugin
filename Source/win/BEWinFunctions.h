/*
 BEWinFunctions.h
 BaseElements Plug-in

 Copyright 2010-2016 Goya. All rights reserved.
 For conditions of distribution and use please see the copyright notice in BEPlugin.cpp

 http://www.goya.com.au/baseelements/plugin

 */


#if !defined(BEWINFUNCTIONS_H)  		// Only include once.
	#define BEWINFUNCTIONS_H

#include "BEPluginGlobalDefines.h"
#include "BEPluginUtilities.h"

#include <string>


void InitialiseForPlatform ( void );
const fmx::errcode GetLastErrorAsFMX ( void );

const std::wstring ClipboardFormats ( void );
const std::string ClipboardData ( const std::wstring& atype );
const bool SetClipboardData ( const std::string& data, const std::wstring& atype );

const std::wstring SelectFile ( const std::wstring& prompt, const std::wstring& in_folder );
const std::wstring SelectFolder ( const std::wstring& prompt, const std::wstring& in_folder );
const std::wstring SaveFileDialog ( const std::wstring& prompt, const std::wstring& file_name, const std::wstring& in_folder );

const int DisplayDialog ( const std::wstring& title, const std::wstring& message, const std::wstring& button1, const std::wstring& button2, const std::wstring& button3 );


// Progress Dialog

const fmx::errcode DisplayProgressDialog ( const std::wstring& title, const std::wstring& description, const long maximum, const bool can_cancel );
const fmx::errcode UpdateProgressDialog ( const unsigned long value, const std::wstring& description );


// user preferences

const bool SetPreference ( const std::wstring& key, const std::wstring& value, const std::wstring& domain );
const std::wstring GetPreference ( const std::wstring& key, const std::wstring& domain );


// other

const bool OpenURL ( const std::wstring& url );
const bool OpenFile ( const std::wstring& file );
const std::wstring get_machine_name ();

// utilities

const std::wstring utf8toutf16 ( const std::string& instr );
const std::string utf16ToUTF8 ( const std::wstring& s );


#endif // BEWINFUNCTIONS_H
