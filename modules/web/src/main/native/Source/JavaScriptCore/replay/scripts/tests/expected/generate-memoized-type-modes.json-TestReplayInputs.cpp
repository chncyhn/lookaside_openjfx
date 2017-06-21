/*
 * Copyright (C) 2014 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

// DO NOT EDIT THIS FILE. It is automatically generated from generate-memoized-type-modes.json
// by the script: JavaScriptCore/replay/scripts/CodeGeneratorReplayInputs.py

#include "config.h"
#include "generate-memoized-type-modes.json-TestReplayInputs.h"

#if ENABLE(WEB_REPLAY)
#include "InternalNamespaceImplIncludeDummy.h"
#include <platform/ExternalNamespaceImplIncludeDummy.h>

namespace Test {
ScalarInput::ScalarInput(ScalarType data)
    : NondeterministicInput<ScalarInput>()
    , m_data(data)
{
}

ScalarInput::~ScalarInput()
{
}

MapInput::MapInput(std::unique_ptr<MapType> data)
    : NondeterministicInput<MapInput>()
    , m_data(WTFMove(data))
{
}

MapInput::~MapInput()
{
}
} // namespace Test

namespace JSC {
const String& InputTraits<Test::ScalarInput>::type()
{
    static NeverDestroyed<const String> type(ASCIILiteral("ScalarInput"));
    return type;
}

void InputTraits<Test::ScalarInput>::encode(EncodedValue& encodedValue, const Test::ScalarInput& input)
{
    encodedValue.put<ScalarType>(ASCIILiteral("data"), input.data());
}

bool InputTraits<Test::ScalarInput>::decode(EncodedValue& encodedValue, std::unique_ptr<Test::ScalarInput>& input)
{
    ScalarType data;
    if (!encodedValue.get<ScalarType>(ASCIILiteral("data"), data))
        return false;

    input = std::make_unique<Test::ScalarInput>(data);
    return true;
}

const String& InputTraits<Test::MapInput>::type()
{
    static NeverDestroyed<const String> type(ASCIILiteral("MapInput"));
    return type;
}

void InputTraits<Test::MapInput>::encode(EncodedValue& encodedValue, const Test::MapInput& input)
{
    encodedValue.put<MapType>(ASCIILiteral("data"), input.data());
}

bool InputTraits<Test::MapInput>::decode(EncodedValue& encodedValue, std::unique_ptr<Test::MapInput>& input)
{
    std::unique_ptr<MapType> data;
    if (!encodedValue.get<MapType>(ASCIILiteral("data"), data))
        return false;

    input = std::make_unique<Test::MapInput>(WTFMove(data));
    return true;
}

} // namespace JSC

#endif // ENABLE(WEB_REPLAY)
