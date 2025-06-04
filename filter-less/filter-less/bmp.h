// BMP-related data types based on Microsoft's own

#include <stdint.h>

// These data types are essentially aliases for C/C++ primitive data types.
// Adapted from http://msdn.microsoft.com/en-us/library/cc230309.aspx.
// See https://en.wikipedia.org/wiki/C_data_types#stdint.h for more on stdint.h.

typedef uint8_t  BYTE;
typedef uint32_t DWORD;
typedef int32_t  LONG;
typedef uint16_t WORD;

// The BITMAPFILEHEADER structure contains information about the type, size,
// and layout of a file that contains a DIB [device-independent bitmap].
// Adapted from http://msdn.microsoft.com/en-us/library/dd183374(VS.85).aspx.

typedef struct
{
    WORD   bfType; // 2 Bytes
    DWORD  bfSize; // 4 Bytes
    WORD   bfReserved1; // 2 Bytes
    WORD   bfReserved2; // 2 Bytes
    DWORD  bfOffBits;  // 4 Bytes
} __attribute__((__packed__))
BITMAPFILEHEADER;

// The BITMAPINFOHEADER structure contains information about the
// dimensions and color format of a DIB [device-independent bitmap].
// Adapted from http://msdn.microsoft.com/en-us/library/dd183376(VS.85).aspx.

typedef struct
{
    DWORD  biSize; // 4 Bytes
    LONG   biWidth; // 4 Bytes
    LONG   biHeight; // 4 Bytes
    WORD   biPlanes; // 2 Bytes
    WORD   biBitCount; // 2 Bytes
    DWORD  biCompression; // 4 Bytes
    DWORD  biSizeImage;  // 4 Bytes
    LONG   biXPelsPerMeter; // 4 Bytes
    LONG   biYPelsPerMeter; // 4 Bytes
    DWORD  biClrUsed; // 4 Bytes
    DWORD  biClrImportant; // 4 Bytes
} __attribute__((__packed__))
BITMAPINFOHEADER;

// The RGBTRIPLE structure describes a color consisting of relative intensities of
// red, green, and blue. Adapted from http://msdn.microsoft.com/en-us/library/aa922590.aspx.

typedef struct
{
    BYTE  rgbtBlue;
    BYTE  rgbtGreen;
    BYTE  rgbtRed;
} __attribute__((__packed__))
RGBTRIPLE;
