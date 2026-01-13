// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__944DD3E7_59CF_4318_BAE1_015912087125__INCLUDED_)
#define AFX_STDAFX_H__944DD3E7_59CF_4318_BAE1_015912087125__INCLUDED_

#pragma warning( disable :  4786 4530 4503)

#define POINTER_64 __ptr64  
typedef unsigned __int64 POINTER_64_INT;
#if defined(_WIN64)  
#define POINTER_32 __ptr32  
#else 
#endif

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// ============================================================================
// FIX:  Stub out DXGI JPEG types for Windows 10 SDK compatibility
// ============================================================================
typedef struct DXGI_JPEG_AC_HUFFMAN_TABLE {
    int CodeCounts[16];
    int CodeValues[162];
} DXGI_JPEG_AC_HUFFMAN_TABLE;

typedef struct DXGI_JPEG_DC_HUFFMAN_TABLE {
    int CodeCounts[12];
    int CodeValues[12];
} DXGI_JPEG_DC_HUFFMAN_TABLE;

typedef struct DXGI_JPEG_QUANTIZATION_TABLE {
    int Elements[64];
} DXGI_JPEG_QUANTIZATION_TABLE;

// ============================================================================
// Rest of stdafx.h
// ============================================================================
#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afx.h>
#include <afxwin.h>
#include <afxsock.h>
#include <T3D.h>
#include <zlib.h>
#include <shlwapi.h>
#include <Psapi.h>

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__944DD3E7_59CF_4318_BAE1_015912087125__INCLUDED_)