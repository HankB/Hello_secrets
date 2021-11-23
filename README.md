# Hello_secrets

Test way(s) to keep secrets from going public via Github.

## Motivation

Coding for ESP8266 and I need to include SSID/password for my WiFi access point. I don't want to expose this information publicly but wish to share the code. If I rely on obfuscating the secrets every time I commit I'll be in Big Trouble when I forget to do this.

## Strategy

Put the secrets in a file that does not get committed and is included in `.gitignore` to reduce the possibility of accidental commit/push. When the repo is cloned, the first build will fail and the user can view a comment near the error location to indicate what needs to be done to fix.

## Shortcomings

Any testing on the project will fail because of the missing file.

## Improvements

Provide a build environment (e.g. `make`, `cmake`, etc.) that can produce a stub file if one does not already exist. An alternative would be to provide a hook that would scrub secrets from the file on push. That seems fragile.
