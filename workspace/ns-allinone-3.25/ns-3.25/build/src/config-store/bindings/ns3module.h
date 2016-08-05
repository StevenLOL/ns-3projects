/* This file was generated by PyBindGen 0.0.0.0 */
#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <stddef.h>


#if PY_VERSION_HEX < 0x020400F0

#define PyEval_ThreadsInitialized() 1

#define Py_CLEAR(op)				\
        do {                            	\
                if (op) {			\
                        PyObject *tmp = (PyObject *)(op);	\
                        (op) = NULL;		\
                        Py_DECREF(tmp);		\
                }				\
        } while (0)


#define Py_VISIT(op)							\
        do { 								\
                if (op) {						\
                        int vret = visit((PyObject *)(op), arg);	\
                        if (vret)					\
                                return vret;				\
                }							\
        } while (0)

#endif



#if PY_VERSION_HEX < 0x020500F0

typedef int Py_ssize_t;
# define PY_SSIZE_T_MAX INT_MAX
# define PY_SSIZE_T_MIN INT_MIN
typedef inquiry lenfunc;
typedef intargfunc ssizeargfunc;
typedef intobjargproc ssizeobjargproc;

#endif


#ifndef PyVarObject_HEAD_INIT
#define PyVarObject_HEAD_INIT(type, size) \
        PyObject_HEAD_INIT(type) size,
#endif


#if PY_VERSION_HEX >= 0x03000000
typedef void* cmpfunc;
#define PyCObject_FromVoidPtr(a, b) PyCapsule_New(a, NULL, b)
#define PyCObject_AsVoidPtr(a) PyCapsule_GetPointer(a, NULL)
#define PyString_FromString(a) PyBytes_FromString(a)
#define Py_TPFLAGS_CHECKTYPES 0 /* this flag doesn't exist in python 3 */
#endif


#if     __GNUC__ > 2
# define PYBINDGEN_UNUSED(param) param __attribute__((__unused__))
#elif     __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ > 4)
# define PYBINDGEN_UNUSED(param) __attribute__((__unused__)) param
#else
# define PYBINDGEN_UNUSED(param) param
#endif  /* !__GNUC__ */

#ifndef _PyBindGenWrapperFlags_defined_
#define _PyBindGenWrapperFlags_defined_
typedef enum _PyBindGenWrapperFlags {
   PYBINDGEN_WRAPPER_FLAG_NONE = 0,
   PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED = (1<<0),
} PyBindGenWrapperFlags;
#endif


#include "ns3/config-store-module.h"
#include <typeinfo>
#include <ostream>
#include <sstream>
#include <map>
#include <iostream>
/* --- forward declarations --- */


typedef struct {
    PyObject_HEAD
    ns3::CallbackBase *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3CallbackBase;


extern PyTypeObject *_PyNs3CallbackBase_Type;
#define PyNs3CallbackBase_Type (*_PyNs3CallbackBase_Type)

extern std::map<void*, PyObject*> *_PyNs3CallbackBase_wrapper_registry;
#define PyNs3CallbackBase_wrapper_registry (*_PyNs3CallbackBase_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::Hasher *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3Hasher;


extern PyTypeObject *_PyNs3Hasher_Type;
#define PyNs3Hasher_Type (*_PyNs3Hasher_Type)

extern std::map<void*, PyObject*> *_PyNs3Hasher_wrapper_registry;
#define PyNs3Hasher_wrapper_registry (*_PyNs3Hasher_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::ObjectBase *obj;
    PyObject *inst_dict;
    PyBindGenWrapperFlags flags:8;
} PyNs3ObjectBase;


extern PyTypeObject *_PyNs3ObjectBase_Type;
#define PyNs3ObjectBase_Type (*_PyNs3ObjectBase_Type)

class PyNs3ObjectBase__PythonHelper : public ns3::ObjectBase
{
public:
    PyObject *m_pyself;

    void set_pyobj(PyObject *pyobj)
    {
        Py_XDECREF(m_pyself);
        Py_INCREF(pyobj);
        m_pyself = pyobj;
    }

    virtual ~PyNs3ObjectBase__PythonHelper()
    {
        Py_CLEAR(m_pyself);
    }

};

extern std::map<void*, PyObject*> *_PyNs3ObjectBase_wrapper_registry;
#define PyNs3ObjectBase_wrapper_registry (*_PyNs3ObjectBase_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::TypeId *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TypeId;


extern PyTypeObject *_PyNs3TypeId_Type;
#define PyNs3TypeId_Type (*_PyNs3TypeId_Type)

