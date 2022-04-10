#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt[]
struct PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E;
// Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt[]
struct PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519
struct Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E;
// Org.BouncyCastle.Math.EC.Rfc8032.Ed448
struct Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1;
// Org.BouncyCastle.Crypto.Prng.IRandomGenerator
struct IRandomGenerator_t50CA6B7268CF1B6ED0762EB5808373C32743C8F1;
// Org.BouncyCastle.Crypto.IXof
struct IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076;
// Org.BouncyCastle.Crypto.Digests.Sha512Digest
struct Sha512Digest_tE91E268ACB5BECD3DBB22B6740A29D8DB468B674;
// Org.BouncyCastle.Crypto.Digests.ShakeDigest
struct ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Org.BouncyCastle.Math.EC.Rfc7748.X25519Field
struct X25519Field_t140C9A98182383D32387BD3259E304F952D5044B;
// Org.BouncyCastle.Math.EC.Rfc7748.X448
struct X448_tE3E7DA868EFB06A58B828DAB39D08493B6BA44FE;
// Org.BouncyCastle.Math.EC.Rfc7748.X448Field
struct X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A;
// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/F
struct F_tCDB6368965CEC72FE5E0EC9C63BE9E652F8951DD;
// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum
struct PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374;
// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAffine
struct PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5;
// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt
struct PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1;
// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointPrecomp
struct PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F;
// Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt
struct PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D;
// Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointPrecomp
struct PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E;
// Org.BouncyCastle.Math.EC.Rfc7748.X448/F
struct F_tB5F71335144C0FEC48C529FBFD1D7ECFF3170724;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha512Digest_tE91E268ACB5BECD3DBB22B6740A29D8DB468B674_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002f95U2D1_221_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D1_222_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D2_223_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D3_224_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D4_225_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D5_226_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D6_227_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D7_228_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D8_229_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6003024U2D1_230_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6003024U2D2_231_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6003024U2D3_232_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6003024U2D4_233_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6003024U2D5_234_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853;
IL2CPP_EXTERN_C String_t* _stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_ImplSign_m3CE2F3B4F80278E00756C8729A70727B81ECC06B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_ImplSign_m53C1D8DA2ABDA814927B245859EDB4FA758DDC3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_ImplVerify_m58324B32C188FC7A710334E38086A0D6B9E600A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_ScalarMultBaseEncoded_mC7F8AEBF8D2BF8DD992BB23E63EB6491600F620C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_ScalarMultBaseYZ_mC245418E9FC0944632FC36C9BCBB79027ED001B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_SignPrehash_m1B7E0B40079035B007F692BDE64476C4BBA106C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_SignPrehash_m2329A7A18E536009DA2BE5A65FBEF67686EC93D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_VerifyPrehash_m04CED0C680E279DC54E7B57170384868A2254302_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_ImplSign_m5A14EBD67C56CECA1BE1DA20C5AF34EF64EDEA28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_ImplSign_mCD4C75C23A281EB6E8937AB85C29BFF715B00AC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_ImplVerify_mD20F7349EEC9CBF693375BDFD31C905F45AA2451_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_ScalarMultBaseEncoded_mE41F94091F35554F98F3A8349846263ED622C7ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_ScalarMultBaseXY_m8A5B15F89594E46E57FA18511F208F9A4530D231_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_SignPrehash_m2C7218990EE08202621407C0634CF27675BF6D4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_SignPrehash_mF9D9E6AB80767D94B7C125B02151AB0D63C33F51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_VerifyPrehash_m573B01F664BB4446FD3439C932DAAF55B51C63D8_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E;
struct PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519
struct Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E  : public RuntimeObject
{
};

struct Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields
{
	// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PrehashSize
	int32_t ___PrehashSize_18;
	// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PublicKeySize
	int32_t ___PublicKeySize_19;
	// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::SecretKeySize
	int32_t ___SecretKeySize_20;
	// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::SignatureSize
	int32_t ___SignatureSize_21;
	// System.Byte[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Dom2Prefix
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Dom2Prefix_22;
	// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::P
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___P_23;
	// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::L
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___L_24;
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::B_x
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___B_x_25;
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::B_y
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___B_y_26;
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::C_d
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___C_d_27;
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::C_d2
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___C_d2_28;
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::C_d4
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___C_d4_29;
	// System.Object Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::precompLock
	RuntimeObject* ___precompLock_30;
	// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::precompBaseTable
	PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* ___precompBaseTable_31;
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::precompBase
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___precompBase_32;
};

// Org.BouncyCastle.Math.EC.Rfc8032.Ed448
struct Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893  : public RuntimeObject
{
};

struct Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields
{
	// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PrehashSize
	int32_t ___PrehashSize_29;
	// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PublicKeySize
	int32_t ___PublicKeySize_30;
	// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed448::SecretKeySize
	int32_t ___SecretKeySize_31;
	// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed448::SignatureSize
	int32_t ___SignatureSize_32;
	// System.Byte[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Dom4Prefix
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Dom4Prefix_33;
	// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448::P
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___P_34;
	// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448::L
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___L_35;
	// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448::B_x
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___B_x_36;
	// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448::B_y
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___B_y_37;
	// System.Object Org.BouncyCastle.Math.EC.Rfc8032.Ed448::precompLock
	RuntimeObject* ___precompLock_38;
	// Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448::precompBaseTable
	PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* ___precompBaseTable_39;
	// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448::precompBase
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___precompBase_40;
};

// Org.BouncyCastle.Crypto.Digests.KeccakDigest
struct KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8  : public RuntimeObject
{
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.KeccakDigest::state
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___state_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.KeccakDigest::dataQueue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dataQueue_2;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::rate
	int32_t ___rate_3;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::bitsInQueue
	int32_t ___bitsInQueue_4;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::fixedOutputLength
	int32_t ___fixedOutputLength_5;
	// System.Boolean Org.BouncyCastle.Crypto.Digests.KeccakDigest::squeezing
	bool ___squeezing_6;
};

struct KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_StaticFields
{
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.KeccakDigest::KeccakRoundConstants
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___KeccakRoundConstants_0;
};

// Org.BouncyCastle.Crypto.Digests.LongDigest
struct LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Digests.LongDigest::MyByteLength
	int32_t ___MyByteLength_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.LongDigest::xBuf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___xBuf_1;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.LongDigest::xBufOff
	int32_t ___xBufOff_2;
	// System.Int64 Org.BouncyCastle.Crypto.Digests.LongDigest::byteCount1
	int64_t ___byteCount1_3;
	// System.Int64 Org.BouncyCastle.Crypto.Digests.LongDigest::byteCount2
	int64_t ___byteCount2_4;
	// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::H1
	uint64_t ___H1_5;
	// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::H2
	uint64_t ___H2_6;
	// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::H3
	uint64_t ___H3_7;
	// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::H4
	uint64_t ___H4_8;
	// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::H5
	uint64_t ___H5_9;
	// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::H6
	uint64_t ___H6_10;
	// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::H7
	uint64_t ___H7_11;
	// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::H8
	uint64_t ___H8_12;
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.LongDigest::W
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___W_13;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.LongDigest::wOff
	int32_t ___wOff_14;
};

struct LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_StaticFields
{
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.LongDigest::K
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___K_15;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Org.BouncyCastle.Math.EC.Rfc7748.X25519Field
struct X25519Field_t140C9A98182383D32387BD3259E304F952D5044B  : public RuntimeObject
{
};

struct X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_StaticFields
{
	// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::P32
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___P32_4;
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::RootNegOne
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___RootNegOne_5;
};

// Org.BouncyCastle.Math.EC.Rfc7748.X448
struct X448_tE3E7DA868EFB06A58B828DAB39D08493B6BA44FE  : public RuntimeObject
{
};

// Org.BouncyCastle.Math.EC.Rfc7748.X448Field
struct X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A  : public RuntimeObject
{
};

struct X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_StaticFields
{
	// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc7748.X448Field::P32
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___P32_2;
};

// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum
struct PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374  : public RuntimeObject
{
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum::x
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x_0;
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum::y
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y_1;
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum::z
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z_2;
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum::u
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___u_3;
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum::v
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___v_4;
};

// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAffine
struct PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5  : public RuntimeObject
{
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAffine::x
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x_0;
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAffine::y
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y_1;
};

// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt
struct PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1  : public RuntimeObject
{
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt::x
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x_0;
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt::y
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y_1;
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt::z
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z_2;
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt::t
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___t_3;
};

// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointPrecomp
struct PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F  : public RuntimeObject
{
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointPrecomp::ypx_h
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ypx_h_0;
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointPrecomp::ymx_h
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ymx_h_1;
	// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointPrecomp::xyd
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___xyd_2;
};

// Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt
struct PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D  : public RuntimeObject
{
	// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt::x
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x_0;
	// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt::y
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y_1;
	// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt::z
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z_2;
};

// Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointPrecomp
struct PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E  : public RuntimeObject
{
	// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointPrecomp::x
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x_0;
	// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointPrecomp::y
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076  : public Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8
{
	// Org.BouncyCastle.Crypto.Prng.IRandomGenerator Org.BouncyCastle.Security.SecureRandom::generator
	RuntimeObject* ___generator_7;
};

struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_StaticFields
{
	// System.Int64 Org.BouncyCastle.Security.SecureRandom::counter
	int64_t ___counter_5;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Security.SecureRandom::master
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___master_6;
	// System.Double Org.BouncyCastle.Security.SecureRandom::DoubleScale
	double ___DoubleScale_8;
};

// Org.BouncyCastle.Crypto.Digests.Sha512Digest
struct Sha512Digest_tE91E268ACB5BECD3DBB22B6740A29D8DB468B674  : public LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA
{
};

// Org.BouncyCastle.Crypto.Digests.ShakeDigest
struct ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940  : public KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8
{
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/F
struct F_tCDB6368965CEC72FE5E0EC9C63BE9E652F8951DD  : public X25519Field_t140C9A98182383D32387BD3259E304F952D5044B
{
};

// Org.BouncyCastle.Math.EC.Rfc7748.X448/F
struct F_tB5F71335144C0FEC48C529FBFD1D7ECFF3170724  : public X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A
{
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt[]
struct PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E  : public RuntimeArray
{
	ALIGN_FIELD (8) PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* m_Items[1];

	inline PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt[]
struct PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7  : public RuntimeArray
{
	ALIGN_FIELD (8) PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* m_Items[1];

	inline PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448::ScalarMult(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_ScalarMult_m74BC14AD9731D36E8B47B79A54192BAC1C5E8DB2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, int32_t ___kOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___u2, int32_t ___uOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r4, int32_t ___rOff5, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Utilities.Arrays::AreAllZeroes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreAllZeroes_m328B8D08CB34C0EDA9C0352F16DF6E425FDF51DD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc7748.X448::Decode32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t X448_Decode32_m2EB0EDC3AE257C6FFB425D11A32F13601FF0E23F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448::ScalarMultBase(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_ScalarMultBase_mDF5361D5A11DE4D686F00630DAF9497A86D75A9F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, int32_t ___kOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r2, int32_t ___rOff3, const RuntimeMethod* method) ;
// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5 (const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Add(System.UInt32[],System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Sub(System.UInt32[],System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Sqr(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Mul(System.UInt32[],System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Mul(System.UInt32[],System.UInt32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Mul_m117ADD5620C51D90B64DDA41105DD0559C62A1C2 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, uint32_t ___y1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Precompute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Precompute_m8456BD8E6476A7B7A67CAB9B7E5BF7051F1D99BE (const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448::DecodeScalar(System.Byte[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_DecodeScalar_m86B4648E8A5A8E398E89DA7C425E5D76745D8588 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, int32_t ___kOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___n2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Decode(System.Byte[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Decode_mA6FE31E4A680C131F9A025A431353936CD857240 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, int32_t ___xOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Copy(System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___xOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, int32_t ___zOff3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::CSwap(System.Int32,System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_CSwap_mA74180146D140AE08EDFDFAC873B3A58A8518FDC (int32_t ___swap0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___a1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___b2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448::PointDouble(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_PointDouble_mB1F88D260993340C403293C46116895B7D637516 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Inv(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Inv_m27D508D80A51F31463ACB46B6EFC924048E556A6 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Normalize(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Normalize_m28D257AC52601B6B435B1DCF0215E0BA9DC5762D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Encode(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode_m0A25DB30AC6F72F954D767194CEB1964274691BF (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___z1, int32_t ___zOff2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ScalarMultBaseXY(System.Byte[],System.Int32,System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultBaseXY_m8A5B15F89594E46E57FA18511F208F9A4530D231 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, int32_t ___kOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y3, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field__ctor_m521045A8454096E2973621CA88F3CEFFF2E8214A (X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Math.EC.Rfc7748.X448Field::AreEqual(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X448Field_AreEqual_m67CD0CDA7D7E4A3A8217EE7F1331F993A39B7809 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::CMov(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_CMov_mFA107A40CC7714E4E54DD111E11C13A4AFE58182 (int32_t ___cond0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x1, int32_t ___xOff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z3, int32_t ___zOff4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Decode224(System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Decode224_mA291D389234B67AFEC5A2DB0F776B4458AD7A7BB (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___xOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, int32_t ___zOff3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Decode56(System.Byte[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Decode56_m31096EA96C9B27677BA73B7B54842917C51A567C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, int32_t ___zOff3, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Decode32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t X448Field_Decode32_mA244D05FB2927A958BAC0B59DDDE056801F89006 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Decode24(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t X448Field_Decode24_mAAFF0AB2845C4CB511ACD454D68E326322526C79 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Encode224(System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode224_mC566C3EDC5D126B6853BC8C5BFB805B61F75D1B3 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___xOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, int32_t ___zOff3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Encode56(System.UInt32[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode56_mCB84AD3481E81E538FD5C494C04CE82F12629ECE (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___xOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs2, int32_t ___off3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Encode32(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode32_mDB2D3D911718F7EA8F9DFB0D65C1F94684161AF0 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Encode24(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode24_m0A085D669D2DADA41F8156092E852C05998E7D95 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Encode(System.UInt32[],System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode_m63923F7E249054BCBA602805F8359FD5D6CB8B2E (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, int32_t ___zOff2, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Math.Raw.Mod::ModOddInverse(System.UInt32[],System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Mod_ModOddInverse_m3FAA23860F91405FD30C081932D25F1ED084E4CA (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Decode(System.UInt32[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Decode_m1E7B45410211804BB8A8BB1CE3BDA7AE0F05FCFB (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___xOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.Raw.Mod::ModOddInverseVar(System.UInt32[],System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mod_ModOddInverseVar_mFD7BB95FFBC25EC7F0114567093B9C215F83D949 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Math.EC.Rfc7748.X448Field::IsOne(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X448Field_IsOne_m4506B3551B9648F4F3122546C76000248E885826 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Math.EC.Rfc7748.X448Field::IsZero(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X448Field_IsZero_m77E3695C249DCE19085642E0C08D835CECE96D6A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Reduce(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Reduce_m0DDB8E19AAF8178F46C9CFB30F32DB53B42F1E6C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z0, int32_t ___x1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Sqr(System.UInt32[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Sqr_m17AF24330AFB3885BB62E033EB17D18C72D4CBA5 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___n1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::PowPm3d4(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_PowPm3d4_m6B462BA1140265FA205703020CE19E0120B51422 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc7748.X448Field::IsZeroVar(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X448Field_IsZeroVar_m66A2422FBD302F46255DE30062EE21833A59264F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::DecodeScalar(System.Byte[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_DecodeScalar_m420D0E8864965383EE73A0F43ABDAE269E740110 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, int32_t ___kOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___n2, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat256::MulAddTo(System.UInt32[],System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_MulAddTo_m5FAB7447289ABA3C8A26A21815BD188C71A21D21 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___zz2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Encode32(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Encode32_m4BD8A0B584B3DBE332B16FCEB92924FAA50E22C0 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ReduceScalar(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed25519_ReduceScalar_mCA90FD3ED1419421E24436D936D212D0AEC8D795 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___n0, const RuntimeMethod* method) ;
// System.Int32[] Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078 (const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::Sqr(System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Sqr_mD16DC4C60352DE4570CE78356310958DAF113A4A (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::Mul(System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::Sub(System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Sub_mD8217E553ED88B7253CA41F14DE8664C31306742 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::AddOne(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_AddOne_mF7FAE9F43A2F2BB7463419CD2E74B157FA51BE89 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::Normalize(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Normalize_mD79E8B8BA9EA42005EC0D8D4A82FA7080BACE52B (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::IsZero(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X25519Field_IsZero_mAD667DA146848AB692CE36541A1E634EB7CE7EC3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::Add(System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Add_mF78371B3ADFE521222F9C2B249EBBD7AEB33EE51 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Decode32(System.Byte[],System.Int32,System.UInt32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Decode32_mC50E29B467E9E8E4C7F524785CFE264412359452 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___bsOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___n2, int32_t ___nOff3, int32_t ___nLen4, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat256::Gte(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_Gte_m3FFB7403550D26CAE2964885177D2AFAFEB4D13F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha512Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha512Digest__ctor_mB7BE1F624B4567BE9C60541257FB34CAFC2879FC (Sha512Digest_tE91E268ACB5BECD3DBB22B6740A29D8DB468B674* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::CreateDigest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ed25519_CreateDigest_m31CD49A015EBEE3D41D363280F25B714A9D11857 (const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Decode32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed25519_Decode32_m0429392689EC800E9BD36992D3D35FBEB9E7075C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Copy(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed25519_Copy_m928ECA90B3C51F5FEE5D91346FE7DB92766D1BD7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::CheckPointVar(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_CheckPointVar_m81418D3FA21F905D873BD4C39A082C6D0715E527 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::Decode(System.Byte[],System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Decode_m81DD3D2F8E78B08D14B9F04EA2F65B6E47FC293C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, int32_t ___xOff1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::SubOne(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_SubOne_m41514E38F9DF960ADA3002ADC8F4FB7FF3484BC7 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z0, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::SqrtRatioVar(System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X25519Field_SqrtRatioVar_mE24AE2664550153EF1B48A3912059A496080ED79 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___u0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___v1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z2, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::IsZeroVar(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X25519Field_IsZeroVar_m7BA86D249183555D19C6C5078C85FFA08320E995 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::Negate(System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Negate_mA73E9F6A22FB853AE0AFC46B40F41FF047EFDA97 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z1, const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Encode24(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Encode24_m47AFB52CFD5A3590C75700F4C4310A9584FD84B4 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::Inv(System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Inv_m4792412BBDCF26668446048E8ECA5D4242FE0FC5 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::CheckPoint(System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed25519_CheckPoint_m13C787254C4868B7D8D6E570C0375011B37FBE43 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::Encode(System.Int32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Encode_m9217D612A39341313A0932B0463C2A5ED0824F34 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___z1, int32_t ___zOff2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PruneScalar(System.Byte[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PruneScalar_mEAD888D3885CC33E89167694F9E52AD2A014B0AD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___n0, int32_t ___nOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ScalarMultBaseEncoded(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultBaseEncoded_mC7F8AEBF8D2BF8DD992BB23E63EB6491600F620C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r1, int32_t ___rOff2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Dom2(Org.BouncyCastle.Crypto.IDigest,System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Dom2_mD613F8A1AF5B5582F08B901D02F63991CA82862E (RuntimeObject* ___d0, uint8_t ___phflag1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx2, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::CalculateS(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed25519_CalculateS_mAA2636B38DB61BC82D238D80C7ECF898674E3BA2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s2, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::CheckContextVar(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_CheckContextVar_m619215BB6F89A7D8BD285C0D24AC97D55913FC5E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx0, uint8_t ___phflag1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ImplSign(Org.BouncyCastle.Crypto.IDigest,System.Byte[],System.Byte[],System.Byte[],System.Int32,System.Byte[],System.Byte,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ImplSign_m49A12C71F870EEC59398D0E2B20A74B671F50488 (RuntimeObject* ___d0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___h1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk3, int32_t ___pkOff4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx5, uint8_t ___phflag6, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m7, int32_t ___mOff8, int32_t ___mLen9, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig10, int32_t ___sigOff11, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::CheckScalarVar(System.Byte[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_CheckScalarVar_m1C500E6BBD59BAE349B7546776B0AE8495356D01 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___n1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAffine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointAffine__ctor_m9CEF8F7295DCDFD2FFFEB47D6BEFE3DB551C2E1E (PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* __this, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::DecodePointVar(System.Byte[],System.Int32,System.Boolean,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAffine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_DecodePointVar_m6EE29823C3966A4E6BA4B898CD1AB62D0D978784 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___pOff1, bool ___negate2, PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* ___r3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointAccum__ctor_m02F2BD460E06C5F956372EBC95EA93A876B563D0 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ScalarMultStrausVar(System.UInt32[],System.UInt32[],Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAffine,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultStrausVar_mC46D3DD4145DDEF555DCB6B5F07E544E3111B634 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___nb0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___np1, PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* ___p2, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___r3, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::EncodePoint(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed25519_EncodePoint_mB7C63C580B86BE9146E28FE4B1DD03976551DB08 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___p0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r1, int32_t ___rOff2, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Utilities.Arrays::AreEqual(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_mF00C3B51F7520663ADB08744EA3A1995B9421C18 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::IsOneVar(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X25519Field_IsOneVar_m87DC3277758DE6EFE8C7715D2AF9A895B3881EF4 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::AreEqualVar(System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X25519Field_AreEqualVar_m5E1536D9FB39D07915860A769BD6BB118DBF5D7A (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::Apm(System.Int32[],System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___zp2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___zm3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::Carry(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Carry_m5BF572BF9177BCBE7416A6DF3324DD15329C6043 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830 (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::Copy(System.Int32[],System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, int32_t ___xOff1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z2, int32_t ___zOff3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointExtendXY(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointExtendXY_m13D77B36086F3ADCB44AE34E7DEA8A45B4D8D2A5 (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___p0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointCopy(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointCopy_m06874BE265D4E7713D6BE6B51CE9914185D54485 (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___p0, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___r1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointExtendXY(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointExtendXY_m2AE71A00993E1C138A123AE6288A5FFB58563642 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___p0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::One(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_One_m512CEC0A8114ABC88FEB57DB58336DA86185AA56 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::CMov(System.Int32,System.Int32[],System.Int32,System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_CMov_mB65F643ED9909ECBDF57A27A3C351DFD2D5503B2 (int32_t ___cond0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x1, int32_t ___xOff2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z3, int32_t ___zOff4, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::GetWindow4(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed25519_GetWindow4_mCA4D46BA64261008E33678B2BC9ACC56E35971E2 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___n1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::CNegate(System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_CNegate_mAD23F661AA46AF421AD0F3EEF9E931B84F728AB3 (int32_t ___negate0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointCopy(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAffine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* Ed25519_PointCopy_m47EB550B4471EDC24EFEC203EDB132DE857EEBDA (PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* ___p0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointCopy(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* Ed25519_PointCopy_mB01A380A5A9A11DA575338AA2EA304C4320D34BF (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___p0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointAdd(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAdd_m828F767EC553F02B84A3BCC717A5CB32AB45D145 (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___p0, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___r1, const RuntimeMethod* method) ;
// System.Int32[] Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::CreateTable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* X25519Field_CreateTable_m98132439692BB823655C2E996EF23EC6DED84173 (int32_t ___n0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointAddVar(System.Boolean,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAddVar_mBA8C9C87048F5E1ADCCD94BB10132B7EB5D25173 (bool ___negate0, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___p1, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___q2, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___r3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::Zero(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Zero_m618DE52BB25350422E8B1A5AAF7C8CFB9BB23459 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointPrecomputeVar(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* Ed25519_PointPrecomputeVar_m0C916BFD76D0E9FF12CB2EF545A8A7AD07848A39 (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___p0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointSetNeutral(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointSetNeutral_m71A1BEF9DBF2B20D6E748D6DD191193A7C2DF35C (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___p0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointCopy(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* Ed25519_PointCopy_mA45AFAF4DF86627A7B1BCF2F39F7EBFF73DD1CF1 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___p0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointDouble(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointDouble_m8FD42D28454C7DC22C8A3563EB98658871BEFA40 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___r0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::InvVar(System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_InvVar_m8C38910C6ADAC2876E292877E4B4B4907FB7DDE7 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointPrecomp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointPrecomp__ctor_m66DA0C74BDD15D7C88DDAFF41BEEC059417DBC60 (PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* __this, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Decode24(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed25519_Decode24_mFCA27265DA00625554346AF30ADDC45C66A531C7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Encode56(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Encode56_m9DE3CA5E60288B97CF60684DD91722D5211254D9 (uint64_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::ShiftDownBits(System.Int32,System.UInt32[],System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_ShiftDownBits_m5E1DEDCE89394854A304FFF74224614DAE7056B3 (int32_t ___len0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, int32_t ___bits2, uint32_t ___c3, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::CAdd(System.Int32,System.Int32,System.UInt32[],System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_CAdd_m4237EB216D24A9A71A545DAD5C23C8AC9F4697A5 (int32_t ___len0, int32_t ___mask1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y3, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z4, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::ShiftDownBit(System.Int32,System.UInt32[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_ShiftDownBit_mCDF5442C94448C9149006FB5315053820AB9302C (int32_t ___len0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, uint32_t ___c2, const RuntimeMethod* method) ;
// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointPrecompute(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAffine,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Ed25519_PointPrecompute_m9734506CCD4EDF47D0FC8388C659CBCA58B2A93E (PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* ___p0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointCopy(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAffine,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointCopy_mA0B87EA7B90F15562C748A379B66DB0A72375A90 (PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* ___p0, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___r1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointLookup(System.Int32[],System.Int32,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointLookup_m3BC18429B09E0BBFE4FB1057F3DA65AADA9E2ECF (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___table0, int32_t ___index1, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___r2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointAdd(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAdd_mBAF06038F245EE83C79DED4CFEFB5291EBA336E4 (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___p0, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___r1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointLookup(System.UInt32[],System.Int32,System.Int32[],Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointLookup_m136C466D6417E40AC68D4E4D281CE193D78211B1 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___n1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___table2, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___r3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Precompute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Precompute_m9D236FE3CAAAE11B19064B5BB6D6E0F3283C29DD (const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Math.Raw.Interleave::Shuffle2(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Interleave_Shuffle2_m148B1F1E9537913F3C1CB2D48A2DB9C151A81EDE (uint32_t ___x0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointSetNeutral(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointSetNeutral_m6920E08FA212EE00B490A48B730D725CBC7B2E43 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___p0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointLookup(System.Int32,System.Int32,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointPrecomp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointLookup_m6603B0371481D4A0A2D4EF01F7253F26806A641C (int32_t ___block0, int32_t ___index1, PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* ___p2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::CSwap(System.Int32,System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_CSwap_mF9A1C1A1A6A9CE86DD5DD4486808D3FD96EBE91B (int32_t ___swap0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___a1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___b2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointAddPrecomp(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointPrecomp,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAddPrecomp_mDAD885FEE91E748327B2CAD7C937EEEAF25C6C00 (PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* ___p0, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___r1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ScalarMultBase(System.Byte[],Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultBase_mAB4ADF0B044E31E3011B788B8B6FF36CA776A7D8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___r1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::CheckPoint(System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed25519_CheckPoint_mB0076E4C6E0A4FC1DADD6A24B2938B2EB912F35D (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z2, const RuntimeMethod* method) ;
// System.SByte[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::GetWnafVar(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Ed25519_GetWnafVar_m4676B2ACE1A0F74BE94FB10DD29A1E070499B249 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___n0, int32_t ___width1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointAddVar(System.Boolean,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAddVar_m53AB3C9F519A0B44A0B5C1ADF7B96A8524E1FBA6 (bool ___negate0, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___p1, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___r2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ImplSign(System.Byte[],System.Int32,System.Byte[],System.Byte,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ImplSign_m53C1D8DA2ABDA814927B245859EDB4FA758DDC3B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx2, uint8_t ___phflag3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m4, int32_t ___mOff5, int32_t ___mLen6, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig7, int32_t ___sigOff8, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ImplSign(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Byte,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ImplSign_m3CE2F3B4F80278E00756C8729A70727B81ECC06B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, uint8_t ___phflag5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m6, int32_t ___mOff7, int32_t ___mLen8, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig9, int32_t ___sigOff10, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::IsNeutralElementVar(System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_IsNeutralElementVar_mEA514555D1028D932DCCFED344E94668786C2019 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ScalarMultOrderVar(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAffine,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultOrderVar_m260ABA2637A155E363198EB0D2F14584CF651EBD (PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* ___p0, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___r1, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::IsNeutralElementVar(System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_IsNeutralElementVar_m7592FF2FD6D37D96DF3EC749C4D12B7EDAFFA51E (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z2, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ImplVerify(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Byte,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_ImplVerify_m58324B32C188FC7A710334E38086A0D6B9E600A8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig0, int32_t ___sigOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, uint8_t ___phflag5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m6, int32_t ___mOff7, int32_t ___mLen8, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X25519Field::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field__ctor_m9AF4BD4682613E4699C2117F3E8A9B4B7E2083CC (X25519Field_t140C9A98182383D32387BD3259E304F952D5044B* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::DecodeScalar(System.Byte[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_DecodeScalar_mA4714B8D920EFEA5AD685480EF3ECB744F070FC1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, int32_t ___kOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___n2, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Math.Raw.Nat::MulAddTo(System.Int32,System.UInt32[],System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_MulAddTo_m8F4F4F9AB65539CAD83B6247F72B7D8EF94BFBB4 (int32_t ___len0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___zz3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Encode32(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Encode32_mB66F38BBC09AA5BC2FC7425E86297EAAD1A7CC79 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ReduceScalar(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed448_ReduceScalar_m2ED71F07CC2E61326FAEF81D8007A4F0DD6CFF5B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___n0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::SubOne(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_SubOne_mDE8A6766E81D9B5EEB00EA64497BE2A452C6BC9A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Decode32(System.Byte[],System.Int32,System.UInt32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Decode32_mDDBFF67C54DA20658E2F58742EBB451FBDF7F10A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___bsOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___n2, int32_t ___nOff3, int32_t ___nLen4, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.Raw.Nat::Gte(System.Int32,System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat_Gte_mD8A9416E5D833196864F127A21842BC915DADEF8 (int32_t ___len0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y2, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.IXof Org.BouncyCastle.Math.EC.Rfc8032.Ed448::CreateXof()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ed448_CreateXof_m09DDB193C17D4AF47E3C880CC9DD9782075C4A33 (const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.ShakeDigest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeDigest__ctor_m2B3B14BB44A9AD5C9CDBDD41EE6122B928CFC532 (ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* __this, int32_t ___bitLength0, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Decode32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_Decode32_mEFC4AA805E5B39001100E74CD1904EA24C28B444 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Copy(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed448_Copy_mFFED7C881DD29DD7D3B28F621FEAB3CA1012374C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed448::CheckPointVar(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_CheckPointVar_m2105E10610992C458D757C967799DFE5FD5CC5FD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Negate(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Negate_m4E274B3DBA28BF4E532CD767517A6BE680C1242A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::AddOne(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_AddOne_mC4D51247BFD297C40E6531129D3BF53DDA0B280B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z0, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc7748.X448Field::SqrtRatioVar(System.UInt32[],System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X448Field_SqrtRatioVar_mEE832660670B6493D88C299006A8013BE6ED270E (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___u0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___v1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointExtendXY(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointExtendXY_m0886BB994850B3828576669D936973B20912F066 (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Encode24(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Encode24_m7F7D0BA8834EF2E283EB4E0916B48838DCEB9D9E (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed448::CheckPoint(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed448_CheckPoint_m86CE49B474578669BB37B358A074222D2E578312 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PruneScalar(System.Byte[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PruneScalar_m8D57C66D3E29653DDC6194D91D7C335E6C37387F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___n0, int32_t ___nOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ScalarMultBaseEncoded(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultBaseEncoded_mE41F94091F35554F98F3A8349846263ED622C7ED (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r1, int32_t ___rOff2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Dom4(Org.BouncyCastle.Crypto.IXof,System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Dom4_m4125DCE96F214D94F2CD75C54D862DF8574FF09B (RuntimeObject* ___d0, uint8_t ___phflag1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx2, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448::CalculateS(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed448_CalculateS_m00E3993A9E1BD45C54A7C8EBCEF08F3C334B4BFE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s2, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed448::CheckContextVar(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_CheckContextVar_m02CC9167EBB6E1AF763614C90DF6A8C7563478E6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ImplSign(Org.BouncyCastle.Crypto.IXof,System.Byte[],System.Byte[],System.Byte[],System.Int32,System.Byte[],System.Byte,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ImplSign_m33CA91B30BC2932FC28F3025B225A448287A262F (RuntimeObject* ___d0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___h1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk3, int32_t ___pkOff4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx5, uint8_t ___phflag6, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m7, int32_t ___mOff8, int32_t ___mLen9, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig10, int32_t ___sigOff11, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed448::CheckScalarVar(System.Byte[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_CheckScalarVar_m9000A81032FECCD772EA1BE663F52AD731E96EC3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___n1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7 (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* __this, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed448::DecodePointVar(System.Byte[],System.Int32,System.Boolean,Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_DecodePointVar_m8703292141B19BE4E199CA3903605B7587585B96 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___pOff1, bool ___negate2, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ScalarMultStrausVar(System.UInt32[],System.UInt32[],Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultStrausVar_mAFD4EA44DC3CAE02842E567A7CD18D928AACE9D2 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___nb0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___np1, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p2, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r3, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed448::EncodePoint(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed448_EncodePoint_m6EFB064E6BDD9DF5638FD653A8B8ADCC526CCBA2 (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r1, int32_t ___rOff2, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc7748.X448Field::IsOneVar(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X448Field_IsOneVar_m6B778D12780F415C7101858B7CABFE6D77988D9B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc7748.X448Field::AreEqualVar(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X448Field_AreEqualVar_m4D234011F3126BFD6E6576B469D7B046CA0C17F5 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Carry(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Carry_m92553C05BD554B9E155FB2DCB9E9F1E859030E5F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointCopy(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointCopy_m092B1E1F5473557B2CE42512309A94893D14A3C7 (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p0, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::One(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_One_m302C720B789D86CC7A05264E583C57D211288C1C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z0, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc8032.Ed448::GetWindow4(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_GetWindow4_m3D3931587DFF5D4DDE3788A013BD240DC00052E1 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___n1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::CNegate(System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_CNegate_m10B9F9B7B0763D632C60D7CC9717B41EB4455D73 (int32_t ___negate0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointCopy(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* Ed448_PointCopy_m24C998E5370D6E283EE11D53DF824D8FF4AEE3AA (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointDouble(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointDouble_m6CA61510693B1AFB8C7654572948190EBAB136DC (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r0, const RuntimeMethod* method) ;
// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc7748.X448Field::CreateTable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* X448Field_CreateTable_m046D1F4EDA1C8D8A11A487430E4B3B4A08564838 (int32_t ___n0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointAdd(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointAdd_mA86CE533581BC7C402FCAE8831BFDDF8548EA08B (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p0, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointAddVar(System.Boolean,Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointAddVar_m8ABA02B2C2E3566FA0B5A9627716936605815CD7 (bool ___negate0, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p1, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Zero(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Zero_m9C90DD63C757640FAB477D7EBFCC7C113E3FA6E9 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointPrecomputeVar(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* Ed448_PointPrecomputeVar_m330A4DF40F8E5E08F87DD15A60DB6B3A9EB01E82 (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointSetNeutral(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointSetNeutral_m6BA2561BFA2634F19739F5E6B6A6CA10E2F2B3DB (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::InvVar(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_InvVar_mEE86B423AE4590A4747CC4196B46F5E8E4946528 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Decode24(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_Decode24_mF28DBE178BB0317BE64F31E17AC4334DFEB1FC74 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Decode16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_Decode16_m7315AB1B8F8FE33D988DECB92635A9B9D28E9251 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Encode56(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Encode56_m546611AC7AC2BB3AA87AA2F431D4325CCFC23445 (uint64_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointPrecompute(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Ed448_PointPrecompute_mEAEB9D246C0FB4F81FB3199E8CAB80CFCD60C103 (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointLookup(System.UInt32[],System.Int32,System.UInt32[],Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointLookup_mC4CB7046A4489CBDFBE8A86E08F9372B7AC26F83 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___n1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___table2, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointPrecomp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointPrecomp__ctor_m3B237EFDABECABABE666EC66DA1B9C243C0F0F6A (PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointLookup(System.Int32,System.Int32,Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointPrecomp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointLookup_m108F6ABB9E0AEDD87B295B423EC1646E289FE500 (int32_t ___block0, int32_t ___index1, PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* ___p2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointAddPrecomp(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointPrecomp,Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointAddPrecomp_m1A485846999F06D8A79DF3066B7E9745C68D07A3 (PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* ___p0, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ScalarMultBase(System.Byte[],Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultBase_m9B32CCA84901C0EA1C61BB318F3E14E82375DFFF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed448::CheckPoint(System.UInt32[],System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed448_CheckPoint_mF5E98B868243A3458E23335A01FC257ED3BFA46C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) ;
// System.SByte[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448::GetWnafVar(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Ed448_GetWnafVar_m69E9BB2EAAB402CA90FEDDD95B594228A8640BEB (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___n0, int32_t ___width1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ImplSign(System.Byte[],System.Int32,System.Byte[],System.Byte,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ImplSign_mCD4C75C23A281EB6E8937AB85C29BFF715B00AC1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx2, uint8_t ___phflag3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m4, int32_t ___mOff5, int32_t ___mLen6, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig7, int32_t ___sigOff8, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ImplSign(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Byte,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ImplSign_m5A14EBD67C56CECA1BE1DA20C5AF34EF64EDEA28 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, uint8_t ___phflag5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m6, int32_t ___mOff7, int32_t ___mLen8, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig9, int32_t ___sigOff10, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed448::IsNeutralElementVar(System.UInt32[],System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_IsNeutralElementVar_mCE4A121C34A8E890398A97FCE71B3CCD1E0804DB (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ScalarMultOrderVar(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultOrderVar_m0280018C1E077C1CF398DE39D1A9C06DE6FEE2D3 (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p0, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r1, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ImplVerify(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Byte,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_ImplVerify_mD20F7349EEC9CBF693375BDFD31C905F45AA2451 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig0, int32_t ___sigOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, uint8_t ___phflag5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m6, int32_t ___mOff7, int32_t ___mLen8, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Org.BouncyCastle.Math.EC.Rfc7748.X448::CalculateAgreement(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X448_CalculateAgreement_m3F83B70832322DCD0E543D50213B36D6FEA7A3D5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, int32_t ___kOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___u2, int32_t ___uOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r4, int32_t ___rOff5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___k0;
		int32_t L_1 = ___kOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___u2;
		int32_t L_3 = ___uOff3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___r4;
		int32_t L_5 = ___rOff5;
		X448_ScalarMult_m74BC14AD9731D36E8B47B79A54192BAC1C5E8DB2(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___r4;
		int32_t L_7 = ___rOff5;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Arrays_AreAllZeroes_m328B8D08CB34C0EDA9C0352F16DF6E425FDF51DD(L_6, L_7, ((int32_t)56), NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc7748.X448::Decode32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t X448_Decode32_m2EB0EDC3AE257C6FFB425D11A32F13601FF0E23F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		uint32_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bs0;
		int32_t L_6 = ___off1;
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		___off1 = L_7;
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int32_t)((int32_t)L_4|((int32_t)((int32_t)L_9<<8))));
		uint32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bs0;
		int32_t L_12 = ___off1;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		___off1 = L_13;
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = ((int32_t)((int32_t)L_10|((int32_t)((int32_t)L_15<<((int32_t)16)))));
		uint32_t L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___bs0;
		int32_t L_18 = ___off1;
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		___off1 = L_19;
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int32_t)((int32_t)L_16|((int32_t)((int32_t)L_21<<((int32_t)24)))));
		uint32_t L_22 = V_0;
		return L_22;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448::DecodeScalar(System.Byte[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_DecodeScalar_m86B4648E8A5A8E398E89DA7C425E5D76745D8588 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, int32_t ___kOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___n2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___n2;
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___k0;
		int32_t L_3 = ___kOff1;
		int32_t L_4 = V_0;
		uint32_t L_5;
		L_5 = X448_Decode32_m2EB0EDC3AE257C6FFB425D11A32F13601FF0E23F(L_2, ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)il2cpp_codegen_multiply(L_4, 4)))), NULL);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0016:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)14))))
		{
			goto IL_0004;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___n2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8;
		V_1 = L_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		int32_t L_11 = 0;
		uint32_t L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((int32_t)L_12&((int32_t)-4))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___n2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13;
		V_1 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_1;
		int32_t L_16 = ((int32_t)13);
		uint32_t L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)((int32_t)((int32_t)L_17|((int32_t)-2147483648LL))));
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448::GeneratePrivateKey(Org.BouncyCastle.Security.SecureRandom,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_GeneratePrivateKey_mEAE25F86490334D76E8745075C827D6F509CC1DB (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k1, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_0 = ___random0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___k1;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_0, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___k1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5 = 0;
		uint8_t L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_6&((int32_t)252)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___k1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7;
		V_0 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		int32_t L_10 = ((int32_t)55);
		uint8_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)55)), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_11|((int32_t)128)))));
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448::GeneratePublicKey(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_GeneratePublicKey_mC4A1683C88DD583FB29E371B5EE1AF75F97A2585 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, int32_t ___kOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r2, int32_t ___rOff3, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___k0;
		int32_t L_1 = ___kOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___r2;
		int32_t L_3 = ___rOff3;
		X448_ScalarMultBase_mDF5361D5A11DE4D686F00630DAF9497A86D75A9F(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448::PointDouble(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_PointDouble_mB1F88D260993340C403293C46116895B7D637516 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___z1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_2, L_3, L_4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___z1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_1;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_5, L_6, L_7, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_8, L_9, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_1;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_10, L_11, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___x0;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_12, L_13, L_14, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_15, L_16, L_17, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___z1;
		X448Field_Mul_m117ADD5620C51D90B64DDA41105DD0559C62A1C2(L_18, ((int32_t)39082), L_19, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___z1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___z1;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_20, L_21, L_22, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___z1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___z1;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_23, L_24, L_25, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448::Precompute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_Precompute_m24267F00F1BA64A4D948AAF780612F486C4B1A65 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_Precompute_m8456BD8E6476A7B7A67CAB9B7E5BF7051F1D99BE(NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448::ScalarMult(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_ScalarMult_m74BC14AD9731D36E8B47B79A54192BAC1C5E8DB2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, int32_t ___kOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___u2, int32_t ___uOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r4, int32_t ___rOff5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___k0;
		int32_t L_2 = ___kOff1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		X448_DecodeScalar_m86B4648E8A5A8E398E89DA7C425E5D76745D8588(L_1, L_2, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4;
		L_4 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___u2;
		int32_t L_6 = ___uOff3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_1;
		X448Field_Decode_mA6FE31E4A680C131F9A025A431353936CD857240(L_5, L_6, L_7, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8;
		L_8 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_2 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_2;
		X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_9, 0, L_10, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11;
		L_11 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_3 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_3;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13;
		L_13 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_4 = L_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_4;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15;
		L_15 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_5 = L_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16;
		L_16 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_6 = L_16;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17;
		L_17 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_7 = L_17;
		V_8 = ((int32_t)447);
		V_9 = 1;
	}

IL_0062:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_6;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_18, L_19, L_20, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_4;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_21, L_22, L_23, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_5;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_24, L_25, L_26, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_2;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_27, L_28, L_29, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_6;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_30, L_31, L_32, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = V_4;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_33, L_34, L_35, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_5;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_36, L_37, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = V_2;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_38, L_39, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = V_7;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_40, L_41, L_42, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_3;
		X448Field_Mul_m117ADD5620C51D90B64DDA41105DD0559C62A1C2(L_43, ((int32_t)39082), L_44, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_3;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_45, L_46, L_47, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = V_3;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_48, L_49, L_50, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = V_2;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_51, L_52, L_53, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = V_5;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_54, L_55, L_56, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = V_4;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_57, L_58, L_59, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = V_4;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_60, L_61, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = V_5;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_62, L_63, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = V_5;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_64, L_65, L_66, NULL);
		int32_t L_67 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_67, 1));
		int32_t L_68 = V_8;
		V_10 = ((int32_t)(L_68>>5));
		int32_t L_69 = V_8;
		V_11 = ((int32_t)(L_69&((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = V_0;
		int32_t L_71 = V_10;
		int32_t L_72 = L_71;
		uint32_t L_73 = (L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
		int32_t L_74 = V_11;
		V_12 = ((int32_t)(((int32_t)((uint32_t)L_73>>((int32_t)(L_74&((int32_t)31)))))&1));
		int32_t L_75 = V_9;
		int32_t L_76 = V_12;
		V_9 = ((int32_t)(L_75^L_76));
		int32_t L_77 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = V_4;
		X448Field_CSwap_mA74180146D140AE08EDFDFAC873B3A58A8518FDC(L_77, L_78, L_79, NULL);
		int32_t L_80 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = V_5;
		X448Field_CSwap_mA74180146D140AE08EDFDFAC873B3A58A8518FDC(L_80, L_81, L_82, NULL);
		int32_t L_83 = V_12;
		V_9 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) >= ((int32_t)2)))
		{
			goto IL_0062;
		}
	}
	{
		V_13 = 0;
		goto IL_016b;
	}

IL_015e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = V_3;
		X448_PointDouble_mB1F88D260993340C403293C46116895B7D637516(L_85, L_86, NULL);
		int32_t L_87 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_016b:
	{
		int32_t L_88 = V_13;
		if ((((int32_t)L_88) < ((int32_t)2)))
		{
			goto IL_015e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_89 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = V_3;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Inv_m27D508D80A51F31463ACB46B6EFC924048E556A6(L_89, L_90, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_91 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_93 = V_2;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_91, L_92, L_93, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = V_2;
		X448Field_Normalize_m28D257AC52601B6B435B1DCF0215E0BA9DC5762D(L_94, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = ___r4;
		int32_t L_97 = ___rOff5;
		X448Field_Encode_m0A25DB30AC6F72F954D767194CEB1964274691BF(L_95, L_96, L_97, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448::ScalarMultBase(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_ScalarMultBase_mDF5361D5A11DE4D686F00630DAF9497A86D75A9F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, int32_t ___kOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r2, int32_t ___rOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_1 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___k0;
		int32_t L_3 = ___kOff1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_ScalarMultBaseXY_m8A5B15F89594E46E57FA18511F208F9A4530D231(L_2, L_3, L_4, L_5, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_0;
		X448Field_Inv_m27D508D80A51F31463ACB46B6EFC924048E556A6(L_6, L_7, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_8, L_9, L_10, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_11, L_12, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		X448Field_Normalize_m28D257AC52601B6B435B1DCF0215E0BA9DC5762D(L_13, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___r2;
		int32_t L_16 = ___rOff3;
		X448Field_Encode_m0A25DB30AC6F72F954D767194CEB1964274691BF(L_14, L_15, L_16, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448__ctor_mA9FDC5716F639B235994E706E9D91271B9315AA5 (X448_tE3E7DA868EFB06A58B828DAB39D08493B6BA44FE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448/F::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void F__ctor_m574549CB01CDC560F75FD468D95340F8F29125DD (F_tB5F71335144C0FEC48C529FBFD1D7ECFF3170724* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field__ctor_m521045A8454096E2973621CA88F3CEFFF2E8214A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field__ctor_m521045A8454096E2973621CA88F3CEFFF2E8214A (X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Add(System.UInt32[],System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0012;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___z2;
		int32_t L_1 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___x0;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___y1;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_9)));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0012:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)16))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::AddOne(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_AddOne_mC4D51247BFD297C40E6531129D3BF53DDA0B280B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z0, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___z0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		V_0 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		int32_t L_3 = 0;
		uint32_t L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, 1)));
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::AddOne(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_AddOne_mABD2BBBFC2D3C8D62B4080F25F78D08EA1FB5B58 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z0, int32_t ___zOff1, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___z0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		V_0 = L_1;
		int32_t L_2 = ___zOff1;
		int32_t L_3 = L_2;
		V_1 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		intptr_t L_5 = V_1;
		intptr_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, 1)));
		return;
	}
}
// System.Int32 Org.BouncyCastle.Math.EC.Rfc7748.X448Field::AreEqual(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X448Field_AreEqual_m67CD0CDA7D7E4A3A8217EE7F1331F993A39B7809 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0014;
	}

IL_0006:
	{
		uint32_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___x0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___y1;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = ((int32_t)((int32_t)L_0|((int32_t)((int32_t)L_4^(int32_t)L_8))));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0014:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)16))))
		{
			goto IL_0006;
		}
	}
	{
		uint32_t L_11 = V_0;
		uint32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_11|((int32_t)((uint32_t)L_12>>((int32_t)16)))));
		uint32_t L_13 = V_0;
		V_0 = ((int32_t)((int32_t)L_13&((int32_t)65535)));
		uint32_t L_14 = V_0;
		return ((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, 1))>>((int32_t)31)));
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc7748.X448Field::AreEqualVar(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X448Field_AreEqualVar_m4D234011F3126BFD6E6576B469D7B046CA0C17F5 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = X448Field_AreEqual_m67CD0CDA7D7E4A3A8217EE7F1331F993A39B7809(L_0, L_1, NULL);
		return (bool)((((int32_t)((((int32_t)0) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Carry(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Carry_m92553C05BD554B9E155FB2DCB9E9F1E859030E5F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___z0;
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___z0;
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___z0;
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___z0;
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___z0;
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___z0;
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___z0;
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___z0;
		int32_t L_22 = 7;
		uint32_t L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___z0;
		int32_t L_25 = 8;
		uint32_t L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		V_8 = L_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___z0;
		int32_t L_28 = ((int32_t)9);
		uint32_t L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		V_9 = L_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___z0;
		int32_t L_31 = ((int32_t)10);
		uint32_t L_32 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		V_10 = L_32;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___z0;
		int32_t L_34 = ((int32_t)11);
		uint32_t L_35 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_11 = L_35;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___z0;
		int32_t L_37 = ((int32_t)12);
		uint32_t L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_12 = L_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___z0;
		int32_t L_40 = ((int32_t)13);
		uint32_t L_41 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		V_13 = L_41;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___z0;
		int32_t L_43 = ((int32_t)14);
		uint32_t L_44 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		V_14 = L_44;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___z0;
		int32_t L_46 = ((int32_t)15);
		uint32_t L_47 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		V_15 = L_47;
		uint32_t L_48 = V_1;
		uint32_t L_49 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, ((int32_t)((uint32_t)L_49>>((int32_t)28)))));
		uint32_t L_50 = V_0;
		V_0 = ((int32_t)((int32_t)L_50&((int32_t)268435455)));
		uint32_t L_51 = V_5;
		uint32_t L_52 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, ((int32_t)((uint32_t)L_52>>((int32_t)28)))));
		uint32_t L_53 = V_4;
		V_4 = ((int32_t)((int32_t)L_53&((int32_t)268435455)));
		uint32_t L_54 = V_9;
		uint32_t L_55 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, ((int32_t)((uint32_t)L_55>>((int32_t)28)))));
		uint32_t L_56 = V_8;
		V_8 = ((int32_t)((int32_t)L_56&((int32_t)268435455)));
		uint32_t L_57 = V_13;
		uint32_t L_58 = V_12;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, ((int32_t)((uint32_t)L_58>>((int32_t)28)))));
		uint32_t L_59 = V_12;
		V_12 = ((int32_t)((int32_t)L_59&((int32_t)268435455)));
		uint32_t L_60 = V_2;
		uint32_t L_61 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, ((int32_t)((uint32_t)L_61>>((int32_t)28)))));
		uint32_t L_62 = V_1;
		V_1 = ((int32_t)((int32_t)L_62&((int32_t)268435455)));
		uint32_t L_63 = V_6;
		uint32_t L_64 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, ((int32_t)((uint32_t)L_64>>((int32_t)28)))));
		uint32_t L_65 = V_5;
		V_5 = ((int32_t)((int32_t)L_65&((int32_t)268435455)));
		uint32_t L_66 = V_10;
		uint32_t L_67 = V_9;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, ((int32_t)((uint32_t)L_67>>((int32_t)28)))));
		uint32_t L_68 = V_9;
		V_9 = ((int32_t)((int32_t)L_68&((int32_t)268435455)));
		uint32_t L_69 = V_14;
		uint32_t L_70 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, ((int32_t)((uint32_t)L_70>>((int32_t)28)))));
		uint32_t L_71 = V_13;
		V_13 = ((int32_t)((int32_t)L_71&((int32_t)268435455)));
		uint32_t L_72 = V_3;
		uint32_t L_73 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, ((int32_t)((uint32_t)L_73>>((int32_t)28)))));
		uint32_t L_74 = V_2;
		V_2 = ((int32_t)((int32_t)L_74&((int32_t)268435455)));
		uint32_t L_75 = V_7;
		uint32_t L_76 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, ((int32_t)((uint32_t)L_76>>((int32_t)28)))));
		uint32_t L_77 = V_6;
		V_6 = ((int32_t)((int32_t)L_77&((int32_t)268435455)));
		uint32_t L_78 = V_11;
		uint32_t L_79 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, ((int32_t)((uint32_t)L_79>>((int32_t)28)))));
		uint32_t L_80 = V_10;
		V_10 = ((int32_t)((int32_t)L_80&((int32_t)268435455)));
		uint32_t L_81 = V_15;
		uint32_t L_82 = V_14;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, ((int32_t)((uint32_t)L_82>>((int32_t)28)))));
		uint32_t L_83 = V_14;
		V_14 = ((int32_t)((int32_t)L_83&((int32_t)268435455)));
		uint32_t L_84 = V_15;
		V_16 = ((int32_t)((uint32_t)L_84>>((int32_t)28)));
		uint32_t L_85 = V_15;
		V_15 = ((int32_t)((int32_t)L_85&((int32_t)268435455)));
		uint32_t L_86 = V_0;
		uint32_t L_87 = V_16;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)L_87));
		uint32_t L_88 = V_8;
		uint32_t L_89 = V_16;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)L_89));
		uint32_t L_90 = V_4;
		uint32_t L_91 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, ((int32_t)((uint32_t)L_91>>((int32_t)28)))));
		uint32_t L_92 = V_3;
		V_3 = ((int32_t)((int32_t)L_92&((int32_t)268435455)));
		uint32_t L_93 = V_8;
		uint32_t L_94 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, ((int32_t)((uint32_t)L_94>>((int32_t)28)))));
		uint32_t L_95 = V_7;
		V_7 = ((int32_t)((int32_t)L_95&((int32_t)268435455)));
		uint32_t L_96 = V_12;
		uint32_t L_97 = V_11;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, ((int32_t)((uint32_t)L_97>>((int32_t)28)))));
		uint32_t L_98 = V_11;
		V_11 = ((int32_t)((int32_t)L_98&((int32_t)268435455)));
		uint32_t L_99 = V_1;
		uint32_t L_100 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_99, ((int32_t)((uint32_t)L_100>>((int32_t)28)))));
		uint32_t L_101 = V_0;
		V_0 = ((int32_t)((int32_t)L_101&((int32_t)268435455)));
		uint32_t L_102 = V_5;
		uint32_t L_103 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, ((int32_t)((uint32_t)L_103>>((int32_t)28)))));
		uint32_t L_104 = V_4;
		V_4 = ((int32_t)((int32_t)L_104&((int32_t)268435455)));
		uint32_t L_105 = V_9;
		uint32_t L_106 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, ((int32_t)((uint32_t)L_106>>((int32_t)28)))));
		uint32_t L_107 = V_8;
		V_8 = ((int32_t)((int32_t)L_107&((int32_t)268435455)));
		uint32_t L_108 = V_13;
		uint32_t L_109 = V_12;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, ((int32_t)((uint32_t)L_109>>((int32_t)28)))));
		uint32_t L_110 = V_12;
		V_12 = ((int32_t)((int32_t)L_110&((int32_t)268435455)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_111 = ___z0;
		uint32_t L_112 = V_0;
		(L_111)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_112);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_113 = ___z0;
		uint32_t L_114 = V_1;
		(L_113)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_114);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_115 = ___z0;
		uint32_t L_116 = V_2;
		(L_115)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_116);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = ___z0;
		uint32_t L_118 = V_3;
		(L_117)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_118);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_119 = ___z0;
		uint32_t L_120 = V_4;
		(L_119)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_120);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = ___z0;
		uint32_t L_122 = V_5;
		(L_121)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_122);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_123 = ___z0;
		uint32_t L_124 = V_6;
		(L_123)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_124);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_125 = ___z0;
		uint32_t L_126 = V_7;
		(L_125)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_126);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_127 = ___z0;
		uint32_t L_128 = V_8;
		(L_127)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (uint32_t)L_128);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_129 = ___z0;
		uint32_t L_130 = V_9;
		(L_129)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)L_130);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_131 = ___z0;
		uint32_t L_132 = V_10;
		(L_131)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)L_132);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_133 = ___z0;
		uint32_t L_134 = V_11;
		(L_133)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)L_134);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_135 = ___z0;
		uint32_t L_136 = V_12;
		(L_135)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)L_136);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_137 = ___z0;
		uint32_t L_138 = V_13;
		(L_137)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)L_138);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_139 = ___z0;
		uint32_t L_140 = V_14;
		(L_139)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)L_140);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = ___z0;
		uint32_t L_142 = V_15;
		(L_141)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)L_142);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::CMov(System.Int32,System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_CMov_mFA107A40CC7714E4E54DD111E11C13A4AFE58182 (int32_t ___cond0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x1, int32_t ___xOff2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z3, int32_t ___zOff4, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		int32_t L_0 = ___cond0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0026;
	}

IL_0006:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___z3;
		int32_t L_2 = ___zOff4;
		int32_t L_3 = V_1;
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		uint32_t L_5 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		uint32_t L_6 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___x1;
		int32_t L_8 = ___xOff2;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		uint32_t L_11 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int32_t)((int32_t)L_6^(int32_t)L_11));
		uint32_t L_12 = V_2;
		uint32_t L_13 = V_3;
		uint32_t L_14 = V_0;
		V_2 = ((int32_t)((int32_t)L_12^((int32_t)((int32_t)L_13&(int32_t)L_14))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___z3;
		int32_t L_16 = ___zOff4;
		int32_t L_17 = V_1;
		uint32_t L_18 = V_2;
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_16, L_17))), (uint32_t)L_18);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0026:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)16))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::CNegate(System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_CNegate_m10B9F9B7B0763D632C60D7CC9717B41EB4455D73 (int32_t ___negate0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___z1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_1, L_2, L_3, NULL);
		int32_t L_4 = ___negate0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___z1;
		X448Field_CMov_mFA107A40CC7714E4E54DD111E11C13A4AFE58182(((-L_4)), L_5, 0, L_6, 0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Copy(System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___xOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, int32_t ___zOff3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0012;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___z2;
		int32_t L_1 = ___zOff3;
		int32_t L_2 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___x0;
		int32_t L_4 = ___xOff1;
		int32_t L_5 = V_0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		uint32_t L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (uint32_t)L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)16))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		return L_0;
	}
}
// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc7748.X448Field::CreateTable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* X448Field_CreateTable_m046D1F4EDA1C8D8A11A487430E4B3B4A08564838 (int32_t ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___n0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)16), L_0)));
		return L_1;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::CSwap(System.Int32,System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_CSwap_mA74180146D140AE08EDFDFAC873B3A58A8518FDC (int32_t ___swap0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___a1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___b2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		int32_t L_0 = ___swap0;
		V_0 = ((-L_0));
		V_1 = 0;
		goto IL_0028;
	}

IL_0007:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___a1;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___b2;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		uint32_t L_9 = V_0;
		uint32_t L_10 = V_2;
		uint32_t L_11 = V_3;
		V_4 = ((int32_t)((int32_t)L_9&((int32_t)((int32_t)L_10^(int32_t)L_11))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___a1;
		int32_t L_13 = V_1;
		uint32_t L_14 = V_2;
		uint32_t L_15 = V_4;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)((int32_t)((int32_t)L_14^(int32_t)L_15)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___b2;
		int32_t L_17 = V_1;
		uint32_t L_18 = V_3;
		uint32_t L_19 = V_4;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17), (uint32_t)((int32_t)((int32_t)L_18^(int32_t)L_19)));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0028:
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)16))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Decode(System.UInt32[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Decode_m1E7B45410211804BB8A8BB1CE3BDA7AE0F05FCFB (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___xOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		int32_t L_1 = ___xOff1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___z2;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Decode224_mA291D389234B67AFEC5A2DB0F776B4458AD7A7BB(L_0, L_1, L_2, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___x0;
		int32_t L_4 = ___xOff1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___z2;
		X448Field_Decode224_mA291D389234B67AFEC5A2DB0F776B4458AD7A7BB(L_3, ((int32_t)il2cpp_codegen_add(L_4, 7)), L_5, 8, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Decode(System.Byte[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Decode_mA6FE31E4A680C131F9A025A431353936CD857240 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, int32_t ___xOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___x0;
		int32_t L_1 = ___xOff1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___z2;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Decode56_m31096EA96C9B27677BA73B7B54842917C51A567C(L_0, L_1, L_2, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___x0;
		int32_t L_4 = ___xOff1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___z2;
		X448Field_Decode56_m31096EA96C9B27677BA73B7B54842917C51A567C(L_3, ((int32_t)il2cpp_codegen_add(L_4, 7)), L_5, 2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___x0;
		int32_t L_7 = ___xOff1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___z2;
		X448Field_Decode56_m31096EA96C9B27677BA73B7B54842917C51A567C(L_6, ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)14))), L_8, 4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___x0;
		int32_t L_10 = ___xOff1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___z2;
		X448Field_Decode56_m31096EA96C9B27677BA73B7B54842917C51A567C(L_9, ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)21))), L_11, 6, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___x0;
		int32_t L_13 = ___xOff1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___z2;
		X448Field_Decode56_m31096EA96C9B27677BA73B7B54842917C51A567C(L_12, ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)28))), L_14, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___x0;
		int32_t L_16 = ___xOff1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___z2;
		X448Field_Decode56_m31096EA96C9B27677BA73B7B54842917C51A567C(L_15, ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)35))), L_17, ((int32_t)10), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___x0;
		int32_t L_19 = ___xOff1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___z2;
		X448Field_Decode56_m31096EA96C9B27677BA73B7B54842917C51A567C(L_18, ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)42))), L_20, ((int32_t)12), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___x0;
		int32_t L_22 = ___xOff1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___z2;
		X448Field_Decode56_m31096EA96C9B27677BA73B7B54842917C51A567C(L_21, ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)49))), L_23, ((int32_t)14), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Decode224(System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Decode224_mA291D389234B67AFEC5A2DB0F776B4458AD7A7BB (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___xOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, int32_t ___zOff3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		int32_t L_1 = ___xOff1;
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___x0;
		int32_t L_5 = ___xOff1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___x0;
		int32_t L_9 = ___xOff1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___x0;
		int32_t L_13 = ___xOff1;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint32_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = L_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___x0;
		int32_t L_17 = ___xOff1;
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint32_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = L_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___x0;
		int32_t L_21 = ___xOff1;
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 5));
		uint32_t L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_5 = L_23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___x0;
		int32_t L_25 = ___xOff1;
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 6));
		uint32_t L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		V_6 = L_27;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___z2;
		int32_t L_29 = ___zOff3;
		uint32_t L_30 = V_0;
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29), (uint32_t)((int32_t)((int32_t)L_30&((int32_t)268435455))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___z2;
		int32_t L_32 = ___zOff3;
		uint32_t L_33 = V_0;
		uint32_t L_34 = V_1;
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_32, 1))), (uint32_t)((int32_t)(((int32_t)(((int32_t)((uint32_t)L_33>>((int32_t)28)))|((int32_t)((int32_t)L_34<<4))))&((int32_t)268435455))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = ___z2;
		int32_t L_36 = ___zOff3;
		uint32_t L_37 = V_1;
		uint32_t L_38 = V_2;
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 2))), (uint32_t)((int32_t)(((int32_t)(((int32_t)((uint32_t)L_37>>((int32_t)24)))|((int32_t)((int32_t)L_38<<8))))&((int32_t)268435455))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___z2;
		int32_t L_40 = ___zOff3;
		uint32_t L_41 = V_2;
		uint32_t L_42 = V_3;
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_40, 3))), (uint32_t)((int32_t)(((int32_t)(((int32_t)((uint32_t)L_41>>((int32_t)20)))|((int32_t)((int32_t)L_42<<((int32_t)12)))))&((int32_t)268435455))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___z2;
		int32_t L_44 = ___zOff3;
		uint32_t L_45 = V_3;
		uint32_t L_46 = V_4;
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_44, 4))), (uint32_t)((int32_t)(((int32_t)(((int32_t)((uint32_t)L_45>>((int32_t)16)))|((int32_t)((int32_t)L_46<<((int32_t)16)))))&((int32_t)268435455))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___z2;
		int32_t L_48 = ___zOff3;
		uint32_t L_49 = V_4;
		uint32_t L_50 = V_5;
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_48, 5))), (uint32_t)((int32_t)(((int32_t)(((int32_t)((uint32_t)L_49>>((int32_t)12)))|((int32_t)((int32_t)L_50<<((int32_t)20)))))&((int32_t)268435455))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___z2;
		int32_t L_52 = ___zOff3;
		uint32_t L_53 = V_5;
		uint32_t L_54 = V_6;
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_52, 6))), (uint32_t)((int32_t)(((int32_t)(((int32_t)((uint32_t)L_53>>8))|((int32_t)((int32_t)L_54<<((int32_t)24)))))&((int32_t)268435455))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = ___z2;
		int32_t L_56 = ___zOff3;
		uint32_t L_57 = V_6;
		(L_55)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_56, 7))), (uint32_t)((int32_t)((uint32_t)L_57>>4)));
		return;
	}
}
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Decode24(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t X448Field_Decode24_mAAFF0AB2845C4CB511ACD454D68E326322526C79 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		uint32_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bs0;
		int32_t L_6 = ___off1;
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		___off1 = L_7;
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int32_t)((int32_t)L_4|((int32_t)((int32_t)L_9<<8))));
		uint32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bs0;
		int32_t L_12 = ___off1;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		___off1 = L_13;
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = ((int32_t)((int32_t)L_10|((int32_t)((int32_t)L_15<<((int32_t)16)))));
		uint32_t L_16 = V_0;
		return L_16;
	}
}
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Decode32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t X448Field_Decode32_mA244D05FB2927A958BAC0B59DDDE056801F89006 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		uint32_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bs0;
		int32_t L_6 = ___off1;
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		___off1 = L_7;
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int32_t)((int32_t)L_4|((int32_t)((int32_t)L_9<<8))));
		uint32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bs0;
		int32_t L_12 = ___off1;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		___off1 = L_13;
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = ((int32_t)((int32_t)L_10|((int32_t)((int32_t)L_15<<((int32_t)16)))));
		uint32_t L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___bs0;
		int32_t L_18 = ___off1;
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		___off1 = L_19;
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int32_t)((int32_t)L_16|((int32_t)((int32_t)L_21<<((int32_t)24)))));
		uint32_t L_22 = V_0;
		return L_22;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Decode56(System.Byte[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Decode56_m31096EA96C9B27677BA73B7B54842917C51A567C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, int32_t ___zOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = X448Field_Decode32_mA244D05FB2927A958BAC0B59DDDE056801F89006(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs0;
		int32_t L_4 = ___off1;
		uint32_t L_5;
		L_5 = X448Field_Decode24_mAAFF0AB2845C4CB511ACD454D68E326322526C79(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_1 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___z2;
		int32_t L_7 = ___zOff3;
		uint32_t L_8 = V_0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (uint32_t)((int32_t)((int32_t)L_8&((int32_t)268435455))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___z2;
		int32_t L_10 = ___zOff3;
		uint32_t L_11 = V_0;
		uint32_t L_12 = V_1;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 1))), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_11>>((int32_t)28)))|((int32_t)((int32_t)L_12<<4)))));
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Encode(System.UInt32[],System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode_m63923F7E249054BCBA602805F8359FD5D6CB8B2E (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, int32_t ___zOff2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___z1;
		int32_t L_2 = ___zOff2;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Encode224_mC566C3EDC5D126B6853BC8C5BFB805B61F75D1B3(L_0, 0, L_1, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___z1;
		int32_t L_5 = ___zOff2;
		X448Field_Encode224_mC566C3EDC5D126B6853BC8C5BFB805B61F75D1B3(L_3, 8, L_4, ((int32_t)il2cpp_codegen_add(L_5, 7)), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Encode(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode_m0A25DB30AC6F72F954D767194CEB1964274691BF (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___z1, int32_t ___zOff2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___z1;
		int32_t L_2 = ___zOff2;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Encode56_mCB84AD3481E81E538FD5C494C04CE82F12629ECE(L_0, 0, L_1, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___z1;
		int32_t L_5 = ___zOff2;
		X448Field_Encode56_mCB84AD3481E81E538FD5C494C04CE82F12629ECE(L_3, 2, L_4, ((int32_t)il2cpp_codegen_add(L_5, 7)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___z1;
		int32_t L_8 = ___zOff2;
		X448Field_Encode56_mCB84AD3481E81E538FD5C494C04CE82F12629ECE(L_6, 4, L_7, ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)14))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___z1;
		int32_t L_11 = ___zOff2;
		X448Field_Encode56_mCB84AD3481E81E538FD5C494C04CE82F12629ECE(L_9, 6, L_10, ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)21))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___z1;
		int32_t L_14 = ___zOff2;
		X448Field_Encode56_mCB84AD3481E81E538FD5C494C04CE82F12629ECE(L_12, 8, L_13, ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)28))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___z1;
		int32_t L_17 = ___zOff2;
		X448Field_Encode56_mCB84AD3481E81E538FD5C494C04CE82F12629ECE(L_15, ((int32_t)10), L_16, ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)35))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___z1;
		int32_t L_20 = ___zOff2;
		X448Field_Encode56_mCB84AD3481E81E538FD5C494C04CE82F12629ECE(L_18, ((int32_t)12), L_19, ((int32_t)il2cpp_codegen_add(L_20, ((int32_t)42))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___z1;
		int32_t L_23 = ___zOff2;
		X448Field_Encode56_mCB84AD3481E81E538FD5C494C04CE82F12629ECE(L_21, ((int32_t)14), L_22, ((int32_t)il2cpp_codegen_add(L_23, ((int32_t)49))), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Encode224(System.UInt32[],System.Int32,System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode224_mC566C3EDC5D126B6853BC8C5BFB805B61F75D1B3 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___xOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, int32_t ___zOff3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		int32_t L_1 = ___xOff1;
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___x0;
		int32_t L_5 = ___xOff1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___x0;
		int32_t L_9 = ___xOff1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___x0;
		int32_t L_13 = ___xOff1;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint32_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_3 = L_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___x0;
		int32_t L_17 = ___xOff1;
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		uint32_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = L_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___x0;
		int32_t L_21 = ___xOff1;
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 5));
		uint32_t L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_5 = L_23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___x0;
		int32_t L_25 = ___xOff1;
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(L_25, 6));
		uint32_t L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		V_6 = L_27;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___x0;
		int32_t L_29 = ___xOff1;
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 7));
		uint32_t L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		V_7 = L_31;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___z2;
		int32_t L_33 = ___zOff3;
		uint32_t L_34 = V_0;
		uint32_t L_35 = V_1;
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33), (uint32_t)((int32_t)((int32_t)L_34|((int32_t)((int32_t)L_35<<((int32_t)28))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___z2;
		int32_t L_37 = ___zOff3;
		uint32_t L_38 = V_1;
		uint32_t L_39 = V_2;
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_37, 1))), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_38>>4))|((int32_t)((int32_t)L_39<<((int32_t)24))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = ___z2;
		int32_t L_41 = ___zOff3;
		uint32_t L_42 = V_2;
		uint32_t L_43 = V_3;
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_41, 2))), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_42>>8))|((int32_t)((int32_t)L_43<<((int32_t)20))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ___z2;
		int32_t L_45 = ___zOff3;
		uint32_t L_46 = V_3;
		uint32_t L_47 = V_4;
		(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 3))), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_46>>((int32_t)12)))|((int32_t)((int32_t)L_47<<((int32_t)16))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___z2;
		int32_t L_49 = ___zOff3;
		uint32_t L_50 = V_4;
		uint32_t L_51 = V_5;
		(L_48)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_49, 4))), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_50>>((int32_t)16)))|((int32_t)((int32_t)L_51<<((int32_t)12))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = ___z2;
		int32_t L_53 = ___zOff3;
		uint32_t L_54 = V_5;
		uint32_t L_55 = V_6;
		(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_53, 5))), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_54>>((int32_t)20)))|((int32_t)((int32_t)L_55<<8)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = ___z2;
		int32_t L_57 = ___zOff3;
		uint32_t L_58 = V_6;
		uint32_t L_59 = V_7;
		(L_56)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_57, 6))), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_58>>((int32_t)24)))|((int32_t)((int32_t)L_59<<4)))));
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Encode24(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode24_m0A085D669D2DADA41F8156092E852C05998E7D95 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs1;
		int32_t L_1 = ___off2;
		uint32_t L_2 = ___n0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs1;
		int32_t L_4 = ___off2;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		___off2 = L_5;
		uint32_t L_6 = ___n0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_6>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___bs1;
		int32_t L_8 = ___off2;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		___off2 = L_9;
		uint32_t L_10 = ___n0;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Encode32(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode32_mDB2D3D911718F7EA8F9DFB0D65C1F94684161AF0 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs1;
		int32_t L_1 = ___off2;
		uint32_t L_2 = ___n0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs1;
		int32_t L_4 = ___off2;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		___off2 = L_5;
		uint32_t L_6 = ___n0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_6>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___bs1;
		int32_t L_8 = ___off2;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		___off2 = L_9;
		uint32_t L_10 = ___n0;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bs1;
		int32_t L_12 = ___off2;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		___off2 = L_13;
		uint32_t L_14 = ___n0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_14>>((int32_t)24)))));
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Encode56(System.UInt32[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode56_mCB84AD3481E81E538FD5C494C04CE82F12629ECE (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___xOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs2, int32_t ___off3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		int32_t L_1 = ___xOff1;
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___x0;
		int32_t L_5 = ___xOff1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		uint32_t L_8 = V_0;
		uint32_t L_9 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___bs2;
		int32_t L_11 = ___off3;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Encode32_mDB2D3D911718F7EA8F9DFB0D65C1F94684161AF0(((int32_t)((int32_t)L_8|((int32_t)((int32_t)L_9<<((int32_t)28))))), L_10, L_11, NULL);
		uint32_t L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___bs2;
		int32_t L_14 = ___off3;
		X448Field_Encode24_m0A085D669D2DADA41F8156092E852C05998E7D95(((int32_t)((uint32_t)L_12>>4)), L_13, ((int32_t)il2cpp_codegen_add(L_14, 4)), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Inv(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Inv_m27D508D80A51F31463ACB46B6EFC924048E556A6 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_2, 0, L_3, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		X448Field_Normalize_m28D257AC52601B6B435B1DCF0215E0BA9DC5762D(L_4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_1;
		X448Field_Encode_m63923F7E249054BCBA602805F8359FD5D6CB8B2E(L_5, L_6, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ((X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_StaticFields*)il2cpp_codegen_static_fields_for(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var))->___P32_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		uint32_t L_10;
		L_10 = Mod_ModOddInverse_m3FAA23860F91405FD30C081932D25F1ED084E4CA(L_7, L_8, L_9, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___z1;
		X448Field_Decode_m1E7B45410211804BB8A8BB1CE3BDA7AE0F05FCFB(L_11, 0, L_12, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::InvVar(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_InvVar_mEE86B423AE4590A4747CC4196B46F5E8E4946528 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_2, 0, L_3, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		X448Field_Normalize_m28D257AC52601B6B435B1DCF0215E0BA9DC5762D(L_4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_1;
		X448Field_Encode_m63923F7E249054BCBA602805F8359FD5D6CB8B2E(L_5, L_6, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ((X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_StaticFields*)il2cpp_codegen_static_fields_for(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var))->___P32_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Mod_t2AA44984D3CA3C7E77CFB1CB0FE7B52B19603944_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Mod_ModOddInverseVar_mFD7BB95FFBC25EC7F0114567093B9C215F83D949(L_7, L_8, L_9, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___z1;
		X448Field_Decode_m1E7B45410211804BB8A8BB1CE3BDA7AE0F05FCFB(L_11, 0, L_12, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Math.EC.Rfc7748.X448Field::IsOne(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X448Field_IsOne_m4506B3551B9648F4F3122546C76000248E885826 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int32_t)((int32_t)L_2^1));
		V_1 = 1;
		goto IL_0014;
	}

IL_000a:
	{
		uint32_t L_3 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___x0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int32_t)((int32_t)L_3|(int32_t)L_7));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0014:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)16))))
		{
			goto IL_000a;
		}
	}
	{
		uint32_t L_10 = V_0;
		uint32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_10|((int32_t)((uint32_t)L_11>>((int32_t)16)))));
		uint32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12&((int32_t)65535)));
		uint32_t L_13 = V_0;
		return ((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_13, 1))>>((int32_t)31)));
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc7748.X448Field::IsOneVar(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X448Field_IsOneVar_m6B778D12780F415C7101858B7CABFE6D77988D9B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = X448Field_IsOne_m4506B3551B9648F4F3122546C76000248E885826(L_0, NULL);
		return (bool)((((int32_t)((((int32_t)0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 Org.BouncyCastle.Math.EC.Rfc7748.X448Field::IsZero(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X448Field_IsZero_m77E3695C249DCE19085642E0C08D835CECE96D6A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0010;
	}

IL_0006:
	{
		uint32_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___x0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int32_t)((int32_t)L_0|(int32_t)L_4));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0010:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)16))))
		{
			goto IL_0006;
		}
	}
	{
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_7|((int32_t)((uint32_t)L_8>>((int32_t)16)))));
		uint32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9&((int32_t)65535)));
		uint32_t L_10 = V_0;
		return ((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, 1))>>((int32_t)31)));
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc7748.X448Field::IsZeroVar(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X448Field_IsZeroVar_m66A2422FBD302F46255DE30062EE21833A59264F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = X448Field_IsZero_m77E3695C249DCE19085642E0C08D835CECE96D6A(L_0, NULL);
		return (bool)((((int32_t)((((int64_t)((int64_t)0)) == ((int64_t)((int64_t)L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Mul(System.UInt32[],System.UInt32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Mul_m117ADD5620C51D90B64DDA41105DD0559C62A1C2 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, uint32_t ___y1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	uint32_t V_18 = 0;
	uint32_t V_19 = 0;
	uint64_t V_20 = 0;
	uint64_t V_21 = 0;
	uint64_t V_22 = 0;
	uint64_t V_23 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___x0;
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___x0;
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___x0;
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___x0;
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___x0;
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___x0;
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___x0;
		int32_t L_22 = 7;
		uint32_t L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___x0;
		int32_t L_25 = 8;
		uint32_t L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		V_8 = L_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___x0;
		int32_t L_28 = ((int32_t)9);
		uint32_t L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		V_9 = L_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___x0;
		int32_t L_31 = ((int32_t)10);
		uint32_t L_32 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		V_10 = L_32;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___x0;
		int32_t L_34 = ((int32_t)11);
		uint32_t L_35 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_11 = L_35;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___x0;
		int32_t L_37 = ((int32_t)12);
		uint32_t L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_12 = L_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___x0;
		int32_t L_40 = ((int32_t)13);
		uint32_t L_41 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		V_13 = L_41;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___x0;
		int32_t L_43 = ((int32_t)14);
		uint32_t L_44 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		V_14 = L_44;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___x0;
		int32_t L_46 = ((int32_t)15);
		uint32_t L_47 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		V_15 = L_47;
		uint32_t L_48 = V_1;
		uint32_t L_49 = ___y1;
		V_20 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_48), ((int64_t)(uint64_t)L_49)));
		uint64_t L_50 = V_20;
		V_16 = ((int32_t)(((int32_t)(uint32_t)L_50)&((int32_t)268435455)));
		uint64_t L_51 = V_20;
		V_20 = ((int64_t)((uint64_t)L_51>>((int32_t)28)));
		uint32_t L_52 = V_5;
		uint32_t L_53 = ___y1;
		V_21 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_52), ((int64_t)(uint64_t)L_53)));
		uint64_t L_54 = V_21;
		V_17 = ((int32_t)(((int32_t)(uint32_t)L_54)&((int32_t)268435455)));
		uint64_t L_55 = V_21;
		V_21 = ((int64_t)((uint64_t)L_55>>((int32_t)28)));
		uint32_t L_56 = V_9;
		uint32_t L_57 = ___y1;
		V_22 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_56), ((int64_t)(uint64_t)L_57)));
		uint64_t L_58 = V_22;
		V_18 = ((int32_t)(((int32_t)(uint32_t)L_58)&((int32_t)268435455)));
		uint64_t L_59 = V_22;
		V_22 = ((int64_t)((uint64_t)L_59>>((int32_t)28)));
		uint32_t L_60 = V_13;
		uint32_t L_61 = ___y1;
		V_23 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_60), ((int64_t)(uint64_t)L_61)));
		uint64_t L_62 = V_23;
		V_19 = ((int32_t)(((int32_t)(uint32_t)L_62)&((int32_t)268435455)));
		uint64_t L_63 = V_23;
		V_23 = ((int64_t)((uint64_t)L_63>>((int32_t)28)));
		uint64_t L_64 = V_20;
		uint32_t L_65 = V_2;
		uint32_t L_66 = ___y1;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_65), ((int64_t)(uint64_t)L_66)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = ___z2;
		uint64_t L_68 = V_20;
		(L_67)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_68)&((int32_t)268435455))));
		uint64_t L_69 = V_20;
		V_20 = ((int64_t)((uint64_t)L_69>>((int32_t)28)));
		uint64_t L_70 = V_21;
		uint32_t L_71 = V_6;
		uint32_t L_72 = ___y1;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_70, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_71), ((int64_t)(uint64_t)L_72)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___z2;
		uint64_t L_74 = V_21;
		(L_73)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_74)&((int32_t)268435455))));
		uint64_t L_75 = V_21;
		V_21 = ((int64_t)((uint64_t)L_75>>((int32_t)28)));
		uint64_t L_76 = V_22;
		uint32_t L_77 = V_10;
		uint32_t L_78 = ___y1;
		V_22 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_77), ((int64_t)(uint64_t)L_78)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___z2;
		uint64_t L_80 = V_22;
		(L_79)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_80)&((int32_t)268435455))));
		uint64_t L_81 = V_22;
		V_22 = ((int64_t)((uint64_t)L_81>>((int32_t)28)));
		uint64_t L_82 = V_23;
		uint32_t L_83 = V_14;
		uint32_t L_84 = ___y1;
		V_23 = ((int64_t)il2cpp_codegen_add((int64_t)L_82, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_83), ((int64_t)(uint64_t)L_84)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = ___z2;
		uint64_t L_86 = V_23;
		(L_85)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_86)&((int32_t)268435455))));
		uint64_t L_87 = V_23;
		V_23 = ((int64_t)((uint64_t)L_87>>((int32_t)28)));
		uint64_t L_88 = V_20;
		uint32_t L_89 = V_3;
		uint32_t L_90 = ___y1;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_88, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_89), ((int64_t)(uint64_t)L_90)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_91 = ___z2;
		uint64_t L_92 = V_20;
		(L_91)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_92)&((int32_t)268435455))));
		uint64_t L_93 = V_20;
		V_20 = ((int64_t)((uint64_t)L_93>>((int32_t)28)));
		uint64_t L_94 = V_21;
		uint32_t L_95 = V_7;
		uint32_t L_96 = ___y1;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_94, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_95), ((int64_t)(uint64_t)L_96)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = ___z2;
		uint64_t L_98 = V_21;
		(L_97)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_98)&((int32_t)268435455))));
		uint64_t L_99 = V_21;
		V_21 = ((int64_t)((uint64_t)L_99>>((int32_t)28)));
		uint64_t L_100 = V_22;
		uint32_t L_101 = V_11;
		uint32_t L_102 = ___y1;
		V_22 = ((int64_t)il2cpp_codegen_add((int64_t)L_100, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_101), ((int64_t)(uint64_t)L_102)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_103 = ___z2;
		uint64_t L_104 = V_22;
		(L_103)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_104)&((int32_t)268435455))));
		uint64_t L_105 = V_22;
		V_22 = ((int64_t)((uint64_t)L_105>>((int32_t)28)));
		uint64_t L_106 = V_23;
		uint32_t L_107 = V_15;
		uint32_t L_108 = ___y1;
		V_23 = ((int64_t)il2cpp_codegen_add((int64_t)L_106, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_107), ((int64_t)(uint64_t)L_108)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_109 = ___z2;
		uint64_t L_110 = V_23;
		(L_109)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_110)&((int32_t)268435455))));
		uint64_t L_111 = V_23;
		V_23 = ((int64_t)((uint64_t)L_111>>((int32_t)28)));
		uint64_t L_112 = V_21;
		uint64_t L_113 = V_23;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_112, (int64_t)L_113));
		uint64_t L_114 = V_20;
		uint32_t L_115 = V_4;
		uint32_t L_116 = ___y1;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_114, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_115), ((int64_t)(uint64_t)L_116)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = ___z2;
		uint64_t L_118 = V_20;
		(L_117)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_118)&((int32_t)268435455))));
		uint64_t L_119 = V_20;
		V_20 = ((int64_t)((uint64_t)L_119>>((int32_t)28)));
		uint64_t L_120 = V_21;
		uint32_t L_121 = V_8;
		uint32_t L_122 = ___y1;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_120, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_121), ((int64_t)(uint64_t)L_122)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_123 = ___z2;
		uint64_t L_124 = V_21;
		(L_123)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_124)&((int32_t)268435455))));
		uint64_t L_125 = V_21;
		V_21 = ((int64_t)((uint64_t)L_125>>((int32_t)28)));
		uint64_t L_126 = V_22;
		uint32_t L_127 = V_12;
		uint32_t L_128 = ___y1;
		V_22 = ((int64_t)il2cpp_codegen_add((int64_t)L_126, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_127), ((int64_t)(uint64_t)L_128)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_129 = ___z2;
		uint64_t L_130 = V_22;
		(L_129)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_130)&((int32_t)268435455))));
		uint64_t L_131 = V_22;
		V_22 = ((int64_t)((uint64_t)L_131>>((int32_t)28)));
		uint64_t L_132 = V_23;
		uint32_t L_133 = V_0;
		uint32_t L_134 = ___y1;
		V_23 = ((int64_t)il2cpp_codegen_add((int64_t)L_132, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_133), ((int64_t)(uint64_t)L_134)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_135 = ___z2;
		uint64_t L_136 = V_23;
		(L_135)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_136)&((int32_t)268435455))));
		uint64_t L_137 = V_23;
		V_23 = ((int64_t)((uint64_t)L_137>>((int32_t)28)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_138 = ___z2;
		uint32_t L_139 = V_16;
		uint64_t L_140 = V_23;
		(L_138)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_139, ((int32_t)(uint32_t)L_140))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = ___z2;
		uint32_t L_142 = V_17;
		uint64_t L_143 = V_20;
		(L_141)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_142, ((int32_t)(uint32_t)L_143))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_144 = ___z2;
		uint32_t L_145 = V_18;
		uint64_t L_146 = V_21;
		(L_144)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_145, ((int32_t)(uint32_t)L_146))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_147 = ___z2;
		uint32_t L_148 = V_19;
		uint64_t L_149 = V_22;
		(L_147)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_148, ((int32_t)(uint32_t)L_149))));
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Mul(System.UInt32[],System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	uint32_t V_18 = 0;
	uint32_t V_19 = 0;
	uint32_t V_20 = 0;
	uint32_t V_21 = 0;
	uint32_t V_22 = 0;
	uint32_t V_23 = 0;
	uint32_t V_24 = 0;
	uint32_t V_25 = 0;
	uint32_t V_26 = 0;
	uint32_t V_27 = 0;
	uint32_t V_28 = 0;
	uint32_t V_29 = 0;
	uint32_t V_30 = 0;
	uint32_t V_31 = 0;
	uint32_t V_32 = 0;
	uint32_t V_33 = 0;
	uint32_t V_34 = 0;
	uint32_t V_35 = 0;
	uint32_t V_36 = 0;
	uint32_t V_37 = 0;
	uint32_t V_38 = 0;
	uint32_t V_39 = 0;
	uint32_t V_40 = 0;
	uint32_t V_41 = 0;
	uint32_t V_42 = 0;
	uint32_t V_43 = 0;
	uint32_t V_44 = 0;
	uint32_t V_45 = 0;
	uint32_t V_46 = 0;
	uint32_t V_47 = 0;
	uint32_t V_48 = 0;
	uint32_t V_49 = 0;
	uint32_t V_50 = 0;
	uint32_t V_51 = 0;
	uint32_t V_52 = 0;
	uint32_t V_53 = 0;
	uint32_t V_54 = 0;
	uint32_t V_55 = 0;
	uint32_t V_56 = 0;
	uint32_t V_57 = 0;
	uint32_t V_58 = 0;
	uint32_t V_59 = 0;
	uint32_t V_60 = 0;
	uint32_t V_61 = 0;
	uint32_t V_62 = 0;
	uint32_t V_63 = 0;
	uint64_t V_64 = 0;
	uint64_t V_65 = 0;
	uint64_t V_66 = 0;
	uint64_t V_67 = 0;
	uint64_t V_68 = 0;
	uint64_t V_69 = 0;
	uint64_t V_70 = 0;
	uint64_t V_71 = 0;
	uint64_t V_72 = 0;
	uint64_t V_73 = 0;
	uint64_t V_74 = 0;
	uint64_t V_75 = 0;
	uint64_t V_76 = 0;
	uint64_t V_77 = 0;
	uint64_t V_78 = 0;
	uint64_t V_79 = 0;
	uint64_t V_80 = 0;
	uint64_t V_81 = 0;
	uint64_t V_82 = 0;
	uint64_t V_83 = 0;
	uint64_t V_84 = 0;
	uint64_t V_85 = 0;
	uint64_t V_86 = 0;
	uint64_t V_87 = 0;
	uint64_t V_88 = 0;
	uint64_t V_89 = 0;
	uint64_t V_90 = 0;
	uint64_t V_91 = 0;
	uint64_t V_92 = 0;
	uint64_t V_93 = 0;
	uint64_t V_94 = 0;
	uint64_t V_95 = 0;
	uint64_t V_96 = 0;
	uint64_t V_97 = 0;
	uint64_t V_98 = 0;
	uint64_t V_99 = 0;
	uint64_t V_100 = 0;
	uint64_t V_101 = 0;
	uint64_t V_102 = 0;
	uint64_t V_103 = 0;
	uint64_t V_104 = 0;
	uint64_t V_105 = 0;
	uint64_t V_106 = 0;
	uint64_t V_107 = 0;
	uint64_t V_108 = 0;
	uint64_t V_109 = 0;
	uint64_t V_110 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___x0;
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___x0;
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___x0;
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___x0;
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___x0;
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___x0;
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___x0;
		int32_t L_22 = 7;
		uint32_t L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___x0;
		int32_t L_25 = 8;
		uint32_t L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		V_8 = L_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___x0;
		int32_t L_28 = ((int32_t)9);
		uint32_t L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		V_9 = L_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___x0;
		int32_t L_31 = ((int32_t)10);
		uint32_t L_32 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		V_10 = L_32;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___x0;
		int32_t L_34 = ((int32_t)11);
		uint32_t L_35 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_11 = L_35;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___x0;
		int32_t L_37 = ((int32_t)12);
		uint32_t L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_12 = L_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___x0;
		int32_t L_40 = ((int32_t)13);
		uint32_t L_41 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		V_13 = L_41;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___x0;
		int32_t L_43 = ((int32_t)14);
		uint32_t L_44 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		V_14 = L_44;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___x0;
		int32_t L_46 = ((int32_t)15);
		uint32_t L_47 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		V_15 = L_47;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___y1;
		int32_t L_49 = 0;
		uint32_t L_50 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		V_16 = L_50;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___y1;
		int32_t L_52 = 1;
		uint32_t L_53 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		V_17 = L_53;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___y1;
		int32_t L_55 = 2;
		uint32_t L_56 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		V_18 = L_56;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___y1;
		int32_t L_58 = 3;
		uint32_t L_59 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		V_19 = L_59;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___y1;
		int32_t L_61 = 4;
		uint32_t L_62 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		V_20 = L_62;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = ___y1;
		int32_t L_64 = 5;
		uint32_t L_65 = (L_63)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64));
		V_21 = L_65;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___y1;
		int32_t L_67 = 6;
		uint32_t L_68 = (L_66)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_67));
		V_22 = L_68;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___y1;
		int32_t L_70 = 7;
		uint32_t L_71 = (L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_70));
		V_23 = L_71;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___y1;
		int32_t L_73 = 8;
		uint32_t L_74 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		V_24 = L_74;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___y1;
		int32_t L_76 = ((int32_t)9);
		uint32_t L_77 = (L_75)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		V_25 = L_77;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = ___y1;
		int32_t L_79 = ((int32_t)10);
		uint32_t L_80 = (L_78)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_79));
		V_26 = L_80;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___y1;
		int32_t L_82 = ((int32_t)11);
		uint32_t L_83 = (L_81)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
		V_27 = L_83;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___y1;
		int32_t L_85 = ((int32_t)12);
		uint32_t L_86 = (L_84)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85));
		V_28 = L_86;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ___y1;
		int32_t L_88 = ((int32_t)13);
		uint32_t L_89 = (L_87)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_88));
		V_29 = L_89;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = ___y1;
		int32_t L_91 = ((int32_t)14);
		uint32_t L_92 = (L_90)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_91));
		V_30 = L_92;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_93 = ___y1;
		int32_t L_94 = ((int32_t)15);
		uint32_t L_95 = (L_93)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_94));
		V_31 = L_95;
		uint32_t L_96 = V_0;
		uint32_t L_97 = V_8;
		V_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)L_97));
		uint32_t L_98 = V_1;
		uint32_t L_99 = V_9;
		V_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)L_99));
		uint32_t L_100 = V_2;
		uint32_t L_101 = V_10;
		V_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)L_101));
		uint32_t L_102 = V_3;
		uint32_t L_103 = V_11;
		V_35 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)L_103));
		uint32_t L_104 = V_4;
		uint32_t L_105 = V_12;
		V_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)L_105));
		uint32_t L_106 = V_5;
		uint32_t L_107 = V_13;
		V_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)L_107));
		uint32_t L_108 = V_6;
		uint32_t L_109 = V_14;
		V_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)L_109));
		uint32_t L_110 = V_7;
		uint32_t L_111 = V_15;
		V_39 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)L_111));
		uint32_t L_112 = V_16;
		uint32_t L_113 = V_24;
		V_40 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)L_113));
		uint32_t L_114 = V_17;
		uint32_t L_115 = V_25;
		V_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)L_115));
		uint32_t L_116 = V_18;
		uint32_t L_117 = V_26;
		V_42 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)L_117));
		uint32_t L_118 = V_19;
		uint32_t L_119 = V_27;
		V_43 = ((int32_t)il2cpp_codegen_add((int32_t)L_118, (int32_t)L_119));
		uint32_t L_120 = V_20;
		uint32_t L_121 = V_28;
		V_44 = ((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)L_121));
		uint32_t L_122 = V_21;
		uint32_t L_123 = V_29;
		V_45 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)L_123));
		uint32_t L_124 = V_22;
		uint32_t L_125 = V_30;
		V_46 = ((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)L_125));
		uint32_t L_126 = V_23;
		uint32_t L_127 = V_31;
		V_47 = ((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)L_127));
		uint32_t L_128 = V_0;
		uint32_t L_129 = V_16;
		V_66 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_128), ((int64_t)(uint64_t)L_129)));
		uint32_t L_130 = V_7;
		uint32_t L_131 = V_17;
		uint32_t L_132 = V_6;
		uint32_t L_133 = V_18;
		uint32_t L_134 = V_5;
		uint32_t L_135 = V_19;
		uint32_t L_136 = V_4;
		uint32_t L_137 = V_20;
		uint32_t L_138 = V_3;
		uint32_t L_139 = V_21;
		uint32_t L_140 = V_2;
		uint32_t L_141 = V_22;
		uint32_t L_142 = V_1;
		uint32_t L_143 = V_23;
		V_67 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_130), ((int64_t)(uint64_t)L_131))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_132), ((int64_t)(uint64_t)L_133))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_134), ((int64_t)(uint64_t)L_135))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_136), ((int64_t)(uint64_t)L_137))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_138), ((int64_t)(uint64_t)L_139))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_140), ((int64_t)(uint64_t)L_141))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_142), ((int64_t)(uint64_t)L_143)))));
		uint32_t L_144 = V_8;
		uint32_t L_145 = V_24;
		V_68 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_144), ((int64_t)(uint64_t)L_145)));
		uint32_t L_146 = V_15;
		uint32_t L_147 = V_25;
		uint32_t L_148 = V_14;
		uint32_t L_149 = V_26;
		uint32_t L_150 = V_13;
		uint32_t L_151 = V_27;
		uint32_t L_152 = V_12;
		uint32_t L_153 = V_28;
		uint32_t L_154 = V_11;
		uint32_t L_155 = V_29;
		uint32_t L_156 = V_10;
		uint32_t L_157 = V_30;
		uint32_t L_158 = V_9;
		uint32_t L_159 = V_31;
		V_69 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_146), ((int64_t)(uint64_t)L_147))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_148), ((int64_t)(uint64_t)L_149))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_150), ((int64_t)(uint64_t)L_151))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_152), ((int64_t)(uint64_t)L_153))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_154), ((int64_t)(uint64_t)L_155))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_156), ((int64_t)(uint64_t)L_157))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_158), ((int64_t)(uint64_t)L_159)))));
		uint32_t L_160 = V_32;
		uint32_t L_161 = V_40;
		V_70 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_160), ((int64_t)(uint64_t)L_161)));
		uint32_t L_162 = V_39;
		uint32_t L_163 = V_41;
		uint32_t L_164 = V_38;
		uint32_t L_165 = V_42;
		uint32_t L_166 = V_37;
		uint32_t L_167 = V_43;
		uint32_t L_168 = V_36;
		uint32_t L_169 = V_44;
		uint32_t L_170 = V_35;
		uint32_t L_171 = V_45;
		uint32_t L_172 = V_34;
		uint32_t L_173 = V_46;
		uint32_t L_174 = V_33;
		uint32_t L_175 = V_47;
		V_71 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_162), ((int64_t)(uint64_t)L_163))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_164), ((int64_t)(uint64_t)L_165))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_166), ((int64_t)(uint64_t)L_167))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_168), ((int64_t)(uint64_t)L_169))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_170), ((int64_t)(uint64_t)L_171))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_172), ((int64_t)(uint64_t)L_173))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_174), ((int64_t)(uint64_t)L_175)))));
		uint64_t L_176 = V_66;
		uint64_t L_177 = V_68;
		uint64_t L_178 = V_71;
		uint64_t L_179 = V_67;
		V_64 = ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_176, (int64_t)L_177)), (int64_t)L_178)), (int64_t)L_179));
		uint64_t L_180 = V_64;
		V_48 = ((int32_t)(((int32_t)(uint32_t)L_180)&((int32_t)268435455)));
		uint64_t L_181 = V_64;
		V_64 = ((int64_t)((uint64_t)L_181>>((int32_t)28)));
		uint64_t L_182 = V_69;
		uint64_t L_183 = V_70;
		uint64_t L_184 = V_66;
		uint64_t L_185 = V_71;
		V_65 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_182, (int64_t)L_183)), (int64_t)L_184)), (int64_t)L_185));
		uint64_t L_186 = V_65;
		V_56 = ((int32_t)(((int32_t)(uint32_t)L_186)&((int32_t)268435455)));
		uint64_t L_187 = V_65;
		V_65 = ((int64_t)((uint64_t)L_187>>((int32_t)28)));
		uint32_t L_188 = V_1;
		uint32_t L_189 = V_16;
		uint32_t L_190 = V_0;
		uint32_t L_191 = V_17;
		V_72 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_188), ((int64_t)(uint64_t)L_189))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_190), ((int64_t)(uint64_t)L_191)))));
		uint32_t L_192 = V_7;
		uint32_t L_193 = V_18;
		uint32_t L_194 = V_6;
		uint32_t L_195 = V_19;
		uint32_t L_196 = V_5;
		uint32_t L_197 = V_20;
		uint32_t L_198 = V_4;
		uint32_t L_199 = V_21;
		uint32_t L_200 = V_3;
		uint32_t L_201 = V_22;
		uint32_t L_202 = V_2;
		uint32_t L_203 = V_23;
		V_73 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_192), ((int64_t)(uint64_t)L_193))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_194), ((int64_t)(uint64_t)L_195))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_196), ((int64_t)(uint64_t)L_197))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_198), ((int64_t)(uint64_t)L_199))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_200), ((int64_t)(uint64_t)L_201))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_202), ((int64_t)(uint64_t)L_203)))));
		uint32_t L_204 = V_9;
		uint32_t L_205 = V_24;
		uint32_t L_206 = V_8;
		uint32_t L_207 = V_25;
		V_74 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_204), ((int64_t)(uint64_t)L_205))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_206), ((int64_t)(uint64_t)L_207)))));
		uint32_t L_208 = V_15;
		uint32_t L_209 = V_26;
		uint32_t L_210 = V_14;
		uint32_t L_211 = V_27;
		uint32_t L_212 = V_13;
		uint32_t L_213 = V_28;
		uint32_t L_214 = V_12;
		uint32_t L_215 = V_29;
		uint32_t L_216 = V_11;
		uint32_t L_217 = V_30;
		uint32_t L_218 = V_10;
		uint32_t L_219 = V_31;
		V_75 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_208), ((int64_t)(uint64_t)L_209))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_210), ((int64_t)(uint64_t)L_211))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_212), ((int64_t)(uint64_t)L_213))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_214), ((int64_t)(uint64_t)L_215))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_216), ((int64_t)(uint64_t)L_217))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_218), ((int64_t)(uint64_t)L_219)))));
		uint32_t L_220 = V_33;
		uint32_t L_221 = V_40;
		uint32_t L_222 = V_32;
		uint32_t L_223 = V_41;
		V_76 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_220), ((int64_t)(uint64_t)L_221))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_222), ((int64_t)(uint64_t)L_223)))));
		uint32_t L_224 = V_39;
		uint32_t L_225 = V_42;
		uint32_t L_226 = V_38;
		uint32_t L_227 = V_43;
		uint32_t L_228 = V_37;
		uint32_t L_229 = V_44;
		uint32_t L_230 = V_36;
		uint32_t L_231 = V_45;
		uint32_t L_232 = V_35;
		uint32_t L_233 = V_46;
		uint32_t L_234 = V_34;
		uint32_t L_235 = V_47;
		V_77 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_224), ((int64_t)(uint64_t)L_225))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_226), ((int64_t)(uint64_t)L_227))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_228), ((int64_t)(uint64_t)L_229))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_230), ((int64_t)(uint64_t)L_231))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_232), ((int64_t)(uint64_t)L_233))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_234), ((int64_t)(uint64_t)L_235)))));
		uint64_t L_236 = V_64;
		uint64_t L_237 = V_72;
		uint64_t L_238 = V_74;
		uint64_t L_239 = V_77;
		uint64_t L_240 = V_73;
		V_64 = ((int64_t)il2cpp_codegen_add((int64_t)L_236, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_237, (int64_t)L_238)), (int64_t)L_239)), (int64_t)L_240))));
		uint64_t L_241 = V_64;
		V_49 = ((int32_t)(((int32_t)(uint32_t)L_241)&((int32_t)268435455)));
		uint64_t L_242 = V_64;
		V_64 = ((int64_t)((uint64_t)L_242>>((int32_t)28)));
		uint64_t L_243 = V_65;
		uint64_t L_244 = V_75;
		uint64_t L_245 = V_76;
		uint64_t L_246 = V_72;
		uint64_t L_247 = V_77;
		V_65 = ((int64_t)il2cpp_codegen_add((int64_t)L_243, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_244, (int64_t)L_245)), (int64_t)L_246)), (int64_t)L_247))));
		uint64_t L_248 = V_65;
		V_57 = ((int32_t)(((int32_t)(uint32_t)L_248)&((int32_t)268435455)));
		uint64_t L_249 = V_65;
		V_65 = ((int64_t)((uint64_t)L_249>>((int32_t)28)));
		uint32_t L_250 = V_2;
		uint32_t L_251 = V_16;
		uint32_t L_252 = V_1;
		uint32_t L_253 = V_17;
		uint32_t L_254 = V_0;
		uint32_t L_255 = V_18;
		V_78 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_250), ((int64_t)(uint64_t)L_251))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_252), ((int64_t)(uint64_t)L_253))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_254), ((int64_t)(uint64_t)L_255)))));
		uint32_t L_256 = V_7;
		uint32_t L_257 = V_19;
		uint32_t L_258 = V_6;
		uint32_t L_259 = V_20;
		uint32_t L_260 = V_5;
		uint32_t L_261 = V_21;
		uint32_t L_262 = V_4;
		uint32_t L_263 = V_22;
		uint32_t L_264 = V_3;
		uint32_t L_265 = V_23;
		V_79 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_256), ((int64_t)(uint64_t)L_257))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_258), ((int64_t)(uint64_t)L_259))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_260), ((int64_t)(uint64_t)L_261))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_262), ((int64_t)(uint64_t)L_263))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_264), ((int64_t)(uint64_t)L_265)))));
		uint32_t L_266 = V_10;
		uint32_t L_267 = V_24;
		uint32_t L_268 = V_9;
		uint32_t L_269 = V_25;
		uint32_t L_270 = V_8;
		uint32_t L_271 = V_26;
		V_80 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_266), ((int64_t)(uint64_t)L_267))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_268), ((int64_t)(uint64_t)L_269))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_270), ((int64_t)(uint64_t)L_271)))));
		uint32_t L_272 = V_15;
		uint32_t L_273 = V_27;
		uint32_t L_274 = V_14;
		uint32_t L_275 = V_28;
		uint32_t L_276 = V_13;
		uint32_t L_277 = V_29;
		uint32_t L_278 = V_12;
		uint32_t L_279 = V_30;
		uint32_t L_280 = V_11;
		uint32_t L_281 = V_31;
		V_81 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_272), ((int64_t)(uint64_t)L_273))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_274), ((int64_t)(uint64_t)L_275))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_276), ((int64_t)(uint64_t)L_277))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_278), ((int64_t)(uint64_t)L_279))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_280), ((int64_t)(uint64_t)L_281)))));
		uint32_t L_282 = V_34;
		uint32_t L_283 = V_40;
		uint32_t L_284 = V_33;
		uint32_t L_285 = V_41;
		uint32_t L_286 = V_32;
		uint32_t L_287 = V_42;
		V_82 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_282), ((int64_t)(uint64_t)L_283))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_284), ((int64_t)(uint64_t)L_285))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_286), ((int64_t)(uint64_t)L_287)))));
		uint32_t L_288 = V_39;
		uint32_t L_289 = V_43;
		uint32_t L_290 = V_38;
		uint32_t L_291 = V_44;
		uint32_t L_292 = V_37;
		uint32_t L_293 = V_45;
		uint32_t L_294 = V_36;
		uint32_t L_295 = V_46;
		uint32_t L_296 = V_35;
		uint32_t L_297 = V_47;
		V_83 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_288), ((int64_t)(uint64_t)L_289))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_290), ((int64_t)(uint64_t)L_291))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_292), ((int64_t)(uint64_t)L_293))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_294), ((int64_t)(uint64_t)L_295))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_296), ((int64_t)(uint64_t)L_297)))));
		uint64_t L_298 = V_64;
		uint64_t L_299 = V_78;
		uint64_t L_300 = V_80;
		uint64_t L_301 = V_83;
		uint64_t L_302 = V_79;
		V_64 = ((int64_t)il2cpp_codegen_add((int64_t)L_298, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_299, (int64_t)L_300)), (int64_t)L_301)), (int64_t)L_302))));
		uint64_t L_303 = V_64;
		V_50 = ((int32_t)(((int32_t)(uint32_t)L_303)&((int32_t)268435455)));
		uint64_t L_304 = V_64;
		V_64 = ((int64_t)((uint64_t)L_304>>((int32_t)28)));
		uint64_t L_305 = V_65;
		uint64_t L_306 = V_81;
		uint64_t L_307 = V_82;
		uint64_t L_308 = V_78;
		uint64_t L_309 = V_83;
		V_65 = ((int64_t)il2cpp_codegen_add((int64_t)L_305, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_306, (int64_t)L_307)), (int64_t)L_308)), (int64_t)L_309))));
		uint64_t L_310 = V_65;
		V_58 = ((int32_t)(((int32_t)(uint32_t)L_310)&((int32_t)268435455)));
		uint64_t L_311 = V_65;
		V_65 = ((int64_t)((uint64_t)L_311>>((int32_t)28)));
		uint32_t L_312 = V_3;
		uint32_t L_313 = V_16;
		uint32_t L_314 = V_2;
		uint32_t L_315 = V_17;
		uint32_t L_316 = V_1;
		uint32_t L_317 = V_18;
		uint32_t L_318 = V_0;
		uint32_t L_319 = V_19;
		V_84 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_312), ((int64_t)(uint64_t)L_313))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_314), ((int64_t)(uint64_t)L_315))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_316), ((int64_t)(uint64_t)L_317))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_318), ((int64_t)(uint64_t)L_319)))));
		uint32_t L_320 = V_7;
		uint32_t L_321 = V_20;
		uint32_t L_322 = V_6;
		uint32_t L_323 = V_21;
		uint32_t L_324 = V_5;
		uint32_t L_325 = V_22;
		uint32_t L_326 = V_4;
		uint32_t L_327 = V_23;
		V_85 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_320), ((int64_t)(uint64_t)L_321))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_322), ((int64_t)(uint64_t)L_323))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_324), ((int64_t)(uint64_t)L_325))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_326), ((int64_t)(uint64_t)L_327)))));
		uint32_t L_328 = V_11;
		uint32_t L_329 = V_24;
		uint32_t L_330 = V_10;
		uint32_t L_331 = V_25;
		uint32_t L_332 = V_9;
		uint32_t L_333 = V_26;
		uint32_t L_334 = V_8;
		uint32_t L_335 = V_27;
		V_86 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_328), ((int64_t)(uint64_t)L_329))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_330), ((int64_t)(uint64_t)L_331))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_332), ((int64_t)(uint64_t)L_333))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_334), ((int64_t)(uint64_t)L_335)))));
		uint32_t L_336 = V_15;
		uint32_t L_337 = V_28;
		uint32_t L_338 = V_14;
		uint32_t L_339 = V_29;
		uint32_t L_340 = V_13;
		uint32_t L_341 = V_30;
		uint32_t L_342 = V_12;
		uint32_t L_343 = V_31;
		V_87 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_336), ((int64_t)(uint64_t)L_337))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_338), ((int64_t)(uint64_t)L_339))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_340), ((int64_t)(uint64_t)L_341))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_342), ((int64_t)(uint64_t)L_343)))));
		uint32_t L_344 = V_35;
		uint32_t L_345 = V_40;
		uint32_t L_346 = V_34;
		uint32_t L_347 = V_41;
		uint32_t L_348 = V_33;
		uint32_t L_349 = V_42;
		uint32_t L_350 = V_32;
		uint32_t L_351 = V_43;
		V_88 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_344), ((int64_t)(uint64_t)L_345))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_346), ((int64_t)(uint64_t)L_347))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_348), ((int64_t)(uint64_t)L_349))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_350), ((int64_t)(uint64_t)L_351)))));
		uint32_t L_352 = V_39;
		uint32_t L_353 = V_44;
		uint32_t L_354 = V_38;
		uint32_t L_355 = V_45;
		uint32_t L_356 = V_37;
		uint32_t L_357 = V_46;
		uint32_t L_358 = V_36;
		uint32_t L_359 = V_47;
		V_89 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_352), ((int64_t)(uint64_t)L_353))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_354), ((int64_t)(uint64_t)L_355))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_356), ((int64_t)(uint64_t)L_357))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_358), ((int64_t)(uint64_t)L_359)))));
		uint64_t L_360 = V_64;
		uint64_t L_361 = V_84;
		uint64_t L_362 = V_86;
		uint64_t L_363 = V_89;
		uint64_t L_364 = V_85;
		V_64 = ((int64_t)il2cpp_codegen_add((int64_t)L_360, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_361, (int64_t)L_362)), (int64_t)L_363)), (int64_t)L_364))));
		uint64_t L_365 = V_64;
		V_51 = ((int32_t)(((int32_t)(uint32_t)L_365)&((int32_t)268435455)));
		uint64_t L_366 = V_64;
		V_64 = ((int64_t)((uint64_t)L_366>>((int32_t)28)));
		uint64_t L_367 = V_65;
		uint64_t L_368 = V_87;
		uint64_t L_369 = V_88;
		uint64_t L_370 = V_84;
		uint64_t L_371 = V_89;
		V_65 = ((int64_t)il2cpp_codegen_add((int64_t)L_367, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_368, (int64_t)L_369)), (int64_t)L_370)), (int64_t)L_371))));
		uint64_t L_372 = V_65;
		V_59 = ((int32_t)(((int32_t)(uint32_t)L_372)&((int32_t)268435455)));
		uint64_t L_373 = V_65;
		V_65 = ((int64_t)((uint64_t)L_373>>((int32_t)28)));
		uint32_t L_374 = V_4;
		uint32_t L_375 = V_16;
		uint32_t L_376 = V_3;
		uint32_t L_377 = V_17;
		uint32_t L_378 = V_2;
		uint32_t L_379 = V_18;
		uint32_t L_380 = V_1;
		uint32_t L_381 = V_19;
		uint32_t L_382 = V_0;
		uint32_t L_383 = V_20;
		V_90 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_374), ((int64_t)(uint64_t)L_375))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_376), ((int64_t)(uint64_t)L_377))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_378), ((int64_t)(uint64_t)L_379))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_380), ((int64_t)(uint64_t)L_381))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_382), ((int64_t)(uint64_t)L_383)))));
		uint32_t L_384 = V_7;
		uint32_t L_385 = V_21;
		uint32_t L_386 = V_6;
		uint32_t L_387 = V_22;
		uint32_t L_388 = V_5;
		uint32_t L_389 = V_23;
		V_91 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_384), ((int64_t)(uint64_t)L_385))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_386), ((int64_t)(uint64_t)L_387))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_388), ((int64_t)(uint64_t)L_389)))));
		uint32_t L_390 = V_12;
		uint32_t L_391 = V_24;
		uint32_t L_392 = V_11;
		uint32_t L_393 = V_25;
		uint32_t L_394 = V_10;
		uint32_t L_395 = V_26;
		uint32_t L_396 = V_9;
		uint32_t L_397 = V_27;
		uint32_t L_398 = V_8;
		uint32_t L_399 = V_28;
		V_92 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_390), ((int64_t)(uint64_t)L_391))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_392), ((int64_t)(uint64_t)L_393))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_394), ((int64_t)(uint64_t)L_395))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_396), ((int64_t)(uint64_t)L_397))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_398), ((int64_t)(uint64_t)L_399)))));
		uint32_t L_400 = V_15;
		uint32_t L_401 = V_29;
		uint32_t L_402 = V_14;
		uint32_t L_403 = V_30;
		uint32_t L_404 = V_13;
		uint32_t L_405 = V_31;
		V_93 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_400), ((int64_t)(uint64_t)L_401))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_402), ((int64_t)(uint64_t)L_403))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_404), ((int64_t)(uint64_t)L_405)))));
		uint32_t L_406 = V_36;
		uint32_t L_407 = V_40;
		uint32_t L_408 = V_35;
		uint32_t L_409 = V_41;
		uint32_t L_410 = V_34;
		uint32_t L_411 = V_42;
		uint32_t L_412 = V_33;
		uint32_t L_413 = V_43;
		uint32_t L_414 = V_32;
		uint32_t L_415 = V_44;
		V_94 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_406), ((int64_t)(uint64_t)L_407))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_408), ((int64_t)(uint64_t)L_409))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_410), ((int64_t)(uint64_t)L_411))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_412), ((int64_t)(uint64_t)L_413))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_414), ((int64_t)(uint64_t)L_415)))));
		uint32_t L_416 = V_39;
		uint32_t L_417 = V_45;
		uint32_t L_418 = V_38;
		uint32_t L_419 = V_46;
		uint32_t L_420 = V_37;
		uint32_t L_421 = V_47;
		V_95 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_416), ((int64_t)(uint64_t)L_417))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_418), ((int64_t)(uint64_t)L_419))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_420), ((int64_t)(uint64_t)L_421)))));
		uint64_t L_422 = V_64;
		uint64_t L_423 = V_90;
		uint64_t L_424 = V_92;
		uint64_t L_425 = V_95;
		uint64_t L_426 = V_91;
		V_64 = ((int64_t)il2cpp_codegen_add((int64_t)L_422, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_423, (int64_t)L_424)), (int64_t)L_425)), (int64_t)L_426))));
		uint64_t L_427 = V_64;
		V_52 = ((int32_t)(((int32_t)(uint32_t)L_427)&((int32_t)268435455)));
		uint64_t L_428 = V_64;
		V_64 = ((int64_t)((uint64_t)L_428>>((int32_t)28)));
		uint64_t L_429 = V_65;
		uint64_t L_430 = V_93;
		uint64_t L_431 = V_94;
		uint64_t L_432 = V_90;
		uint64_t L_433 = V_95;
		V_65 = ((int64_t)il2cpp_codegen_add((int64_t)L_429, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_430, (int64_t)L_431)), (int64_t)L_432)), (int64_t)L_433))));
		uint64_t L_434 = V_65;
		V_60 = ((int32_t)(((int32_t)(uint32_t)L_434)&((int32_t)268435455)));
		uint64_t L_435 = V_65;
		V_65 = ((int64_t)((uint64_t)L_435>>((int32_t)28)));
		uint32_t L_436 = V_5;
		uint32_t L_437 = V_16;
		uint32_t L_438 = V_4;
		uint32_t L_439 = V_17;
		uint32_t L_440 = V_3;
		uint32_t L_441 = V_18;
		uint32_t L_442 = V_2;
		uint32_t L_443 = V_19;
		uint32_t L_444 = V_1;
		uint32_t L_445 = V_20;
		uint32_t L_446 = V_0;
		uint32_t L_447 = V_21;
		V_96 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_436), ((int64_t)(uint64_t)L_437))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_438), ((int64_t)(uint64_t)L_439))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_440), ((int64_t)(uint64_t)L_441))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_442), ((int64_t)(uint64_t)L_443))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_444), ((int64_t)(uint64_t)L_445))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_446), ((int64_t)(uint64_t)L_447)))));
		uint32_t L_448 = V_7;
		uint32_t L_449 = V_22;
		uint32_t L_450 = V_6;
		uint32_t L_451 = V_23;
		V_97 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_448), ((int64_t)(uint64_t)L_449))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_450), ((int64_t)(uint64_t)L_451)))));
		uint32_t L_452 = V_13;
		uint32_t L_453 = V_24;
		uint32_t L_454 = V_12;
		uint32_t L_455 = V_25;
		uint32_t L_456 = V_11;
		uint32_t L_457 = V_26;
		uint32_t L_458 = V_10;
		uint32_t L_459 = V_27;
		uint32_t L_460 = V_9;
		uint32_t L_461 = V_28;
		uint32_t L_462 = V_8;
		uint32_t L_463 = V_29;
		V_98 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_452), ((int64_t)(uint64_t)L_453))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_454), ((int64_t)(uint64_t)L_455))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_456), ((int64_t)(uint64_t)L_457))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_458), ((int64_t)(uint64_t)L_459))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_460), ((int64_t)(uint64_t)L_461))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_462), ((int64_t)(uint64_t)L_463)))));
		uint32_t L_464 = V_15;
		uint32_t L_465 = V_30;
		uint32_t L_466 = V_14;
		uint32_t L_467 = V_31;
		V_99 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_464), ((int64_t)(uint64_t)L_465))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_466), ((int64_t)(uint64_t)L_467)))));
		uint32_t L_468 = V_37;
		uint32_t L_469 = V_40;
		uint32_t L_470 = V_36;
		uint32_t L_471 = V_41;
		uint32_t L_472 = V_35;
		uint32_t L_473 = V_42;
		uint32_t L_474 = V_34;
		uint32_t L_475 = V_43;
		uint32_t L_476 = V_33;
		uint32_t L_477 = V_44;
		uint32_t L_478 = V_32;
		uint32_t L_479 = V_45;
		V_100 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_468), ((int64_t)(uint64_t)L_469))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_470), ((int64_t)(uint64_t)L_471))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_472), ((int64_t)(uint64_t)L_473))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_474), ((int64_t)(uint64_t)L_475))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_476), ((int64_t)(uint64_t)L_477))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_478), ((int64_t)(uint64_t)L_479)))));
		uint32_t L_480 = V_39;
		uint32_t L_481 = V_46;
		uint32_t L_482 = V_38;
		uint32_t L_483 = V_47;
		V_101 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_480), ((int64_t)(uint64_t)L_481))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_482), ((int64_t)(uint64_t)L_483)))));
		uint64_t L_484 = V_64;
		uint64_t L_485 = V_96;
		uint64_t L_486 = V_98;
		uint64_t L_487 = V_101;
		uint64_t L_488 = V_97;
		V_64 = ((int64_t)il2cpp_codegen_add((int64_t)L_484, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_485, (int64_t)L_486)), (int64_t)L_487)), (int64_t)L_488))));
		uint64_t L_489 = V_64;
		V_53 = ((int32_t)(((int32_t)(uint32_t)L_489)&((int32_t)268435455)));
		uint64_t L_490 = V_64;
		V_64 = ((int64_t)((uint64_t)L_490>>((int32_t)28)));
		uint64_t L_491 = V_65;
		uint64_t L_492 = V_99;
		uint64_t L_493 = V_100;
		uint64_t L_494 = V_96;
		uint64_t L_495 = V_101;
		V_65 = ((int64_t)il2cpp_codegen_add((int64_t)L_491, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_492, (int64_t)L_493)), (int64_t)L_494)), (int64_t)L_495))));
		uint64_t L_496 = V_65;
		V_61 = ((int32_t)(((int32_t)(uint32_t)L_496)&((int32_t)268435455)));
		uint64_t L_497 = V_65;
		V_65 = ((int64_t)((uint64_t)L_497>>((int32_t)28)));
		uint32_t L_498 = V_6;
		uint32_t L_499 = V_16;
		uint32_t L_500 = V_5;
		uint32_t L_501 = V_17;
		uint32_t L_502 = V_4;
		uint32_t L_503 = V_18;
		uint32_t L_504 = V_3;
		uint32_t L_505 = V_19;
		uint32_t L_506 = V_2;
		uint32_t L_507 = V_20;
		uint32_t L_508 = V_1;
		uint32_t L_509 = V_21;
		uint32_t L_510 = V_0;
		uint32_t L_511 = V_22;
		V_102 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_498), ((int64_t)(uint64_t)L_499))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_500), ((int64_t)(uint64_t)L_501))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_502), ((int64_t)(uint64_t)L_503))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_504), ((int64_t)(uint64_t)L_505))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_506), ((int64_t)(uint64_t)L_507))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_508), ((int64_t)(uint64_t)L_509))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_510), ((int64_t)(uint64_t)L_511)))));
		uint32_t L_512 = V_7;
		uint32_t L_513 = V_23;
		V_103 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_512), ((int64_t)(uint64_t)L_513)));
		uint32_t L_514 = V_14;
		uint32_t L_515 = V_24;
		uint32_t L_516 = V_13;
		uint32_t L_517 = V_25;
		uint32_t L_518 = V_12;
		uint32_t L_519 = V_26;
		uint32_t L_520 = V_11;
		uint32_t L_521 = V_27;
		uint32_t L_522 = V_10;
		uint32_t L_523 = V_28;
		uint32_t L_524 = V_9;
		uint32_t L_525 = V_29;
		uint32_t L_526 = V_8;
		uint32_t L_527 = V_30;
		V_104 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_514), ((int64_t)(uint64_t)L_515))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_516), ((int64_t)(uint64_t)L_517))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_518), ((int64_t)(uint64_t)L_519))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_520), ((int64_t)(uint64_t)L_521))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_522), ((int64_t)(uint64_t)L_523))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_524), ((int64_t)(uint64_t)L_525))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_526), ((int64_t)(uint64_t)L_527)))));
		uint32_t L_528 = V_15;
		uint32_t L_529 = V_31;
		V_105 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_528), ((int64_t)(uint64_t)L_529)));
		uint32_t L_530 = V_38;
		uint32_t L_531 = V_40;
		uint32_t L_532 = V_37;
		uint32_t L_533 = V_41;
		uint32_t L_534 = V_36;
		uint32_t L_535 = V_42;
		uint32_t L_536 = V_35;
		uint32_t L_537 = V_43;
		uint32_t L_538 = V_34;
		uint32_t L_539 = V_44;
		uint32_t L_540 = V_33;
		uint32_t L_541 = V_45;
		uint32_t L_542 = V_32;
		uint32_t L_543 = V_46;
		V_106 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_530), ((int64_t)(uint64_t)L_531))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_532), ((int64_t)(uint64_t)L_533))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_534), ((int64_t)(uint64_t)L_535))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_536), ((int64_t)(uint64_t)L_537))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_538), ((int64_t)(uint64_t)L_539))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_540), ((int64_t)(uint64_t)L_541))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_542), ((int64_t)(uint64_t)L_543)))));
		uint32_t L_544 = V_39;
		uint32_t L_545 = V_47;
		V_107 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_544), ((int64_t)(uint64_t)L_545)));
		uint64_t L_546 = V_64;
		uint64_t L_547 = V_102;
		uint64_t L_548 = V_104;
		uint64_t L_549 = V_107;
		uint64_t L_550 = V_103;
		V_64 = ((int64_t)il2cpp_codegen_add((int64_t)L_546, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_547, (int64_t)L_548)), (int64_t)L_549)), (int64_t)L_550))));
		uint64_t L_551 = V_64;
		V_54 = ((int32_t)(((int32_t)(uint32_t)L_551)&((int32_t)268435455)));
		uint64_t L_552 = V_64;
		V_64 = ((int64_t)((uint64_t)L_552>>((int32_t)28)));
		uint64_t L_553 = V_65;
		uint64_t L_554 = V_105;
		uint64_t L_555 = V_106;
		uint64_t L_556 = V_102;
		uint64_t L_557 = V_107;
		V_65 = ((int64_t)il2cpp_codegen_add((int64_t)L_553, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_554, (int64_t)L_555)), (int64_t)L_556)), (int64_t)L_557))));
		uint64_t L_558 = V_65;
		V_62 = ((int32_t)(((int32_t)(uint32_t)L_558)&((int32_t)268435455)));
		uint64_t L_559 = V_65;
		V_65 = ((int64_t)((uint64_t)L_559>>((int32_t)28)));
		uint32_t L_560 = V_7;
		uint32_t L_561 = V_16;
		uint32_t L_562 = V_6;
		uint32_t L_563 = V_17;
		uint32_t L_564 = V_5;
		uint32_t L_565 = V_18;
		uint32_t L_566 = V_4;
		uint32_t L_567 = V_19;
		uint32_t L_568 = V_3;
		uint32_t L_569 = V_20;
		uint32_t L_570 = V_2;
		uint32_t L_571 = V_21;
		uint32_t L_572 = V_1;
		uint32_t L_573 = V_22;
		uint32_t L_574 = V_0;
		uint32_t L_575 = V_23;
		V_108 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_560), ((int64_t)(uint64_t)L_561))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_562), ((int64_t)(uint64_t)L_563))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_564), ((int64_t)(uint64_t)L_565))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_566), ((int64_t)(uint64_t)L_567))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_568), ((int64_t)(uint64_t)L_569))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_570), ((int64_t)(uint64_t)L_571))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_572), ((int64_t)(uint64_t)L_573))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_574), ((int64_t)(uint64_t)L_575)))));
		uint32_t L_576 = V_15;
		uint32_t L_577 = V_24;
		uint32_t L_578 = V_14;
		uint32_t L_579 = V_25;
		uint32_t L_580 = V_13;
		uint32_t L_581 = V_26;
		uint32_t L_582 = V_12;
		uint32_t L_583 = V_27;
		uint32_t L_584 = V_11;
		uint32_t L_585 = V_28;
		uint32_t L_586 = V_10;
		uint32_t L_587 = V_29;
		uint32_t L_588 = V_9;
		uint32_t L_589 = V_30;
		uint32_t L_590 = V_8;
		uint32_t L_591 = V_31;
		V_109 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_576), ((int64_t)(uint64_t)L_577))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_578), ((int64_t)(uint64_t)L_579))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_580), ((int64_t)(uint64_t)L_581))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_582), ((int64_t)(uint64_t)L_583))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_584), ((int64_t)(uint64_t)L_585))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_586), ((int64_t)(uint64_t)L_587))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_588), ((int64_t)(uint64_t)L_589))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_590), ((int64_t)(uint64_t)L_591)))));
		uint32_t L_592 = V_39;
		uint32_t L_593 = V_40;
		uint32_t L_594 = V_38;
		uint32_t L_595 = V_41;
		uint32_t L_596 = V_37;
		uint32_t L_597 = V_42;
		uint32_t L_598 = V_36;
		uint32_t L_599 = V_43;
		uint32_t L_600 = V_35;
		uint32_t L_601 = V_44;
		uint32_t L_602 = V_34;
		uint32_t L_603 = V_45;
		uint32_t L_604 = V_33;
		uint32_t L_605 = V_46;
		uint32_t L_606 = V_32;
		uint32_t L_607 = V_47;
		V_110 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_592), ((int64_t)(uint64_t)L_593))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_594), ((int64_t)(uint64_t)L_595))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_596), ((int64_t)(uint64_t)L_597))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_598), ((int64_t)(uint64_t)L_599))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_600), ((int64_t)(uint64_t)L_601))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_602), ((int64_t)(uint64_t)L_603))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_604), ((int64_t)(uint64_t)L_605))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_606), ((int64_t)(uint64_t)L_607)))));
		uint64_t L_608 = V_64;
		uint64_t L_609 = V_108;
		uint64_t L_610 = V_109;
		V_64 = ((int64_t)il2cpp_codegen_add((int64_t)L_608, ((int64_t)il2cpp_codegen_add((int64_t)L_609, (int64_t)L_610))));
		uint64_t L_611 = V_64;
		V_55 = ((int32_t)(((int32_t)(uint32_t)L_611)&((int32_t)268435455)));
		uint64_t L_612 = V_64;
		V_64 = ((int64_t)((uint64_t)L_612>>((int32_t)28)));
		uint64_t L_613 = V_65;
		uint64_t L_614 = V_110;
		uint64_t L_615 = V_108;
		V_65 = ((int64_t)il2cpp_codegen_add((int64_t)L_613, ((int64_t)il2cpp_codegen_subtract((int64_t)L_614, (int64_t)L_615))));
		uint64_t L_616 = V_65;
		V_63 = ((int32_t)(((int32_t)(uint32_t)L_616)&((int32_t)268435455)));
		uint64_t L_617 = V_65;
		V_65 = ((int64_t)((uint64_t)L_617>>((int32_t)28)));
		uint64_t L_618 = V_64;
		uint64_t L_619 = V_65;
		V_64 = ((int64_t)il2cpp_codegen_add((int64_t)L_618, (int64_t)L_619));
		uint64_t L_620 = V_64;
		uint32_t L_621 = V_56;
		V_64 = ((int64_t)il2cpp_codegen_add((int64_t)L_620, ((int64_t)(uint64_t)L_621)));
		uint64_t L_622 = V_64;
		V_56 = ((int32_t)(((int32_t)(uint32_t)L_622)&((int32_t)268435455)));
		uint64_t L_623 = V_64;
		V_64 = ((int64_t)((uint64_t)L_623>>((int32_t)28)));
		uint64_t L_624 = V_65;
		uint32_t L_625 = V_48;
		V_65 = ((int64_t)il2cpp_codegen_add((int64_t)L_624, ((int64_t)(uint64_t)L_625)));
		uint64_t L_626 = V_65;
		V_48 = ((int32_t)(((int32_t)(uint32_t)L_626)&((int32_t)268435455)));
		uint64_t L_627 = V_65;
		V_65 = ((int64_t)((uint64_t)L_627>>((int32_t)28)));
		uint32_t L_628 = V_57;
		uint64_t L_629 = V_64;
		V_57 = ((int32_t)il2cpp_codegen_add((int32_t)L_628, ((int32_t)(uint32_t)L_629)));
		uint32_t L_630 = V_49;
		uint64_t L_631 = V_65;
		V_49 = ((int32_t)il2cpp_codegen_add((int32_t)L_630, ((int32_t)(uint32_t)L_631)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_632 = ___z2;
		uint32_t L_633 = V_48;
		(L_632)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_633);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_634 = ___z2;
		uint32_t L_635 = V_49;
		(L_634)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_635);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_636 = ___z2;
		uint32_t L_637 = V_50;
		(L_636)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_637);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_638 = ___z2;
		uint32_t L_639 = V_51;
		(L_638)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_639);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_640 = ___z2;
		uint32_t L_641 = V_52;
		(L_640)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_641);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_642 = ___z2;
		uint32_t L_643 = V_53;
		(L_642)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_643);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_644 = ___z2;
		uint32_t L_645 = V_54;
		(L_644)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_645);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_646 = ___z2;
		uint32_t L_647 = V_55;
		(L_646)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_647);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_648 = ___z2;
		uint32_t L_649 = V_56;
		(L_648)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (uint32_t)L_649);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_650 = ___z2;
		uint32_t L_651 = V_57;
		(L_650)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)L_651);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_652 = ___z2;
		uint32_t L_653 = V_58;
		(L_652)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)L_653);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_654 = ___z2;
		uint32_t L_655 = V_59;
		(L_654)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)L_655);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_656 = ___z2;
		uint32_t L_657 = V_60;
		(L_656)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)L_657);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_658 = ___z2;
		uint32_t L_659 = V_61;
		(L_658)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)L_659);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_660 = ___z2;
		uint32_t L_661 = V_62;
		(L_660)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)L_661);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_662 = ___z2;
		uint32_t L_663 = V_63;
		(L_662)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)L_663);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Negate(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Negate_m4E274B3DBA28BF4E532CD767517A6BE680C1242A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___z1;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Normalize(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Normalize_m28D257AC52601B6B435B1DCF0215E0BA9DC5762D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___z0;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Reduce_m0DDB8E19AAF8178F46C9CFB30F32DB53B42F1E6C(L_0, 1, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___z0;
		X448Field_Reduce_m0DDB8E19AAF8178F46C9CFB30F32DB53B42F1E6C(L_1, (-1), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::One(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_One_m302C720B789D86CC7A05264E583C57D211288C1C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___z0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)1);
		V_0 = 1;
		goto IL_0010;
	}

IL_0008:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___z0;
		int32_t L_2 = V_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (uint32_t)0);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0010:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)16))))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::PowPm3d4(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_PowPm3d4_m6B462BA1140265FA205703020CE19E0120B51422 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_8 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_9 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_10 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_11 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_1, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_3, L_4, L_5, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6;
		L_6 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_1 = L_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_1;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_7, L_8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_1;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_9, L_10, L_11, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12;
		L_12 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_2 = L_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_2;
		X448Field_Sqr_m17AF24330AFB3885BB62E033EB17D18C72D4CBA5(L_13, 3, L_14, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_2;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_15, L_16, L_17, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18;
		L_18 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_3 = L_18;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_3;
		X448Field_Sqr_m17AF24330AFB3885BB62E033EB17D18C72D4CBA5(L_19, 3, L_20, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_3;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_21, L_22, L_23, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24;
		L_24 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_4 = L_24;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_4;
		X448Field_Sqr_m17AF24330AFB3885BB62E033EB17D18C72D4CBA5(L_25, ((int32_t)9), L_26, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_4;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_27, L_28, L_29, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30;
		L_30 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_5 = L_30;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_5;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_31, L_32, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = V_5;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_33, L_34, L_35, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36;
		L_36 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_6 = L_36;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = V_6;
		X448Field_Sqr_m17AF24330AFB3885BB62E033EB17D18C72D4CBA5(L_37, ((int32_t)18), L_38, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = V_6;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_39, L_40, L_41, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42;
		L_42 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_7 = L_42;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_7;
		X448Field_Sqr_m17AF24330AFB3885BB62E033EB17D18C72D4CBA5(L_43, ((int32_t)37), L_44, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_7;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_45, L_46, L_47, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48;
		L_48 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_8 = L_48;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = V_8;
		X448Field_Sqr_m17AF24330AFB3885BB62E033EB17D18C72D4CBA5(L_49, ((int32_t)37), L_50, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = V_8;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_51, L_52, L_53, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54;
		L_54 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_9 = L_54;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = V_9;
		X448Field_Sqr_m17AF24330AFB3885BB62E033EB17D18C72D4CBA5(L_55, ((int32_t)111), L_56, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = V_9;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_57, L_58, L_59, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60;
		L_60 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_10 = L_60;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = V_10;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_61, L_62, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = V_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_10;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_63, L_64, L_65, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66;
		L_66 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_11 = L_66;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = V_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = V_11;
		X448Field_Sqr_m17AF24330AFB3885BB62E033EB17D18C72D4CBA5(L_67, ((int32_t)223), L_68, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ___z1;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_69, L_70, L_71, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Reduce(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Reduce_m0DDB8E19AAF8178F46C9CFB30F32DB53B42F1E6C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z0, int32_t ___x1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___z0;
		int32_t L_1 = ((int32_t)15);
		uint32_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		uint32_t L_3 = V_0;
		V_1 = ((int32_t)((int32_t)L_3&((int32_t)268435455)));
		uint32_t L_4 = V_0;
		int32_t L_5 = ___x1;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)L_4>>((int32_t)28))), L_5));
		int32_t L_6 = V_2;
		V_3 = ((int64_t)L_6);
		V_4 = 0;
		goto IL_003b;
	}

IL_001c:
	{
		int64_t L_7 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___z0;
		int32_t L_9 = V_4;
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int64_t)il2cpp_codegen_add(L_7, ((int64_t)(uint64_t)L_11)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___z0;
		int32_t L_13 = V_4;
		int64_t L_14 = V_3;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_14)&((int32_t)268435455))));
		int64_t L_15 = V_3;
		V_3 = ((int64_t)(L_15>>((int32_t)28)));
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_003b:
	{
		int32_t L_17 = V_4;
		if ((((int32_t)L_17) < ((int32_t)8)))
		{
			goto IL_001c;
		}
	}
	{
		int64_t L_18 = V_3;
		int32_t L_19 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_add(L_18, ((int64_t)L_19)));
		V_5 = 8;
		goto IL_0069;
	}

IL_004a:
	{
		int64_t L_20 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___z0;
		int32_t L_22 = V_5;
		int32_t L_23 = L_22;
		uint32_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		V_3 = ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)(uint64_t)L_24)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___z0;
		int32_t L_26 = V_5;
		int64_t L_27 = V_3;
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_27)&((int32_t)268435455))));
		int64_t L_28 = V_3;
		V_3 = ((int64_t)(L_28>>((int32_t)28)));
		int32_t L_29 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0069:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)15))))
		{
			goto IL_004a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = ___z0;
		uint32_t L_32 = V_1;
		int64_t L_33 = V_3;
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, ((int32_t)(uint32_t)L_33))));
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Sqr(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	uint32_t V_18 = 0;
	uint32_t V_19 = 0;
	uint32_t V_20 = 0;
	uint32_t V_21 = 0;
	uint32_t V_22 = 0;
	uint32_t V_23 = 0;
	uint32_t V_24 = 0;
	uint32_t V_25 = 0;
	uint32_t V_26 = 0;
	uint32_t V_27 = 0;
	uint32_t V_28 = 0;
	uint32_t V_29 = 0;
	uint32_t V_30 = 0;
	uint32_t V_31 = 0;
	uint32_t V_32 = 0;
	uint32_t V_33 = 0;
	uint32_t V_34 = 0;
	uint32_t V_35 = 0;
	uint32_t V_36 = 0;
	uint32_t V_37 = 0;
	uint32_t V_38 = 0;
	uint32_t V_39 = 0;
	uint32_t V_40 = 0;
	uint32_t V_41 = 0;
	uint32_t V_42 = 0;
	uint32_t V_43 = 0;
	uint32_t V_44 = 0;
	uint32_t V_45 = 0;
	uint32_t V_46 = 0;
	uint32_t V_47 = 0;
	uint32_t V_48 = 0;
	uint32_t V_49 = 0;
	uint32_t V_50 = 0;
	uint32_t V_51 = 0;
	uint32_t V_52 = 0;
	uint32_t V_53 = 0;
	uint32_t V_54 = 0;
	uint32_t V_55 = 0;
	uint32_t V_56 = 0;
	uint32_t V_57 = 0;
	uint32_t V_58 = 0;
	uint32_t V_59 = 0;
	uint32_t V_60 = 0;
	uint64_t V_61 = 0;
	uint64_t V_62 = 0;
	uint64_t V_63 = 0;
	uint64_t V_64 = 0;
	uint64_t V_65 = 0;
	uint64_t V_66 = 0;
	uint64_t V_67 = 0;
	uint64_t V_68 = 0;
	uint64_t V_69 = 0;
	uint64_t V_70 = 0;
	uint64_t V_71 = 0;
	uint64_t V_72 = 0;
	uint64_t V_73 = 0;
	uint64_t V_74 = 0;
	uint64_t V_75 = 0;
	uint64_t V_76 = 0;
	uint64_t V_77 = 0;
	uint64_t V_78 = 0;
	uint64_t V_79 = 0;
	uint64_t V_80 = 0;
	uint64_t V_81 = 0;
	uint64_t V_82 = 0;
	uint64_t V_83 = 0;
	uint64_t V_84 = 0;
	uint64_t V_85 = 0;
	uint64_t V_86 = 0;
	uint64_t V_87 = 0;
	uint64_t V_88 = 0;
	uint64_t V_89 = 0;
	uint64_t V_90 = 0;
	uint64_t V_91 = 0;
	uint64_t V_92 = 0;
	uint64_t V_93 = 0;
	uint64_t V_94 = 0;
	uint64_t V_95 = 0;
	uint64_t V_96 = 0;
	uint64_t V_97 = 0;
	uint64_t V_98 = 0;
	uint64_t V_99 = 0;
	uint64_t V_100 = 0;
	uint64_t V_101 = 0;
	uint64_t V_102 = 0;
	uint64_t V_103 = 0;
	uint64_t V_104 = 0;
	uint64_t V_105 = 0;
	uint64_t V_106 = 0;
	uint64_t V_107 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___x0;
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___x0;
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___x0;
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___x0;
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___x0;
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___x0;
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___x0;
		int32_t L_22 = 7;
		uint32_t L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___x0;
		int32_t L_25 = 8;
		uint32_t L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		V_8 = L_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___x0;
		int32_t L_28 = ((int32_t)9);
		uint32_t L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		V_9 = L_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___x0;
		int32_t L_31 = ((int32_t)10);
		uint32_t L_32 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		V_10 = L_32;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___x0;
		int32_t L_34 = ((int32_t)11);
		uint32_t L_35 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_11 = L_35;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___x0;
		int32_t L_37 = ((int32_t)12);
		uint32_t L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_12 = L_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___x0;
		int32_t L_40 = ((int32_t)13);
		uint32_t L_41 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		V_13 = L_41;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___x0;
		int32_t L_43 = ((int32_t)14);
		uint32_t L_44 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		V_14 = L_44;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___x0;
		int32_t L_46 = ((int32_t)15);
		uint32_t L_47 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		V_15 = L_47;
		uint32_t L_48 = V_0;
		V_16 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_48, 2));
		uint32_t L_49 = V_1;
		V_17 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_49, 2));
		uint32_t L_50 = V_2;
		V_18 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_50, 2));
		uint32_t L_51 = V_3;
		V_19 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_51, 2));
		uint32_t L_52 = V_4;
		V_20 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_52, 2));
		uint32_t L_53 = V_5;
		V_21 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_53, 2));
		uint32_t L_54 = V_6;
		V_22 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_54, 2));
		uint32_t L_55 = V_8;
		V_23 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_55, 2));
		uint32_t L_56 = V_9;
		V_24 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_56, 2));
		uint32_t L_57 = V_10;
		V_25 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_57, 2));
		uint32_t L_58 = V_11;
		V_26 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_58, 2));
		uint32_t L_59 = V_12;
		V_27 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_59, 2));
		uint32_t L_60 = V_13;
		V_28 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_60, 2));
		uint32_t L_61 = V_14;
		V_29 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_61, 2));
		uint32_t L_62 = V_0;
		uint32_t L_63 = V_8;
		V_30 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)L_63));
		uint32_t L_64 = V_1;
		uint32_t L_65 = V_9;
		V_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)L_65));
		uint32_t L_66 = V_2;
		uint32_t L_67 = V_10;
		V_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)L_67));
		uint32_t L_68 = V_3;
		uint32_t L_69 = V_11;
		V_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)L_69));
		uint32_t L_70 = V_4;
		uint32_t L_71 = V_12;
		V_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)L_71));
		uint32_t L_72 = V_5;
		uint32_t L_73 = V_13;
		V_35 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)L_73));
		uint32_t L_74 = V_6;
		uint32_t L_75 = V_14;
		V_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)L_75));
		uint32_t L_76 = V_7;
		uint32_t L_77 = V_15;
		V_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)L_77));
		uint32_t L_78 = V_30;
		V_38 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_78, 2));
		uint32_t L_79 = V_31;
		V_39 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_79, 2));
		uint32_t L_80 = V_32;
		V_40 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_80, 2));
		uint32_t L_81 = V_33;
		V_41 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_81, 2));
		uint32_t L_82 = V_34;
		V_42 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_82, 2));
		uint32_t L_83 = V_35;
		V_43 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_83, 2));
		uint32_t L_84 = V_36;
		V_44 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_84, 2));
		uint32_t L_85 = V_0;
		uint32_t L_86 = V_0;
		V_63 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_85), ((int64_t)(uint64_t)L_86)));
		uint32_t L_87 = V_7;
		uint32_t L_88 = V_17;
		uint32_t L_89 = V_6;
		uint32_t L_90 = V_18;
		uint32_t L_91 = V_5;
		uint32_t L_92 = V_19;
		uint32_t L_93 = V_4;
		uint32_t L_94 = V_4;
		V_64 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_87), ((int64_t)(uint64_t)L_88))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_89), ((int64_t)(uint64_t)L_90))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_91), ((int64_t)(uint64_t)L_92))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_93), ((int64_t)(uint64_t)L_94)))));
		uint32_t L_95 = V_8;
		uint32_t L_96 = V_8;
		V_65 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_95), ((int64_t)(uint64_t)L_96)));
		uint32_t L_97 = V_15;
		uint32_t L_98 = V_24;
		uint32_t L_99 = V_14;
		uint32_t L_100 = V_25;
		uint32_t L_101 = V_13;
		uint32_t L_102 = V_26;
		uint32_t L_103 = V_12;
		uint32_t L_104 = V_12;
		V_66 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_97), ((int64_t)(uint64_t)L_98))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_99), ((int64_t)(uint64_t)L_100))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_101), ((int64_t)(uint64_t)L_102))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_103), ((int64_t)(uint64_t)L_104)))));
		uint32_t L_105 = V_30;
		uint32_t L_106 = V_30;
		V_67 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_105), ((int64_t)(uint64_t)L_106)));
		uint32_t L_107 = V_37;
		uint32_t L_108 = V_39;
		uint32_t L_109 = V_36;
		uint32_t L_110 = V_40;
		uint32_t L_111 = V_35;
		uint32_t L_112 = V_41;
		uint32_t L_113 = V_34;
		uint32_t L_114 = V_34;
		V_68 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_107), ((int64_t)(uint64_t)L_108))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_109), ((int64_t)(uint64_t)L_110))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_111), ((int64_t)(uint64_t)L_112))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_113), ((int64_t)(uint64_t)L_114)))));
		uint64_t L_115 = V_63;
		uint64_t L_116 = V_65;
		uint64_t L_117 = V_68;
		uint64_t L_118 = V_64;
		V_61 = ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_115, (int64_t)L_116)), (int64_t)L_117)), (int64_t)L_118));
		uint64_t L_119 = V_61;
		V_45 = ((int32_t)(((int32_t)(uint32_t)L_119)&((int32_t)268435455)));
		uint64_t L_120 = V_61;
		V_61 = ((int64_t)((uint64_t)L_120>>((int32_t)28)));
		uint64_t L_121 = V_66;
		uint64_t L_122 = V_67;
		uint64_t L_123 = V_63;
		uint64_t L_124 = V_68;
		V_62 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_121, (int64_t)L_122)), (int64_t)L_123)), (int64_t)L_124));
		uint64_t L_125 = V_62;
		V_53 = ((int32_t)(((int32_t)(uint32_t)L_125)&((int32_t)268435455)));
		uint64_t L_126 = V_62;
		V_62 = ((int64_t)((uint64_t)L_126>>((int32_t)28)));
		uint32_t L_127 = V_1;
		uint32_t L_128 = V_16;
		V_69 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_127), ((int64_t)(uint64_t)L_128)));
		uint32_t L_129 = V_7;
		uint32_t L_130 = V_18;
		uint32_t L_131 = V_6;
		uint32_t L_132 = V_19;
		uint32_t L_133 = V_5;
		uint32_t L_134 = V_20;
		V_70 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_129), ((int64_t)(uint64_t)L_130))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_131), ((int64_t)(uint64_t)L_132))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_133), ((int64_t)(uint64_t)L_134)))));
		uint32_t L_135 = V_9;
		uint32_t L_136 = V_23;
		V_71 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_135), ((int64_t)(uint64_t)L_136)));
		uint32_t L_137 = V_15;
		uint32_t L_138 = V_25;
		uint32_t L_139 = V_14;
		uint32_t L_140 = V_26;
		uint32_t L_141 = V_13;
		uint32_t L_142 = V_27;
		V_72 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_137), ((int64_t)(uint64_t)L_138))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_139), ((int64_t)(uint64_t)L_140))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_141), ((int64_t)(uint64_t)L_142)))));
		uint32_t L_143 = V_31;
		uint32_t L_144 = V_38;
		V_73 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_143), ((int64_t)(uint64_t)L_144)));
		uint32_t L_145 = V_37;
		uint32_t L_146 = V_40;
		uint32_t L_147 = V_36;
		uint32_t L_148 = V_41;
		uint32_t L_149 = V_35;
		uint32_t L_150 = V_42;
		V_74 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_145), ((int64_t)(uint64_t)L_146))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_147), ((int64_t)(uint64_t)L_148))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_149), ((int64_t)(uint64_t)L_150)))));
		uint64_t L_151 = V_61;
		uint64_t L_152 = V_69;
		uint64_t L_153 = V_71;
		uint64_t L_154 = V_74;
		uint64_t L_155 = V_70;
		V_61 = ((int64_t)il2cpp_codegen_add((int64_t)L_151, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_152, (int64_t)L_153)), (int64_t)L_154)), (int64_t)L_155))));
		uint64_t L_156 = V_61;
		V_46 = ((int32_t)(((int32_t)(uint32_t)L_156)&((int32_t)268435455)));
		uint64_t L_157 = V_61;
		V_61 = ((int64_t)((uint64_t)L_157>>((int32_t)28)));
		uint64_t L_158 = V_62;
		uint64_t L_159 = V_72;
		uint64_t L_160 = V_73;
		uint64_t L_161 = V_69;
		uint64_t L_162 = V_74;
		V_62 = ((int64_t)il2cpp_codegen_add((int64_t)L_158, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_159, (int64_t)L_160)), (int64_t)L_161)), (int64_t)L_162))));
		uint64_t L_163 = V_62;
		V_54 = ((int32_t)(((int32_t)(uint32_t)L_163)&((int32_t)268435455)));
		uint64_t L_164 = V_62;
		V_62 = ((int64_t)((uint64_t)L_164>>((int32_t)28)));
		uint32_t L_165 = V_2;
		uint32_t L_166 = V_16;
		uint32_t L_167 = V_1;
		uint32_t L_168 = V_1;
		V_75 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_165), ((int64_t)(uint64_t)L_166))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_167), ((int64_t)(uint64_t)L_168)))));
		uint32_t L_169 = V_7;
		uint32_t L_170 = V_19;
		uint32_t L_171 = V_6;
		uint32_t L_172 = V_20;
		uint32_t L_173 = V_5;
		uint32_t L_174 = V_5;
		V_76 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_169), ((int64_t)(uint64_t)L_170))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_171), ((int64_t)(uint64_t)L_172))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_173), ((int64_t)(uint64_t)L_174)))));
		uint32_t L_175 = V_10;
		uint32_t L_176 = V_23;
		uint32_t L_177 = V_9;
		uint32_t L_178 = V_9;
		V_77 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_175), ((int64_t)(uint64_t)L_176))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_177), ((int64_t)(uint64_t)L_178)))));
		uint32_t L_179 = V_15;
		uint32_t L_180 = V_26;
		uint32_t L_181 = V_14;
		uint32_t L_182 = V_27;
		uint32_t L_183 = V_13;
		uint32_t L_184 = V_13;
		V_78 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_179), ((int64_t)(uint64_t)L_180))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_181), ((int64_t)(uint64_t)L_182))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_183), ((int64_t)(uint64_t)L_184)))));
		uint32_t L_185 = V_32;
		uint32_t L_186 = V_38;
		uint32_t L_187 = V_31;
		uint32_t L_188 = V_31;
		V_79 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_185), ((int64_t)(uint64_t)L_186))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_187), ((int64_t)(uint64_t)L_188)))));
		uint32_t L_189 = V_37;
		uint32_t L_190 = V_41;
		uint32_t L_191 = V_36;
		uint32_t L_192 = V_42;
		uint32_t L_193 = V_35;
		uint32_t L_194 = V_35;
		V_80 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_189), ((int64_t)(uint64_t)L_190))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_191), ((int64_t)(uint64_t)L_192))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_193), ((int64_t)(uint64_t)L_194)))));
		uint64_t L_195 = V_61;
		uint64_t L_196 = V_75;
		uint64_t L_197 = V_77;
		uint64_t L_198 = V_80;
		uint64_t L_199 = V_76;
		V_61 = ((int64_t)il2cpp_codegen_add((int64_t)L_195, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_196, (int64_t)L_197)), (int64_t)L_198)), (int64_t)L_199))));
		uint64_t L_200 = V_61;
		V_47 = ((int32_t)(((int32_t)(uint32_t)L_200)&((int32_t)268435455)));
		uint64_t L_201 = V_61;
		V_61 = ((int64_t)((uint64_t)L_201>>((int32_t)28)));
		uint64_t L_202 = V_62;
		uint64_t L_203 = V_78;
		uint64_t L_204 = V_79;
		uint64_t L_205 = V_75;
		uint64_t L_206 = V_80;
		V_62 = ((int64_t)il2cpp_codegen_add((int64_t)L_202, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_203, (int64_t)L_204)), (int64_t)L_205)), (int64_t)L_206))));
		uint64_t L_207 = V_62;
		V_55 = ((int32_t)(((int32_t)(uint32_t)L_207)&((int32_t)268435455)));
		uint64_t L_208 = V_62;
		V_62 = ((int64_t)((uint64_t)L_208>>((int32_t)28)));
		uint32_t L_209 = V_3;
		uint32_t L_210 = V_16;
		uint32_t L_211 = V_2;
		uint32_t L_212 = V_17;
		V_81 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_209), ((int64_t)(uint64_t)L_210))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_211), ((int64_t)(uint64_t)L_212)))));
		uint32_t L_213 = V_7;
		uint32_t L_214 = V_20;
		uint32_t L_215 = V_6;
		uint32_t L_216 = V_21;
		V_82 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_213), ((int64_t)(uint64_t)L_214))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_215), ((int64_t)(uint64_t)L_216)))));
		uint32_t L_217 = V_11;
		uint32_t L_218 = V_23;
		uint32_t L_219 = V_10;
		uint32_t L_220 = V_24;
		V_83 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_217), ((int64_t)(uint64_t)L_218))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_219), ((int64_t)(uint64_t)L_220)))));
		uint32_t L_221 = V_15;
		uint32_t L_222 = V_27;
		uint32_t L_223 = V_14;
		uint32_t L_224 = V_28;
		V_84 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_221), ((int64_t)(uint64_t)L_222))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_223), ((int64_t)(uint64_t)L_224)))));
		uint32_t L_225 = V_33;
		uint32_t L_226 = V_38;
		uint32_t L_227 = V_32;
		uint32_t L_228 = V_39;
		V_85 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_225), ((int64_t)(uint64_t)L_226))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_227), ((int64_t)(uint64_t)L_228)))));
		uint32_t L_229 = V_37;
		uint32_t L_230 = V_42;
		uint32_t L_231 = V_36;
		uint32_t L_232 = V_43;
		V_86 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_229), ((int64_t)(uint64_t)L_230))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_231), ((int64_t)(uint64_t)L_232)))));
		uint64_t L_233 = V_61;
		uint64_t L_234 = V_81;
		uint64_t L_235 = V_83;
		uint64_t L_236 = V_86;
		uint64_t L_237 = V_82;
		V_61 = ((int64_t)il2cpp_codegen_add((int64_t)L_233, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_234, (int64_t)L_235)), (int64_t)L_236)), (int64_t)L_237))));
		uint64_t L_238 = V_61;
		V_48 = ((int32_t)(((int32_t)(uint32_t)L_238)&((int32_t)268435455)));
		uint64_t L_239 = V_61;
		V_61 = ((int64_t)((uint64_t)L_239>>((int32_t)28)));
		uint64_t L_240 = V_62;
		uint64_t L_241 = V_84;
		uint64_t L_242 = V_85;
		uint64_t L_243 = V_81;
		uint64_t L_244 = V_86;
		V_62 = ((int64_t)il2cpp_codegen_add((int64_t)L_240, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_241, (int64_t)L_242)), (int64_t)L_243)), (int64_t)L_244))));
		uint64_t L_245 = V_62;
		V_56 = ((int32_t)(((int32_t)(uint32_t)L_245)&((int32_t)268435455)));
		uint64_t L_246 = V_62;
		V_62 = ((int64_t)((uint64_t)L_246>>((int32_t)28)));
		uint32_t L_247 = V_4;
		uint32_t L_248 = V_16;
		uint32_t L_249 = V_3;
		uint32_t L_250 = V_17;
		uint32_t L_251 = V_2;
		uint32_t L_252 = V_2;
		V_87 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_247), ((int64_t)(uint64_t)L_248))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_249), ((int64_t)(uint64_t)L_250))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_251), ((int64_t)(uint64_t)L_252)))));
		uint32_t L_253 = V_7;
		uint32_t L_254 = V_21;
		uint32_t L_255 = V_6;
		uint32_t L_256 = V_6;
		V_88 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_253), ((int64_t)(uint64_t)L_254))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_255), ((int64_t)(uint64_t)L_256)))));
		uint32_t L_257 = V_12;
		uint32_t L_258 = V_23;
		uint32_t L_259 = V_11;
		uint32_t L_260 = V_24;
		uint32_t L_261 = V_10;
		uint32_t L_262 = V_10;
		V_89 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_257), ((int64_t)(uint64_t)L_258))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_259), ((int64_t)(uint64_t)L_260))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_261), ((int64_t)(uint64_t)L_262)))));
		uint32_t L_263 = V_15;
		uint32_t L_264 = V_28;
		uint32_t L_265 = V_14;
		uint32_t L_266 = V_14;
		V_90 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_263), ((int64_t)(uint64_t)L_264))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_265), ((int64_t)(uint64_t)L_266)))));
		uint32_t L_267 = V_34;
		uint32_t L_268 = V_38;
		uint32_t L_269 = V_33;
		uint32_t L_270 = V_39;
		uint32_t L_271 = V_32;
		uint32_t L_272 = V_32;
		V_91 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_267), ((int64_t)(uint64_t)L_268))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_269), ((int64_t)(uint64_t)L_270))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_271), ((int64_t)(uint64_t)L_272)))));
		uint32_t L_273 = V_37;
		uint32_t L_274 = V_43;
		uint32_t L_275 = V_36;
		uint32_t L_276 = V_36;
		V_92 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_273), ((int64_t)(uint64_t)L_274))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_275), ((int64_t)(uint64_t)L_276)))));
		uint64_t L_277 = V_61;
		uint64_t L_278 = V_87;
		uint64_t L_279 = V_89;
		uint64_t L_280 = V_92;
		uint64_t L_281 = V_88;
		V_61 = ((int64_t)il2cpp_codegen_add((int64_t)L_277, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_278, (int64_t)L_279)), (int64_t)L_280)), (int64_t)L_281))));
		uint64_t L_282 = V_61;
		V_49 = ((int32_t)(((int32_t)(uint32_t)L_282)&((int32_t)268435455)));
		uint64_t L_283 = V_61;
		V_61 = ((int64_t)((uint64_t)L_283>>((int32_t)28)));
		uint64_t L_284 = V_62;
		uint64_t L_285 = V_90;
		uint64_t L_286 = V_91;
		uint64_t L_287 = V_87;
		uint64_t L_288 = V_92;
		V_62 = ((int64_t)il2cpp_codegen_add((int64_t)L_284, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_285, (int64_t)L_286)), (int64_t)L_287)), (int64_t)L_288))));
		uint64_t L_289 = V_62;
		V_57 = ((int32_t)(((int32_t)(uint32_t)L_289)&((int32_t)268435455)));
		uint64_t L_290 = V_62;
		V_62 = ((int64_t)((uint64_t)L_290>>((int32_t)28)));
		uint32_t L_291 = V_5;
		uint32_t L_292 = V_16;
		uint32_t L_293 = V_4;
		uint32_t L_294 = V_17;
		uint32_t L_295 = V_3;
		uint32_t L_296 = V_18;
		V_93 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_291), ((int64_t)(uint64_t)L_292))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_293), ((int64_t)(uint64_t)L_294))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_295), ((int64_t)(uint64_t)L_296)))));
		uint32_t L_297 = V_7;
		uint32_t L_298 = V_22;
		V_94 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_297), ((int64_t)(uint64_t)L_298)));
		uint32_t L_299 = V_13;
		uint32_t L_300 = V_23;
		uint32_t L_301 = V_12;
		uint32_t L_302 = V_24;
		uint32_t L_303 = V_11;
		uint32_t L_304 = V_25;
		V_95 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_299), ((int64_t)(uint64_t)L_300))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_301), ((int64_t)(uint64_t)L_302))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_303), ((int64_t)(uint64_t)L_304)))));
		uint32_t L_305 = V_15;
		uint32_t L_306 = V_29;
		V_96 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_305), ((int64_t)(uint64_t)L_306)));
		uint32_t L_307 = V_35;
		uint32_t L_308 = V_38;
		uint32_t L_309 = V_34;
		uint32_t L_310 = V_39;
		uint32_t L_311 = V_33;
		uint32_t L_312 = V_40;
		V_97 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_307), ((int64_t)(uint64_t)L_308))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_309), ((int64_t)(uint64_t)L_310))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_311), ((int64_t)(uint64_t)L_312)))));
		uint32_t L_313 = V_37;
		uint32_t L_314 = V_44;
		V_98 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_313), ((int64_t)(uint64_t)L_314)));
		uint64_t L_315 = V_61;
		uint64_t L_316 = V_93;
		uint64_t L_317 = V_95;
		uint64_t L_318 = V_98;
		uint64_t L_319 = V_94;
		V_61 = ((int64_t)il2cpp_codegen_add((int64_t)L_315, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_316, (int64_t)L_317)), (int64_t)L_318)), (int64_t)L_319))));
		uint64_t L_320 = V_61;
		V_50 = ((int32_t)(((int32_t)(uint32_t)L_320)&((int32_t)268435455)));
		uint64_t L_321 = V_61;
		V_61 = ((int64_t)((uint64_t)L_321>>((int32_t)28)));
		uint64_t L_322 = V_62;
		uint64_t L_323 = V_96;
		uint64_t L_324 = V_97;
		uint64_t L_325 = V_93;
		uint64_t L_326 = V_98;
		V_62 = ((int64_t)il2cpp_codegen_add((int64_t)L_322, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_323, (int64_t)L_324)), (int64_t)L_325)), (int64_t)L_326))));
		uint64_t L_327 = V_62;
		V_58 = ((int32_t)(((int32_t)(uint32_t)L_327)&((int32_t)268435455)));
		uint64_t L_328 = V_62;
		V_62 = ((int64_t)((uint64_t)L_328>>((int32_t)28)));
		uint32_t L_329 = V_6;
		uint32_t L_330 = V_16;
		uint32_t L_331 = V_5;
		uint32_t L_332 = V_17;
		uint32_t L_333 = V_4;
		uint32_t L_334 = V_18;
		uint32_t L_335 = V_3;
		uint32_t L_336 = V_3;
		V_99 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_329), ((int64_t)(uint64_t)L_330))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_331), ((int64_t)(uint64_t)L_332))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_333), ((int64_t)(uint64_t)L_334))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_335), ((int64_t)(uint64_t)L_336)))));
		uint32_t L_337 = V_7;
		uint32_t L_338 = V_7;
		V_100 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_337), ((int64_t)(uint64_t)L_338)));
		uint32_t L_339 = V_14;
		uint32_t L_340 = V_23;
		uint32_t L_341 = V_13;
		uint32_t L_342 = V_24;
		uint32_t L_343 = V_12;
		uint32_t L_344 = V_25;
		uint32_t L_345 = V_11;
		uint32_t L_346 = V_11;
		V_101 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_339), ((int64_t)(uint64_t)L_340))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_341), ((int64_t)(uint64_t)L_342))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_343), ((int64_t)(uint64_t)L_344))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_345), ((int64_t)(uint64_t)L_346)))));
		uint32_t L_347 = V_15;
		uint32_t L_348 = V_15;
		V_102 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_347), ((int64_t)(uint64_t)L_348)));
		uint32_t L_349 = V_36;
		uint32_t L_350 = V_38;
		uint32_t L_351 = V_35;
		uint32_t L_352 = V_39;
		uint32_t L_353 = V_34;
		uint32_t L_354 = V_40;
		uint32_t L_355 = V_33;
		uint32_t L_356 = V_33;
		V_103 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_349), ((int64_t)(uint64_t)L_350))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_351), ((int64_t)(uint64_t)L_352))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_353), ((int64_t)(uint64_t)L_354))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_355), ((int64_t)(uint64_t)L_356)))));
		uint32_t L_357 = V_37;
		uint32_t L_358 = V_37;
		V_104 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_357), ((int64_t)(uint64_t)L_358)));
		uint64_t L_359 = V_61;
		uint64_t L_360 = V_99;
		uint64_t L_361 = V_101;
		uint64_t L_362 = V_104;
		uint64_t L_363 = V_100;
		V_61 = ((int64_t)il2cpp_codegen_add((int64_t)L_359, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_360, (int64_t)L_361)), (int64_t)L_362)), (int64_t)L_363))));
		uint64_t L_364 = V_61;
		V_51 = ((int32_t)(((int32_t)(uint32_t)L_364)&((int32_t)268435455)));
		uint64_t L_365 = V_61;
		V_61 = ((int64_t)((uint64_t)L_365>>((int32_t)28)));
		uint64_t L_366 = V_62;
		uint64_t L_367 = V_102;
		uint64_t L_368 = V_103;
		uint64_t L_369 = V_99;
		uint64_t L_370 = V_104;
		V_62 = ((int64_t)il2cpp_codegen_add((int64_t)L_366, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_367, (int64_t)L_368)), (int64_t)L_369)), (int64_t)L_370))));
		uint64_t L_371 = V_62;
		V_59 = ((int32_t)(((int32_t)(uint32_t)L_371)&((int32_t)268435455)));
		uint64_t L_372 = V_62;
		V_62 = ((int64_t)((uint64_t)L_372>>((int32_t)28)));
		uint32_t L_373 = V_7;
		uint32_t L_374 = V_16;
		uint32_t L_375 = V_6;
		uint32_t L_376 = V_17;
		uint32_t L_377 = V_5;
		uint32_t L_378 = V_18;
		uint32_t L_379 = V_4;
		uint32_t L_380 = V_19;
		V_105 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_373), ((int64_t)(uint64_t)L_374))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_375), ((int64_t)(uint64_t)L_376))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_377), ((int64_t)(uint64_t)L_378))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_379), ((int64_t)(uint64_t)L_380)))));
		uint32_t L_381 = V_15;
		uint32_t L_382 = V_23;
		uint32_t L_383 = V_14;
		uint32_t L_384 = V_24;
		uint32_t L_385 = V_13;
		uint32_t L_386 = V_25;
		uint32_t L_387 = V_12;
		uint32_t L_388 = V_26;
		V_106 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_381), ((int64_t)(uint64_t)L_382))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_383), ((int64_t)(uint64_t)L_384))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_385), ((int64_t)(uint64_t)L_386))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_387), ((int64_t)(uint64_t)L_388)))));
		uint32_t L_389 = V_37;
		uint32_t L_390 = V_38;
		uint32_t L_391 = V_36;
		uint32_t L_392 = V_39;
		uint32_t L_393 = V_35;
		uint32_t L_394 = V_40;
		uint32_t L_395 = V_34;
		uint32_t L_396 = V_41;
		V_107 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_389), ((int64_t)(uint64_t)L_390))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_391), ((int64_t)(uint64_t)L_392))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_393), ((int64_t)(uint64_t)L_394))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_395), ((int64_t)(uint64_t)L_396)))));
		uint64_t L_397 = V_61;
		uint64_t L_398 = V_105;
		uint64_t L_399 = V_106;
		V_61 = ((int64_t)il2cpp_codegen_add((int64_t)L_397, ((int64_t)il2cpp_codegen_add((int64_t)L_398, (int64_t)L_399))));
		uint64_t L_400 = V_61;
		V_52 = ((int32_t)(((int32_t)(uint32_t)L_400)&((int32_t)268435455)));
		uint64_t L_401 = V_61;
		V_61 = ((int64_t)((uint64_t)L_401>>((int32_t)28)));
		uint64_t L_402 = V_62;
		uint64_t L_403 = V_107;
		uint64_t L_404 = V_105;
		V_62 = ((int64_t)il2cpp_codegen_add((int64_t)L_402, ((int64_t)il2cpp_codegen_subtract((int64_t)L_403, (int64_t)L_404))));
		uint64_t L_405 = V_62;
		V_60 = ((int32_t)(((int32_t)(uint32_t)L_405)&((int32_t)268435455)));
		uint64_t L_406 = V_62;
		V_62 = ((int64_t)((uint64_t)L_406>>((int32_t)28)));
		uint64_t L_407 = V_61;
		uint64_t L_408 = V_62;
		V_61 = ((int64_t)il2cpp_codegen_add((int64_t)L_407, (int64_t)L_408));
		uint64_t L_409 = V_61;
		uint32_t L_410 = V_53;
		V_61 = ((int64_t)il2cpp_codegen_add((int64_t)L_409, ((int64_t)(uint64_t)L_410)));
		uint64_t L_411 = V_61;
		V_53 = ((int32_t)(((int32_t)(uint32_t)L_411)&((int32_t)268435455)));
		uint64_t L_412 = V_61;
		V_61 = ((int64_t)((uint64_t)L_412>>((int32_t)28)));
		uint64_t L_413 = V_62;
		uint32_t L_414 = V_45;
		V_62 = ((int64_t)il2cpp_codegen_add((int64_t)L_413, ((int64_t)(uint64_t)L_414)));
		uint64_t L_415 = V_62;
		V_45 = ((int32_t)(((int32_t)(uint32_t)L_415)&((int32_t)268435455)));
		uint64_t L_416 = V_62;
		V_62 = ((int64_t)((uint64_t)L_416>>((int32_t)28)));
		uint32_t L_417 = V_54;
		uint64_t L_418 = V_61;
		V_54 = ((int32_t)il2cpp_codegen_add((int32_t)L_417, ((int32_t)(uint32_t)L_418)));
		uint32_t L_419 = V_46;
		uint64_t L_420 = V_62;
		V_46 = ((int32_t)il2cpp_codegen_add((int32_t)L_419, ((int32_t)(uint32_t)L_420)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_421 = ___z1;
		uint32_t L_422 = V_45;
		(L_421)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_422);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_423 = ___z1;
		uint32_t L_424 = V_46;
		(L_423)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_424);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_425 = ___z1;
		uint32_t L_426 = V_47;
		(L_425)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_426);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_427 = ___z1;
		uint32_t L_428 = V_48;
		(L_427)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_428);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_429 = ___z1;
		uint32_t L_430 = V_49;
		(L_429)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_430);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_431 = ___z1;
		uint32_t L_432 = V_50;
		(L_431)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_432);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_433 = ___z1;
		uint32_t L_434 = V_51;
		(L_433)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_434);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_435 = ___z1;
		uint32_t L_436 = V_52;
		(L_435)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_436);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_437 = ___z1;
		uint32_t L_438 = V_53;
		(L_437)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (uint32_t)L_438);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_439 = ___z1;
		uint32_t L_440 = V_54;
		(L_439)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)L_440);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_441 = ___z1;
		uint32_t L_442 = V_55;
		(L_441)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)L_442);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_443 = ___z1;
		uint32_t L_444 = V_56;
		(L_443)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)L_444);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_445 = ___z1;
		uint32_t L_446 = V_57;
		(L_445)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)L_446);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_447 = ___z1;
		uint32_t L_448 = V_58;
		(L_447)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)L_448);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_449 = ___z1;
		uint32_t L_450 = V_59;
		(L_449)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)L_450);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_451 = ___z1;
		uint32_t L_452 = V_60;
		(L_451)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)L_452);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Sqr(System.UInt32[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Sqr_m17AF24330AFB3885BB62E033EB17D18C72D4CBA5 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___n1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___z2;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_0, L_1, NULL);
		goto IL_0010;
	}

IL_0009:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___z2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___z2;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_2, L_3, NULL);
	}

IL_0010:
	{
		int32_t L_4 = ___n1;
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		___n1 = L_5;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc7748.X448Field::SqrtRatioVar(System.UInt32[],System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X448Field_SqrtRatioVar_mEE832660670B6493D88C299006A8013BE6ED270E (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___u0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___v1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___u0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_2, L_3, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___v1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_4, L_5, L_6, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_1;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_7, L_8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___u0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_9, L_10, L_11, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___u0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_1;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_12, L_13, L_14, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___v1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_1;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_15, L_16, L_17, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18;
		L_18 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_2 = L_18;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_2;
		X448Field_PowPm3d4_m6B462BA1140265FA205703020CE19E0120B51422(L_19, L_20, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_2;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_21, L_22, L_23, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24;
		L_24 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_3 = L_24;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_3;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_25, L_26, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___v1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_3;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_27, L_28, L_29, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___u0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_3;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_30, L_31, L_32, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_3;
		X448Field_Normalize_m28D257AC52601B6B435B1DCF0215E0BA9DC5762D(L_33, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = V_3;
		bool L_35;
		L_35 = X448Field_IsZeroVar_m66A2422FBD302F46255DE30062EE21833A59264F(L_34, NULL);
		if (!L_35)
		{
			goto IL_0085;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___z2;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_36, 0, L_37, 0, NULL);
		return (bool)1;
	}

IL_0085:
	{
		return (bool)0;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Sub(System.UInt32[],System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	uint32_t V_18 = 0;
	uint32_t V_19 = 0;
	uint32_t V_20 = 0;
	uint32_t V_21 = 0;
	uint32_t V_22 = 0;
	uint32_t V_23 = 0;
	uint32_t V_24 = 0;
	uint32_t V_25 = 0;
	uint32_t V_26 = 0;
	uint32_t V_27 = 0;
	uint32_t V_28 = 0;
	uint32_t V_29 = 0;
	uint32_t V_30 = 0;
	uint32_t V_31 = 0;
	uint32_t V_32 = 0;
	uint32_t V_33 = 0;
	uint32_t V_34 = 0;
	uint32_t V_35 = 0;
	uint32_t V_36 = 0;
	uint32_t V_37 = 0;
	uint32_t V_38 = 0;
	uint32_t V_39 = 0;
	uint32_t V_40 = 0;
	uint32_t V_41 = 0;
	uint32_t V_42 = 0;
	uint32_t V_43 = 0;
	uint32_t V_44 = 0;
	uint32_t V_45 = 0;
	uint32_t V_46 = 0;
	uint32_t V_47 = 0;
	uint32_t V_48 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___x0;
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___x0;
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___x0;
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___x0;
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___x0;
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___x0;
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___x0;
		int32_t L_22 = 7;
		uint32_t L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___x0;
		int32_t L_25 = 8;
		uint32_t L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		V_8 = L_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___x0;
		int32_t L_28 = ((int32_t)9);
		uint32_t L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		V_9 = L_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___x0;
		int32_t L_31 = ((int32_t)10);
		uint32_t L_32 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		V_10 = L_32;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___x0;
		int32_t L_34 = ((int32_t)11);
		uint32_t L_35 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_11 = L_35;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___x0;
		int32_t L_37 = ((int32_t)12);
		uint32_t L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_12 = L_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___x0;
		int32_t L_40 = ((int32_t)13);
		uint32_t L_41 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		V_13 = L_41;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___x0;
		int32_t L_43 = ((int32_t)14);
		uint32_t L_44 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		V_14 = L_44;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___x0;
		int32_t L_46 = ((int32_t)15);
		uint32_t L_47 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		V_15 = L_47;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___y1;
		int32_t L_49 = 0;
		uint32_t L_50 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		V_16 = L_50;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___y1;
		int32_t L_52 = 1;
		uint32_t L_53 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		V_17 = L_53;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___y1;
		int32_t L_55 = 2;
		uint32_t L_56 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		V_18 = L_56;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___y1;
		int32_t L_58 = 3;
		uint32_t L_59 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		V_19 = L_59;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___y1;
		int32_t L_61 = 4;
		uint32_t L_62 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		V_20 = L_62;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = ___y1;
		int32_t L_64 = 5;
		uint32_t L_65 = (L_63)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64));
		V_21 = L_65;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___y1;
		int32_t L_67 = 6;
		uint32_t L_68 = (L_66)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_67));
		V_22 = L_68;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___y1;
		int32_t L_70 = 7;
		uint32_t L_71 = (L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_70));
		V_23 = L_71;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___y1;
		int32_t L_73 = 8;
		uint32_t L_74 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		V_24 = L_74;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___y1;
		int32_t L_76 = ((int32_t)9);
		uint32_t L_77 = (L_75)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		V_25 = L_77;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = ___y1;
		int32_t L_79 = ((int32_t)10);
		uint32_t L_80 = (L_78)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_79));
		V_26 = L_80;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___y1;
		int32_t L_82 = ((int32_t)11);
		uint32_t L_83 = (L_81)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
		V_27 = L_83;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___y1;
		int32_t L_85 = ((int32_t)12);
		uint32_t L_86 = (L_84)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85));
		V_28 = L_86;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ___y1;
		int32_t L_88 = ((int32_t)13);
		uint32_t L_89 = (L_87)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_88));
		V_29 = L_89;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = ___y1;
		int32_t L_91 = ((int32_t)14);
		uint32_t L_92 = (L_90)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_91));
		V_30 = L_92;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_93 = ___y1;
		int32_t L_94 = ((int32_t)15);
		uint32_t L_95 = (L_93)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_94));
		V_31 = L_95;
		uint32_t L_96 = V_0;
		uint32_t L_97 = V_16;
		V_32 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_96, ((int32_t)536870910))), (int32_t)L_97));
		uint32_t L_98 = V_1;
		uint32_t L_99 = V_17;
		V_33 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_98, ((int32_t)536870910))), (int32_t)L_99));
		uint32_t L_100 = V_2;
		uint32_t L_101 = V_18;
		V_34 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_100, ((int32_t)536870910))), (int32_t)L_101));
		uint32_t L_102 = V_3;
		uint32_t L_103 = V_19;
		V_35 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_102, ((int32_t)536870910))), (int32_t)L_103));
		uint32_t L_104 = V_4;
		uint32_t L_105 = V_20;
		V_36 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_104, ((int32_t)536870910))), (int32_t)L_105));
		uint32_t L_106 = V_5;
		uint32_t L_107 = V_21;
		V_37 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_106, ((int32_t)536870910))), (int32_t)L_107));
		uint32_t L_108 = V_6;
		uint32_t L_109 = V_22;
		V_38 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_108, ((int32_t)536870910))), (int32_t)L_109));
		uint32_t L_110 = V_7;
		uint32_t L_111 = V_23;
		V_39 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_110, ((int32_t)536870910))), (int32_t)L_111));
		uint32_t L_112 = V_8;
		uint32_t L_113 = V_24;
		V_40 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_112, ((int32_t)536870908))), (int32_t)L_113));
		uint32_t L_114 = V_9;
		uint32_t L_115 = V_25;
		V_41 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_114, ((int32_t)536870910))), (int32_t)L_115));
		uint32_t L_116 = V_10;
		uint32_t L_117 = V_26;
		V_42 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_116, ((int32_t)536870910))), (int32_t)L_117));
		uint32_t L_118 = V_11;
		uint32_t L_119 = V_27;
		V_43 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_118, ((int32_t)536870910))), (int32_t)L_119));
		uint32_t L_120 = V_12;
		uint32_t L_121 = V_28;
		V_44 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_120, ((int32_t)536870910))), (int32_t)L_121));
		uint32_t L_122 = V_13;
		uint32_t L_123 = V_29;
		V_45 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_122, ((int32_t)536870910))), (int32_t)L_123));
		uint32_t L_124 = V_14;
		uint32_t L_125 = V_30;
		V_46 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_124, ((int32_t)536870910))), (int32_t)L_125));
		uint32_t L_126 = V_15;
		uint32_t L_127 = V_31;
		V_47 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_126, ((int32_t)536870910))), (int32_t)L_127));
		uint32_t L_128 = V_34;
		uint32_t L_129 = V_33;
		V_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_128, ((int32_t)((uint32_t)L_129>>((int32_t)28)))));
		uint32_t L_130 = V_33;
		V_33 = ((int32_t)((int32_t)L_130&((int32_t)268435455)));
		uint32_t L_131 = V_38;
		uint32_t L_132 = V_37;
		V_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_131, ((int32_t)((uint32_t)L_132>>((int32_t)28)))));
		uint32_t L_133 = V_37;
		V_37 = ((int32_t)((int32_t)L_133&((int32_t)268435455)));
		uint32_t L_134 = V_42;
		uint32_t L_135 = V_41;
		V_42 = ((int32_t)il2cpp_codegen_add((int32_t)L_134, ((int32_t)((uint32_t)L_135>>((int32_t)28)))));
		uint32_t L_136 = V_41;
		V_41 = ((int32_t)((int32_t)L_136&((int32_t)268435455)));
		uint32_t L_137 = V_46;
		uint32_t L_138 = V_45;
		V_46 = ((int32_t)il2cpp_codegen_add((int32_t)L_137, ((int32_t)((uint32_t)L_138>>((int32_t)28)))));
		uint32_t L_139 = V_45;
		V_45 = ((int32_t)((int32_t)L_139&((int32_t)268435455)));
		uint32_t L_140 = V_35;
		uint32_t L_141 = V_34;
		V_35 = ((int32_t)il2cpp_codegen_add((int32_t)L_140, ((int32_t)((uint32_t)L_141>>((int32_t)28)))));
		uint32_t L_142 = V_34;
		V_34 = ((int32_t)((int32_t)L_142&((int32_t)268435455)));
		uint32_t L_143 = V_39;
		uint32_t L_144 = V_38;
		V_39 = ((int32_t)il2cpp_codegen_add((int32_t)L_143, ((int32_t)((uint32_t)L_144>>((int32_t)28)))));
		uint32_t L_145 = V_38;
		V_38 = ((int32_t)((int32_t)L_145&((int32_t)268435455)));
		uint32_t L_146 = V_43;
		uint32_t L_147 = V_42;
		V_43 = ((int32_t)il2cpp_codegen_add((int32_t)L_146, ((int32_t)((uint32_t)L_147>>((int32_t)28)))));
		uint32_t L_148 = V_42;
		V_42 = ((int32_t)((int32_t)L_148&((int32_t)268435455)));
		uint32_t L_149 = V_47;
		uint32_t L_150 = V_46;
		V_47 = ((int32_t)il2cpp_codegen_add((int32_t)L_149, ((int32_t)((uint32_t)L_150>>((int32_t)28)))));
		uint32_t L_151 = V_46;
		V_46 = ((int32_t)((int32_t)L_151&((int32_t)268435455)));
		uint32_t L_152 = V_47;
		V_48 = ((int32_t)((uint32_t)L_152>>((int32_t)28)));
		uint32_t L_153 = V_47;
		V_47 = ((int32_t)((int32_t)L_153&((int32_t)268435455)));
		uint32_t L_154 = V_32;
		uint32_t L_155 = V_48;
		V_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_154, (int32_t)L_155));
		uint32_t L_156 = V_40;
		uint32_t L_157 = V_48;
		V_40 = ((int32_t)il2cpp_codegen_add((int32_t)L_156, (int32_t)L_157));
		uint32_t L_158 = V_36;
		uint32_t L_159 = V_35;
		V_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_158, ((int32_t)((uint32_t)L_159>>((int32_t)28)))));
		uint32_t L_160 = V_35;
		V_35 = ((int32_t)((int32_t)L_160&((int32_t)268435455)));
		uint32_t L_161 = V_40;
		uint32_t L_162 = V_39;
		V_40 = ((int32_t)il2cpp_codegen_add((int32_t)L_161, ((int32_t)((uint32_t)L_162>>((int32_t)28)))));
		uint32_t L_163 = V_39;
		V_39 = ((int32_t)((int32_t)L_163&((int32_t)268435455)));
		uint32_t L_164 = V_44;
		uint32_t L_165 = V_43;
		V_44 = ((int32_t)il2cpp_codegen_add((int32_t)L_164, ((int32_t)((uint32_t)L_165>>((int32_t)28)))));
		uint32_t L_166 = V_43;
		V_43 = ((int32_t)((int32_t)L_166&((int32_t)268435455)));
		uint32_t L_167 = V_33;
		uint32_t L_168 = V_32;
		V_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_167, ((int32_t)((uint32_t)L_168>>((int32_t)28)))));
		uint32_t L_169 = V_32;
		V_32 = ((int32_t)((int32_t)L_169&((int32_t)268435455)));
		uint32_t L_170 = V_37;
		uint32_t L_171 = V_36;
		V_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_170, ((int32_t)((uint32_t)L_171>>((int32_t)28)))));
		uint32_t L_172 = V_36;
		V_36 = ((int32_t)((int32_t)L_172&((int32_t)268435455)));
		uint32_t L_173 = V_41;
		uint32_t L_174 = V_40;
		V_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_173, ((int32_t)((uint32_t)L_174>>((int32_t)28)))));
		uint32_t L_175 = V_40;
		V_40 = ((int32_t)((int32_t)L_175&((int32_t)268435455)));
		uint32_t L_176 = V_45;
		uint32_t L_177 = V_44;
		V_45 = ((int32_t)il2cpp_codegen_add((int32_t)L_176, ((int32_t)((uint32_t)L_177>>((int32_t)28)))));
		uint32_t L_178 = V_44;
		V_44 = ((int32_t)((int32_t)L_178&((int32_t)268435455)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_179 = ___z2;
		uint32_t L_180 = V_32;
		(L_179)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_180);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_181 = ___z2;
		uint32_t L_182 = V_33;
		(L_181)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_182);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_183 = ___z2;
		uint32_t L_184 = V_34;
		(L_183)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_184);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_185 = ___z2;
		uint32_t L_186 = V_35;
		(L_185)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_186);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_187 = ___z2;
		uint32_t L_188 = V_36;
		(L_187)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_188);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_189 = ___z2;
		uint32_t L_190 = V_37;
		(L_189)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_190);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_191 = ___z2;
		uint32_t L_192 = V_38;
		(L_191)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_192);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_193 = ___z2;
		uint32_t L_194 = V_39;
		(L_193)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_194);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_195 = ___z2;
		uint32_t L_196 = V_40;
		(L_195)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (uint32_t)L_196);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_197 = ___z2;
		uint32_t L_198 = V_41;
		(L_197)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)L_198);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_199 = ___z2;
		uint32_t L_200 = V_42;
		(L_199)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)L_200);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_201 = ___z2;
		uint32_t L_202 = V_43;
		(L_201)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)L_202);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_203 = ___z2;
		uint32_t L_204 = V_44;
		(L_203)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)L_204);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_205 = ___z2;
		uint32_t L_206 = V_45;
		(L_205)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)L_206);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_207 = ___z2;
		uint32_t L_208 = V_46;
		(L_207)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)L_208);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_209 = ___z2;
		uint32_t L_210 = V_47;
		(L_209)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)L_210);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::SubOne(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_SubOne_mDE8A6766E81D9B5EEB00EA64497BE2A452C6BC9A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = V_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___z0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___z0;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::Zero(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Zero_m9C90DD63C757640FAB477D7EBFCC7C113E3FA6E9 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000c;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___z0;
		int32_t L_1 = V_0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)0);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)16))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc7748.X448Field::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field__cctor_mE4C80CD696223FFF22E19FD120021024CA6E5064 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002f95U2D1_221_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002f95U2D1_221_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_StaticFields*)il2cpp_codegen_static_fields_for(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var))->___P32_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_StaticFields*)il2cpp_codegen_static_fields_for(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var))->___P32_2), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::CalculateS(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed25519_CalculateS_mAA2636B38DB61BC82D238D80C7ECF898674E3BA2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___r0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_DecodeScalar_m420D0E8864965383EE73A0F43ABDAE269E740110(L_1, 0, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___k1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_1;
		Ed25519_DecodeScalar_m420D0E8864965383EE73A0F43ABDAE269E740110(L_4, 0, L_5, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_2 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___s2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_2;
		Ed25519_DecodeScalar_m420D0E8864965383EE73A0F43ABDAE269E740110(L_7, 0, L_8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		uint32_t L_12;
		L_12 = Nat256_MulAddTo_m5FAB7447289ABA3C8A26A21815BD188C71A21D21(L_9, L_10, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_3 = L_13;
		V_4 = 0;
		goto IL_0058;
	}

IL_0044:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		int32_t L_15 = V_4;
		int32_t L_16 = L_15;
		uint32_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_3;
		int32_t L_19 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_Encode32_m4BD8A0B584B3DBE332B16FCEB92924FAA50E22C0(L_17, L_18, ((int32_t)il2cpp_codegen_multiply(L_19, 4)), NULL);
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0058:
	{
		int32_t L_21 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = Ed25519_ReduceScalar_mCA90FD3ED1419421E24436D936D212D0AEC8D795(L_23, NULL);
		return L_24;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::CheckContextVar(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_CheckContextVar_m619215BB6F89A7D8BD285C0D24AC97D55913FC5E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx0, uint8_t ___phflag1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___ctx0;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		uint8_t L_1 = ___phflag1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}

IL_0006:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___ctx0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___ctx0;
		return (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) < ((int32_t)((int32_t)256)))? 1 : 0);
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		return (bool)1;
	}
}
// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::CheckPoint(System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed25519_CheckPoint_m13C787254C4868B7D8D6E570C0375011B37FBE43 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___x0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		X25519Field_Sqr_mD16DC4C60352DE4570CE78356310958DAF113A4A(L_3, L_4, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___y1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_2;
		X25519Field_Sqr_mD16DC4C60352DE4570CE78356310958DAF113A4A(L_5, L_6, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_0;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_7, L_8, L_9, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_2;
		X25519Field_Sub_mD8217E553ED88B7253CA41F14DE8664C31306742(L_10, L_11, L_12, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d_27;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_13, L_14, L_15, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		X25519Field_AddOne_mF7FAE9F43A2F2BB7463419CD2E74B157FA51BE89(L_16, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_0;
		X25519Field_Sub_mD8217E553ED88B7253CA41F14DE8664C31306742(L_17, L_18, L_19, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_0;
		X25519Field_Normalize_mD79E8B8BA9EA42005EC0D8D4A82FA7080BACE52B(L_20, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_0;
		int32_t L_22;
		L_22 = X25519Field_IsZero_mAD667DA146848AB692CE36541A1E634EB7CE7EC3(L_21, NULL);
		return L_22;
	}
}
// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::CheckPoint(System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed25519_CheckPoint_mB0076E4C6E0A4FC1DADD6A24B2938B2EB912F35D (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_3 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___x0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_1;
		X25519Field_Sqr_mD16DC4C60352DE4570CE78356310958DAF113A4A(L_4, L_5, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___y1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_2;
		X25519Field_Sqr_mD16DC4C60352DE4570CE78356310958DAF113A4A(L_6, L_7, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___z2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_3;
		X25519Field_Sqr_mD16DC4C60352DE4570CE78356310958DAF113A4A(L_8, L_9, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_0;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_10, L_11, L_12, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_2;
		X25519Field_Sub_mD8217E553ED88B7253CA41F14DE8664C31306742(L_13, L_14, L_15, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_2;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_16, L_17, L_18, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_3;
		X25519Field_Sqr_mD16DC4C60352DE4570CE78356310958DAF113A4A(L_19, L_20, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d_27;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_0;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_21, L_22, L_23, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_0;
		X25519Field_Add_mF78371B3ADFE521222F9C2B249EBBD7AEB33EE51(L_24, L_25, L_26, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_0;
		X25519Field_Sub_mD8217E553ED88B7253CA41F14DE8664C31306742(L_27, L_28, L_29, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_0;
		X25519Field_Normalize_mD79E8B8BA9EA42005EC0D8D4A82FA7080BACE52B(L_30, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32;
		L_32 = X25519Field_IsZero_mAD667DA146848AB692CE36541A1E634EB7CE7EC3(L_31, NULL);
		return L_32;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::CheckPointVar(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_CheckPointVar_m81418D3FA21F905D873BD4C39A082C6D0715E527 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_Decode32_mC50E29B467E9E8E4C7F524785CFE264412359452(L_1, 0, L_2, 0, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3;
		V_1 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_1;
		int32_t L_6 = 7;
		uint32_t L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)((int32_t)L_7&((int32_t)2147483647LL))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___P_23;
		bool L_10;
		L_10 = Nat256_Gte_m3FFB7403550D26CAE2964885177D2AFAFEB4D13F(L_8, L_9, NULL);
		return (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::CheckScalarVar(System.Byte[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_CheckScalarVar_m1C500E6BBD59BAE349B7546776B0AE8495356D01 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___n1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___s0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___n1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_DecodeScalar_m420D0E8864965383EE73A0F43ABDAE269E740110(L_0, 0, L_1, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___n1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___L_24;
		bool L_4;
		L_4 = Nat256_Gte_m3FFB7403550D26CAE2964885177D2AFAFEB4D13F(L_2, L_3, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}
}
// System.Byte[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Copy(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed25519_Copy_m928ECA90B3C51F5FEE5D91346FE7DB92766D1BD7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int32_t L_0 = ___len2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___buf0;
		int32_t L_3 = ___off1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5 = ___len2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_2, L_3, (RuntimeArray*)L_4, 0, L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		return L_6;
	}
}
// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::CreateDigest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ed25519_CreateDigest_m31CD49A015EBEE3D41D363280F25B714A9D11857 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha512Digest_tE91E268ACB5BECD3DBB22B6740A29D8DB468B674_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha512Digest_tE91E268ACB5BECD3DBB22B6740A29D8DB468B674* L_0 = (Sha512Digest_tE91E268ACB5BECD3DBB22B6740A29D8DB468B674*)il2cpp_codegen_object_new(Sha512Digest_tE91E268ACB5BECD3DBB22B6740A29D8DB468B674_il2cpp_TypeInfo_var);
		Sha512Digest__ctor_mB7BE1F624B4567BE9C60541257FB34CAFC2879FC(L_0, NULL);
		return L_0;
	}
}
// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::CreatePrehash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ed25519_CreatePrehash_mD0BC5FA4E5BC86B53016C676BAC07F6B4D4BA0CB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Ed25519_CreateDigest_m31CD49A015EBEE3D41D363280F25B714A9D11857(NULL);
		return L_0;
	}
}
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Decode24(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed25519_Decode24_mFCA27265DA00625554346AF30ADDC45C66A531C7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		uint32_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bs0;
		int32_t L_6 = ___off1;
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		___off1 = L_7;
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int32_t)((int32_t)L_4|((int32_t)((int32_t)L_9<<8))));
		uint32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bs0;
		int32_t L_12 = ___off1;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		___off1 = L_13;
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = ((int32_t)((int32_t)L_10|((int32_t)((int32_t)L_15<<((int32_t)16)))));
		uint32_t L_16 = V_0;
		return L_16;
	}
}
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Decode32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed25519_Decode32_m0429392689EC800E9BD36992D3D35FBEB9E7075C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		uint32_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bs0;
		int32_t L_6 = ___off1;
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		___off1 = L_7;
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int32_t)((int32_t)L_4|((int32_t)((int32_t)L_9<<8))));
		uint32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bs0;
		int32_t L_12 = ___off1;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		___off1 = L_13;
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = ((int32_t)((int32_t)L_10|((int32_t)((int32_t)L_15<<((int32_t)16)))));
		uint32_t L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___bs0;
		int32_t L_18 = ___off1;
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		___off1 = L_19;
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int32_t)((int32_t)L_16|((int32_t)((int32_t)L_21<<((int32_t)24)))));
		uint32_t L_22 = V_0;
		return L_22;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Decode32(System.Byte[],System.Int32,System.UInt32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Decode32_mC50E29B467E9E8E4C7F524785CFE264412359452 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___bsOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___n2, int32_t ___nOff3, int32_t ___nLen4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___n2;
		int32_t L_1 = ___nOff3;
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs0;
		int32_t L_4 = ___bsOff1;
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		uint32_t L_6;
		L_6 = Ed25519_Decode32_m0429392689EC800E9BD36992D3D35FBEB9E7075C(L_3, ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)il2cpp_codegen_multiply(L_5, 4)))), NULL);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (uint32_t)L_6);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___nLen4;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::DecodePointVar(System.Byte[],System.Int32,System.Boolean,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAffine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_DecodePointVar_m6EE29823C3966A4E6BA4B898CD1AB62D0D978784 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___pOff1, bool ___negate2, PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* ___r3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___p0;
		int32_t L_1 = ___pOff1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Ed25519_Copy_m928ECA90B3C51F5FEE5D91346FE7DB92766D1BD7(L_0, L_1, ((int32_t)32), NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		bool L_4;
		L_4 = Ed25519_CheckPointVar_m81418D3FA21F905D873BD4C39A082C6D0715E527(L_3, NULL);
		if (L_4)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6 = ((int32_t)31);
		uint8_t L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = ((int32_t)(((int32_t)((int32_t)L_7&((int32_t)128)))>>7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8;
		V_4 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_4;
		int32_t L_11 = ((int32_t)31);
		uint8_t L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)31)), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_12&((int32_t)127)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_14 = ___r3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = L_14->___y_1;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Decode_m81DD3D2F8E78B08D14B9F04EA2F65B6E47FC293C(L_13, 0, L_15, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_2 = L_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17;
		L_17 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_3 = L_17;
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_18 = ___r3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18->___y_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_2;
		X25519Field_Sqr_mD16DC4C60352DE4570CE78356310958DAF113A4A(L_19, L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d_27;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_3;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_21, L_22, L_23, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_2;
		X25519Field_SubOne_m41514E38F9DF960ADA3002ADC8F4FB7FF3484BC7(L_24, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_3;
		X25519Field_AddOne_mF7FAE9F43A2F2BB7463419CD2E74B157FA51BE89(L_25, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_3;
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_28 = ___r3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = L_28->___x_0;
		bool L_30;
		L_30 = X25519Field_SqrtRatioVar_mE24AE2664550153EF1B48A3912059A496080ED79(L_26, L_27, L_29, NULL);
		if (L_30)
		{
			goto IL_007f;
		}
	}
	{
		return (bool)0;
	}

IL_007f:
	{
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_31 = ___r3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = L_31->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Normalize_mD79E8B8BA9EA42005EC0D8D4A82FA7080BACE52B(L_32, NULL);
		int32_t L_33 = V_1;
		if ((!(((uint32_t)L_33) == ((uint32_t)1))))
		{
			goto IL_009d;
		}
	}
	{
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_34 = ___r3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = L_34->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = X25519Field_IsZeroVar_m7BA86D249183555D19C6C5078C85FFA08320E995(L_35, NULL);
		if (!L_36)
		{
			goto IL_009d;
		}
	}
	{
		return (bool)0;
	}

IL_009d:
	{
		bool L_37 = ___negate2;
		int32_t L_38 = V_1;
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_39 = ___r3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = L_39->___x_0;
		int32_t L_41 = 0;
		int32_t L_42 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		if (!((int32_t)((int32_t)L_37^((((int32_t)((((int32_t)L_38) == ((int32_t)((int32_t)(L_42&1))))? 1 : 0)) == ((int32_t)0))? 1 : 0))))
		{
			goto IL_00c2;
		}
	}
	{
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_43 = ___r3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = L_43->___x_0;
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_45 = ___r3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = L_45->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Negate_mA73E9F6A22FB853AE0AFC46B40F41FF047EFDA97(L_44, L_46, NULL);
	}

IL_00c2:
	{
		return (bool)1;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::DecodeScalar(System.Byte[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_DecodeScalar_m420D0E8864965383EE73A0F43ABDAE269E740110 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, int32_t ___kOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___n2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___k0;
		int32_t L_1 = ___kOff1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___n2;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_Decode32_mC50E29B467E9E8E4C7F524785CFE264412359452(L_0, L_1, L_2, 0, 8, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Dom2(Org.BouncyCastle.Crypto.IDigest,System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Dom2_mD613F8A1AF5B5582F08B901D02F63991CA82862E (RuntimeObject* ___d0, uint8_t ___phflag1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___ctx2;
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___Dom2Prefix_22;
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___ctx2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_2, 2)), ((int32_t)(((RuntimeArray*)L_3)->max_length)))));
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___Dom2Prefix_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_5, (RuntimeArray*)L_6, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		int32_t L_8 = V_0;
		uint8_t L_9 = ___phflag1;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		int32_t L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___ctx2;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((RuntimeArray*)L_12)->max_length))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___ctx2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		int32_t L_15 = V_0;
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, 2)), NULL);
		RuntimeObject* L_16 = ___d0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_16, L_17, 0, ((int32_t)(((RuntimeArray*)L_18)->max_length)));
	}

IL_0046:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Encode24(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Encode24_m47AFB52CFD5A3590C75700F4C4310A9584FD84B4 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs1;
		int32_t L_1 = ___off2;
		uint32_t L_2 = ___n0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs1;
		int32_t L_4 = ___off2;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		___off2 = L_5;
		uint32_t L_6 = ___n0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_6>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___bs1;
		int32_t L_8 = ___off2;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		___off2 = L_9;
		uint32_t L_10 = ___n0;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Encode32(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Encode32_m4BD8A0B584B3DBE332B16FCEB92924FAA50E22C0 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs1;
		int32_t L_1 = ___off2;
		uint32_t L_2 = ___n0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs1;
		int32_t L_4 = ___off2;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		___off2 = L_5;
		uint32_t L_6 = ___n0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_6>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___bs1;
		int32_t L_8 = ___off2;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		___off2 = L_9;
		uint32_t L_10 = ___n0;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bs1;
		int32_t L_12 = ___off2;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		___off2 = L_13;
		uint32_t L_14 = ___n0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_14>>((int32_t)24)))));
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Encode56(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Encode56_m9DE3CA5E60288B97CF60684DD91722D5211254D9 (uint64_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ___n0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bs1;
		int32_t L_2 = ___off2;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_Encode32_m4BD8A0B584B3DBE332B16FCEB92924FAA50E22C0(((int32_t)(uint32_t)L_0), L_1, L_2, NULL);
		uint64_t L_3 = ___n0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bs1;
		int32_t L_5 = ___off2;
		Ed25519_Encode24_m47AFB52CFD5A3590C75700F4C4310A9584FD84B4(((int32_t)(uint32_t)((int64_t)((uint64_t)L_3>>((int32_t)32)))), L_4, ((int32_t)il2cpp_codegen_add(L_5, 4)), NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::EncodePoint(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed25519_EncodePoint_mB7C63C580B86BE9146E28FE4B1DD03976551DB08 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___p0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r1, int32_t ___rOff2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_1 = L_1;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_2 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___z_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		X25519Field_Inv_m4792412BBDCF26668446048E8ECA5D4242FE0FC5(L_3, L_4, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_5 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = L_5->___x_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_6, L_7, L_8, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_9 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___y_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_10, L_11, L_12, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		X25519Field_Normalize_mD79E8B8BA9EA42005EC0D8D4A82FA7080BACE52B(L_13, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		X25519Field_Normalize_mD79E8B8BA9EA42005EC0D8D4A82FA7080BACE52B(L_14, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = Ed25519_CheckPoint_m13C787254C4868B7D8D6E570C0375011B37FBE43(L_15, L_16, NULL);
		V_2 = L_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___r1;
		int32_t L_20 = ___rOff2;
		X25519Field_Encode_m9217D612A39341313A0932B0463C2A5ED0824F34(L_18, L_19, L_20, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___r1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = L_21;
		V_3 = L_22;
		int32_t L_23 = ___rOff2;
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_23, ((int32_t)32))), 1));
		V_4 = L_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_3;
		intptr_t L_26 = V_4;
		intptr_t L_27 = L_26;
		uint8_t L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_0;
		int32_t L_30 = 0;
		int32_t L_31 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_28|((int32_t)(uint8_t)((int32_t)(((int32_t)(L_31&1))<<7)))))));
		int32_t L_32 = V_2;
		return L_32;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::GeneratePrivateKey(Org.BouncyCastle.Security.SecureRandom,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_GeneratePrivateKey_mDF82603689C6BA25521A3ABABA274F5413A999CF (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k1, const RuntimeMethod* method) 
{
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_0 = ___random0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___k1;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_0, L_1);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::GeneratePublicKey(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_GeneratePublicKey_mD5A2AEC0E41A487A9629CF6D58DAEC9CCD5B1BF2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Ed25519_CreateDigest_m31CD49A015EBEE3D41D363280F25B714A9D11857(NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::GetDigestSize() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		RuntimeObject* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___sk0;
		int32_t L_6 = ___skOff1;
		int32_t L_7 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___SecretKeySize_20;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7);
		RuntimeObject* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		int32_t L_10;
		L_10 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_8, L_9, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_2 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		Ed25519_PruneScalar_mEAD888D3885CC33E89167694F9E52AD2A014B0AD(L_12, 0, L_13, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___pk2;
		int32_t L_16 = ___pkOff3;
		Ed25519_ScalarMultBaseEncoded_mC7F8AEBF8D2BF8DD992BB23E63EB6491600F620C(L_14, L_15, L_16, NULL);
		return;
	}
}
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::GetWindow4(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed25519_GetWindow4_mCA4D46BA64261008E33678B2BC9ACC56E35971E2 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___n1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___n1;
		V_0 = ((int32_t)((uint32_t)L_0>>3));
		int32_t L_1 = ___n1;
		V_1 = ((int32_t)(((int32_t)(L_1&7))<<2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___x0;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = V_1;
		return ((int32_t)(((int32_t)((uint32_t)L_5>>((int32_t)(L_6&((int32_t)31)))))&((int32_t)15)));
	}
}
// System.SByte[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::GetWnafVar(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Ed25519_GetWnafVar_m4676B2ACE1A0F74BE94FB10DD29A1E070499B249 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___n0, int32_t ___width1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_5 = NULL;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		V_1 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = V_0;
		V_2 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		V_3 = 8;
		goto IL_0033;
	}

IL_0012:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___n0;
		int32_t L_3 = V_3;
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_4 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		int32_t L_7 = V_2;
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		V_2 = L_8;
		uint32_t L_9 = V_4;
		uint32_t L_10 = V_1;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_9>>((int32_t)16)))|((int32_t)((int32_t)L_10<<((int32_t)16))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		int32_t L_12 = V_2;
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		V_2 = L_13;
		uint32_t L_14 = V_4;
		uint32_t L_15 = L_14;
		V_1 = L_15;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)L_15);
	}

IL_0033:
	{
		int32_t L_16 = V_3;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		V_3 = L_17;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_18 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var, (uint32_t)((int32_t)253));
		V_5 = L_18;
		int32_t L_19 = ___width1;
		V_6 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_19));
		V_7 = 0;
		V_8 = 0;
		V_9 = 0;
		goto IL_00bd;
	}

IL_0058:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_0;
		int32_t L_21 = V_9;
		int32_t L_22 = L_21;
		uint32_t L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_10 = L_23;
		goto IL_00aa;
	}

IL_0060:
	{
		uint32_t L_24 = V_10;
		int32_t L_25 = V_8;
		V_11 = ((int32_t)((uint32_t)L_24>>((int32_t)(L_25&((int32_t)31)))));
		uint32_t L_26 = V_11;
		V_12 = ((int32_t)((int32_t)L_26&1));
		uint32_t L_27 = V_12;
		uint32_t L_28 = V_7;
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_29 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		goto IL_00aa;
	}

IL_007e:
	{
		uint32_t L_30 = V_11;
		int32_t L_31 = V_6;
		V_13 = ((int32_t)(((int32_t)((int32_t)L_30|1))<<((int32_t)(L_31&((int32_t)31)))));
		uint32_t L_32 = V_13;
		V_7 = ((int32_t)((uint32_t)L_32>>((int32_t)31)));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_33 = V_5;
		int32_t L_34 = V_9;
		int32_t L_35 = V_8;
		uint32_t L_36 = V_13;
		int32_t L_37 = V_6;
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)(L_34<<4)), L_35))), (int8_t)((int8_t)((int32_t)((int32_t)L_36>>((int32_t)(L_37&((int32_t)31)))))));
		int32_t L_38 = V_8;
		int32_t L_39 = ___width1;
		V_8 = ((int32_t)il2cpp_codegen_add(L_38, L_39));
	}

IL_00aa:
	{
		int32_t L_40 = V_8;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)16))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_41 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_42, ((int32_t)16)));
	}

IL_00bd:
	{
		int32_t L_43 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_0;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_45 = V_5;
		return L_45;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ImplSign(Org.BouncyCastle.Crypto.IDigest,System.Byte[],System.Byte[],System.Byte[],System.Int32,System.Byte[],System.Byte,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ImplSign_m49A12C71F870EEC59398D0E2B20A74B671F50488 (RuntimeObject* ___d0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___h1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk3, int32_t ___pkOff4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx5, uint8_t ___phflag6, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m7, int32_t ___mOff8, int32_t ___mLen9, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig10, int32_t ___sigOff11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___d0;
		uint8_t L_1 = ___phflag6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___ctx5;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_Dom2_mD613F8A1AF5B5582F08B901D02F63991CA82862E(L_0, L_1, L_2, NULL);
		RuntimeObject* L_3 = ___d0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___h1;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_3, L_4, ((int32_t)32), ((int32_t)32));
		RuntimeObject* L_5 = ___d0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___m7;
		int32_t L_7 = ___mOff8;
		int32_t L_8 = ___mLen9;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8);
		RuntimeObject* L_9 = ___d0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___h1;
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_9, L_10, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___h1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = Ed25519_ReduceScalar_mCA90FD3ED1419421E24436D936D212D0AEC8D795(L_12, NULL);
		V_0 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_1 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		Ed25519_ScalarMultBaseEncoded_mC7F8AEBF8D2BF8DD992BB23E63EB6491600F620C(L_15, L_16, 0, NULL);
		RuntimeObject* L_17 = ___d0;
		uint8_t L_18 = ___phflag6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___ctx5;
		Ed25519_Dom2_mD613F8A1AF5B5582F08B901D02F63991CA82862E(L_17, L_18, L_19, NULL);
		RuntimeObject* L_20 = ___d0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_1;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_20, L_21, 0, ((int32_t)32));
		RuntimeObject* L_22 = ___d0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___pk3;
		int32_t L_24 = ___pkOff4;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_22, L_23, L_24, ((int32_t)32));
		RuntimeObject* L_25 = ___d0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___m7;
		int32_t L_27 = ___mOff8;
		int32_t L_28 = ___mLen9;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_25, L_26, L_27, L_28);
		RuntimeObject* L_29 = ___d0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___h1;
		int32_t L_31;
		L_31 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_29, L_30, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___h1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = Ed25519_ReduceScalar_mCA90FD3ED1419421E24436D936D212D0AEC8D795(L_32, NULL);
		V_2 = L_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___s2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37;
		L_37 = Ed25519_CalculateS_mAA2636B38DB61BC82D238D80C7ECF898674E3BA2(L_34, L_35, L_36, NULL);
		V_3 = L_37;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___sig10;
		int32_t L_40 = ___sigOff11;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_38, 0, (RuntimeArray*)L_39, L_40, ((int32_t)32), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___sig10;
		int32_t L_43 = ___sigOff11;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_41, 0, (RuntimeArray*)L_42, ((int32_t)il2cpp_codegen_add(L_43, ((int32_t)32))), ((int32_t)32), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ImplSign(System.Byte[],System.Int32,System.Byte[],System.Byte,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ImplSign_m53C1D8DA2ABDA814927B245859EDB4FA758DDC3B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx2, uint8_t ___phflag3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m4, int32_t ___mOff5, int32_t ___mLen6, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig7, int32_t ___sigOff8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___ctx2;
		uint8_t L_1 = ___phflag3;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Ed25519_CheckContextVar_m619215BB6F89A7D8BD285C0D24AC97D55913FC5E(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_ImplSign_m53C1D8DA2ABDA814927B245859EDB4FA758DDC3B_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Ed25519_CreateDigest_m31CD49A015EBEE3D41D363280F25B714A9D11857(NULL);
		V_0 = L_4;
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::GetDigestSize() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		RuntimeObject* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___sk0;
		int32_t L_10 = ___skOff1;
		int32_t L_11 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___SecretKeySize_20;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_8, L_9, L_10, L_11);
		RuntimeObject* L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_12, L_13, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_2 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_2;
		Ed25519_PruneScalar_mEAD888D3885CC33E89167694F9E52AD2A014B0AD(L_16, 0, L_17, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_3 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_3;
		Ed25519_ScalarMultBaseEncoded_mC7F8AEBF8D2BF8DD992BB23E63EB6491600F620C(L_19, L_20, 0, NULL);
		RuntimeObject* L_21 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___ctx2;
		uint8_t L_26 = ___phflag3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___m4;
		int32_t L_28 = ___mOff5;
		int32_t L_29 = ___mLen6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___sig7;
		int32_t L_31 = ___sigOff8;
		Ed25519_ImplSign_m49A12C71F870EEC59398D0E2B20A74B671F50488(L_21, L_22, L_23, L_24, 0, L_25, L_26, L_27, L_28, L_29, L_30, L_31, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ImplSign(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Byte,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ImplSign_m3CE2F3B4F80278E00756C8729A70727B81ECC06B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, uint8_t ___phflag5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m6, int32_t ___mOff7, int32_t ___mLen8, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig9, int32_t ___sigOff10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___ctx4;
		uint8_t L_1 = ___phflag5;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Ed25519_CheckContextVar_m619215BB6F89A7D8BD285C0D24AC97D55913FC5E(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_ImplSign_m3CE2F3B4F80278E00756C8729A70727B81ECC06B_RuntimeMethod_var)));
	}

IL_0016:
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Ed25519_CreateDigest_m31CD49A015EBEE3D41D363280F25B714A9D11857(NULL);
		V_0 = L_4;
		RuntimeObject* L_5 = V_0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::GetDigestSize() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		RuntimeObject* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___sk0;
		int32_t L_10 = ___skOff1;
		int32_t L_11 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___SecretKeySize_20;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_8, L_9, L_10, L_11);
		RuntimeObject* L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_12, L_13, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_2 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_2;
		Ed25519_PruneScalar_mEAD888D3885CC33E89167694F9E52AD2A014B0AD(L_16, 0, L_17, NULL);
		RuntimeObject* L_18 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___pk2;
		int32_t L_22 = ___pkOff3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___ctx4;
		uint8_t L_24 = ___phflag5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___m6;
		int32_t L_26 = ___mOff7;
		int32_t L_27 = ___mLen8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___sig9;
		int32_t L_29 = ___sigOff10;
		Ed25519_ImplSign_m49A12C71F870EEC59398D0E2B20A74B671F50488(L_18, L_19, L_20, L_21, L_22, L_23, L_24, L_25, L_26, L_27, L_28, L_29, NULL);
		return;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ImplVerify(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Byte,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_ImplVerify_m58324B32C188FC7A710334E38086A0D6B9E600A8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig0, int32_t ___sigOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, uint8_t ___phflag5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m6, int32_t ___mOff7, int32_t ___mLen8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* V_8 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___ctx4;
		uint8_t L_1 = ___phflag5;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Ed25519_CheckContextVar_m619215BB6F89A7D8BD285C0D24AC97D55913FC5E(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_ImplVerify_m58324B32C188FC7A710334E38086A0D6B9E600A8_RuntimeMethod_var)));
	}

IL_0016:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___sig0;
		int32_t L_5 = ___sigOff1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = Ed25519_Copy_m928ECA90B3C51F5FEE5D91346FE7DB92766D1BD7(L_4, L_5, ((int32_t)32), NULL);
		V_0 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___sig0;
		int32_t L_8 = ___sigOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = Ed25519_Copy_m928ECA90B3C51F5FEE5D91346FE7DB92766D1BD7(L_7, ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)32))), ((int32_t)32), NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		bool L_11;
		L_11 = Ed25519_CheckPointVar_m81418D3FA21F905D873BD4C39A082C6D0715E527(L_10, NULL);
		if (L_11)
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0037:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_2 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Ed25519_CheckScalarVar_m1C500E6BBD59BAE349B7546776B0AE8495356D01(L_13, L_14, NULL);
		if (L_15)
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0049:
	{
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_16 = (PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5*)il2cpp_codegen_object_new(PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5_il2cpp_TypeInfo_var);
		PointAffine__ctor_m9CEF8F7295DCDFD2FFFEB47D6BEFE3DB551C2E1E(L_16, NULL);
		V_3 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___pk2;
		int32_t L_18 = ___pkOff3;
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_19 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Ed25519_DecodePointVar_m6EE29823C3966A4E6BA4B898CD1AB62D0D978784(L_17, L_18, (bool)1, L_19, NULL);
		if (L_20)
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_005c:
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		RuntimeObject* L_21;
		L_21 = Ed25519_CreateDigest_m31CD49A015EBEE3D41D363280F25B714A9D11857(NULL);
		V_4 = L_21;
		RuntimeObject* L_22 = V_4;
		int32_t L_23;
		L_23 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::GetDigestSize() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_23);
		V_5 = L_24;
		RuntimeObject* L_25 = V_4;
		uint8_t L_26 = ___phflag5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___ctx4;
		Ed25519_Dom2_mD613F8A1AF5B5582F08B901D02F63991CA82862E(L_25, L_26, L_27, NULL);
		RuntimeObject* L_28 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_0;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_28, L_29, 0, ((int32_t)32));
		RuntimeObject* L_30 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___pk2;
		int32_t L_32 = ___pkOff3;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_30, L_31, L_32, ((int32_t)32));
		RuntimeObject* L_33 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___m6;
		int32_t L_35 = ___mOff7;
		int32_t L_36 = ___mLen8;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_33, L_34, L_35, L_36);
		RuntimeObject* L_37 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_5;
		int32_t L_39;
		L_39 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_37, L_38, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41;
		L_41 = Ed25519_ReduceScalar_mCA90FD3ED1419421E24436D936D212D0AEC8D795(L_40, NULL);
		V_6 = L_41;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_7 = L_42;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_7;
		Ed25519_DecodeScalar_m420D0E8864965383EE73A0F43ABDAE269E740110(L_43, 0, L_44, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_45 = (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374*)il2cpp_codegen_object_new(PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var);
		PointAccum__ctor_m02F2BD460E06C5F956372EBC95EA93A876B563D0(L_45, NULL);
		V_8 = L_45;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_7;
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_48 = V_3;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_49 = V_8;
		Ed25519_ScalarMultStrausVar_mC46D3DD4145DDEF555DCB6B5F07E544E3111B634(L_46, L_47, L_48, L_49, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_9 = L_50;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_51 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_9;
		int32_t L_53;
		L_53 = Ed25519_EncodePoint_mB7C63C580B86BE9146E28FE4B1DD03976551DB08(L_51, L_52, 0, NULL);
		if (!L_53)
		{
			goto IL_00f5;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = Arrays_AreEqual_mF00C3B51F7520663ADB08744EA3A1995B9421C18(L_54, L_55, NULL);
		return L_56;
	}

IL_00f5:
	{
		return (bool)0;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::IsNeutralElementVar(System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_IsNeutralElementVar_mEA514555D1028D932DCCFED344E94668786C2019 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = X25519Field_IsZeroVar_m7BA86D249183555D19C6C5078C85FFA08320E995(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = X25519Field_IsOneVar_m87DC3277758DE6EFE8C7715D2AF9A895B3881EF4(L_2, NULL);
		return L_3;
	}

IL_000f:
	{
		return (bool)0;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::IsNeutralElementVar(System.Int32[],System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_IsNeutralElementVar_m7592FF2FD6D37D96DF3EC749C4D12B7EDAFFA51E (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = X25519Field_IsZeroVar_m7BA86D249183555D19C6C5078C85FFA08320E995(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___y1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___z2;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = X25519Field_AreEqualVar_m5E1536D9FB39D07915860A769BD6BB118DBF5D7A(L_2, L_3, NULL);
		return L_4;
	}

IL_0010:
	{
		return (bool)0;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointAdd(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAdd_mBAF06038F245EE83C79DED4CFEFB5291EBA336E4 (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___p0, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___r1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_3 = L_3;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_4 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___u_3;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_5 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7;
		L_7 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_6 = L_7;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_8 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->___v_4;
		V_7 = L_9;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_10 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->___y_1;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_12 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12->___x_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_11, L_13, L_14, L_15, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_16 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = L_16->___y_1;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_18 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18->___x_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_2;
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_17, L_19, L_20, L_21, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_0;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_22, L_23, L_24, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_1;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_25, L_26, L_27, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_28 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = L_28->___u_3;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_30 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = L_30->___v_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_2;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_29, L_31, L_32, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_2;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_34 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = L_34->___t_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_33, L_35, L_36, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d2_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_2;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_37, L_38, L_39, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_40 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = L_40->___z_2;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_42 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = L_42->___z_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_3;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_41, L_43, L_44, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_3;
		X25519Field_Add_mF78371B3ADFE521222F9C2B249EBBD7AEB33EE51(L_45, L_46, L_47, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_4;
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_48, L_49, L_50, L_51, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_5;
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_52, L_53, L_54, L_55, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_6;
		X25519Field_Carry_m5BF572BF9177BCBE7416A6DF3324DD15329C6043(L_56, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_5;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_59 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = L_59->___x_0;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_57, L_58, L_60, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_7;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_63 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = L_63->___y_1;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_61, L_62, L_64, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = V_6;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_67 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = L_67->___z_2;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_65, L_66, L_68, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointAdd(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAdd_m828F767EC553F02B84A3BCC717A5CB32AB45D145 (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___p0, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___r1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_3 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4;
		L_4 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_4 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5;
		L_5 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_5 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_6 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7;
		L_7 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_7 = L_7;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_8 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->___y_1;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_10 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->___x_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_9, L_11, L_12, L_13, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_14 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = L_14->___y_1;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_16 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = L_16->___x_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_2;
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_15, L_17, L_18, L_19, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_20, L_21, L_22, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_23, L_24, L_25, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_26 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = L_26->___t_3;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_28 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = L_28->___t_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_2;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_27, L_29, L_30, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d2_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_2;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_31, L_32, L_33, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_34 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = L_34->___z_2;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_36 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = L_36->___z_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_3;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_35, L_37, L_38, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_3;
		X25519Field_Add_mF78371B3ADFE521222F9C2B249EBBD7AEB33EE51(L_39, L_40, L_41, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_4;
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_42, L_43, L_44, L_45, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_5;
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_46, L_47, L_48, L_49, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = V_6;
		X25519Field_Carry_m5BF572BF9177BCBE7416A6DF3324DD15329C6043(L_50, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_5;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_53 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = L_53->___x_0;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_51, L_52, L_54, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_7;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_57 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = L_57->___y_1;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_55, L_56, L_58, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_6;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_61 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = L_61->___z_2;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_59, L_60, L_62, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = V_7;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_65 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = L_65->___t_3;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_63, L_64, L_66, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointAddVar(System.Boolean,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAddVar_m53AB3C9F519A0B44A0B5C1ADF7B96A8524E1FBA6 (bool ___negate0, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___p1, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___r2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_8 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_9 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_11 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_3 = L_3;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_4 = ___r2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___u_3;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_5 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7;
		L_7 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_6 = L_7;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_8 = ___r2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->___v_4;
		V_7 = L_9;
		bool L_10 = ___negate0;
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_3;
		V_8 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_2;
		V_9 = L_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_6;
		V_10 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_5;
		V_11 = L_14;
		goto IL_0057;
	}

IL_0049:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_2;
		V_8 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_3;
		V_9 = L_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_5;
		V_10 = L_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_6;
		V_11 = L_18;
	}

IL_0057:
	{
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_19 = ___r2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = L_19->___y_1;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_21 = ___r2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = L_21->___x_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_20, L_22, L_23, L_24, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_25 = ___p1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = L_25->___y_1;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_27 = ___p1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = L_27->___x_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_8;
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_26, L_28, L_29, L_30, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_31, L_32, L_33, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_34, L_35, L_36, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_37 = ___r2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = L_37->___u_3;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_39 = ___r2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = L_39->___v_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_2;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_38, L_40, L_41, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_2;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_43 = ___p1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = L_43->___t_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_2;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_42, L_44, L_45, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d2_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_2;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_46, L_47, L_48, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_49 = ___r2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = L_49->___z_2;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_51 = ___p1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = L_51->___z_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_3;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_50, L_52, L_53, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_3;
		X25519Field_Add_mF78371B3ADFE521222F9C2B249EBBD7AEB33EE51(L_54, L_55, L_56, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_4;
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_57, L_58, L_59, L_60, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = V_10;
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_61, L_62, L_63, L_64, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_11;
		X25519Field_Carry_m5BF572BF9177BCBE7416A6DF3324DD15329C6043(L_65, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_5;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_68 = ___r2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = L_68->___x_0;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_66, L_67, L_69, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_71 = V_7;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_72 = ___r2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = L_72->___y_1;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_70, L_71, L_73, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = V_6;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_76 = ___r2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = L_76->___z_2;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_74, L_75, L_77, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointAddVar(System.Boolean,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAddVar_mBA8C9C87048F5E1ADCCD94BB10132B7EB5D25173 (bool ___negate0, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___p1, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___q2, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___r3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_8 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_9 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_11 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_3 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4;
		L_4 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_4 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5;
		L_5 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_5 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_6 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7;
		L_7 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_7 = L_7;
		bool L_8 = ___negate0;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_3;
		V_8 = L_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_2;
		V_9 = L_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_6;
		V_10 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_5;
		V_11 = L_12;
		goto IL_0055;
	}

IL_0047:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_2;
		V_8 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_3;
		V_9 = L_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_5;
		V_10 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_6;
		V_11 = L_16;
	}

IL_0055:
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_17 = ___p1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17->___y_1;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_19 = ___p1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = L_19->___x_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_18, L_20, L_21, L_22, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_23 = ___q2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = L_23->___y_1;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_25 = ___q2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = L_25->___x_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_8;
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_24, L_26, L_27, L_28, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_29, L_30, L_31, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_32, L_33, L_34, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_35 = ___p1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = L_35->___t_3;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_37 = ___q2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = L_37->___t_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_2;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_36, L_38, L_39, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d2_28;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_2;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_40, L_41, L_42, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_43 = ___p1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = L_43->___z_2;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_45 = ___q2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = L_45->___z_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_3;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_44, L_46, L_47, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = V_3;
		X25519Field_Add_mF78371B3ADFE521222F9C2B249EBBD7AEB33EE51(L_48, L_49, L_50, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = V_4;
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_51, L_52, L_53, L_54, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_10;
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_55, L_56, L_57, L_58, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_11;
		X25519Field_Carry_m5BF572BF9177BCBE7416A6DF3324DD15329C6043(L_59, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = V_5;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_62 = ___r3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = L_62->___x_0;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_60, L_61, L_63, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_7;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_66 = ___r3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = L_66->___y_1;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_64, L_65, L_67, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = V_6;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_70 = ___r3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_71 = L_70->___z_2;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_68, L_69, L_71, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = V_7;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_74 = ___r3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = L_74->___t_3;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_72, L_73, L_75, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointAddPrecomp(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointPrecomp,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAddPrecomp_mDAD885FEE91E748327B2CAD7C937EEEAF25C6C00 (PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* ___p0, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___r1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_2 = L_2;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_3 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->___u_3;
		V_3 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5;
		L_5 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_5 = L_6;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_7 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___v_4;
		V_6 = L_8;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_9 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___y_1;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_11 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11->___x_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_0;
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_10, L_12, L_13, L_14, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_16 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = L_16->___ymx_h_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_0;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_15, L_17, L_18, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_1;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_20 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = L_20->___ypx_h_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_1;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_19, L_21, L_22, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_23 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = L_23->___u_3;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_25 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = L_25->___v_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_24, L_26, L_27, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_2;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_29 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = L_29->___xyd_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_2;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_28, L_30, L_31, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_3;
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_32, L_33, L_34, L_35, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_36 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = L_36->___z_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_4;
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_37, L_38, L_39, L_40, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_5;
		X25519Field_Carry_m5BF572BF9177BCBE7416A6DF3324DD15329C6043(L_41, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_4;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_44 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = L_44->___x_0;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_42, L_43, L_45, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_6;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_48 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = L_48->___y_1;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_46, L_47, L_49, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_5;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_52 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = L_52->___z_2;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_50, L_51, L_53, NULL);
		return;
	}
}
// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointCopy(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* Ed25519_PointCopy_mA45AFAF4DF86627A7B1BCF2F39F7EBFF73DD1CF1 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_0 = NULL;
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_0 = (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)il2cpp_codegen_object_new(PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830(L_0, NULL);
		V_0 = L_0;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_1 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1->___x_0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_2, 0, L_4, 0, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_5 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = L_5->___y_1;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___y_1;
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_6, 0, L_8, 0, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_9 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___z_2;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_11 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11->___z_2;
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_10, 0, L_12, 0, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_13 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13->___u_3;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_15 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15->___v_4;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_17 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17->___t_3;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_14, L_16, L_18, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_19 = V_0;
		return L_19;
	}
}
// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointCopy(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAffine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* Ed25519_PointCopy_m47EB550B4471EDC24EFEC203EDB132DE857EEBDA (PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_0 = NULL;
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_0 = (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)il2cpp_codegen_object_new(PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830(L_0, NULL);
		V_0 = L_0;
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_1 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1->___x_0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_2, 0, L_4, 0, NULL);
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_5 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = L_5->___y_1;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___y_1;
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_6, 0, L_8, 0, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointExtendXY_m13D77B36086F3ADCB44AE34E7DEA8A45B4D8D2A5(L_9, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_10 = V_0;
		return L_10;
	}
}
// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointCopy(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* Ed25519_PointCopy_mB01A380A5A9A11DA575338AA2EA304C4320D34BF (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_0 = NULL;
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_0 = (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)il2cpp_codegen_object_new(PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830(L_0, NULL);
		V_0 = L_0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_1 = ___p0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointCopy_m06874BE265D4E7713D6BE6B51CE9914185D54485(L_1, L_2, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_3 = V_0;
		return L_3;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointCopy(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAffine,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointCopy_mA0B87EA7B90F15562C748A379B66DB0A72375A90 (PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* ___p0, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___r1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_0 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0->___x_0;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_2 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_1, 0, L_3, 0, NULL);
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_4 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___y_1;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_6 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___y_1;
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_5, 0, L_7, 0, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_8 = ___r1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointExtendXY_m2AE71A00993E1C138A123AE6288A5FFB58563642(L_8, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointCopy(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointCopy_m06874BE265D4E7713D6BE6B51CE9914185D54485 (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___p0, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___r1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_0 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0->___x_0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_2 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_1, 0, L_3, 0, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_4 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___y_1;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_6 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___y_1;
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_5, 0, L_7, 0, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_8 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->___z_2;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_10 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->___z_2;
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_9, 0, L_11, 0, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_12 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12->___t_3;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_14 = ___r1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = L_14->___t_3;
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_13, 0, L_15, 0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointDouble(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointDouble_m8FD42D28454C7DC22C8A3563EB98658871BEFA40 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___r0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_2 = L_2;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_3 = ___r0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->___u_3;
		V_3 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5;
		L_5 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		V_5 = L_6;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_7 = ___r0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___v_4;
		V_6 = L_8;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_9 = ___r0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___x_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		X25519Field_Sqr_mD16DC4C60352DE4570CE78356310958DAF113A4A(L_10, L_11, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_12 = ___r0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12->___y_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		X25519Field_Sqr_mD16DC4C60352DE4570CE78356310958DAF113A4A(L_13, L_14, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_15 = ___r0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15->___z_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_2;
		X25519Field_Sqr_mD16DC4C60352DE4570CE78356310958DAF113A4A(L_16, L_17, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_2;
		X25519Field_Add_mF78371B3ADFE521222F9C2B249EBBD7AEB33EE51(L_18, L_19, L_20, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_5;
		X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_21, L_22, L_23, L_24, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_25 = ___r0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = L_25->___x_0;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_27 = ___r0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = L_27->___y_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_3;
		X25519Field_Add_mF78371B3ADFE521222F9C2B249EBBD7AEB33EE51(L_26, L_28, L_29, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_3;
		X25519Field_Sqr_mD16DC4C60352DE4570CE78356310958DAF113A4A(L_30, L_31, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_3;
		X25519Field_Sub_mD8217E553ED88B7253CA41F14DE8664C31306742(L_32, L_33, L_34, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_4;
		X25519Field_Add_mF78371B3ADFE521222F9C2B249EBBD7AEB33EE51(L_35, L_36, L_37, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_4;
		X25519Field_Carry_m5BF572BF9177BCBE7416A6DF3324DD15329C6043(L_38, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_4;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_41 = ___r0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = L_41->___x_0;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_39, L_40, L_42, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_6;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_45 = ___r0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = L_45->___y_1;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_43, L_44, L_46, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_5;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_49 = ___r0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = L_49->___z_2;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_47, L_48, L_50, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointExtendXY(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointExtendXY_m2AE71A00993E1C138A123AE6288A5FFB58563642 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_0 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0->___z_2;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_One_m512CEC0A8114ABC88FEB57DB58336DA86185AA56(L_1, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_2 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___x_0;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_4 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___u_3;
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_3, 0, L_5, 0, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_6 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___y_1;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_8 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->___v_4;
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_7, 0, L_9, 0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointExtendXY(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointExtendXY_m13D77B36086F3ADCB44AE34E7DEA8A45B4D8D2A5 (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_0 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0->___z_2;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_One_m512CEC0A8114ABC88FEB57DB58336DA86185AA56(L_1, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_2 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___x_0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_4 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___y_1;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_6 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___t_3;
		X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_3, L_5, L_7, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointLookup(System.Int32,System.Int32,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointPrecomp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointLookup_m6603B0371481D4A0A2D4EF01F7253F26806A641C (int32_t ___block0, int32_t ___index1, PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* ___p2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___block0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_0, 8)), 3)), ((int32_t)10)));
		V_1 = 0;
		goto IL_0062;
	}

IL_000d:
	{
		int32_t L_1 = V_1;
		int32_t L_2 = ___index1;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_1^L_2)), 1))>>((int32_t)31)));
		int32_t L_3 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase_32;
		int32_t L_5 = V_0;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_6 = ___p2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___ypx_h_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_CMov_mB65F643ED9909ECBDF57A27A3C351DFD2D5503B2(L_3, L_4, L_5, L_7, 0, NULL);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)10)));
		int32_t L_9 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase_32;
		int32_t L_11 = V_0;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_12 = ___p2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12->___ymx_h_1;
		X25519Field_CMov_mB65F643ED9909ECBDF57A27A3C351DFD2D5503B2(L_9, L_10, L_11, L_13, 0, NULL);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)10)));
		int32_t L_15 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase_32;
		int32_t L_17 = V_0;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_18 = ___p2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18->___xyd_2;
		X25519Field_CMov_mB65F643ED9909ECBDF57A27A3C351DFD2D5503B2(L_15, L_16, L_17, L_19, 0, NULL);
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, ((int32_t)10)));
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0062:
	{
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) < ((int32_t)8)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointLookup(System.UInt32[],System.Int32,System.Int32[],Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointLookup_m136C466D6417E40AC68D4E4D281CE193D78211B1 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___n1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___table2, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___r3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		int32_t L_1 = ___n1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = Ed25519_GetWindow4_mCA4D46BA64261008E33678B2BC9ACC56E35971E2(L_0, L_1, NULL);
		V_0 = L_2;
		uint32_t L_3 = V_0;
		V_1 = ((int32_t)(((int32_t)((uint32_t)L_3>>3))^1));
		uint32_t L_4 = V_0;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_4^((-L_5))))&7));
		V_3 = 0;
		V_4 = 0;
		goto IL_008a;
	}

IL_001c:
	{
		int32_t L_6 = V_3;
		int32_t L_7 = V_2;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_6^L_7)), 1))>>((int32_t)31)));
		int32_t L_8 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___table2;
		int32_t L_10 = V_4;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_11 = ___r3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_CMov_mB65F643ED9909ECBDF57A27A3C351DFD2D5503B2(L_8, L_9, L_10, L_12, 0, NULL);
		int32_t L_13 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)10)));
		int32_t L_14 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ___table2;
		int32_t L_16 = V_4;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_17 = ___r3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17->___y_1;
		X25519Field_CMov_mB65F643ED9909ECBDF57A27A3C351DFD2D5503B2(L_14, L_15, L_16, L_18, 0, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)10)));
		int32_t L_20 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ___table2;
		int32_t L_22 = V_4;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_23 = ___r3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = L_23->___z_2;
		X25519Field_CMov_mB65F643ED9909ECBDF57A27A3C351DFD2D5503B2(L_20, L_21, L_22, L_24, 0, NULL);
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, ((int32_t)10)));
		int32_t L_26 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ___table2;
		int32_t L_28 = V_4;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_29 = ___r3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = L_29->___t_3;
		X25519Field_CMov_mB65F643ED9909ECBDF57A27A3C351DFD2D5503B2(L_26, L_27, L_28, L_30, 0, NULL);
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, ((int32_t)10)));
		int32_t L_32 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_008a:
	{
		int32_t L_33 = V_3;
		if ((((int32_t)L_33) < ((int32_t)8)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_34 = V_1;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_35 = ___r3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = L_35->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_CNegate_mAD23F661AA46AF421AD0F3EEF9E931B84F728AB3(L_34, L_36, NULL);
		int32_t L_37 = V_1;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_38 = ___r3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = L_38->___t_3;
		X25519Field_CNegate_mAD23F661AA46AF421AD0F3EEF9E931B84F728AB3(L_37, L_39, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointLookup(System.Int32[],System.Int32,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointLookup_m3BC18429B09E0BBFE4FB1057F3DA65AADA9E2ECF (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___table0, int32_t ___index1, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___r2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___index1;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)40), L_0));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___table0;
		int32_t L_2 = V_0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_3 = ___r2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_1, L_2, L_4, 0, NULL);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)10)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___table0;
		int32_t L_7 = V_0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_8 = ___r2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->___y_1;
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_6, L_7, L_9, 0, NULL);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)10)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___table0;
		int32_t L_12 = V_0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_13 = ___r2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13->___z_2;
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_11, L_12, L_14, 0, NULL);
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)10)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___table0;
		int32_t L_17 = V_0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_18 = ___r2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18->___t_3;
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_16, L_17, L_19, 0, NULL);
		return;
	}
}
// System.Int32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointPrecompute(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAffine,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Ed25519_PointPrecompute_m9734506CCD4EDF47D0FC8388C659CBCA58B2A93E (PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* ___p0, int32_t ___count1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_0 = NULL;
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_0 = ___p0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_1;
		L_1 = Ed25519_PointCopy_m47EB550B4471EDC24EFEC203EDB132DE857EEBDA(L_0, NULL);
		V_0 = L_1;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_2 = V_0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_3;
		L_3 = Ed25519_PointCopy_mB01A380A5A9A11DA575338AA2EA304C4320D34BF(L_2, NULL);
		V_1 = L_3;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_4 = V_0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_5 = V_1;
		Ed25519_PointAdd_m828F767EC553F02B84A3BCC717A5CB32AB45D145(L_4, L_5, NULL);
		int32_t L_6 = ___count1;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7;
		L_7 = X25519Field_CreateTable_m98132439692BB823655C2E996EF23EC6DED84173(((int32_t)il2cpp_codegen_multiply(L_6, 4)), NULL);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
	}

IL_0023:
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->___x_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_2;
		int32_t L_11 = V_3;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_9, 0, L_10, L_11, NULL);
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, ((int32_t)10)));
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13->___y_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_2;
		int32_t L_16 = V_3;
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_14, 0, L_15, L_16, NULL);
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)10)));
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_18 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18->___z_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_2;
		int32_t L_21 = V_3;
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_19, 0, L_20, L_21, NULL);
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)10)));
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_23 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = L_23->___t_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_2;
		int32_t L_26 = V_3;
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_24, 0, L_25, L_26, NULL);
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)10)));
		int32_t L_28 = V_4;
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		V_4 = L_29;
		int32_t L_30 = ___count1;
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_0082;
		}
	}
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_31 = V_1;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_32 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointAdd_m828F767EC553F02B84A3BCC717A5CB32AB45D145(L_31, L_32, NULL);
		goto IL_0023;
	}

IL_0082:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_2;
		return L_33;
	}
}
// Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointPrecomputeVar(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* Ed25519_PointPrecomputeVar_m0C916BFD76D0E9FF12CB2EF545A8A7AD07848A39 (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___p0, int32_t ___count1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_0 = NULL;
	PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* V_1 = NULL;
	int32_t V_2 = 0;
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_3 = NULL;
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_0 = (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)il2cpp_codegen_object_new(PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830(L_0, NULL);
		V_0 = L_0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_1 = ___p0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_2 = ___p0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointAddVar_mBA8C9C87048F5E1ADCCD94BB10132B7EB5D25173((bool)0, L_1, L_2, L_3, NULL);
		int32_t L_4 = ___count1;
		PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_5 = (PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E*)(PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E*)SZArrayNew(PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_6 = V_1;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_7 = ___p0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_8;
		L_8 = Ed25519_PointCopy_mB01A380A5A9A11DA575338AA2EA304C4320D34BF(L_7, NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)L_8);
		V_2 = 1;
		goto IL_003e;
	}

IL_0023:
	{
		PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_9 = V_1;
		int32_t L_10 = V_2;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_13 = V_0;
		PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_14 = V_1;
		int32_t L_15 = V_2;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_16 = (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)il2cpp_codegen_object_new(PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830(L_16, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_17 = L_16;
		V_3 = L_17;
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)L_17);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_18 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointAddVar_mBA8C9C87048F5E1ADCCD94BB10132B7EB5D25173((bool)0, L_12, L_13, L_18, NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		int32_t L_21 = ___count1;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0023;
		}
	}
	{
		PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_22 = V_1;
		return L_22;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointSetNeutral(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointSetNeutral_m6920E08FA212EE00B490A48B730D725CBC7B2E43 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_0 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Zero_m618DE52BB25350422E8B1A5AAF7C8CFB9BB23459(L_1, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_2 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___y_1;
		X25519Field_One_m512CEC0A8114ABC88FEB57DB58336DA86185AA56(L_3, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_4 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___z_2;
		X25519Field_One_m512CEC0A8114ABC88FEB57DB58336DA86185AA56(L_5, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_6 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___u_3;
		X25519Field_Zero_m618DE52BB25350422E8B1A5AAF7C8CFB9BB23459(L_7, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_8 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->___v_4;
		X25519Field_One_m512CEC0A8114ABC88FEB57DB58336DA86185AA56(L_9, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PointSetNeutral(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointSetNeutral_m71A1BEF9DBF2B20D6E748D6DD191193A7C2DF35C (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_0 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Zero_m618DE52BB25350422E8B1A5AAF7C8CFB9BB23459(L_1, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_2 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___y_1;
		X25519Field_One_m512CEC0A8114ABC88FEB57DB58336DA86185AA56(L_3, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_4 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___z_2;
		X25519Field_One_m512CEC0A8114ABC88FEB57DB58336DA86185AA56(L_5, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_6 = ___p0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___t_3;
		X25519Field_Zero_m618DE52BB25350422E8B1A5AAF7C8CFB9BB23459(L_7, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Precompute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Precompute_m9D236FE3CAAAE11B19064B5BB6D6E0F3283C29DD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_0 = NULL;
	PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* V_4 = NULL;
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_5 = NULL;
	int32_t V_6 = 0;
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_7 = NULL;
	int32_t V_8 = 0;
	PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_14 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_15 = NULL;
	int32_t V_16 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_17 = NULL;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_20 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_21 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_22 = NULL;
	PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* V_23 = NULL;
	RuntimeObject* V_24 = NULL;
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_25 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompLock_30;
		RuntimeObject* L_1 = L_0;
		V_24 = L_1;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0352:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_24;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase_32;
				if (!L_3)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_035a;
			}

IL_0019_1:
			{
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_4 = (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)il2cpp_codegen_object_new(PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
				PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830(L_4, NULL);
				V_0 = L_4;
				il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___B_x_25;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_6 = V_0;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___x_0;
				il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
				X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_5, 0, L_7, 0, NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___B_y_26;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_9 = V_0;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___y_1;
				X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_8, 0, L_10, 0, NULL);
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_11 = V_0;
				Ed25519_PointExtendXY_m13D77B36086F3ADCB44AE34E7DEA8A45B4D8D2A5(L_11, NULL);
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_12 = V_0;
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_13;
				L_13 = Ed25519_PointPrecomputeVar_m0C916BFD76D0E9FF12CB2EF545A8A7AD07848A39(L_12, ((int32_t)32), NULL);
				((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBaseTable_31 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBaseTable_31), (void*)L_13);
				PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_14 = (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374*)il2cpp_codegen_object_new(PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var);
				PointAccum__ctor_m02F2BD460E06C5F956372EBC95EA93A876B563D0(L_14, NULL);
				V_1 = L_14;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___B_x_25;
				PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_16 = V_1;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = L_16->___x_0;
				X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_15, 0, L_17, 0, NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___B_y_26;
				PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_19 = V_1;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = L_19->___y_1;
				X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_18, 0, L_20, 0, NULL);
				PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_21 = V_1;
				Ed25519_PointExtendXY_m2AE71A00993E1C138A123AE6288A5FFB58563642(L_21, NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22;
				L_22 = X25519Field_CreateTable_m98132439692BB823655C2E996EF23EC6DED84173(((int32_t)192), NULL);
				((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase_32 = L_22;
				Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase_32), (void*)L_22);
				V_2 = 0;
				V_3 = 0;
				goto IL_0349_1;
			}

IL_009e_1:
			{
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_23 = (PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E*)(PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E*)SZArrayNew(PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E_il2cpp_TypeInfo_var, (uint32_t)4);
				V_4 = L_23;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_24 = (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)il2cpp_codegen_object_new(PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
				PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830(L_24, NULL);
				V_5 = L_24;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_25 = V_5;
				il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
				Ed25519_PointSetNeutral_m71A1BEF9DBF2B20D6E748D6DD191193A7C2DF35C(L_25, NULL);
				V_6 = 0;
				goto IL_0102_1;
			}

IL_00b9_1:
			{
				PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_26 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_27;
				L_27 = Ed25519_PointCopy_mA45AFAF4DF86627A7B1BCF2F39F7EBFF73DD1CF1(L_26, NULL);
				V_7 = L_27;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_28 = V_5;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_29 = V_7;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_30 = V_5;
				Ed25519_PointAddVar_mBA8C9C87048F5E1ADCCD94BB10132B7EB5D25173((bool)1, L_28, L_29, L_30, NULL);
				PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_31 = V_1;
				Ed25519_PointDouble_m8FD42D28454C7DC22C8A3563EB98658871BEFA40(L_31, NULL);
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_32 = V_4;
				int32_t L_33 = V_6;
				PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_34 = V_1;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_35;
				L_35 = Ed25519_PointCopy_mA45AFAF4DF86627A7B1BCF2F39F7EBFF73DD1CF1(L_34, NULL);
				ArrayElementTypeCheck (L_32, L_35);
				(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33), (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)L_35);
				int32_t L_36 = V_3;
				int32_t L_37 = V_6;
				if ((((int32_t)((int32_t)il2cpp_codegen_add(L_36, L_37))) == ((int32_t)((int32_t)10))))
				{
					goto IL_00fc_1;
				}
			}
			{
				V_8 = 1;
				goto IL_00f7_1;
			}

IL_00eb_1:
			{
				PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_38 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
				Ed25519_PointDouble_m8FD42D28454C7DC22C8A3563EB98658871BEFA40(L_38, NULL);
				int32_t L_39 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_39, 1));
			}

IL_00f7_1:
			{
				int32_t L_40 = V_8;
				if ((((int32_t)L_40) < ((int32_t)8)))
				{
					goto IL_00eb_1;
				}
			}

IL_00fc_1:
			{
				int32_t L_41 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_41, 1));
			}

IL_0102_1:
			{
				int32_t L_42 = V_6;
				if ((((int32_t)L_42) < ((int32_t)4)))
				{
					goto IL_00b9_1;
				}
			}
			{
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_43 = (PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E*)(PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E*)SZArrayNew(PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E_il2cpp_TypeInfo_var, (uint32_t)8);
				V_9 = L_43;
				V_10 = 0;
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_44 = V_9;
				int32_t L_45 = V_10;
				int32_t L_46 = L_45;
				V_10 = ((int32_t)il2cpp_codegen_add(L_46, 1));
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_47 = V_5;
				ArrayElementTypeCheck (L_44, L_47);
				(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46), (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)L_47);
				V_11 = 0;
				goto IL_016b_1;
			}

IL_0123_1:
			{
				int32_t L_48 = V_11;
				V_12 = ((int32_t)(1<<((int32_t)(L_48&((int32_t)31)))));
				V_13 = 0;
				goto IL_015f_1;
			}

IL_0131_1:
			{
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_49 = V_9;
				int32_t L_50 = V_10;
				int32_t L_51 = V_12;
				int32_t L_52 = ((int32_t)il2cpp_codegen_subtract(L_50, L_51));
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_53 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_54 = V_4;
				int32_t L_55 = V_11;
				int32_t L_56 = L_55;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_57 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_58 = V_9;
				int32_t L_59 = V_10;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_60 = (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)il2cpp_codegen_object_new(PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
				PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830(L_60, NULL);
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_61 = L_60;
				V_25 = L_61;
				ArrayElementTypeCheck (L_58, L_61);
				(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59), (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)L_61);
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_62 = V_25;
				il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
				Ed25519_PointAddVar_mBA8C9C87048F5E1ADCCD94BB10132B7EB5D25173((bool)0, L_53, L_57, L_62, NULL);
				int32_t L_63 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_63, 1));
				int32_t L_64 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_64, 1));
			}

IL_015f_1:
			{
				int32_t L_65 = V_13;
				int32_t L_66 = V_12;
				if ((((int32_t)L_65) < ((int32_t)L_66)))
				{
					goto IL_0131_1;
				}
			}
			{
				int32_t L_67 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_67, 1));
			}

IL_016b_1:
			{
				int32_t L_68 = V_11;
				if ((((int32_t)L_68) < ((int32_t)3)))
				{
					goto IL_0123_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69;
				L_69 = X25519Field_CreateTable_m98132439692BB823655C2E996EF23EC6DED84173(8, NULL);
				V_14 = L_69;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70;
				L_70 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
				V_15 = L_70;
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_71 = V_9;
				int32_t L_72 = 0;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_73 = (L_71)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = L_73->___z_2;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = V_15;
				X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_74, 0, L_75, 0, NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = V_15;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = V_14;
				X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_76, 0, L_77, 0, NULL);
				V_16 = 0;
				goto IL_01c3_1;
			}

IL_01a1_1:
			{
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = V_15;
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_79 = V_9;
				int32_t L_80 = V_16;
				int32_t L_81 = L_80;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_82 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = L_82->___z_2;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = V_15;
				il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
				X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_78, L_83, L_84, NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = V_15;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = V_14;
				int32_t L_87 = V_16;
				X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_85, 0, L_86, ((int32_t)il2cpp_codegen_multiply(L_87, ((int32_t)10))), NULL);
			}

IL_01c3_1:
			{
				int32_t L_88 = V_16;
				int32_t L_89 = ((int32_t)il2cpp_codegen_add(L_88, 1));
				V_16 = L_89;
				if ((((int32_t)L_89) < ((int32_t)8)))
				{
					goto IL_01a1_1;
				}
			}
			{
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_90 = V_15;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = V_15;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = V_15;
				il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
				X25519Field_Add_mF78371B3ADFE521222F9C2B249EBBD7AEB33EE51(L_90, L_91, L_92, NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = V_15;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94 = V_15;
				X25519Field_InvVar_m8C38910C6ADAC2876E292877E4B4B4907FB7DDE7(L_93, L_94, NULL);
				int32_t L_95 = V_16;
				V_16 = ((int32_t)il2cpp_codegen_subtract(L_95, 1));
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_96;
				L_96 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
				V_17 = L_96;
				goto IL_0235_1;
			}

IL_01f0_1:
			{
				int32_t L_97 = V_16;
				int32_t L_98 = L_97;
				V_16 = ((int32_t)il2cpp_codegen_subtract(L_98, 1));
				V_18 = L_98;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_99 = V_14;
				int32_t L_100 = V_16;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = V_17;
				il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
				X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_99, ((int32_t)il2cpp_codegen_multiply(L_100, ((int32_t)10))), L_101, 0, NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = V_17;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = V_15;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = V_17;
				X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_102, L_103, L_104, NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = V_17;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = V_14;
				int32_t L_107 = V_18;
				X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_105, 0, L_106, ((int32_t)il2cpp_codegen_multiply(L_107, ((int32_t)10))), NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = V_15;
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_109 = V_9;
				int32_t L_110 = V_18;
				int32_t L_111 = L_110;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_112 = (L_109)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_111));
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = L_112->___z_2;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_114 = V_15;
				X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_108, L_113, L_114, NULL);
			}

IL_0235_1:
			{
				int32_t L_115 = V_16;
				if ((((int32_t)L_115) > ((int32_t)0)))
				{
					goto IL_01f0_1;
				}
			}
			{
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_116 = V_15;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = V_14;
				il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
				X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_116, 0, L_117, 0, NULL);
				V_19 = 0;
				goto IL_033d_1;
			}

IL_024d_1:
			{
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_118 = V_9;
				int32_t L_119 = V_19;
				int32_t L_120 = L_119;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_121 = (L_118)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_120));
				V_20 = L_121;
				il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_122;
				L_122 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
				V_21 = L_122;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123;
				L_123 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
				V_22 = L_123;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_124 = V_14;
				int32_t L_125 = V_19;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_126 = V_22;
				X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_124, ((int32_t)il2cpp_codegen_multiply(L_125, ((int32_t)10))), L_126, 0, NULL);
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_127 = V_20;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_128 = L_127->___x_0;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = V_22;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_130 = V_21;
				X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_128, L_129, L_130, NULL);
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_131 = V_20;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = L_131->___y_1;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = V_22;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_134 = V_22;
				X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_132, L_133, L_134, NULL);
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_135 = (PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F*)il2cpp_codegen_object_new(PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F_il2cpp_TypeInfo_var);
				PointPrecomp__ctor_m66DA0C74BDD15D7C88DDAFF41BEEC059417DBC60(L_135, NULL);
				V_23 = L_135;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = V_22;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = V_21;
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_138 = V_23;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_139 = L_138->___ypx_h_0;
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_140 = V_23;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = L_140->___ymx_h_1;
				X25519Field_Apm_m9B5C48AF750C94B068F616A9B0503FB8F41EB1ED(L_136, L_137, L_139, L_141, NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_142 = V_21;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_143 = V_22;
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_144 = V_23;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = L_144->___xyd_2;
				X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_142, L_143, L_145, NULL);
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_146 = V_23;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_147 = L_146->___xyd_2;
				il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_148 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d4_29;
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_149 = V_23;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_150 = L_149->___xyd_2;
				X25519Field_Mul_mDF3EFDF24DB741F6801B7D3BBD15CE2CA7479FAC(L_147, L_148, L_150, NULL);
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_151 = V_23;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_152 = L_151->___ypx_h_0;
				X25519Field_Normalize_mD79E8B8BA9EA42005EC0D8D4A82FA7080BACE52B(L_152, NULL);
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_153 = V_23;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_154 = L_153->___ymx_h_1;
				X25519Field_Normalize_mD79E8B8BA9EA42005EC0D8D4A82FA7080BACE52B(L_154, NULL);
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_155 = V_23;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_156 = L_155->___ypx_h_0;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_157 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase_32;
				int32_t L_158 = V_2;
				X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_156, 0, L_157, L_158, NULL);
				int32_t L_159 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_159, ((int32_t)10)));
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_160 = V_23;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_161 = L_160->___ymx_h_1;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_162 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase_32;
				int32_t L_163 = V_2;
				X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_161, 0, L_162, L_163, NULL);
				int32_t L_164 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_164, ((int32_t)10)));
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_165 = V_23;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_166 = L_165->___xyd_2;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_167 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase_32;
				int32_t L_168 = V_2;
				X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_166, 0, L_167, L_168, NULL);
				int32_t L_169 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_169, ((int32_t)10)));
				int32_t L_170 = V_19;
				V_19 = ((int32_t)il2cpp_codegen_add(L_170, 1));
			}

IL_033d_1:
			{
				int32_t L_171 = V_19;
				if ((((int32_t)L_171) < ((int32_t)8)))
				{
					goto IL_024d_1;
				}
			}
			{
				int32_t L_172 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_172, 1));
			}

IL_0349_1:
			{
				int32_t L_173 = V_3;
				if ((((int32_t)L_173) < ((int32_t)8)))
				{
					goto IL_009e_1;
				}
			}
			{
				goto IL_035a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_035a:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::PruneScalar(System.Byte[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PruneScalar_mEAD888D3885CC33E89167694F9E52AD2A014B0AD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___n0, int32_t ___nOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r2, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___n0;
		int32_t L_1 = ___nOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___r2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, 0, ((int32_t)32), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___r2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		V_0 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6 = 0;
		uint8_t L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_7&((int32_t)248)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___r2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8;
		V_0 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		int32_t L_11 = ((int32_t)31);
		uint8_t L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)31)), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_12&((int32_t)127)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___r2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = L_13;
		V_0 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		int32_t L_16 = ((int32_t)31);
		uint8_t L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)31)), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_17|((int32_t)64)))));
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ReduceScalar(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed25519_ReduceScalar_mCA90FD3ED1419421E24436D936D212D0AEC8D795 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	int64_t V_7 = 0;
	int64_t V_8 = 0;
	int64_t V_9 = 0;
	int64_t V_10 = 0;
	int64_t V_11 = 0;
	int64_t V_12 = 0;
	int64_t V_13 = 0;
	int64_t V_14 = 0;
	int64_t V_15 = 0;
	int64_t V_16 = 0;
	int64_t V_17 = 0;
	int64_t V_18 = 0;
	int64_t V_19 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_20 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___n0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Ed25519_Decode32_m0429392689EC800E9BD36992D3D35FBEB9E7075C(L_0, 0, NULL);
		V_0 = ((int64_t)(((int64_t)(uint64_t)L_1)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___n0;
		uint32_t L_3;
		L_3 = Ed25519_Decode24_mFCA27265DA00625554346AF30ADDC45C66A531C7(L_2, 4, NULL);
		V_1 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_3<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___n0;
		uint32_t L_5;
		L_5 = Ed25519_Decode32_m0429392689EC800E9BD36992D3D35FBEB9E7075C(L_4, 7, NULL);
		V_2 = ((int64_t)(((int64_t)(uint64_t)L_5)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___n0;
		uint32_t L_7;
		L_7 = Ed25519_Decode24_mFCA27265DA00625554346AF30ADDC45C66A531C7(L_6, ((int32_t)11), NULL);
		V_3 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_7<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___n0;
		uint32_t L_9;
		L_9 = Ed25519_Decode32_m0429392689EC800E9BD36992D3D35FBEB9E7075C(L_8, ((int32_t)14), NULL);
		V_4 = ((int64_t)(((int64_t)(uint64_t)L_9)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___n0;
		uint32_t L_11;
		L_11 = Ed25519_Decode24_mFCA27265DA00625554346AF30ADDC45C66A531C7(L_10, ((int32_t)18), NULL);
		V_5 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_11<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___n0;
		uint32_t L_13;
		L_13 = Ed25519_Decode32_m0429392689EC800E9BD36992D3D35FBEB9E7075C(L_12, ((int32_t)21), NULL);
		V_6 = ((int64_t)(((int64_t)(uint64_t)L_13)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___n0;
		uint32_t L_15;
		L_15 = Ed25519_Decode24_mFCA27265DA00625554346AF30ADDC45C66A531C7(L_14, ((int32_t)25), NULL);
		V_7 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_15<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___n0;
		uint32_t L_17;
		L_17 = Ed25519_Decode32_m0429392689EC800E9BD36992D3D35FBEB9E7075C(L_16, ((int32_t)28), NULL);
		V_8 = ((int64_t)(((int64_t)(uint64_t)L_17)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___n0;
		uint32_t L_19;
		L_19 = Ed25519_Decode24_mFCA27265DA00625554346AF30ADDC45C66A531C7(L_18, ((int32_t)32), NULL);
		V_9 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_19<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___n0;
		uint32_t L_21;
		L_21 = Ed25519_Decode32_m0429392689EC800E9BD36992D3D35FBEB9E7075C(L_20, ((int32_t)35), NULL);
		V_10 = ((int64_t)(((int64_t)(uint64_t)L_21)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___n0;
		uint32_t L_23;
		L_23 = Ed25519_Decode24_mFCA27265DA00625554346AF30ADDC45C66A531C7(L_22, ((int32_t)39), NULL);
		V_11 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_23<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___n0;
		uint32_t L_25;
		L_25 = Ed25519_Decode32_m0429392689EC800E9BD36992D3D35FBEB9E7075C(L_24, ((int32_t)42), NULL);
		V_12 = ((int64_t)(((int64_t)(uint64_t)L_25)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___n0;
		uint32_t L_27;
		L_27 = Ed25519_Decode24_mFCA27265DA00625554346AF30ADDC45C66A531C7(L_26, ((int32_t)46), NULL);
		V_13 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_27<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___n0;
		uint32_t L_29;
		L_29 = Ed25519_Decode32_m0429392689EC800E9BD36992D3D35FBEB9E7075C(L_28, ((int32_t)49), NULL);
		V_14 = ((int64_t)(((int64_t)(uint64_t)L_29)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___n0;
		uint32_t L_31;
		L_31 = Ed25519_Decode24_mFCA27265DA00625554346AF30ADDC45C66A531C7(L_30, ((int32_t)53), NULL);
		V_15 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_31<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___n0;
		uint32_t L_33;
		L_33 = Ed25519_Decode32_m0429392689EC800E9BD36992D3D35FBEB9E7075C(L_32, ((int32_t)56), NULL);
		V_16 = ((int64_t)(((int64_t)(uint64_t)L_33)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___n0;
		uint32_t L_35;
		L_35 = Ed25519_Decode24_mFCA27265DA00625554346AF30ADDC45C66A531C7(L_34, ((int32_t)60), NULL);
		V_17 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_35<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___n0;
		int32_t L_37 = ((int32_t)63);
		uint8_t L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		V_18 = ((int64_t)(((int64_t)(uint64_t)L_38)&((int64_t)((int32_t)255))));
		int64_t L_39 = V_9;
		int64_t L_40 = V_18;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_39, ((int64_t)il2cpp_codegen_multiply(L_40, ((int64_t)((int32_t)-50998291))))));
		int64_t L_41 = V_10;
		int64_t L_42 = V_18;
		V_10 = ((int64_t)il2cpp_codegen_subtract(L_41, ((int64_t)il2cpp_codegen_multiply(L_42, ((int64_t)((int32_t)19280294))))));
		int64_t L_43 = V_11;
		int64_t L_44 = V_18;
		V_11 = ((int64_t)il2cpp_codegen_subtract(L_43, ((int64_t)il2cpp_codegen_multiply(L_44, ((int64_t)((int32_t)127719000))))));
		int64_t L_45 = V_12;
		int64_t L_46 = V_18;
		V_12 = ((int64_t)il2cpp_codegen_subtract(L_45, ((int64_t)il2cpp_codegen_multiply(L_46, ((int64_t)((int32_t)-6428113))))));
		int64_t L_47 = V_13;
		int64_t L_48 = V_18;
		V_13 = ((int64_t)il2cpp_codegen_subtract(L_47, ((int64_t)il2cpp_codegen_multiply(L_48, ((int64_t)((int32_t)5343))))));
		int64_t L_49 = V_17;
		int64_t L_50 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add(L_49, ((int64_t)(L_50>>((int32_t)28)))));
		int64_t L_51 = V_16;
		V_16 = ((int64_t)(L_51&((int64_t)((int32_t)268435455))));
		int64_t L_52 = V_8;
		int64_t L_53 = V_17;
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_52, ((int64_t)il2cpp_codegen_multiply(L_53, ((int64_t)((int32_t)-50998291))))));
		int64_t L_54 = V_9;
		int64_t L_55 = V_17;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_54, ((int64_t)il2cpp_codegen_multiply(L_55, ((int64_t)((int32_t)19280294))))));
		int64_t L_56 = V_10;
		int64_t L_57 = V_17;
		V_10 = ((int64_t)il2cpp_codegen_subtract(L_56, ((int64_t)il2cpp_codegen_multiply(L_57, ((int64_t)((int32_t)127719000))))));
		int64_t L_58 = V_11;
		int64_t L_59 = V_17;
		V_11 = ((int64_t)il2cpp_codegen_subtract(L_58, ((int64_t)il2cpp_codegen_multiply(L_59, ((int64_t)((int32_t)-6428113))))));
		int64_t L_60 = V_12;
		int64_t L_61 = V_17;
		V_12 = ((int64_t)il2cpp_codegen_subtract(L_60, ((int64_t)il2cpp_codegen_multiply(L_61, ((int64_t)((int32_t)5343))))));
		int64_t L_62 = V_7;
		int64_t L_63 = V_16;
		V_7 = ((int64_t)il2cpp_codegen_subtract(L_62, ((int64_t)il2cpp_codegen_multiply(L_63, ((int64_t)((int32_t)-50998291))))));
		int64_t L_64 = V_8;
		int64_t L_65 = V_16;
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_64, ((int64_t)il2cpp_codegen_multiply(L_65, ((int64_t)((int32_t)19280294))))));
		int64_t L_66 = V_9;
		int64_t L_67 = V_16;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_66, ((int64_t)il2cpp_codegen_multiply(L_67, ((int64_t)((int32_t)127719000))))));
		int64_t L_68 = V_10;
		int64_t L_69 = V_16;
		V_10 = ((int64_t)il2cpp_codegen_subtract(L_68, ((int64_t)il2cpp_codegen_multiply(L_69, ((int64_t)((int32_t)-6428113))))));
		int64_t L_70 = V_11;
		int64_t L_71 = V_16;
		V_11 = ((int64_t)il2cpp_codegen_subtract(L_70, ((int64_t)il2cpp_codegen_multiply(L_71, ((int64_t)((int32_t)5343))))));
		int64_t L_72 = V_15;
		int64_t L_73 = V_14;
		V_15 = ((int64_t)il2cpp_codegen_add(L_72, ((int64_t)(L_73>>((int32_t)28)))));
		int64_t L_74 = V_14;
		V_14 = ((int64_t)(L_74&((int64_t)((int32_t)268435455))));
		int64_t L_75 = V_6;
		int64_t L_76 = V_15;
		V_6 = ((int64_t)il2cpp_codegen_subtract(L_75, ((int64_t)il2cpp_codegen_multiply(L_76, ((int64_t)((int32_t)-50998291))))));
		int64_t L_77 = V_7;
		int64_t L_78 = V_15;
		V_7 = ((int64_t)il2cpp_codegen_subtract(L_77, ((int64_t)il2cpp_codegen_multiply(L_78, ((int64_t)((int32_t)19280294))))));
		int64_t L_79 = V_8;
		int64_t L_80 = V_15;
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_79, ((int64_t)il2cpp_codegen_multiply(L_80, ((int64_t)((int32_t)127719000))))));
		int64_t L_81 = V_9;
		int64_t L_82 = V_15;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_81, ((int64_t)il2cpp_codegen_multiply(L_82, ((int64_t)((int32_t)-6428113))))));
		int64_t L_83 = V_10;
		int64_t L_84 = V_15;
		V_10 = ((int64_t)il2cpp_codegen_subtract(L_83, ((int64_t)il2cpp_codegen_multiply(L_84, ((int64_t)((int32_t)5343))))));
		int64_t L_85 = V_5;
		int64_t L_86 = V_14;
		V_5 = ((int64_t)il2cpp_codegen_subtract(L_85, ((int64_t)il2cpp_codegen_multiply(L_86, ((int64_t)((int32_t)-50998291))))));
		int64_t L_87 = V_6;
		int64_t L_88 = V_14;
		V_6 = ((int64_t)il2cpp_codegen_subtract(L_87, ((int64_t)il2cpp_codegen_multiply(L_88, ((int64_t)((int32_t)19280294))))));
		int64_t L_89 = V_7;
		int64_t L_90 = V_14;
		V_7 = ((int64_t)il2cpp_codegen_subtract(L_89, ((int64_t)il2cpp_codegen_multiply(L_90, ((int64_t)((int32_t)127719000))))));
		int64_t L_91 = V_8;
		int64_t L_92 = V_14;
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_91, ((int64_t)il2cpp_codegen_multiply(L_92, ((int64_t)((int32_t)-6428113))))));
		int64_t L_93 = V_9;
		int64_t L_94 = V_14;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_93, ((int64_t)il2cpp_codegen_multiply(L_94, ((int64_t)((int32_t)5343))))));
		int64_t L_95 = V_13;
		int64_t L_96 = V_12;
		V_13 = ((int64_t)il2cpp_codegen_add(L_95, ((int64_t)(L_96>>((int32_t)28)))));
		int64_t L_97 = V_12;
		V_12 = ((int64_t)(L_97&((int64_t)((int32_t)268435455))));
		int64_t L_98 = V_4;
		int64_t L_99 = V_13;
		V_4 = ((int64_t)il2cpp_codegen_subtract(L_98, ((int64_t)il2cpp_codegen_multiply(L_99, ((int64_t)((int32_t)-50998291))))));
		int64_t L_100 = V_5;
		int64_t L_101 = V_13;
		V_5 = ((int64_t)il2cpp_codegen_subtract(L_100, ((int64_t)il2cpp_codegen_multiply(L_101, ((int64_t)((int32_t)19280294))))));
		int64_t L_102 = V_6;
		int64_t L_103 = V_13;
		V_6 = ((int64_t)il2cpp_codegen_subtract(L_102, ((int64_t)il2cpp_codegen_multiply(L_103, ((int64_t)((int32_t)127719000))))));
		int64_t L_104 = V_7;
		int64_t L_105 = V_13;
		V_7 = ((int64_t)il2cpp_codegen_subtract(L_104, ((int64_t)il2cpp_codegen_multiply(L_105, ((int64_t)((int32_t)-6428113))))));
		int64_t L_106 = V_8;
		int64_t L_107 = V_13;
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_106, ((int64_t)il2cpp_codegen_multiply(L_107, ((int64_t)((int32_t)5343))))));
		int64_t L_108 = V_12;
		int64_t L_109 = V_11;
		V_12 = ((int64_t)il2cpp_codegen_add(L_108, ((int64_t)(L_109>>((int32_t)28)))));
		int64_t L_110 = V_11;
		V_11 = ((int64_t)(L_110&((int64_t)((int32_t)268435455))));
		int64_t L_111 = V_3;
		int64_t L_112 = V_12;
		V_3 = ((int64_t)il2cpp_codegen_subtract(L_111, ((int64_t)il2cpp_codegen_multiply(L_112, ((int64_t)((int32_t)-50998291))))));
		int64_t L_113 = V_4;
		int64_t L_114 = V_12;
		V_4 = ((int64_t)il2cpp_codegen_subtract(L_113, ((int64_t)il2cpp_codegen_multiply(L_114, ((int64_t)((int32_t)19280294))))));
		int64_t L_115 = V_5;
		int64_t L_116 = V_12;
		V_5 = ((int64_t)il2cpp_codegen_subtract(L_115, ((int64_t)il2cpp_codegen_multiply(L_116, ((int64_t)((int32_t)127719000))))));
		int64_t L_117 = V_6;
		int64_t L_118 = V_12;
		V_6 = ((int64_t)il2cpp_codegen_subtract(L_117, ((int64_t)il2cpp_codegen_multiply(L_118, ((int64_t)((int32_t)-6428113))))));
		int64_t L_119 = V_7;
		int64_t L_120 = V_12;
		V_7 = ((int64_t)il2cpp_codegen_subtract(L_119, ((int64_t)il2cpp_codegen_multiply(L_120, ((int64_t)((int32_t)5343))))));
		int64_t L_121 = V_11;
		int64_t L_122 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add(L_121, ((int64_t)(L_122>>((int32_t)28)))));
		int64_t L_123 = V_10;
		V_10 = ((int64_t)(L_123&((int64_t)((int32_t)268435455))));
		int64_t L_124 = V_2;
		int64_t L_125 = V_11;
		V_2 = ((int64_t)il2cpp_codegen_subtract(L_124, ((int64_t)il2cpp_codegen_multiply(L_125, ((int64_t)((int32_t)-50998291))))));
		int64_t L_126 = V_3;
		int64_t L_127 = V_11;
		V_3 = ((int64_t)il2cpp_codegen_subtract(L_126, ((int64_t)il2cpp_codegen_multiply(L_127, ((int64_t)((int32_t)19280294))))));
		int64_t L_128 = V_4;
		int64_t L_129 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract(L_128, ((int64_t)il2cpp_codegen_multiply(L_129, ((int64_t)((int32_t)127719000))))));
		int64_t L_130 = V_5;
		int64_t L_131 = V_11;
		V_5 = ((int64_t)il2cpp_codegen_subtract(L_130, ((int64_t)il2cpp_codegen_multiply(L_131, ((int64_t)((int32_t)-6428113))))));
		int64_t L_132 = V_6;
		int64_t L_133 = V_11;
		V_6 = ((int64_t)il2cpp_codegen_subtract(L_132, ((int64_t)il2cpp_codegen_multiply(L_133, ((int64_t)((int32_t)5343))))));
		int64_t L_134 = V_10;
		int64_t L_135 = V_9;
		V_10 = ((int64_t)il2cpp_codegen_add(L_134, ((int64_t)(L_135>>((int32_t)28)))));
		int64_t L_136 = V_9;
		V_9 = ((int64_t)(L_136&((int64_t)((int32_t)268435455))));
		int64_t L_137 = V_1;
		int64_t L_138 = V_10;
		V_1 = ((int64_t)il2cpp_codegen_subtract(L_137, ((int64_t)il2cpp_codegen_multiply(L_138, ((int64_t)((int32_t)-50998291))))));
		int64_t L_139 = V_2;
		int64_t L_140 = V_10;
		V_2 = ((int64_t)il2cpp_codegen_subtract(L_139, ((int64_t)il2cpp_codegen_multiply(L_140, ((int64_t)((int32_t)19280294))))));
		int64_t L_141 = V_3;
		int64_t L_142 = V_10;
		V_3 = ((int64_t)il2cpp_codegen_subtract(L_141, ((int64_t)il2cpp_codegen_multiply(L_142, ((int64_t)((int32_t)127719000))))));
		int64_t L_143 = V_4;
		int64_t L_144 = V_10;
		V_4 = ((int64_t)il2cpp_codegen_subtract(L_143, ((int64_t)il2cpp_codegen_multiply(L_144, ((int64_t)((int32_t)-6428113))))));
		int64_t L_145 = V_5;
		int64_t L_146 = V_10;
		V_5 = ((int64_t)il2cpp_codegen_subtract(L_145, ((int64_t)il2cpp_codegen_multiply(L_146, ((int64_t)((int32_t)5343))))));
		int64_t L_147 = V_8;
		int64_t L_148 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add(L_147, ((int64_t)(L_148>>((int32_t)28)))));
		int64_t L_149 = V_7;
		V_7 = ((int64_t)(L_149&((int64_t)((int32_t)268435455))));
		int64_t L_150 = V_9;
		int64_t L_151 = V_8;
		V_9 = ((int64_t)il2cpp_codegen_add(L_150, ((int64_t)(L_151>>((int32_t)28)))));
		int64_t L_152 = V_8;
		V_8 = ((int64_t)(L_152&((int64_t)((int32_t)268435455))));
		int64_t L_153 = V_8;
		V_19 = ((int64_t)(((int64_t)(L_153>>((int32_t)27)))&((int64_t)1)));
		int64_t L_154 = V_9;
		int64_t L_155 = V_19;
		V_9 = ((int64_t)il2cpp_codegen_add(L_154, L_155));
		int64_t L_156 = V_0;
		int64_t L_157 = V_9;
		V_0 = ((int64_t)il2cpp_codegen_subtract(L_156, ((int64_t)il2cpp_codegen_multiply(L_157, ((int64_t)((int32_t)-50998291))))));
		int64_t L_158 = V_1;
		int64_t L_159 = V_9;
		V_1 = ((int64_t)il2cpp_codegen_subtract(L_158, ((int64_t)il2cpp_codegen_multiply(L_159, ((int64_t)((int32_t)19280294))))));
		int64_t L_160 = V_2;
		int64_t L_161 = V_9;
		V_2 = ((int64_t)il2cpp_codegen_subtract(L_160, ((int64_t)il2cpp_codegen_multiply(L_161, ((int64_t)((int32_t)127719000))))));
		int64_t L_162 = V_3;
		int64_t L_163 = V_9;
		V_3 = ((int64_t)il2cpp_codegen_subtract(L_162, ((int64_t)il2cpp_codegen_multiply(L_163, ((int64_t)((int32_t)-6428113))))));
		int64_t L_164 = V_4;
		int64_t L_165 = V_9;
		V_4 = ((int64_t)il2cpp_codegen_subtract(L_164, ((int64_t)il2cpp_codegen_multiply(L_165, ((int64_t)((int32_t)5343))))));
		int64_t L_166 = V_1;
		int64_t L_167 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_166, ((int64_t)(L_167>>((int32_t)28)))));
		int64_t L_168 = V_0;
		V_0 = ((int64_t)(L_168&((int64_t)((int32_t)268435455))));
		int64_t L_169 = V_2;
		int64_t L_170 = V_1;
		V_2 = ((int64_t)il2cpp_codegen_add(L_169, ((int64_t)(L_170>>((int32_t)28)))));
		int64_t L_171 = V_1;
		V_1 = ((int64_t)(L_171&((int64_t)((int32_t)268435455))));
		int64_t L_172 = V_3;
		int64_t L_173 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_add(L_172, ((int64_t)(L_173>>((int32_t)28)))));
		int64_t L_174 = V_2;
		V_2 = ((int64_t)(L_174&((int64_t)((int32_t)268435455))));
		int64_t L_175 = V_4;
		int64_t L_176 = V_3;
		V_4 = ((int64_t)il2cpp_codegen_add(L_175, ((int64_t)(L_176>>((int32_t)28)))));
		int64_t L_177 = V_3;
		V_3 = ((int64_t)(L_177&((int64_t)((int32_t)268435455))));
		int64_t L_178 = V_5;
		int64_t L_179 = V_4;
		V_5 = ((int64_t)il2cpp_codegen_add(L_178, ((int64_t)(L_179>>((int32_t)28)))));
		int64_t L_180 = V_4;
		V_4 = ((int64_t)(L_180&((int64_t)((int32_t)268435455))));
		int64_t L_181 = V_6;
		int64_t L_182 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_add(L_181, ((int64_t)(L_182>>((int32_t)28)))));
		int64_t L_183 = V_5;
		V_5 = ((int64_t)(L_183&((int64_t)((int32_t)268435455))));
		int64_t L_184 = V_7;
		int64_t L_185 = V_6;
		V_7 = ((int64_t)il2cpp_codegen_add(L_184, ((int64_t)(L_185>>((int32_t)28)))));
		int64_t L_186 = V_6;
		V_6 = ((int64_t)(L_186&((int64_t)((int32_t)268435455))));
		int64_t L_187 = V_8;
		int64_t L_188 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add(L_187, ((int64_t)(L_188>>((int32_t)28)))));
		int64_t L_189 = V_7;
		V_7 = ((int64_t)(L_189&((int64_t)((int32_t)268435455))));
		int64_t L_190 = V_8;
		V_9 = ((int64_t)(L_190>>((int32_t)28)));
		int64_t L_191 = V_8;
		V_8 = ((int64_t)(L_191&((int64_t)((int32_t)268435455))));
		int64_t L_192 = V_9;
		int64_t L_193 = V_19;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_192, L_193));
		int64_t L_194 = V_0;
		int64_t L_195 = V_9;
		V_0 = ((int64_t)il2cpp_codegen_add(L_194, ((int64_t)(L_195&((int64_t)((int32_t)-50998291))))));
		int64_t L_196 = V_1;
		int64_t L_197 = V_9;
		V_1 = ((int64_t)il2cpp_codegen_add(L_196, ((int64_t)(L_197&((int64_t)((int32_t)19280294))))));
		int64_t L_198 = V_2;
		int64_t L_199 = V_9;
		V_2 = ((int64_t)il2cpp_codegen_add(L_198, ((int64_t)(L_199&((int64_t)((int32_t)127719000))))));
		int64_t L_200 = V_3;
		int64_t L_201 = V_9;
		V_3 = ((int64_t)il2cpp_codegen_add(L_200, ((int64_t)(L_201&((int64_t)((int32_t)-6428113))))));
		int64_t L_202 = V_4;
		int64_t L_203 = V_9;
		V_4 = ((int64_t)il2cpp_codegen_add(L_202, ((int64_t)(L_203&((int64_t)((int32_t)5343))))));
		int64_t L_204 = V_1;
		int64_t L_205 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_204, ((int64_t)(L_205>>((int32_t)28)))));
		int64_t L_206 = V_0;
		V_0 = ((int64_t)(L_206&((int64_t)((int32_t)268435455))));
		int64_t L_207 = V_2;
		int64_t L_208 = V_1;
		V_2 = ((int64_t)il2cpp_codegen_add(L_207, ((int64_t)(L_208>>((int32_t)28)))));
		int64_t L_209 = V_1;
		V_1 = ((int64_t)(L_209&((int64_t)((int32_t)268435455))));
		int64_t L_210 = V_3;
		int64_t L_211 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_add(L_210, ((int64_t)(L_211>>((int32_t)28)))));
		int64_t L_212 = V_2;
		V_2 = ((int64_t)(L_212&((int64_t)((int32_t)268435455))));
		int64_t L_213 = V_4;
		int64_t L_214 = V_3;
		V_4 = ((int64_t)il2cpp_codegen_add(L_213, ((int64_t)(L_214>>((int32_t)28)))));
		int64_t L_215 = V_3;
		V_3 = ((int64_t)(L_215&((int64_t)((int32_t)268435455))));
		int64_t L_216 = V_5;
		int64_t L_217 = V_4;
		V_5 = ((int64_t)il2cpp_codegen_add(L_216, ((int64_t)(L_217>>((int32_t)28)))));
		int64_t L_218 = V_4;
		V_4 = ((int64_t)(L_218&((int64_t)((int32_t)268435455))));
		int64_t L_219 = V_6;
		int64_t L_220 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_add(L_219, ((int64_t)(L_220>>((int32_t)28)))));
		int64_t L_221 = V_5;
		V_5 = ((int64_t)(L_221&((int64_t)((int32_t)268435455))));
		int64_t L_222 = V_7;
		int64_t L_223 = V_6;
		V_7 = ((int64_t)il2cpp_codegen_add(L_222, ((int64_t)(L_223>>((int32_t)28)))));
		int64_t L_224 = V_6;
		V_6 = ((int64_t)(L_224&((int64_t)((int32_t)268435455))));
		int64_t L_225 = V_8;
		int64_t L_226 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add(L_225, ((int64_t)(L_226>>((int32_t)28)))));
		int64_t L_227 = V_7;
		V_7 = ((int64_t)(L_227&((int64_t)((int32_t)268435455))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_228 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_20 = L_228;
		int64_t L_229 = V_0;
		int64_t L_230 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_231 = V_20;
		Ed25519_Encode56_m9DE3CA5E60288B97CF60684DD91722D5211254D9(((int64_t)(L_229|((int64_t)(L_230<<((int32_t)28))))), L_231, 0, NULL);
		int64_t L_232 = V_2;
		int64_t L_233 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_234 = V_20;
		Ed25519_Encode56_m9DE3CA5E60288B97CF60684DD91722D5211254D9(((int64_t)(L_232|((int64_t)(L_233<<((int32_t)28))))), L_234, 7, NULL);
		int64_t L_235 = V_4;
		int64_t L_236 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_237 = V_20;
		Ed25519_Encode56_m9DE3CA5E60288B97CF60684DD91722D5211254D9(((int64_t)(L_235|((int64_t)(L_236<<((int32_t)28))))), L_237, ((int32_t)14), NULL);
		int64_t L_238 = V_6;
		int64_t L_239 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_240 = V_20;
		Ed25519_Encode56_m9DE3CA5E60288B97CF60684DD91722D5211254D9(((int64_t)(L_238|((int64_t)(L_239<<((int32_t)28))))), L_240, ((int32_t)21), NULL);
		int64_t L_241 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_242 = V_20;
		Ed25519_Encode32_m4BD8A0B584B3DBE332B16FCEB92924FAA50E22C0(((int32_t)(uint32_t)L_241), L_242, ((int32_t)28), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_243 = V_20;
		return L_243;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ScalarMult(System.Byte[],Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAffine,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMult_mE2DAADFB09DFC5C9BFC93A7D7708CC3CFACA3A20 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* ___p1, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___r2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_4 = NULL;
	int32_t V_5 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___k0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_DecodeScalar_m420D0E8864965383EE73A0F43ABDAE269E740110(L_1, 0, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		uint32_t L_4;
		L_4 = Nat_ShiftDownBits_m5E1DEDCE89394854A304FFF74224614DAE7056B3(8, L_3, 3, 1, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		int32_t L_6 = 0;
		uint32_t L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___L_24;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
		uint32_t L_11;
		L_11 = Nat_CAdd_m4237EB216D24A9A71A545DAD5C23C8AC9F4697A5(8, ((int32_t)((int32_t)((~L_7))&1)), L_8, L_9, L_10, NULL);
		V_1 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		uint32_t L_13;
		L_13 = Nat_ShiftDownBit_mCDF5442C94448C9149006FB5315053820AB9302C(8, L_12, 0, NULL);
		V_2 = L_13;
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_14 = ___p1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15;
		L_15 = Ed25519_PointPrecompute_m9734506CCD4EDF47D0FC8388C659CBCA58B2A93E(L_14, 8, NULL);
		V_3 = L_15;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_16 = (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)il2cpp_codegen_object_new(PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830(L_16, NULL);
		V_4 = L_16;
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_17 = ___p1;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_18 = ___r2;
		Ed25519_PointCopy_mA0B87EA7B90F15562C748A379B66DB0A72375A90(L_17, L_18, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_3;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_20 = V_4;
		Ed25519_PointLookup_m3BC18429B09E0BBFE4FB1057F3DA65AADA9E2ECF(L_19, 7, L_20, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_21 = V_4;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_22 = ___r2;
		Ed25519_PointAdd_mBAF06038F245EE83C79DED4CFEFB5291EBA336E4(L_21, L_22, NULL);
		V_5 = ((int32_t)62);
	}

IL_0061:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_0;
		int32_t L_24 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_3;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_26 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointLookup_m136C466D6417E40AC68D4E4D281CE193D78211B1(L_23, L_24, L_25, L_26, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_27 = V_4;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_28 = ___r2;
		Ed25519_PointAdd_mBAF06038F245EE83C79DED4CFEFB5291EBA336E4(L_27, L_28, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_29 = ___r2;
		Ed25519_PointDouble_m8FD42D28454C7DC22C8A3563EB98658871BEFA40(L_29, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_30 = ___r2;
		Ed25519_PointDouble_m8FD42D28454C7DC22C8A3563EB98658871BEFA40(L_30, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_31 = ___r2;
		Ed25519_PointDouble_m8FD42D28454C7DC22C8A3563EB98658871BEFA40(L_31, NULL);
		int32_t L_32 = V_5;
		int32_t L_33 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		V_5 = L_33;
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		return;
	}

IL_0091:
	{
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_34 = ___r2;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointDouble_m8FD42D28454C7DC22C8A3563EB98658871BEFA40(L_34, NULL);
		goto IL_0061;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ScalarMultBase(System.Byte[],Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultBase_mAB4ADF0B044E31E3011B788B8B6FF36CA776A7D8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___r1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_Precompute_m9D236FE3CAAAE11B19064B5BB6D6E0F3283C29DD(NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___k0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		Ed25519_DecodeScalar_m420D0E8864965383EE73A0F43ABDAE269E740110(L_1, 0, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		int32_t L_4 = 0;
		uint32_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___L_24;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		uint32_t L_9;
		L_9 = Nat_CAdd_m4237EB216D24A9A71A545DAD5C23C8AC9F4697A5(8, ((int32_t)((int32_t)((~L_5))&1)), L_6, L_7, L_8, NULL);
		V_1 = L_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
		uint32_t L_11;
		L_11 = Nat_ShiftDownBit_mCDF5442C94448C9149006FB5315053820AB9302C(8, L_10, 1, NULL);
		V_2 = L_11;
		V_3 = 0;
		goto IL_0044;
	}

IL_0035:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		int32_t L_13 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		uint32_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		uint32_t L_18;
		L_18 = Interleave_Shuffle2_m148B1F1E9537913F3C1CB2D48A2DB9C151A81EDE(L_17, NULL);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)L_18);
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0044:
	{
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) < ((int32_t)8)))
		{
			goto IL_0035;
		}
	}
	{
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_21 = (PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F*)il2cpp_codegen_object_new(PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F_il2cpp_TypeInfo_var);
		PointPrecomp__ctor_m66DA0C74BDD15D7C88DDAFF41BEEC059417DBC60(L_21, NULL);
		V_4 = L_21;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_22 = ___r1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointSetNeutral_m6920E08FA212EE00B490A48B730D725CBC7B2E43(L_22, NULL);
		V_5 = ((int32_t)28);
	}

IL_0059:
	{
		V_6 = 0;
		goto IL_00b8;
	}

IL_005e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_0;
		int32_t L_24 = V_6;
		int32_t L_25 = L_24;
		uint32_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = V_5;
		V_7 = ((int32_t)((uint32_t)L_26>>((int32_t)(L_27&((int32_t)31)))));
		uint32_t L_28 = V_7;
		V_8 = ((int32_t)(((int32_t)((uint32_t)L_28>>3))&1));
		uint32_t L_29 = V_7;
		int32_t L_30 = V_8;
		V_9 = ((int32_t)(((int32_t)((int32_t)L_29^((-L_30))))&7));
		int32_t L_31 = V_6;
		int32_t L_32 = V_9;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_33 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointLookup_m6603B0371481D4A0A2D4EF01F7253F26806A641C(L_31, L_32, L_33, NULL);
		int32_t L_34 = V_8;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_35 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = L_35->___ypx_h_0;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_37 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = L_37->___ymx_h_1;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_CSwap_mF9A1C1A1A6A9CE86DD5DD4486808D3FD96EBE91B(L_34, L_36, L_38, NULL);
		int32_t L_39 = V_8;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_40 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = L_40->___xyd_2;
		X25519Field_CNegate_mAD23F661AA46AF421AD0F3EEF9E931B84F728AB3(L_39, L_41, NULL);
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_42 = V_4;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_43 = ___r1;
		Ed25519_PointAddPrecomp_mDAD885FEE91E748327B2CAD7C937EEEAF25C6C00(L_42, L_43, NULL);
		int32_t L_44 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00b8:
	{
		int32_t L_45 = V_6;
		if ((((int32_t)L_45) < ((int32_t)8)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_46 = V_5;
		int32_t L_47 = ((int32_t)il2cpp_codegen_subtract(L_46, 4));
		V_5 = L_47;
		if ((((int32_t)L_47) >= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		return;
	}

IL_00c8:
	{
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_48 = ___r1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointDouble_m8FD42D28454C7DC22C8A3563EB98658871BEFA40(L_48, NULL);
		goto IL_0059;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ScalarMultBaseEncoded(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultBaseEncoded_mC7F8AEBF8D2BF8DD992BB23E63EB6491600F620C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r1, int32_t ___rOff2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* V_0 = NULL;
	{
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_0 = (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374*)il2cpp_codegen_object_new(PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var);
		PointAccum__ctor_m02F2BD460E06C5F956372EBC95EA93A876B563D0(L_0, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___k0;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_ScalarMultBase_mAB4ADF0B044E31E3011B788B8B6FF36CA776A7D8(L_1, L_2, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___r1;
		int32_t L_5 = ___rOff2;
		int32_t L_6;
		L_6 = Ed25519_EncodePoint_mB7C63C580B86BE9146E28FE4B1DD03976551DB08(L_3, L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_ScalarMultBaseEncoded_mC7F8AEBF8D2BF8DD992BB23E63EB6491600F620C_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ScalarMultBaseYZ(System.Byte[],System.Int32,System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultBaseYZ_mC245418E9FC0944632FC36C9BCBB79027ED001B4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, int32_t ___kOff1, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___k0;
		int32_t L_2 = ___kOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PruneScalar_mEAD888D3885CC33E89167694F9E52AD2A014B0AD(L_1, L_2, L_3, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_4 = (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374*)il2cpp_codegen_object_new(PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var);
		PointAccum__ctor_m02F2BD460E06C5F956372EBC95EA93A876B563D0(L_4, NULL);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_6 = V_1;
		Ed25519_ScalarMultBase_mAB4ADF0B044E31E3011B788B8B6FF36CA776A7D8(L_5, L_6, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_7 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___x_0;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_9 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___y_1;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_11 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11->___z_2;
		int32_t L_13;
		L_13 = Ed25519_CheckPoint_mB0076E4C6E0A4FC1DADD6A24B2938B2EB912F35D(L_8, L_10, L_12, NULL);
		if (L_13)
		{
			goto IL_003c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_ScalarMultBaseYZ_mC245418E9FC0944632FC36C9BCBB79027ED001B4_RuntimeMethod_var)));
	}

IL_003c:
	{
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_15 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15->___y_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___y2;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_16, 0, L_17, 0, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_18 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18->___z_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ___z3;
		X25519Field_Copy_m7824BC7A5B9FFD808B074D223D293C73B2EBFC70(L_19, 0, L_20, 0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ScalarMultOrderVar(Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAffine,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultOrderVar_m260ABA2637A155E363198EB0D2F14584CF651EBD (PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* ___p0, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___r1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_1 = NULL;
	PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_0 = 5;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___L_24;
		int32_t L_1 = V_0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2;
		L_2 = Ed25519_GetWnafVar_m4676B2ACE1A0F74BE94FB10DD29A1E070499B249(L_0, L_1, NULL);
		V_1 = L_2;
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_3 = ___p0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_4;
		L_4 = Ed25519_PointCopy_m47EB550B4471EDC24EFEC203EDB132DE857EEBDA(L_3, NULL);
		int32_t L_5 = V_0;
		PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_6;
		L_6 = Ed25519_PointPrecomputeVar_m0C916BFD76D0E9FF12CB2EF545A8A7AD07848A39(L_4, ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_5, 2))&((int32_t)31))))), NULL);
		V_2 = L_6;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_7 = ___r1;
		Ed25519_PointSetNeutral_m6920E08FA212EE00B490A48B730D725CBC7B2E43(L_7, NULL);
		V_3 = ((int32_t)252);
	}

IL_002e:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_8 = V_1;
		int32_t L_9 = V_3;
		int32_t L_10 = L_9;
		int8_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		int32_t L_12 = V_4;
		if (!L_12)
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_13 = V_4;
		V_5 = ((int32_t)(L_13>>((int32_t)31)));
		int32_t L_14 = V_4;
		int32_t L_15 = V_5;
		V_6 = ((int32_t)(((int32_t)(L_14^L_15))>>1));
		int32_t L_16 = V_5;
		PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_17 = V_2;
		int32_t L_18 = V_6;
		int32_t L_19 = L_18;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_21 = ___r1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointAddVar_m53AB3C9F519A0B44A0B5C1ADF7B96A8524E1FBA6((bool)((((int32_t)((((int32_t)L_16) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), L_20, L_21, NULL);
	}

IL_0059:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		V_3 = L_23;
		if ((((int32_t)L_23) >= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		return;
	}

IL_0062:
	{
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_24 = ___r1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointDouble_m8FD42D28454C7DC22C8A3563EB98658871BEFA40(L_24, NULL);
		goto IL_002e;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ScalarMultStrausVar(System.UInt32[],System.UInt32[],Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAffine,Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultStrausVar_mC46D3DD4145DDEF555DCB6B5F07E544E3111B634 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___nb0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___np1, PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* ___p2, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___r3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_1 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_2 = NULL;
	PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_Precompute_m9D236FE3CAAAE11B19064B5BB6D6E0F3283C29DD(NULL);
		V_0 = 5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___nb0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1;
		L_1 = Ed25519_GetWnafVar_m4676B2ACE1A0F74BE94FB10DD29A1E070499B249(L_0, 7, NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___np1;
		int32_t L_3 = V_0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4;
		L_4 = Ed25519_GetWnafVar_m4676B2ACE1A0F74BE94FB10DD29A1E070499B249(L_2, L_3, NULL);
		V_2 = L_4;
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_5 = ___p2;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_6;
		L_6 = Ed25519_PointCopy_m47EB550B4471EDC24EFEC203EDB132DE857EEBDA(L_5, NULL);
		int32_t L_7 = V_0;
		PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_8;
		L_8 = Ed25519_PointPrecomputeVar_m0C916BFD76D0E9FF12CB2EF545A8A7AD07848A39(L_6, ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_7, 2))&((int32_t)31))))), NULL);
		V_3 = L_8;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_9 = ___r3;
		Ed25519_PointSetNeutral_m6920E08FA212EE00B490A48B730D725CBC7B2E43(L_9, NULL);
		V_4 = ((int32_t)252);
	}

IL_0038:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_10 = V_1;
		int32_t L_11 = V_4;
		int32_t L_12 = L_11;
		int8_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		int32_t L_14 = V_5;
		if (!L_14)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_15 = V_5;
		V_6 = ((int32_t)(L_15>>((int32_t)31)));
		int32_t L_16 = V_5;
		int32_t L_17 = V_6;
		V_7 = ((int32_t)(((int32_t)(L_16^L_17))>>1));
		int32_t L_18 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_19 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBaseTable_31;
		int32_t L_20 = V_7;
		int32_t L_21 = L_20;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_23 = ___r3;
		Ed25519_PointAddVar_m53AB3C9F519A0B44A0B5C1ADF7B96A8524E1FBA6((bool)((((int32_t)((((int32_t)L_18) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), L_22, L_23, NULL);
	}

IL_0068:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_24 = V_2;
		int32_t L_25 = V_4;
		int32_t L_26 = L_25;
		int8_t L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		V_8 = L_27;
		int32_t L_28 = V_8;
		if (!L_28)
		{
			goto IL_0094;
		}
	}
	{
		int32_t L_29 = V_8;
		V_9 = ((int32_t)(L_29>>((int32_t)31)));
		int32_t L_30 = V_8;
		int32_t L_31 = V_9;
		V_10 = ((int32_t)(((int32_t)(L_30^L_31))>>1));
		int32_t L_32 = V_9;
		PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_33 = V_3;
		int32_t L_34 = V_10;
		int32_t L_35 = L_34;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_37 = ___r3;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointAddVar_m53AB3C9F519A0B44A0B5C1ADF7B96A8524E1FBA6((bool)((((int32_t)((((int32_t)L_32) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), L_36, L_37, NULL);
	}

IL_0094:
	{
		int32_t L_38 = V_4;
		int32_t L_39 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
		V_4 = L_39;
		if ((((int32_t)L_39) >= ((int32_t)0)))
		{
			goto IL_009f;
		}
	}
	{
		return;
	}

IL_009f:
	{
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_40 = ___r3;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointDouble_m8FD42D28454C7DC22C8A3563EB98658871BEFA40(L_40, NULL);
		goto IL_0038;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Sign(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Sign_m32CA5247A25D656115F15FA0D10817FDF1189E88 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m2, int32_t ___mOff3, int32_t ___mLen4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig5, int32_t ___sigOff6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_1 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___sk0;
		int32_t L_1 = ___skOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		uint8_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___m2;
		int32_t L_5 = ___mOff3;
		int32_t L_6 = ___mLen4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___sig5;
		int32_t L_8 = ___sigOff6;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_ImplSign_m53C1D8DA2ABDA814927B245859EDB4FA758DDC3B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Sign(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Sign_m088254F03E38AB0129635E0D898196ACC4B9F4B4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m4, int32_t ___mOff5, int32_t ___mLen6, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig7, int32_t ___sigOff8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_1 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___sk0;
		int32_t L_1 = ___skOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___pk2;
		int32_t L_3 = ___pkOff3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		uint8_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___m4;
		int32_t L_7 = ___mOff5;
		int32_t L_8 = ___mLen6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___sig7;
		int32_t L_10 = ___sigOff8;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_ImplSign_m3CE2F3B4F80278E00756C8729A70727B81ECC06B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Sign(System.Byte[],System.Int32,System.Byte[],System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Sign_m0D0DB0AE78001EB5D9140F3FA86569642691421D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m3, int32_t ___mOff4, int32_t ___mLen5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig6, int32_t ___sigOff7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___sk0;
		int32_t L_1 = ___skOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___ctx2;
		uint8_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___m3;
		int32_t L_5 = ___mOff4;
		int32_t L_6 = ___mLen5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___sig6;
		int32_t L_8 = ___sigOff7;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_ImplSign_m53C1D8DA2ABDA814927B245859EDB4FA758DDC3B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Sign(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Sign_m34298FFFDBCC1A1B4E65681CCC3B0467C45E2C70 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m5, int32_t ___mOff6, int32_t ___mLen7, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig8, int32_t ___sigOff9, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___sk0;
		int32_t L_1 = ___skOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___pk2;
		int32_t L_3 = ___pkOff3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___ctx4;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___m5;
		int32_t L_7 = ___mOff6;
		int32_t L_8 = ___mLen7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___sig8;
		int32_t L_10 = ___sigOff9;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_ImplSign_m3CE2F3B4F80278E00756C8729A70727B81ECC06B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::SignPrehash(System.Byte[],System.Int32,System.Byte[],System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_SignPrehash_m149CAFC097C2AEE8AD9A3F02E05C68696DD2F2EE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ph3, int32_t ___phOff4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig5, int32_t ___sigOff6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___sk0;
		int32_t L_1 = ___skOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___ctx2;
		uint8_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___ph3;
		int32_t L_5 = ___phOff4;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___sig5;
		int32_t L_8 = ___sigOff6;
		Ed25519_ImplSign_m53C1D8DA2ABDA814927B245859EDB4FA758DDC3B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::SignPrehash(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_SignPrehash_m59C898259B4741823DE78266A6E7EE3B0452E452 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ph5, int32_t ___phOff6, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig7, int32_t ___sigOff8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___sk0;
		int32_t L_1 = ___skOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___pk2;
		int32_t L_3 = ___pkOff3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___ctx4;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___ph5;
		int32_t L_7 = ___phOff6;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___sig7;
		int32_t L_10 = ___sigOff8;
		Ed25519_ImplSign_m3CE2F3B4F80278E00756C8729A70727B81ECC06B(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::SignPrehash(System.Byte[],System.Int32,System.Byte[],Org.BouncyCastle.Crypto.IDigest,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_SignPrehash_m1B7E0B40079035B007F692BDE64476C4BBA106C8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx2, RuntimeObject* ___ph3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig4, int32_t ___sigOff5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize_18;
		RuntimeObject* L_3 = ___ph3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_3, L_4, 0);
		if ((((int32_t)L_2) == ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_SignPrehash_m1B7E0B40079035B007F692BDE64476C4BBA106C8_RuntimeMethod_var)));
	}

IL_0025:
	{
		V_1 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___sk0;
		int32_t L_8 = ___skOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___ctx2;
		uint8_t L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___sig4;
		int32_t L_14 = ___sigOff5;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_ImplSign_m53C1D8DA2ABDA814927B245859EDB4FA758DDC3B(L_7, L_8, L_9, L_10, L_11, 0, ((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13, L_14, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::SignPrehash(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],Org.BouncyCastle.Crypto.IDigest,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_SignPrehash_m2329A7A18E536009DA2BE5A65FBEF67686EC93D8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, RuntimeObject* ___ph5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig6, int32_t ___sigOff7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize_18;
		RuntimeObject* L_3 = ___ph5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_3, L_4, 0);
		if ((((int32_t)L_2) == ((int32_t)L_5)))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_SignPrehash_m2329A7A18E536009DA2BE5A65FBEF67686EC93D8_RuntimeMethod_var)));
	}

IL_0026:
	{
		V_1 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___sk0;
		int32_t L_8 = ___skOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___pk2;
		int32_t L_10 = ___pkOff3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___ctx4;
		uint8_t L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___sig6;
		int32_t L_16 = ___sigOff7;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_ImplSign_m3CE2F3B4F80278E00756C8729A70727B81ECC06B(L_7, L_8, L_9, L_10, L_11, L_12, L_13, 0, ((int32_t)(((RuntimeArray*)L_14)->max_length)), L_15, L_16, NULL);
		return;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ValidatePublicKeyFull(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_ValidatePublicKeyFull_m27DFD375189BE67AF97605AEB7E36B2FBBE41DBC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk0, int32_t ___pkOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* V_0 = NULL;
	PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* V_1 = NULL;
	{
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_0 = (PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5*)il2cpp_codegen_object_new(PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5_il2cpp_TypeInfo_var);
		PointAffine__ctor_m9CEF8F7295DCDFD2FFFEB47D6BEFE3DB551C2E1E(L_0, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___pk0;
		int32_t L_2 = ___pkOff1;
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Ed25519_DecodePointVar_m6EE29823C3966A4E6BA4B898CD1AB62D0D978784(L_1, L_2, (bool)0, L_3, NULL);
		if (L_4)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_5 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = L_5->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Normalize_mD79E8B8BA9EA42005EC0D8D4A82FA7080BACE52B(L_6, NULL);
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___y_1;
		X25519Field_Normalize_mD79E8B8BA9EA42005EC0D8D4A82FA7080BACE52B(L_8, NULL);
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_9 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___x_0;
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_11 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Ed25519_IsNeutralElementVar_mEA514555D1028D932DCCFED344E94668786C2019(L_10, L_12, NULL);
		if (!L_13)
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_003e:
	{
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_14 = (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374*)il2cpp_codegen_object_new(PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var);
		PointAccum__ctor_m02F2BD460E06C5F956372EBC95EA93A876B563D0(L_14, NULL);
		V_1 = L_14;
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_15 = V_0;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_16 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_ScalarMultOrderVar_m260ABA2637A155E363198EB0D2F14584CF651EBD(L_15, L_16, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_17 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Normalize_mD79E8B8BA9EA42005EC0D8D4A82FA7080BACE52B(L_18, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_19 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = L_19->___y_1;
		X25519Field_Normalize_mD79E8B8BA9EA42005EC0D8D4A82FA7080BACE52B(L_20, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_21 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = L_21->___z_2;
		X25519Field_Normalize_mD79E8B8BA9EA42005EC0D8D4A82FA7080BACE52B(L_22, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_23 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = L_23->___x_0;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_25 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = L_25->___y_1;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_27 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = L_27->___z_2;
		bool L_29;
		L_29 = Ed25519_IsNeutralElementVar_m7592FF2FD6D37D96DF3EC749C4D12B7EDAFFA51E(L_24, L_26, L_28, NULL);
		return L_29;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::ValidatePublicKeyPartial(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_ValidatePublicKeyPartial_m1FB7BE1183CD99290A6FA80C79BB1E30955644CC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk0, int32_t ___pkOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* V_0 = NULL;
	{
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_0 = (PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5*)il2cpp_codegen_object_new(PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5_il2cpp_TypeInfo_var);
		PointAffine__ctor_m9CEF8F7295DCDFD2FFFEB47D6BEFE3DB551C2E1E(L_0, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___pk0;
		int32_t L_2 = ___pkOff1;
		PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Ed25519_DecodePointVar_m6EE29823C3966A4E6BA4B898CD1AB62D0D978784(L_1, L_2, (bool)0, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Verify(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_Verify_m5152C690C12A73CE6998F25EC0043A901DC413F9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig0, int32_t ___sigOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m4, int32_t ___mOff5, int32_t ___mLen6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_1 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___sig0;
		int32_t L_1 = ___sigOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___pk2;
		int32_t L_3 = ___pkOff3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		uint8_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___m4;
		int32_t L_7 = ___mOff5;
		int32_t L_8 = ___mLen6;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Ed25519_ImplVerify_m58324B32C188FC7A710334E38086A0D6B9E600A8(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::Verify(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_Verify_m35DCB7EE3B0507C9DAB9B021DBE4C7EEE57AF94E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig0, int32_t ___sigOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m5, int32_t ___mOff6, int32_t ___mLen7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___sig0;
		int32_t L_1 = ___sigOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___pk2;
		int32_t L_3 = ___pkOff3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___ctx4;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___m5;
		int32_t L_7 = ___mOff6;
		int32_t L_8 = ___mLen7;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Ed25519_ImplVerify_m58324B32C188FC7A710334E38086A0D6B9E600A8(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::VerifyPrehash(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_VerifyPrehash_mA4359DCCF5B7C3AC7F219E388265493DC4D3353D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig0, int32_t ___sigOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ph5, int32_t ___phOff6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___sig0;
		int32_t L_1 = ___sigOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___pk2;
		int32_t L_3 = ___pkOff3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___ctx4;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___ph5;
		int32_t L_7 = ___phOff6;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize_18;
		bool L_9;
		L_9 = Ed25519_ImplVerify_m58324B32C188FC7A710334E38086A0D6B9E600A8(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::VerifyPrehash(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],Org.BouncyCastle.Crypto.IDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_VerifyPrehash_m04CED0C680E279DC54E7B57170384868A2254302 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig0, int32_t ___sigOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, RuntimeObject* ___ph5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize_18;
		RuntimeObject* L_3 = ___ph5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_3, L_4, 0);
		if ((((int32_t)L_2) == ((int32_t)L_5)))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_VerifyPrehash_m04CED0C680E279DC54E7B57170384868A2254302_RuntimeMethod_var)));
	}

IL_0026:
	{
		V_1 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___sig0;
		int32_t L_8 = ___sigOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___pk2;
		int32_t L_10 = ___pkOff3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___ctx4;
		uint8_t L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Ed25519_ImplVerify_m58324B32C188FC7A710334E38086A0D6B9E600A8(L_7, L_8, L_9, L_10, L_11, L_12, L_13, 0, ((int32_t)(((RuntimeArray*)L_14)->max_length)), NULL);
		return L_15;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519__cctor_m9BC26BF942B96E5C80472B751518A7F0512EEF21 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D1_222_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D2_223_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D3_224_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D4_225_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D5_226_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D6_227_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D7_228_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D8_229_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize_18 = ((int32_t)64);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PublicKeySize_19 = ((int32_t)32);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___SecretKeySize_20 = ((int32_t)32);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___SignatureSize_21 = ((int32_t)64);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D1_222_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___Dom2Prefix_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___Dom2Prefix_22), (void*)L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D2_223_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_4, L_5, NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___P_23 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___P_23), (void*)L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D3_224_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_7, L_8, NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___L_24 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___L_24), (void*)L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D4_225_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_10, L_11, NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___B_x_25 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___B_x_25), (void*)L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D5_226_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_13, L_14, NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___B_y_26 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___B_y_26), (void*)L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D6_227_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_16, L_17, NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d_27 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d_27), (void*)L_16);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_20 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D7_228_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_19, L_20, NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d2_28 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d2_28), (void*)L_19);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = L_21;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_23 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6002fdfU2D8_229_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_22, L_23, NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d4_29 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d4_29), (void*)L_22);
		RuntimeObject* L_24 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_24, NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompLock_30 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompLock_30), (void*)L_24);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBaseTable_31 = (PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBaseTable_31), (void*)(PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E*)NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase_32 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase_32), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519__ctor_mDBFE8FBFC7E2B91F5196A403B5567EB9F9760C46 (Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/F::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void F__ctor_m8A928D72F5EB13FEC9E5AF904DC23877592FB05C (F_tCDB6368965CEC72FE5E0EC9C63BE9E652F8951DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field__ctor_m9AF4BD4682613E4699C2117F3E8A9B4B7E2083CC(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAccum::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointAccum__ctor_m02F2BD460E06C5F956372EBC95EA93A876B563D0 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		__this->___x_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x_0), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		__this->___y_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___y_1), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		__this->___z_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___z_2), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		__this->___u_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___u_3), (void*)L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4;
		L_4 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		__this->___v_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___v_4), (void*)L_4);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointAffine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointAffine__ctor_m9CEF8F7295DCDFD2FFFEB47D6BEFE3DB551C2E1E (PointAffine_t4CD47A4029D5253A086EDE151A1A9A8192D55EB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		__this->___x_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x_0), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		__this->___y_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___y_1), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointExt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830 (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		__this->___x_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x_0), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		__this->___y_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___y_1), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		__this->___z_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___z_2), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		__this->___t_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t_3), (void*)L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed25519/PointPrecomp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointPrecomp__ctor_m66DA0C74BDD15D7C88DDAFF41BEEC059417DBC60 (PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		__this->___ypx_h_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ypx_h_0), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		__this->___ymx_h_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ymx_h_1), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m7DF10A13757674D37F8A53F7E16A81E9AEB17078(NULL);
		__this->___xyd_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xyd_2), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448::CalculateS(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed448_CalculateS_m00E3993A9E1BD45C54A7C8EBCEF08F3C334B4BFE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___r0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_DecodeScalar_mA4714B8D920EFEA5AD685480EF3ECB744F070FC1(L_1, 0, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___k1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_1;
		Ed448_DecodeScalar_mA4714B8D920EFEA5AD685480EF3ECB744F070FC1(L_4, 0, L_5, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_2 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___s2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_2;
		Ed448_DecodeScalar_mA4714B8D920EFEA5AD685480EF3ECB744F070FC1(L_7, 0, L_8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		uint32_t L_12;
		L_12 = Nat_MulAddTo_m8F4F4F9AB65539CAD83B6247F72B7D8EF94BFBB4(((int32_t)14), L_9, L_10, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)114));
		V_3 = L_13;
		V_4 = 0;
		goto IL_005c;
	}

IL_0048:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		int32_t L_15 = V_4;
		int32_t L_16 = L_15;
		uint32_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_3;
		int32_t L_19 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_Encode32_mB66F38BBC09AA5BC2FC7425E86297EAAD1A7CC79(L_17, L_18, ((int32_t)il2cpp_codegen_multiply(L_19, 4)), NULL);
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0048;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = Ed448_ReduceScalar_m2ED71F07CC2E61326FAEF81D8007A4F0DD6CFF5B(L_23, NULL);
		return L_24;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed448::CheckContextVar(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_CheckContextVar_m02CC9167EBB6E1AF763614C90DF6A8C7563478E6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___ctx0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___ctx0;
		return (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) < ((int32_t)((int32_t)256)))? 1 : 0);
	}

IL_000e:
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed448::CheckPoint(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed448_CheckPoint_m86CE49B474578669BB37B358A074222D2E578312 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2;
		L_2 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_2 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_1;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_3, L_4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___y1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_2;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_5, L_6, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_7, L_8, L_9, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_1;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_10, L_11, L_12, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		X448Field_Mul_m117ADD5620C51D90B64DDA41105DD0559C62A1C2(L_13, ((int32_t)39081), L_14, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		X448Field_SubOne_mDE8A6766E81D9B5EEB00EA64497BE2A452C6BC9A(L_15, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_0;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_16, L_17, L_18, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_0;
		X448Field_Normalize_m28D257AC52601B6B435B1DCF0215E0BA9DC5762D(L_19, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_0;
		int32_t L_21;
		L_21 = X448Field_IsZero_m77E3695C249DCE19085642E0C08D835CECE96D6A(L_20, NULL);
		return L_21;
	}
}
// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed448::CheckPoint(System.UInt32[],System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed448_CheckPoint_mF5E98B868243A3458E23335A01FC257ED3BFA46C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2;
		L_2 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_2 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3;
		L_3 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_3 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_1;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_4, L_5, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___y1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_2;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_6, L_7, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___z2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_3;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_8, L_9, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_10, L_11, L_12, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_1;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_13, L_14, L_15, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_1;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_16, L_17, L_18, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_3;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_19, L_20, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_0;
		X448Field_Mul_m117ADD5620C51D90B64DDA41105DD0559C62A1C2(L_21, ((int32_t)39081), L_22, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_0;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_23, L_24, L_25, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_0;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_26, L_27, L_28, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_0;
		X448Field_Normalize_m28D257AC52601B6B435B1DCF0215E0BA9DC5762D(L_29, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_0;
		int32_t L_31;
		L_31 = X448Field_IsZero_m77E3695C249DCE19085642E0C08D835CECE96D6A(L_30, NULL);
		return L_31;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed448::CheckPointVar(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_CheckPointVar_m2105E10610992C458D757C967799DFE5FD5CC5FD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___p0;
		int32_t L_1 = ((int32_t)56);
		uint8_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		if (!((int32_t)((int32_t)L_2&((int32_t)127))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_Decode32_mDDBFF67C54DA20658E2F58742EBB451FBDF7F10A(L_4, 0, L_5, 0, ((int32_t)14), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___P_34;
		bool L_8;
		L_8 = Nat_Gte_mD8A9416E5D833196864F127A21842BC915DADEF8(((int32_t)14), L_6, L_7, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed448::CheckScalarVar(System.Byte[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_CheckScalarVar_m9000A81032FECCD772EA1BE663F52AD731E96EC3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___n1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___s0;
		int32_t L_1 = ((int32_t)56);
		uint8_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		if (!L_2)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___s0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___n1;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_DecodeScalar_mA4714B8D920EFEA5AD685480EF3ECB744F070FC1(L_3, 0, L_4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___n1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___L_35;
		bool L_7;
		L_7 = Nat_Gte_mD8A9416E5D833196864F127A21842BC915DADEF8(((int32_t)14), L_5, L_6, NULL);
		return (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
	}
}
// System.Byte[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Copy(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed448_Copy_mFFED7C881DD29DD7D3B28F621FEAB3CA1012374C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int32_t L_0 = ___len2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___buf0;
		int32_t L_3 = ___off1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5 = ___len2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_2, L_3, (RuntimeArray*)L_4, 0, L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		return L_6;
	}
}
// Org.BouncyCastle.Crypto.IXof Org.BouncyCastle.Math.EC.Rfc8032.Ed448::CreatePrehash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ed448_CreatePrehash_m5A0F6B05F2CCF703CED4E1901013C6D038300C13 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Ed448_CreateXof_m09DDB193C17D4AF47E3C880CC9DD9782075C4A33(NULL);
		return L_0;
	}
}
// Org.BouncyCastle.Crypto.IXof Org.BouncyCastle.Math.EC.Rfc8032.Ed448::CreateXof()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ed448_CreateXof_m09DDB193C17D4AF47E3C880CC9DD9782075C4A33 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* L_0 = (ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940*)il2cpp_codegen_object_new(ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940_il2cpp_TypeInfo_var);
		ShakeDigest__ctor_m2B3B14BB44A9AD5C9CDBDD41EE6122B928CFC532(L_0, ((int32_t)256), NULL);
		return L_0;
	}
}
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Decode16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_Decode16_m7315AB1B8F8FE33D988DECB92635A9B9D28E9251 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		uint32_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bs0;
		int32_t L_6 = ___off1;
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		___off1 = L_7;
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int32_t)((int32_t)L_4|((int32_t)((int32_t)L_9<<8))));
		uint32_t L_10 = V_0;
		return L_10;
	}
}
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Decode24(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_Decode24_mF28DBE178BB0317BE64F31E17AC4334DFEB1FC74 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		uint32_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bs0;
		int32_t L_6 = ___off1;
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		___off1 = L_7;
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int32_t)((int32_t)L_4|((int32_t)((int32_t)L_9<<8))));
		uint32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bs0;
		int32_t L_12 = ___off1;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		___off1 = L_13;
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = ((int32_t)((int32_t)L_10|((int32_t)((int32_t)L_15<<((int32_t)16)))));
		uint32_t L_16 = V_0;
		return L_16;
	}
}
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Decode32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_Decode32_mEFC4AA805E5B39001100E74CD1904EA24C28B444 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		int32_t L_1 = ___off1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		uint32_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___bs0;
		int32_t L_6 = ___off1;
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		___off1 = L_7;
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int32_t)((int32_t)L_4|((int32_t)((int32_t)L_9<<8))));
		uint32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bs0;
		int32_t L_12 = ___off1;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		___off1 = L_13;
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = ((int32_t)((int32_t)L_10|((int32_t)((int32_t)L_15<<((int32_t)16)))));
		uint32_t L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___bs0;
		int32_t L_18 = ___off1;
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		___off1 = L_19;
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int32_t)((int32_t)L_16|((int32_t)((int32_t)L_21<<((int32_t)24)))));
		uint32_t L_22 = V_0;
		return L_22;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Decode32(System.Byte[],System.Int32,System.UInt32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Decode32_mDDBFF67C54DA20658E2F58742EBB451FBDF7F10A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___bsOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___n2, int32_t ___nOff3, int32_t ___nLen4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___n2;
		int32_t L_1 = ___nOff3;
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs0;
		int32_t L_4 = ___bsOff1;
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		uint32_t L_6;
		L_6 = Ed448_Decode32_mEFC4AA805E5B39001100E74CD1904EA24C28B444(L_3, ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)il2cpp_codegen_multiply(L_5, 4)))), NULL);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (uint32_t)L_6);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___nLen4;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed448::DecodePointVar(System.Byte[],System.Int32,System.Boolean,Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_DecodePointVar_m8703292141B19BE4E199CA3903605B7587585B96 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___p0, int32_t ___pOff1, bool ___negate2, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___p0;
		int32_t L_1 = ___pOff1;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Ed448_Copy_mFFED7C881DD29DD7D3B28F621FEAB3CA1012374C(L_0, L_1, ((int32_t)57), NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		bool L_4;
		L_4 = Ed448_CheckPointVar_m2105E10610992C458D757C967799DFE5FD5CC5FD(L_3, NULL);
		if (L_4)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6 = ((int32_t)56);
		uint8_t L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = ((int32_t)(((int32_t)((int32_t)L_7&((int32_t)128)))>>7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8;
		V_4 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_4;
		int32_t L_11 = ((int32_t)56);
		uint8_t L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)56)), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_12&((int32_t)127)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_14 = ___r3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = L_14->___y_1;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Decode_mA6FE31E4A680C131F9A025A431353936CD857240(L_13, 0, L_15, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16;
		L_16 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_2 = L_16;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17;
		L_17 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_3 = L_17;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_18 = ___r3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = L_18->___y_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_2;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_19, L_20, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_3;
		X448Field_Mul_m117ADD5620C51D90B64DDA41105DD0559C62A1C2(L_21, ((int32_t)39081), L_22, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_2;
		X448Field_Negate_m4E274B3DBA28BF4E532CD767517A6BE680C1242A(L_23, L_24, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_2;
		X448Field_AddOne_mC4D51247BFD297C40E6531129D3BF53DDA0B280B(L_25, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_3;
		X448Field_AddOne_mC4D51247BFD297C40E6531129D3BF53DDA0B280B(L_26, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_3;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_29 = ___r3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = L_29->___x_0;
		bool L_31;
		L_31 = X448Field_SqrtRatioVar_mEE832660670B6493D88C299006A8013BE6ED270E(L_27, L_28, L_30, NULL);
		if (L_31)
		{
			goto IL_0086;
		}
	}
	{
		return (bool)0;
	}

IL_0086:
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_32 = ___r3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = L_32->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Normalize_m28D257AC52601B6B435B1DCF0215E0BA9DC5762D(L_33, NULL);
		int32_t L_34 = V_1;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_00a4;
		}
	}
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_35 = ___r3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = L_35->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = X448Field_IsZeroVar_m66A2422FBD302F46255DE30062EE21833A59264F(L_36, NULL);
		if (!L_37)
		{
			goto IL_00a4;
		}
	}
	{
		return (bool)0;
	}

IL_00a4:
	{
		bool L_38 = ___negate2;
		int32_t L_39 = V_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_40 = ___r3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = L_40->___x_0;
		int32_t L_42 = 0;
		uint32_t L_43 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		if (!((int32_t)((int32_t)L_38^((((int32_t)((((int64_t)((int64_t)L_39)) == ((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_43&1))))))? 1 : 0)) == ((int32_t)0))? 1 : 0))))
		{
			goto IL_00cb;
		}
	}
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_44 = ___r3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = L_44->___x_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_46 = ___r3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = L_46->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Negate_m4E274B3DBA28BF4E532CD767517A6BE680C1242A(L_45, L_47, NULL);
	}

IL_00cb:
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_48 = ___r3;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_PointExtendXY_m0886BB994850B3828576669D936973B20912F066(L_48, NULL);
		return (bool)1;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::DecodeScalar(System.Byte[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_DecodeScalar_mA4714B8D920EFEA5AD685480EF3ECB744F070FC1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, int32_t ___kOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___n2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___k0;
		int32_t L_1 = ___kOff1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___n2;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_Decode32_mDDBFF67C54DA20658E2F58742EBB451FBDF7F10A(L_0, L_1, L_2, 0, ((int32_t)14), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Dom4(Org.BouncyCastle.Crypto.IXof,System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Dom4_m4125DCE96F214D94F2CD75C54D862DF8574FF09B (RuntimeObject* ___d0, uint8_t ___phflag1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___Dom4Prefix_33;
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___ctx2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, 2)), ((int32_t)(((RuntimeArray*)L_2)->max_length)))));
		V_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___Dom4Prefix_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_4, (RuntimeArray*)L_5, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		int32_t L_7 = V_0;
		uint8_t L_8 = ___phflag1;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		int32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___ctx2;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((RuntimeArray*)L_11)->max_length))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___ctx2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		int32_t L_14 = V_0;
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_12, (RuntimeArray*)L_13, ((int32_t)il2cpp_codegen_add(L_14, 2)), NULL);
		RuntimeObject* L_15 = ___d0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_15, L_16, 0, ((int32_t)(((RuntimeArray*)L_17)->max_length)));
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Encode24(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Encode24_m7F7D0BA8834EF2E283EB4E0916B48838DCEB9D9E (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs1;
		int32_t L_1 = ___off2;
		uint32_t L_2 = ___n0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs1;
		int32_t L_4 = ___off2;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		___off2 = L_5;
		uint32_t L_6 = ___n0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_6>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___bs1;
		int32_t L_8 = ___off2;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		___off2 = L_9;
		uint32_t L_10 = ___n0;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Encode32(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Encode32_mB66F38BBC09AA5BC2FC7425E86297EAAD1A7CC79 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs1;
		int32_t L_1 = ___off2;
		uint32_t L_2 = ___n0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___bs1;
		int32_t L_4 = ___off2;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		___off2 = L_5;
		uint32_t L_6 = ___n0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_6>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___bs1;
		int32_t L_8 = ___off2;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		___off2 = L_9;
		uint32_t L_10 = ___n0;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___bs1;
		int32_t L_12 = ___off2;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		___off2 = L_13;
		uint32_t L_14 = ___n0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_14>>((int32_t)24)))));
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Encode56(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Encode56_m546611AC7AC2BB3AA87AA2F431D4325CCFC23445 (uint64_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ___n0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bs1;
		int32_t L_2 = ___off2;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_Encode32_mB66F38BBC09AA5BC2FC7425E86297EAAD1A7CC79(((int32_t)(uint32_t)L_0), L_1, L_2, NULL);
		uint64_t L_3 = ___n0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___bs1;
		int32_t L_5 = ___off2;
		Ed448_Encode24_m7F7D0BA8834EF2E283EB4E0916B48838DCEB9D9E(((int32_t)(uint32_t)((int64_t)((uint64_t)L_3>>((int32_t)32)))), L_4, ((int32_t)il2cpp_codegen_add(L_5, 4)), NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Math.EC.Rfc8032.Ed448::EncodePoint(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed448_EncodePoint_m6EFB064E6BDD9DF5638FD653A8B8ADCC526CCBA2 (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r1, int32_t ___rOff2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_1 = L_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_2 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___z_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_1;
		X448Field_Inv_m27D508D80A51F31463ACB46B6EFC924048E556A6(L_3, L_4, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_5 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___x_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_6, L_7, L_8, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_9 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___y_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_1;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_10, L_11, L_12, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		X448Field_Normalize_m28D257AC52601B6B435B1DCF0215E0BA9DC5762D(L_13, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_1;
		X448Field_Normalize_m28D257AC52601B6B435B1DCF0215E0BA9DC5762D(L_14, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = Ed448_CheckPoint_m86CE49B474578669BB37B358A074222D2E578312(L_15, L_16, NULL);
		V_2 = L_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___r1;
		int32_t L_20 = ___rOff2;
		X448Field_Encode_m0A25DB30AC6F72F954D767194CEB1964274691BF(L_18, L_19, L_20, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___r1;
		int32_t L_22 = ___rOff2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_0;
		int32_t L_24 = 0;
		uint32_t L_25 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_22, ((int32_t)57))), 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_25&1))<<7))));
		int32_t L_26 = V_2;
		return L_26;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::GeneratePrivateKey(Org.BouncyCastle.Security.SecureRandom,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_GeneratePrivateKey_m3D11B9DB1F1B116EA531772555CA0338BF3FEA36 (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k1, const RuntimeMethod* method) 
{
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_0 = ___random0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___k1;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_0, L_1);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::GeneratePublicKey(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_GeneratePublicKey_m9E0CA5E7BB5367AA00AD2A656E00162F4B140615 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Ed448_CreateXof_m09DDB193C17D4AF47E3C880CC9DD9782075C4A33(NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)114));
		V_1 = L_1;
		RuntimeObject* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___sk0;
		int32_t L_4 = ___skOff1;
		int32_t L_5 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___SecretKeySize_31;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		RuntimeObject* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::DoFinal(System.Byte[],System.Int32,System.Int32) */, IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var, L_6, L_7, 0, ((int32_t)(((RuntimeArray*)L_8)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_2 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
		Ed448_PruneScalar_m8D57C66D3E29653DDC6194D91D7C335E6C37387F(L_11, 0, L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___pk2;
		int32_t L_15 = ___pkOff3;
		Ed448_ScalarMultBaseEncoded_mE41F94091F35554F98F3A8349846263ED622C7ED(L_13, L_14, L_15, NULL);
		return;
	}
}
// System.UInt32 Org.BouncyCastle.Math.EC.Rfc8032.Ed448::GetWindow4(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_GetWindow4_m3D3931587DFF5D4DDE3788A013BD240DC00052E1 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___n1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___n1;
		V_0 = ((int32_t)((uint32_t)L_0>>3));
		int32_t L_1 = ___n1;
		V_1 = ((int32_t)(((int32_t)(L_1&7))<<2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___x0;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = V_1;
		return ((int32_t)(((int32_t)((uint32_t)L_5>>((int32_t)(L_6&((int32_t)31)))))&((int32_t)15)));
	}
}
// System.SByte[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448::GetWnafVar(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Ed448_GetWnafVar_m69E9BB2EAAB402CA90FEDDD95B594228A8640BEB (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___n0, int32_t ___width1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint32_t V_4 = 0;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_5 = NULL;
	int32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		V_0 = L_0;
		V_1 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = V_0;
		V_2 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		V_3 = ((int32_t)14);
		goto IL_0034;
	}

IL_0013:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___n0;
		int32_t L_3 = V_3;
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_4 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		int32_t L_7 = V_2;
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		V_2 = L_8;
		uint32_t L_9 = V_4;
		uint32_t L_10 = V_1;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_9>>((int32_t)16)))|((int32_t)((int32_t)L_10<<((int32_t)16))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		int32_t L_12 = V_2;
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		V_2 = L_13;
		uint32_t L_14 = V_4;
		uint32_t L_15 = L_14;
		V_1 = L_15;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)L_15);
	}

IL_0034:
	{
		int32_t L_16 = V_3;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		V_3 = L_17;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_18 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var, (uint32_t)((int32_t)447));
		V_5 = L_18;
		int32_t L_19 = ___width1;
		V_6 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_19));
		V_7 = 0;
		V_8 = 0;
		V_9 = 0;
		goto IL_00be;
	}

IL_0059:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_0;
		int32_t L_21 = V_9;
		int32_t L_22 = L_21;
		uint32_t L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_10 = L_23;
		goto IL_00ab;
	}

IL_0061:
	{
		uint32_t L_24 = V_10;
		int32_t L_25 = V_8;
		V_11 = ((int32_t)((uint32_t)L_24>>((int32_t)(L_25&((int32_t)31)))));
		uint32_t L_26 = V_11;
		V_12 = ((int32_t)((int32_t)L_26&1));
		uint32_t L_27 = V_12;
		uint32_t L_28 = V_7;
		if ((!(((uint32_t)L_27) == ((uint32_t)L_28))))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_29 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		goto IL_00ab;
	}

IL_007f:
	{
		uint32_t L_30 = V_11;
		int32_t L_31 = V_6;
		V_13 = ((int32_t)(((int32_t)((int32_t)L_30|1))<<((int32_t)(L_31&((int32_t)31)))));
		uint32_t L_32 = V_13;
		V_7 = ((int32_t)((uint32_t)L_32>>((int32_t)31)));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_33 = V_5;
		int32_t L_34 = V_9;
		int32_t L_35 = V_8;
		uint32_t L_36 = V_13;
		int32_t L_37 = V_6;
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)(L_34<<4)), L_35))), (int8_t)((int8_t)((int32_t)((int32_t)L_36>>((int32_t)(L_37&((int32_t)31)))))));
		int32_t L_38 = V_8;
		int32_t L_39 = ___width1;
		V_8 = ((int32_t)il2cpp_codegen_add(L_38, L_39));
	}

IL_00ab:
	{
		int32_t L_40 = V_8;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)16))))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_41 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_42, ((int32_t)16)));
	}

IL_00be:
	{
		int32_t L_43 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_0;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0059;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_45 = V_5;
		return L_45;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ImplSign(Org.BouncyCastle.Crypto.IXof,System.Byte[],System.Byte[],System.Byte[],System.Int32,System.Byte[],System.Byte,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ImplSign_m33CA91B30BC2932FC28F3025B225A448287A262F (RuntimeObject* ___d0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___h1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk3, int32_t ___pkOff4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx5, uint8_t ___phflag6, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m7, int32_t ___mOff8, int32_t ___mLen9, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig10, int32_t ___sigOff11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___d0;
		uint8_t L_1 = ___phflag6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___ctx5;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_Dom4_m4125DCE96F214D94F2CD75C54D862DF8574FF09B(L_0, L_1, L_2, NULL);
		RuntimeObject* L_3 = ___d0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___h1;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_3, L_4, ((int32_t)57), ((int32_t)57));
		RuntimeObject* L_5 = ___d0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___m7;
		int32_t L_7 = ___mOff8;
		int32_t L_8 = ___mLen9;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8);
		RuntimeObject* L_9 = ___d0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___h1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___h1;
		int32_t L_12;
		L_12 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::DoFinal(System.Byte[],System.Int32,System.Int32) */, IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var, L_9, L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___h1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = Ed448_ReduceScalar_m2ED71F07CC2E61326FAEF81D8007A4F0DD6CFF5B(L_13, NULL);
		V_0 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_1 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		Ed448_ScalarMultBaseEncoded_mE41F94091F35554F98F3A8349846263ED622C7ED(L_16, L_17, 0, NULL);
		RuntimeObject* L_18 = ___d0;
		uint8_t L_19 = ___phflag6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___ctx5;
		Ed448_Dom4_m4125DCE96F214D94F2CD75C54D862DF8574FF09B(L_18, L_19, L_20, NULL);
		RuntimeObject* L_21 = ___d0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_21, L_22, 0, ((int32_t)57));
		RuntimeObject* L_23 = ___d0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___pk3;
		int32_t L_25 = ___pkOff4;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_23, L_24, L_25, ((int32_t)57));
		RuntimeObject* L_26 = ___d0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___m7;
		int32_t L_28 = ___mOff8;
		int32_t L_29 = ___mLen9;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_26, L_27, L_28, L_29);
		RuntimeObject* L_30 = ___d0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___h1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___h1;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::DoFinal(System.Byte[],System.Int32,System.Int32) */, IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var, L_30, L_31, 0, ((int32_t)(((RuntimeArray*)L_32)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___h1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = Ed448_ReduceScalar_m2ED71F07CC2E61326FAEF81D8007A4F0DD6CFF5B(L_34, NULL);
		V_2 = L_35;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___s2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39;
		L_39 = Ed448_CalculateS_m00E3993A9E1BD45C54A7C8EBCEF08F3C334B4BFE(L_36, L_37, L_38, NULL);
		V_3 = L_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___sig10;
		int32_t L_42 = ___sigOff11;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_40, 0, (RuntimeArray*)L_41, L_42, ((int32_t)57), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ___sig10;
		int32_t L_45 = ___sigOff11;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_43, 0, (RuntimeArray*)L_44, ((int32_t)il2cpp_codegen_add(L_45, ((int32_t)57))), ((int32_t)57), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ImplSign(System.Byte[],System.Int32,System.Byte[],System.Byte,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ImplSign_mCD4C75C23A281EB6E8937AB85C29BFF715B00AC1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx2, uint8_t ___phflag3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m4, int32_t ___mOff5, int32_t ___mLen6, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig7, int32_t ___sigOff8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___ctx2;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Ed448_CheckContextVar_m02CC9167EBB6E1AF763614C90DF6A8C7563478E6(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_ImplSign_mCD4C75C23A281EB6E8937AB85C29BFF715B00AC1_RuntimeMethod_var)));
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = Ed448_CreateXof_m09DDB193C17D4AF47E3C880CC9DD9782075C4A33(NULL);
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)114));
		V_1 = L_4;
		RuntimeObject* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___sk0;
		int32_t L_7 = ___skOff1;
		int32_t L_8 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___SecretKeySize_31;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8);
		RuntimeObject* L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		int32_t L_12;
		L_12 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::DoFinal(System.Byte[],System.Int32,System.Int32) */, IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var, L_9, L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_2 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		Ed448_PruneScalar_m8D57C66D3E29653DDC6194D91D7C335E6C37387F(L_14, 0, L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_3 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_3;
		Ed448_ScalarMultBaseEncoded_mE41F94091F35554F98F3A8349846263ED622C7ED(L_17, L_18, 0, NULL);
		RuntimeObject* L_19 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___ctx2;
		uint8_t L_24 = ___phflag3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___m4;
		int32_t L_26 = ___mOff5;
		int32_t L_27 = ___mLen6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___sig7;
		int32_t L_29 = ___sigOff8;
		Ed448_ImplSign_m33CA91B30BC2932FC28F3025B225A448287A262F(L_19, L_20, L_21, L_22, 0, L_23, L_24, L_25, L_26, L_27, L_28, L_29, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ImplSign(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Byte,System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ImplSign_m5A14EBD67C56CECA1BE1DA20C5AF34EF64EDEA28 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, uint8_t ___phflag5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m6, int32_t ___mOff7, int32_t ___mLen8, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig9, int32_t ___sigOff10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___ctx4;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Ed448_CheckContextVar_m02CC9167EBB6E1AF763614C90DF6A8C7563478E6(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_ImplSign_m5A14EBD67C56CECA1BE1DA20C5AF34EF64EDEA28_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = Ed448_CreateXof_m09DDB193C17D4AF47E3C880CC9DD9782075C4A33(NULL);
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)114));
		V_1 = L_4;
		RuntimeObject* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___sk0;
		int32_t L_7 = ___skOff1;
		int32_t L_8 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___SecretKeySize_31;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8);
		RuntimeObject* L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		int32_t L_12;
		L_12 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::DoFinal(System.Byte[],System.Int32,System.Int32) */, IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var, L_9, L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_2 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		Ed448_PruneScalar_m8D57C66D3E29653DDC6194D91D7C335E6C37387F(L_14, 0, L_15, NULL);
		RuntimeObject* L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___pk2;
		int32_t L_20 = ___pkOff3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___ctx4;
		uint8_t L_22 = ___phflag5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___m6;
		int32_t L_24 = ___mOff7;
		int32_t L_25 = ___mLen8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___sig9;
		int32_t L_27 = ___sigOff10;
		Ed448_ImplSign_m33CA91B30BC2932FC28F3025B225A448287A262F(L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, L_25, L_26, L_27, NULL);
		return;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ImplVerify(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Byte,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_ImplVerify_mD20F7349EEC9CBF693375BDFD31C905F45AA2451 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig0, int32_t ___sigOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, uint8_t ___phflag5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m6, int32_t ___mOff7, int32_t ___mLen8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_8 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___ctx4;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Ed448_CheckContextVar_m02CC9167EBB6E1AF763614C90DF6A8C7563478E6(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_ImplVerify_mD20F7349EEC9CBF693375BDFD31C905F45AA2451_RuntimeMethod_var)));
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___sig0;
		int32_t L_4 = ___sigOff1;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Ed448_Copy_mFFED7C881DD29DD7D3B28F621FEAB3CA1012374C(L_3, L_4, ((int32_t)57), NULL);
		V_0 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___sig0;
		int32_t L_7 = ___sigOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = Ed448_Copy_mFFED7C881DD29DD7D3B28F621FEAB3CA1012374C(L_6, ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)57))), ((int32_t)57), NULL);
		V_1 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		bool L_10;
		L_10 = Ed448_CheckPointVar_m2105E10610992C458D757C967799DFE5FD5CC5FD(L_9, NULL);
		if (L_10)
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_2 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Ed448_CheckScalarVar_m9000A81032FECCD772EA1BE663F52AD731E96EC3(L_12, L_13, NULL);
		if (L_14)
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0048:
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_15 = (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)il2cpp_codegen_object_new(PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7(L_15, NULL);
		V_3 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___pk2;
		int32_t L_17 = ___pkOff3;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_18 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Ed448_DecodePointVar_m8703292141B19BE4E199CA3903605B7587585B96(L_16, L_17, (bool)1, L_18, NULL);
		if (L_19)
		{
			goto IL_005b;
		}
	}
	{
		return (bool)0;
	}

IL_005b:
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		RuntimeObject* L_20;
		L_20 = Ed448_CreateXof_m09DDB193C17D4AF47E3C880CC9DD9782075C4A33(NULL);
		V_4 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)114));
		V_5 = L_21;
		RuntimeObject* L_22 = V_4;
		uint8_t L_23 = ___phflag5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___ctx4;
		Ed448_Dom4_m4125DCE96F214D94F2CD75C54D862DF8574FF09B(L_22, L_23, L_24, NULL);
		RuntimeObject* L_25 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_25, L_26, 0, ((int32_t)57));
		RuntimeObject* L_27 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___pk2;
		int32_t L_29 = ___pkOff3;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_27, L_28, L_29, ((int32_t)57));
		RuntimeObject* L_30 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___m6;
		int32_t L_32 = ___mOff7;
		int32_t L_33 = ___mLen8;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_30, L_31, L_32, L_33);
		RuntimeObject* L_34 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_5;
		int32_t L_37;
		L_37 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::DoFinal(System.Byte[],System.Int32,System.Int32) */, IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var, L_34, L_35, 0, ((int32_t)(((RuntimeArray*)L_36)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39;
		L_39 = Ed448_ReduceScalar_m2ED71F07CC2E61326FAEF81D8007A4F0DD6CFF5B(L_38, NULL);
		V_6 = L_39;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_7 = L_40;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = V_7;
		Ed448_DecodeScalar_mA4714B8D920EFEA5AD685480EF3ECB744F070FC1(L_41, 0, L_42, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_43 = (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)il2cpp_codegen_object_new(PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7(L_43, NULL);
		V_8 = L_43;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = V_7;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_46 = V_3;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_47 = V_8;
		Ed448_ScalarMultStrausVar_mAFD4EA44DC3CAE02842E567A7CD18D928AACE9D2(L_44, L_45, L_46, L_47, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_9 = L_48;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_49 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_9;
		int32_t L_51;
		L_51 = Ed448_EncodePoint_m6EFB064E6BDD9DF5638FD653A8B8ADCC526CCBA2(L_49, L_50, 0, NULL);
		if (!L_51)
		{
			goto IL_00f4;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_54;
		L_54 = Arrays_AreEqual_mF00C3B51F7520663ADB08744EA3A1995B9421C18(L_52, L_53, NULL);
		return L_54;
	}

IL_00f4:
	{
		return (bool)0;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed448::IsNeutralElementVar(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_IsNeutralElementVar_mFDC7C5AE44B5837B119BF361BE47CFA945F7089F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = X448Field_IsZeroVar_m66A2422FBD302F46255DE30062EE21833A59264F(L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = X448Field_IsOneVar_m6B778D12780F415C7101858B7CABFE6D77988D9B(L_2, NULL);
		return L_3;
	}

IL_000f:
	{
		return (bool)0;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed448::IsNeutralElementVar(System.UInt32[],System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_IsNeutralElementVar_mCE4A121C34A8E890398A97FCE71B3CCD1E0804DB (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = X448Field_IsZeroVar_m66A2422FBD302F46255DE30062EE21833A59264F(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___y1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___z2;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = X448Field_AreEqualVar_m4D234011F3126BFD6E6576B469D7B046CA0C17F5(L_2, L_3, NULL);
		return L_4;
	}

IL_0010:
	{
		return (bool)0;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointAdd(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointAdd_mA86CE533581BC7C402FCAE8831BFDDF8548EA08B (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p0, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2;
		L_2 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_2 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3;
		L_3 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_3 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4;
		L_4 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_4 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5;
		L_5 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_5 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6;
		L_6 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_6 = L_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7;
		L_7 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_7 = L_7;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_8 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___z_2;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_10 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___z_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_9, L_11, L_12, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_1;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_13, L_14, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_15 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->___x_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_17 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___x_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_2;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_16, L_18, L_19, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_20 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = L_20->___y_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_22 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = L_22->___y_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_3;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_21, L_23, L_24, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_4;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_25, L_26, L_27, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_4;
		X448Field_Mul_m117ADD5620C51D90B64DDA41105DD0559C62A1C2(L_28, ((int32_t)39081), L_29, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_5;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_30, L_31, L_32, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = V_6;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_33, L_34, L_35, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_36 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___x_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_38 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = L_38->___y_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = V_1;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_37, L_39, L_40, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_41 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = L_41->___x_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_43 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = L_43->___y_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = V_4;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_42, L_44, L_45, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_7;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_46, L_47, L_48, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_1;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_49, L_50, L_51, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = V_4;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_52, L_53, L_54, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = V_1;
		X448Field_Carry_m92553C05BD554B9E155FB2DCB9E9F1E859030E5F(L_55, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = V_7;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_56, L_57, L_58, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = V_7;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_59, L_60, L_61, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = V_4;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_62, L_63, L_64, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = V_7;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_67 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = L_67->___x_0;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_65, L_66, L_68, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = V_6;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_71 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = L_71->___y_1;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_69, L_70, L_72, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = V_6;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_75 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = L_75->___z_2;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_73, L_74, L_76, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointAddVar(System.Boolean,Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointAddVar_m8ABA02B2C2E3566FA0B5A9627716936605815CD7 (bool ___negate0, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p1, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_8 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_9 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_10 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_11 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2;
		L_2 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_2 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3;
		L_3 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_3 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4;
		L_4 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_4 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5;
		L_5 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_5 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6;
		L_6 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_6 = L_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7;
		L_7 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_7 = L_7;
		bool L_8 = ___negate0;
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_4;
		V_8 = L_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		V_9 = L_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_6;
		V_10 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_5;
		V_11 = L_12;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_13 = ___p1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13->___y_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_15 = ___p1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->___x_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_7;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_14, L_16, L_17, NULL);
		goto IL_007d;
	}

IL_005b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_1;
		V_8 = L_18;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_4;
		V_9 = L_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_5;
		V_10 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_6;
		V_11 = L_21;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_22 = ___p1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = L_22->___y_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_24 = ___p1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = L_24->___x_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_7;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_23, L_25, L_26, NULL);
	}

IL_007d:
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_27 = ___p1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = L_27->___z_2;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_29 = ___r2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = L_29->___z_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_0;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_28, L_30, L_31, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_1;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_32, L_33, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_34 = ___p1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = L_34->___x_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_36 = ___r2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___x_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = V_2;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_35, L_37, L_38, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_39 = ___p1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = L_39->___y_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_41 = ___r2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = L_41->___y_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_3;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_40, L_42, L_43, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = V_4;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_44, L_45, L_46, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_4;
		X448Field_Mul_m117ADD5620C51D90B64DDA41105DD0559C62A1C2(L_47, ((int32_t)39081), L_48, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_10;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_49, L_50, L_51, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = V_11;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_52, L_53, L_54, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_55 = ___r2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = L_55->___x_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_57 = ___r2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = L_57->___y_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = V_4;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_56, L_58, L_59, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = V_7;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_60, L_61, L_62, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_8;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_63, L_64, L_65, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = V_9;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_66, L_67, L_68, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = V_8;
		X448Field_Carry_m92553C05BD554B9E155FB2DCB9E9F1E859030E5F(L_69, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = V_7;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_70, L_71, L_72, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = V_7;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_73, L_74, L_75, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = V_4;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_76, L_77, L_78, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = V_7;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_81 = ___r2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = L_81->___x_0;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_79, L_80, L_82, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = V_6;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_85 = ___r2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = L_85->___y_1;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_83, L_84, L_86, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = V_6;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_89 = ___r2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = L_89->___z_2;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_87, L_88, L_90, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointAddPrecomp(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointPrecomp,Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointAddPrecomp_m1A485846999F06D8A79DF3066B7E9745C68D07A3 (PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* ___p0, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2;
		L_2 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_2 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3;
		L_3 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_3 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4;
		L_4 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_4 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5;
		L_5 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_5 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6;
		L_6 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_6 = L_6;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_7 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7->___z_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_8, L_9, NULL);
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_10 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___x_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_12 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12->___x_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_1;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_11, L_13, L_14, NULL);
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_15 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->___y_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_17 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___y_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_2;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_16, L_18, L_19, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_3;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_20, L_21, L_22, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_3;
		X448Field_Mul_m117ADD5620C51D90B64DDA41105DD0559C62A1C2(L_23, ((int32_t)39081), L_24, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_4;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_25, L_26, L_27, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_5;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_28, L_29, L_30, NULL);
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_31 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = L_31->___x_0;
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_33 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = L_33->___y_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = V_0;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_32, L_34, L_35, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_36 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___x_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_38 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = L_38->___y_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = V_3;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_37, L_39, L_40, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_6;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_41, L_42, L_43, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = V_0;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_44, L_45, L_46, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_3;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_47, L_48, L_49, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = V_0;
		X448Field_Carry_m92553C05BD554B9E155FB2DCB9E9F1E859030E5F(L_50, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = V_6;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_51, L_52, L_53, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = V_6;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_55 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = L_55->___z_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = V_6;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_54, L_56, L_57, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = V_3;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_59 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = L_59->___z_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = V_3;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_58, L_60, L_61, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = V_6;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_64 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = L_64->___x_0;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_62, L_63, L_65, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = V_5;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_68 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = L_68->___y_1;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_66, L_67, L_69, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = V_5;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_72 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = L_72->___z_2;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_70, L_71, L_73, NULL);
		return;
	}
}
// Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointCopy(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* Ed448_PointCopy_m24C998E5370D6E283EE11D53DF824D8FF4AEE3AA (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_0 = NULL;
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_0 = (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)il2cpp_codegen_object_new(PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7(L_0, NULL);
		V_0 = L_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_1 = ___p0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_PointCopy_m092B1E1F5473557B2CE42512309A94893D14A3C7(L_1, L_2, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_3 = V_0;
		return L_3;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointCopy(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointCopy_m092B1E1F5473557B2CE42512309A94893D14A3C7 (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p0, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_0 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___x_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_2 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_1, 0, L_3, 0, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_4 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___y_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_6 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6->___y_1;
		X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_5, 0, L_7, 0, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_8 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___z_2;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_10 = ___r1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___z_2;
		X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_9, 0, L_11, 0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointDouble(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointDouble_m6CA61510693B1AFB8C7654572948190EBAB136DC (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2;
		L_2 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_2 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3;
		L_3 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_3 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4;
		L_4 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_4 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5;
		L_5 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
		V_5 = L_5;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_6 = ___r0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6->___x_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_8 = ___r0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___y_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_7, L_9, L_10, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_11, L_12, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_13 = ___r0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13->___x_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_1;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_14, L_15, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_16 = ___r0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = L_16->___y_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_2;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_17, L_18, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_3;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_19, L_20, L_21, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_3;
		X448Field_Carry_m92553C05BD554B9E155FB2DCB9E9F1E859030E5F(L_22, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_23 = ___r0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = L_23->___z_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_4;
		X448Field_Sqr_mAB16B964F4F6F46A4969E9229BB4A4495FABC00D(L_24, L_25, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_4;
		X448Field_Add_m47AD2150DBF8C5A6C0064D279D03D96C307AF17A(L_26, L_27, L_28, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_4;
		X448Field_Carry_m92553C05BD554B9E155FB2DCB9E9F1E859030E5F(L_29, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_5;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_30, L_31, L_32, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = V_0;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_33, L_34, L_35, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = V_1;
		X448Field_Sub_m8E543EB576AEBA16E60B68B4B73B0E594D2BB42A(L_36, L_37, L_38, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = V_5;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_41 = ___r0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = L_41->___x_0;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_39, L_40, L_42, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_45 = ___r0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = L_45->___y_1;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_43, L_44, L_46, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_5;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_49 = ___r0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = L_49->___z_2;
		X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_47, L_48, L_50, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointExtendXY(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointExtendXY_m0886BB994850B3828576669D936973B20912F066 (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_0 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___z_2;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_One_m302C720B789D86CC7A05264E583C57D211288C1C(L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointLookup(System.Int32,System.Int32,Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointPrecomp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointLookup_m108F6ABB9E0AEDD87B295B423EC1646E289FE500 (int32_t ___block0, int32_t ___index1, PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* ___p2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___block0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)16))), 2)), ((int32_t)16)));
		V_1 = 0;
		goto IL_004b;
	}

IL_000e:
	{
		int32_t L_1 = V_1;
		int32_t L_2 = ___index1;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_1^L_2)), 1))>>((int32_t)31)));
		int32_t L_3 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBase_40;
		int32_t L_5 = V_0;
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_6 = ___p2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_CMov_mFA107A40CC7714E4E54DD111E11C13A4AFE58182(L_3, L_4, L_5, L_7, 0, NULL);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)16)));
		int32_t L_9 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBase_40;
		int32_t L_11 = V_0;
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_12 = ___p2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12->___y_1;
		X448Field_CMov_mFA107A40CC7714E4E54DD111E11C13A4AFE58182(L_9, L_10, L_11, L_13, 0, NULL);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)16)));
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004b:
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)16))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointLookup(System.UInt32[],System.Int32,System.UInt32[],Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointLookup_mC4CB7046A4489CBDFBE8A86E08F9372B7AC26F83 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, int32_t ___n1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___table2, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		int32_t L_1 = ___n1;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = Ed448_GetWindow4_m3D3931587DFF5D4DDE3788A013BD240DC00052E1(L_0, L_1, NULL);
		V_0 = L_2;
		uint32_t L_3 = V_0;
		V_1 = ((int32_t)(((int32_t)((uint32_t)L_3>>3))^1));
		uint32_t L_4 = V_0;
		int32_t L_5 = V_1;
		V_2 = ((int32_t)(((int32_t)((int32_t)L_4^((-L_5))))&7));
		V_3 = 0;
		V_4 = 0;
		goto IL_0072;
	}

IL_001c:
	{
		int32_t L_6 = V_3;
		int32_t L_7 = V_2;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_6^L_7)), 1))>>((int32_t)31)));
		int32_t L_8 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___table2;
		int32_t L_10 = V_4;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_11 = ___r3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_CMov_mFA107A40CC7714E4E54DD111E11C13A4AFE58182(L_8, L_9, L_10, L_12, 0, NULL);
		int32_t L_13 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)16)));
		int32_t L_14 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___table2;
		int32_t L_16 = V_4;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_17 = ___r3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___y_1;
		X448Field_CMov_mFA107A40CC7714E4E54DD111E11C13A4AFE58182(L_14, L_15, L_16, L_18, 0, NULL);
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)16)));
		int32_t L_20 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___table2;
		int32_t L_22 = V_4;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_23 = ___r3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = L_23->___z_2;
		X448Field_CMov_mFA107A40CC7714E4E54DD111E11C13A4AFE58182(L_20, L_21, L_22, L_24, 0, NULL);
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, ((int32_t)16)));
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0072:
	{
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) < ((int32_t)8)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_28 = V_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_29 = ___r3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = L_29->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_CNegate_m10B9F9B7B0763D632C60D7CC9717B41EB4455D73(L_28, L_30, NULL);
		return;
	}
}
// System.UInt32[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointPrecompute(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Ed448_PointPrecompute_mEAEB9D246C0FB4F81FB3199E8CAB80CFCD60C103 (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p0, int32_t ___count1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_0 = NULL;
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_0 = ___p0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_1;
		L_1 = Ed448_PointCopy_m24C998E5370D6E283EE11D53DF824D8FF4AEE3AA(L_0, NULL);
		V_0 = L_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_2 = V_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_3;
		L_3 = Ed448_PointCopy_m24C998E5370D6E283EE11D53DF824D8FF4AEE3AA(L_2, NULL);
		V_1 = L_3;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_4 = V_1;
		Ed448_PointDouble_m6CA61510693B1AFB8C7654572948190EBAB136DC(L_4, NULL);
		int32_t L_5 = ___count1;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6;
		L_6 = X448Field_CreateTable_m046D1F4EDA1C8D8A11A487430E4B3B4A08564838(((int32_t)il2cpp_codegen_multiply(L_5, 3)), NULL);
		V_2 = L_6;
		V_3 = 0;
		V_4 = 0;
	}

IL_0022:
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7->___x_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_2;
		int32_t L_10 = V_3;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_8, 0, L_9, L_10, NULL);
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)16)));
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_12 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12->___y_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_2;
		int32_t L_15 = V_3;
		X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_13, 0, L_14, L_15, NULL);
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)16)));
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_17 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___z_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_2;
		int32_t L_20 = V_3;
		X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_18, 0, L_19, L_20, NULL);
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, ((int32_t)16)));
		int32_t L_22 = V_4;
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		V_4 = L_23;
		int32_t L_24 = ___count1;
		if ((((int32_t)L_23) == ((int32_t)L_24)))
		{
			goto IL_006e;
		}
	}
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_25 = V_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_26 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_PointAdd_mA86CE533581BC7C402FCAE8831BFDDF8548EA08B(L_25, L_26, NULL);
		goto IL_0022;
	}

IL_006e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_2;
		return L_27;
	}
}
// Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointPrecomputeVar(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* Ed448_PointPrecomputeVar_m330A4DF40F8E5E08F87DD15A60DB6B3A9EB01E82 (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p0, int32_t ___count1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_0 = NULL;
	PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* V_1 = NULL;
	int32_t V_2 = 0;
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_0 = ___p0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_1;
		L_1 = Ed448_PointCopy_m24C998E5370D6E283EE11D53DF824D8FF4AEE3AA(L_0, NULL);
		V_0 = L_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_2 = V_0;
		Ed448_PointDouble_m6CA61510693B1AFB8C7654572948190EBAB136DC(L_2, NULL);
		int32_t L_3 = ___count1;
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_4 = (PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7*)(PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7*)SZArrayNew(PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_5 = V_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_6 = ___p0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_7;
		L_7 = Ed448_PointCopy_m24C998E5370D6E283EE11D53DF824D8FF4AEE3AA(L_6, NULL);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)L_7);
		V_2 = 1;
		goto IL_003c;
	}

IL_0021:
	{
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_8 = V_1;
		int32_t L_9 = V_2;
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_10 = V_1;
		int32_t L_11 = V_2;
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_14;
		L_14 = Ed448_PointCopy_m24C998E5370D6E283EE11D53DF824D8FF4AEE3AA(L_13, NULL);
		ArrayElementTypeCheck (L_8, L_14);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)L_14);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_15 = V_0;
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_16 = V_1;
		int32_t L_17 = V_2;
		int32_t L_18 = L_17;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		Ed448_PointAddVar_m8ABA02B2C2E3566FA0B5A9627716936605815CD7((bool)0, L_15, L_19, NULL);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_003c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = ___count1;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0021;
		}
	}
	{
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_23 = V_1;
		return L_23;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PointSetNeutral(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointSetNeutral_m6BA2561BFA2634F19739F5E6B6A6CA10E2F2B3DB (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_0 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Zero_m9C90DD63C757640FAB477D7EBFCC7C113E3FA6E9(L_1, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_2 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___y_1;
		X448Field_One_m302C720B789D86CC7A05264E583C57D211288C1C(L_3, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_4 = ___p0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___z_2;
		X448Field_One_m302C720B789D86CC7A05264E583C57D211288C1C(L_5, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Precompute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Precompute_m8456BD8E6476A7B7A67CAB9B7E5BF7051F1D99BE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* V_3 = NULL;
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_12 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_13 = NULL;
	int32_t V_14 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_15 = NULL;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_18 = NULL;
	RuntimeObject* V_19 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompLock_38;
		RuntimeObject* L_1 = L_0;
		V_19 = L_1;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02a2:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_19;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBase_40;
				if (!L_3)
				{
					goto IL_0019_1;
				}
			}
			{
				goto IL_02aa;
			}

IL_0019_1:
			{
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_4 = (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)il2cpp_codegen_object_new(PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
				PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7(L_4, NULL);
				V_0 = L_4;
				il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___B_x_36;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_6 = V_0;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6->___x_0;
				il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
				X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_5, 0, L_7, 0, NULL);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___B_y_37;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_9 = V_0;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___y_1;
				X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_8, 0, L_10, 0, NULL);
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_11 = V_0;
				Ed448_PointExtendXY_m0886BB994850B3828576669D936973B20912F066(L_11, NULL);
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_12 = V_0;
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_13;
				L_13 = Ed448_PointPrecomputeVar_m330A4DF40F8E5E08F87DD15A60DB6B3A9EB01E82(L_12, ((int32_t)32), NULL);
				((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBaseTable_39 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBaseTable_39), (void*)L_13);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14;
				L_14 = X448Field_CreateTable_m046D1F4EDA1C8D8A11A487430E4B3B4A08564838(((int32_t)160), NULL);
				((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBase_40 = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBase_40), (void*)L_14);
				V_1 = 0;
				V_2 = 0;
				goto IL_0299_1;
			}

IL_006e_1:
			{
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_15 = (PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7*)(PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7*)SZArrayNew(PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7_il2cpp_TypeInfo_var, (uint32_t)5);
				V_3 = L_15;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_16 = (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)il2cpp_codegen_object_new(PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
				PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7(L_16, NULL);
				V_4 = L_16;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_17 = V_4;
				il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
				Ed448_PointSetNeutral_m6BA2561BFA2634F19739F5E6B6A6CA10E2F2B3DB(L_17, NULL);
				V_5 = 0;
				goto IL_00c5_1;
			}

IL_0088_1:
			{
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_18 = V_0;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_19 = V_4;
				il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
				Ed448_PointAddVar_m8ABA02B2C2E3566FA0B5A9627716936605815CD7((bool)1, L_18, L_19, NULL);
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_20 = V_0;
				Ed448_PointDouble_m6CA61510693B1AFB8C7654572948190EBAB136DC(L_20, NULL);
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_21 = V_3;
				int32_t L_22 = V_5;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_23 = V_0;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_24;
				L_24 = Ed448_PointCopy_m24C998E5370D6E283EE11D53DF824D8FF4AEE3AA(L_23, NULL);
				ArrayElementTypeCheck (L_21, L_24);
				(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22), (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)L_24);
				int32_t L_25 = V_2;
				int32_t L_26 = V_5;
				if ((((int32_t)((int32_t)il2cpp_codegen_add(L_25, L_26))) == ((int32_t)8)))
				{
					goto IL_00bf_1;
				}
			}
			{
				V_6 = 1;
				goto IL_00b9_1;
			}

IL_00ad_1:
			{
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_27 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
				Ed448_PointDouble_m6CA61510693B1AFB8C7654572948190EBAB136DC(L_27, NULL);
				int32_t L_28 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_28, 1));
			}

IL_00b9_1:
			{
				int32_t L_29 = V_6;
				if ((((int32_t)L_29) < ((int32_t)((int32_t)18))))
				{
					goto IL_00ad_1;
				}
			}

IL_00bf_1:
			{
				int32_t L_30 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_30, 1));
			}

IL_00c5_1:
			{
				int32_t L_31 = V_5;
				if ((((int32_t)L_31) < ((int32_t)5)))
				{
					goto IL_0088_1;
				}
			}
			{
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_32 = (PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7*)(PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7*)SZArrayNew(PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
				V_7 = L_32;
				V_8 = 0;
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_33 = V_7;
				int32_t L_34 = V_8;
				int32_t L_35 = L_34;
				V_8 = ((int32_t)il2cpp_codegen_add(L_35, 1));
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_36 = V_4;
				ArrayElementTypeCheck (L_33, L_36);
				(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35), (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)L_36);
				V_9 = 0;
				goto IL_012e_1;
			}

IL_00e7_1:
			{
				int32_t L_37 = V_9;
				V_10 = ((int32_t)(1<<((int32_t)(L_37&((int32_t)31)))));
				V_11 = 0;
				goto IL_0122_1;
			}

IL_00f5_1:
			{
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_38 = V_7;
				int32_t L_39 = V_8;
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_40 = V_7;
				int32_t L_41 = V_8;
				int32_t L_42 = V_10;
				int32_t L_43 = ((int32_t)il2cpp_codegen_subtract(L_41, L_42));
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_44 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
				il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_45;
				L_45 = Ed448_PointCopy_m24C998E5370D6E283EE11D53DF824D8FF4AEE3AA(L_44, NULL);
				ArrayElementTypeCheck (L_38, L_45);
				(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39), (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)L_45);
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_46 = V_3;
				int32_t L_47 = V_9;
				int32_t L_48 = L_47;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_49 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_50 = V_7;
				int32_t L_51 = V_8;
				int32_t L_52 = L_51;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_53 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
				Ed448_PointAddVar_m8ABA02B2C2E3566FA0B5A9627716936605815CD7((bool)0, L_49, L_53, NULL);
				int32_t L_54 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_54, 1));
				int32_t L_55 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_55, 1));
			}

IL_0122_1:
			{
				int32_t L_56 = V_11;
				int32_t L_57 = V_10;
				if ((((int32_t)L_56) < ((int32_t)L_57)))
				{
					goto IL_00f5_1;
				}
			}
			{
				int32_t L_58 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_58, 1));
			}

IL_012e_1:
			{
				int32_t L_59 = V_9;
				if ((((int32_t)L_59) < ((int32_t)4)))
				{
					goto IL_00e7_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60;
				L_60 = X448Field_CreateTable_m046D1F4EDA1C8D8A11A487430E4B3B4A08564838(((int32_t)16), NULL);
				V_12 = L_60;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61;
				L_61 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
				V_13 = L_61;
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_62 = V_7;
				int32_t L_63 = 0;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_64 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63));
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = L_64->___z_2;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = V_13;
				X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_65, 0, L_66, 0, NULL);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = V_13;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = V_12;
				X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_67, 0, L_68, 0, NULL);
				V_14 = 0;
				goto IL_0187_1;
			}

IL_0165_1:
			{
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = V_13;
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_70 = V_7;
				int32_t L_71 = V_14;
				int32_t L_72 = L_71;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_73 = (L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = L_73->___z_2;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = V_13;
				il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
				X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_69, L_74, L_75, NULL);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = V_13;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = V_12;
				int32_t L_78 = V_14;
				X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_76, 0, L_77, ((int32_t)il2cpp_codegen_multiply(L_78, ((int32_t)16))), NULL);
			}

IL_0187_1:
			{
				int32_t L_79 = V_14;
				int32_t L_80 = ((int32_t)il2cpp_codegen_add(L_79, 1));
				V_14 = L_80;
				if ((((int32_t)L_80) < ((int32_t)((int32_t)16))))
				{
					goto IL_0165_1;
				}
			}
			{
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = V_13;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = V_13;
				il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
				X448Field_InvVar_mEE86B423AE4590A4747CC4196B46F5E8E4946528(L_81, L_82, NULL);
				int32_t L_83 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_subtract(L_83, 1));
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84;
				L_84 = X448Field_Create_mF8D80A07631C2E65DE4531DDFE85F968B06971B5(NULL);
				V_15 = L_84;
				goto IL_01ef_1;
			}

IL_01aa_1:
			{
				int32_t L_85 = V_14;
				int32_t L_86 = L_85;
				V_14 = ((int32_t)il2cpp_codegen_subtract(L_86, 1));
				V_16 = L_86;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = V_12;
				int32_t L_88 = V_14;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_89 = V_15;
				il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
				X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_87, ((int32_t)il2cpp_codegen_multiply(L_88, ((int32_t)16))), L_89, 0, NULL);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = V_15;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_91 = V_13;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = V_15;
				X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_90, L_91, L_92, NULL);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_93 = V_15;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = V_12;
				int32_t L_95 = V_16;
				X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_93, 0, L_94, ((int32_t)il2cpp_codegen_multiply(L_95, ((int32_t)16))), NULL);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = V_13;
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_97 = V_7;
				int32_t L_98 = V_16;
				int32_t L_99 = L_98;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_100 = (L_97)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_99));
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_101 = L_100->___z_2;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_102 = V_13;
				X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_96, L_101, L_102, NULL);
			}

IL_01ef_1:
			{
				int32_t L_103 = V_14;
				if ((((int32_t)L_103) > ((int32_t)0)))
				{
					goto IL_01aa_1;
				}
			}
			{
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_104 = V_13;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_105 = V_12;
				il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
				X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_104, 0, L_105, 0, NULL);
				V_17 = 0;
				goto IL_028c_1;
			}

IL_0207_1:
			{
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_106 = V_7;
				int32_t L_107 = V_17;
				int32_t L_108 = L_107;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_109 = (L_106)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_108));
				V_18 = L_109;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_110 = V_12;
				int32_t L_111 = V_17;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_112 = V_18;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_113 = L_112->___z_2;
				il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
				X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_110, ((int32_t)il2cpp_codegen_multiply(L_111, ((int32_t)16))), L_113, 0, NULL);
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_114 = V_18;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_115 = L_114->___x_0;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_116 = V_18;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = L_116->___z_2;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_118 = V_18;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_119 = L_118->___x_0;
				X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_115, L_117, L_119, NULL);
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_120 = V_18;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = L_120->___y_1;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_122 = V_18;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_123 = L_122->___z_2;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_124 = V_18;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_125 = L_124->___y_1;
				X448Field_Mul_m45F0CEB909B58110856419E78DB2F8C99258206C(L_121, L_123, L_125, NULL);
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_126 = V_18;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_127 = L_126->___x_0;
				il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_128 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBase_40;
				int32_t L_129 = V_1;
				X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_127, 0, L_128, L_129, NULL);
				int32_t L_130 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_130, ((int32_t)16)));
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_131 = V_18;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_132 = L_131->___y_1;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_133 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBase_40;
				int32_t L_134 = V_1;
				X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_132, 0, L_133, L_134, NULL);
				int32_t L_135 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_135, ((int32_t)16)));
				int32_t L_136 = V_17;
				V_17 = ((int32_t)il2cpp_codegen_add(L_136, 1));
			}

IL_028c_1:
			{
				int32_t L_137 = V_17;
				if ((((int32_t)L_137) < ((int32_t)((int32_t)16))))
				{
					goto IL_0207_1;
				}
			}
			{
				int32_t L_138 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_138, 1));
			}

IL_0299_1:
			{
				int32_t L_139 = V_2;
				if ((((int32_t)L_139) < ((int32_t)5)))
				{
					goto IL_006e_1;
				}
			}
			{
				goto IL_02aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02aa:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::PruneScalar(System.Byte[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PruneScalar_m8D57C66D3E29653DDC6194D91D7C335E6C37387F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___n0, int32_t ___nOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r2, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___n0;
		int32_t L_1 = ___nOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___r2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, 0, ((int32_t)56), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___r2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		V_0 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6 = 0;
		uint8_t L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_7&((int32_t)252)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___r2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8;
		V_0 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		int32_t L_11 = ((int32_t)55);
		uint8_t L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)55)), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_12|((int32_t)128)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___r2;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)56)), (uint8_t)0);
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ReduceScalar(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed448_ReduceScalar_m2ED71F07CC2E61326FAEF81D8007A4F0DD6CFF5B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	uint64_t V_20 = 0;
	uint64_t V_21 = 0;
	uint64_t V_22 = 0;
	uint64_t V_23 = 0;
	uint64_t V_24 = 0;
	uint64_t V_25 = 0;
	uint64_t V_26 = 0;
	uint64_t V_27 = 0;
	uint64_t V_28 = 0;
	uint64_t V_29 = 0;
	uint64_t V_30 = 0;
	uint64_t V_31 = 0;
	uint64_t V_32 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_33 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___n0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Ed448_Decode32_mEFC4AA805E5B39001100E74CD1904EA24C28B444(L_0, 0, NULL);
		V_0 = ((int64_t)(uint64_t)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___n0;
		uint32_t L_3;
		L_3 = Ed448_Decode24_mF28DBE178BB0317BE64F31E17AC4334DFEB1FC74(L_2, 4, NULL);
		V_1 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_3<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___n0;
		uint32_t L_5;
		L_5 = Ed448_Decode32_mEFC4AA805E5B39001100E74CD1904EA24C28B444(L_4, 7, NULL);
		V_2 = ((int64_t)(uint64_t)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___n0;
		uint32_t L_7;
		L_7 = Ed448_Decode24_mF28DBE178BB0317BE64F31E17AC4334DFEB1FC74(L_6, ((int32_t)11), NULL);
		V_3 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_7<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___n0;
		uint32_t L_9;
		L_9 = Ed448_Decode32_mEFC4AA805E5B39001100E74CD1904EA24C28B444(L_8, ((int32_t)14), NULL);
		V_4 = ((int64_t)(uint64_t)L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___n0;
		uint32_t L_11;
		L_11 = Ed448_Decode24_mF28DBE178BB0317BE64F31E17AC4334DFEB1FC74(L_10, ((int32_t)18), NULL);
		V_5 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_11<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___n0;
		uint32_t L_13;
		L_13 = Ed448_Decode32_mEFC4AA805E5B39001100E74CD1904EA24C28B444(L_12, ((int32_t)21), NULL);
		V_6 = ((int64_t)(uint64_t)L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___n0;
		uint32_t L_15;
		L_15 = Ed448_Decode24_mF28DBE178BB0317BE64F31E17AC4334DFEB1FC74(L_14, ((int32_t)25), NULL);
		V_7 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_15<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___n0;
		uint32_t L_17;
		L_17 = Ed448_Decode32_mEFC4AA805E5B39001100E74CD1904EA24C28B444(L_16, ((int32_t)28), NULL);
		V_8 = ((int64_t)(uint64_t)L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___n0;
		uint32_t L_19;
		L_19 = Ed448_Decode24_mF28DBE178BB0317BE64F31E17AC4334DFEB1FC74(L_18, ((int32_t)32), NULL);
		V_9 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_19<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___n0;
		uint32_t L_21;
		L_21 = Ed448_Decode32_mEFC4AA805E5B39001100E74CD1904EA24C28B444(L_20, ((int32_t)35), NULL);
		V_10 = ((int64_t)(uint64_t)L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___n0;
		uint32_t L_23;
		L_23 = Ed448_Decode24_mF28DBE178BB0317BE64F31E17AC4334DFEB1FC74(L_22, ((int32_t)39), NULL);
		V_11 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_23<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___n0;
		uint32_t L_25;
		L_25 = Ed448_Decode32_mEFC4AA805E5B39001100E74CD1904EA24C28B444(L_24, ((int32_t)42), NULL);
		V_12 = ((int64_t)(uint64_t)L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___n0;
		uint32_t L_27;
		L_27 = Ed448_Decode24_mF28DBE178BB0317BE64F31E17AC4334DFEB1FC74(L_26, ((int32_t)46), NULL);
		V_13 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_27<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___n0;
		uint32_t L_29;
		L_29 = Ed448_Decode32_mEFC4AA805E5B39001100E74CD1904EA24C28B444(L_28, ((int32_t)49), NULL);
		V_14 = ((int64_t)(uint64_t)L_29);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___n0;
		uint32_t L_31;
		L_31 = Ed448_Decode24_mF28DBE178BB0317BE64F31E17AC4334DFEB1FC74(L_30, ((int32_t)53), NULL);
		V_15 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_31<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___n0;
		uint32_t L_33;
		L_33 = Ed448_Decode32_mEFC4AA805E5B39001100E74CD1904EA24C28B444(L_32, ((int32_t)56), NULL);
		V_16 = ((int64_t)(uint64_t)L_33);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___n0;
		uint32_t L_35;
		L_35 = Ed448_Decode24_mF28DBE178BB0317BE64F31E17AC4334DFEB1FC74(L_34, ((int32_t)60), NULL);
		V_17 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_35<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___n0;
		uint32_t L_37;
		L_37 = Ed448_Decode32_mEFC4AA805E5B39001100E74CD1904EA24C28B444(L_36, ((int32_t)63), NULL);
		V_18 = ((int64_t)(uint64_t)L_37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___n0;
		uint32_t L_39;
		L_39 = Ed448_Decode24_mF28DBE178BB0317BE64F31E17AC4334DFEB1FC74(L_38, ((int32_t)67), NULL);
		V_19 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_39<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___n0;
		uint32_t L_41;
		L_41 = Ed448_Decode32_mEFC4AA805E5B39001100E74CD1904EA24C28B444(L_40, ((int32_t)70), NULL);
		V_20 = ((int64_t)(uint64_t)L_41);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___n0;
		uint32_t L_43;
		L_43 = Ed448_Decode24_mF28DBE178BB0317BE64F31E17AC4334DFEB1FC74(L_42, ((int32_t)74), NULL);
		V_21 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_43<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ___n0;
		uint32_t L_45;
		L_45 = Ed448_Decode32_mEFC4AA805E5B39001100E74CD1904EA24C28B444(L_44, ((int32_t)77), NULL);
		V_22 = ((int64_t)(uint64_t)L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___n0;
		uint32_t L_47;
		L_47 = Ed448_Decode24_mF28DBE178BB0317BE64F31E17AC4334DFEB1FC74(L_46, ((int32_t)81), NULL);
		V_23 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_47<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ___n0;
		uint32_t L_49;
		L_49 = Ed448_Decode32_mEFC4AA805E5B39001100E74CD1904EA24C28B444(L_48, ((int32_t)84), NULL);
		V_24 = ((int64_t)(uint64_t)L_49);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ___n0;
		uint32_t L_51;
		L_51 = Ed448_Decode24_mF28DBE178BB0317BE64F31E17AC4334DFEB1FC74(L_50, ((int32_t)88), NULL);
		V_25 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_51<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ___n0;
		uint32_t L_53;
		L_53 = Ed448_Decode32_mEFC4AA805E5B39001100E74CD1904EA24C28B444(L_52, ((int32_t)91), NULL);
		V_26 = ((int64_t)(uint64_t)L_53);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = ___n0;
		uint32_t L_55;
		L_55 = Ed448_Decode24_mF28DBE178BB0317BE64F31E17AC4334DFEB1FC74(L_54, ((int32_t)95), NULL);
		V_27 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_55<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___n0;
		uint32_t L_57;
		L_57 = Ed448_Decode32_mEFC4AA805E5B39001100E74CD1904EA24C28B444(L_56, ((int32_t)98), NULL);
		V_28 = ((int64_t)(uint64_t)L_57);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = ___n0;
		uint32_t L_59;
		L_59 = Ed448_Decode24_mF28DBE178BB0317BE64F31E17AC4334DFEB1FC74(L_58, ((int32_t)102), NULL);
		V_29 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_59<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = ___n0;
		uint32_t L_61;
		L_61 = Ed448_Decode32_mEFC4AA805E5B39001100E74CD1904EA24C28B444(L_60, ((int32_t)105), NULL);
		V_30 = ((int64_t)(uint64_t)L_61);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = ___n0;
		uint32_t L_63;
		L_63 = Ed448_Decode24_mF28DBE178BB0317BE64F31E17AC4334DFEB1FC74(L_62, ((int32_t)109), NULL);
		V_31 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_63<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ___n0;
		uint32_t L_65;
		L_65 = Ed448_Decode16_m7315AB1B8F8FE33D988DECB92635A9B9D28E9251(L_64, ((int32_t)112), NULL);
		V_32 = ((int64_t)(uint64_t)L_65);
		uint64_t L_66 = V_16;
		uint64_t L_67 = V_32;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)il2cpp_codegen_multiply((int64_t)L_67, ((int64_t)((int32_t)43969588))))));
		uint64_t L_68 = V_17;
		uint64_t L_69 = V_32;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_68, ((int64_t)il2cpp_codegen_multiply((int64_t)L_69, ((int64_t)((int32_t)30366549))))));
		uint64_t L_70 = V_18;
		uint64_t L_71 = V_32;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_70, ((int64_t)il2cpp_codegen_multiply((int64_t)L_71, ((int64_t)((int32_t)163752818))))));
		uint64_t L_72 = V_19;
		uint64_t L_73 = V_32;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_72, ((int64_t)il2cpp_codegen_multiply((int64_t)L_73, ((int64_t)((int32_t)258169998))))));
		uint64_t L_74 = V_20;
		uint64_t L_75 = V_32;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_74, ((int64_t)il2cpp_codegen_multiply((int64_t)L_75, ((int64_t)((int32_t)96434764))))));
		uint64_t L_76 = V_21;
		uint64_t L_77 = V_32;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)il2cpp_codegen_multiply((int64_t)L_77, ((int64_t)((int32_t)227822194))))));
		uint64_t L_78 = V_22;
		uint64_t L_79 = V_32;
		V_22 = ((int64_t)il2cpp_codegen_add((int64_t)L_78, ((int64_t)il2cpp_codegen_multiply((int64_t)L_79, ((int64_t)((int32_t)149865618))))));
		uint64_t L_80 = V_23;
		uint64_t L_81 = V_32;
		V_23 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)il2cpp_codegen_multiply((int64_t)L_81, ((int64_t)((int32_t)550336261))))));
		uint64_t L_82 = V_31;
		uint64_t L_83 = V_30;
		V_31 = ((int64_t)il2cpp_codegen_add((int64_t)L_82, ((int64_t)((uint64_t)L_83>>((int32_t)28)))));
		uint64_t L_84 = V_30;
		V_30 = ((int64_t)((int64_t)L_84&((int64_t)((int32_t)268435455))));
		uint64_t L_85 = V_15;
		uint64_t L_86 = V_31;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_85, ((int64_t)il2cpp_codegen_multiply((int64_t)L_86, ((int64_t)((int32_t)43969588))))));
		uint64_t L_87 = V_16;
		uint64_t L_88 = V_31;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_87, ((int64_t)il2cpp_codegen_multiply((int64_t)L_88, ((int64_t)((int32_t)30366549))))));
		uint64_t L_89 = V_17;
		uint64_t L_90 = V_31;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_89, ((int64_t)il2cpp_codegen_multiply((int64_t)L_90, ((int64_t)((int32_t)163752818))))));
		uint64_t L_91 = V_18;
		uint64_t L_92 = V_31;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_91, ((int64_t)il2cpp_codegen_multiply((int64_t)L_92, ((int64_t)((int32_t)258169998))))));
		uint64_t L_93 = V_19;
		uint64_t L_94 = V_31;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_93, ((int64_t)il2cpp_codegen_multiply((int64_t)L_94, ((int64_t)((int32_t)96434764))))));
		uint64_t L_95 = V_20;
		uint64_t L_96 = V_31;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_95, ((int64_t)il2cpp_codegen_multiply((int64_t)L_96, ((int64_t)((int32_t)227822194))))));
		uint64_t L_97 = V_21;
		uint64_t L_98 = V_31;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_97, ((int64_t)il2cpp_codegen_multiply((int64_t)L_98, ((int64_t)((int32_t)149865618))))));
		uint64_t L_99 = V_22;
		uint64_t L_100 = V_31;
		V_22 = ((int64_t)il2cpp_codegen_add((int64_t)L_99, ((int64_t)il2cpp_codegen_multiply((int64_t)L_100, ((int64_t)((int32_t)550336261))))));
		uint64_t L_101 = V_14;
		uint64_t L_102 = V_30;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_101, ((int64_t)il2cpp_codegen_multiply((int64_t)L_102, ((int64_t)((int32_t)43969588))))));
		uint64_t L_103 = V_15;
		uint64_t L_104 = V_30;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, ((int64_t)il2cpp_codegen_multiply((int64_t)L_104, ((int64_t)((int32_t)30366549))))));
		uint64_t L_105 = V_16;
		uint64_t L_106 = V_30;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_105, ((int64_t)il2cpp_codegen_multiply((int64_t)L_106, ((int64_t)((int32_t)163752818))))));
		uint64_t L_107 = V_17;
		uint64_t L_108 = V_30;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_107, ((int64_t)il2cpp_codegen_multiply((int64_t)L_108, ((int64_t)((int32_t)258169998))))));
		uint64_t L_109 = V_18;
		uint64_t L_110 = V_30;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_109, ((int64_t)il2cpp_codegen_multiply((int64_t)L_110, ((int64_t)((int32_t)96434764))))));
		uint64_t L_111 = V_19;
		uint64_t L_112 = V_30;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_111, ((int64_t)il2cpp_codegen_multiply((int64_t)L_112, ((int64_t)((int32_t)227822194))))));
		uint64_t L_113 = V_20;
		uint64_t L_114 = V_30;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_113, ((int64_t)il2cpp_codegen_multiply((int64_t)L_114, ((int64_t)((int32_t)149865618))))));
		uint64_t L_115 = V_21;
		uint64_t L_116 = V_30;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_115, ((int64_t)il2cpp_codegen_multiply((int64_t)L_116, ((int64_t)((int32_t)550336261))))));
		uint64_t L_117 = V_29;
		uint64_t L_118 = V_28;
		V_29 = ((int64_t)il2cpp_codegen_add((int64_t)L_117, ((int64_t)((uint64_t)L_118>>((int32_t)28)))));
		uint64_t L_119 = V_28;
		V_28 = ((int64_t)((int64_t)L_119&((int64_t)((int32_t)268435455))));
		uint64_t L_120 = V_13;
		uint64_t L_121 = V_29;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_120, ((int64_t)il2cpp_codegen_multiply((int64_t)L_121, ((int64_t)((int32_t)43969588))))));
		uint64_t L_122 = V_14;
		uint64_t L_123 = V_29;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_122, ((int64_t)il2cpp_codegen_multiply((int64_t)L_123, ((int64_t)((int32_t)30366549))))));
		uint64_t L_124 = V_15;
		uint64_t L_125 = V_29;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_124, ((int64_t)il2cpp_codegen_multiply((int64_t)L_125, ((int64_t)((int32_t)163752818))))));
		uint64_t L_126 = V_16;
		uint64_t L_127 = V_29;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_126, ((int64_t)il2cpp_codegen_multiply((int64_t)L_127, ((int64_t)((int32_t)258169998))))));
		uint64_t L_128 = V_17;
		uint64_t L_129 = V_29;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_128, ((int64_t)il2cpp_codegen_multiply((int64_t)L_129, ((int64_t)((int32_t)96434764))))));
		uint64_t L_130 = V_18;
		uint64_t L_131 = V_29;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_130, ((int64_t)il2cpp_codegen_multiply((int64_t)L_131, ((int64_t)((int32_t)227822194))))));
		uint64_t L_132 = V_19;
		uint64_t L_133 = V_29;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_132, ((int64_t)il2cpp_codegen_multiply((int64_t)L_133, ((int64_t)((int32_t)149865618))))));
		uint64_t L_134 = V_20;
		uint64_t L_135 = V_29;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_134, ((int64_t)il2cpp_codegen_multiply((int64_t)L_135, ((int64_t)((int32_t)550336261))))));
		uint64_t L_136 = V_12;
		uint64_t L_137 = V_28;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_136, ((int64_t)il2cpp_codegen_multiply((int64_t)L_137, ((int64_t)((int32_t)43969588))))));
		uint64_t L_138 = V_13;
		uint64_t L_139 = V_28;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_138, ((int64_t)il2cpp_codegen_multiply((int64_t)L_139, ((int64_t)((int32_t)30366549))))));
		uint64_t L_140 = V_14;
		uint64_t L_141 = V_28;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_140, ((int64_t)il2cpp_codegen_multiply((int64_t)L_141, ((int64_t)((int32_t)163752818))))));
		uint64_t L_142 = V_15;
		uint64_t L_143 = V_28;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_142, ((int64_t)il2cpp_codegen_multiply((int64_t)L_143, ((int64_t)((int32_t)258169998))))));
		uint64_t L_144 = V_16;
		uint64_t L_145 = V_28;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_144, ((int64_t)il2cpp_codegen_multiply((int64_t)L_145, ((int64_t)((int32_t)96434764))))));
		uint64_t L_146 = V_17;
		uint64_t L_147 = V_28;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_146, ((int64_t)il2cpp_codegen_multiply((int64_t)L_147, ((int64_t)((int32_t)227822194))))));
		uint64_t L_148 = V_18;
		uint64_t L_149 = V_28;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_148, ((int64_t)il2cpp_codegen_multiply((int64_t)L_149, ((int64_t)((int32_t)149865618))))));
		uint64_t L_150 = V_19;
		uint64_t L_151 = V_28;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_150, ((int64_t)il2cpp_codegen_multiply((int64_t)L_151, ((int64_t)((int32_t)550336261))))));
		uint64_t L_152 = V_27;
		uint64_t L_153 = V_26;
		V_27 = ((int64_t)il2cpp_codegen_add((int64_t)L_152, ((int64_t)((uint64_t)L_153>>((int32_t)28)))));
		uint64_t L_154 = V_26;
		V_26 = ((int64_t)((int64_t)L_154&((int64_t)((int32_t)268435455))));
		uint64_t L_155 = V_11;
		uint64_t L_156 = V_27;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_155, ((int64_t)il2cpp_codegen_multiply((int64_t)L_156, ((int64_t)((int32_t)43969588))))));
		uint64_t L_157 = V_12;
		uint64_t L_158 = V_27;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_157, ((int64_t)il2cpp_codegen_multiply((int64_t)L_158, ((int64_t)((int32_t)30366549))))));
		uint64_t L_159 = V_13;
		uint64_t L_160 = V_27;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_159, ((int64_t)il2cpp_codegen_multiply((int64_t)L_160, ((int64_t)((int32_t)163752818))))));
		uint64_t L_161 = V_14;
		uint64_t L_162 = V_27;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_161, ((int64_t)il2cpp_codegen_multiply((int64_t)L_162, ((int64_t)((int32_t)258169998))))));
		uint64_t L_163 = V_15;
		uint64_t L_164 = V_27;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_163, ((int64_t)il2cpp_codegen_multiply((int64_t)L_164, ((int64_t)((int32_t)96434764))))));
		uint64_t L_165 = V_16;
		uint64_t L_166 = V_27;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_165, ((int64_t)il2cpp_codegen_multiply((int64_t)L_166, ((int64_t)((int32_t)227822194))))));
		uint64_t L_167 = V_17;
		uint64_t L_168 = V_27;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_167, ((int64_t)il2cpp_codegen_multiply((int64_t)L_168, ((int64_t)((int32_t)149865618))))));
		uint64_t L_169 = V_18;
		uint64_t L_170 = V_27;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_169, ((int64_t)il2cpp_codegen_multiply((int64_t)L_170, ((int64_t)((int32_t)550336261))))));
		uint64_t L_171 = V_10;
		uint64_t L_172 = V_26;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_171, ((int64_t)il2cpp_codegen_multiply((int64_t)L_172, ((int64_t)((int32_t)43969588))))));
		uint64_t L_173 = V_11;
		uint64_t L_174 = V_26;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_173, ((int64_t)il2cpp_codegen_multiply((int64_t)L_174, ((int64_t)((int32_t)30366549))))));
		uint64_t L_175 = V_12;
		uint64_t L_176 = V_26;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_175, ((int64_t)il2cpp_codegen_multiply((int64_t)L_176, ((int64_t)((int32_t)163752818))))));
		uint64_t L_177 = V_13;
		uint64_t L_178 = V_26;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_177, ((int64_t)il2cpp_codegen_multiply((int64_t)L_178, ((int64_t)((int32_t)258169998))))));
		uint64_t L_179 = V_14;
		uint64_t L_180 = V_26;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_179, ((int64_t)il2cpp_codegen_multiply((int64_t)L_180, ((int64_t)((int32_t)96434764))))));
		uint64_t L_181 = V_15;
		uint64_t L_182 = V_26;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_181, ((int64_t)il2cpp_codegen_multiply((int64_t)L_182, ((int64_t)((int32_t)227822194))))));
		uint64_t L_183 = V_16;
		uint64_t L_184 = V_26;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_183, ((int64_t)il2cpp_codegen_multiply((int64_t)L_184, ((int64_t)((int32_t)149865618))))));
		uint64_t L_185 = V_17;
		uint64_t L_186 = V_26;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_185, ((int64_t)il2cpp_codegen_multiply((int64_t)L_186, ((int64_t)((int32_t)550336261))))));
		uint64_t L_187 = V_25;
		uint64_t L_188 = V_24;
		V_25 = ((int64_t)il2cpp_codegen_add((int64_t)L_187, ((int64_t)((uint64_t)L_188>>((int32_t)28)))));
		uint64_t L_189 = V_24;
		V_24 = ((int64_t)((int64_t)L_189&((int64_t)((int32_t)268435455))));
		uint64_t L_190 = V_9;
		uint64_t L_191 = V_25;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_190, ((int64_t)il2cpp_codegen_multiply((int64_t)L_191, ((int64_t)((int32_t)43969588))))));
		uint64_t L_192 = V_10;
		uint64_t L_193 = V_25;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_192, ((int64_t)il2cpp_codegen_multiply((int64_t)L_193, ((int64_t)((int32_t)30366549))))));
		uint64_t L_194 = V_11;
		uint64_t L_195 = V_25;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_194, ((int64_t)il2cpp_codegen_multiply((int64_t)L_195, ((int64_t)((int32_t)163752818))))));
		uint64_t L_196 = V_12;
		uint64_t L_197 = V_25;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_196, ((int64_t)il2cpp_codegen_multiply((int64_t)L_197, ((int64_t)((int32_t)258169998))))));
		uint64_t L_198 = V_13;
		uint64_t L_199 = V_25;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_198, ((int64_t)il2cpp_codegen_multiply((int64_t)L_199, ((int64_t)((int32_t)96434764))))));
		uint64_t L_200 = V_14;
		uint64_t L_201 = V_25;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_200, ((int64_t)il2cpp_codegen_multiply((int64_t)L_201, ((int64_t)((int32_t)227822194))))));
		uint64_t L_202 = V_15;
		uint64_t L_203 = V_25;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_202, ((int64_t)il2cpp_codegen_multiply((int64_t)L_203, ((int64_t)((int32_t)149865618))))));
		uint64_t L_204 = V_16;
		uint64_t L_205 = V_25;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_204, ((int64_t)il2cpp_codegen_multiply((int64_t)L_205, ((int64_t)((int32_t)550336261))))));
		uint64_t L_206 = V_21;
		uint64_t L_207 = V_20;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_206, ((int64_t)((uint64_t)L_207>>((int32_t)28)))));
		uint64_t L_208 = V_20;
		V_20 = ((int64_t)((int64_t)L_208&((int64_t)((int32_t)268435455))));
		uint64_t L_209 = V_22;
		uint64_t L_210 = V_21;
		V_22 = ((int64_t)il2cpp_codegen_add((int64_t)L_209, ((int64_t)((uint64_t)L_210>>((int32_t)28)))));
		uint64_t L_211 = V_21;
		V_21 = ((int64_t)((int64_t)L_211&((int64_t)((int32_t)268435455))));
		uint64_t L_212 = V_23;
		uint64_t L_213 = V_22;
		V_23 = ((int64_t)il2cpp_codegen_add((int64_t)L_212, ((int64_t)((uint64_t)L_213>>((int32_t)28)))));
		uint64_t L_214 = V_22;
		V_22 = ((int64_t)((int64_t)L_214&((int64_t)((int32_t)268435455))));
		uint64_t L_215 = V_24;
		uint64_t L_216 = V_23;
		V_24 = ((int64_t)il2cpp_codegen_add((int64_t)L_215, ((int64_t)((uint64_t)L_216>>((int32_t)28)))));
		uint64_t L_217 = V_23;
		V_23 = ((int64_t)((int64_t)L_217&((int64_t)((int32_t)268435455))));
		uint64_t L_218 = V_8;
		uint64_t L_219 = V_24;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_218, ((int64_t)il2cpp_codegen_multiply((int64_t)L_219, ((int64_t)((int32_t)43969588))))));
		uint64_t L_220 = V_9;
		uint64_t L_221 = V_24;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_220, ((int64_t)il2cpp_codegen_multiply((int64_t)L_221, ((int64_t)((int32_t)30366549))))));
		uint64_t L_222 = V_10;
		uint64_t L_223 = V_24;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_222, ((int64_t)il2cpp_codegen_multiply((int64_t)L_223, ((int64_t)((int32_t)163752818))))));
		uint64_t L_224 = V_11;
		uint64_t L_225 = V_24;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_224, ((int64_t)il2cpp_codegen_multiply((int64_t)L_225, ((int64_t)((int32_t)258169998))))));
		uint64_t L_226 = V_12;
		uint64_t L_227 = V_24;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_226, ((int64_t)il2cpp_codegen_multiply((int64_t)L_227, ((int64_t)((int32_t)96434764))))));
		uint64_t L_228 = V_13;
		uint64_t L_229 = V_24;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_228, ((int64_t)il2cpp_codegen_multiply((int64_t)L_229, ((int64_t)((int32_t)227822194))))));
		uint64_t L_230 = V_14;
		uint64_t L_231 = V_24;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_230, ((int64_t)il2cpp_codegen_multiply((int64_t)L_231, ((int64_t)((int32_t)149865618))))));
		uint64_t L_232 = V_15;
		uint64_t L_233 = V_24;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_232, ((int64_t)il2cpp_codegen_multiply((int64_t)L_233, ((int64_t)((int32_t)550336261))))));
		uint64_t L_234 = V_7;
		uint64_t L_235 = V_23;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_234, ((int64_t)il2cpp_codegen_multiply((int64_t)L_235, ((int64_t)((int32_t)43969588))))));
		uint64_t L_236 = V_8;
		uint64_t L_237 = V_23;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_236, ((int64_t)il2cpp_codegen_multiply((int64_t)L_237, ((int64_t)((int32_t)30366549))))));
		uint64_t L_238 = V_9;
		uint64_t L_239 = V_23;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_238, ((int64_t)il2cpp_codegen_multiply((int64_t)L_239, ((int64_t)((int32_t)163752818))))));
		uint64_t L_240 = V_10;
		uint64_t L_241 = V_23;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_240, ((int64_t)il2cpp_codegen_multiply((int64_t)L_241, ((int64_t)((int32_t)258169998))))));
		uint64_t L_242 = V_11;
		uint64_t L_243 = V_23;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_242, ((int64_t)il2cpp_codegen_multiply((int64_t)L_243, ((int64_t)((int32_t)96434764))))));
		uint64_t L_244 = V_12;
		uint64_t L_245 = V_23;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_244, ((int64_t)il2cpp_codegen_multiply((int64_t)L_245, ((int64_t)((int32_t)227822194))))));
		uint64_t L_246 = V_13;
		uint64_t L_247 = V_23;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_246, ((int64_t)il2cpp_codegen_multiply((int64_t)L_247, ((int64_t)((int32_t)149865618))))));
		uint64_t L_248 = V_14;
		uint64_t L_249 = V_23;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_248, ((int64_t)il2cpp_codegen_multiply((int64_t)L_249, ((int64_t)((int32_t)550336261))))));
		uint64_t L_250 = V_6;
		uint64_t L_251 = V_22;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_250, ((int64_t)il2cpp_codegen_multiply((int64_t)L_251, ((int64_t)((int32_t)43969588))))));
		uint64_t L_252 = V_7;
		uint64_t L_253 = V_22;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_252, ((int64_t)il2cpp_codegen_multiply((int64_t)L_253, ((int64_t)((int32_t)30366549))))));
		uint64_t L_254 = V_8;
		uint64_t L_255 = V_22;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_254, ((int64_t)il2cpp_codegen_multiply((int64_t)L_255, ((int64_t)((int32_t)163752818))))));
		uint64_t L_256 = V_9;
		uint64_t L_257 = V_22;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_256, ((int64_t)il2cpp_codegen_multiply((int64_t)L_257, ((int64_t)((int32_t)258169998))))));
		uint64_t L_258 = V_10;
		uint64_t L_259 = V_22;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_258, ((int64_t)il2cpp_codegen_multiply((int64_t)L_259, ((int64_t)((int32_t)96434764))))));
		uint64_t L_260 = V_11;
		uint64_t L_261 = V_22;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_260, ((int64_t)il2cpp_codegen_multiply((int64_t)L_261, ((int64_t)((int32_t)227822194))))));
		uint64_t L_262 = V_12;
		uint64_t L_263 = V_22;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_262, ((int64_t)il2cpp_codegen_multiply((int64_t)L_263, ((int64_t)((int32_t)149865618))))));
		uint64_t L_264 = V_13;
		uint64_t L_265 = V_22;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_264, ((int64_t)il2cpp_codegen_multiply((int64_t)L_265, ((int64_t)((int32_t)550336261))))));
		uint64_t L_266 = V_18;
		uint64_t L_267 = V_17;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_266, ((int64_t)((uint64_t)L_267>>((int32_t)28)))));
		uint64_t L_268 = V_17;
		V_17 = ((int64_t)((int64_t)L_268&((int64_t)((int32_t)268435455))));
		uint64_t L_269 = V_19;
		uint64_t L_270 = V_18;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_269, ((int64_t)((uint64_t)L_270>>((int32_t)28)))));
		uint64_t L_271 = V_18;
		V_18 = ((int64_t)((int64_t)L_271&((int64_t)((int32_t)268435455))));
		uint64_t L_272 = V_20;
		uint64_t L_273 = V_19;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_272, ((int64_t)((uint64_t)L_273>>((int32_t)28)))));
		uint64_t L_274 = V_19;
		V_19 = ((int64_t)((int64_t)L_274&((int64_t)((int32_t)268435455))));
		uint64_t L_275 = V_21;
		uint64_t L_276 = V_20;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_275, ((int64_t)((uint64_t)L_276>>((int32_t)28)))));
		uint64_t L_277 = V_20;
		V_20 = ((int64_t)((int64_t)L_277&((int64_t)((int32_t)268435455))));
		uint64_t L_278 = V_5;
		uint64_t L_279 = V_21;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_278, ((int64_t)il2cpp_codegen_multiply((int64_t)L_279, ((int64_t)((int32_t)43969588))))));
		uint64_t L_280 = V_6;
		uint64_t L_281 = V_21;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_280, ((int64_t)il2cpp_codegen_multiply((int64_t)L_281, ((int64_t)((int32_t)30366549))))));
		uint64_t L_282 = V_7;
		uint64_t L_283 = V_21;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_282, ((int64_t)il2cpp_codegen_multiply((int64_t)L_283, ((int64_t)((int32_t)163752818))))));
		uint64_t L_284 = V_8;
		uint64_t L_285 = V_21;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_284, ((int64_t)il2cpp_codegen_multiply((int64_t)L_285, ((int64_t)((int32_t)258169998))))));
		uint64_t L_286 = V_9;
		uint64_t L_287 = V_21;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_286, ((int64_t)il2cpp_codegen_multiply((int64_t)L_287, ((int64_t)((int32_t)96434764))))));
		uint64_t L_288 = V_10;
		uint64_t L_289 = V_21;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_288, ((int64_t)il2cpp_codegen_multiply((int64_t)L_289, ((int64_t)((int32_t)227822194))))));
		uint64_t L_290 = V_11;
		uint64_t L_291 = V_21;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_290, ((int64_t)il2cpp_codegen_multiply((int64_t)L_291, ((int64_t)((int32_t)149865618))))));
		uint64_t L_292 = V_12;
		uint64_t L_293 = V_21;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_292, ((int64_t)il2cpp_codegen_multiply((int64_t)L_293, ((int64_t)((int32_t)550336261))))));
		uint64_t L_294 = V_4;
		uint64_t L_295 = V_20;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_294, ((int64_t)il2cpp_codegen_multiply((int64_t)L_295, ((int64_t)((int32_t)43969588))))));
		uint64_t L_296 = V_5;
		uint64_t L_297 = V_20;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_296, ((int64_t)il2cpp_codegen_multiply((int64_t)L_297, ((int64_t)((int32_t)30366549))))));
		uint64_t L_298 = V_6;
		uint64_t L_299 = V_20;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_298, ((int64_t)il2cpp_codegen_multiply((int64_t)L_299, ((int64_t)((int32_t)163752818))))));
		uint64_t L_300 = V_7;
		uint64_t L_301 = V_20;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_300, ((int64_t)il2cpp_codegen_multiply((int64_t)L_301, ((int64_t)((int32_t)258169998))))));
		uint64_t L_302 = V_8;
		uint64_t L_303 = V_20;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_302, ((int64_t)il2cpp_codegen_multiply((int64_t)L_303, ((int64_t)((int32_t)96434764))))));
		uint64_t L_304 = V_9;
		uint64_t L_305 = V_20;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_304, ((int64_t)il2cpp_codegen_multiply((int64_t)L_305, ((int64_t)((int32_t)227822194))))));
		uint64_t L_306 = V_10;
		uint64_t L_307 = V_20;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_306, ((int64_t)il2cpp_codegen_multiply((int64_t)L_307, ((int64_t)((int32_t)149865618))))));
		uint64_t L_308 = V_11;
		uint64_t L_309 = V_20;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_308, ((int64_t)il2cpp_codegen_multiply((int64_t)L_309, ((int64_t)((int32_t)550336261))))));
		uint64_t L_310 = V_3;
		uint64_t L_311 = V_19;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_310, ((int64_t)il2cpp_codegen_multiply((int64_t)L_311, ((int64_t)((int32_t)43969588))))));
		uint64_t L_312 = V_4;
		uint64_t L_313 = V_19;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_312, ((int64_t)il2cpp_codegen_multiply((int64_t)L_313, ((int64_t)((int32_t)30366549))))));
		uint64_t L_314 = V_5;
		uint64_t L_315 = V_19;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_314, ((int64_t)il2cpp_codegen_multiply((int64_t)L_315, ((int64_t)((int32_t)163752818))))));
		uint64_t L_316 = V_6;
		uint64_t L_317 = V_19;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_316, ((int64_t)il2cpp_codegen_multiply((int64_t)L_317, ((int64_t)((int32_t)258169998))))));
		uint64_t L_318 = V_7;
		uint64_t L_319 = V_19;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_318, ((int64_t)il2cpp_codegen_multiply((int64_t)L_319, ((int64_t)((int32_t)96434764))))));
		uint64_t L_320 = V_8;
		uint64_t L_321 = V_19;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_320, ((int64_t)il2cpp_codegen_multiply((int64_t)L_321, ((int64_t)((int32_t)227822194))))));
		uint64_t L_322 = V_9;
		uint64_t L_323 = V_19;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_322, ((int64_t)il2cpp_codegen_multiply((int64_t)L_323, ((int64_t)((int32_t)149865618))))));
		uint64_t L_324 = V_10;
		uint64_t L_325 = V_19;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_324, ((int64_t)il2cpp_codegen_multiply((int64_t)L_325, ((int64_t)((int32_t)550336261))))));
		uint64_t L_326 = V_15;
		uint64_t L_327 = V_14;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_326, ((int64_t)((uint64_t)L_327>>((int32_t)28)))));
		uint64_t L_328 = V_14;
		V_14 = ((int64_t)((int64_t)L_328&((int64_t)((int32_t)268435455))));
		uint64_t L_329 = V_16;
		uint64_t L_330 = V_15;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_329, ((int64_t)((uint64_t)L_330>>((int32_t)28)))));
		uint64_t L_331 = V_15;
		V_15 = ((int64_t)((int64_t)L_331&((int64_t)((int32_t)268435455))));
		uint64_t L_332 = V_17;
		uint64_t L_333 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_332, ((int64_t)((uint64_t)L_333>>((int32_t)28)))));
		uint64_t L_334 = V_16;
		V_16 = ((int64_t)((int64_t)L_334&((int64_t)((int32_t)268435455))));
		uint64_t L_335 = V_18;
		uint64_t L_336 = V_17;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_335, ((int64_t)((uint64_t)L_336>>((int32_t)28)))));
		uint64_t L_337 = V_17;
		V_17 = ((int64_t)((int64_t)L_337&((int64_t)((int32_t)268435455))));
		uint64_t L_338 = V_2;
		uint64_t L_339 = V_18;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_338, ((int64_t)il2cpp_codegen_multiply((int64_t)L_339, ((int64_t)((int32_t)43969588))))));
		uint64_t L_340 = V_3;
		uint64_t L_341 = V_18;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_340, ((int64_t)il2cpp_codegen_multiply((int64_t)L_341, ((int64_t)((int32_t)30366549))))));
		uint64_t L_342 = V_4;
		uint64_t L_343 = V_18;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_342, ((int64_t)il2cpp_codegen_multiply((int64_t)L_343, ((int64_t)((int32_t)163752818))))));
		uint64_t L_344 = V_5;
		uint64_t L_345 = V_18;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_344, ((int64_t)il2cpp_codegen_multiply((int64_t)L_345, ((int64_t)((int32_t)258169998))))));
		uint64_t L_346 = V_6;
		uint64_t L_347 = V_18;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_346, ((int64_t)il2cpp_codegen_multiply((int64_t)L_347, ((int64_t)((int32_t)96434764))))));
		uint64_t L_348 = V_7;
		uint64_t L_349 = V_18;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_348, ((int64_t)il2cpp_codegen_multiply((int64_t)L_349, ((int64_t)((int32_t)227822194))))));
		uint64_t L_350 = V_8;
		uint64_t L_351 = V_18;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_350, ((int64_t)il2cpp_codegen_multiply((int64_t)L_351, ((int64_t)((int32_t)149865618))))));
		uint64_t L_352 = V_9;
		uint64_t L_353 = V_18;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_352, ((int64_t)il2cpp_codegen_multiply((int64_t)L_353, ((int64_t)((int32_t)550336261))))));
		uint64_t L_354 = V_1;
		uint64_t L_355 = V_17;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_354, ((int64_t)il2cpp_codegen_multiply((int64_t)L_355, ((int64_t)((int32_t)43969588))))));
		uint64_t L_356 = V_2;
		uint64_t L_357 = V_17;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_356, ((int64_t)il2cpp_codegen_multiply((int64_t)L_357, ((int64_t)((int32_t)30366549))))));
		uint64_t L_358 = V_3;
		uint64_t L_359 = V_17;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_358, ((int64_t)il2cpp_codegen_multiply((int64_t)L_359, ((int64_t)((int32_t)163752818))))));
		uint64_t L_360 = V_4;
		uint64_t L_361 = V_17;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_360, ((int64_t)il2cpp_codegen_multiply((int64_t)L_361, ((int64_t)((int32_t)258169998))))));
		uint64_t L_362 = V_5;
		uint64_t L_363 = V_17;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_362, ((int64_t)il2cpp_codegen_multiply((int64_t)L_363, ((int64_t)((int32_t)96434764))))));
		uint64_t L_364 = V_6;
		uint64_t L_365 = V_17;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_364, ((int64_t)il2cpp_codegen_multiply((int64_t)L_365, ((int64_t)((int32_t)227822194))))));
		uint64_t L_366 = V_7;
		uint64_t L_367 = V_17;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_366, ((int64_t)il2cpp_codegen_multiply((int64_t)L_367, ((int64_t)((int32_t)149865618))))));
		uint64_t L_368 = V_8;
		uint64_t L_369 = V_17;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_368, ((int64_t)il2cpp_codegen_multiply((int64_t)L_369, ((int64_t)((int32_t)550336261))))));
		uint64_t L_370 = V_16;
		V_16 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_370, ((int64_t)4)));
		uint64_t L_371 = V_16;
		uint64_t L_372 = V_15;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_371, ((int64_t)((uint64_t)L_372>>((int32_t)26)))));
		uint64_t L_373 = V_15;
		V_15 = ((int64_t)((int64_t)L_373&((int64_t)((int32_t)67108863))));
		uint64_t L_374 = V_16;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_374, ((int64_t)1)));
		uint64_t L_375 = V_0;
		uint64_t L_376 = V_16;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_375, ((int64_t)il2cpp_codegen_multiply((int64_t)L_376, ((int64_t)((int32_t)78101261))))));
		uint64_t L_377 = V_1;
		uint64_t L_378 = V_16;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_377, ((int64_t)il2cpp_codegen_multiply((int64_t)L_378, ((int64_t)((int32_t)141809365))))));
		uint64_t L_379 = V_2;
		uint64_t L_380 = V_16;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_379, ((int64_t)il2cpp_codegen_multiply((int64_t)L_380, ((int64_t)((int32_t)175155932))))));
		uint64_t L_381 = V_3;
		uint64_t L_382 = V_16;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_381, ((int64_t)il2cpp_codegen_multiply((int64_t)L_382, ((int64_t)((int32_t)64542499))))));
		uint64_t L_383 = V_4;
		uint64_t L_384 = V_16;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_383, ((int64_t)il2cpp_codegen_multiply((int64_t)L_384, ((int64_t)((int32_t)158326419))))));
		uint64_t L_385 = V_5;
		uint64_t L_386 = V_16;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_385, ((int64_t)il2cpp_codegen_multiply((int64_t)L_386, ((int64_t)((int32_t)191173276))))));
		uint64_t L_387 = V_6;
		uint64_t L_388 = V_16;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_387, ((int64_t)il2cpp_codegen_multiply((int64_t)L_388, ((int64_t)((int32_t)104575268))))));
		uint64_t L_389 = V_7;
		uint64_t L_390 = V_16;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_389, ((int64_t)il2cpp_codegen_multiply((int64_t)L_390, ((int64_t)((int32_t)137584065))))));
		uint64_t L_391 = V_1;
		uint64_t L_392 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_391, ((int64_t)((uint64_t)L_392>>((int32_t)28)))));
		uint64_t L_393 = V_0;
		V_0 = ((int64_t)((int64_t)L_393&((int64_t)((int32_t)268435455))));
		uint64_t L_394 = V_2;
		uint64_t L_395 = V_1;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_394, ((int64_t)((uint64_t)L_395>>((int32_t)28)))));
		uint64_t L_396 = V_1;
		V_1 = ((int64_t)((int64_t)L_396&((int64_t)((int32_t)268435455))));
		uint64_t L_397 = V_3;
		uint64_t L_398 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_397, ((int64_t)((uint64_t)L_398>>((int32_t)28)))));
		uint64_t L_399 = V_2;
		V_2 = ((int64_t)((int64_t)L_399&((int64_t)((int32_t)268435455))));
		uint64_t L_400 = V_4;
		uint64_t L_401 = V_3;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_400, ((int64_t)((uint64_t)L_401>>((int32_t)28)))));
		uint64_t L_402 = V_3;
		V_3 = ((int64_t)((int64_t)L_402&((int64_t)((int32_t)268435455))));
		uint64_t L_403 = V_5;
		uint64_t L_404 = V_4;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_403, ((int64_t)((uint64_t)L_404>>((int32_t)28)))));
		uint64_t L_405 = V_4;
		V_4 = ((int64_t)((int64_t)L_405&((int64_t)((int32_t)268435455))));
		uint64_t L_406 = V_6;
		uint64_t L_407 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_406, ((int64_t)((uint64_t)L_407>>((int32_t)28)))));
		uint64_t L_408 = V_5;
		V_5 = ((int64_t)((int64_t)L_408&((int64_t)((int32_t)268435455))));
		uint64_t L_409 = V_7;
		uint64_t L_410 = V_6;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_409, ((int64_t)((uint64_t)L_410>>((int32_t)28)))));
		uint64_t L_411 = V_6;
		V_6 = ((int64_t)((int64_t)L_411&((int64_t)((int32_t)268435455))));
		uint64_t L_412 = V_8;
		uint64_t L_413 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_412, ((int64_t)((uint64_t)L_413>>((int32_t)28)))));
		uint64_t L_414 = V_7;
		V_7 = ((int64_t)((int64_t)L_414&((int64_t)((int32_t)268435455))));
		uint64_t L_415 = V_9;
		uint64_t L_416 = V_8;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_415, ((int64_t)((uint64_t)L_416>>((int32_t)28)))));
		uint64_t L_417 = V_8;
		V_8 = ((int64_t)((int64_t)L_417&((int64_t)((int32_t)268435455))));
		uint64_t L_418 = V_10;
		uint64_t L_419 = V_9;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_418, ((int64_t)((uint64_t)L_419>>((int32_t)28)))));
		uint64_t L_420 = V_9;
		V_9 = ((int64_t)((int64_t)L_420&((int64_t)((int32_t)268435455))));
		uint64_t L_421 = V_11;
		uint64_t L_422 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_421, ((int64_t)((uint64_t)L_422>>((int32_t)28)))));
		uint64_t L_423 = V_10;
		V_10 = ((int64_t)((int64_t)L_423&((int64_t)((int32_t)268435455))));
		uint64_t L_424 = V_12;
		uint64_t L_425 = V_11;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_424, ((int64_t)((uint64_t)L_425>>((int32_t)28)))));
		uint64_t L_426 = V_11;
		V_11 = ((int64_t)((int64_t)L_426&((int64_t)((int32_t)268435455))));
		uint64_t L_427 = V_13;
		uint64_t L_428 = V_12;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_427, ((int64_t)((uint64_t)L_428>>((int32_t)28)))));
		uint64_t L_429 = V_12;
		V_12 = ((int64_t)((int64_t)L_429&((int64_t)((int32_t)268435455))));
		uint64_t L_430 = V_14;
		uint64_t L_431 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_430, ((int64_t)((uint64_t)L_431>>((int32_t)28)))));
		uint64_t L_432 = V_13;
		V_13 = ((int64_t)((int64_t)L_432&((int64_t)((int32_t)268435455))));
		uint64_t L_433 = V_15;
		uint64_t L_434 = V_14;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_433, ((int64_t)((uint64_t)L_434>>((int32_t)28)))));
		uint64_t L_435 = V_14;
		V_14 = ((int64_t)((int64_t)L_435&((int64_t)((int32_t)268435455))));
		uint64_t L_436 = V_15;
		V_16 = ((int64_t)((uint64_t)L_436>>((int32_t)26)));
		uint64_t L_437 = V_15;
		V_15 = ((int64_t)((int64_t)L_437&((int64_t)((int32_t)67108863))));
		uint64_t L_438 = V_16;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_438, ((int64_t)1)));
		uint64_t L_439 = V_0;
		uint64_t L_440 = V_16;
		V_0 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_439, ((int64_t)((int64_t)L_440&((int64_t)((int32_t)78101261))))));
		uint64_t L_441 = V_1;
		uint64_t L_442 = V_16;
		V_1 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_441, ((int64_t)((int64_t)L_442&((int64_t)((int32_t)141809365))))));
		uint64_t L_443 = V_2;
		uint64_t L_444 = V_16;
		V_2 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_443, ((int64_t)((int64_t)L_444&((int64_t)((int32_t)175155932))))));
		uint64_t L_445 = V_3;
		uint64_t L_446 = V_16;
		V_3 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_445, ((int64_t)((int64_t)L_446&((int64_t)((int32_t)64542499))))));
		uint64_t L_447 = V_4;
		uint64_t L_448 = V_16;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_447, ((int64_t)((int64_t)L_448&((int64_t)((int32_t)158326419))))));
		uint64_t L_449 = V_5;
		uint64_t L_450 = V_16;
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_449, ((int64_t)((int64_t)L_450&((int64_t)((int32_t)191173276))))));
		uint64_t L_451 = V_6;
		uint64_t L_452 = V_16;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_451, ((int64_t)((int64_t)L_452&((int64_t)((int32_t)104575268))))));
		uint64_t L_453 = V_7;
		uint64_t L_454 = V_16;
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_453, ((int64_t)((int64_t)L_454&((int64_t)((int32_t)137584065))))));
		uint64_t L_455 = V_1;
		uint64_t L_456 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_455, ((int64_t)((int64_t)L_456>>((int32_t)28)))));
		uint64_t L_457 = V_0;
		V_0 = ((int64_t)((int64_t)L_457&((int64_t)((int32_t)268435455))));
		uint64_t L_458 = V_2;
		uint64_t L_459 = V_1;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_458, ((int64_t)((int64_t)L_459>>((int32_t)28)))));
		uint64_t L_460 = V_1;
		V_1 = ((int64_t)((int64_t)L_460&((int64_t)((int32_t)268435455))));
		uint64_t L_461 = V_3;
		uint64_t L_462 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_461, ((int64_t)((int64_t)L_462>>((int32_t)28)))));
		uint64_t L_463 = V_2;
		V_2 = ((int64_t)((int64_t)L_463&((int64_t)((int32_t)268435455))));
		uint64_t L_464 = V_4;
		uint64_t L_465 = V_3;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_464, ((int64_t)((int64_t)L_465>>((int32_t)28)))));
		uint64_t L_466 = V_3;
		V_3 = ((int64_t)((int64_t)L_466&((int64_t)((int32_t)268435455))));
		uint64_t L_467 = V_5;
		uint64_t L_468 = V_4;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_467, ((int64_t)((int64_t)L_468>>((int32_t)28)))));
		uint64_t L_469 = V_4;
		V_4 = ((int64_t)((int64_t)L_469&((int64_t)((int32_t)268435455))));
		uint64_t L_470 = V_6;
		uint64_t L_471 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_470, ((int64_t)((int64_t)L_471>>((int32_t)28)))));
		uint64_t L_472 = V_5;
		V_5 = ((int64_t)((int64_t)L_472&((int64_t)((int32_t)268435455))));
		uint64_t L_473 = V_7;
		uint64_t L_474 = V_6;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_473, ((int64_t)((int64_t)L_474>>((int32_t)28)))));
		uint64_t L_475 = V_6;
		V_6 = ((int64_t)((int64_t)L_475&((int64_t)((int32_t)268435455))));
		uint64_t L_476 = V_8;
		uint64_t L_477 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_476, ((int64_t)((int64_t)L_477>>((int32_t)28)))));
		uint64_t L_478 = V_7;
		V_7 = ((int64_t)((int64_t)L_478&((int64_t)((int32_t)268435455))));
		uint64_t L_479 = V_9;
		uint64_t L_480 = V_8;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_479, ((int64_t)((int64_t)L_480>>((int32_t)28)))));
		uint64_t L_481 = V_8;
		V_8 = ((int64_t)((int64_t)L_481&((int64_t)((int32_t)268435455))));
		uint64_t L_482 = V_10;
		uint64_t L_483 = V_9;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_482, ((int64_t)((int64_t)L_483>>((int32_t)28)))));
		uint64_t L_484 = V_9;
		V_9 = ((int64_t)((int64_t)L_484&((int64_t)((int32_t)268435455))));
		uint64_t L_485 = V_11;
		uint64_t L_486 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_485, ((int64_t)((int64_t)L_486>>((int32_t)28)))));
		uint64_t L_487 = V_10;
		V_10 = ((int64_t)((int64_t)L_487&((int64_t)((int32_t)268435455))));
		uint64_t L_488 = V_12;
		uint64_t L_489 = V_11;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_488, ((int64_t)((int64_t)L_489>>((int32_t)28)))));
		uint64_t L_490 = V_11;
		V_11 = ((int64_t)((int64_t)L_490&((int64_t)((int32_t)268435455))));
		uint64_t L_491 = V_13;
		uint64_t L_492 = V_12;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_491, ((int64_t)((int64_t)L_492>>((int32_t)28)))));
		uint64_t L_493 = V_12;
		V_12 = ((int64_t)((int64_t)L_493&((int64_t)((int32_t)268435455))));
		uint64_t L_494 = V_14;
		uint64_t L_495 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_494, ((int64_t)((int64_t)L_495>>((int32_t)28)))));
		uint64_t L_496 = V_13;
		V_13 = ((int64_t)((int64_t)L_496&((int64_t)((int32_t)268435455))));
		uint64_t L_497 = V_15;
		uint64_t L_498 = V_14;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_497, ((int64_t)((int64_t)L_498>>((int32_t)28)))));
		uint64_t L_499 = V_14;
		V_14 = ((int64_t)((int64_t)L_499&((int64_t)((int32_t)268435455))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_500 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_33 = L_500;
		uint64_t L_501 = V_0;
		uint64_t L_502 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_503 = V_33;
		Ed448_Encode56_m546611AC7AC2BB3AA87AA2F431D4325CCFC23445(((int64_t)((int64_t)L_501|((int64_t)((int64_t)L_502<<((int32_t)28))))), L_503, 0, NULL);
		uint64_t L_504 = V_2;
		uint64_t L_505 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_506 = V_33;
		Ed448_Encode56_m546611AC7AC2BB3AA87AA2F431D4325CCFC23445(((int64_t)((int64_t)L_504|((int64_t)((int64_t)L_505<<((int32_t)28))))), L_506, 7, NULL);
		uint64_t L_507 = V_4;
		uint64_t L_508 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_509 = V_33;
		Ed448_Encode56_m546611AC7AC2BB3AA87AA2F431D4325CCFC23445(((int64_t)((int64_t)L_507|((int64_t)((int64_t)L_508<<((int32_t)28))))), L_509, ((int32_t)14), NULL);
		uint64_t L_510 = V_6;
		uint64_t L_511 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_512 = V_33;
		Ed448_Encode56_m546611AC7AC2BB3AA87AA2F431D4325CCFC23445(((int64_t)((int64_t)L_510|((int64_t)((int64_t)L_511<<((int32_t)28))))), L_512, ((int32_t)21), NULL);
		uint64_t L_513 = V_8;
		uint64_t L_514 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_515 = V_33;
		Ed448_Encode56_m546611AC7AC2BB3AA87AA2F431D4325CCFC23445(((int64_t)((int64_t)L_513|((int64_t)((int64_t)L_514<<((int32_t)28))))), L_515, ((int32_t)28), NULL);
		uint64_t L_516 = V_10;
		uint64_t L_517 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_518 = V_33;
		Ed448_Encode56_m546611AC7AC2BB3AA87AA2F431D4325CCFC23445(((int64_t)((int64_t)L_516|((int64_t)((int64_t)L_517<<((int32_t)28))))), L_518, ((int32_t)35), NULL);
		uint64_t L_519 = V_12;
		uint64_t L_520 = V_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_521 = V_33;
		Ed448_Encode56_m546611AC7AC2BB3AA87AA2F431D4325CCFC23445(((int64_t)((int64_t)L_519|((int64_t)((int64_t)L_520<<((int32_t)28))))), L_521, ((int32_t)42), NULL);
		uint64_t L_522 = V_14;
		uint64_t L_523 = V_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_524 = V_33;
		Ed448_Encode56_m546611AC7AC2BB3AA87AA2F431D4325CCFC23445(((int64_t)((int64_t)L_522|((int64_t)((int64_t)L_523<<((int32_t)28))))), L_524, ((int32_t)49), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_525 = V_33;
		return L_525;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ScalarMult(System.Byte[],Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMult_m54306F14D7DBCFAB205A035C7A2F04D3884CA084 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p1, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___k0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_DecodeScalar_mA4714B8D920EFEA5AD685480EF3ECB744F070FC1(L_1, 0, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		uint32_t L_4;
		L_4 = Nat_ShiftDownBits_m5E1DEDCE89394854A304FFF74224614DAE7056B3(((int32_t)14), L_3, 2, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		int32_t L_6 = 0;
		uint32_t L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___L_35;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
		uint32_t L_11;
		L_11 = Nat_CAdd_m4237EB216D24A9A71A545DAD5C23C8AC9F4697A5(((int32_t)14), ((int32_t)((int32_t)((~L_7))&1)), L_8, L_9, L_10, NULL);
		V_1 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		uint32_t L_13;
		L_13 = Nat_ShiftDownBit_mCDF5442C94448C9149006FB5315053820AB9302C(((int32_t)14), L_12, 1, NULL);
		V_2 = L_13;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_14 = ___p1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15;
		L_15 = Ed448_PointPrecompute_mEAEB9D246C0FB4F81FB3199E8CAB80CFCD60C103(L_14, 8, NULL);
		V_3 = L_15;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_16 = (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)il2cpp_codegen_object_new(PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7(L_16, NULL);
		V_4 = L_16;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_3;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_19 = ___r2;
		Ed448_PointLookup_mC4CB7046A4489CBDFBE8A86E08F9372B7AC26F83(L_17, ((int32_t)111), L_18, L_19, NULL);
		V_5 = ((int32_t)110);
		goto IL_0088;
	}

IL_0059:
	{
		V_6 = 0;
		goto IL_006a;
	}

IL_005e:
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_20 = ___r2;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_PointDouble_m6CA61510693B1AFB8C7654572948190EBAB136DC(L_20, NULL);
		int32_t L_21 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_006a:
	{
		int32_t L_22 = V_6;
		if ((((int32_t)L_22) < ((int32_t)4)))
		{
			goto IL_005e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_0;
		int32_t L_24 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_3;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_26 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_PointLookup_mC4CB7046A4489CBDFBE8A86E08F9372B7AC26F83(L_23, L_24, L_25, L_26, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_27 = V_4;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_28 = ___r2;
		Ed448_PointAdd_mA86CE533581BC7C402FCAE8831BFDDF8548EA08B(L_27, L_28, NULL);
		int32_t L_29 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
	}

IL_0088:
	{
		int32_t L_30 = V_5;
		if ((((int32_t)L_30) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		V_7 = 0;
		goto IL_009e;
	}

IL_0092:
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_31 = ___r2;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_PointDouble_m6CA61510693B1AFB8C7654572948190EBAB136DC(L_31, NULL);
		int32_t L_32 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_009e:
	{
		int32_t L_33 = V_7;
		if ((((int32_t)L_33) < ((int32_t)2)))
		{
			goto IL_0092;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ScalarMultBase(System.Byte[],Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultBase_m9B32CCA84901C0EA1C61BB318F3E14E82375DFFF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	uint32_t V_1 = 0;
	PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	int32_t V_7 = 0;
	uint32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_Precompute_m8456BD8E6476A7B7A67CAB9B7E5BF7051F1D99BE(NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___k0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		Ed448_DecodeScalar_mA4714B8D920EFEA5AD685480EF3ECB744F070FC1(L_1, 0, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___L_35;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		uint32_t L_10;
		L_10 = Nat_CAdd_m4237EB216D24A9A71A545DAD5C23C8AC9F4697A5(((int32_t)14), ((int32_t)((int32_t)((~L_6))&1)), L_7, L_8, L_9, NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)((int32_t)il2cpp_codegen_add(4, (int32_t)L_10)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		uint32_t L_13;
		L_13 = Nat_ShiftDownBit_mCDF5442C94448C9149006FB5315053820AB9302C(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12, 0, NULL);
		V_1 = L_13;
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_14 = (PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E*)il2cpp_codegen_object_new(PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E_il2cpp_TypeInfo_var);
		PointPrecomp__ctor_m3B237EFDABECABABE666EC66DA1B9C243C0F0F6A(L_14, NULL);
		V_2 = L_14;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_15 = ___r1;
		Ed448_PointSetNeutral_m6BA2561BFA2634F19739F5E6B6A6CA10E2F2B3DB(L_15, NULL);
		V_3 = ((int32_t)17);
	}

IL_0049:
	{
		int32_t L_16 = V_3;
		V_4 = L_16;
		V_5 = 0;
		goto IL_00cd;
	}

IL_0051:
	{
		V_6 = 0;
		V_7 = 0;
		goto IL_0091;
	}

IL_0059:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		int32_t L_18 = V_4;
		int32_t L_19 = ((int32_t)(L_18>>5));
		uint32_t L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = V_4;
		V_8 = ((int32_t)((uint32_t)L_20>>((int32_t)(((int32_t)(L_21&((int32_t)31)))&((int32_t)31)))));
		uint32_t L_22 = V_6;
		int32_t L_23 = V_7;
		V_6 = ((int32_t)((int32_t)L_22&((~((int32_t)(1<<((int32_t)(L_23&((int32_t)31)))))))));
		uint32_t L_24 = V_6;
		uint32_t L_25 = V_8;
		int32_t L_26 = V_7;
		V_6 = ((int32_t)((int32_t)L_24^((int32_t)((int32_t)L_25<<((int32_t)(L_26&((int32_t)31)))))));
		int32_t L_27 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)18)));
		int32_t L_28 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0091:
	{
		int32_t L_29 = V_7;
		if ((((int32_t)L_29) < ((int32_t)5)))
		{
			goto IL_0059;
		}
	}
	{
		uint32_t L_30 = V_6;
		V_9 = ((int32_t)(((int32_t)((uint32_t)L_30>>4))&1));
		uint32_t L_31 = V_6;
		int32_t L_32 = V_9;
		V_10 = ((int32_t)(((int32_t)((int32_t)L_31^((-L_32))))&((int32_t)15)));
		int32_t L_33 = V_5;
		int32_t L_34 = V_10;
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_35 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_PointLookup_m108F6ABB9E0AEDD87B295B423EC1646E289FE500(L_33, L_34, L_35, NULL);
		int32_t L_36 = V_9;
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_37 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = L_37->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_CNegate_m10B9F9B7B0763D632C60D7CC9717B41EB4455D73(L_36, L_38, NULL);
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_39 = V_2;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_40 = ___r1;
		Ed448_PointAddPrecomp_m1A485846999F06D8A79DF3066B7E9745C68D07A3(L_39, L_40, NULL);
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00cd:
	{
		int32_t L_42 = V_5;
		if ((((int32_t)L_42) < ((int32_t)5)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_43 = V_3;
		int32_t L_44 = ((int32_t)il2cpp_codegen_subtract(L_43, 1));
		V_3 = L_44;
		if ((((int32_t)L_44) >= ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		return;
	}

IL_00de:
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_45 = ___r1;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_PointDouble_m6CA61510693B1AFB8C7654572948190EBAB136DC(L_45, NULL);
		goto IL_0049;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ScalarMultBaseEncoded(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultBaseEncoded_mE41F94091F35554F98F3A8349846263ED622C7ED (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___r1, int32_t ___rOff2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_0 = NULL;
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_0 = (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)il2cpp_codegen_object_new(PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7(L_0, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___k0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_ScalarMultBase_m9B32CCA84901C0EA1C61BB318F3E14E82375DFFF(L_1, L_2, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___r1;
		int32_t L_5 = ___rOff2;
		int32_t L_6;
		L_6 = Ed448_EncodePoint_m6EFB064E6BDD9DF5638FD653A8B8ADCC526CCBA2(L_3, L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_ScalarMultBaseEncoded_mE41F94091F35554F98F3A8349846263ED622C7ED_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ScalarMultBaseXY(System.Byte[],System.Int32,System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultBaseXY_m8A5B15F89594E46E57FA18511F208F9A4530D231 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___k0, int32_t ___kOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x2, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___k0;
		int32_t L_2 = ___kOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_PruneScalar_m8D57C66D3E29653DDC6194D91D7C335E6C37387F(L_1, L_2, L_3, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_4 = (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)il2cpp_codegen_object_new(PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7(L_4, NULL);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_6 = V_1;
		Ed448_ScalarMultBase_m9B32CCA84901C0EA1C61BB318F3E14E82375DFFF(L_5, L_6, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_7 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7->___x_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_9 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___y_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_11 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___z_2;
		int32_t L_13;
		L_13 = Ed448_CheckPoint_mF5E98B868243A3458E23335A01FC257ED3BFA46C(L_8, L_10, L_12, NULL);
		if (L_13)
		{
			goto IL_003c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_ScalarMultBaseXY_m8A5B15F89594E46E57FA18511F208F9A4530D231_RuntimeMethod_var)));
	}

IL_003c:
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_15 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->___x_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___x2;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_16, 0, L_17, 0, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_18 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = L_18->___y_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___y3;
		X448Field_Copy_m77A3DC5E50AE4F9B240DB137491804125AA8FFAD(L_19, 0, L_20, 0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ScalarMultOrderVar(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultOrderVar_m0280018C1E077C1CF398DE39D1A9C06DE6FEE2D3 (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p0, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_1 = NULL;
	PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_0 = 5;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___L_35;
		int32_t L_1 = V_0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_2;
		L_2 = Ed448_GetWnafVar_m69E9BB2EAAB402CA90FEDDD95B594228A8640BEB(L_0, L_1, NULL);
		V_1 = L_2;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_3 = ___p0;
		int32_t L_4 = V_0;
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_5;
		L_5 = Ed448_PointPrecomputeVar_m330A4DF40F8E5E08F87DD15A60DB6B3A9EB01E82(L_3, ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_4, 2))&((int32_t)31))))), NULL);
		V_2 = L_5;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_6 = ___r1;
		Ed448_PointSetNeutral_m6BA2561BFA2634F19739F5E6B6A6CA10E2F2B3DB(L_6, NULL);
		V_3 = ((int32_t)446);
	}

IL_0029:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_7 = V_1;
		int32_t L_8 = V_3;
		int32_t L_9 = L_8;
		int8_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		int32_t L_11 = V_4;
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_12 = V_4;
		V_5 = ((int32_t)(L_12>>((int32_t)31)));
		int32_t L_13 = V_4;
		int32_t L_14 = V_5;
		V_6 = ((int32_t)(((int32_t)(L_13^L_14))>>1));
		int32_t L_15 = V_5;
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_16 = V_2;
		int32_t L_17 = V_6;
		int32_t L_18 = L_17;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_20 = ___r1;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_PointAddVar_m8ABA02B2C2E3566FA0B5A9627716936605815CD7((bool)((((int32_t)((((int32_t)L_15) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), L_19, L_20, NULL);
	}

IL_0054:
	{
		int32_t L_21 = V_3;
		int32_t L_22 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		V_3 = L_22;
		if ((((int32_t)L_22) >= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		return;
	}

IL_005d:
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_23 = ___r1;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_PointDouble_m6CA61510693B1AFB8C7654572948190EBAB136DC(L_23, NULL);
		goto IL_0029;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ScalarMultStrausVar(System.UInt32[],System.UInt32[],Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt,Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultStrausVar_mAFD4EA44DC3CAE02842E567A7CD18D928AACE9D2 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___nb0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___np1, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___p2, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___r3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_1 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_2 = NULL;
	PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_Precompute_m8456BD8E6476A7B7A67CAB9B7E5BF7051F1D99BE(NULL);
		V_0 = 5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___nb0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1;
		L_1 = Ed448_GetWnafVar_m69E9BB2EAAB402CA90FEDDD95B594228A8640BEB(L_0, 7, NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___np1;
		int32_t L_3 = V_0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4;
		L_4 = Ed448_GetWnafVar_m69E9BB2EAAB402CA90FEDDD95B594228A8640BEB(L_2, L_3, NULL);
		V_2 = L_4;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_5 = ___p2;
		int32_t L_6 = V_0;
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_7;
		L_7 = Ed448_PointPrecomputeVar_m330A4DF40F8E5E08F87DD15A60DB6B3A9EB01E82(L_5, ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_6, 2))&((int32_t)31))))), NULL);
		V_3 = L_7;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_8 = ___r3;
		Ed448_PointSetNeutral_m6BA2561BFA2634F19739F5E6B6A6CA10E2F2B3DB(L_8, NULL);
		V_4 = ((int32_t)446);
	}

IL_0033:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_9 = V_1;
		int32_t L_10 = V_4;
		int32_t L_11 = L_10;
		int8_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_5 = L_12;
		int32_t L_13 = V_5;
		if (!L_13)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_14 = V_5;
		V_6 = ((int32_t)(L_14>>((int32_t)31)));
		int32_t L_15 = V_5;
		int32_t L_16 = V_6;
		V_7 = ((int32_t)(((int32_t)(L_15^L_16))>>1));
		int32_t L_17 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_18 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBaseTable_39;
		int32_t L_19 = V_7;
		int32_t L_20 = L_19;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_22 = ___r3;
		Ed448_PointAddVar_m8ABA02B2C2E3566FA0B5A9627716936605815CD7((bool)((((int32_t)((((int32_t)L_17) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), L_21, L_22, NULL);
	}

IL_0063:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_23 = V_2;
		int32_t L_24 = V_4;
		int32_t L_25 = L_24;
		int8_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		V_8 = L_26;
		int32_t L_27 = V_8;
		if (!L_27)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_28 = V_8;
		V_9 = ((int32_t)(L_28>>((int32_t)31)));
		int32_t L_29 = V_8;
		int32_t L_30 = V_9;
		V_10 = ((int32_t)(((int32_t)(L_29^L_30))>>1));
		int32_t L_31 = V_9;
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_32 = V_3;
		int32_t L_33 = V_10;
		int32_t L_34 = L_33;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_36 = ___r3;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_PointAddVar_m8ABA02B2C2E3566FA0B5A9627716936605815CD7((bool)((((int32_t)((((int32_t)L_31) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), L_35, L_36, NULL);
	}

IL_008f:
	{
		int32_t L_37 = V_4;
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		V_4 = L_38;
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_009a;
		}
	}
	{
		return;
	}

IL_009a:
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_39 = ___r3;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_PointDouble_m6CA61510693B1AFB8C7654572948190EBAB136DC(L_39, NULL);
		goto IL_0033;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Sign(System.Byte[],System.Int32,System.Byte[],System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Sign_m18131AA2C8FDB65EA2A352B471B4A513C0628B36 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m3, int32_t ___mOff4, int32_t ___mLen5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig6, int32_t ___sigOff7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___sk0;
		int32_t L_1 = ___skOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___ctx2;
		uint8_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___m3;
		int32_t L_5 = ___mOff4;
		int32_t L_6 = ___mLen5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___sig6;
		int32_t L_8 = ___sigOff7;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_ImplSign_mCD4C75C23A281EB6E8937AB85C29BFF715B00AC1(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Sign(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Sign_m436D20DBD64EB62D2EC3A5B2A18918C2FFACA980 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m5, int32_t ___mOff6, int32_t ___mLen7, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig8, int32_t ___sigOff9, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___sk0;
		int32_t L_1 = ___skOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___pk2;
		int32_t L_3 = ___pkOff3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___ctx4;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___m5;
		int32_t L_7 = ___mOff6;
		int32_t L_8 = ___mLen7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___sig8;
		int32_t L_10 = ___sigOff9;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_ImplSign_m5A14EBD67C56CECA1BE1DA20C5AF34EF64EDEA28(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::SignPrehash(System.Byte[],System.Int32,System.Byte[],System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_SignPrehash_m3EBDE0BC33753C403D42AC3C02F1C111570BF25C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ph3, int32_t ___phOff4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig5, int32_t ___sigOff6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___sk0;
		int32_t L_1 = ___skOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___ctx2;
		uint8_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___ph3;
		int32_t L_5 = ___phOff4;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___sig5;
		int32_t L_8 = ___sigOff6;
		Ed448_ImplSign_mCD4C75C23A281EB6E8937AB85C29BFF715B00AC1(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::SignPrehash(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_SignPrehash_m845959830C379BC38F53127E3CA5287DB4270469 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ph5, int32_t ___phOff6, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig7, int32_t ___sigOff8, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___sk0;
		int32_t L_1 = ___skOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___pk2;
		int32_t L_3 = ___pkOff3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___ctx4;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___ph5;
		int32_t L_7 = ___phOff6;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___sig7;
		int32_t L_10 = ___sigOff8;
		Ed448_ImplSign_m5A14EBD67C56CECA1BE1DA20C5AF34EF64EDEA28(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::SignPrehash(System.Byte[],System.Int32,System.Byte[],Org.BouncyCastle.Crypto.IXof,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_SignPrehash_mF9D9E6AB80767D94B7C125B02151AB0D63C33F51 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx2, RuntimeObject* ___ph3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig4, int32_t ___sigOff5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize_29;
		RuntimeObject* L_3 = ___ph3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize_29;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::DoFinal(System.Byte[],System.Int32,System.Int32) */, IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var, L_3, L_4, 0, L_5);
		if ((((int32_t)L_2) == ((int32_t)L_6)))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_SignPrehash_mF9D9E6AB80767D94B7C125B02151AB0D63C33F51_RuntimeMethod_var)));
	}

IL_002a:
	{
		V_1 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___sk0;
		int32_t L_9 = ___skOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___ctx2;
		uint8_t L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___sig4;
		int32_t L_15 = ___sigOff5;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_ImplSign_mCD4C75C23A281EB6E8937AB85C29BFF715B00AC1(L_8, L_9, L_10, L_11, L_12, 0, ((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14, L_15, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::SignPrehash(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],Org.BouncyCastle.Crypto.IXof,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_SignPrehash_m2C7218990EE08202621407C0634CF27675BF6D4C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sk0, int32_t ___skOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, RuntimeObject* ___ph5, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig6, int32_t ___sigOff7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize_29;
		RuntimeObject* L_3 = ___ph5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize_29;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::DoFinal(System.Byte[],System.Int32,System.Int32) */, IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var, L_3, L_4, 0, L_5);
		if ((((int32_t)L_2) == ((int32_t)L_6)))
		{
			goto IL_002b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_SignPrehash_m2C7218990EE08202621407C0634CF27675BF6D4C_RuntimeMethod_var)));
	}

IL_002b:
	{
		V_1 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___sk0;
		int32_t L_9 = ___skOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___pk2;
		int32_t L_11 = ___pkOff3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___ctx4;
		uint8_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___sig6;
		int32_t L_17 = ___sigOff7;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_ImplSign_m5A14EBD67C56CECA1BE1DA20C5AF34EF64EDEA28(L_8, L_9, L_10, L_11, L_12, L_13, L_14, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16, L_17, NULL);
		return;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ValidatePublicKeyFull(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_ValidatePublicKeyFull_m6CABC38213C1F220F4D23EF338B5ECD5FF0BC891 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk0, int32_t ___pkOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_0 = NULL;
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_1 = NULL;
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_0 = (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)il2cpp_codegen_object_new(PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7(L_0, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___pk0;
		int32_t L_2 = ___pkOff1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Ed448_DecodePointVar_m8703292141B19BE4E199CA3903605B7587585B96(L_1, L_2, (bool)0, L_3, NULL);
		if (L_4)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_5 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Normalize_m28D257AC52601B6B435B1DCF0215E0BA9DC5762D(L_6, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7->___y_1;
		X448Field_Normalize_m28D257AC52601B6B435B1DCF0215E0BA9DC5762D(L_8, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_9 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___z_2;
		X448Field_Normalize_m28D257AC52601B6B435B1DCF0215E0BA9DC5762D(L_10, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_11 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___x_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13->___y_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_15 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->___z_2;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Ed448_IsNeutralElementVar_mCE4A121C34A8E890398A97FCE71B3CCD1E0804DB(L_12, L_14, L_16, NULL);
		if (!L_17)
		{
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_004f:
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_18 = (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)il2cpp_codegen_object_new(PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7(L_18, NULL);
		V_1 = L_18;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_19 = V_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_20 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_ScalarMultOrderVar_m0280018C1E077C1CF398DE39D1A9C06DE6FEE2D3(L_19, L_20, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_21 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = L_21->___x_0;
		il2cpp_codegen_runtime_class_init_inline(X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A_il2cpp_TypeInfo_var);
		X448Field_Normalize_m28D257AC52601B6B435B1DCF0215E0BA9DC5762D(L_22, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_23 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = L_23->___y_1;
		X448Field_Normalize_m28D257AC52601B6B435B1DCF0215E0BA9DC5762D(L_24, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_25 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = L_25->___z_2;
		X448Field_Normalize_m28D257AC52601B6B435B1DCF0215E0BA9DC5762D(L_26, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_27 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = L_27->___x_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_29 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = L_29->___y_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_31 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = L_31->___z_2;
		bool L_33;
		L_33 = Ed448_IsNeutralElementVar_mCE4A121C34A8E890398A97FCE71B3CCD1E0804DB(L_28, L_30, L_32, NULL);
		return L_33;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed448::ValidatePublicKeyPartial(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_ValidatePublicKeyPartial_m5821BC092ADA61A23F42B547E5064A2C7F804471 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk0, int32_t ___pkOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_0 = NULL;
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_0 = (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)il2cpp_codegen_object_new(PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7(L_0, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___pk0;
		int32_t L_2 = ___pkOff1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Ed448_DecodePointVar_m8703292141B19BE4E199CA3903605B7587585B96(L_1, L_2, (bool)0, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed448::Verify(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_Verify_m5B5500FAE4FB419F1A88CB73BAA457B9BCE21F24 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig0, int32_t ___sigOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m5, int32_t ___mOff6, int32_t ___mLen7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___sig0;
		int32_t L_1 = ___sigOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___pk2;
		int32_t L_3 = ___pkOff3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___ctx4;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___m5;
		int32_t L_7 = ___mOff6;
		int32_t L_8 = ___mLen7;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Ed448_ImplVerify_mD20F7349EEC9CBF693375BDFD31C905F45AA2451(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed448::VerifyPrehash(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_VerifyPrehash_m06008238A5C998A75B2F1F51CDBE963C00F5695A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig0, int32_t ___sigOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ph5, int32_t ___phOff6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___sig0;
		int32_t L_1 = ___sigOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___pk2;
		int32_t L_3 = ___pkOff3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___ctx4;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___ph5;
		int32_t L_7 = ___phOff6;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize_29;
		bool L_9;
		L_9 = Ed448_ImplVerify_mD20F7349EEC9CBF693375BDFD31C905F45AA2451(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
// System.Boolean Org.BouncyCastle.Math.EC.Rfc8032.Ed448::VerifyPrehash(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],Org.BouncyCastle.Crypto.IXof)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_VerifyPrehash_m573B01F664BB4446FD3439C932DAAF55B51C63D8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sig0, int32_t ___sigOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pk2, int32_t ___pkOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ctx4, RuntimeObject* ___ph5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize_29;
		RuntimeObject* L_3 = ___ph5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize_29;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0 /* System.Int32 Org.BouncyCastle.Crypto.IXof::DoFinal(System.Byte[],System.Int32,System.Int32) */, IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var, L_3, L_4, 0, L_5);
		if ((((int32_t)L_2) == ((int32_t)L_6)))
		{
			goto IL_002b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_VerifyPrehash_m573B01F664BB4446FD3439C932DAAF55B51C63D8_RuntimeMethod_var)));
	}

IL_002b:
	{
		V_1 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___sig0;
		int32_t L_9 = ___sigOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___pk2;
		int32_t L_11 = ___pkOff3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___ctx4;
		uint8_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Ed448_ImplVerify_mD20F7349EEC9CBF693375BDFD31C905F45AA2451(L_8, L_9, L_10, L_11, L_12, L_13, L_14, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)), NULL);
		return L_16;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448__cctor_m19654E97CE5F8AF61CEB1235B0E5E53CAF6DE337 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6003024U2D1_230_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6003024U2D2_231_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6003024U2D3_232_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6003024U2D4_233_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6003024U2D5_234_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize_29 = ((int32_t)64);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PublicKeySize_30 = ((int32_t)57);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___SecretKeySize_31 = ((int32_t)57);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___SignatureSize_32 = ((int32_t)114);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6003024U2D1_230_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___Dom4Prefix_33 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___Dom4Prefix_33), (void*)L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6003024U2D2_231_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_4, L_5, NULL);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___P_34 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___P_34), (void*)L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6003024U2D3_232_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_7, L_8, NULL);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___L_35 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___L_35), (void*)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6003024U2D4_233_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_10, L_11, NULL);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___B_x_36 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___B_x_36), (void*)L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6003024U2D5_234_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_13, L_14, NULL);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___B_y_37 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___B_y_37), (void*)L_13);
		RuntimeObject* L_15 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_15, NULL);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompLock_38 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompLock_38), (void*)L_15);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBaseTable_39 = (PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBaseTable_39), (void*)(PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7*)NULL);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBase_40 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBase_40), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Math.EC.Rfc8032.Ed448::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448__ctor_mB3D144F2203902A5AC1A0778368F4CDEC629F3D5 (Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
