/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "GenericFactory.h"

namespace mozilla {
namespace embedlite {

NS_IMPL_ISUPPORTS1(GenericFactory, nsIFactory)

NS_IMETHODIMP
GenericFactory::CreateInstance(nsISupports* aOuter, REFNSIID aIID,
                               void** aResult)
{
  return mCtor(aOuter, aIID, aResult);
}

NS_IMETHODIMP
GenericFactory::LockFactory(bool aLock)
{
  NS_ERROR("Vestigial method, never called!");
  return NS_ERROR_FAILURE;
}

} // namespace mozilla
} // namespace mozilla
