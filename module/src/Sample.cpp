#include "Sample.h"

int AddOne(int n)
{
    return n+1;
}

int Sqrt(int n)
{
    return n*n;
}

PyObject* SqrtInPyObj(PyObject* obj)
{
    int n = PyLong_AsLong(obj);
    return Py_BuildValue("i", n*n);
}