extern std::map<void*, PyObject*> *_PyNs3TypeId_wrapper_registry;
#define PyNs3TypeId_wrapper_registry (*_PyNs3TypeId_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::TypeId::AttributeInformation *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TypeIdAttributeInformation;


extern PyTypeObject *_PyNs3TypeIdAttributeInformation_Type;
#define PyNs3TypeIdAttributeInformation_Type (*_PyNs3TypeIdAttributeInformation_Type)

extern std::map<void*, PyObject*> *_PyNs3TypeIdAttributeInformation_wrapper_registry;
#define PyNs3TypeIdAttributeInformation_wrapper_registry (*_PyNs3TypeIdAttributeInformation_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::TypeId::TraceSourceInformation *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TypeIdTraceSourceInformation;


extern PyTypeObject *_PyNs3TypeIdTraceSourceInformation_Type;
#define PyNs3TypeIdTraceSourceInformation_Type (*_PyNs3TypeIdTraceSourceInformation_Type)

extern std::map<void*, PyObject*> *_PyNs3TypeIdTraceSourceInformation_wrapper_registry;
#define PyNs3TypeIdTraceSourceInformation_wrapper_registry (*_PyNs3TypeIdTraceSourceInformation_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::empty *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3Empty;


extern PyTypeObject *_PyNs3Empty_Type;
#define PyNs3Empty_Type (*_PyNs3Empty_Type)

extern std::map<void*, PyObject*> *_PyNs3Empty_wrapper_registry;
#define PyNs3Empty_wrapper_registry (*_PyNs3Empty_wrapper_registry)

typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::AttributeAccessor, ns3::empty, ns3::DefaultDeleter<ns3::AttributeAccessor> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt___Type;
#define PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt___Type (*_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt___Type)



#include <map>
#include <string>
#include <typeinfo>
#if defined(__GNUC__) && __GNUC__ >= 3 && !defined(__clang__)
# include <cxxabi.h>
#endif

#define PBG_TYPEMAP_DEBUG 0

namespace pybindgen {

class TypeMap
{
   std::map<std::string, PyTypeObject *> m_map;

public:

   TypeMap() {}

   void register_wrapper(const std::type_info &cpp_type_info, PyTypeObject *python_wrapper)
   {

#if PBG_TYPEMAP_DEBUG
   std::cerr << "register_wrapper(this=" << this << ", type_name=" << cpp_type_info.name()
             << ", python_wrapper=" << python_wrapper->tp_name << ")" << std::endl;
#endif

       m_map[std::string(cpp_type_info.name())] = python_wrapper;
   }



   PyTypeObject * lookup_wrapper(const std::type_info &cpp_type_info, PyTypeObject *fallback_wrapper)
   {

#if PBG_TYPEMAP_DEBUG
   std::cerr << "lookup_wrapper(this=" << this << ", type_name=" << cpp_type_info.name() << ")" << std::endl;
#endif

       PyTypeObject *python_wrapper = m_map[cpp_type_info.name()];
       if (python_wrapper)
           return python_wrapper;
       else {
#if defined(__GNUC__) && __GNUC__ >= 3 && !defined(__clang__)

           // Get closest (in the single inheritance tree provided by cxxabi.h)
           // registered python wrapper.
           const abi::__si_class_type_info *_typeinfo =
               dynamic_cast<const abi::__si_class_type_info*> (&cpp_type_info);
#if PBG_TYPEMAP_DEBUG
          std::cerr << "  -> looking at C++ type " << _typeinfo->name() << std::endl;
#endif
           while (_typeinfo && (python_wrapper = m_map[std::string(_typeinfo->name())]) == 0) {
               _typeinfo = dynamic_cast<const abi::__si_class_type_info*> (_typeinfo->__base_type);
#if PBG_TYPEMAP_DEBUG
               std::cerr << "  -> looking at C++ type " << _typeinfo->name() << std::endl;
#endif
           }

#if PBG_TYPEMAP_DEBUG
          if (python_wrapper) {
              std::cerr << "  -> found match " << std::endl;
          } else {
              std::cerr << "  -> return fallback wrapper" << std::endl;
          }
#endif

           return python_wrapper? python_wrapper : fallback_wrapper;

#else // non gcc 3+ compilers can only match against explicitly registered classes, not hidden subclasses
           return fallback_wrapper;
#endif
       }
   }
};

}


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3AttributeAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeAccessor__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::AttributeChecker, ns3::empty, ns3::DefaultDeleter<ns3::AttributeChecker> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt___Type;
#define PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt___Type (*_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt___Type)


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3AttributeChecker_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeChecker__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::AttributeValue, ns3::empty, ns3::DefaultDeleter<ns3::AttributeValue> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt___Type;
#define PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt___Type (*_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt___Type)


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3AttributeValue_Ns3Empty_Ns3DefaultDeleter__lt__ns3AttributeValue__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::CallbackImplBase, ns3::empty, ns3::DefaultDeleter<ns3::CallbackImplBase> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt___Type;
#define PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt___Type (*_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt___Type)


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3CallbackImplBase_Ns3Empty_Ns3DefaultDeleter__lt__ns3CallbackImplBase__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::Hash::Implementation, ns3::empty, ns3::DefaultDeleter<ns3::Hash::Implementation> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt___Type;
#define PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt___Type (*_PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt___Type)


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3HashImplementation_Ns3Empty_Ns3DefaultDeleter__lt__ns3HashImplementation__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::SimpleRefCount< ns3::TraceSourceAccessor, ns3::empty, ns3::DefaultDeleter<ns3::TraceSourceAccessor> > *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt__;


