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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// Org.BouncyCastle.Math.BigInteger[]
struct BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.Byte[,]
struct ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair
struct AsymmetricCipherKeyPair_tE06169950052884CD0AE97AB2CBA764E85D87EE5;
// Org.BouncyCastle.Crypto.AsymmetricKeyParameter
struct AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A;
// Org.BouncyCastle.Crypto.Generators.BCrypt
struct BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1;
// Org.BouncyCastle.Crypto.Generators.BaseKdfBytesGenerator
struct BaseKdfBytesGenerator_tB5CF0010BA5BA9A731413B7834EE9298704D9DB0;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12;
// Org.BouncyCastle.Crypto.CipherKeyGenerator
struct CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8;
// Org.BouncyCastle.Crypto.Generators.DHBasicKeyPairGenerator
struct DHBasicKeyPairGenerator_tAAE4307D6DA0B1CDADC133989D288DCD99202B8D;
// Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters
struct DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2;
// Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper
struct DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959;
// Org.BouncyCastle.Crypto.Generators.DHKeyPairGenerator
struct DHKeyPairGenerator_t15D96E3439C7A08BDA91EDFD195C8BA40591B72F;
// Org.BouncyCastle.Crypto.Parameters.DHParameters
struct DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59;
// Org.BouncyCastle.Crypto.Generators.DHParametersGenerator
struct DHParametersGenerator_t52EC9DACF4E13FA0C2D7869FB2DDAD9E2291B51F;
// Org.BouncyCastle.Crypto.Generators.DHParametersHelper
struct DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65;
// Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters
struct DHPrivateKeyParameters_t818C81CC0C12EDEE9C43C8B1173EC76C396F0362;
// Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters
struct DHPublicKeyParameters_tDCEB26114B4964A5CAD0D631A2FD38289C11AB59;
// Org.BouncyCastle.Crypto.Parameters.DHValidationParameters
struct DHValidationParameters_t58B388F70EE736DD9C57E3FEA4E619A13805CDA5;
// Org.BouncyCastle.Crypto.DataLengthException
struct DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC;
// Org.BouncyCastle.Crypto.Generators.DesEdeKeyGenerator
struct DesEdeKeyGenerator_tD6C8851E6C52260AF3A4BECD6D815BEE3450A052;
// Org.BouncyCastle.Crypto.Generators.DesKeyGenerator
struct DesKeyGenerator_tBAB68A4D64B09772D67853355B3C7DE1C19B916A;
// Org.BouncyCastle.Crypto.Parameters.DsaKeyGenerationParameters
struct DsaKeyGenerationParameters_t54036A87799BBB5ABE90C0466CE5F998BE0527D6;
// Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator
struct DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34;
// Org.BouncyCastle.Crypto.Parameters.DsaParameterGenerationParameters
struct DsaParameterGenerationParameters_t06D63D6CFCBB683D1F308B0F54CF7B60E0C726BA;
// Org.BouncyCastle.Crypto.Parameters.DsaParameters
struct DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417;
// Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator
struct DsaParametersGenerator_t63BFEA1A257818D469B6F140F93D29A725815D76;
// Org.BouncyCastle.Crypto.Parameters.DsaPrivateKeyParameters
struct DsaPrivateKeyParameters_tF64528D4277F1F58056EB3B46A6C59271B9B5D2A;
// Org.BouncyCastle.Crypto.Parameters.DsaPublicKeyParameters
struct DsaPublicKeyParameters_t817DCC4A813D592697AF905BAB9213555F16D6C3;
// Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters
struct DsaValidationParameters_t7019CA9E54B90D455DFE413C2EF78921995F6783;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_tE4751F03244264E12A0669633A68076FD032E2CF;
// Org.BouncyCastle.Crypto.IDerivationParameters
struct IDerivationParameters_tB1A6552E4A933500588A3B19591C72EC22C47A5D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1;
// Org.BouncyCastle.Crypto.Prng.IRandomGenerator
struct IRandomGenerator_t50CA6B7268CF1B6ED0762EB5808373C32743C8F1;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Org.BouncyCastle.Crypto.Parameters.Iso18033KdfParameters
struct Iso18033KdfParameters_t435295BD3FF4961A3F72F01DE4183C5AE4F4FB2D;
// Org.BouncyCastle.Crypto.Parameters.KdfParameters
struct KdfParameters_tDDC5A4A75A5909F80507E6486C806E9B4DCCDB74;
// Org.BouncyCastle.Crypto.KeyGenerationParameters
struct KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC;
// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Org.BouncyCastle.Crypto.Engines.Salsa20Engine
struct Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076;
// Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
struct SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0;
// Org.BouncyCastle.Crypto.Digests.Sha1Digest
struct Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.Engines.TnepresEngine
struct TnepresEngine_tB2063E257FDB18D464780C832450C7244D433DFC;
// Org.BouncyCastle.Crypto.Engines.TwofishEngine
struct TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C;
// Org.BouncyCastle.Crypto.Engines.VmpcEngine
struct VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF;
// Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine
struct VmpcKsa3Engine_t6B40A255ABBC4585FD23E3EB9A16329F6CB62C76;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Org.BouncyCastle.Crypto.Engines.XSalsa20Engine
struct XSalsa20Engine_tDF36BD3BD165A1B1D6E28DFE5D17C69A072F5EDD;
// Org.BouncyCastle.Crypto.Engines.XteaEngine
struct XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1;
// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher
struct Threefish1024Cipher_t56D2C1AB2ED3A65A7E1F23EAE08F5EF51E25CC0E;
// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher
struct Threefish512Cipher_tE02AA413DEC2B3FA789F12AF89E596A009794B8D;
// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher
struct ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsymmetricCipherKeyPair_tE06169950052884CD0AE97AB2CBA764E85D87EE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigIntegers_tE5A93174C5BBC70829A05C18E1482245298876DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DHPrivateKeyParameters_t818C81CC0C12EDEE9C43C8B1173EC76C396F0362_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DHPublicKeyParameters_tDCEB26114B4964A5CAD0D631A2FD38289C11AB59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DesParameters_t8EA9EFFDCADA80E63DC387F7204BAC6D3ADC590E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DsaKeyGenerationParameters_t54036A87799BBB5ABE90C0466CE5F998BE0527D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DsaPrivateKeyParameters_tF64528D4277F1F58056EB3B46A6C59271B9B5D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DsaPublicKeyParameters_t817DCC4A813D592697AF905BAB9213555F16D6C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DsaValidationParameters_t7019CA9E54B90D455DFE413C2EF78921995F6783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hex_t7457F6D4DC900156C750BB04D59F8D3B4428F060_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Iso18033KdfParameters_t435295BD3FF4961A3F72F01DE4183C5AE4F4FB2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KdfParameters_tDDC5A4A75A5909F80507E6486C806E9B4DCCDB74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001817U2D1_153_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600183eU2D1_154_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600183eU2D2_155_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600183eU2D3_156_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600183eU2D4_157_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600183eU2D5_158_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600183eU2D6_159_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00731C2C86C2D15B58ED9A20890E494DBD2AC58B;
IL2CPP_EXTERN_C String_t* _stringLiteral0E93D67C22CC3A3BA7D4AD7D107D998DB5485573;
IL2CPP_EXTERN_C String_t* _stringLiteral101B3C75A51196AFDCA86EB43BB5855E80AA199D;
IL2CPP_EXTERN_C String_t* _stringLiteral108ABAE4CFE05B8C1291FAB50652AC7694A8345E;
IL2CPP_EXTERN_C String_t* _stringLiteral14CEE6733903CF095F0E2144576E08E2EABC9277;
IL2CPP_EXTERN_C String_t* _stringLiteral1599555C091EE02EB53958FBBB14EE6BC93EB040;
IL2CPP_EXTERN_C String_t* _stringLiteral1D039B17220DCC63B1682882E707BF1A62CD1819;
IL2CPP_EXTERN_C String_t* _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2;
IL2CPP_EXTERN_C String_t* _stringLiteral302E958A42046957586D826FC43C186BE0800772;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B;
IL2CPP_EXTERN_C String_t* _stringLiteral4690523A3F07C01F5A658C98771DE79551536F47;
IL2CPP_EXTERN_C String_t* _stringLiteral47D20EC1D621302B327F8DA26CCC5372F970DFB8;
IL2CPP_EXTERN_C String_t* _stringLiteral51873B41C63ACCB1AD1BCAF4CBFED060B8D1B62C;
IL2CPP_EXTERN_C String_t* _stringLiteral5C21A6D4C1F7E79C402110827A484BA0BDF302EE;
IL2CPP_EXTERN_C String_t* _stringLiteral5F1F4A58853B31A2075544F5A704FD9361EB7986;
IL2CPP_EXTERN_C String_t* _stringLiteral601CCA376E46978BDEF3632F3CF3209C7891C382;
IL2CPP_EXTERN_C String_t* _stringLiteral6FE897253FBE41D1812A828E7F9FBC1C263A7EBE;
IL2CPP_EXTERN_C String_t* _stringLiteral7034789FCBBBAEA1851A7EBAF3B9DA340883CFAA;
IL2CPP_EXTERN_C String_t* _stringLiteral78DCF8BE751904E2F2302AEBBAF7BA625943E2EB;
IL2CPP_EXTERN_C String_t* _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A;
IL2CPP_EXTERN_C String_t* _stringLiteral83298FB9C35B736FC1AE3C68DC4C4157F50AD0C4;
IL2CPP_EXTERN_C String_t* _stringLiteral842B8C7345E8AE5608EE332378D4489B8AF9C37C;
IL2CPP_EXTERN_C String_t* _stringLiteral87AE6FB8B54C63D0A935F46427CA402CAF342664;
IL2CPP_EXTERN_C String_t* _stringLiteral8D36E120856F9C3F71043CB845ABEA216679C77C;
IL2CPP_EXTERN_C String_t* _stringLiteral9412DA949FDA472A18977665A0D1DE46BD6C5A31;
IL2CPP_EXTERN_C String_t* _stringLiteral978EECA9ABC74122106B2C37B1689846FCF19CDC;
IL2CPP_EXTERN_C String_t* _stringLiteralAC3828DD169EA551EA96D29732CFD5D6F31C0BB9;
IL2CPP_EXTERN_C String_t* _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED;
IL2CPP_EXTERN_C String_t* _stringLiteralB8EE9D086585D964EB0E3772BAB37DA6BF339C11;
IL2CPP_EXTERN_C String_t* _stringLiteralBAC92D9C5274BA983C9BF2497B80EDFD56A9A45B;
IL2CPP_EXTERN_C String_t* _stringLiteralBF62F9B16DDAB52D1FD2A5190F69FAD0D9B7A1AD;
IL2CPP_EXTERN_C String_t* _stringLiteralC00E17AA822A314AE294BF98E0FD95C91DD7E6B1;
IL2CPP_EXTERN_C String_t* _stringLiteralC166909EC442464ACBD6CBD2C6FC0BCBDD162685;
IL2CPP_EXTERN_C String_t* _stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13;
IL2CPP_EXTERN_C String_t* _stringLiteralC639AC33D2C568FE3314FD6510EE9F098A831841;
IL2CPP_EXTERN_C String_t* _stringLiteralC89858D824AC4A3F2216B74EEFEA4A867D131078;
IL2CPP_EXTERN_C String_t* _stringLiteralC9D1AC87CE57275452262EAAEB65A1D483D04022;
IL2CPP_EXTERN_C String_t* _stringLiteralCB879F2EF65B4665A454CC69D72CFC0D331A9EB0;
IL2CPP_EXTERN_C String_t* _stringLiteralD187D665853B8D7EA2432DDF6CBF2E65DC3BA81D;
IL2CPP_EXTERN_C String_t* _stringLiteralD29A0745DECCA38535B34701FDDA4A1747B44B62;
IL2CPP_EXTERN_C String_t* _stringLiteralE3577C2D5B36A10E4CFD76E58010316ACDBA11CA;
IL2CPP_EXTERN_C String_t* _stringLiteralE4D91A275D1835BB2A2111D76DB36CDDDAD83699;
IL2CPP_EXTERN_C String_t* _stringLiteralE61A524EA8F45BE850EE16F02879615EBF327FD4;
IL2CPP_EXTERN_C String_t* _stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73;
IL2CPP_EXTERN_C String_t* _stringLiteralECAD71D2A48AFE84D642BA9E2C90621A70C4A478;
IL2CPP_EXTERN_C String_t* _stringLiteralF54C61EA654A453F853B81CE072DEC048FBB4991;
IL2CPP_EXTERN_C String_t* _stringLiteralF61A75191EDC36E7F5B6029C933D4C764F147DE4;
IL2CPP_EXTERN_C String_t* _stringLiteralF93AA97136E5BD4B958A135D534F7064CD1361D1;
IL2CPP_EXTERN_C String_t* _stringLiteralFE885205DA2ED2F044021264F91527DF50C05E68;
IL2CPP_EXTERN_C const RuntimeMethod* BCrypt_DeriveRawKey_m8DD9ECD5BCA259C41FF5AC4822FD59A82507B7DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BCrypt_Generate_mE8E037F07448434ECAE70BB99108A9A7A7D2E795_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseKdfBytesGenerator_GenerateBytes_mD4C6671BBCF43F1F3E78B8E89B6517D2030D4888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseKdfBytesGenerator_Init_m262B79DE13BA7666FD510AD7A2184976DD68B0B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CipherKeyGenerator_GenerateKey_m91A868F2D8E3F0FCE84167DCF6752C9FA1C1FFE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CipherKeyGenerator_Init_m611CC686855388348DD65E7808633766F437BA91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CipherKeyGenerator__ctor_m1F422CE56D811BB286A6FAD17E3EDEE537BDE0CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DesEdeKeyGenerator_engineInit_m5418512B98E6E993B45675E6B7826F59CA0BD568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DesKeyGenerator_engineInit_m356FEE5A8DDE9709BA20A8EDB7A5A67B846F7E46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DsaKeyPairGenerator_Init_m2482D5A09194F54D678800521BCD2B70C90DC890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DsaParametersGenerator_GenerateParameters_FIPS186_2_m1C0125CF92D48DAD1D93EEE4DCAF3A6B9D8C402C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DsaParametersGenerator_Init_m1D23740F1ABAB5A9A4806D7E612FD342542BD1F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DsaParametersGenerator_Init_mD077630F4A06C0F5925E36721071F977B44C86C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish1024Cipher_DecryptBlock_m525CF0E616C29474935EB564D2C40F4160C6FF73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish1024Cipher_EncryptBlock_m01621552A0885FD0F7F1326407DA9AE0CBD0181E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish512Cipher_DecryptBlock_m16375AEF72B36D04FB1BDD9F9E888A36CD9952A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish512Cipher_EncryptBlock_m64CDF8986D9CB209B4DAE4F040CE9DC8495D54FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TnepresEngine_MakeWorkingKey_m04D37ACB002CEAF725D20DACFCED267EC5FD4425_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwofishEngine_Init_mDFCA39C40CD778FDE3C80054A7DD3515E55A6406_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwofishEngine_ProcessBlock_m79AEAA7D729BB7F743AD5CE452C1EC6757D8BDB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwofishEngine_SetKey_mE272A8D0083032E411423BB5EC140A1A77BD1A05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VmpcEngine_Init_mEDF99BE009C242F3F95B9A8E7E57CCC98F8003A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XSalsa20Engine_SetKey_mC4921500383B53B0CC5C3E9B7E0BE0EE67C271FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XteaEngine_Init_mEA7D4FE490AAB2C0510ADC42F12DC53D153150F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XteaEngine_ProcessBlock_mA56C7529E825AE5B9D3E8B955CCC39A6AEB8939E_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair
struct AsymmetricCipherKeyPair_tE06169950052884CD0AE97AB2CBA764E85D87EE5  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.AsymmetricKeyParameter Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair::publicParameter
	AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A* ___publicParameter_0;
	// Org.BouncyCastle.Crypto.AsymmetricKeyParameter Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair::privateParameter
	AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A* ___privateParameter_1;
};

// Org.BouncyCastle.Crypto.AsymmetricKeyParameter
struct AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A  : public RuntimeObject
{
	// System.Boolean Org.BouncyCastle.Crypto.AsymmetricKeyParameter::privateKey
	bool ___privateKey_0;
};

// Org.BouncyCastle.Crypto.Generators.BCrypt
struct BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1  : public RuntimeObject
{
	// System.UInt32[] Org.BouncyCastle.Crypto.Generators.BCrypt::S
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___S_16;
	// System.UInt32[] Org.BouncyCastle.Crypto.Generators.BCrypt::P
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___P_17;
};

struct BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields
{
	// System.UInt32[] Org.BouncyCastle.Crypto.Generators.BCrypt::MAGIC_STRING
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___MAGIC_STRING_10;
	// System.UInt32[] Org.BouncyCastle.Crypto.Generators.BCrypt::KP
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___KP_11;
	// System.UInt32[] Org.BouncyCastle.Crypto.Generators.BCrypt::KS0
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___KS0_12;
	// System.UInt32[] Org.BouncyCastle.Crypto.Generators.BCrypt::KS1
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___KS1_13;
	// System.UInt32[] Org.BouncyCastle.Crypto.Generators.BCrypt::KS2
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___KS2_14;
	// System.UInt32[] Org.BouncyCastle.Crypto.Generators.BCrypt::KS3
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___KS3_15;
};

// Org.BouncyCastle.Crypto.Generators.BaseKdfBytesGenerator
struct BaseKdfBytesGenerator_tB5CF0010BA5BA9A731413B7834EE9298704D9DB0  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Generators.BaseKdfBytesGenerator::counterStart
	int32_t ___counterStart_0;
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Generators.BaseKdfBytesGenerator::digest
	RuntimeObject* ___digest_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Generators.BaseKdfBytesGenerator::shared
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___shared_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Generators.BaseKdfBytesGenerator::iv
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv_3;
};

// Org.BouncyCastle.Math.BigInteger
struct BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12  : public RuntimeObject
{
	// System.Int32[] Org.BouncyCastle.Math.BigInteger::magnitude
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___magnitude_31;
	// System.Int32 Org.BouncyCastle.Math.BigInteger::sign
	int32_t ___sign_32;
	// System.Int32 Org.BouncyCastle.Math.BigInteger::nBits
	int32_t ___nBits_33;
	// System.Int32 Org.BouncyCastle.Math.BigInteger::nBitLength
	int32_t ___nBitLength_34;
	// System.Int32 Org.BouncyCastle.Math.BigInteger::mQuote
	int32_t ___mQuote_35;
};

struct BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields
{
	// System.Int32[][] Org.BouncyCastle.Math.BigInteger::primeLists
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___primeLists_9;
	// System.Int32[] Org.BouncyCastle.Math.BigInteger::primeProducts
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___primeProducts_10;
	// System.Int32[] Org.BouncyCastle.Math.BigInteger::ZeroMagnitude
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ZeroMagnitude_11;
	// System.Byte[] Org.BouncyCastle.Math.BigInteger::ZeroEncoding
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ZeroEncoding_12;
	// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Math.BigInteger::SMALL_CONSTANTS
	BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* ___SMALL_CONSTANTS_13;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Zero
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Zero_14;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::One
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___One_15;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Two
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Two_16;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Three
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Three_17;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Four
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Four_18;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Ten
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Ten_19;
	// System.Byte[] Org.BouncyCastle.Math.BigInteger::BitLengthTable
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___BitLengthTable_20;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix2
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix2_21;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix2E
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix2E_22;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix8
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix8_23;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix8E
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix8E_24;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix10
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix10_25;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix10E
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix10E_26;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix16
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix16_27;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix16E
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix16E_28;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Math.BigInteger::RandomSource
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___RandomSource_29;
	// System.Int32[] Org.BouncyCastle.Math.BigInteger::ExpWindowThresholds
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ExpWindowThresholds_30;
};

// Org.BouncyCastle.Crypto.CipherKeyGenerator
struct CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8  : public RuntimeObject
{
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.CipherKeyGenerator::random
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random_0;
	// System.Int32 Org.BouncyCastle.Crypto.CipherKeyGenerator::strength
	int32_t ___strength_1;
	// System.Boolean Org.BouncyCastle.Crypto.CipherKeyGenerator::uninitialised
	bool ___uninitialised_2;
	// System.Int32 Org.BouncyCastle.Crypto.CipherKeyGenerator::defaultStrength
	int32_t ___defaultStrength_3;
};

// Org.BouncyCastle.Crypto.Generators.DHBasicKeyPairGenerator
struct DHBasicKeyPairGenerator_tAAE4307D6DA0B1CDADC133989D288DCD99202B8D  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters Org.BouncyCastle.Crypto.Generators.DHBasicKeyPairGenerator::param
	DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2* ___param_0;
};

// Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper
struct DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959  : public RuntimeObject
{
};

struct DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959_StaticFields
{
	// Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper::Instance
	DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959* ___Instance_0;
};

// Org.BouncyCastle.Crypto.Generators.DHKeyPairGenerator
struct DHKeyPairGenerator_t15D96E3439C7A08BDA91EDFD195C8BA40591B72F  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters Org.BouncyCastle.Crypto.Generators.DHKeyPairGenerator::param
	DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2* ___param_0;
};

// Org.BouncyCastle.Crypto.Parameters.DHParameters
struct DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59  : public RuntimeObject
{
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHParameters::p
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___p_1;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHParameters::g
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___g_2;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHParameters::q
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___q_3;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHParameters::j
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___j_4;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.DHParameters::m
	int32_t ___m_5;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.DHParameters::l
	int32_t ___l_6;
	// Org.BouncyCastle.Crypto.Parameters.DHValidationParameters Org.BouncyCastle.Crypto.Parameters.DHParameters::validation
	DHValidationParameters_t58B388F70EE736DD9C57E3FEA4E619A13805CDA5* ___validation_7;
};

// Org.BouncyCastle.Crypto.Generators.DHParametersGenerator
struct DHParametersGenerator_t52EC9DACF4E13FA0C2D7869FB2DDAD9E2291B51F  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Generators.DHParametersGenerator::size
	int32_t ___size_0;
	// System.Int32 Org.BouncyCastle.Crypto.Generators.DHParametersGenerator::certainty
	int32_t ___certainty_1;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Generators.DHParametersGenerator::random
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random_2;
};

// Org.BouncyCastle.Crypto.Generators.DHParametersHelper
struct DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65  : public RuntimeObject
{
};

struct DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_StaticFields
{
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DHParametersHelper::Six
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Six_0;
	// System.Int32[][] Org.BouncyCastle.Crypto.Generators.DHParametersHelper::primeLists
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___primeLists_1;
	// System.Int32[] Org.BouncyCastle.Crypto.Generators.DHParametersHelper::primeProducts
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___primeProducts_2;
	// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Crypto.Generators.DHParametersHelper::BigPrimeProducts
	BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* ___BigPrimeProducts_3;
};

// Org.BouncyCastle.Crypto.Parameters.DHValidationParameters
struct DHValidationParameters_t58B388F70EE736DD9C57E3FEA4E619A13805CDA5  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.DHValidationParameters::seed
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___seed_0;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.DHValidationParameters::counter
	int32_t ___counter_1;
};

// Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator
struct DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.Parameters.DsaKeyGenerationParameters Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator::param
	DsaKeyGenerationParameters_t54036A87799BBB5ABE90C0466CE5F998BE0527D6* ___param_1;
};

struct DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34_StaticFields
{
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator::One
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___One_0;
};

// Org.BouncyCastle.Crypto.Parameters.DsaParameterGenerationParameters
struct DsaParameterGenerationParameters_t06D63D6CFCBB683D1F308B0F54CF7B60E0C726BA  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.DsaParameterGenerationParameters::l
	int32_t ___l_2;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.DsaParameterGenerationParameters::n
	int32_t ___n_3;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.DsaParameterGenerationParameters::certainty
	int32_t ___certainty_4;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Parameters.DsaParameterGenerationParameters::random
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random_5;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.DsaParameterGenerationParameters::usageIndex
	int32_t ___usageIndex_6;
};

// Org.BouncyCastle.Crypto.Parameters.DsaParameters
struct DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417  : public RuntimeObject
{
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DsaParameters::p
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___p_0;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DsaParameters::q
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___q_1;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DsaParameters::g
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___g_2;
	// Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters Org.BouncyCastle.Crypto.Parameters.DsaParameters::validation
	DsaValidationParameters_t7019CA9E54B90D455DFE413C2EF78921995F6783* ___validation_3;
};

// Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator
struct DsaParametersGenerator_t63BFEA1A257818D469B6F140F93D29A725815D76  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::digest
	RuntimeObject* ___digest_0;
	// System.Int32 Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::L
	int32_t ___L_1;
	// System.Int32 Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::N
	int32_t ___N_2;
	// System.Int32 Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::certainty
	int32_t ___certainty_3;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::random
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random_4;
	// System.Boolean Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::use186_3
	bool ___use186_3_5;
	// System.Int32 Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::usageIndex
	int32_t ___usageIndex_6;
};

// Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters
struct DsaValidationParameters_t7019CA9E54B90D455DFE413C2EF78921995F6783  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters::seed
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___seed_0;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters::counter
	int32_t ___counter_1;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters::usageIndex
	int32_t ___usageIndex_2;
};

// Org.BouncyCastle.Crypto.Digests.GeneralDigest
struct GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.GeneralDigest::xBuf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___xBuf_1;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.GeneralDigest::xBufOff
	int32_t ___xBufOff_2;
	// System.Int64 Org.BouncyCastle.Crypto.Digests.GeneralDigest::byteCount
	int64_t ___byteCount_3;
};

// Org.BouncyCastle.Crypto.Parameters.Iso18033KdfParameters
struct Iso18033KdfParameters_t435295BD3FF4961A3F72F01DE4183C5AE4F4FB2D  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.Iso18033KdfParameters::seed
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___seed_0;
};

// Org.BouncyCastle.Crypto.Parameters.KdfParameters
struct KdfParameters_tDDC5A4A75A5909F80507E6486C806E9B4DCCDB74  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KdfParameters::iv
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KdfParameters::shared
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___shared_1;
};

// Org.BouncyCastle.Crypto.KeyGenerationParameters
struct KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C  : public RuntimeObject
{
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.KeyGenerationParameters::random
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random_0;
	// System.Int32 Org.BouncyCastle.Crypto.KeyGenerationParameters::strength
	int32_t ___strength_1;
};

// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::key
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key_0;
};

// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::parameters
	RuntimeObject* ___parameters_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::iv
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv_1;
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

// Org.BouncyCastle.Crypto.Engines.Salsa20Engine
struct Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.Salsa20Engine::rounds
	int32_t ___rounds_5;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.Salsa20Engine::index
	int32_t ___index_6;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.Salsa20Engine::engineState
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___engineState_7;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.Salsa20Engine::x
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x_8;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Salsa20Engine::keyStream
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyStream_9;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.Salsa20Engine::initialised
	bool ___initialised_10;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.Salsa20Engine::cW0
	uint32_t ___cW0_11;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.Salsa20Engine::cW1
	uint32_t ___cW1_12;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.Salsa20Engine::cW2
	uint32_t ___cW2_13;
};

struct Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4_StaticFields
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.Salsa20Engine::DEFAULT_ROUNDS
	int32_t ___DEFAULT_ROUNDS_1;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.Salsa20Engine::TAU_SIGMA
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___TAU_SIGMA_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Salsa20Engine::sigma
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sigma_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Salsa20Engine::tau
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___tau_4;
};

// Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
struct SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0  : public RuntimeObject
{
	// System.Boolean Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::encrypting
	bool ___encrypting_3;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::wKey
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___wKey_4;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X0
	int32_t ___X0_5;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X1
	int32_t ___X1_6;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X2
	int32_t ___X2_7;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X3
	int32_t ___X3_8;
};

struct SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_StaticFields
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::BlockSize
	int32_t ___BlockSize_2;
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

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine
struct ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.ThreefishEngine::blocksizeBytes
	int32_t ___blocksizeBytes_14;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.ThreefishEngine::blocksizeWords
	int32_t ___blocksizeWords_15;
	// System.UInt64[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::currentBlock
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___currentBlock_16;
	// System.UInt64[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::t
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t_17;
	// System.UInt64[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::kw
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw_18;
	// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher Org.BouncyCastle.Crypto.Engines.ThreefishEngine::cipher
	ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1* ___cipher_19;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.ThreefishEngine::forEncryption
	bool ___forEncryption_20;
};

struct ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_StaticFields
{
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD9
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD9_10;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD17
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD17_11;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD5
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD5_12;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD3_13;
};

// Org.BouncyCastle.Crypto.Engines.TwofishEngine
struct TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C  : public RuntimeObject
{
	// System.Boolean Org.BouncyCastle.Crypto.Engines.TwofishEngine::encrypting
	bool ___encrypting_36;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::gMDS0
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS0_37;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::gMDS1
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS1_38;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::gMDS2
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS2_39;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::gMDS3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS3_40;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::gSubKeys
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gSubKeys_41;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::gSBox
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gSBox_42;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::k64Cnt
	int32_t ___k64Cnt_43;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::workingKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workingKey_44;
};

struct TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields
{
	// System.Byte[,] Org.BouncyCastle.Crypto.Engines.TwofishEngine::P
	ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* ___P_35;
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

// Org.BouncyCastle.Crypto.Engines.VmpcEngine
struct VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF  : public RuntimeObject
{
	// System.Byte Org.BouncyCastle.Crypto.Engines.VmpcEngine::n
	uint8_t ___n_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.VmpcEngine::P
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P_1;
	// System.Byte Org.BouncyCastle.Crypto.Engines.VmpcEngine::s
	uint8_t ___s_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.VmpcEngine::workingIV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workingIV_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.VmpcEngine::workingKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workingKey_4;
};

// Org.BouncyCastle.Crypto.Engines.XteaEngine
struct XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1  : public RuntimeObject
{
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.XteaEngine::_S
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____S_3;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.XteaEngine::_sum0
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____sum0_4;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.XteaEngine::_sum1
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____sum1_5;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.XteaEngine::_initialised
	bool ____initialised_6;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.XteaEngine::_forEncryption
	bool ____forEncryption_7;
};

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher
struct ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1  : public RuntimeObject
{
	// System.UInt64[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher::t
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t_0;
	// System.UInt64[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher::kw
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw_1;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters
struct DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2  : public KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C
{
	// Org.BouncyCastle.Crypto.Parameters.DHParameters Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters::parameters
	DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* ___parameters_2;
};

// Org.BouncyCastle.Crypto.Parameters.DHKeyParameters
struct DHKeyParameters_t57364267B9D840228AFD40068BE12AA3FA0F687E  : public AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A
{
	// Org.BouncyCastle.Crypto.Parameters.DHParameters Org.BouncyCastle.Crypto.Parameters.DHKeyParameters::parameters
	DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* ___parameters_1;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Crypto.Parameters.DHKeyParameters::algorithmOid
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___algorithmOid_2;
};

// Org.BouncyCastle.Crypto.Generators.DesKeyGenerator
struct DesKeyGenerator_tBAB68A4D64B09772D67853355B3C7DE1C19B916A  : public CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8
{
};

// Org.BouncyCastle.Crypto.Parameters.DsaKeyGenerationParameters
struct DsaKeyGenerationParameters_t54036A87799BBB5ABE90C0466CE5F998BE0527D6  : public KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C
{
	// Org.BouncyCastle.Crypto.Parameters.DsaParameters Org.BouncyCastle.Crypto.Parameters.DsaKeyGenerationParameters::parameters
	DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* ___parameters_2;
};

// Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters
struct DsaKeyParameters_t7031084549FE5E1B3CBBA67ED93B83EAE6192FC7  : public AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A
{
	// Org.BouncyCastle.Crypto.Parameters.DsaParameters Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters::parameters
	DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* ___parameters_1;
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

// Org.BouncyCastle.Crypto.Digests.Sha1Digest
struct Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA  : public GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7
{
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::H1
	uint32_t ___H1_9;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::H2
	uint32_t ___H2_10;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::H3
	uint32_t ___H3_11;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::H4
	uint32_t ___H4_12;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::H5
	uint32_t ___H5_13;
	// System.UInt32[] Org.BouncyCastle.Crypto.Digests.Sha1Digest::X
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___X_14;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::xOff
	int32_t ___xOff_15;
};

// Org.BouncyCastle.Crypto.Engines.TnepresEngine
struct TnepresEngine_tB2063E257FDB18D464780C832450C7244D433DFC  : public SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0
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

// Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine
struct VmpcKsa3Engine_t6B40A255ABBC4585FD23E3EB9A16329F6CB62C76  : public VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF
{
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

// Org.BouncyCastle.Crypto.Engines.XSalsa20Engine
struct XSalsa20Engine_tDF36BD3BD165A1B1D6E28DFE5D17C69A072F5EDD  : public Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4
{
};

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher
struct Threefish1024Cipher_t56D2C1AB2ED3A65A7E1F23EAE08F5EF51E25CC0E  : public ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1
{
};

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher
struct Threefish512Cipher_tE02AA413DEC2B3FA789F12AF89E596A009794B8D  : public ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1
{
};

// Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters
struct DHPrivateKeyParameters_t818C81CC0C12EDEE9C43C8B1173EC76C396F0362  : public DHKeyParameters_t57364267B9D840228AFD40068BE12AA3FA0F687E
{
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters::x
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___x_3;
};

// Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters
struct DHPublicKeyParameters_tDCEB26114B4964A5CAD0D631A2FD38289C11AB59  : public DHKeyParameters_t57364267B9D840228AFD40068BE12AA3FA0F687E
{
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters::y
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___y_3;
};

// Org.BouncyCastle.Crypto.Generators.DesEdeKeyGenerator
struct DesEdeKeyGenerator_tD6C8851E6C52260AF3A4BECD6D815BEE3450A052  : public DesKeyGenerator_tBAB68A4D64B09772D67853355B3C7DE1C19B916A
{
};

// Org.BouncyCastle.Crypto.Parameters.DsaPrivateKeyParameters
struct DsaPrivateKeyParameters_tF64528D4277F1F58056EB3B46A6C59271B9B5D2A  : public DsaKeyParameters_t7031084549FE5E1B3CBBA67ED93B83EAE6192FC7
{
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DsaPrivateKeyParameters::x
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___x_2;
};

// Org.BouncyCastle.Crypto.Parameters.DsaPublicKeyParameters
struct DsaPublicKeyParameters_t817DCC4A813D592697AF905BAB9213555F16D6C3  : public DsaKeyParameters_t7031084549FE5E1B3CBBA67ED93B83EAE6192FC7
{
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DsaPublicKeyParameters::y
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___y_2;
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

// Org.BouncyCastle.Crypto.CryptoException
struct CryptoException_t4AD3626BE1D22C083AB2877DC9E63B19B51F1D26  : public Exception_t
{
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

// Org.BouncyCastle.Crypto.DataLengthException
struct DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC  : public CryptoException_t4AD3626BE1D22C083AB2877DC9E63B19B51F1D26
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
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
// System.Byte[,]
struct ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638  : public RuntimeArray
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
	inline uint8_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, uint8_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, uint8_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Org.BouncyCastle.Math.BigInteger[]
struct BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376  : public RuntimeArray
{
	ALIGN_FIELD (8) BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* m_Items[1];

	inline BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E  : public RuntimeArray
{
	ALIGN_FIELD (8) Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* m_Items[1];

	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishCipher__ctor_mDDBB9ED63AB053243A6C41346A724EC53DF5CCD8 (ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Engines.ThreefishEngine::RotlXor(System.UInt64,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F (uint64_t ___x0, int32_t ___n1, uint64_t ___xor2, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Engines.ThreefishEngine::XorRotr(System.UInt64,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69 (uint64_t ___x0, int32_t ___n1, uint64_t ___xor2, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Utilities.Pack::BE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_BE_To_UInt32_mDE3117DC769EA78C6E635C4036888D2AD36C39B9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::RotateLeft(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerpentEngineBase_RotateLeft_m2E170E899D92493FD51FF6C69426EC5539541F28 (int32_t ___x0, int32_t ___bits1, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb3(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb2(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb1(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb0(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb7(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb6(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb5(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb4(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::LT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt32_To_BE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_mE84FDF81208D1EDC3A1877615A9506EC0C0A4E21 (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib7(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib7_m6B2AB088F95B2EEF54B03E336C4383C2F2F7D7DE (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::InverseLT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib6(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib6_m6DCB2D99D27AFF9D5030B0246689B85D45ABC3CF (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib5(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib5_mAA323198D76223543EA0094192073F4EF5FFA10B (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib4(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib4_mFE882C69812FD0C52080011F618B5582712A9BD4 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib3(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib3_m6A77BC5E68598F99FF5658ADEBB942A84B0760A4 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib2(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib2_m2E0C9313D9B611D876F4465FD619529188EAE427 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib1(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib1_mDC3913F6B595A528CCBFD76EB5892F2570A8C32F (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib0(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib0_m8791AD1CC7476D8717B7D9CFE3C3FDAD0D2DDFBB (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase__ctor_mFF5148CD3B1F13851825B130B3DE227A3E658C3B (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Mx_X(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_X_m276A1D7929299F6AC4BD0DBED757AAF90640EE1C (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Mx_Y(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_Y_m106DF2D7847CEDE451E9DE9E0CCC39BBD4F81539 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.String Org.BouncyCastle.Utilities.Platform::GetTypeName(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_GetTypeName_mEB5EBEF8496572C698AAD5E94A3D3E030BF0F240 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::GetKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16 (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_SetKey_mE272A8D0083032E411423BB5EC140A1A77BD1A05 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Check::DataLength(System.Byte[],System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___off1, int32_t ___len2, String_t* ___msg3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Check::OutputLength(System.Byte[],System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___off1, int32_t ___len2, String_t* ___msg3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_EncryptBlock_m162417EC0C4C2D907359EB77B48192B8B9369C78 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcIndex1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst2, int32_t ___dstIndex3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_DecryptBlock_m6EDB102D5D9EDDDA6B2D06578DC66C479FD7950C (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcIndex1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst2, int32_t ___dstIndex3, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::BytesTo32Bits(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b0, int32_t ___p1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::RS_MDS_Encode(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_MDS_Encode_m809B372A5B000880AD98DC48FD80EE585DE142FA (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___k00, int32_t ___k11, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::F32(System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_F32_m50255B31B086CB03ADF1F32B90BFA847ED2F348E (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___k321, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Fe32_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_0_m9C275C5A14FCD831789EFAE4E80F94ED366220CB (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Fe32_3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_3_m72DB29FA4222BEA880C9913CE095E41994C7390C (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::Bits32ToBytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___inData0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::RS_rem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_rem_mED9611C84C1559560AEA0AEF1B59C63423016018 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::LFSR2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR2_m944E26A3401C2A72441891A56910159D33EF20D8 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::LFSR1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR1_mF7196BF8D6C6A853EB8DB230F15B716A50DA6540 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::GetIV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7 (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcEngine__ctor_m43337C0F13BBA8BDCB8959F009608B86FF0BC935 (VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::SetKey(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Salsa20Engine_SetKey_m5A207350D464828EECE769D3778C7E6C5FB88075 (Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyBytes0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ivBytes1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::LE_To_UInt32(System.Byte[],System.Int32,System.UInt32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_LE_To_UInt32_mCB08D93FE8FA8C2952E2CF1BCF77A872C1743142 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___bOff1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns2, int32_t ___nOff3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::SalsaCore(System.Int32,System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Salsa20Engine_SalsaCore_mF27F61D281A0F53927CC012603EA3A97490E2380 (int32_t ___rounds0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___input1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Salsa20Engine__ctor_m6186F6D389AB34128725472CB335394AAD2504A5 (Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.XteaEngine::setKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XteaEngine_setKey_m8BCBA67E34F08B18F2566802F6979118F628F5A2 (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.XteaEngine::decryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XteaEngine_decryptBlock_m22FB75AAD4FB6D59D1BA53804B6A56A1CC554FE1 (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.XteaEngine::encryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XteaEngine_encryptBlock_mFC8FF0B5F771AF8E873C34AED6659A7B25B0BBFD (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KdfParameters::GetSharedSecret()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KdfParameters_GetSharedSecret_mB00485EF0C7C97E963675D246D473D1D994B38EB_inline (KdfParameters_tDDC5A4A75A5909F80507E6486C806E9B4DCCDB74* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KdfParameters::GetIV()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KdfParameters_GetIV_m9E5FE64A81DC7B69E03109572863DEE103FEEEEB_inline (KdfParameters_tDDC5A4A75A5909F80507E6486C806E9B4DCCDB74* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.Iso18033KdfParameters::GetSeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Iso18033KdfParameters_GetSeed_mF93FDBB9B4F20C42A33D8EFCD4E75B22B8623A25_inline (Iso18033KdfParameters_t435295BD3FF4961A3F72F01DE4183C5AE4F4FB2D* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.DataLengthException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2 (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Generators.BCrypt::F(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BCrypt_F_m97ACAD4F39F7B85F756D239ADF9E3F420854B733 (BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1* __this, uint32_t ___x0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt32_To_BE(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_m1C17AB1A6CDD4A4C8B4D8F3102F1A4B7B819E237 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Generators.BCrypt::InitState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt_InitState_m1C9DA365C38392A8CD0DA667398C3B8175FBB9FD (BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::BE_To_UInt32(System.Byte[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_BE_To_UInt32_m1C3449DE7AAA30B61CED7CEEB2160B8308A7EE3D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Generators.BCrypt::CyclicXorKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt_CyclicXorKey_mF0F811DDFCBBF1F1265DB0A4877916BD8248195A (BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Generators.BCrypt::ProcessTableWithSalt(System.UInt32[],System.UInt32[],System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt_ProcessTableWithSalt_m6AE6A7B09092A07810186995308ABC05C8E7C492 (BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___table0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___salt32Bit1, uint32_t ___iv12, uint32_t ___iv23, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Generators.BCrypt::ProcessTable(System.UInt32,System.UInt32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt_ProcessTable_mF7A723C08384CF5254FBDC9C07A536E3D00CC459 (BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1* __this, uint32_t ___xl0, uint32_t ___xr1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___table2, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Generators.BCrypt::EncryptMagicString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BCrypt_EncryptMagicString_mD46EFB44F6C40523B6480E4CA5EBEC0A81FD5C2C (BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Utilities.Strings::ToUtf8ByteArray(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Strings_ToUtf8ByteArray_mFFAE552B9CF01A933ECE2F97ECFCAFE0F4A9EAA7 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___cs0, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Utilities.Arrays::Append(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_Append_m14C1127C18DC18A7CBAF6568E8F6B11451CBA8E5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, uint8_t ___b1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Generators.BCrypt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt__ctor_m43768951D1E74FC38A359C42E47E0DAB270CE72F (BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Generators.BCrypt::DeriveRawKey(System.Int32,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BCrypt_DeriveRawKey_m8DD9ECD5BCA259C41FF5AC4822FD59A82507B7DA (BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1* __this, int32_t ___cost0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___psw2, const RuntimeMethod* method) ;
// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.KeyGenerationParameters::get_Random()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* KeyGenerationParameters_get_Random_m36DBFE034B9D03191BEE80E701349E930D856329_inline (KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.KeyGenerationParameters::get_Strength()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyGenerationParameters_get_Strength_m64B79D8D5F0B4342E9E889828CDBC6515EDD5F38_inline (KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Security.SecureRandom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureRandom__ctor_m1FB3C478CD5CC4CDF68C981D8F5F89FC8EF8CC68 (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.KeyGenerationParameters::.ctor(Org.BouncyCastle.Security.SecureRandom,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyGenerationParameters__ctor_m182784153870470BFD6E41334E1FCE2B2B23DB4D (KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* __this, SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random0, int32_t ___strength1, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Security.SecureRandom::GetNextBytes(Org.BouncyCastle.Security.SecureRandom,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SecureRandom_GetNextBytes_mE0347E8E3D808C7B52FFA03292E71CF5C16CF47C (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___secureRandom0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.CipherKeyGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherKeyGenerator__ctor_m6DA6819F87188DE9B3166802300E02D42129CB3C (CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.CipherKeyGenerator::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherKeyGenerator__ctor_m1F422CE56D811BB286A6FAD17E3EDEE537BDE0CF (CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8* __this, int32_t ___defaultStrength0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.CipherKeyGenerator::engineInit(Org.BouncyCastle.Crypto.KeyGenerationParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherKeyGenerator_engineInit_mC32F08C1D39AFE2CDFD1987645F6E23090FD36CB (CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8* __this, KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* ___parameters0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8 (RuntimeObject* ___arg00, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.DesParameters::SetOddParity(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesParameters_SetOddParity_m9170FA68AA12F87D0FF0369D176CCBEBC8A268B7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DesParameters::IsWeakKey(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DesParameters_IsWeakKey_m1E9CD7AAD84247251BC9F2F6D7BF52C2AC1B6A30 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Generators.DesKeyGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesKeyGenerator__ctor_m6C2CC75C1281ADF1002385730795D2199920016D (DesKeyGenerator_tBAB68A4D64B09772D67853355B3C7DE1C19B916A* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Generators.DesKeyGenerator::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesKeyGenerator__ctor_m00DC07BE96744CC33CA7D4C68DC94DE38ABA1F79 (DesKeyGenerator_tBAB68A4D64B09772D67853355B3C7DE1C19B916A* __this, int32_t ___defaultStrength0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DesEdeParameters::IsWeakKey(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DesEdeParameters_IsWeakKey_m9670B65435859E37CF3226CCD942550BF0B74C9D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Crypto.Parameters.DesEdeParameters::IsRealEdeKey(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DesEdeParameters_IsRealEdeKey_m87234D9922F7BE358685C5A92810837C7B78A9DE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, int32_t ___offset1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.Parameters.DHParameters Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* DHKeyGenerationParameters_get_Parameters_m5103CF17AA3A80CF5CE51CCEC73CEFA1DB32AD6B_inline (DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper::CalculatePrivate(Org.BouncyCastle.Crypto.Parameters.DHParameters,Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DHKeyGeneratorHelper_CalculatePrivate_mE2411D0442CD40FF12918EAFBCF01C7F590FD1C4 (DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959* __this, DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* ___dhParams0, SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper::CalculatePublic(Org.BouncyCastle.Crypto.Parameters.DHParameters,Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DHKeyGeneratorHelper_CalculatePublic_mAFAE074BF63009190A8DA21CDDB6DC48436323AD (DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959* __this, DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* ___dhParams0, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___x1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.DHPublicKeyParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Crypto.Parameters.DHParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHPublicKeyParameters__ctor_m4EA8360C0385D2F1ADD94755959E815DAB556057 (DHPublicKeyParameters_tDCEB26114B4964A5CAD0D631A2FD38289C11AB59* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___y0, DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* ___parameters1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Crypto.Parameters.DHParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHPrivateKeyParameters__ctor_mD74737E9284F91FEC1A5285708AA7C621C9967FD (DHPrivateKeyParameters_t818C81CC0C12EDEE9C43C8B1173EC76C396F0362* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___x0, DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* ___parameters1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair::.ctor(Org.BouncyCastle.Crypto.AsymmetricKeyParameter,Org.BouncyCastle.Crypto.AsymmetricKeyParameter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsymmetricCipherKeyPair__ctor_mBF093164F3117697081D895C0493DEB4489D466C (AsymmetricCipherKeyPair_tE06169950052884CD0AE97AB2CBA764E85D87EE5* __this, AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A* ___publicParameter0, AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A* ___privateParameter1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.DHParameters::get_L()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DHParameters_get_L_m6976BF02E760CF18E4FA1C02BC8E162DB249C939_inline (DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.BigInteger::.ctor(System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mED5A80A0043FC252F4E966B7EFD91E8B431B003F (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, int32_t ___sizeInBits0, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___random1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::SetBit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_SetBit_mC7DD9CE75BABE2CE7FC20920508E3C59BF76024C (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, int32_t ___n0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::GetNafWeight(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WNafUtilities_GetNafWeight_mDD019726DC8DB2CA9EB1D0841BF2FB3E8CE2FAA1 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___k0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Parameters.DHParameters::get_M()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DHParameters_get_M_m3DC8567443DE5CD6078A4A7C1ACC8E6F17F28EB0_inline (DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::ShiftLeft(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_ShiftLeft_mC662CBB073E2DE2F1C64C51CC756C5E573C43C2C (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, int32_t ___n0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHParameters::get_Q()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DHParameters_get_Q_m0DD0E39FE8BFAFB56AB54D1FBAA489CBBBAD8DEB_inline (DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHParameters::get_P()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DHParameters_get_P_m5A4C54E2E7E4F66611A3C676C9D3ABB70E24D2B8_inline (DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Subtract(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_Subtract_mAF6078F797541D51F7E9D25D4C8A0F79DC8E9CEC (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___n0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Math.BigInteger::get_BitLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Utilities.BigIntegers::CreateRandomInRange(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigIntegers_CreateRandomInRange_m4C4BDCC3A775D502922A1518EC6D57A2A9C5E9CD (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___min0, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___max1, SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random2, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DHParameters::get_G()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DHParameters_get_G_m2199635E8D10308B0EE73620A916CE93E6A86D3A_inline (DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::ModPow(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_ModPow_mEBA47DA30ABB2A99E1AE1FB9C59F2C649C82AAA7 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___e0, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___m1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHKeyGeneratorHelper__ctor_m75F3415666F40E39AE8CB6FF591176D434E4BEC6 (DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Crypto.Generators.DHParametersHelper::GenerateSafePrimes(System.Int32,System.Int32,Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* DHParametersHelper_GenerateSafePrimes_mD3D9A49E3B2632FD91D3A975FB2112A7E722FBB7 (int32_t ___size0, int32_t ___certainty1, SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random2, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DHParametersHelper::SelectGenerator(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DHParametersHelper_SelectGenerator_m44A3701D752E5471A914A8FB67595A89C7498564 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___p0, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___q1, SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.DHParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Crypto.Parameters.DHValidationParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHParameters__ctor_m1A35B68497B8206C86A3BE41E697ED747C2049CD (DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___p0, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___g1, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___q2, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___j3, DHValidationParameters_t58B388F70EE736DD9C57E3FEA4E619A13805CDA5* ___validation4, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::ValueOf(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_ValueOf_m4C26D07B28C10C11C376A1DA8C57A62B0ED3480C (int64_t ___value0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.BigInteger::.ctor(System.Int32,System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_mF7B666AB01FF5DEE7F61B0C2C48C4F61D691E1A5 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, int32_t ___bitLength0, int32_t ___certainty1, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___random2, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Add(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_Add_m07559E876B7A0F1CD7E167B773AF3A8748BFBBF2 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___value0, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.BigInteger::IsProbablePrime(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_IsProbablePrime_mE3C4A5D3E9ED463ABD687A3C0A16DBF84669CBCD (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, int32_t ___certainty0, bool ___randomlySelected1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Remainder(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_Remainder_m3EC0AB3AE3F935252F117BA4A5219555D800A961 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___n0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Math.BigInteger::get_IntValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_get_IntValue_m51372C2C24032F9378F895580BB3CD5821CCC1D7 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.BigInteger::RabinMillerTest(System.Int32,System.Random,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_RabinMillerTest_m20E03E9BC11AC8AFAE2272FF205DBF6B3B810392 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, int32_t ___certainty0, Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___random1, bool ___randomlySelected2, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Crypto.Generators.DHParametersHelper::ConstructBigPrimeProducts(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* DHParametersHelper_ConstructBigPrimeProducts_mAE166CB75C21FB05BA2E6002E33281CC78C4A499 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___primeProducts0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.Parameters.DsaParameters Org.BouncyCastle.Crypto.Parameters.DsaKeyGenerationParameters::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* DsaKeyGenerationParameters_get_Parameters_mCF5A4ED627E5D1747F018E1DC2689F048B5102EB_inline (DsaKeyGenerationParameters_t54036A87799BBB5ABE90C0466CE5F998BE0527D6* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DsaParameters::get_Q()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DsaParameters_get_Q_m6C404267767358DAD5F1A0DF72B0EEC128C7E2DC_inline (DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator::GeneratePrivateKey(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DsaKeyPairGenerator_GeneratePrivateKey_m297BCBE818FE7D28CFE1C985B62441E68A523052 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___q0, SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random1, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DsaParameters::get_P()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DsaParameters_get_P_mEB071E8B64B7AE5BC3C4FE6828E40D829918E6A6_inline (DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.DsaParameters::get_G()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DsaParameters_get_G_m37FF17F3C12F8DFB88C8DE8B69BD03B40B505CFE_inline (DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator::CalculatePublicKey(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DsaKeyPairGenerator_CalculatePublicKey_m3A6E5E48C04837005343B74BDE319381013D3359 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___p0, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___g1, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___x2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.DsaPublicKeyParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Crypto.Parameters.DsaParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DsaPublicKeyParameters__ctor_m59F0BC72AD282D14480D138F8834CBC2A2FE3DB0 (DsaPublicKeyParameters_t817DCC4A813D592697AF905BAB9213555F16D6C3* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___y0, DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* ___parameters1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.DsaPrivateKeyParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Crypto.Parameters.DsaParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DsaPrivateKeyParameters__ctor_m66BDDEF02F99520E0062EE51313BB6D2EF22AD09 (DsaPrivateKeyParameters_tF64528D4277F1F58056EB3B46A6C59271B9B5D2A* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___x0, DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* ___parameters1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha1Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha1Digest__ctor_mE459929BE81CC32F1177E9CBF41D2C585164444E (Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::.ctor(Org.BouncyCastle.Crypto.IDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DsaParametersGenerator__ctor_m57B50F27CDDFD2AFB35F6369754368B28A456DB3 (DsaParametersGenerator_t63BFEA1A257818D469B6F140F93D29A725815D76* __this, RuntimeObject* ___digest0, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::IsValidDsaStrength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DsaParametersGenerator_IsValidDsaStrength_mEFEF36F0C8273CAFB0E6679A224D7EA4C85AC255 (int32_t ___strength0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::GetDefaultN(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DsaParametersGenerator_GetDefaultN_mC42D43EEE4953B80EAC416247CF0756B32FD76AD (int32_t ___L0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::Hash(Org.BouncyCastle.Crypto.IDigest,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DsaParametersGenerator_Hash_mD4CE4575508690B3D40A47F77F7F67278C83FF1C (RuntimeObject* ___d0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::Inc(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DsaParametersGenerator_Inc_mCBC8FCF72F030B84CE81F0BAEADF8B8D0121C679 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.BigInteger::.ctor(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, int32_t ___sign0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Math.BigInteger::IsProbablePrime(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigInteger_IsProbablePrime_m07F131A76E590E948CC8752DCFD7C6E24A787762 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, int32_t ___certainty0, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Utilities.Arrays::Clone(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_Clone_mC73CD122DC37EDEB733EC84DB0137D8D7DD5B87F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Mod(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_Mod_mB43D106CC9B09184498FF09EEB439A2790CE91F3 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___m0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters::.ctor(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DsaValidationParameters__ctor_mC1694F5DB4D1DBCB7DDB4F25E5D0B7B043691D67 (DsaValidationParameters_t7019CA9E54B90D455DFE413C2EF78921995F6783* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___seed0, int32_t ___counter1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.DsaParameters::.ctor(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DsaParameters__ctor_mE694ECE368E04CF2A7F21880E46C8F78FDF7702A (DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___p0, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___q1, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___g2, DsaValidationParameters_t7019CA9E54B90D455DFE413C2EF78921995F6783* ___parameters3, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Divide(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_Divide_m018E671AD9093F75F671A152FC99787AE4C1E2A8 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___val0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.DsaValidationParameters::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DsaValidationParameters__ctor_m0C7AEA9CFA5421933928EE5D1EBD8CF9EC3F0C8D (DsaValidationParameters_t7019CA9E54B90D455DFE413C2EF78921995F6783* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___seed0, int32_t ___counter1, int32_t ___usageIndex2, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Utilities.Encoders.Hex::DecodeStrict(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Hex_DecodeStrict_mDF7EF3473AEFDD75DEC74296066509468750C551 (String_t* ___str0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Math.BigInteger::CompareTo(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_CompareTo_m2AC6C020406E0012C1F48B7C3193552F605AC1D9 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish512Cipher__ctor_m10C7119CE5A99F3F14942CFE468A1040D3DEBD53 (Threefish512Cipher_tE02AA413DEC2B3FA789F12AF89E596A009794B8D* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t1, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___kw0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___t1;
		ThreefishCipher__ctor_mDDBB9ED63AB053243A6C41346A724EC53DF5CCD8(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher::EncryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish512Cipher_EncryptBlock_m64CDF8986D9CB209B4DAE4F040CE9DC8495D54FB (Threefish512Cipher_tE02AA413DEC2B3FA789F12AF89E596A009794B8D* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___block0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___outWords1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1*)__this)->___kw_1;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1*)__this)->___t_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var))->___MOD9_10;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)17))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_EncryptBlock_m64CDF8986D9CB209B4DAE4F040CE9DC8495D54FB_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_EncryptBlock_m64CDF8986D9CB209B4DAE4F040CE9DC8495D54FB_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___block0;
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___block0;
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___block0;
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___block0;
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___block0;
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___block0;
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___block0;
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___block0;
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		uint64_t L_32 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_33 = V_0;
		int32_t L_34 = 0;
		int64_t L_35 = (int64_t)(L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_32, L_35));
		uint64_t L_36 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_37 = V_0;
		int32_t L_38 = 1;
		int64_t L_39 = (int64_t)(L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, L_39));
		uint64_t L_40 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = V_0;
		int32_t L_42 = 2;
		int64_t L_43 = (int64_t)(L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, L_43));
		uint64_t L_44 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_45 = V_0;
		int32_t L_46 = 3;
		int64_t L_47 = (int64_t)(L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_44, L_47));
		uint64_t L_48 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_49 = V_0;
		int32_t L_50 = 4;
		int64_t L_51 = (int64_t)(L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_48, L_51));
		uint64_t L_52 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_53 = V_0;
		int32_t L_54 = 5;
		int64_t L_55 = (int64_t)(L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_56 = V_1;
		int32_t L_57 = 0;
		int64_t L_58 = (int64_t)(L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(L_55, L_58))));
		uint64_t L_59 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_60 = V_0;
		int32_t L_61 = 6;
		int64_t L_62 = (int64_t)(L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_63 = V_1;
		int32_t L_64 = 1;
		int64_t L_65 = (int64_t)(L_63)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_59, ((int64_t)il2cpp_codegen_add(L_62, L_65))));
		uint64_t L_66 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_67 = V_0;
		int32_t L_68 = 7;
		int64_t L_69 = (int64_t)(L_67)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_66, L_69));
		V_12 = 1;
		goto IL_03ef;
	}

IL_00ab:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_2;
		int32_t L_71 = V_12;
		int32_t L_72 = L_71;
		int32_t L_73 = (L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
		V_13 = L_73;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = V_3;
		int32_t L_75 = V_12;
		int32_t L_76 = L_75;
		int32_t L_77 = (L_74)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		V_14 = L_77;
		uint64_t L_78 = V_5;
		uint64_t L_79 = V_4;
		uint64_t L_80 = V_5;
		int64_t L_81 = ((int64_t)il2cpp_codegen_add((int64_t)L_79, (int64_t)L_80));
		V_4 = L_81;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		uint64_t L_82;
		L_82 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_78, ((int32_t)46), L_81, NULL);
		V_5 = L_82;
		uint64_t L_83 = V_7;
		uint64_t L_84 = V_6;
		uint64_t L_85 = V_7;
		int64_t L_86 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, (int64_t)L_85));
		V_6 = L_86;
		uint64_t L_87;
		L_87 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_83, ((int32_t)36), L_86, NULL);
		V_7 = L_87;
		uint64_t L_88 = V_9;
		uint64_t L_89 = V_8;
		uint64_t L_90 = V_9;
		int64_t L_91 = ((int64_t)il2cpp_codegen_add((int64_t)L_89, (int64_t)L_90));
		V_8 = L_91;
		uint64_t L_92;
		L_92 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_88, ((int32_t)19), L_91, NULL);
		V_9 = L_92;
		uint64_t L_93 = V_11;
		uint64_t L_94 = V_10;
		uint64_t L_95 = V_11;
		int64_t L_96 = ((int64_t)il2cpp_codegen_add((int64_t)L_94, (int64_t)L_95));
		V_10 = L_96;
		uint64_t L_97;
		L_97 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_93, ((int32_t)37), L_96, NULL);
		V_11 = L_97;
		uint64_t L_98 = V_5;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		int64_t L_101 = ((int64_t)il2cpp_codegen_add((int64_t)L_99, (int64_t)L_100));
		V_6 = L_101;
		uint64_t L_102;
		L_102 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_98, ((int32_t)33), L_101, NULL);
		V_5 = L_102;
		uint64_t L_103 = V_11;
		uint64_t L_104 = V_8;
		uint64_t L_105 = V_11;
		int64_t L_106 = ((int64_t)il2cpp_codegen_add((int64_t)L_104, (int64_t)L_105));
		V_8 = L_106;
		uint64_t L_107;
		L_107 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_103, ((int32_t)27), L_106, NULL);
		V_11 = L_107;
		uint64_t L_108 = V_9;
		uint64_t L_109 = V_10;
		uint64_t L_110 = V_9;
		int64_t L_111 = ((int64_t)il2cpp_codegen_add((int64_t)L_109, (int64_t)L_110));
		V_10 = L_111;
		uint64_t L_112;
		L_112 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_108, ((int32_t)14), L_111, NULL);
		V_9 = L_112;
		uint64_t L_113 = V_7;
		uint64_t L_114 = V_4;
		uint64_t L_115 = V_7;
		int64_t L_116 = ((int64_t)il2cpp_codegen_add((int64_t)L_114, (int64_t)L_115));
		V_4 = L_116;
		uint64_t L_117;
		L_117 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_113, ((int32_t)42), L_116, NULL);
		V_7 = L_117;
		uint64_t L_118 = V_5;
		uint64_t L_119 = V_8;
		uint64_t L_120 = V_5;
		int64_t L_121 = ((int64_t)il2cpp_codegen_add((int64_t)L_119, (int64_t)L_120));
		V_8 = L_121;
		uint64_t L_122;
		L_122 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_118, ((int32_t)17), L_121, NULL);
		V_5 = L_122;
		uint64_t L_123 = V_7;
		uint64_t L_124 = V_10;
		uint64_t L_125 = V_7;
		int64_t L_126 = ((int64_t)il2cpp_codegen_add((int64_t)L_124, (int64_t)L_125));
		V_10 = L_126;
		uint64_t L_127;
		L_127 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_123, ((int32_t)49), L_126, NULL);
		V_7 = L_127;
		uint64_t L_128 = V_9;
		uint64_t L_129 = V_4;
		uint64_t L_130 = V_9;
		int64_t L_131 = ((int64_t)il2cpp_codegen_add((int64_t)L_129, (int64_t)L_130));
		V_4 = L_131;
		uint64_t L_132;
		L_132 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_128, ((int32_t)36), L_131, NULL);
		V_9 = L_132;
		uint64_t L_133 = V_11;
		uint64_t L_134 = V_6;
		uint64_t L_135 = V_11;
		int64_t L_136 = ((int64_t)il2cpp_codegen_add((int64_t)L_134, (int64_t)L_135));
		V_6 = L_136;
		uint64_t L_137;
		L_137 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_133, ((int32_t)39), L_136, NULL);
		V_11 = L_137;
		uint64_t L_138 = V_5;
		uint64_t L_139 = V_10;
		uint64_t L_140 = V_5;
		int64_t L_141 = ((int64_t)il2cpp_codegen_add((int64_t)L_139, (int64_t)L_140));
		V_10 = L_141;
		uint64_t L_142;
		L_142 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_138, ((int32_t)44), L_141, NULL);
		V_5 = L_142;
		uint64_t L_143 = V_11;
		uint64_t L_144 = V_4;
		uint64_t L_145 = V_11;
		int64_t L_146 = ((int64_t)il2cpp_codegen_add((int64_t)L_144, (int64_t)L_145));
		V_4 = L_146;
		uint64_t L_147;
		L_147 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_143, ((int32_t)9), L_146, NULL);
		V_11 = L_147;
		uint64_t L_148 = V_9;
		uint64_t L_149 = V_6;
		uint64_t L_150 = V_9;
		int64_t L_151 = ((int64_t)il2cpp_codegen_add((int64_t)L_149, (int64_t)L_150));
		V_6 = L_151;
		uint64_t L_152;
		L_152 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_148, ((int32_t)54), L_151, NULL);
		V_9 = L_152;
		uint64_t L_153 = V_7;
		uint64_t L_154 = V_8;
		uint64_t L_155 = V_7;
		int64_t L_156 = ((int64_t)il2cpp_codegen_add((int64_t)L_154, (int64_t)L_155));
		V_8 = L_156;
		uint64_t L_157;
		L_157 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_153, ((int32_t)56), L_156, NULL);
		V_7 = L_157;
		uint64_t L_158 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_159 = V_0;
		int32_t L_160 = V_13;
		int32_t L_161 = L_160;
		int64_t L_162 = (int64_t)(L_159)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_161));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_158, L_162));
		uint64_t L_163 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_164 = V_0;
		int32_t L_165 = V_13;
		int32_t L_166 = ((int32_t)il2cpp_codegen_add(L_165, 1));
		int64_t L_167 = (int64_t)(L_164)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_166));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_163, L_167));
		uint64_t L_168 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_169 = V_0;
		int32_t L_170 = V_13;
		int32_t L_171 = ((int32_t)il2cpp_codegen_add(L_170, 2));
		int64_t L_172 = (int64_t)(L_169)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_171));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_168, L_172));
		uint64_t L_173 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_174 = V_0;
		int32_t L_175 = V_13;
		int32_t L_176 = ((int32_t)il2cpp_codegen_add(L_175, 3));
		int64_t L_177 = (int64_t)(L_174)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_176));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_173, L_177));
		uint64_t L_178 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_179 = V_0;
		int32_t L_180 = V_13;
		int32_t L_181 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		int64_t L_182 = (int64_t)(L_179)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_181));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_178, L_182));
		uint64_t L_183 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_184 = V_0;
		int32_t L_185 = V_13;
		int32_t L_186 = ((int32_t)il2cpp_codegen_add(L_185, 5));
		int64_t L_187 = (int64_t)(L_184)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_186));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_188 = V_1;
		int32_t L_189 = V_14;
		int32_t L_190 = L_189;
		int64_t L_191 = (int64_t)(L_188)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_190));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_183, ((int64_t)il2cpp_codegen_add(L_187, L_191))));
		uint64_t L_192 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_193 = V_0;
		int32_t L_194 = V_13;
		int32_t L_195 = ((int32_t)il2cpp_codegen_add(L_194, 6));
		int64_t L_196 = (int64_t)(L_193)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_195));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_197 = V_1;
		int32_t L_198 = V_14;
		int32_t L_199 = ((int32_t)il2cpp_codegen_add(L_198, 1));
		int64_t L_200 = (int64_t)(L_197)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_199));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_192, ((int64_t)il2cpp_codegen_add(L_196, L_200))));
		uint64_t L_201 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_202 = V_0;
		int32_t L_203 = V_13;
		int32_t L_204 = ((int32_t)il2cpp_codegen_add(L_203, 7));
		int64_t L_205 = (int64_t)(L_202)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_204));
		int32_t L_206 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_201, ((int64_t)il2cpp_codegen_add(L_205, ((int64_t)(uint64_t)((uint32_t)L_206))))));
		uint64_t L_207 = V_5;
		uint64_t L_208 = V_4;
		uint64_t L_209 = V_5;
		int64_t L_210 = ((int64_t)il2cpp_codegen_add((int64_t)L_208, (int64_t)L_209));
		V_4 = L_210;
		uint64_t L_211;
		L_211 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_207, ((int32_t)39), L_210, NULL);
		V_5 = L_211;
		uint64_t L_212 = V_7;
		uint64_t L_213 = V_6;
		uint64_t L_214 = V_7;
		int64_t L_215 = ((int64_t)il2cpp_codegen_add((int64_t)L_213, (int64_t)L_214));
		V_6 = L_215;
		uint64_t L_216;
		L_216 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_212, ((int32_t)30), L_215, NULL);
		V_7 = L_216;
		uint64_t L_217 = V_9;
		uint64_t L_218 = V_8;
		uint64_t L_219 = V_9;
		int64_t L_220 = ((int64_t)il2cpp_codegen_add((int64_t)L_218, (int64_t)L_219));
		V_8 = L_220;
		uint64_t L_221;
		L_221 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_217, ((int32_t)34), L_220, NULL);
		V_9 = L_221;
		uint64_t L_222 = V_11;
		uint64_t L_223 = V_10;
		uint64_t L_224 = V_11;
		int64_t L_225 = ((int64_t)il2cpp_codegen_add((int64_t)L_223, (int64_t)L_224));
		V_10 = L_225;
		uint64_t L_226;
		L_226 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_222, ((int32_t)24), L_225, NULL);
		V_11 = L_226;
		uint64_t L_227 = V_5;
		uint64_t L_228 = V_6;
		uint64_t L_229 = V_5;
		int64_t L_230 = ((int64_t)il2cpp_codegen_add((int64_t)L_228, (int64_t)L_229));
		V_6 = L_230;
		uint64_t L_231;
		L_231 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_227, ((int32_t)13), L_230, NULL);
		V_5 = L_231;
		uint64_t L_232 = V_11;
		uint64_t L_233 = V_8;
		uint64_t L_234 = V_11;
		int64_t L_235 = ((int64_t)il2cpp_codegen_add((int64_t)L_233, (int64_t)L_234));
		V_8 = L_235;
		uint64_t L_236;
		L_236 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_232, ((int32_t)50), L_235, NULL);
		V_11 = L_236;
		uint64_t L_237 = V_9;
		uint64_t L_238 = V_10;
		uint64_t L_239 = V_9;
		int64_t L_240 = ((int64_t)il2cpp_codegen_add((int64_t)L_238, (int64_t)L_239));
		V_10 = L_240;
		uint64_t L_241;
		L_241 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_237, ((int32_t)10), L_240, NULL);
		V_9 = L_241;
		uint64_t L_242 = V_7;
		uint64_t L_243 = V_4;
		uint64_t L_244 = V_7;
		int64_t L_245 = ((int64_t)il2cpp_codegen_add((int64_t)L_243, (int64_t)L_244));
		V_4 = L_245;
		uint64_t L_246;
		L_246 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_242, ((int32_t)17), L_245, NULL);
		V_7 = L_246;
		uint64_t L_247 = V_5;
		uint64_t L_248 = V_8;
		uint64_t L_249 = V_5;
		int64_t L_250 = ((int64_t)il2cpp_codegen_add((int64_t)L_248, (int64_t)L_249));
		V_8 = L_250;
		uint64_t L_251;
		L_251 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_247, ((int32_t)25), L_250, NULL);
		V_5 = L_251;
		uint64_t L_252 = V_7;
		uint64_t L_253 = V_10;
		uint64_t L_254 = V_7;
		int64_t L_255 = ((int64_t)il2cpp_codegen_add((int64_t)L_253, (int64_t)L_254));
		V_10 = L_255;
		uint64_t L_256;
		L_256 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_252, ((int32_t)29), L_255, NULL);
		V_7 = L_256;
		uint64_t L_257 = V_9;
		uint64_t L_258 = V_4;
		uint64_t L_259 = V_9;
		int64_t L_260 = ((int64_t)il2cpp_codegen_add((int64_t)L_258, (int64_t)L_259));
		V_4 = L_260;
		uint64_t L_261;
		L_261 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_257, ((int32_t)39), L_260, NULL);
		V_9 = L_261;
		uint64_t L_262 = V_11;
		uint64_t L_263 = V_6;
		uint64_t L_264 = V_11;
		int64_t L_265 = ((int64_t)il2cpp_codegen_add((int64_t)L_263, (int64_t)L_264));
		V_6 = L_265;
		uint64_t L_266;
		L_266 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_262, ((int32_t)43), L_265, NULL);
		V_11 = L_266;
		uint64_t L_267 = V_5;
		uint64_t L_268 = V_10;
		uint64_t L_269 = V_5;
		int64_t L_270 = ((int64_t)il2cpp_codegen_add((int64_t)L_268, (int64_t)L_269));
		V_10 = L_270;
		uint64_t L_271;
		L_271 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_267, 8, L_270, NULL);
		V_5 = L_271;
		uint64_t L_272 = V_11;
		uint64_t L_273 = V_4;
		uint64_t L_274 = V_11;
		int64_t L_275 = ((int64_t)il2cpp_codegen_add((int64_t)L_273, (int64_t)L_274));
		V_4 = L_275;
		uint64_t L_276;
		L_276 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_272, ((int32_t)35), L_275, NULL);
		V_11 = L_276;
		uint64_t L_277 = V_9;
		uint64_t L_278 = V_6;
		uint64_t L_279 = V_9;
		int64_t L_280 = ((int64_t)il2cpp_codegen_add((int64_t)L_278, (int64_t)L_279));
		V_6 = L_280;
		uint64_t L_281;
		L_281 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_277, ((int32_t)56), L_280, NULL);
		V_9 = L_281;
		uint64_t L_282 = V_7;
		uint64_t L_283 = V_8;
		uint64_t L_284 = V_7;
		int64_t L_285 = ((int64_t)il2cpp_codegen_add((int64_t)L_283, (int64_t)L_284));
		V_8 = L_285;
		uint64_t L_286;
		L_286 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_282, ((int32_t)22), L_285, NULL);
		V_7 = L_286;
		uint64_t L_287 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_288 = V_0;
		int32_t L_289 = V_13;
		int32_t L_290 = ((int32_t)il2cpp_codegen_add(L_289, 1));
		int64_t L_291 = (int64_t)(L_288)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_290));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_287, L_291));
		uint64_t L_292 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_293 = V_0;
		int32_t L_294 = V_13;
		int32_t L_295 = ((int32_t)il2cpp_codegen_add(L_294, 2));
		int64_t L_296 = (int64_t)(L_293)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_295));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_292, L_296));
		uint64_t L_297 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_298 = V_0;
		int32_t L_299 = V_13;
		int32_t L_300 = ((int32_t)il2cpp_codegen_add(L_299, 3));
		int64_t L_301 = (int64_t)(L_298)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_300));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_297, L_301));
		uint64_t L_302 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_303 = V_0;
		int32_t L_304 = V_13;
		int32_t L_305 = ((int32_t)il2cpp_codegen_add(L_304, 4));
		int64_t L_306 = (int64_t)(L_303)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_305));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_302, L_306));
		uint64_t L_307 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_308 = V_0;
		int32_t L_309 = V_13;
		int32_t L_310 = ((int32_t)il2cpp_codegen_add(L_309, 5));
		int64_t L_311 = (int64_t)(L_308)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_310));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_307, L_311));
		uint64_t L_312 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_313 = V_0;
		int32_t L_314 = V_13;
		int32_t L_315 = ((int32_t)il2cpp_codegen_add(L_314, 6));
		int64_t L_316 = (int64_t)(L_313)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_315));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_317 = V_1;
		int32_t L_318 = V_14;
		int32_t L_319 = ((int32_t)il2cpp_codegen_add(L_318, 1));
		int64_t L_320 = (int64_t)(L_317)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_319));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_312, ((int64_t)il2cpp_codegen_add(L_316, L_320))));
		uint64_t L_321 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_322 = V_0;
		int32_t L_323 = V_13;
		int32_t L_324 = ((int32_t)il2cpp_codegen_add(L_323, 7));
		int64_t L_325 = (int64_t)(L_322)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_324));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_326 = V_1;
		int32_t L_327 = V_14;
		int32_t L_328 = ((int32_t)il2cpp_codegen_add(L_327, 2));
		int64_t L_329 = (int64_t)(L_326)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_328));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_321, ((int64_t)il2cpp_codegen_add(L_325, L_329))));
		uint64_t L_330 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_331 = V_0;
		int32_t L_332 = V_13;
		int32_t L_333 = ((int32_t)il2cpp_codegen_add(L_332, 8));
		int64_t L_334 = (int64_t)(L_331)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_333));
		int32_t L_335 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_330, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_334, ((int64_t)(uint64_t)((uint32_t)L_335)))), ((int64_t)1)))));
		int32_t L_336 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_336, 2));
	}

IL_03ef:
	{
		int32_t L_337 = V_12;
		if ((((int32_t)L_337) < ((int32_t)((int32_t)18))))
		{
			goto IL_00ab;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_338 = ___outWords1;
		uint64_t L_339 = V_4;
		(L_338)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_339);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_340 = ___outWords1;
		uint64_t L_341 = V_5;
		(L_340)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_341);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_342 = ___outWords1;
		uint64_t L_343 = V_6;
		(L_342)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_343);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_344 = ___outWords1;
		uint64_t L_345 = V_7;
		(L_344)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_345);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_346 = ___outWords1;
		uint64_t L_347 = V_8;
		(L_346)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_347);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_348 = ___outWords1;
		uint64_t L_349 = V_9;
		(L_348)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_349);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_350 = ___outWords1;
		uint64_t L_351 = V_10;
		(L_350)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_351);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_352 = ___outWords1;
		uint64_t L_353 = V_11;
		(L_352)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_353);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher::DecryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish512Cipher_DecryptBlock_m16375AEF72B36D04FB1BDD9F9E888A36CD9952A7 (Threefish512Cipher_tE02AA413DEC2B3FA789F12AF89E596A009794B8D* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___block0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1*)__this)->___kw_1;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1*)__this)->___t_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var))->___MOD9_10;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)17))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_DecryptBlock_m16375AEF72B36D04FB1BDD9F9E888A36CD9952A7_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_DecryptBlock_m16375AEF72B36D04FB1BDD9F9E888A36CD9952A7_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___block0;
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___block0;
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___block0;
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___block0;
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___block0;
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___block0;
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___block0;
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___block0;
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		V_12 = ((int32_t)17);
		goto IL_03c8;
	}

IL_0064:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_2;
		int32_t L_33 = V_12;
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_13 = L_35;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_3;
		int32_t L_37 = V_12;
		int32_t L_38 = L_37;
		int32_t L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		V_14 = L_39;
		uint64_t L_40 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = V_0;
		int32_t L_42 = V_13;
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int64_t L_44 = (int64_t)(L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_40, L_44));
		uint64_t L_45 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_46 = V_0;
		int32_t L_47 = V_13;
		int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_47, 2));
		int64_t L_49 = (int64_t)(L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_45, L_49));
		uint64_t L_50 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_51 = V_0;
		int32_t L_52 = V_13;
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_52, 3));
		int64_t L_54 = (int64_t)(L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_50, L_54));
		uint64_t L_55 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_56 = V_0;
		int32_t L_57 = V_13;
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, 4));
		int64_t L_59 = (int64_t)(L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_55, L_59));
		uint64_t L_60 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_61 = V_0;
		int32_t L_62 = V_13;
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_62, 5));
		int64_t L_64 = (int64_t)(L_61)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_60, L_64));
		uint64_t L_65 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_66 = V_0;
		int32_t L_67 = V_13;
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 6));
		int64_t L_69 = (int64_t)(L_66)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_70 = V_1;
		int32_t L_71 = V_14;
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		int64_t L_73 = (int64_t)(L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_65, ((int64_t)il2cpp_codegen_add(L_69, L_73))));
		uint64_t L_74 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_75 = V_0;
		int32_t L_76 = V_13;
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(L_76, 7));
		int64_t L_78 = (int64_t)(L_75)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_79 = V_1;
		int32_t L_80 = V_14;
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 2));
		int64_t L_82 = (int64_t)(L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_74, ((int64_t)il2cpp_codegen_add(L_78, L_82))));
		uint64_t L_83 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_84 = V_0;
		int32_t L_85 = V_13;
		int32_t L_86 = ((int32_t)il2cpp_codegen_add(L_85, 8));
		int64_t L_87 = (int64_t)(L_84)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_86));
		int32_t L_88 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_83, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_87, ((int64_t)(uint64_t)((uint32_t)L_88)))), ((int64_t)1)))));
		uint64_t L_89 = V_5;
		uint64_t L_90 = V_10;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		uint64_t L_91;
		L_91 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_89, 8, L_90, NULL);
		V_5 = L_91;
		uint64_t L_92 = V_10;
		uint64_t L_93 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_92, (int64_t)L_93));
		uint64_t L_94 = V_11;
		uint64_t L_95 = V_4;
		uint64_t L_96;
		L_96 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_94, ((int32_t)35), L_95, NULL);
		V_11 = L_96;
		uint64_t L_97 = V_4;
		uint64_t L_98 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_97, (int64_t)L_98));
		uint64_t L_99 = V_9;
		uint64_t L_100 = V_6;
		uint64_t L_101;
		L_101 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_99, ((int32_t)56), L_100, NULL);
		V_9 = L_101;
		uint64_t L_102 = V_6;
		uint64_t L_103 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_102, (int64_t)L_103));
		uint64_t L_104 = V_7;
		uint64_t L_105 = V_8;
		uint64_t L_106;
		L_106 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_104, ((int32_t)22), L_105, NULL);
		V_7 = L_106;
		uint64_t L_107 = V_8;
		uint64_t L_108 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_107, (int64_t)L_108));
		uint64_t L_109 = V_5;
		uint64_t L_110 = V_8;
		uint64_t L_111;
		L_111 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_109, ((int32_t)25), L_110, NULL);
		V_5 = L_111;
		uint64_t L_112 = V_8;
		uint64_t L_113 = V_5;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_112, (int64_t)L_113));
		uint64_t L_114 = V_7;
		uint64_t L_115 = V_10;
		uint64_t L_116;
		L_116 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_114, ((int32_t)29), L_115, NULL);
		V_7 = L_116;
		uint64_t L_117 = V_10;
		uint64_t L_118 = V_7;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_117, (int64_t)L_118));
		uint64_t L_119 = V_9;
		uint64_t L_120 = V_4;
		uint64_t L_121;
		L_121 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_119, ((int32_t)39), L_120, NULL);
		V_9 = L_121;
		uint64_t L_122 = V_4;
		uint64_t L_123 = V_9;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_122, (int64_t)L_123));
		uint64_t L_124 = V_11;
		uint64_t L_125 = V_6;
		uint64_t L_126;
		L_126 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_124, ((int32_t)43), L_125, NULL);
		V_11 = L_126;
		uint64_t L_127 = V_6;
		uint64_t L_128 = V_11;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_127, (int64_t)L_128));
		uint64_t L_129 = V_5;
		uint64_t L_130 = V_6;
		uint64_t L_131;
		L_131 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_129, ((int32_t)13), L_130, NULL);
		V_5 = L_131;
		uint64_t L_132 = V_6;
		uint64_t L_133 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_132, (int64_t)L_133));
		uint64_t L_134 = V_11;
		uint64_t L_135 = V_8;
		uint64_t L_136;
		L_136 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_134, ((int32_t)50), L_135, NULL);
		V_11 = L_136;
		uint64_t L_137 = V_8;
		uint64_t L_138 = V_11;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_137, (int64_t)L_138));
		uint64_t L_139 = V_9;
		uint64_t L_140 = V_10;
		uint64_t L_141;
		L_141 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_139, ((int32_t)10), L_140, NULL);
		V_9 = L_141;
		uint64_t L_142 = V_10;
		uint64_t L_143 = V_9;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_142, (int64_t)L_143));
		uint64_t L_144 = V_7;
		uint64_t L_145 = V_4;
		uint64_t L_146;
		L_146 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_144, ((int32_t)17), L_145, NULL);
		V_7 = L_146;
		uint64_t L_147 = V_4;
		uint64_t L_148 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_147, (int64_t)L_148));
		uint64_t L_149 = V_5;
		uint64_t L_150 = V_4;
		uint64_t L_151;
		L_151 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_149, ((int32_t)39), L_150, NULL);
		V_5 = L_151;
		uint64_t L_152 = V_4;
		uint64_t L_153 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_152, (int64_t)L_153));
		uint64_t L_154 = V_7;
		uint64_t L_155 = V_6;
		uint64_t L_156;
		L_156 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_154, ((int32_t)30), L_155, NULL);
		V_7 = L_156;
		uint64_t L_157 = V_6;
		uint64_t L_158 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_157, (int64_t)L_158));
		uint64_t L_159 = V_9;
		uint64_t L_160 = V_8;
		uint64_t L_161;
		L_161 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_159, ((int32_t)34), L_160, NULL);
		V_9 = L_161;
		uint64_t L_162 = V_8;
		uint64_t L_163 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_162, (int64_t)L_163));
		uint64_t L_164 = V_11;
		uint64_t L_165 = V_10;
		uint64_t L_166;
		L_166 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_164, ((int32_t)24), L_165, NULL);
		V_11 = L_166;
		uint64_t L_167 = V_10;
		uint64_t L_168 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_167, (int64_t)L_168));
		uint64_t L_169 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_170 = V_0;
		int32_t L_171 = V_13;
		int32_t L_172 = L_171;
		int64_t L_173 = (int64_t)(L_170)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_172));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_169, L_173));
		uint64_t L_174 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_175 = V_0;
		int32_t L_176 = V_13;
		int32_t L_177 = ((int32_t)il2cpp_codegen_add(L_176, 1));
		int64_t L_178 = (int64_t)(L_175)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_177));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_174, L_178));
		uint64_t L_179 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_180 = V_0;
		int32_t L_181 = V_13;
		int32_t L_182 = ((int32_t)il2cpp_codegen_add(L_181, 2));
		int64_t L_183 = (int64_t)(L_180)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_182));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_179, L_183));
		uint64_t L_184 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_185 = V_0;
		int32_t L_186 = V_13;
		int32_t L_187 = ((int32_t)il2cpp_codegen_add(L_186, 3));
		int64_t L_188 = (int64_t)(L_185)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_187));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_184, L_188));
		uint64_t L_189 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_190 = V_0;
		int32_t L_191 = V_13;
		int32_t L_192 = ((int32_t)il2cpp_codegen_add(L_191, 4));
		int64_t L_193 = (int64_t)(L_190)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_192));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_189, L_193));
		uint64_t L_194 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_195 = V_0;
		int32_t L_196 = V_13;
		int32_t L_197 = ((int32_t)il2cpp_codegen_add(L_196, 5));
		int64_t L_198 = (int64_t)(L_195)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_197));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_199 = V_1;
		int32_t L_200 = V_14;
		int32_t L_201 = L_200;
		int64_t L_202 = (int64_t)(L_199)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_201));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_194, ((int64_t)il2cpp_codegen_add(L_198, L_202))));
		uint64_t L_203 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_204 = V_0;
		int32_t L_205 = V_13;
		int32_t L_206 = ((int32_t)il2cpp_codegen_add(L_205, 6));
		int64_t L_207 = (int64_t)(L_204)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_206));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_208 = V_1;
		int32_t L_209 = V_14;
		int32_t L_210 = ((int32_t)il2cpp_codegen_add(L_209, 1));
		int64_t L_211 = (int64_t)(L_208)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_210));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_203, ((int64_t)il2cpp_codegen_add(L_207, L_211))));
		uint64_t L_212 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_213 = V_0;
		int32_t L_214 = V_13;
		int32_t L_215 = ((int32_t)il2cpp_codegen_add(L_214, 7));
		int64_t L_216 = (int64_t)(L_213)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_215));
		int32_t L_217 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_212, ((int64_t)il2cpp_codegen_add(L_216, ((int64_t)(uint64_t)((uint32_t)L_217))))));
		uint64_t L_218 = V_5;
		uint64_t L_219 = V_10;
		uint64_t L_220;
		L_220 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_218, ((int32_t)44), L_219, NULL);
		V_5 = L_220;
		uint64_t L_221 = V_10;
		uint64_t L_222 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_221, (int64_t)L_222));
		uint64_t L_223 = V_11;
		uint64_t L_224 = V_4;
		uint64_t L_225;
		L_225 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_223, ((int32_t)9), L_224, NULL);
		V_11 = L_225;
		uint64_t L_226 = V_4;
		uint64_t L_227 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_226, (int64_t)L_227));
		uint64_t L_228 = V_9;
		uint64_t L_229 = V_6;
		uint64_t L_230;
		L_230 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_228, ((int32_t)54), L_229, NULL);
		V_9 = L_230;
		uint64_t L_231 = V_6;
		uint64_t L_232 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_231, (int64_t)L_232));
		uint64_t L_233 = V_7;
		uint64_t L_234 = V_8;
		uint64_t L_235;
		L_235 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_233, ((int32_t)56), L_234, NULL);
		V_7 = L_235;
		uint64_t L_236 = V_8;
		uint64_t L_237 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_236, (int64_t)L_237));
		uint64_t L_238 = V_5;
		uint64_t L_239 = V_8;
		uint64_t L_240;
		L_240 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_238, ((int32_t)17), L_239, NULL);
		V_5 = L_240;
		uint64_t L_241 = V_8;
		uint64_t L_242 = V_5;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_241, (int64_t)L_242));
		uint64_t L_243 = V_7;
		uint64_t L_244 = V_10;
		uint64_t L_245;
		L_245 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_243, ((int32_t)49), L_244, NULL);
		V_7 = L_245;
		uint64_t L_246 = V_10;
		uint64_t L_247 = V_7;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_246, (int64_t)L_247));
		uint64_t L_248 = V_9;
		uint64_t L_249 = V_4;
		uint64_t L_250;
		L_250 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_248, ((int32_t)36), L_249, NULL);
		V_9 = L_250;
		uint64_t L_251 = V_4;
		uint64_t L_252 = V_9;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_251, (int64_t)L_252));
		uint64_t L_253 = V_11;
		uint64_t L_254 = V_6;
		uint64_t L_255;
		L_255 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_253, ((int32_t)39), L_254, NULL);
		V_11 = L_255;
		uint64_t L_256 = V_6;
		uint64_t L_257 = V_11;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_256, (int64_t)L_257));
		uint64_t L_258 = V_5;
		uint64_t L_259 = V_6;
		uint64_t L_260;
		L_260 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_258, ((int32_t)33), L_259, NULL);
		V_5 = L_260;
		uint64_t L_261 = V_6;
		uint64_t L_262 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_261, (int64_t)L_262));
		uint64_t L_263 = V_11;
		uint64_t L_264 = V_8;
		uint64_t L_265;
		L_265 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_263, ((int32_t)27), L_264, NULL);
		V_11 = L_265;
		uint64_t L_266 = V_8;
		uint64_t L_267 = V_11;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_266, (int64_t)L_267));
		uint64_t L_268 = V_9;
		uint64_t L_269 = V_10;
		uint64_t L_270;
		L_270 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_268, ((int32_t)14), L_269, NULL);
		V_9 = L_270;
		uint64_t L_271 = V_10;
		uint64_t L_272 = V_9;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_271, (int64_t)L_272));
		uint64_t L_273 = V_7;
		uint64_t L_274 = V_4;
		uint64_t L_275;
		L_275 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_273, ((int32_t)42), L_274, NULL);
		V_7 = L_275;
		uint64_t L_276 = V_4;
		uint64_t L_277 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_276, (int64_t)L_277));
		uint64_t L_278 = V_5;
		uint64_t L_279 = V_4;
		uint64_t L_280;
		L_280 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_278, ((int32_t)46), L_279, NULL);
		V_5 = L_280;
		uint64_t L_281 = V_4;
		uint64_t L_282 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_281, (int64_t)L_282));
		uint64_t L_283 = V_7;
		uint64_t L_284 = V_6;
		uint64_t L_285;
		L_285 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_283, ((int32_t)36), L_284, NULL);
		V_7 = L_285;
		uint64_t L_286 = V_6;
		uint64_t L_287 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_286, (int64_t)L_287));
		uint64_t L_288 = V_9;
		uint64_t L_289 = V_8;
		uint64_t L_290;
		L_290 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_288, ((int32_t)19), L_289, NULL);
		V_9 = L_290;
		uint64_t L_291 = V_8;
		uint64_t L_292 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_291, (int64_t)L_292));
		uint64_t L_293 = V_11;
		uint64_t L_294 = V_10;
		uint64_t L_295;
		L_295 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_293, ((int32_t)37), L_294, NULL);
		V_11 = L_295;
		uint64_t L_296 = V_10;
		uint64_t L_297 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_296, (int64_t)L_297));
		int32_t L_298 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_298, 2));
	}

IL_03c8:
	{
		int32_t L_299 = V_12;
		if ((((int32_t)L_299) >= ((int32_t)1)))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_300 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_301 = V_0;
		int32_t L_302 = 0;
		int64_t L_303 = (int64_t)(L_301)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_302));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_300, L_303));
		uint64_t L_304 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_305 = V_0;
		int32_t L_306 = 1;
		int64_t L_307 = (int64_t)(L_305)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_306));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_304, L_307));
		uint64_t L_308 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_309 = V_0;
		int32_t L_310 = 2;
		int64_t L_311 = (int64_t)(L_309)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_310));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_308, L_311));
		uint64_t L_312 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_313 = V_0;
		int32_t L_314 = 3;
		int64_t L_315 = (int64_t)(L_313)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_314));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_312, L_315));
		uint64_t L_316 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_317 = V_0;
		int32_t L_318 = 4;
		int64_t L_319 = (int64_t)(L_317)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_318));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_316, L_319));
		uint64_t L_320 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_321 = V_0;
		int32_t L_322 = 5;
		int64_t L_323 = (int64_t)(L_321)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_322));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_324 = V_1;
		int32_t L_325 = 0;
		int64_t L_326 = (int64_t)(L_324)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_325));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_320, ((int64_t)il2cpp_codegen_add(L_323, L_326))));
		uint64_t L_327 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_328 = V_0;
		int32_t L_329 = 6;
		int64_t L_330 = (int64_t)(L_328)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_329));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_331 = V_1;
		int32_t L_332 = 1;
		int64_t L_333 = (int64_t)(L_331)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_332));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_327, ((int64_t)il2cpp_codegen_add(L_330, L_333))));
		uint64_t L_334 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_335 = V_0;
		int32_t L_336 = 7;
		int64_t L_337 = (int64_t)(L_335)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_336));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_334, L_337));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_338 = ___state1;
		uint64_t L_339 = V_4;
		(L_338)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_339);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_340 = ___state1;
		uint64_t L_341 = V_5;
		(L_340)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_341);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_342 = ___state1;
		uint64_t L_343 = V_6;
		(L_342)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_343);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_344 = ___state1;
		uint64_t L_345 = V_7;
		(L_344)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_345);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_346 = ___state1;
		uint64_t L_347 = V_8;
		(L_346)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_347);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_348 = ___state1;
		uint64_t L_349 = V_9;
		(L_348)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_349);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_350 = ___state1;
		uint64_t L_351 = V_10;
		(L_350)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_351);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_352 = ___state1;
		uint64_t L_353 = V_11;
		(L_352)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_353);
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
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish1024Cipher__ctor_m9FDAE71F7FDA7B82A23D1AB80FFF68EEEF3CF7C8 (Threefish1024Cipher_t56D2C1AB2ED3A65A7E1F23EAE08F5EF51E25CC0E* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t1, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___kw0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___t1;
		ThreefishCipher__ctor_mDDBB9ED63AB053243A6C41346A724EC53DF5CCD8(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher::EncryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish1024Cipher_EncryptBlock_m01621552A0885FD0F7F1326407DA9AE0CBD0181E (Threefish1024Cipher_t56D2C1AB2ED3A65A7E1F23EAE08F5EF51E25CC0E* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___block0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___outWords1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
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
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1*)__this)->___kw_1;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1*)__this)->___t_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var))->___MOD17_11;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)33))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_EncryptBlock_m01621552A0885FD0F7F1326407DA9AE0CBD0181E_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_EncryptBlock_m01621552A0885FD0F7F1326407DA9AE0CBD0181E_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___block0;
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___block0;
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___block0;
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___block0;
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___block0;
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___block0;
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___block0;
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___block0;
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ___block0;
		int32_t L_33 = 8;
		int64_t L_34 = (int64_t)(L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		V_12 = L_34;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = ___block0;
		int32_t L_36 = ((int32_t)9);
		int64_t L_37 = (int64_t)(L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
		V_13 = L_37;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = ___block0;
		int32_t L_39 = ((int32_t)10);
		int64_t L_40 = (int64_t)(L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		V_14 = L_40;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = ___block0;
		int32_t L_42 = ((int32_t)11);
		int64_t L_43 = (int64_t)(L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		V_15 = L_43;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = ___block0;
		int32_t L_45 = ((int32_t)12);
		int64_t L_46 = (int64_t)(L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		V_16 = L_46;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_47 = ___block0;
		int32_t L_48 = ((int32_t)13);
		int64_t L_49 = (int64_t)(L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		V_17 = L_49;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_50 = ___block0;
		int32_t L_51 = ((int32_t)14);
		int64_t L_52 = (int64_t)(L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		V_18 = L_52;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_53 = ___block0;
		int32_t L_54 = ((int32_t)15);
		int64_t L_55 = (int64_t)(L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		V_19 = L_55;
		uint64_t L_56 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_57 = V_0;
		int32_t L_58 = 0;
		int64_t L_59 = (int64_t)(L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_56, L_59));
		uint64_t L_60 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_61 = V_0;
		int32_t L_62 = 1;
		int64_t L_63 = (int64_t)(L_61)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, L_63));
		uint64_t L_64 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_65 = V_0;
		int32_t L_66 = 2;
		int64_t L_67 = (int64_t)(L_65)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, L_67));
		uint64_t L_68 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_69 = V_0;
		int32_t L_70 = 3;
		int64_t L_71 = (int64_t)(L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_70));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_68, L_71));
		uint64_t L_72 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_73 = V_0;
		int32_t L_74 = 4;
		int64_t L_75 = (int64_t)(L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_72, L_75));
		uint64_t L_76 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_77 = V_0;
		int32_t L_78 = 5;
		int64_t L_79 = (int64_t)(L_77)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, L_79));
		uint64_t L_80 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_81 = V_0;
		int32_t L_82 = 6;
		int64_t L_83 = (int64_t)(L_81)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, L_83));
		uint64_t L_84 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_85 = V_0;
		int32_t L_86 = 7;
		int64_t L_87 = (int64_t)(L_85)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_86));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, L_87));
		uint64_t L_88 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_89 = V_0;
		int32_t L_90 = 8;
		int64_t L_91 = (int64_t)(L_89)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_90));
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_88, L_91));
		uint64_t L_92 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_93 = V_0;
		int32_t L_94 = ((int32_t)9);
		int64_t L_95 = (int64_t)(L_93)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_94));
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_92, L_95));
		uint64_t L_96 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_97 = V_0;
		int32_t L_98 = ((int32_t)10);
		int64_t L_99 = (int64_t)(L_97)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_98));
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_99));
		uint64_t L_100 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_101 = V_0;
		int32_t L_102 = ((int32_t)11);
		int64_t L_103 = (int64_t)(L_101)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_102));
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_100, L_103));
		uint64_t L_104 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = V_0;
		int32_t L_106 = ((int32_t)12);
		int64_t L_107 = (int64_t)(L_105)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_106));
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_104, L_107));
		uint64_t L_108 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_109 = V_0;
		int32_t L_110 = ((int32_t)13);
		int64_t L_111 = (int64_t)(L_109)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_110));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_112 = V_1;
		int32_t L_113 = 0;
		int64_t L_114 = (int64_t)(L_112)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_113));
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_108, ((int64_t)il2cpp_codegen_add(L_111, L_114))));
		uint64_t L_115 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_116 = V_0;
		int32_t L_117 = ((int32_t)14);
		int64_t L_118 = (int64_t)(L_116)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_117));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_119 = V_1;
		int32_t L_120 = 1;
		int64_t L_121 = (int64_t)(L_119)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_120));
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_115, ((int64_t)il2cpp_codegen_add(L_118, L_121))));
		uint64_t L_122 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_123 = V_0;
		int32_t L_124 = ((int32_t)15);
		int64_t L_125 = (int64_t)(L_123)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_124));
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_122, L_125));
		V_20 = 1;
		goto IL_0780;
	}

IL_0121:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_126 = V_2;
		int32_t L_127 = V_20;
		int32_t L_128 = L_127;
		int32_t L_129 = (L_126)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_128));
		V_21 = L_129;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_130 = V_3;
		int32_t L_131 = V_20;
		int32_t L_132 = L_131;
		int32_t L_133 = (L_130)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_132));
		V_22 = L_133;
		uint64_t L_134 = V_5;
		uint64_t L_135 = V_4;
		uint64_t L_136 = V_5;
		int64_t L_137 = ((int64_t)il2cpp_codegen_add((int64_t)L_135, (int64_t)L_136));
		V_4 = L_137;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		uint64_t L_138;
		L_138 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_134, ((int32_t)24), L_137, NULL);
		V_5 = L_138;
		uint64_t L_139 = V_7;
		uint64_t L_140 = V_6;
		uint64_t L_141 = V_7;
		int64_t L_142 = ((int64_t)il2cpp_codegen_add((int64_t)L_140, (int64_t)L_141));
		V_6 = L_142;
		uint64_t L_143;
		L_143 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_139, ((int32_t)13), L_142, NULL);
		V_7 = L_143;
		uint64_t L_144 = V_9;
		uint64_t L_145 = V_8;
		uint64_t L_146 = V_9;
		int64_t L_147 = ((int64_t)il2cpp_codegen_add((int64_t)L_145, (int64_t)L_146));
		V_8 = L_147;
		uint64_t L_148;
		L_148 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_144, 8, L_147, NULL);
		V_9 = L_148;
		uint64_t L_149 = V_11;
		uint64_t L_150 = V_10;
		uint64_t L_151 = V_11;
		int64_t L_152 = ((int64_t)il2cpp_codegen_add((int64_t)L_150, (int64_t)L_151));
		V_10 = L_152;
		uint64_t L_153;
		L_153 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_149, ((int32_t)47), L_152, NULL);
		V_11 = L_153;
		uint64_t L_154 = V_13;
		uint64_t L_155 = V_12;
		uint64_t L_156 = V_13;
		int64_t L_157 = ((int64_t)il2cpp_codegen_add((int64_t)L_155, (int64_t)L_156));
		V_12 = L_157;
		uint64_t L_158;
		L_158 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_154, 8, L_157, NULL);
		V_13 = L_158;
		uint64_t L_159 = V_15;
		uint64_t L_160 = V_14;
		uint64_t L_161 = V_15;
		int64_t L_162 = ((int64_t)il2cpp_codegen_add((int64_t)L_160, (int64_t)L_161));
		V_14 = L_162;
		uint64_t L_163;
		L_163 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_159, ((int32_t)17), L_162, NULL);
		V_15 = L_163;
		uint64_t L_164 = V_17;
		uint64_t L_165 = V_16;
		uint64_t L_166 = V_17;
		int64_t L_167 = ((int64_t)il2cpp_codegen_add((int64_t)L_165, (int64_t)L_166));
		V_16 = L_167;
		uint64_t L_168;
		L_168 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_164, ((int32_t)22), L_167, NULL);
		V_17 = L_168;
		uint64_t L_169 = V_19;
		uint64_t L_170 = V_18;
		uint64_t L_171 = V_19;
		int64_t L_172 = ((int64_t)il2cpp_codegen_add((int64_t)L_170, (int64_t)L_171));
		V_18 = L_172;
		uint64_t L_173;
		L_173 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_169, ((int32_t)37), L_172, NULL);
		V_19 = L_173;
		uint64_t L_174 = V_13;
		uint64_t L_175 = V_4;
		uint64_t L_176 = V_13;
		int64_t L_177 = ((int64_t)il2cpp_codegen_add((int64_t)L_175, (int64_t)L_176));
		V_4 = L_177;
		uint64_t L_178;
		L_178 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_174, ((int32_t)38), L_177, NULL);
		V_13 = L_178;
		uint64_t L_179 = V_17;
		uint64_t L_180 = V_6;
		uint64_t L_181 = V_17;
		int64_t L_182 = ((int64_t)il2cpp_codegen_add((int64_t)L_180, (int64_t)L_181));
		V_6 = L_182;
		uint64_t L_183;
		L_183 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_179, ((int32_t)19), L_182, NULL);
		V_17 = L_183;
		uint64_t L_184 = V_15;
		uint64_t L_185 = V_10;
		uint64_t L_186 = V_15;
		int64_t L_187 = ((int64_t)il2cpp_codegen_add((int64_t)L_185, (int64_t)L_186));
		V_10 = L_187;
		uint64_t L_188;
		L_188 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_184, ((int32_t)10), L_187, NULL);
		V_15 = L_188;
		uint64_t L_189 = V_19;
		uint64_t L_190 = V_8;
		uint64_t L_191 = V_19;
		int64_t L_192 = ((int64_t)il2cpp_codegen_add((int64_t)L_190, (int64_t)L_191));
		V_8 = L_192;
		uint64_t L_193;
		L_193 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_189, ((int32_t)55), L_192, NULL);
		V_19 = L_193;
		uint64_t L_194 = V_11;
		uint64_t L_195 = V_14;
		uint64_t L_196 = V_11;
		int64_t L_197 = ((int64_t)il2cpp_codegen_add((int64_t)L_195, (int64_t)L_196));
		V_14 = L_197;
		uint64_t L_198;
		L_198 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_194, ((int32_t)49), L_197, NULL);
		V_11 = L_198;
		uint64_t L_199 = V_7;
		uint64_t L_200 = V_16;
		uint64_t L_201 = V_7;
		int64_t L_202 = ((int64_t)il2cpp_codegen_add((int64_t)L_200, (int64_t)L_201));
		V_16 = L_202;
		uint64_t L_203;
		L_203 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_199, ((int32_t)18), L_202, NULL);
		V_7 = L_203;
		uint64_t L_204 = V_9;
		uint64_t L_205 = V_18;
		uint64_t L_206 = V_9;
		int64_t L_207 = ((int64_t)il2cpp_codegen_add((int64_t)L_205, (int64_t)L_206));
		V_18 = L_207;
		uint64_t L_208;
		L_208 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_204, ((int32_t)23), L_207, NULL);
		V_9 = L_208;
		uint64_t L_209 = V_5;
		uint64_t L_210 = V_12;
		uint64_t L_211 = V_5;
		int64_t L_212 = ((int64_t)il2cpp_codegen_add((int64_t)L_210, (int64_t)L_211));
		V_12 = L_212;
		uint64_t L_213;
		L_213 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_209, ((int32_t)52), L_212, NULL);
		V_5 = L_213;
		uint64_t L_214 = V_11;
		uint64_t L_215 = V_4;
		uint64_t L_216 = V_11;
		int64_t L_217 = ((int64_t)il2cpp_codegen_add((int64_t)L_215, (int64_t)L_216));
		V_4 = L_217;
		uint64_t L_218;
		L_218 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_214, ((int32_t)33), L_217, NULL);
		V_11 = L_218;
		uint64_t L_219 = V_9;
		uint64_t L_220 = V_6;
		uint64_t L_221 = V_9;
		int64_t L_222 = ((int64_t)il2cpp_codegen_add((int64_t)L_220, (int64_t)L_221));
		V_6 = L_222;
		uint64_t L_223;
		L_223 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_219, 4, L_222, NULL);
		V_9 = L_223;
		uint64_t L_224 = V_7;
		uint64_t L_225 = V_8;
		uint64_t L_226 = V_7;
		int64_t L_227 = ((int64_t)il2cpp_codegen_add((int64_t)L_225, (int64_t)L_226));
		V_8 = L_227;
		uint64_t L_228;
		L_228 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_224, ((int32_t)51), L_227, NULL);
		V_7 = L_228;
		uint64_t L_229 = V_5;
		uint64_t L_230 = V_10;
		uint64_t L_231 = V_5;
		int64_t L_232 = ((int64_t)il2cpp_codegen_add((int64_t)L_230, (int64_t)L_231));
		V_10 = L_232;
		uint64_t L_233;
		L_233 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_229, ((int32_t)13), L_232, NULL);
		V_5 = L_233;
		uint64_t L_234 = V_19;
		uint64_t L_235 = V_16;
		uint64_t L_236 = V_19;
		int64_t L_237 = ((int64_t)il2cpp_codegen_add((int64_t)L_235, (int64_t)L_236));
		V_16 = L_237;
		uint64_t L_238;
		L_238 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_234, ((int32_t)34), L_237, NULL);
		V_19 = L_238;
		uint64_t L_239 = V_17;
		uint64_t L_240 = V_18;
		uint64_t L_241 = V_17;
		int64_t L_242 = ((int64_t)il2cpp_codegen_add((int64_t)L_240, (int64_t)L_241));
		V_18 = L_242;
		uint64_t L_243;
		L_243 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_239, ((int32_t)41), L_242, NULL);
		V_17 = L_243;
		uint64_t L_244 = V_15;
		uint64_t L_245 = V_12;
		uint64_t L_246 = V_15;
		int64_t L_247 = ((int64_t)il2cpp_codegen_add((int64_t)L_245, (int64_t)L_246));
		V_12 = L_247;
		uint64_t L_248;
		L_248 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_244, ((int32_t)59), L_247, NULL);
		V_15 = L_248;
		uint64_t L_249 = V_13;
		uint64_t L_250 = V_14;
		uint64_t L_251 = V_13;
		int64_t L_252 = ((int64_t)il2cpp_codegen_add((int64_t)L_250, (int64_t)L_251));
		V_14 = L_252;
		uint64_t L_253;
		L_253 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_249, ((int32_t)17), L_252, NULL);
		V_13 = L_253;
		uint64_t L_254 = V_19;
		uint64_t L_255 = V_4;
		uint64_t L_256 = V_19;
		int64_t L_257 = ((int64_t)il2cpp_codegen_add((int64_t)L_255, (int64_t)L_256));
		V_4 = L_257;
		uint64_t L_258;
		L_258 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_254, 5, L_257, NULL);
		V_19 = L_258;
		uint64_t L_259 = V_15;
		uint64_t L_260 = V_6;
		uint64_t L_261 = V_15;
		int64_t L_262 = ((int64_t)il2cpp_codegen_add((int64_t)L_260, (int64_t)L_261));
		V_6 = L_262;
		uint64_t L_263;
		L_263 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_259, ((int32_t)20), L_262, NULL);
		V_15 = L_263;
		uint64_t L_264 = V_17;
		uint64_t L_265 = V_10;
		uint64_t L_266 = V_17;
		int64_t L_267 = ((int64_t)il2cpp_codegen_add((int64_t)L_265, (int64_t)L_266));
		V_10 = L_267;
		uint64_t L_268;
		L_268 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_264, ((int32_t)48), L_267, NULL);
		V_17 = L_268;
		uint64_t L_269 = V_13;
		uint64_t L_270 = V_8;
		uint64_t L_271 = V_13;
		int64_t L_272 = ((int64_t)il2cpp_codegen_add((int64_t)L_270, (int64_t)L_271));
		V_8 = L_272;
		uint64_t L_273;
		L_273 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_269, ((int32_t)41), L_272, NULL);
		V_13 = L_273;
		uint64_t L_274 = V_5;
		uint64_t L_275 = V_18;
		uint64_t L_276 = V_5;
		int64_t L_277 = ((int64_t)il2cpp_codegen_add((int64_t)L_275, (int64_t)L_276));
		V_18 = L_277;
		uint64_t L_278;
		L_278 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_274, ((int32_t)47), L_277, NULL);
		V_5 = L_278;
		uint64_t L_279 = V_9;
		uint64_t L_280 = V_12;
		uint64_t L_281 = V_9;
		int64_t L_282 = ((int64_t)il2cpp_codegen_add((int64_t)L_280, (int64_t)L_281));
		V_12 = L_282;
		uint64_t L_283;
		L_283 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_279, ((int32_t)28), L_282, NULL);
		V_9 = L_283;
		uint64_t L_284 = V_7;
		uint64_t L_285 = V_14;
		uint64_t L_286 = V_7;
		int64_t L_287 = ((int64_t)il2cpp_codegen_add((int64_t)L_285, (int64_t)L_286));
		V_14 = L_287;
		uint64_t L_288;
		L_288 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_284, ((int32_t)16), L_287, NULL);
		V_7 = L_288;
		uint64_t L_289 = V_11;
		uint64_t L_290 = V_16;
		uint64_t L_291 = V_11;
		int64_t L_292 = ((int64_t)il2cpp_codegen_add((int64_t)L_290, (int64_t)L_291));
		V_16 = L_292;
		uint64_t L_293;
		L_293 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_289, ((int32_t)25), L_292, NULL);
		V_11 = L_293;
		uint64_t L_294 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_295 = V_0;
		int32_t L_296 = V_21;
		int32_t L_297 = L_296;
		int64_t L_298 = (int64_t)(L_295)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_297));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_294, L_298));
		uint64_t L_299 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_300 = V_0;
		int32_t L_301 = V_21;
		int32_t L_302 = ((int32_t)il2cpp_codegen_add(L_301, 1));
		int64_t L_303 = (int64_t)(L_300)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_302));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_299, L_303));
		uint64_t L_304 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_305 = V_0;
		int32_t L_306 = V_21;
		int32_t L_307 = ((int32_t)il2cpp_codegen_add(L_306, 2));
		int64_t L_308 = (int64_t)(L_305)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_307));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_304, L_308));
		uint64_t L_309 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_310 = V_0;
		int32_t L_311 = V_21;
		int32_t L_312 = ((int32_t)il2cpp_codegen_add(L_311, 3));
		int64_t L_313 = (int64_t)(L_310)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_312));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_309, L_313));
		uint64_t L_314 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_315 = V_0;
		int32_t L_316 = V_21;
		int32_t L_317 = ((int32_t)il2cpp_codegen_add(L_316, 4));
		int64_t L_318 = (int64_t)(L_315)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_317));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_314, L_318));
		uint64_t L_319 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_320 = V_0;
		int32_t L_321 = V_21;
		int32_t L_322 = ((int32_t)il2cpp_codegen_add(L_321, 5));
		int64_t L_323 = (int64_t)(L_320)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_322));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_319, L_323));
		uint64_t L_324 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_325 = V_0;
		int32_t L_326 = V_21;
		int32_t L_327 = ((int32_t)il2cpp_codegen_add(L_326, 6));
		int64_t L_328 = (int64_t)(L_325)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_327));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_324, L_328));
		uint64_t L_329 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_330 = V_0;
		int32_t L_331 = V_21;
		int32_t L_332 = ((int32_t)il2cpp_codegen_add(L_331, 7));
		int64_t L_333 = (int64_t)(L_330)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_332));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_329, L_333));
		uint64_t L_334 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_335 = V_0;
		int32_t L_336 = V_21;
		int32_t L_337 = ((int32_t)il2cpp_codegen_add(L_336, 8));
		int64_t L_338 = (int64_t)(L_335)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_337));
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_334, L_338));
		uint64_t L_339 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_340 = V_0;
		int32_t L_341 = V_21;
		int32_t L_342 = ((int32_t)il2cpp_codegen_add(L_341, ((int32_t)9)));
		int64_t L_343 = (int64_t)(L_340)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_342));
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_339, L_343));
		uint64_t L_344 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_345 = V_0;
		int32_t L_346 = V_21;
		int32_t L_347 = ((int32_t)il2cpp_codegen_add(L_346, ((int32_t)10)));
		int64_t L_348 = (int64_t)(L_345)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_347));
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_344, L_348));
		uint64_t L_349 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_350 = V_0;
		int32_t L_351 = V_21;
		int32_t L_352 = ((int32_t)il2cpp_codegen_add(L_351, ((int32_t)11)));
		int64_t L_353 = (int64_t)(L_350)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_352));
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_349, L_353));
		uint64_t L_354 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_355 = V_0;
		int32_t L_356 = V_21;
		int32_t L_357 = ((int32_t)il2cpp_codegen_add(L_356, ((int32_t)12)));
		int64_t L_358 = (int64_t)(L_355)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_357));
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_354, L_358));
		uint64_t L_359 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_360 = V_0;
		int32_t L_361 = V_21;
		int32_t L_362 = ((int32_t)il2cpp_codegen_add(L_361, ((int32_t)13)));
		int64_t L_363 = (int64_t)(L_360)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_362));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_364 = V_1;
		int32_t L_365 = V_22;
		int32_t L_366 = L_365;
		int64_t L_367 = (int64_t)(L_364)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_366));
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_359, ((int64_t)il2cpp_codegen_add(L_363, L_367))));
		uint64_t L_368 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_369 = V_0;
		int32_t L_370 = V_21;
		int32_t L_371 = ((int32_t)il2cpp_codegen_add(L_370, ((int32_t)14)));
		int64_t L_372 = (int64_t)(L_369)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_371));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_373 = V_1;
		int32_t L_374 = V_22;
		int32_t L_375 = ((int32_t)il2cpp_codegen_add(L_374, 1));
		int64_t L_376 = (int64_t)(L_373)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_375));
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_368, ((int64_t)il2cpp_codegen_add(L_372, L_376))));
		uint64_t L_377 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_378 = V_0;
		int32_t L_379 = V_21;
		int32_t L_380 = ((int32_t)il2cpp_codegen_add(L_379, ((int32_t)15)));
		int64_t L_381 = (int64_t)(L_378)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_380));
		int32_t L_382 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_377, ((int64_t)il2cpp_codegen_add(L_381, ((int64_t)(uint64_t)((uint32_t)L_382))))));
		uint64_t L_383 = V_5;
		uint64_t L_384 = V_4;
		uint64_t L_385 = V_5;
		int64_t L_386 = ((int64_t)il2cpp_codegen_add((int64_t)L_384, (int64_t)L_385));
		V_4 = L_386;
		uint64_t L_387;
		L_387 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_383, ((int32_t)41), L_386, NULL);
		V_5 = L_387;
		uint64_t L_388 = V_7;
		uint64_t L_389 = V_6;
		uint64_t L_390 = V_7;
		int64_t L_391 = ((int64_t)il2cpp_codegen_add((int64_t)L_389, (int64_t)L_390));
		V_6 = L_391;
		uint64_t L_392;
		L_392 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_388, ((int32_t)9), L_391, NULL);
		V_7 = L_392;
		uint64_t L_393 = V_9;
		uint64_t L_394 = V_8;
		uint64_t L_395 = V_9;
		int64_t L_396 = ((int64_t)il2cpp_codegen_add((int64_t)L_394, (int64_t)L_395));
		V_8 = L_396;
		uint64_t L_397;
		L_397 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_393, ((int32_t)37), L_396, NULL);
		V_9 = L_397;
		uint64_t L_398 = V_11;
		uint64_t L_399 = V_10;
		uint64_t L_400 = V_11;
		int64_t L_401 = ((int64_t)il2cpp_codegen_add((int64_t)L_399, (int64_t)L_400));
		V_10 = L_401;
		uint64_t L_402;
		L_402 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_398, ((int32_t)31), L_401, NULL);
		V_11 = L_402;
		uint64_t L_403 = V_13;
		uint64_t L_404 = V_12;
		uint64_t L_405 = V_13;
		int64_t L_406 = ((int64_t)il2cpp_codegen_add((int64_t)L_404, (int64_t)L_405));
		V_12 = L_406;
		uint64_t L_407;
		L_407 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_403, ((int32_t)12), L_406, NULL);
		V_13 = L_407;
		uint64_t L_408 = V_15;
		uint64_t L_409 = V_14;
		uint64_t L_410 = V_15;
		int64_t L_411 = ((int64_t)il2cpp_codegen_add((int64_t)L_409, (int64_t)L_410));
		V_14 = L_411;
		uint64_t L_412;
		L_412 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_408, ((int32_t)47), L_411, NULL);
		V_15 = L_412;
		uint64_t L_413 = V_17;
		uint64_t L_414 = V_16;
		uint64_t L_415 = V_17;
		int64_t L_416 = ((int64_t)il2cpp_codegen_add((int64_t)L_414, (int64_t)L_415));
		V_16 = L_416;
		uint64_t L_417;
		L_417 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_413, ((int32_t)44), L_416, NULL);
		V_17 = L_417;
		uint64_t L_418 = V_19;
		uint64_t L_419 = V_18;
		uint64_t L_420 = V_19;
		int64_t L_421 = ((int64_t)il2cpp_codegen_add((int64_t)L_419, (int64_t)L_420));
		V_18 = L_421;
		uint64_t L_422;
		L_422 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_418, ((int32_t)30), L_421, NULL);
		V_19 = L_422;
		uint64_t L_423 = V_13;
		uint64_t L_424 = V_4;
		uint64_t L_425 = V_13;
		int64_t L_426 = ((int64_t)il2cpp_codegen_add((int64_t)L_424, (int64_t)L_425));
		V_4 = L_426;
		uint64_t L_427;
		L_427 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_423, ((int32_t)16), L_426, NULL);
		V_13 = L_427;
		uint64_t L_428 = V_17;
		uint64_t L_429 = V_6;
		uint64_t L_430 = V_17;
		int64_t L_431 = ((int64_t)il2cpp_codegen_add((int64_t)L_429, (int64_t)L_430));
		V_6 = L_431;
		uint64_t L_432;
		L_432 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_428, ((int32_t)34), L_431, NULL);
		V_17 = L_432;
		uint64_t L_433 = V_15;
		uint64_t L_434 = V_10;
		uint64_t L_435 = V_15;
		int64_t L_436 = ((int64_t)il2cpp_codegen_add((int64_t)L_434, (int64_t)L_435));
		V_10 = L_436;
		uint64_t L_437;
		L_437 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_433, ((int32_t)56), L_436, NULL);
		V_15 = L_437;
		uint64_t L_438 = V_19;
		uint64_t L_439 = V_8;
		uint64_t L_440 = V_19;
		int64_t L_441 = ((int64_t)il2cpp_codegen_add((int64_t)L_439, (int64_t)L_440));
		V_8 = L_441;
		uint64_t L_442;
		L_442 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_438, ((int32_t)51), L_441, NULL);
		V_19 = L_442;
		uint64_t L_443 = V_11;
		uint64_t L_444 = V_14;
		uint64_t L_445 = V_11;
		int64_t L_446 = ((int64_t)il2cpp_codegen_add((int64_t)L_444, (int64_t)L_445));
		V_14 = L_446;
		uint64_t L_447;
		L_447 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_443, 4, L_446, NULL);
		V_11 = L_447;
		uint64_t L_448 = V_7;
		uint64_t L_449 = V_16;
		uint64_t L_450 = V_7;
		int64_t L_451 = ((int64_t)il2cpp_codegen_add((int64_t)L_449, (int64_t)L_450));
		V_16 = L_451;
		uint64_t L_452;
		L_452 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_448, ((int32_t)53), L_451, NULL);
		V_7 = L_452;
		uint64_t L_453 = V_9;
		uint64_t L_454 = V_18;
		uint64_t L_455 = V_9;
		int64_t L_456 = ((int64_t)il2cpp_codegen_add((int64_t)L_454, (int64_t)L_455));
		V_18 = L_456;
		uint64_t L_457;
		L_457 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_453, ((int32_t)42), L_456, NULL);
		V_9 = L_457;
		uint64_t L_458 = V_5;
		uint64_t L_459 = V_12;
		uint64_t L_460 = V_5;
		int64_t L_461 = ((int64_t)il2cpp_codegen_add((int64_t)L_459, (int64_t)L_460));
		V_12 = L_461;
		uint64_t L_462;
		L_462 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_458, ((int32_t)41), L_461, NULL);
		V_5 = L_462;
		uint64_t L_463 = V_11;
		uint64_t L_464 = V_4;
		uint64_t L_465 = V_11;
		int64_t L_466 = ((int64_t)il2cpp_codegen_add((int64_t)L_464, (int64_t)L_465));
		V_4 = L_466;
		uint64_t L_467;
		L_467 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_463, ((int32_t)31), L_466, NULL);
		V_11 = L_467;
		uint64_t L_468 = V_9;
		uint64_t L_469 = V_6;
		uint64_t L_470 = V_9;
		int64_t L_471 = ((int64_t)il2cpp_codegen_add((int64_t)L_469, (int64_t)L_470));
		V_6 = L_471;
		uint64_t L_472;
		L_472 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_468, ((int32_t)44), L_471, NULL);
		V_9 = L_472;
		uint64_t L_473 = V_7;
		uint64_t L_474 = V_8;
		uint64_t L_475 = V_7;
		int64_t L_476 = ((int64_t)il2cpp_codegen_add((int64_t)L_474, (int64_t)L_475));
		V_8 = L_476;
		uint64_t L_477;
		L_477 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_473, ((int32_t)47), L_476, NULL);
		V_7 = L_477;
		uint64_t L_478 = V_5;
		uint64_t L_479 = V_10;
		uint64_t L_480 = V_5;
		int64_t L_481 = ((int64_t)il2cpp_codegen_add((int64_t)L_479, (int64_t)L_480));
		V_10 = L_481;
		uint64_t L_482;
		L_482 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_478, ((int32_t)46), L_481, NULL);
		V_5 = L_482;
		uint64_t L_483 = V_19;
		uint64_t L_484 = V_16;
		uint64_t L_485 = V_19;
		int64_t L_486 = ((int64_t)il2cpp_codegen_add((int64_t)L_484, (int64_t)L_485));
		V_16 = L_486;
		uint64_t L_487;
		L_487 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_483, ((int32_t)19), L_486, NULL);
		V_19 = L_487;
		uint64_t L_488 = V_17;
		uint64_t L_489 = V_18;
		uint64_t L_490 = V_17;
		int64_t L_491 = ((int64_t)il2cpp_codegen_add((int64_t)L_489, (int64_t)L_490));
		V_18 = L_491;
		uint64_t L_492;
		L_492 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_488, ((int32_t)42), L_491, NULL);
		V_17 = L_492;
		uint64_t L_493 = V_15;
		uint64_t L_494 = V_12;
		uint64_t L_495 = V_15;
		int64_t L_496 = ((int64_t)il2cpp_codegen_add((int64_t)L_494, (int64_t)L_495));
		V_12 = L_496;
		uint64_t L_497;
		L_497 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_493, ((int32_t)44), L_496, NULL);
		V_15 = L_497;
		uint64_t L_498 = V_13;
		uint64_t L_499 = V_14;
		uint64_t L_500 = V_13;
		int64_t L_501 = ((int64_t)il2cpp_codegen_add((int64_t)L_499, (int64_t)L_500));
		V_14 = L_501;
		uint64_t L_502;
		L_502 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_498, ((int32_t)25), L_501, NULL);
		V_13 = L_502;
		uint64_t L_503 = V_19;
		uint64_t L_504 = V_4;
		uint64_t L_505 = V_19;
		int64_t L_506 = ((int64_t)il2cpp_codegen_add((int64_t)L_504, (int64_t)L_505));
		V_4 = L_506;
		uint64_t L_507;
		L_507 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_503, ((int32_t)9), L_506, NULL);
		V_19 = L_507;
		uint64_t L_508 = V_15;
		uint64_t L_509 = V_6;
		uint64_t L_510 = V_15;
		int64_t L_511 = ((int64_t)il2cpp_codegen_add((int64_t)L_509, (int64_t)L_510));
		V_6 = L_511;
		uint64_t L_512;
		L_512 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_508, ((int32_t)48), L_511, NULL);
		V_15 = L_512;
		uint64_t L_513 = V_17;
		uint64_t L_514 = V_10;
		uint64_t L_515 = V_17;
		int64_t L_516 = ((int64_t)il2cpp_codegen_add((int64_t)L_514, (int64_t)L_515));
		V_10 = L_516;
		uint64_t L_517;
		L_517 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_513, ((int32_t)35), L_516, NULL);
		V_17 = L_517;
		uint64_t L_518 = V_13;
		uint64_t L_519 = V_8;
		uint64_t L_520 = V_13;
		int64_t L_521 = ((int64_t)il2cpp_codegen_add((int64_t)L_519, (int64_t)L_520));
		V_8 = L_521;
		uint64_t L_522;
		L_522 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_518, ((int32_t)52), L_521, NULL);
		V_13 = L_522;
		uint64_t L_523 = V_5;
		uint64_t L_524 = V_18;
		uint64_t L_525 = V_5;
		int64_t L_526 = ((int64_t)il2cpp_codegen_add((int64_t)L_524, (int64_t)L_525));
		V_18 = L_526;
		uint64_t L_527;
		L_527 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_523, ((int32_t)23), L_526, NULL);
		V_5 = L_527;
		uint64_t L_528 = V_9;
		uint64_t L_529 = V_12;
		uint64_t L_530 = V_9;
		int64_t L_531 = ((int64_t)il2cpp_codegen_add((int64_t)L_529, (int64_t)L_530));
		V_12 = L_531;
		uint64_t L_532;
		L_532 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_528, ((int32_t)31), L_531, NULL);
		V_9 = L_532;
		uint64_t L_533 = V_7;
		uint64_t L_534 = V_14;
		uint64_t L_535 = V_7;
		int64_t L_536 = ((int64_t)il2cpp_codegen_add((int64_t)L_534, (int64_t)L_535));
		V_14 = L_536;
		uint64_t L_537;
		L_537 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_533, ((int32_t)37), L_536, NULL);
		V_7 = L_537;
		uint64_t L_538 = V_11;
		uint64_t L_539 = V_16;
		uint64_t L_540 = V_11;
		int64_t L_541 = ((int64_t)il2cpp_codegen_add((int64_t)L_539, (int64_t)L_540));
		V_16 = L_541;
		uint64_t L_542;
		L_542 = ThreefishEngine_RotlXor_m7233931BF81F0213BD09E2F3BB6631A8D4EF526F(L_538, ((int32_t)20), L_541, NULL);
		V_11 = L_542;
		uint64_t L_543 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_544 = V_0;
		int32_t L_545 = V_21;
		int32_t L_546 = ((int32_t)il2cpp_codegen_add(L_545, 1));
		int64_t L_547 = (int64_t)(L_544)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_546));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_543, L_547));
		uint64_t L_548 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_549 = V_0;
		int32_t L_550 = V_21;
		int32_t L_551 = ((int32_t)il2cpp_codegen_add(L_550, 2));
		int64_t L_552 = (int64_t)(L_549)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_551));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_548, L_552));
		uint64_t L_553 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_554 = V_0;
		int32_t L_555 = V_21;
		int32_t L_556 = ((int32_t)il2cpp_codegen_add(L_555, 3));
		int64_t L_557 = (int64_t)(L_554)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_556));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_553, L_557));
		uint64_t L_558 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_559 = V_0;
		int32_t L_560 = V_21;
		int32_t L_561 = ((int32_t)il2cpp_codegen_add(L_560, 4));
		int64_t L_562 = (int64_t)(L_559)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_561));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_558, L_562));
		uint64_t L_563 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_564 = V_0;
		int32_t L_565 = V_21;
		int32_t L_566 = ((int32_t)il2cpp_codegen_add(L_565, 5));
		int64_t L_567 = (int64_t)(L_564)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_566));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_563, L_567));
		uint64_t L_568 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_569 = V_0;
		int32_t L_570 = V_21;
		int32_t L_571 = ((int32_t)il2cpp_codegen_add(L_570, 6));
		int64_t L_572 = (int64_t)(L_569)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_571));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_568, L_572));
		uint64_t L_573 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_574 = V_0;
		int32_t L_575 = V_21;
		int32_t L_576 = ((int32_t)il2cpp_codegen_add(L_575, 7));
		int64_t L_577 = (int64_t)(L_574)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_576));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_573, L_577));
		uint64_t L_578 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_579 = V_0;
		int32_t L_580 = V_21;
		int32_t L_581 = ((int32_t)il2cpp_codegen_add(L_580, 8));
		int64_t L_582 = (int64_t)(L_579)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_581));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_578, L_582));
		uint64_t L_583 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_584 = V_0;
		int32_t L_585 = V_21;
		int32_t L_586 = ((int32_t)il2cpp_codegen_add(L_585, ((int32_t)9)));
		int64_t L_587 = (int64_t)(L_584)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_586));
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_583, L_587));
		uint64_t L_588 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_589 = V_0;
		int32_t L_590 = V_21;
		int32_t L_591 = ((int32_t)il2cpp_codegen_add(L_590, ((int32_t)10)));
		int64_t L_592 = (int64_t)(L_589)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_591));
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_588, L_592));
		uint64_t L_593 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_594 = V_0;
		int32_t L_595 = V_21;
		int32_t L_596 = ((int32_t)il2cpp_codegen_add(L_595, ((int32_t)11)));
		int64_t L_597 = (int64_t)(L_594)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_596));
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_593, L_597));
		uint64_t L_598 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_599 = V_0;
		int32_t L_600 = V_21;
		int32_t L_601 = ((int32_t)il2cpp_codegen_add(L_600, ((int32_t)12)));
		int64_t L_602 = (int64_t)(L_599)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_601));
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_598, L_602));
		uint64_t L_603 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_604 = V_0;
		int32_t L_605 = V_21;
		int32_t L_606 = ((int32_t)il2cpp_codegen_add(L_605, ((int32_t)13)));
		int64_t L_607 = (int64_t)(L_604)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_606));
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_603, L_607));
		uint64_t L_608 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_609 = V_0;
		int32_t L_610 = V_21;
		int32_t L_611 = ((int32_t)il2cpp_codegen_add(L_610, ((int32_t)14)));
		int64_t L_612 = (int64_t)(L_609)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_611));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_613 = V_1;
		int32_t L_614 = V_22;
		int32_t L_615 = ((int32_t)il2cpp_codegen_add(L_614, 1));
		int64_t L_616 = (int64_t)(L_613)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_615));
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_608, ((int64_t)il2cpp_codegen_add(L_612, L_616))));
		uint64_t L_617 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_618 = V_0;
		int32_t L_619 = V_21;
		int32_t L_620 = ((int32_t)il2cpp_codegen_add(L_619, ((int32_t)15)));
		int64_t L_621 = (int64_t)(L_618)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_620));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_622 = V_1;
		int32_t L_623 = V_22;
		int32_t L_624 = ((int32_t)il2cpp_codegen_add(L_623, 2));
		int64_t L_625 = (int64_t)(L_622)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_624));
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_617, ((int64_t)il2cpp_codegen_add(L_621, L_625))));
		uint64_t L_626 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_627 = V_0;
		int32_t L_628 = V_21;
		int32_t L_629 = ((int32_t)il2cpp_codegen_add(L_628, ((int32_t)16)));
		int64_t L_630 = (int64_t)(L_627)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_629));
		int32_t L_631 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_626, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_630, ((int64_t)(uint64_t)((uint32_t)L_631)))), ((int64_t)1)))));
		int32_t L_632 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_632, 2));
	}

IL_0780:
	{
		int32_t L_633 = V_20;
		if ((((int32_t)L_633) < ((int32_t)((int32_t)20))))
		{
			goto IL_0121;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_634 = ___outWords1;
		uint64_t L_635 = V_4;
		(L_634)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_635);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_636 = ___outWords1;
		uint64_t L_637 = V_5;
		(L_636)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_637);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_638 = ___outWords1;
		uint64_t L_639 = V_6;
		(L_638)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_639);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_640 = ___outWords1;
		uint64_t L_641 = V_7;
		(L_640)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_641);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_642 = ___outWords1;
		uint64_t L_643 = V_8;
		(L_642)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_643);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_644 = ___outWords1;
		uint64_t L_645 = V_9;
		(L_644)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_645);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_646 = ___outWords1;
		uint64_t L_647 = V_10;
		(L_646)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_647);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_648 = ___outWords1;
		uint64_t L_649 = V_11;
		(L_648)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_649);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_650 = ___outWords1;
		uint64_t L_651 = V_12;
		(L_650)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (uint64_t)L_651);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_652 = ___outWords1;
		uint64_t L_653 = V_13;
		(L_652)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint64_t)L_653);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_654 = ___outWords1;
		uint64_t L_655 = V_14;
		(L_654)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint64_t)L_655);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_656 = ___outWords1;
		uint64_t L_657 = V_15;
		(L_656)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint64_t)L_657);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_658 = ___outWords1;
		uint64_t L_659 = V_16;
		(L_658)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint64_t)L_659);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_660 = ___outWords1;
		uint64_t L_661 = V_17;
		(L_660)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint64_t)L_661);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_662 = ___outWords1;
		uint64_t L_663 = V_18;
		(L_662)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint64_t)L_663);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_664 = ___outWords1;
		uint64_t L_665 = V_19;
		(L_664)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint64_t)L_665);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher::DecryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish1024Cipher_DecryptBlock_m525CF0E616C29474935EB564D2C40F4160C6FF73 (Threefish1024Cipher_t56D2C1AB2ED3A65A7E1F23EAE08F5EF51E25CC0E* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___block0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
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
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1*)__this)->___kw_1;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1*)__this)->___t_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var))->___MOD17_11;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)33))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_DecryptBlock_m525CF0E616C29474935EB564D2C40F4160C6FF73_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_DecryptBlock_m525CF0E616C29474935EB564D2C40F4160C6FF73_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___block0;
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___block0;
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___block0;
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___block0;
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___block0;
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___block0;
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___block0;
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___block0;
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ___block0;
		int32_t L_33 = 8;
		int64_t L_34 = (int64_t)(L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		V_12 = L_34;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = ___block0;
		int32_t L_36 = ((int32_t)9);
		int64_t L_37 = (int64_t)(L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
		V_13 = L_37;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = ___block0;
		int32_t L_39 = ((int32_t)10);
		int64_t L_40 = (int64_t)(L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		V_14 = L_40;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = ___block0;
		int32_t L_42 = ((int32_t)11);
		int64_t L_43 = (int64_t)(L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		V_15 = L_43;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = ___block0;
		int32_t L_45 = ((int32_t)12);
		int64_t L_46 = (int64_t)(L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		V_16 = L_46;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_47 = ___block0;
		int32_t L_48 = ((int32_t)13);
		int64_t L_49 = (int64_t)(L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		V_17 = L_49;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_50 = ___block0;
		int32_t L_51 = ((int32_t)14);
		int64_t L_52 = (int64_t)(L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		V_18 = L_52;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_53 = ___block0;
		int32_t L_54 = ((int32_t)15);
		int64_t L_55 = (int64_t)(L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		V_19 = L_55;
		V_20 = ((int32_t)19);
		goto IL_0732;
	}

IL_0093:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_2;
		int32_t L_57 = V_20;
		int32_t L_58 = L_57;
		int32_t L_59 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		V_21 = L_59;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_3;
		int32_t L_61 = V_20;
		int32_t L_62 = L_61;
		int32_t L_63 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		V_22 = L_63;
		uint64_t L_64 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_65 = V_0;
		int32_t L_66 = V_21;
		int32_t L_67 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		int64_t L_68 = (int64_t)(L_65)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_67));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_64, L_68));
		uint64_t L_69 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_70 = V_0;
		int32_t L_71 = V_21;
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 2));
		int64_t L_73 = (int64_t)(L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_69, L_73));
		uint64_t L_74 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_75 = V_0;
		int32_t L_76 = V_21;
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(L_76, 3));
		int64_t L_78 = (int64_t)(L_75)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_74, L_78));
		uint64_t L_79 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_80 = V_0;
		int32_t L_81 = V_21;
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 4));
		int64_t L_83 = (int64_t)(L_80)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_79, L_83));
		uint64_t L_84 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_85 = V_0;
		int32_t L_86 = V_21;
		int32_t L_87 = ((int32_t)il2cpp_codegen_add(L_86, 5));
		int64_t L_88 = (int64_t)(L_85)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_87));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_84, L_88));
		uint64_t L_89 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_90 = V_0;
		int32_t L_91 = V_21;
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(L_91, 6));
		int64_t L_93 = (int64_t)(L_90)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_92));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_89, L_93));
		uint64_t L_94 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_95 = V_0;
		int32_t L_96 = V_21;
		int32_t L_97 = ((int32_t)il2cpp_codegen_add(L_96, 7));
		int64_t L_98 = (int64_t)(L_95)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_97));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_94, L_98));
		uint64_t L_99 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_100 = V_0;
		int32_t L_101 = V_21;
		int32_t L_102 = ((int32_t)il2cpp_codegen_add(L_101, 8));
		int64_t L_103 = (int64_t)(L_100)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_102));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_99, L_103));
		uint64_t L_104 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = V_0;
		int32_t L_106 = V_21;
		int32_t L_107 = ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)9)));
		int64_t L_108 = (int64_t)(L_105)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_107));
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_104, L_108));
		uint64_t L_109 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_110 = V_0;
		int32_t L_111 = V_21;
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)10)));
		int64_t L_113 = (int64_t)(L_110)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_112));
		V_13 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_109, L_113));
		uint64_t L_114 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_115 = V_0;
		int32_t L_116 = V_21;
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_116, ((int32_t)11)));
		int64_t L_118 = (int64_t)(L_115)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_117));
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_114, L_118));
		uint64_t L_119 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_120 = V_0;
		int32_t L_121 = V_21;
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_121, ((int32_t)12)));
		int64_t L_123 = (int64_t)(L_120)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_122));
		V_15 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_119, L_123));
		uint64_t L_124 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_125 = V_0;
		int32_t L_126 = V_21;
		int32_t L_127 = ((int32_t)il2cpp_codegen_add(L_126, ((int32_t)13)));
		int64_t L_128 = (int64_t)(L_125)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_127));
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_124, L_128));
		uint64_t L_129 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_130 = V_0;
		int32_t L_131 = V_21;
		int32_t L_132 = ((int32_t)il2cpp_codegen_add(L_131, ((int32_t)14)));
		int64_t L_133 = (int64_t)(L_130)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_132));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_134 = V_1;
		int32_t L_135 = V_22;
		int32_t L_136 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		int64_t L_137 = (int64_t)(L_134)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_136));
		V_17 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_129, ((int64_t)il2cpp_codegen_add(L_133, L_137))));
		uint64_t L_138 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_139 = V_0;
		int32_t L_140 = V_21;
		int32_t L_141 = ((int32_t)il2cpp_codegen_add(L_140, ((int32_t)15)));
		int64_t L_142 = (int64_t)(L_139)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_141));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_143 = V_1;
		int32_t L_144 = V_22;
		int32_t L_145 = ((int32_t)il2cpp_codegen_add(L_144, 2));
		int64_t L_146 = (int64_t)(L_143)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_145));
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_138, ((int64_t)il2cpp_codegen_add(L_142, L_146))));
		uint64_t L_147 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_148 = V_0;
		int32_t L_149 = V_21;
		int32_t L_150 = ((int32_t)il2cpp_codegen_add(L_149, ((int32_t)16)));
		int64_t L_151 = (int64_t)(L_148)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_150));
		int32_t L_152 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_147, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_151, ((int64_t)(uint64_t)((uint32_t)L_152)))), ((int64_t)1)))));
		uint64_t L_153 = V_19;
		uint64_t L_154 = V_4;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		uint64_t L_155;
		L_155 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_153, ((int32_t)9), L_154, NULL);
		V_19 = L_155;
		uint64_t L_156 = V_4;
		uint64_t L_157 = V_19;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_156, (int64_t)L_157));
		uint64_t L_158 = V_15;
		uint64_t L_159 = V_6;
		uint64_t L_160;
		L_160 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_158, ((int32_t)48), L_159, NULL);
		V_15 = L_160;
		uint64_t L_161 = V_6;
		uint64_t L_162 = V_15;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_161, (int64_t)L_162));
		uint64_t L_163 = V_17;
		uint64_t L_164 = V_10;
		uint64_t L_165;
		L_165 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_163, ((int32_t)35), L_164, NULL);
		V_17 = L_165;
		uint64_t L_166 = V_10;
		uint64_t L_167 = V_17;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_166, (int64_t)L_167));
		uint64_t L_168 = V_13;
		uint64_t L_169 = V_8;
		uint64_t L_170;
		L_170 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_168, ((int32_t)52), L_169, NULL);
		V_13 = L_170;
		uint64_t L_171 = V_8;
		uint64_t L_172 = V_13;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_171, (int64_t)L_172));
		uint64_t L_173 = V_5;
		uint64_t L_174 = V_18;
		uint64_t L_175;
		L_175 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_173, ((int32_t)23), L_174, NULL);
		V_5 = L_175;
		uint64_t L_176 = V_18;
		uint64_t L_177 = V_5;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_176, (int64_t)L_177));
		uint64_t L_178 = V_9;
		uint64_t L_179 = V_12;
		uint64_t L_180;
		L_180 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_178, ((int32_t)31), L_179, NULL);
		V_9 = L_180;
		uint64_t L_181 = V_12;
		uint64_t L_182 = V_9;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_181, (int64_t)L_182));
		uint64_t L_183 = V_7;
		uint64_t L_184 = V_14;
		uint64_t L_185;
		L_185 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_183, ((int32_t)37), L_184, NULL);
		V_7 = L_185;
		uint64_t L_186 = V_14;
		uint64_t L_187 = V_7;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_186, (int64_t)L_187));
		uint64_t L_188 = V_11;
		uint64_t L_189 = V_16;
		uint64_t L_190;
		L_190 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_188, ((int32_t)20), L_189, NULL);
		V_11 = L_190;
		uint64_t L_191 = V_16;
		uint64_t L_192 = V_11;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_191, (int64_t)L_192));
		uint64_t L_193 = V_11;
		uint64_t L_194 = V_4;
		uint64_t L_195;
		L_195 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_193, ((int32_t)31), L_194, NULL);
		V_11 = L_195;
		uint64_t L_196 = V_4;
		uint64_t L_197 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_196, (int64_t)L_197));
		uint64_t L_198 = V_9;
		uint64_t L_199 = V_6;
		uint64_t L_200;
		L_200 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_198, ((int32_t)44), L_199, NULL);
		V_9 = L_200;
		uint64_t L_201 = V_6;
		uint64_t L_202 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_201, (int64_t)L_202));
		uint64_t L_203 = V_7;
		uint64_t L_204 = V_8;
		uint64_t L_205;
		L_205 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_203, ((int32_t)47), L_204, NULL);
		V_7 = L_205;
		uint64_t L_206 = V_8;
		uint64_t L_207 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_206, (int64_t)L_207));
		uint64_t L_208 = V_5;
		uint64_t L_209 = V_10;
		uint64_t L_210;
		L_210 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_208, ((int32_t)46), L_209, NULL);
		V_5 = L_210;
		uint64_t L_211 = V_10;
		uint64_t L_212 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_211, (int64_t)L_212));
		uint64_t L_213 = V_19;
		uint64_t L_214 = V_16;
		uint64_t L_215;
		L_215 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_213, ((int32_t)19), L_214, NULL);
		V_19 = L_215;
		uint64_t L_216 = V_16;
		uint64_t L_217 = V_19;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_216, (int64_t)L_217));
		uint64_t L_218 = V_17;
		uint64_t L_219 = V_18;
		uint64_t L_220;
		L_220 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_218, ((int32_t)42), L_219, NULL);
		V_17 = L_220;
		uint64_t L_221 = V_18;
		uint64_t L_222 = V_17;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_221, (int64_t)L_222));
		uint64_t L_223 = V_15;
		uint64_t L_224 = V_12;
		uint64_t L_225;
		L_225 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_223, ((int32_t)44), L_224, NULL);
		V_15 = L_225;
		uint64_t L_226 = V_12;
		uint64_t L_227 = V_15;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_226, (int64_t)L_227));
		uint64_t L_228 = V_13;
		uint64_t L_229 = V_14;
		uint64_t L_230;
		L_230 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_228, ((int32_t)25), L_229, NULL);
		V_13 = L_230;
		uint64_t L_231 = V_14;
		uint64_t L_232 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_231, (int64_t)L_232));
		uint64_t L_233 = V_13;
		uint64_t L_234 = V_4;
		uint64_t L_235;
		L_235 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_233, ((int32_t)16), L_234, NULL);
		V_13 = L_235;
		uint64_t L_236 = V_4;
		uint64_t L_237 = V_13;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_236, (int64_t)L_237));
		uint64_t L_238 = V_17;
		uint64_t L_239 = V_6;
		uint64_t L_240;
		L_240 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_238, ((int32_t)34), L_239, NULL);
		V_17 = L_240;
		uint64_t L_241 = V_6;
		uint64_t L_242 = V_17;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_241, (int64_t)L_242));
		uint64_t L_243 = V_15;
		uint64_t L_244 = V_10;
		uint64_t L_245;
		L_245 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_243, ((int32_t)56), L_244, NULL);
		V_15 = L_245;
		uint64_t L_246 = V_10;
		uint64_t L_247 = V_15;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_246, (int64_t)L_247));
		uint64_t L_248 = V_19;
		uint64_t L_249 = V_8;
		uint64_t L_250;
		L_250 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_248, ((int32_t)51), L_249, NULL);
		V_19 = L_250;
		uint64_t L_251 = V_8;
		uint64_t L_252 = V_19;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_251, (int64_t)L_252));
		uint64_t L_253 = V_11;
		uint64_t L_254 = V_14;
		uint64_t L_255;
		L_255 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_253, 4, L_254, NULL);
		V_11 = L_255;
		uint64_t L_256 = V_14;
		uint64_t L_257 = V_11;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_256, (int64_t)L_257));
		uint64_t L_258 = V_7;
		uint64_t L_259 = V_16;
		uint64_t L_260;
		L_260 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_258, ((int32_t)53), L_259, NULL);
		V_7 = L_260;
		uint64_t L_261 = V_16;
		uint64_t L_262 = V_7;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_261, (int64_t)L_262));
		uint64_t L_263 = V_9;
		uint64_t L_264 = V_18;
		uint64_t L_265;
		L_265 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_263, ((int32_t)42), L_264, NULL);
		V_9 = L_265;
		uint64_t L_266 = V_18;
		uint64_t L_267 = V_9;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_266, (int64_t)L_267));
		uint64_t L_268 = V_5;
		uint64_t L_269 = V_12;
		uint64_t L_270;
		L_270 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_268, ((int32_t)41), L_269, NULL);
		V_5 = L_270;
		uint64_t L_271 = V_12;
		uint64_t L_272 = V_5;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_271, (int64_t)L_272));
		uint64_t L_273 = V_5;
		uint64_t L_274 = V_4;
		uint64_t L_275;
		L_275 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_273, ((int32_t)41), L_274, NULL);
		V_5 = L_275;
		uint64_t L_276 = V_4;
		uint64_t L_277 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_276, (int64_t)L_277));
		uint64_t L_278 = V_7;
		uint64_t L_279 = V_6;
		uint64_t L_280;
		L_280 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_278, ((int32_t)9), L_279, NULL);
		V_7 = L_280;
		uint64_t L_281 = V_6;
		uint64_t L_282 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_281, (int64_t)L_282));
		uint64_t L_283 = V_9;
		uint64_t L_284 = V_8;
		uint64_t L_285;
		L_285 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_283, ((int32_t)37), L_284, NULL);
		V_9 = L_285;
		uint64_t L_286 = V_8;
		uint64_t L_287 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_286, (int64_t)L_287));
		uint64_t L_288 = V_11;
		uint64_t L_289 = V_10;
		uint64_t L_290;
		L_290 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_288, ((int32_t)31), L_289, NULL);
		V_11 = L_290;
		uint64_t L_291 = V_10;
		uint64_t L_292 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_291, (int64_t)L_292));
		uint64_t L_293 = V_13;
		uint64_t L_294 = V_12;
		uint64_t L_295;
		L_295 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_293, ((int32_t)12), L_294, NULL);
		V_13 = L_295;
		uint64_t L_296 = V_12;
		uint64_t L_297 = V_13;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_296, (int64_t)L_297));
		uint64_t L_298 = V_15;
		uint64_t L_299 = V_14;
		uint64_t L_300;
		L_300 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_298, ((int32_t)47), L_299, NULL);
		V_15 = L_300;
		uint64_t L_301 = V_14;
		uint64_t L_302 = V_15;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_301, (int64_t)L_302));
		uint64_t L_303 = V_17;
		uint64_t L_304 = V_16;
		uint64_t L_305;
		L_305 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_303, ((int32_t)44), L_304, NULL);
		V_17 = L_305;
		uint64_t L_306 = V_16;
		uint64_t L_307 = V_17;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_306, (int64_t)L_307));
		uint64_t L_308 = V_19;
		uint64_t L_309 = V_18;
		uint64_t L_310;
		L_310 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_308, ((int32_t)30), L_309, NULL);
		V_19 = L_310;
		uint64_t L_311 = V_18;
		uint64_t L_312 = V_19;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_311, (int64_t)L_312));
		uint64_t L_313 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_314 = V_0;
		int32_t L_315 = V_21;
		int32_t L_316 = L_315;
		int64_t L_317 = (int64_t)(L_314)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_316));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_313, L_317));
		uint64_t L_318 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_319 = V_0;
		int32_t L_320 = V_21;
		int32_t L_321 = ((int32_t)il2cpp_codegen_add(L_320, 1));
		int64_t L_322 = (int64_t)(L_319)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_321));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_318, L_322));
		uint64_t L_323 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_324 = V_0;
		int32_t L_325 = V_21;
		int32_t L_326 = ((int32_t)il2cpp_codegen_add(L_325, 2));
		int64_t L_327 = (int64_t)(L_324)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_326));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_323, L_327));
		uint64_t L_328 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_329 = V_0;
		int32_t L_330 = V_21;
		int32_t L_331 = ((int32_t)il2cpp_codegen_add(L_330, 3));
		int64_t L_332 = (int64_t)(L_329)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_331));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_328, L_332));
		uint64_t L_333 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_334 = V_0;
		int32_t L_335 = V_21;
		int32_t L_336 = ((int32_t)il2cpp_codegen_add(L_335, 4));
		int64_t L_337 = (int64_t)(L_334)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_336));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_333, L_337));
		uint64_t L_338 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_339 = V_0;
		int32_t L_340 = V_21;
		int32_t L_341 = ((int32_t)il2cpp_codegen_add(L_340, 5));
		int64_t L_342 = (int64_t)(L_339)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_341));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_338, L_342));
		uint64_t L_343 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_344 = V_0;
		int32_t L_345 = V_21;
		int32_t L_346 = ((int32_t)il2cpp_codegen_add(L_345, 6));
		int64_t L_347 = (int64_t)(L_344)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_346));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_343, L_347));
		uint64_t L_348 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_349 = V_0;
		int32_t L_350 = V_21;
		int32_t L_351 = ((int32_t)il2cpp_codegen_add(L_350, 7));
		int64_t L_352 = (int64_t)(L_349)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_351));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_348, L_352));
		uint64_t L_353 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_354 = V_0;
		int32_t L_355 = V_21;
		int32_t L_356 = ((int32_t)il2cpp_codegen_add(L_355, 8));
		int64_t L_357 = (int64_t)(L_354)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_356));
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_353, L_357));
		uint64_t L_358 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_359 = V_0;
		int32_t L_360 = V_21;
		int32_t L_361 = ((int32_t)il2cpp_codegen_add(L_360, ((int32_t)9)));
		int64_t L_362 = (int64_t)(L_359)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_361));
		V_13 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_358, L_362));
		uint64_t L_363 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_364 = V_0;
		int32_t L_365 = V_21;
		int32_t L_366 = ((int32_t)il2cpp_codegen_add(L_365, ((int32_t)10)));
		int64_t L_367 = (int64_t)(L_364)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_366));
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_363, L_367));
		uint64_t L_368 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_369 = V_0;
		int32_t L_370 = V_21;
		int32_t L_371 = ((int32_t)il2cpp_codegen_add(L_370, ((int32_t)11)));
		int64_t L_372 = (int64_t)(L_369)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_371));
		V_15 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_368, L_372));
		uint64_t L_373 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_374 = V_0;
		int32_t L_375 = V_21;
		int32_t L_376 = ((int32_t)il2cpp_codegen_add(L_375, ((int32_t)12)));
		int64_t L_377 = (int64_t)(L_374)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_376));
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_373, L_377));
		uint64_t L_378 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_379 = V_0;
		int32_t L_380 = V_21;
		int32_t L_381 = ((int32_t)il2cpp_codegen_add(L_380, ((int32_t)13)));
		int64_t L_382 = (int64_t)(L_379)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_381));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_383 = V_1;
		int32_t L_384 = V_22;
		int32_t L_385 = L_384;
		int64_t L_386 = (int64_t)(L_383)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_385));
		V_17 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_378, ((int64_t)il2cpp_codegen_add(L_382, L_386))));
		uint64_t L_387 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_388 = V_0;
		int32_t L_389 = V_21;
		int32_t L_390 = ((int32_t)il2cpp_codegen_add(L_389, ((int32_t)14)));
		int64_t L_391 = (int64_t)(L_388)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_390));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_392 = V_1;
		int32_t L_393 = V_22;
		int32_t L_394 = ((int32_t)il2cpp_codegen_add(L_393, 1));
		int64_t L_395 = (int64_t)(L_392)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_394));
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_387, ((int64_t)il2cpp_codegen_add(L_391, L_395))));
		uint64_t L_396 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_397 = V_0;
		int32_t L_398 = V_21;
		int32_t L_399 = ((int32_t)il2cpp_codegen_add(L_398, ((int32_t)15)));
		int64_t L_400 = (int64_t)(L_397)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_399));
		int32_t L_401 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_396, ((int64_t)il2cpp_codegen_add(L_400, ((int64_t)(uint64_t)((uint32_t)L_401))))));
		uint64_t L_402 = V_19;
		uint64_t L_403 = V_4;
		uint64_t L_404;
		L_404 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_402, 5, L_403, NULL);
		V_19 = L_404;
		uint64_t L_405 = V_4;
		uint64_t L_406 = V_19;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_405, (int64_t)L_406));
		uint64_t L_407 = V_15;
		uint64_t L_408 = V_6;
		uint64_t L_409;
		L_409 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_407, ((int32_t)20), L_408, NULL);
		V_15 = L_409;
		uint64_t L_410 = V_6;
		uint64_t L_411 = V_15;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_410, (int64_t)L_411));
		uint64_t L_412 = V_17;
		uint64_t L_413 = V_10;
		uint64_t L_414;
		L_414 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_412, ((int32_t)48), L_413, NULL);
		V_17 = L_414;
		uint64_t L_415 = V_10;
		uint64_t L_416 = V_17;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_415, (int64_t)L_416));
		uint64_t L_417 = V_13;
		uint64_t L_418 = V_8;
		uint64_t L_419;
		L_419 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_417, ((int32_t)41), L_418, NULL);
		V_13 = L_419;
		uint64_t L_420 = V_8;
		uint64_t L_421 = V_13;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_420, (int64_t)L_421));
		uint64_t L_422 = V_5;
		uint64_t L_423 = V_18;
		uint64_t L_424;
		L_424 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_422, ((int32_t)47), L_423, NULL);
		V_5 = L_424;
		uint64_t L_425 = V_18;
		uint64_t L_426 = V_5;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_425, (int64_t)L_426));
		uint64_t L_427 = V_9;
		uint64_t L_428 = V_12;
		uint64_t L_429;
		L_429 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_427, ((int32_t)28), L_428, NULL);
		V_9 = L_429;
		uint64_t L_430 = V_12;
		uint64_t L_431 = V_9;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_430, (int64_t)L_431));
		uint64_t L_432 = V_7;
		uint64_t L_433 = V_14;
		uint64_t L_434;
		L_434 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_432, ((int32_t)16), L_433, NULL);
		V_7 = L_434;
		uint64_t L_435 = V_14;
		uint64_t L_436 = V_7;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_435, (int64_t)L_436));
		uint64_t L_437 = V_11;
		uint64_t L_438 = V_16;
		uint64_t L_439;
		L_439 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_437, ((int32_t)25), L_438, NULL);
		V_11 = L_439;
		uint64_t L_440 = V_16;
		uint64_t L_441 = V_11;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_440, (int64_t)L_441));
		uint64_t L_442 = V_11;
		uint64_t L_443 = V_4;
		uint64_t L_444;
		L_444 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_442, ((int32_t)33), L_443, NULL);
		V_11 = L_444;
		uint64_t L_445 = V_4;
		uint64_t L_446 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_445, (int64_t)L_446));
		uint64_t L_447 = V_9;
		uint64_t L_448 = V_6;
		uint64_t L_449;
		L_449 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_447, 4, L_448, NULL);
		V_9 = L_449;
		uint64_t L_450 = V_6;
		uint64_t L_451 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_450, (int64_t)L_451));
		uint64_t L_452 = V_7;
		uint64_t L_453 = V_8;
		uint64_t L_454;
		L_454 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_452, ((int32_t)51), L_453, NULL);
		V_7 = L_454;
		uint64_t L_455 = V_8;
		uint64_t L_456 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_455, (int64_t)L_456));
		uint64_t L_457 = V_5;
		uint64_t L_458 = V_10;
		uint64_t L_459;
		L_459 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_457, ((int32_t)13), L_458, NULL);
		V_5 = L_459;
		uint64_t L_460 = V_10;
		uint64_t L_461 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_460, (int64_t)L_461));
		uint64_t L_462 = V_19;
		uint64_t L_463 = V_16;
		uint64_t L_464;
		L_464 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_462, ((int32_t)34), L_463, NULL);
		V_19 = L_464;
		uint64_t L_465 = V_16;
		uint64_t L_466 = V_19;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_465, (int64_t)L_466));
		uint64_t L_467 = V_17;
		uint64_t L_468 = V_18;
		uint64_t L_469;
		L_469 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_467, ((int32_t)41), L_468, NULL);
		V_17 = L_469;
		uint64_t L_470 = V_18;
		uint64_t L_471 = V_17;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_470, (int64_t)L_471));
		uint64_t L_472 = V_15;
		uint64_t L_473 = V_12;
		uint64_t L_474;
		L_474 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_472, ((int32_t)59), L_473, NULL);
		V_15 = L_474;
		uint64_t L_475 = V_12;
		uint64_t L_476 = V_15;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_475, (int64_t)L_476));
		uint64_t L_477 = V_13;
		uint64_t L_478 = V_14;
		uint64_t L_479;
		L_479 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_477, ((int32_t)17), L_478, NULL);
		V_13 = L_479;
		uint64_t L_480 = V_14;
		uint64_t L_481 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_480, (int64_t)L_481));
		uint64_t L_482 = V_13;
		uint64_t L_483 = V_4;
		uint64_t L_484;
		L_484 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_482, ((int32_t)38), L_483, NULL);
		V_13 = L_484;
		uint64_t L_485 = V_4;
		uint64_t L_486 = V_13;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_485, (int64_t)L_486));
		uint64_t L_487 = V_17;
		uint64_t L_488 = V_6;
		uint64_t L_489;
		L_489 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_487, ((int32_t)19), L_488, NULL);
		V_17 = L_489;
		uint64_t L_490 = V_6;
		uint64_t L_491 = V_17;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_490, (int64_t)L_491));
		uint64_t L_492 = V_15;
		uint64_t L_493 = V_10;
		uint64_t L_494;
		L_494 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_492, ((int32_t)10), L_493, NULL);
		V_15 = L_494;
		uint64_t L_495 = V_10;
		uint64_t L_496 = V_15;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_495, (int64_t)L_496));
		uint64_t L_497 = V_19;
		uint64_t L_498 = V_8;
		uint64_t L_499;
		L_499 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_497, ((int32_t)55), L_498, NULL);
		V_19 = L_499;
		uint64_t L_500 = V_8;
		uint64_t L_501 = V_19;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_500, (int64_t)L_501));
		uint64_t L_502 = V_11;
		uint64_t L_503 = V_14;
		uint64_t L_504;
		L_504 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_502, ((int32_t)49), L_503, NULL);
		V_11 = L_504;
		uint64_t L_505 = V_14;
		uint64_t L_506 = V_11;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_505, (int64_t)L_506));
		uint64_t L_507 = V_7;
		uint64_t L_508 = V_16;
		uint64_t L_509;
		L_509 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_507, ((int32_t)18), L_508, NULL);
		V_7 = L_509;
		uint64_t L_510 = V_16;
		uint64_t L_511 = V_7;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_510, (int64_t)L_511));
		uint64_t L_512 = V_9;
		uint64_t L_513 = V_18;
		uint64_t L_514;
		L_514 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_512, ((int32_t)23), L_513, NULL);
		V_9 = L_514;
		uint64_t L_515 = V_18;
		uint64_t L_516 = V_9;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_515, (int64_t)L_516));
		uint64_t L_517 = V_5;
		uint64_t L_518 = V_12;
		uint64_t L_519;
		L_519 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_517, ((int32_t)52), L_518, NULL);
		V_5 = L_519;
		uint64_t L_520 = V_12;
		uint64_t L_521 = V_5;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_520, (int64_t)L_521));
		uint64_t L_522 = V_5;
		uint64_t L_523 = V_4;
		uint64_t L_524;
		L_524 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_522, ((int32_t)24), L_523, NULL);
		V_5 = L_524;
		uint64_t L_525 = V_4;
		uint64_t L_526 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_525, (int64_t)L_526));
		uint64_t L_527 = V_7;
		uint64_t L_528 = V_6;
		uint64_t L_529;
		L_529 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_527, ((int32_t)13), L_528, NULL);
		V_7 = L_529;
		uint64_t L_530 = V_6;
		uint64_t L_531 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_530, (int64_t)L_531));
		uint64_t L_532 = V_9;
		uint64_t L_533 = V_8;
		uint64_t L_534;
		L_534 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_532, 8, L_533, NULL);
		V_9 = L_534;
		uint64_t L_535 = V_8;
		uint64_t L_536 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_535, (int64_t)L_536));
		uint64_t L_537 = V_11;
		uint64_t L_538 = V_10;
		uint64_t L_539;
		L_539 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_537, ((int32_t)47), L_538, NULL);
		V_11 = L_539;
		uint64_t L_540 = V_10;
		uint64_t L_541 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_540, (int64_t)L_541));
		uint64_t L_542 = V_13;
		uint64_t L_543 = V_12;
		uint64_t L_544;
		L_544 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_542, 8, L_543, NULL);
		V_13 = L_544;
		uint64_t L_545 = V_12;
		uint64_t L_546 = V_13;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_545, (int64_t)L_546));
		uint64_t L_547 = V_15;
		uint64_t L_548 = V_14;
		uint64_t L_549;
		L_549 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_547, ((int32_t)17), L_548, NULL);
		V_15 = L_549;
		uint64_t L_550 = V_14;
		uint64_t L_551 = V_15;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_550, (int64_t)L_551));
		uint64_t L_552 = V_17;
		uint64_t L_553 = V_16;
		uint64_t L_554;
		L_554 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_552, ((int32_t)22), L_553, NULL);
		V_17 = L_554;
		uint64_t L_555 = V_16;
		uint64_t L_556 = V_17;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_555, (int64_t)L_556));
		uint64_t L_557 = V_19;
		uint64_t L_558 = V_18;
		uint64_t L_559;
		L_559 = ThreefishEngine_XorRotr_mDE4A4454F2ACC5B647BEC31F13E2C3D12E289B69(L_557, ((int32_t)37), L_558, NULL);
		V_19 = L_559;
		uint64_t L_560 = V_18;
		uint64_t L_561 = V_19;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_560, (int64_t)L_561));
		int32_t L_562 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_subtract(L_562, 2));
	}

IL_0732:
	{
		int32_t L_563 = V_20;
		if ((((int32_t)L_563) >= ((int32_t)1)))
		{
			goto IL_0093;
		}
	}
	{
		uint64_t L_564 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_565 = V_0;
		int32_t L_566 = 0;
		int64_t L_567 = (int64_t)(L_565)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_566));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_564, L_567));
		uint64_t L_568 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_569 = V_0;
		int32_t L_570 = 1;
		int64_t L_571 = (int64_t)(L_569)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_570));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_568, L_571));
		uint64_t L_572 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_573 = V_0;
		int32_t L_574 = 2;
		int64_t L_575 = (int64_t)(L_573)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_574));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_572, L_575));
		uint64_t L_576 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_577 = V_0;
		int32_t L_578 = 3;
		int64_t L_579 = (int64_t)(L_577)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_578));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_576, L_579));
		uint64_t L_580 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_581 = V_0;
		int32_t L_582 = 4;
		int64_t L_583 = (int64_t)(L_581)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_582));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_580, L_583));
		uint64_t L_584 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_585 = V_0;
		int32_t L_586 = 5;
		int64_t L_587 = (int64_t)(L_585)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_586));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_584, L_587));
		uint64_t L_588 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_589 = V_0;
		int32_t L_590 = 6;
		int64_t L_591 = (int64_t)(L_589)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_590));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_588, L_591));
		uint64_t L_592 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_593 = V_0;
		int32_t L_594 = 7;
		int64_t L_595 = (int64_t)(L_593)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_594));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_592, L_595));
		uint64_t L_596 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_597 = V_0;
		int32_t L_598 = 8;
		int64_t L_599 = (int64_t)(L_597)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_598));
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_596, L_599));
		uint64_t L_600 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_601 = V_0;
		int32_t L_602 = ((int32_t)9);
		int64_t L_603 = (int64_t)(L_601)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_602));
		V_13 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_600, L_603));
		uint64_t L_604 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_605 = V_0;
		int32_t L_606 = ((int32_t)10);
		int64_t L_607 = (int64_t)(L_605)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_606));
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_604, L_607));
		uint64_t L_608 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_609 = V_0;
		int32_t L_610 = ((int32_t)11);
		int64_t L_611 = (int64_t)(L_609)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_610));
		V_15 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_608, L_611));
		uint64_t L_612 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_613 = V_0;
		int32_t L_614 = ((int32_t)12);
		int64_t L_615 = (int64_t)(L_613)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_614));
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_612, L_615));
		uint64_t L_616 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_617 = V_0;
		int32_t L_618 = ((int32_t)13);
		int64_t L_619 = (int64_t)(L_617)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_618));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_620 = V_1;
		int32_t L_621 = 0;
		int64_t L_622 = (int64_t)(L_620)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_621));
		V_17 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_616, ((int64_t)il2cpp_codegen_add(L_619, L_622))));
		uint64_t L_623 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_624 = V_0;
		int32_t L_625 = ((int32_t)14);
		int64_t L_626 = (int64_t)(L_624)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_625));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_627 = V_1;
		int32_t L_628 = 1;
		int64_t L_629 = (int64_t)(L_627)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_628));
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_623, ((int64_t)il2cpp_codegen_add(L_626, L_629))));
		uint64_t L_630 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_631 = V_0;
		int32_t L_632 = ((int32_t)15);
		int64_t L_633 = (int64_t)(L_631)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_632));
		V_19 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_630, L_633));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_634 = ___state1;
		uint64_t L_635 = V_4;
		(L_634)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_635);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_636 = ___state1;
		uint64_t L_637 = V_5;
		(L_636)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_637);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_638 = ___state1;
		uint64_t L_639 = V_6;
		(L_638)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_639);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_640 = ___state1;
		uint64_t L_641 = V_7;
		(L_640)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_641);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_642 = ___state1;
		uint64_t L_643 = V_8;
		(L_642)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_643);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_644 = ___state1;
		uint64_t L_645 = V_9;
		(L_644)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_645);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_646 = ___state1;
		uint64_t L_647 = V_10;
		(L_646)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_647);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_648 = ___state1;
		uint64_t L_649 = V_11;
		(L_648)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_649);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_650 = ___state1;
		uint64_t L_651 = V_12;
		(L_650)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (uint64_t)L_651);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_652 = ___state1;
		uint64_t L_653 = V_13;
		(L_652)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint64_t)L_653);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_654 = ___state1;
		uint64_t L_655 = V_14;
		(L_654)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint64_t)L_655);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_656 = ___state1;
		uint64_t L_657 = V_15;
		(L_656)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint64_t)L_657);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_658 = ___state1;
		uint64_t L_659 = V_16;
		(L_658)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint64_t)L_659);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_660 = ___state1;
		uint64_t L_661 = V_17;
		(L_660)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint64_t)L_661);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_662 = ___state1;
		uint64_t L_663 = V_18;
		(L_662)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint64_t)L_663);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_664 = ___state1;
		uint64_t L_665 = V_19;
		(L_664)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint64_t)L_665);
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
// System.String Org.BouncyCastle.Crypto.Engines.TnepresEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TnepresEngine_get_AlgorithmName_m1B80BB58136E3D964EE8FAA8478D4B0C5585D420 (TnepresEngine_tB2063E257FDB18D464780C832450C7244D433DFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FE897253FBE41D1812A828E7F9FBC1C263A7EBE);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral6FE897253FBE41D1812A828E7F9FBC1C263A7EBE;
	}
}
// System.Int32[] Org.BouncyCastle.Crypto.Engines.TnepresEngine::MakeWorkingKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* TnepresEngine_MakeWorkingKey_m04D37ACB002CEAF725D20DACFCED267EC5FD4425 (TnepresEngine_tB2063E257FDB18D464780C832450C7244D433DFC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___key0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 4));
		goto IL_0026;
	}

IL_0014:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___key0;
		int32_t L_6 = V_1;
		uint32_t L_7;
		L_7 = Pack_BE_To_UInt32_mDE3117DC769EA78C6E635C4036888D2AD36C39B9(L_5, L_6, NULL);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 4));
	}

IL_0026:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_10 = V_1;
		if (L_10)
		{
			goto IL_0045;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___key0;
		uint32_t L_15;
		L_15 = Pack_BE_To_UInt32_mDE3117DC769EA78C6E635C4036888D2AD36C39B9(L_14, 0, NULL);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (int32_t)L_15);
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) >= ((int32_t)8)))
		{
			goto IL_0050;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_0;
		int32_t L_18 = V_2;
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18), (int32_t)1);
		goto IL_0050;
	}

IL_0045:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral47D20EC1D621302B327F8DA26CCC5372F970DFB8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TnepresEngine_MakeWorkingKey_m04D37ACB002CEAF725D20DACFCED267EC5FD4425_RuntimeMethod_var)));
	}

IL_0050:
	{
		V_3 = ((int32_t)132);
		int32_t L_20 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_4 = L_21;
		V_5 = 8;
		goto IL_009a;
	}

IL_0063:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		int32_t L_23 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_0;
		int32_t L_25 = V_5;
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract(L_25, 8));
		int32_t L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_0;
		int32_t L_29 = V_5;
		int32_t L_30 = ((int32_t)il2cpp_codegen_subtract(L_29, 5));
		int32_t L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_5;
		int32_t L_34 = ((int32_t)il2cpp_codegen_subtract(L_33, 3));
		int32_t L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37 = V_5;
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		int32_t L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		int32_t L_40 = V_5;
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		int32_t L_41;
		L_41 = SerpentEngineBase_RotateLeft_m2E170E899D92493FD51FF6C69426EC5539541F28(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_27^L_31))^L_35))^L_39))^((int32_t)-1640531527)))^((int32_t)il2cpp_codegen_subtract(L_40, 8)))), ((int32_t)11), NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23), (int32_t)L_41);
		int32_t L_42 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_009a:
	{
		int32_t L_43 = V_5;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)16))))
		{
			goto IL_0063;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_4;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_44, 8, (RuntimeArray*)L_45, 0, 8, NULL);
		V_6 = 8;
		goto IL_00ea;
	}

IL_00b0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_4;
		int32_t L_47 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_4;
		int32_t L_49 = V_6;
		int32_t L_50 = ((int32_t)il2cpp_codegen_subtract(L_49, 8));
		int32_t L_51 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_4;
		int32_t L_53 = V_6;
		int32_t L_54 = ((int32_t)il2cpp_codegen_subtract(L_53, 5));
		int32_t L_55 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_4;
		int32_t L_57 = V_6;
		int32_t L_58 = ((int32_t)il2cpp_codegen_subtract(L_57, 3));
		int32_t L_59 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_4;
		int32_t L_61 = V_6;
		int32_t L_62 = ((int32_t)il2cpp_codegen_subtract(L_61, 1));
		int32_t L_63 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		int32_t L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		int32_t L_65;
		L_65 = SerpentEngineBase_RotateLeft_m2E170E899D92493FD51FF6C69426EC5539541F28(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_51^L_55))^L_59))^L_63))^((int32_t)-1640531527)))^L_64)), ((int32_t)11), NULL);
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47), (int32_t)L_65);
		int32_t L_66 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_00ea:
	{
		int32_t L_67 = V_6;
		int32_t L_68 = V_3;
		if ((((int32_t)L_67) < ((int32_t)L_68)))
		{
			goto IL_00b0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = V_4;
		int32_t L_70 = 0;
		int32_t L_71 = (L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_70));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = V_4;
		int32_t L_73 = 1;
		int32_t L_74 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = V_4;
		int32_t L_76 = 2;
		int32_t L_77 = (L_75)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = V_4;
		int32_t L_79 = 3;
		int32_t L_80 = (L_78)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_79));
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, L_71, L_74, L_77, L_80, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = V_4;
		int32_t L_82 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_81)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_82);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = V_4;
		int32_t L_84 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_83)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)L_84);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = V_4;
		int32_t L_86 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_85)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (int32_t)L_86);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = V_4;
		int32_t L_88 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_87)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (int32_t)L_88);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = V_4;
		int32_t L_90 = 4;
		int32_t L_91 = (L_89)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_90));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = V_4;
		int32_t L_93 = 5;
		int32_t L_94 = (L_92)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_93));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = V_4;
		int32_t L_96 = 6;
		int32_t L_97 = (L_95)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_96));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_4;
		int32_t L_99 = 7;
		int32_t L_100 = (L_98)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_99));
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, L_91, L_94, L_97, L_100, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = V_4;
		int32_t L_102 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_101)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (int32_t)L_102);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = V_4;
		int32_t L_104 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_103)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (int32_t)L_104);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = V_4;
		int32_t L_106 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_105)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (int32_t)L_106);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_107 = V_4;
		int32_t L_108 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_107)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (int32_t)L_108);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = V_4;
		int32_t L_110 = 8;
		int32_t L_111 = (L_109)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_110));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = V_4;
		int32_t L_113 = ((int32_t)9);
		int32_t L_114 = (L_112)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_113));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = V_4;
		int32_t L_116 = ((int32_t)10);
		int32_t L_117 = (L_115)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_116));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = V_4;
		int32_t L_119 = ((int32_t)11);
		int32_t L_120 = (L_118)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_119));
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, L_111, L_114, L_117, L_120, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = V_4;
		int32_t L_122 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_121)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (int32_t)L_122);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123 = V_4;
		int32_t L_124 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_123)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (int32_t)L_124);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_125 = V_4;
		int32_t L_126 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_125)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (int32_t)L_126);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_127 = V_4;
		int32_t L_128 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_127)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (int32_t)L_128);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = V_4;
		int32_t L_130 = ((int32_t)12);
		int32_t L_131 = (L_129)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_130));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = V_4;
		int32_t L_133 = ((int32_t)13);
		int32_t L_134 = (L_132)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_133));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_135 = V_4;
		int32_t L_136 = ((int32_t)14);
		int32_t L_137 = (L_135)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_136));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = V_4;
		int32_t L_139 = ((int32_t)15);
		int32_t L_140 = (L_138)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_139));
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, L_131, L_134, L_137, L_140, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = V_4;
		int32_t L_142 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_141)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (int32_t)L_142);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_143 = V_4;
		int32_t L_144 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_143)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (int32_t)L_144);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = V_4;
		int32_t L_146 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_145)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (int32_t)L_146);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_147 = V_4;
		int32_t L_148 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_147)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (int32_t)L_148);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = V_4;
		int32_t L_150 = ((int32_t)16);
		int32_t L_151 = (L_149)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_150));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_152 = V_4;
		int32_t L_153 = ((int32_t)17);
		int32_t L_154 = (L_152)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_153));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = V_4;
		int32_t L_156 = ((int32_t)18);
		int32_t L_157 = (L_155)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_156));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_158 = V_4;
		int32_t L_159 = ((int32_t)19);
		int32_t L_160 = (L_158)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_159));
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, L_151, L_154, L_157, L_160, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_161 = V_4;
		int32_t L_162 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_161)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (int32_t)L_162);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_163 = V_4;
		int32_t L_164 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_163)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)), (int32_t)L_164);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_165 = V_4;
		int32_t L_166 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_165)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)), (int32_t)L_166);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_167 = V_4;
		int32_t L_168 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_167)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)), (int32_t)L_168);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = V_4;
		int32_t L_170 = ((int32_t)20);
		int32_t L_171 = (L_169)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_170));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = V_4;
		int32_t L_173 = ((int32_t)21);
		int32_t L_174 = (L_172)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_173));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_175 = V_4;
		int32_t L_176 = ((int32_t)22);
		int32_t L_177 = (L_175)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_176));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_178 = V_4;
		int32_t L_179 = ((int32_t)23);
		int32_t L_180 = (L_178)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_179));
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, L_171, L_174, L_177, L_180, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_181 = V_4;
		int32_t L_182 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_181)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20)), (int32_t)L_182);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_183 = V_4;
		int32_t L_184 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_183)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21)), (int32_t)L_184);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_185 = V_4;
		int32_t L_186 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_185)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)22)), (int32_t)L_186);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_187 = V_4;
		int32_t L_188 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_187)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)23)), (int32_t)L_188);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = V_4;
		int32_t L_190 = ((int32_t)24);
		int32_t L_191 = (L_189)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_190));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_192 = V_4;
		int32_t L_193 = ((int32_t)25);
		int32_t L_194 = (L_192)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_193));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_195 = V_4;
		int32_t L_196 = ((int32_t)26);
		int32_t L_197 = (L_195)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_196));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_198 = V_4;
		int32_t L_199 = ((int32_t)27);
		int32_t L_200 = (L_198)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_199));
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, L_191, L_194, L_197, L_200, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_201 = V_4;
		int32_t L_202 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_201)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)24)), (int32_t)L_202);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_203 = V_4;
		int32_t L_204 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_203)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)25)), (int32_t)L_204);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_205 = V_4;
		int32_t L_206 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_205)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)26)), (int32_t)L_206);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_207 = V_4;
		int32_t L_208 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_207)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)27)), (int32_t)L_208);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_209 = V_4;
		int32_t L_210 = ((int32_t)28);
		int32_t L_211 = (L_209)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_210));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_212 = V_4;
		int32_t L_213 = ((int32_t)29);
		int32_t L_214 = (L_212)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_213));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_215 = V_4;
		int32_t L_216 = ((int32_t)30);
		int32_t L_217 = (L_215)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_216));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_218 = V_4;
		int32_t L_219 = ((int32_t)31);
		int32_t L_220 = (L_218)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_219));
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, L_211, L_214, L_217, L_220, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_221 = V_4;
		int32_t L_222 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_221)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)28)), (int32_t)L_222);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_223 = V_4;
		int32_t L_224 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_223)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)29)), (int32_t)L_224);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_225 = V_4;
		int32_t L_226 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_225)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)30)), (int32_t)L_226);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_227 = V_4;
		int32_t L_228 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_227)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)31)), (int32_t)L_228);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_229 = V_4;
		int32_t L_230 = ((int32_t)32);
		int32_t L_231 = (L_229)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_230));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_232 = V_4;
		int32_t L_233 = ((int32_t)33);
		int32_t L_234 = (L_232)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_233));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_235 = V_4;
		int32_t L_236 = ((int32_t)34);
		int32_t L_237 = (L_235)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_236));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_238 = V_4;
		int32_t L_239 = ((int32_t)35);
		int32_t L_240 = (L_238)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_239));
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, L_231, L_234, L_237, L_240, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_241 = V_4;
		int32_t L_242 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_241)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)32)), (int32_t)L_242);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_243 = V_4;
		int32_t L_244 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_243)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)33)), (int32_t)L_244);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_245 = V_4;
		int32_t L_246 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_245)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)34)), (int32_t)L_246);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_247 = V_4;
		int32_t L_248 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_247)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)35)), (int32_t)L_248);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_249 = V_4;
		int32_t L_250 = ((int32_t)36);
		int32_t L_251 = (L_249)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_250));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = V_4;
		int32_t L_253 = ((int32_t)37);
		int32_t L_254 = (L_252)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_253));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_255 = V_4;
		int32_t L_256 = ((int32_t)38);
		int32_t L_257 = (L_255)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_256));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_258 = V_4;
		int32_t L_259 = ((int32_t)39);
		int32_t L_260 = (L_258)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_259));
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, L_251, L_254, L_257, L_260, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_261 = V_4;
		int32_t L_262 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_261)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)36)), (int32_t)L_262);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_263 = V_4;
		int32_t L_264 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_263)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)37)), (int32_t)L_264);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_265 = V_4;
		int32_t L_266 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_265)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)38)), (int32_t)L_266);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_267 = V_4;
		int32_t L_268 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_267)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)39)), (int32_t)L_268);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_269 = V_4;
		int32_t L_270 = ((int32_t)40);
		int32_t L_271 = (L_269)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_270));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_272 = V_4;
		int32_t L_273 = ((int32_t)41);
		int32_t L_274 = (L_272)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_273));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_275 = V_4;
		int32_t L_276 = ((int32_t)42);
		int32_t L_277 = (L_275)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_276));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_278 = V_4;
		int32_t L_279 = ((int32_t)43);
		int32_t L_280 = (L_278)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_279));
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, L_271, L_274, L_277, L_280, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_281 = V_4;
		int32_t L_282 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_281)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)40)), (int32_t)L_282);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_283 = V_4;
		int32_t L_284 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_283)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)41)), (int32_t)L_284);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_285 = V_4;
		int32_t L_286 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_285)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)42)), (int32_t)L_286);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_287 = V_4;
		int32_t L_288 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_287)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)43)), (int32_t)L_288);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_289 = V_4;
		int32_t L_290 = ((int32_t)44);
		int32_t L_291 = (L_289)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_290));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_292 = V_4;
		int32_t L_293 = ((int32_t)45);
		int32_t L_294 = (L_292)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_293));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_295 = V_4;
		int32_t L_296 = ((int32_t)46);
		int32_t L_297 = (L_295)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_296));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_298 = V_4;
		int32_t L_299 = ((int32_t)47);
		int32_t L_300 = (L_298)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_299));
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, L_291, L_294, L_297, L_300, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_301 = V_4;
		int32_t L_302 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_301)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)44)), (int32_t)L_302);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_303 = V_4;
		int32_t L_304 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_303)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)45)), (int32_t)L_304);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_305 = V_4;
		int32_t L_306 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_305)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)46)), (int32_t)L_306);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_307 = V_4;
		int32_t L_308 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_307)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)47)), (int32_t)L_308);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_309 = V_4;
		int32_t L_310 = ((int32_t)48);
		int32_t L_311 = (L_309)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_310));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_312 = V_4;
		int32_t L_313 = ((int32_t)49);
		int32_t L_314 = (L_312)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_313));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_315 = V_4;
		int32_t L_316 = ((int32_t)50);
		int32_t L_317 = (L_315)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_316));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_318 = V_4;
		int32_t L_319 = ((int32_t)51);
		int32_t L_320 = (L_318)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_319));
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, L_311, L_314, L_317, L_320, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_321 = V_4;
		int32_t L_322 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_321)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)48)), (int32_t)L_322);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_323 = V_4;
		int32_t L_324 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_323)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)49)), (int32_t)L_324);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_325 = V_4;
		int32_t L_326 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_325)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)50)), (int32_t)L_326);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_327 = V_4;
		int32_t L_328 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_327)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)51)), (int32_t)L_328);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_329 = V_4;
		int32_t L_330 = ((int32_t)52);
		int32_t L_331 = (L_329)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_330));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_332 = V_4;
		int32_t L_333 = ((int32_t)53);
		int32_t L_334 = (L_332)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_333));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_335 = V_4;
		int32_t L_336 = ((int32_t)54);
		int32_t L_337 = (L_335)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_336));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_338 = V_4;
		int32_t L_339 = ((int32_t)55);
		int32_t L_340 = (L_338)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_339));
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, L_331, L_334, L_337, L_340, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_341 = V_4;
		int32_t L_342 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_341)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)52)), (int32_t)L_342);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_343 = V_4;
		int32_t L_344 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_343)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)53)), (int32_t)L_344);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_345 = V_4;
		int32_t L_346 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_345)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)54)), (int32_t)L_346);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_347 = V_4;
		int32_t L_348 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_347)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)55)), (int32_t)L_348);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_349 = V_4;
		int32_t L_350 = ((int32_t)56);
		int32_t L_351 = (L_349)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_350));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_352 = V_4;
		int32_t L_353 = ((int32_t)57);
		int32_t L_354 = (L_352)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_353));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_355 = V_4;
		int32_t L_356 = ((int32_t)58);
		int32_t L_357 = (L_355)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_356));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_358 = V_4;
		int32_t L_359 = ((int32_t)59);
		int32_t L_360 = (L_358)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_359));
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, L_351, L_354, L_357, L_360, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_361 = V_4;
		int32_t L_362 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_361)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)56)), (int32_t)L_362);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_363 = V_4;
		int32_t L_364 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_363)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)57)), (int32_t)L_364);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_365 = V_4;
		int32_t L_366 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_365)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)58)), (int32_t)L_366);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_367 = V_4;
		int32_t L_368 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_367)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)59)), (int32_t)L_368);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_369 = V_4;
		int32_t L_370 = ((int32_t)60);
		int32_t L_371 = (L_369)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_370));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_372 = V_4;
		int32_t L_373 = ((int32_t)61);
		int32_t L_374 = (L_372)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_373));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_375 = V_4;
		int32_t L_376 = ((int32_t)62);
		int32_t L_377 = (L_375)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_376));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_378 = V_4;
		int32_t L_379 = ((int32_t)63);
		int32_t L_380 = (L_378)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_379));
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, L_371, L_374, L_377, L_380, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_381 = V_4;
		int32_t L_382 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_381)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)60)), (int32_t)L_382);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_383 = V_4;
		int32_t L_384 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_383)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)61)), (int32_t)L_384);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_385 = V_4;
		int32_t L_386 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_385)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)62)), (int32_t)L_386);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_387 = V_4;
		int32_t L_388 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_387)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)63)), (int32_t)L_388);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_389 = V_4;
		int32_t L_390 = ((int32_t)64);
		int32_t L_391 = (L_389)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_390));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_392 = V_4;
		int32_t L_393 = ((int32_t)65);
		int32_t L_394 = (L_392)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_393));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_395 = V_4;
		int32_t L_396 = ((int32_t)66);
		int32_t L_397 = (L_395)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_396));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_398 = V_4;
		int32_t L_399 = ((int32_t)67);
		int32_t L_400 = (L_398)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_399));
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, L_391, L_394, L_397, L_400, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_401 = V_4;
		int32_t L_402 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_401)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)64)), (int32_t)L_402);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_403 = V_4;
		int32_t L_404 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_403)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)65)), (int32_t)L_404);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_405 = V_4;
		int32_t L_406 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_405)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)66)), (int32_t)L_406);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_407 = V_4;
		int32_t L_408 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_407)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)67)), (int32_t)L_408);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_409 = V_4;
		int32_t L_410 = ((int32_t)68);
		int32_t L_411 = (L_409)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_410));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_412 = V_4;
		int32_t L_413 = ((int32_t)69);
		int32_t L_414 = (L_412)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_413));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_415 = V_4;
		int32_t L_416 = ((int32_t)70);
		int32_t L_417 = (L_415)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_416));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_418 = V_4;
		int32_t L_419 = ((int32_t)71);
		int32_t L_420 = (L_418)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_419));
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, L_411, L_414, L_417, L_420, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_421 = V_4;
		int32_t L_422 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_421)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)68)), (int32_t)L_422);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_423 = V_4;
		int32_t L_424 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_423)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)69)), (int32_t)L_424);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_425 = V_4;
		int32_t L_426 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_425)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)70)), (int32_t)L_426);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_427 = V_4;
		int32_t L_428 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_427)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)71)), (int32_t)L_428);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_429 = V_4;
		int32_t L_430 = ((int32_t)72);
		int32_t L_431 = (L_429)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_430));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_432 = V_4;
		int32_t L_433 = ((int32_t)73);
		int32_t L_434 = (L_432)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_433));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_435 = V_4;
		int32_t L_436 = ((int32_t)74);
		int32_t L_437 = (L_435)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_436));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_438 = V_4;
		int32_t L_439 = ((int32_t)75);
		int32_t L_440 = (L_438)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_439));
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, L_431, L_434, L_437, L_440, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_441 = V_4;
		int32_t L_442 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_441)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)72)), (int32_t)L_442);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_443 = V_4;
		int32_t L_444 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_443)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)73)), (int32_t)L_444);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_445 = V_4;
		int32_t L_446 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_445)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)74)), (int32_t)L_446);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_447 = V_4;
		int32_t L_448 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_447)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)75)), (int32_t)L_448);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_449 = V_4;
		int32_t L_450 = ((int32_t)76);
		int32_t L_451 = (L_449)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_450));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_452 = V_4;
		int32_t L_453 = ((int32_t)77);
		int32_t L_454 = (L_452)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_453));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_455 = V_4;
		int32_t L_456 = ((int32_t)78);
		int32_t L_457 = (L_455)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_456));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_458 = V_4;
		int32_t L_459 = ((int32_t)79);
		int32_t L_460 = (L_458)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_459));
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, L_451, L_454, L_457, L_460, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_461 = V_4;
		int32_t L_462 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_461)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)76)), (int32_t)L_462);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_463 = V_4;
		int32_t L_464 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_463)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)77)), (int32_t)L_464);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_465 = V_4;
		int32_t L_466 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_465)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)78)), (int32_t)L_466);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_467 = V_4;
		int32_t L_468 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_467)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)79)), (int32_t)L_468);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_469 = V_4;
		int32_t L_470 = ((int32_t)80);
		int32_t L_471 = (L_469)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_470));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_472 = V_4;
		int32_t L_473 = ((int32_t)81);
		int32_t L_474 = (L_472)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_473));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_475 = V_4;
		int32_t L_476 = ((int32_t)82);
		int32_t L_477 = (L_475)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_476));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_478 = V_4;
		int32_t L_479 = ((int32_t)83);
		int32_t L_480 = (L_478)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_479));
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, L_471, L_474, L_477, L_480, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_481 = V_4;
		int32_t L_482 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_481)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)80)), (int32_t)L_482);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_483 = V_4;
		int32_t L_484 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_483)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)81)), (int32_t)L_484);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_485 = V_4;
		int32_t L_486 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_485)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)82)), (int32_t)L_486);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_487 = V_4;
		int32_t L_488 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_487)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)83)), (int32_t)L_488);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_489 = V_4;
		int32_t L_490 = ((int32_t)84);
		int32_t L_491 = (L_489)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_490));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_492 = V_4;
		int32_t L_493 = ((int32_t)85);
		int32_t L_494 = (L_492)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_493));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_495 = V_4;
		int32_t L_496 = ((int32_t)86);
		int32_t L_497 = (L_495)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_496));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_498 = V_4;
		int32_t L_499 = ((int32_t)87);
		int32_t L_500 = (L_498)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_499));
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, L_491, L_494, L_497, L_500, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_501 = V_4;
		int32_t L_502 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_501)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)84)), (int32_t)L_502);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_503 = V_4;
		int32_t L_504 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_503)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)85)), (int32_t)L_504);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_505 = V_4;
		int32_t L_506 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_505)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)86)), (int32_t)L_506);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_507 = V_4;
		int32_t L_508 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_507)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)87)), (int32_t)L_508);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_509 = V_4;
		int32_t L_510 = ((int32_t)88);
		int32_t L_511 = (L_509)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_510));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_512 = V_4;
		int32_t L_513 = ((int32_t)89);
		int32_t L_514 = (L_512)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_513));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_515 = V_4;
		int32_t L_516 = ((int32_t)90);
		int32_t L_517 = (L_515)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_516));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_518 = V_4;
		int32_t L_519 = ((int32_t)91);
		int32_t L_520 = (L_518)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_519));
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, L_511, L_514, L_517, L_520, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_521 = V_4;
		int32_t L_522 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_521)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)88)), (int32_t)L_522);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_523 = V_4;
		int32_t L_524 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_523)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)89)), (int32_t)L_524);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_525 = V_4;
		int32_t L_526 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_525)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)90)), (int32_t)L_526);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_527 = V_4;
		int32_t L_528 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_527)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)91)), (int32_t)L_528);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_529 = V_4;
		int32_t L_530 = ((int32_t)92);
		int32_t L_531 = (L_529)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_530));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_532 = V_4;
		int32_t L_533 = ((int32_t)93);
		int32_t L_534 = (L_532)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_533));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_535 = V_4;
		int32_t L_536 = ((int32_t)94);
		int32_t L_537 = (L_535)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_536));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_538 = V_4;
		int32_t L_539 = ((int32_t)95);
		int32_t L_540 = (L_538)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_539));
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, L_531, L_534, L_537, L_540, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_541 = V_4;
		int32_t L_542 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_541)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)92)), (int32_t)L_542);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_543 = V_4;
		int32_t L_544 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_543)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)93)), (int32_t)L_544);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_545 = V_4;
		int32_t L_546 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_545)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)94)), (int32_t)L_546);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_547 = V_4;
		int32_t L_548 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_547)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)95)), (int32_t)L_548);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_549 = V_4;
		int32_t L_550 = ((int32_t)96);
		int32_t L_551 = (L_549)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_550));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_552 = V_4;
		int32_t L_553 = ((int32_t)97);
		int32_t L_554 = (L_552)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_553));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_555 = V_4;
		int32_t L_556 = ((int32_t)98);
		int32_t L_557 = (L_555)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_556));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_558 = V_4;
		int32_t L_559 = ((int32_t)99);
		int32_t L_560 = (L_558)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_559));
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, L_551, L_554, L_557, L_560, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_561 = V_4;
		int32_t L_562 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_561)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)96)), (int32_t)L_562);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_563 = V_4;
		int32_t L_564 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_563)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)97)), (int32_t)L_564);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_565 = V_4;
		int32_t L_566 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_565)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)98)), (int32_t)L_566);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_567 = V_4;
		int32_t L_568 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_567)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)99)), (int32_t)L_568);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_569 = V_4;
		int32_t L_570 = ((int32_t)100);
		int32_t L_571 = (L_569)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_570));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_572 = V_4;
		int32_t L_573 = ((int32_t)101);
		int32_t L_574 = (L_572)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_573));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_575 = V_4;
		int32_t L_576 = ((int32_t)102);
		int32_t L_577 = (L_575)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_576));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_578 = V_4;
		int32_t L_579 = ((int32_t)103);
		int32_t L_580 = (L_578)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_579));
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, L_571, L_574, L_577, L_580, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_581 = V_4;
		int32_t L_582 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_581)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)100)), (int32_t)L_582);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_583 = V_4;
		int32_t L_584 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_583)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)101)), (int32_t)L_584);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_585 = V_4;
		int32_t L_586 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_585)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)102)), (int32_t)L_586);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_587 = V_4;
		int32_t L_588 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_587)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)103)), (int32_t)L_588);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_589 = V_4;
		int32_t L_590 = ((int32_t)104);
		int32_t L_591 = (L_589)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_590));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_592 = V_4;
		int32_t L_593 = ((int32_t)105);
		int32_t L_594 = (L_592)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_593));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_595 = V_4;
		int32_t L_596 = ((int32_t)106);
		int32_t L_597 = (L_595)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_596));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_598 = V_4;
		int32_t L_599 = ((int32_t)107);
		int32_t L_600 = (L_598)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_599));
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, L_591, L_594, L_597, L_600, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_601 = V_4;
		int32_t L_602 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_601)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)104)), (int32_t)L_602);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_603 = V_4;
		int32_t L_604 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_603)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)105)), (int32_t)L_604);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_605 = V_4;
		int32_t L_606 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_605)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)106)), (int32_t)L_606);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_607 = V_4;
		int32_t L_608 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_607)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)107)), (int32_t)L_608);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_609 = V_4;
		int32_t L_610 = ((int32_t)108);
		int32_t L_611 = (L_609)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_610));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_612 = V_4;
		int32_t L_613 = ((int32_t)109);
		int32_t L_614 = (L_612)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_613));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_615 = V_4;
		int32_t L_616 = ((int32_t)110);
		int32_t L_617 = (L_615)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_616));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_618 = V_4;
		int32_t L_619 = ((int32_t)111);
		int32_t L_620 = (L_618)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_619));
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, L_611, L_614, L_617, L_620, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_621 = V_4;
		int32_t L_622 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_621)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)108)), (int32_t)L_622);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_623 = V_4;
		int32_t L_624 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_623)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)109)), (int32_t)L_624);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_625 = V_4;
		int32_t L_626 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_625)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)110)), (int32_t)L_626);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_627 = V_4;
		int32_t L_628 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_627)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)111)), (int32_t)L_628);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_629 = V_4;
		int32_t L_630 = ((int32_t)112);
		int32_t L_631 = (L_629)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_630));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_632 = V_4;
		int32_t L_633 = ((int32_t)113);
		int32_t L_634 = (L_632)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_633));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_635 = V_4;
		int32_t L_636 = ((int32_t)114);
		int32_t L_637 = (L_635)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_636));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_638 = V_4;
		int32_t L_639 = ((int32_t)115);
		int32_t L_640 = (L_638)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_639));
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, L_631, L_634, L_637, L_640, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_641 = V_4;
		int32_t L_642 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_641)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)112)), (int32_t)L_642);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_643 = V_4;
		int32_t L_644 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_643)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)113)), (int32_t)L_644);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_645 = V_4;
		int32_t L_646 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_645)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)114)), (int32_t)L_646);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_647 = V_4;
		int32_t L_648 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_647)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)115)), (int32_t)L_648);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_649 = V_4;
		int32_t L_650 = ((int32_t)116);
		int32_t L_651 = (L_649)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_650));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_652 = V_4;
		int32_t L_653 = ((int32_t)117);
		int32_t L_654 = (L_652)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_653));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_655 = V_4;
		int32_t L_656 = ((int32_t)118);
		int32_t L_657 = (L_655)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_656));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_658 = V_4;
		int32_t L_659 = ((int32_t)119);
		int32_t L_660 = (L_658)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_659));
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, L_651, L_654, L_657, L_660, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_661 = V_4;
		int32_t L_662 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_661)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)116)), (int32_t)L_662);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_663 = V_4;
		int32_t L_664 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_663)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)117)), (int32_t)L_664);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_665 = V_4;
		int32_t L_666 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_665)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)118)), (int32_t)L_666);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_667 = V_4;
		int32_t L_668 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_667)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)119)), (int32_t)L_668);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_669 = V_4;
		int32_t L_670 = ((int32_t)120);
		int32_t L_671 = (L_669)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_670));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_672 = V_4;
		int32_t L_673 = ((int32_t)121);
		int32_t L_674 = (L_672)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_673));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_675 = V_4;
		int32_t L_676 = ((int32_t)122);
		int32_t L_677 = (L_675)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_676));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_678 = V_4;
		int32_t L_679 = ((int32_t)123);
		int32_t L_680 = (L_678)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_679));
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, L_671, L_674, L_677, L_680, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_681 = V_4;
		int32_t L_682 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_681)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)120)), (int32_t)L_682);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_683 = V_4;
		int32_t L_684 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_683)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)121)), (int32_t)L_684);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_685 = V_4;
		int32_t L_686 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_685)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)122)), (int32_t)L_686);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_687 = V_4;
		int32_t L_688 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_687)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)123)), (int32_t)L_688);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_689 = V_4;
		int32_t L_690 = ((int32_t)124);
		int32_t L_691 = (L_689)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_690));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_692 = V_4;
		int32_t L_693 = ((int32_t)125);
		int32_t L_694 = (L_692)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_693));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_695 = V_4;
		int32_t L_696 = ((int32_t)126);
		int32_t L_697 = (L_695)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_696));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_698 = V_4;
		int32_t L_699 = ((int32_t)127);
		int32_t L_700 = (L_698)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_699));
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, L_691, L_694, L_697, L_700, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_701 = V_4;
		int32_t L_702 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_701)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)124)), (int32_t)L_702);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_703 = V_4;
		int32_t L_704 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_703)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)125)), (int32_t)L_704);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_705 = V_4;
		int32_t L_706 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_705)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)126)), (int32_t)L_706);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_707 = V_4;
		int32_t L_708 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_707)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)127)), (int32_t)L_708);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_709 = V_4;
		int32_t L_710 = ((int32_t)128);
		int32_t L_711 = (L_709)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_710));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_712 = V_4;
		int32_t L_713 = ((int32_t)129);
		int32_t L_714 = (L_712)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_713));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_715 = V_4;
		int32_t L_716 = ((int32_t)130);
		int32_t L_717 = (L_715)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_716));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_718 = V_4;
		int32_t L_719 = ((int32_t)131);
		int32_t L_720 = (L_718)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_719));
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, L_711, L_714, L_717, L_720, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_721 = V_4;
		int32_t L_722 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		(L_721)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)128)), (int32_t)L_722);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_723 = V_4;
		int32_t L_724 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		(L_723)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)129)), (int32_t)L_724);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_725 = V_4;
		int32_t L_726 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		(L_725)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)130)), (int32_t)L_726);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_727 = V_4;
		int32_t L_728 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		(L_727)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)131)), (int32_t)L_728);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_729 = V_4;
		return L_729;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TnepresEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnepresEngine_EncryptBlock_m924CA000E934C457C40AE31295D86C3B54421F58 (TnepresEngine_tB2063E257FDB18D464780C832450C7244D433DFC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_mDE3117DC769EA78C6E635C4036888D2AD36C39B9(L_0, L_1, NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input0;
		int32_t L_4 = ___inOff1;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_mDE3117DC769EA78C6E635C4036888D2AD36C39B9(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___input0;
		int32_t L_7 = ___inOff1;
		uint32_t L_8;
		L_8 = Pack_BE_To_UInt32_mDE3117DC769EA78C6E635C4036888D2AD36C39B9(L_6, ((int32_t)il2cpp_codegen_add(L_7, 8)), NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___input0;
		int32_t L_10 = ___inOff1;
		uint32_t L_11;
		L_11 = Pack_BE_To_UInt32_mDE3117DC769EA78C6E635C4036888D2AD36C39B9(L_9, ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)12))), NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_17 = 1;
		int32_t L_18 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_21 = 2;
		int32_t L_22 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_25 = 3;
		int32_t L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, ((int32_t)(L_14^L_15)), ((int32_t)(L_18^L_19)), ((int32_t)(L_22^L_23)), ((int32_t)(L_26^L_27)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_29 = 4;
		int32_t L_30 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_33 = 5;
		int32_t L_34 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_37 = 6;
		int32_t L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_41 = 7;
		int32_t L_42 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		int32_t L_43 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, ((int32_t)(L_30^L_31)), ((int32_t)(L_34^L_35)), ((int32_t)(L_38^L_39)), ((int32_t)(L_42^L_43)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_45 = 8;
		int32_t L_46 = (L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_49 = ((int32_t)9);
		int32_t L_50 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		int32_t L_51 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_53 = ((int32_t)10);
		int32_t L_54 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		int32_t L_55 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_57 = ((int32_t)11);
		int32_t L_58 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, ((int32_t)(L_46^L_47)), ((int32_t)(L_50^L_51)), ((int32_t)(L_54^L_55)), ((int32_t)(L_58^L_59)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_61 = ((int32_t)12);
		int32_t L_62 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		int32_t L_63 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_65 = ((int32_t)13);
		int32_t L_66 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		int32_t L_67 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_69 = ((int32_t)14);
		int32_t L_70 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		int32_t L_71 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_73 = ((int32_t)15);
		int32_t L_74 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		int32_t L_75 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, ((int32_t)(L_62^L_63)), ((int32_t)(L_66^L_67)), ((int32_t)(L_70^L_71)), ((int32_t)(L_74^L_75)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_77 = ((int32_t)16);
		int32_t L_78 = (L_76)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77));
		int32_t L_79 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_81 = ((int32_t)17);
		int32_t L_82 = (L_80)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		int32_t L_83 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_85 = ((int32_t)18);
		int32_t L_86 = (L_84)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85));
		int32_t L_87 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_89 = ((int32_t)19);
		int32_t L_90 = (L_88)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_89));
		int32_t L_91 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, ((int32_t)(L_78^L_79)), ((int32_t)(L_82^L_83)), ((int32_t)(L_86^L_87)), ((int32_t)(L_90^L_91)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_93 = ((int32_t)20);
		int32_t L_94 = (L_92)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_93));
		int32_t L_95 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_96 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_97 = ((int32_t)21);
		int32_t L_98 = (L_96)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_97));
		int32_t L_99 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_101 = ((int32_t)22);
		int32_t L_102 = (L_100)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_101));
		int32_t L_103 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_105 = ((int32_t)23);
		int32_t L_106 = (L_104)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_105));
		int32_t L_107 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, ((int32_t)(L_94^L_95)), ((int32_t)(L_98^L_99)), ((int32_t)(L_102^L_103)), ((int32_t)(L_106^L_107)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_109 = ((int32_t)24);
		int32_t L_110 = (L_108)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_109));
		int32_t L_111 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_113 = ((int32_t)25);
		int32_t L_114 = (L_112)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_113));
		int32_t L_115 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_116 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_117 = ((int32_t)26);
		int32_t L_118 = (L_116)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_117));
		int32_t L_119 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_120 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_121 = ((int32_t)27);
		int32_t L_122 = (L_120)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_121));
		int32_t L_123 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, ((int32_t)(L_110^L_111)), ((int32_t)(L_114^L_115)), ((int32_t)(L_118^L_119)), ((int32_t)(L_122^L_123)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_124 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_125 = ((int32_t)28);
		int32_t L_126 = (L_124)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_125));
		int32_t L_127 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_128 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_129 = ((int32_t)29);
		int32_t L_130 = (L_128)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_129));
		int32_t L_131 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_133 = ((int32_t)30);
		int32_t L_134 = (L_132)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_133));
		int32_t L_135 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_137 = ((int32_t)31);
		int32_t L_138 = (L_136)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_137));
		int32_t L_139 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, ((int32_t)(L_126^L_127)), ((int32_t)(L_130^L_131)), ((int32_t)(L_134^L_135)), ((int32_t)(L_138^L_139)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_141 = ((int32_t)32);
		int32_t L_142 = (L_140)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_141));
		int32_t L_143 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_145 = ((int32_t)33);
		int32_t L_146 = (L_144)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_145));
		int32_t L_147 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_148 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_149 = ((int32_t)34);
		int32_t L_150 = (L_148)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_149));
		int32_t L_151 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_152 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_153 = ((int32_t)35);
		int32_t L_154 = (L_152)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_153));
		int32_t L_155 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, ((int32_t)(L_142^L_143)), ((int32_t)(L_146^L_147)), ((int32_t)(L_150^L_151)), ((int32_t)(L_154^L_155)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_156 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_157 = ((int32_t)36);
		int32_t L_158 = (L_156)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_157));
		int32_t L_159 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_160 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_161 = ((int32_t)37);
		int32_t L_162 = (L_160)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_161));
		int32_t L_163 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_164 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_165 = ((int32_t)38);
		int32_t L_166 = (L_164)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_165));
		int32_t L_167 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_168 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_169 = ((int32_t)39);
		int32_t L_170 = (L_168)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_169));
		int32_t L_171 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, ((int32_t)(L_158^L_159)), ((int32_t)(L_162^L_163)), ((int32_t)(L_166^L_167)), ((int32_t)(L_170^L_171)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_173 = ((int32_t)40);
		int32_t L_174 = (L_172)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_173));
		int32_t L_175 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_176 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_177 = ((int32_t)41);
		int32_t L_178 = (L_176)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_177));
		int32_t L_179 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_180 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_181 = ((int32_t)42);
		int32_t L_182 = (L_180)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_181));
		int32_t L_183 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_184 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_185 = ((int32_t)43);
		int32_t L_186 = (L_184)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_185));
		int32_t L_187 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, ((int32_t)(L_174^L_175)), ((int32_t)(L_178^L_179)), ((int32_t)(L_182^L_183)), ((int32_t)(L_186^L_187)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_188 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_189 = ((int32_t)44);
		int32_t L_190 = (L_188)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_189));
		int32_t L_191 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_192 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_193 = ((int32_t)45);
		int32_t L_194 = (L_192)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_193));
		int32_t L_195 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_196 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_197 = ((int32_t)46);
		int32_t L_198 = (L_196)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_197));
		int32_t L_199 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_200 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_201 = ((int32_t)47);
		int32_t L_202 = (L_200)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_201));
		int32_t L_203 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, ((int32_t)(L_190^L_191)), ((int32_t)(L_194^L_195)), ((int32_t)(L_198^L_199)), ((int32_t)(L_202^L_203)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_204 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_205 = ((int32_t)48);
		int32_t L_206 = (L_204)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_205));
		int32_t L_207 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_208 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_209 = ((int32_t)49);
		int32_t L_210 = (L_208)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_209));
		int32_t L_211 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_212 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_213 = ((int32_t)50);
		int32_t L_214 = (L_212)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_213));
		int32_t L_215 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_216 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_217 = ((int32_t)51);
		int32_t L_218 = (L_216)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_217));
		int32_t L_219 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, ((int32_t)(L_206^L_207)), ((int32_t)(L_210^L_211)), ((int32_t)(L_214^L_215)), ((int32_t)(L_218^L_219)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_220 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_221 = ((int32_t)52);
		int32_t L_222 = (L_220)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_221));
		int32_t L_223 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_224 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_225 = ((int32_t)53);
		int32_t L_226 = (L_224)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_225));
		int32_t L_227 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_228 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_229 = ((int32_t)54);
		int32_t L_230 = (L_228)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_229));
		int32_t L_231 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_232 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_233 = ((int32_t)55);
		int32_t L_234 = (L_232)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_233));
		int32_t L_235 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, ((int32_t)(L_222^L_223)), ((int32_t)(L_226^L_227)), ((int32_t)(L_230^L_231)), ((int32_t)(L_234^L_235)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_236 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_237 = ((int32_t)56);
		int32_t L_238 = (L_236)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_237));
		int32_t L_239 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_240 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_241 = ((int32_t)57);
		int32_t L_242 = (L_240)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_241));
		int32_t L_243 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_244 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_245 = ((int32_t)58);
		int32_t L_246 = (L_244)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_245));
		int32_t L_247 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_248 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_249 = ((int32_t)59);
		int32_t L_250 = (L_248)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_249));
		int32_t L_251 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, ((int32_t)(L_238^L_239)), ((int32_t)(L_242^L_243)), ((int32_t)(L_246^L_247)), ((int32_t)(L_250^L_251)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_253 = ((int32_t)60);
		int32_t L_254 = (L_252)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_253));
		int32_t L_255 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_256 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_257 = ((int32_t)61);
		int32_t L_258 = (L_256)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_257));
		int32_t L_259 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_260 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_261 = ((int32_t)62);
		int32_t L_262 = (L_260)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_261));
		int32_t L_263 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_264 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_265 = ((int32_t)63);
		int32_t L_266 = (L_264)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_265));
		int32_t L_267 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, ((int32_t)(L_254^L_255)), ((int32_t)(L_258^L_259)), ((int32_t)(L_262^L_263)), ((int32_t)(L_266^L_267)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_268 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_269 = ((int32_t)64);
		int32_t L_270 = (L_268)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_269));
		int32_t L_271 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_272 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_273 = ((int32_t)65);
		int32_t L_274 = (L_272)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_273));
		int32_t L_275 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_276 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_277 = ((int32_t)66);
		int32_t L_278 = (L_276)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_277));
		int32_t L_279 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_280 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_281 = ((int32_t)67);
		int32_t L_282 = (L_280)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_281));
		int32_t L_283 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, ((int32_t)(L_270^L_271)), ((int32_t)(L_274^L_275)), ((int32_t)(L_278^L_279)), ((int32_t)(L_282^L_283)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_284 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_285 = ((int32_t)68);
		int32_t L_286 = (L_284)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_285));
		int32_t L_287 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_288 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_289 = ((int32_t)69);
		int32_t L_290 = (L_288)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_289));
		int32_t L_291 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_292 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_293 = ((int32_t)70);
		int32_t L_294 = (L_292)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_293));
		int32_t L_295 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_296 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_297 = ((int32_t)71);
		int32_t L_298 = (L_296)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_297));
		int32_t L_299 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, ((int32_t)(L_286^L_287)), ((int32_t)(L_290^L_291)), ((int32_t)(L_294^L_295)), ((int32_t)(L_298^L_299)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_300 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_301 = ((int32_t)72);
		int32_t L_302 = (L_300)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_301));
		int32_t L_303 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_304 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_305 = ((int32_t)73);
		int32_t L_306 = (L_304)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_305));
		int32_t L_307 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_308 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_309 = ((int32_t)74);
		int32_t L_310 = (L_308)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_309));
		int32_t L_311 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_312 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_313 = ((int32_t)75);
		int32_t L_314 = (L_312)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_313));
		int32_t L_315 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, ((int32_t)(L_302^L_303)), ((int32_t)(L_306^L_307)), ((int32_t)(L_310^L_311)), ((int32_t)(L_314^L_315)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_316 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_317 = ((int32_t)76);
		int32_t L_318 = (L_316)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_317));
		int32_t L_319 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_320 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_321 = ((int32_t)77);
		int32_t L_322 = (L_320)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_321));
		int32_t L_323 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_324 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_325 = ((int32_t)78);
		int32_t L_326 = (L_324)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_328 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_329 = ((int32_t)79);
		int32_t L_330 = (L_328)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_329));
		int32_t L_331 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, ((int32_t)(L_318^L_319)), ((int32_t)(L_322^L_323)), ((int32_t)(L_326^L_327)), ((int32_t)(L_330^L_331)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_332 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_333 = ((int32_t)80);
		int32_t L_334 = (L_332)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_333));
		int32_t L_335 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_336 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_337 = ((int32_t)81);
		int32_t L_338 = (L_336)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_337));
		int32_t L_339 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_340 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_341 = ((int32_t)82);
		int32_t L_342 = (L_340)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_341));
		int32_t L_343 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_344 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_345 = ((int32_t)83);
		int32_t L_346 = (L_344)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_345));
		int32_t L_347 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, ((int32_t)(L_334^L_335)), ((int32_t)(L_338^L_339)), ((int32_t)(L_342^L_343)), ((int32_t)(L_346^L_347)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_348 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_349 = ((int32_t)84);
		int32_t L_350 = (L_348)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_349));
		int32_t L_351 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_352 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_353 = ((int32_t)85);
		int32_t L_354 = (L_352)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_353));
		int32_t L_355 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_356 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_357 = ((int32_t)86);
		int32_t L_358 = (L_356)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_357));
		int32_t L_359 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_360 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_361 = ((int32_t)87);
		int32_t L_362 = (L_360)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_361));
		int32_t L_363 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, ((int32_t)(L_350^L_351)), ((int32_t)(L_354^L_355)), ((int32_t)(L_358^L_359)), ((int32_t)(L_362^L_363)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_364 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_365 = ((int32_t)88);
		int32_t L_366 = (L_364)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_365));
		int32_t L_367 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_368 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_369 = ((int32_t)89);
		int32_t L_370 = (L_368)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_369));
		int32_t L_371 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_372 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_373 = ((int32_t)90);
		int32_t L_374 = (L_372)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_373));
		int32_t L_375 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_376 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_377 = ((int32_t)91);
		int32_t L_378 = (L_376)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_377));
		int32_t L_379 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, ((int32_t)(L_366^L_367)), ((int32_t)(L_370^L_371)), ((int32_t)(L_374^L_375)), ((int32_t)(L_378^L_379)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_380 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_381 = ((int32_t)92);
		int32_t L_382 = (L_380)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_381));
		int32_t L_383 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_384 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_385 = ((int32_t)93);
		int32_t L_386 = (L_384)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_385));
		int32_t L_387 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_388 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_389 = ((int32_t)94);
		int32_t L_390 = (L_388)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_389));
		int32_t L_391 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_392 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_393 = ((int32_t)95);
		int32_t L_394 = (L_392)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_393));
		int32_t L_395 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, ((int32_t)(L_382^L_383)), ((int32_t)(L_386^L_387)), ((int32_t)(L_390^L_391)), ((int32_t)(L_394^L_395)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_396 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_397 = ((int32_t)96);
		int32_t L_398 = (L_396)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_397));
		int32_t L_399 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_400 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_401 = ((int32_t)97);
		int32_t L_402 = (L_400)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_401));
		int32_t L_403 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_404 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_405 = ((int32_t)98);
		int32_t L_406 = (L_404)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_405));
		int32_t L_407 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_408 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_409 = ((int32_t)99);
		int32_t L_410 = (L_408)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_409));
		int32_t L_411 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, ((int32_t)(L_398^L_399)), ((int32_t)(L_402^L_403)), ((int32_t)(L_406^L_407)), ((int32_t)(L_410^L_411)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_412 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_413 = ((int32_t)100);
		int32_t L_414 = (L_412)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_413));
		int32_t L_415 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_416 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_417 = ((int32_t)101);
		int32_t L_418 = (L_416)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_417));
		int32_t L_419 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_420 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_421 = ((int32_t)102);
		int32_t L_422 = (L_420)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_421));
		int32_t L_423 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_424 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_425 = ((int32_t)103);
		int32_t L_426 = (L_424)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_425));
		int32_t L_427 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, ((int32_t)(L_414^L_415)), ((int32_t)(L_418^L_419)), ((int32_t)(L_422^L_423)), ((int32_t)(L_426^L_427)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_428 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_429 = ((int32_t)104);
		int32_t L_430 = (L_428)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_429));
		int32_t L_431 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_432 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_433 = ((int32_t)105);
		int32_t L_434 = (L_432)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_433));
		int32_t L_435 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_436 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_437 = ((int32_t)106);
		int32_t L_438 = (L_436)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_437));
		int32_t L_439 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_440 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_441 = ((int32_t)107);
		int32_t L_442 = (L_440)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_441));
		int32_t L_443 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, ((int32_t)(L_430^L_431)), ((int32_t)(L_434^L_435)), ((int32_t)(L_438^L_439)), ((int32_t)(L_442^L_443)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_444 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_445 = ((int32_t)108);
		int32_t L_446 = (L_444)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_445));
		int32_t L_447 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_448 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_449 = ((int32_t)109);
		int32_t L_450 = (L_448)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_449));
		int32_t L_451 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_452 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_453 = ((int32_t)110);
		int32_t L_454 = (L_452)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_453));
		int32_t L_455 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_456 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_457 = ((int32_t)111);
		int32_t L_458 = (L_456)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_457));
		int32_t L_459 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, ((int32_t)(L_446^L_447)), ((int32_t)(L_450^L_451)), ((int32_t)(L_454^L_455)), ((int32_t)(L_458^L_459)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_460 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_461 = ((int32_t)112);
		int32_t L_462 = (L_460)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_461));
		int32_t L_463 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_464 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_465 = ((int32_t)113);
		int32_t L_466 = (L_464)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_465));
		int32_t L_467 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_468 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_469 = ((int32_t)114);
		int32_t L_470 = (L_468)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_469));
		int32_t L_471 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_472 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_473 = ((int32_t)115);
		int32_t L_474 = (L_472)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_473));
		int32_t L_475 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, ((int32_t)(L_462^L_463)), ((int32_t)(L_466^L_467)), ((int32_t)(L_470^L_471)), ((int32_t)(L_474^L_475)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_476 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_477 = ((int32_t)116);
		int32_t L_478 = (L_476)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_477));
		int32_t L_479 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_480 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_481 = ((int32_t)117);
		int32_t L_482 = (L_480)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_481));
		int32_t L_483 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_484 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_485 = ((int32_t)118);
		int32_t L_486 = (L_484)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_485));
		int32_t L_487 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_488 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_489 = ((int32_t)119);
		int32_t L_490 = (L_488)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_489));
		int32_t L_491 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, ((int32_t)(L_478^L_479)), ((int32_t)(L_482^L_483)), ((int32_t)(L_486^L_487)), ((int32_t)(L_490^L_491)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_492 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_493 = ((int32_t)120);
		int32_t L_494 = (L_492)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_493));
		int32_t L_495 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_496 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_497 = ((int32_t)121);
		int32_t L_498 = (L_496)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_497));
		int32_t L_499 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_500 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_501 = ((int32_t)122);
		int32_t L_502 = (L_500)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_501));
		int32_t L_503 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_504 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_505 = ((int32_t)123);
		int32_t L_506 = (L_504)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_505));
		int32_t L_507 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, ((int32_t)(L_494^L_495)), ((int32_t)(L_498^L_499)), ((int32_t)(L_502^L_503)), ((int32_t)(L_506^L_507)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_508 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_509 = ((int32_t)124);
		int32_t L_510 = (L_508)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_509));
		int32_t L_511 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_512 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_513 = ((int32_t)125);
		int32_t L_514 = (L_512)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_513));
		int32_t L_515 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_516 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_517 = ((int32_t)126);
		int32_t L_518 = (L_516)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_517));
		int32_t L_519 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_520 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_521 = ((int32_t)127);
		int32_t L_522 = (L_520)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_521));
		int32_t L_523 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, ((int32_t)(L_510^L_511)), ((int32_t)(L_514^L_515)), ((int32_t)(L_518^L_519)), ((int32_t)(L_522^L_523)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_524 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_525 = ((int32_t)131);
		int32_t L_526 = (L_524)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_525));
		int32_t L_527 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_528 = ___output2;
		int32_t L_529 = ___outOff3;
		Pack_UInt32_To_BE_mE84FDF81208D1EDC3A1877615A9506EC0C0A4E21(((int32_t)(L_526^L_527)), L_528, L_529, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_530 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_531 = ((int32_t)130);
		int32_t L_532 = (L_530)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_531));
		int32_t L_533 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_534 = ___output2;
		int32_t L_535 = ___outOff3;
		Pack_UInt32_To_BE_mE84FDF81208D1EDC3A1877615A9506EC0C0A4E21(((int32_t)(L_532^L_533)), L_534, ((int32_t)il2cpp_codegen_add(L_535, 4)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_536 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_537 = ((int32_t)129);
		int32_t L_538 = (L_536)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_537));
		int32_t L_539 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_540 = ___output2;
		int32_t L_541 = ___outOff3;
		Pack_UInt32_To_BE_mE84FDF81208D1EDC3A1877615A9506EC0C0A4E21(((int32_t)(L_538^L_539)), L_540, ((int32_t)il2cpp_codegen_add(L_541, 8)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_542 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_543 = ((int32_t)128);
		int32_t L_544 = (L_542)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_543));
		int32_t L_545 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_546 = ___output2;
		int32_t L_547 = ___outOff3;
		Pack_UInt32_To_BE_mE84FDF81208D1EDC3A1877615A9506EC0C0A4E21(((int32_t)(L_544^L_545)), L_546, ((int32_t)il2cpp_codegen_add(L_547, ((int32_t)12))), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TnepresEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnepresEngine_DecryptBlock_m0C3C768C982F73D3642654D8404408F20A364433 (TnepresEngine_tB2063E257FDB18D464780C832450C7244D433DFC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_1 = ((int32_t)131);
		int32_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input0;
		int32_t L_4 = ___inOff1;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_mDE3117DC769EA78C6E635C4036888D2AD36C39B9(L_3, L_4, NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_2^(int32_t)L_5));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_7 = ((int32_t)130);
		int32_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___input0;
		int32_t L_10 = ___inOff1;
		uint32_t L_11;
		L_11 = Pack_BE_To_UInt32_mDE3117DC769EA78C6E635C4036888D2AD36C39B9(L_9, ((int32_t)il2cpp_codegen_add(L_10, 4)), NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_8^(int32_t)L_11));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_13 = ((int32_t)129);
		int32_t L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___input0;
		int32_t L_16 = ___inOff1;
		uint32_t L_17;
		L_17 = Pack_BE_To_UInt32_mDE3117DC769EA78C6E635C4036888D2AD36C39B9(L_15, ((int32_t)il2cpp_codegen_add(L_16, 8)), NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_14^(int32_t)L_17));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_19 = ((int32_t)128);
		int32_t L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___input0;
		int32_t L_22 = ___inOff1;
		uint32_t L_23;
		L_23 = Pack_BE_To_UInt32_mDE3117DC769EA78C6E635C4036888D2AD36C39B9(L_21, ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)12))), NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_20^(int32_t)L_23));
		int32_t L_24 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_25 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_26 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_27 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m6B2AB088F95B2EEF54B03E336C4383C2F2F7D7DE(__this, L_24, L_25, L_26, L_27, NULL);
		int32_t L_28 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_30 = ((int32_t)124);
		int32_t L_31 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_28^L_31));
		int32_t L_32 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_34 = ((int32_t)125);
		int32_t L_35 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_32^L_35));
		int32_t L_36 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_38 = ((int32_t)126);
		int32_t L_39 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_36^L_39));
		int32_t L_40 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_42 = ((int32_t)127);
		int32_t L_43 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_40^L_43));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_44 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_45 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_46 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_47 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib6_m6DCB2D99D27AFF9D5030B0246689B85D45ABC3CF(__this, L_44, L_45, L_46, L_47, NULL);
		int32_t L_48 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_50 = ((int32_t)120);
		int32_t L_51 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_48^L_51));
		int32_t L_52 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_54 = ((int32_t)121);
		int32_t L_55 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_52^L_55));
		int32_t L_56 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_58 = ((int32_t)122);
		int32_t L_59 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_56^L_59));
		int32_t L_60 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_62 = ((int32_t)123);
		int32_t L_63 = (L_61)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_60^L_63));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_64 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_65 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_66 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_67 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib5_mAA323198D76223543EA0094192073F4EF5FFA10B(__this, L_64, L_65, L_66, L_67, NULL);
		int32_t L_68 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_70 = ((int32_t)116);
		int32_t L_71 = (L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_70));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_68^L_71));
		int32_t L_72 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_74 = ((int32_t)117);
		int32_t L_75 = (L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_72^L_75));
		int32_t L_76 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_78 = ((int32_t)118);
		int32_t L_79 = (L_77)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_76^L_79));
		int32_t L_80 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_82 = ((int32_t)119);
		int32_t L_83 = (L_81)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_80^L_83));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_84 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_85 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_86 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_87 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib4_mFE882C69812FD0C52080011F618B5582712A9BD4(__this, L_84, L_85, L_86, L_87, NULL);
		int32_t L_88 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_90 = ((int32_t)112);
		int32_t L_91 = (L_89)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_90));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_88^L_91));
		int32_t L_92 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_94 = ((int32_t)113);
		int32_t L_95 = (L_93)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_94));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_92^L_95));
		int32_t L_96 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_98 = ((int32_t)114);
		int32_t L_99 = (L_97)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_98));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_96^L_99));
		int32_t L_100 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_102 = ((int32_t)115);
		int32_t L_103 = (L_101)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_102));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_100^L_103));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_104 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_105 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_106 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_107 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib3_m6A77BC5E68598F99FF5658ADEBB942A84B0760A4(__this, L_104, L_105, L_106, L_107, NULL);
		int32_t L_108 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_110 = ((int32_t)108);
		int32_t L_111 = (L_109)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_110));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_108^L_111));
		int32_t L_112 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_114 = ((int32_t)109);
		int32_t L_115 = (L_113)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_114));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_112^L_115));
		int32_t L_116 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_118 = ((int32_t)110);
		int32_t L_119 = (L_117)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_118));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_116^L_119));
		int32_t L_120 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_122 = ((int32_t)111);
		int32_t L_123 = (L_121)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_122));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_120^L_123));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_124 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_125 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_126 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_127 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib2_m2E0C9313D9B611D876F4465FD619529188EAE427(__this, L_124, L_125, L_126, L_127, NULL);
		int32_t L_128 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_130 = ((int32_t)104);
		int32_t L_131 = (L_129)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_130));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_128^L_131));
		int32_t L_132 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_134 = ((int32_t)105);
		int32_t L_135 = (L_133)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_134));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_132^L_135));
		int32_t L_136 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_138 = ((int32_t)106);
		int32_t L_139 = (L_137)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_138));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_136^L_139));
		int32_t L_140 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_142 = ((int32_t)107);
		int32_t L_143 = (L_141)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_142));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_140^L_143));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_144 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_145 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_146 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_147 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib1_mDC3913F6B595A528CCBFD76EB5892F2570A8C32F(__this, L_144, L_145, L_146, L_147, NULL);
		int32_t L_148 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_150 = ((int32_t)100);
		int32_t L_151 = (L_149)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_150));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_148^L_151));
		int32_t L_152 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_153 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_154 = ((int32_t)101);
		int32_t L_155 = (L_153)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_154));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_152^L_155));
		int32_t L_156 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_157 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_158 = ((int32_t)102);
		int32_t L_159 = (L_157)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_158));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_156^L_159));
		int32_t L_160 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_161 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_162 = ((int32_t)103);
		int32_t L_163 = (L_161)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_162));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_160^L_163));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_164 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_165 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_166 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_167 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib0_m8791AD1CC7476D8717B7D9CFE3C3FDAD0D2DDFBB(__this, L_164, L_165, L_166, L_167, NULL);
		int32_t L_168 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_170 = ((int32_t)96);
		int32_t L_171 = (L_169)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_170));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_168^L_171));
		int32_t L_172 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_173 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_174 = ((int32_t)97);
		int32_t L_175 = (L_173)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_174));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_172^L_175));
		int32_t L_176 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_177 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_178 = ((int32_t)98);
		int32_t L_179 = (L_177)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_178));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_176^L_179));
		int32_t L_180 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_181 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_182 = ((int32_t)99);
		int32_t L_183 = (L_181)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_182));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_180^L_183));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_184 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_185 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_186 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_187 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m6B2AB088F95B2EEF54B03E336C4383C2F2F7D7DE(__this, L_184, L_185, L_186, L_187, NULL);
		int32_t L_188 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_190 = ((int32_t)92);
		int32_t L_191 = (L_189)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_190));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_188^L_191));
		int32_t L_192 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_193 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_194 = ((int32_t)93);
		int32_t L_195 = (L_193)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_194));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_192^L_195));
		int32_t L_196 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_197 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_198 = ((int32_t)94);
		int32_t L_199 = (L_197)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_198));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_196^L_199));
		int32_t L_200 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_201 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_202 = ((int32_t)95);
		int32_t L_203 = (L_201)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_202));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_200^L_203));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_204 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_205 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_206 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_207 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib6_m6DCB2D99D27AFF9D5030B0246689B85D45ABC3CF(__this, L_204, L_205, L_206, L_207, NULL);
		int32_t L_208 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_209 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_210 = ((int32_t)88);
		int32_t L_211 = (L_209)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_210));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_208^L_211));
		int32_t L_212 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_213 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_214 = ((int32_t)89);
		int32_t L_215 = (L_213)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_214));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_212^L_215));
		int32_t L_216 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_217 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_218 = ((int32_t)90);
		int32_t L_219 = (L_217)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_218));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_216^L_219));
		int32_t L_220 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_221 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_222 = ((int32_t)91);
		int32_t L_223 = (L_221)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_222));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_220^L_223));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_224 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_225 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_226 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_227 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib5_mAA323198D76223543EA0094192073F4EF5FFA10B(__this, L_224, L_225, L_226, L_227, NULL);
		int32_t L_228 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_229 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_230 = ((int32_t)84);
		int32_t L_231 = (L_229)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_230));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_228^L_231));
		int32_t L_232 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_233 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_234 = ((int32_t)85);
		int32_t L_235 = (L_233)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_234));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_232^L_235));
		int32_t L_236 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_237 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_238 = ((int32_t)86);
		int32_t L_239 = (L_237)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_238));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_236^L_239));
		int32_t L_240 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_241 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_242 = ((int32_t)87);
		int32_t L_243 = (L_241)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_242));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_240^L_243));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_244 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_245 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_246 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_247 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib4_mFE882C69812FD0C52080011F618B5582712A9BD4(__this, L_244, L_245, L_246, L_247, NULL);
		int32_t L_248 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_249 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_250 = ((int32_t)80);
		int32_t L_251 = (L_249)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_250));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_248^L_251));
		int32_t L_252 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_253 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_254 = ((int32_t)81);
		int32_t L_255 = (L_253)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_254));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_252^L_255));
		int32_t L_256 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_257 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_258 = ((int32_t)82);
		int32_t L_259 = (L_257)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_258));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_256^L_259));
		int32_t L_260 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_261 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_262 = ((int32_t)83);
		int32_t L_263 = (L_261)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_262));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_260^L_263));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_264 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_265 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_266 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_267 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib3_m6A77BC5E68598F99FF5658ADEBB942A84B0760A4(__this, L_264, L_265, L_266, L_267, NULL);
		int32_t L_268 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_269 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_270 = ((int32_t)76);
		int32_t L_271 = (L_269)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_270));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_268^L_271));
		int32_t L_272 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_273 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_274 = ((int32_t)77);
		int32_t L_275 = (L_273)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_274));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_272^L_275));
		int32_t L_276 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_277 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_278 = ((int32_t)78);
		int32_t L_279 = (L_277)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_278));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_276^L_279));
		int32_t L_280 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_281 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_282 = ((int32_t)79);
		int32_t L_283 = (L_281)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_282));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_280^L_283));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_284 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_285 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_286 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_287 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib2_m2E0C9313D9B611D876F4465FD619529188EAE427(__this, L_284, L_285, L_286, L_287, NULL);
		int32_t L_288 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_289 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_290 = ((int32_t)72);
		int32_t L_291 = (L_289)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_290));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_288^L_291));
		int32_t L_292 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_293 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_294 = ((int32_t)73);
		int32_t L_295 = (L_293)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_294));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_292^L_295));
		int32_t L_296 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_297 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_298 = ((int32_t)74);
		int32_t L_299 = (L_297)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_298));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_296^L_299));
		int32_t L_300 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_301 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_302 = ((int32_t)75);
		int32_t L_303 = (L_301)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_302));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_300^L_303));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_304 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_305 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_306 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_307 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib1_mDC3913F6B595A528CCBFD76EB5892F2570A8C32F(__this, L_304, L_305, L_306, L_307, NULL);
		int32_t L_308 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_309 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_310 = ((int32_t)68);
		int32_t L_311 = (L_309)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_310));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_308^L_311));
		int32_t L_312 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_313 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_314 = ((int32_t)69);
		int32_t L_315 = (L_313)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_314));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_312^L_315));
		int32_t L_316 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_317 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_318 = ((int32_t)70);
		int32_t L_319 = (L_317)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_318));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_316^L_319));
		int32_t L_320 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_321 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_322 = ((int32_t)71);
		int32_t L_323 = (L_321)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_322));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_320^L_323));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_324 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_325 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_326 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_327 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib0_m8791AD1CC7476D8717B7D9CFE3C3FDAD0D2DDFBB(__this, L_324, L_325, L_326, L_327, NULL);
		int32_t L_328 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_329 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_330 = ((int32_t)64);
		int32_t L_331 = (L_329)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_330));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_328^L_331));
		int32_t L_332 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_333 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_334 = ((int32_t)65);
		int32_t L_335 = (L_333)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_334));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_332^L_335));
		int32_t L_336 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_337 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_338 = ((int32_t)66);
		int32_t L_339 = (L_337)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_338));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_336^L_339));
		int32_t L_340 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_341 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_342 = ((int32_t)67);
		int32_t L_343 = (L_341)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_342));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_340^L_343));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_344 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_345 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_346 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_347 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m6B2AB088F95B2EEF54B03E336C4383C2F2F7D7DE(__this, L_344, L_345, L_346, L_347, NULL);
		int32_t L_348 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_349 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_350 = ((int32_t)60);
		int32_t L_351 = (L_349)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_350));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_348^L_351));
		int32_t L_352 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_353 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_354 = ((int32_t)61);
		int32_t L_355 = (L_353)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_354));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_352^L_355));
		int32_t L_356 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_357 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_358 = ((int32_t)62);
		int32_t L_359 = (L_357)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_358));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_356^L_359));
		int32_t L_360 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_361 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_362 = ((int32_t)63);
		int32_t L_363 = (L_361)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_362));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_360^L_363));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_364 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_365 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_366 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_367 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib6_m6DCB2D99D27AFF9D5030B0246689B85D45ABC3CF(__this, L_364, L_365, L_366, L_367, NULL);
		int32_t L_368 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_369 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_370 = ((int32_t)56);
		int32_t L_371 = (L_369)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_370));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_368^L_371));
		int32_t L_372 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_373 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_374 = ((int32_t)57);
		int32_t L_375 = (L_373)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_374));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_372^L_375));
		int32_t L_376 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_377 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_378 = ((int32_t)58);
		int32_t L_379 = (L_377)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_378));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_376^L_379));
		int32_t L_380 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_381 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_382 = ((int32_t)59);
		int32_t L_383 = (L_381)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_382));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_380^L_383));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_384 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_385 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_386 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_387 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib5_mAA323198D76223543EA0094192073F4EF5FFA10B(__this, L_384, L_385, L_386, L_387, NULL);
		int32_t L_388 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_389 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_390 = ((int32_t)52);
		int32_t L_391 = (L_389)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_390));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_388^L_391));
		int32_t L_392 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_393 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_394 = ((int32_t)53);
		int32_t L_395 = (L_393)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_394));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_392^L_395));
		int32_t L_396 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_397 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_398 = ((int32_t)54);
		int32_t L_399 = (L_397)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_398));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_396^L_399));
		int32_t L_400 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_401 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_402 = ((int32_t)55);
		int32_t L_403 = (L_401)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_402));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_400^L_403));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_404 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_405 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_406 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_407 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib4_mFE882C69812FD0C52080011F618B5582712A9BD4(__this, L_404, L_405, L_406, L_407, NULL);
		int32_t L_408 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_409 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_410 = ((int32_t)48);
		int32_t L_411 = (L_409)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_410));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_408^L_411));
		int32_t L_412 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_413 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_414 = ((int32_t)49);
		int32_t L_415 = (L_413)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_414));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_412^L_415));
		int32_t L_416 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_417 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_418 = ((int32_t)50);
		int32_t L_419 = (L_417)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_418));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_416^L_419));
		int32_t L_420 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_421 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_422 = ((int32_t)51);
		int32_t L_423 = (L_421)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_422));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_420^L_423));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_424 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_425 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_426 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_427 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib3_m6A77BC5E68598F99FF5658ADEBB942A84B0760A4(__this, L_424, L_425, L_426, L_427, NULL);
		int32_t L_428 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_429 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_430 = ((int32_t)44);
		int32_t L_431 = (L_429)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_430));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_428^L_431));
		int32_t L_432 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_433 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_434 = ((int32_t)45);
		int32_t L_435 = (L_433)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_434));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_432^L_435));
		int32_t L_436 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_437 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_438 = ((int32_t)46);
		int32_t L_439 = (L_437)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_438));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_436^L_439));
		int32_t L_440 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_441 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_442 = ((int32_t)47);
		int32_t L_443 = (L_441)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_442));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_440^L_443));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_444 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_445 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_446 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_447 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib2_m2E0C9313D9B611D876F4465FD619529188EAE427(__this, L_444, L_445, L_446, L_447, NULL);
		int32_t L_448 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_449 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_450 = ((int32_t)40);
		int32_t L_451 = (L_449)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_450));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_448^L_451));
		int32_t L_452 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_453 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_454 = ((int32_t)41);
		int32_t L_455 = (L_453)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_454));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_452^L_455));
		int32_t L_456 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_457 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_458 = ((int32_t)42);
		int32_t L_459 = (L_457)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_458));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_456^L_459));
		int32_t L_460 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_461 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_462 = ((int32_t)43);
		int32_t L_463 = (L_461)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_462));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_460^L_463));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_464 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_465 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_466 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_467 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib1_mDC3913F6B595A528CCBFD76EB5892F2570A8C32F(__this, L_464, L_465, L_466, L_467, NULL);
		int32_t L_468 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_469 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_470 = ((int32_t)36);
		int32_t L_471 = (L_469)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_470));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_468^L_471));
		int32_t L_472 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_473 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_474 = ((int32_t)37);
		int32_t L_475 = (L_473)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_474));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_472^L_475));
		int32_t L_476 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_477 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_478 = ((int32_t)38);
		int32_t L_479 = (L_477)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_478));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_476^L_479));
		int32_t L_480 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_481 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_482 = ((int32_t)39);
		int32_t L_483 = (L_481)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_482));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_480^L_483));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_484 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_485 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_486 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_487 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib0_m8791AD1CC7476D8717B7D9CFE3C3FDAD0D2DDFBB(__this, L_484, L_485, L_486, L_487, NULL);
		int32_t L_488 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_489 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_490 = ((int32_t)32);
		int32_t L_491 = (L_489)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_490));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_488^L_491));
		int32_t L_492 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_493 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_494 = ((int32_t)33);
		int32_t L_495 = (L_493)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_494));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_492^L_495));
		int32_t L_496 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_497 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_498 = ((int32_t)34);
		int32_t L_499 = (L_497)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_498));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_496^L_499));
		int32_t L_500 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_501 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_502 = ((int32_t)35);
		int32_t L_503 = (L_501)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_502));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_500^L_503));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_504 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_505 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_506 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_507 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m6B2AB088F95B2EEF54B03E336C4383C2F2F7D7DE(__this, L_504, L_505, L_506, L_507, NULL);
		int32_t L_508 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_509 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_510 = ((int32_t)28);
		int32_t L_511 = (L_509)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_510));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_508^L_511));
		int32_t L_512 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_513 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_514 = ((int32_t)29);
		int32_t L_515 = (L_513)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_514));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_512^L_515));
		int32_t L_516 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_517 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_518 = ((int32_t)30);
		int32_t L_519 = (L_517)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_518));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_516^L_519));
		int32_t L_520 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_521 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_522 = ((int32_t)31);
		int32_t L_523 = (L_521)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_522));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_520^L_523));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_524 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_525 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_526 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_527 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib6_m6DCB2D99D27AFF9D5030B0246689B85D45ABC3CF(__this, L_524, L_525, L_526, L_527, NULL);
		int32_t L_528 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_529 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_530 = ((int32_t)24);
		int32_t L_531 = (L_529)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_530));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_528^L_531));
		int32_t L_532 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_533 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_534 = ((int32_t)25);
		int32_t L_535 = (L_533)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_534));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_532^L_535));
		int32_t L_536 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_537 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_538 = ((int32_t)26);
		int32_t L_539 = (L_537)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_538));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_536^L_539));
		int32_t L_540 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_541 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_542 = ((int32_t)27);
		int32_t L_543 = (L_541)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_542));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_540^L_543));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_544 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_545 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_546 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_547 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib5_mAA323198D76223543EA0094192073F4EF5FFA10B(__this, L_544, L_545, L_546, L_547, NULL);
		int32_t L_548 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_549 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_550 = ((int32_t)20);
		int32_t L_551 = (L_549)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_550));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_548^L_551));
		int32_t L_552 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_553 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_554 = ((int32_t)21);
		int32_t L_555 = (L_553)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_554));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_552^L_555));
		int32_t L_556 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_557 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_558 = ((int32_t)22);
		int32_t L_559 = (L_557)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_558));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_556^L_559));
		int32_t L_560 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_561 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_562 = ((int32_t)23);
		int32_t L_563 = (L_561)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_562));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_560^L_563));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_564 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_565 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_566 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_567 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib4_mFE882C69812FD0C52080011F618B5582712A9BD4(__this, L_564, L_565, L_566, L_567, NULL);
		int32_t L_568 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_569 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_570 = ((int32_t)16);
		int32_t L_571 = (L_569)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_570));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_568^L_571));
		int32_t L_572 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_573 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_574 = ((int32_t)17);
		int32_t L_575 = (L_573)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_574));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_572^L_575));
		int32_t L_576 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_577 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_578 = ((int32_t)18);
		int32_t L_579 = (L_577)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_578));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_576^L_579));
		int32_t L_580 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_581 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_582 = ((int32_t)19);
		int32_t L_583 = (L_581)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_582));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_580^L_583));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_584 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_585 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_586 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_587 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib3_m6A77BC5E68598F99FF5658ADEBB942A84B0760A4(__this, L_584, L_585, L_586, L_587, NULL);
		int32_t L_588 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_589 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_590 = ((int32_t)12);
		int32_t L_591 = (L_589)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_590));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_588^L_591));
		int32_t L_592 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_593 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_594 = ((int32_t)13);
		int32_t L_595 = (L_593)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_594));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_592^L_595));
		int32_t L_596 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_597 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_598 = ((int32_t)14);
		int32_t L_599 = (L_597)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_598));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_596^L_599));
		int32_t L_600 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_601 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_602 = ((int32_t)15);
		int32_t L_603 = (L_601)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_602));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_600^L_603));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_604 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_605 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_606 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_607 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib2_m2E0C9313D9B611D876F4465FD619529188EAE427(__this, L_604, L_605, L_606, L_607, NULL);
		int32_t L_608 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_609 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_610 = 8;
		int32_t L_611 = (L_609)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_610));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_608^L_611));
		int32_t L_612 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_613 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_614 = ((int32_t)9);
		int32_t L_615 = (L_613)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_614));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_612^L_615));
		int32_t L_616 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_617 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_618 = ((int32_t)10);
		int32_t L_619 = (L_617)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_618));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_616^L_619));
		int32_t L_620 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_621 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_622 = ((int32_t)11);
		int32_t L_623 = (L_621)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_622));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_620^L_623));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_624 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_625 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_626 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_627 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib1_mDC3913F6B595A528CCBFD76EB5892F2570A8C32F(__this, L_624, L_625, L_626, L_627, NULL);
		int32_t L_628 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_629 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_630 = 4;
		int32_t L_631 = (L_629)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_630));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_628^L_631));
		int32_t L_632 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_633 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_634 = 5;
		int32_t L_635 = (L_633)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_634));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_632^L_635));
		int32_t L_636 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_637 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_638 = 6;
		int32_t L_639 = (L_637)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_638));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_636^L_639));
		int32_t L_640 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_641 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_642 = 7;
		int32_t L_643 = (L_641)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_642));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_640^L_643));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_644 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_645 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_646 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_647 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib0_m8791AD1CC7476D8717B7D9CFE3C3FDAD0D2DDFBB(__this, L_644, L_645, L_646, L_647, NULL);
		int32_t L_648 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_649 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_650 = 3;
		int32_t L_651 = (L_649)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_650));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_652 = ___output2;
		int32_t L_653 = ___outOff3;
		Pack_UInt32_To_BE_mE84FDF81208D1EDC3A1877615A9506EC0C0A4E21(((int32_t)(L_648^L_651)), L_652, L_653, NULL);
		int32_t L_654 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_655 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_656 = 2;
		int32_t L_657 = (L_655)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_656));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_658 = ___output2;
		int32_t L_659 = ___outOff3;
		Pack_UInt32_To_BE_mE84FDF81208D1EDC3A1877615A9506EC0C0A4E21(((int32_t)(L_654^L_657)), L_658, ((int32_t)il2cpp_codegen_add(L_659, 4)), NULL);
		int32_t L_660 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_661 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_662 = 1;
		int32_t L_663 = (L_661)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_662));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_664 = ___output2;
		int32_t L_665 = ___outOff3;
		Pack_UInt32_To_BE_mE84FDF81208D1EDC3A1877615A9506EC0C0A4E21(((int32_t)(L_660^L_663)), L_664, ((int32_t)il2cpp_codegen_add(L_665, 8)), NULL);
		int32_t L_666 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_667 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		int32_t L_668 = 0;
		int32_t L_669 = (L_667)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_668));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_670 = ___output2;
		int32_t L_671 = ___outOff3;
		Pack_UInt32_To_BE_mE84FDF81208D1EDC3A1877615A9506EC0C0A4E21(((int32_t)(L_666^L_669)), L_670, ((int32_t)il2cpp_codegen_add(L_671, ((int32_t)12))), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TnepresEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnepresEngine__ctor_m81669BFD1A3FB1F9CFAE56A255EB9C7935E44D6F (TnepresEngine_tB2063E257FDB18D464780C832450C7244D433DFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		SerpentEngineBase__ctor_mFF5148CD3B1F13851825B130B3DE227A3E658C3B(__this, NULL);
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
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine__ctor_mC8BBF45788DE1690B4A0872DFB2E3B14F4B73170 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS0_37 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS0_37), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS1_38 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS1_38), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS2_39 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS2_39), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS3_40 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS3_40), (void*)L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_1 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_2 = L_6;
		V_4 = 0;
		goto IL_0159;
	}

IL_0063:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_7 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_8 = V_4;
		uint8_t L_9;
		L_9 = (L_7)->GetAtUnchecked(0, L_8);
		V_3 = ((int32_t)((int32_t)L_9&((int32_t)255)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_0;
		int32_t L_11 = V_3;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		int32_t L_13 = V_3;
		int32_t L_14;
		L_14 = TwofishEngine_Mx_X_m276A1D7929299F6AC4BD0DBED757AAF90640EE1C(__this, L_13, NULL);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)(L_14&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17;
		L_17 = TwofishEngine_Mx_Y_m106DF2D7847CEDE451E9DE9E0CCC39BBD4F81539(__this, L_16, NULL);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)(L_17&((int32_t)255))));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_18 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_19 = V_4;
		uint8_t L_20;
		L_20 = (L_18)->GetAtUnchecked(1, L_19);
		V_3 = ((int32_t)((int32_t)L_20&((int32_t)255)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_0;
		int32_t L_22 = V_3;
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)L_22);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25;
		L_25 = TwofishEngine_Mx_X_m276A1D7929299F6AC4BD0DBED757AAF90640EE1C(__this, L_24, NULL);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(L_25&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_2;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = TwofishEngine_Mx_Y_m106DF2D7847CEDE451E9DE9E0CCC39BBD4F81539(__this, L_27, NULL);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(L_28&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->___gMDS0_37;
		int32_t L_30 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32 = 1;
		int32_t L_33 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		int32_t L_35 = 1;
		int32_t L_36 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_2;
		int32_t L_38 = 1;
		int32_t L_39 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_2;
		int32_t L_41 = 1;
		int32_t L_42 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_33|((int32_t)(L_36<<8))))|((int32_t)(L_39<<((int32_t)16)))))|((int32_t)(L_42<<((int32_t)24))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = __this->___gMDS1_38;
		int32_t L_44 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_2;
		int32_t L_46 = 0;
		int32_t L_47 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_2;
		int32_t L_49 = 0;
		int32_t L_50 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_1;
		int32_t L_52 = 0;
		int32_t L_53 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = V_0;
		int32_t L_55 = 0;
		int32_t L_56 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_47|((int32_t)(L_50<<8))))|((int32_t)(L_53<<((int32_t)16)))))|((int32_t)(L_56<<((int32_t)24))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->___gMDS2_39;
		int32_t L_58 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_1;
		int32_t L_60 = 1;
		int32_t L_61 = (L_59)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_2;
		int32_t L_63 = 1;
		int32_t L_64 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_0;
		int32_t L_66 = 1;
		int32_t L_67 = (L_65)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = V_2;
		int32_t L_69 = 1;
		int32_t L_70 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_61|((int32_t)(L_64<<8))))|((int32_t)(L_67<<((int32_t)16)))))|((int32_t)(L_70<<((int32_t)24))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_71 = __this->___gMDS3_40;
		int32_t L_72 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = V_1;
		int32_t L_74 = 0;
		int32_t L_75 = (L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = V_0;
		int32_t L_77 = 0;
		int32_t L_78 = (L_76)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = V_2;
		int32_t L_80 = 0;
		int32_t L_81 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_80));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = V_1;
		int32_t L_83 = 0;
		int32_t L_84 = (L_82)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_83));
		(L_71)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_75|((int32_t)(L_78<<8))))|((int32_t)(L_81<<((int32_t)16)))))|((int32_t)(L_84<<((int32_t)24))))));
		int32_t L_85 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_0159:
	{
		int32_t L_86 = V_4;
		if ((((int32_t)L_86) < ((int32_t)((int32_t)256))))
		{
			goto IL_0063;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_Init_mDFCA39C40CD778FDE3C80054A7DD3515E55A6406 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___parameters1;
		if (((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = Platform_GetTypeName_mEB5EBEF8496572C698AAD5E94A3D3E030BF0F240(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral601CCA376E46978BDEF3632F3CF3209C7891C382)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TwofishEngine_Init_mDFCA39C40CD778FDE3C80054A7DD3515E55A6406_RuntimeMethod_var)));
	}

IL_001e:
	{
		bool L_5 = ___forEncryption0;
		__this->___encrypting_36 = L_5;
		RuntimeObject* L_6 = ___parameters1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_6, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		__this->___workingKey_44 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingKey_44), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___workingKey_44;
		__this->___k64Cnt_43 = ((int32_t)(((int32_t)(((RuntimeArray*)L_8)->max_length))/8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___workingKey_44;
		TwofishEngine_SetKey_mE272A8D0083032E411423BB5EC140A1A77BD1A05(__this, L_9, NULL);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.TwofishEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TwofishEngine_get_AlgorithmName_m1DC9D531790CB5584625335C679AE1D93C5ABD81 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC639AC33D2C568FE3314FD6510EE9F098A831841);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralC639AC33D2C568FE3314FD6510EE9F098A831841;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.TwofishEngine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TwofishEngine_get_IsPartialBlockOkay_m63347234DC482EC4B422342F3D742A07373FAAF7 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_ProcessBlock_m79AEAA7D729BB7F743AD5CE452C1EC6757D8BDB6 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___workingKey_44;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECAD71D2A48AFE84D642BA9E2C90621A70C4A478)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TwofishEngine_ProcessBlock_m79AEAA7D729BB7F743AD5CE452C1EC6757D8BDB6_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F(L_2, L_3, ((int32_t)16), _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output2;
		int32_t L_5 = ___outOff3;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_4, L_5, ((int32_t)16), _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		bool L_6 = __this->___encrypting_36;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___input0;
		int32_t L_8 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___output2;
		int32_t L_10 = ___outOff3;
		TwofishEngine_EncryptBlock_m162417EC0C4C2D907359EB77B48192B8B9369C78(__this, L_7, L_8, L_9, L_10, NULL);
		goto IL_0050;
	}

IL_0045:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___input0;
		int32_t L_12 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___output2;
		int32_t L_14 = ___outOff3;
		TwofishEngine_DecryptBlock_m6EDB102D5D9EDDDA6B2D06578DC66C479FD7950C(__this, L_11, L_12, L_13, L_14, NULL);
	}

IL_0050:
	{
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_Reset_m659D8CDC305752672B6D55E25A0EA8D7FFE6D164 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___workingKey_44;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___workingKey_44;
		TwofishEngine_SetKey_mE272A8D0083032E411423BB5EC140A1A77BD1A05(__this, L_1, NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_GetBlockSize_m437AD9B11EC7A71A42DB5AAC7D75116926D2419A (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_SetKey_mE272A8D0083032E411423BB5EC140A1A77BD1A05 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40));
		__this->___gSubKeys_41 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gSubKeys_41), (void*)L_3);
		int32_t L_4 = __this->___k64Cnt_43;
		if ((((int32_t)L_4) >= ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral14CEE6733903CF095F0E2144576E08E2EABC9277)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TwofishEngine_SetKey_mE272A8D0083032E411423BB5EC140A1A77BD1A05_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_6 = __this->___k64Cnt_43;
		if ((((int32_t)L_6) <= ((int32_t)4)))
		{
			goto IL_004a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4690523A3F07C01F5A658C98771DE79551536F47)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TwofishEngine_SetKey_mE272A8D0083032E411423BB5EC140A1A77BD1A05_RuntimeMethod_var)));
	}

IL_004a:
	{
		V_3 = 0;
		V_4 = 0;
		goto IL_008c;
	}

IL_0051:
	{
		int32_t L_8 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_multiply(L_8, 8));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_0;
		int32_t L_10 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___key0;
		int32_t L_12 = V_4;
		int32_t L_13;
		L_13 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_11, L_12, NULL);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10), (int32_t)L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___key0;
		int32_t L_17 = V_4;
		int32_t L_18;
		L_18 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_16, ((int32_t)il2cpp_codegen_add(L_17, 4)), NULL);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (int32_t)L_18);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_2;
		int32_t L_20 = __this->___k64Cnt_43;
		int32_t L_21 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		int32_t L_23 = V_3;
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_1;
		int32_t L_27 = V_3;
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30;
		L_30 = TwofishEngine_RS_MDS_Encode_m809B372A5B000880AD98DC48FD80EE585DE142FA(__this, L_25, L_29, NULL);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_20, 1)), L_21))), (int32_t)L_30);
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_008c:
	{
		int32_t L_32 = V_3;
		int32_t L_33 = __this->___k64Cnt_43;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0051;
		}
	}
	{
		V_8 = 0;
		goto IL_0105;
	}

IL_009a:
	{
		int32_t L_34 = V_8;
		V_5 = ((int32_t)il2cpp_codegen_multiply(L_34, ((int32_t)33686018)));
		int32_t L_35 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37;
		L_37 = TwofishEngine_F32_m50255B31B086CB03ADF1F32B90BFA847ED2F348E(__this, L_35, L_36, NULL);
		V_6 = L_37;
		int32_t L_38 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		int32_t L_40;
		L_40 = TwofishEngine_F32_m50255B31B086CB03ADF1F32B90BFA847ED2F348E(__this, ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)16843009))), L_39, NULL);
		V_7 = L_40;
		int32_t L_41 = V_7;
		int32_t L_42 = V_7;
		V_7 = ((int32_t)(((int32_t)(L_41<<8))|((int32_t)((uint32_t)L_42>>((int32_t)24)))));
		int32_t L_43 = V_6;
		int32_t L_44 = V_7;
		V_6 = ((int32_t)il2cpp_codegen_add(L_43, L_44));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___gSubKeys_41;
		int32_t L_46 = V_8;
		int32_t L_47 = V_6;
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_46, 2))), (int32_t)L_47);
		int32_t L_48 = V_6;
		int32_t L_49 = V_7;
		V_6 = ((int32_t)il2cpp_codegen_add(L_48, L_49));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = __this->___gSubKeys_41;
		int32_t L_51 = V_8;
		int32_t L_52 = V_6;
		int32_t L_53 = V_6;
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_51, 2)), 1))), (int32_t)((int32_t)(((int32_t)(L_52<<((int32_t)9)))|((int32_t)((uint32_t)L_53>>((int32_t)23))))));
		int32_t L_54 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0105:
	{
		int32_t L_55 = V_8;
		if ((((int32_t)L_55) < ((int32_t)((int32_t)20))))
		{
			goto IL_009a;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_2;
		int32_t L_57 = 0;
		int32_t L_58 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57));
		V_9 = L_58;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_2;
		int32_t L_60 = 1;
		int32_t L_61 = (L_59)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		V_10 = L_61;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_2;
		int32_t L_63 = 2;
		int32_t L_64 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63));
		V_11 = L_64;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_2;
		int32_t L_66 = 3;
		int32_t L_67 = (L_65)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		V_12 = L_67;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->___gSBox_42 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gSBox_42), (void*)L_68);
		V_17 = 0;
		goto IL_0459;
	}

IL_0137:
	{
		int32_t L_69 = V_17;
		int32_t L_70 = L_69;
		V_16 = L_70;
		int32_t L_71 = L_70;
		V_15 = L_71;
		int32_t L_72 = L_71;
		V_14 = L_72;
		V_13 = L_72;
		int32_t L_73 = __this->___k64Cnt_43;
		V_18 = ((int32_t)(L_73&3));
		int32_t L_74 = V_18;
		switch (L_74)
		{
			case 0:
			{
				goto IL_0235;
			}
			case 1:
			{
				goto IL_016a;
			}
			case 2:
			{
				goto IL_0325;
			}
			case 3:
			{
				goto IL_02ad;
			}
		}
	}
	{
		goto IL_0453;
	}

IL_016a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = __this->___gSBox_42;
		int32_t L_76 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = __this->___gMDS0_37;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_78 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_79 = V_13;
		uint8_t L_80;
		L_80 = (L_78)->GetAtUnchecked(0, L_79);
		int32_t L_81 = V_9;
		int32_t L_82;
		L_82 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_81, NULL);
		int32_t L_83 = ((int32_t)(((int32_t)((int32_t)L_80&((int32_t)255)))^L_82));
		int32_t L_84 = (L_77)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_83));
		(L_75)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_76, 2))), (int32_t)L_84);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = __this->___gSBox_42;
		int32_t L_86 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->___gMDS1_38;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_88 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_89 = V_14;
		uint8_t L_90;
		L_90 = (L_88)->GetAtUnchecked(0, L_89);
		int32_t L_91 = V_9;
		int32_t L_92;
		L_92 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_91, NULL);
		int32_t L_93 = ((int32_t)(((int32_t)((int32_t)L_90&((int32_t)255)))^L_92));
		int32_t L_94 = (L_87)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_93));
		(L_85)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_86, 2)), 1))), (int32_t)L_94);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = __this->___gSBox_42;
		int32_t L_96 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = __this->___gMDS2_39;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_98 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_99 = V_15;
		uint8_t L_100;
		L_100 = (L_98)->GetAtUnchecked(1, L_99);
		int32_t L_101 = V_9;
		int32_t L_102;
		L_102 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_101, NULL);
		int32_t L_103 = ((int32_t)(((int32_t)((int32_t)L_100&((int32_t)255)))^L_102));
		int32_t L_104 = (L_97)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_103));
		(L_95)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_96, 2)), ((int32_t)512)))), (int32_t)L_104);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = __this->___gSBox_42;
		int32_t L_106 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_107 = __this->___gMDS3_40;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_108 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_109 = V_16;
		uint8_t L_110;
		L_110 = (L_108)->GetAtUnchecked(1, L_109);
		int32_t L_111 = V_9;
		int32_t L_112;
		L_112 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_111, NULL);
		int32_t L_113 = ((int32_t)(((int32_t)((int32_t)L_110&((int32_t)255)))^L_112));
		int32_t L_114 = (L_107)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_113));
		(L_105)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_106, 2)), ((int32_t)513)))), (int32_t)L_114);
		goto IL_0453;
	}

IL_0235:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_115 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_116 = V_13;
		uint8_t L_117;
		L_117 = (L_115)->GetAtUnchecked(1, L_116);
		int32_t L_118 = V_12;
		int32_t L_119;
		L_119 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_118, NULL);
		V_13 = ((int32_t)(((int32_t)((int32_t)L_117&((int32_t)255)))^L_119));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_120 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_121 = V_14;
		uint8_t L_122;
		L_122 = (L_120)->GetAtUnchecked(0, L_121);
		int32_t L_123 = V_12;
		int32_t L_124;
		L_124 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_123, NULL);
		V_14 = ((int32_t)(((int32_t)((int32_t)L_122&((int32_t)255)))^L_124));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_125 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_126 = V_15;
		uint8_t L_127;
		L_127 = (L_125)->GetAtUnchecked(0, L_126);
		int32_t L_128 = V_12;
		int32_t L_129;
		L_129 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_128, NULL);
		V_15 = ((int32_t)(((int32_t)((int32_t)L_127&((int32_t)255)))^L_129));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_130 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_131 = V_16;
		uint8_t L_132;
		L_132 = (L_130)->GetAtUnchecked(1, L_131);
		int32_t L_133 = V_12;
		int32_t L_134;
		L_134 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_133, NULL);
		V_16 = ((int32_t)(((int32_t)((int32_t)L_132&((int32_t)255)))^L_134));
	}

IL_02ad:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_135 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_136 = V_13;
		uint8_t L_137;
		L_137 = (L_135)->GetAtUnchecked(1, L_136);
		int32_t L_138 = V_11;
		int32_t L_139;
		L_139 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_138, NULL);
		V_13 = ((int32_t)(((int32_t)((int32_t)L_137&((int32_t)255)))^L_139));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_140 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_141 = V_14;
		uint8_t L_142;
		L_142 = (L_140)->GetAtUnchecked(1, L_141);
		int32_t L_143 = V_11;
		int32_t L_144;
		L_144 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_143, NULL);
		V_14 = ((int32_t)(((int32_t)((int32_t)L_142&((int32_t)255)))^L_144));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_145 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_146 = V_15;
		uint8_t L_147;
		L_147 = (L_145)->GetAtUnchecked(0, L_146);
		int32_t L_148 = V_11;
		int32_t L_149;
		L_149 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_148, NULL);
		V_15 = ((int32_t)(((int32_t)((int32_t)L_147&((int32_t)255)))^L_149));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_150 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_151 = V_16;
		uint8_t L_152;
		L_152 = (L_150)->GetAtUnchecked(0, L_151);
		int32_t L_153 = V_11;
		int32_t L_154;
		L_154 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_153, NULL);
		V_16 = ((int32_t)(((int32_t)((int32_t)L_152&((int32_t)255)))^L_154));
	}

IL_0325:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = __this->___gSBox_42;
		int32_t L_156 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_157 = __this->___gMDS0_37;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_158 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_159 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_160 = V_13;
		uint8_t L_161;
		L_161 = (L_159)->GetAtUnchecked(0, L_160);
		int32_t L_162 = V_10;
		int32_t L_163;
		L_163 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_162, NULL);
		uint8_t L_164;
		L_164 = (L_158)->GetAtUnchecked(0, ((int32_t)(((int32_t)((int32_t)L_161&((int32_t)255)))^L_163)));
		int32_t L_165 = V_9;
		int32_t L_166;
		L_166 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_165, NULL);
		int32_t L_167 = ((int32_t)(((int32_t)((int32_t)L_164&((int32_t)255)))^L_166));
		int32_t L_168 = (L_157)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_167));
		(L_155)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_156, 2))), (int32_t)L_168);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = __this->___gSBox_42;
		int32_t L_170 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_171 = __this->___gMDS1_38;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_172 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_173 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_174 = V_14;
		uint8_t L_175;
		L_175 = (L_173)->GetAtUnchecked(1, L_174);
		int32_t L_176 = V_10;
		int32_t L_177;
		L_177 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_176, NULL);
		uint8_t L_178;
		L_178 = (L_172)->GetAtUnchecked(0, ((int32_t)(((int32_t)((int32_t)L_175&((int32_t)255)))^L_177)));
		int32_t L_179 = V_9;
		int32_t L_180;
		L_180 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_179, NULL);
		int32_t L_181 = ((int32_t)(((int32_t)((int32_t)L_178&((int32_t)255)))^L_180));
		int32_t L_182 = (L_171)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_181));
		(L_169)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_170, 2)), 1))), (int32_t)L_182);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_183 = __this->___gSBox_42;
		int32_t L_184 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_185 = __this->___gMDS2_39;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_186 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_187 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_188 = V_15;
		uint8_t L_189;
		L_189 = (L_187)->GetAtUnchecked(0, L_188);
		int32_t L_190 = V_10;
		int32_t L_191;
		L_191 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_190, NULL);
		uint8_t L_192;
		L_192 = (L_186)->GetAtUnchecked(1, ((int32_t)(((int32_t)((int32_t)L_189&((int32_t)255)))^L_191)));
		int32_t L_193 = V_9;
		int32_t L_194;
		L_194 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_193, NULL);
		int32_t L_195 = ((int32_t)(((int32_t)((int32_t)L_192&((int32_t)255)))^L_194));
		int32_t L_196 = (L_185)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_195));
		(L_183)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_184, 2)), ((int32_t)512)))), (int32_t)L_196);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_197 = __this->___gSBox_42;
		int32_t L_198 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_199 = __this->___gMDS3_40;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_200 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_201 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_202 = V_16;
		uint8_t L_203;
		L_203 = (L_201)->GetAtUnchecked(1, L_202);
		int32_t L_204 = V_10;
		int32_t L_205;
		L_205 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_204, NULL);
		uint8_t L_206;
		L_206 = (L_200)->GetAtUnchecked(1, ((int32_t)(((int32_t)((int32_t)L_203&((int32_t)255)))^L_205)));
		int32_t L_207 = V_9;
		int32_t L_208;
		L_208 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_207, NULL);
		int32_t L_209 = ((int32_t)(((int32_t)((int32_t)L_206&((int32_t)255)))^L_208));
		int32_t L_210 = (L_199)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_209));
		(L_197)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_198, 2)), ((int32_t)513)))), (int32_t)L_210);
	}

IL_0453:
	{
		int32_t L_211 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_211, 1));
	}

IL_0459:
	{
		int32_t L_212 = V_17;
		if ((((int32_t)L_212) < ((int32_t)((int32_t)256))))
		{
			goto IL_0137;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_EncryptBlock_m162417EC0C4C2D907359EB77B48192B8B9369C78 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcIndex1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst2, int32_t ___dstIndex3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___src0;
		int32_t L_1 = ___srcIndex1;
		int32_t L_2;
		L_2 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_0, L_1, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___gSubKeys_41;
		int32_t L_4 = 0;
		int32_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)(L_2^L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___src0;
		int32_t L_7 = ___srcIndex1;
		int32_t L_8;
		L_8 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_6, ((int32_t)il2cpp_codegen_add(L_7, 4)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___gSubKeys_41;
		int32_t L_10 = 1;
		int32_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int32_t)(L_8^L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___src0;
		int32_t L_13 = ___srcIndex1;
		int32_t L_14;
		L_14 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_12, ((int32_t)il2cpp_codegen_add(L_13, 8)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___gSubKeys_41;
		int32_t L_16 = 2;
		int32_t L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = ((int32_t)(L_14^L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___src0;
		int32_t L_19 = ___srcIndex1;
		int32_t L_20;
		L_20 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_18, ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)12))), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___gSubKeys_41;
		int32_t L_22 = 3;
		int32_t L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = ((int32_t)(L_20^L_23));
		V_4 = 8;
		V_7 = 0;
		goto IL_0104;
	}

IL_005a:
	{
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = TwofishEngine_Fe32_0_m9C275C5A14FCD831789EFAE4E80F94ED366220CB(__this, L_24, NULL);
		V_5 = L_25;
		int32_t L_26 = V_1;
		int32_t L_27;
		L_27 = TwofishEngine_Fe32_3_m72DB29FA4222BEA880C9913CE095E41994C7390C(__this, L_26, NULL);
		V_6 = L_27;
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		int32_t L_30 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___gSubKeys_41;
		int32_t L_32 = V_4;
		int32_t L_33 = L_32;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		int32_t L_34 = L_33;
		int32_t L_35 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_2 = ((int32_t)(L_28^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), L_35))));
		int32_t L_36 = V_2;
		int32_t L_37 = V_2;
		V_2 = ((int32_t)(((int32_t)((uint32_t)L_36>>1))|((int32_t)(L_37<<((int32_t)31)))));
		int32_t L_38 = V_3;
		int32_t L_39 = V_3;
		int32_t L_40 = V_5;
		int32_t L_41 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = __this->___gSubKeys_41;
		int32_t L_43 = V_4;
		int32_t L_44 = L_43;
		V_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = L_44;
		int32_t L_46 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		V_3 = ((int32_t)(((int32_t)(((int32_t)(L_38<<1))|((int32_t)((uint32_t)L_39>>((int32_t)31)))))^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_40, ((int32_t)il2cpp_codegen_multiply(2, L_41)))), L_46))));
		int32_t L_47 = V_2;
		int32_t L_48;
		L_48 = TwofishEngine_Fe32_0_m9C275C5A14FCD831789EFAE4E80F94ED366220CB(__this, L_47, NULL);
		V_5 = L_48;
		int32_t L_49 = V_3;
		int32_t L_50;
		L_50 = TwofishEngine_Fe32_3_m72DB29FA4222BEA880C9913CE095E41994C7390C(__this, L_49, NULL);
		V_6 = L_50;
		int32_t L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = __this->___gSubKeys_41;
		int32_t L_55 = V_4;
		int32_t L_56 = L_55;
		V_4 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = L_56;
		int32_t L_58 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57));
		V_0 = ((int32_t)(L_51^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, L_53)), L_58))));
		int32_t L_59 = V_0;
		int32_t L_60 = V_0;
		V_0 = ((int32_t)(((int32_t)((uint32_t)L_59>>1))|((int32_t)(L_60<<((int32_t)31)))));
		int32_t L_61 = V_1;
		int32_t L_62 = V_1;
		int32_t L_63 = V_5;
		int32_t L_64 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = __this->___gSubKeys_41;
		int32_t L_66 = V_4;
		int32_t L_67 = L_66;
		V_4 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = L_67;
		int32_t L_69 = (L_65)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		V_1 = ((int32_t)(((int32_t)(((int32_t)(L_61<<1))|((int32_t)((uint32_t)L_62>>((int32_t)31)))))^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_63, ((int32_t)il2cpp_codegen_multiply(2, L_64)))), L_69))));
		int32_t L_70 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_70, 2));
	}

IL_0104:
	{
		int32_t L_71 = V_7;
		if ((((int32_t)L_71) < ((int32_t)((int32_t)16))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_72 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = __this->___gSubKeys_41;
		int32_t L_74 = 4;
		int32_t L_75 = (L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = ___dst2;
		int32_t L_77 = ___dstIndex3;
		TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23(__this, ((int32_t)(L_72^L_75)), L_76, L_77, NULL);
		int32_t L_78 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = __this->___gSubKeys_41;
		int32_t L_80 = 5;
		int32_t L_81 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_80));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ___dst2;
		int32_t L_83 = ___dstIndex3;
		TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23(__this, ((int32_t)(L_78^L_81)), L_82, ((int32_t)il2cpp_codegen_add(L_83, 4)), NULL);
		int32_t L_84 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = __this->___gSubKeys_41;
		int32_t L_86 = 6;
		int32_t L_87 = (L_85)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_86));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ___dst2;
		int32_t L_89 = ___dstIndex3;
		TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23(__this, ((int32_t)(L_84^L_87)), L_88, ((int32_t)il2cpp_codegen_add(L_89, 8)), NULL);
		int32_t L_90 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = __this->___gSubKeys_41;
		int32_t L_92 = 7;
		int32_t L_93 = (L_91)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_92));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ___dst2;
		int32_t L_95 = ___dstIndex3;
		TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23(__this, ((int32_t)(L_90^L_93)), L_94, ((int32_t)il2cpp_codegen_add(L_95, ((int32_t)12))), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_DecryptBlock_m6EDB102D5D9EDDDA6B2D06578DC66C479FD7950C (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, int32_t ___srcIndex1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst2, int32_t ___dstIndex3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___src0;
		int32_t L_1 = ___srcIndex1;
		int32_t L_2;
		L_2 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_0, L_1, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___gSubKeys_41;
		int32_t L_4 = 4;
		int32_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)(L_2^L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___src0;
		int32_t L_7 = ___srcIndex1;
		int32_t L_8;
		L_8 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_6, ((int32_t)il2cpp_codegen_add(L_7, 4)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___gSubKeys_41;
		int32_t L_10 = 5;
		int32_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int32_t)(L_8^L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___src0;
		int32_t L_13 = ___srcIndex1;
		int32_t L_14;
		L_14 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_12, ((int32_t)il2cpp_codegen_add(L_13, 8)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___gSubKeys_41;
		int32_t L_16 = 6;
		int32_t L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = ((int32_t)(L_14^L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___src0;
		int32_t L_19 = ___srcIndex1;
		int32_t L_20;
		L_20 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_18, ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)12))), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___gSubKeys_41;
		int32_t L_22 = 7;
		int32_t L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = ((int32_t)(L_20^L_23));
		V_4 = ((int32_t)39);
		V_7 = 0;
		goto IL_0105;
	}

IL_005b:
	{
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = TwofishEngine_Fe32_0_m9C275C5A14FCD831789EFAE4E80F94ED366220CB(__this, L_24, NULL);
		V_5 = L_25;
		int32_t L_26 = V_1;
		int32_t L_27;
		L_27 = TwofishEngine_Fe32_3_m72DB29FA4222BEA880C9913CE095E41994C7390C(__this, L_26, NULL);
		V_6 = L_27;
		int32_t L_28 = V_3;
		int32_t L_29 = V_5;
		int32_t L_30 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___gSubKeys_41;
		int32_t L_32 = V_4;
		int32_t L_33 = L_32;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
		int32_t L_34 = L_33;
		int32_t L_35 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_3 = ((int32_t)(L_28^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)il2cpp_codegen_multiply(2, L_30)))), L_35))));
		int32_t L_36 = V_2;
		int32_t L_37 = V_2;
		int32_t L_38 = V_5;
		int32_t L_39 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = __this->___gSubKeys_41;
		int32_t L_41 = V_4;
		int32_t L_42 = L_41;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		int32_t L_43 = L_42;
		int32_t L_44 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		V_2 = ((int32_t)(((int32_t)(((int32_t)(L_36<<1))|((int32_t)((uint32_t)L_37>>((int32_t)31)))))^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_38, L_39)), L_44))));
		int32_t L_45 = V_3;
		int32_t L_46 = V_3;
		V_3 = ((int32_t)(((int32_t)((uint32_t)L_45>>1))|((int32_t)(L_46<<((int32_t)31)))));
		int32_t L_47 = V_2;
		int32_t L_48;
		L_48 = TwofishEngine_Fe32_0_m9C275C5A14FCD831789EFAE4E80F94ED366220CB(__this, L_47, NULL);
		V_5 = L_48;
		int32_t L_49 = V_3;
		int32_t L_50;
		L_50 = TwofishEngine_Fe32_3_m72DB29FA4222BEA880C9913CE095E41994C7390C(__this, L_49, NULL);
		V_6 = L_50;
		int32_t L_51 = V_1;
		int32_t L_52 = V_5;
		int32_t L_53 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = __this->___gSubKeys_41;
		int32_t L_55 = V_4;
		int32_t L_56 = L_55;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		int32_t L_57 = L_56;
		int32_t L_58 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57));
		V_1 = ((int32_t)(L_51^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, ((int32_t)il2cpp_codegen_multiply(2, L_53)))), L_58))));
		int32_t L_59 = V_0;
		int32_t L_60 = V_0;
		int32_t L_61 = V_5;
		int32_t L_62 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = __this->___gSubKeys_41;
		int32_t L_64 = V_4;
		int32_t L_65 = L_64;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		int32_t L_66 = L_65;
		int32_t L_67 = (L_63)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_59<<1))|((int32_t)((uint32_t)L_60>>((int32_t)31)))))^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_61, L_62)), L_67))));
		int32_t L_68 = V_1;
		int32_t L_69 = V_1;
		V_1 = ((int32_t)(((int32_t)((uint32_t)L_68>>1))|((int32_t)(L_69<<((int32_t)31)))));
		int32_t L_70 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_70, 2));
	}

IL_0105:
	{
		int32_t L_71 = V_7;
		if ((((int32_t)L_71) < ((int32_t)((int32_t)16))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_72 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = __this->___gSubKeys_41;
		int32_t L_74 = 0;
		int32_t L_75 = (L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = ___dst2;
		int32_t L_77 = ___dstIndex3;
		TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23(__this, ((int32_t)(L_72^L_75)), L_76, L_77, NULL);
		int32_t L_78 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = __this->___gSubKeys_41;
		int32_t L_80 = 1;
		int32_t L_81 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_80));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ___dst2;
		int32_t L_83 = ___dstIndex3;
		TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23(__this, ((int32_t)(L_78^L_81)), L_82, ((int32_t)il2cpp_codegen_add(L_83, 4)), NULL);
		int32_t L_84 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = __this->___gSubKeys_41;
		int32_t L_86 = 2;
		int32_t L_87 = (L_85)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_86));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ___dst2;
		int32_t L_89 = ___dstIndex3;
		TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23(__this, ((int32_t)(L_84^L_87)), L_88, ((int32_t)il2cpp_codegen_add(L_89, 8)), NULL);
		int32_t L_90 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = __this->___gSubKeys_41;
		int32_t L_92 = 3;
		int32_t L_93 = (L_91)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_92));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ___dst2;
		int32_t L_95 = ___dstIndex3;
		TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23(__this, ((int32_t)(L_90^L_93)), L_94, ((int32_t)il2cpp_codegen_add(L_95, ((int32_t)12))), NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::F32(System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_F32_m50255B31B086CB03ADF1F32B90BFA847ED2F348E (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___k321, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		int32_t L_0 = ___x0;
		int32_t L_1;
		L_1 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___x0;
		int32_t L_3;
		L_3 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = ___x0;
		int32_t L_5;
		L_5 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_4, NULL);
		V_2 = L_5;
		int32_t L_6 = ___x0;
		int32_t L_7;
		L_7 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_6, NULL);
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___k321;
		int32_t L_9 = 0;
		int32_t L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___k321;
		int32_t L_12 = 1;
		int32_t L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___k321;
		int32_t L_15 = 2;
		int32_t L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___k321;
		int32_t L_18 = 3;
		int32_t L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		V_8 = 0;
		int32_t L_20 = __this->___k64Cnt_43;
		V_9 = ((int32_t)(L_20&3));
		int32_t L_21 = V_9;
		switch (L_21)
		{
			case 0:
			{
				goto IL_00ef;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_01cf;
			}
			case 3:
			{
				goto IL_015f;
			}
		}
	}
	{
		goto IL_02c4;
	}

IL_005d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___gMDS0_37;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_23 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_24 = V_0;
		uint8_t L_25;
		L_25 = (L_23)->GetAtUnchecked(0, L_24);
		int32_t L_26 = V_4;
		int32_t L_27;
		L_27 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_26, NULL);
		int32_t L_28 = ((int32_t)(((int32_t)((int32_t)L_25&((int32_t)255)))^L_27));
		int32_t L_29 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___gMDS1_38;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_31 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_32 = V_1;
		uint8_t L_33;
		L_33 = (L_31)->GetAtUnchecked(0, L_32);
		int32_t L_34 = V_4;
		int32_t L_35;
		L_35 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_34, NULL);
		int32_t L_36 = ((int32_t)(((int32_t)((int32_t)L_33&((int32_t)255)))^L_35));
		int32_t L_37 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->___gMDS2_39;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_39 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_40 = V_2;
		uint8_t L_41;
		L_41 = (L_39)->GetAtUnchecked(1, L_40);
		int32_t L_42 = V_4;
		int32_t L_43;
		L_43 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_42, NULL);
		int32_t L_44 = ((int32_t)(((int32_t)((int32_t)L_41&((int32_t)255)))^L_43));
		int32_t L_45 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = __this->___gMDS3_40;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_47 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_48 = V_3;
		uint8_t L_49;
		L_49 = (L_47)->GetAtUnchecked(1, L_48);
		int32_t L_50 = V_4;
		int32_t L_51;
		L_51 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_50, NULL);
		int32_t L_52 = ((int32_t)(((int32_t)((int32_t)L_49&((int32_t)255)))^L_51));
		int32_t L_53 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		V_8 = ((int32_t)(((int32_t)(((int32_t)(L_29^L_37))^L_45))^L_53));
		goto IL_02c4;
	}

IL_00ef:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_54 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_55 = V_0;
		uint8_t L_56;
		L_56 = (L_54)->GetAtUnchecked(1, L_55);
		int32_t L_57 = V_7;
		int32_t L_58;
		L_58 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_57, NULL);
		V_0 = ((int32_t)(((int32_t)((int32_t)L_56&((int32_t)255)))^L_58));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_59 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_60 = V_1;
		uint8_t L_61;
		L_61 = (L_59)->GetAtUnchecked(0, L_60);
		int32_t L_62 = V_7;
		int32_t L_63;
		L_63 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_62, NULL);
		V_1 = ((int32_t)(((int32_t)((int32_t)L_61&((int32_t)255)))^L_63));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_64 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_65 = V_2;
		uint8_t L_66;
		L_66 = (L_64)->GetAtUnchecked(0, L_65);
		int32_t L_67 = V_7;
		int32_t L_68;
		L_68 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_67, NULL);
		V_2 = ((int32_t)(((int32_t)((int32_t)L_66&((int32_t)255)))^L_68));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_69 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_70 = V_3;
		uint8_t L_71;
		L_71 = (L_69)->GetAtUnchecked(1, L_70);
		int32_t L_72 = V_7;
		int32_t L_73;
		L_73 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_72, NULL);
		V_3 = ((int32_t)(((int32_t)((int32_t)L_71&((int32_t)255)))^L_73));
	}

IL_015f:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_74 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_75 = V_0;
		uint8_t L_76;
		L_76 = (L_74)->GetAtUnchecked(1, L_75);
		int32_t L_77 = V_6;
		int32_t L_78;
		L_78 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_77, NULL);
		V_0 = ((int32_t)(((int32_t)((int32_t)L_76&((int32_t)255)))^L_78));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_79 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_80 = V_1;
		uint8_t L_81;
		L_81 = (L_79)->GetAtUnchecked(1, L_80);
		int32_t L_82 = V_6;
		int32_t L_83;
		L_83 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_82, NULL);
		V_1 = ((int32_t)(((int32_t)((int32_t)L_81&((int32_t)255)))^L_83));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_84 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_85 = V_2;
		uint8_t L_86;
		L_86 = (L_84)->GetAtUnchecked(0, L_85);
		int32_t L_87 = V_6;
		int32_t L_88;
		L_88 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_87, NULL);
		V_2 = ((int32_t)(((int32_t)((int32_t)L_86&((int32_t)255)))^L_88));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_89 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_90 = V_3;
		uint8_t L_91;
		L_91 = (L_89)->GetAtUnchecked(0, L_90);
		int32_t L_92 = V_6;
		int32_t L_93;
		L_93 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_92, NULL);
		V_3 = ((int32_t)(((int32_t)((int32_t)L_91&((int32_t)255)))^L_93));
	}

IL_01cf:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94 = __this->___gMDS0_37;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_95 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_96 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_97 = V_0;
		uint8_t L_98;
		L_98 = (L_96)->GetAtUnchecked(0, L_97);
		int32_t L_99 = V_5;
		int32_t L_100;
		L_100 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_99, NULL);
		uint8_t L_101;
		L_101 = (L_95)->GetAtUnchecked(0, ((int32_t)(((int32_t)((int32_t)L_98&((int32_t)255)))^L_100)));
		int32_t L_102 = V_4;
		int32_t L_103;
		L_103 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_102, NULL);
		int32_t L_104 = ((int32_t)(((int32_t)((int32_t)L_101&((int32_t)255)))^L_103));
		int32_t L_105 = (L_94)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_104));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = __this->___gMDS1_38;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_107 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_108 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_109 = V_1;
		uint8_t L_110;
		L_110 = (L_108)->GetAtUnchecked(1, L_109);
		int32_t L_111 = V_5;
		int32_t L_112;
		L_112 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_111, NULL);
		uint8_t L_113;
		L_113 = (L_107)->GetAtUnchecked(0, ((int32_t)(((int32_t)((int32_t)L_110&((int32_t)255)))^L_112)));
		int32_t L_114 = V_4;
		int32_t L_115;
		L_115 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_114, NULL);
		int32_t L_116 = ((int32_t)(((int32_t)((int32_t)L_113&((int32_t)255)))^L_115));
		int32_t L_117 = (L_106)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_116));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = __this->___gMDS2_39;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_119 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_120 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_121 = V_2;
		uint8_t L_122;
		L_122 = (L_120)->GetAtUnchecked(0, L_121);
		int32_t L_123 = V_5;
		int32_t L_124;
		L_124 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_123, NULL);
		uint8_t L_125;
		L_125 = (L_119)->GetAtUnchecked(1, ((int32_t)(((int32_t)((int32_t)L_122&((int32_t)255)))^L_124)));
		int32_t L_126 = V_4;
		int32_t L_127;
		L_127 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_126, NULL);
		int32_t L_128 = ((int32_t)(((int32_t)((int32_t)L_125&((int32_t)255)))^L_127));
		int32_t L_129 = (L_118)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_128));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_130 = __this->___gMDS3_40;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_131 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_132 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35;
		int32_t L_133 = V_3;
		uint8_t L_134;
		L_134 = (L_132)->GetAtUnchecked(1, L_133);
		int32_t L_135 = V_5;
		int32_t L_136;
		L_136 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_135, NULL);
		uint8_t L_137;
		L_137 = (L_131)->GetAtUnchecked(1, ((int32_t)(((int32_t)((int32_t)L_134&((int32_t)255)))^L_136)));
		int32_t L_138 = V_4;
		int32_t L_139;
		L_139 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_138, NULL);
		int32_t L_140 = ((int32_t)(((int32_t)((int32_t)L_137&((int32_t)255)))^L_139));
		int32_t L_141 = (L_130)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_140));
		V_8 = ((int32_t)(((int32_t)(((int32_t)(L_105^L_117))^L_129))^L_141));
	}

IL_02c4:
	{
		int32_t L_142 = V_8;
		return L_142;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::RS_MDS_Encode(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_MDS_Encode_m809B372A5B000880AD98DC48FD80EE585DE142FA (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___k00, int32_t ___k11, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___k11;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0012;
	}

IL_0006:
	{
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = TwofishEngine_RS_rem_mED9611C84C1559560AEA0AEF1B59C63423016018(__this, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0012:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) < ((int32_t)4)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___k00;
		V_0 = ((int32_t)(L_5^L_6));
		V_2 = 0;
		goto IL_002a;
	}

IL_001e:
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = TwofishEngine_RS_rem_mED9611C84C1559560AEA0AEF1B59C63423016018(__this, L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002a:
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::RS_rem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_rem_mED9611C84C1559560AEA0AEF1B59C63423016018 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		int32_t L_0 = ___x0;
		V_0 = ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)24)))&((int32_t)255)));
		int32_t L_1 = V_0;
		int32_t L_2 = V_0;
		G_B1_0 = ((int32_t)(L_1<<1));
		if (((int32_t)(L_2&((int32_t)128))))
		{
			G_B2_0 = ((int32_t)(L_1<<1));
			goto IL_001a;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_001a:
	{
		G_B3_0 = ((int32_t)333);
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		V_1 = ((int32_t)(((int32_t)(G_B3_1^G_B3_0))&((int32_t)255)));
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		G_B4_0 = ((int32_t)((uint32_t)L_3>>1));
		if (((int32_t)(L_4&1)))
		{
			G_B5_0 = ((int32_t)((uint32_t)L_3>>1));
			goto IL_0032;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0037;
	}

IL_0032:
	{
		G_B6_0 = ((int32_t)166);
		G_B6_1 = G_B5_0;
	}

IL_0037:
	{
		int32_t L_5 = V_1;
		V_2 = ((int32_t)(((int32_t)(G_B6_1^G_B6_0))^L_5));
		int32_t L_6 = ___x0;
		int32_t L_7 = V_2;
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = V_0;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_6<<8))^((int32_t)(L_7<<((int32_t)24)))))^((int32_t)(L_8<<((int32_t)16)))))^((int32_t)(L_9<<8))))^L_10));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::LFSR1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR1_mF7196BF8D6C6A853EB8DB230F15B716A50DA6540 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___x0;
		G_B1_0 = ((int32_t)(L_0>>1));
		if (((int32_t)(L_1&1)))
		{
			G_B2_0 = ((int32_t)(L_0>>1));
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = ((int32_t)180);
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		return ((int32_t)(G_B3_1^G_B3_0));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::LFSR2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR2_m944E26A3401C2A72441891A56910159D33EF20D8 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___x0;
		G_B1_0 = ((int32_t)(L_0>>2));
		if (((int32_t)(L_1&2)))
		{
			G_B2_0 = ((int32_t)(L_0>>2));
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = ((int32_t)180);
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		int32_t L_2 = ___x0;
		G_B4_0 = ((int32_t)(G_B3_1^G_B3_0));
		if (((int32_t)(L_2&1)))
		{
			G_B5_0 = ((int32_t)(G_B3_1^G_B3_0));
			goto IL_0019;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_001b;
	}

IL_0019:
	{
		G_B6_0 = ((int32_t)90);
		G_B6_1 = G_B5_0;
	}

IL_001b:
	{
		return ((int32_t)(G_B6_1^G_B6_0));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Mx_X(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_X_m276A1D7929299F6AC4BD0DBED757AAF90640EE1C (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___x0;
		int32_t L_2;
		L_2 = TwofishEngine_LFSR2_m944E26A3401C2A72441891A56910159D33EF20D8(__this, L_1, NULL);
		return ((int32_t)(L_0^L_2));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Mx_Y(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_Y_m106DF2D7847CEDE451E9DE9E0CCC39BBD4F81539 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___x0;
		int32_t L_2;
		L_2 = TwofishEngine_LFSR1_mF7196BF8D6C6A853EB8DB230F15B716A50DA6540(__this, L_1, NULL);
		int32_t L_3 = ___x0;
		int32_t L_4;
		L_4 = TwofishEngine_LFSR2_m944E26A3401C2A72441891A56910159D33EF20D8(__this, L_3, NULL);
		return ((int32_t)(((int32_t)(L_0^L_2))^L_4));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		return ((int32_t)(L_0&((int32_t)255)));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>8))&((int32_t)255)));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)16)))&((int32_t)255)));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)24)))&((int32_t)255)));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Fe32_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_0_m9C275C5A14FCD831789EFAE4E80F94ED366220CB (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___gSBox_42;
		int32_t L_1 = ___x0;
		int32_t L_2 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(L_1&((int32_t)255)))));
		int32_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___gSBox_42;
		int32_t L_5 = ___x0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(1, ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_5>>8))&((int32_t)255)))))));
		int32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___gSBox_42;
		int32_t L_9 = ___x0;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)512), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_9>>((int32_t)16)))&((int32_t)255)))))));
		int32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___gSBox_42;
		int32_t L_13 = ___x0;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(((int32_t)513), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_13>>((int32_t)24)))&((int32_t)255)))))));
		int32_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(L_3^L_7))^L_11))^L_15));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Fe32_3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_3_m72DB29FA4222BEA880C9913CE095E41994C7390C (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___x0, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___gSBox_42;
		int32_t L_1 = ___x0;
		int32_t L_2 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_1>>((int32_t)24)))&((int32_t)255)))));
		int32_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___gSBox_42;
		int32_t L_5 = ___x0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(1, ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(L_5&((int32_t)255)))))));
		int32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___gSBox_42;
		int32_t L_9 = ___x0;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)512), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_9>>8))&((int32_t)255)))))));
		int32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___gSBox_42;
		int32_t L_13 = ___x0;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(((int32_t)513), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_13>>((int32_t)16)))&((int32_t)255)))))));
		int32_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(L_3^L_7))^L_11))^L_15));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::BytesTo32Bits(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b0, int32_t ___p1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___b0;
		int32_t L_1 = ___p1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___b0;
		int32_t L_5 = ___p1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___b0;
		int32_t L_9 = ___p1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___b0;
		int32_t L_13 = ___p1;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_3&((int32_t)255)))|((int32_t)(((int32_t)((int32_t)L_7&((int32_t)255)))<<8))))|((int32_t)(((int32_t)((int32_t)L_11&((int32_t)255)))<<((int32_t)16)))))|((int32_t)(((int32_t)((int32_t)L_15&((int32_t)255)))<<((int32_t)24)))));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::Bits32ToBytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___inData0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, int32_t ___offset2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___b1;
		int32_t L_1 = ___offset2;
		int32_t L_2 = ___inData0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___b1;
		int32_t L_4 = ___offset2;
		int32_t L_5 = ___inData0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_5>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___b1;
		int32_t L_7 = ___offset2;
		int32_t L_8 = ___inData0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_8>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___b1;
		int32_t L_10 = ___offset2;
		int32_t L_11 = ___inData0;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_11>>((int32_t)24)))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine__cctor_m4083E325BB6BAE3EBCF3F32237BF6846ADE51DB3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001817U2D1_153_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)((int32_t)256) };
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_0 = (ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638*)GenArrayNew(ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638_il2cpp_TypeInfo_var, L_1);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_2 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001817U2D1_153_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_2, L_3, NULL);
		((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_35), (void*)L_2);
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
// System.String Org.BouncyCastle.Crypto.Engines.VmpcEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VmpcEngine_get_AlgorithmName_mD86A7B63582CB0AC31551C58A6C24E79F5ECA9EF (VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1599555C091EE02EB53958FBBB14EE6BC93EB040);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1599555C091EE02EB53958FBBB14EE6BC93EB040;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcEngine_Init_mEDF99BE009C242F3F95B9A8E7E57CCC98F8003A7 (VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_0 = NULL;
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___parameters1;
		if (((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_0, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral101B3C75A51196AFDCA86EB43BB5855E80AA199D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VmpcEngine_Init_mEDF99BE009C242F3F95B9A8E7E57CCC98F8003A7_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___parameters1;
		V_0 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_2, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_3, NULL);
		if (((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_4, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE61A524EA8F45BE850EE16F02879615EBF327FD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VmpcEngine_Init_mEDF99BE009C242F3F95B9A8E7E57CCC98F8003A7_RuntimeMethod_var)));
	}

IL_0032:
	{
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_6, NULL);
		V_1 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_7, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_8, NULL);
		__this->___workingIV_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingIV_3), (void*)L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___workingIV_3;
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___workingIV_3;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))) < ((int32_t)1)))
		{
			goto IL_006c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___workingIV_3;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) <= ((int32_t)((int32_t)768))))
		{
			goto IL_0077;
		}
	}

IL_006c:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00731C2C86C2D15B58ED9A20890E494DBD2AC58B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VmpcEngine_Init_mEDF99BE009C242F3F95B9A8E7E57CCC98F8003A7_RuntimeMethod_var)));
	}

IL_0077:
	{
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_14, NULL);
		__this->___workingKey_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingKey_4), (void*)L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___workingKey_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___workingIV_3;
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::InitKey(System.Byte[],System.Byte[]) */, __this, L_16, L_17);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::InitKey(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcEngine_InitKey_mA62AC30E0CC5A0F7E848934B310D2C7F76133E2F (VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyBytes0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ivBytes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		__this->___s_2 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___P_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___P_1), (void*)L_0);
		V_0 = 0;
		goto IL_0029;
	}

IL_001b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___P_1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)((int32_t)(uint8_t)L_3));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0029:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)256))))
		{
			goto IL_001b;
		}
	}
	{
		V_1 = 0;
		goto IL_00ad;
	}

IL_0035:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___P_1;
		uint8_t L_7 = __this->___s_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___P_1;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_9&((int32_t)255)));
		uint8_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___keyBytes0;
		int32_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___keyBytes0;
		int32_t L_15 = ((int32_t)(L_13%((int32_t)(((RuntimeArray*)L_14)->max_length))));
		uint8_t L_16 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_11)), (int32_t)L_16))&((int32_t)255)));
		uint8_t L_18 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		__this->___s_2 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___P_1;
		int32_t L_20 = V_1;
		int32_t L_21 = ((int32_t)(L_20&((int32_t)255)));
		uint8_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_2 = L_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___P_1;
		int32_t L_24 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___P_1;
		uint8_t L_26 = __this->___s_2;
		int32_t L_27 = ((int32_t)((int32_t)L_26&((int32_t)255)));
		uint8_t L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_24&((int32_t)255)))), (uint8_t)L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___P_1;
		uint8_t L_30 = __this->___s_2;
		uint8_t L_31 = V_2;
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_30&((int32_t)255)))), (uint8_t)L_31);
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00ad:
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)768))))
		{
			goto IL_0035;
		}
	}
	{
		V_3 = 0;
		goto IL_0133;
	}

IL_00b9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___P_1;
		uint8_t L_35 = __this->___s_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___P_1;
		int32_t L_37 = V_3;
		int32_t L_38 = ((int32_t)(L_37&((int32_t)255)));
		uint8_t L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___ivBytes1;
		int32_t L_41 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___ivBytes1;
		int32_t L_43 = ((int32_t)(L_41%((int32_t)(((RuntimeArray*)L_42)->max_length))));
		uint8_t L_44 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		int32_t L_45 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_39)), (int32_t)L_44))&((int32_t)255)));
		uint8_t L_46 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		__this->___s_2 = L_46;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___P_1;
		int32_t L_48 = V_3;
		int32_t L_49 = ((int32_t)(L_48&((int32_t)255)));
		uint8_t L_50 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		V_4 = L_50;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->___P_1;
		int32_t L_52 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = __this->___P_1;
		uint8_t L_54 = __this->___s_2;
		int32_t L_55 = ((int32_t)((int32_t)L_54&((int32_t)255)));
		uint8_t L_56 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_52&((int32_t)255)))), (uint8_t)L_56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = __this->___P_1;
		uint8_t L_58 = __this->___s_2;
		uint8_t L_59 = V_4;
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_58&((int32_t)255)))), (uint8_t)L_59);
		int32_t L_60 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_0133:
	{
		int32_t L_61 = V_3;
		if ((((int32_t)L_61) < ((int32_t)((int32_t)768))))
		{
			goto IL_00b9;
		}
	}
	{
		__this->___n_0 = (uint8_t)0;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcEngine_ProcessBytes_m036D7D9759AE7697E8EB3EFCBA612FB1BE9594D2 (VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOff4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = ___len2;
		Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F(L_0, L_1, L_2, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___output3;
		int32_t L_4 = ___outOff4;
		int32_t L_5 = ___len2;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_3, L_4, L_5, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		V_0 = 0;
		goto IL_00f6;
	}

IL_0023:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___P_1;
		uint8_t L_7 = __this->___s_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___P_1;
		uint8_t L_9 = __this->___n_0;
		int32_t L_10 = ((int32_t)((int32_t)L_9&((int32_t)255)));
		uint8_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_11))&((int32_t)255)));
		uint8_t L_13 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		__this->___s_2 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___P_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___P_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___P_1;
		uint8_t L_17 = __this->___s_2;
		int32_t L_18 = ((int32_t)((int32_t)L_17&((int32_t)255)));
		uint8_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		int32_t L_20 = ((int32_t)((int32_t)L_19&((int32_t)255)));
		uint8_t L_21 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		int32_t L_22 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_21, 1))&((int32_t)255)));
		uint8_t L_23 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_1 = L_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___P_1;
		uint8_t L_25 = __this->___n_0;
		int32_t L_26 = ((int32_t)((int32_t)L_25&((int32_t)255)));
		uint8_t L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		V_2 = L_27;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___P_1;
		uint8_t L_29 = __this->___n_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___P_1;
		uint8_t L_31 = __this->___s_2;
		int32_t L_32 = ((int32_t)((int32_t)L_31&((int32_t)255)));
		uint8_t L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_29&((int32_t)255)))), (uint8_t)L_33);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___P_1;
		uint8_t L_35 = __this->___s_2;
		uint8_t L_36 = V_2;
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_35&((int32_t)255)))), (uint8_t)L_36);
		uint8_t L_37 = __this->___n_0;
		__this->___n_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_37, 1))&((int32_t)255))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___output3;
		int32_t L_39 = V_0;
		int32_t L_40 = ___outOff4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___input0;
		int32_t L_42 = V_0;
		int32_t L_43 = ___inOff1;
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_42, L_43));
		uint8_t L_45 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		uint8_t L_46 = V_1;
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_39, L_40))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_45^(int32_t)L_46))));
		int32_t L_47 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00f6:
	{
		int32_t L_48 = V_0;
		int32_t L_49 = ___len2;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcEngine_Reset_m726E23621AEAD861340916222B3DC133ED29E8BA (VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___workingKey_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___workingIV_3;
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::InitKey(System.Byte[],System.Byte[]) */, __this, L_0, L_1);
		return;
	}
}
// System.Byte Org.BouncyCastle.Crypto.Engines.VmpcEngine::ReturnByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t VmpcEngine_ReturnByte_m9C5D418351931D98AF2EABD55AFDA5C44DB5B382 (VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___P_1;
		uint8_t L_1 = __this->___s_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___P_1;
		uint8_t L_3 = __this->___n_0;
		int32_t L_4 = ((int32_t)((int32_t)L_3&((int32_t)255)));
		uint8_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_5))&((int32_t)255)));
		uint8_t L_7 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		__this->___s_2 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___P_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___P_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___P_1;
		uint8_t L_11 = __this->___s_2;
		int32_t L_12 = ((int32_t)((int32_t)L_11&((int32_t)255)));
		uint8_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = ((int32_t)((int32_t)L_13&((int32_t)255)));
		uint8_t L_15 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_15, 1))&((int32_t)255)));
		uint8_t L_17 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___P_1;
		uint8_t L_19 = __this->___n_0;
		int32_t L_20 = ((int32_t)((int32_t)L_19&((int32_t)255)));
		uint8_t L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_1 = L_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___P_1;
		uint8_t L_23 = __this->___n_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___P_1;
		uint8_t L_25 = __this->___s_2;
		int32_t L_26 = ((int32_t)((int32_t)L_25&((int32_t)255)));
		uint8_t L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_23&((int32_t)255)))), (uint8_t)L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___P_1;
		uint8_t L_29 = __this->___s_2;
		uint8_t L_30 = V_1;
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_29&((int32_t)255)))), (uint8_t)L_30);
		uint8_t L_31 = __this->___n_0;
		__this->___n_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_31, 1))&((int32_t)255))));
		uint8_t L_32 = ___input0;
		uint8_t L_33 = V_0;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_32^(int32_t)L_33)));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcEngine__ctor_m43337C0F13BBA8BDCB8959F009608B86FF0BC935 (VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF* __this, const RuntimeMethod* method) 
{
	{
		__this->___n_0 = (uint8_t)0;
		__this->___P_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___P_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___s_2 = (uint8_t)0;
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
// System.String Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VmpcKsa3Engine_get_AlgorithmName_m08112AC1CBA4B1BD0ED210AA53F728A50DF6D187 (VmpcKsa3Engine_t6B40A255ABBC4585FD23E3EB9A16329F6CB62C76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB879F2EF65B4665A454CC69D72CFC0D331A9EB0);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralCB879F2EF65B4665A454CC69D72CFC0D331A9EB0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine::InitKey(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcKsa3Engine_InitKey_mE16B14035B27D59D5590F8895A0B4E370A970C31 (VmpcKsa3Engine_t6B40A255ABBC4585FD23E3EB9A16329F6CB62C76* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyBytes0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ivBytes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	{
		((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1), (void*)L_0);
		V_0 = 0;
		goto IL_0029;
	}

IL_001b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)((int32_t)(uint8_t)L_3));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0029:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)256))))
		{
			goto IL_001b;
		}
	}
	{
		V_1 = 0;
		goto IL_00ad;
	}

IL_0035:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		uint8_t L_7 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)(L_9&((int32_t)255)));
		uint8_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___keyBytes0;
		int32_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___keyBytes0;
		int32_t L_15 = ((int32_t)(L_13%((int32_t)(((RuntimeArray*)L_14)->max_length))));
		uint8_t L_16 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_11)), (int32_t)L_16))&((int32_t)255)));
		uint8_t L_18 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		int32_t L_20 = V_1;
		int32_t L_21 = ((int32_t)(L_20&((int32_t)255)));
		uint8_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_2 = L_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		int32_t L_24 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		uint8_t L_26 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2;
		int32_t L_27 = ((int32_t)((int32_t)L_26&((int32_t)255)));
		uint8_t L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_24&((int32_t)255)))), (uint8_t)L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		uint8_t L_30 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2;
		uint8_t L_31 = V_2;
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_30&((int32_t)255)))), (uint8_t)L_31);
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00ad:
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)768))))
		{
			goto IL_0035;
		}
	}
	{
		V_3 = 0;
		goto IL_0133;
	}

IL_00b9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		uint8_t L_35 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		int32_t L_37 = V_3;
		int32_t L_38 = ((int32_t)(L_37&((int32_t)255)));
		uint8_t L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___ivBytes1;
		int32_t L_41 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___ivBytes1;
		int32_t L_43 = ((int32_t)(L_41%((int32_t)(((RuntimeArray*)L_42)->max_length))));
		uint8_t L_44 = (L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		int32_t L_45 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_39)), (int32_t)L_44))&((int32_t)255)));
		uint8_t L_46 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2 = L_46;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		int32_t L_48 = V_3;
		int32_t L_49 = ((int32_t)(L_48&((int32_t)255)));
		uint8_t L_50 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		V_4 = L_50;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		int32_t L_52 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		uint8_t L_54 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2;
		int32_t L_55 = ((int32_t)((int32_t)L_54&((int32_t)255)));
		uint8_t L_56 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_52&((int32_t)255)))), (uint8_t)L_56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		uint8_t L_58 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2;
		uint8_t L_59 = V_4;
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_58&((int32_t)255)))), (uint8_t)L_59);
		int32_t L_60 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_0133:
	{
		int32_t L_61 = V_3;
		if ((((int32_t)L_61) < ((int32_t)((int32_t)768))))
		{
			goto IL_00b9;
		}
	}
	{
		V_5 = 0;
		goto IL_01c6;
	}

IL_0146:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		uint8_t L_63 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		int32_t L_65 = V_5;
		int32_t L_66 = ((int32_t)(L_65&((int32_t)255)));
		uint8_t L_67 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = ___keyBytes0;
		int32_t L_69 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = ___keyBytes0;
		int32_t L_71 = ((int32_t)(L_69%((int32_t)(((RuntimeArray*)L_70)->max_length))));
		uint8_t L_72 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71));
		int32_t L_73 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)L_67)), (int32_t)L_72))&((int32_t)255)));
		uint8_t L_74 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2 = L_74;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		int32_t L_76 = V_5;
		int32_t L_77 = ((int32_t)(L_76&((int32_t)255)));
		uint8_t L_78 = (L_75)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77));
		V_6 = L_78;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		int32_t L_80 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		uint8_t L_82 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2;
		int32_t L_83 = ((int32_t)((int32_t)L_82&((int32_t)255)));
		uint8_t L_84 = (L_81)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_83));
		(L_79)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_80&((int32_t)255)))), (uint8_t)L_84);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		uint8_t L_86 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2;
		uint8_t L_87 = V_6;
		(L_85)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_86&((int32_t)255)))), (uint8_t)L_87);
		int32_t L_88 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_88, 1));
	}

IL_01c6:
	{
		int32_t L_89 = V_5;
		if ((((int32_t)L_89) < ((int32_t)((int32_t)768))))
		{
			goto IL_0146;
		}
	}
	{
		((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___n_0 = (uint8_t)0;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcKsa3Engine__ctor_m63554DF05DFACB133C69A07AD96CCA052C92352E (VmpcKsa3Engine_t6B40A255ABBC4585FD23E3EB9A16329F6CB62C76* __this, const RuntimeMethod* method) 
{
	{
		VmpcEngine__ctor_m43337C0F13BBA8BDCB8959F009608B86FF0BC935(__this, NULL);
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
// System.String Org.BouncyCastle.Crypto.Engines.XSalsa20Engine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XSalsa20Engine_get_AlgorithmName_m904176A0283A0DA8D9EF8939FE3CE749CD17D5FA (XSalsa20Engine_tDF36BD3BD165A1B1D6E28DFE5D17C69A072F5EDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC89858D824AC4A3F2216B74EEFEA4A867D131078);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralC89858D824AC4A3F2216B74EEFEA4A867D131078;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.XSalsa20Engine::get_NonceSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XSalsa20Engine_get_NonceSize_mE8D9F8157BB82FD57A4F20EB58A9F3704C38A023 (XSalsa20Engine_tDF36BD3BD165A1B1D6E28DFE5D17C69A072F5EDD* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)24);
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.XSalsa20Engine::SetKey(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XSalsa20Engine_SetKey_mC4921500383B53B0CC5C3E9B7E0BE0EE67C271FB (XSalsa20Engine_tDF36BD3BD165A1B1D6E28DFE5D17C69A072F5EDD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyBytes0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ivBytes1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___keyBytes0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String Org.BouncyCastle.Crypto.Engines.Salsa20Engine::get_AlgorithmName() */, __this);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5F1F4A58853B31A2075544F5A704FD9361EB7986)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XSalsa20Engine_SetKey_mC4921500383B53B0CC5C3E9B7E0BE0EE67C271FB_RuntimeMethod_var)));
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___keyBytes0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)32))))
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String Org.BouncyCastle.Crypto.Engines.Salsa20Engine::get_AlgorithmName() */, __this);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral83298FB9C35B736FC1AE3C68DC4C4157F50AD0C4)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XSalsa20Engine_SetKey_mC4921500383B53B0CC5C3E9B7E0BE0EE67C271FB_RuntimeMethod_var)));
	}

IL_0036:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___keyBytes0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___ivBytes1;
		Salsa20Engine_SetKey_m5A207350D464828EECE769D3778C7E6C5FB88075(__this, L_8, L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___ivBytes1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		Pack_LE_To_UInt32_mCB08D93FE8FA8C2952E2CF1BCF77A872C1743142(L_10, 8, L_11, 8, 2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)));
		V_0 = L_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4_il2cpp_TypeInfo_var);
		Salsa20Engine_SalsaCore_mF27F61D281A0F53927CC012603EA3A97490E2380(((int32_t)20), L_14, L_15, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		int32_t L_18 = 0;
		uint32_t L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		int32_t L_21 = 0;
		uint32_t L_22 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_22)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_0;
		int32_t L_25 = 5;
		uint32_t L_26 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		int32_t L_28 = 5;
		uint32_t L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)L_29)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_0;
		int32_t L_32 = ((int32_t)10);
		uint32_t L_33 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		int32_t L_35 = ((int32_t)10);
		uint32_t L_36 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)L_36)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = V_0;
		int32_t L_39 = ((int32_t)15);
		uint32_t L_40 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		int32_t L_42 = ((int32_t)15);
		uint32_t L_43 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)L_43)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = V_0;
		int32_t L_46 = 6;
		uint32_t L_47 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		int32_t L_49 = 6;
		uint32_t L_50 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)L_50)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_0;
		int32_t L_53 = 7;
		uint32_t L_54 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		int32_t L_56 = 7;
		uint32_t L_57 = (L_55)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)L_57)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = V_0;
		int32_t L_60 = 8;
		uint32_t L_61 = (L_59)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		int32_t L_63 = 8;
		uint32_t L_64 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63));
		(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_61, (int32_t)L_64)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = V_0;
		int32_t L_67 = ((int32_t)9);
		uint32_t L_68 = (L_66)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_67));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		int32_t L_70 = ((int32_t)9);
		uint32_t L_71 = (L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_70));
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_68, (int32_t)L_71)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ___ivBytes1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		Pack_LE_To_UInt32_mCB08D93FE8FA8C2952E2CF1BCF77A872C1743142(L_72, ((int32_t)16), L_73, 6, 2, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.XSalsa20Engine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XSalsa20Engine__ctor_mD2E588306D1C006ADACE29A82A90281DC887552E (XSalsa20Engine_tDF36BD3BD165A1B1D6E28DFE5D17C69A072F5EDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4_il2cpp_TypeInfo_var);
		Salsa20Engine__ctor_m6186F6D389AB34128725472CB335394AAD2504A5(__this, NULL);
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
// System.Void Org.BouncyCastle.Crypto.Engines.XteaEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XteaEngine__ctor_m37569EF08021FAF999D373BD5240A003A7D1D365 (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->____S_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____S_3), (void*)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->____sum0_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sum0_4), (void*)L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->____sum1_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sum1_5), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->____initialised_6 = (bool)0;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.XteaEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XteaEngine_get_AlgorithmName_mE5D0CE5AA2E393BB9124D1FB51CC03FFE7617C35 (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78DCF8BE751904E2F2302AEBBAF7BA625943E2EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral78DCF8BE751904E2F2302AEBBAF7BA625943E2EB;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.XteaEngine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XteaEngine_get_IsPartialBlockOkay_m44889DE9BA389A840E5ADC60B41A60C34A1F1E26 (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.XteaEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XteaEngine_GetBlockSize_m442C9752D80977A56FCE879EB85E803EF93AD2D3 (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, const RuntimeMethod* method) 
{
	{
		return 8;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.XteaEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XteaEngine_Init_mEA7D4FE490AAB2C0510ADC42F12DC53D153150F8 (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___parameters1;
		if (((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = ___parameters1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = Platform_GetTypeName_mEB5EBEF8496572C698AAD5E94A3D3E030BF0F240(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD187D665853B8D7EA2432DDF6CBF2E65DC3BA81D)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XteaEngine_Init_mEA7D4FE490AAB2C0510ADC42F12DC53D153150F8_RuntimeMethod_var)));
	}

IL_001e:
	{
		bool L_5 = ___forEncryption0;
		__this->____forEncryption_7 = L_5;
		__this->____initialised_6 = (bool)1;
		RuntimeObject* L_6 = ___parameters1;
		V_0 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_6, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_7, NULL);
		XteaEngine_setKey_m8BCBA67E34F08B18F2566802F6979118F628F5A2(__this, L_8, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.XteaEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XteaEngine_ProcessBlock_mA56C7529E825AE5B9D3E8B955CCC39A6AEB8939E (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____initialised_6;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(10 /* System.String Org.BouncyCastle.Crypto.Engines.XteaEngine::get_AlgorithmName() */, __this);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF54C61EA654A453F853B81CE072DEC048FBB4991)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XteaEngine_ProcessBlock_mA56C7529E825AE5B9D3E8B955CCC39A6AEB8939E_RuntimeMethod_var)));
	}

IL_001e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___inBytes0;
		int32_t L_5 = ___inOff1;
		Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F(L_4, L_5, 8, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___outBytes2;
		int32_t L_7 = ___outOff3;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_6, L_7, 8, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		bool L_8 = __this->____forEncryption_7;
		if (L_8)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___inBytes0;
		int32_t L_10 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___outBytes2;
		int32_t L_12 = ___outOff3;
		int32_t L_13;
		L_13 = XteaEngine_decryptBlock_m22FB75AAD4FB6D59D1BA53804B6A56A1CC554FE1(__this, L_9, L_10, L_11, L_12, NULL);
		return L_13;
	}

IL_004d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___inBytes0;
		int32_t L_15 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___outBytes2;
		int32_t L_17 = ___outOff3;
		int32_t L_18;
		L_18 = XteaEngine_encryptBlock_mFC8FF0B5F771AF8E873C34AED6659A7B25B0BBFD(__this, L_14, L_15, L_16, L_17, NULL);
		return L_18;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.XteaEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XteaEngine_Reset_m20D0C9AE6988941EA5DF059BC8148A86AB052EBD (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.XteaEngine::setKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XteaEngine_setKey_m8BCBA67E34F08B18F2566802F6979118F628F5A2 (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = 0;
		V_1 = L_0;
		V_0 = L_0;
		goto IL_001d;
	}

IL_0006:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____S_3;
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___key0;
		int32_t L_4 = V_1;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_mDE3117DC769EA78C6E635C4036888D2AD36C39B9(L_3, L_4, NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (uint32_t)L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 4));
	}

IL_001d:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)4)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_9 = 0;
		V_1 = L_9;
		V_0 = L_9;
		goto IL_005e;
	}

IL_0027:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->____sum0_4;
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = __this->____S_3;
		int32_t L_14 = V_1;
		int32_t L_15 = ((int32_t)(L_14&3));
		uint32_t L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)il2cpp_codegen_add(L_12, (int32_t)L_16)));
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)-1640531527)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = __this->____sum1_5;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = __this->____S_3;
		int32_t L_22 = V_1;
		int32_t L_23 = ((int32_t)(((int32_t)(L_22>>((int32_t)11)))&3));
		uint32_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (uint32_t)((int32_t)il2cpp_codegen_add(L_20, (int32_t)L_24)));
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_005e:
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) < ((int32_t)((int32_t)32))))
		{
			goto IL_0027;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.XteaEngine::encryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XteaEngine_encryptBlock_mFC8FF0B5F771AF8E873C34AED6659A7B25B0BBFD (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___inBytes0;
		int32_t L_1 = ___inOff1;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_mDE3117DC769EA78C6E635C4036888D2AD36C39B9(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___inBytes0;
		int32_t L_4 = ___inOff1;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_mDE3117DC769EA78C6E635C4036888D2AD36C39B9(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0044;
	}

IL_0016:
	{
		uint32_t L_6 = V_0;
		uint32_t L_7 = V_1;
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->____sum0_4;
		int32_t L_11 = V_2;
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_7<<4))^((int32_t)((uint32_t)L_8>>5)))), (int32_t)L_9))^(int32_t)L_13))));
		uint32_t L_14 = V_1;
		uint32_t L_15 = V_0;
		uint32_t L_16 = V_0;
		uint32_t L_17 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = __this->____sum1_5;
		int32_t L_19 = V_2;
		int32_t L_20 = L_19;
		uint32_t L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_15<<4))^((int32_t)((uint32_t)L_16>>5)))), (int32_t)L_17))^(int32_t)L_21))));
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0044:
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)32))))
		{
			goto IL_0016;
		}
	}
	{
		uint32_t L_24 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___outBytes2;
		int32_t L_26 = ___outOff3;
		Pack_UInt32_To_BE_mE84FDF81208D1EDC3A1877615A9506EC0C0A4E21(L_24, L_25, L_26, NULL);
		uint32_t L_27 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___outBytes2;
		int32_t L_29 = ___outOff3;
		Pack_UInt32_To_BE_mE84FDF81208D1EDC3A1877615A9506EC0C0A4E21(L_27, L_28, ((int32_t)il2cpp_codegen_add(L_29, 4)), NULL);
		return 8;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.XteaEngine::decryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XteaEngine_decryptBlock_m22FB75AAD4FB6D59D1BA53804B6A56A1CC554FE1 (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___inBytes0;
		int32_t L_1 = ___inOff1;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_mDE3117DC769EA78C6E635C4036888D2AD36C39B9(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___inBytes0;
		int32_t L_4 = ___inOff1;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_mDE3117DC769EA78C6E635C4036888D2AD36C39B9(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_1 = L_5;
		V_2 = ((int32_t)31);
		goto IL_0045;
	}

IL_0017:
	{
		uint32_t L_6 = V_1;
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_0;
		uint32_t L_9 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->____sum1_5;
		int32_t L_11 = V_2;
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_7<<4))^((int32_t)((uint32_t)L_8>>5)))), (int32_t)L_9))^(int32_t)L_13))));
		uint32_t L_14 = V_0;
		uint32_t L_15 = V_1;
		uint32_t L_16 = V_1;
		uint32_t L_17 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = __this->____sum0_4;
		int32_t L_19 = V_2;
		int32_t L_20 = L_19;
		uint32_t L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_15<<4))^((int32_t)((uint32_t)L_16>>5)))), (int32_t)L_17))^(int32_t)L_21))));
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
	}

IL_0045:
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) >= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		uint32_t L_24 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___outBytes2;
		int32_t L_26 = ___outOff3;
		Pack_UInt32_To_BE_mE84FDF81208D1EDC3A1877615A9506EC0C0A4E21(L_24, L_25, L_26, NULL);
		uint32_t L_27 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___outBytes2;
		int32_t L_29 = ___outOff3;
		Pack_UInt32_To_BE_mE84FDF81208D1EDC3A1877615A9506EC0C0A4E21(L_27, L_28, ((int32_t)il2cpp_codegen_add(L_29, 4)), NULL);
		return 8;
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
// System.Void Org.BouncyCastle.Crypto.Generators.BaseKdfBytesGenerator::.ctor(System.Int32,Org.BouncyCastle.Crypto.IDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseKdfBytesGenerator__ctor_m5749CB47224854609539C27569B235D2651984E8 (BaseKdfBytesGenerator_tB5CF0010BA5BA9A731413B7834EE9298704D9DB0* __this, int32_t ___counterStart0, RuntimeObject* ___digest1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___counterStart0;
		__this->___counterStart_0 = L_0;
		RuntimeObject* L_1 = ___digest1;
		__this->___digest_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___digest_1), (void*)L_1);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.BaseKdfBytesGenerator::Init(Org.BouncyCastle.Crypto.IDerivationParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseKdfBytesGenerator_Init_m262B79DE13BA7666FD510AD7A2184976DD68B0B0 (BaseKdfBytesGenerator_tB5CF0010BA5BA9A731413B7834EE9298704D9DB0* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Iso18033KdfParameters_t435295BD3FF4961A3F72F01DE4183C5AE4F4FB2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KdfParameters_tDDC5A4A75A5909F80507E6486C806E9B4DCCDB74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KdfParameters_tDDC5A4A75A5909F80507E6486C806E9B4DCCDB74* V_0 = NULL;
	Iso18033KdfParameters_t435295BD3FF4961A3F72F01DE4183C5AE4F4FB2D* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___parameters0;
		if (!((KdfParameters_tDDC5A4A75A5909F80507E6486C806E9B4DCCDB74*)IsInstClass((RuntimeObject*)L_0, KdfParameters_tDDC5A4A75A5909F80507E6486C806E9B4DCCDB74_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_1 = ___parameters0;
		V_0 = ((KdfParameters_tDDC5A4A75A5909F80507E6486C806E9B4DCCDB74*)CastclassClass((RuntimeObject*)L_1, KdfParameters_tDDC5A4A75A5909F80507E6486C806E9B4DCCDB74_il2cpp_TypeInfo_var));
		KdfParameters_tDDC5A4A75A5909F80507E6486C806E9B4DCCDB74* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = KdfParameters_GetSharedSecret_mB00485EF0C7C97E963675D246D473D1D994B38EB_inline(L_2, NULL);
		__this->___shared_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shared_2), (void*)L_3);
		KdfParameters_tDDC5A4A75A5909F80507E6486C806E9B4DCCDB74* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = KdfParameters_GetIV_m9E5FE64A81DC7B69E03109572863DEE103FEEEEB_inline(L_4, NULL);
		__this->___iv_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iv_3), (void*)L_5);
		return;
	}

IL_0028:
	{
		RuntimeObject* L_6 = ___parameters0;
		if (!((Iso18033KdfParameters_t435295BD3FF4961A3F72F01DE4183C5AE4F4FB2D*)IsInstClass((RuntimeObject*)L_6, Iso18033KdfParameters_t435295BD3FF4961A3F72F01DE4183C5AE4F4FB2D_il2cpp_TypeInfo_var)))
		{
			goto IL_004b;
		}
	}
	{
		RuntimeObject* L_7 = ___parameters0;
		V_1 = ((Iso18033KdfParameters_t435295BD3FF4961A3F72F01DE4183C5AE4F4FB2D*)CastclassClass((RuntimeObject*)L_7, Iso18033KdfParameters_t435295BD3FF4961A3F72F01DE4183C5AE4F4FB2D_il2cpp_TypeInfo_var));
		Iso18033KdfParameters_t435295BD3FF4961A3F72F01DE4183C5AE4F4FB2D* L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = Iso18033KdfParameters_GetSeed_mF93FDBB9B4F20C42A33D8EFCD4E75B22B8623A25_inline(L_8, NULL);
		__this->___shared_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shared_2), (void*)L_9);
		__this->___iv_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iv_3), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		return;
	}

IL_004b:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC166909EC442464ACBD6CBD2C6FC0BCBDD162685)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseKdfBytesGenerator_Init_m262B79DE13BA7666FD510AD7A2184976DD68B0B0_RuntimeMethod_var)));
	}
}
// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Generators.BaseKdfBytesGenerator::get_Digest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseKdfBytesGenerator_get_Digest_m31A5455646883DF7F0DCD9742268E6156306D5C9 (BaseKdfBytesGenerator_tB5CF0010BA5BA9A731413B7834EE9298704D9DB0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___digest_1;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Generators.BaseKdfBytesGenerator::GenerateBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseKdfBytesGenerator_GenerateBytes_mD4C6671BBCF43F1F3E78B8E89B6517D2030D4888 (BaseKdfBytesGenerator_tB5CF0010BA5BA9A731413B7834EE9298704D9DB0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	uint8_t V_8 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output0;
		int32_t L_1 = ___length2;
		int32_t L_2 = ___outOff1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), L_1))) >= ((int32_t)L_2)))
		{
			goto IL_0013;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_3 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE4D91A275D1835BB2A2111D76DB36CDDDAD83699)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseKdfBytesGenerator_GenerateBytes_mD4C6671BBCF43F1F3E78B8E89B6517D2030D4888_RuntimeMethod_var)));
	}

IL_0013:
	{
		int32_t L_4 = ___length2;
		V_0 = ((int64_t)L_4);
		RuntimeObject* L_5 = __this->___digest_1;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::GetDigestSize() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
		int64_t L_7 = V_0;
		if ((((int64_t)L_7) <= ((int64_t)((int64_t)8589934591LL))))
		{
			goto IL_0039;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral87AE6FB8B54C63D0A935F46427CA402CAF342664)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseKdfBytesGenerator_GenerateBytes_mD4C6671BBCF43F1F3E78B8E89B6517D2030D4888_RuntimeMethod_var)));
	}

IL_0039:
	{
		int64_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_1;
		V_2 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(L_9, ((int64_t)L_10))), ((int64_t)1)))/((int64_t)L_11))));
		RuntimeObject* L_12 = __this->___digest_1;
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::GetDigestSize() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_13);
		V_3 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		V_4 = L_15;
		int32_t L_16 = __this->___counterStart_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_4;
		Pack_UInt32_To_BE_mE84FDF81208D1EDC3A1877615A9506EC0C0A4E21(L_16, L_17, 0, NULL);
		int32_t L_18 = __this->___counterStart_0;
		V_5 = ((int32_t)(L_18&((int32_t)-256)));
		V_6 = 0;
		goto IL_012e;
	}

IL_0082:
	{
		RuntimeObject* L_19 = __this->___digest_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___shared_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___shared_2;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_19, L_20, 0, ((int32_t)(((RuntimeArray*)L_21)->max_length)));
		RuntimeObject* L_22 = __this->___digest_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_4;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_22, L_23, 0, 4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___iv_3;
		if (!L_24)
		{
			goto IL_00cd;
		}
	}
	{
		RuntimeObject* L_25 = __this->___digest_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___iv_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___iv_3;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_25, L_26, 0, ((int32_t)(((RuntimeArray*)L_27)->max_length)));
	}

IL_00cd:
	{
		RuntimeObject* L_28 = __this->___digest_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_3;
		int32_t L_30;
		L_30 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_28, L_29, 0);
		int32_t L_31 = ___length2;
		int32_t L_32 = V_1;
		if ((((int32_t)L_31) <= ((int32_t)L_32)))
		{
			goto IL_00f5;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___output0;
		int32_t L_35 = ___outOff1;
		int32_t L_36 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_33, 0, (RuntimeArray*)L_34, L_35, L_36, NULL);
		int32_t L_37 = ___outOff1;
		int32_t L_38 = V_1;
		___outOff1 = ((int32_t)il2cpp_codegen_add(L_37, L_38));
		int32_t L_39 = ___length2;
		int32_t L_40 = V_1;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
		goto IL_00ff;
	}

IL_00f5:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___output0;
		int32_t L_43 = ___outOff1;
		int32_t L_44 = ___length2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_41, 0, (RuntimeArray*)L_42, L_43, L_44, NULL);
	}

IL_00ff:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = L_45;
		V_7 = L_46;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = V_7;
		int32_t L_48 = 3;
		uint8_t L_49 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		int32_t L_50 = ((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, 1)));
		V_8 = (uint8_t)L_50;
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint8_t)L_50);
		uint8_t L_51 = V_8;
		if (L_51)
		{
			goto IL_0128;
		}
	}
	{
		uint32_t L_52 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, ((int32_t)256)));
		uint32_t L_53 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_4;
		Pack_UInt32_To_BE_mE84FDF81208D1EDC3A1877615A9506EC0C0A4E21(L_53, L_54, 0, NULL);
	}

IL_0128:
	{
		int32_t L_55 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_012e:
	{
		int32_t L_56 = V_6;
		int32_t L_57 = V_2;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_0082;
		}
	}
	{
		RuntimeObject* L_58 = __this->___digest_1;
		InterfaceActionInvoker0::Invoke(6 /* System.Void Org.BouncyCastle.Crypto.IDigest::Reset() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_58);
		int64_t L_59 = V_0;
		return ((int32_t)L_59);
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
// System.Void Org.BouncyCastle.Crypto.Generators.BCrypt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt__ctor_m43768951D1E74FC38A359C42E47E0DAB270CE72F (BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->___S_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___S_16), (void*)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		__this->___P_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___P_17), (void*)L_1);
		return;
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Generators.BCrypt::F(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t BCrypt_F_m97ACAD4F39F7B85F756D239ADF9E3F420854B733 (BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1* __this, uint32_t ___x0, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___S_16;
		uint32_t L_1 = ___x0;
		uintptr_t L_2 = ((uintptr_t)((int32_t)((uint32_t)L_1>>((int32_t)24))));
		uint32_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->___S_16;
		uint32_t L_5 = ___x0;
		uintptr_t L_6 = ((uintptr_t)((int32_t)il2cpp_codegen_add(((int32_t)256), ((int32_t)(((int32_t)((uint32_t)L_5>>((int32_t)16)))&((int32_t)255))))));
		uint32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->___S_16;
		uint32_t L_9 = ___x0;
		uintptr_t L_10 = ((uintptr_t)((int32_t)il2cpp_codegen_add(((int32_t)512), ((int32_t)(((int32_t)((uint32_t)L_9>>8))&((int32_t)255))))));
		uint32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = __this->___S_16;
		uint32_t L_13 = ___x0;
		uintptr_t L_14 = ((uintptr_t)((int32_t)il2cpp_codegen_add(((int32_t)768), ((int32_t)((int32_t)L_13&((int32_t)255))))));
		uint32_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_7))^(int32_t)L_11)), (int32_t)L_15));
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.BCrypt::ProcessTable(System.UInt32,System.UInt32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt_ProcessTable_mF7A723C08384CF5254FBDC9C07A536E3D00CC459 (BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1* __this, uint32_t ___xl0, uint32_t ___xr1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___table2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___table2;
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		V_1 = 0;
		goto IL_006e;
	}

IL_0008:
	{
		uint32_t L_1 = ___xl0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___P_17;
		int32_t L_3 = 0;
		uint32_t L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		___xl0 = ((int32_t)((int32_t)L_1^(int32_t)L_4));
		V_2 = 1;
		goto IL_0046;
	}

IL_0018:
	{
		uint32_t L_5 = ___xr1;
		uint32_t L_6 = ___xl0;
		uint32_t L_7;
		L_7 = BCrypt_F_m97ACAD4F39F7B85F756D239ADF9E3F420854B733(__this, L_6, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->___P_17;
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		uint32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		___xr1 = ((int32_t)((int32_t)L_5^((int32_t)((int32_t)L_7^(int32_t)L_11))));
		uint32_t L_12 = ___xl0;
		uint32_t L_13 = ___xr1;
		uint32_t L_14;
		L_14 = BCrypt_F_m97ACAD4F39F7B85F756D239ADF9E3F420854B733(__this, L_13, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = __this->___P_17;
		int32_t L_16 = V_2;
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		uint32_t L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		___xl0 = ((int32_t)((int32_t)L_12^((int32_t)((int32_t)L_14^(int32_t)L_18))));
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 2));
	}

IL_0046:
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)16))))
		{
			goto IL_0018;
		}
	}
	{
		uint32_t L_21 = ___xr1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = __this->___P_17;
		int32_t L_23 = ((int32_t)17);
		uint32_t L_24 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		___xr1 = ((int32_t)((int32_t)L_21^(int32_t)L_24));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___table2;
		int32_t L_26 = V_1;
		uint32_t L_27 = ___xr1;
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (uint32_t)L_27);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___table2;
		int32_t L_29 = V_1;
		uint32_t L_30 = ___xl0;
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, 1))), (uint32_t)L_30);
		uint32_t L_31 = ___xl0;
		___xr1 = L_31;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = ___table2;
		int32_t L_33 = V_1;
		int32_t L_34 = L_33;
		uint32_t L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		___xl0 = L_35;
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 2));
	}

IL_006e:
	{
		int32_t L_37 = V_1;
		int32_t L_38 = V_0;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.BCrypt::InitState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt_InitState_m1C9DA365C38392A8CD0DA667398C3B8175FBB9FD (BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___KS0_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->___S_16;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, 0, ((int32_t)256), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___KS1_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___S_16;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, ((int32_t)256), ((int32_t)256), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___KS2_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = __this->___S_16;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, ((int32_t)512), ((int32_t)256), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___KS3_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = __this->___S_16;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, ((int32_t)768), ((int32_t)256), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___KP_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = __this->___P_17;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, ((int32_t)18), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.BCrypt::CyclicXorKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt_CyclicXorKey_mF0F811DDFCBBF1F1265DB0A4877916BD8248195A (BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___key0;
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		V_1 = 0;
		V_2 = 0;
		goto IL_0047;
	}

IL_000a:
	{
		V_3 = 0;
		V_4 = 0;
		goto IL_0029;
	}

IL_0011:
	{
		uint32_t L_1 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___key0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = ((int32_t)(((int32_t)((int32_t)L_1<<8))|(int32_t)L_5));
		int32_t L_6 = V_1;
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		V_1 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0023;
		}
	}
	{
		V_1 = 0;
	}

IL_0023:
	{
		int32_t L_9 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0029:
	{
		int32_t L_10 = V_4;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_0011;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = __this->___P_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11;
		V_5 = L_12;
		int32_t L_13 = V_2;
		int32_t L_14 = L_13;
		V_6 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_5;
		intptr_t L_16 = V_6;
		intptr_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		uint32_t L_19 = V_3;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (uint32_t)((int32_t)((int32_t)L_18^(int32_t)L_19)));
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0047:
	{
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)18))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Generators.BCrypt::EncryptMagicString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BCrypt_EncryptMagicString_mD46EFB44F6C40523B6480E4CA5EBEC0A81FD5C2C (BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)6);
		V_7 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = V_7;
		il2cpp_codegen_runtime_class_init_inline(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___MAGIC_STRING_10;
		int32_t L_3 = 0;
		uint32_t L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___MAGIC_STRING_10;
		int32_t L_7 = 1;
		uint32_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___MAGIC_STRING_10;
		int32_t L_11 = 2;
		uint32_t L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___MAGIC_STRING_10;
		int32_t L_15 = 3;
		uint32_t L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___MAGIC_STRING_10;
		int32_t L_19 = 4;
		uint32_t L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_20);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___MAGIC_STRING_10;
		int32_t L_23 = 5;
		uint32_t L_24 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_24);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_7;
		V_0 = L_25;
		V_1 = 0;
		goto IL_00ce;
	}

IL_0051:
	{
		V_2 = 0;
		goto IL_00c6;
	}

IL_0055:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_0;
		int32_t L_27 = V_2;
		int32_t L_28 = L_27;
		uint32_t L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		V_3 = L_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_0;
		int32_t L_31 = V_2;
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		uint32_t L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		V_4 = L_33;
		uint32_t L_34 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = __this->___P_17;
		int32_t L_36 = 0;
		uint32_t L_37 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
		V_3 = ((int32_t)((int32_t)L_34^(int32_t)L_37));
		V_5 = 1;
		goto IL_00a3;
	}

IL_0070:
	{
		uint32_t L_38 = V_4;
		uint32_t L_39 = V_3;
		uint32_t L_40;
		L_40 = BCrypt_F_m97ACAD4F39F7B85F756D239ADF9E3F420854B733(__this, L_39, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = __this->___P_17;
		int32_t L_42 = V_5;
		int32_t L_43 = L_42;
		uint32_t L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		V_4 = ((int32_t)((int32_t)L_38^((int32_t)((int32_t)L_40^(int32_t)L_44))));
		uint32_t L_45 = V_3;
		uint32_t L_46 = V_4;
		uint32_t L_47;
		L_47 = BCrypt_F_m97ACAD4F39F7B85F756D239ADF9E3F420854B733(__this, L_46, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = __this->___P_17;
		int32_t L_49 = V_5;
		int32_t L_50 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		uint32_t L_51 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		V_3 = ((int32_t)((int32_t)L_45^((int32_t)((int32_t)L_47^(int32_t)L_51))));
		int32_t L_52 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_52, 2));
	}

IL_00a3:
	{
		int32_t L_53 = V_5;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)16))))
		{
			goto IL_0070;
		}
	}
	{
		uint32_t L_54 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = __this->___P_17;
		int32_t L_56 = ((int32_t)17);
		uint32_t L_57 = (L_55)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_4 = ((int32_t)((int32_t)L_54^(int32_t)L_57));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = V_0;
		int32_t L_59 = V_2;
		uint32_t L_60 = V_4;
		(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59), (uint32_t)L_60);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = V_0;
		int32_t L_62 = V_2;
		uint32_t L_63 = V_3;
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_62, 1))), (uint32_t)L_63);
		int32_t L_64 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_64, 2));
	}

IL_00c6:
	{
		int32_t L_65 = V_2;
		if ((((int32_t)L_65) < ((int32_t)6)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_66 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_00ce:
	{
		int32_t L_67 = V_1;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)64))))
		{
			goto IL_0051;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		V_6 = L_68;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = V_6;
		Pack_UInt32_To_BE_m1C17AB1A6CDD4A4C8B4D8F3102F1A4B7B819E237(L_69, L_70, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_71, 0, ((int32_t)(((RuntimeArray*)L_72)->max_length)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = __this->___P_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = __this->___P_17;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_73, 0, ((int32_t)(((RuntimeArray*)L_74)->max_length)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = __this->___S_16;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = __this->___S_16;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_75, 0, ((int32_t)(((RuntimeArray*)L_76)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = V_6;
		return L_77;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.BCrypt::ProcessTableWithSalt(System.UInt32[],System.UInt32[],System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt_ProcessTableWithSalt_m6AE6A7B09092A07810186995308ABC05C8E7C492 (BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___table0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___salt32Bit1, uint32_t ___iv12, uint32_t ___iv23, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		uint32_t L_0 = ___iv12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___salt32Bit1;
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((int32_t)((int32_t)L_0^(int32_t)L_3));
		uint32_t L_4 = ___iv23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___salt32Bit1;
		int32_t L_6 = 1;
		uint32_t L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = ((int32_t)((int32_t)L_4^(int32_t)L_7));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___table0;
		V_4 = ((int32_t)(((RuntimeArray*)L_8)->max_length));
		V_5 = 0;
		goto IL_00ff;
	}

IL_001a:
	{
		uint32_t L_9 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___P_17;
		int32_t L_11 = 0;
		uint32_t L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = ((int32_t)((int32_t)L_9^(int32_t)L_12));
		V_6 = 1;
		goto IL_005a;
	}

IL_002a:
	{
		uint32_t L_13 = V_1;
		uint32_t L_14 = V_0;
		uint32_t L_15;
		L_15 = BCrypt_F_m97ACAD4F39F7B85F756D239ADF9E3F420854B733(__this, L_14, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = __this->___P_17;
		int32_t L_17 = V_6;
		int32_t L_18 = L_17;
		uint32_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		V_1 = ((int32_t)((int32_t)L_13^((int32_t)((int32_t)L_15^(int32_t)L_19))));
		uint32_t L_20 = V_0;
		uint32_t L_21 = V_1;
		uint32_t L_22;
		L_22 = BCrypt_F_m97ACAD4F39F7B85F756D239ADF9E3F420854B733(__this, L_21, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = __this->___P_17;
		int32_t L_24 = V_6;
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		uint32_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int32_t)((int32_t)L_20^((int32_t)((int32_t)L_22^(int32_t)L_26))));
		int32_t L_27 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_27, 2));
	}

IL_005a:
	{
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) < ((int32_t)((int32_t)16))))
		{
			goto IL_002a;
		}
	}
	{
		uint32_t L_29 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = __this->___P_17;
		int32_t L_31 = ((int32_t)17);
		uint32_t L_32 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		V_1 = ((int32_t)((int32_t)L_29^(int32_t)L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___table0;
		int32_t L_34 = V_5;
		uint32_t L_35 = V_1;
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34), (uint32_t)L_35);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___table0;
		int32_t L_37 = V_5;
		uint32_t L_38 = V_0;
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_37, 1))), (uint32_t)L_38);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___salt32Bit1;
		int32_t L_40 = 2;
		uint32_t L_41 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		uint32_t L_42 = V_1;
		V_2 = ((int32_t)((int32_t)L_41^(int32_t)L_42));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___salt32Bit1;
		int32_t L_44 = 3;
		uint32_t L_45 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		uint32_t L_46 = V_0;
		V_3 = ((int32_t)((int32_t)L_45^(int32_t)L_46));
		int32_t L_47 = V_5;
		int32_t L_48 = V_4;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_47, 2))) < ((int32_t)L_48)))
		{
			goto IL_008d;
		}
	}
	{
		return;
	}

IL_008d:
	{
		uint32_t L_49 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = __this->___P_17;
		int32_t L_51 = 0;
		uint32_t L_52 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		V_2 = ((int32_t)((int32_t)L_49^(int32_t)L_52));
		V_7 = 1;
		goto IL_00cd;
	}

IL_009d:
	{
		uint32_t L_53 = V_3;
		uint32_t L_54 = V_2;
		uint32_t L_55;
		L_55 = BCrypt_F_m97ACAD4F39F7B85F756D239ADF9E3F420854B733(__this, L_54, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = __this->___P_17;
		int32_t L_57 = V_7;
		int32_t L_58 = L_57;
		uint32_t L_59 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		V_3 = ((int32_t)((int32_t)L_53^((int32_t)((int32_t)L_55^(int32_t)L_59))));
		uint32_t L_60 = V_2;
		uint32_t L_61 = V_3;
		uint32_t L_62;
		L_62 = BCrypt_F_m97ACAD4F39F7B85F756D239ADF9E3F420854B733(__this, L_61, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = __this->___P_17;
		int32_t L_64 = V_7;
		int32_t L_65 = ((int32_t)il2cpp_codegen_add(L_64, 1));
		uint32_t L_66 = (L_63)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		V_2 = ((int32_t)((int32_t)L_60^((int32_t)((int32_t)L_62^(int32_t)L_66))));
		int32_t L_67 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_67, 2));
	}

IL_00cd:
	{
		int32_t L_68 = V_7;
		if ((((int32_t)L_68) < ((int32_t)((int32_t)16))))
		{
			goto IL_009d;
		}
	}
	{
		uint32_t L_69 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = __this->___P_17;
		int32_t L_71 = ((int32_t)17);
		uint32_t L_72 = (L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71));
		V_3 = ((int32_t)((int32_t)L_69^(int32_t)L_72));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ___table0;
		int32_t L_74 = V_5;
		uint32_t L_75 = V_3;
		(L_73)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_74, 2))), (uint32_t)L_75);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = ___table0;
		int32_t L_77 = V_5;
		uint32_t L_78 = V_2;
		(L_76)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_77, 3))), (uint32_t)L_78);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = ___salt32Bit1;
		int32_t L_80 = 0;
		uint32_t L_81 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_80));
		uint32_t L_82 = V_3;
		V_0 = ((int32_t)((int32_t)L_81^(int32_t)L_82));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ___salt32Bit1;
		int32_t L_84 = 1;
		uint32_t L_85 = (L_83)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_84));
		uint32_t L_86 = V_2;
		V_1 = ((int32_t)((int32_t)L_85^(int32_t)L_86));
		int32_t L_87 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_87, 4));
	}

IL_00ff:
	{
		int32_t L_88 = V_5;
		int32_t L_89 = V_4;
		if ((((int32_t)L_88) < ((int32_t)L_89)))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Generators.BCrypt::DeriveRawKey(System.Int32,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BCrypt_DeriveRawKey_m8DD9ECD5BCA259C41FF5AC4822FD59A82507B7DA (BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1* __this, int32_t ___cost0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___psw2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___salt1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)((int32_t)16))))
		{
			goto IL_0012;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_1 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD29A0745DECCA38535B34701FDDA4A1747B44B62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BCrypt_DeriveRawKey_m8DD9ECD5BCA259C41FF5AC4822FD59A82507B7DA_RuntimeMethod_var)));
	}

IL_0012:
	{
		int32_t L_2 = ___cost0;
		if ((((int32_t)L_2) < ((int32_t)4)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_3 = ___cost0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)31))))
		{
			goto IL_002b;
		}
	}

IL_001b:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9D1AC87CE57275452262EAAEB65A1D483D04022)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF62F9B16DDAB52D1FD2A5190F69FAD0D9B7A1AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BCrypt_DeriveRawKey_m8DD9ECD5BCA259C41FF5AC4822FD59A82507B7DA_RuntimeMethod_var)));
	}

IL_002b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___psw2;
		if (((int32_t)(((RuntimeArray*)L_5)->max_length)))
		{
			goto IL_0038;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		___psw2 = L_6;
	}

IL_0038:
	{
		BCrypt_InitState_m1C9DA365C38392A8CD0DA667398C3B8175FBB9FD(__this, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___salt1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		Pack_BE_To_UInt32_m1C3449DE7AAA30B61CED7CEEB2160B8308A7EE3D(L_8, 0, L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___salt1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)));
		V_1 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		int32_t L_14 = 2;
		uint32_t L_15 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		int32_t L_18 = 3;
		uint32_t L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_0;
		int32_t L_22 = 0;
		uint32_t L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_0;
		int32_t L_26 = 1;
		uint32_t L_27 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___psw2;
		BCrypt_CyclicXorKey_mF0F811DDFCBBF1F1265DB0A4877916BD8248195A(__this, L_28, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = __this->___P_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_0;
		BCrypt_ProcessTableWithSalt_m6AE6A7B09092A07810186995308ABC05C8E7C492(__this, L_29, L_30, 0, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_31, 0, ((int32_t)(((RuntimeArray*)L_32)->max_length)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = __this->___S_16;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = __this->___P_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = __this->___P_17;
		int32_t L_37 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_36)->max_length)), 2));
		uint32_t L_38 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = __this->___P_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = __this->___P_17;
		int32_t L_41 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_40)->max_length)), 1));
		uint32_t L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		BCrypt_ProcessTableWithSalt_m6AE6A7B09092A07810186995308ABC05C8E7C492(__this, L_33, L_34, L_38, L_42, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_1;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_43, 0, ((int32_t)(((RuntimeArray*)L_44)->max_length)), NULL);
		int32_t L_45 = ___cost0;
		V_2 = ((int32_t)(1<<((int32_t)(L_45&((int32_t)31)))));
		V_3 = 0;
		goto IL_013c;
	}

IL_00d2:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___psw2;
		BCrypt_CyclicXorKey_mF0F811DDFCBBF1F1265DB0A4877916BD8248195A(__this, L_46, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = __this->___P_17;
		BCrypt_ProcessTable_mF7A723C08384CF5254FBDC9C07A536E3D00CC459(__this, 0, 0, L_47, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = __this->___P_17;
		int32_t L_49 = ((int32_t)16);
		uint32_t L_50 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = __this->___P_17;
		int32_t L_52 = ((int32_t)17);
		uint32_t L_53 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = __this->___S_16;
		BCrypt_ProcessTable_mF7A723C08384CF5254FBDC9C07A536E3D00CC459(__this, L_50, L_53, L_54, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = ___salt1;
		BCrypt_CyclicXorKey_mF0F811DDFCBBF1F1265DB0A4877916BD8248195A(__this, L_55, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = __this->___P_17;
		BCrypt_ProcessTable_mF7A723C08384CF5254FBDC9C07A536E3D00CC459(__this, 0, 0, L_56, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = __this->___P_17;
		int32_t L_58 = ((int32_t)16);
		uint32_t L_59 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = __this->___P_17;
		int32_t L_61 = ((int32_t)17);
		uint32_t L_62 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = __this->___S_16;
		BCrypt_ProcessTable_mF7A723C08384CF5254FBDC9C07A536E3D00CC459(__this, L_59, L_62, L_63, NULL);
		int32_t L_64 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_013c:
	{
		int32_t L_65 = V_3;
		int32_t L_66 = V_2;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
		{
			goto IL_00d2;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67;
		L_67 = BCrypt_EncryptMagicString_mD46EFB44F6C40523B6480E4CA5EBEC0A81FD5C2C(__this, NULL);
		return L_67;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Generators.BCrypt::PasswordToByteArray(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BCrypt_PasswordToByteArray_mE5417E22BFCA7B22065F5B0633F28BAAD8EB8BD7 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___password0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___password0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Strings_ToUtf8ByteArray_mFFAE552B9CF01A933ECE2F97ECFCAFE0F4A9EAA7(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Arrays_Append_m14C1127C18DC18A7CBAF6568E8F6B11451CBA8E5(L_1, (uint8_t)0, NULL);
		return L_2;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Generators.BCrypt::Generate(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BCrypt_Generate_mE8E037F07448434ECAE70BB99108A9A7A7D2E795 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___password0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___salt1, int32_t ___cost2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___password0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BCrypt_Generate_mE8E037F07448434ECAE70BB99108A9A7A7D2E795_RuntimeMethod_var)));
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___password0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) <= ((int32_t)((int32_t)72))))
		{
			goto IL_0025;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1D039B17220DCC63B1682882E707BF1A62CD1819)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8F97FBA9104D1EA5047948E6DFB67FACD9F5B73)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BCrypt_Generate_mE8E037F07448434ECAE70BB99108A9A7A7D2E795_RuntimeMethod_var)));
	}

IL_0025:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___salt1;
		if (L_4)
		{
			goto IL_0033;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral842B8C7345E8AE5608EE332378D4489B8AF9C37C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BCrypt_Generate_mE8E037F07448434ECAE70BB99108A9A7A7D2E795_RuntimeMethod_var)));
	}

IL_0033:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___salt1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)((int32_t)16))))
		{
			goto IL_004a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0E93D67C22CC3A3BA7D4AD7D107D998DB5485573)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral842B8C7345E8AE5608EE332378D4489B8AF9C37C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BCrypt_Generate_mE8E037F07448434ECAE70BB99108A9A7A7D2E795_RuntimeMethod_var)));
	}

IL_004a:
	{
		int32_t L_8 = ___cost2;
		if ((((int32_t)L_8) < ((int32_t)4)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_9 = ___cost2;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)31))))
		{
			goto IL_0063;
		}
	}

IL_0053:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9412DA949FDA472A18977665A0D1DE46BD6C5A31)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF62F9B16DDAB52D1FD2A5190F69FAD0D9B7A1AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BCrypt_Generate_mE8E037F07448434ECAE70BB99108A9A7A7D2E795_RuntimeMethod_var)));
	}

IL_0063:
	{
		BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1* L_11 = (BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1*)il2cpp_codegen_object_new(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var);
		BCrypt__ctor_m43768951D1E74FC38A359C42E47E0DAB270CE72F(L_11, NULL);
		int32_t L_12 = ___cost2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___salt1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___password0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = BCrypt_DeriveRawKey_m8DD9ECD5BCA259C41FF5AC4822FD59A82507B7DA(L_11, L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.BCrypt::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BCrypt__cctor_mD338A488ADA22F84B6C7396CC3FD05FC95030096 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600183eU2D1_154_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600183eU2D2_155_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600183eU2D3_156_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600183eU2D4_157_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600183eU2D5_158_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600183eU2D6_159_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)6);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600183eU2D1_154_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___MAGIC_STRING_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___MAGIC_STRING_10), (void*)L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600183eU2D2_155_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_4, L_5, NULL);
		((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___KP_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___KP_11), (void*)L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600183eU2D3_156_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_7, L_8, NULL);
		((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___KS0_12 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___KS0_12), (void*)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600183eU2D4_157_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_10, L_11, NULL);
		((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___KS1_13 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___KS1_13), (void*)L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600183eU2D5_158_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_13, L_14, NULL);
		((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___KS2_14 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___KS2_14), (void*)L_13);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600183eU2D6_159_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_16, L_17, NULL);
		((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___KS3_15 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_StaticFields*)il2cpp_codegen_static_fields_for(BCrypt_t51BDFA0EFEE8379D3EA3D12CE59C8E39F033CED1_il2cpp_TypeInfo_var))->___KS3_15), (void*)L_16);
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
// System.Void Org.BouncyCastle.Crypto.CipherKeyGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherKeyGenerator__ctor_m6DA6819F87188DE9B3166802300E02D42129CB3C (CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8* __this, const RuntimeMethod* method) 
{
	{
		__this->___uninitialised_2 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.CipherKeyGenerator::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherKeyGenerator__ctor_m1F422CE56D811BB286A6FAD17E3EDEE537BDE0CF (CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8* __this, int32_t ___defaultStrength0, const RuntimeMethod* method) 
{
	{
		__this->___uninitialised_2 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___defaultStrength0;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE3577C2D5B36A10E4CFD76E58010316ACDBA11CA)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBAC92D9C5274BA983C9BF2497B80EDFD56A9A45B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CipherKeyGenerator__ctor_m1F422CE56D811BB286A6FAD17E3EDEE537BDE0CF_RuntimeMethod_var)));
	}

IL_0021:
	{
		int32_t L_2 = ___defaultStrength0;
		__this->___defaultStrength_3 = L_2;
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.CipherKeyGenerator::get_DefaultStrength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CipherKeyGenerator_get_DefaultStrength_m5ADBE3DDE439399E0CA31B4C6A70E8F5C7633403 (CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___defaultStrength_3;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.CipherKeyGenerator::Init(Org.BouncyCastle.Crypto.KeyGenerationParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherKeyGenerator_Init_m611CC686855388348DD65E7808633766F437BA91 (CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8* __this, KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* ___parameters0, const RuntimeMethod* method) 
{
	{
		KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* L_0 = ___parameters0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CipherKeyGenerator_Init_m611CC686855388348DD65E7808633766F437BA91_RuntimeMethod_var)));
	}

IL_000e:
	{
		__this->___uninitialised_2 = (bool)0;
		KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* L_2 = ___parameters0;
		VirtualActionInvoker1< KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.CipherKeyGenerator::engineInit(Org.BouncyCastle.Crypto.KeyGenerationParameters) */, __this, L_2);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.CipherKeyGenerator::engineInit(Org.BouncyCastle.Crypto.KeyGenerationParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherKeyGenerator_engineInit_mC32F08C1D39AFE2CDFD1987645F6E23090FD36CB (CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8* __this, KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* ___parameters0, const RuntimeMethod* method) 
{
	{
		KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* L_0 = ___parameters0;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_1;
		L_1 = KeyGenerationParameters_get_Random_m36DBFE034B9D03191BEE80E701349E930D856329_inline(L_0, NULL);
		__this->___random_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___random_0), (void*)L_1);
		KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* L_2 = ___parameters0;
		int32_t L_3;
		L_3 = KeyGenerationParameters_get_Strength_m64B79D8D5F0B4342E9E889828CDBC6515EDD5F38_inline(L_2, NULL);
		__this->___strength_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_3, 7))/8));
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.CipherKeyGenerator::GenerateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CipherKeyGenerator_GenerateKey_m91A868F2D8E3F0FCE84167DCF6752C9FA1C1FFE7 (CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___uninitialised_2;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_1 = __this->___defaultStrength_3;
		if ((((int32_t)L_1) >= ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral978EECA9ABC74122106B2C37B1689846FCF19CDC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CipherKeyGenerator_GenerateKey_m91A868F2D8E3F0FCE84167DCF6752C9FA1C1FFE7_RuntimeMethod_var)));
	}

IL_001c:
	{
		__this->___uninitialised_2 = (bool)0;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_3 = (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076*)il2cpp_codegen_object_new(SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		SecureRandom__ctor_m1FB3C478CD5CC4CDF68C981D8F5F89FC8EF8CC68(L_3, NULL);
		int32_t L_4 = __this->___defaultStrength_3;
		KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* L_5 = (KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C*)il2cpp_codegen_object_new(KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C_il2cpp_TypeInfo_var);
		KeyGenerationParameters__ctor_m182784153870470BFD6E41334E1FCE2B2B23DB4D(L_5, L_3, L_4, NULL);
		VirtualActionInvoker1< KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.CipherKeyGenerator::engineInit(Org.BouncyCastle.Crypto.KeyGenerationParameters) */, __this, L_5);
	}

IL_0039:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(5 /* System.Byte[] Org.BouncyCastle.Crypto.CipherKeyGenerator::engineGenerateKey() */, __this);
		return L_6;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.CipherKeyGenerator::engineGenerateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CipherKeyGenerator_engineGenerateKey_m7B75E160CA2A226437D551254C122E55B9EC2FCA (CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_0 = __this->___random_0;
		int32_t L_1 = __this->___strength_1;
		il2cpp_codegen_runtime_class_init_inline(SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = SecureRandom_GetNextBytes_mE0347E8E3D808C7B52FFA03292E71CF5C16CF47C(L_0, L_1, NULL);
		return L_2;
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
// System.Void Org.BouncyCastle.Crypto.Generators.DesKeyGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesKeyGenerator__ctor_m6C2CC75C1281ADF1002385730795D2199920016D (DesKeyGenerator_tBAB68A4D64B09772D67853355B3C7DE1C19B916A* __this, const RuntimeMethod* method) 
{
	{
		CipherKeyGenerator__ctor_m6DA6819F87188DE9B3166802300E02D42129CB3C(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.DesKeyGenerator::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesKeyGenerator__ctor_m00DC07BE96744CC33CA7D4C68DC94DE38ABA1F79 (DesKeyGenerator_tBAB68A4D64B09772D67853355B3C7DE1C19B916A* __this, int32_t ___defaultStrength0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___defaultStrength0;
		CipherKeyGenerator__ctor_m1F422CE56D811BB286A6FAD17E3EDEE537BDE0CF(__this, L_0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.DesKeyGenerator::engineInit(Org.BouncyCastle.Crypto.KeyGenerationParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesKeyGenerator_engineInit_m356FEE5A8DDE9709BA20A8EDB7A5A67B846F7E46 (DesKeyGenerator_tBAB68A4D64B09772D67853355B3C7DE1C19B916A* __this, KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* ___parameters0, const RuntimeMethod* method) 
{
	{
		KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* L_0 = ___parameters0;
		CipherKeyGenerator_engineInit_mC32F08C1D39AFE2CDFD1987645F6E23090FD36CB(__this, L_0, NULL);
		int32_t L_1 = ((CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8*)__this)->___strength_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = ((CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8*)__this)->___strength_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)7))))
		{
			goto IL_0020;
		}
	}

IL_0018:
	{
		((CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8*)__this)->___strength_1 = 8;
		return;
	}

IL_0020:
	{
		int32_t L_3 = ((CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8*)__this)->___strength_1;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_4 = ((int32_t)64);
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00E17AA822A314AE294BF98E0FD95C91DD7E6B1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral302E958A42046957586D826FC43C186BE0800772)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DesKeyGenerator_engineInit_m356FEE5A8DDE9709BA20A8EDB7A5A67B846F7E46_RuntimeMethod_var)));
	}

IL_0045:
	{
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Generators.DesKeyGenerator::engineGenerateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DesKeyGenerator_engineGenerateKey_m8E9ED4D377F09E997580DD26C0606C9F2B25AB84 (DesKeyGenerator_tBAB68A4D64B09772D67853355B3C7DE1C19B916A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DesParameters_t8EA9EFFDCADA80E63DC387F7204BAC6D3ADC590E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
	}

IL_0007:
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_1 = ((CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8*)__this)->___random_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_1, L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DesParameters_t8EA9EFFDCADA80E63DC387F7204BAC6D3ADC590E_il2cpp_TypeInfo_var);
		DesParameters_SetOddParity_m9170FA68AA12F87D0FF0369D176CCBEBC8A268B7(L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		bool L_5;
		L_5 = DesParameters_IsWeakKey_m1E9CD7AAD84247251BC9F2F6D7BF52C2AC1B6A30(L_4, 0, NULL);
		if (L_5)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		return L_6;
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
// System.Void Org.BouncyCastle.Crypto.Generators.DesEdeKeyGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesEdeKeyGenerator__ctor_m93350DD3097C9F2D47843200A598269F6C52C9E8 (DesEdeKeyGenerator_tD6C8851E6C52260AF3A4BECD6D815BEE3450A052* __this, const RuntimeMethod* method) 
{
	{
		DesKeyGenerator__ctor_m6C2CC75C1281ADF1002385730795D2199920016D(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.DesEdeKeyGenerator::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesEdeKeyGenerator__ctor_mC43FA6BABD39559ABF9E77BE5B00F6C3BA7B59B9 (DesEdeKeyGenerator_tD6C8851E6C52260AF3A4BECD6D815BEE3450A052* __this, int32_t ___defaultStrength0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___defaultStrength0;
		DesKeyGenerator__ctor_m00DC07BE96744CC33CA7D4C68DC94DE38ABA1F79(__this, L_0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.DesEdeKeyGenerator::engineInit(Org.BouncyCastle.Crypto.KeyGenerationParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesEdeKeyGenerator_engineInit_m5418512B98E6E993B45675E6B7826F59CA0BD568 (DesEdeKeyGenerator_tD6C8851E6C52260AF3A4BECD6D815BEE3450A052* __this, KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* ___parameters0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* L_0 = ___parameters0;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_1;
		L_1 = KeyGenerationParameters_get_Random_m36DBFE034B9D03191BEE80E701349E930D856329_inline(L_0, NULL);
		((CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8*)__this)->___random_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8*)__this)->___random_0), (void*)L_1);
		KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* L_2 = ___parameters0;
		int32_t L_3;
		L_3 = KeyGenerationParameters_get_Strength_m64B79D8D5F0B4342E9E889828CDBC6515EDD5F38_inline(L_2, NULL);
		((CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8*)__this)->___strength_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_3, 7))/8));
		int32_t L_4 = ((CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8*)__this)->___strength_1;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_5 = ((CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8*)__this)->___strength_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)21)))))
		{
			goto IL_0037;
		}
	}

IL_002e:
	{
		((CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8*)__this)->___strength_1 = ((int32_t)24);
		return;
	}

IL_0037:
	{
		int32_t L_6 = ((CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8*)__this)->___strength_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_004a;
		}
	}
	{
		((CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8*)__this)->___strength_1 = ((int32_t)16);
		return;
	}

IL_004a:
	{
		int32_t L_7 = ((CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8*)__this)->___strength_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)24))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_8 = ((CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8*)__this)->___strength_1;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)16))))
		{
			goto IL_00a3;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)5);
		V_0 = L_9;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_0;
		ArrayElementTypeCheck (L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF61A75191EDC36E7F5B6029C933D4C764F147DE4)));
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF61A75191EDC36E7F5B6029C933D4C764F147DE4)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		int32_t L_12 = ((int32_t)192);
		RuntimeObject* L_13 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_12);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		ArrayElementTypeCheck (L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE885205DA2ED2F044021264F91527DF50C05E68)));
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE885205DA2ED2F044021264F91527DF50C05E68)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
		int32_t L_16 = ((int32_t)128);
		RuntimeObject* L_17 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_16);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = V_0;
		ArrayElementTypeCheck (L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral302E958A42046957586D826FC43C186BE0800772)));
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral302E958A42046957586D826FC43C186BE0800772)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_0;
		String_t* L_20;
		L_20 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_19, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DesEdeKeyGenerator_engineInit_m5418512B98E6E993B45675E6B7826F59CA0BD568_RuntimeMethod_var)));
	}

IL_00a3:
	{
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Generators.DesEdeKeyGenerator::engineGenerateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DesEdeKeyGenerator_engineGenerateKey_mC83C8DC7371C8776E9D3F5818CC39AEE99D713FA (DesEdeKeyGenerator_tD6C8851E6C52260AF3A4BECD6D815BEE3450A052* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DesParameters_t8EA9EFFDCADA80E63DC387F7204BAC6D3ADC590E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int32_t L_0 = ((CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8*)__this)->___strength_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
	}

IL_000c:
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_2 = ((CipherKeyGenerator_t7D796F6D7AA87BDC4E0A0D0F543057AB905316D8*)__this)->___random_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_2, L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DesParameters_t8EA9EFFDCADA80E63DC387F7204BAC6D3ADC590E_il2cpp_TypeInfo_var);
		DesParameters_SetOddParity_m9170FA68AA12F87D0FF0369D176CCBEBC8A268B7(L_4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		bool L_7;
		L_7 = DesEdeParameters_IsWeakKey_m9670B65435859E37CF3226CCD942550BF0B74C9D(L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		if (L_7)
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		bool L_9;
		L_9 = DesEdeParameters_IsRealEdeKey_m87234D9922F7BE358685C5A92810837C7B78A9DE(L_8, 0, NULL);
		if (!L_9)
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		return L_10;
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
// System.Void Org.BouncyCastle.Crypto.Generators.DHBasicKeyPairGenerator::Init(Org.BouncyCastle.Crypto.KeyGenerationParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHBasicKeyPairGenerator_Init_mB05944EB726D6A169F67081865DA7728E53EB8AF (DHBasicKeyPairGenerator_tAAE4307D6DA0B1CDADC133989D288DCD99202B8D* __this, KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* ___parameters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* L_0 = ___parameters0;
		__this->___param_0 = ((DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2*)CastclassClass((RuntimeObject*)L_0, DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___param_0), (void*)((DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2*)CastclassClass((RuntimeObject*)L_0, DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2_il2cpp_TypeInfo_var)));
		return;
	}
}
// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair Org.BouncyCastle.Crypto.Generators.DHBasicKeyPairGenerator::GenerateKeyPair()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsymmetricCipherKeyPair_tE06169950052884CD0AE97AB2CBA764E85D87EE5* DHBasicKeyPairGenerator_GenerateKeyPair_mC7328427B49D1EB0051DAF311AA095F9753B0C12 (DHBasicKeyPairGenerator_tAAE4307D6DA0B1CDADC133989D288DCD99202B8D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsymmetricCipherKeyPair_tE06169950052884CD0AE97AB2CBA764E85D87EE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DHPrivateKeyParameters_t818C81CC0C12EDEE9C43C8B1173EC76C396F0362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DHPublicKeyParameters_tDCEB26114B4964A5CAD0D631A2FD38289C11AB59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959* V_0 = NULL;
	DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* V_1 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_2 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959_il2cpp_TypeInfo_var);
		DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959* L_0 = ((DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959_StaticFields*)il2cpp_codegen_static_fields_for(DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959_il2cpp_TypeInfo_var))->___Instance_0;
		V_0 = L_0;
		DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2* L_1 = __this->___param_0;
		DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* L_2;
		L_2 = DHKeyGenerationParameters_get_Parameters_m5103CF17AA3A80CF5CE51CCEC73CEFA1DB32AD6B_inline(L_1, NULL);
		V_1 = L_2;
		DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959* L_3 = V_0;
		DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* L_4 = V_1;
		DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2* L_5 = __this->___param_0;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_6;
		L_6 = KeyGenerationParameters_get_Random_m36DBFE034B9D03191BEE80E701349E930D856329_inline(L_5, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_7;
		L_7 = DHKeyGeneratorHelper_CalculatePrivate_mE2411D0442CD40FF12918EAFBCF01C7F590FD1C4(L_3, L_4, L_6, NULL);
		V_2 = L_7;
		DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959* L_8 = V_0;
		DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* L_9 = V_1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_10 = V_2;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_11;
		L_11 = DHKeyGeneratorHelper_CalculatePublic_mAFAE074BF63009190A8DA21CDDB6DC48436323AD(L_8, L_9, L_10, NULL);
		V_3 = L_11;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = V_3;
		DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* L_13 = V_1;
		DHPublicKeyParameters_tDCEB26114B4964A5CAD0D631A2FD38289C11AB59* L_14 = (DHPublicKeyParameters_tDCEB26114B4964A5CAD0D631A2FD38289C11AB59*)il2cpp_codegen_object_new(DHPublicKeyParameters_tDCEB26114B4964A5CAD0D631A2FD38289C11AB59_il2cpp_TypeInfo_var);
		DHPublicKeyParameters__ctor_m4EA8360C0385D2F1ADD94755959E815DAB556057(L_14, L_12, L_13, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_15 = V_2;
		DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* L_16 = V_1;
		DHPrivateKeyParameters_t818C81CC0C12EDEE9C43C8B1173EC76C396F0362* L_17 = (DHPrivateKeyParameters_t818C81CC0C12EDEE9C43C8B1173EC76C396F0362*)il2cpp_codegen_object_new(DHPrivateKeyParameters_t818C81CC0C12EDEE9C43C8B1173EC76C396F0362_il2cpp_TypeInfo_var);
		DHPrivateKeyParameters__ctor_mD74737E9284F91FEC1A5285708AA7C621C9967FD(L_17, L_15, L_16, NULL);
		AsymmetricCipherKeyPair_tE06169950052884CD0AE97AB2CBA764E85D87EE5* L_18 = (AsymmetricCipherKeyPair_tE06169950052884CD0AE97AB2CBA764E85D87EE5*)il2cpp_codegen_object_new(AsymmetricCipherKeyPair_tE06169950052884CD0AE97AB2CBA764E85D87EE5_il2cpp_TypeInfo_var);
		AsymmetricCipherKeyPair__ctor_mBF093164F3117697081D895C0493DEB4489D466C(L_18, L_14, L_17, NULL);
		return L_18;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.DHBasicKeyPairGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHBasicKeyPairGenerator__ctor_m8A147A3825C477435B422EF6B8B2AD4AD3442009 (DHBasicKeyPairGenerator_tAAE4307D6DA0B1CDADC133989D288DCD99202B8D* __this, const RuntimeMethod* method) 
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
// System.Void Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHKeyGeneratorHelper__ctor_m75F3415666F40E39AE8CB6FF591176D434E4BEC6 (DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper::CalculatePrivate(Org.BouncyCastle.Crypto.Parameters.DHParameters,Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DHKeyGeneratorHelper_CalculatePrivate_mE2411D0442CD40FF12918EAFBCF01C7F590FD1C4 (DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959* __this, DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* ___dhParams0, SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegers_tE5A93174C5BBC70829A05C18E1482245298876DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_2 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_3 = NULL;
	int32_t V_4 = 0;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_5 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_6 = NULL;
	int32_t V_7 = 0;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_8 = NULL;
	{
		DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* L_0 = ___dhParams0;
		int32_t L_1;
		L_1 = DHParameters_get_L_m6976BF02E760CF18E4FA1C02BC8E162DB249C939_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_3 = V_0;
		V_1 = ((int32_t)(L_3>>2));
	}

IL_000e:
	{
		int32_t L_4 = V_0;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_5 = ___random1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_6 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_mED5A80A0043FC252F4E966B7EFD91E8B431B003F(L_6, L_4, L_5, NULL);
		int32_t L_7 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_8;
		L_8 = BigInteger_SetBit_mC7DD9CE75BABE2CE7FC20920508E3C59BF76024C(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), NULL);
		V_2 = L_8;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_9 = V_2;
		il2cpp_codegen_runtime_class_init_inline(WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = WNafUtilities_GetNafWeight_mDD019726DC8DB2CA9EB1D0841BF2FB3E8CE2FAA1(L_9, NULL);
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000e;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = V_2;
		return L_12;
	}

IL_0029:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_13 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___Two_16;
		V_3 = L_13;
		DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* L_14 = ___dhParams0;
		int32_t L_15;
		L_15 = DHParameters_get_M_m3DC8567443DE5CD6078A4A7C1ACC8E6F17F28EB0_inline(L_14, NULL);
		V_4 = L_15;
		int32_t L_16 = V_4;
		if (!L_16)
		{
			goto IL_004a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_17 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___One_15;
		int32_t L_18 = V_4;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_19;
		L_19 = BigInteger_ShiftLeft_mC662CBB073E2DE2F1C64C51CC756C5E573C43C2C(L_17, ((int32_t)il2cpp_codegen_subtract(L_18, 1)), NULL);
		V_3 = L_19;
	}

IL_004a:
	{
		DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* L_20 = ___dhParams0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_21;
		L_21 = DHParameters_get_Q_m0DD0E39FE8BFAFB56AB54D1FBAA489CBBBAD8DEB_inline(L_20, NULL);
		V_5 = L_21;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_22 = V_5;
		if (L_22)
		{
			goto IL_005e;
		}
	}
	{
		DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* L_23 = ___dhParams0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_24;
		L_24 = DHParameters_get_P_m5A4C54E2E7E4F66611A3C676C9D3ABB70E24D2B8_inline(L_23, NULL);
		V_5 = L_24;
	}

IL_005e:
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_25 = V_5;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_26 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___Two_16;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_27;
		L_27 = BigInteger_Subtract_mAF6078F797541D51F7E9D25D4C8A0F79DC8E9CEC(L_25, L_26, NULL);
		V_6 = L_27;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_28 = V_6;
		int32_t L_29;
		L_29 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_28, NULL);
		V_7 = ((int32_t)(L_29>>2));
	}

IL_0077:
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_30 = V_3;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_31 = V_6;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_32 = ___random1;
		il2cpp_codegen_runtime_class_init_inline(BigIntegers_tE5A93174C5BBC70829A05C18E1482245298876DF_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_33;
		L_33 = BigIntegers_CreateRandomInRange_m4C4BDCC3A775D502922A1518EC6D57A2A9C5E9CD(L_30, L_31, L_32, NULL);
		V_8 = L_33;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_34 = V_8;
		il2cpp_codegen_runtime_class_init_inline(WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var);
		int32_t L_35;
		L_35 = WNafUtilities_GetNafWeight_mDD019726DC8DB2CA9EB1D0841BF2FB3E8CE2FAA1(L_34, NULL);
		int32_t L_36 = V_7;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0077;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_37 = V_8;
		return L_37;
	}
}
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper::CalculatePublic(Org.BouncyCastle.Crypto.Parameters.DHParameters,Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DHKeyGeneratorHelper_CalculatePublic_mAFAE074BF63009190A8DA21CDDB6DC48436323AD (DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959* __this, DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* ___dhParams0, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___x1, const RuntimeMethod* method) 
{
	{
		DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* L_0 = ___dhParams0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_1;
		L_1 = DHParameters_get_G_m2199635E8D10308B0EE73620A916CE93E6A86D3A_inline(L_0, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_2 = ___x1;
		DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* L_3 = ___dhParams0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_4;
		L_4 = DHParameters_get_P_m5A4C54E2E7E4F66611A3C676C9D3ABB70E24D2B8_inline(L_3, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_5;
		L_5 = BigInteger_ModPow_mEBA47DA30ABB2A99E1AE1FB9C59F2C649C82AAA7(L_1, L_2, L_4, NULL);
		return L_5;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.DHKeyGeneratorHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHKeyGeneratorHelper__cctor_mA15EA03203803D3834DAFBDD925621D4D8141A10 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959* L_0 = (DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959*)il2cpp_codegen_object_new(DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959_il2cpp_TypeInfo_var);
		DHKeyGeneratorHelper__ctor_m75F3415666F40E39AE8CB6FF591176D434E4BEC6(L_0, NULL);
		((DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959_StaticFields*)il2cpp_codegen_static_fields_for(DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959_StaticFields*)il2cpp_codegen_static_fields_for(DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
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
// System.Void Org.BouncyCastle.Crypto.Generators.DHKeyPairGenerator::Init(Org.BouncyCastle.Crypto.KeyGenerationParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHKeyPairGenerator_Init_mEAD98047FECF89561A558E5B3D25439484046C5B (DHKeyPairGenerator_t15D96E3439C7A08BDA91EDFD195C8BA40591B72F* __this, KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* ___parameters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* L_0 = ___parameters0;
		__this->___param_0 = ((DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2*)CastclassClass((RuntimeObject*)L_0, DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___param_0), (void*)((DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2*)CastclassClass((RuntimeObject*)L_0, DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2_il2cpp_TypeInfo_var)));
		return;
	}
}
// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair Org.BouncyCastle.Crypto.Generators.DHKeyPairGenerator::GenerateKeyPair()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsymmetricCipherKeyPair_tE06169950052884CD0AE97AB2CBA764E85D87EE5* DHKeyPairGenerator_GenerateKeyPair_mBE9028F867C8D4CA362129FF67CD86B99863690A (DHKeyPairGenerator_t15D96E3439C7A08BDA91EDFD195C8BA40591B72F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsymmetricCipherKeyPair_tE06169950052884CD0AE97AB2CBA764E85D87EE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DHPrivateKeyParameters_t818C81CC0C12EDEE9C43C8B1173EC76C396F0362_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DHPublicKeyParameters_tDCEB26114B4964A5CAD0D631A2FD38289C11AB59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959* V_0 = NULL;
	DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* V_1 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_2 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959_il2cpp_TypeInfo_var);
		DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959* L_0 = ((DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959_StaticFields*)il2cpp_codegen_static_fields_for(DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959_il2cpp_TypeInfo_var))->___Instance_0;
		V_0 = L_0;
		DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2* L_1 = __this->___param_0;
		DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* L_2;
		L_2 = DHKeyGenerationParameters_get_Parameters_m5103CF17AA3A80CF5CE51CCEC73CEFA1DB32AD6B_inline(L_1, NULL);
		V_1 = L_2;
		DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959* L_3 = V_0;
		DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* L_4 = V_1;
		DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2* L_5 = __this->___param_0;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_6;
		L_6 = KeyGenerationParameters_get_Random_m36DBFE034B9D03191BEE80E701349E930D856329_inline(L_5, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_7;
		L_7 = DHKeyGeneratorHelper_CalculatePrivate_mE2411D0442CD40FF12918EAFBCF01C7F590FD1C4(L_3, L_4, L_6, NULL);
		V_2 = L_7;
		DHKeyGeneratorHelper_t43B667C504B44217000762C403A3D9F5FDB87959* L_8 = V_0;
		DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* L_9 = V_1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_10 = V_2;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_11;
		L_11 = DHKeyGeneratorHelper_CalculatePublic_mAFAE074BF63009190A8DA21CDDB6DC48436323AD(L_8, L_9, L_10, NULL);
		V_3 = L_11;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = V_3;
		DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* L_13 = V_1;
		DHPublicKeyParameters_tDCEB26114B4964A5CAD0D631A2FD38289C11AB59* L_14 = (DHPublicKeyParameters_tDCEB26114B4964A5CAD0D631A2FD38289C11AB59*)il2cpp_codegen_object_new(DHPublicKeyParameters_tDCEB26114B4964A5CAD0D631A2FD38289C11AB59_il2cpp_TypeInfo_var);
		DHPublicKeyParameters__ctor_m4EA8360C0385D2F1ADD94755959E815DAB556057(L_14, L_12, L_13, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_15 = V_2;
		DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* L_16 = V_1;
		DHPrivateKeyParameters_t818C81CC0C12EDEE9C43C8B1173EC76C396F0362* L_17 = (DHPrivateKeyParameters_t818C81CC0C12EDEE9C43C8B1173EC76C396F0362*)il2cpp_codegen_object_new(DHPrivateKeyParameters_t818C81CC0C12EDEE9C43C8B1173EC76C396F0362_il2cpp_TypeInfo_var);
		DHPrivateKeyParameters__ctor_mD74737E9284F91FEC1A5285708AA7C621C9967FD(L_17, L_15, L_16, NULL);
		AsymmetricCipherKeyPair_tE06169950052884CD0AE97AB2CBA764E85D87EE5* L_18 = (AsymmetricCipherKeyPair_tE06169950052884CD0AE97AB2CBA764E85D87EE5*)il2cpp_codegen_object_new(AsymmetricCipherKeyPair_tE06169950052884CD0AE97AB2CBA764E85D87EE5_il2cpp_TypeInfo_var);
		AsymmetricCipherKeyPair__ctor_mBF093164F3117697081D895C0493DEB4489D466C(L_18, L_14, L_17, NULL);
		return L_18;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.DHKeyPairGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHKeyPairGenerator__ctor_m1787A526DE7DB1C581ACA8C2BFD1554B9E4CE819 (DHKeyPairGenerator_t15D96E3439C7A08BDA91EDFD195C8BA40591B72F* __this, const RuntimeMethod* method) 
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
// System.Void Org.BouncyCastle.Crypto.Generators.DHParametersGenerator::Init(System.Int32,System.Int32,Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHParametersGenerator_Init_m9F2EBF9E40ED92817D7601099B70DD033A21FF05 (DHParametersGenerator_t52EC9DACF4E13FA0C2D7869FB2DDAD9E2291B51F* __this, int32_t ___size0, int32_t ___certainty1, SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___size0;
		__this->___size_0 = L_0;
		int32_t L_1 = ___certainty1;
		__this->___certainty_1 = L_1;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_2 = ___random2;
		__this->___random_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___random_2), (void*)L_2);
		return;
	}
}
// Org.BouncyCastle.Crypto.Parameters.DHParameters Org.BouncyCastle.Crypto.Generators.DHParametersGenerator::GenerateParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* DHParametersGenerator_GenerateParameters_m19B8FFAC6D0AC051E4E9A957174197F2F912C5C9 (DHParametersGenerator_t52EC9DACF4E13FA0C2D7869FB2DDAD9E2291B51F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* V_0 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_1 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_2 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_3 = NULL;
	{
		int32_t L_0 = __this->___size_0;
		int32_t L_1 = __this->___certainty_1;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_2 = __this->___random_2;
		il2cpp_codegen_runtime_class_init_inline(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var);
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_3;
		L_3 = DHParametersHelper_GenerateSafePrimes_mD3D9A49E3B2632FD91D3A975FB2112A7E722FBB7(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_4 = V_0;
		int32_t L_5 = 0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_7 = V_0;
		int32_t L_8 = 1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_10 = V_1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_11 = V_2;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_12 = __this->___random_2;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_13;
		L_13 = DHParametersHelper_SelectGenerator_m44A3701D752E5471A914A8FB67595A89C7498564(L_10, L_11, L_12, NULL);
		V_3 = L_13;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_14 = V_1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_15 = V_3;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_16 = V_2;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_17 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___Two_16;
		DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* L_18 = (DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59*)il2cpp_codegen_object_new(DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59_il2cpp_TypeInfo_var);
		DHParameters__ctor_m1A35B68497B8206C86A3BE41E697ED747C2049CD(L_18, L_14, L_15, L_16, L_17, (DHValidationParameters_t58B388F70EE736DD9C57E3FEA4E619A13805CDA5*)NULL, NULL);
		return L_18;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.DHParametersGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHParametersGenerator__ctor_mC2C29185F34C0EE15A0668D7A98A377CFBCBE9B3 (DHParametersGenerator_t52EC9DACF4E13FA0C2D7869FB2DDAD9E2291B51F* __this, const RuntimeMethod* method) 
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
// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Crypto.Generators.DHParametersHelper::ConstructBigPrimeProducts(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* DHParametersHelper_ConstructBigPrimeProducts_mAE166CB75C21FB05BA2E6002E33281CC78C4A499 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___primeProducts0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___primeProducts0;
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_1 = (BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376*)(BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376*)SZArrayNew(BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		V_1 = 0;
		goto IL_001d;
	}

IL_000d:
	{
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_2 = V_0;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___primeProducts0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_8;
		L_8 = BigInteger_ValueOf_m4C26D07B28C10C11C376A1DA8C57A62B0ED3480C(((int64_t)L_7), NULL);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001d:
	{
		int32_t L_10 = V_1;
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_12 = V_0;
		return L_12;
	}
}
// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Crypto.Generators.DHParametersHelper::GenerateSafePrimes(System.Int32,System.Int32,Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* DHParametersHelper_GenerateSafePrimes_mD3D9A49E3B2632FD91D3A975FB2112A7E722FBB7 (int32_t ___size0, int32_t ___certainty1, SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_0 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* V_12 = NULL;
	{
		int32_t L_0 = ___size0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = ___size0;
		V_3 = ((int32_t)(L_1>>2));
		int32_t L_2 = ___size0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)32))))
		{
			goto IL_0048;
		}
	}

IL_000d:
	{
		int32_t L_3 = V_2;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_4 = ___random2;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_5 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_mF7B666AB01FF5DEE7F61B0C2C48C4F61D691E1A5(L_5, L_3, 2, L_4, NULL);
		V_1 = L_5;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_6 = V_1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_7;
		L_7 = BigInteger_ShiftLeft_mC662CBB073E2DE2F1C64C51CC756C5E573C43C2C(L_6, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_8 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___One_15;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_9;
		L_9 = BigInteger_Add_m07559E876B7A0F1CD7E167B773AF3A8748BFBBF2(L_7, L_8, NULL);
		V_0 = L_9;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_10 = V_0;
		int32_t L_11 = ___certainty1;
		bool L_12;
		L_12 = BigInteger_IsProbablePrime_mE3C4A5D3E9ED463ABD687A3C0A16DBF84669CBCD(L_10, L_11, (bool)1, NULL);
		if (!L_12)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_13 = ___certainty1;
		if ((((int32_t)L_13) <= ((int32_t)2)))
		{
			goto IL_015a;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_14 = V_1;
		int32_t L_15 = ___certainty1;
		bool L_16;
		L_16 = BigInteger_IsProbablePrime_mE3C4A5D3E9ED463ABD687A3C0A16DBF84669CBCD(L_14, L_15, (bool)1, NULL);
		if (L_16)
		{
			goto IL_015a;
		}
	}
	{
		goto IL_000d;
	}

IL_0048:
	{
		int32_t L_17 = V_2;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_18 = ___random2;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_19 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_mF7B666AB01FF5DEE7F61B0C2C48C4F61D691E1A5(L_19, L_17, 0, L_18, NULL);
		V_1 = L_19;
	}

IL_0051:
	{
		V_4 = 0;
		goto IL_00f2;
	}

IL_0059:
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_20 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var);
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_21 = ((DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_StaticFields*)il2cpp_codegen_static_fields_for(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var))->___BigPrimeProducts_3;
		int32_t L_22 = V_4;
		int32_t L_23 = L_22;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_25;
		L_25 = BigInteger_Remainder_m3EC0AB3AE3F935252F117BA4A5219555D800A961(L_20, L_24, NULL);
		int32_t L_26;
		L_26 = BigInteger_get_IntValue_m51372C2C24032F9378F895580BB3CD5821CCC1D7(L_25, NULL);
		V_5 = L_26;
		int32_t L_27 = V_4;
		if (L_27)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_28 = V_5;
		V_6 = ((int32_t)(L_28%3));
		int32_t L_29 = V_6;
		if ((((int32_t)L_29) == ((int32_t)2)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_30 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_30)), 2));
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_31 = V_1;
		int32_t L_32 = V_7;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_33;
		L_33 = BigInteger_ValueOf_m4C26D07B28C10C11C376A1DA8C57A62B0ED3480C(((int64_t)L_32), NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_34;
		L_34 = BigInteger_Add_m07559E876B7A0F1CD7E167B773AF3A8748BFBBF2(L_31, L_33, NULL);
		V_1 = L_34;
		int32_t L_35 = V_5;
		int32_t L_36 = V_7;
		il2cpp_codegen_runtime_class_init_inline(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = ((DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_StaticFields*)il2cpp_codegen_static_fields_for(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var))->___primeProducts_2;
		int32_t L_38 = V_4;
		int32_t L_39 = L_38;
		int32_t L_40 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_35, L_36))%L_40));
	}

IL_00a4:
	{
		il2cpp_codegen_runtime_class_init_inline(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_41 = ((DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_StaticFields*)il2cpp_codegen_static_fields_for(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var))->___primeLists_1;
		int32_t L_42 = V_4;
		int32_t L_43 = L_42;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		V_8 = L_44;
		V_9 = 0;
		goto IL_00e4;
	}

IL_00b3:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_8;
		int32_t L_46 = V_9;
		int32_t L_47 = L_46;
		int32_t L_48 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
		V_10 = L_48;
		int32_t L_49 = V_5;
		int32_t L_50 = V_10;
		V_11 = ((int32_t)(L_49%L_50));
		int32_t L_51 = V_11;
		if (!L_51)
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_52 = V_11;
		int32_t L_53 = V_10;
		if ((!(((uint32_t)L_52) == ((uint32_t)((int32_t)(L_53>>1))))))
		{
			goto IL_00de;
		}
	}

IL_00cd:
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_54 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_55 = ((DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_StaticFields*)il2cpp_codegen_static_fields_for(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var))->___Six_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_56;
		L_56 = BigInteger_Add_m07559E876B7A0F1CD7E167B773AF3A8748BFBBF2(L_54, L_55, NULL);
		V_1 = L_56;
		goto IL_0051;
	}

IL_00de:
	{
		int32_t L_57 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00e4:
	{
		int32_t L_58 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_8;
		if ((((int32_t)L_58) < ((int32_t)((int32_t)(((RuntimeArray*)L_59)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_60 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_00f2:
	{
		int32_t L_61 = V_4;
		il2cpp_codegen_runtime_class_init_inline(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_62 = ((DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_StaticFields*)il2cpp_codegen_static_fields_for(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var))->___primeLists_1;
		if ((((int32_t)L_61) < ((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length)))))
		{
			goto IL_0059;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_63 = V_1;
		int32_t L_64;
		L_64 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_63, NULL);
		int32_t L_65 = V_2;
		if ((!(((uint32_t)L_64) == ((uint32_t)L_65))))
		{
			goto IL_0048;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_66 = V_1;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_67 = ___random2;
		bool L_68;
		L_68 = BigInteger_RabinMillerTest_m20E03E9BC11AC8AFAE2272FF205DBF6B3B810392(L_66, 2, L_67, (bool)1, NULL);
		if (!L_68)
		{
			goto IL_0048;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_69 = V_1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_70;
		L_70 = BigInteger_ShiftLeft_mC662CBB073E2DE2F1C64C51CC756C5E573C43C2C(L_69, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_71 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___One_15;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_72;
		L_72 = BigInteger_Add_m07559E876B7A0F1CD7E167B773AF3A8748BFBBF2(L_70, L_71, NULL);
		V_0 = L_72;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_73 = V_0;
		int32_t L_74 = ___certainty1;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_75 = ___random2;
		bool L_76;
		L_76 = BigInteger_RabinMillerTest_m20E03E9BC11AC8AFAE2272FF205DBF6B3B810392(L_73, L_74, L_75, (bool)1, NULL);
		if (!L_76)
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_77 = ___certainty1;
		if ((((int32_t)L_77) <= ((int32_t)2)))
		{
			goto IL_014e;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_78 = V_1;
		int32_t L_79 = ___certainty1;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_80 = ___random2;
		bool L_81;
		L_81 = BigInteger_RabinMillerTest_m20E03E9BC11AC8AFAE2272FF205DBF6B3B810392(L_78, ((int32_t)il2cpp_codegen_subtract(L_79, 2)), L_80, (bool)1, NULL);
		if (!L_81)
		{
			goto IL_0048;
		}
	}

IL_014e:
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_82 = V_0;
		il2cpp_codegen_runtime_class_init_inline(WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var);
		int32_t L_83;
		L_83 = WNafUtilities_GetNafWeight_mDD019726DC8DB2CA9EB1D0841BF2FB3E8CE2FAA1(L_82, NULL);
		int32_t L_84 = V_3;
		if ((((int32_t)L_83) < ((int32_t)L_84)))
		{
			goto IL_0048;
		}
	}

IL_015a:
	{
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_85 = (BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376*)(BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376*)SZArrayNew(BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376_il2cpp_TypeInfo_var, (uint32_t)2);
		V_12 = L_85;
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_86 = V_12;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_87 = V_0;
		ArrayElementTypeCheck (L_86, L_87);
		(L_86)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)L_87);
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_88 = V_12;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_89 = V_1;
		ArrayElementTypeCheck (L_88, L_89);
		(L_88)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)L_89);
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_90 = V_12;
		return L_90;
	}
}
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DHParametersHelper::SelectGenerator(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DHParametersHelper_SelectGenerator_m44A3701D752E5471A914A8FB67595A89C7498564 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___p0, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___q1, SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegers_tE5A93174C5BBC70829A05C18E1482245298876DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_0 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_1 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_2 = NULL;
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = ___p0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_1 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___Two_16;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_2;
		L_2 = BigInteger_Subtract_mAF6078F797541D51F7E9D25D4C8A0F79DC8E9CEC(L_0, L_1, NULL);
		V_0 = L_2;
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_3 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___Two_16;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_4 = V_0;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_5 = ___random2;
		il2cpp_codegen_runtime_class_init_inline(BigIntegers_tE5A93174C5BBC70829A05C18E1482245298876DF_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_6;
		L_6 = BigIntegers_CreateRandomInRange_m4C4BDCC3A775D502922A1518EC6D57A2A9C5E9CD(L_3, L_4, L_5, NULL);
		V_2 = L_6;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_7 = V_2;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_8 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___Two_16;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_9 = ___p0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_10;
		L_10 = BigInteger_ModPow_mEBA47DA30ABB2A99E1AE1FB9C59F2C649C82AAA7(L_7, L_8, L_9, NULL);
		V_1 = L_10;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_11 = V_1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___One_15;
		bool L_13;
		L_13 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean Org.BouncyCastle.Math.BigInteger::Equals(System.Object) */, L_11, L_12);
		if (L_13)
		{
			goto IL_000c;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_14 = V_1;
		return L_14;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.DHParametersHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHParametersHelper__cctor_mF5B97526538394F585E1B053A79B5C05A5579C72 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0;
		L_0 = BigInteger_ValueOf_m4C26D07B28C10C11C376A1DA8C57A62B0ED3480C(((int64_t)6), NULL);
		((DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_StaticFields*)il2cpp_codegen_static_fields_for(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var))->___Six_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_StaticFields*)il2cpp_codegen_static_fields_for(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var))->___Six_0), (void*)L_0);
		Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* L_1 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___primeLists_9;
		((DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_StaticFields*)il2cpp_codegen_static_fields_for(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var))->___primeLists_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_StaticFields*)il2cpp_codegen_static_fields_for(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var))->___primeLists_1), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___primeProducts_10;
		((DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_StaticFields*)il2cpp_codegen_static_fields_for(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var))->___primeProducts_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_StaticFields*)il2cpp_codegen_static_fields_for(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var))->___primeProducts_2), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_StaticFields*)il2cpp_codegen_static_fields_for(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var))->___primeProducts_2;
		BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* L_4;
		L_4 = DHParametersHelper_ConstructBigPrimeProducts_mAE166CB75C21FB05BA2E6002E33281CC78C4A499(L_3, NULL);
		((DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_StaticFields*)il2cpp_codegen_static_fields_for(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var))->___BigPrimeProducts_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_StaticFields*)il2cpp_codegen_static_fields_for(DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65_il2cpp_TypeInfo_var))->___BigPrimeProducts_3), (void*)L_4);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.DHParametersHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DHParametersHelper__ctor_m119CF4D35D0F74F1CE9A418C0A88B2AB5D357E5A (DHParametersHelper_t428341BB67DB6A1D2CBA0B83E9621C0F0FFC0E65* __this, const RuntimeMethod* method) 
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
// System.Void Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator::Init(Org.BouncyCastle.Crypto.KeyGenerationParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DsaKeyPairGenerator_Init_m2482D5A09194F54D678800521BCD2B70C90DC890 (DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34* __this, KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* ___parameters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DsaKeyGenerationParameters_t54036A87799BBB5ABE90C0466CE5F998BE0527D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* L_0 = ___parameters0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DsaKeyPairGenerator_Init_m2482D5A09194F54D678800521BCD2B70C90DC890_RuntimeMethod_var)));
	}

IL_000e:
	{
		KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* L_2 = ___parameters0;
		__this->___param_1 = ((DsaKeyGenerationParameters_t54036A87799BBB5ABE90C0466CE5F998BE0527D6*)CastclassClass((RuntimeObject*)L_2, DsaKeyGenerationParameters_t54036A87799BBB5ABE90C0466CE5F998BE0527D6_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___param_1), (void*)((DsaKeyGenerationParameters_t54036A87799BBB5ABE90C0466CE5F998BE0527D6*)CastclassClass((RuntimeObject*)L_2, DsaKeyGenerationParameters_t54036A87799BBB5ABE90C0466CE5F998BE0527D6_il2cpp_TypeInfo_var)));
		return;
	}
}
// Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator::GenerateKeyPair()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsymmetricCipherKeyPair_tE06169950052884CD0AE97AB2CBA764E85D87EE5* DsaKeyPairGenerator_GenerateKeyPair_m7BC96727B505B6E65F20B1D11346246413EF76F2 (DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsymmetricCipherKeyPair_tE06169950052884CD0AE97AB2CBA764E85D87EE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DsaPrivateKeyParameters_tF64528D4277F1F58056EB3B46A6C59271B9B5D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DsaPublicKeyParameters_t817DCC4A813D592697AF905BAB9213555F16D6C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* V_0 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_1 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_2 = NULL;
	{
		DsaKeyGenerationParameters_t54036A87799BBB5ABE90C0466CE5F998BE0527D6* L_0 = __this->___param_1;
		DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* L_1;
		L_1 = DsaKeyGenerationParameters_get_Parameters_mCF5A4ED627E5D1747F018E1DC2689F048B5102EB_inline(L_0, NULL);
		V_0 = L_1;
		DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* L_2 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_3;
		L_3 = DsaParameters_get_Q_m6C404267767358DAD5F1A0DF72B0EEC128C7E2DC_inline(L_2, NULL);
		DsaKeyGenerationParameters_t54036A87799BBB5ABE90C0466CE5F998BE0527D6* L_4 = __this->___param_1;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_5;
		L_5 = KeyGenerationParameters_get_Random_m36DBFE034B9D03191BEE80E701349E930D856329_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_6;
		L_6 = DsaKeyPairGenerator_GeneratePrivateKey_m297BCBE818FE7D28CFE1C985B62441E68A523052(L_3, L_5, NULL);
		V_1 = L_6;
		DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* L_7 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_8;
		L_8 = DsaParameters_get_P_mEB071E8B64B7AE5BC3C4FE6828E40D829918E6A6_inline(L_7, NULL);
		DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* L_9 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_10;
		L_10 = DsaParameters_get_G_m37FF17F3C12F8DFB88C8DE8B69BD03B40B505CFE_inline(L_9, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_11 = V_1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12;
		L_12 = DsaKeyPairGenerator_CalculatePublicKey_m3A6E5E48C04837005343B74BDE319381013D3359(L_8, L_10, L_11, NULL);
		V_2 = L_12;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_13 = V_2;
		DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* L_14 = V_0;
		DsaPublicKeyParameters_t817DCC4A813D592697AF905BAB9213555F16D6C3* L_15 = (DsaPublicKeyParameters_t817DCC4A813D592697AF905BAB9213555F16D6C3*)il2cpp_codegen_object_new(DsaPublicKeyParameters_t817DCC4A813D592697AF905BAB9213555F16D6C3_il2cpp_TypeInfo_var);
		DsaPublicKeyParameters__ctor_m59F0BC72AD282D14480D138F8834CBC2A2FE3DB0(L_15, L_13, L_14, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_16 = V_1;
		DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* L_17 = V_0;
		DsaPrivateKeyParameters_tF64528D4277F1F58056EB3B46A6C59271B9B5D2A* L_18 = (DsaPrivateKeyParameters_tF64528D4277F1F58056EB3B46A6C59271B9B5D2A*)il2cpp_codegen_object_new(DsaPrivateKeyParameters_tF64528D4277F1F58056EB3B46A6C59271B9B5D2A_il2cpp_TypeInfo_var);
		DsaPrivateKeyParameters__ctor_m66BDDEF02F99520E0062EE51313BB6D2EF22AD09(L_18, L_16, L_17, NULL);
		AsymmetricCipherKeyPair_tE06169950052884CD0AE97AB2CBA764E85D87EE5* L_19 = (AsymmetricCipherKeyPair_tE06169950052884CD0AE97AB2CBA764E85D87EE5*)il2cpp_codegen_object_new(AsymmetricCipherKeyPair_tE06169950052884CD0AE97AB2CBA764E85D87EE5_il2cpp_TypeInfo_var);
		AsymmetricCipherKeyPair__ctor_mBF093164F3117697081D895C0493DEB4489D466C(L_19, L_15, L_18, NULL);
		return L_19;
	}
}
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator::GeneratePrivateKey(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DsaKeyPairGenerator_GeneratePrivateKey_m297BCBE818FE7D28CFE1C985B62441E68A523052 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___q0, SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegers_tE5A93174C5BBC70829A05C18E1482245298876DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_1 = NULL;
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = ___q0;
		int32_t L_1;
		L_1 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_0, NULL);
		V_0 = ((int32_t)(L_1>>2));
	}

IL_0009:
	{
		il2cpp_codegen_runtime_class_init_inline(DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_2 = ((DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34_StaticFields*)il2cpp_codegen_static_fields_for(DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34_il2cpp_TypeInfo_var))->___One_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_3 = ___q0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_4 = ((DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34_StaticFields*)il2cpp_codegen_static_fields_for(DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34_il2cpp_TypeInfo_var))->___One_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_5;
		L_5 = BigInteger_Subtract_mAF6078F797541D51F7E9D25D4C8A0F79DC8E9CEC(L_3, L_4, NULL);
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_6 = ___random1;
		il2cpp_codegen_runtime_class_init_inline(BigIntegers_tE5A93174C5BBC70829A05C18E1482245298876DF_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_7;
		L_7 = BigIntegers_CreateRandomInRange_m4C4BDCC3A775D502922A1518EC6D57A2A9C5E9CD(L_2, L_5, L_6, NULL);
		V_1 = L_7;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = WNafUtilities_GetNafWeight_mDD019726DC8DB2CA9EB1D0841BF2FB3E8CE2FAA1(L_8, NULL);
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0009;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_11 = V_1;
		return L_11;
	}
}
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator::CalculatePublicKey(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DsaKeyPairGenerator_CalculatePublicKey_m3A6E5E48C04837005343B74BDE319381013D3359 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___p0, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___g1, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___x2, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = ___g1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_1 = ___x2;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_2 = ___p0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_3;
		L_3 = BigInteger_ModPow_mEBA47DA30ABB2A99E1AE1FB9C59F2C649C82AAA7(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DsaKeyPairGenerator__cctor_mFF4345A3D1B4657F678C4B36B799F16E60CFED72 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___One_15;
		((DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34_StaticFields*)il2cpp_codegen_static_fields_for(DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34_il2cpp_TypeInfo_var))->___One_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34_StaticFields*)il2cpp_codegen_static_fields_for(DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34_il2cpp_TypeInfo_var))->___One_0), (void*)L_0);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.DsaKeyPairGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DsaKeyPairGenerator__ctor_m3882EC43C0EF2A49EF882FDE1B08892DB7A837B6 (DsaKeyPairGenerator_tCF0EF175B1375F7E24F924D8DC3F98E723509F34* __this, const RuntimeMethod* method) 
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
// System.Void Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DsaParametersGenerator__ctor_m9E2A6FBA6936D7FB3933276EC88CF97A6AD33974 (DsaParametersGenerator_t63BFEA1A257818D469B6F140F93D29A725815D76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA* L_0 = (Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA*)il2cpp_codegen_object_new(Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA_il2cpp_TypeInfo_var);
		Sha1Digest__ctor_mE459929BE81CC32F1177E9CBF41D2C585164444E(L_0, NULL);
		DsaParametersGenerator__ctor_m57B50F27CDDFD2AFB35F6369754368B28A456DB3(__this, L_0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::.ctor(Org.BouncyCastle.Crypto.IDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DsaParametersGenerator__ctor_m57B50F27CDDFD2AFB35F6369754368B28A456DB3 (DsaParametersGenerator_t63BFEA1A257818D469B6F140F93D29A725815D76* __this, RuntimeObject* ___digest0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___digest0;
		__this->___digest_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___digest_0), (void*)L_0);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::Init(System.Int32,System.Int32,Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DsaParametersGenerator_Init_m1D23740F1ABAB5A9A4806D7E612FD342542BD1F2 (DsaParametersGenerator_t63BFEA1A257818D469B6F140F93D29A725815D76* __this, int32_t ___size0, int32_t ___certainty1, SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___size0;
		bool L_1;
		L_1 = DsaParametersGenerator_IsValidDsaStrength_mEFEF36F0C8273CAFB0E6679A224D7EA4C85AC255(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB8EE9D086585D964EB0E3772BAB37DA6BF339C11)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3EE5A4671A4E5AEBD31CA5F013A7773DC18ED22B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DsaParametersGenerator_Init_m1D23740F1ABAB5A9A4806D7E612FD342542BD1F2_RuntimeMethod_var)));
	}

IL_0018:
	{
		__this->___use186_3_5 = (bool)0;
		int32_t L_3 = ___size0;
		__this->___L_1 = L_3;
		int32_t L_4 = ___size0;
		int32_t L_5;
		L_5 = DsaParametersGenerator_GetDefaultN_mC42D43EEE4953B80EAC416247CF0756B32FD76AD(L_4, NULL);
		__this->___N_2 = L_5;
		int32_t L_6 = ___certainty1;
		__this->___certainty_3 = L_6;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_7 = ___random2;
		__this->___random_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___random_4), (void*)L_7);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::Init(Org.BouncyCastle.Crypto.Parameters.DsaParameterGenerationParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DsaParametersGenerator_Init_mD077630F4A06C0F5925E36721071F977B44C86C6 (DsaParametersGenerator_t63BFEA1A257818D469B6F140F93D29A725815D76* __this, DsaParameterGenerationParameters_t06D63D6CFCBB683D1F308B0F54CF7B60E0C726BA* ___parameters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___use186_3_5 = (bool)1;
		DsaParameterGenerationParameters_t06D63D6CFCBB683D1F308B0F54CF7B60E0C726BA* L_0 = ___parameters0;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.Parameters.DsaParameterGenerationParameters::get_L() */, L_0);
		__this->___L_1 = L_1;
		DsaParameterGenerationParameters_t06D63D6CFCBB683D1F308B0F54CF7B60E0C726BA* L_2 = ___parameters0;
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.Parameters.DsaParameterGenerationParameters::get_N() */, L_2);
		__this->___N_2 = L_3;
		DsaParameterGenerationParameters_t06D63D6CFCBB683D1F308B0F54CF7B60E0C726BA* L_4 = ___parameters0;
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 Org.BouncyCastle.Crypto.Parameters.DsaParameterGenerationParameters::get_Certainty() */, L_4);
		__this->___certainty_3 = L_5;
		DsaParameterGenerationParameters_t06D63D6CFCBB683D1F308B0F54CF7B60E0C726BA* L_6 = ___parameters0;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_7;
		L_7 = VirtualFuncInvoker0< SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* >::Invoke(8 /* Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Parameters.DsaParameterGenerationParameters::get_Random() */, L_6);
		__this->___random_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___random_4), (void*)L_7);
		DsaParameterGenerationParameters_t06D63D6CFCBB683D1F308B0F54CF7B60E0C726BA* L_8 = ___parameters0;
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Org.BouncyCastle.Crypto.Parameters.DsaParameterGenerationParameters::get_UsageIndex() */, L_8);
		__this->___usageIndex_6 = L_9;
		int32_t L_10 = __this->___L_1;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)1024))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_11 = __this->___L_1;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)3072))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_12 = __this->___L_1;
		if (!((int32_t)(L_12%((int32_t)1024))))
		{
			goto IL_007b;
		}
	}

IL_006b:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5C21A6D4C1F7E79C402110827A484BA0BDF302EE)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DsaParametersGenerator_Init_mD077630F4A06C0F5925E36721071F977B44C86C6_RuntimeMethod_var)));
	}

IL_007b:
	{
		int32_t L_14 = __this->___L_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)1024)))))
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_15 = __this->___N_2;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)160))))
		{
			goto IL_00a0;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF93AA97136E5BD4B958A135D534F7064CD1361D1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DsaParametersGenerator_Init_mD077630F4A06C0F5925E36721071F977B44C86C6_RuntimeMethod_var)));
	}

IL_00a0:
	{
		int32_t L_17 = __this->___L_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)2048)))))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_18 = __this->___N_2;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)224))))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_19 = __this->___N_2;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)256))))
		{
			goto IL_00d2;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral108ABAE4CFE05B8C1291FAB50652AC7694A8345E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DsaParametersGenerator_Init_mD077630F4A06C0F5925E36721071F977B44C86C6_RuntimeMethod_var)));
	}

IL_00d2:
	{
		int32_t L_21 = __this->___L_1;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)3072)))))
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_22 = __this->___N_2;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)256))))
		{
			goto IL_00f7;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8D36E120856F9C3F71043CB845ABEA216679C77C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DsaParametersGenerator_Init_mD077630F4A06C0F5925E36721071F977B44C86C6_RuntimeMethod_var)));
	}

IL_00f7:
	{
		RuntimeObject* L_24 = __this->___digest_0;
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::GetDigestSize() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_24);
		int32_t L_26 = __this->___N_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(L_25, 8))) >= ((int32_t)L_26)))
		{
			goto IL_0117;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_27 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAC3828DD169EA551EA96D29732CFD5D6F31C0BB9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DsaParametersGenerator_Init_mD077630F4A06C0F5925E36721071F977B44C86C6_RuntimeMethod_var)));
	}

IL_0117:
	{
		return;
	}
}
// Org.BouncyCastle.Crypto.Parameters.DsaParameters Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::GenerateParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* DsaParametersGenerator_GenerateParameters_m143D4C4CE16E2049B8454FF8A85C3AF9485C2FD5 (DsaParametersGenerator_t63BFEA1A257818D469B6F140F93D29A725815D76* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___use186_3_5;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* L_1;
		L_1 = VirtualFuncInvoker0< DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* >::Invoke(7 /* Org.BouncyCastle.Crypto.Parameters.DsaParameters Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::GenerateParameters_FIPS186_2() */, __this);
		return L_1;
	}

IL_000f:
	{
		DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* L_2;
		L_2 = VirtualFuncInvoker0< DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* >::Invoke(9 /* Org.BouncyCastle.Crypto.Parameters.DsaParameters Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::GenerateParameters_FIPS186_3() */, __this);
		return L_2;
	}
}
// Org.BouncyCastle.Crypto.Parameters.DsaParameters Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::GenerateParameters_FIPS186_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* DsaParametersGenerator_GenerateParameters_FIPS186_2_m1C0125CF92D48DAD1D93EEE4DCAF3A6B9D8C402C (DsaParametersGenerator_t63BFEA1A257818D469B6F140F93D29A725815D76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DsaValidationParameters_t7019CA9E54B90D455DFE413C2EF78921995F6783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t V_6 = 0;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_7 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_11 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_12 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_13 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_14 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_15 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		V_1 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		V_2 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		V_3 = L_3;
		int32_t L_4 = __this->___L_1;
		V_4 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_4, 1))/((int32_t)160)));
		int32_t L_5 = __this->___L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_5/8)));
		V_5 = L_6;
		RuntimeObject* L_7 = __this->___digest_0;
		if (((Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA*)IsInstClass((RuntimeObject*)L_7, Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA_il2cpp_TypeInfo_var)))
		{
			goto IL_0057;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51873B41C63ACCB1AD1BCAF4CBFED060B8D1B62C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DsaParametersGenerator_GenerateParameters_FIPS186_2_m1C0125CF92D48DAD1D93EEE4DCAF3A6B9D8C402C_RuntimeMethod_var)));
	}

IL_0057:
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_9 = __this->___random_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_9, L_10);
		RuntimeObject* L_11 = __this->___digest_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		DsaParametersGenerator_Hash_mD4CE4575508690B3D40A47F77F7F67278C83FF1C(L_11, L_12, L_13, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, 0, ((int32_t)(((RuntimeArray*)L_16)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_2;
		DsaParametersGenerator_Inc_mCBC8FCF72F030B84CE81F0BAEADF8B8D0121C679(L_17, NULL);
		RuntimeObject* L_18 = __this->___digest_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_2;
		DsaParametersGenerator_Hash_mD4CE4575508690B3D40A47F77F7F67278C83FF1C(L_18, L_19, L_20, NULL);
		V_6 = 0;
		goto IL_00a8;
	}

IL_0094:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_3;
		int32_t L_22 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_1;
		int32_t L_24 = V_6;
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_2;
		int32_t L_28 = V_6;
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_26^(int32_t)L_30))));
		int32_t L_31 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a8:
	{
		int32_t L_32 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_3;
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_0094;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = L_34;
		V_15 = L_35;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_15;
		int32_t L_37 = 0;
		uint8_t L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_38|((int32_t)128)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = L_39;
		V_15 = L_40;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_15;
		int32_t L_42 = ((int32_t)19);
		uint8_t L_43 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_43|1))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_3;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_45 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD(L_45, 1, L_44, NULL);
		V_7 = L_45;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_46 = V_7;
		int32_t L_47 = __this->___certainty_3;
		bool L_48;
		L_48 = BigInteger_IsProbablePrime_m07F131A76E590E948CC8752DCFD7C6E24A787762(L_46, L_47, NULL);
		if (!L_48)
		{
			goto IL_0057;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
		L_50 = Arrays_Clone_mC73CD122DC37EDEB733EC84DB0137D8D7DD5B87F(L_49, NULL);
		V_8 = L_50;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_8;
		DsaParametersGenerator_Inc_mCBC8FCF72F030B84CE81F0BAEADF8B8D0121C679(L_51, NULL);
		V_9 = 0;
		goto IL_0204;
	}

IL_0101:
	{
		V_10 = 0;
		goto IL_013a;
	}

IL_0106:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_8;
		DsaParametersGenerator_Inc_mCBC8FCF72F030B84CE81F0BAEADF8B8D0121C679(L_52, NULL);
		RuntimeObject* L_53 = __this->___digest_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_1;
		DsaParametersGenerator_Hash_mD4CE4575508690B3D40A47F77F7F67278C83FF1C(L_53, L_54, L_55, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = V_5;
		int32_t L_59 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_56, 0, (RuntimeArray*)L_57, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_58)->max_length)), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_59, 1)), ((int32_t)(((RuntimeArray*)L_60)->max_length)))))), ((int32_t)(((RuntimeArray*)L_61)->max_length)), NULL);
		int32_t L_62 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_013a:
	{
		int32_t L_63 = V_10;
		int32_t L_64 = V_4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0106;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = V_8;
		DsaParametersGenerator_Inc_mCBC8FCF72F030B84CE81F0BAEADF8B8D0121C679(L_65, NULL);
		RuntimeObject* L_66 = __this->___digest_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = V_1;
		DsaParametersGenerator_Hash_mD4CE4575508690B3D40A47F77F7F67278C83FF1C(L_66, L_67, L_68, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = V_5;
		int32_t L_72 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = V_5;
		int32_t L_76 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_69, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_70)->max_length)), ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_71)->max_length)), ((int32_t)il2cpp_codegen_multiply(L_72, ((int32_t)(((RuntimeArray*)L_73)->max_length)))))))), (RuntimeArray*)L_74, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_75)->max_length)), ((int32_t)il2cpp_codegen_multiply(L_76, ((int32_t)(((RuntimeArray*)L_77)->max_length)))))), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = L_78;
		V_15 = L_79;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = V_15;
		int32_t L_81 = 0;
		uint8_t L_82 = (L_80)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		(L_79)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_82|((int32_t)128)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = V_5;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_84 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD(L_84, 1, L_83, NULL);
		V_11 = L_84;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_85 = V_11;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_86 = V_7;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_87;
		L_87 = BigInteger_ShiftLeft_mC662CBB073E2DE2F1C64C51CC756C5E573C43C2C(L_86, 1, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_88;
		L_88 = BigInteger_Mod_mB43D106CC9B09184498FF09EEB439A2790CE91F3(L_85, L_87, NULL);
		V_12 = L_88;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_89 = V_11;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_90 = V_12;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_91 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___One_15;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_92;
		L_92 = BigInteger_Subtract_mAF6078F797541D51F7E9D25D4C8A0F79DC8E9CEC(L_90, L_91, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_93;
		L_93 = BigInteger_Subtract_mAF6078F797541D51F7E9D25D4C8A0F79DC8E9CEC(L_89, L_92, NULL);
		V_13 = L_93;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_94 = V_13;
		int32_t L_95;
		L_95 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_94, NULL);
		int32_t L_96 = __this->___L_1;
		if ((!(((uint32_t)L_95) == ((uint32_t)L_96))))
		{
			goto IL_01fe;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_97 = V_13;
		int32_t L_98 = __this->___certainty_3;
		bool L_99;
		L_99 = BigInteger_IsProbablePrime_m07F131A76E590E948CC8752DCFD7C6E24A787762(L_97, L_98, NULL);
		if (!L_99)
		{
			goto IL_01fe;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_100 = V_13;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_101 = V_7;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_102 = __this->___random_4;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_103;
		L_103 = VirtualFuncInvoker3< BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*, SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* >::Invoke(8 /* Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::CalculateGenerator_FIPS186_2(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Security.SecureRandom) */, __this, L_100, L_101, L_102);
		V_14 = L_103;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_104 = V_13;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_105 = V_7;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_106 = V_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = V_0;
		int32_t L_108 = V_9;
		DsaValidationParameters_t7019CA9E54B90D455DFE413C2EF78921995F6783* L_109 = (DsaValidationParameters_t7019CA9E54B90D455DFE413C2EF78921995F6783*)il2cpp_codegen_object_new(DsaValidationParameters_t7019CA9E54B90D455DFE413C2EF78921995F6783_il2cpp_TypeInfo_var);
		DsaValidationParameters__ctor_mC1694F5DB4D1DBCB7DDB4F25E5D0B7B043691D67(L_109, L_107, L_108, NULL);
		DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* L_110 = (DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417*)il2cpp_codegen_object_new(DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417_il2cpp_TypeInfo_var);
		DsaParameters__ctor_mE694ECE368E04CF2A7F21880E46C8F78FDF7702A(L_110, L_104, L_105, L_106, L_109, NULL);
		return L_110;
	}

IL_01fe:
	{
		int32_t L_111 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0204:
	{
		int32_t L_112 = V_9;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)4096))))
		{
			goto IL_0101;
		}
	}
	{
		goto IL_0057;
	}
}
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::CalculateGenerator_FIPS186_2(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DsaParametersGenerator_CalculateGenerator_FIPS186_2_m70EA8AFD8E190B64FE65F3FDC6C37200E4058B40 (DsaParametersGenerator_t63BFEA1A257818D469B6F140F93D29A725815D76* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___p0, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___q1, SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___r2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigIntegers_tE5A93174C5BBC70829A05C18E1482245298876DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_0 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_1 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_2 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_3 = NULL;
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = ___p0;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_1 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___One_15;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_2;
		L_2 = BigInteger_Subtract_mAF6078F797541D51F7E9D25D4C8A0F79DC8E9CEC(L_0, L_1, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_3 = ___q1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_4;
		L_4 = BigInteger_Divide_m018E671AD9093F75F671A152FC99787AE4C1E2A8(L_2, L_3, NULL);
		V_0 = L_4;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_5 = ___p0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_6 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___Two_16;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_7;
		L_7 = BigInteger_Subtract_mAF6078F797541D51F7E9D25D4C8A0F79DC8E9CEC(L_5, L_6, NULL);
		V_1 = L_7;
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_8 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___Two_16;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_9 = V_1;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_10 = ___r2;
		il2cpp_codegen_runtime_class_init_inline(BigIntegers_tE5A93174C5BBC70829A05C18E1482245298876DF_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_11;
		L_11 = BigIntegers_CreateRandomInRange_m4C4BDCC3A775D502922A1518EC6D57A2A9C5E9CD(L_8, L_9, L_10, NULL);
		V_2 = L_11;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_12 = V_2;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_13 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_14 = ___p0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_15;
		L_15 = BigInteger_ModPow_mEBA47DA30ABB2A99E1AE1FB9C59F2C649C82AAA7(L_12, L_13, L_14, NULL);
		V_3 = L_15;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_16 = V_3;
		int32_t L_17;
		L_17 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_16, NULL);
		if ((((int32_t)L_17) <= ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_18 = V_3;
		return L_18;
	}
}
// Org.BouncyCastle.Crypto.Parameters.DsaParameters Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::GenerateParameters_FIPS186_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* DsaParametersGenerator_GenerateParameters_FIPS186_3_mA75A4AA82B17861B362F14878532AF3D0538A794 (DsaParametersGenerator_t63BFEA1A257818D469B6F140F93D29A725815D76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DsaValidationParameters_t7019CA9E54B90D455DFE413C2EF78921995F6783_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_7 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_8 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_15 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_16 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_17 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_18 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_19 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_20 = NULL;
	{
		RuntimeObject* L_0 = __this->___digest_0;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::GetDigestSize() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_1);
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_2, 8));
		int32_t L_3 = __this->___N_2;
		V_2 = L_3;
		int32_t L_4 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(L_4/8)));
		V_3 = L_5;
		int32_t L_6 = __this->___L_1;
		int32_t L_7 = V_1;
		V_4 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_6, 1))/L_7));
		int32_t L_8 = __this->___L_1;
		int32_t L_9 = V_1;
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_8, 1))%L_9));
		RuntimeObject* L_10 = V_0;
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::GetDigestSize() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_11);
		V_6 = L_12;
	}

IL_0045:
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_13 = __this->___random_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_3;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_13, L_14);
		RuntimeObject* L_15 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_6;
		DsaParametersGenerator_Hash_mD4CE4575508690B3D40A47F77F7F67278C83FF1C(L_15, L_16, L_17, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_6;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_19 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD(L_19, 1, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_20 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___One_15;
		int32_t L_21 = __this->___N_2;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_22;
		L_22 = BigInteger_ShiftLeft_mC662CBB073E2DE2F1C64C51CC756C5E573C43C2C(L_20, ((int32_t)il2cpp_codegen_subtract(L_21, 1)), NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_23;
		L_23 = BigInteger_Mod_mB43D106CC9B09184498FF09EEB439A2790CE91F3(L_19, L_22, NULL);
		V_7 = L_23;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_24 = V_7;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_25;
		L_25 = BigInteger_SetBit_mC7DD9CE75BABE2CE7FC20920508E3C59BF76024C(L_24, 0, NULL);
		int32_t L_26 = __this->___N_2;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_27;
		L_27 = BigInteger_SetBit_mC7DD9CE75BABE2CE7FC20920508E3C59BF76024C(L_25, ((int32_t)il2cpp_codegen_subtract(L_26, 1)), NULL);
		V_8 = L_27;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_28 = V_8;
		int32_t L_29 = __this->___certainty_3;
		bool L_30;
		L_30 = BigInteger_IsProbablePrime_m07F131A76E590E948CC8752DCFD7C6E24A787762(L_28, L_29, NULL);
		if (!L_30)
		{
			goto IL_0045;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32;
		L_32 = Arrays_Clone_mC73CD122DC37EDEB733EC84DB0137D8D7DD5B87F(L_31, NULL);
		V_9 = L_32;
		int32_t L_33 = __this->___L_1;
		V_10 = ((int32_t)il2cpp_codegen_multiply(4, L_33));
		V_11 = 0;
		goto IL_01ea;
	}

IL_00bb:
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_34 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___Zero_14;
		V_12 = L_34;
		V_13 = 0;
		V_14 = 0;
		goto IL_011e;
	}

IL_00ca:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_9;
		DsaParametersGenerator_Inc_mCBC8FCF72F030B84CE81F0BAEADF8B8D0121C679(L_35, NULL);
		RuntimeObject* L_36 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_6;
		DsaParametersGenerator_Hash_mD4CE4575508690B3D40A47F77F7F67278C83FF1C(L_36, L_37, L_38, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_6;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_40 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD(L_40, 1, L_39, NULL);
		V_15 = L_40;
		int32_t L_41 = V_13;
		int32_t L_42 = V_4;
		if ((!(((uint32_t)L_41) == ((uint32_t)L_42))))
		{
			goto IL_0100;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_43 = V_15;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_44 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___One_15;
		int32_t L_45 = V_5;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_46;
		L_46 = BigInteger_ShiftLeft_mC662CBB073E2DE2F1C64C51CC756C5E573C43C2C(L_44, L_45, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_47;
		L_47 = BigInteger_Mod_mB43D106CC9B09184498FF09EEB439A2790CE91F3(L_43, L_46, NULL);
		V_15 = L_47;
	}

IL_0100:
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_48 = V_12;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_49 = V_15;
		int32_t L_50 = V_14;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_51;
		L_51 = BigInteger_ShiftLeft_mC662CBB073E2DE2F1C64C51CC756C5E573C43C2C(L_49, L_50, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_52;
		L_52 = BigInteger_Add_m07559E876B7A0F1CD7E167B773AF3A8748BFBBF2(L_48, L_51, NULL);
		V_12 = L_52;
		int32_t L_53 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		int32_t L_54 = V_14;
		int32_t L_55 = V_1;
		V_14 = ((int32_t)il2cpp_codegen_add(L_54, L_55));
	}

IL_011e:
	{
		int32_t L_56 = V_13;
		int32_t L_57 = V_4;
		if ((((int32_t)L_56) <= ((int32_t)L_57)))
		{
			goto IL_00ca;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_58 = V_12;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_59 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___One_15;
		int32_t L_60 = __this->___L_1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_61;
		L_61 = BigInteger_ShiftLeft_mC662CBB073E2DE2F1C64C51CC756C5E573C43C2C(L_59, ((int32_t)il2cpp_codegen_subtract(L_60, 1)), NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_62;
		L_62 = BigInteger_Add_m07559E876B7A0F1CD7E167B773AF3A8748BFBBF2(L_58, L_61, NULL);
		V_16 = L_62;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_63 = V_16;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_64 = V_8;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_65;
		L_65 = BigInteger_ShiftLeft_mC662CBB073E2DE2F1C64C51CC756C5E573C43C2C(L_64, 1, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_66;
		L_66 = BigInteger_Mod_mB43D106CC9B09184498FF09EEB439A2790CE91F3(L_63, L_65, NULL);
		V_17 = L_66;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_67 = V_16;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_68 = V_17;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_69 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___One_15;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_70;
		L_70 = BigInteger_Subtract_mAF6078F797541D51F7E9D25D4C8A0F79DC8E9CEC(L_68, L_69, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_71;
		L_71 = BigInteger_Subtract_mAF6078F797541D51F7E9D25D4C8A0F79DC8E9CEC(L_67, L_70, NULL);
		V_18 = L_71;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_72 = V_18;
		int32_t L_73;
		L_73 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_72, NULL);
		int32_t L_74 = __this->___L_1;
		if ((!(((uint32_t)L_73) == ((uint32_t)L_74))))
		{
			goto IL_01e4;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_75 = V_18;
		int32_t L_76 = __this->___certainty_3;
		bool L_77;
		L_77 = BigInteger_IsProbablePrime_m07F131A76E590E948CC8752DCFD7C6E24A787762(L_75, L_76, NULL);
		if (!L_77)
		{
			goto IL_01e4;
		}
	}
	{
		int32_t L_78 = __this->___usageIndex_6;
		if ((((int32_t)L_78) < ((int32_t)0)))
		{
			goto IL_01be;
		}
	}
	{
		RuntimeObject* L_79 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_80 = V_18;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_81 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = V_3;
		int32_t L_83 = __this->___usageIndex_6;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_84;
		L_84 = VirtualFuncInvoker5< BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*, RuntimeObject*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(11 /* Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::CalculateGenerator_FIPS186_3_Verifiable(Org.BouncyCastle.Crypto.IDigest,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,System.Byte[],System.Int32) */, __this, L_79, L_80, L_81, L_82, L_83);
		V_19 = L_84;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_85 = V_19;
		if (!L_85)
		{
			goto IL_01be;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_86 = V_18;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_87 = V_8;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_88 = V_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = V_3;
		int32_t L_90 = V_11;
		int32_t L_91 = __this->___usageIndex_6;
		DsaValidationParameters_t7019CA9E54B90D455DFE413C2EF78921995F6783* L_92 = (DsaValidationParameters_t7019CA9E54B90D455DFE413C2EF78921995F6783*)il2cpp_codegen_object_new(DsaValidationParameters_t7019CA9E54B90D455DFE413C2EF78921995F6783_il2cpp_TypeInfo_var);
		DsaValidationParameters__ctor_m0C7AEA9CFA5421933928EE5D1EBD8CF9EC3F0C8D(L_92, L_89, L_90, L_91, NULL);
		DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* L_93 = (DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417*)il2cpp_codegen_object_new(DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417_il2cpp_TypeInfo_var);
		DsaParameters__ctor_mE694ECE368E04CF2A7F21880E46C8F78FDF7702A(L_93, L_86, L_87, L_88, L_92, NULL);
		return L_93;
	}

IL_01be:
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_94 = V_18;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_95 = V_8;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_96 = __this->___random_4;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_97;
		L_97 = VirtualFuncInvoker3< BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*, SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* >::Invoke(10 /* Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::CalculateGenerator_FIPS186_3_Unverifiable(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Security.SecureRandom) */, __this, L_94, L_95, L_96);
		V_20 = L_97;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_98 = V_18;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_99 = V_8;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_100 = V_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_101 = V_3;
		int32_t L_102 = V_11;
		DsaValidationParameters_t7019CA9E54B90D455DFE413C2EF78921995F6783* L_103 = (DsaValidationParameters_t7019CA9E54B90D455DFE413C2EF78921995F6783*)il2cpp_codegen_object_new(DsaValidationParameters_t7019CA9E54B90D455DFE413C2EF78921995F6783_il2cpp_TypeInfo_var);
		DsaValidationParameters__ctor_mC1694F5DB4D1DBCB7DDB4F25E5D0B7B043691D67(L_103, L_101, L_102, NULL);
		DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* L_104 = (DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417*)il2cpp_codegen_object_new(DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417_il2cpp_TypeInfo_var);
		DsaParameters__ctor_mE694ECE368E04CF2A7F21880E46C8F78FDF7702A(L_104, L_98, L_99, L_100, L_103, NULL);
		return L_104;
	}

IL_01e4:
	{
		int32_t L_105 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_105, 1));
	}

IL_01ea:
	{
		int32_t L_106 = V_11;
		int32_t L_107 = V_10;
		if ((((int32_t)L_106) < ((int32_t)L_107)))
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_0045;
	}
}
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::CalculateGenerator_FIPS186_3_Unverifiable(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Security.SecureRandom)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DsaParametersGenerator_CalculateGenerator_FIPS186_3_Unverifiable_mD6692716F537DD7625117CE8850DC5E1D2193A83 (DsaParametersGenerator_t63BFEA1A257818D469B6F140F93D29A725815D76* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___p0, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___q1, SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___r2, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = ___p0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_1 = ___q1;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_2 = ___r2;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_3;
		L_3 = VirtualFuncInvoker3< BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*, SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* >::Invoke(8 /* Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::CalculateGenerator_FIPS186_2(Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Security.SecureRandom) */, __this, L_0, L_1, L_2);
		return L_3;
	}
}
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::CalculateGenerator_FIPS186_3_Verifiable(Org.BouncyCastle.Crypto.IDigest,Org.BouncyCastle.Math.BigInteger,Org.BouncyCastle.Math.BigInteger,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DsaParametersGenerator_CalculateGenerator_FIPS186_3_Verifiable_m87875762D8F6A82A2D9E314E4F6D56C8824D10D8 (DsaParametersGenerator_t63BFEA1A257818D469B6F140F93D29A725815D76* __this, RuntimeObject* ___d0, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___p1, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___q2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___seed3, int32_t ___index4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hex_t7457F6D4DC900156C750BB04D59F8D3B4428F060_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7034789FCBBBAEA1851A7EBAF3B9DA340883CFAA);
		s_Il2CppMethodInitialized = true;
	}
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_5 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_6 = NULL;
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = ___p1;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_1 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___One_15;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_2;
		L_2 = BigInteger_Subtract_mAF6078F797541D51F7E9D25D4C8A0F79DC8E9CEC(L_0, L_1, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_3 = ___q2;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_4;
		L_4 = BigInteger_Divide_m018E671AD9093F75F671A152FC99787AE4C1E2A8(L_2, L_3, NULL);
		V_0 = L_4;
		il2cpp_codegen_runtime_class_init_inline(Hex_t7457F6D4DC900156C750BB04D59F8D3B4428F060_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Hex_DecodeStrict_mDF7EF3473AEFDD75DEC74296066509468750C551(_stringLiteral7034789FCBBBAEA1851A7EBAF3B9DA340883CFAA, NULL);
		V_1 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___seed3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_6)->max_length)), ((int32_t)(((RuntimeArray*)L_7)->max_length)))), 1)), 2)));
		V_2 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___seed3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___seed3;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___seed3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_12, 0, (RuntimeArray*)L_13, ((int32_t)(((RuntimeArray*)L_14)->max_length)), ((int32_t)(((RuntimeArray*)L_15)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_2;
		int32_t L_18 = ___index4;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), 3))), (uint8_t)((int32_t)(uint8_t)L_18));
		RuntimeObject* L_19 = ___d0;
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::GetDigestSize() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_3 = L_21;
		V_4 = 1;
		goto IL_00a1;
	}

IL_0067:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_2;
		DsaParametersGenerator_Inc_mCBC8FCF72F030B84CE81F0BAEADF8B8D0121C679(L_22, NULL);
		RuntimeObject* L_23 = ___d0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_3;
		DsaParametersGenerator_Hash_mD4CE4575508690B3D40A47F77F7F67278C83FF1C(L_23, L_24, L_25, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_3;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_27 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD(L_27, 1, L_26, NULL);
		V_5 = L_27;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_28 = V_5;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_29 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_30 = ___p1;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_31;
		L_31 = BigInteger_ModPow_mEBA47DA30ABB2A99E1AE1FB9C59F2C649C82AAA7(L_28, L_29, L_30, NULL);
		V_6 = L_31;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_32 = V_6;
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_33 = ((BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields*)il2cpp_codegen_static_fields_for(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var))->___Two_16;
		int32_t L_34;
		L_34 = BigInteger_CompareTo_m2AC6C020406E0012C1F48B7C3193552F605AC1D9(L_32, L_33, NULL);
		if ((((int32_t)L_34) < ((int32_t)0)))
		{
			goto IL_009b;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_35 = V_6;
		return L_35;
	}

IL_009b:
	{
		int32_t L_36 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00a1:
	{
		int32_t L_37 = V_4;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)65536))))
		{
			goto IL_0067;
		}
	}
	{
		return (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)NULL;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::IsValidDsaStrength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DsaParametersGenerator_IsValidDsaStrength_mEFEF36F0C8273CAFB0E6679A224D7EA4C85AC255 (int32_t ___strength0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___strength0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)512))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___strength0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = ___strength0;
		return (bool)((((int32_t)((int32_t)(L_2%((int32_t)64)))) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return (bool)0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::Hash(Org.BouncyCastle.Crypto.IDigest,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DsaParametersGenerator_Hash_mD4CE4575508690B3D40A47F77F7F67278C83FF1C (RuntimeObject* ___d0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___d0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input1;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_0, L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)));
		RuntimeObject* L_3 = ___d0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output2;
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_3, L_4, 0);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::GetDefaultN(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DsaParametersGenerator_GetDefaultN_mC42D43EEE4953B80EAC416247CF0756B32FD76AD (int32_t ___L0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___L0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)1024))))
		{
			goto IL_000e;
		}
	}
	{
		return ((int32_t)160);
	}

IL_000e:
	{
		return ((int32_t)256);
	}
}
// System.Void Org.BouncyCastle.Crypto.Generators.DsaParametersGenerator::Inc(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DsaParametersGenerator_Inc_mCBC8FCF72F030B84CE81F0BAEADF8B8D0121C679 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___buf0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), 1));
		goto IL_001b;
	}

IL_0008:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buf0;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, 1)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___buf0;
		int32_t L_6 = V_0;
		uint8_t L_7 = V_1;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)L_7);
		uint8_t L_8 = V_1;
		if (!L_8)
		{
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___parameters_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KdfParameters_GetSharedSecret_mB00485EF0C7C97E963675D246D473D1D994B38EB_inline (KdfParameters_tDDC5A4A75A5909F80507E6486C806E9B4DCCDB74* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___shared_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KdfParameters_GetIV_m9E5FE64A81DC7B69E03109572863DEE103FEEEEB_inline (KdfParameters_tDDC5A4A75A5909F80507E6486C806E9B4DCCDB74* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___iv_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Iso18033KdfParameters_GetSeed_mF93FDBB9B4F20C42A33D8EFCD4E75B22B8623A25_inline (Iso18033KdfParameters_t435295BD3FF4961A3F72F01DE4183C5AE4F4FB2D* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___seed_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* KeyGenerationParameters_get_Random_m36DBFE034B9D03191BEE80E701349E930D856329_inline (KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* __this, const RuntimeMethod* method) 
{
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_0 = __this->___random_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyGenerationParameters_get_Strength_m64B79D8D5F0B4342E9E889828CDBC6515EDD5F38_inline (KeyGenerationParameters_t1A9D828BFC1FD9919EC6077BF0187D4C2958672C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___strength_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* DHKeyGenerationParameters_get_Parameters_m5103CF17AA3A80CF5CE51CCEC73CEFA1DB32AD6B_inline (DHKeyGenerationParameters_tD5A3FB2C39D2FD9A7CD4C2F06709296503C6B4E2* __this, const RuntimeMethod* method) 
{
	{
		DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* L_0 = __this->___parameters_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DHParameters_get_L_m6976BF02E760CF18E4FA1C02BC8E162DB249C939_inline (DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___l_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DHParameters_get_M_m3DC8567443DE5CD6078A4A7C1ACC8E6F17F28EB0_inline (DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DHParameters_get_Q_m0DD0E39FE8BFAFB56AB54D1FBAA489CBBBAD8DEB_inline (DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = __this->___q_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DHParameters_get_P_m5A4C54E2E7E4F66611A3C676C9D3ABB70E24D2B8_inline (DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = __this->___p_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DHParameters_get_G_m2199635E8D10308B0EE73620A916CE93E6A86D3A_inline (DHParameters_t011A6A5562D407D6DA32D30AC7F2BBA08B432B59* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = __this->___g_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* DsaKeyGenerationParameters_get_Parameters_mCF5A4ED627E5D1747F018E1DC2689F048B5102EB_inline (DsaKeyGenerationParameters_t54036A87799BBB5ABE90C0466CE5F998BE0527D6* __this, const RuntimeMethod* method) 
{
	{
		DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* L_0 = __this->___parameters_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DsaParameters_get_Q_m6C404267767358DAD5F1A0DF72B0EEC128C7E2DC_inline (DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = __this->___q_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DsaParameters_get_P_mEB071E8B64B7AE5BC3C4FE6828E40D829918E6A6_inline (DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = __this->___p_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* DsaParameters_get_G_m37FF17F3C12F8DFB88C8DE8B69BD03B40B505CFE_inline (DsaParameters_t4D4E74D2C830E839C864B785A1908AF13B226417* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = __this->___g_2;
		return L_0;
	}
}
