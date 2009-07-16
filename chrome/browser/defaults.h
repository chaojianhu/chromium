// Copyright (c) 2009 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Defines various defaults whose values varies depending upon the OS.

#ifndef CHROME_BROWSER_DEFAULTS_H_
#define CHROME_BROWSER_DEFAULTS_H_

#include "build/build_config.h"
#include "chrome/browser/session_startup_pref.h"

namespace browser_defaults {

#if defined(OS_LINUX)

// Whether the size of the autocomplete's font should be changed.
extern const bool kForceAutocompleteEditFontSize;

// Size of the font used in the autocomplete popup.
extern const int kAutocompletePopupFontSize;

#endif

// The default value for session startup.
extern const SessionStartupPref::Type kDefaultSessionStartupType;

// On launching Chrome should we show the crash info bar if Chrome crashed?
extern const bool kSuppressCrashInfoBar;

// Should we restore the last session if the user opted to restore the last
// session on startup and Chrome crashed?
// TODO(sky): this should be removed once Chrome OS cleanly shuts down Chrome.
extern const bool kRestoreAfterCrash;

}  // namespace browser_defaults

#endif  // CHROME_BROWSER_DEFAULTS_H_
