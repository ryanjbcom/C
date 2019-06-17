/* Category: C++
Published on Tuesday, 13 May 2011 00:10
Written by Ryan Bridglal
Hits: 0
Original Code posted @ GONE
Ryan J. Bridglal,  
November 2011
*/

// checkers.cpp : Defines the entry point for the console application.
//

// iostream standard header for Microsoft
#pragma once
#ifndef _IOSTREAM_
#define _IOSTREAM_
#ifndef RC_INVOKED
#include <istream>

 #pragma pack(push,_CRT_PACKING)
 #pragma warning(push,3)
_STD_BEGIN

  #ifdef _M_CEE_PURE
__PURE_APPDOMAIN_GLOBAL extern istream cin, *_Ptr_cin;
__PURE_APPDOMAIN_GLOBAL extern ostream cout, *_Ptr_cout;
__PURE_APPDOMAIN_GLOBAL extern ostream cerr, *_Ptr_cerr;
__PURE_APPDOMAIN_GLOBAL extern ostream clog, *_Ptr_clog;

__PURE_APPDOMAIN_GLOBAL extern wistream wcin, *_Ptr_wcin;
__PURE_APPDOMAIN_GLOBAL extern wostream wcout, *_Ptr_wcout;
__PURE_APPDOMAIN_GLOBAL extern wostream wcerr, *_Ptr_wcerr;
__PURE_APPDOMAIN_GLOBAL extern wostream wclog, *_Ptr_wclog;

  #else /* _M_CEE_PURE */
		// OBJECTS
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2 istream cin, *_Ptr_cin;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2 ostream cout, *_Ptr_cout;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2 ostream cerr, *_Ptr_cerr;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2 ostream clog, *_Ptr_clog;

__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2 wistream wcin, *_Ptr_wcin;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2 wostream wcout, *_Ptr_wcout;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2 wostream wcerr, *_Ptr_wcerr;
__PURE_APPDOMAIN_GLOBAL extern _CRTDATA2 wostream wclog, *_Ptr_wclog;

		// CLASS _Winit
class _CRTIMP2_PURE _Winit {
public:
	__thiscall _Winit();
	__thiscall ~_Winit();
private:
	__PURE_APPDOMAIN_GLOBAL static int _Init_cnt;
	};
  #endif /* _M_CEE_PURE */

_STD_END
 #pragma warning(pop)
 #pragma pack(pop)

#endif /* RC_INVOKED */
#endif /* _IOSTREAM_ */
