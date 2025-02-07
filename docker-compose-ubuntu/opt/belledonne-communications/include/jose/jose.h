/* vim: set tabstop=8 shiftwidth=4 softtabstop=4 expandtab smarttab colorcolumn=80: */
/*
 * Copyright 2016 Red Hat, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * \mainpage José API Documentation
 * \author Nathaniel McCallum
 * \copyright Apache License, Version 2.0
 *
 * José is a C-language implementation of the Javascript Object Signing and
 * Encryption standards. Specifically, José aims towards implementing the
 * following standards:
 *
 * * RFC 7515 - JSON Web Signature (JWS)
 * * RFC 7516 - JSON Web Encryption (JWE)
 * * RFC 7517 - JSON Web Key (JWK)
 * * RFC 7518 - JSON Web Algorithms (JWA)
 * * RFC 7519 - JSON Web Token (JWT)
 * * RFC 7520 - Examples of Protecting Content Using JOSE
 * * RFC 7638 - JSON Web Key (JWK) Thumbprint
 */

#pragma once

#include <jose/b64.h>
#include <jose/jwe.h>
#include <jose/jwk.h>
#include <jose/jws.h>

#define JOSE_VERSION 65536
