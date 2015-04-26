#!/bin/bash

FMOD_DIR=fmod/api/lowlevel/lib/x86_64

export LD_PRELOAD="$FMOD_DIR/libfmod.so"

install/bin/myapp
