/**
 * @file operator.hpp
 * @brief Common operators, and new implementations with Heaps.
 */

#pragma once

#include <cstddef>
#include <new>
#include "types.h"

namespace sead {
    class Heap;
}

// Nintendo didn't implement these for some reason
void* operator new(std::size_t size, void*);
void* operator new[](std::size_t size, void*);

void* operator new(size_t size);
void* operator new[](size_t size);
void* operator new(size_t size, const std::nothrow_t&) noexcept;
void* operator new[](size_t size, const std::nothrow_t&) noexcept;

void* operator new(size_t size, s32 alignment);
void* operator new[](size_t size, s32 alignment);
void* operator new(size_t size, s32 alignment, const std::nothrow_t&) noexcept;
void* operator new[](size_t size, s32 alignment, const std::nothrow_t&) noexcept;

void* operator new(size_t size, sead::Heap* heap, const std::nothrow_t&) noexcept;
void* operator new[](size_t size, sead::Heap* heap, const std::nothrow_t&) noexcept;

void* operator new(size_t size, sead::Heap* heap, s32 alignment = sizeof(void*));
void* operator new[](size_t size, sead::Heap* heap, s32 alignment = sizeof(void*));
void* operator new(size_t size, sead::Heap* heap, s32 alignment, const std::nothrow_t&) noexcept;
void* operator new[](size_t size, sead::Heap* heap, s32 alignment, const std::nothrow_t&) noexcept;

void operator delete(void* ptr) noexcept;
void operator delete[](void* ptr) noexcept;
void operator delete(void* ptr, const std::nothrow_t&) noexcept;
void operator delete[](void* ptr, const std::nothrow_t&) noexcept;

void operator delete(void* ptr, s32);
void operator delete[](void* ptr, s32);
void operator delete(void* ptr, s32, const std::nothrow_t&) noexcept;
void operator delete[](void* ptr, s32, const std::nothrow_t&) noexcept;

void operator delete(void* ptr, sead::Heap*, const std::nothrow_t&) noexcept;
void operator delete[](void* ptr, sead::Heap*, const std::nothrow_t&) noexcept;

void operator delete(void* ptr, sead::Heap*, s32);
void operator delete[](void* ptr, sead::Heap*, s32);
void operator delete(void* ptr, sead::Heap*, s32, const std::nothrow_t&) noexcept;
void operator delete[](void* ptr, sead::Heap*, s32, const std::nothrow_t&) noexcept;