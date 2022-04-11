#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.AssetBundle::.ctor()
extern void AssetBundle__ctor_m12989CA081324BB49ED893BDA5E3B4E758D61410 (void);
// 0x00000002 UnityEngine.AssetBundleCreateRequest UnityEngine.AssetBundle::LoadFromMemoryAsync_Internal(System.Byte[],System.UInt32)
extern void AssetBundle_LoadFromMemoryAsync_Internal_mA9B5DD6F392EA3D3505FF2D6632365214F5FB2EB (void);
// 0x00000003 UnityEngine.AssetBundleCreateRequest UnityEngine.AssetBundle::LoadFromMemoryAsync(System.Byte[])
extern void AssetBundle_LoadFromMemoryAsync_mE4128A80D908905E31CF00B2CF573B6E955AE30F (void);
// 0x00000004 UnityEngine.AssetBundleRequest UnityEngine.AssetBundle::LoadAssetAsync(System.String)
// 0x00000005 UnityEngine.AssetBundleRequest UnityEngine.AssetBundle::LoadAssetAsync(System.String,System.Type)
extern void AssetBundle_LoadAssetAsync_mDAE70E6DD6F9D5360A5D0C7A74F3989174C2FEDB (void);
// 0x00000006 UnityEngine.AssetBundleRequest UnityEngine.AssetBundle::LoadAssetAsync_Internal(System.String,System.Type)
extern void AssetBundle_LoadAssetAsync_Internal_m2F3749CA103E883447AE6629E342D4C0D39A2FBE (void);
// 0x00000007 System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
extern void AssetBundle_Unload_m0A189871E61A0D6735A2B41B3360A1F0677B636B (void);
// 0x00000008 UnityEngine.AssetBundle UnityEngine.AssetBundleCreateRequest::get_assetBundle()
extern void AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21 (void);
// 0x00000009 System.Void UnityEngine.AssetBundleCreateRequest::.ctor()
extern void AssetBundleCreateRequest__ctor_mAD1A6314795AC1B548A29A32E01815D33B6D0B46 (void);
// 0x0000000A UnityEngine.Object UnityEngine.AssetBundleRequest::GetResult()
extern void AssetBundleRequest_GetResult_mC1C60D584906835F86BF82C44E8B62B6EB9171D6 (void);
// 0x0000000B UnityEngine.Object UnityEngine.AssetBundleRequest::get_asset()
extern void AssetBundleRequest_get_asset_mE9FDA3900215925371E7D15E7E19AA98713F5D6C (void);
// 0x0000000C System.Void UnityEngine.AssetBundleRequest::.ctor()
extern void AssetBundleRequest__ctor_mD73743E1532E41D8AD2871C00A7FCDA5157171C0 (void);
static Il2CppMethodPointer s_methodPointers[12] = 
{
	AssetBundle__ctor_m12989CA081324BB49ED893BDA5E3B4E758D61410,
	AssetBundle_LoadFromMemoryAsync_Internal_mA9B5DD6F392EA3D3505FF2D6632365214F5FB2EB,
	AssetBundle_LoadFromMemoryAsync_mE4128A80D908905E31CF00B2CF573B6E955AE30F,
	NULL,
	AssetBundle_LoadAssetAsync_mDAE70E6DD6F9D5360A5D0C7A74F3989174C2FEDB,
	AssetBundle_LoadAssetAsync_Internal_m2F3749CA103E883447AE6629E342D4C0D39A2FBE,
	AssetBundle_Unload_m0A189871E61A0D6735A2B41B3360A1F0677B636B,
	AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21,
	AssetBundleCreateRequest__ctor_mAD1A6314795AC1B548A29A32E01815D33B6D0B46,
	AssetBundleRequest_GetResult_mC1C60D584906835F86BF82C44E8B62B6EB9171D6,
	AssetBundleRequest_get_asset_mE9FDA3900215925371E7D15E7E19AA98713F5D6C,
	AssetBundleRequest__ctor_mD73743E1532E41D8AD2871C00A7FCDA5157171C0,
};
static const int32_t s_InvokerIndices[12] = 
{
	2068,
	3500,
	3952,
	0,
	1229,
	1229,
	1825,
	2005,
	2068,
	2005,
	2005,
	2068,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x06000004, { 0, 1 } },
};
extern const uint32_t g_rgctx_T_tA8BD384E30517DB870F72539332AC91852CB1C9C;
static const Il2CppRGCTXDefinition s_rgctxValues[1] = 
{
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_tA8BD384E30517DB870F72539332AC91852CB1C9C },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule = 
{
	"UnityEngine.AssetBundleModule.dll",
	12,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	1,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
