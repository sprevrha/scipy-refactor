# -*- python -*- like file
''' Utilities for generic processing of return arrays from read
'''

import numpy as np
cimport numpy as cnp


cpdef size_t cproduct(tup):
    cdef size_t res = 1
    cdef int i
    for i in range(len(tup)):
        res *= tup[i]
    return res


cpdef object squeeze_element(cnp.ndarray arr):
    ''' Return squeezed element

    The returned object may not be an ndarray - for example if we do
    ``arr.item`` to return a ``mat_struct`` object from a struct array '''
    if not arr.size:
        return np.array([])
    arr = np.squeeze(arr)
    if not arr.shape and arr.dtype.isbuiltin: # 0d coverted to scalar
        return arr.item()
    return arr


cpdef cnp.ndarray chars_to_strings(in_arr):
    ''' Convert final axis of char array to strings

    Parameters
    ----------
    in_arr : array
       dtype of 'U1'

    Returns
    -------
    str_arr : array
       dtype of 'UN' where N is the length of the last dimension of
       ``arr``
    '''
    cdef cnp.ndarray arr = in_arr
    cdef int ndim = arr.ndim
    cdef cnp.npy_intp *dims = cnp.PyArray_DIMS(arr)
    cdef cnp.npy_intp last_dim = dims[ndim-1]
    cdef object new_dt_str, out_shape
    if last_dim == 0: # deal with empty array case
        # Started with U1 - which is OK for us
        new_dt_str = arr.dtype.str
        # So far we only know this is an empty array and that the last length is
        # 0.  The other dimensions could be non-zero.  We set the next to last
        # dimension to zero to signal emptiness
        if ndim == 2:
            out_shape = (0,)
        else:
            out_shape = in_arr.shape[:-2] + (0,)
    else: # make new dtype string with N appended
        new_dt_str = arr.dtype.str[:-1] + str(last_dim)
        out_shape = in_arr.shape[:-1]
    # Copy to deal with F ordered arrays
    arr = np.ascontiguousarray(arr)
    arr = arr.view(new_dt_str)
    return arr.reshape(out_shape)
