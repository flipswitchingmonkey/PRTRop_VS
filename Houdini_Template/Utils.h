//
//  Utils.h
//  PRTFile
//
//  Created by Ali Nakipoğlu on 1/14/13.
//  Copyright (c) 2013 Ali Nakipoğlu. All rights reserved.
//

#ifndef PRTFile_Utils_h
#define PRTFile_Utils_h

#include <boost/shared_ptr.hpp>

namespace PRTFile
{
    template <typename T> class toRefType { public: typedef boost::shared_ptr<T> type; };
    template <typename T> class toElementType { public: typedef typename T::element_type type; };
}

#endif
