/*
 * Copyright (C) 2009 Nikhil Marathe ( nsm.nikhil@gmail.com )
 * This file is distributed under the MIT License. Please see
 * LICENSE for details
 */
#include <v8.h>

#include "audioproperties.h"
#include "tag.h"

using namespace v8;
using namespace node;
using namespace node_taglib;


extern "C" void
init (Handle<Object> target)
{
    HandleScope scope;

    AudioProperties::Initialize(target);
    Tag::Initialize(target);
}

