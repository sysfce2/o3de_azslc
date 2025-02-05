/*
* Copyright (c) Contributors to the Open 3D Engine Project.
* For complete copyright and license terms please see the LICENSE at the root of this distribution.
*
* SPDX-License-Identifier: Apache-2.0 OR MIT
*
*/
#pragma once

// THIS FILE IS AUTO-GENERATED BY exportKeywords.py

#include <array>
#include <tuple>

namespace AZ::ShaderCompiler::Predefined
{
static constexpr std::array<const char*, 3> Buffer = {
"Buffer",
"RWBuffer",
"RasterizerOrderedBuffer"};

static constexpr std::array<const char*, 3> ByteAddressBuffer = {
"ByteAddressBuffer",
"RWByteAddressBuffer",
"RasterizerOrderedByteAddressBuffer"};

static constexpr std::array<const char*, 2> ConstantBuffer = {
"ConstantBuffer",
"constantbuffer"};

static constexpr std::array<const char*, 9> LibrarySubobject = {
"GlobalRootSignature",
"LocalRootSignature",
"ProceduralPrimitiveHitGroup",
"RaytracingPipelineConfig",
"RaytracingPipelineConfig1",
"RaytracingShaderConfig",
"StateObjectConfig",
"SubobjectToExportsAssociation",
"TriangleHitGroup"};

static constexpr std::array<const char*, 113> Matrix = {
"bool1x1",
"bool1x2",
"bool1x3",
"bool1x4",
"bool2x1",
"bool2x2",
"bool2x3",
"bool2x4",
"bool3x1",
"bool3x2",
"bool3x3",
"bool3x4",
"bool4x1",
"bool4x2",
"bool4x3",
"bool4x4",
"double1x1",
"double1x2",
"double1x3",
"double1x4",
"double2x1",
"double2x2",
"double2x3",
"double2x4",
"double3x1",
"double3x2",
"double3x3",
"double3x4",
"double4x1",
"double4x2",
"double4x3",
"double4x4",
"dword1x1",
"dword1x2",
"dword1x3",
"dword1x4",
"dword2x1",
"dword2x2",
"dword2x3",
"dword2x4",
"dword3x1",
"dword3x2",
"dword3x3",
"dword3x4",
"dword4x1",
"dword4x2",
"dword4x3",
"dword4x4",
"float1x1",
"float1x2",
"float1x3",
"float1x4",
"float2x1",
"float2x2",
"float2x3",
"float2x4",
"float3x1",
"float3x2",
"float3x3",
"float3x4",
"float4x1",
"float4x2",
"float4x3",
"float4x4",
"half1x1",
"half1x2",
"half1x3",
"half1x4",
"half2x1",
"half2x2",
"half2x3",
"half2x4",
"half3x1",
"half3x2",
"half3x3",
"half3x4",
"half4x1",
"half4x2",
"half4x3",
"half4x4",
"int1x1",
"int1x2",
"int1x3",
"int1x4",
"int2x1",
"int2x2",
"int2x3",
"int2x4",
"int3x1",
"int3x2",
"int3x3",
"int3x4",
"int4x1",
"int4x2",
"int4x3",
"int4x4",
"matrix",
"uint1x1",
"uint1x2",
"uint1x3",
"uint1x4",
"uint2x1",
"uint2x2",
"uint2x3",
"uint2x4",
"uint3x1",
"uint3x2",
"uint3x3",
"uint3x4",
"uint4x1",
"uint4x2",
"uint4x3",
"uint4x4"};

static constexpr std::array<const char*, 2> MultisampledTexture = {
"Texture2DMS",
"Texture2DMSArray"};

static constexpr std::array<const char*, 2> OtherPredefined = {
"BuiltInTriangleIntersectionAttributes",
"RayDesc"};

static constexpr std::array<const char*, 1> OtherViewBufferType = {
"RaytracingAccelerationStructure"};

static constexpr std::array<const char*, 5> Sampler = {
"Sampler",
"SamplerComparisonState",
"SamplerState",
"sampler",
"sampler_state"};

static constexpr std::array<const char*, 13> Scalar = {
"bool",
"double",
"dword",
"float",
"half",
"int",
"int16_t",
"int32_t",
"int64_t",
"uint",
"uint16_t",
"uint32_t",
"uint64_t"};

static constexpr std::array<const char*, 3> StreamOutput = {
"LineStream",
"PointStream",
"TriangleStream"};

static constexpr std::array<const char*, 5> StructuredBuffer = {
"AppendStructuredBuffer",
"ConsumeStructuredBuffer",
"RWStructuredBuffer",
"RasterizerOrderedStructuredBuffer",
"StructuredBuffer"};

static constexpr std::array<const char*, 4> SubpassInput = {
"SubpassInput",
"SubpassInputDS",
"SubpassInputDSMS",
"SubpassInputMS"};

static constexpr std::array<const char*, 17> Texture = {
"RWTexture1D",
"RWTexture1DArray",
"RWTexture2D",
"RWTexture2DArray",
"RWTexture3D",
"RasterizerOrderedTexture1D",
"RasterizerOrderedTexture1DArray",
"RasterizerOrderedTexture2D",
"RasterizerOrderedTexture2DArray",
"RasterizerOrderedTexture3D",
"Texture1D",
"Texture1DArray",
"Texture2D",
"Texture2DArray",
"Texture3D",
"TextureCube",
"TextureCubeArray"};

static constexpr std::array<const char*, 29> Vector = {
"bool1",
"bool2",
"bool3",
"bool4",
"double1",
"double2",
"double3",
"double4",
"dword1",
"dword2",
"dword3",
"dword4",
"float1",
"float2",
"float3",
"float4",
"half1",
"half2",
"half3",
"half4",
"int1",
"int2",
"int3",
"int4",
"uint1",
"uint2",
"uint3",
"uint4",
"vector"};

static constexpr std::array<const char*, 1> Void = {
"void"};

template<size_t N> struct Bag { const char* m_name = nullptr; const std::array<const char*, N> m_bag; };

static constexpr auto All = std::make_tuple(Bag<3>{"Buffer", Buffer},
                                            Bag<3>{"ByteAddressBuffer", ByteAddressBuffer},
                                            Bag<2>{"ConstantBuffer", ConstantBuffer},
                                            Bag<9>{"LibrarySubobject", LibrarySubobject},
                                            Bag<113>{"Matrix", Matrix},
                                            Bag<2>{"MultisampledTexture", MultisampledTexture},
                                            Bag<2>{"OtherPredefined", OtherPredefined},
                                            Bag<1>{"OtherViewBufferType", OtherViewBufferType},
                                            Bag<5>{"Sampler", Sampler},
                                            Bag<13>{"Scalar", Scalar},
                                            Bag<3>{"StreamOutput", StreamOutput},
                                            Bag<5>{"StructuredBuffer", StructuredBuffer},
                                            Bag<4>{"SubpassInput", SubpassInput},
                                            Bag<17>{"Texture", Texture},
                                            Bag<29>{"Vector", Vector},
                                            Bag<1>{"Void", Void});

};
