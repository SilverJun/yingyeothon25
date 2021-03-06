#ifndef PATTERN_HPP
#define PATTERN_HPP
#define PATTERN_BYTES 40
#include <string>
#include <vector>
#include "libs/libmem/libmem/libmem.hpp"
//these are the functions in taskmanager where the first 40 bytes are used as a lookup to find them in memory without using an offset
struct LookupPatternTable
{
    mem_byte_t UpdateDataPattern[PATTERN_BYTES];     //{__int64 __fastcall CpuHeatMap::UpdateData(CpuHeatMap *this)}
    mem_byte_t GetBlockWidthPattern[PATTERN_BYTES];  // {__int64 __fastcall CpuHeatMap::GetBlockWidth(CpuHeatMap *this)}
    mem_byte_t GetBlockColorsPattern[PATTERN_BYTES]; //{void __fastcall CpuHeatMap::GetBlockColors(CpuHeatMap *this, int a2, unsigned int *a3, unsigned int *a4)}
    mem_byte_t SetBlockDataPattern[PATTERN_BYTES];   //{__int64 __fastcall CpuHeatMap::SetBlockData(CpuHeatMap *this, unsigned int a2, const unsigned __int16 *a3, unsigned int a4, unsigned int a5)}
    mem_byte_t IsServerPattern[PATTERN_BYTES];       //{bool __fastcall RunTimeSettings::IsServer(RunTimeSettings *this)}
    mem_byte_t SetRefreshRatePattern[PATTERN_BYTES]; //{__int64 __fastcall TmTraceControl::SetRefreshRate(__int64 a1, UINT time)}
    std::string version;                             //verison of task manager running; can be found under the details of TaskMgr.exe.
};
LookupPatternTable table[] = {
    {{0x48, 0x89, 0x5c, 0x24, 0x10, 0x48, 0x89, 0x74, 0x24, 0x18, 0x55, 0x57, 0x41, 0x56, 0x48, 0x8d, 0x6c, 0x24, 0xc0, 0x48, 0x81, 0xec, 0x40, 0x01, 0x00, 0x00, 0x48, 0x8b, 0x05, 0x97, 0xd4, 0x04, 0x00, 0x48, 0x33, 0xc4, 0x48, 0x89, 0x45, 0x30},
     {0x48, 0x83, 0xec, 0x58, 0x48, 0x8b, 0x05, 0xb9, 0xde, 0x04, 0x00, 0x48, 0x33, 0xc4, 0x48, 0x89, 0x44, 0x24, 0x48, 0x66, 0x0f, 0x6f, 0x05, 0x69, 0xc5, 0x02, 0x00, 0x66, 0x0f, 0x6f, 0x0d, 0x51, 0xc5, 0x02, 0x00, 0x8b, 0x05, 0x33, 0x0c, 0x05},
     {0x48, 0x89, 0x5C, 0x24, 0x08, 0x48, 0x89, 0x74, 0x24, 0x10, 0x57, 0x48, 0x83, 0xEC, 0x20, 0x65, 0x48, 0x8B, 0x04, 0x25, 0x58, 0x00, 0x00, 0x00, 0x8B, 0xDA, 0xBA, 0x04, 0x00, 0x00, 0x00, 0x49, 0x8B, 0xF9, 0x49, 0x8B, 0xF0, 0x48, 0x8B, 0x08},
     {0x48, 0x89, 0x5C, 0x24, 0x08, 0x48, 0x89, 0x6C, 0x24, 0x10, 0x48, 0x89, 0x74, 0x24, 0x18, 0x57, 0x41, 0x56, 0x41, 0x57, 0x48, 0x83, 0xEC, 0x30, 0x48, 0x8B, 0x41, 0x28, 0x48, 0x8B, 0xF9, 0x44, 0x8B, 0xDA, 0x41, 0x8B, 0xE9, 0x8B, 0xF2, 0x4D},
     {0x40, 0x53, 0x48, 0x81, 0xEC, 0x60, 0x01, 0x00, 0x00, 0x48, 0x8B, 0x05, 0xB4, 0xDB, 0x0F, 0x00, 0x48, 0x33, 0xC4, 0x48, 0x89, 0x84, 0x24, 0x50, 0x01, 0x00, 0x00, 0x83, 0xB9, 0x2C, 0x09, 0x00, 0x00, 0x00, 0x48, 0x8B, 0xD9, 0x74, 0x24, 0x83},
     {0x48, 0x89, 0x5C, 0x24, 0x08, 0x48, 0x89, 0x6C, 0x24, 0x10, 0x48, 0x89, 0x74, 0x24, 0x18, 0x57, 0x48, 0x83, 0xEC, 0x20, 0x89, 0x15, 0x1E, 0xA1, 0x0B, 0x00, 0x48, 0x8B, 0xE9, 0x48, 0x8B, 0x59, 0x60, 0x8B, 0xFA, 0x48, 0x8B, 0xCB, 0x33, 0xF6},
     "10.0.19041.1202"},
    };

#endif