// Copyright (c) 2015 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include <algorithm>
#include "libcef_dll/cpptoc/binary_value_cpptoc.h"
#include "libcef_dll/cpptoc/sslcert_principal_cpptoc.h"
#include "libcef_dll/cpptoc/sslinfo_cpptoc.h"


namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

cef_cert_status_t CEF_CALLBACK sslinfo_get_cert_status(
    struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CERT_STATUS_NONE;

  // Execute
  cef_cert_status_t _retval = CefSSLInfoCppToC::Get(self)->GetCertStatus();

  // Return type: simple
  return _retval;
}

int CEF_CALLBACK sslinfo_is_cert_status_error(struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefSSLInfoCppToC::Get(self)->IsCertStatusError();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK sslinfo_is_cert_status_minor_error(
    struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefSSLInfoCppToC::Get(self)->IsCertStatusMinorError();

  // Return type: bool
  return _retval;
}

cef_sslcert_principal_t* CEF_CALLBACK sslinfo_get_subject(
    struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefSSLCertPrincipal> _retval = CefSSLInfoCppToC::Get(
      self)->GetSubject();

  // Return type: refptr_same
  return CefSSLCertPrincipalCppToC::Wrap(_retval);
}

cef_sslcert_principal_t* CEF_CALLBACK sslinfo_get_issuer(
    struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefSSLCertPrincipal> _retval = CefSSLInfoCppToC::Get(
      self)->GetIssuer();

  // Return type: refptr_same
  return CefSSLCertPrincipalCppToC::Wrap(_retval);
}

struct _cef_binary_value_t* CEF_CALLBACK sslinfo_get_serial_number(
    struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefBinaryValue> _retval = CefSSLInfoCppToC::Get(
      self)->GetSerialNumber();

  // Return type: refptr_same
  return CefBinaryValueCppToC::Wrap(_retval);
}

cef_time_t CEF_CALLBACK sslinfo_get_valid_start(struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefTime();

  // Execute
  cef_time_t _retval = CefSSLInfoCppToC::Get(self)->GetValidStart();

  // Return type: simple
  return _retval;
}

cef_time_t CEF_CALLBACK sslinfo_get_valid_expiry(struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return CefTime();

  // Execute
  cef_time_t _retval = CefSSLInfoCppToC::Get(self)->GetValidExpiry();

  // Return type: simple
  return _retval;
}

struct _cef_binary_value_t* CEF_CALLBACK sslinfo_get_derencoded(
    struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefBinaryValue> _retval = CefSSLInfoCppToC::Get(
      self)->GetDEREncoded();

  // Return type: refptr_same
  return CefBinaryValueCppToC::Wrap(_retval);
}

struct _cef_binary_value_t* CEF_CALLBACK sslinfo_get_pemencoded(
    struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefBinaryValue> _retval = CefSSLInfoCppToC::Get(
      self)->GetPEMEncoded();

  // Return type: refptr_same
  return CefBinaryValueCppToC::Wrap(_retval);
}

size_t CEF_CALLBACK sslinfo_get_issuer_chain_size(struct _cef_sslinfo_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  size_t _retval = CefSSLInfoCppToC::Get(self)->GetIssuerChainSize();

  // Return type: simple
  return _retval;
}

void CEF_CALLBACK sslinfo_get_derencoded_issuer_chain(
    struct _cef_sslinfo_t* self, size_t* chainCount,
    struct _cef_binary_value_t** chain) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: chain; type: refptr_vec_same_byref
  DCHECK(chainCount && (*chainCount == 0 || chain));
  if (!chainCount || (*chainCount > 0 && !chain))
    return;

  // Translate param: chain; type: refptr_vec_same_byref
  std::vector<CefRefPtr<CefBinaryValue> > chainList;
  if (chainCount && *chainCount > 0 && chain) {
    for (size_t i = 0; i < *chainCount; ++i) {
      chainList.push_back(CefBinaryValueCppToC::Unwrap(chain[i]));
    }
  }

  // Execute
  CefSSLInfoCppToC::Get(self)->GetDEREncodedIssuerChain(
      chainList);

  // Restore param: chain; type: refptr_vec_same_byref
  if (chainCount && chain) {
    *chainCount = std::min(chainList.size(), *chainCount);
    if (*chainCount > 0) {
      for (size_t i = 0; i < *chainCount; ++i) {
        chain[i] = CefBinaryValueCppToC::Wrap(chainList[i]);
      }
    }
  }
}

void CEF_CALLBACK sslinfo_get_pemencoded_issuer_chain(
    struct _cef_sslinfo_t* self, size_t* chainCount,
    struct _cef_binary_value_t** chain) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;
  // Verify param: chain; type: refptr_vec_same_byref
  DCHECK(chainCount && (*chainCount == 0 || chain));
  if (!chainCount || (*chainCount > 0 && !chain))
    return;

  // Translate param: chain; type: refptr_vec_same_byref
  std::vector<CefRefPtr<CefBinaryValue> > chainList;
  if (chainCount && *chainCount > 0 && chain) {
    for (size_t i = 0; i < *chainCount; ++i) {
      chainList.push_back(CefBinaryValueCppToC::Unwrap(chain[i]));
    }
  }

  // Execute
  CefSSLInfoCppToC::Get(self)->GetPEMEncodedIssuerChain(
      chainList);

  // Restore param: chain; type: refptr_vec_same_byref
  if (chainCount && chain) {
    *chainCount = std::min(chainList.size(), *chainCount);
    if (*chainCount > 0) {
      for (size_t i = 0; i < *chainCount; ++i) {
        chain[i] = CefBinaryValueCppToC::Wrap(chainList[i]);
      }
    }
  }
}

}  // namespace


// CONSTRUCTOR - Do not edit by hand.

CefSSLInfoCppToC::CefSSLInfoCppToC() {
  GetStruct()->get_cert_status = sslinfo_get_cert_status;
  GetStruct()->is_cert_status_error = sslinfo_is_cert_status_error;
  GetStruct()->is_cert_status_minor_error = sslinfo_is_cert_status_minor_error;
  GetStruct()->get_subject = sslinfo_get_subject;
  GetStruct()->get_issuer = sslinfo_get_issuer;
  GetStruct()->get_serial_number = sslinfo_get_serial_number;
  GetStruct()->get_valid_start = sslinfo_get_valid_start;
  GetStruct()->get_valid_expiry = sslinfo_get_valid_expiry;
  GetStruct()->get_derencoded = sslinfo_get_derencoded;
  GetStruct()->get_pemencoded = sslinfo_get_pemencoded;
  GetStruct()->get_issuer_chain_size = sslinfo_get_issuer_chain_size;
  GetStruct()->get_derencoded_issuer_chain =
      sslinfo_get_derencoded_issuer_chain;
  GetStruct()->get_pemencoded_issuer_chain =
      sslinfo_get_pemencoded_issuer_chain;
}

template<> CefRefPtr<CefSSLInfo> CefCppToC<CefSSLInfoCppToC, CefSSLInfo,
    cef_sslinfo_t>::UnwrapDerived(CefWrapperType type, cef_sslinfo_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#ifndef NDEBUG
template<> base::AtomicRefCount CefCppToC<CefSSLInfoCppToC, CefSSLInfo,
    cef_sslinfo_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCppToC<CefSSLInfoCppToC, CefSSLInfo,
    cef_sslinfo_t>::kWrapperType = WT_SSLINFO;
