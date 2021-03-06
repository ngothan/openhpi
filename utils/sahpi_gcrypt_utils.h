/*      
 *
 * Copyright (C) 2013, Hewlett-Packard Development Company, LLP
 * (C) Copyright 2015-2018 Hewlett Packard Enterprise Development LP
 *                     All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in
 * the documentation and/or other materials provided with the distribution.
 *
 * Neither the name of the Hewlett Packard Enterprise, nor the names
 * of its contributors may be used to endorse or promote products
 * derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED
 * TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Author(s)
 *      Mohan Devarajulu <mohan@fc.hp.com>
 */

#ifndef __SAHPI_GCRYPT_UTILS_H
#define __SAHPI_GCRYPT_UTILS_H

#ifndef __OH_UTILS_H
#warning *** Include oh_utils.h instead of individual utility header files ***
#endif

#ifdef HAVE_ENCRYPT
#include <gcrypt.h>

#ifdef __cplusplus
extern "C" {
#endif 

#define OHPI_ENCRYPT 1
#define OHPI_DECRYPT 2

/* The following one needs to be changed if the location changes *Sigh* */
#define PUUID_PATH "/sys/devices/virtual/dmi/id/product_uuid"
#define SAHPI_DEFKEY "20030116"

SaErrorT oh_initialize_gcrypt(gcry_cipher_hd_t *h1, gcry_cipher_hd_t *h2, gchar *key);
gchar * oh_crypt(gchar *file_path, SaHpiUint32T type);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* HAVE_ENCRYPT */ 
#endif /* __SAHPI_GCRYPT_UTILS_H */