extern PyTypeObject *_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt___Type;
#define PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt___Type (*_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt___Type)


extern pybindgen::TypeMap *_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map;

#define PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map (*_PyNs3SimpleRefCount__Ns3TraceSourceAccessor_Ns3Empty_Ns3DefaultDeleter__lt__ns3TraceSourceAccessor__gt____typeid_map)


typedef struct {
    PyObject_HEAD
    ns3::TraceSourceAccessor *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TraceSourceAccessor;


extern PyTypeObject *_PyNs3TraceSourceAccessor_Type;
#define PyNs3TraceSourceAccessor_Type (*_PyNs3TraceSourceAccessor_Type)


typedef struct {
    PyObject_HEAD
    ns3::AttributeAccessor *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3AttributeAccessor;


extern PyTypeObject *_PyNs3AttributeAccessor_Type;
#define PyNs3AttributeAccessor_Type (*_PyNs3AttributeAccessor_Type)


typedef struct {
    PyObject_HEAD
    ns3::AttributeChecker *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3AttributeChecker;


extern PyTypeObject *_PyNs3AttributeChecker_Type;
#define PyNs3AttributeChecker_Type (*_PyNs3AttributeChecker_Type)


typedef struct {
    PyObject_HEAD
    ns3::AttributeValue *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3AttributeValue;


extern PyTypeObject *_PyNs3AttributeValue_Type;
#define PyNs3AttributeValue_Type (*_PyNs3AttributeValue_Type)


typedef struct {
    PyObject_HEAD
    ns3::CallbackChecker *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3CallbackChecker;


extern PyTypeObject *_PyNs3CallbackChecker_Type;
#define PyNs3CallbackChecker_Type (*_PyNs3CallbackChecker_Type)


typedef struct {
    PyObject_HEAD
    ns3::CallbackImplBase *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3CallbackImplBase;


extern PyTypeObject *_PyNs3CallbackImplBase_Type;
#define PyNs3CallbackImplBase_Type (*_PyNs3CallbackImplBase_Type)


typedef struct {
    PyObject_HEAD
    ns3::CallbackValue *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3CallbackValue;


extern PyTypeObject *_PyNs3CallbackValue_Type;
#define PyNs3CallbackValue_Type (*_PyNs3CallbackValue_Type)


typedef struct {
    PyObject_HEAD
    ns3::EmptyAttributeValue *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3EmptyAttributeValue;


extern PyTypeObject *_PyNs3EmptyAttributeValue_Type;
#define PyNs3EmptyAttributeValue_Type (*_PyNs3EmptyAttributeValue_Type)


typedef struct {
    PyObject_HEAD
    ns3::TypeIdChecker *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TypeIdChecker;


extern PyTypeObject *_PyNs3TypeIdChecker_Type;
#define PyNs3TypeIdChecker_Type (*_PyNs3TypeIdChecker_Type)


typedef struct {
    PyObject_HEAD
    ns3::TypeIdValue *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3TypeIdValue;


extern PyTypeObject *_PyNs3TypeIdValue_Type;
#define PyNs3TypeIdValue_Type (*_PyNs3TypeIdValue_Type)


typedef struct {
    PyObject_HEAD
    ns3::FileConfig *obj;
    PyObject *inst_dict;
    PyBindGenWrapperFlags flags:8;
} PyNs3FileConfig;


extern PyTypeObject PyNs3FileConfig_Type;

class PyNs3FileConfig__PythonHelper : public ns3::FileConfig
{
public:
    PyObject *m_pyself;
    PyNs3FileConfig__PythonHelper()
        : ns3::FileConfig(), m_pyself(NULL)
        {}

    PyNs3FileConfig__PythonHelper(ns3::FileConfig const & arg0)
        : ns3::FileConfig(arg0), m_pyself(NULL)
        {}


    void set_pyobj(PyObject *pyobj)
    {
        Py_XDECREF(m_pyself);
        Py_INCREF(pyobj);
        m_pyself = pyobj;
    }

    virtual ~PyNs3FileConfig__PythonHelper()
    {
        Py_CLEAR(m_pyself);
    }


    virtual void Attributes();

    virtual void Default();

    virtual void Global();

    virtual void SetFilename(std::string filename);
};

extern std::map<void*, PyObject*> PyNs3FileConfig_wrapper_registry;

typedef struct {
    PyObject_HEAD
    ns3::NoneFileConfig *obj;
    PyObject *inst_dict;
    PyBindGenWrapperFlags flags:8;
} PyNs3NoneFileConfig;


extern PyTypeObject PyNs3NoneFileConfig_Type;

class PyNs3NoneFileConfig__PythonHelper : public ns3::NoneFileConfig
{
public:
    PyObject *m_pyself;
    PyNs3NoneFileConfig__PythonHelper(ns3::NoneFileConfig const & arg0)
        : ns3::NoneFileConfig(arg0), m_pyself(NULL)
        {}

    PyNs3NoneFileConfig__PythonHelper()
        : ns3::NoneFileConfig(), m_pyself(NULL)
        {}


    void set_pyobj(PyObject *pyobj)
    {
        Py_XDECREF(m_pyself);
        Py_INCREF(pyobj);
        m_pyself = pyobj;
    }

    virtual ~PyNs3NoneFileConfig__PythonHelper()
    {
        Py_CLEAR(m_pyself);
    }


    virtual void Attributes();

    virtual void Default();

    virtual void Global();

    virtual void SetFilename(std::string filename);
};


typedef struct {
    PyObject_HEAD
    ns3::ConfigStore *obj;
    PyObject *inst_dict;
    PyBindGenWrapperFlags flags:8;
} PyNs3ConfigStore;


extern PyTypeObject PyNs3ConfigStore_Type;

class PyNs3ConfigStore__PythonHelper : public ns3::ConfigStore
{
public:
    PyObject *m_pyself;
    PyNs3ConfigStore__PythonHelper(ns3::ConfigStore const & arg0)
        : ns3::ConfigStore(arg0), m_pyself(NULL)
        {}

    PyNs3ConfigStore__PythonHelper()
        : ns3::ConfigStore(), m_pyself(NULL)
        {}


    void set_pyobj(PyObject *pyobj)
    {
        Py_XDECREF(m_pyself);
        Py_INCREF(pyobj);
        m_pyself = pyobj;
    }

    virtual ~PyNs3ConfigStore__PythonHelper()
    {
        Py_CLEAR(m_pyself);
    }


    static PyObject * _wrap_NotifyConstructionCompleted(PyNs3ConfigStore *self);
    inline void NotifyConstructionCompleted__parent_caller()
    { ns3::ObjectBase::NotifyConstructionCompleted(); }

    virtual ns3::TypeId GetInstanceTypeId() const;

    virtual void NotifyConstructionCompleted();
};

/* --- forward declarations --- */


typedef struct {
    PyObject_HEAD
    ns3::Hash::Implementation *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3HashImplementation;


extern PyTypeObject *_PyNs3HashImplementation_Type;
#define PyNs3HashImplementation_Type (*_PyNs3HashImplementation_Type)

/* --- forward declarations --- */


typedef struct {
    PyObject_HEAD
    ns3::Hash::Function::Fnv1a *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3HashFunctionFnv1a;


extern PyTypeObject *_PyNs3HashFunctionFnv1a_Type;
#define PyNs3HashFunctionFnv1a_Type (*_PyNs3HashFunctionFnv1a_Type)


typedef struct {
    PyObject_HEAD
    ns3::Hash::Function::Hash32 *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3HashFunctionHash32;


extern PyTypeObject *_PyNs3HashFunctionHash32_Type;
#define PyNs3HashFunctionHash32_Type (*_PyNs3HashFunctionHash32_Type)


typedef struct {
    PyObject_HEAD
    ns3::Hash::Function::Hash64 *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3HashFunctionHash64;


extern PyTypeObject *_PyNs3HashFunctionHash64_Type;
#define PyNs3HashFunctionHash64_Type (*_PyNs3HashFunctionHash64_Type)


typedef struct {
    PyObject_HEAD
    ns3::Hash::Function::Murmur3 *obj;
    PyBindGenWrapperFlags flags:8;
} PyNs3HashFunctionMurmur3;


extern PyTypeObject *_PyNs3HashFunctionMurmur3_Type;
#define PyNs3HashFunctionMurmur3_Type (*_PyNs3HashFunctionMurmur3_Type)
