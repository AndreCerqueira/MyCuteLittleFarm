#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.UInt64[][]
struct UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// Org.BouncyCastle.Crypto.Digests.CShakeDigest
struct CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE;
// Org.BouncyCastle.Crypto.Digests.Dstu7564Digest
struct Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05;
// Org.BouncyCastle.Crypto.Digests.GeneralDigest
struct GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7;
// Org.BouncyCastle.Crypto.Engines.Gost28147Engine
struct Gost28147Engine_t29BD1E345CC0E47601E13C510505E011D0F5A7D5;
// Org.BouncyCastle.Crypto.Digests.Gost3411Digest
struct Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2;
// Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
struct Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2;
// Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest
struct Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656;
// Org.BouncyCastle.Crypto.Digests.Gost3411_2012_512Digest
struct Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_tE4751F03244264E12A0669633A68076FD032E2CF;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Org.BouncyCastle.Crypto.Digests.KeccakDigest
struct KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC;
// Org.BouncyCastle.Crypto.Digests.LongDigest
struct LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA;
// Org.BouncyCastle.Crypto.Digests.MD2Digest
struct MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE;
// Org.BouncyCastle.Crypto.Digests.MD4Digest
struct MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD;
// Org.BouncyCastle.Crypto.Digests.MD5Digest
struct MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// Org.BouncyCastle.Crypto.Digests.NonMemoableDigest
struct NonMemoableDigest_t04F9BFBAAE58DA370AD49DAA391B6B01AE338BBA;
// Org.BouncyCastle.Crypto.Digests.NullDigest
struct NullDigest_t698461B1C0890DE29DADCD13F9C2D0CED109AAEB;
// Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox
struct ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1;
// Org.BouncyCastle.Crypto.Digests.RipeMD128Digest
struct RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// Org.BouncyCastle.Crypto.Digests.ShakeDigest
struct ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gost28147Engine_t29BD1E345CC0E47601E13C510505E011D0F5A7D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60012daU2D1_9_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001304U2D1_10_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001304U2D2_11_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001304U2D3_12_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001304U2D4_13_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600132bU2D1_14_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D10_24_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D11_25_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D12_26_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D13_27_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D14_28_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D15_29_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D16_30_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D17_31_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D18_32_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D19_33_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D1_15_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D20_34_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D2_16_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D3_17_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D4_18_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D5_19_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D6_20_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D7_21_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D8_22_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D9_23_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001344U2D1_35_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001362U2D1_36_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001371U2D1_37_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08DDE1A16B430B92E18027F90410E7A1BBE194F2;
IL2CPP_EXTERN_C String_t* _stringLiteral2D09C41582674F1982BDB869DC6E0E8E03B42E47;
IL2CPP_EXTERN_C String_t* _stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58;
IL2CPP_EXTERN_C String_t* _stringLiteral3432BEFEC70FFAAEC3E17E139E849DC1F8251267;
IL2CPP_EXTERN_C String_t* _stringLiteral3FDAB44963B739C563B4CBB8193839AB37E78B75;
IL2CPP_EXTERN_C String_t* _stringLiteral410FC4E1DDB5FBB0F905E92CEBD6EB2AB954C222;
IL2CPP_EXTERN_C String_t* _stringLiteral50A03276CDCF780E3EC05BDBA7CD074DBB6471DE;
IL2CPP_EXTERN_C String_t* _stringLiteral53CE3854A381FE03C65D949A33C2E1D7DBA02CB4;
IL2CPP_EXTERN_C String_t* _stringLiteral551A56E699A1D330BA6125604C7025562B94E331;
IL2CPP_EXTERN_C String_t* _stringLiteral61CC1BD712ECBE447E5920A5AAFEB91539F0990B;
IL2CPP_EXTERN_C String_t* _stringLiteral712ED77D49FD877852BE70E220E1B7F9970538D6;
IL2CPP_EXTERN_C String_t* _stringLiteral88ABBDEE731F56D989C298F52912B7B0D27D0D84;
IL2CPP_EXTERN_C String_t* _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
IL2CPP_EXTERN_C String_t* _stringLiteral9397148F89F0190A6F00BDB28BE98E9396F81D29;
IL2CPP_EXTERN_C String_t* _stringLiteralA4BE569CCF2D02C05077C0DD81A65D77B046AD39;
IL2CPP_EXTERN_C String_t* _stringLiteralA5D5402405EA46FA1359EF38E2451145DB09D1C5;
IL2CPP_EXTERN_C String_t* _stringLiteralA8E3A14BFED9F7D70EFB2C59F8DBAC2A52180062;
IL2CPP_EXTERN_C String_t* _stringLiteralA9CE360493B86C87454160F971971A9C9A08230E;
IL2CPP_EXTERN_C String_t* _stringLiteralBDEEDBEA213356129E472B5A1DE17C2E43607769;
IL2CPP_EXTERN_C String_t* _stringLiteralC8A2AD3F4AF7133FDACD2ECF3BAA601D875117C7;
IL2CPP_EXTERN_C String_t* _stringLiteralCB44B6D70DD5244AC0FDDD23B5291F9C2AFA55DE;
IL2CPP_EXTERN_C String_t* _stringLiteralCE0379382C2810C1AED5C5B0021E7B8221741E17;
IL2CPP_EXTERN_C String_t* _stringLiteralD039C76F6BA3380896DFB0DA8F26D45B1448F44F;
IL2CPP_EXTERN_C String_t* _stringLiteralD0B955404E183709B5C731BFCF31085857DE0EC3;
IL2CPP_EXTERN_C String_t* _stringLiteralDEFDD99707701302B4F3A4CE68BC9EB2926D7283;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EAC5FB560F66352524E7787FB0EE634A342B4B;
IL2CPP_EXTERN_C String_t* _stringLiteralEB7CCC8642D7B5521BC4E7440146281DA06EFDDF;
IL2CPP_EXTERN_C const RuntimeMethod* Dstu7564Digest_ShiftRows_mC48853FB3201FF63C6F0311ABC41CBD62187979D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dstu7564Digest__ctor_mA6BDB63EBD7A709B0FE32C268D153A9D9DA2650A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeccakDigest_AbsorbBits_mDF0B3C132153676498B7FCBC52458DEC8D2F1015_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeccakDigest_Absorb_m2134FF1C7576CAFCB54798F5E02248622A5EABD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeccakDigest_Absorb_m56F9CE4FAB360094C8F6EBB6071CDF7F322E6F8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeccakDigest_InitSponge_mF46B626D1E9C3AA3629A1F12A52529CE6D019910_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeccakDigest_Init_m734F88A90C8453E37E830B7B5A28A67ECFC3E878_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeccakDigest_Squeeze_m06A0BB20D5E6F05E57FDF21843493ADBEB2F5449_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NonMemoableDigest__ctor_m22F6587ACAD15A2B4A16661AFC0E77646B0F6837_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShakeDigest_CheckBitLength_m51E246BC70E65594387D9ECA5E4B674AE7696EC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShakeDigest_DoFinal_m25232001180CC6CDFB24014E4C8FC5A5077CCBF9_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// Org.BouncyCastle.Crypto.Digests.Dstu7564Digest
struct Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::hashSize
	int32_t ___hashSize_4;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::blockSize
	int32_t ___blockSize_5;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::columns
	int32_t ___columns_6;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::rounds
	int32_t ___rounds_7;
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::state
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___state_8;
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::tempState1
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___tempState1_9;
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::tempState2
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___tempState2_10;
	// System.UInt64 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::inputBlocks
	uint64_t ___inputBlocks_11;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::bufOff
	int32_t ___bufOff_12;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_13;
};

struct Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_StaticFields
{
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::S0
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S0_14;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::S1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S1_15;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::S2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S2_16;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::S3
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S3_17;
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

// Org.BouncyCastle.Crypto.Engines.Gost28147Engine
struct Gost28147Engine_t29BD1E345CC0E47601E13C510505E011D0F5A7D5  : public RuntimeObject
{
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.Gost28147Engine::workingKey
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___workingKey_1;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.Gost28147Engine::forEncryption
	bool ___forEncryption_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Gost28147Engine::S
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S_3;
};

struct Gost28147Engine_t29BD1E345CC0E47601E13C510505E011D0F5A7D5_StaticFields
{
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Gost28147Engine::Sbox_Default
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Sbox_Default_4;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Gost28147Engine::ESbox_Test
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ESbox_Test_5;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Gost28147Engine::ESbox_A
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ESbox_A_6;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Gost28147Engine::ESbox_B
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ESbox_B_7;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Gost28147Engine::ESbox_C
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ESbox_C_8;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Gost28147Engine::ESbox_D
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ESbox_D_9;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Gost28147Engine::DSbox_Test
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DSbox_Test_10;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Gost28147Engine::DSbox_A
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___DSbox_A_11;
	// System.Collections.IDictionary Org.BouncyCastle.Crypto.Engines.Gost28147Engine::sBoxes
	RuntimeObject* ___sBoxes_12;
};

// Org.BouncyCastle.Crypto.Digests.Gost3411Digest
struct Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::H
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___H_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::L
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___L_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::M
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___M_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::Sum
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Sum_4;
	// System.Byte[][] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::C
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___C_5;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::xBuf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___xBuf_6;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.Gost3411Digest::xBufOff
	int32_t ___xBufOff_7;
	// System.UInt64 Org.BouncyCastle.Crypto.Digests.Gost3411Digest::byteCount
	uint64_t ___byteCount_8;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Digests.Gost3411Digest::cipher
	RuntimeObject* ___cipher_9;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::sBox
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sBox_10;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::K
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___K_11;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::a
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a_12;
	// System.Int16[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::wS
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___wS_13;
	// System.Int16[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::w_S
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___w_S_14;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::S
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S_15;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::U
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U_16;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::V
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___V_17;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::W
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___W_18;
};

struct Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_StaticFields
{
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::C2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___C2_19;
};

// Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
struct Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::IV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::N
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___N_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::Sigma
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Sigma_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::Ki
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Ki_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::m
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_4;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::h
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___h_5;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::tmp
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___tmp_6;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::block
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___block_7;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::bOff
	int32_t ___bOff_8;
};

struct Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields
{
	// System.Byte[][] Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::C
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___C_9;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::Zero
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Zero_10;
	// System.UInt64[][] Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::T
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___T_11;
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

// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::key
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key_0;
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

// Org.BouncyCastle.Crypto.Digests.MD2Digest
struct MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.MD2Digest::X
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___X_2;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD2Digest::xOff
	int32_t ___xOff_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.MD2Digest::M
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___M_4;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD2Digest::mOff
	int32_t ___mOff_5;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.MD2Digest::C
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___C_6;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD2Digest::COff
	int32_t ___COff_7;
};

struct MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE_StaticFields
{
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.MD2Digest::S
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S_8;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Org.BouncyCastle.Crypto.Digests.NonMemoableDigest
struct NonMemoableDigest_t04F9BFBAAE58DA370AD49DAA391B6B01AE338BBA  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Digests.NonMemoableDigest::mBaseDigest
	RuntimeObject* ___mBaseDigest_0;
};

// Org.BouncyCastle.Crypto.Digests.NullDigest
struct NullDigest_t698461B1C0890DE29DADCD13F9C2D0CED109AAEB  : public RuntimeObject
{
	// System.IO.MemoryStream Org.BouncyCastle.Crypto.Digests.NullDigest::bOut
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___bOut_0;
};

// Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox
struct ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox::parameters
	RuntimeObject* ___parameters_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox::sBox
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sBox_1;
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

// Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest
struct Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656  : public Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2
{
};

struct Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656_StaticFields
{
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest::IV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV_12;
};

// Org.BouncyCastle.Crypto.Digests.Gost3411_2012_512Digest
struct Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685  : public Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2
{
};

struct Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685_StaticFields
{
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411_2012_512Digest::IV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV_12;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// Org.BouncyCastle.Crypto.Digests.MD4Digest
struct MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD  : public GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7
{
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::H1
	int32_t ___H1_17;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::H2
	int32_t ___H2_18;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::H3
	int32_t ___H3_19;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::H4
	int32_t ___H4_20;
	// System.Int32[] Org.BouncyCastle.Crypto.Digests.MD4Digest::X
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___X_21;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::xOff
	int32_t ___xOff_22;
};

// Org.BouncyCastle.Crypto.Digests.MD5Digest
struct MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F  : public GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7
{
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.MD5Digest::H1
	uint32_t ___H1_5;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.MD5Digest::H2
	uint32_t ___H2_6;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.MD5Digest::H3
	uint32_t ___H3_7;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.MD5Digest::H4
	uint32_t ___H4_8;
	// System.UInt32[] Org.BouncyCastle.Crypto.Digests.MD5Digest::X
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___X_9;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::xOff
	int32_t ___xOff_10;
};

struct MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields
{
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::S11
	int32_t ___S11_11;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::S12
	int32_t ___S12_12;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::S13
	int32_t ___S13_13;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::S14
	int32_t ___S14_14;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::S21
	int32_t ___S21_15;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::S22
	int32_t ___S22_16;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::S23
	int32_t ___S23_17;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::S24
	int32_t ___S24_18;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::S31
	int32_t ___S31_19;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::S32
	int32_t ___S32_20;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::S33
	int32_t ___S33_21;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::S34
	int32_t ___S34_22;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::S41
	int32_t ___S41_23;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::S42
	int32_t ___S42_24;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::S43
	int32_t ___S43_25;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::S44
	int32_t ___S44_26;
};

// Org.BouncyCastle.Crypto.Digests.RipeMD128Digest
struct RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5  : public GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7
{
	// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::H0
	int32_t ___H0_5;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::H1
	int32_t ___H1_6;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::H2
	int32_t ___H2_7;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::H3
	int32_t ___H3_8;
	// System.Int32[] Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::X
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___X_9;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::xOff
	int32_t ___xOff_10;
};

// Org.BouncyCastle.Crypto.Digests.ShakeDigest
struct ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940  : public KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8
{
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
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

// Org.BouncyCastle.Crypto.Digests.CShakeDigest
struct CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE  : public ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940
{
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.CShakeDigest::diff
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___diff_8;
};

struct CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_StaticFields
{
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.CShakeDigest::padding
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___padding_7;
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

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
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
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[][]
struct UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11  : public RuntimeArray
{
	ALIGN_FIELD (8) UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* m_Items[1];

	inline UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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



// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__ctor_m1D83E44DC559F9E747241A63E130AF770D442FCF (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, int32_t ___bitLength0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::Init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Init_m734F88A90C8453E37E830B7B5A28A67ECFC3E878 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, int32_t ___bitLength0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::CopyIn(Org.BouncyCastle.Crypto.Digests.KeccakDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_CopyIn_m086921566703E4812161AB830FF5673447D3CD1C (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* ___source0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A (RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::Absorb(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Absorb_m2134FF1C7576CAFCB54798F5E02248622A5EABD6 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, uint8_t ___data0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::Absorb(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Absorb_m56F9CE4FAB360094C8F6EBB6071CDF7F322E6F8C (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::Squeeze(System.Byte[],System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Squeeze_m06A0BB20D5E6F05E57FDF21843493ADBEB2F5449 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___offset1, int64_t ___outputLength2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::AbsorbBits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_AbsorbBits_mDF0B3C132153676498B7FCBC52458DEC8D2F1015 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, int32_t ___data0, int32_t ___bits1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::InitSponge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_InitSponge_mF46B626D1E9C3AA3629A1F12A52529CE6D019910 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, int32_t ___rate0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Arrays::Fill(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrays_Fill_m23EB1BA27E305EC869992BD6CA3D6B30F142FD22 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, uint8_t ___b1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::KeccakAbsorb(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_KeccakAbsorb_m605BC12CF2DB6FE9F9BD51EB001B55DBF546C87C (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___off1, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Utilities.Pack::LE_To_UInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_LE_To_UInt64_m7F95797FD245489E424B633B5786987B95C2E0DA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::PadAndSwitchToSqueezingPhase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_PadAndSwitchToSqueezingPhase_mDFA5986EC94BFC1442E60F83F9146114AECE9015 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::KeccakExtract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_KeccakExtract_m61E2D7755139E3ADEB8D1A0C55AEBA191DDAA3F7 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, const RuntimeMethod* method) ;
// System.Int64 System.Math::Min(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Math_Min_m5721B54E3DBEE8C9FC599B1561D098235B11EE81 (int64_t ___val10, int64_t ___val21, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::KeccakPermutation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_KeccakPermutation_m42E23C9D9C841EAA7B98F1CF5909F34D02C1C4AC (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt64_To_LE(System.UInt64[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_mE04D373C05BB2608972EC6F46F3FC865D848B35C (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ns0, int32_t ___nsOff1, int32_t ___nsLen2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs3, int32_t ___bsOff4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::.ctor(Org.BouncyCastle.Crypto.Digests.KeccakDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__ctor_m9F9DDBE2333ACB3031584F40DE7F77A7B0301887 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* ___source0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.ShakeDigest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeDigest__ctor_m2B3B14BB44A9AD5C9CDBDD41EE6122B928CFC532 (ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* __this, int32_t ___bitLength0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.ShakeDigest::CheckBitLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShakeDigest_CheckBitLength_m51E246BC70E65594387D9ECA5E4B674AE7696EC4 (int32_t ___bitLength0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.ShakeDigest::.ctor(Org.BouncyCastle.Crypto.Digests.ShakeDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeDigest__ctor_m4879A01D3AC477DB3EBAA03423931C69B26FF86D (ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* __this, ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* ___source0, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Utilities.Arrays::IsNullOrEmpty(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_IsNullOrEmpty_m857F7133D4139AE4A4BDA066D96B4E708B55A228 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Digests.XofUtilities::LeftEncode(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* XofUtilities_LeftEncode_mD563830BBEC4715BE3B4A09E22CE76EBA0A0CE72 (int64_t ___strLen0, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Utilities.Arrays::Concatenate(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_Concatenate_mBF2AE3386B1446B9FBF48BCFF071052C2B712AD4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Digests.CShakeDigest::EncodeString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CShakeDigest_EncodeString_m34E03EA3F9D783A5F95DF9C6536F78C25F31EC90 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___str0, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Utilities.Arrays::ConcatenateAll(System.Byte[][])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_ConcatenateAll_m0EA3BD1B3ECB315394C885FF3913A84F9CF24115 (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___vs0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.CShakeDigest::DiffPadAndAbsorb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CShakeDigest_DiffPadAndAbsorb_m3DDF8993182DEC91F62497DC27F9A30273188F90 (CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.ShakeDigest::DoOutput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShakeDigest_DoOutput_m89E8E79C3F5FA21C5B619BC42A5E3899442B4F1E (ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, int32_t ___outLen2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Reset_mE30FA11687332C83798A868A6622DA71A2C0C483 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.Dstu7564Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest_CopyIn_m15D93A16B0671F325634291F62146B1770E480E9 (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* ___digest0, const RuntimeMethod* method) ;
// System.UInt64[] Org.BouncyCastle.Utilities.Arrays::Clone(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Arrays_Clone_m271EAB8D16255673EB3F60DE30564ADE004B4DE5 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___data0, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Utilities.Arrays::Clone(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_Clone_mC73CD122DC37EDEB733EC84DB0137D8D7DD5B87F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt32_To_LE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_LE_mA6C2D23F4AFF959717160ABC23B31EC76F53877E (uint32_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt64_To_LE(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_m636E90C1902B2A82549A884FBC29A86CEB2B73F2 (uint64_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::P(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest_P_m2445FF277DC5CE297BE7470B0014D4F6EBECCBFA (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::Q(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest_Q_mE13C260C970C2C4F9511542EF27FA5D68A37A8B6 (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::ShiftRows(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest_ShiftRows_mC48853FB3201FF63C6F0311ABC41CBD62187979D (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::SubBytes(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest_SubBytes_m11C167583957E2C6CEB3053345AA32AEDB233D3F (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::MixColumns(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest_MixColumns_mDB22CFC5EE817AFCE3A361EA7BFC6BEA8862A55D (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s0, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::Rotate(System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Dstu7564Digest_Rotate_m412B2D17E6CF9F5AC1218A1D68F151BC624F8559 (int32_t ___n0, uint64_t ___x1, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::MixColumn(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Dstu7564Digest_MixColumn_m69620BB77E248E433FF5773E1C83A6970662E562 (uint64_t ___c0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::.ctor(Org.BouncyCastle.Crypto.Digests.Dstu7564Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest__ctor_m471B9F06EEF6E678349B3219E11FB3F4C6EF6A2F (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* ___digest0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::CopyIn(Org.BouncyCastle.Crypto.Digests.GeneralDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralDigest_CopyIn_mB0E17BFA6B0BC2D95FE8B64B7837E63CD4EDF728 (GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* __this, GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* ___t0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralDigest_Update_mF43CD544C09FF984DB3A01CA852F0A118D31FD4A (GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* __this, uint8_t ___input0, const RuntimeMethod* method) ;
// System.Byte[][] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::MakeC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* Gost3411Digest_MakeC_m6D0CDDD5D55B201D6CD038FBCE8745ABA8D6FA53 (const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.Gost28147Engine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost28147Engine__ctor_m9C1C2F7158C48084229E8FD339838EF98DF38DB9 (Gost28147Engine_t29BD1E345CC0E47601E13C510505E011D0F5A7D5* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Engines.Gost28147Engine::GetSBox(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Gost28147Engine_GetSBox_mD3E516D20A246BBF03AB132344B7A3F840CE36C3 (String_t* ___sBoxName0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox::.ctor(Org.BouncyCastle.Crypto.ICipherParameters,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParametersWithSBox__ctor_m3B4F5415B0E95F8FD839B5EE6789A904F7EAFE53 (ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1* __this, RuntimeObject* ___parameters0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sBox1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_Reset_m78CE1AFB9F1C873BBAC0808ACEB4AF99547B29F3 (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_Reset_m6BD197C00F49D6321864BE3B3773F707B33E2EFF (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, RuntimeObject* ___other0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::sumByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_sumByteArray_m4A0AB103BEAFDE2983BF418C2BC66451677E194E (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::processBlock(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_processBlock_mA6B7625B76A2997A3ED2DD4DE051F2B4DFE30288 (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_Update_m1C9A41A4AE29CB43DA0FC698DFF7FBD1D94875C2 (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, uint8_t ___input0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.KeyParameter::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyParameter__ctor_m178EFF09A4FE23B3FD358AB94605EC4528FBF093 (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::cpyBytesToShort(System.Byte[],System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_cpyBytesToShort_m3991886AEDB0FFD32D3F0748885C29C75AE90501 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___wS1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::cpyShortToBytes(System.Int16[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_cpyShortToBytes_m7AFDFD4D3C2EDBA8408E61575F14A1A7417D8F12 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___wS0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S1, const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::P(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Gost3411Digest_P_m94E61F92A7F18CB8A195BE19630000324D6FF60F (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::E(System.Byte[],System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_E_m02A44FC27507421085A9BAAD45D8984B53B80397 (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s1, int32_t ___sOff2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input3, int32_t ___inOff4, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::A(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Gost3411Digest_A_mA7DDF9596FDCF9DB08B711FF6218B55115397FE1 (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::fw(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_fw_m817835C78C0E77A4D1B35BDCFBBA7BA297DA7444 (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt64_To_LE(System.UInt64,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_m3ABFFFC970ABED1C4FB7002081BCC9E3E9572D50 (uint64_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_finish_mD746DBA20B651B38B762719443B19BC76958759B (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::.ctor(Org.BouncyCastle.Crypto.Digests.Gost3411Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest__ctor_m7BE183D28547FCAB000AA35DE491A1F29BDF5CC1 (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* ___t0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4239F97ECC23A71F4191B8722362A1AA38E2E98F (RuntimeArray* ___sourceArray0, RuntimeArray* ___destinationArray1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::g_N(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_g_N_m441429BF760A3E878A74E68C02F233F8F5F9B4F1 (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___h0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___N1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::addMod512(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_addMod512_mCB37872559037826F7B5A1EB38D15D099B3B1C4B (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___A0, int32_t ___num1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::addMod512(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_addMod512_m3FC2369D44D867DB3EBFF3A8281E259E5D9C08E0 (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___A0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___B1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::reverse(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_reverse_m59685AE9498C15A77E256858F06117E8627C9C8A (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_Reset_mE517CD2A7C5F603D45837FF006648D2DCBFC5DC0 (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_Update_m22952322FF29985CBF8F7D9138D39A5748A2F95A (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, uint8_t ___input0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::xor512(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_xor512_m2A6AF85CDF51FA414511B5FBF33385B17BFF1E2A (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___A0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___B1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::F(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_F_m4F55D8B30B573B83103FF641E90B5D7B1259051B (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___V0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::E(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_E_m465ECEB4CBF011DC82AF31C52B8C699DD01E0D0B (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___K0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest__ctor_m6CD7868ACCD75EE18356499653E61328971BDA1C (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_Reset_m7F04AE28539262120A8DF67549196E85C9B79FE2 (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, RuntimeObject* ___other0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Gost3411_2012Digest_DoFinal_mB8AB63CD7B3375B7975ED99C5D67DFAE2BBF91C2 (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest::.ctor(Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012_256Digest__ctor_m366182D8220BF206BF51AF4A3A2955087107ADB6 (Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656* __this, Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656* ___other0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012_512Digest::.ctor(Org.BouncyCastle.Crypto.Digests.Gost3411_2012_512Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012_512Digest__ctor_mEE629AF2F42F67FC352E214B60D637A54D755A3A (Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685* __this, Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685* ___other0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::CopyIn(Org.BouncyCastle.Crypto.Digests.LongDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest_CopyIn_m82EB20D6B682CBF6A1C50926026AFD63CBACE104 (LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* __this, LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* ___t0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::ProcessWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest_ProcessWord_m081B7DBA550C06ABE1DA3CBBC44D42B07C5AE325 (LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest_Update_mCFE01A89BD87EC757EE45959A000CC566789B787 (LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* __this, uint8_t ___input0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::AdjustByteCounts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest_AdjustByteCounts_m6CCA957F4255D64AA68074E8AB167247427A2C80 (LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::ProcessLength(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest_ProcessLength_mB93E6584362792C3361759AE7D587A2322CD4B59 (LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* __this, int64_t ___lowW0, int64_t ___hiW1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::ProcessBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest_ProcessBlock_m36815C33BE94D934CC871328F2F370F81EB930F8 (LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* __this, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Utilities.Pack::BE_To_UInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_BE_To_UInt64_m0358D9CAC4DB4488FA471673A6333E081953FA88 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::Sigma1(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t LongDigest_Sigma1_m82BF9B3F91EA947DDECB4A63EC592AB7CB084F61 (uint64_t ___x0, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::Sigma0(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t LongDigest_Sigma0_mEA4DAC76E2ADAB4008FD0E9A4321573FBDA673EC (uint64_t ___x0, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::Sum1(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t LongDigest_Sum1_m75DD381FC1DDA6C49CE5E86BB9974A939E50B90A (uint64_t ___x0, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::Ch(System.UInt64,System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t LongDigest_Ch_mD51A6450F8D85E36B4AF3E59E8F3C4DCE8A73022 (uint64_t ___x0, uint64_t ___y1, uint64_t ___z2, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::Sum0(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t LongDigest_Sum0_m325EACDA096FFC9A041FD10B72466AC4415B9ABE (uint64_t ___x0, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::Maj(System.UInt64,System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t LongDigest_Maj_mFE8AD8577D8F096B387FC1A3094AAF16AE1DDB6B (uint64_t ___x0, uint64_t ___y1, uint64_t ___z2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Digest_Reset_m551F72DA96E23819DEC9A9994737D21406785CB7 (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.MD2Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Digest_CopyIn_m4F649DF116FFB2358A4EF8326AA2483A4E4709E2 (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* ___t0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::ProcessChecksum(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Digest_ProcessChecksum_m697CEA38FB431A19E3FD6CFDB74A528FB14E1D14 (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::ProcessBlock(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Digest_ProcessBlock_mD15EFB97AB43F483AF2EC818673E3DB4FC180E0C (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Digest_Update_m79CA8AA51C792F7D8A2E021A65B581A68EA4059B (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, uint8_t ___input0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::.ctor(Org.BouncyCastle.Crypto.Digests.MD2Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Digest__ctor_mC4D69E1E1D74FD3E3BF5BBBF64F46E13E5B8C2E9 (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* ___t0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralDigest__ctor_m67E803310E7744886EF893C646D312868DCCD1FD (GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::.ctor(Org.BouncyCastle.Crypto.Digests.GeneralDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralDigest__ctor_m87B9D3E5C08DBEC58227C8469EEA9EC47F6A84F7 (GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* __this, GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* ___t0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.MD4Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Digest_CopyIn_mCCBCCCDE55EC2432E0BA942F92D05D5921F45DCD (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* ___t0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralDigest_Finish_m9D444CDCBC760932CD5318A831449973B1FC226E (GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::UnpackWord(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Digest_UnpackWord_m86377B7B02D561680CE976F580B9988CC94CD1F6 (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, int32_t ___word0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes1, int32_t ___outOff2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralDigest_Reset_m1CDCFA775518A1FBB227FCB0673015400D6FF246 (GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::F(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MD4Digest_F_mC13771DF85666927DB01E0AC8872B152F819FB68 (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, int32_t ___u0, int32_t ___v1, int32_t ___w2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::RotateLeft(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, int32_t ___x0, int32_t ___n1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::G(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MD4Digest_G_m9195B96B4DCD712A673901E10401728BFCE222D1 (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, int32_t ___u0, int32_t ___v1, int32_t ___w2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::H(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MD4Digest_H_m8D92EDD73A791E815AB49BBC2133BF56B44B4DBE (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, int32_t ___u0, int32_t ___v1, int32_t ___w2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::.ctor(Org.BouncyCastle.Crypto.Digests.MD4Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Digest__ctor_mD292CB65819BFE65F535DA679B05A8DC7623A9CB (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* ___t0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.MD5Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Digest_CopyIn_m091743A9BC82B743492973AFC98F6F997B6FBFFC (MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* __this, MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* ___t0, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Utilities.Pack::LE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_LE_To_UInt32_m523CAAB94AE6FBA378E8DF774ADAC6195FAEAE42 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.MD5Digest::F(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MD5Digest_F_m92BD0AC2F9931BFFF1AA640EDFC7C94015C3D08D (uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.MD5Digest::RotateLeft(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234 (uint32_t ___x0, int32_t ___n1, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.MD5Digest::G(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MD5Digest_G_m91E3B8C58D304A73BEE2964F7EA843F14D9E68A2 (uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.MD5Digest::H(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MD5Digest_H_m9A2281C45EF892B8E0573E51DF909EA8E922BAB4 (uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Digests.MD5Digest::K(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MD5Digest_K_mA6A1A627CC947060CDAB030536AE17AC0D9183F5 (uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::.ctor(Org.BouncyCastle.Crypto.Digests.MD5Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Digest__ctor_m5D403EFCDA6AF3D22FB9F82E1FA5A23ADEC8F709 (MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* __this, MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* ___t0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.NullDigest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullDigest_Reset_m158EAD5F8A4F5060BBB7645075E250A044D2AC1B (NullDigest_t698461B1C0890DE29DADCD13F9C2D0CED109AAEB* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Utilities.IO.Streams::WriteBufTo(System.IO.MemoryStream,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Streams_WriteBufTo_m05156EE325EC5A0840F4C3E80D2B628ED0DFA25A (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___buf0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output1, int32_t ___offset2, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.RipeMD128Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD128Digest_CopyIn_m5F89593A11CC7C6F3243D9D8DA20FB5B1E993024 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* ___t0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::UnpackWord(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD128Digest_UnpackWord_mCC64E70F7796D22A52B053B08DF48FA048B33A29 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___word0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes1, int32_t ___outOff2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F1(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_F1_m9337A3708127661C6700820695A4E7B833FAC49C (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::RL(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_RL_mA5D5871282B7A77A2ED046DB853ACEBD95CE0925 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___x0, int32_t ___n1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F2(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_F2_m5B69D7352F24E8AC9757BBB47095C14097776593 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F3(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_F3_m43566ED5C5C004B36ECCBCCC8CAF00E10CDCA940 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F4(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_F4_m63489269B9C669FB6CB3911E208E1863CA4EA756 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F1(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_F1_m6E10C9AA8DD98DE1DBF63A89FC4261BE6EC1A77B (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F2(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_F2_mF92C740F44D350DFBC44C52EED8428B8E69AEF11 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F3(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_F3_m26C3AB304E707ED79093994AF261EC963CD917E7 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F4(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_F4_m05D095DCFDDCD3E6D4E73AC7753A4B78CFF6126E (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::FF4(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_FF4_m554A43D96567012C1926724F89DDC3B4D1996677 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::FF3(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_FF3_mFB878B1320EE010E64F3C7209ACD5739F150ACEE (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::FF2(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_FF2_mE693D130117CF7BA1D5CE56CD81A74C2CEA99DF3 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::FF1(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_FF1_mCB220455CE395A1FB419000484C7F22A654E7F3E (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::.ctor(Org.BouncyCastle.Crypto.Digests.RipeMD128Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD128Digest__ctor_m68A8B6F8390C125DF5022DEB1C7D89A65FD29027 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* ___t0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__ctor_m0F07EBD1B1B9048558B6BB92A45435D52952A6D0 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, const RuntimeMethod* method) 
{
	{
		KeccakDigest__ctor_m1D83E44DC559F9E747241A63E130AF770D442FCF(__this, ((int32_t)288), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__ctor_m1D83E44DC559F9E747241A63E130AF770D442FCF (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, int32_t ___bitLength0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)25));
		__this->___state_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___state_1), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192));
		__this->___dataQueue_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataQueue_2), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_2 = ___bitLength0;
		KeccakDigest_Init_m734F88A90C8453E37E830B7B5A28A67ECFC3E878(__this, L_2, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::.ctor(Org.BouncyCastle.Crypto.Digests.KeccakDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__ctor_m9F9DDBE2333ACB3031584F40DE7F77A7B0301887 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)25));
		__this->___state_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___state_1), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)192));
		__this->___dataQueue_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataQueue_2), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* L_2 = ___source0;
		KeccakDigest_CopyIn_m086921566703E4812161AB830FF5673447D3CD1C(__this, L_2, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::CopyIn(Org.BouncyCastle.Crypto.Digests.KeccakDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_CopyIn_m086921566703E4812161AB830FF5673447D3CD1C (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* ___source0, const RuntimeMethod* method) 
{
	{
		KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* L_0 = ___source0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = L_0->___state_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->___state_1;
		KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* L_3 = ___source0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = L_3->___state_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_1, 0, (RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* L_5 = ___source0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_5->___dataQueue_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___dataQueue_2;
		KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* L_8 = ___source0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8->___dataQueue_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, 0, ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* L_10 = ___source0;
		int32_t L_11 = L_10->___rate_3;
		__this->___rate_3 = L_11;
		KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* L_12 = ___source0;
		int32_t L_13 = L_12->___bitsInQueue_4;
		__this->___bitsInQueue_4 = L_13;
		KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* L_14 = ___source0;
		int32_t L_15 = L_14->___fixedOutputLength_5;
		__this->___fixedOutputLength_5 = L_15;
		KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* L_16 = ___source0;
		bool L_17 = L_16->___squeezing_6;
		__this->___squeezing_6 = L_17;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Digests.KeccakDigest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeccakDigest_get_AlgorithmName_m28FFE74379AD4D7FCBB94A92FAB36F350E081B96 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53CE3854A381FE03C65D949A33C2E1D7DBA02CB4);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___fixedOutputLength_5;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(_stringLiteral53CE3854A381FE03C65D949A33C2E1D7DBA02CB4, L_2, NULL);
		return L_3;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeccakDigest_GetDigestSize_m6C57CAA8EBDF31D994BC9098FA9DF51C22E231A2 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___fixedOutputLength_5;
		return ((int32_t)(L_0>>3));
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Update_mAEC127169F33BB781314F78429A62AF3E2645F2D (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___input0;
		KeccakDigest_Absorb_m2134FF1C7576CAFCB54798F5E02248622A5EABD6(__this, L_0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_BlockUpdate_mC0383876CCA754AD88A28107AA9FCB711F8DF809 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___len2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = ___len2;
		KeccakDigest_Absorb_m56F9CE4FAB360094C8F6EBB6071CDF7F322E6F8C(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeccakDigest_DoFinal_m8DC5EDE7FA8B3FBD25A8B08B5E1EE15F28215C88 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output0;
		int32_t L_1 = ___outOff1;
		int32_t L_2 = __this->___fixedOutputLength_5;
		KeccakDigest_Squeeze_m06A0BB20D5E6F05E57FDF21843493ADBEB2F5449(__this, L_0, L_1, ((int64_t)L_2), NULL);
		VirtualActionInvoker0::Invoke(19 /* System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::Reset() */, __this);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::GetDigestSize() */, __this);
		return L_3;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::DoFinal(System.Byte[],System.Int32,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeccakDigest_DoFinal_m97C266552889A5C18DAA5EF332792DD68425F563 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, uint8_t ___partialByte2, int32_t ___partialBits3, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___partialBits3;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		uint8_t L_1 = ___partialByte2;
		int32_t L_2 = ___partialBits3;
		KeccakDigest_AbsorbBits_mDF0B3C132153676498B7FCBC52458DEC8D2F1015(__this, L_1, L_2, NULL);
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___output0;
		int32_t L_4 = ___outOff1;
		int32_t L_5 = __this->___fixedOutputLength_5;
		KeccakDigest_Squeeze_m06A0BB20D5E6F05E57FDF21843493ADBEB2F5449(__this, L_3, L_4, ((int64_t)L_5), NULL);
		VirtualActionInvoker0::Invoke(19 /* System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::Reset() */, __this);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::GetDigestSize() */, __this);
		return L_6;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Reset_mE30FA11687332C83798A868A6622DA71A2C0C483 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___fixedOutputLength_5;
		KeccakDigest_Init_m734F88A90C8453E37E830B7B5A28A67ECFC3E878(__this, L_0, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::GetByteLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KeccakDigest_GetByteLength_m5A55F7DA0253083662B32B5E42A4C362238C9C91 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___rate_3;
		return ((int32_t)(L_0>>3));
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::Init(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Init_m734F88A90C8453E37E830B7B5A28A67ECFC3E878 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, int32_t ___bitLength0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bitLength0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)256))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)128))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)224))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)256))))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_004c;
	}

IL_0024:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)288))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)384))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)512)))))
		{
			goto IL_004c;
		}
	}

IL_003c:
	{
		int32_t L_8 = ___bitLength0;
		KeccakDigest_InitSponge_mF46B626D1E9C3AA3629A1F12A52529CE6D019910(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)1600), ((int32_t)(L_8<<1)))), NULL);
		return;
	}

IL_004c:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA5D5402405EA46FA1359EF38E2451145DB09D1C5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDEFDD99707701302B4F3A4CE68BC9EB2926D7283)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_Init_m734F88A90C8453E37E830B7B5A28A67ECFC3E878_RuntimeMethod_var)));
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::InitSponge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_InitSponge_mF46B626D1E9C3AA3629A1F12A52529CE6D019910 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, int32_t ___rate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___rate0;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = ___rate0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)1600))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___rate0;
		if (!((int32_t)(L_2&((int32_t)63))))
		{
			goto IL_001d;
		}
	}

IL_0012:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD0B955404E183709B5C731BFCF31085857DE0EC3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_InitSponge_mF46B626D1E9C3AA3629A1F12A52529CE6D019910_RuntimeMethod_var)));
	}

IL_001d:
	{
		int32_t L_4 = ___rate0;
		__this->___rate_3 = L_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = __this->___state_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->___state_1;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___dataQueue_2;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		Arrays_Fill_m23EB1BA27E305EC869992BD6CA3D6B30F142FD22(L_7, (uint8_t)0, NULL);
		__this->___bitsInQueue_4 = 0;
		__this->___squeezing_6 = (bool)0;
		int32_t L_8 = ___rate0;
		__this->___fixedOutputLength_5 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)1600), L_8))>>1));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::Absorb(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Absorb_m2134FF1C7576CAFCB54798F5E02248622A5EABD6 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, uint8_t ___data0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bitsInQueue_4;
		if (!((int32_t)(L_0&7)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA8E3A14BFED9F7D70EFB2C59F8DBAC2A52180062)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_Absorb_m2134FF1C7576CAFCB54798F5E02248622A5EABD6_RuntimeMethod_var)));
	}

IL_0015:
	{
		bool L_2 = __this->___squeezing_6;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88ABBDEE731F56D989C298F52912B7B0D27D0D84)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_Absorb_m2134FF1C7576CAFCB54798F5E02248622A5EABD6_RuntimeMethod_var)));
	}

IL_0028:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___dataQueue_2;
		int32_t L_5 = __this->___bitsInQueue_4;
		uint8_t L_6 = ___data0;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_5>>3))), (uint8_t)L_6);
		int32_t L_7 = __this->___bitsInQueue_4;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 8));
		V_0 = L_8;
		__this->___bitsInQueue_4 = L_8;
		int32_t L_9 = V_0;
		int32_t L_10 = __this->___rate_3;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0065;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___dataQueue_2;
		KeccakDigest_KeccakAbsorb_m605BC12CF2DB6FE9F9BD51EB001B55DBF546C87C(__this, L_11, 0, NULL);
		__this->___bitsInQueue_4 = 0;
	}

IL_0065:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::Absorb(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Absorb_m56F9CE4FAB360094C8F6EBB6071CDF7F322E6F8C (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->___bitsInQueue_4;
		if (!((int32_t)(L_0&7)))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA8E3A14BFED9F7D70EFB2C59F8DBAC2A52180062)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_Absorb_m56F9CE4FAB360094C8F6EBB6071CDF7F322E6F8C_RuntimeMethod_var)));
	}

IL_0015:
	{
		bool L_2 = __this->___squeezing_6;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88ABBDEE731F56D989C298F52912B7B0D27D0D84)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_Absorb_m56F9CE4FAB360094C8F6EBB6071CDF7F322E6F8C_RuntimeMethod_var)));
	}

IL_0028:
	{
		int32_t L_4 = __this->___bitsInQueue_4;
		V_0 = ((int32_t)(L_4>>3));
		int32_t L_5 = __this->___rate_3;
		V_1 = ((int32_t)(L_5>>3));
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
		int32_t L_8 = ___len2;
		int32_t L_9 = V_2;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0062;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___data0;
		int32_t L_11 = ___off1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___dataQueue_2;
		int32_t L_13 = V_0;
		int32_t L_14 = ___len2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, L_13, L_14, NULL);
		int32_t L_15 = __this->___bitsInQueue_4;
		int32_t L_16 = ___len2;
		__this->___bitsInQueue_4 = ((int32_t)il2cpp_codegen_add(L_15, ((int32_t)(L_16<<3))));
		return;
	}

IL_0062:
	{
		V_3 = 0;
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0098;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___data0;
		int32_t L_19 = ___off1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___dataQueue_2;
		int32_t L_21 = V_0;
		int32_t L_22 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_18, L_19, (RuntimeArray*)L_20, L_21, L_22, NULL);
		int32_t L_23 = V_3;
		int32_t L_24 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___dataQueue_2;
		KeccakDigest_KeccakAbsorb_m605BC12CF2DB6FE9F9BD51EB001B55DBF546C87C(__this, L_25, 0, NULL);
		goto IL_0098;
	}

IL_008a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___data0;
		int32_t L_27 = ___off1;
		int32_t L_28 = V_3;
		KeccakDigest_KeccakAbsorb_m605BC12CF2DB6FE9F9BD51EB001B55DBF546C87C(__this, L_26, ((int32_t)il2cpp_codegen_add(L_27, L_28)), NULL);
		int32_t L_29 = V_3;
		int32_t L_30 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(L_29, L_30));
	}

IL_0098:
	{
		int32_t L_31 = ___len2;
		int32_t L_32 = V_3;
		int32_t L_33 = ((int32_t)il2cpp_codegen_subtract(L_31, L_32));
		V_4 = L_33;
		int32_t L_34 = V_1;
		if ((((int32_t)L_33) >= ((int32_t)L_34)))
		{
			goto IL_008a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___data0;
		int32_t L_36 = ___off1;
		int32_t L_37 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = __this->___dataQueue_2;
		int32_t L_39 = V_4;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_35, ((int32_t)il2cpp_codegen_add(L_36, L_37)), (RuntimeArray*)L_38, 0, L_39, NULL);
		int32_t L_40 = V_4;
		__this->___bitsInQueue_4 = ((int32_t)(L_40<<3));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::AbsorbBits(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_AbsorbBits_mDF0B3C132153676498B7FCBC52458DEC8D2F1015 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, int32_t ___data0, int32_t ___bits1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bits1;
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___bits1;
		if ((((int32_t)L_1) <= ((int32_t)7)))
		{
			goto IL_0018;
		}
	}

IL_0008:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD039C76F6BA3380896DFB0DA8F26D45B1448F44F)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral315818C03CCC2B10070DF2D4EBD09EB6C4C66E58)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_AbsorbBits_mDF0B3C132153676498B7FCBC52458DEC8D2F1015_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_3 = __this->___bitsInQueue_4;
		if (!((int32_t)(L_3&7)))
		{
			goto IL_002d;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA8E3A14BFED9F7D70EFB2C59F8DBAC2A52180062)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_AbsorbBits_mDF0B3C132153676498B7FCBC52458DEC8D2F1015_RuntimeMethod_var)));
	}

IL_002d:
	{
		bool L_5 = __this->___squeezing_6;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88ABBDEE731F56D989C298F52912B7B0D27D0D84)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_AbsorbBits_mDF0B3C132153676498B7FCBC52458DEC8D2F1015_RuntimeMethod_var)));
	}

IL_0040:
	{
		int32_t L_7 = ___bits1;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_7&((int32_t)31))))), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___dataQueue_2;
		int32_t L_9 = __this->___bitsInQueue_4;
		int32_t L_10 = ___data0;
		int32_t L_11 = V_0;
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_9>>3))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_10&L_11))));
		int32_t L_12 = __this->___bitsInQueue_4;
		int32_t L_13 = ___bits1;
		__this->___bitsInQueue_4 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::PadAndSwitchToSqueezingPhase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_PadAndSwitchToSqueezingPhase_mDFA5986EC94BFC1442E60F83F9146114AECE9015 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint64_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_8 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___dataQueue_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_5 = L_1;
		int32_t L_2 = __this->___bitsInQueue_4;
		int32_t L_3 = ((int32_t)(L_2>>3));
		V_6 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_5;
		intptr_t L_5 = V_6;
		intptr_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = __this->___bitsInQueue_4;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_7|((int32_t)(uint8_t)((int32_t)(1<<((int32_t)(((int32_t)(L_8&7))&((int32_t)31))))))))));
		int32_t L_9 = __this->___bitsInQueue_4;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		V_7 = L_10;
		__this->___bitsInQueue_4 = L_10;
		int32_t L_11 = V_7;
		int32_t L_12 = __this->___rate_3;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0054;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___dataQueue_2;
		KeccakDigest_KeccakAbsorb_m605BC12CF2DB6FE9F9BD51EB001B55DBF546C87C(__this, L_13, 0, NULL);
		goto IL_00cc;
	}

IL_0054:
	{
		int32_t L_14 = __this->___bitsInQueue_4;
		V_0 = ((int32_t)(L_14>>6));
		int32_t L_15 = __this->___bitsInQueue_4;
		V_1 = ((int32_t)(L_15&((int32_t)63)));
		V_2 = 0;
		V_3 = 0;
		goto IL_0095;
	}

IL_006d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = __this->___state_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = L_16;
		V_8 = L_17;
		int32_t L_18 = V_3;
		int32_t L_19 = L_18;
		V_6 = L_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = V_8;
		intptr_t L_21 = V_6;
		intptr_t L_22 = L_21;
		int64_t L_23 = (int64_t)(L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___dataQueue_2;
		int32_t L_25 = V_2;
		uint64_t L_26;
		L_26 = Pack_LE_To_UInt64_m7F95797FD245489E424B633B5786987B95C2E0DA(L_24, L_25, NULL);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (uint64_t)((int64_t)(L_23^(int64_t)L_26)));
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 8));
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0095:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_00cc;
		}
	}
	{
		int32_t L_32 = V_1;
		V_4 = ((int64_t)il2cpp_codegen_subtract(((int64_t)(((int64_t)1)<<((int32_t)(L_32&((int32_t)63))))), ((int64_t)1)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_33 = __this->___state_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = L_33;
		V_8 = L_34;
		int32_t L_35 = V_0;
		int32_t L_36 = L_35;
		V_6 = L_36;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_37 = V_8;
		intptr_t L_38 = V_6;
		intptr_t L_39 = L_38;
		int64_t L_40 = (int64_t)(L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = __this->___dataQueue_2;
		int32_t L_42 = V_2;
		uint64_t L_43;
		L_43 = Pack_LE_To_UInt64_m7F95797FD245489E424B633B5786987B95C2E0DA(L_41, L_42, NULL);
		uint64_t L_44 = V_4;
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (uint64_t)((int64_t)(L_40^((int64_t)((int64_t)L_43&(int64_t)L_44)))));
	}

IL_00cc:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_45 = __this->___state_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_46 = L_45;
		V_8 = L_46;
		int32_t L_47 = __this->___rate_3;
		int32_t L_48 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_47, 1))>>6));
		V_6 = L_48;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_49 = V_8;
		intptr_t L_50 = V_6;
		intptr_t L_51 = L_50;
		int64_t L_52 = (int64_t)(L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48), (uint64_t)((int64_t)(L_52^((int64_t)(std::numeric_limits<int64_t>::min)()))));
		__this->___bitsInQueue_4 = 0;
		__this->___squeezing_6 = (bool)1;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::Squeeze(System.Byte[],System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Squeeze_m06A0BB20D5E6F05E57FDF21843493ADBEB2F5449 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___offset1, int64_t ___outputLength2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->___squeezing_6;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		KeccakDigest_PadAndSwitchToSqueezingPhase_mDFA5986EC94BFC1442E60F83F9146114AECE9015(__this, NULL);
	}

IL_000e:
	{
		int64_t L_1 = ___outputLength2;
		if ((((int64_t)((int64_t)(L_1&((int64_t)7)))) == ((int64_t)((int64_t)0))))
		{
			goto IL_0021;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral410FC4E1DDB5FBB0F905E92CEBD6EB2AB954C222)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeccakDigest_Squeeze_m06A0BB20D5E6F05E57FDF21843493ADBEB2F5449_RuntimeMethod_var)));
	}

IL_0021:
	{
		V_0 = ((int64_t)0);
		goto IL_007c;
	}

IL_0026:
	{
		int32_t L_3 = __this->___bitsInQueue_4;
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		KeccakDigest_KeccakExtract_m61E2D7755139E3ADEB8D1A0C55AEBA191DDAA3F7(__this, NULL);
	}

IL_0034:
	{
		int32_t L_4 = __this->___bitsInQueue_4;
		int64_t L_5 = ___outputLength2;
		int64_t L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int64_t L_7;
		L_7 = Math_Min_m5721B54E3DBEE8C9FC599B1561D098235B11EE81(((int64_t)L_4), ((int64_t)il2cpp_codegen_subtract(L_5, L_6)), NULL);
		V_1 = ((int32_t)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___dataQueue_2;
		int32_t L_9 = __this->___rate_3;
		int32_t L_10 = __this->___bitsInQueue_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___output0;
		int32_t L_12 = ___offset1;
		int64_t L_13 = V_0;
		int32_t L_14 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_8, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_9, L_10))>>3)), (RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, ((int32_t)((int64_t)(L_13>>3))))), ((int32_t)(L_14>>3)), NULL);
		int32_t L_15 = __this->___bitsInQueue_4;
		int32_t L_16 = V_1;
		__this->___bitsInQueue_4 = ((int32_t)il2cpp_codegen_subtract(L_15, L_16));
		int64_t L_17 = V_0;
		int32_t L_18 = V_1;
		V_0 = ((int64_t)il2cpp_codegen_add(L_17, ((int64_t)L_18)));
	}

IL_007c:
	{
		int64_t L_19 = V_0;
		int64_t L_20 = ___outputLength2;
		if ((((int64_t)L_19) < ((int64_t)L_20)))
		{
			goto IL_0026;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::KeccakAbsorb(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_KeccakAbsorb_m605BC12CF2DB6FE9F9BD51EB001B55DBF546C87C (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___off1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___rate_3;
		V_0 = ((int32_t)(L_0>>6));
		V_1 = 0;
		goto IL_002d;
	}

IL_000d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->___state_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = L_1;
		V_2 = L_2;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		V_3 = L_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = V_2;
		intptr_t L_6 = V_3;
		intptr_t L_7 = L_6;
		int64_t L_8 = (int64_t)(L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___data0;
		int32_t L_10 = ___off1;
		uint64_t L_11;
		L_11 = Pack_LE_To_UInt64_m7F95797FD245489E424B633B5786987B95C2E0DA(L_9, L_10, NULL);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (uint64_t)((int64_t)(L_8^(int64_t)L_11)));
		int32_t L_12 = ___off1;
		___off1 = ((int32_t)il2cpp_codegen_add(L_12, 8));
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_002d:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000d;
		}
	}
	{
		KeccakDigest_KeccakPermutation_m42E23C9D9C841EAA7B98F1CF5909F34D02C1C4AC(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::KeccakExtract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_KeccakExtract_m61E2D7755139E3ADEB8D1A0C55AEBA191DDAA3F7 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, const RuntimeMethod* method) 
{
	{
		KeccakDigest_KeccakPermutation_m42E23C9D9C841EAA7B98F1CF5909F34D02C1C4AC(__this, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___state_1;
		int32_t L_1 = __this->___rate_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___dataQueue_2;
		Pack_UInt64_To_LE_mE04D373C05BB2608972EC6F46F3FC865D848B35C(L_0, 0, ((int32_t)(L_1>>6)), L_2, 0, NULL);
		int32_t L_3 = __this->___rate_3;
		__this->___bitsInQueue_4 = L_3;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::KeccakPermutation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_KeccakPermutation_m42E23C9D9C841EAA7B98F1CF5909F34D02C1C4AC (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
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
	int32_t V_26 = 0;
	uint64_t V_27 = 0;
	uint64_t V_28 = 0;
	uint64_t V_29 = 0;
	uint64_t V_30 = 0;
	uint64_t V_31 = 0;
	uint64_t V_32 = 0;
	uint64_t V_33 = 0;
	uint64_t V_34 = 0;
	uint64_t V_35 = 0;
	uint64_t V_36 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___state_1;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = V_0;
		int32_t L_2 = 0;
		int64_t L_3 = (int64_t)(L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		int32_t L_5 = 1;
		int64_t L_6 = (int64_t)(L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = V_0;
		int32_t L_8 = 2;
		int64_t L_9 = (int64_t)(L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = V_0;
		int32_t L_11 = 3;
		int64_t L_12 = (int64_t)(L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = V_0;
		int32_t L_14 = 4;
		int64_t L_15 = (int64_t)(L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_5 = L_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = V_0;
		int32_t L_17 = 5;
		int64_t L_18 = (int64_t)(L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		V_6 = L_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_19 = V_0;
		int32_t L_20 = 6;
		int64_t L_21 = (int64_t)(L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_7 = L_21;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_22 = V_0;
		int32_t L_23 = 7;
		int64_t L_24 = (int64_t)(L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		V_8 = L_24;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_25 = V_0;
		int32_t L_26 = 8;
		int64_t L_27 = (int64_t)(L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		V_9 = L_27;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = V_0;
		int32_t L_29 = ((int32_t)9);
		int64_t L_30 = (int64_t)(L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		V_10 = L_30;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_31 = V_0;
		int32_t L_32 = ((int32_t)10);
		int64_t L_33 = (int64_t)(L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		V_11 = L_33;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_34 = V_0;
		int32_t L_35 = ((int32_t)11);
		int64_t L_36 = (int64_t)(L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		V_12 = L_36;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_37 = V_0;
		int32_t L_38 = ((int32_t)12);
		int64_t L_39 = (int64_t)(L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		V_13 = L_39;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_40 = V_0;
		int32_t L_41 = ((int32_t)13);
		int64_t L_42 = (int64_t)(L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		V_14 = L_42;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_43 = V_0;
		int32_t L_44 = ((int32_t)14);
		int64_t L_45 = (int64_t)(L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		V_15 = L_45;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_46 = V_0;
		int32_t L_47 = ((int32_t)15);
		int64_t L_48 = (int64_t)(L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
		V_16 = L_48;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_49 = V_0;
		int32_t L_50 = ((int32_t)16);
		int64_t L_51 = (int64_t)(L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		V_17 = L_51;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_52 = V_0;
		int32_t L_53 = ((int32_t)17);
		int64_t L_54 = (int64_t)(L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		V_18 = L_54;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_55 = V_0;
		int32_t L_56 = ((int32_t)18);
		int64_t L_57 = (int64_t)(L_55)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_56));
		V_19 = L_57;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_58 = V_0;
		int32_t L_59 = ((int32_t)19);
		int64_t L_60 = (int64_t)(L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_59));
		V_20 = L_60;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_61 = V_0;
		int32_t L_62 = ((int32_t)20);
		int64_t L_63 = (int64_t)(L_61)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		V_21 = L_63;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_64 = V_0;
		int32_t L_65 = ((int32_t)21);
		int64_t L_66 = (int64_t)(L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		V_22 = L_66;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_67 = V_0;
		int32_t L_68 = ((int32_t)22);
		int64_t L_69 = (int64_t)(L_67)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		V_23 = L_69;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_70 = V_0;
		int32_t L_71 = ((int32_t)23);
		int64_t L_72 = (int64_t)(L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71));
		V_24 = L_72;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_73 = V_0;
		int32_t L_74 = ((int32_t)24);
		int64_t L_75 = (int64_t)(L_73)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74));
		V_25 = L_75;
		V_26 = 0;
		goto IL_0448;
	}

IL_0099:
	{
		uint64_t L_76 = V_1;
		uint64_t L_77 = V_6;
		uint64_t L_78 = V_11;
		uint64_t L_79 = V_16;
		uint64_t L_80 = V_21;
		V_27 = ((int64_t)(((int64_t)(((int64_t)(((int64_t)((int64_t)L_76^(int64_t)L_77))^(int64_t)L_78))^(int64_t)L_79))^(int64_t)L_80));
		uint64_t L_81 = V_2;
		uint64_t L_82 = V_7;
		uint64_t L_83 = V_12;
		uint64_t L_84 = V_17;
		uint64_t L_85 = V_22;
		V_28 = ((int64_t)(((int64_t)(((int64_t)(((int64_t)((int64_t)L_81^(int64_t)L_82))^(int64_t)L_83))^(int64_t)L_84))^(int64_t)L_85));
		uint64_t L_86 = V_3;
		uint64_t L_87 = V_8;
		uint64_t L_88 = V_13;
		uint64_t L_89 = V_18;
		uint64_t L_90 = V_23;
		V_29 = ((int64_t)(((int64_t)(((int64_t)(((int64_t)((int64_t)L_86^(int64_t)L_87))^(int64_t)L_88))^(int64_t)L_89))^(int64_t)L_90));
		uint64_t L_91 = V_4;
		uint64_t L_92 = V_9;
		uint64_t L_93 = V_14;
		uint64_t L_94 = V_19;
		uint64_t L_95 = V_24;
		V_30 = ((int64_t)(((int64_t)(((int64_t)(((int64_t)((int64_t)L_91^(int64_t)L_92))^(int64_t)L_93))^(int64_t)L_94))^(int64_t)L_95));
		uint64_t L_96 = V_5;
		uint64_t L_97 = V_10;
		uint64_t L_98 = V_15;
		uint64_t L_99 = V_20;
		uint64_t L_100 = V_25;
		V_31 = ((int64_t)(((int64_t)(((int64_t)(((int64_t)((int64_t)L_96^(int64_t)L_97))^(int64_t)L_98))^(int64_t)L_99))^(int64_t)L_100));
		uint64_t L_101 = V_28;
		uint64_t L_102 = V_28;
		uint64_t L_103 = V_31;
		V_32 = ((int64_t)(((int64_t)(((int64_t)((int64_t)L_101<<1))|((int64_t)((uint64_t)L_102>>((int32_t)63)))))^(int64_t)L_103));
		uint64_t L_104 = V_29;
		uint64_t L_105 = V_29;
		uint64_t L_106 = V_27;
		V_33 = ((int64_t)(((int64_t)(((int64_t)((int64_t)L_104<<1))|((int64_t)((uint64_t)L_105>>((int32_t)63)))))^(int64_t)L_106));
		uint64_t L_107 = V_30;
		uint64_t L_108 = V_30;
		uint64_t L_109 = V_28;
		V_34 = ((int64_t)(((int64_t)(((int64_t)((int64_t)L_107<<1))|((int64_t)((uint64_t)L_108>>((int32_t)63)))))^(int64_t)L_109));
		uint64_t L_110 = V_31;
		uint64_t L_111 = V_31;
		uint64_t L_112 = V_29;
		V_35 = ((int64_t)(((int64_t)(((int64_t)((int64_t)L_110<<1))|((int64_t)((uint64_t)L_111>>((int32_t)63)))))^(int64_t)L_112));
		uint64_t L_113 = V_27;
		uint64_t L_114 = V_27;
		uint64_t L_115 = V_30;
		V_36 = ((int64_t)(((int64_t)(((int64_t)((int64_t)L_113<<1))|((int64_t)((uint64_t)L_114>>((int32_t)63)))))^(int64_t)L_115));
		uint64_t L_116 = V_1;
		uint64_t L_117 = V_32;
		V_1 = ((int64_t)((int64_t)L_116^(int64_t)L_117));
		uint64_t L_118 = V_6;
		uint64_t L_119 = V_32;
		V_6 = ((int64_t)((int64_t)L_118^(int64_t)L_119));
		uint64_t L_120 = V_11;
		uint64_t L_121 = V_32;
		V_11 = ((int64_t)((int64_t)L_120^(int64_t)L_121));
		uint64_t L_122 = V_16;
		uint64_t L_123 = V_32;
		V_16 = ((int64_t)((int64_t)L_122^(int64_t)L_123));
		uint64_t L_124 = V_21;
		uint64_t L_125 = V_32;
		V_21 = ((int64_t)((int64_t)L_124^(int64_t)L_125));
		uint64_t L_126 = V_2;
		uint64_t L_127 = V_33;
		V_2 = ((int64_t)((int64_t)L_126^(int64_t)L_127));
		uint64_t L_128 = V_7;
		uint64_t L_129 = V_33;
		V_7 = ((int64_t)((int64_t)L_128^(int64_t)L_129));
		uint64_t L_130 = V_12;
		uint64_t L_131 = V_33;
		V_12 = ((int64_t)((int64_t)L_130^(int64_t)L_131));
		uint64_t L_132 = V_17;
		uint64_t L_133 = V_33;
		V_17 = ((int64_t)((int64_t)L_132^(int64_t)L_133));
		uint64_t L_134 = V_22;
		uint64_t L_135 = V_33;
		V_22 = ((int64_t)((int64_t)L_134^(int64_t)L_135));
		uint64_t L_136 = V_3;
		uint64_t L_137 = V_34;
		V_3 = ((int64_t)((int64_t)L_136^(int64_t)L_137));
		uint64_t L_138 = V_8;
		uint64_t L_139 = V_34;
		V_8 = ((int64_t)((int64_t)L_138^(int64_t)L_139));
		uint64_t L_140 = V_13;
		uint64_t L_141 = V_34;
		V_13 = ((int64_t)((int64_t)L_140^(int64_t)L_141));
		uint64_t L_142 = V_18;
		uint64_t L_143 = V_34;
		V_18 = ((int64_t)((int64_t)L_142^(int64_t)L_143));
		uint64_t L_144 = V_23;
		uint64_t L_145 = V_34;
		V_23 = ((int64_t)((int64_t)L_144^(int64_t)L_145));
		uint64_t L_146 = V_4;
		uint64_t L_147 = V_35;
		V_4 = ((int64_t)((int64_t)L_146^(int64_t)L_147));
		uint64_t L_148 = V_9;
		uint64_t L_149 = V_35;
		V_9 = ((int64_t)((int64_t)L_148^(int64_t)L_149));
		uint64_t L_150 = V_14;
		uint64_t L_151 = V_35;
		V_14 = ((int64_t)((int64_t)L_150^(int64_t)L_151));
		uint64_t L_152 = V_19;
		uint64_t L_153 = V_35;
		V_19 = ((int64_t)((int64_t)L_152^(int64_t)L_153));
		uint64_t L_154 = V_24;
		uint64_t L_155 = V_35;
		V_24 = ((int64_t)((int64_t)L_154^(int64_t)L_155));
		uint64_t L_156 = V_5;
		uint64_t L_157 = V_36;
		V_5 = ((int64_t)((int64_t)L_156^(int64_t)L_157));
		uint64_t L_158 = V_10;
		uint64_t L_159 = V_36;
		V_10 = ((int64_t)((int64_t)L_158^(int64_t)L_159));
		uint64_t L_160 = V_15;
		uint64_t L_161 = V_36;
		V_15 = ((int64_t)((int64_t)L_160^(int64_t)L_161));
		uint64_t L_162 = V_20;
		uint64_t L_163 = V_36;
		V_20 = ((int64_t)((int64_t)L_162^(int64_t)L_163));
		uint64_t L_164 = V_25;
		uint64_t L_165 = V_36;
		V_25 = ((int64_t)((int64_t)L_164^(int64_t)L_165));
		uint64_t L_166 = V_2;
		uint64_t L_167 = V_2;
		V_28 = ((int64_t)(((int64_t)((int64_t)L_166<<1))|((int64_t)((uint64_t)L_167>>((int32_t)63)))));
		uint64_t L_168 = V_7;
		uint64_t L_169 = V_7;
		V_2 = ((int64_t)(((int64_t)((int64_t)L_168<<((int32_t)44)))|((int64_t)((uint64_t)L_169>>((int32_t)20)))));
		uint64_t L_170 = V_10;
		uint64_t L_171 = V_10;
		V_7 = ((int64_t)(((int64_t)((int64_t)L_170<<((int32_t)20)))|((int64_t)((uint64_t)L_171>>((int32_t)44)))));
		uint64_t L_172 = V_23;
		uint64_t L_173 = V_23;
		V_10 = ((int64_t)(((int64_t)((int64_t)L_172<<((int32_t)61)))|((int64_t)((uint64_t)L_173>>3))));
		uint64_t L_174 = V_15;
		uint64_t L_175 = V_15;
		V_23 = ((int64_t)(((int64_t)((int64_t)L_174<<((int32_t)39)))|((int64_t)((uint64_t)L_175>>((int32_t)25)))));
		uint64_t L_176 = V_21;
		uint64_t L_177 = V_21;
		V_15 = ((int64_t)(((int64_t)((int64_t)L_176<<((int32_t)18)))|((int64_t)((uint64_t)L_177>>((int32_t)46)))));
		uint64_t L_178 = V_3;
		uint64_t L_179 = V_3;
		V_21 = ((int64_t)(((int64_t)((int64_t)L_178<<((int32_t)62)))|((int64_t)((uint64_t)L_179>>2))));
		uint64_t L_180 = V_13;
		uint64_t L_181 = V_13;
		V_3 = ((int64_t)(((int64_t)((int64_t)L_180<<((int32_t)43)))|((int64_t)((uint64_t)L_181>>((int32_t)21)))));
		uint64_t L_182 = V_14;
		uint64_t L_183 = V_14;
		V_13 = ((int64_t)(((int64_t)((int64_t)L_182<<((int32_t)25)))|((int64_t)((uint64_t)L_183>>((int32_t)39)))));
		uint64_t L_184 = V_20;
		uint64_t L_185 = V_20;
		V_14 = ((int64_t)(((int64_t)((int64_t)L_184<<8))|((int64_t)((uint64_t)L_185>>((int32_t)56)))));
		uint64_t L_186 = V_24;
		uint64_t L_187 = V_24;
		V_20 = ((int64_t)(((int64_t)((int64_t)L_186<<((int32_t)56)))|((int64_t)((uint64_t)L_187>>8))));
		uint64_t L_188 = V_16;
		uint64_t L_189 = V_16;
		V_24 = ((int64_t)(((int64_t)((int64_t)L_188<<((int32_t)41)))|((int64_t)((uint64_t)L_189>>((int32_t)23)))));
		uint64_t L_190 = V_5;
		uint64_t L_191 = V_5;
		V_16 = ((int64_t)(((int64_t)((int64_t)L_190<<((int32_t)27)))|((int64_t)((uint64_t)L_191>>((int32_t)37)))));
		uint64_t L_192 = V_25;
		uint64_t L_193 = V_25;
		V_5 = ((int64_t)(((int64_t)((int64_t)L_192<<((int32_t)14)))|((int64_t)((uint64_t)L_193>>((int32_t)50)))));
		uint64_t L_194 = V_22;
		uint64_t L_195 = V_22;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_194<<2))|((int64_t)((uint64_t)L_195>>((int32_t)62)))));
		uint64_t L_196 = V_9;
		uint64_t L_197 = V_9;
		V_22 = ((int64_t)(((int64_t)((int64_t)L_196<<((int32_t)55)))|((int64_t)((uint64_t)L_197>>((int32_t)9)))));
		uint64_t L_198 = V_17;
		uint64_t L_199 = V_17;
		V_9 = ((int64_t)(((int64_t)((int64_t)L_198<<((int32_t)45)))|((int64_t)((uint64_t)L_199>>((int32_t)19)))));
		uint64_t L_200 = V_6;
		uint64_t L_201 = V_6;
		V_17 = ((int64_t)(((int64_t)((int64_t)L_200<<((int32_t)36)))|((int64_t)((uint64_t)L_201>>((int32_t)28)))));
		uint64_t L_202 = V_4;
		uint64_t L_203 = V_4;
		V_6 = ((int64_t)(((int64_t)((int64_t)L_202<<((int32_t)28)))|((int64_t)((uint64_t)L_203>>((int32_t)36)))));
		uint64_t L_204 = V_19;
		uint64_t L_205 = V_19;
		V_4 = ((int64_t)(((int64_t)((int64_t)L_204<<((int32_t)21)))|((int64_t)((uint64_t)L_205>>((int32_t)43)))));
		uint64_t L_206 = V_18;
		uint64_t L_207 = V_18;
		V_19 = ((int64_t)(((int64_t)((int64_t)L_206<<((int32_t)15)))|((int64_t)((uint64_t)L_207>>((int32_t)49)))));
		uint64_t L_208 = V_12;
		uint64_t L_209 = V_12;
		V_18 = ((int64_t)(((int64_t)((int64_t)L_208<<((int32_t)10)))|((int64_t)((uint64_t)L_209>>((int32_t)54)))));
		uint64_t L_210 = V_8;
		uint64_t L_211 = V_8;
		V_12 = ((int64_t)(((int64_t)((int64_t)L_210<<6))|((int64_t)((uint64_t)L_211>>((int32_t)58)))));
		uint64_t L_212 = V_11;
		uint64_t L_213 = V_11;
		V_8 = ((int64_t)(((int64_t)((int64_t)L_212<<3))|((int64_t)((uint64_t)L_213>>((int32_t)61)))));
		uint64_t L_214 = V_28;
		V_11 = L_214;
		uint64_t L_215 = V_1;
		uint64_t L_216 = V_2;
		uint64_t L_217 = V_3;
		V_27 = ((int64_t)((int64_t)L_215^((int64_t)((int64_t)((~L_216))&(int64_t)L_217))));
		uint64_t L_218 = V_2;
		uint64_t L_219 = V_3;
		uint64_t L_220 = V_4;
		V_28 = ((int64_t)((int64_t)L_218^((int64_t)((int64_t)((~L_219))&(int64_t)L_220))));
		uint64_t L_221 = V_3;
		uint64_t L_222 = V_4;
		uint64_t L_223 = V_5;
		V_3 = ((int64_t)((int64_t)L_221^((int64_t)((int64_t)((~L_222))&(int64_t)L_223))));
		uint64_t L_224 = V_4;
		uint64_t L_225 = V_5;
		uint64_t L_226 = V_1;
		V_4 = ((int64_t)((int64_t)L_224^((int64_t)((int64_t)((~L_225))&(int64_t)L_226))));
		uint64_t L_227 = V_5;
		uint64_t L_228 = V_1;
		uint64_t L_229 = V_2;
		V_5 = ((int64_t)((int64_t)L_227^((int64_t)((int64_t)((~L_228))&(int64_t)L_229))));
		uint64_t L_230 = V_27;
		V_1 = L_230;
		uint64_t L_231 = V_28;
		V_2 = L_231;
		uint64_t L_232 = V_6;
		uint64_t L_233 = V_7;
		uint64_t L_234 = V_8;
		V_27 = ((int64_t)((int64_t)L_232^((int64_t)((int64_t)((~L_233))&(int64_t)L_234))));
		uint64_t L_235 = V_7;
		uint64_t L_236 = V_8;
		uint64_t L_237 = V_9;
		V_28 = ((int64_t)((int64_t)L_235^((int64_t)((int64_t)((~L_236))&(int64_t)L_237))));
		uint64_t L_238 = V_8;
		uint64_t L_239 = V_9;
		uint64_t L_240 = V_10;
		V_8 = ((int64_t)((int64_t)L_238^((int64_t)((int64_t)((~L_239))&(int64_t)L_240))));
		uint64_t L_241 = V_9;
		uint64_t L_242 = V_10;
		uint64_t L_243 = V_6;
		V_9 = ((int64_t)((int64_t)L_241^((int64_t)((int64_t)((~L_242))&(int64_t)L_243))));
		uint64_t L_244 = V_10;
		uint64_t L_245 = V_6;
		uint64_t L_246 = V_7;
		V_10 = ((int64_t)((int64_t)L_244^((int64_t)((int64_t)((~L_245))&(int64_t)L_246))));
		uint64_t L_247 = V_27;
		V_6 = L_247;
		uint64_t L_248 = V_28;
		V_7 = L_248;
		uint64_t L_249 = V_11;
		uint64_t L_250 = V_12;
		uint64_t L_251 = V_13;
		V_27 = ((int64_t)((int64_t)L_249^((int64_t)((int64_t)((~L_250))&(int64_t)L_251))));
		uint64_t L_252 = V_12;
		uint64_t L_253 = V_13;
		uint64_t L_254 = V_14;
		V_28 = ((int64_t)((int64_t)L_252^((int64_t)((int64_t)((~L_253))&(int64_t)L_254))));
		uint64_t L_255 = V_13;
		uint64_t L_256 = V_14;
		uint64_t L_257 = V_15;
		V_13 = ((int64_t)((int64_t)L_255^((int64_t)((int64_t)((~L_256))&(int64_t)L_257))));
		uint64_t L_258 = V_14;
		uint64_t L_259 = V_15;
		uint64_t L_260 = V_11;
		V_14 = ((int64_t)((int64_t)L_258^((int64_t)((int64_t)((~L_259))&(int64_t)L_260))));
		uint64_t L_261 = V_15;
		uint64_t L_262 = V_11;
		uint64_t L_263 = V_12;
		V_15 = ((int64_t)((int64_t)L_261^((int64_t)((int64_t)((~L_262))&(int64_t)L_263))));
		uint64_t L_264 = V_27;
		V_11 = L_264;
		uint64_t L_265 = V_28;
		V_12 = L_265;
		uint64_t L_266 = V_16;
		uint64_t L_267 = V_17;
		uint64_t L_268 = V_18;
		V_27 = ((int64_t)((int64_t)L_266^((int64_t)((int64_t)((~L_267))&(int64_t)L_268))));
		uint64_t L_269 = V_17;
		uint64_t L_270 = V_18;
		uint64_t L_271 = V_19;
		V_28 = ((int64_t)((int64_t)L_269^((int64_t)((int64_t)((~L_270))&(int64_t)L_271))));
		uint64_t L_272 = V_18;
		uint64_t L_273 = V_19;
		uint64_t L_274 = V_20;
		V_18 = ((int64_t)((int64_t)L_272^((int64_t)((int64_t)((~L_273))&(int64_t)L_274))));
		uint64_t L_275 = V_19;
		uint64_t L_276 = V_20;
		uint64_t L_277 = V_16;
		V_19 = ((int64_t)((int64_t)L_275^((int64_t)((int64_t)((~L_276))&(int64_t)L_277))));
		uint64_t L_278 = V_20;
		uint64_t L_279 = V_16;
		uint64_t L_280 = V_17;
		V_20 = ((int64_t)((int64_t)L_278^((int64_t)((int64_t)((~L_279))&(int64_t)L_280))));
		uint64_t L_281 = V_27;
		V_16 = L_281;
		uint64_t L_282 = V_28;
		V_17 = L_282;
		uint64_t L_283 = V_21;
		uint64_t L_284 = V_22;
		uint64_t L_285 = V_23;
		V_27 = ((int64_t)((int64_t)L_283^((int64_t)((int64_t)((~L_284))&(int64_t)L_285))));
		uint64_t L_286 = V_22;
		uint64_t L_287 = V_23;
		uint64_t L_288 = V_24;
		V_28 = ((int64_t)((int64_t)L_286^((int64_t)((int64_t)((~L_287))&(int64_t)L_288))));
		uint64_t L_289 = V_23;
		uint64_t L_290 = V_24;
		uint64_t L_291 = V_25;
		V_23 = ((int64_t)((int64_t)L_289^((int64_t)((int64_t)((~L_290))&(int64_t)L_291))));
		uint64_t L_292 = V_24;
		uint64_t L_293 = V_25;
		uint64_t L_294 = V_21;
		V_24 = ((int64_t)((int64_t)L_292^((int64_t)((int64_t)((~L_293))&(int64_t)L_294))));
		uint64_t L_295 = V_25;
		uint64_t L_296 = V_21;
		uint64_t L_297 = V_22;
		V_25 = ((int64_t)((int64_t)L_295^((int64_t)((int64_t)((~L_296))&(int64_t)L_297))));
		uint64_t L_298 = V_27;
		V_21 = L_298;
		uint64_t L_299 = V_28;
		V_22 = L_299;
		uint64_t L_300 = V_1;
		il2cpp_codegen_runtime_class_init_inline(KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_301 = ((KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_StaticFields*)il2cpp_codegen_static_fields_for(KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var))->___KeccakRoundConstants_0;
		int32_t L_302 = V_26;
		int32_t L_303 = L_302;
		int64_t L_304 = (int64_t)(L_301)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_303));
		V_1 = ((int64_t)((int64_t)L_300^L_304));
		int32_t L_305 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_305, 1));
	}

IL_0448:
	{
		int32_t L_306 = V_26;
		if ((((int32_t)L_306) < ((int32_t)((int32_t)24))))
		{
			goto IL_0099;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_307 = V_0;
		uint64_t L_308 = V_1;
		(L_307)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_308);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_309 = V_0;
		uint64_t L_310 = V_2;
		(L_309)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_310);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_311 = V_0;
		uint64_t L_312 = V_3;
		(L_311)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_312);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_313 = V_0;
		uint64_t L_314 = V_4;
		(L_313)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_314);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_315 = V_0;
		uint64_t L_316 = V_5;
		(L_315)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_316);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_317 = V_0;
		uint64_t L_318 = V_6;
		(L_317)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_318);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_319 = V_0;
		uint64_t L_320 = V_7;
		(L_319)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_320);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_321 = V_0;
		uint64_t L_322 = V_8;
		(L_321)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_322);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_323 = V_0;
		uint64_t L_324 = V_9;
		(L_323)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (uint64_t)L_324);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_325 = V_0;
		uint64_t L_326 = V_10;
		(L_325)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint64_t)L_326);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_327 = V_0;
		uint64_t L_328 = V_11;
		(L_327)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint64_t)L_328);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_329 = V_0;
		uint64_t L_330 = V_12;
		(L_329)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint64_t)L_330);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_331 = V_0;
		uint64_t L_332 = V_13;
		(L_331)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint64_t)L_332);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_333 = V_0;
		uint64_t L_334 = V_14;
		(L_333)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint64_t)L_334);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_335 = V_0;
		uint64_t L_336 = V_15;
		(L_335)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint64_t)L_336);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_337 = V_0;
		uint64_t L_338 = V_16;
		(L_337)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint64_t)L_338);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_339 = V_0;
		uint64_t L_340 = V_17;
		(L_339)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (uint64_t)L_340);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_341 = V_0;
		uint64_t L_342 = V_18;
		(L_341)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)), (uint64_t)L_342);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_343 = V_0;
		uint64_t L_344 = V_19;
		(L_343)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)), (uint64_t)L_344);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_345 = V_0;
		uint64_t L_346 = V_20;
		(L_345)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)), (uint64_t)L_346);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_347 = V_0;
		uint64_t L_348 = V_21;
		(L_347)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20)), (uint64_t)L_348);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_349 = V_0;
		uint64_t L_350 = V_22;
		(L_349)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21)), (uint64_t)L_350);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_351 = V_0;
		uint64_t L_352 = V_23;
		(L_351)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)22)), (uint64_t)L_352);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_353 = V_0;
		uint64_t L_354 = V_24;
		(L_353)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)23)), (uint64_t)L_354);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_355 = V_0;
		uint64_t L_356 = V_25;
		(L_355)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)24)), (uint64_t)L_356);
		return;
	}
}
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.KeccakDigest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KeccakDigest_Copy_mD23D08A82CC6B1311C5DBCBF9B5A7196C830CEC5 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* L_0 = (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8*)il2cpp_codegen_object_new(KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var);
		KeccakDigest__ctor_m9F9DDBE2333ACB3031584F40DE7F77A7B0301887(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::Reset(Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest_Reset_mFE8F751D99302FDFD3CF9B165299B5C8B48C8258 (KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___other0;
		KeccakDigest_CopyIn_m086921566703E4812161AB830FF5673447D3CD1C(__this, ((KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8*)CastclassClass((RuntimeObject*)L_0, KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var)), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeccakDigest__cctor_m8E286D2790CF2F600DFA4425231565389257C76C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60012daU2D1_9_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x60012daU2D1_9_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_StaticFields*)il2cpp_codegen_static_fields_for(KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var))->___KeccakRoundConstants_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_StaticFields*)il2cpp_codegen_static_fields_for(KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var))->___KeccakRoundConstants_0), (void*)L_1);
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
// System.Int32 Org.BouncyCastle.Crypto.Digests.ShakeDigest::CheckBitLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShakeDigest_CheckBitLength_m51E246BC70E65594387D9ECA5E4B674AE7696EC4 (int32_t ___bitLength0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___bitLength0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)128))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)256)))))
		{
			goto IL_0014;
		}
	}

IL_0012:
	{
		int32_t L_3 = ___bitLength0;
		return L_3;
	}

IL_0014:
	{
		int32_t L_4 = ___bitLength0;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_5);
		String_t* L_7;
		L_7 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50A03276CDCF780E3EC05BDBA7CD074DBB6471DE)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDEFDD99707701302B4F3A4CE68BC9EB2926D7283)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ShakeDigest_CheckBitLength_m51E246BC70E65594387D9ECA5E4B674AE7696EC4_RuntimeMethod_var)));
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.ShakeDigest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeDigest__ctor_mD54A6869CC2B5B4AE3B4006B29AE823DE5F71865 (ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* __this, const RuntimeMethod* method) 
{
	{
		ShakeDigest__ctor_m2B3B14BB44A9AD5C9CDBDD41EE6122B928CFC532(__this, ((int32_t)128), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.ShakeDigest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeDigest__ctor_m2B3B14BB44A9AD5C9CDBDD41EE6122B928CFC532 (ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* __this, int32_t ___bitLength0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___bitLength0;
		int32_t L_1;
		L_1 = ShakeDigest_CheckBitLength_m51E246BC70E65594387D9ECA5E4B674AE7696EC4(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var);
		KeccakDigest__ctor_m1D83E44DC559F9E747241A63E130AF770D442FCF(__this, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.ShakeDigest::.ctor(Org.BouncyCastle.Crypto.Digests.ShakeDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeDigest__ctor_m4879A01D3AC477DB3EBAA03423931C69B26FF86D (ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* __this, ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* ___source0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* L_0 = ___source0;
		il2cpp_codegen_runtime_class_init_inline(KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8_il2cpp_TypeInfo_var);
		KeccakDigest__ctor_m9F9DDBE2333ACB3031584F40DE7F77A7B0301887(__this, L_0, NULL);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Digests.ShakeDigest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShakeDigest_get_AlgorithmName_mF586B5245DCBAA971EA51BC2059975D1681B5CE8 (ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4BE569CCF2D02C05077C0DD81A65D77B046AD39);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8*)__this)->___fixedOutputLength_5;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(_stringLiteralA4BE569CCF2D02C05077C0DD81A65D77B046AD39, L_2, NULL);
		return L_3;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.ShakeDigest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShakeDigest_GetDigestSize_mAD73FA674A83EECB54276F8B25D51C31F03E116F (ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ((KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8*)__this)->___fixedOutputLength_5;
		return ((int32_t)(L_0>>2));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.ShakeDigest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShakeDigest_DoFinal_m531FE8F59EC1FD7446CD17E9634FDF92D754B2B8 (ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output0;
		int32_t L_1 = ___outOff1;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::GetDigestSize() */, __this);
		int32_t L_3;
		L_3 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(25 /* System.Int32 Org.BouncyCastle.Crypto.Digests.ShakeDigest::DoFinal(System.Byte[],System.Int32,System.Int32) */, __this, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.ShakeDigest::DoFinal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShakeDigest_DoFinal_m5835C3B88D69CD533FD129BC33CD0DDB56E683F6 (ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, int32_t ___outLen2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output0;
		int32_t L_1 = ___outOff1;
		int32_t L_2 = ___outLen2;
		int32_t L_3;
		L_3 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(26 /* System.Int32 Org.BouncyCastle.Crypto.Digests.ShakeDigest::DoOutput(System.Byte[],System.Int32,System.Int32) */, __this, L_0, L_1, L_2);
		V_0 = L_3;
		VirtualActionInvoker0::Invoke(19 /* System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::Reset() */, __this);
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.ShakeDigest::DoOutput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShakeDigest_DoOutput_m89E8E79C3F5FA21C5B619BC42A5E3899442B4F1E (ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, int32_t ___outLen2, const RuntimeMethod* method) 
{
	{
		bool L_0 = ((KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8*)__this)->___squeezing_6;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		KeccakDigest_AbsorbBits_mDF0B3C132153676498B7FCBC52458DEC8D2F1015(__this, ((int32_t)15), 4, NULL);
	}

IL_0011:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___output0;
		int32_t L_2 = ___outOff1;
		int32_t L_3 = ___outLen2;
		KeccakDigest_Squeeze_m06A0BB20D5E6F05E57FDF21843493ADBEB2F5449(__this, L_1, L_2, ((int64_t)(((int64_t)L_3)<<3)), NULL);
		int32_t L_4 = ___outLen2;
		return L_4;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.ShakeDigest::DoFinal(System.Byte[],System.Int32,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShakeDigest_DoFinal_m727CC07217A2D122F8D5326C8E9B2EE8F22E601D (ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, uint8_t ___partialByte2, int32_t ___partialBits3, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output0;
		int32_t L_1 = ___outOff1;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 Org.BouncyCastle.Crypto.Digests.KeccakDigest::GetDigestSize() */, __this);
		uint8_t L_3 = ___partialByte2;
		int32_t L_4 = ___partialBits3;
		int32_t L_5;
		L_5 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, uint8_t, int32_t >::Invoke(27 /* System.Int32 Org.BouncyCastle.Crypto.Digests.ShakeDigest::DoFinal(System.Byte[],System.Int32,System.Int32,System.Byte,System.Int32) */, __this, L_0, L_1, L_2, L_3, L_4);
		return L_5;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.ShakeDigest::DoFinal(System.Byte[],System.Int32,System.Int32,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ShakeDigest_DoFinal_m25232001180CC6CDFB24014E4C8FC5A5077CCBF9 (ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, int32_t ___outLen2, uint8_t ___partialByte3, int32_t ___partialBits4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___partialBits4;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		int32_t L_1 = ___partialBits4;
		if ((((int32_t)L_1) <= ((int32_t)7)))
		{
			goto IL_001a;
		}
	}

IL_000a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral551A56E699A1D330BA6125604C7025562B94E331)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3FDAB44963B739C563B4CBB8193839AB37E78B75)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ShakeDigest_DoFinal_m25232001180CC6CDFB24014E4C8FC5A5077CCBF9_RuntimeMethod_var)));
	}

IL_001a:
	{
		uint8_t L_3 = ___partialByte3;
		int32_t L_4 = ___partialBits4;
		int32_t L_5 = ___partialBits4;
		V_0 = ((int32_t)(((int32_t)((int32_t)L_3&((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_4&((int32_t)31))))), 1))))|((int32_t)(((int32_t)15)<<((int32_t)(L_5&((int32_t)31)))))));
		int32_t L_6 = ___partialBits4;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 4));
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)8)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_8 = V_0;
		KeccakDigest_Absorb_m2134FF1C7576CAFCB54798F5E02248622A5EABD6(__this, (uint8_t)((int32_t)(uint8_t)L_8), NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 8));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)(L_10>>8));
	}

IL_0049:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		KeccakDigest_AbsorbBits_mDF0B3C132153676498B7FCBC52458DEC8D2F1015(__this, L_12, L_13, NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___output0;
		int32_t L_15 = ___outOff1;
		int32_t L_16 = ___outLen2;
		KeccakDigest_Squeeze_m06A0BB20D5E6F05E57FDF21843493ADBEB2F5449(__this, L_14, L_15, ((int64_t)(((int64_t)L_16)<<3)), NULL);
		VirtualActionInvoker0::Invoke(19 /* System.Void Org.BouncyCastle.Crypto.Digests.KeccakDigest::Reset() */, __this);
		int32_t L_17 = ___outLen2;
		return L_17;
	}
}
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.ShakeDigest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ShakeDigest_Copy_m58AE3DA6F78439A31C0476E4F9A94CAAFED1A532 (ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* L_0 = (ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940*)il2cpp_codegen_object_new(ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940_il2cpp_TypeInfo_var);
		ShakeDigest__ctor_m4879A01D3AC477DB3EBAA03423931C69B26FF86D(L_0, __this, NULL);
		return L_0;
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
// System.Byte[] Org.BouncyCastle.Crypto.Digests.CShakeDigest::EncodeString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CShakeDigest_EncodeString_m34E03EA3F9D783A5F95DF9C6536F78C25F31EC90 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Arrays_IsNullOrEmpty_m857F7133D4139AE4A4BDA066D96B4E708B55A228(L_0, NULL);
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = XofUtilities_LeftEncode_mD563830BBEC4715BE3B4A09E22CE76EBA0A0CE72(((int64_t)0), NULL);
		return L_2;
	}

IL_0010:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___str0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = XofUtilities_LeftEncode_mD563830BBEC4715BE3B4A09E22CE76EBA0A0CE72(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), ((int64_t)8))), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = Arrays_Concatenate_mBF2AE3386B1446B9FBF48BCFF071052C2B712AD4(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.CShakeDigest::.ctor(System.Int32,System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CShakeDigest__ctor_m96035B3C1AFCCBF0EDE0C5AE4C1F2ACD2ADCB3FF (CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE* __this, int32_t ___bitLength0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___N1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_0 = NULL;
	{
		int32_t L_0 = ___bitLength0;
		ShakeDigest__ctor_m2B3B14BB44A9AD5C9CDBDD41EE6122B928CFC532(__this, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___N1;
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___N1;
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_001f;
		}
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___S2;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___S2;
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			goto IL_001f;
		}
	}

IL_0017:
	{
		__this->___diff_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___diff_8), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		return;
	}

IL_001f:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_5 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)3);
		V_0 = L_5;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_6 = V_0;
		int32_t L_7 = ((KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8*)__this)->___rate_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = XofUtilities_LeftEncode_mD563830BBEC4715BE3B4A09E22CE76EBA0A0CE72(((int64_t)((int32_t)(L_7/8))), NULL);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_8);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___N1;
		il2cpp_codegen_runtime_class_init_inline(CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = CShakeDigest_EncodeString_m34E03EA3F9D783A5F95DF9C6536F78C25F31EC90(L_10, NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_11);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___S2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = CShakeDigest_EncodeString_m34E03EA3F9D783A5F95DF9C6536F78C25F31EC90(L_13, NULL);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_14);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = Arrays_ConcatenateAll_m0EA3BD1B3ECB315394C885FF3913A84F9CF24115(L_15, NULL);
		__this->___diff_8 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___diff_8), (void*)L_16);
		CShakeDigest_DiffPadAndAbsorb_m3DDF8993182DEC91F62497DC27F9A30273188F90(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.CShakeDigest::DiffPadAndAbsorb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CShakeDigest_DiffPadAndAbsorb_m3DDF8993182DEC91F62497DC27F9A30273188F90 (CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ((KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8*)__this)->___rate_3;
		V_0 = ((int32_t)(L_0/8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___diff_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___diff_8;
		KeccakDigest_Absorb_m56F9CE4FAB360094C8F6EBB6071CDF7F322E6F8C(__this, L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___diff_8;
		int32_t L_4 = V_0;
		V_1 = ((int32_t)(((int32_t)(((RuntimeArray*)L_3)->max_length))%L_4));
		int32_t L_5 = V_1;
		if (!L_5)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
		goto IL_004f;
	}

IL_0032:
	{
		il2cpp_codegen_runtime_class_init_inline(CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ((CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_StaticFields*)il2cpp_codegen_static_fields_for(CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_il2cpp_TypeInfo_var))->___padding_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ((CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_StaticFields*)il2cpp_codegen_static_fields_for(CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_il2cpp_TypeInfo_var))->___padding_7;
		KeccakDigest_Absorb_m56F9CE4FAB360094C8F6EBB6071CDF7F322E6F8C(__this, L_8, 0, ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		int32_t L_10 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ((CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_StaticFields*)il2cpp_codegen_static_fields_for(CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_il2cpp_TypeInfo_var))->___padding_7;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length))));
	}

IL_004f:
	{
		int32_t L_12 = V_2;
		il2cpp_codegen_runtime_class_init_inline(CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ((CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_StaticFields*)il2cpp_codegen_static_fields_for(CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_il2cpp_TypeInfo_var))->___padding_7;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ((CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_StaticFields*)il2cpp_codegen_static_fields_for(CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_il2cpp_TypeInfo_var))->___padding_7;
		int32_t L_15 = V_2;
		KeccakDigest_Absorb_m56F9CE4FAB360094C8F6EBB6071CDF7F322E6F8C(__this, L_14, 0, L_15, NULL);
	}

IL_0066:
	{
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Digests.CShakeDigest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CShakeDigest_get_AlgorithmName_mB0834EBE0727F4AAE217A6CC307D5B8D60E27379 (CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D09C41582674F1982BDB869DC6E0E8E03B42E47);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8*)__this)->___fixedOutputLength_5;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(_stringLiteral2D09C41582674F1982BDB869DC6E0E8E03B42E47, L_2, NULL);
		return L_3;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.CShakeDigest::DoOutput(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CShakeDigest_DoOutput_mE7AE206E3B03D0C6A3782711190D9D9398A6B7F6 (CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, int32_t ___outLen2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___diff_8;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___output0;
		int32_t L_2 = ___outOff1;
		int32_t L_3 = ___outLen2;
		int32_t L_4;
		L_4 = ShakeDigest_DoOutput_m89E8E79C3F5FA21C5B619BC42A5E3899442B4F1E(__this, L_1, L_2, L_3, NULL);
		return L_4;
	}

IL_0012:
	{
		bool L_5 = ((KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8*)__this)->___squeezing_6;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		KeccakDigest_AbsorbBits_mDF0B3C132153676498B7FCBC52458DEC8D2F1015(__this, 0, 2, NULL);
	}

IL_0022:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___output0;
		int32_t L_7 = ___outOff1;
		int32_t L_8 = ___outLen2;
		KeccakDigest_Squeeze_m06A0BB20D5E6F05E57FDF21843493ADBEB2F5449(__this, L_6, L_7, ((int64_t)(((int64_t)L_8)<<3)), NULL);
		int32_t L_9 = ___outLen2;
		return L_9;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.CShakeDigest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CShakeDigest_Reset_m2A5EA6D9B2EF2BEF8469DC08AB34526B05DFFC95 (CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE* __this, const RuntimeMethod* method) 
{
	{
		KeccakDigest_Reset_mE30FA11687332C83798A868A6622DA71A2C0C483(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___diff_8;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		CShakeDigest_DiffPadAndAbsorb_m3DDF8993182DEC91F62497DC27F9A30273188F90(__this, NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.CShakeDigest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CShakeDigest__cctor_m3BFEB924BC428FA1E2E3EE21A16A3C620FE68B55 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)100));
		((CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_StaticFields*)il2cpp_codegen_static_fields_for(CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_il2cpp_TypeInfo_var))->___padding_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_StaticFields*)il2cpp_codegen_static_fields_for(CShakeDigest_tB84BF0129A9BEE5586FFBC29C08798EC16808FCE_il2cpp_TypeInfo_var))->___padding_7), (void*)L_0);
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
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::.ctor(Org.BouncyCastle.Crypto.Digests.Dstu7564Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest__ctor_m471B9F06EEF6E678349B3219E11FB3F4C6EF6A2F (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* ___digest0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_0 = ___digest0;
		Dstu7564Digest_CopyIn_m15D93A16B0671F325634291F62146B1770E480E9(__this, L_0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.Dstu7564Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest_CopyIn_m15D93A16B0671F325634291F62146B1770E480E9 (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* ___digest0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_0 = ___digest0;
		int32_t L_1 = L_0->___hashSize_4;
		__this->___hashSize_4 = L_1;
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_2 = ___digest0;
		int32_t L_3 = L_2->___blockSize_5;
		__this->___blockSize_5 = L_3;
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_4 = ___digest0;
		int32_t L_5 = L_4->___rounds_7;
		__this->___rounds_7 = L_5;
		int32_t L_6 = __this->___columns_6;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_7 = __this->___columns_6;
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_8 = ___digest0;
		int32_t L_9 = L_8->___columns_6;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_9))))
		{
			goto IL_006f;
		}
	}
	{
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_10 = ___digest0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = L_10->___state_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = __this->___state_8;
		int32_t L_13 = __this->___columns_6;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_11, 0, (RuntimeArray*)L_12, 0, L_13, NULL);
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_14 = ___digest0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14->___buf_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___buf_13;
		int32_t L_17 = __this->___blockSize_5;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, 0, L_17, NULL);
		goto IL_00bf;
	}

IL_006f:
	{
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_18 = ___digest0;
		int32_t L_19 = L_18->___columns_6;
		__this->___columns_6 = L_19;
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_20 = ___digest0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = L_20->___state_8;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_22;
		L_22 = Arrays_Clone_m271EAB8D16255673EB3F60DE30564ADE004B4DE5(L_21, NULL);
		__this->___state_8 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___state_8), (void*)L_22);
		int32_t L_23 = __this->___columns_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_23);
		__this->___tempState1_9 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempState1_9), (void*)L_24);
		int32_t L_25 = __this->___columns_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_25);
		__this->___tempState2_10 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempState2_10), (void*)L_26);
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_27 = ___digest0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = L_27->___buf_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29;
		L_29 = Arrays_Clone_mC73CD122DC37EDEB733EC84DB0137D8D7DD5B87F(L_28, NULL);
		__this->___buf_13 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buf_13), (void*)L_29);
	}

IL_00bf:
	{
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_30 = ___digest0;
		uint64_t L_31 = L_30->___inputBlocks_11;
		__this->___inputBlocks_11 = L_31;
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_32 = ___digest0;
		int32_t L_33 = L_32->___bufOff_12;
		__this->___bufOff_12 = L_33;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest__ctor_mA6BDB63EBD7A709B0FE32C268D153A9D9DA2650A (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, int32_t ___hashSizeBits0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___hashSizeBits0;
		if ((((int32_t)L_0) == ((int32_t)((int32_t)256))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = ___hashSizeBits0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)384))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = ___hashSizeBits0;
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)512)))))
		{
			goto IL_0029;
		}
	}

IL_001e:
	{
		int32_t L_3 = ___hashSizeBits0;
		__this->___hashSize_4 = ((int32_t)(L_3/8));
		goto IL_0034;
	}

IL_0029:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB44B6D70DD5244AC0FDDD23B5291F9C2AFA55DE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dstu7564Digest__ctor_mA6BDB63EBD7A709B0FE32C268D153A9D9DA2650A_RuntimeMethod_var)));
	}

IL_0034:
	{
		int32_t L_5 = ___hashSizeBits0;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)256))))
		{
			goto IL_004e;
		}
	}
	{
		__this->___columns_6 = ((int32_t)16);
		__this->___rounds_7 = ((int32_t)14);
		goto IL_005d;
	}

IL_004e:
	{
		__this->___columns_6 = 8;
		__this->___rounds_7 = ((int32_t)10);
	}

IL_005d:
	{
		int32_t L_6 = __this->___columns_6;
		__this->___blockSize_5 = ((int32_t)(L_6<<3));
		int32_t L_7 = __this->___columns_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->___state_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___state_8), (void*)L_8);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = __this->___state_8;
		int32_t L_10 = __this->___blockSize_5;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)L_10));
		int32_t L_11 = __this->___columns_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_11);
		__this->___tempState1_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempState1_9), (void*)L_12);
		int32_t L_13 = __this->___columns_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)L_13);
		__this->___tempState2_10 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tempState2_10), (void*)L_14);
		int32_t L_15 = __this->___blockSize_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_15);
		__this->___buf_13 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buf_13), (void*)L_16);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dstu7564Digest_get_AlgorithmName_m8BD3F8740E8FC2133F6A40C481C533F723B32E23 (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9CE360493B86C87454160F971971A9C9A08230E);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralA9CE360493B86C87454160F971971A9C9A08230E;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dstu7564Digest_GetDigestSize_mE6521E1B64B0DF222CF1CD13169E4090DDC76B81 (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___hashSize_4;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::GetByteLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dstu7564Digest_GetByteLength_mF71E5B8DAC37895964ED1377522A3CFB3BF171E1 (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___blockSize_5;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest_Update_mD0CA3CF305816B40FAC48C5BDB01EB9A1FCD3BAA (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___buf_13;
		int32_t L_1 = __this->___bufOff_12;
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->___bufOff_12 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		uint8_t L_4 = ___input0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		int32_t L_5 = __this->___bufOff_12;
		int32_t L_6 = __this->___blockSize_5;
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_004a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___buf_13;
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(20 /* System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::ProcessBlock(System.Byte[],System.Int32) */, __this, L_7, 0);
		__this->___bufOff_12 = 0;
		uint64_t L_8 = __this->___inputBlocks_11;
		__this->___inputBlocks_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_8, ((int64_t)1)));
	}

IL_004a:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest_BlockUpdate_m5495B3AD7D552C26C0A38361E43E0CCD1B67C113 (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		goto IL_0015;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = L_1;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		VirtualActionInvoker1< uint8_t >::Invoke(16 /* System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::Update(System.Byte) */, __this, L_4);
		int32_t L_5 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}

IL_0015:
	{
		int32_t L_6 = __this->___bufOff_12;
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_7 = ___length2;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}

IL_0021:
	{
		int32_t L_8 = ___length2;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		goto IL_0052;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___input0;
		int32_t L_10 = ___inOff1;
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(20 /* System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::ProcessBlock(System.Byte[],System.Int32) */, __this, L_9, L_10);
		int32_t L_11 = ___inOff1;
		int32_t L_12 = __this->___blockSize_5;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		int32_t L_13 = ___length2;
		int32_t L_14 = __this->___blockSize_5;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_13, L_14));
		uint64_t L_15 = __this->___inputBlocks_11;
		__this->___inputBlocks_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_15, ((int64_t)1)));
	}

IL_0052:
	{
		int32_t L_16 = ___length2;
		int32_t L_17 = __this->___blockSize_5;
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0070;
	}

IL_005d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___input0;
		int32_t L_19 = ___inOff1;
		int32_t L_20 = L_19;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = L_20;
		uint8_t L_22 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		VirtualActionInvoker1< uint8_t >::Invoke(16 /* System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::Update(System.Byte) */, __this, L_22);
		int32_t L_23 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
	}

IL_0070:
	{
		int32_t L_24 = ___length2;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_005d;
		}
	}

IL_0074:
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dstu7564Digest_DoFinal_m6A931536659207A42CA3540CA4915E2FBA66901B (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_7 = NULL;
	intptr_t V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		int32_t L_0 = __this->___bufOff_12;
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___buf_13;
		int32_t L_2 = __this->___bufOff_12;
		int32_t L_3 = L_2;
		V_6 = L_3;
		__this->___bufOff_12 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_6;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)128));
		int32_t L_5 = __this->___blockSize_5;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)12)));
		int32_t L_6 = __this->___bufOff_12;
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0095;
		}
	}
	{
		goto IL_0056;
	}

IL_003b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___buf_13;
		int32_t L_9 = __this->___bufOff_12;
		int32_t L_10 = L_9;
		V_6 = L_10;
		__this->___bufOff_12 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_11 = V_6;
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)0);
	}

IL_0056:
	{
		int32_t L_12 = __this->___bufOff_12;
		int32_t L_13 = __this->___blockSize_5;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_003b;
		}
	}
	{
		__this->___bufOff_12 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___buf_13;
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(20 /* System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::ProcessBlock(System.Byte[],System.Int32) */, __this, L_14, 0);
		goto IL_0095;
	}

IL_007a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___buf_13;
		int32_t L_16 = __this->___bufOff_12;
		int32_t L_17 = L_16;
		V_6 = L_17;
		__this->___bufOff_12 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_6;
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)0);
	}

IL_0095:
	{
		int32_t L_19 = __this->___bufOff_12;
		int32_t L_20 = V_1;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_007a;
		}
	}
	{
		uint64_t L_21 = __this->___inputBlocks_11;
		int32_t L_22 = __this->___blockSize_5;
		int32_t L_23 = V_0;
		V_2 = ((int64_t)(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)((int64_t)L_21&((int64_t)(uint64_t)((uint32_t)(-1))))), ((int64_t)L_22))), ((int64_t)(uint64_t)((uint32_t)L_23))))<<3));
		uint64_t L_24 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___buf_13;
		int32_t L_26 = __this->___bufOff_12;
		Pack_UInt32_To_LE_mA6C2D23F4AFF959717160ABC23B31EC76F53877E(((int32_t)(uint32_t)L_24), L_25, L_26, NULL);
		int32_t L_27 = __this->___bufOff_12;
		__this->___bufOff_12 = ((int32_t)il2cpp_codegen_add(L_27, 4));
		uint64_t L_28 = V_2;
		V_2 = ((int64_t)((uint64_t)L_28>>((int32_t)32)));
		uint64_t L_29 = V_2;
		uint64_t L_30 = __this->___inputBlocks_11;
		int32_t L_31 = __this->___blockSize_5;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_29, ((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((uint64_t)L_30>>((int32_t)32))), ((int64_t)L_31)))<<3))));
		uint64_t L_32 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___buf_13;
		int32_t L_34 = __this->___bufOff_12;
		Pack_UInt64_To_LE_m636E90C1902B2A82549A884FBC29A86CEB2B73F2(L_32, L_33, L_34, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->___buf_13;
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(20 /* System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::ProcessBlock(System.Byte[],System.Int32) */, __this, L_35, 0);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_36 = __this->___state_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_37 = __this->___tempState1_9;
		int32_t L_38 = __this->___columns_6;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_36, 0, (RuntimeArray*)L_37, 0, L_38, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_39 = __this->___tempState1_9;
		Dstu7564Digest_P_m2445FF277DC5CE297BE7470B0014D4F6EBECCBFA(__this, L_39, NULL);
		V_3 = 0;
		goto IL_0159;
	}

IL_0139:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_40 = __this->___state_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = L_40;
		V_7 = L_41;
		int32_t L_42 = V_3;
		int32_t L_43 = L_42;
		V_8 = L_43;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = V_7;
		intptr_t L_45 = V_8;
		intptr_t L_46 = L_45;
		int64_t L_47 = (int64_t)(L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_48 = __this->___tempState1_9;
		int32_t L_49 = V_3;
		int32_t L_50 = L_49;
		int64_t L_51 = (int64_t)(L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43), (uint64_t)((int64_t)(L_47^L_51)));
		int32_t L_52 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_0159:
	{
		int32_t L_53 = V_3;
		int32_t L_54 = __this->___columns_6;
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			goto IL_0139;
		}
	}
	{
		int32_t L_55 = __this->___hashSize_4;
		V_4 = ((int32_t)(L_55/8));
		int32_t L_56 = __this->___columns_6;
		int32_t L_57 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_56, L_57));
		goto IL_0194;
	}

IL_0179:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_58 = __this->___state_8;
		int32_t L_59 = V_5;
		int32_t L_60 = L_59;
		int64_t L_61 = (int64_t)(L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = ___output0;
		int32_t L_63 = ___outOff1;
		Pack_UInt64_To_LE_m636E90C1902B2A82549A884FBC29A86CEB2B73F2(L_61, L_62, L_63, NULL);
		int32_t L_64 = ___outOff1;
		___outOff1 = ((int32_t)il2cpp_codegen_add(L_64, 8));
		int32_t L_65 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0194:
	{
		int32_t L_66 = V_5;
		int32_t L_67 = __this->___columns_6;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0179;
		}
	}
	{
		VirtualActionInvoker0::Invoke(19 /* System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::Reset() */, __this);
		int32_t L_68 = __this->___hashSize_4;
		return L_68;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest_Reset_m3D73BA860C0CBFCB4FF69BBAB062A9F482EAE0BB (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___state_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->___state_8;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->___state_8;
		int32_t L_3 = __this->___blockSize_5;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)L_3));
		__this->___inputBlocks_11 = ((int64_t)0);
		__this->___bufOff_12 = 0;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::ProcessBlock(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest_ProcessBlock_m4A78946D85225357F48B80271E6F72CE173CCF3D (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	int32_t V_3 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_4 = NULL;
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		int32_t L_0 = ___inOff1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0031;
	}

IL_0006:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input0;
		int32_t L_2 = V_0;
		uint64_t L_3;
		L_3 = Pack_LE_To_UInt64_m7F95797FD245489E424B633B5786987B95C2E0DA(L_1, L_2, NULL);
		V_2 = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 8));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = __this->___tempState1_9;
		int32_t L_6 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = __this->___state_8;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		int64_t L_10 = (int64_t)(L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		uint64_t L_11 = V_2;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (uint64_t)((int64_t)(L_10^(int64_t)L_11)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = __this->___tempState2_10;
		int32_t L_13 = V_1;
		uint64_t L_14 = V_2;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (uint64_t)L_14);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0031:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = __this->___columns_6;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0006;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = __this->___tempState1_9;
		Dstu7564Digest_P_m2445FF277DC5CE297BE7470B0014D4F6EBECCBFA(__this, L_18, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_19 = __this->___tempState2_10;
		Dstu7564Digest_Q_mE13C260C970C2C4F9511542EF27FA5D68A37A8B6(__this, L_19, NULL);
		V_3 = 0;
		goto IL_007f;
	}

IL_0056:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = __this->___state_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = L_20;
		V_4 = L_21;
		int32_t L_22 = V_3;
		int32_t L_23 = L_22;
		V_5 = L_23;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = V_4;
		intptr_t L_25 = V_5;
		intptr_t L_26 = L_25;
		int64_t L_27 = (int64_t)(L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = __this->___tempState1_9;
		int32_t L_29 = V_3;
		int32_t L_30 = L_29;
		int64_t L_31 = (int64_t)(L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = __this->___tempState2_10;
		int32_t L_33 = V_3;
		int32_t L_34 = L_33;
		int64_t L_35 = (int64_t)(L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23), (uint64_t)((int64_t)(L_27^((int64_t)(L_31^L_35)))));
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_007f:
	{
		int32_t L_37 = V_3;
		int32_t L_38 = __this->___columns_6;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0056;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::P(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest_P_m2445FF277DC5CE297BE7470B0014D4F6EBECCBFA (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_3 = NULL;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		V_0 = 0;
		goto IL_0045;
	}

IL_0004:
	{
		int32_t L_0 = V_0;
		V_1 = ((int64_t)L_0);
		V_2 = 0;
		goto IL_0023;
	}

IL_000b:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___s0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = L_1;
		V_3 = L_2;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_4 = L_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = V_3;
		intptr_t L_6 = V_4;
		intptr_t L_7 = L_6;
		int64_t L_8 = (int64_t)(L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		uint64_t L_9 = V_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (uint64_t)((int64_t)(L_8^(int64_t)L_9)));
		uint64_t L_10 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, ((int64_t)((int32_t)16))));
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0023:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = __this->___columns_6;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_000b;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___s0;
		Dstu7564Digest_ShiftRows_mC48853FB3201FF63C6F0311ABC41CBD62187979D(__this, L_14, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = ___s0;
		Dstu7564Digest_SubBytes_m11C167583957E2C6CEB3053345AA32AEDB233D3F(__this, L_15, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___s0;
		Dstu7564Digest_MixColumns_mDB22CFC5EE817AFCE3A361EA7BFC6BEA8862A55D(__this, L_16, NULL);
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0045:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = __this->___rounds_7;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::Q(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest_Q_mE13C260C970C2C4F9511542EF27FA5D68A37A8B6 (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_3 = NULL;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		V_0 = 0;
		goto IL_0063;
	}

IL_0004:
	{
		int32_t L_0 = __this->___columns_6;
		int32_t L_1 = V_0;
		V_1 = ((int64_t)(((int64_t)(((int64_t)((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_subtract(L_0, 1))<<4))^L_1)))<<((int32_t)56)))|((int64_t)67818912035696883LL)));
		V_2 = 0;
		goto IL_0041;
	}

IL_0023:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___s0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = L_2;
		V_3 = L_3;
		int32_t L_4 = V_2;
		int32_t L_5 = L_4;
		V_4 = L_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_3;
		intptr_t L_7 = V_4;
		intptr_t L_8 = L_7;
		int64_t L_9 = (int64_t)(L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		uint64_t L_10 = V_1;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (uint64_t)((int64_t)il2cpp_codegen_add(L_9, (int64_t)L_10)));
		uint64_t L_11 = V_1;
		V_1 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_11, ((int64_t)1152921504606846976LL)));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0041:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = __this->___columns_6;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0023;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = ___s0;
		Dstu7564Digest_ShiftRows_mC48853FB3201FF63C6F0311ABC41CBD62187979D(__this, L_15, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___s0;
		Dstu7564Digest_SubBytes_m11C167583957E2C6CEB3053345AA32AEDB233D3F(__this, L_16, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___s0;
		Dstu7564Digest_MixColumns_mDB22CFC5EE817AFCE3A361EA7BFC6BEA8862A55D(__this, L_17, NULL);
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0063:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = __this->___rounds_7;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.UInt64 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::MixColumn(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Dstu7564Digest_MixColumn_m69620BB77E248E433FF5773E1C83A6970662E562 (uint64_t ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		uint64_t L_0 = ___c0;
		uint64_t L_1 = ___c0;
		V_0 = ((int64_t)(((int64_t)(((int64_t)((int64_t)L_0&((int64_t)9187201950435737471LL)))<<1))^((int64_t)il2cpp_codegen_multiply(((int64_t)((uint64_t)((int64_t)((int64_t)L_1&((int64_t)-9187201950435737472LL)))>>7)), ((int64_t)((int32_t)29))))));
		uint64_t L_2 = ___c0;
		il2cpp_codegen_runtime_class_init_inline(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = Dstu7564Digest_Rotate_m412B2D17E6CF9F5AC1218A1D68F151BC624F8559(8, L_2, NULL);
		uint64_t L_4 = ___c0;
		V_1 = ((int64_t)((int64_t)L_3^(int64_t)L_4));
		uint64_t L_5 = V_1;
		uint64_t L_6 = V_1;
		uint64_t L_7;
		L_7 = Dstu7564Digest_Rotate_m412B2D17E6CF9F5AC1218A1D68F151BC624F8559(((int32_t)16), L_6, NULL);
		V_1 = ((int64_t)((int64_t)L_5^(int64_t)L_7));
		uint64_t L_8 = V_1;
		uint64_t L_9 = ___c0;
		uint64_t L_10;
		L_10 = Dstu7564Digest_Rotate_m412B2D17E6CF9F5AC1218A1D68F151BC624F8559(((int32_t)48), L_9, NULL);
		V_1 = ((int64_t)((int64_t)L_8^(int64_t)L_10));
		uint64_t L_11 = V_1;
		uint64_t L_12 = ___c0;
		uint64_t L_13 = V_0;
		V_2 = ((int64_t)(((int64_t)((int64_t)L_11^(int64_t)L_12))^(int64_t)L_13));
		uint64_t L_14 = V_2;
		uint64_t L_15 = V_2;
		uint64_t L_16 = V_2;
		V_2 = ((int64_t)(((int64_t)(((int64_t)(((int64_t)((int64_t)L_14&((int64_t)4557430888798830399LL)))<<2))^((int64_t)il2cpp_codegen_multiply(((int64_t)((uint64_t)((int64_t)((int64_t)L_15&((int64_t)-9187201950435737472LL)))>>6)), ((int64_t)((int32_t)29))))))^((int64_t)il2cpp_codegen_multiply(((int64_t)((uint64_t)((int64_t)((int64_t)L_16&((int64_t)4629771061636907072LL)))>>6)), ((int64_t)((int32_t)29))))));
		uint64_t L_17 = V_1;
		uint64_t L_18 = V_2;
		uint64_t L_19;
		L_19 = Dstu7564Digest_Rotate_m412B2D17E6CF9F5AC1218A1D68F151BC624F8559(((int32_t)32), L_18, NULL);
		uint64_t L_20 = V_0;
		uint64_t L_21;
		L_21 = Dstu7564Digest_Rotate_m412B2D17E6CF9F5AC1218A1D68F151BC624F8559(((int32_t)40), L_20, NULL);
		uint64_t L_22 = V_0;
		uint64_t L_23;
		L_23 = Dstu7564Digest_Rotate_m412B2D17E6CF9F5AC1218A1D68F151BC624F8559(((int32_t)48), L_22, NULL);
		return ((int64_t)(((int64_t)(((int64_t)((int64_t)L_17^(int64_t)L_19))^(int64_t)L_21))^(int64_t)L_23));
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::MixColumns(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest_MixColumns_mDB22CFC5EE817AFCE3A361EA7BFC6BEA8862A55D (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0013;
	}

IL_0004:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___s0;
		int32_t L_1 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___s0;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		int64_t L_5 = (int64_t)(L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		il2cpp_codegen_runtime_class_init_inline(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var);
		uint64_t L_6;
		L_6 = Dstu7564Digest_MixColumn_m69620BB77E248E433FF5773E1C83A6970662E562(L_5, NULL);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint64_t)L_6);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0013:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->___columns_6;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.UInt64 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::Rotate(System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Dstu7564Digest_Rotate_m412B2D17E6CF9F5AC1218A1D68F151BC624F8559 (int32_t ___n0, uint64_t ___x1, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___x1;
		int32_t L_1 = ___n0;
		uint64_t L_2 = ___x1;
		int32_t L_3 = ___n0;
		return ((int64_t)(((int64_t)((uint64_t)L_0>>((int32_t)(L_1&((int32_t)63)))))|((int64_t)((int64_t)L_2<<((int32_t)(((-L_3))&((int32_t)63)))))));
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::ShiftRows(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest_ShiftRows_mC48853FB3201FF63C6F0311ABC41CBD62187979D (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s0, const RuntimeMethod* method) 
{
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
	int32_t V_26 = 0;
	{
		int32_t L_0 = __this->___columns_6;
		V_26 = L_0;
		int32_t L_1 = V_26;
		if ((((int32_t)L_1) == ((int32_t)8)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = V_26;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)16))))
		{
			goto IL_01b4;
		}
	}
	{
		goto IL_063d;
	}

IL_001b:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___s0;
		int32_t L_4 = 0;
		int64_t L_5 = (int64_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___s0;
		int32_t L_7 = 1;
		int64_t L_8 = (int64_t)(L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___s0;
		int32_t L_10 = 2;
		int64_t L_11 = (int64_t)(L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___s0;
		int32_t L_13 = 3;
		int64_t L_14 = (int64_t)(L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = L_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = ___s0;
		int32_t L_16 = 4;
		int64_t L_17 = (int64_t)(L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_4 = L_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = ___s0;
		int32_t L_19 = 5;
		int64_t L_20 = (int64_t)(L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		V_5 = L_20;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = ___s0;
		int32_t L_22 = 6;
		int64_t L_23 = (int64_t)(L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		V_6 = L_23;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = ___s0;
		int32_t L_25 = 7;
		int64_t L_26 = (int64_t)(L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		V_7 = L_26;
		uint64_t L_27 = V_0;
		uint64_t L_28 = V_4;
		V_8 = ((int64_t)(((int64_t)((int64_t)L_27^(int64_t)L_28))&((int64_t)-4294967296LL)));
		uint64_t L_29 = V_0;
		uint64_t L_30 = V_8;
		V_0 = ((int64_t)((int64_t)L_29^(int64_t)L_30));
		uint64_t L_31 = V_4;
		uint64_t L_32 = V_8;
		V_4 = ((int64_t)((int64_t)L_31^(int64_t)L_32));
		uint64_t L_33 = V_1;
		uint64_t L_34 = V_5;
		V_8 = ((int64_t)(((int64_t)((int64_t)L_33^(int64_t)L_34))&((int64_t)72057594021150720LL)));
		uint64_t L_35 = V_1;
		uint64_t L_36 = V_8;
		V_1 = ((int64_t)((int64_t)L_35^(int64_t)L_36));
		uint64_t L_37 = V_5;
		uint64_t L_38 = V_8;
		V_5 = ((int64_t)((int64_t)L_37^(int64_t)L_38));
		uint64_t L_39 = V_2;
		uint64_t L_40 = V_6;
		V_8 = ((int64_t)(((int64_t)((int64_t)L_39^(int64_t)L_40))&((int64_t)281474976645120LL)));
		uint64_t L_41 = V_2;
		uint64_t L_42 = V_8;
		V_2 = ((int64_t)((int64_t)L_41^(int64_t)L_42));
		uint64_t L_43 = V_6;
		uint64_t L_44 = V_8;
		V_6 = ((int64_t)((int64_t)L_43^(int64_t)L_44));
		uint64_t L_45 = V_3;
		uint64_t L_46 = V_7;
		V_8 = ((int64_t)(((int64_t)((int64_t)L_45^(int64_t)L_46))&((int64_t)1099511627520LL)));
		uint64_t L_47 = V_3;
		uint64_t L_48 = V_8;
		V_3 = ((int64_t)((int64_t)L_47^(int64_t)L_48));
		uint64_t L_49 = V_7;
		uint64_t L_50 = V_8;
		V_7 = ((int64_t)((int64_t)L_49^(int64_t)L_50));
		uint64_t L_51 = V_0;
		uint64_t L_52 = V_2;
		V_8 = ((int64_t)(((int64_t)((int64_t)L_51^(int64_t)L_52))&((int64_t)-281470681808896LL)));
		uint64_t L_53 = V_0;
		uint64_t L_54 = V_8;
		V_0 = ((int64_t)((int64_t)L_53^(int64_t)L_54));
		uint64_t L_55 = V_2;
		uint64_t L_56 = V_8;
		V_2 = ((int64_t)((int64_t)L_55^(int64_t)L_56));
		uint64_t L_57 = V_1;
		uint64_t L_58 = V_3;
		V_8 = ((int64_t)(((int64_t)((int64_t)L_57^(int64_t)L_58))&((int64_t)72056494543077120LL)));
		uint64_t L_59 = V_1;
		uint64_t L_60 = V_8;
		V_1 = ((int64_t)((int64_t)L_59^(int64_t)L_60));
		uint64_t L_61 = V_3;
		uint64_t L_62 = V_8;
		V_3 = ((int64_t)((int64_t)L_61^(int64_t)L_62));
		uint64_t L_63 = V_4;
		uint64_t L_64 = V_6;
		V_8 = ((int64_t)(((int64_t)((int64_t)L_63^(int64_t)L_64))&((int64_t)-281470681808896LL)));
		uint64_t L_65 = V_4;
		uint64_t L_66 = V_8;
		V_4 = ((int64_t)((int64_t)L_65^(int64_t)L_66));
		uint64_t L_67 = V_6;
		uint64_t L_68 = V_8;
		V_6 = ((int64_t)((int64_t)L_67^(int64_t)L_68));
		uint64_t L_69 = V_5;
		uint64_t L_70 = V_7;
		V_8 = ((int64_t)(((int64_t)((int64_t)L_69^(int64_t)L_70))&((int64_t)72056494543077120LL)));
		uint64_t L_71 = V_5;
		uint64_t L_72 = V_8;
		V_5 = ((int64_t)((int64_t)L_71^(int64_t)L_72));
		uint64_t L_73 = V_7;
		uint64_t L_74 = V_8;
		V_7 = ((int64_t)((int64_t)L_73^(int64_t)L_74));
		uint64_t L_75 = V_0;
		uint64_t L_76 = V_1;
		V_8 = ((int64_t)(((int64_t)((int64_t)L_75^(int64_t)L_76))&((int64_t)-71777214294589696LL)));
		uint64_t L_77 = V_0;
		uint64_t L_78 = V_8;
		V_0 = ((int64_t)((int64_t)L_77^(int64_t)L_78));
		uint64_t L_79 = V_1;
		uint64_t L_80 = V_8;
		V_1 = ((int64_t)((int64_t)L_79^(int64_t)L_80));
		uint64_t L_81 = V_2;
		uint64_t L_82 = V_3;
		V_8 = ((int64_t)(((int64_t)((int64_t)L_81^(int64_t)L_82))&((int64_t)-71777214294589696LL)));
		uint64_t L_83 = V_2;
		uint64_t L_84 = V_8;
		V_2 = ((int64_t)((int64_t)L_83^(int64_t)L_84));
		uint64_t L_85 = V_3;
		uint64_t L_86 = V_8;
		V_3 = ((int64_t)((int64_t)L_85^(int64_t)L_86));
		uint64_t L_87 = V_4;
		uint64_t L_88 = V_5;
		V_8 = ((int64_t)(((int64_t)((int64_t)L_87^(int64_t)L_88))&((int64_t)-71777214294589696LL)));
		uint64_t L_89 = V_4;
		uint64_t L_90 = V_8;
		V_4 = ((int64_t)((int64_t)L_89^(int64_t)L_90));
		uint64_t L_91 = V_5;
		uint64_t L_92 = V_8;
		V_5 = ((int64_t)((int64_t)L_91^(int64_t)L_92));
		uint64_t L_93 = V_6;
		uint64_t L_94 = V_7;
		V_8 = ((int64_t)(((int64_t)((int64_t)L_93^(int64_t)L_94))&((int64_t)-71777214294589696LL)));
		uint64_t L_95 = V_6;
		uint64_t L_96 = V_8;
		V_6 = ((int64_t)((int64_t)L_95^(int64_t)L_96));
		uint64_t L_97 = V_7;
		uint64_t L_98 = V_8;
		V_7 = ((int64_t)((int64_t)L_97^(int64_t)L_98));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_99 = ___s0;
		uint64_t L_100 = V_0;
		(L_99)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_100);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_101 = ___s0;
		uint64_t L_102 = V_1;
		(L_101)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_102);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_103 = ___s0;
		uint64_t L_104 = V_2;
		(L_103)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_104);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = ___s0;
		uint64_t L_106 = V_3;
		(L_105)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_106);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_107 = ___s0;
		uint64_t L_108 = V_4;
		(L_107)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_108);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_109 = ___s0;
		uint64_t L_110 = V_5;
		(L_109)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_110);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_111 = ___s0;
		uint64_t L_112 = V_6;
		(L_111)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_112);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_113 = ___s0;
		uint64_t L_114 = V_7;
		(L_113)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_114);
		return;
	}

IL_01b4:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_115 = ___s0;
		int32_t L_116 = 0;
		int64_t L_117 = (int64_t)(L_115)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_116));
		V_9 = L_117;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_118 = ___s0;
		int32_t L_119 = 1;
		int64_t L_120 = (int64_t)(L_118)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_119));
		V_10 = L_120;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_121 = ___s0;
		int32_t L_122 = 2;
		int64_t L_123 = (int64_t)(L_121)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_122));
		V_11 = L_123;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_124 = ___s0;
		int32_t L_125 = 3;
		int64_t L_126 = (int64_t)(L_124)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_125));
		V_12 = L_126;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_127 = ___s0;
		int32_t L_128 = 4;
		int64_t L_129 = (int64_t)(L_127)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_128));
		V_13 = L_129;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_130 = ___s0;
		int32_t L_131 = 5;
		int64_t L_132 = (int64_t)(L_130)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_131));
		V_14 = L_132;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_133 = ___s0;
		int32_t L_134 = 6;
		int64_t L_135 = (int64_t)(L_133)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_134));
		V_15 = L_135;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_136 = ___s0;
		int32_t L_137 = 7;
		int64_t L_138 = (int64_t)(L_136)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_137));
		V_16 = L_138;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_139 = ___s0;
		int32_t L_140 = 8;
		int64_t L_141 = (int64_t)(L_139)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_140));
		V_17 = L_141;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_142 = ___s0;
		int32_t L_143 = ((int32_t)9);
		int64_t L_144 = (int64_t)(L_142)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_143));
		V_18 = L_144;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_145 = ___s0;
		int32_t L_146 = ((int32_t)10);
		int64_t L_147 = (int64_t)(L_145)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_146));
		V_19 = L_147;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_148 = ___s0;
		int32_t L_149 = ((int32_t)11);
		int64_t L_150 = (int64_t)(L_148)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_149));
		V_20 = L_150;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_151 = ___s0;
		int32_t L_152 = ((int32_t)12);
		int64_t L_153 = (int64_t)(L_151)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_152));
		V_21 = L_153;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_154 = ___s0;
		int32_t L_155 = ((int32_t)13);
		int64_t L_156 = (int64_t)(L_154)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_155));
		V_22 = L_156;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_157 = ___s0;
		int32_t L_158 = ((int32_t)14);
		int64_t L_159 = (int64_t)(L_157)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_158));
		V_23 = L_159;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_160 = ___s0;
		int32_t L_161 = ((int32_t)15);
		int64_t L_162 = (int64_t)(L_160)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_161));
		V_24 = L_162;
		uint64_t L_163 = V_9;
		uint64_t L_164 = V_17;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_163^(int64_t)L_164))&((int64_t)-72057594037927936LL)));
		uint64_t L_165 = V_9;
		uint64_t L_166 = V_25;
		V_9 = ((int64_t)((int64_t)L_165^(int64_t)L_166));
		uint64_t L_167 = V_17;
		uint64_t L_168 = V_25;
		V_17 = ((int64_t)((int64_t)L_167^(int64_t)L_168));
		uint64_t L_169 = V_10;
		uint64_t L_170 = V_18;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_169^(int64_t)L_170))&((int64_t)-72057594037927936LL)));
		uint64_t L_171 = V_10;
		uint64_t L_172 = V_25;
		V_10 = ((int64_t)((int64_t)L_171^(int64_t)L_172));
		uint64_t L_173 = V_18;
		uint64_t L_174 = V_25;
		V_18 = ((int64_t)((int64_t)L_173^(int64_t)L_174));
		uint64_t L_175 = V_11;
		uint64_t L_176 = V_19;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_175^(int64_t)L_176))&((int64_t)-281474976710656LL)));
		uint64_t L_177 = V_11;
		uint64_t L_178 = V_25;
		V_11 = ((int64_t)((int64_t)L_177^(int64_t)L_178));
		uint64_t L_179 = V_19;
		uint64_t L_180 = V_25;
		V_19 = ((int64_t)((int64_t)L_179^(int64_t)L_180));
		uint64_t L_181 = V_12;
		uint64_t L_182 = V_20;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_181^(int64_t)L_182))&((int64_t)-1099511627776LL)));
		uint64_t L_183 = V_12;
		uint64_t L_184 = V_25;
		V_12 = ((int64_t)((int64_t)L_183^(int64_t)L_184));
		uint64_t L_185 = V_20;
		uint64_t L_186 = V_25;
		V_20 = ((int64_t)((int64_t)L_185^(int64_t)L_186));
		uint64_t L_187 = V_13;
		uint64_t L_188 = V_21;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_187^(int64_t)L_188))&((int64_t)-4294967296LL)));
		uint64_t L_189 = V_13;
		uint64_t L_190 = V_25;
		V_13 = ((int64_t)((int64_t)L_189^(int64_t)L_190));
		uint64_t L_191 = V_21;
		uint64_t L_192 = V_25;
		V_21 = ((int64_t)((int64_t)L_191^(int64_t)L_192));
		uint64_t L_193 = V_14;
		uint64_t L_194 = V_22;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_193^(int64_t)L_194))&((int64_t)72057594021150720LL)));
		uint64_t L_195 = V_14;
		uint64_t L_196 = V_25;
		V_14 = ((int64_t)((int64_t)L_195^(int64_t)L_196));
		uint64_t L_197 = V_22;
		uint64_t L_198 = V_25;
		V_22 = ((int64_t)((int64_t)L_197^(int64_t)L_198));
		uint64_t L_199 = V_15;
		uint64_t L_200 = V_23;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_199^(int64_t)L_200))&((int64_t)72057594037862400LL)));
		uint64_t L_201 = V_15;
		uint64_t L_202 = V_25;
		V_15 = ((int64_t)((int64_t)L_201^(int64_t)L_202));
		uint64_t L_203 = V_23;
		uint64_t L_204 = V_25;
		V_23 = ((int64_t)((int64_t)L_203^(int64_t)L_204));
		uint64_t L_205 = V_16;
		uint64_t L_206 = V_24;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_205^(int64_t)L_206))&((int64_t)72057594037927680LL)));
		uint64_t L_207 = V_16;
		uint64_t L_208 = V_25;
		V_16 = ((int64_t)((int64_t)L_207^(int64_t)L_208));
		uint64_t L_209 = V_24;
		uint64_t L_210 = V_25;
		V_24 = ((int64_t)((int64_t)L_209^(int64_t)L_210));
		uint64_t L_211 = V_9;
		uint64_t L_212 = V_13;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_211^(int64_t)L_212))&((int64_t)72057589742960640LL)));
		uint64_t L_213 = V_9;
		uint64_t L_214 = V_25;
		V_9 = ((int64_t)((int64_t)L_213^(int64_t)L_214));
		uint64_t L_215 = V_13;
		uint64_t L_216 = V_25;
		V_13 = ((int64_t)((int64_t)L_215^(int64_t)L_216));
		uint64_t L_217 = V_10;
		uint64_t L_218 = V_14;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_217^(int64_t)L_218))&((int64_t)((int32_t)-16777216))));
		uint64_t L_219 = V_10;
		uint64_t L_220 = V_25;
		V_10 = ((int64_t)((int64_t)L_219^(int64_t)L_220));
		uint64_t L_221 = V_14;
		uint64_t L_222 = V_25;
		V_14 = ((int64_t)((int64_t)L_221^(int64_t)L_222));
		uint64_t L_223 = V_11;
		uint64_t L_224 = V_15;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_223^(int64_t)L_224))&((int64_t)-71776119061282816LL)));
		uint64_t L_225 = V_11;
		uint64_t L_226 = V_25;
		V_11 = ((int64_t)((int64_t)L_225^(int64_t)L_226));
		uint64_t L_227 = V_15;
		uint64_t L_228 = V_25;
		V_15 = ((int64_t)((int64_t)L_227^(int64_t)L_228));
		uint64_t L_229 = V_12;
		uint64_t L_230 = V_16;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_229^(int64_t)L_230))&((int64_t)-72056494526300416LL)));
		uint64_t L_231 = V_12;
		uint64_t L_232 = V_25;
		V_12 = ((int64_t)((int64_t)L_231^(int64_t)L_232));
		uint64_t L_233 = V_16;
		uint64_t L_234 = V_25;
		V_16 = ((int64_t)((int64_t)L_233^(int64_t)L_234));
		uint64_t L_235 = V_17;
		uint64_t L_236 = V_21;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_235^(int64_t)L_236))&((int64_t)72057589742960640LL)));
		uint64_t L_237 = V_17;
		uint64_t L_238 = V_25;
		V_17 = ((int64_t)((int64_t)L_237^(int64_t)L_238));
		uint64_t L_239 = V_21;
		uint64_t L_240 = V_25;
		V_21 = ((int64_t)((int64_t)L_239^(int64_t)L_240));
		uint64_t L_241 = V_18;
		uint64_t L_242 = V_22;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_241^(int64_t)L_242))&((int64_t)((int32_t)-16777216))));
		uint64_t L_243 = V_18;
		uint64_t L_244 = V_25;
		V_18 = ((int64_t)((int64_t)L_243^(int64_t)L_244));
		uint64_t L_245 = V_22;
		uint64_t L_246 = V_25;
		V_22 = ((int64_t)((int64_t)L_245^(int64_t)L_246));
		uint64_t L_247 = V_19;
		uint64_t L_248 = V_23;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_247^(int64_t)L_248))&((int64_t)-71776119061282816LL)));
		uint64_t L_249 = V_19;
		uint64_t L_250 = V_25;
		V_19 = ((int64_t)((int64_t)L_249^(int64_t)L_250));
		uint64_t L_251 = V_23;
		uint64_t L_252 = V_25;
		V_23 = ((int64_t)((int64_t)L_251^(int64_t)L_252));
		uint64_t L_253 = V_20;
		uint64_t L_254 = V_24;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_253^(int64_t)L_254))&((int64_t)-72056494526300416LL)));
		uint64_t L_255 = V_20;
		uint64_t L_256 = V_25;
		V_20 = ((int64_t)((int64_t)L_255^(int64_t)L_256));
		uint64_t L_257 = V_24;
		uint64_t L_258 = V_25;
		V_24 = ((int64_t)((int64_t)L_257^(int64_t)L_258));
		uint64_t L_259 = V_9;
		uint64_t L_260 = V_11;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_259^(int64_t)L_260))&((int64_t)-281470681808896LL)));
		uint64_t L_261 = V_9;
		uint64_t L_262 = V_25;
		V_9 = ((int64_t)((int64_t)L_261^(int64_t)L_262));
		uint64_t L_263 = V_11;
		uint64_t L_264 = V_25;
		V_11 = ((int64_t)((int64_t)L_263^(int64_t)L_264));
		uint64_t L_265 = V_10;
		uint64_t L_266 = V_12;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_265^(int64_t)L_266))&((int64_t)72056494543077120LL)));
		uint64_t L_267 = V_10;
		uint64_t L_268 = V_25;
		V_10 = ((int64_t)((int64_t)L_267^(int64_t)L_268));
		uint64_t L_269 = V_12;
		uint64_t L_270 = V_25;
		V_12 = ((int64_t)((int64_t)L_269^(int64_t)L_270));
		uint64_t L_271 = V_13;
		uint64_t L_272 = V_15;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_271^(int64_t)L_272))&((int64_t)-281470681808896LL)));
		uint64_t L_273 = V_13;
		uint64_t L_274 = V_25;
		V_13 = ((int64_t)((int64_t)L_273^(int64_t)L_274));
		uint64_t L_275 = V_15;
		uint64_t L_276 = V_25;
		V_15 = ((int64_t)((int64_t)L_275^(int64_t)L_276));
		uint64_t L_277 = V_14;
		uint64_t L_278 = V_16;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_277^(int64_t)L_278))&((int64_t)72056494543077120LL)));
		uint64_t L_279 = V_14;
		uint64_t L_280 = V_25;
		V_14 = ((int64_t)((int64_t)L_279^(int64_t)L_280));
		uint64_t L_281 = V_16;
		uint64_t L_282 = V_25;
		V_16 = ((int64_t)((int64_t)L_281^(int64_t)L_282));
		uint64_t L_283 = V_17;
		uint64_t L_284 = V_19;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_283^(int64_t)L_284))&((int64_t)-281470681808896LL)));
		uint64_t L_285 = V_17;
		uint64_t L_286 = V_25;
		V_17 = ((int64_t)((int64_t)L_285^(int64_t)L_286));
		uint64_t L_287 = V_19;
		uint64_t L_288 = V_25;
		V_19 = ((int64_t)((int64_t)L_287^(int64_t)L_288));
		uint64_t L_289 = V_18;
		uint64_t L_290 = V_20;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_289^(int64_t)L_290))&((int64_t)72056494543077120LL)));
		uint64_t L_291 = V_18;
		uint64_t L_292 = V_25;
		V_18 = ((int64_t)((int64_t)L_291^(int64_t)L_292));
		uint64_t L_293 = V_20;
		uint64_t L_294 = V_25;
		V_20 = ((int64_t)((int64_t)L_293^(int64_t)L_294));
		uint64_t L_295 = V_21;
		uint64_t L_296 = V_23;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_295^(int64_t)L_296))&((int64_t)-281470681808896LL)));
		uint64_t L_297 = V_21;
		uint64_t L_298 = V_25;
		V_21 = ((int64_t)((int64_t)L_297^(int64_t)L_298));
		uint64_t L_299 = V_23;
		uint64_t L_300 = V_25;
		V_23 = ((int64_t)((int64_t)L_299^(int64_t)L_300));
		uint64_t L_301 = V_22;
		uint64_t L_302 = V_24;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_301^(int64_t)L_302))&((int64_t)72056494543077120LL)));
		uint64_t L_303 = V_22;
		uint64_t L_304 = V_25;
		V_22 = ((int64_t)((int64_t)L_303^(int64_t)L_304));
		uint64_t L_305 = V_24;
		uint64_t L_306 = V_25;
		V_24 = ((int64_t)((int64_t)L_305^(int64_t)L_306));
		uint64_t L_307 = V_9;
		uint64_t L_308 = V_10;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_307^(int64_t)L_308))&((int64_t)-71777214294589696LL)));
		uint64_t L_309 = V_9;
		uint64_t L_310 = V_25;
		V_9 = ((int64_t)((int64_t)L_309^(int64_t)L_310));
		uint64_t L_311 = V_10;
		uint64_t L_312 = V_25;
		V_10 = ((int64_t)((int64_t)L_311^(int64_t)L_312));
		uint64_t L_313 = V_11;
		uint64_t L_314 = V_12;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_313^(int64_t)L_314))&((int64_t)-71777214294589696LL)));
		uint64_t L_315 = V_11;
		uint64_t L_316 = V_25;
		V_11 = ((int64_t)((int64_t)L_315^(int64_t)L_316));
		uint64_t L_317 = V_12;
		uint64_t L_318 = V_25;
		V_12 = ((int64_t)((int64_t)L_317^(int64_t)L_318));
		uint64_t L_319 = V_13;
		uint64_t L_320 = V_14;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_319^(int64_t)L_320))&((int64_t)-71777214294589696LL)));
		uint64_t L_321 = V_13;
		uint64_t L_322 = V_25;
		V_13 = ((int64_t)((int64_t)L_321^(int64_t)L_322));
		uint64_t L_323 = V_14;
		uint64_t L_324 = V_25;
		V_14 = ((int64_t)((int64_t)L_323^(int64_t)L_324));
		uint64_t L_325 = V_15;
		uint64_t L_326 = V_16;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_325^(int64_t)L_326))&((int64_t)-71777214294589696LL)));
		uint64_t L_327 = V_15;
		uint64_t L_328 = V_25;
		V_15 = ((int64_t)((int64_t)L_327^(int64_t)L_328));
		uint64_t L_329 = V_16;
		uint64_t L_330 = V_25;
		V_16 = ((int64_t)((int64_t)L_329^(int64_t)L_330));
		uint64_t L_331 = V_17;
		uint64_t L_332 = V_18;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_331^(int64_t)L_332))&((int64_t)-71777214294589696LL)));
		uint64_t L_333 = V_17;
		uint64_t L_334 = V_25;
		V_17 = ((int64_t)((int64_t)L_333^(int64_t)L_334));
		uint64_t L_335 = V_18;
		uint64_t L_336 = V_25;
		V_18 = ((int64_t)((int64_t)L_335^(int64_t)L_336));
		uint64_t L_337 = V_19;
		uint64_t L_338 = V_20;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_337^(int64_t)L_338))&((int64_t)-71777214294589696LL)));
		uint64_t L_339 = V_19;
		uint64_t L_340 = V_25;
		V_19 = ((int64_t)((int64_t)L_339^(int64_t)L_340));
		uint64_t L_341 = V_20;
		uint64_t L_342 = V_25;
		V_20 = ((int64_t)((int64_t)L_341^(int64_t)L_342));
		uint64_t L_343 = V_21;
		uint64_t L_344 = V_22;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_343^(int64_t)L_344))&((int64_t)-71777214294589696LL)));
		uint64_t L_345 = V_21;
		uint64_t L_346 = V_25;
		V_21 = ((int64_t)((int64_t)L_345^(int64_t)L_346));
		uint64_t L_347 = V_22;
		uint64_t L_348 = V_25;
		V_22 = ((int64_t)((int64_t)L_347^(int64_t)L_348));
		uint64_t L_349 = V_23;
		uint64_t L_350 = V_24;
		V_25 = ((int64_t)(((int64_t)((int64_t)L_349^(int64_t)L_350))&((int64_t)-71777214294589696LL)));
		uint64_t L_351 = V_23;
		uint64_t L_352 = V_25;
		V_23 = ((int64_t)((int64_t)L_351^(int64_t)L_352));
		uint64_t L_353 = V_24;
		uint64_t L_354 = V_25;
		V_24 = ((int64_t)((int64_t)L_353^(int64_t)L_354));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_355 = ___s0;
		uint64_t L_356 = V_9;
		(L_355)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_356);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_357 = ___s0;
		uint64_t L_358 = V_10;
		(L_357)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_358);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_359 = ___s0;
		uint64_t L_360 = V_11;
		(L_359)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_360);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_361 = ___s0;
		uint64_t L_362 = V_12;
		(L_361)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_362);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_363 = ___s0;
		uint64_t L_364 = V_13;
		(L_363)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_364);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_365 = ___s0;
		uint64_t L_366 = V_14;
		(L_365)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_366);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_367 = ___s0;
		uint64_t L_368 = V_15;
		(L_367)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_368);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_369 = ___s0;
		uint64_t L_370 = V_16;
		(L_369)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_370);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_371 = ___s0;
		uint64_t L_372 = V_17;
		(L_371)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (uint64_t)L_372);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_373 = ___s0;
		uint64_t L_374 = V_18;
		(L_373)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint64_t)L_374);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_375 = ___s0;
		uint64_t L_376 = V_19;
		(L_375)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint64_t)L_376);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_377 = ___s0;
		uint64_t L_378 = V_20;
		(L_377)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint64_t)L_378);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_379 = ___s0;
		uint64_t L_380 = V_21;
		(L_379)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint64_t)L_380);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_381 = ___s0;
		uint64_t L_382 = V_22;
		(L_381)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint64_t)L_382);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_383 = ___s0;
		uint64_t L_384 = V_23;
		(L_383)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint64_t)L_384);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_385 = ___s0;
		uint64_t L_386 = V_24;
		(L_385)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint64_t)L_386);
		return;
	}

IL_063d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_387 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_387, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC8A2AD3F4AF7133FDACD2ECF3BAA601D875117C7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_387, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dstu7564Digest_ShiftRows_mC48853FB3201FF63C6F0311ABC41CBD62187979D_RuntimeMethod_var)));
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::SubBytes(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest_SubBytes_m11C167583957E2C6CEB3053345AA32AEDB233D3F (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	uint8_t V_7 = 0x0;
	uint8_t V_8 = 0x0;
	uint8_t V_9 = 0x0;
	uint8_t V_10 = 0x0;
	uint8_t V_11 = 0x0;
	{
		V_0 = 0;
		goto IL_00cf;
	}

IL_0007:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___s0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		uint64_t L_4 = V_1;
		V_2 = ((int32_t)(uint32_t)L_4);
		uint64_t L_5 = V_1;
		V_3 = ((int32_t)(uint32_t)((int64_t)((uint64_t)L_5>>((int32_t)32))));
		il2cpp_codegen_runtime_class_init_inline(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ((Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_StaticFields*)il2cpp_codegen_static_fields_for(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var))->___S0_14;
		uint32_t L_7 = V_2;
		uintptr_t L_8 = ((uintptr_t)((int32_t)((int32_t)L_7&((int32_t)255))));
		uint8_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_4 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ((Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_StaticFields*)il2cpp_codegen_static_fields_for(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var))->___S1_15;
		uint32_t L_11 = V_2;
		uintptr_t L_12 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_11>>8))&((int32_t)255))));
		uint8_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ((Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_StaticFields*)il2cpp_codegen_static_fields_for(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var))->___S2_16;
		uint32_t L_15 = V_2;
		uintptr_t L_16 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_15>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_6 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ((Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_StaticFields*)il2cpp_codegen_static_fields_for(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var))->___S3_17;
		uint32_t L_19 = V_2;
		uintptr_t L_20 = ((uintptr_t)((int32_t)((uint32_t)L_19>>((int32_t)24))));
		uint8_t L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_7 = L_21;
		uint8_t L_22 = V_4;
		uint8_t L_23 = V_5;
		uint8_t L_24 = V_6;
		uint8_t L_25 = V_7;
		V_2 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_22|((int32_t)((int32_t)L_23<<8))))|((int32_t)((int32_t)L_24<<((int32_t)16)))))|((int32_t)((int32_t)L_25<<((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ((Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_StaticFields*)il2cpp_codegen_static_fields_for(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var))->___S0_14;
		uint32_t L_27 = V_3;
		uintptr_t L_28 = ((uintptr_t)((int32_t)((int32_t)L_27&((int32_t)255))));
		uint8_t L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		V_8 = L_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ((Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_StaticFields*)il2cpp_codegen_static_fields_for(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var))->___S1_15;
		uint32_t L_31 = V_3;
		uintptr_t L_32 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_31>>8))&((int32_t)255))));
		uint8_t L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		V_9 = L_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ((Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_StaticFields*)il2cpp_codegen_static_fields_for(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var))->___S2_16;
		uint32_t L_35 = V_3;
		uintptr_t L_36 = ((uintptr_t)((int32_t)(((int32_t)((uint32_t)L_35>>((int32_t)16)))&((int32_t)255))));
		uint8_t L_37 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
		V_10 = L_37;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ((Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_StaticFields*)il2cpp_codegen_static_fields_for(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var))->___S3_17;
		uint32_t L_39 = V_3;
		uintptr_t L_40 = ((uintptr_t)((int32_t)((uint32_t)L_39>>((int32_t)24))));
		uint8_t L_41 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		V_11 = L_41;
		uint8_t L_42 = V_8;
		uint8_t L_43 = V_9;
		uint8_t L_44 = V_10;
		uint8_t L_45 = V_11;
		V_3 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_42|((int32_t)((int32_t)L_43<<8))))|((int32_t)((int32_t)L_44<<((int32_t)16)))))|((int32_t)((int32_t)L_45<<((int32_t)24)))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_46 = ___s0;
		int32_t L_47 = V_0;
		uint32_t L_48 = V_2;
		uint32_t L_49 = V_3;
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47), (uint64_t)((int64_t)(((int64_t)(uint64_t)L_48)|((int64_t)(((int64_t)(uint64_t)L_49)<<((int32_t)32))))));
		int32_t L_50 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00cf:
	{
		int32_t L_51 = V_0;
		int32_t L_52 = __this->___columns_6;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dstu7564Digest_Copy_m34C3C75B27FA09919A1CB80B0552668C5364DC6A (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_0 = (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05*)il2cpp_codegen_object_new(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var);
		Dstu7564Digest__ctor_m471B9F06EEF6E678349B3219E11FB3F4C6EF6A2F(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest_Reset_mCE6FD010BF8C656509657F7B0984EED003F6C940 (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___other0;
		V_0 = ((Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05*)CastclassClass((RuntimeObject*)L_0, Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var));
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_1 = V_0;
		Dstu7564Digest_CopyIn_m15D93A16B0671F325634291F62146B1770E480E9(__this, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest__cctor_m449DEC08169E106FAC94F0A3D13769212F19028C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001304U2D1_10_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001304U2D2_11_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001304U2D3_12_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001304U2D4_13_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001304U2D1_10_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_StaticFields*)il2cpp_codegen_static_fields_for(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var))->___S0_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_StaticFields*)il2cpp_codegen_static_fields_for(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var))->___S0_14), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001304U2D2_11_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_4, L_5, NULL);
		((Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_StaticFields*)il2cpp_codegen_static_fields_for(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var))->___S1_15 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_StaticFields*)il2cpp_codegen_static_fields_for(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var))->___S1_15), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001304U2D3_12_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_7, L_8, NULL);
		((Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_StaticFields*)il2cpp_codegen_static_fields_for(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var))->___S2_16 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_StaticFields*)il2cpp_codegen_static_fields_for(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var))->___S2_16), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_11 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001304U2D4_13_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_10, L_11, NULL);
		((Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_StaticFields*)il2cpp_codegen_static_fields_for(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var))->___S3_17 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_StaticFields*)il2cpp_codegen_static_fields_for(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var))->___S3_17), (void*)L_10);
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
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralDigest__ctor_m67E803310E7744886EF893C646D312868DCCD1FD (GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___xBuf_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xBuf_1), (void*)L_0);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::.ctor(Org.BouncyCastle.Crypto.Digests.GeneralDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralDigest__ctor_m87B9D3E5C08DBEC58227C8469EEA9EC47F6A84F7 (GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* __this, GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* L_0 = ___t0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0->___xBuf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		__this->___xBuf_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xBuf_1), (void*)L_2);
		GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* L_3 = ___t0;
		GeneralDigest_CopyIn_mB0E17BFA6B0BC2D95FE8B64B7837E63CD4EDF728(__this, L_3, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::CopyIn(Org.BouncyCastle.Crypto.Digests.GeneralDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralDigest_CopyIn_mB0E17BFA6B0BC2D95FE8B64B7837E63CD4EDF728 (GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* __this, GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* ___t0, const RuntimeMethod* method) 
{
	{
		GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* L_0 = ___t0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0->___xBuf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___xBuf_1;
		GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* L_3 = ___t0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3->___xBuf_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_1, 0, (RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* L_5 = ___t0;
		int32_t L_6 = L_5->___xBufOff_2;
		__this->___xBufOff_2 = L_6;
		GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* L_7 = ___t0;
		int64_t L_8 = L_7->___byteCount_3;
		__this->___byteCount_3 = L_8;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralDigest_Update_mF43CD544C09FF984DB3A01CA852F0A118D31FD4A (GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___xBuf_1;
		int32_t L_1 = __this->___xBufOff_2;
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->___xBufOff_2 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		uint8_t L_4 = ___input0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		int32_t L_5 = __this->___xBufOff_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___xBuf_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_003d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___xBuf_1;
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(14 /* System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessWord(System.Byte[],System.Int32) */, __this, L_7, 0);
		__this->___xBufOff_2 = 0;
	}

IL_003d:
	{
		int64_t L_8 = __this->___byteCount_3;
		__this->___byteCount_3 = ((int64_t)il2cpp_codegen_add(L_8, ((int64_t)1)));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralDigest_BlockUpdate_mC80B155521BF0C0099B078C6E36419687A11568F (GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___length2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(0, L_0, NULL);
		___length2 = L_1;
		V_0 = 0;
		int32_t L_2 = __this->___xBufOff_2;
		if (!L_2)
		{
			goto IL_0059;
		}
	}
	{
		goto IL_0055;
	}

IL_0015:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___xBuf_1;
		int32_t L_4 = __this->___xBufOff_2;
		int32_t L_5 = L_4;
		V_2 = L_5;
		__this->___xBufOff_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___input0;
		int32_t L_8 = ___inOff1;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_8, L_10));
		uint8_t L_12 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)L_12);
		int32_t L_13 = __this->___xBufOff_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)4))))
		{
			goto IL_0055;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___xBuf_1;
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(14 /* System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessWord(System.Byte[],System.Int32) */, __this, L_14, 0);
		__this->___xBufOff_2 = 0;
		goto IL_0059;
	}

IL_0055:
	{
		int32_t L_15 = V_0;
		int32_t L_16 = ___length2;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0015;
		}
	}

IL_0059:
	{
		int32_t L_17 = ___length2;
		int32_t L_18 = V_0;
		int32_t L_19 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_subtract(L_17, L_18))&((int32_t)-4))), L_19));
		goto IL_0072;
	}

IL_0064:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___input0;
		int32_t L_21 = ___inOff1;
		int32_t L_22 = V_0;
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(14 /* System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessWord(System.Byte[],System.Int32) */, __this, L_20, ((int32_t)il2cpp_codegen_add(L_21, L_22)));
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 4));
	}

IL_0072:
	{
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0064;
		}
	}
	{
		goto IL_0099;
	}

IL_0078:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___xBuf_1;
		int32_t L_27 = __this->___xBufOff_2;
		int32_t L_28 = L_27;
		V_2 = L_28;
		__this->___xBufOff_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		int32_t L_29 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___input0;
		int32_t L_31 = ___inOff1;
		int32_t L_32 = V_0;
		int32_t L_33 = L_32;
		V_0 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_31, L_33));
		uint8_t L_35 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29), (uint8_t)L_35);
	}

IL_0099:
	{
		int32_t L_36 = V_0;
		int32_t L_37 = ___length2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0078;
		}
	}
	{
		int64_t L_38 = __this->___byteCount_3;
		int32_t L_39 = ___length2;
		__this->___byteCount_3 = ((int64_t)il2cpp_codegen_add(L_38, ((int64_t)L_39)));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralDigest_Finish_m9D444CDCBC760932CD5318A831449973B1FC226E (GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->___byteCount_3;
		V_0 = ((int64_t)(L_0<<3));
		GeneralDigest_Update_mF43CD544C09FF984DB3A01CA852F0A118D31FD4A(__this, (uint8_t)((int32_t)128), NULL);
		goto IL_001d;
	}

IL_0016:
	{
		GeneralDigest_Update_mF43CD544C09FF984DB3A01CA852F0A118D31FD4A(__this, (uint8_t)0, NULL);
	}

IL_001d:
	{
		int32_t L_1 = __this->___xBufOff_2;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		int64_t L_2 = V_0;
		VirtualActionInvoker1< int64_t >::Invoke(15 /* System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessLength(System.Int64) */, __this, L_2);
		VirtualActionInvoker0::Invoke(16 /* System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessBlock() */, __this);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeneralDigest_Reset_m1CDCFA775518A1FBB227FCB0673015400D6FF246 (GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* __this, const RuntimeMethod* method) 
{
	{
		__this->___byteCount_3 = ((int64_t)0);
		__this->___xBufOff_2 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___xBuf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___xBuf_1;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.GeneralDigest::GetByteLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GeneralDigest_GetByteLength_mD275825C9388270F4A2F6780ADBE7E9DC45C025E (GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)64);
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
// System.Byte[][] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::MakeC()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* Gost3411Digest_MakeC_m6D0CDDD5D55B201D6CD038FBCE8745ABA8D6FA53 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0019;
	}

IL_000b:
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1 = V_0;
		int32_t L_2 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_3);
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0019:
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) < ((int32_t)4)))
		{
			goto IL_000b;
		}
	}
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_6 = V_0;
		return L_6;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest__ctor_mFDC9E65A371DB1C7F51739D4B8DFFFFB6CC25A6C (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost28147Engine_t29BD1E345CC0E47601E13C510505E011D0F5A7D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2EAC5FB560F66352524E7787FB0EE634A342B4B);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___H_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___H_1), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___L_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___L_2), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___M_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___M_3), (void*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___Sum_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Sum_4), (void*)L_3);
		il2cpp_codegen_runtime_class_init_inline(Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_il2cpp_TypeInfo_var);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_4;
		L_4 = Gost3411Digest_MakeC_m6D0CDDD5D55B201D6CD038FBCE8745ABA8D6FA53(NULL);
		__this->___C_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___C_5), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___xBuf_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xBuf_6), (void*)L_5);
		Gost28147Engine_t29BD1E345CC0E47601E13C510505E011D0F5A7D5* L_6 = (Gost28147Engine_t29BD1E345CC0E47601E13C510505E011D0F5A7D5*)il2cpp_codegen_object_new(Gost28147Engine_t29BD1E345CC0E47601E13C510505E011D0F5A7D5_il2cpp_TypeInfo_var);
		Gost28147Engine__ctor_m9C1C2F7158C48084229E8FD339838EF98DF38DB9(L_6, NULL);
		__this->___cipher_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_9), (void*)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___K_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___K_11), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___a_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___a_12), (void*)L_8);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_9 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___wS_13 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wS_13), (void*)L_9);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_10 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___w_S_14 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___w_S_14), (void*)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___S_15 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___S_15), (void*)L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___U_16 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U_16), (void*)L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___V_17 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___V_17), (void*)L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___W_18 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___W_18), (void*)L_14);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Gost28147Engine_t29BD1E345CC0E47601E13C510505E011D0F5A7D5_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = Gost28147Engine_GetSBox_mD3E516D20A246BBF03AB132344B7A3F840CE36C3(_stringLiteralE2EAC5FB560F66352524E7787FB0EE634A342B4B, NULL);
		__this->___sBox_10 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sBox_10), (void*)L_15);
		RuntimeObject* L_16 = __this->___cipher_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___sBox_10;
		ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1* L_18 = (ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1*)il2cpp_codegen_object_new(ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1_il2cpp_TypeInfo_var);
		ParametersWithSBox__ctor_m3B4F5415B0E95F8FD839B5EE6789A904F7EAFE53(L_18, (RuntimeObject*)NULL, L_17, NULL);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_16, (bool)1, L_18);
		Gost3411Digest_Reset_m78CE1AFB9F1C873BBAC0808ACEB4AF99547B29F3(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest__ctor_m99FA506F33D313B8EAF0A47702CF199D8C3BA406 (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sBoxParam0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost28147Engine_t29BD1E345CC0E47601E13C510505E011D0F5A7D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___H_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___H_1), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___L_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___L_2), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___M_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___M_3), (void*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___Sum_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Sum_4), (void*)L_3);
		il2cpp_codegen_runtime_class_init_inline(Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_il2cpp_TypeInfo_var);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_4;
		L_4 = Gost3411Digest_MakeC_m6D0CDDD5D55B201D6CD038FBCE8745ABA8D6FA53(NULL);
		__this->___C_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___C_5), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___xBuf_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xBuf_6), (void*)L_5);
		Gost28147Engine_t29BD1E345CC0E47601E13C510505E011D0F5A7D5* L_6 = (Gost28147Engine_t29BD1E345CC0E47601E13C510505E011D0F5A7D5*)il2cpp_codegen_object_new(Gost28147Engine_t29BD1E345CC0E47601E13C510505E011D0F5A7D5_il2cpp_TypeInfo_var);
		Gost28147Engine__ctor_m9C1C2F7158C48084229E8FD339838EF98DF38DB9(L_6, NULL);
		__this->___cipher_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_9), (void*)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___K_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___K_11), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___a_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___a_12), (void*)L_8);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_9 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___wS_13 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wS_13), (void*)L_9);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_10 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___w_S_14 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___w_S_14), (void*)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___S_15 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___S_15), (void*)L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___U_16 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U_16), (void*)L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___V_17 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___V_17), (void*)L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___W_18 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___W_18), (void*)L_14);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___sBoxParam0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = Arrays_Clone_mC73CD122DC37EDEB733EC84DB0137D8D7DD5B87F(L_15, NULL);
		__this->___sBox_10 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sBox_10), (void*)L_16);
		RuntimeObject* L_17 = __this->___cipher_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___sBox_10;
		ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1* L_19 = (ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1*)il2cpp_codegen_object_new(ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1_il2cpp_TypeInfo_var);
		ParametersWithSBox__ctor_m3B4F5415B0E95F8FD839B5EE6789A904F7EAFE53(L_19, (RuntimeObject*)NULL, L_18, NULL);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_17, (bool)1, L_19);
		Gost3411Digest_Reset_m78CE1AFB9F1C873BBAC0808ACEB4AF99547B29F3(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::.ctor(Org.BouncyCastle.Crypto.Digests.Gost3411Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest__ctor_m7BE183D28547FCAB000AA35DE491A1F29BDF5CC1 (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost28147Engine_t29BD1E345CC0E47601E13C510505E011D0F5A7D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___H_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___H_1), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___L_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___L_2), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___M_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___M_3), (void*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___Sum_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Sum_4), (void*)L_3);
		il2cpp_codegen_runtime_class_init_inline(Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_il2cpp_TypeInfo_var);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_4;
		L_4 = Gost3411Digest_MakeC_m6D0CDDD5D55B201D6CD038FBCE8745ABA8D6FA53(NULL);
		__this->___C_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___C_5), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___xBuf_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xBuf_6), (void*)L_5);
		Gost28147Engine_t29BD1E345CC0E47601E13C510505E011D0F5A7D5* L_6 = (Gost28147Engine_t29BD1E345CC0E47601E13C510505E011D0F5A7D5*)il2cpp_codegen_object_new(Gost28147Engine_t29BD1E345CC0E47601E13C510505E011D0F5A7D5_il2cpp_TypeInfo_var);
		Gost28147Engine__ctor_m9C1C2F7158C48084229E8FD339838EF98DF38DB9(L_6, NULL);
		__this->___cipher_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_9), (void*)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___K_11 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___K_11), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___a_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___a_12), (void*)L_8);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_9 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___wS_13 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wS_13), (void*)L_9);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_10 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___w_S_14 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___w_S_14), (void*)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___S_15 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___S_15), (void*)L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___U_16 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U_16), (void*)L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___V_17 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___V_17), (void*)L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___W_18 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___W_18), (void*)L_14);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_15 = ___t0;
		Gost3411Digest_Reset_m6BD197C00F49D6321864BE3B3773F707B33E2EFF(__this, L_15, NULL);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Digests.Gost3411Digest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Gost3411Digest_get_AlgorithmName_mE1DFE0692F6EF344D25570F165368D4E381D44BB (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CC1BD712ECBE447E5920A5AAFEB91539F0990B);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral61CC1BD712ECBE447E5920A5AAFEB91539F0990B;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.Gost3411Digest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Gost3411Digest_GetDigestSize_m394B35FF4550B08D4D22B0B9F2081979BFBCAF22 (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)32);
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_Update_m1C9A41A4AE29CB43DA0FC698DFF7FBD1D94875C2 (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___xBuf_6;
		int32_t L_1 = __this->___xBufOff_7;
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->___xBufOff_7 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		uint8_t L_4 = ___input0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		int32_t L_5 = __this->___xBufOff_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___xBuf_6;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0049;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___xBuf_6;
		Gost3411Digest_sumByteArray_m4A0AB103BEAFDE2983BF418C2BC66451677E194E(__this, L_7, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___xBuf_6;
		Gost3411Digest_processBlock_mA6B7625B76A2997A3ED2DD4DE051F2B4DFE30288(__this, L_8, 0, NULL);
		__this->___xBufOff_7 = 0;
	}

IL_0049:
	{
		uint64_t L_9 = __this->___byteCount_8;
		__this->___byteCount_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_9, ((int64_t)1)));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_BlockUpdate_m90A80AE158620A94A9543D50ED171AE75F72589E (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		goto IL_0015;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Gost3411Digest_Update_m1C9A41A4AE29CB43DA0FC698DFF7FBD1D94875C2(__this, L_3, NULL);
		int32_t L_4 = ___inOff1;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}

IL_0015:
	{
		int32_t L_6 = __this->___xBufOff_7;
		if (!L_6)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_7 = ___length2;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		goto IL_0080;
	}

IL_0023:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___input0;
		int32_t L_9 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___xBuf_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___xBuf_6;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___xBuf_6;
		Gost3411Digest_sumByteArray_m4A0AB103BEAFDE2983BF418C2BC66451677E194E(__this, L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___xBuf_6;
		Gost3411Digest_processBlock_mA6B7625B76A2997A3ED2DD4DE051F2B4DFE30288(__this, L_13, 0, NULL);
		int32_t L_14 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___xBuf_6;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)(((RuntimeArray*)L_15)->max_length))));
		int32_t L_16 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___xBuf_6;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_16, ((int32_t)(((RuntimeArray*)L_17)->max_length))));
		uint64_t L_18 = __this->___byteCount_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___xBuf_6;
		__this->___byteCount_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_18, ((int64_t)(uint64_t)((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))));
	}

IL_0080:
	{
		int32_t L_20 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___xBuf_6;
		if ((((int32_t)L_20) > ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_00a0;
	}

IL_008d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___input0;
		int32_t L_23 = ___inOff1;
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		Gost3411Digest_Update_m1C9A41A4AE29CB43DA0FC698DFF7FBD1D94875C2(__this, L_25, NULL);
		int32_t L_26 = ___inOff1;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		int32_t L_27 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
	}

IL_00a0:
	{
		int32_t L_28 = ___length2;
		if ((((int32_t)L_28) > ((int32_t)0)))
		{
			goto IL_008d;
		}
	}
	{
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::P(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Gost3411Digest_P_m94E61F92A7F18CB8A195BE19630000324D6FF60F (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_004e;
	}

IL_0006:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___K_11;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___input0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		uint8_t L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___K_11;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___input0;
		int32_t L_11 = V_1;
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(8, L_11));
		uint8_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___K_11;
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___input0;
		int32_t L_18 = V_1;
		int32_t L_19 = ((int32_t)il2cpp_codegen_add(((int32_t)16), L_18));
		uint8_t L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___K_11;
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___input0;
		int32_t L_25 = V_1;
		int32_t L_26 = ((int32_t)il2cpp_codegen_add(((int32_t)24), L_25));
		uint8_t L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)L_27);
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_004e:
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) < ((int32_t)8)))
		{
			goto IL_0006;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___K_11;
		return L_30;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Digests.Gost3411Digest::A(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Gost3411Digest_A_mA7DDF9596FDCF9DB08B711FF6218B55115397FE1 (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___a_12;
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___input0;
		int32_t L_7 = V_0;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 8));
		uint8_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_5^(int32_t)L_9))));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001a:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)8)))
		{
			goto IL_0004;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___input0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_12, 8, (RuntimeArray*)L_13, 0, ((int32_t)24), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___a_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___input0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)24), 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___input0;
		return L_16;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::E(System.Byte[],System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_E_m02A44FC27507421085A9BAAD45D8984B53B80397 (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s1, int32_t ___sOff2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input3, int32_t ___inOff4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___key0;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_2 = (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)il2cpp_codegen_object_new(KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		KeyParameter__ctor_m178EFF09A4FE23B3FD358AB94605EC4528FBF093(L_2, L_1, NULL);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0, (bool)1, L_2);
		RuntimeObject* L_3 = __this->___cipher_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input3;
		int32_t L_5 = ___inOff4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___s1;
		int32_t L_7 = ___sOff2;
		int32_t L_8;
		L_8 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_3, L_4, L_5, L_6, L_7);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::fw(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_fw_m817835C78C0E77A4D1B35BDCFBBA7BA297DA7444 (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_1 = __this->___wS_13;
		il2cpp_codegen_runtime_class_init_inline(Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_il2cpp_TypeInfo_var);
		Gost3411Digest_cpyBytesToShort_m3991886AEDB0FFD32D3F0748885C29C75AE90501(L_0, L_1, NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = __this->___w_S_14;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_3 = __this->___wS_13;
		int32_t L_4 = 0;
		int16_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_6 = __this->___wS_13;
		int32_t L_7 = 1;
		int16_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_9 = __this->___wS_13;
		int32_t L_10 = 2;
		int16_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_12 = __this->___wS_13;
		int32_t L_13 = 3;
		int16_t L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_15 = __this->___wS_13;
		int32_t L_16 = ((int32_t)12);
		int16_t L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_18 = __this->___wS_13;
		int32_t L_19 = ((int32_t)15);
		int16_t L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (int16_t)((int16_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_5^(int32_t)L_8))^(int32_t)L_11))^(int32_t)L_14))^(int32_t)L_17))^(int32_t)L_20))));
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_21 = __this->___wS_13;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_22 = __this->___w_S_14;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_21, 1, (RuntimeArray*)L_22, 0, ((int32_t)15), NULL);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_23 = __this->___w_S_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___input0;
		Gost3411Digest_cpyShortToBytes_m7AFDFD4D3C2EDBA8408E61575F14A1A7417D8F12(L_23, L_24, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::processBlock(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_processBlock_mA6B7625B76A2997A3ED2DD4DE051F2B4DFE30288 (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___M_3;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, 0, ((int32_t)32), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___H_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___U_16;
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_3, (RuntimeArray*)L_4, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___M_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___V_17;
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_5, (RuntimeArray*)L_6, 0, NULL);
		V_0 = 0;
		goto IL_0056;
	}

IL_0038:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___W_18;
		int32_t L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___U_16;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___V_17;
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		uint8_t L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_12^(int32_t)L_16))));
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0056:
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)32))))
		{
			goto IL_0038;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___W_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = Gost3411Digest_P_m94E61F92A7F18CB8A195BE19630000324D6FF60F(__this, L_19, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___S_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___H_1;
		Gost3411Digest_E_m02A44FC27507421085A9BAAD45D8984B53B80397(__this, L_20, L_21, 0, L_22, 0, NULL);
		V_1 = 1;
		goto IL_0121;
	}

IL_0082:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___U_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = Gost3411Digest_A_mA7DDF9596FDCF9DB08B711FF6218B55115397FE1(__this, L_23, NULL);
		V_2 = L_24;
		V_3 = 0;
		goto IL_00ae;
	}

IL_0093:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___U_16;
		int32_t L_26 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_2;
		int32_t L_28 = V_3;
		int32_t L_29 = L_28;
		uint8_t L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_31 = __this->___C_5;
		int32_t L_32 = V_1;
		int32_t L_33 = L_32;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = V_3;
		int32_t L_36 = L_35;
		uint8_t L_37 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_30^(int32_t)L_37))));
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00ae:
	{
		int32_t L_39 = V_3;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)32))))
		{
			goto IL_0093;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = __this->___V_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41;
		L_41 = Gost3411Digest_A_mA7DDF9596FDCF9DB08B711FF6218B55115397FE1(__this, L_40, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = Gost3411Digest_A_mA7DDF9596FDCF9DB08B711FF6218B55115397FE1(__this, L_41, NULL);
		__this->___V_17 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___V_17), (void*)L_42);
		V_4 = 0;
		goto IL_00f3;
	}

IL_00d0:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = __this->___W_18;
		int32_t L_44 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = __this->___U_16;
		int32_t L_46 = V_4;
		int32_t L_47 = L_46;
		uint8_t L_48 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_47));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = __this->___V_17;
		int32_t L_50 = V_4;
		int32_t L_51 = L_50;
		uint8_t L_52 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_48^(int32_t)L_52))));
		int32_t L_53 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_00f3:
	{
		int32_t L_54 = V_4;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)32))))
		{
			goto IL_00d0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = __this->___W_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56;
		L_56 = Gost3411Digest_P_m94E61F92A7F18CB8A195BE19630000324D6FF60F(__this, L_55, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = __this->___S_15;
		int32_t L_58 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = __this->___H_1;
		int32_t L_60 = V_1;
		Gost3411Digest_E_m02A44FC27507421085A9BAAD45D8984B53B80397(__this, L_56, L_57, ((int32_t)il2cpp_codegen_multiply(L_58, 8)), L_59, ((int32_t)il2cpp_codegen_multiply(L_60, 8)), NULL);
		int32_t L_61 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0121:
	{
		int32_t L_62 = V_1;
		if ((((int32_t)L_62) < ((int32_t)4)))
		{
			goto IL_0082;
		}
	}
	{
		V_5 = 0;
		goto IL_013f;
	}

IL_012d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = __this->___S_15;
		Gost3411Digest_fw_m817835C78C0E77A4D1B35BDCFBBA7BA297DA7444(__this, L_63, NULL);
		int32_t L_64 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_013f:
	{
		int32_t L_65 = V_5;
		if ((((int32_t)L_65) < ((int32_t)((int32_t)12))))
		{
			goto IL_012d;
		}
	}
	{
		V_6 = 0;
		goto IL_016d;
	}

IL_014a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = __this->___S_15;
		int32_t L_67 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = __this->___S_15;
		int32_t L_69 = V_6;
		int32_t L_70 = L_69;
		uint8_t L_71 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_70));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = __this->___M_3;
		int32_t L_73 = V_6;
		int32_t L_74 = L_73;
		uint8_t L_75 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74));
		(L_66)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_67), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_71^(int32_t)L_75))));
		int32_t L_76 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_016d:
	{
		int32_t L_77 = V_6;
		if ((((int32_t)L_77) < ((int32_t)((int32_t)32))))
		{
			goto IL_014a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = __this->___S_15;
		Gost3411Digest_fw_m817835C78C0E77A4D1B35BDCFBBA7BA297DA7444(__this, L_78, NULL);
		V_7 = 0;
		goto IL_01a7;
	}

IL_0184:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = __this->___S_15;
		int32_t L_80 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = __this->___H_1;
		int32_t L_82 = V_7;
		int32_t L_83 = L_82;
		uint8_t L_84 = (L_81)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_83));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = __this->___S_15;
		int32_t L_86 = V_7;
		int32_t L_87 = L_86;
		uint8_t L_88 = (L_85)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_87));
		(L_79)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_80), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_84^(int32_t)L_88))));
		int32_t L_89 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01a7:
	{
		int32_t L_90 = V_7;
		if ((((int32_t)L_90) < ((int32_t)((int32_t)32))))
		{
			goto IL_0184;
		}
	}
	{
		V_8 = 0;
		goto IL_01c4;
	}

IL_01b2:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = __this->___S_15;
		Gost3411Digest_fw_m817835C78C0E77A4D1B35BDCFBBA7BA297DA7444(__this, L_91, NULL);
		int32_t L_92 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_01c4:
	{
		int32_t L_93 = V_8;
		if ((((int32_t)L_93) < ((int32_t)((int32_t)61))))
		{
			goto IL_01b2;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = __this->___S_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = __this->___H_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = __this->___H_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_94, 0, (RuntimeArray*)L_95, 0, ((int32_t)(((RuntimeArray*)L_96)->max_length)), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_finish_mD746DBA20B651B38B762719443B19BC76958759B (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		uint64_t L_0 = __this->___byteCount_8;
		V_0 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_0, ((int64_t)8)));
		uint64_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___L_2;
		Pack_UInt64_To_LE_m3ABFFFC970ABED1C4FB7002081BCC9E3E9572D50(L_1, L_2, NULL);
		goto IL_001f;
	}

IL_0018:
	{
		Gost3411Digest_Update_m1C9A41A4AE29CB43DA0FC698DFF7FBD1D94875C2(__this, (uint8_t)0, NULL);
	}

IL_001f:
	{
		int32_t L_3 = __this->___xBufOff_7;
		if (L_3)
		{
			goto IL_0018;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___L_2;
		Gost3411Digest_processBlock_mA6B7625B76A2997A3ED2DD4DE051F2B4DFE30288(__this, L_4, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___Sum_4;
		Gost3411Digest_processBlock_mA6B7625B76A2997A3ED2DD4DE051F2B4DFE30288(__this, L_5, 0, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.Gost3411Digest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Gost3411Digest_DoFinal_m52EDAE9F71B696D93EB874084E420AF1B361ED8A (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		Gost3411Digest_finish_mD746DBA20B651B38B762719443B19BC76958759B(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___H_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___output0;
		int32_t L_2 = ___outOff1;
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_0, (RuntimeArray*)L_1, L_2, NULL);
		Gost3411Digest_Reset_m78CE1AFB9F1C873BBAC0808ACEB4AF99547B29F3(__this, NULL);
		return ((int32_t)32);
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_Reset_m78CE1AFB9F1C873BBAC0808ACEB4AF99547B29F3 (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___byteCount_8 = ((int64_t)0);
		__this->___xBufOff_7 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___H_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___H_1;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___L_2;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___M_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___M_3;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_6 = __this->___C_5;
		int32_t L_7 = 1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_9 = __this->___C_5;
		int32_t L_10 = 1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_8, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_12 = __this->___C_5;
		int32_t L_13 = 3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_15 = __this->___C_5;
		int32_t L_16 = 3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_14, 0, ((int32_t)(((RuntimeArray*)L_17)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___Sum_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___Sum_4;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___xBuf_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___xBuf_6;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_20, 0, ((int32_t)(((RuntimeArray*)L_21)->max_length)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ((Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_il2cpp_TypeInfo_var))->___C2_19;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_23 = __this->___C_5;
		int32_t L_24 = 2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_22, (RuntimeArray*)L_25, 0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::sumByteArray(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_sumByteArray_m4A0AB103BEAFDE2983BF418C2BC66451677E194E (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0033;
	}

IL_0006:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___Sum_4;
		int32_t L_1 = V_1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3&((int32_t)255))), ((int32_t)((int32_t)L_7&((int32_t)255))))), L_8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___Sum_4;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)((int32_t)(uint8_t)L_11));
		int32_t L_12 = V_2;
		V_0 = ((int32_t)(L_12>>8));
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0033:
	{
		int32_t L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___Sum_4;
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::cpyBytesToShort(System.Byte[],System.Int16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_cpyBytesToShort_m3991886AEDB0FFD32D3F0748885C29C75AE90501 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S0, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___wS1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_0004:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___wS1;
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___S0;
		int32_t L_3 = V_0;
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_3, 2)), 1));
		uint8_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___S0;
		int32_t L_7 = V_0;
		int32_t L_8 = ((int32_t)il2cpp_codegen_multiply(L_7, 2));
		uint8_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (int16_t)((int16_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_5<<8))&((int32_t)65280)))|((int32_t)((int32_t)L_9&((int32_t)255)))))));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0027:
	{
		int32_t L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___S0;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_12)->max_length))/2)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::cpyShortToBytes(System.Int16[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_cpyShortToBytes_m7AFDFD4D3C2EDBA8408E61575F14A1A7417D8F12 (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___wS0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___S1;
		int32_t L_1 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_2 = ___wS0;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		int16_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, 2)), 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_5>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___S1;
		int32_t L_7 = V_0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_8 = ___wS0;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		int16_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_7, 2))), (uint8_t)((int32_t)(uint8_t)L_11));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_001e:
	{
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___S1;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_14)->max_length))/2)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.Gost3411Digest::GetByteLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Gost3411Digest_GetByteLength_m62FE0C0676312EC9DDD926976D9C802C81E827A2 (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)32);
	}
}
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.Gost3411Digest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Gost3411Digest_Copy_m94F290EB1D09B451B9DDB639103FB187F16159F3 (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_0 = (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2*)il2cpp_codegen_object_new(Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_il2cpp_TypeInfo_var);
		Gost3411Digest__ctor_m7BE183D28547FCAB000AA35DE491A1F29BDF5CC1(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest_Reset_m6BD197C00F49D6321864BE3B3773F707B33E2EFF (Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___other0;
		V_0 = ((Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2*)CastclassClass((RuntimeObject*)L_0, Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_il2cpp_TypeInfo_var));
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1->___sBox_10;
		__this->___sBox_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sBox_10), (void*)L_2);
		RuntimeObject* L_3 = __this->___cipher_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___sBox_10;
		ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1* L_5 = (ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1*)il2cpp_codegen_object_new(ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1_il2cpp_TypeInfo_var);
		ParametersWithSBox__ctor_m3B4F5415B0E95F8FD839B5EE6789A904F7EAFE53(L_5, (RuntimeObject*)NULL, L_4, NULL);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_3, (bool)1, L_5);
		Gost3411Digest_Reset_m78CE1AFB9F1C873BBAC0808ACEB4AF99547B29F3(__this, NULL);
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6->___H_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___H_1;
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = L_9->___H_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_7, 0, (RuntimeArray*)L_8, 0, ((int32_t)(((RuntimeArray*)L_10)->max_length)), NULL);
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = L_11->___L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___L_2;
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14->___L_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_12, 0, (RuntimeArray*)L_13, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)), NULL);
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16->___M_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___M_3;
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_19 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = L_19->___M_3;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_17, 0, (RuntimeArray*)L_18, 0, ((int32_t)(((RuntimeArray*)L_20)->max_length)), NULL);
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_21 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = L_21->___Sum_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___Sum_4;
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_24 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = L_24->___Sum_4;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, 0, ((int32_t)(((RuntimeArray*)L_25)->max_length)), NULL);
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_26 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_27 = L_26->___C_5;
		int32_t L_28 = 1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_30 = __this->___C_5;
		int32_t L_31 = 1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_33 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_34 = L_33->___C_5;
		int32_t L_35 = 1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_29, 0, (RuntimeArray*)L_32, 0, ((int32_t)(((RuntimeArray*)L_36)->max_length)), NULL);
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_37 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_38 = L_37->___C_5;
		int32_t L_39 = 2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_41 = __this->___C_5;
		int32_t L_42 = 2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_44 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_45 = L_44->___C_5;
		int32_t L_46 = 2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_40, 0, (RuntimeArray*)L_43, 0, ((int32_t)(((RuntimeArray*)L_47)->max_length)), NULL);
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_48 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_49 = L_48->___C_5;
		int32_t L_50 = 3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_52 = __this->___C_5;
		int32_t L_53 = 3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_55 = V_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_56 = L_55->___C_5;
		int32_t L_57 = 3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57));
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_51, 0, (RuntimeArray*)L_54, 0, ((int32_t)(((RuntimeArray*)L_58)->max_length)), NULL);
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_59 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = L_59->___xBuf_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = __this->___xBuf_6;
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_62 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = L_62->___xBuf_6;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_60, 0, (RuntimeArray*)L_61, 0, ((int32_t)(((RuntimeArray*)L_63)->max_length)), NULL);
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_64 = V_0;
		int32_t L_65 = L_64->___xBufOff_7;
		__this->___xBufOff_7 = L_65;
		Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2* L_66 = V_0;
		uint64_t L_67 = L_66->___byteCount_8;
		__this->___byteCount_8 = L_67;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411Digest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411Digest__cctor_m013F8BCD155419FAF78FB40514CDE129487984CF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600132bU2D1_14_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600132bU2D1_14_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_il2cpp_TypeInfo_var))->___C2_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411Digest_t12D899EFED54CA3202897C85D4762B56DFFBA9D2_il2cpp_TypeInfo_var))->___C2_19), (void*)L_1);
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
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest__ctor_m6CD7868ACCD75EE18356499653E61328971BDA1C (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->___IV_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IV_0), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->___N_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___N_1), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->___Sigma_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Sigma_2), (void*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->___Ki_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Ki_3), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->___m_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_4), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->___h_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___h_5), (void*)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->___tmp_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tmp_6), (void*)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		__this->___block_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___block_7), (void*)L_7);
		__this->___bOff_8 = ((int32_t)64);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___IV0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___IV_0;
		Array_Copy_m4239F97ECC23A71F4191B8722362A1AA38E2E98F((RuntimeArray*)L_8, (RuntimeArray*)L_9, ((int32_t)64), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___IV0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___h_5;
		Array_Copy_m4239F97ECC23A71F4191B8722362A1AA38E2E98F((RuntimeArray*)L_10, (RuntimeArray*)L_11, ((int32_t)64), NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Gost3411_2012Digest_DoFinal_mB8AB63CD7B3375B7975ED99C5D67DFAE2BBF91C2 (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___bOff_8;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_0));
		V_1 = 0;
		goto IL_001b;
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___m_4;
		int32_t L_2 = V_1;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)0);
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_001b:
	{
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_5))))))
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_4;
		int32_t L_7 = V_0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)63), L_7))), (uint8_t)1);
		int32_t L_8 = __this->___bOff_8;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)64))))
		{
			goto IL_0054;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___block_7;
		int32_t L_10 = __this->___bOff_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___m_4;
		int32_t L_12 = V_0;
		int32_t L_13 = V_0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_subtract(((int32_t)64), L_12)), L_13, NULL);
	}

IL_0054:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___h_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___N_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___m_4;
		Gost3411_2012Digest_g_N_m441429BF760A3E878A74E68C02F233F8F5F9B4F1(__this, L_14, L_15, L_16, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___N_1;
		int32_t L_18 = V_0;
		Gost3411_2012Digest_addMod512_mCB37872559037826F7B5A1EB38D15D099B3B1C4B(__this, L_17, ((int32_t)il2cpp_codegen_multiply(L_18, 8)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___Sigma_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___m_4;
		Gost3411_2012Digest_addMod512_m3FC2369D44D867DB3EBFF3A8281E259E5D9C08E0(__this, L_19, L_20, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___h_5;
		il2cpp_codegen_runtime_class_init_inline(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___Zero_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___N_1;
		Gost3411_2012Digest_g_N_m441429BF760A3E878A74E68C02F233F8F5F9B4F1(__this, L_21, L_22, L_23, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___h_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___Zero_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___Sigma_2;
		Gost3411_2012Digest_g_N_m441429BF760A3E878A74E68C02F233F8F5F9B4F1(__this, L_24, L_25, L_26, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___h_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___tmp_6;
		Gost3411_2012Digest_reverse_m59685AE9498C15A77E256858F06117E8627C9C8A(__this, L_27, L_28, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___tmp_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___output0;
		int32_t L_31 = ___outOff1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_29, 0, (RuntimeArray*)L_30, L_31, ((int32_t)64), NULL);
		Gost3411_2012Digest_Reset_mE517CD2A7C5F603D45837FF006648D2DCBFC5DC0(__this, NULL);
		return ((int32_t)64);
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::GetByteLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Gost3411_2012Digest_GetByteLength_mF0D3F8A8ABA90BCD372F62F58D06AD233A3F34F9 (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)64);
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_Reset_mE517CD2A7C5F603D45837FF006648D2DCBFC5DC0 (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___bOff_8 = ((int32_t)64);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___N_1;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		Arrays_Fill_m23EB1BA27E305EC869992BD6CA3D6B30F142FD22(L_0, (uint8_t)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___Sigma_2;
		Arrays_Fill_m23EB1BA27E305EC869992BD6CA3D6B30F142FD22(L_1, (uint8_t)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___h_5;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)64), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___block_7;
		Arrays_Fill_m23EB1BA27E305EC869992BD6CA3D6B30F142FD22(L_4, (uint8_t)0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_Reset_m7F04AE28539262120A8DF67549196E85C9B79FE2 (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___other0;
		V_0 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2*)CastclassClass((RuntimeObject*)L_0, Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var));
		Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___IV_0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, ((int32_t)64), NULL);
		Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4->___N_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___N_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_5, 0, (RuntimeArray*)L_6, 0, ((int32_t)64), NULL);
		Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7->___Sigma_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___Sigma_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, ((int32_t)64), NULL);
		Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10->___Ki_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___Ki_3;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_11, 0, (RuntimeArray*)L_12, 0, ((int32_t)64), NULL);
		Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = L_13->___m_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___m_4;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, 0, ((int32_t)64), NULL);
		Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_16->___h_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___h_5;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_17, 0, (RuntimeArray*)L_18, 0, ((int32_t)64), NULL);
		Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* L_19 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = L_19->___block_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___block_7;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, 0, ((int32_t)64), NULL);
		Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* L_22 = V_0;
		int32_t L_23 = L_22->___bOff_8;
		__this->___bOff_8 = L_23;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_Update_m22952322FF29985CBF8F7D9138D39A5748A2F95A (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___block_7;
		int32_t L_1 = __this->___bOff_8;
		int32_t L_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		V_0 = L_2;
		__this->___bOff_8 = L_2;
		int32_t L_3 = V_0;
		uint8_t L_4 = ___input0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		int32_t L_5 = __this->___bOff_8;
		if (L_5)
		{
			goto IL_0064;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___h_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___N_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___block_7;
		Gost3411_2012Digest_g_N_m441429BF760A3E878A74E68C02F233F8F5F9B4F1(__this, L_6, L_7, L_8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___N_1;
		Gost3411_2012Digest_addMod512_mCB37872559037826F7B5A1EB38D15D099B3B1C4B(__this, L_9, ((int32_t)512), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___Sigma_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___block_7;
		Gost3411_2012Digest_addMod512_m3FC2369D44D867DB3EBFF3A8281E259E5D9C08E0(__this, L_10, L_11, NULL);
		__this->___bOff_8 = ((int32_t)64);
	}

IL_0064:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_BlockUpdate_m579572C54B679A8D2D8A92B33351791723C42C11 (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___len2, const RuntimeMethod* method) 
{
	{
		goto IL_0015;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = L_1;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		Gost3411_2012Digest_Update_m22952322FF29985CBF8F7D9138D39A5748A2F95A(__this, L_4, NULL);
		int32_t L_5 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}

IL_0015:
	{
		int32_t L_6 = __this->___bOff_8;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)64))))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_7 = ___len2;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		goto IL_008e;
	}

IL_0025:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___input0;
		int32_t L_9 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___tmp_6;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, 0, ((int32_t)64), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___tmp_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___block_7;
		Gost3411_2012Digest_reverse_m59685AE9498C15A77E256858F06117E8627C9C8A(__this, L_11, L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___h_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___N_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___block_7;
		Gost3411_2012Digest_g_N_m441429BF760A3E878A74E68C02F233F8F5F9B4F1(__this, L_13, L_14, L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___N_1;
		Gost3411_2012Digest_addMod512_mCB37872559037826F7B5A1EB38D15D099B3B1C4B(__this, L_16, ((int32_t)512), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___Sigma_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___block_7;
		Gost3411_2012Digest_addMod512_m3FC2369D44D867DB3EBFF3A8281E259E5D9C08E0(__this, L_17, L_18, NULL);
		int32_t L_19 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)64)));
		int32_t L_20 = ___inOff1;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_20, ((int32_t)64)));
	}

IL_008e:
	{
		int32_t L_21 = ___len2;
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)64))))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_00a8;
	}

IL_0095:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___input0;
		int32_t L_23 = ___inOff1;
		int32_t L_24 = L_23;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		Gost3411_2012Digest_Update_m22952322FF29985CBF8F7D9138D39A5748A2F95A(__this, L_26, NULL);
		int32_t L_27 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
	}

IL_00a8:
	{
		int32_t L_28 = ___len2;
		if ((((int32_t)L_28) > ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::F(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_F_m4F55D8B30B573B83103FF641E90B5D7B1259051B (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___V0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	uint64_t V_1 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		V_1 = ((int64_t)0);
		uint64_t L_1 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_2 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_3 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___V0;
		int32_t L_6 = ((int32_t)56);
		uint8_t L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = ((int32_t)((int32_t)L_7&((int32_t)255)));
		int64_t L_9 = (int64_t)(L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = ((int64_t)((int64_t)L_1^L_9));
		uint64_t L_10 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_11 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_12 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___V0;
		int32_t L_15 = ((int32_t)48);
		uint8_t L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = ((int32_t)((int32_t)L_16&((int32_t)255)));
		int64_t L_18 = (int64_t)(L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = ((int64_t)((int64_t)L_10^L_18));
		uint64_t L_19 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_20 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_21 = 2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_22 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___V0;
		int32_t L_24 = ((int32_t)40);
		uint8_t L_25 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		int32_t L_26 = ((int32_t)((int32_t)L_25&((int32_t)255)));
		int64_t L_27 = (int64_t)(L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		V_1 = ((int64_t)((int64_t)L_19^L_27));
		uint64_t L_28 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_29 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_30 = 3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_31 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___V0;
		int32_t L_33 = ((int32_t)32);
		uint8_t L_34 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = ((int32_t)((int32_t)L_34&((int32_t)255)));
		int64_t L_36 = (int64_t)(L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		V_1 = ((int64_t)((int64_t)L_28^L_36));
		uint64_t L_37 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_38 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_39 = 4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_40 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___V0;
		int32_t L_42 = ((int32_t)24);
		uint8_t L_43 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42));
		int32_t L_44 = ((int32_t)((int32_t)L_43&((int32_t)255)));
		int64_t L_45 = (int64_t)(L_40)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		V_1 = ((int64_t)((int64_t)L_37^L_45));
		uint64_t L_46 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_47 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_48 = 5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_49 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ___V0;
		int32_t L_51 = ((int32_t)16);
		uint8_t L_52 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		int32_t L_53 = ((int32_t)((int32_t)L_52&((int32_t)255)));
		int64_t L_54 = (int64_t)(L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		V_1 = ((int64_t)((int64_t)L_46^L_54));
		uint64_t L_55 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_56 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_57 = 6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_58 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = ___V0;
		int32_t L_60 = 8;
		uint8_t L_61 = (L_59)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		int32_t L_62 = ((int32_t)((int32_t)L_61&((int32_t)255)));
		int64_t L_63 = (int64_t)(L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_62));
		V_1 = ((int64_t)((int64_t)L_55^L_63));
		uint64_t L_64 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_65 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_66 = 7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_67 = (L_65)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = ___V0;
		int32_t L_69 = 0;
		uint8_t L_70 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		int32_t L_71 = ((int32_t)((int32_t)L_70&((int32_t)255)));
		int64_t L_72 = (int64_t)(L_67)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71));
		V_1 = ((int64_t)((int64_t)L_64^L_72));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_73 = V_0;
		uint64_t L_74 = V_1;
		(L_73)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_74);
		V_1 = ((int64_t)0);
		uint64_t L_75 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_76 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_77 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_78 = (L_76)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = ___V0;
		int32_t L_80 = ((int32_t)57);
		uint8_t L_81 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_80));
		int32_t L_82 = ((int32_t)((int32_t)L_81&((int32_t)255)));
		int64_t L_83 = (int64_t)(L_78)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
		V_1 = ((int64_t)((int64_t)L_75^L_83));
		uint64_t L_84 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_85 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_86 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_87 = (L_85)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_86));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ___V0;
		int32_t L_89 = ((int32_t)49);
		uint8_t L_90 = (L_88)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_89));
		int32_t L_91 = ((int32_t)((int32_t)L_90&((int32_t)255)));
		int64_t L_92 = (int64_t)(L_87)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_91));
		V_1 = ((int64_t)((int64_t)L_84^L_92));
		uint64_t L_93 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_94 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_95 = 2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_96 = (L_94)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_95));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = ___V0;
		int32_t L_98 = ((int32_t)41);
		uint8_t L_99 = (L_97)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_98));
		int32_t L_100 = ((int32_t)((int32_t)L_99&((int32_t)255)));
		int64_t L_101 = (int64_t)(L_96)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_100));
		V_1 = ((int64_t)((int64_t)L_93^L_101));
		uint64_t L_102 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_103 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_104 = 3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = (L_103)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_104));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = ___V0;
		int32_t L_107 = ((int32_t)33);
		uint8_t L_108 = (L_106)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_107));
		int32_t L_109 = ((int32_t)((int32_t)L_108&((int32_t)255)));
		int64_t L_110 = (int64_t)(L_105)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_109));
		V_1 = ((int64_t)((int64_t)L_102^L_110));
		uint64_t L_111 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_112 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_113 = 4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_114 = (L_112)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_113));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115 = ___V0;
		int32_t L_116 = ((int32_t)25);
		uint8_t L_117 = (L_115)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_116));
		int32_t L_118 = ((int32_t)((int32_t)L_117&((int32_t)255)));
		int64_t L_119 = (int64_t)(L_114)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_118));
		V_1 = ((int64_t)((int64_t)L_111^L_119));
		uint64_t L_120 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_121 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_122 = 5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_123 = (L_121)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_122));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_124 = ___V0;
		int32_t L_125 = ((int32_t)17);
		uint8_t L_126 = (L_124)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_125));
		int32_t L_127 = ((int32_t)((int32_t)L_126&((int32_t)255)));
		int64_t L_128 = (int64_t)(L_123)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_127));
		V_1 = ((int64_t)((int64_t)L_120^L_128));
		uint64_t L_129 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_130 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_131 = 6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_132 = (L_130)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_131));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_133 = ___V0;
		int32_t L_134 = ((int32_t)9);
		uint8_t L_135 = (L_133)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_134));
		int32_t L_136 = ((int32_t)((int32_t)L_135&((int32_t)255)));
		int64_t L_137 = (int64_t)(L_132)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_136));
		V_1 = ((int64_t)((int64_t)L_129^L_137));
		uint64_t L_138 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_139 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_140 = 7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_141 = (L_139)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_140));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_142 = ___V0;
		int32_t L_143 = 1;
		uint8_t L_144 = (L_142)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_143));
		int32_t L_145 = ((int32_t)((int32_t)L_144&((int32_t)255)));
		int64_t L_146 = (int64_t)(L_141)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_145));
		V_1 = ((int64_t)((int64_t)L_138^L_146));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_147 = V_0;
		uint64_t L_148 = V_1;
		(L_147)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_148);
		V_1 = ((int64_t)0);
		uint64_t L_149 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_150 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_151 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_152 = (L_150)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_151));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_153 = ___V0;
		int32_t L_154 = ((int32_t)58);
		uint8_t L_155 = (L_153)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_154));
		int32_t L_156 = ((int32_t)((int32_t)L_155&((int32_t)255)));
		int64_t L_157 = (int64_t)(L_152)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_156));
		V_1 = ((int64_t)((int64_t)L_149^L_157));
		uint64_t L_158 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_159 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_160 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_161 = (L_159)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_160));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_162 = ___V0;
		int32_t L_163 = ((int32_t)50);
		uint8_t L_164 = (L_162)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_163));
		int32_t L_165 = ((int32_t)((int32_t)L_164&((int32_t)255)));
		int64_t L_166 = (int64_t)(L_161)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_165));
		V_1 = ((int64_t)((int64_t)L_158^L_166));
		uint64_t L_167 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_168 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_169 = 2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_170 = (L_168)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_169));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_171 = ___V0;
		int32_t L_172 = ((int32_t)42);
		uint8_t L_173 = (L_171)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_172));
		int32_t L_174 = ((int32_t)((int32_t)L_173&((int32_t)255)));
		int64_t L_175 = (int64_t)(L_170)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_174));
		V_1 = ((int64_t)((int64_t)L_167^L_175));
		uint64_t L_176 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_177 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_178 = 3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_179 = (L_177)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_178));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_180 = ___V0;
		int32_t L_181 = ((int32_t)34);
		uint8_t L_182 = (L_180)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_181));
		int32_t L_183 = ((int32_t)((int32_t)L_182&((int32_t)255)));
		int64_t L_184 = (int64_t)(L_179)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_183));
		V_1 = ((int64_t)((int64_t)L_176^L_184));
		uint64_t L_185 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_186 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_187 = 4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_188 = (L_186)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_187));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_189 = ___V0;
		int32_t L_190 = ((int32_t)26);
		uint8_t L_191 = (L_189)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_190));
		int32_t L_192 = ((int32_t)((int32_t)L_191&((int32_t)255)));
		int64_t L_193 = (int64_t)(L_188)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_192));
		V_1 = ((int64_t)((int64_t)L_185^L_193));
		uint64_t L_194 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_195 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_196 = 5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_197 = (L_195)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_196));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_198 = ___V0;
		int32_t L_199 = ((int32_t)18);
		uint8_t L_200 = (L_198)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_199));
		int32_t L_201 = ((int32_t)((int32_t)L_200&((int32_t)255)));
		int64_t L_202 = (int64_t)(L_197)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_201));
		V_1 = ((int64_t)((int64_t)L_194^L_202));
		uint64_t L_203 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_204 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_205 = 6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_206 = (L_204)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_205));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_207 = ___V0;
		int32_t L_208 = ((int32_t)10);
		uint8_t L_209 = (L_207)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_208));
		int32_t L_210 = ((int32_t)((int32_t)L_209&((int32_t)255)));
		int64_t L_211 = (int64_t)(L_206)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_210));
		V_1 = ((int64_t)((int64_t)L_203^L_211));
		uint64_t L_212 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_213 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_214 = 7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_215 = (L_213)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_214));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_216 = ___V0;
		int32_t L_217 = 2;
		uint8_t L_218 = (L_216)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_217));
		int32_t L_219 = ((int32_t)((int32_t)L_218&((int32_t)255)));
		int64_t L_220 = (int64_t)(L_215)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_219));
		V_1 = ((int64_t)((int64_t)L_212^L_220));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_221 = V_0;
		uint64_t L_222 = V_1;
		(L_221)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_222);
		V_1 = ((int64_t)0);
		uint64_t L_223 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_224 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_225 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_226 = (L_224)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_225));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_227 = ___V0;
		int32_t L_228 = ((int32_t)59);
		uint8_t L_229 = (L_227)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_228));
		int32_t L_230 = ((int32_t)((int32_t)L_229&((int32_t)255)));
		int64_t L_231 = (int64_t)(L_226)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_230));
		V_1 = ((int64_t)((int64_t)L_223^L_231));
		uint64_t L_232 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_233 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_234 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_235 = (L_233)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_234));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_236 = ___V0;
		int32_t L_237 = ((int32_t)51);
		uint8_t L_238 = (L_236)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_237));
		int32_t L_239 = ((int32_t)((int32_t)L_238&((int32_t)255)));
		int64_t L_240 = (int64_t)(L_235)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_239));
		V_1 = ((int64_t)((int64_t)L_232^L_240));
		uint64_t L_241 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_242 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_243 = 2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_244 = (L_242)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_243));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_245 = ___V0;
		int32_t L_246 = ((int32_t)43);
		uint8_t L_247 = (L_245)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_246));
		int32_t L_248 = ((int32_t)((int32_t)L_247&((int32_t)255)));
		int64_t L_249 = (int64_t)(L_244)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_248));
		V_1 = ((int64_t)((int64_t)L_241^L_249));
		uint64_t L_250 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_251 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_252 = 3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_253 = (L_251)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_252));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_254 = ___V0;
		int32_t L_255 = ((int32_t)35);
		uint8_t L_256 = (L_254)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_255));
		int32_t L_257 = ((int32_t)((int32_t)L_256&((int32_t)255)));
		int64_t L_258 = (int64_t)(L_253)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_257));
		V_1 = ((int64_t)((int64_t)L_250^L_258));
		uint64_t L_259 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_260 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_261 = 4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_262 = (L_260)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_261));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_263 = ___V0;
		int32_t L_264 = ((int32_t)27);
		uint8_t L_265 = (L_263)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_264));
		int32_t L_266 = ((int32_t)((int32_t)L_265&((int32_t)255)));
		int64_t L_267 = (int64_t)(L_262)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_266));
		V_1 = ((int64_t)((int64_t)L_259^L_267));
		uint64_t L_268 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_269 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_270 = 5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_271 = (L_269)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_270));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_272 = ___V0;
		int32_t L_273 = ((int32_t)19);
		uint8_t L_274 = (L_272)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_273));
		int32_t L_275 = ((int32_t)((int32_t)L_274&((int32_t)255)));
		int64_t L_276 = (int64_t)(L_271)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_275));
		V_1 = ((int64_t)((int64_t)L_268^L_276));
		uint64_t L_277 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_278 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_279 = 6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_280 = (L_278)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_279));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_281 = ___V0;
		int32_t L_282 = ((int32_t)11);
		uint8_t L_283 = (L_281)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_282));
		int32_t L_284 = ((int32_t)((int32_t)L_283&((int32_t)255)));
		int64_t L_285 = (int64_t)(L_280)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_284));
		V_1 = ((int64_t)((int64_t)L_277^L_285));
		uint64_t L_286 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_287 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_288 = 7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_289 = (L_287)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_288));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_290 = ___V0;
		int32_t L_291 = 3;
		uint8_t L_292 = (L_290)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_291));
		int32_t L_293 = ((int32_t)((int32_t)L_292&((int32_t)255)));
		int64_t L_294 = (int64_t)(L_289)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_293));
		V_1 = ((int64_t)((int64_t)L_286^L_294));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_295 = V_0;
		uint64_t L_296 = V_1;
		(L_295)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_296);
		V_1 = ((int64_t)0);
		uint64_t L_297 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_298 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_299 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_300 = (L_298)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_299));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_301 = ___V0;
		int32_t L_302 = ((int32_t)60);
		uint8_t L_303 = (L_301)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_302));
		int32_t L_304 = ((int32_t)((int32_t)L_303&((int32_t)255)));
		int64_t L_305 = (int64_t)(L_300)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_304));
		V_1 = ((int64_t)((int64_t)L_297^L_305));
		uint64_t L_306 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_307 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_308 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_309 = (L_307)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_308));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_310 = ___V0;
		int32_t L_311 = ((int32_t)52);
		uint8_t L_312 = (L_310)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_311));
		int32_t L_313 = ((int32_t)((int32_t)L_312&((int32_t)255)));
		int64_t L_314 = (int64_t)(L_309)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_313));
		V_1 = ((int64_t)((int64_t)L_306^L_314));
		uint64_t L_315 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_316 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_317 = 2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_318 = (L_316)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_317));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_319 = ___V0;
		int32_t L_320 = ((int32_t)44);
		uint8_t L_321 = (L_319)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_320));
		int32_t L_322 = ((int32_t)((int32_t)L_321&((int32_t)255)));
		int64_t L_323 = (int64_t)(L_318)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_322));
		V_1 = ((int64_t)((int64_t)L_315^L_323));
		uint64_t L_324 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_325 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_326 = 3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_327 = (L_325)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_326));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_328 = ___V0;
		int32_t L_329 = ((int32_t)36);
		uint8_t L_330 = (L_328)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_329));
		int32_t L_331 = ((int32_t)((int32_t)L_330&((int32_t)255)));
		int64_t L_332 = (int64_t)(L_327)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_331));
		V_1 = ((int64_t)((int64_t)L_324^L_332));
		uint64_t L_333 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_334 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_335 = 4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_336 = (L_334)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_335));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_337 = ___V0;
		int32_t L_338 = ((int32_t)28);
		uint8_t L_339 = (L_337)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_338));
		int32_t L_340 = ((int32_t)((int32_t)L_339&((int32_t)255)));
		int64_t L_341 = (int64_t)(L_336)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_340));
		V_1 = ((int64_t)((int64_t)L_333^L_341));
		uint64_t L_342 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_343 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_344 = 5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_345 = (L_343)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_344));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_346 = ___V0;
		int32_t L_347 = ((int32_t)20);
		uint8_t L_348 = (L_346)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_347));
		int32_t L_349 = ((int32_t)((int32_t)L_348&((int32_t)255)));
		int64_t L_350 = (int64_t)(L_345)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_349));
		V_1 = ((int64_t)((int64_t)L_342^L_350));
		uint64_t L_351 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_352 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_353 = 6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_354 = (L_352)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_353));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_355 = ___V0;
		int32_t L_356 = ((int32_t)12);
		uint8_t L_357 = (L_355)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_356));
		int32_t L_358 = ((int32_t)((int32_t)L_357&((int32_t)255)));
		int64_t L_359 = (int64_t)(L_354)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_358));
		V_1 = ((int64_t)((int64_t)L_351^L_359));
		uint64_t L_360 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_361 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_362 = 7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_363 = (L_361)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_362));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_364 = ___V0;
		int32_t L_365 = 4;
		uint8_t L_366 = (L_364)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_365));
		int32_t L_367 = ((int32_t)((int32_t)L_366&((int32_t)255)));
		int64_t L_368 = (int64_t)(L_363)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_367));
		V_1 = ((int64_t)((int64_t)L_360^L_368));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_369 = V_0;
		uint64_t L_370 = V_1;
		(L_369)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_370);
		V_1 = ((int64_t)0);
		uint64_t L_371 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_372 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_373 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_374 = (L_372)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_373));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_375 = ___V0;
		int32_t L_376 = ((int32_t)61);
		uint8_t L_377 = (L_375)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_376));
		int32_t L_378 = ((int32_t)((int32_t)L_377&((int32_t)255)));
		int64_t L_379 = (int64_t)(L_374)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_378));
		V_1 = ((int64_t)((int64_t)L_371^L_379));
		uint64_t L_380 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_381 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_382 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_383 = (L_381)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_382));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_384 = ___V0;
		int32_t L_385 = ((int32_t)53);
		uint8_t L_386 = (L_384)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_385));
		int32_t L_387 = ((int32_t)((int32_t)L_386&((int32_t)255)));
		int64_t L_388 = (int64_t)(L_383)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_387));
		V_1 = ((int64_t)((int64_t)L_380^L_388));
		uint64_t L_389 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_390 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_391 = 2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_392 = (L_390)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_391));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_393 = ___V0;
		int32_t L_394 = ((int32_t)45);
		uint8_t L_395 = (L_393)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_394));
		int32_t L_396 = ((int32_t)((int32_t)L_395&((int32_t)255)));
		int64_t L_397 = (int64_t)(L_392)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_396));
		V_1 = ((int64_t)((int64_t)L_389^L_397));
		uint64_t L_398 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_399 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_400 = 3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_401 = (L_399)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_400));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_402 = ___V0;
		int32_t L_403 = ((int32_t)37);
		uint8_t L_404 = (L_402)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_403));
		int32_t L_405 = ((int32_t)((int32_t)L_404&((int32_t)255)));
		int64_t L_406 = (int64_t)(L_401)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_405));
		V_1 = ((int64_t)((int64_t)L_398^L_406));
		uint64_t L_407 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_408 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_409 = 4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_410 = (L_408)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_409));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_411 = ___V0;
		int32_t L_412 = ((int32_t)29);
		uint8_t L_413 = (L_411)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_412));
		int32_t L_414 = ((int32_t)((int32_t)L_413&((int32_t)255)));
		int64_t L_415 = (int64_t)(L_410)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_414));
		V_1 = ((int64_t)((int64_t)L_407^L_415));
		uint64_t L_416 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_417 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_418 = 5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_419 = (L_417)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_418));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_420 = ___V0;
		int32_t L_421 = ((int32_t)21);
		uint8_t L_422 = (L_420)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_421));
		int32_t L_423 = ((int32_t)((int32_t)L_422&((int32_t)255)));
		int64_t L_424 = (int64_t)(L_419)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_423));
		V_1 = ((int64_t)((int64_t)L_416^L_424));
		uint64_t L_425 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_426 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_427 = 6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_428 = (L_426)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_427));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_429 = ___V0;
		int32_t L_430 = ((int32_t)13);
		uint8_t L_431 = (L_429)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_430));
		int32_t L_432 = ((int32_t)((int32_t)L_431&((int32_t)255)));
		int64_t L_433 = (int64_t)(L_428)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_432));
		V_1 = ((int64_t)((int64_t)L_425^L_433));
		uint64_t L_434 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_435 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_436 = 7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_437 = (L_435)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_436));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_438 = ___V0;
		int32_t L_439 = 5;
		uint8_t L_440 = (L_438)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_439));
		int32_t L_441 = ((int32_t)((int32_t)L_440&((int32_t)255)));
		int64_t L_442 = (int64_t)(L_437)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_441));
		V_1 = ((int64_t)((int64_t)L_434^L_442));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_443 = V_0;
		uint64_t L_444 = V_1;
		(L_443)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_444);
		V_1 = ((int64_t)0);
		uint64_t L_445 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_446 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_447 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_448 = (L_446)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_447));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_449 = ___V0;
		int32_t L_450 = ((int32_t)62);
		uint8_t L_451 = (L_449)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_450));
		int32_t L_452 = ((int32_t)((int32_t)L_451&((int32_t)255)));
		int64_t L_453 = (int64_t)(L_448)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_452));
		V_1 = ((int64_t)((int64_t)L_445^L_453));
		uint64_t L_454 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_455 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_456 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_457 = (L_455)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_456));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_458 = ___V0;
		int32_t L_459 = ((int32_t)54);
		uint8_t L_460 = (L_458)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_459));
		int32_t L_461 = ((int32_t)((int32_t)L_460&((int32_t)255)));
		int64_t L_462 = (int64_t)(L_457)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_461));
		V_1 = ((int64_t)((int64_t)L_454^L_462));
		uint64_t L_463 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_464 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_465 = 2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_466 = (L_464)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_465));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_467 = ___V0;
		int32_t L_468 = ((int32_t)46);
		uint8_t L_469 = (L_467)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_468));
		int32_t L_470 = ((int32_t)((int32_t)L_469&((int32_t)255)));
		int64_t L_471 = (int64_t)(L_466)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_470));
		V_1 = ((int64_t)((int64_t)L_463^L_471));
		uint64_t L_472 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_473 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_474 = 3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_475 = (L_473)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_474));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_476 = ___V0;
		int32_t L_477 = ((int32_t)38);
		uint8_t L_478 = (L_476)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_477));
		int32_t L_479 = ((int32_t)((int32_t)L_478&((int32_t)255)));
		int64_t L_480 = (int64_t)(L_475)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_479));
		V_1 = ((int64_t)((int64_t)L_472^L_480));
		uint64_t L_481 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_482 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_483 = 4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_484 = (L_482)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_483));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_485 = ___V0;
		int32_t L_486 = ((int32_t)30);
		uint8_t L_487 = (L_485)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_486));
		int32_t L_488 = ((int32_t)((int32_t)L_487&((int32_t)255)));
		int64_t L_489 = (int64_t)(L_484)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_488));
		V_1 = ((int64_t)((int64_t)L_481^L_489));
		uint64_t L_490 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_491 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_492 = 5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_493 = (L_491)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_492));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_494 = ___V0;
		int32_t L_495 = ((int32_t)22);
		uint8_t L_496 = (L_494)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_495));
		int32_t L_497 = ((int32_t)((int32_t)L_496&((int32_t)255)));
		int64_t L_498 = (int64_t)(L_493)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_497));
		V_1 = ((int64_t)((int64_t)L_490^L_498));
		uint64_t L_499 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_500 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_501 = 6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_502 = (L_500)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_501));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_503 = ___V0;
		int32_t L_504 = ((int32_t)14);
		uint8_t L_505 = (L_503)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_504));
		int32_t L_506 = ((int32_t)((int32_t)L_505&((int32_t)255)));
		int64_t L_507 = (int64_t)(L_502)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_506));
		V_1 = ((int64_t)((int64_t)L_499^L_507));
		uint64_t L_508 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_509 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_510 = 7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_511 = (L_509)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_510));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_512 = ___V0;
		int32_t L_513 = 6;
		uint8_t L_514 = (L_512)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_513));
		int32_t L_515 = ((int32_t)((int32_t)L_514&((int32_t)255)));
		int64_t L_516 = (int64_t)(L_511)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_515));
		V_1 = ((int64_t)((int64_t)L_508^L_516));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_517 = V_0;
		uint64_t L_518 = V_1;
		(L_517)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_518);
		V_1 = ((int64_t)0);
		uint64_t L_519 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_520 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_521 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_522 = (L_520)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_521));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_523 = ___V0;
		int32_t L_524 = ((int32_t)63);
		uint8_t L_525 = (L_523)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_524));
		int32_t L_526 = ((int32_t)((int32_t)L_525&((int32_t)255)));
		int64_t L_527 = (int64_t)(L_522)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_526));
		V_1 = ((int64_t)((int64_t)L_519^L_527));
		uint64_t L_528 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_529 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_530 = 1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_531 = (L_529)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_530));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_532 = ___V0;
		int32_t L_533 = ((int32_t)55);
		uint8_t L_534 = (L_532)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_533));
		int32_t L_535 = ((int32_t)((int32_t)L_534&((int32_t)255)));
		int64_t L_536 = (int64_t)(L_531)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_535));
		V_1 = ((int64_t)((int64_t)L_528^L_536));
		uint64_t L_537 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_538 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_539 = 2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_540 = (L_538)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_539));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_541 = ___V0;
		int32_t L_542 = ((int32_t)47);
		uint8_t L_543 = (L_541)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_542));
		int32_t L_544 = ((int32_t)((int32_t)L_543&((int32_t)255)));
		int64_t L_545 = (int64_t)(L_540)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_544));
		V_1 = ((int64_t)((int64_t)L_537^L_545));
		uint64_t L_546 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_547 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_548 = 3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_549 = (L_547)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_548));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_550 = ___V0;
		int32_t L_551 = ((int32_t)39);
		uint8_t L_552 = (L_550)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_551));
		int32_t L_553 = ((int32_t)((int32_t)L_552&((int32_t)255)));
		int64_t L_554 = (int64_t)(L_549)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_553));
		V_1 = ((int64_t)((int64_t)L_546^L_554));
		uint64_t L_555 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_556 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_557 = 4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_558 = (L_556)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_557));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_559 = ___V0;
		int32_t L_560 = ((int32_t)31);
		uint8_t L_561 = (L_559)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_560));
		int32_t L_562 = ((int32_t)((int32_t)L_561&((int32_t)255)));
		int64_t L_563 = (int64_t)(L_558)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_562));
		V_1 = ((int64_t)((int64_t)L_555^L_563));
		uint64_t L_564 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_565 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_566 = 5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_567 = (L_565)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_566));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_568 = ___V0;
		int32_t L_569 = ((int32_t)23);
		uint8_t L_570 = (L_568)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_569));
		int32_t L_571 = ((int32_t)((int32_t)L_570&((int32_t)255)));
		int64_t L_572 = (int64_t)(L_567)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_571));
		V_1 = ((int64_t)((int64_t)L_564^L_572));
		uint64_t L_573 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_574 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_575 = 6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_576 = (L_574)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_575));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_577 = ___V0;
		int32_t L_578 = ((int32_t)15);
		uint8_t L_579 = (L_577)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_578));
		int32_t L_580 = ((int32_t)((int32_t)L_579&((int32_t)255)));
		int64_t L_581 = (int64_t)(L_576)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_580));
		V_1 = ((int64_t)((int64_t)L_573^L_581));
		uint64_t L_582 = V_1;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_583 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11;
		int32_t L_584 = 7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_585 = (L_583)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_584));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_586 = ___V0;
		int32_t L_587 = 7;
		uint8_t L_588 = (L_586)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_587));
		int32_t L_589 = ((int32_t)((int32_t)L_588&((int32_t)255)));
		int64_t L_590 = (int64_t)(L_585)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_589));
		V_1 = ((int64_t)((int64_t)L_582^L_590));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_591 = V_0;
		uint64_t L_592 = V_1;
		(L_591)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_592);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_593 = V_0;
		int32_t L_594 = 0;
		int64_t L_595 = (int64_t)(L_593)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_594));
		V_1 = L_595;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_596 = ___V0;
		uint64_t L_597 = V_1;
		(L_596)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_597>>((int32_t)56)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_598 = ___V0;
		uint64_t L_599 = V_1;
		(L_598)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_599>>((int32_t)48)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_600 = ___V0;
		uint64_t L_601 = V_1;
		(L_600)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_601>>((int32_t)40)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_602 = ___V0;
		uint64_t L_603 = V_1;
		(L_602)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_603>>((int32_t)32)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_604 = ___V0;
		uint64_t L_605 = V_1;
		(L_604)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_605>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_606 = ___V0;
		uint64_t L_607 = V_1;
		(L_606)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_607>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_608 = ___V0;
		uint64_t L_609 = V_1;
		(L_608)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_609>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_610 = ___V0;
		uint64_t L_611 = V_1;
		(L_610)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)L_611));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_612 = V_0;
		int32_t L_613 = 1;
		int64_t L_614 = (int64_t)(L_612)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_613));
		V_1 = L_614;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_615 = ___V0;
		uint64_t L_616 = V_1;
		(L_615)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_616>>((int32_t)56)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_617 = ___V0;
		uint64_t L_618 = V_1;
		(L_617)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_618>>((int32_t)48)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_619 = ___V0;
		uint64_t L_620 = V_1;
		(L_619)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_620>>((int32_t)40)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_621 = ___V0;
		uint64_t L_622 = V_1;
		(L_621)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_622>>((int32_t)32)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_623 = ___V0;
		uint64_t L_624 = V_1;
		(L_623)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_624>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_625 = ___V0;
		uint64_t L_626 = V_1;
		(L_625)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_626>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_627 = ___V0;
		uint64_t L_628 = V_1;
		(L_627)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_628>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_629 = ___V0;
		uint64_t L_630 = V_1;
		(L_629)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (uint8_t)((int32_t)(uint8_t)L_630));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_631 = V_0;
		int32_t L_632 = 2;
		int64_t L_633 = (int64_t)(L_631)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_632));
		V_1 = L_633;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_634 = ___V0;
		uint64_t L_635 = V_1;
		(L_634)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)23)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_635>>((int32_t)56)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_636 = ___V0;
		uint64_t L_637 = V_1;
		(L_636)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)22)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_637>>((int32_t)48)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_638 = ___V0;
		uint64_t L_639 = V_1;
		(L_638)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_639>>((int32_t)40)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_640 = ___V0;
		uint64_t L_641 = V_1;
		(L_640)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_641>>((int32_t)32)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_642 = ___V0;
		uint64_t L_643 = V_1;
		(L_642)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_643>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_644 = ___V0;
		uint64_t L_645 = V_1;
		(L_644)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_645>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_646 = ___V0;
		uint64_t L_647 = V_1;
		(L_646)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_647>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_648 = ___V0;
		uint64_t L_649 = V_1;
		(L_648)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (uint8_t)((int32_t)(uint8_t)L_649));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_650 = V_0;
		int32_t L_651 = 3;
		int64_t L_652 = (int64_t)(L_650)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_651));
		V_1 = L_652;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_653 = ___V0;
		uint64_t L_654 = V_1;
		(L_653)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)31)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_654>>((int32_t)56)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_655 = ___V0;
		uint64_t L_656 = V_1;
		(L_655)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)30)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_656>>((int32_t)48)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_657 = ___V0;
		uint64_t L_658 = V_1;
		(L_657)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)29)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_658>>((int32_t)40)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_659 = ___V0;
		uint64_t L_660 = V_1;
		(L_659)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)28)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_660>>((int32_t)32)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_661 = ___V0;
		uint64_t L_662 = V_1;
		(L_661)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)27)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_662>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_663 = ___V0;
		uint64_t L_664 = V_1;
		(L_663)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)26)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_664>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_665 = ___V0;
		uint64_t L_666 = V_1;
		(L_665)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)25)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_666>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_667 = ___V0;
		uint64_t L_668 = V_1;
		(L_667)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)24)), (uint8_t)((int32_t)(uint8_t)L_668));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_669 = V_0;
		int32_t L_670 = 4;
		int64_t L_671 = (int64_t)(L_669)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_670));
		V_1 = L_671;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_672 = ___V0;
		uint64_t L_673 = V_1;
		(L_672)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)39)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_673>>((int32_t)56)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_674 = ___V0;
		uint64_t L_675 = V_1;
		(L_674)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)38)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_675>>((int32_t)48)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_676 = ___V0;
		uint64_t L_677 = V_1;
		(L_676)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)37)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_677>>((int32_t)40)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_678 = ___V0;
		uint64_t L_679 = V_1;
		(L_678)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)36)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_679>>((int32_t)32)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_680 = ___V0;
		uint64_t L_681 = V_1;
		(L_680)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)35)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_681>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_682 = ___V0;
		uint64_t L_683 = V_1;
		(L_682)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)34)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_683>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_684 = ___V0;
		uint64_t L_685 = V_1;
		(L_684)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)33)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_685>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_686 = ___V0;
		uint64_t L_687 = V_1;
		(L_686)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)32)), (uint8_t)((int32_t)(uint8_t)L_687));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_688 = V_0;
		int32_t L_689 = 5;
		int64_t L_690 = (int64_t)(L_688)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_689));
		V_1 = L_690;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_691 = ___V0;
		uint64_t L_692 = V_1;
		(L_691)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)47)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_692>>((int32_t)56)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_693 = ___V0;
		uint64_t L_694 = V_1;
		(L_693)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)46)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_694>>((int32_t)48)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_695 = ___V0;
		uint64_t L_696 = V_1;
		(L_695)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)45)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_696>>((int32_t)40)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_697 = ___V0;
		uint64_t L_698 = V_1;
		(L_697)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)44)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_698>>((int32_t)32)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_699 = ___V0;
		uint64_t L_700 = V_1;
		(L_699)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)43)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_700>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_701 = ___V0;
		uint64_t L_702 = V_1;
		(L_701)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)42)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_702>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_703 = ___V0;
		uint64_t L_704 = V_1;
		(L_703)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)41)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_704>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_705 = ___V0;
		uint64_t L_706 = V_1;
		(L_705)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)40)), (uint8_t)((int32_t)(uint8_t)L_706));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_707 = V_0;
		int32_t L_708 = 6;
		int64_t L_709 = (int64_t)(L_707)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_708));
		V_1 = L_709;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_710 = ___V0;
		uint64_t L_711 = V_1;
		(L_710)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)55)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_711>>((int32_t)56)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_712 = ___V0;
		uint64_t L_713 = V_1;
		(L_712)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)54)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_713>>((int32_t)48)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_714 = ___V0;
		uint64_t L_715 = V_1;
		(L_714)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)53)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_715>>((int32_t)40)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_716 = ___V0;
		uint64_t L_717 = V_1;
		(L_716)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)52)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_717>>((int32_t)32)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_718 = ___V0;
		uint64_t L_719 = V_1;
		(L_718)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)51)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_719>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_720 = ___V0;
		uint64_t L_721 = V_1;
		(L_720)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)50)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_721>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_722 = ___V0;
		uint64_t L_723 = V_1;
		(L_722)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)49)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_723>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_724 = ___V0;
		uint64_t L_725 = V_1;
		(L_724)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)48)), (uint8_t)((int32_t)(uint8_t)L_725));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_726 = V_0;
		int32_t L_727 = 7;
		int64_t L_728 = (int64_t)(L_726)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_727));
		V_1 = L_728;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_729 = ___V0;
		uint64_t L_730 = V_1;
		(L_729)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)63)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_730>>((int32_t)56)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_731 = ___V0;
		uint64_t L_732 = V_1;
		(L_731)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)62)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_732>>((int32_t)48)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_733 = ___V0;
		uint64_t L_734 = V_1;
		(L_733)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)61)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_734>>((int32_t)40)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_735 = ___V0;
		uint64_t L_736 = V_1;
		(L_735)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)60)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_736>>((int32_t)32)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_737 = ___V0;
		uint64_t L_738 = V_1;
		(L_737)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)59)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_738>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_739 = ___V0;
		uint64_t L_740 = V_1;
		(L_739)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)58)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_740>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_741 = ___V0;
		uint64_t L_742 = V_1;
		(L_741)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)57)), (uint8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)L_742>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_743 = ___V0;
		uint64_t L_744 = V_1;
		(L_743)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)56)), (uint8_t)((int32_t)(uint8_t)L_744));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::xor512(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_xor512_m2A6AF85CDF51FA414511B5FBF33385B17BFF1E2A (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___A0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___B1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___A0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		V_2 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		intptr_t L_5 = V_2;
		intptr_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___B1;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_7^(int32_t)L_11))));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0017:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)64))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::E(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_E_m465ECEB4CBF011DC82AF31C52B8C699DD01E0D0B (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___K0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___K0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___Ki_3;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, 0, ((int32_t)64), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___K0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___m1;
		Gost3411_2012Digest_xor512_m2A6AF85CDF51FA414511B5FBF33385B17BFF1E2A(__this, L_2, L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___K0;
		Gost3411_2012Digest_F_m4F55D8B30B573B83103FF641E90B5D7B1259051B(__this, L_4, NULL);
		V_0 = 0;
		goto IL_005a;
	}

IL_0023:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___Ki_3;
		il2cpp_codegen_runtime_class_init_inline(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_6 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___C_9;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Gost3411_2012Digest_xor512_m2A6AF85CDF51FA414511B5FBF33385B17BFF1E2A(__this, L_5, L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___Ki_3;
		Gost3411_2012Digest_F_m4F55D8B30B573B83103FF641E90B5D7B1259051B(__this, L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___K0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___Ki_3;
		Gost3411_2012Digest_xor512_m2A6AF85CDF51FA414511B5FBF33385B17BFF1E2A(__this, L_11, L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___K0;
		Gost3411_2012Digest_F_m4F55D8B30B573B83103FF641E90B5D7B1259051B(__this, L_13, NULL);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_005a:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)11))))
		{
			goto IL_0023;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___Ki_3;
		il2cpp_codegen_runtime_class_init_inline(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_17 = ((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___C_9;
		int32_t L_18 = ((int32_t)11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		Gost3411_2012Digest_xor512_m2A6AF85CDF51FA414511B5FBF33385B17BFF1E2A(__this, L_16, L_19, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___Ki_3;
		Gost3411_2012Digest_F_m4F55D8B30B573B83103FF641E90B5D7B1259051B(__this, L_20, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___K0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___Ki_3;
		Gost3411_2012Digest_xor512_m2A6AF85CDF51FA414511B5FBF33385B17BFF1E2A(__this, L_21, L_22, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::g_N(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_g_N_m441429BF760A3E878A74E68C02F233F8F5F9B4F1 (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___h0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___N1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___h0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___tmp_6;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, 0, ((int32_t)64), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___h0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___N1;
		Gost3411_2012Digest_xor512_m2A6AF85CDF51FA414511B5FBF33385B17BFF1E2A(__this, L_2, L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___h0;
		Gost3411_2012Digest_F_m4F55D8B30B573B83103FF641E90B5D7B1259051B(__this, L_4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___h0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___m2;
		Gost3411_2012Digest_E_m465ECEB4CBF011DC82AF31C52B8C699DD01E0D0B(__this, L_5, L_6, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___h0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___tmp_6;
		Gost3411_2012Digest_xor512_m2A6AF85CDF51FA414511B5FBF33385B17BFF1E2A(__this, L_7, L_8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___h0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___m2;
		Gost3411_2012Digest_xor512_m2A6AF85CDF51FA414511B5FBF33385B17BFF1E2A(__this, L_9, L_10, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::addMod512(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_addMod512_mCB37872559037826F7B5A1EB38D15D099B3B1C4B (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___A0, int32_t ___num1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___A0;
		int32_t L_1 = ((int32_t)63);
		uint8_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		int32_t L_3 = ___num1;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_2&((int32_t)255))), ((int32_t)(L_3&((int32_t)255)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___A0;
		int32_t L_5 = V_0;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)63)), (uint8_t)((int32_t)(uint8_t)L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___A0;
		int32_t L_7 = ((int32_t)62);
		uint8_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = ___num1;
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_8&((int32_t)255))), ((int32_t)(((int32_t)(L_9>>8))&((int32_t)255))))), ((int32_t)(L_10>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___A0;
		int32_t L_12 = V_0;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)62)), (uint8_t)((int32_t)(uint8_t)L_12));
		V_1 = ((int32_t)61);
		goto IL_0054;
	}

IL_003d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___A0;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		uint8_t L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_16&((int32_t)255))), ((int32_t)(L_17>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___A0;
		int32_t L_19 = V_1;
		int32_t L_20 = V_0;
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (uint8_t)((int32_t)(uint8_t)L_20));
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
	}

IL_0054:
	{
		int32_t L_22 = V_1;
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}

IL_005c:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::addMod512(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_addMod512_m3FC2369D44D867DB3EBFF3A8281E259E5D9C08E0 (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___A0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___B1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)63);
		goto IL_0028;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___A0;
		int32_t L_1 = V_1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___B1;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_3&((int32_t)255))), ((int32_t)((int32_t)L_7&((int32_t)255))))), ((int32_t)(L_8>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___A0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)((int32_t)(uint8_t)L_11));
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0028:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::reverse(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest_reverse_m59685AE9498C15A77E256858F06117E8627C9C8A (Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___src0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dst1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___src0;
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		V_1 = 0;
		goto IL_0016;
	}

IL_0008:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___dst1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___src0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_2, 1)), L_3))), (uint8_t)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0016:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012Digest__cctor_m5E00B0CA296CF80206EDB11EFAB3F1A85041977D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D10_24_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D11_25_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D12_26_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D13_27_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D14_28_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D15_29_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D16_30_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D17_31_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D18_32_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D19_33_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D1_15_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D20_34_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D2_16_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D3_17_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D4_18_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D5_19_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D6_20_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D7_21_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D8_22_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D9_23_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* V_2 = NULL;
	{
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_0 = (ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA*)SZArrayNew(ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		V_0 = L_0;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_4 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D1_15_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_3, L_4, NULL);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_3);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D2_16_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_7, L_8, NULL);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_7);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_12 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D3_17_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_11, L_12, NULL);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_11);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_16 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D4_18_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_15, L_16, NULL);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_15);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_17 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = L_18;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_20 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D5_19_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_19, L_20, NULL);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_19);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_21 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = L_22;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_24 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D6_20_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_23, L_24, NULL);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_23);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_25 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = L_26;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_28 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D7_21_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_27, L_28, NULL);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_27);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_29 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = L_30;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_32 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D8_22_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_31, L_32, NULL);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_31);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_33 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = L_34;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_36 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D9_23_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_35, L_36, NULL);
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_35);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_37 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = L_38;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_40 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D10_24_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_39, L_40, NULL);
		ArrayElementTypeCheck (L_37, L_39);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_39);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_41 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = L_42;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_44 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D11_25_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_43, L_44, NULL);
		ArrayElementTypeCheck (L_41, L_43);
		(L_41)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_43);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_45 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = L_46;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_48 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D12_26_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_47, L_48, NULL);
		ArrayElementTypeCheck (L_45, L_47);
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_47);
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_49 = V_0;
		((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___C_9 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___C_9), (void*)L_49);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_1 = L_50;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_1;
		((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___Zero_10 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___Zero_10), (void*)L_51);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_52 = (UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11*)(UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11*)SZArrayNew(UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11_il2cpp_TypeInfo_var, (uint32_t)8);
		V_2 = L_52;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_53 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_54 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_55 = L_54;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_56 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D13_27_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_55, L_56, NULL);
		ArrayElementTypeCheck (L_53, L_55);
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)L_55);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_57 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_58 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_59 = L_58;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_60 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D14_28_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_59, L_60, NULL);
		ArrayElementTypeCheck (L_57, L_59);
		(L_57)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)L_59);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_61 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_62 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_63 = L_62;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_64 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D15_29_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_63, L_64, NULL);
		ArrayElementTypeCheck (L_61, L_63);
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)L_63);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_65 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_66 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_67 = L_66;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_68 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D16_30_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_67, L_68, NULL);
		ArrayElementTypeCheck (L_65, L_67);
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)L_67);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_69 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_70 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_71 = L_70;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_72 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D17_31_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_71, L_72, NULL);
		ArrayElementTypeCheck (L_69, L_71);
		(L_69)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)L_71);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_73 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_74 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_75 = L_74;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_76 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D18_32_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_75, L_76, NULL);
		ArrayElementTypeCheck (L_73, L_75);
		(L_73)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)L_75);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_77 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_78 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_79 = L_78;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_80 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D19_33_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_79, L_80, NULL);
		ArrayElementTypeCheck (L_77, L_79);
		(L_77)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)L_79);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_81 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_82 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_83 = L_82;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_84 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x600133dU2D20_34_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_83, L_84, NULL);
		ArrayElementTypeCheck (L_81, L_83);
		(L_81)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)L_83);
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_85 = V_2;
		((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&((Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var))->___T_11), (void*)L_85);
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
// System.String Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Gost3411_2012_256Digest_get_AlgorithmName_mDF2F0BDD6C2702380E8839DCB6F81A98B0343531 (Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9397148F89F0190A6F00BDB28BE98E9396F81D29);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral9397148F89F0190A6F00BDB28BE98E9396F81D29;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012_256Digest__ctor_m98EF1430A8745C8B25B02502DF05E6B36AB9EE5B (Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656_il2cpp_TypeInfo_var))->___IV_12;
		il2cpp_codegen_runtime_class_init_inline(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var);
		Gost3411_2012Digest__ctor_m6CD7868ACCD75EE18356499653E61328971BDA1C(__this, L_0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest::.ctor(Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012_256Digest__ctor_m366182D8220BF206BF51AF4A3A2955087107ADB6 (Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656* __this, Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656_il2cpp_TypeInfo_var))->___IV_12;
		il2cpp_codegen_runtime_class_init_inline(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var);
		Gost3411_2012Digest__ctor_m6CD7868ACCD75EE18356499653E61328971BDA1C(__this, L_0, NULL);
		Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656* L_1 = ___other0;
		Gost3411_2012Digest_Reset_m7F04AE28539262120A8DF67549196E85C9B79FE2(__this, L_1, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Gost3411_2012_256Digest_GetDigestSize_m19CF6A36B1711FAA86E77E9969A9C1A3959D77F4 (Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)32);
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Gost3411_2012_256Digest_DoFinal_m07A0056014D02B969E6CAFE88EB8C5752EBBCAE2 (Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		int32_t L_2;
		L_2 = Gost3411_2012Digest_DoFinal_mB8AB63CD7B3375B7975ED99C5D67DFAE2BBF91C2(__this, L_1, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output0;
		int32_t L_5 = ___outOff1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_3, ((int32_t)32), (RuntimeArray*)L_4, L_5, ((int32_t)32), NULL);
		return ((int32_t)32);
	}
}
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Gost3411_2012_256Digest_Copy_mDFE1728C07B8AF4E97229C1B17104771C86A7E95 (Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656* L_0 = (Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656*)il2cpp_codegen_object_new(Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656_il2cpp_TypeInfo_var);
		Gost3411_2012_256Digest__ctor_m366182D8220BF206BF51AF4A3A2955087107ADB6(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012_256Digest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012_256Digest__cctor_mDBF885F48D02C3BEED794E141B74A72DDC975893 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001344U2D1_35_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001344U2D1_35_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656_il2cpp_TypeInfo_var))->___IV_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012_256Digest_t90202BBC6D66869FF7FBEC64707232554D0F6656_il2cpp_TypeInfo_var))->___IV_12), (void*)L_1);
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
// System.String Org.BouncyCastle.Crypto.Digests.Gost3411_2012_512Digest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Gost3411_2012_512Digest_get_AlgorithmName_m97D2B36F69D69C78ECAE963C7BB1AC693BB1C3A4 (Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral712ED77D49FD877852BE70E220E1B7F9970538D6);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral712ED77D49FD877852BE70E220E1B7F9970538D6;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012_512Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012_512Digest__ctor_m8BC5EC9FB0FA544070B3E6B8DCE1F2AEC20272F2 (Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685_il2cpp_TypeInfo_var))->___IV_12;
		il2cpp_codegen_runtime_class_init_inline(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var);
		Gost3411_2012Digest__ctor_m6CD7868ACCD75EE18356499653E61328971BDA1C(__this, L_0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012_512Digest::.ctor(Org.BouncyCastle.Crypto.Digests.Gost3411_2012_512Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012_512Digest__ctor_mEE629AF2F42F67FC352E214B60D637A54D755A3A (Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685* __this, Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685_il2cpp_TypeInfo_var))->___IV_12;
		il2cpp_codegen_runtime_class_init_inline(Gost3411_2012Digest_t1383D20A0E54159CB1A2178DEACAF30EE5F32EA2_il2cpp_TypeInfo_var);
		Gost3411_2012Digest__ctor_m6CD7868ACCD75EE18356499653E61328971BDA1C(__this, L_0, NULL);
		Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685* L_1 = ___other0;
		Gost3411_2012Digest_Reset_m7F04AE28539262120A8DF67549196E85C9B79FE2(__this, L_1, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.Gost3411_2012_512Digest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Gost3411_2012_512Digest_GetDigestSize_mADDEE5B57224790073977473D24F81D2B3609ADC (Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)64);
	}
}
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.Gost3411_2012_512Digest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Gost3411_2012_512Digest_Copy_mC5CF1C4123A9D66B6585592752A369BC8A8D6970 (Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685* L_0 = (Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685*)il2cpp_codegen_object_new(Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685_il2cpp_TypeInfo_var);
		Gost3411_2012_512Digest__ctor_mEE629AF2F42F67FC352E214B60D637A54D755A3A(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.Gost3411_2012_512Digest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost3411_2012_512Digest__cctor_mE8C8DB3C68B6CEB55550CD3FC0F875EE1106548F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		((Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685_il2cpp_TypeInfo_var))->___IV_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685_StaticFields*)il2cpp_codegen_static_fields_for(Gost3411_2012_512Digest_tB627B4AFAD60D14BF05003FC8B8427C754100685_il2cpp_TypeInfo_var))->___IV_12), (void*)L_1);
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
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest__ctor_mED36B8525F13B40D106CE793C94AD6A6C63A3B79 (LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___MyByteLength_0 = ((int32_t)128);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		__this->___W_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___W_13), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___xBuf_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xBuf_1), (void*)L_1);
		VirtualActionInvoker0::Invoke(13 /* System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::Reset() */, __this);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::.ctor(Org.BouncyCastle.Crypto.Digests.LongDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest__ctor_mBA6E6C97449B34DB1191F2639AABF34C5E63CE43 (LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* __this, LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___MyByteLength_0 = ((int32_t)128);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		__this->___W_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___W_13), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* L_1 = ___t0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1->___xBuf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		__this->___xBuf_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xBuf_1), (void*)L_3);
		LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* L_4 = ___t0;
		LongDigest_CopyIn_m82EB20D6B682CBF6A1C50926026AFD63CBACE104(__this, L_4, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::CopyIn(Org.BouncyCastle.Crypto.Digests.LongDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest_CopyIn_m82EB20D6B682CBF6A1C50926026AFD63CBACE104 (LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* __this, LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* ___t0, const RuntimeMethod* method) 
{
	{
		LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* L_0 = ___t0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0->___xBuf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___xBuf_1;
		LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* L_3 = ___t0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3->___xBuf_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_1, 0, (RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* L_5 = ___t0;
		int32_t L_6 = L_5->___xBufOff_2;
		__this->___xBufOff_2 = L_6;
		LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* L_7 = ___t0;
		int64_t L_8 = L_7->___byteCount1_3;
		__this->___byteCount1_3 = L_8;
		LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* L_9 = ___t0;
		int64_t L_10 = L_9->___byteCount2_4;
		__this->___byteCount2_4 = L_10;
		LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* L_11 = ___t0;
		uint64_t L_12 = L_11->___H1_5;
		__this->___H1_5 = L_12;
		LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* L_13 = ___t0;
		uint64_t L_14 = L_13->___H2_6;
		__this->___H2_6 = L_14;
		LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* L_15 = ___t0;
		uint64_t L_16 = L_15->___H3_7;
		__this->___H3_7 = L_16;
		LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* L_17 = ___t0;
		uint64_t L_18 = L_17->___H4_8;
		__this->___H4_8 = L_18;
		LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* L_19 = ___t0;
		uint64_t L_20 = L_19->___H5_9;
		__this->___H5_9 = L_20;
		LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* L_21 = ___t0;
		uint64_t L_22 = L_21->___H6_10;
		__this->___H6_10 = L_22;
		LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* L_23 = ___t0;
		uint64_t L_24 = L_23->___H7_11;
		__this->___H7_11 = L_24;
		LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* L_25 = ___t0;
		uint64_t L_26 = L_25->___H8_12;
		__this->___H8_12 = L_26;
		LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* L_27 = ___t0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = L_27->___W_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = __this->___W_13;
		LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* L_30 = ___t0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_31 = L_30->___W_13;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_28, 0, (RuntimeArray*)L_29, 0, ((int32_t)(((RuntimeArray*)L_31)->max_length)), NULL);
		LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* L_32 = ___t0;
		int32_t L_33 = L_32->___wOff_14;
		__this->___wOff_14 = L_33;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest_Update_mCFE01A89BD87EC757EE45959A000CC566789B787 (LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___xBuf_1;
		int32_t L_1 = __this->___xBufOff_2;
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->___xBufOff_2 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		uint8_t L_4 = ___input0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		int32_t L_5 = __this->___xBufOff_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___xBuf_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_003d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___xBuf_1;
		LongDigest_ProcessWord_m081B7DBA550C06ABE1DA3CBBC44D42B07C5AE325(__this, L_7, 0, NULL);
		__this->___xBufOff_2 = 0;
	}

IL_003d:
	{
		int64_t L_8 = __this->___byteCount1_3;
		__this->___byteCount1_3 = ((int64_t)il2cpp_codegen_add(L_8, ((int64_t)1)));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest_BlockUpdate_mA1D12F129885ACD9EC7C3E584F32985BE3B22319 (LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		goto IL_0015;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		LongDigest_Update_mCFE01A89BD87EC757EE45959A000CC566789B787(__this, L_3, NULL);
		int32_t L_4 = ___inOff1;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}

IL_0015:
	{
		int32_t L_6 = __this->___xBufOff_2;
		if (!L_6)
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_7 = ___length2;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		goto IL_0059;
	}

IL_0023:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___input0;
		int32_t L_9 = ___inOff1;
		LongDigest_ProcessWord_m081B7DBA550C06ABE1DA3CBBC44D42B07C5AE325(__this, L_8, L_9, NULL);
		int32_t L_10 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___xBuf_1;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length))));
		int32_t L_12 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___xBuf_1;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_12, ((int32_t)(((RuntimeArray*)L_13)->max_length))));
		int64_t L_14 = __this->___byteCount1_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___xBuf_1;
		__this->___byteCount1_3 = ((int64_t)il2cpp_codegen_add(L_14, ((int64_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))));
	}

IL_0059:
	{
		int32_t L_16 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___xBuf_1;
		if ((((int32_t)L_16) > ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0079;
	}

IL_0066:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___input0;
		int32_t L_19 = ___inOff1;
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		LongDigest_Update_mCFE01A89BD87EC757EE45959A000CC566789B787(__this, L_21, NULL);
		int32_t L_22 = ___inOff1;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		int32_t L_23 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
	}

IL_0079:
	{
		int32_t L_24 = ___length2;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::Finish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest_Finish_mCE901A925C6EBDAD6D5E8BE668DA3D5245FE7561 (LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	{
		LongDigest_AdjustByteCounts_m6CCA957F4255D64AA68074E8AB167247427A2C80(__this, NULL);
		int64_t L_0 = __this->___byteCount1_3;
		V_0 = ((int64_t)(L_0<<3));
		int64_t L_1 = __this->___byteCount2_4;
		V_1 = L_1;
		LongDigest_Update_mCFE01A89BD87EC757EE45959A000CC566789B787(__this, (uint8_t)((int32_t)128), NULL);
		goto IL_002a;
	}

IL_0023:
	{
		LongDigest_Update_mCFE01A89BD87EC757EE45959A000CC566789B787(__this, (uint8_t)0, NULL);
	}

IL_002a:
	{
		int32_t L_2 = __this->___xBufOff_2;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		int64_t L_3 = V_0;
		int64_t L_4 = V_1;
		LongDigest_ProcessLength_mB93E6584362792C3361759AE7D587A2322CD4B59(__this, L_3, L_4, NULL);
		LongDigest_ProcessBlock_m36815C33BE94D934CC871328F2F370F81EB930F8(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest_Reset_m9B2C9301B8877BF2092D9BC39607065D9AE1C145 (LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		__this->___byteCount1_3 = ((int64_t)0);
		__this->___byteCount2_4 = ((int64_t)0);
		__this->___xBufOff_2 = 0;
		V_0 = 0;
		goto IL_0028;
	}

IL_001b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___xBuf_1;
		int32_t L_1 = V_0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)0);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0028:
	{
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___xBuf_1;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		__this->___wOff_14 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = __this->___W_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->___W_13;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::ProcessWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest_ProcessWord_m081B7DBA550C06ABE1DA3CBBC44D42B07C5AE325 (LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___W_13;
		int32_t L_1 = __this->___wOff_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		uint64_t L_4;
		L_4 = Pack_BE_To_UInt64_m0358D9CAC4DB4488FA471673A6333E081953FA88(L_2, L_3, NULL);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint64_t)L_4);
		int32_t L_5 = __this->___wOff_14;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		V_0 = L_6;
		__this->___wOff_14 = L_6;
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_002f;
		}
	}
	{
		LongDigest_ProcessBlock_m36815C33BE94D934CC871328F2F370F81EB930F8(__this, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::AdjustByteCounts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest_AdjustByteCounts_m6CCA957F4255D64AA68074E8AB167247427A2C80 (LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___byteCount1_3;
		if ((((int64_t)L_0) <= ((int64_t)((int64_t)2305843009213693951LL))))
		{
			goto IL_003d;
		}
	}
	{
		int64_t L_1 = __this->___byteCount2_4;
		int64_t L_2 = __this->___byteCount1_3;
		__this->___byteCount2_4 = ((int64_t)il2cpp_codegen_add(L_1, ((int64_t)((uint64_t)L_2>>((int32_t)61)))));
		int64_t L_3 = __this->___byteCount1_3;
		__this->___byteCount1_3 = ((int64_t)(L_3&((int64_t)2305843009213693951LL)));
	}

IL_003d:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::ProcessLength(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest_ProcessLength_mB93E6584362792C3361759AE7D587A2322CD4B59 (LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* __this, int64_t ___lowW0, int64_t ___hiW1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___wOff_14;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)14))))
		{
			goto IL_0010;
		}
	}
	{
		LongDigest_ProcessBlock_m36815C33BE94D934CC871328F2F370F81EB930F8(__this, NULL);
	}

IL_0010:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->___W_13;
		int64_t L_2 = ___hiW1;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint64_t)L_2);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->___W_13;
		int64_t L_4 = ___lowW0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint64_t)L_4);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::ProcessBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest_ProcessBlock_m36815C33BE94D934CC871328F2F370F81EB930F8 (LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		LongDigest_AdjustByteCounts_m6CCA957F4255D64AA68074E8AB167247427A2C80(__this, NULL);
		V_0 = ((int32_t)16);
		goto IL_004e;
	}

IL_000b:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___W_13;
		int32_t L_1 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->___W_13;
		int32_t L_3 = V_0;
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(L_3, 2));
		int64_t L_5 = (int64_t)(L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		il2cpp_codegen_runtime_class_init_inline(LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_il2cpp_TypeInfo_var);
		uint64_t L_6;
		L_6 = LongDigest_Sigma1_m82BF9B3F91EA947DDECB4A63EC592AB7CB084F61(L_5, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = __this->___W_13;
		int32_t L_8 = V_0;
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract(L_8, 7));
		int64_t L_10 = (int64_t)(L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = __this->___W_13;
		int32_t L_12 = V_0;
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, ((int32_t)15)));
		int64_t L_14 = (int64_t)(L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		uint64_t L_15;
		L_15 = LongDigest_Sigma0_mEA4DAC76E2ADAB4008FD0E9A4321573FBDA673EC(L_14, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = __this->___W_13;
		int32_t L_17 = V_0;
		int32_t L_18 = ((int32_t)il2cpp_codegen_subtract(L_17, ((int32_t)16)));
		int64_t L_19 = (int64_t)(L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint64_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_6, L_10)), (int64_t)L_15)), L_19)));
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_004e:
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) <= ((int32_t)((int32_t)79))))
		{
			goto IL_000b;
		}
	}
	{
		uint64_t L_22 = __this->___H1_5;
		V_1 = L_22;
		uint64_t L_23 = __this->___H2_6;
		V_2 = L_23;
		uint64_t L_24 = __this->___H3_7;
		V_3 = L_24;
		uint64_t L_25 = __this->___H4_8;
		V_4 = L_25;
		uint64_t L_26 = __this->___H5_9;
		V_5 = L_26;
		uint64_t L_27 = __this->___H6_10;
		V_6 = L_27;
		uint64_t L_28 = __this->___H7_11;
		V_7 = L_28;
		uint64_t L_29 = __this->___H8_12;
		V_8 = L_29;
		V_9 = 0;
		V_10 = 0;
		goto IL_02ec;
	}

IL_009b:
	{
		uint64_t L_30 = V_8;
		uint64_t L_31 = V_5;
		il2cpp_codegen_runtime_class_init_inline(LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_il2cpp_TypeInfo_var);
		uint64_t L_32;
		L_32 = LongDigest_Sum1_m75DD381FC1DDA6C49CE5E86BB9974A939E50B90A(L_31, NULL);
		uint64_t L_33 = V_5;
		uint64_t L_34 = V_6;
		uint64_t L_35 = V_7;
		uint64_t L_36;
		L_36 = LongDigest_Ch_mD51A6450F8D85E36B4AF3E59E8F3C4DCE8A73022(L_33, L_34, L_35, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_37 = ((LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_StaticFields*)il2cpp_codegen_static_fields_for(LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_il2cpp_TypeInfo_var))->___K_15;
		int32_t L_38 = V_9;
		int32_t L_39 = L_38;
		int64_t L_40 = (int64_t)(L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = __this->___W_13;
		int32_t L_42 = V_9;
		int32_t L_43 = L_42;
		V_9 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = L_43;
		int64_t L_45 = (int64_t)(L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_30, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_32, (int64_t)L_36)), L_40)), L_45))));
		uint64_t L_46 = V_4;
		uint64_t L_47 = V_8;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_46, (int64_t)L_47));
		uint64_t L_48 = V_8;
		uint64_t L_49 = V_1;
		uint64_t L_50;
		L_50 = LongDigest_Sum0_m325EACDA096FFC9A041FD10B72466AC4415B9ABE(L_49, NULL);
		uint64_t L_51 = V_1;
		uint64_t L_52 = V_2;
		uint64_t L_53 = V_3;
		uint64_t L_54;
		L_54 = LongDigest_Maj_mFE8AD8577D8F096B387FC1A3094AAF16AE1DDB6B(L_51, L_52, L_53, NULL);
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_48, ((int64_t)il2cpp_codegen_add((int64_t)L_50, (int64_t)L_54))));
		uint64_t L_55 = V_7;
		uint64_t L_56 = V_4;
		uint64_t L_57;
		L_57 = LongDigest_Sum1_m75DD381FC1DDA6C49CE5E86BB9974A939E50B90A(L_56, NULL);
		uint64_t L_58 = V_4;
		uint64_t L_59 = V_5;
		uint64_t L_60 = V_6;
		uint64_t L_61;
		L_61 = LongDigest_Ch_mD51A6450F8D85E36B4AF3E59E8F3C4DCE8A73022(L_58, L_59, L_60, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_62 = ((LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_StaticFields*)il2cpp_codegen_static_fields_for(LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_il2cpp_TypeInfo_var))->___K_15;
		int32_t L_63 = V_9;
		int32_t L_64 = L_63;
		int64_t L_65 = (int64_t)(L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_66 = __this->___W_13;
		int32_t L_67 = V_9;
		int32_t L_68 = L_67;
		V_9 = ((int32_t)il2cpp_codegen_add(L_68, 1));
		int32_t L_69 = L_68;
		int64_t L_70 = (int64_t)(L_66)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_55, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_57, (int64_t)L_61)), L_65)), L_70))));
		uint64_t L_71 = V_3;
		uint64_t L_72 = V_7;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_71, (int64_t)L_72));
		uint64_t L_73 = V_7;
		uint64_t L_74 = V_8;
		uint64_t L_75;
		L_75 = LongDigest_Sum0_m325EACDA096FFC9A041FD10B72466AC4415B9ABE(L_74, NULL);
		uint64_t L_76 = V_8;
		uint64_t L_77 = V_1;
		uint64_t L_78 = V_2;
		uint64_t L_79;
		L_79 = LongDigest_Maj_mFE8AD8577D8F096B387FC1A3094AAF16AE1DDB6B(L_76, L_77, L_78, NULL);
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_73, ((int64_t)il2cpp_codegen_add((int64_t)L_75, (int64_t)L_79))));
		uint64_t L_80 = V_6;
		uint64_t L_81 = V_3;
		uint64_t L_82;
		L_82 = LongDigest_Sum1_m75DD381FC1DDA6C49CE5E86BB9974A939E50B90A(L_81, NULL);
		uint64_t L_83 = V_3;
		uint64_t L_84 = V_4;
		uint64_t L_85 = V_5;
		uint64_t L_86;
		L_86 = LongDigest_Ch_mD51A6450F8D85E36B4AF3E59E8F3C4DCE8A73022(L_83, L_84, L_85, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_87 = ((LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_StaticFields*)il2cpp_codegen_static_fields_for(LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_il2cpp_TypeInfo_var))->___K_15;
		int32_t L_88 = V_9;
		int32_t L_89 = L_88;
		int64_t L_90 = (int64_t)(L_87)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_89));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_91 = __this->___W_13;
		int32_t L_92 = V_9;
		int32_t L_93 = L_92;
		V_9 = ((int32_t)il2cpp_codegen_add(L_93, 1));
		int32_t L_94 = L_93;
		int64_t L_95 = (int64_t)(L_91)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_94));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_82, (int64_t)L_86)), L_90)), L_95))));
		uint64_t L_96 = V_2;
		uint64_t L_97 = V_6;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, (int64_t)L_97));
		uint64_t L_98 = V_6;
		uint64_t L_99 = V_7;
		uint64_t L_100;
		L_100 = LongDigest_Sum0_m325EACDA096FFC9A041FD10B72466AC4415B9ABE(L_99, NULL);
		uint64_t L_101 = V_7;
		uint64_t L_102 = V_8;
		uint64_t L_103 = V_1;
		uint64_t L_104;
		L_104 = LongDigest_Maj_mFE8AD8577D8F096B387FC1A3094AAF16AE1DDB6B(L_101, L_102, L_103, NULL);
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_98, ((int64_t)il2cpp_codegen_add((int64_t)L_100, (int64_t)L_104))));
		uint64_t L_105 = V_5;
		uint64_t L_106 = V_2;
		uint64_t L_107;
		L_107 = LongDigest_Sum1_m75DD381FC1DDA6C49CE5E86BB9974A939E50B90A(L_106, NULL);
		uint64_t L_108 = V_2;
		uint64_t L_109 = V_3;
		uint64_t L_110 = V_4;
		uint64_t L_111;
		L_111 = LongDigest_Ch_mD51A6450F8D85E36B4AF3E59E8F3C4DCE8A73022(L_108, L_109, L_110, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_112 = ((LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_StaticFields*)il2cpp_codegen_static_fields_for(LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_il2cpp_TypeInfo_var))->___K_15;
		int32_t L_113 = V_9;
		int32_t L_114 = L_113;
		int64_t L_115 = (int64_t)(L_112)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_114));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_116 = __this->___W_13;
		int32_t L_117 = V_9;
		int32_t L_118 = L_117;
		V_9 = ((int32_t)il2cpp_codegen_add(L_118, 1));
		int32_t L_119 = L_118;
		int64_t L_120 = (int64_t)(L_116)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_119));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_105, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_107, (int64_t)L_111)), L_115)), L_120))));
		uint64_t L_121 = V_1;
		uint64_t L_122 = V_5;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_121, (int64_t)L_122));
		uint64_t L_123 = V_5;
		uint64_t L_124 = V_6;
		uint64_t L_125;
		L_125 = LongDigest_Sum0_m325EACDA096FFC9A041FD10B72466AC4415B9ABE(L_124, NULL);
		uint64_t L_126 = V_6;
		uint64_t L_127 = V_7;
		uint64_t L_128 = V_8;
		uint64_t L_129;
		L_129 = LongDigest_Maj_mFE8AD8577D8F096B387FC1A3094AAF16AE1DDB6B(L_126, L_127, L_128, NULL);
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_123, ((int64_t)il2cpp_codegen_add((int64_t)L_125, (int64_t)L_129))));
		uint64_t L_130 = V_4;
		uint64_t L_131 = V_1;
		uint64_t L_132;
		L_132 = LongDigest_Sum1_m75DD381FC1DDA6C49CE5E86BB9974A939E50B90A(L_131, NULL);
		uint64_t L_133 = V_1;
		uint64_t L_134 = V_2;
		uint64_t L_135 = V_3;
		uint64_t L_136;
		L_136 = LongDigest_Ch_mD51A6450F8D85E36B4AF3E59E8F3C4DCE8A73022(L_133, L_134, L_135, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_137 = ((LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_StaticFields*)il2cpp_codegen_static_fields_for(LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_il2cpp_TypeInfo_var))->___K_15;
		int32_t L_138 = V_9;
		int32_t L_139 = L_138;
		int64_t L_140 = (int64_t)(L_137)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_139));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_141 = __this->___W_13;
		int32_t L_142 = V_9;
		int32_t L_143 = L_142;
		V_9 = ((int32_t)il2cpp_codegen_add(L_143, 1));
		int32_t L_144 = L_143;
		int64_t L_145 = (int64_t)(L_141)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_144));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_130, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_132, (int64_t)L_136)), L_140)), L_145))));
		uint64_t L_146 = V_8;
		uint64_t L_147 = V_4;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_146, (int64_t)L_147));
		uint64_t L_148 = V_4;
		uint64_t L_149 = V_5;
		uint64_t L_150;
		L_150 = LongDigest_Sum0_m325EACDA096FFC9A041FD10B72466AC4415B9ABE(L_149, NULL);
		uint64_t L_151 = V_5;
		uint64_t L_152 = V_6;
		uint64_t L_153 = V_7;
		uint64_t L_154;
		L_154 = LongDigest_Maj_mFE8AD8577D8F096B387FC1A3094AAF16AE1DDB6B(L_151, L_152, L_153, NULL);
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_148, ((int64_t)il2cpp_codegen_add((int64_t)L_150, (int64_t)L_154))));
		uint64_t L_155 = V_3;
		uint64_t L_156 = V_8;
		uint64_t L_157;
		L_157 = LongDigest_Sum1_m75DD381FC1DDA6C49CE5E86BB9974A939E50B90A(L_156, NULL);
		uint64_t L_158 = V_8;
		uint64_t L_159 = V_1;
		uint64_t L_160 = V_2;
		uint64_t L_161;
		L_161 = LongDigest_Ch_mD51A6450F8D85E36B4AF3E59E8F3C4DCE8A73022(L_158, L_159, L_160, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_162 = ((LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_StaticFields*)il2cpp_codegen_static_fields_for(LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_il2cpp_TypeInfo_var))->___K_15;
		int32_t L_163 = V_9;
		int32_t L_164 = L_163;
		int64_t L_165 = (int64_t)(L_162)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_164));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_166 = __this->___W_13;
		int32_t L_167 = V_9;
		int32_t L_168 = L_167;
		V_9 = ((int32_t)il2cpp_codegen_add(L_168, 1));
		int32_t L_169 = L_168;
		int64_t L_170 = (int64_t)(L_166)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_169));
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_155, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_157, (int64_t)L_161)), L_165)), L_170))));
		uint64_t L_171 = V_7;
		uint64_t L_172 = V_3;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_171, (int64_t)L_172));
		uint64_t L_173 = V_3;
		uint64_t L_174 = V_4;
		uint64_t L_175;
		L_175 = LongDigest_Sum0_m325EACDA096FFC9A041FD10B72466AC4415B9ABE(L_174, NULL);
		uint64_t L_176 = V_4;
		uint64_t L_177 = V_5;
		uint64_t L_178 = V_6;
		uint64_t L_179;
		L_179 = LongDigest_Maj_mFE8AD8577D8F096B387FC1A3094AAF16AE1DDB6B(L_176, L_177, L_178, NULL);
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_173, ((int64_t)il2cpp_codegen_add((int64_t)L_175, (int64_t)L_179))));
		uint64_t L_180 = V_2;
		uint64_t L_181 = V_7;
		uint64_t L_182;
		L_182 = LongDigest_Sum1_m75DD381FC1DDA6C49CE5E86BB9974A939E50B90A(L_181, NULL);
		uint64_t L_183 = V_7;
		uint64_t L_184 = V_8;
		uint64_t L_185 = V_1;
		uint64_t L_186;
		L_186 = LongDigest_Ch_mD51A6450F8D85E36B4AF3E59E8F3C4DCE8A73022(L_183, L_184, L_185, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_187 = ((LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_StaticFields*)il2cpp_codegen_static_fields_for(LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_il2cpp_TypeInfo_var))->___K_15;
		int32_t L_188 = V_9;
		int32_t L_189 = L_188;
		int64_t L_190 = (int64_t)(L_187)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_189));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_191 = __this->___W_13;
		int32_t L_192 = V_9;
		int32_t L_193 = L_192;
		V_9 = ((int32_t)il2cpp_codegen_add(L_193, 1));
		int32_t L_194 = L_193;
		int64_t L_195 = (int64_t)(L_191)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_194));
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_180, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_182, (int64_t)L_186)), L_190)), L_195))));
		uint64_t L_196 = V_6;
		uint64_t L_197 = V_2;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_196, (int64_t)L_197));
		uint64_t L_198 = V_2;
		uint64_t L_199 = V_3;
		uint64_t L_200;
		L_200 = LongDigest_Sum0_m325EACDA096FFC9A041FD10B72466AC4415B9ABE(L_199, NULL);
		uint64_t L_201 = V_3;
		uint64_t L_202 = V_4;
		uint64_t L_203 = V_5;
		uint64_t L_204;
		L_204 = LongDigest_Maj_mFE8AD8577D8F096B387FC1A3094AAF16AE1DDB6B(L_201, L_202, L_203, NULL);
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_198, ((int64_t)il2cpp_codegen_add((int64_t)L_200, (int64_t)L_204))));
		uint64_t L_205 = V_1;
		uint64_t L_206 = V_6;
		uint64_t L_207;
		L_207 = LongDigest_Sum1_m75DD381FC1DDA6C49CE5E86BB9974A939E50B90A(L_206, NULL);
		uint64_t L_208 = V_6;
		uint64_t L_209 = V_7;
		uint64_t L_210 = V_8;
		uint64_t L_211;
		L_211 = LongDigest_Ch_mD51A6450F8D85E36B4AF3E59E8F3C4DCE8A73022(L_208, L_209, L_210, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_212 = ((LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_StaticFields*)il2cpp_codegen_static_fields_for(LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_il2cpp_TypeInfo_var))->___K_15;
		int32_t L_213 = V_9;
		int32_t L_214 = L_213;
		int64_t L_215 = (int64_t)(L_212)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_214));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_216 = __this->___W_13;
		int32_t L_217 = V_9;
		int32_t L_218 = L_217;
		V_9 = ((int32_t)il2cpp_codegen_add(L_218, 1));
		int32_t L_219 = L_218;
		int64_t L_220 = (int64_t)(L_216)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_219));
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_205, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_207, (int64_t)L_211)), L_215)), L_220))));
		uint64_t L_221 = V_5;
		uint64_t L_222 = V_1;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_221, (int64_t)L_222));
		uint64_t L_223 = V_1;
		uint64_t L_224 = V_2;
		uint64_t L_225;
		L_225 = LongDigest_Sum0_m325EACDA096FFC9A041FD10B72466AC4415B9ABE(L_224, NULL);
		uint64_t L_226 = V_2;
		uint64_t L_227 = V_3;
		uint64_t L_228 = V_4;
		uint64_t L_229;
		L_229 = LongDigest_Maj_mFE8AD8577D8F096B387FC1A3094AAF16AE1DDB6B(L_226, L_227, L_228, NULL);
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_223, ((int64_t)il2cpp_codegen_add((int64_t)L_225, (int64_t)L_229))));
		int32_t L_230 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_230, 1));
	}

IL_02ec:
	{
		int32_t L_231 = V_10;
		if ((((int32_t)L_231) < ((int32_t)((int32_t)10))))
		{
			goto IL_009b;
		}
	}
	{
		uint64_t L_232 = __this->___H1_5;
		uint64_t L_233 = V_1;
		__this->___H1_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_232, (int64_t)L_233));
		uint64_t L_234 = __this->___H2_6;
		uint64_t L_235 = V_2;
		__this->___H2_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_234, (int64_t)L_235));
		uint64_t L_236 = __this->___H3_7;
		uint64_t L_237 = V_3;
		__this->___H3_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_236, (int64_t)L_237));
		uint64_t L_238 = __this->___H4_8;
		uint64_t L_239 = V_4;
		__this->___H4_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_238, (int64_t)L_239));
		uint64_t L_240 = __this->___H5_9;
		uint64_t L_241 = V_5;
		__this->___H5_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_240, (int64_t)L_241));
		uint64_t L_242 = __this->___H6_10;
		uint64_t L_243 = V_6;
		__this->___H6_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_242, (int64_t)L_243));
		uint64_t L_244 = __this->___H7_11;
		uint64_t L_245 = V_7;
		__this->___H7_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_244, (int64_t)L_245));
		uint64_t L_246 = __this->___H8_12;
		uint64_t L_247 = V_8;
		__this->___H8_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_246, (int64_t)L_247));
		__this->___wOff_14 = 0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_248 = __this->___W_13;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_248, 0, ((int32_t)16), NULL);
		return;
	}
}
// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::Ch(System.UInt64,System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t LongDigest_Ch_mD51A6450F8D85E36B4AF3E59E8F3C4DCE8A73022 (uint64_t ___x0, uint64_t ___y1, uint64_t ___z2, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___x0;
		uint64_t L_1 = ___y1;
		uint64_t L_2 = ___x0;
		uint64_t L_3 = ___z2;
		return ((int64_t)(((int64_t)((int64_t)L_0&(int64_t)L_1))^((int64_t)((int64_t)((~L_2))&(int64_t)L_3))));
	}
}
// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::Maj(System.UInt64,System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t LongDigest_Maj_mFE8AD8577D8F096B387FC1A3094AAF16AE1DDB6B (uint64_t ___x0, uint64_t ___y1, uint64_t ___z2, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___x0;
		uint64_t L_1 = ___y1;
		uint64_t L_2 = ___x0;
		uint64_t L_3 = ___z2;
		uint64_t L_4 = ___y1;
		uint64_t L_5 = ___z2;
		return ((int64_t)(((int64_t)(((int64_t)((int64_t)L_0&(int64_t)L_1))^((int64_t)((int64_t)L_2&(int64_t)L_3))))^((int64_t)((int64_t)L_4&(int64_t)L_5))));
	}
}
// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::Sum0(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t LongDigest_Sum0_m325EACDA096FFC9A041FD10B72466AC4415B9ABE (uint64_t ___x0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___x0;
		uint64_t L_1 = ___x0;
		uint64_t L_2 = ___x0;
		uint64_t L_3 = ___x0;
		uint64_t L_4 = ___x0;
		uint64_t L_5 = ___x0;
		return ((int64_t)(((int64_t)(((int64_t)(((int64_t)((int64_t)L_0<<((int32_t)36)))|((int64_t)((uint64_t)L_1>>((int32_t)28)))))^((int64_t)(((int64_t)((int64_t)L_2<<((int32_t)30)))|((int64_t)((uint64_t)L_3>>((int32_t)34)))))))^((int64_t)(((int64_t)((int64_t)L_4<<((int32_t)25)))|((int64_t)((uint64_t)L_5>>((int32_t)39)))))));
	}
}
// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::Sum1(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t LongDigest_Sum1_m75DD381FC1DDA6C49CE5E86BB9974A939E50B90A (uint64_t ___x0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___x0;
		uint64_t L_1 = ___x0;
		uint64_t L_2 = ___x0;
		uint64_t L_3 = ___x0;
		uint64_t L_4 = ___x0;
		uint64_t L_5 = ___x0;
		return ((int64_t)(((int64_t)(((int64_t)(((int64_t)((int64_t)L_0<<((int32_t)50)))|((int64_t)((uint64_t)L_1>>((int32_t)14)))))^((int64_t)(((int64_t)((int64_t)L_2<<((int32_t)46)))|((int64_t)((uint64_t)L_3>>((int32_t)18)))))))^((int64_t)(((int64_t)((int64_t)L_4<<((int32_t)23)))|((int64_t)((uint64_t)L_5>>((int32_t)41)))))));
	}
}
// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::Sigma0(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t LongDigest_Sigma0_mEA4DAC76E2ADAB4008FD0E9A4321573FBDA673EC (uint64_t ___x0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___x0;
		uint64_t L_1 = ___x0;
		uint64_t L_2 = ___x0;
		uint64_t L_3 = ___x0;
		uint64_t L_4 = ___x0;
		return ((int64_t)(((int64_t)(((int64_t)(((int64_t)((int64_t)L_0<<((int32_t)63)))|((int64_t)((uint64_t)L_1>>1))))^((int64_t)(((int64_t)((int64_t)L_2<<((int32_t)56)))|((int64_t)((uint64_t)L_3>>8))))))^((int64_t)((uint64_t)L_4>>7))));
	}
}
// System.UInt64 Org.BouncyCastle.Crypto.Digests.LongDigest::Sigma1(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t LongDigest_Sigma1_m82BF9B3F91EA947DDECB4A63EC592AB7CB084F61 (uint64_t ___x0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___x0;
		uint64_t L_1 = ___x0;
		uint64_t L_2 = ___x0;
		uint64_t L_3 = ___x0;
		uint64_t L_4 = ___x0;
		return ((int64_t)(((int64_t)(((int64_t)(((int64_t)((int64_t)L_0<<((int32_t)45)))|((int64_t)((uint64_t)L_1>>((int32_t)19)))))^((int64_t)(((int64_t)((int64_t)L_2<<3))|((int64_t)((uint64_t)L_3>>((int32_t)61)))))))^((int64_t)((uint64_t)L_4>>6))));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.LongDigest::GetByteLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongDigest_GetByteLength_m51C6B71A41BA97215D95CE69C8D54A9DBC26E907 (LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___MyByteLength_0;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.LongDigest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongDigest__cctor_m5CBBAC2EABD47B3993006E110819A3EA07FFAFF8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001362U2D1_36_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001362U2D1_36_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_StaticFields*)il2cpp_codegen_static_fields_for(LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_il2cpp_TypeInfo_var))->___K_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_StaticFields*)il2cpp_codegen_static_fields_for(LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA_il2cpp_TypeInfo_var))->___K_15), (void*)L_1);
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
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Digest__ctor_mAB54A54DB41807904C5FBAE2041B4516F4C7A5A7 (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)48));
		__this->___X_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___X_2), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___M_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___M_4), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___C_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___C_6), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MD2Digest_Reset_m551F72DA96E23819DEC9A9994737D21406785CB7(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::.ctor(Org.BouncyCastle.Crypto.Digests.MD2Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Digest__ctor_mC4D69E1E1D74FD3E3BF5BBBF64F46E13E5B8C2E9 (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)48));
		__this->___X_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___X_2), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___M_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___M_4), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___C_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___C_6), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* L_3 = ___t0;
		MD2Digest_CopyIn_m4F649DF116FFB2358A4EF8326AA2483A4E4709E2(__this, L_3, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.MD2Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Digest_CopyIn_m4F649DF116FFB2358A4EF8326AA2483A4E4709E2 (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* ___t0, const RuntimeMethod* method) 
{
	{
		MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* L_0 = ___t0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0->___X_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___X_2;
		MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* L_3 = ___t0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3->___X_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_1, 0, (RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* L_5 = ___t0;
		int32_t L_6 = L_5->___xOff_3;
		__this->___xOff_3 = L_6;
		MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* L_7 = ___t0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7->___M_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___M_4;
		MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* L_10 = ___t0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10->___M_4;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* L_12 = ___t0;
		int32_t L_13 = L_12->___mOff_5;
		__this->___mOff_5 = L_13;
		MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* L_14 = ___t0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14->___C_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___C_6;
		MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* L_17 = ___t0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = L_17->___C_6;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, 0, ((int32_t)(((RuntimeArray*)L_18)->max_length)), NULL);
		MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* L_19 = ___t0;
		int32_t L_20 = L_19->___COff_7;
		__this->___COff_7 = L_20;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Digests.MD2Digest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MD2Digest_get_AlgorithmName_mD4E4FEDEB310EEF760DF2CA847CE09C3C0A99D67 (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDEEDBEA213356129E472B5A1DE17C2E43607769);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralBDEEDBEA213356129E472B5A1DE17C2E43607769;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD2Digest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MD2Digest_GetDigestSize_mD745FC6BB01B0ACF13F964D4D3F2529E9D8ACF70 (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)16);
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD2Digest::GetByteLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MD2Digest_GetByteLength_mB2B5AC23A9998664540DEB53C7381C6856ADED88 (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)16);
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD2Digest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MD2Digest_DoFinal_mCFBB19FC5138A3B6187E2AE5A2AA1C37A222B069 (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___M_4;
		int32_t L_1 = __this->___mOff_5;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), L_1)));
		int32_t L_2 = __this->___mOff_5;
		V_1 = L_2;
		goto IL_0027;
	}

IL_001a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___M_4;
		int32_t L_4 = V_1;
		uint8_t L_5 = V_0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0027:
	{
		int32_t L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___M_4;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___M_4;
		MD2Digest_ProcessChecksum_m697CEA38FB431A19E3FD6CFDB74A528FB14E1D14(__this, L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___M_4;
		MD2Digest_ProcessBlock_mD15EFB97AB43F483AF2EC818673E3DB4FC180E0C(__this, L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___C_6;
		MD2Digest_ProcessBlock_mD15EFB97AB43F483AF2EC818673E3DB4FC180E0C(__this, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___X_2;
		int32_t L_13 = __this->___xOff_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___output0;
		int32_t L_15 = ___outOff1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, L_15, ((int32_t)16), NULL);
		MD2Digest_Reset_m551F72DA96E23819DEC9A9994737D21406785CB7(__this, NULL);
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Digest_Reset_m551F72DA96E23819DEC9A9994737D21406785CB7 (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		__this->___xOff_3 = 0;
		V_0 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___X_2;
		int32_t L_1 = V_0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)0);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0018:
	{
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___X_2;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		__this->___mOff_5 = 0;
		V_1 = 0;
		goto IL_003b;
	}

IL_002e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___M_4;
		int32_t L_6 = V_1;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)0);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_003b:
	{
		int32_t L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___M_4;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_002e;
		}
	}
	{
		__this->___COff_7 = 0;
		V_2 = 0;
		goto IL_005e;
	}

IL_0051:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___C_6;
		int32_t L_11 = V_2;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)0);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_005e:
	{
		int32_t L_13 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___C_6;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Digest_Update_m79CA8AA51C792F7D8A2E021A65B581A68EA4059B (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___M_4;
		int32_t L_1 = __this->___mOff_5;
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->___mOff_5 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		uint8_t L_4 = ___input0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		int32_t L_5 = __this->___mOff_5;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0042;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___M_4;
		MD2Digest_ProcessChecksum_m697CEA38FB431A19E3FD6CFDB74A528FB14E1D14(__this, L_6, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___M_4;
		MD2Digest_ProcessBlock_mD15EFB97AB43F483AF2EC818673E3DB4FC180E0C(__this, L_7, NULL);
		__this->___mOff_5 = 0;
	}

IL_0042:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Digest_BlockUpdate_m8D66A51ECAAF85F44C202AF85AC8C66170D1C7FA (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		goto IL_0015;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		MD2Digest_Update_m79CA8AA51C792F7D8A2E021A65B581A68EA4059B(__this, L_3, NULL);
		int32_t L_4 = ___inOff1;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}

IL_0015:
	{
		int32_t L_6 = __this->___mOff_5;
		if (!L_6)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_7 = ___length2;
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		goto IL_0057;
	}

IL_0023:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___input0;
		int32_t L_9 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___M_4;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, 0, ((int32_t)16), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___M_4;
		MD2Digest_ProcessChecksum_m697CEA38FB431A19E3FD6CFDB74A528FB14E1D14(__this, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___M_4;
		MD2Digest_ProcessBlock_mD15EFB97AB43F483AF2EC818673E3DB4FC180E0C(__this, L_12, NULL);
		int32_t L_13 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)16)));
		int32_t L_14 = ___inOff1;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)16)));
	}

IL_0057:
	{
		int32_t L_15 = ___length2;
		if ((((int32_t)L_15) > ((int32_t)((int32_t)16))))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_0071;
	}

IL_005e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___input0;
		int32_t L_17 = ___inOff1;
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		MD2Digest_Update_m79CA8AA51C792F7D8A2E021A65B581A68EA4059B(__this, L_19, NULL);
		int32_t L_20 = ___inOff1;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
	}

IL_0071:
	{
		int32_t L_22 = ___length2;
		if ((((int32_t)L_22) > ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::ProcessChecksum(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Digest_ProcessChecksum_m697CEA38FB431A19E3FD6CFDB74A528FB14E1D14 (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___C_6;
		int32_t L_1 = ((int32_t)15);
		uint8_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		V_1 = 0;
		goto IL_003d;
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___C_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		V_2 = L_4;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		V_3 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_2;
		intptr_t L_8 = V_3;
		intptr_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		il2cpp_codegen_runtime_class_init_inline(MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ((MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE_StaticFields*)il2cpp_codegen_static_fields_for(MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE_il2cpp_TypeInfo_var))->___S_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___m0;
		int32_t L_13 = V_1;
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = V_0;
		int32_t L_17 = ((int32_t)(((int32_t)((int32_t)L_15^L_16))&((int32_t)255)));
		uint8_t L_18 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_10^(int32_t)L_18))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___C_6;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		uint8_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = L_22;
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_003d:
	{
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)16))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::ProcessBlock(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Digest_ProcessBlock_mD15EFB97AB43F483AF2EC818673E3DB4FC180E0C (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	uint8_t V_6 = 0x0;
	{
		V_0 = 0;
		goto IL_002e;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___X_2;
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___m0;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)16)))), (uint8_t)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___X_2;
		int32_t L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___m0;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___X_2;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, ((int32_t)32)))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_11^(int32_t)L_15))));
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_002e:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)16))))
		{
			goto IL_0004;
		}
	}
	{
		V_1 = 0;
		V_2 = 0;
		goto IL_007e;
	}

IL_0039:
	{
		V_3 = 0;
		goto IL_006b;
	}

IL_003d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___X_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = L_18;
		V_4 = L_19;
		int32_t L_20 = V_3;
		int32_t L_21 = L_20;
		V_5 = L_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_4;
		intptr_t L_23 = V_5;
		intptr_t L_24 = L_23;
		uint8_t L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		il2cpp_codegen_runtime_class_init_inline(MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ((MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE_StaticFields*)il2cpp_codegen_static_fields_for(MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE_il2cpp_TypeInfo_var))->___S_8;
		int32_t L_27 = V_1;
		int32_t L_28 = L_27;
		uint8_t L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = ((int32_t)(uint8_t)((int32_t)((int32_t)L_25^(int32_t)L_29)));
		V_6 = (uint8_t)L_30;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21), (uint8_t)L_30);
		uint8_t L_31 = V_6;
		V_1 = L_31;
		int32_t L_32 = V_1;
		V_1 = ((int32_t)(L_32&((int32_t)255)));
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_006b:
	{
		int32_t L_34 = V_3;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)48))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_35 = V_1;
		int32_t L_36 = V_2;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_35, L_36))%((int32_t)256)));
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_007e:
	{
		int32_t L_38 = V_2;
		if ((((int32_t)L_38) < ((int32_t)((int32_t)18))))
		{
			goto IL_0039;
		}
	}
	{
		return;
	}
}
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.MD2Digest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MD2Digest_Copy_m79DCBE2A32391C8B6DA261E6534B899F3BFBD5A9 (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* L_0 = (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE*)il2cpp_codegen_object_new(MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE_il2cpp_TypeInfo_var);
		MD2Digest__ctor_mC4D69E1E1D74FD3E3BF5BBBF64F46E13E5B8C2E9(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Digest_Reset_m34AF1D69AA0DA4308ECE43E55122290CCDD43CF9 (MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___other0;
		V_0 = ((MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE*)CastclassClass((RuntimeObject*)L_0, MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE_il2cpp_TypeInfo_var));
		MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE* L_1 = V_0;
		MD2Digest_CopyIn_m4F649DF116FFB2358A4EF8326AA2483A4E4709E2(__this, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD2Digest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD2Digest__cctor_mBE8EF8B5C2FB2C42E0985A1F302332D1944D3445 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001371U2D1_37_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____U24U24method0x6001371U2D1_37_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_1, L_2, NULL);
		((MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE_StaticFields*)il2cpp_codegen_static_fields_for(MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE_il2cpp_TypeInfo_var))->___S_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE_StaticFields*)il2cpp_codegen_static_fields_for(MD2Digest_t4FD4CBD061F1879232AB60339A90ACBD3F5F87DE_il2cpp_TypeInfo_var))->___S_8), (void*)L_1);
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
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Digest__ctor_m9E5574AFC4943A30BAAAFD21B2C65DACD6183806 (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___X_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___X_21), (void*)L_0);
		GeneralDigest__ctor_m67E803310E7744886EF893C646D312868DCCD1FD(__this, NULL);
		VirtualActionInvoker0::Invoke(13 /* System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::Reset() */, __this);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::.ctor(Org.BouncyCastle.Crypto.Digests.MD4Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Digest__ctor_mD292CB65819BFE65F535DA679B05A8DC7623A9CB (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___X_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___X_21), (void*)L_0);
		MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* L_1 = ___t0;
		GeneralDigest__ctor_m87B9D3E5C08DBEC58227C8469EEA9EC47F6A84F7(__this, L_1, NULL);
		MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* L_2 = ___t0;
		MD4Digest_CopyIn_mCCBCCCDE55EC2432E0BA942F92D05D5921F45DCD(__this, L_2, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.MD4Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Digest_CopyIn_mCCBCCCDE55EC2432E0BA942F92D05D5921F45DCD (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* ___t0, const RuntimeMethod* method) 
{
	{
		MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* L_0 = ___t0;
		GeneralDigest_CopyIn_mB0E17BFA6B0BC2D95FE8B64B7837E63CD4EDF728(__this, L_0, NULL);
		MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* L_1 = ___t0;
		int32_t L_2 = L_1->___H1_17;
		__this->___H1_17 = L_2;
		MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* L_3 = ___t0;
		int32_t L_4 = L_3->___H2_18;
		__this->___H2_18 = L_4;
		MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* L_5 = ___t0;
		int32_t L_6 = L_5->___H3_19;
		__this->___H3_19 = L_6;
		MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* L_7 = ___t0;
		int32_t L_8 = L_7->___H4_20;
		__this->___H4_20 = L_8;
		MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* L_9 = ___t0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___X_21;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->___X_21;
		MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* L_12 = ___t0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12->___X_21;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_10, 0, (RuntimeArray*)L_11, 0, ((int32_t)(((RuntimeArray*)L_13)->max_length)), NULL);
		MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* L_14 = ___t0;
		int32_t L_15 = L_14->___xOff_22;
		__this->___xOff_22 = L_15;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Digests.MD4Digest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MD4Digest_get_AlgorithmName_m41271F032F834FCD808DDCD05470094E7B78B446 (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08DDE1A16B430B92E18027F90410E7A1BBE194F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral08DDE1A16B430B92E18027F90410E7A1BBE194F2;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MD4Digest_GetDigestSize_m5B7D515193AF78F7190E8CFC4D31AFB11495A0EB (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::ProcessWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Digest_ProcessWord_m886E63F622E9FEA2D5B8F2E5643B9DA8CD6BE13B (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___X_21;
		int32_t L_1 = __this->___xOff_22;
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->___xOff_22 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input0;
		int32_t L_5 = ___inOff1;
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___input0;
		int32_t L_9 = ___inOff1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint8_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___input0;
		int32_t L_13 = ___inOff1;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 2));
		uint8_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___input0;
		int32_t L_17 = ___inOff1;
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 3));
		uint8_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_7&((int32_t)255)))|((int32_t)(((int32_t)((int32_t)L_11&((int32_t)255)))<<8))))|((int32_t)(((int32_t)((int32_t)L_15&((int32_t)255)))<<((int32_t)16)))))|((int32_t)(((int32_t)((int32_t)L_19&((int32_t)255)))<<((int32_t)24))))));
		int32_t L_20 = __this->___xOff_22;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_005d;
		}
	}
	{
		VirtualActionInvoker0::Invoke(16 /* System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessBlock() */, __this);
	}

IL_005d:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::ProcessLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Digest_ProcessLength_mA3306210CB993549AE38B2F84852F15F1CBDE8F6 (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, int64_t ___bitLength0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___xOff_22;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)14))))
		{
			goto IL_0010;
		}
	}
	{
		VirtualActionInvoker0::Invoke(16 /* System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessBlock() */, __this);
	}

IL_0010:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___X_21;
		int64_t L_2 = ___bitLength0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (int32_t)((int32_t)((int64_t)(L_2&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___X_21;
		int64_t L_4 = ___bitLength0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (int32_t)((int32_t)((int64_t)((uint64_t)L_4>>((int32_t)32)))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::UnpackWord(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Digest_UnpackWord_m86377B7B02D561680CE976F580B9988CC94CD1F6 (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, int32_t ___word0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes1, int32_t ___outOff2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___outBytes1;
		int32_t L_1 = ___outOff2;
		int32_t L_2 = ___word0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___outBytes1;
		int32_t L_4 = ___outOff2;
		int32_t L_5 = ___word0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_5>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___outBytes1;
		int32_t L_7 = ___outOff2;
		int32_t L_8 = ___word0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_8>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___outBytes1;
		int32_t L_10 = ___outOff2;
		int32_t L_11 = ___word0;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_11>>((int32_t)24)))));
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MD4Digest_DoFinal_m5087391DF1E9618319257377D833A487BFC6DB92 (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		GeneralDigest_Finish_m9D444CDCBC760932CD5318A831449973B1FC226E(__this, NULL);
		int32_t L_0 = __this->___H1_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___output0;
		int32_t L_2 = ___outOff1;
		MD4Digest_UnpackWord_m86377B7B02D561680CE976F580B9988CC94CD1F6(__this, L_0, L_1, L_2, NULL);
		int32_t L_3 = __this->___H2_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output0;
		int32_t L_5 = ___outOff1;
		MD4Digest_UnpackWord_m86377B7B02D561680CE976F580B9988CC94CD1F6(__this, L_3, L_4, ((int32_t)il2cpp_codegen_add(L_5, 4)), NULL);
		int32_t L_6 = __this->___H3_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___output0;
		int32_t L_8 = ___outOff1;
		MD4Digest_UnpackWord_m86377B7B02D561680CE976F580B9988CC94CD1F6(__this, L_6, L_7, ((int32_t)il2cpp_codegen_add(L_8, 8)), NULL);
		int32_t L_9 = __this->___H4_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___output0;
		int32_t L_11 = ___outOff1;
		MD4Digest_UnpackWord_m86377B7B02D561680CE976F580B9988CC94CD1F6(__this, L_9, L_10, ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)12))), NULL);
		VirtualActionInvoker0::Invoke(13 /* System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::Reset() */, __this);
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Digest_Reset_m8C01BAD330B49CB9E65845698DD34084F8BC4B68 (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		GeneralDigest_Reset_m1CDCFA775518A1FBB227FCB0673015400D6FF246(__this, NULL);
		__this->___H1_17 = ((int32_t)1732584193);
		__this->___H2_18 = ((int32_t)-271733879);
		__this->___H3_19 = ((int32_t)-1732584194);
		__this->___H4_20 = ((int32_t)271733878);
		__this->___xOff_22 = 0;
		V_0 = 0;
		goto IL_004a;
	}

IL_003d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___X_21;
		int32_t L_1 = V_0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (int32_t)0);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_004a:
	{
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___X_21;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_003d;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::RotateLeft(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, int32_t ___x0, int32_t ___n1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___n1;
		int32_t L_2 = ___x0;
		int32_t L_3 = ___n1;
		return ((int32_t)(((int32_t)(L_0<<((int32_t)(L_1&((int32_t)31)))))|((int32_t)((uint32_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::F(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MD4Digest_F_mC13771DF85666927DB01E0AC8872B152F819FB68 (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, int32_t ___u0, int32_t ___v1, int32_t ___w2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___u0;
		int32_t L_1 = ___v1;
		int32_t L_2 = ___u0;
		int32_t L_3 = ___w2;
		return ((int32_t)(((int32_t)(L_0&L_1))|((int32_t)(((~L_2))&L_3))));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::G(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MD4Digest_G_m9195B96B4DCD712A673901E10401728BFCE222D1 (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, int32_t ___u0, int32_t ___v1, int32_t ___w2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___u0;
		int32_t L_1 = ___v1;
		int32_t L_2 = ___u0;
		int32_t L_3 = ___w2;
		int32_t L_4 = ___v1;
		int32_t L_5 = ___w2;
		return ((int32_t)(((int32_t)(((int32_t)(L_0&L_1))|((int32_t)(L_2&L_3))))|((int32_t)(L_4&L_5))));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD4Digest::H(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MD4Digest_H_m8D92EDD73A791E815AB49BBC2133BF56B44B4DBE (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, int32_t ___u0, int32_t ___v1, int32_t ___w2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___u0;
		int32_t L_1 = ___v1;
		int32_t L_2 = ___w2;
		return ((int32_t)(((int32_t)(L_0^L_1))^L_2));
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::ProcessBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Digest_ProcessBlock_m9FF879C5523BA88FBABCEBFB5AA7CE27C72F9AFE (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->___H1_17;
		V_0 = L_0;
		int32_t L_1 = __this->___H2_18;
		V_1 = L_1;
		int32_t L_2 = __this->___H3_19;
		V_2 = L_2;
		int32_t L_3 = __this->___H4_20;
		V_3 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = V_3;
		int32_t L_8;
		L_8 = MD4Digest_F_mC13771DF85666927DB01E0AC8872B152F819FB68(__this, L_5, L_6, L_7, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___X_21;
		int32_t L_10 = 0;
		int32_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12;
		L_12 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_4, L_8)), L_11)), 3, NULL);
		V_0 = L_12;
		int32_t L_13 = V_3;
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		int32_t L_16 = V_2;
		int32_t L_17;
		L_17 = MD4Digest_F_mC13771DF85666927DB01E0AC8872B152F819FB68(__this, L_14, L_15, L_16, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___X_21;
		int32_t L_19 = 1;
		int32_t L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21;
		L_21 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_13, L_17)), L_20)), 7, NULL);
		V_3 = L_21;
		int32_t L_22 = V_2;
		int32_t L_23 = V_3;
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		int32_t L_26;
		L_26 = MD4Digest_F_mC13771DF85666927DB01E0AC8872B152F819FB68(__this, L_23, L_24, L_25, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->___X_21;
		int32_t L_28 = 2;
		int32_t L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30;
		L_30 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_22, L_26)), L_29)), ((int32_t)11), NULL);
		V_2 = L_30;
		int32_t L_31 = V_1;
		int32_t L_32 = V_2;
		int32_t L_33 = V_3;
		int32_t L_34 = V_0;
		int32_t L_35;
		L_35 = MD4Digest_F_mC13771DF85666927DB01E0AC8872B152F819FB68(__this, L_32, L_33, L_34, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->___X_21;
		int32_t L_37 = 3;
		int32_t L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39;
		L_39 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_31, L_35)), L_38)), ((int32_t)19), NULL);
		V_1 = L_39;
		int32_t L_40 = V_0;
		int32_t L_41 = V_1;
		int32_t L_42 = V_2;
		int32_t L_43 = V_3;
		int32_t L_44;
		L_44 = MD4Digest_F_mC13771DF85666927DB01E0AC8872B152F819FB68(__this, L_41, L_42, L_43, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___X_21;
		int32_t L_46 = 4;
		int32_t L_47 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		int32_t L_48;
		L_48 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_40, L_44)), L_47)), 3, NULL);
		V_0 = L_48;
		int32_t L_49 = V_3;
		int32_t L_50 = V_0;
		int32_t L_51 = V_1;
		int32_t L_52 = V_2;
		int32_t L_53;
		L_53 = MD4Digest_F_mC13771DF85666927DB01E0AC8872B152F819FB68(__this, L_50, L_51, L_52, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = __this->___X_21;
		int32_t L_55 = 5;
		int32_t L_56 = (L_54)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		int32_t L_57;
		L_57 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_49, L_53)), L_56)), 7, NULL);
		V_3 = L_57;
		int32_t L_58 = V_2;
		int32_t L_59 = V_3;
		int32_t L_60 = V_0;
		int32_t L_61 = V_1;
		int32_t L_62;
		L_62 = MD4Digest_F_mC13771DF85666927DB01E0AC8872B152F819FB68(__this, L_59, L_60, L_61, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = __this->___X_21;
		int32_t L_64 = 6;
		int32_t L_65 = (L_63)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_64));
		int32_t L_66;
		L_66 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_58, L_62)), L_65)), ((int32_t)11), NULL);
		V_2 = L_66;
		int32_t L_67 = V_1;
		int32_t L_68 = V_2;
		int32_t L_69 = V_3;
		int32_t L_70 = V_0;
		int32_t L_71;
		L_71 = MD4Digest_F_mC13771DF85666927DB01E0AC8872B152F819FB68(__this, L_68, L_69, L_70, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = __this->___X_21;
		int32_t L_73 = 7;
		int32_t L_74 = (L_72)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		int32_t L_75;
		L_75 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_67, L_71)), L_74)), ((int32_t)19), NULL);
		V_1 = L_75;
		int32_t L_76 = V_0;
		int32_t L_77 = V_1;
		int32_t L_78 = V_2;
		int32_t L_79 = V_3;
		int32_t L_80;
		L_80 = MD4Digest_F_mC13771DF85666927DB01E0AC8872B152F819FB68(__this, L_77, L_78, L_79, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = __this->___X_21;
		int32_t L_82 = 8;
		int32_t L_83 = (L_81)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
		int32_t L_84;
		L_84 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_76, L_80)), L_83)), 3, NULL);
		V_0 = L_84;
		int32_t L_85 = V_3;
		int32_t L_86 = V_0;
		int32_t L_87 = V_1;
		int32_t L_88 = V_2;
		int32_t L_89;
		L_89 = MD4Digest_F_mC13771DF85666927DB01E0AC8872B152F819FB68(__this, L_86, L_87, L_88, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_90 = __this->___X_21;
		int32_t L_91 = ((int32_t)9);
		int32_t L_92 = (L_90)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_91));
		int32_t L_93;
		L_93 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_85, L_89)), L_92)), 7, NULL);
		V_3 = L_93;
		int32_t L_94 = V_2;
		int32_t L_95 = V_3;
		int32_t L_96 = V_0;
		int32_t L_97 = V_1;
		int32_t L_98;
		L_98 = MD4Digest_F_mC13771DF85666927DB01E0AC8872B152F819FB68(__this, L_95, L_96, L_97, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_99 = __this->___X_21;
		int32_t L_100 = ((int32_t)10);
		int32_t L_101 = (L_99)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_100));
		int32_t L_102;
		L_102 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_94, L_98)), L_101)), ((int32_t)11), NULL);
		V_2 = L_102;
		int32_t L_103 = V_1;
		int32_t L_104 = V_2;
		int32_t L_105 = V_3;
		int32_t L_106 = V_0;
		int32_t L_107;
		L_107 = MD4Digest_F_mC13771DF85666927DB01E0AC8872B152F819FB68(__this, L_104, L_105, L_106, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->___X_21;
		int32_t L_109 = ((int32_t)11);
		int32_t L_110 = (L_108)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_109));
		int32_t L_111;
		L_111 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_103, L_107)), L_110)), ((int32_t)19), NULL);
		V_1 = L_111;
		int32_t L_112 = V_0;
		int32_t L_113 = V_1;
		int32_t L_114 = V_2;
		int32_t L_115 = V_3;
		int32_t L_116;
		L_116 = MD4Digest_F_mC13771DF85666927DB01E0AC8872B152F819FB68(__this, L_113, L_114, L_115, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = __this->___X_21;
		int32_t L_118 = ((int32_t)12);
		int32_t L_119 = (L_117)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_118));
		int32_t L_120;
		L_120 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_112, L_116)), L_119)), 3, NULL);
		V_0 = L_120;
		int32_t L_121 = V_3;
		int32_t L_122 = V_0;
		int32_t L_123 = V_1;
		int32_t L_124 = V_2;
		int32_t L_125;
		L_125 = MD4Digest_F_mC13771DF85666927DB01E0AC8872B152F819FB68(__this, L_122, L_123, L_124, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_126 = __this->___X_21;
		int32_t L_127 = ((int32_t)13);
		int32_t L_128 = (L_126)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_127));
		int32_t L_129;
		L_129 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_121, L_125)), L_128)), 7, NULL);
		V_3 = L_129;
		int32_t L_130 = V_2;
		int32_t L_131 = V_3;
		int32_t L_132 = V_0;
		int32_t L_133 = V_1;
		int32_t L_134;
		L_134 = MD4Digest_F_mC13771DF85666927DB01E0AC8872B152F819FB68(__this, L_131, L_132, L_133, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_135 = __this->___X_21;
		int32_t L_136 = ((int32_t)14);
		int32_t L_137 = (L_135)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_136));
		int32_t L_138;
		L_138 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_130, L_134)), L_137)), ((int32_t)11), NULL);
		V_2 = L_138;
		int32_t L_139 = V_1;
		int32_t L_140 = V_2;
		int32_t L_141 = V_3;
		int32_t L_142 = V_0;
		int32_t L_143;
		L_143 = MD4Digest_F_mC13771DF85666927DB01E0AC8872B152F819FB68(__this, L_140, L_141, L_142, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = __this->___X_21;
		int32_t L_145 = ((int32_t)15);
		int32_t L_146 = (L_144)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_145));
		int32_t L_147;
		L_147 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_139, L_143)), L_146)), ((int32_t)19), NULL);
		V_1 = L_147;
		int32_t L_148 = V_0;
		int32_t L_149 = V_1;
		int32_t L_150 = V_2;
		int32_t L_151 = V_3;
		int32_t L_152;
		L_152 = MD4Digest_G_m9195B96B4DCD712A673901E10401728BFCE222D1(__this, L_149, L_150, L_151, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_153 = __this->___X_21;
		int32_t L_154 = 0;
		int32_t L_155 = (L_153)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_154));
		int32_t L_156;
		L_156 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_148, L_152)), L_155)), ((int32_t)1518500249))), 3, NULL);
		V_0 = L_156;
		int32_t L_157 = V_3;
		int32_t L_158 = V_0;
		int32_t L_159 = V_1;
		int32_t L_160 = V_2;
		int32_t L_161;
		L_161 = MD4Digest_G_m9195B96B4DCD712A673901E10401728BFCE222D1(__this, L_158, L_159, L_160, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_162 = __this->___X_21;
		int32_t L_163 = 4;
		int32_t L_164 = (L_162)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_163));
		int32_t L_165;
		L_165 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_157, L_161)), L_164)), ((int32_t)1518500249))), 5, NULL);
		V_3 = L_165;
		int32_t L_166 = V_2;
		int32_t L_167 = V_3;
		int32_t L_168 = V_0;
		int32_t L_169 = V_1;
		int32_t L_170;
		L_170 = MD4Digest_G_m9195B96B4DCD712A673901E10401728BFCE222D1(__this, L_167, L_168, L_169, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_171 = __this->___X_21;
		int32_t L_172 = 8;
		int32_t L_173 = (L_171)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_172));
		int32_t L_174;
		L_174 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_166, L_170)), L_173)), ((int32_t)1518500249))), ((int32_t)9), NULL);
		V_2 = L_174;
		int32_t L_175 = V_1;
		int32_t L_176 = V_2;
		int32_t L_177 = V_3;
		int32_t L_178 = V_0;
		int32_t L_179;
		L_179 = MD4Digest_G_m9195B96B4DCD712A673901E10401728BFCE222D1(__this, L_176, L_177, L_178, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_180 = __this->___X_21;
		int32_t L_181 = ((int32_t)12);
		int32_t L_182 = (L_180)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_181));
		int32_t L_183;
		L_183 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_175, L_179)), L_182)), ((int32_t)1518500249))), ((int32_t)13), NULL);
		V_1 = L_183;
		int32_t L_184 = V_0;
		int32_t L_185 = V_1;
		int32_t L_186 = V_2;
		int32_t L_187 = V_3;
		int32_t L_188;
		L_188 = MD4Digest_G_m9195B96B4DCD712A673901E10401728BFCE222D1(__this, L_185, L_186, L_187, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = __this->___X_21;
		int32_t L_190 = 1;
		int32_t L_191 = (L_189)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_190));
		int32_t L_192;
		L_192 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_184, L_188)), L_191)), ((int32_t)1518500249))), 3, NULL);
		V_0 = L_192;
		int32_t L_193 = V_3;
		int32_t L_194 = V_0;
		int32_t L_195 = V_1;
		int32_t L_196 = V_2;
		int32_t L_197;
		L_197 = MD4Digest_G_m9195B96B4DCD712A673901E10401728BFCE222D1(__this, L_194, L_195, L_196, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_198 = __this->___X_21;
		int32_t L_199 = 5;
		int32_t L_200 = (L_198)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_199));
		int32_t L_201;
		L_201 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_193, L_197)), L_200)), ((int32_t)1518500249))), 5, NULL);
		V_3 = L_201;
		int32_t L_202 = V_2;
		int32_t L_203 = V_3;
		int32_t L_204 = V_0;
		int32_t L_205 = V_1;
		int32_t L_206;
		L_206 = MD4Digest_G_m9195B96B4DCD712A673901E10401728BFCE222D1(__this, L_203, L_204, L_205, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_207 = __this->___X_21;
		int32_t L_208 = ((int32_t)9);
		int32_t L_209 = (L_207)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_208));
		int32_t L_210;
		L_210 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_202, L_206)), L_209)), ((int32_t)1518500249))), ((int32_t)9), NULL);
		V_2 = L_210;
		int32_t L_211 = V_1;
		int32_t L_212 = V_2;
		int32_t L_213 = V_3;
		int32_t L_214 = V_0;
		int32_t L_215;
		L_215 = MD4Digest_G_m9195B96B4DCD712A673901E10401728BFCE222D1(__this, L_212, L_213, L_214, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_216 = __this->___X_21;
		int32_t L_217 = ((int32_t)13);
		int32_t L_218 = (L_216)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_217));
		int32_t L_219;
		L_219 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_211, L_215)), L_218)), ((int32_t)1518500249))), ((int32_t)13), NULL);
		V_1 = L_219;
		int32_t L_220 = V_0;
		int32_t L_221 = V_1;
		int32_t L_222 = V_2;
		int32_t L_223 = V_3;
		int32_t L_224;
		L_224 = MD4Digest_G_m9195B96B4DCD712A673901E10401728BFCE222D1(__this, L_221, L_222, L_223, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_225 = __this->___X_21;
		int32_t L_226 = 2;
		int32_t L_227 = (L_225)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_226));
		int32_t L_228;
		L_228 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_220, L_224)), L_227)), ((int32_t)1518500249))), 3, NULL);
		V_0 = L_228;
		int32_t L_229 = V_3;
		int32_t L_230 = V_0;
		int32_t L_231 = V_1;
		int32_t L_232 = V_2;
		int32_t L_233;
		L_233 = MD4Digest_G_m9195B96B4DCD712A673901E10401728BFCE222D1(__this, L_230, L_231, L_232, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_234 = __this->___X_21;
		int32_t L_235 = 6;
		int32_t L_236 = (L_234)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_235));
		int32_t L_237;
		L_237 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_229, L_233)), L_236)), ((int32_t)1518500249))), 5, NULL);
		V_3 = L_237;
		int32_t L_238 = V_2;
		int32_t L_239 = V_3;
		int32_t L_240 = V_0;
		int32_t L_241 = V_1;
		int32_t L_242;
		L_242 = MD4Digest_G_m9195B96B4DCD712A673901E10401728BFCE222D1(__this, L_239, L_240, L_241, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_243 = __this->___X_21;
		int32_t L_244 = ((int32_t)10);
		int32_t L_245 = (L_243)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_244));
		int32_t L_246;
		L_246 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_238, L_242)), L_245)), ((int32_t)1518500249))), ((int32_t)9), NULL);
		V_2 = L_246;
		int32_t L_247 = V_1;
		int32_t L_248 = V_2;
		int32_t L_249 = V_3;
		int32_t L_250 = V_0;
		int32_t L_251;
		L_251 = MD4Digest_G_m9195B96B4DCD712A673901E10401728BFCE222D1(__this, L_248, L_249, L_250, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = __this->___X_21;
		int32_t L_253 = ((int32_t)14);
		int32_t L_254 = (L_252)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_253));
		int32_t L_255;
		L_255 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_247, L_251)), L_254)), ((int32_t)1518500249))), ((int32_t)13), NULL);
		V_1 = L_255;
		int32_t L_256 = V_0;
		int32_t L_257 = V_1;
		int32_t L_258 = V_2;
		int32_t L_259 = V_3;
		int32_t L_260;
		L_260 = MD4Digest_G_m9195B96B4DCD712A673901E10401728BFCE222D1(__this, L_257, L_258, L_259, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_261 = __this->___X_21;
		int32_t L_262 = 3;
		int32_t L_263 = (L_261)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_262));
		int32_t L_264;
		L_264 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_256, L_260)), L_263)), ((int32_t)1518500249))), 3, NULL);
		V_0 = L_264;
		int32_t L_265 = V_3;
		int32_t L_266 = V_0;
		int32_t L_267 = V_1;
		int32_t L_268 = V_2;
		int32_t L_269;
		L_269 = MD4Digest_G_m9195B96B4DCD712A673901E10401728BFCE222D1(__this, L_266, L_267, L_268, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_270 = __this->___X_21;
		int32_t L_271 = 7;
		int32_t L_272 = (L_270)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_271));
		int32_t L_273;
		L_273 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_265, L_269)), L_272)), ((int32_t)1518500249))), 5, NULL);
		V_3 = L_273;
		int32_t L_274 = V_2;
		int32_t L_275 = V_3;
		int32_t L_276 = V_0;
		int32_t L_277 = V_1;
		int32_t L_278;
		L_278 = MD4Digest_G_m9195B96B4DCD712A673901E10401728BFCE222D1(__this, L_275, L_276, L_277, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_279 = __this->___X_21;
		int32_t L_280 = ((int32_t)11);
		int32_t L_281 = (L_279)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_280));
		int32_t L_282;
		L_282 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_274, L_278)), L_281)), ((int32_t)1518500249))), ((int32_t)9), NULL);
		V_2 = L_282;
		int32_t L_283 = V_1;
		int32_t L_284 = V_2;
		int32_t L_285 = V_3;
		int32_t L_286 = V_0;
		int32_t L_287;
		L_287 = MD4Digest_G_m9195B96B4DCD712A673901E10401728BFCE222D1(__this, L_284, L_285, L_286, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_288 = __this->___X_21;
		int32_t L_289 = ((int32_t)15);
		int32_t L_290 = (L_288)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_289));
		int32_t L_291;
		L_291 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_283, L_287)), L_290)), ((int32_t)1518500249))), ((int32_t)13), NULL);
		V_1 = L_291;
		int32_t L_292 = V_0;
		int32_t L_293 = V_1;
		int32_t L_294 = V_2;
		int32_t L_295 = V_3;
		int32_t L_296;
		L_296 = MD4Digest_H_m8D92EDD73A791E815AB49BBC2133BF56B44B4DBE(__this, L_293, L_294, L_295, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_297 = __this->___X_21;
		int32_t L_298 = 0;
		int32_t L_299 = (L_297)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_298));
		int32_t L_300;
		L_300 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_292, L_296)), L_299)), ((int32_t)1859775393))), 3, NULL);
		V_0 = L_300;
		int32_t L_301 = V_3;
		int32_t L_302 = V_0;
		int32_t L_303 = V_1;
		int32_t L_304 = V_2;
		int32_t L_305;
		L_305 = MD4Digest_H_m8D92EDD73A791E815AB49BBC2133BF56B44B4DBE(__this, L_302, L_303, L_304, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_306 = __this->___X_21;
		int32_t L_307 = 8;
		int32_t L_308 = (L_306)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_307));
		int32_t L_309;
		L_309 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_301, L_305)), L_308)), ((int32_t)1859775393))), ((int32_t)9), NULL);
		V_3 = L_309;
		int32_t L_310 = V_2;
		int32_t L_311 = V_3;
		int32_t L_312 = V_0;
		int32_t L_313 = V_1;
		int32_t L_314;
		L_314 = MD4Digest_H_m8D92EDD73A791E815AB49BBC2133BF56B44B4DBE(__this, L_311, L_312, L_313, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_315 = __this->___X_21;
		int32_t L_316 = 4;
		int32_t L_317 = (L_315)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_316));
		int32_t L_318;
		L_318 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_310, L_314)), L_317)), ((int32_t)1859775393))), ((int32_t)11), NULL);
		V_2 = L_318;
		int32_t L_319 = V_1;
		int32_t L_320 = V_2;
		int32_t L_321 = V_3;
		int32_t L_322 = V_0;
		int32_t L_323;
		L_323 = MD4Digest_H_m8D92EDD73A791E815AB49BBC2133BF56B44B4DBE(__this, L_320, L_321, L_322, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_324 = __this->___X_21;
		int32_t L_325 = ((int32_t)12);
		int32_t L_326 = (L_324)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327;
		L_327 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_319, L_323)), L_326)), ((int32_t)1859775393))), ((int32_t)15), NULL);
		V_1 = L_327;
		int32_t L_328 = V_0;
		int32_t L_329 = V_1;
		int32_t L_330 = V_2;
		int32_t L_331 = V_3;
		int32_t L_332;
		L_332 = MD4Digest_H_m8D92EDD73A791E815AB49BBC2133BF56B44B4DBE(__this, L_329, L_330, L_331, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_333 = __this->___X_21;
		int32_t L_334 = 2;
		int32_t L_335 = (L_333)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_334));
		int32_t L_336;
		L_336 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_328, L_332)), L_335)), ((int32_t)1859775393))), 3, NULL);
		V_0 = L_336;
		int32_t L_337 = V_3;
		int32_t L_338 = V_0;
		int32_t L_339 = V_1;
		int32_t L_340 = V_2;
		int32_t L_341;
		L_341 = MD4Digest_H_m8D92EDD73A791E815AB49BBC2133BF56B44B4DBE(__this, L_338, L_339, L_340, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_342 = __this->___X_21;
		int32_t L_343 = ((int32_t)10);
		int32_t L_344 = (L_342)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_343));
		int32_t L_345;
		L_345 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_337, L_341)), L_344)), ((int32_t)1859775393))), ((int32_t)9), NULL);
		V_3 = L_345;
		int32_t L_346 = V_2;
		int32_t L_347 = V_3;
		int32_t L_348 = V_0;
		int32_t L_349 = V_1;
		int32_t L_350;
		L_350 = MD4Digest_H_m8D92EDD73A791E815AB49BBC2133BF56B44B4DBE(__this, L_347, L_348, L_349, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_351 = __this->___X_21;
		int32_t L_352 = 6;
		int32_t L_353 = (L_351)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_352));
		int32_t L_354;
		L_354 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_346, L_350)), L_353)), ((int32_t)1859775393))), ((int32_t)11), NULL);
		V_2 = L_354;
		int32_t L_355 = V_1;
		int32_t L_356 = V_2;
		int32_t L_357 = V_3;
		int32_t L_358 = V_0;
		int32_t L_359;
		L_359 = MD4Digest_H_m8D92EDD73A791E815AB49BBC2133BF56B44B4DBE(__this, L_356, L_357, L_358, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_360 = __this->___X_21;
		int32_t L_361 = ((int32_t)14);
		int32_t L_362 = (L_360)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_361));
		int32_t L_363;
		L_363 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_355, L_359)), L_362)), ((int32_t)1859775393))), ((int32_t)15), NULL);
		V_1 = L_363;
		int32_t L_364 = V_0;
		int32_t L_365 = V_1;
		int32_t L_366 = V_2;
		int32_t L_367 = V_3;
		int32_t L_368;
		L_368 = MD4Digest_H_m8D92EDD73A791E815AB49BBC2133BF56B44B4DBE(__this, L_365, L_366, L_367, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_369 = __this->___X_21;
		int32_t L_370 = 1;
		int32_t L_371 = (L_369)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_370));
		int32_t L_372;
		L_372 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_364, L_368)), L_371)), ((int32_t)1859775393))), 3, NULL);
		V_0 = L_372;
		int32_t L_373 = V_3;
		int32_t L_374 = V_0;
		int32_t L_375 = V_1;
		int32_t L_376 = V_2;
		int32_t L_377;
		L_377 = MD4Digest_H_m8D92EDD73A791E815AB49BBC2133BF56B44B4DBE(__this, L_374, L_375, L_376, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_378 = __this->___X_21;
		int32_t L_379 = ((int32_t)9);
		int32_t L_380 = (L_378)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_379));
		int32_t L_381;
		L_381 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_373, L_377)), L_380)), ((int32_t)1859775393))), ((int32_t)9), NULL);
		V_3 = L_381;
		int32_t L_382 = V_2;
		int32_t L_383 = V_3;
		int32_t L_384 = V_0;
		int32_t L_385 = V_1;
		int32_t L_386;
		L_386 = MD4Digest_H_m8D92EDD73A791E815AB49BBC2133BF56B44B4DBE(__this, L_383, L_384, L_385, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_387 = __this->___X_21;
		int32_t L_388 = 5;
		int32_t L_389 = (L_387)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_388));
		int32_t L_390;
		L_390 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_382, L_386)), L_389)), ((int32_t)1859775393))), ((int32_t)11), NULL);
		V_2 = L_390;
		int32_t L_391 = V_1;
		int32_t L_392 = V_2;
		int32_t L_393 = V_3;
		int32_t L_394 = V_0;
		int32_t L_395;
		L_395 = MD4Digest_H_m8D92EDD73A791E815AB49BBC2133BF56B44B4DBE(__this, L_392, L_393, L_394, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_396 = __this->___X_21;
		int32_t L_397 = ((int32_t)13);
		int32_t L_398 = (L_396)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_397));
		int32_t L_399;
		L_399 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_391, L_395)), L_398)), ((int32_t)1859775393))), ((int32_t)15), NULL);
		V_1 = L_399;
		int32_t L_400 = V_0;
		int32_t L_401 = V_1;
		int32_t L_402 = V_2;
		int32_t L_403 = V_3;
		int32_t L_404;
		L_404 = MD4Digest_H_m8D92EDD73A791E815AB49BBC2133BF56B44B4DBE(__this, L_401, L_402, L_403, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_405 = __this->___X_21;
		int32_t L_406 = 3;
		int32_t L_407 = (L_405)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_406));
		int32_t L_408;
		L_408 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_400, L_404)), L_407)), ((int32_t)1859775393))), 3, NULL);
		V_0 = L_408;
		int32_t L_409 = V_3;
		int32_t L_410 = V_0;
		int32_t L_411 = V_1;
		int32_t L_412 = V_2;
		int32_t L_413;
		L_413 = MD4Digest_H_m8D92EDD73A791E815AB49BBC2133BF56B44B4DBE(__this, L_410, L_411, L_412, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_414 = __this->___X_21;
		int32_t L_415 = ((int32_t)11);
		int32_t L_416 = (L_414)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_415));
		int32_t L_417;
		L_417 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_409, L_413)), L_416)), ((int32_t)1859775393))), ((int32_t)9), NULL);
		V_3 = L_417;
		int32_t L_418 = V_2;
		int32_t L_419 = V_3;
		int32_t L_420 = V_0;
		int32_t L_421 = V_1;
		int32_t L_422;
		L_422 = MD4Digest_H_m8D92EDD73A791E815AB49BBC2133BF56B44B4DBE(__this, L_419, L_420, L_421, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_423 = __this->___X_21;
		int32_t L_424 = 7;
		int32_t L_425 = (L_423)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_424));
		int32_t L_426;
		L_426 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_418, L_422)), L_425)), ((int32_t)1859775393))), ((int32_t)11), NULL);
		V_2 = L_426;
		int32_t L_427 = V_1;
		int32_t L_428 = V_2;
		int32_t L_429 = V_3;
		int32_t L_430 = V_0;
		int32_t L_431;
		L_431 = MD4Digest_H_m8D92EDD73A791E815AB49BBC2133BF56B44B4DBE(__this, L_428, L_429, L_430, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_432 = __this->___X_21;
		int32_t L_433 = ((int32_t)15);
		int32_t L_434 = (L_432)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_433));
		int32_t L_435;
		L_435 = MD4Digest_RotateLeft_m53CFB68D804F3F1CFE8FF1C12CA1467BBB769F7C(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_427, L_431)), L_434)), ((int32_t)1859775393))), ((int32_t)15), NULL);
		V_1 = L_435;
		int32_t L_436 = __this->___H1_17;
		int32_t L_437 = V_0;
		__this->___H1_17 = ((int32_t)il2cpp_codegen_add(L_436, L_437));
		int32_t L_438 = __this->___H2_18;
		int32_t L_439 = V_1;
		__this->___H2_18 = ((int32_t)il2cpp_codegen_add(L_438, L_439));
		int32_t L_440 = __this->___H3_19;
		int32_t L_441 = V_2;
		__this->___H3_19 = ((int32_t)il2cpp_codegen_add(L_440, L_441));
		int32_t L_442 = __this->___H4_20;
		int32_t L_443 = V_3;
		__this->___H4_20 = ((int32_t)il2cpp_codegen_add(L_442, L_443));
		__this->___xOff_22 = 0;
		V_4 = 0;
		goto IL_06a1;
	}

IL_0691:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_444 = __this->___X_21;
		int32_t L_445 = V_4;
		(L_444)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_445), (int32_t)0);
		int32_t L_446 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_446, 1));
	}

IL_06a1:
	{
		int32_t L_447 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_448 = __this->___X_21;
		if ((!(((uint32_t)L_447) == ((uint32_t)((int32_t)(((RuntimeArray*)L_448)->max_length))))))
		{
			goto IL_0691;
		}
	}
	{
		return;
	}
}
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.MD4Digest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MD4Digest_Copy_m704A0F2F5B870EF89BDFC6128F24ED322FEF15FE (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* L_0 = (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD*)il2cpp_codegen_object_new(MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD_il2cpp_TypeInfo_var);
		MD4Digest__ctor_mD292CB65819BFE65F535DA679B05A8DC7623A9CB(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD4Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD4Digest_Reset_mF1FD69937A775AE6D5C7A3801431AA78EF4E88B2 (MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___other0;
		V_0 = ((MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD*)CastclassClass((RuntimeObject*)L_0, MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD_il2cpp_TypeInfo_var));
		MD4Digest_t1A7461895B55AE1A2321423DF6F66CB58F90EDBD* L_1 = V_0;
		MD4Digest_CopyIn_mCCBCCCDE55EC2432E0BA942F92D05D5921F45DCD(__this, L_1, NULL);
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
// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Digest__ctor_m70125C1753B1E06B3F1F9609BF7432C693F2856A (MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___X_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___X_9), (void*)L_0);
		GeneralDigest__ctor_m67E803310E7744886EF893C646D312868DCCD1FD(__this, NULL);
		VirtualActionInvoker0::Invoke(13 /* System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::Reset() */, __this);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::.ctor(Org.BouncyCastle.Crypto.Digests.MD5Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Digest__ctor_m5D403EFCDA6AF3D22FB9F82E1FA5A23ADEC8F709 (MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* __this, MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___X_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___X_9), (void*)L_0);
		MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* L_1 = ___t0;
		GeneralDigest__ctor_m87B9D3E5C08DBEC58227C8469EEA9EC47F6A84F7(__this, L_1, NULL);
		MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* L_2 = ___t0;
		MD5Digest_CopyIn_m091743A9BC82B743492973AFC98F6F997B6FBFFC(__this, L_2, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.MD5Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Digest_CopyIn_m091743A9BC82B743492973AFC98F6F997B6FBFFC (MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* __this, MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* ___t0, const RuntimeMethod* method) 
{
	{
		MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* L_0 = ___t0;
		GeneralDigest_CopyIn_mB0E17BFA6B0BC2D95FE8B64B7837E63CD4EDF728(__this, L_0, NULL);
		MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* L_1 = ___t0;
		uint32_t L_2 = L_1->___H1_5;
		__this->___H1_5 = L_2;
		MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* L_3 = ___t0;
		uint32_t L_4 = L_3->___H2_6;
		__this->___H2_6 = L_4;
		MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* L_5 = ___t0;
		uint32_t L_6 = L_5->___H3_7;
		__this->___H3_7 = L_6;
		MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* L_7 = ___t0;
		uint32_t L_8 = L_7->___H4_8;
		__this->___H4_8 = L_8;
		MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* L_9 = ___t0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___X_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = __this->___X_9;
		MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* L_12 = ___t0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12->___X_9;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_10, 0, (RuntimeArray*)L_11, 0, ((int32_t)(((RuntimeArray*)L_13)->max_length)), NULL);
		MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* L_14 = ___t0;
		int32_t L_15 = L_14->___xOff_10;
		__this->___xOff_10 = L_15;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Digests.MD5Digest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MD5Digest_get_AlgorithmName_mC252B326C3F4B578896AB2E59A16173CED528634 (MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE0379382C2810C1AED5C5B0021E7B8221741E17);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralCE0379382C2810C1AED5C5B0021E7B8221741E17;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MD5Digest_GetDigestSize_m98EA9A0BF9F3BAD2D8BCDFD9B66CAB9ACD3001F6 (MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::ProcessWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Digest_ProcessWord_m5D8E8EF3179CEE0AA179178FE4A8B49FF8D624E9 (MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___X_9;
		int32_t L_1 = __this->___xOff_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		uint32_t L_4;
		L_4 = Pack_LE_To_UInt32_m523CAAB94AE6FBA378E8DF774ADAC6195FAEAE42(L_2, L_3, NULL);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_4);
		int32_t L_5 = __this->___xOff_10;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		V_0 = L_6;
		__this->___xOff_10 = L_6;
		int32_t L_7 = V_0;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_002f;
		}
	}
	{
		VirtualActionInvoker0::Invoke(16 /* System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessBlock() */, __this);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::ProcessLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Digest_ProcessLength_mDFEA0F7C6D780D52AE8476D226932761AE1CD30D (MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* __this, int64_t ___bitLength0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___xOff_10;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)14))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = __this->___xOff_10;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_001e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___X_9;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)0);
	}

IL_001e:
	{
		VirtualActionInvoker0::Invoke(16 /* System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessBlock() */, __this);
	}

IL_0024:
	{
		int32_t L_3 = __this->___xOff_10;
		V_0 = L_3;
		goto IL_003a;
	}

IL_002d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->___X_9;
		int32_t L_5 = V_0;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (uint32_t)0);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_003a:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)14))))
		{
			goto IL_002d;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = __this->___X_9;
		int64_t L_9 = ___bitLength0;
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)((int32_t)(uint32_t)L_9));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->___X_9;
		int64_t L_11 = ___bitLength0;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)((int32_t)(uint32_t)((int64_t)((uint64_t)L_11>>((int32_t)32)))));
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.MD5Digest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MD5Digest_DoFinal_m53D27CFB5D384A3BB0A4848BCE5D2C2B67CEBFE4 (MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		GeneralDigest_Finish_m9D444CDCBC760932CD5318A831449973B1FC226E(__this, NULL);
		uint32_t L_0 = __this->___H1_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___output0;
		int32_t L_2 = ___outOff1;
		Pack_UInt32_To_LE_mA6C2D23F4AFF959717160ABC23B31EC76F53877E(L_0, L_1, L_2, NULL);
		uint32_t L_3 = __this->___H2_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output0;
		int32_t L_5 = ___outOff1;
		Pack_UInt32_To_LE_mA6C2D23F4AFF959717160ABC23B31EC76F53877E(L_3, L_4, ((int32_t)il2cpp_codegen_add(L_5, 4)), NULL);
		uint32_t L_6 = __this->___H3_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___output0;
		int32_t L_8 = ___outOff1;
		Pack_UInt32_To_LE_mA6C2D23F4AFF959717160ABC23B31EC76F53877E(L_6, L_7, ((int32_t)il2cpp_codegen_add(L_8, 8)), NULL);
		uint32_t L_9 = __this->___H4_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___output0;
		int32_t L_11 = ___outOff1;
		Pack_UInt32_To_LE_mA6C2D23F4AFF959717160ABC23B31EC76F53877E(L_9, L_10, ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)12))), NULL);
		VirtualActionInvoker0::Invoke(13 /* System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::Reset() */, __this);
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Digest_Reset_m6691EEEA5712AA93D38C840DED2DA3963C38D1E2 (MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		GeneralDigest_Reset_m1CDCFA775518A1FBB227FCB0673015400D6FF246(__this, NULL);
		__this->___H1_5 = ((int32_t)1732584193);
		__this->___H2_6 = ((int32_t)-271733879);
		__this->___H3_7 = ((int32_t)-1732584194);
		__this->___H4_8 = ((int32_t)271733878);
		__this->___xOff_10 = 0;
		V_0 = 0;
		goto IL_004a;
	}

IL_003d:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = __this->___X_9;
		int32_t L_1 = V_0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)0);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_004a:
	{
		int32_t L_3 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = __this->___X_9;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_003d;
		}
	}
	{
		return;
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Digests.MD5Digest::RotateLeft(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234 (uint32_t ___x0, int32_t ___n1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___x0;
		int32_t L_1 = ___n1;
		uint32_t L_2 = ___x0;
		int32_t L_3 = ___n1;
		return ((int32_t)(((int32_t)((int32_t)L_0<<((int32_t)(L_1&((int32_t)31)))))|((int32_t)((uint32_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Digests.MD5Digest::F(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MD5Digest_F_m92BD0AC2F9931BFFF1AA640EDFC7C94015C3D08D (uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___u0;
		uint32_t L_1 = ___v1;
		uint32_t L_2 = ___u0;
		uint32_t L_3 = ___w2;
		return ((int32_t)(((int32_t)((int32_t)L_0&(int32_t)L_1))|((int32_t)((int32_t)((~L_2))&(int32_t)L_3))));
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Digests.MD5Digest::G(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MD5Digest_G_m91E3B8C58D304A73BEE2964F7EA843F14D9E68A2 (uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___u0;
		uint32_t L_1 = ___w2;
		uint32_t L_2 = ___v1;
		uint32_t L_3 = ___w2;
		return ((int32_t)(((int32_t)((int32_t)L_0&(int32_t)L_1))|((int32_t)((int32_t)L_2&(int32_t)((~L_3))))));
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Digests.MD5Digest::H(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MD5Digest_H_m9A2281C45EF892B8E0573E51DF909EA8E922BAB4 (uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___u0;
		uint32_t L_1 = ___v1;
		uint32_t L_2 = ___w2;
		return ((int32_t)(((int32_t)((int32_t)L_0^(int32_t)L_1))^(int32_t)L_2));
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Digests.MD5Digest::K(System.UInt32,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MD5Digest_K_mA6A1A627CC947060CDAB030536AE17AC0D9183F5 (uint32_t ___u0, uint32_t ___v1, uint32_t ___w2, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___v1;
		uint32_t L_1 = ___u0;
		uint32_t L_2 = ___w2;
		return ((int32_t)((int32_t)L_0^((int32_t)((int32_t)L_1|(int32_t)((~L_2))))));
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::ProcessBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Digest_ProcessBlock_mA59921E80E1AB455F00285A97B02B2F956AF1898 (MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		uint32_t L_0 = __this->___H1_5;
		V_0 = L_0;
		uint32_t L_1 = __this->___H2_6;
		V_1 = L_1;
		uint32_t L_2 = __this->___H3_7;
		V_2 = L_2;
		uint32_t L_3 = __this->___H4_8;
		V_3 = L_3;
		uint32_t L_4 = V_0;
		uint32_t L_5 = V_1;
		uint32_t L_6 = V_2;
		uint32_t L_7 = V_3;
		il2cpp_codegen_runtime_class_init_inline(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var);
		uint32_t L_8;
		L_8 = MD5Digest_F_m92BD0AC2F9931BFFF1AA640EDFC7C94015C3D08D(L_5, L_6, L_7, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = __this->___X_9;
		int32_t L_10 = 0;
		uint32_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S11_11;
		uint32_t L_13;
		L_13 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_8)), (int32_t)L_11)), ((int32_t)-680876936))), L_12, NULL);
		uint32_t L_14 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14));
		uint32_t L_15 = V_3;
		uint32_t L_16 = V_0;
		uint32_t L_17 = V_1;
		uint32_t L_18 = V_2;
		uint32_t L_19;
		L_19 = MD5Digest_F_m92BD0AC2F9931BFFF1AA640EDFC7C94015C3D08D(L_16, L_17, L_18, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = __this->___X_9;
		int32_t L_21 = 1;
		uint32_t L_22 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S12_12;
		uint32_t L_24;
		L_24 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_19)), (int32_t)L_22)), ((int32_t)-389564586))), L_23, NULL);
		uint32_t L_25 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25));
		uint32_t L_26 = V_2;
		uint32_t L_27 = V_3;
		uint32_t L_28 = V_0;
		uint32_t L_29 = V_1;
		uint32_t L_30;
		L_30 = MD5Digest_F_m92BD0AC2F9931BFFF1AA640EDFC7C94015C3D08D(L_27, L_28, L_29, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = __this->___X_9;
		int32_t L_32 = 2;
		uint32_t L_33 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S13_13;
		uint32_t L_35;
		L_35 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)L_30)), (int32_t)L_33)), ((int32_t)606105819))), L_34, NULL);
		uint32_t L_36 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_36));
		uint32_t L_37 = V_1;
		uint32_t L_38 = V_2;
		uint32_t L_39 = V_3;
		uint32_t L_40 = V_0;
		uint32_t L_41;
		L_41 = MD5Digest_F_m92BD0AC2F9931BFFF1AA640EDFC7C94015C3D08D(L_38, L_39, L_40, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = __this->___X_9;
		int32_t L_43 = 3;
		uint32_t L_44 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		int32_t L_45 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S14_14;
		uint32_t L_46;
		L_46 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_41)), (int32_t)L_44)), ((int32_t)-1044525330))), L_45, NULL);
		uint32_t L_47 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)L_47));
		uint32_t L_48 = V_0;
		uint32_t L_49 = V_1;
		uint32_t L_50 = V_2;
		uint32_t L_51 = V_3;
		uint32_t L_52;
		L_52 = MD5Digest_F_m92BD0AC2F9931BFFF1AA640EDFC7C94015C3D08D(L_49, L_50, L_51, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = __this->___X_9;
		int32_t L_54 = 4;
		uint32_t L_55 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		int32_t L_56 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S11_11;
		uint32_t L_57;
		L_57 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)L_52)), (int32_t)L_55)), ((int32_t)-176418897))), L_56, NULL);
		uint32_t L_58 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)L_58));
		uint32_t L_59 = V_3;
		uint32_t L_60 = V_0;
		uint32_t L_61 = V_1;
		uint32_t L_62 = V_2;
		uint32_t L_63;
		L_63 = MD5Digest_F_m92BD0AC2F9931BFFF1AA640EDFC7C94015C3D08D(L_60, L_61, L_62, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = __this->___X_9;
		int32_t L_65 = 5;
		uint32_t L_66 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		int32_t L_67 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S12_12;
		uint32_t L_68;
		L_68 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)L_63)), (int32_t)L_66)), ((int32_t)1200080426))), L_67, NULL);
		uint32_t L_69 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)L_69));
		uint32_t L_70 = V_2;
		uint32_t L_71 = V_3;
		uint32_t L_72 = V_0;
		uint32_t L_73 = V_1;
		uint32_t L_74;
		L_74 = MD5Digest_F_m92BD0AC2F9931BFFF1AA640EDFC7C94015C3D08D(L_71, L_72, L_73, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = __this->___X_9;
		int32_t L_76 = 6;
		uint32_t L_77 = (L_75)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		int32_t L_78 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S13_13;
		uint32_t L_79;
		L_79 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)L_74)), (int32_t)L_77)), ((int32_t)-1473231341))), L_78, NULL);
		uint32_t L_80 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)L_80));
		uint32_t L_81 = V_1;
		uint32_t L_82 = V_2;
		uint32_t L_83 = V_3;
		uint32_t L_84 = V_0;
		uint32_t L_85;
		L_85 = MD5Digest_F_m92BD0AC2F9931BFFF1AA640EDFC7C94015C3D08D(L_82, L_83, L_84, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = __this->___X_9;
		int32_t L_87 = 7;
		uint32_t L_88 = (L_86)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_87));
		int32_t L_89 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S14_14;
		uint32_t L_90;
		L_90 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_81, (int32_t)L_85)), (int32_t)L_88)), ((int32_t)-45705983))), L_89, NULL);
		uint32_t L_91 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, (int32_t)L_91));
		uint32_t L_92 = V_0;
		uint32_t L_93 = V_1;
		uint32_t L_94 = V_2;
		uint32_t L_95 = V_3;
		uint32_t L_96;
		L_96 = MD5Digest_F_m92BD0AC2F9931BFFF1AA640EDFC7C94015C3D08D(L_93, L_94, L_95, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_97 = __this->___X_9;
		int32_t L_98 = 8;
		uint32_t L_99 = (L_97)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_98));
		int32_t L_100 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S11_11;
		uint32_t L_101;
		L_101 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)L_96)), (int32_t)L_99)), ((int32_t)1770035416))), L_100, NULL);
		uint32_t L_102 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)L_102));
		uint32_t L_103 = V_3;
		uint32_t L_104 = V_0;
		uint32_t L_105 = V_1;
		uint32_t L_106 = V_2;
		uint32_t L_107;
		L_107 = MD5Digest_F_m92BD0AC2F9931BFFF1AA640EDFC7C94015C3D08D(L_104, L_105, L_106, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = __this->___X_9;
		int32_t L_109 = ((int32_t)9);
		uint32_t L_110 = (L_108)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_109));
		int32_t L_111 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S12_12;
		uint32_t L_112;
		L_112 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)L_107)), (int32_t)L_110)), ((int32_t)-1958414417))), L_111, NULL);
		uint32_t L_113 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)L_113));
		uint32_t L_114 = V_2;
		uint32_t L_115 = V_3;
		uint32_t L_116 = V_0;
		uint32_t L_117 = V_1;
		uint32_t L_118;
		L_118 = MD5Digest_F_m92BD0AC2F9931BFFF1AA640EDFC7C94015C3D08D(L_115, L_116, L_117, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_119 = __this->___X_9;
		int32_t L_120 = ((int32_t)10);
		uint32_t L_121 = (L_119)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_120));
		int32_t L_122 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S13_13;
		uint32_t L_123;
		L_123 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)L_118)), (int32_t)L_121)), ((int32_t)-42063))), L_122, NULL);
		uint32_t L_124 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_123, (int32_t)L_124));
		uint32_t L_125 = V_1;
		uint32_t L_126 = V_2;
		uint32_t L_127 = V_3;
		uint32_t L_128 = V_0;
		uint32_t L_129;
		L_129 = MD5Digest_F_m92BD0AC2F9931BFFF1AA640EDFC7C94015C3D08D(L_126, L_127, L_128, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_130 = __this->___X_9;
		int32_t L_131 = ((int32_t)11);
		uint32_t L_132 = (L_130)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_131));
		int32_t L_133 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S14_14;
		uint32_t L_134;
		L_134 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_125, (int32_t)L_129)), (int32_t)L_132)), ((int32_t)-1990404162))), L_133, NULL);
		uint32_t L_135 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_134, (int32_t)L_135));
		uint32_t L_136 = V_0;
		uint32_t L_137 = V_1;
		uint32_t L_138 = V_2;
		uint32_t L_139 = V_3;
		uint32_t L_140;
		L_140 = MD5Digest_F_m92BD0AC2F9931BFFF1AA640EDFC7C94015C3D08D(L_137, L_138, L_139, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = __this->___X_9;
		int32_t L_142 = ((int32_t)12);
		uint32_t L_143 = (L_141)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_142));
		int32_t L_144 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S11_11;
		uint32_t L_145;
		L_145 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)L_140)), (int32_t)L_143)), ((int32_t)1804603682))), L_144, NULL);
		uint32_t L_146 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_145, (int32_t)L_146));
		uint32_t L_147 = V_3;
		uint32_t L_148 = V_0;
		uint32_t L_149 = V_1;
		uint32_t L_150 = V_2;
		uint32_t L_151;
		L_151 = MD5Digest_F_m92BD0AC2F9931BFFF1AA640EDFC7C94015C3D08D(L_148, L_149, L_150, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_152 = __this->___X_9;
		int32_t L_153 = ((int32_t)13);
		uint32_t L_154 = (L_152)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_153));
		int32_t L_155 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S12_12;
		uint32_t L_156;
		L_156 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_147, (int32_t)L_151)), (int32_t)L_154)), ((int32_t)-40341101))), L_155, NULL);
		uint32_t L_157 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_156, (int32_t)L_157));
		uint32_t L_158 = V_2;
		uint32_t L_159 = V_3;
		uint32_t L_160 = V_0;
		uint32_t L_161 = V_1;
		uint32_t L_162;
		L_162 = MD5Digest_F_m92BD0AC2F9931BFFF1AA640EDFC7C94015C3D08D(L_159, L_160, L_161, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_163 = __this->___X_9;
		int32_t L_164 = ((int32_t)14);
		uint32_t L_165 = (L_163)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_164));
		int32_t L_166 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S13_13;
		uint32_t L_167;
		L_167 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_158, (int32_t)L_162)), (int32_t)L_165)), ((int32_t)-1502002290))), L_166, NULL);
		uint32_t L_168 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_167, (int32_t)L_168));
		uint32_t L_169 = V_1;
		uint32_t L_170 = V_2;
		uint32_t L_171 = V_3;
		uint32_t L_172 = V_0;
		uint32_t L_173;
		L_173 = MD5Digest_F_m92BD0AC2F9931BFFF1AA640EDFC7C94015C3D08D(L_170, L_171, L_172, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_174 = __this->___X_9;
		int32_t L_175 = ((int32_t)15);
		uint32_t L_176 = (L_174)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_175));
		int32_t L_177 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S14_14;
		uint32_t L_178;
		L_178 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_169, (int32_t)L_173)), (int32_t)L_176)), ((int32_t)1236535329))), L_177, NULL);
		uint32_t L_179 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_178, (int32_t)L_179));
		uint32_t L_180 = V_0;
		uint32_t L_181 = V_1;
		uint32_t L_182 = V_2;
		uint32_t L_183 = V_3;
		uint32_t L_184;
		L_184 = MD5Digest_G_m91E3B8C58D304A73BEE2964F7EA843F14D9E68A2(L_181, L_182, L_183, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_185 = __this->___X_9;
		int32_t L_186 = 1;
		uint32_t L_187 = (L_185)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_186));
		int32_t L_188 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S21_15;
		uint32_t L_189;
		L_189 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)L_184)), (int32_t)L_187)), ((int32_t)-165796510))), L_188, NULL);
		uint32_t L_190 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_189, (int32_t)L_190));
		uint32_t L_191 = V_3;
		uint32_t L_192 = V_0;
		uint32_t L_193 = V_1;
		uint32_t L_194 = V_2;
		uint32_t L_195;
		L_195 = MD5Digest_G_m91E3B8C58D304A73BEE2964F7EA843F14D9E68A2(L_192, L_193, L_194, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_196 = __this->___X_9;
		int32_t L_197 = 6;
		uint32_t L_198 = (L_196)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_197));
		int32_t L_199 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S22_16;
		uint32_t L_200;
		L_200 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_191, (int32_t)L_195)), (int32_t)L_198)), ((int32_t)-1069501632))), L_199, NULL);
		uint32_t L_201 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_200, (int32_t)L_201));
		uint32_t L_202 = V_2;
		uint32_t L_203 = V_3;
		uint32_t L_204 = V_0;
		uint32_t L_205 = V_1;
		uint32_t L_206;
		L_206 = MD5Digest_G_m91E3B8C58D304A73BEE2964F7EA843F14D9E68A2(L_203, L_204, L_205, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_207 = __this->___X_9;
		int32_t L_208 = ((int32_t)11);
		uint32_t L_209 = (L_207)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_208));
		int32_t L_210 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S23_17;
		uint32_t L_211;
		L_211 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_202, (int32_t)L_206)), (int32_t)L_209)), ((int32_t)643717713))), L_210, NULL);
		uint32_t L_212 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_211, (int32_t)L_212));
		uint32_t L_213 = V_1;
		uint32_t L_214 = V_2;
		uint32_t L_215 = V_3;
		uint32_t L_216 = V_0;
		uint32_t L_217;
		L_217 = MD5Digest_G_m91E3B8C58D304A73BEE2964F7EA843F14D9E68A2(L_214, L_215, L_216, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_218 = __this->___X_9;
		int32_t L_219 = 0;
		uint32_t L_220 = (L_218)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_219));
		int32_t L_221 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S24_18;
		uint32_t L_222;
		L_222 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_213, (int32_t)L_217)), (int32_t)L_220)), ((int32_t)-373897302))), L_221, NULL);
		uint32_t L_223 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_222, (int32_t)L_223));
		uint32_t L_224 = V_0;
		uint32_t L_225 = V_1;
		uint32_t L_226 = V_2;
		uint32_t L_227 = V_3;
		uint32_t L_228;
		L_228 = MD5Digest_G_m91E3B8C58D304A73BEE2964F7EA843F14D9E68A2(L_225, L_226, L_227, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_229 = __this->___X_9;
		int32_t L_230 = 5;
		uint32_t L_231 = (L_229)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_230));
		int32_t L_232 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S21_15;
		uint32_t L_233;
		L_233 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_224, (int32_t)L_228)), (int32_t)L_231)), ((int32_t)-701558691))), L_232, NULL);
		uint32_t L_234 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_233, (int32_t)L_234));
		uint32_t L_235 = V_3;
		uint32_t L_236 = V_0;
		uint32_t L_237 = V_1;
		uint32_t L_238 = V_2;
		uint32_t L_239;
		L_239 = MD5Digest_G_m91E3B8C58D304A73BEE2964F7EA843F14D9E68A2(L_236, L_237, L_238, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_240 = __this->___X_9;
		int32_t L_241 = ((int32_t)10);
		uint32_t L_242 = (L_240)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_241));
		int32_t L_243 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S22_16;
		uint32_t L_244;
		L_244 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_235, (int32_t)L_239)), (int32_t)L_242)), ((int32_t)38016083))), L_243, NULL);
		uint32_t L_245 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_244, (int32_t)L_245));
		uint32_t L_246 = V_2;
		uint32_t L_247 = V_3;
		uint32_t L_248 = V_0;
		uint32_t L_249 = V_1;
		uint32_t L_250;
		L_250 = MD5Digest_G_m91E3B8C58D304A73BEE2964F7EA843F14D9E68A2(L_247, L_248, L_249, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_251 = __this->___X_9;
		int32_t L_252 = ((int32_t)15);
		uint32_t L_253 = (L_251)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_252));
		int32_t L_254 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S23_17;
		uint32_t L_255;
		L_255 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_246, (int32_t)L_250)), (int32_t)L_253)), ((int32_t)-660478335))), L_254, NULL);
		uint32_t L_256 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_255, (int32_t)L_256));
		uint32_t L_257 = V_1;
		uint32_t L_258 = V_2;
		uint32_t L_259 = V_3;
		uint32_t L_260 = V_0;
		uint32_t L_261;
		L_261 = MD5Digest_G_m91E3B8C58D304A73BEE2964F7EA843F14D9E68A2(L_258, L_259, L_260, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_262 = __this->___X_9;
		int32_t L_263 = 4;
		uint32_t L_264 = (L_262)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_263));
		int32_t L_265 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S24_18;
		uint32_t L_266;
		L_266 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_257, (int32_t)L_261)), (int32_t)L_264)), ((int32_t)-405537848))), L_265, NULL);
		uint32_t L_267 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_266, (int32_t)L_267));
		uint32_t L_268 = V_0;
		uint32_t L_269 = V_1;
		uint32_t L_270 = V_2;
		uint32_t L_271 = V_3;
		uint32_t L_272;
		L_272 = MD5Digest_G_m91E3B8C58D304A73BEE2964F7EA843F14D9E68A2(L_269, L_270, L_271, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_273 = __this->___X_9;
		int32_t L_274 = ((int32_t)9);
		uint32_t L_275 = (L_273)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_274));
		int32_t L_276 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S21_15;
		uint32_t L_277;
		L_277 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_268, (int32_t)L_272)), (int32_t)L_275)), ((int32_t)568446438))), L_276, NULL);
		uint32_t L_278 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_277, (int32_t)L_278));
		uint32_t L_279 = V_3;
		uint32_t L_280 = V_0;
		uint32_t L_281 = V_1;
		uint32_t L_282 = V_2;
		uint32_t L_283;
		L_283 = MD5Digest_G_m91E3B8C58D304A73BEE2964F7EA843F14D9E68A2(L_280, L_281, L_282, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_284 = __this->___X_9;
		int32_t L_285 = ((int32_t)14);
		uint32_t L_286 = (L_284)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_285));
		int32_t L_287 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S22_16;
		uint32_t L_288;
		L_288 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_279, (int32_t)L_283)), (int32_t)L_286)), ((int32_t)-1019803690))), L_287, NULL);
		uint32_t L_289 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_288, (int32_t)L_289));
		uint32_t L_290 = V_2;
		uint32_t L_291 = V_3;
		uint32_t L_292 = V_0;
		uint32_t L_293 = V_1;
		uint32_t L_294;
		L_294 = MD5Digest_G_m91E3B8C58D304A73BEE2964F7EA843F14D9E68A2(L_291, L_292, L_293, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_295 = __this->___X_9;
		int32_t L_296 = 3;
		uint32_t L_297 = (L_295)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_296));
		int32_t L_298 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S23_17;
		uint32_t L_299;
		L_299 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_290, (int32_t)L_294)), (int32_t)L_297)), ((int32_t)-187363961))), L_298, NULL);
		uint32_t L_300 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_299, (int32_t)L_300));
		uint32_t L_301 = V_1;
		uint32_t L_302 = V_2;
		uint32_t L_303 = V_3;
		uint32_t L_304 = V_0;
		uint32_t L_305;
		L_305 = MD5Digest_G_m91E3B8C58D304A73BEE2964F7EA843F14D9E68A2(L_302, L_303, L_304, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_306 = __this->___X_9;
		int32_t L_307 = 8;
		uint32_t L_308 = (L_306)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_307));
		int32_t L_309 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S24_18;
		uint32_t L_310;
		L_310 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_301, (int32_t)L_305)), (int32_t)L_308)), ((int32_t)1163531501))), L_309, NULL);
		uint32_t L_311 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_310, (int32_t)L_311));
		uint32_t L_312 = V_0;
		uint32_t L_313 = V_1;
		uint32_t L_314 = V_2;
		uint32_t L_315 = V_3;
		uint32_t L_316;
		L_316 = MD5Digest_G_m91E3B8C58D304A73BEE2964F7EA843F14D9E68A2(L_313, L_314, L_315, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_317 = __this->___X_9;
		int32_t L_318 = ((int32_t)13);
		uint32_t L_319 = (L_317)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_318));
		int32_t L_320 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S21_15;
		uint32_t L_321;
		L_321 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_312, (int32_t)L_316)), (int32_t)L_319)), ((int32_t)-1444681467))), L_320, NULL);
		uint32_t L_322 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_321, (int32_t)L_322));
		uint32_t L_323 = V_3;
		uint32_t L_324 = V_0;
		uint32_t L_325 = V_1;
		uint32_t L_326 = V_2;
		uint32_t L_327;
		L_327 = MD5Digest_G_m91E3B8C58D304A73BEE2964F7EA843F14D9E68A2(L_324, L_325, L_326, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_328 = __this->___X_9;
		int32_t L_329 = 2;
		uint32_t L_330 = (L_328)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_329));
		int32_t L_331 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S22_16;
		uint32_t L_332;
		L_332 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_323, (int32_t)L_327)), (int32_t)L_330)), ((int32_t)-51403784))), L_331, NULL);
		uint32_t L_333 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_332, (int32_t)L_333));
		uint32_t L_334 = V_2;
		uint32_t L_335 = V_3;
		uint32_t L_336 = V_0;
		uint32_t L_337 = V_1;
		uint32_t L_338;
		L_338 = MD5Digest_G_m91E3B8C58D304A73BEE2964F7EA843F14D9E68A2(L_335, L_336, L_337, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_339 = __this->___X_9;
		int32_t L_340 = 7;
		uint32_t L_341 = (L_339)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_340));
		int32_t L_342 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S23_17;
		uint32_t L_343;
		L_343 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_334, (int32_t)L_338)), (int32_t)L_341)), ((int32_t)1735328473))), L_342, NULL);
		uint32_t L_344 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_343, (int32_t)L_344));
		uint32_t L_345 = V_1;
		uint32_t L_346 = V_2;
		uint32_t L_347 = V_3;
		uint32_t L_348 = V_0;
		uint32_t L_349;
		L_349 = MD5Digest_G_m91E3B8C58D304A73BEE2964F7EA843F14D9E68A2(L_346, L_347, L_348, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_350 = __this->___X_9;
		int32_t L_351 = ((int32_t)12);
		uint32_t L_352 = (L_350)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_351));
		int32_t L_353 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S24_18;
		uint32_t L_354;
		L_354 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_345, (int32_t)L_349)), (int32_t)L_352)), ((int32_t)-1926607734))), L_353, NULL);
		uint32_t L_355 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_354, (int32_t)L_355));
		uint32_t L_356 = V_0;
		uint32_t L_357 = V_1;
		uint32_t L_358 = V_2;
		uint32_t L_359 = V_3;
		uint32_t L_360;
		L_360 = MD5Digest_H_m9A2281C45EF892B8E0573E51DF909EA8E922BAB4(L_357, L_358, L_359, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_361 = __this->___X_9;
		int32_t L_362 = 5;
		uint32_t L_363 = (L_361)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_362));
		int32_t L_364 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S31_19;
		uint32_t L_365;
		L_365 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_356, (int32_t)L_360)), (int32_t)L_363)), ((int32_t)-378558))), L_364, NULL);
		uint32_t L_366 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_365, (int32_t)L_366));
		uint32_t L_367 = V_3;
		uint32_t L_368 = V_0;
		uint32_t L_369 = V_1;
		uint32_t L_370 = V_2;
		uint32_t L_371;
		L_371 = MD5Digest_H_m9A2281C45EF892B8E0573E51DF909EA8E922BAB4(L_368, L_369, L_370, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_372 = __this->___X_9;
		int32_t L_373 = 8;
		uint32_t L_374 = (L_372)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_373));
		int32_t L_375 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S32_20;
		uint32_t L_376;
		L_376 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_367, (int32_t)L_371)), (int32_t)L_374)), ((int32_t)-2022574463))), L_375, NULL);
		uint32_t L_377 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_376, (int32_t)L_377));
		uint32_t L_378 = V_2;
		uint32_t L_379 = V_3;
		uint32_t L_380 = V_0;
		uint32_t L_381 = V_1;
		uint32_t L_382;
		L_382 = MD5Digest_H_m9A2281C45EF892B8E0573E51DF909EA8E922BAB4(L_379, L_380, L_381, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_383 = __this->___X_9;
		int32_t L_384 = ((int32_t)11);
		uint32_t L_385 = (L_383)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_384));
		int32_t L_386 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S33_21;
		uint32_t L_387;
		L_387 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_378, (int32_t)L_382)), (int32_t)L_385)), ((int32_t)1839030562))), L_386, NULL);
		uint32_t L_388 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_387, (int32_t)L_388));
		uint32_t L_389 = V_1;
		uint32_t L_390 = V_2;
		uint32_t L_391 = V_3;
		uint32_t L_392 = V_0;
		uint32_t L_393;
		L_393 = MD5Digest_H_m9A2281C45EF892B8E0573E51DF909EA8E922BAB4(L_390, L_391, L_392, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_394 = __this->___X_9;
		int32_t L_395 = ((int32_t)14);
		uint32_t L_396 = (L_394)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_395));
		int32_t L_397 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S34_22;
		uint32_t L_398;
		L_398 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_389, (int32_t)L_393)), (int32_t)L_396)), ((int32_t)-35309556))), L_397, NULL);
		uint32_t L_399 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_398, (int32_t)L_399));
		uint32_t L_400 = V_0;
		uint32_t L_401 = V_1;
		uint32_t L_402 = V_2;
		uint32_t L_403 = V_3;
		uint32_t L_404;
		L_404 = MD5Digest_H_m9A2281C45EF892B8E0573E51DF909EA8E922BAB4(L_401, L_402, L_403, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_405 = __this->___X_9;
		int32_t L_406 = 1;
		uint32_t L_407 = (L_405)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_406));
		int32_t L_408 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S31_19;
		uint32_t L_409;
		L_409 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_400, (int32_t)L_404)), (int32_t)L_407)), ((int32_t)-1530992060))), L_408, NULL);
		uint32_t L_410 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_409, (int32_t)L_410));
		uint32_t L_411 = V_3;
		uint32_t L_412 = V_0;
		uint32_t L_413 = V_1;
		uint32_t L_414 = V_2;
		uint32_t L_415;
		L_415 = MD5Digest_H_m9A2281C45EF892B8E0573E51DF909EA8E922BAB4(L_412, L_413, L_414, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_416 = __this->___X_9;
		int32_t L_417 = 4;
		uint32_t L_418 = (L_416)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_417));
		int32_t L_419 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S32_20;
		uint32_t L_420;
		L_420 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_411, (int32_t)L_415)), (int32_t)L_418)), ((int32_t)1272893353))), L_419, NULL);
		uint32_t L_421 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_420, (int32_t)L_421));
		uint32_t L_422 = V_2;
		uint32_t L_423 = V_3;
		uint32_t L_424 = V_0;
		uint32_t L_425 = V_1;
		uint32_t L_426;
		L_426 = MD5Digest_H_m9A2281C45EF892B8E0573E51DF909EA8E922BAB4(L_423, L_424, L_425, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_427 = __this->___X_9;
		int32_t L_428 = 7;
		uint32_t L_429 = (L_427)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_428));
		int32_t L_430 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S33_21;
		uint32_t L_431;
		L_431 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_422, (int32_t)L_426)), (int32_t)L_429)), ((int32_t)-155497632))), L_430, NULL);
		uint32_t L_432 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_431, (int32_t)L_432));
		uint32_t L_433 = V_1;
		uint32_t L_434 = V_2;
		uint32_t L_435 = V_3;
		uint32_t L_436 = V_0;
		uint32_t L_437;
		L_437 = MD5Digest_H_m9A2281C45EF892B8E0573E51DF909EA8E922BAB4(L_434, L_435, L_436, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_438 = __this->___X_9;
		int32_t L_439 = ((int32_t)10);
		uint32_t L_440 = (L_438)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_439));
		int32_t L_441 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S34_22;
		uint32_t L_442;
		L_442 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_433, (int32_t)L_437)), (int32_t)L_440)), ((int32_t)-1094730640))), L_441, NULL);
		uint32_t L_443 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_442, (int32_t)L_443));
		uint32_t L_444 = V_0;
		uint32_t L_445 = V_1;
		uint32_t L_446 = V_2;
		uint32_t L_447 = V_3;
		uint32_t L_448;
		L_448 = MD5Digest_H_m9A2281C45EF892B8E0573E51DF909EA8E922BAB4(L_445, L_446, L_447, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_449 = __this->___X_9;
		int32_t L_450 = ((int32_t)13);
		uint32_t L_451 = (L_449)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_450));
		int32_t L_452 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S31_19;
		uint32_t L_453;
		L_453 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_444, (int32_t)L_448)), (int32_t)L_451)), ((int32_t)681279174))), L_452, NULL);
		uint32_t L_454 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_453, (int32_t)L_454));
		uint32_t L_455 = V_3;
		uint32_t L_456 = V_0;
		uint32_t L_457 = V_1;
		uint32_t L_458 = V_2;
		uint32_t L_459;
		L_459 = MD5Digest_H_m9A2281C45EF892B8E0573E51DF909EA8E922BAB4(L_456, L_457, L_458, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_460 = __this->___X_9;
		int32_t L_461 = 0;
		uint32_t L_462 = (L_460)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_461));
		int32_t L_463 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S32_20;
		uint32_t L_464;
		L_464 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_455, (int32_t)L_459)), (int32_t)L_462)), ((int32_t)-358537222))), L_463, NULL);
		uint32_t L_465 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_464, (int32_t)L_465));
		uint32_t L_466 = V_2;
		uint32_t L_467 = V_3;
		uint32_t L_468 = V_0;
		uint32_t L_469 = V_1;
		uint32_t L_470;
		L_470 = MD5Digest_H_m9A2281C45EF892B8E0573E51DF909EA8E922BAB4(L_467, L_468, L_469, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_471 = __this->___X_9;
		int32_t L_472 = 3;
		uint32_t L_473 = (L_471)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_472));
		int32_t L_474 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S33_21;
		uint32_t L_475;
		L_475 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_466, (int32_t)L_470)), (int32_t)L_473)), ((int32_t)-722521979))), L_474, NULL);
		uint32_t L_476 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_475, (int32_t)L_476));
		uint32_t L_477 = V_1;
		uint32_t L_478 = V_2;
		uint32_t L_479 = V_3;
		uint32_t L_480 = V_0;
		uint32_t L_481;
		L_481 = MD5Digest_H_m9A2281C45EF892B8E0573E51DF909EA8E922BAB4(L_478, L_479, L_480, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_482 = __this->___X_9;
		int32_t L_483 = 6;
		uint32_t L_484 = (L_482)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_483));
		int32_t L_485 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S34_22;
		uint32_t L_486;
		L_486 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_477, (int32_t)L_481)), (int32_t)L_484)), ((int32_t)76029189))), L_485, NULL);
		uint32_t L_487 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_486, (int32_t)L_487));
		uint32_t L_488 = V_0;
		uint32_t L_489 = V_1;
		uint32_t L_490 = V_2;
		uint32_t L_491 = V_3;
		uint32_t L_492;
		L_492 = MD5Digest_H_m9A2281C45EF892B8E0573E51DF909EA8E922BAB4(L_489, L_490, L_491, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_493 = __this->___X_9;
		int32_t L_494 = ((int32_t)9);
		uint32_t L_495 = (L_493)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_494));
		int32_t L_496 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S31_19;
		uint32_t L_497;
		L_497 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_488, (int32_t)L_492)), (int32_t)L_495)), ((int32_t)-640364487))), L_496, NULL);
		uint32_t L_498 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_497, (int32_t)L_498));
		uint32_t L_499 = V_3;
		uint32_t L_500 = V_0;
		uint32_t L_501 = V_1;
		uint32_t L_502 = V_2;
		uint32_t L_503;
		L_503 = MD5Digest_H_m9A2281C45EF892B8E0573E51DF909EA8E922BAB4(L_500, L_501, L_502, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_504 = __this->___X_9;
		int32_t L_505 = ((int32_t)12);
		uint32_t L_506 = (L_504)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_505));
		int32_t L_507 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S32_20;
		uint32_t L_508;
		L_508 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_499, (int32_t)L_503)), (int32_t)L_506)), ((int32_t)-421815835))), L_507, NULL);
		uint32_t L_509 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_508, (int32_t)L_509));
		uint32_t L_510 = V_2;
		uint32_t L_511 = V_3;
		uint32_t L_512 = V_0;
		uint32_t L_513 = V_1;
		uint32_t L_514;
		L_514 = MD5Digest_H_m9A2281C45EF892B8E0573E51DF909EA8E922BAB4(L_511, L_512, L_513, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_515 = __this->___X_9;
		int32_t L_516 = ((int32_t)15);
		uint32_t L_517 = (L_515)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_516));
		int32_t L_518 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S33_21;
		uint32_t L_519;
		L_519 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_510, (int32_t)L_514)), (int32_t)L_517)), ((int32_t)530742520))), L_518, NULL);
		uint32_t L_520 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_519, (int32_t)L_520));
		uint32_t L_521 = V_1;
		uint32_t L_522 = V_2;
		uint32_t L_523 = V_3;
		uint32_t L_524 = V_0;
		uint32_t L_525;
		L_525 = MD5Digest_H_m9A2281C45EF892B8E0573E51DF909EA8E922BAB4(L_522, L_523, L_524, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_526 = __this->___X_9;
		int32_t L_527 = 2;
		uint32_t L_528 = (L_526)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_527));
		int32_t L_529 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S34_22;
		uint32_t L_530;
		L_530 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_521, (int32_t)L_525)), (int32_t)L_528)), ((int32_t)-995338651))), L_529, NULL);
		uint32_t L_531 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_530, (int32_t)L_531));
		uint32_t L_532 = V_0;
		uint32_t L_533 = V_1;
		uint32_t L_534 = V_2;
		uint32_t L_535 = V_3;
		uint32_t L_536;
		L_536 = MD5Digest_K_mA6A1A627CC947060CDAB030536AE17AC0D9183F5(L_533, L_534, L_535, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_537 = __this->___X_9;
		int32_t L_538 = 0;
		uint32_t L_539 = (L_537)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_538));
		int32_t L_540 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S41_23;
		uint32_t L_541;
		L_541 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_532, (int32_t)L_536)), (int32_t)L_539)), ((int32_t)-198630844))), L_540, NULL);
		uint32_t L_542 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_541, (int32_t)L_542));
		uint32_t L_543 = V_3;
		uint32_t L_544 = V_0;
		uint32_t L_545 = V_1;
		uint32_t L_546 = V_2;
		uint32_t L_547;
		L_547 = MD5Digest_K_mA6A1A627CC947060CDAB030536AE17AC0D9183F5(L_544, L_545, L_546, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_548 = __this->___X_9;
		int32_t L_549 = 7;
		uint32_t L_550 = (L_548)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_549));
		int32_t L_551 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S42_24;
		uint32_t L_552;
		L_552 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_543, (int32_t)L_547)), (int32_t)L_550)), ((int32_t)1126891415))), L_551, NULL);
		uint32_t L_553 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_552, (int32_t)L_553));
		uint32_t L_554 = V_2;
		uint32_t L_555 = V_3;
		uint32_t L_556 = V_0;
		uint32_t L_557 = V_1;
		uint32_t L_558;
		L_558 = MD5Digest_K_mA6A1A627CC947060CDAB030536AE17AC0D9183F5(L_555, L_556, L_557, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_559 = __this->___X_9;
		int32_t L_560 = ((int32_t)14);
		uint32_t L_561 = (L_559)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_560));
		int32_t L_562 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S43_25;
		uint32_t L_563;
		L_563 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_554, (int32_t)L_558)), (int32_t)L_561)), ((int32_t)-1416354905))), L_562, NULL);
		uint32_t L_564 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_563, (int32_t)L_564));
		uint32_t L_565 = V_1;
		uint32_t L_566 = V_2;
		uint32_t L_567 = V_3;
		uint32_t L_568 = V_0;
		uint32_t L_569;
		L_569 = MD5Digest_K_mA6A1A627CC947060CDAB030536AE17AC0D9183F5(L_566, L_567, L_568, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_570 = __this->___X_9;
		int32_t L_571 = 5;
		uint32_t L_572 = (L_570)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_571));
		int32_t L_573 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S44_26;
		uint32_t L_574;
		L_574 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_565, (int32_t)L_569)), (int32_t)L_572)), ((int32_t)-57434055))), L_573, NULL);
		uint32_t L_575 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_574, (int32_t)L_575));
		uint32_t L_576 = V_0;
		uint32_t L_577 = V_1;
		uint32_t L_578 = V_2;
		uint32_t L_579 = V_3;
		uint32_t L_580;
		L_580 = MD5Digest_K_mA6A1A627CC947060CDAB030536AE17AC0D9183F5(L_577, L_578, L_579, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_581 = __this->___X_9;
		int32_t L_582 = ((int32_t)12);
		uint32_t L_583 = (L_581)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_582));
		int32_t L_584 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S41_23;
		uint32_t L_585;
		L_585 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_576, (int32_t)L_580)), (int32_t)L_583)), ((int32_t)1700485571))), L_584, NULL);
		uint32_t L_586 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_585, (int32_t)L_586));
		uint32_t L_587 = V_3;
		uint32_t L_588 = V_0;
		uint32_t L_589 = V_1;
		uint32_t L_590 = V_2;
		uint32_t L_591;
		L_591 = MD5Digest_K_mA6A1A627CC947060CDAB030536AE17AC0D9183F5(L_588, L_589, L_590, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_592 = __this->___X_9;
		int32_t L_593 = 3;
		uint32_t L_594 = (L_592)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_593));
		int32_t L_595 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S42_24;
		uint32_t L_596;
		L_596 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_587, (int32_t)L_591)), (int32_t)L_594)), ((int32_t)-1894986606))), L_595, NULL);
		uint32_t L_597 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_596, (int32_t)L_597));
		uint32_t L_598 = V_2;
		uint32_t L_599 = V_3;
		uint32_t L_600 = V_0;
		uint32_t L_601 = V_1;
		uint32_t L_602;
		L_602 = MD5Digest_K_mA6A1A627CC947060CDAB030536AE17AC0D9183F5(L_599, L_600, L_601, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_603 = __this->___X_9;
		int32_t L_604 = ((int32_t)10);
		uint32_t L_605 = (L_603)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_604));
		int32_t L_606 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S43_25;
		uint32_t L_607;
		L_607 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_598, (int32_t)L_602)), (int32_t)L_605)), ((int32_t)-1051523))), L_606, NULL);
		uint32_t L_608 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_607, (int32_t)L_608));
		uint32_t L_609 = V_1;
		uint32_t L_610 = V_2;
		uint32_t L_611 = V_3;
		uint32_t L_612 = V_0;
		uint32_t L_613;
		L_613 = MD5Digest_K_mA6A1A627CC947060CDAB030536AE17AC0D9183F5(L_610, L_611, L_612, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_614 = __this->___X_9;
		int32_t L_615 = 1;
		uint32_t L_616 = (L_614)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_615));
		int32_t L_617 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S44_26;
		uint32_t L_618;
		L_618 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_609, (int32_t)L_613)), (int32_t)L_616)), ((int32_t)-2054922799))), L_617, NULL);
		uint32_t L_619 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_618, (int32_t)L_619));
		uint32_t L_620 = V_0;
		uint32_t L_621 = V_1;
		uint32_t L_622 = V_2;
		uint32_t L_623 = V_3;
		uint32_t L_624;
		L_624 = MD5Digest_K_mA6A1A627CC947060CDAB030536AE17AC0D9183F5(L_621, L_622, L_623, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_625 = __this->___X_9;
		int32_t L_626 = 8;
		uint32_t L_627 = (L_625)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_626));
		int32_t L_628 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S41_23;
		uint32_t L_629;
		L_629 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_620, (int32_t)L_624)), (int32_t)L_627)), ((int32_t)1873313359))), L_628, NULL);
		uint32_t L_630 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_629, (int32_t)L_630));
		uint32_t L_631 = V_3;
		uint32_t L_632 = V_0;
		uint32_t L_633 = V_1;
		uint32_t L_634 = V_2;
		uint32_t L_635;
		L_635 = MD5Digest_K_mA6A1A627CC947060CDAB030536AE17AC0D9183F5(L_632, L_633, L_634, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_636 = __this->___X_9;
		int32_t L_637 = ((int32_t)15);
		uint32_t L_638 = (L_636)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_637));
		int32_t L_639 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S42_24;
		uint32_t L_640;
		L_640 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_631, (int32_t)L_635)), (int32_t)L_638)), ((int32_t)-30611744))), L_639, NULL);
		uint32_t L_641 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_640, (int32_t)L_641));
		uint32_t L_642 = V_2;
		uint32_t L_643 = V_3;
		uint32_t L_644 = V_0;
		uint32_t L_645 = V_1;
		uint32_t L_646;
		L_646 = MD5Digest_K_mA6A1A627CC947060CDAB030536AE17AC0D9183F5(L_643, L_644, L_645, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_647 = __this->___X_9;
		int32_t L_648 = 6;
		uint32_t L_649 = (L_647)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_648));
		int32_t L_650 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S43_25;
		uint32_t L_651;
		L_651 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_642, (int32_t)L_646)), (int32_t)L_649)), ((int32_t)-1560198380))), L_650, NULL);
		uint32_t L_652 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_651, (int32_t)L_652));
		uint32_t L_653 = V_1;
		uint32_t L_654 = V_2;
		uint32_t L_655 = V_3;
		uint32_t L_656 = V_0;
		uint32_t L_657;
		L_657 = MD5Digest_K_mA6A1A627CC947060CDAB030536AE17AC0D9183F5(L_654, L_655, L_656, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_658 = __this->___X_9;
		int32_t L_659 = ((int32_t)13);
		uint32_t L_660 = (L_658)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_659));
		int32_t L_661 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S44_26;
		uint32_t L_662;
		L_662 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_653, (int32_t)L_657)), (int32_t)L_660)), ((int32_t)1309151649))), L_661, NULL);
		uint32_t L_663 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_662, (int32_t)L_663));
		uint32_t L_664 = V_0;
		uint32_t L_665 = V_1;
		uint32_t L_666 = V_2;
		uint32_t L_667 = V_3;
		uint32_t L_668;
		L_668 = MD5Digest_K_mA6A1A627CC947060CDAB030536AE17AC0D9183F5(L_665, L_666, L_667, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_669 = __this->___X_9;
		int32_t L_670 = 4;
		uint32_t L_671 = (L_669)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_670));
		int32_t L_672 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S41_23;
		uint32_t L_673;
		L_673 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_664, (int32_t)L_668)), (int32_t)L_671)), ((int32_t)-145523070))), L_672, NULL);
		uint32_t L_674 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_673, (int32_t)L_674));
		uint32_t L_675 = V_3;
		uint32_t L_676 = V_0;
		uint32_t L_677 = V_1;
		uint32_t L_678 = V_2;
		uint32_t L_679;
		L_679 = MD5Digest_K_mA6A1A627CC947060CDAB030536AE17AC0D9183F5(L_676, L_677, L_678, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_680 = __this->___X_9;
		int32_t L_681 = ((int32_t)11);
		uint32_t L_682 = (L_680)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_681));
		int32_t L_683 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S42_24;
		uint32_t L_684;
		L_684 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_675, (int32_t)L_679)), (int32_t)L_682)), ((int32_t)-1120210379))), L_683, NULL);
		uint32_t L_685 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_684, (int32_t)L_685));
		uint32_t L_686 = V_2;
		uint32_t L_687 = V_3;
		uint32_t L_688 = V_0;
		uint32_t L_689 = V_1;
		uint32_t L_690;
		L_690 = MD5Digest_K_mA6A1A627CC947060CDAB030536AE17AC0D9183F5(L_687, L_688, L_689, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_691 = __this->___X_9;
		int32_t L_692 = 2;
		uint32_t L_693 = (L_691)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_692));
		int32_t L_694 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S43_25;
		uint32_t L_695;
		L_695 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_686, (int32_t)L_690)), (int32_t)L_693)), ((int32_t)718787259))), L_694, NULL);
		uint32_t L_696 = V_3;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_695, (int32_t)L_696));
		uint32_t L_697 = V_1;
		uint32_t L_698 = V_2;
		uint32_t L_699 = V_3;
		uint32_t L_700 = V_0;
		uint32_t L_701;
		L_701 = MD5Digest_K_mA6A1A627CC947060CDAB030536AE17AC0D9183F5(L_698, L_699, L_700, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_702 = __this->___X_9;
		int32_t L_703 = ((int32_t)9);
		uint32_t L_704 = (L_702)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_703));
		int32_t L_705 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S44_26;
		uint32_t L_706;
		L_706 = MD5Digest_RotateLeft_m31657646CB08F6BD3860ABA9F555914A26BD4234(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_697, (int32_t)L_701)), (int32_t)L_704)), ((int32_t)-343485551))), L_705, NULL);
		uint32_t L_707 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_706, (int32_t)L_707));
		uint32_t L_708 = __this->___H1_5;
		uint32_t L_709 = V_0;
		__this->___H1_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_708, (int32_t)L_709));
		uint32_t L_710 = __this->___H2_6;
		uint32_t L_711 = V_1;
		__this->___H2_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_710, (int32_t)L_711));
		uint32_t L_712 = __this->___H3_7;
		uint32_t L_713 = V_2;
		__this->___H3_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_712, (int32_t)L_713));
		uint32_t L_714 = __this->___H4_8;
		uint32_t L_715 = V_3;
		__this->___H4_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_714, (int32_t)L_715));
		__this->___xOff_10 = 0;
		return;
	}
}
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.MD5Digest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MD5Digest_Copy_m766D7B924FB5C14A8923C9E42DA7CEA6FAE823D6 (MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* L_0 = (MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F*)il2cpp_codegen_object_new(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var);
		MD5Digest__ctor_m5D403EFCDA6AF3D22FB9F82E1FA5A23ADEC8F709(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Digest_Reset_mE26FE07FF8F8062D4D0E99ABFD39737E9DD572A2 (MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___other0;
		V_0 = ((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F*)CastclassClass((RuntimeObject*)L_0, MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var));
		MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F* L_1 = V_0;
		MD5Digest_CopyIn_m091743A9BC82B743492973AFC98F6F997B6FBFFC(__this, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.MD5Digest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5Digest__cctor_m2F603275934AEB6475DAFB36C294546065976D59 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S11_11 = 7;
		((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S12_12 = ((int32_t)12);
		((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S13_13 = ((int32_t)17);
		((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S14_14 = ((int32_t)22);
		((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S21_15 = 5;
		((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S22_16 = ((int32_t)9);
		((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S23_17 = ((int32_t)14);
		((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S24_18 = ((int32_t)20);
		((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S31_19 = 4;
		((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S32_20 = ((int32_t)11);
		((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S33_21 = ((int32_t)16);
		((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S34_22 = ((int32_t)23);
		((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S41_23 = 6;
		((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S42_24 = ((int32_t)10);
		((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S43_25 = ((int32_t)15);
		((MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_StaticFields*)il2cpp_codegen_static_fields_for(MD5Digest_t15313C2C6BC853D6E583FD93356B52927A68BC8F_il2cpp_TypeInfo_var))->___S44_26 = ((int32_t)21);
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
// System.Void Org.BouncyCastle.Crypto.Digests.NonMemoableDigest::.ctor(Org.BouncyCastle.Crypto.IDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonMemoableDigest__ctor_m22F6587ACAD15A2B4A16661AFC0E77646B0F6837 (NonMemoableDigest_t04F9BFBAAE58DA370AD49DAA391B6B01AE338BBA* __this, RuntimeObject* ___baseDigest0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___baseDigest0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3432BEFEC70FFAAEC3E17E139E849DC1F8251267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NonMemoableDigest__ctor_m22F6587ACAD15A2B4A16661AFC0E77646B0F6837_RuntimeMethod_var)));
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___baseDigest0;
		__this->___mBaseDigest_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mBaseDigest_0), (void*)L_2);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Digests.NonMemoableDigest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NonMemoableDigest_get_AlgorithmName_m228C828A97B4340969246229294526249B353C46 (NonMemoableDigest_t04F9BFBAAE58DA370AD49DAA391B6B01AE338BBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___mBaseDigest_0;
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IDigest::get_AlgorithmName() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.NonMemoableDigest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NonMemoableDigest_GetDigestSize_mDD2DC8ACA40C34A93896DFD9ADC3109723C3D679 (NonMemoableDigest_t04F9BFBAAE58DA370AD49DAA391B6B01AE338BBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___mBaseDigest_0;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::GetDigestSize() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.NonMemoableDigest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonMemoableDigest_Update_m06E9AF27BD53CA1A933FECD3CF93022FCC59663C (NonMemoableDigest_t04F9BFBAAE58DA370AD49DAA391B6B01AE338BBA* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___mBaseDigest_0;
		uint8_t L_1 = ___input0;
		InterfaceActionInvoker1< uint8_t >::Invoke(3 /* System.Void Org.BouncyCastle.Crypto.IDigest::Update(System.Byte) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.NonMemoableDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonMemoableDigest_BlockUpdate_m350C3BCB73539D7248533B591D69490C91F6976A (NonMemoableDigest_t04F9BFBAAE58DA370AD49DAA391B6B01AE338BBA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___len2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___mBaseDigest_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input0;
		int32_t L_2 = ___inOff1;
		int32_t L_3 = ___len2;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.NonMemoableDigest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NonMemoableDigest_DoFinal_m1BB89FB8CEF29DB4282B71C52BD92338C71BE1C1 (NonMemoableDigest_t04F9BFBAAE58DA370AD49DAA391B6B01AE338BBA* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___mBaseDigest_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___output0;
		int32_t L_2 = ___outOff1;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.NonMemoableDigest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonMemoableDigest_Reset_m7CBCF1701EFDA171B9C8F854AD2CED2863094336 (NonMemoableDigest_t04F9BFBAAE58DA370AD49DAA391B6B01AE338BBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___mBaseDigest_0;
		InterfaceActionInvoker0::Invoke(6 /* System.Void Org.BouncyCastle.Crypto.IDigest::Reset() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.NonMemoableDigest::GetByteLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NonMemoableDigest_GetByteLength_mAF3E874A49BCD2178B5A5C6547AC3FEE44A8DD52 (NonMemoableDigest_t04F9BFBAAE58DA370AD49DAA391B6B01AE338BBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___mBaseDigest_0;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::GetByteLength() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
// System.String Org.BouncyCastle.Crypto.Digests.NullDigest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NullDigest_get_AlgorithmName_m164F5F29184C8AB6D129CB200AB4E3805F6DB73D (NullDigest_t698461B1C0890DE29DADCD13F9C2D0CED109AAEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral900D858FE9ABCD2ED2B25CD27110A78ADCC6EC6B;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.NullDigest::GetByteLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullDigest_GetByteLength_mCFF8576EC812966A56797AD64D60AAA5CF96095F (NullDigest_t698461B1C0890DE29DADCD13F9C2D0CED109AAEB* __this, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.NullDigest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullDigest_GetDigestSize_mEA83F6B7C5CA77BAF18CD5E4D564DBD5302EF2E2 (NullDigest_t698461B1C0890DE29DADCD13F9C2D0CED109AAEB* __this, const RuntimeMethod* method) 
{
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___bOut_0;
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		return ((int32_t)L_1);
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.NullDigest::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullDigest_Update_m493B57AF7333ECFA90E59FF0A9DCE3EDA786827D (NullDigest_t698461B1C0890DE29DADCD13F9C2D0CED109AAEB* __this, uint8_t ___b0, const RuntimeMethod* method) 
{
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___bOut_0;
		uint8_t L_1 = ___b0;
		VirtualActionInvoker1< uint8_t >::Invoke(37 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_0, L_1);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.NullDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullDigest_BlockUpdate_mD646B618F270D585CAA3A3C5F539264C0308C314 (NullDigest_t698461B1C0890DE29DADCD13F9C2D0CED109AAEB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___len2, const RuntimeMethod* method) 
{
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___bOut_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___inBytes0;
		int32_t L_2 = ___inOff1;
		int32_t L_3 = ___len2;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.NullDigest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NullDigest_DoFinal_mAFD047CACF00AFAF51928B0A4AA745BD5B3A41D0 (NullDigest_t698461B1C0890DE29DADCD13F9C2D0CED109AAEB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				NullDigest_Reset_m158EAD5F8A4F5060BBB7645075E250A044D2AC1B(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___bOut_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___outBytes0;
			int32_t L_2 = ___outOff1;
			int32_t L_3;
			L_3 = Streams_WriteBufTo_m05156EE325EC5A0840F4C3E80D2B628ED0DFA25A(L_0, L_1, L_2, NULL);
			V_0 = L_3;
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.NullDigest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullDigest_Reset_m158EAD5F8A4F5060BBB7645075E250A044D2AC1B (NullDigest_t698461B1C0890DE29DADCD13F9C2D0CED109AAEB* __this, const RuntimeMethod* method) 
{
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___bOut_0;
		VirtualActionInvoker1< int64_t >::Invoke(31 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_0, ((int64_t)0));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.NullDigest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullDigest__ctor_mD65EFB093D322829C70C7FF382A441FA0E0C7B7D (NullDigest_t698461B1C0890DE29DADCD13F9C2D0CED109AAEB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		__this->___bOut_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bOut_0), (void*)L_0);
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
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD128Digest__ctor_m0ABA1A33069047AF75DC74D58E9C896273600BCC (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___X_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___X_9), (void*)L_0);
		GeneralDigest__ctor_m67E803310E7744886EF893C646D312868DCCD1FD(__this, NULL);
		VirtualActionInvoker0::Invoke(13 /* System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::Reset() */, __this);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::.ctor(Org.BouncyCastle.Crypto.Digests.RipeMD128Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD128Digest__ctor_m68A8B6F8390C125DF5022DEB1C7D89A65FD29027 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___X_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___X_9), (void*)L_0);
		RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* L_1 = ___t0;
		GeneralDigest__ctor_m87B9D3E5C08DBEC58227C8469EEA9EC47F6A84F7(__this, L_1, NULL);
		RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* L_2 = ___t0;
		RipeMD128Digest_CopyIn_m5F89593A11CC7C6F3243D9D8DA20FB5B1E993024(__this, L_2, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::CopyIn(Org.BouncyCastle.Crypto.Digests.RipeMD128Digest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD128Digest_CopyIn_m5F89593A11CC7C6F3243D9D8DA20FB5B1E993024 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* ___t0, const RuntimeMethod* method) 
{
	{
		RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* L_0 = ___t0;
		GeneralDigest_CopyIn_mB0E17BFA6B0BC2D95FE8B64B7837E63CD4EDF728(__this, L_0, NULL);
		RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* L_1 = ___t0;
		int32_t L_2 = L_1->___H0_5;
		__this->___H0_5 = L_2;
		RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* L_3 = ___t0;
		int32_t L_4 = L_3->___H1_6;
		__this->___H1_6 = L_4;
		RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* L_5 = ___t0;
		int32_t L_6 = L_5->___H2_7;
		__this->___H2_7 = L_6;
		RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* L_7 = ___t0;
		int32_t L_8 = L_7->___H3_8;
		__this->___H3_8 = L_8;
		RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* L_9 = ___t0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___X_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->___X_9;
		RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* L_12 = ___t0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12->___X_9;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_10, 0, (RuntimeArray*)L_11, 0, ((int32_t)(((RuntimeArray*)L_13)->max_length)), NULL);
		RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* L_14 = ___t0;
		int32_t L_15 = L_14->___xOff_10;
		__this->___xOff_10 = L_15;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RipeMD128Digest_get_AlgorithmName_m2E087D17BD4E8A612BA954CC70BE30A9260B0BFD (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB7CCC8642D7B5521BC4E7440146281DA06EFDDF);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralEB7CCC8642D7B5521BC4E7440146281DA06EFDDF;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::GetDigestSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_GetDigestSize_mEF149049DAAAE8521A971B7ED4045B869D1529B0 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::ProcessWord(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD128Digest_ProcessWord_mA36D2335DCBD8D5C52926C24B49A1E1F7541401D (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___X_9;
		int32_t L_1 = __this->___xOff_10;
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->___xOff_10 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input0;
		int32_t L_5 = ___inOff1;
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___input0;
		int32_t L_9 = ___inOff1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint8_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___input0;
		int32_t L_13 = ___inOff1;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 2));
		uint8_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___input0;
		int32_t L_17 = ___inOff1;
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 3));
		uint8_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (int32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_7&((int32_t)255)))|((int32_t)(((int32_t)((int32_t)L_11&((int32_t)255)))<<8))))|((int32_t)(((int32_t)((int32_t)L_15&((int32_t)255)))<<((int32_t)16)))))|((int32_t)(((int32_t)((int32_t)L_19&((int32_t)255)))<<((int32_t)24))))));
		int32_t L_20 = __this->___xOff_10;
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_005d;
		}
	}
	{
		VirtualActionInvoker0::Invoke(16 /* System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessBlock() */, __this);
	}

IL_005d:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::ProcessLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD128Digest_ProcessLength_m0E1A5F651DDFD1CD82F9AF9B0493A8EC20B6EFCE (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int64_t ___bitLength0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___xOff_10;
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)14))))
		{
			goto IL_0010;
		}
	}
	{
		VirtualActionInvoker0::Invoke(16 /* System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::ProcessBlock() */, __this);
	}

IL_0010:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___X_9;
		int64_t L_2 = ___bitLength0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (int32_t)((int32_t)((int64_t)(L_2&((int64_t)(uint64_t)((uint32_t)(-1)))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___X_9;
		int64_t L_4 = ___bitLength0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (int32_t)((int32_t)((int64_t)((uint64_t)L_4>>((int32_t)32)))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::UnpackWord(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD128Digest_UnpackWord_mCC64E70F7796D22A52B053B08DF48FA048B33A29 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___word0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes1, int32_t ___outOff2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___outBytes1;
		int32_t L_1 = ___outOff2;
		int32_t L_2 = ___word0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___outBytes1;
		int32_t L_4 = ___outOff2;
		int32_t L_5 = ___word0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_5>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___outBytes1;
		int32_t L_7 = ___outOff2;
		int32_t L_8 = ___word0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_8>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___outBytes1;
		int32_t L_10 = ___outOff2;
		int32_t L_11 = ___word0;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_11>>((int32_t)24)))));
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_DoFinal_mEA6C577566C390A70C66C01B308FC0D7774DB023 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		GeneralDigest_Finish_m9D444CDCBC760932CD5318A831449973B1FC226E(__this, NULL);
		int32_t L_0 = __this->___H0_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___output0;
		int32_t L_2 = ___outOff1;
		RipeMD128Digest_UnpackWord_mCC64E70F7796D22A52B053B08DF48FA048B33A29(__this, L_0, L_1, L_2, NULL);
		int32_t L_3 = __this->___H1_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output0;
		int32_t L_5 = ___outOff1;
		RipeMD128Digest_UnpackWord_mCC64E70F7796D22A52B053B08DF48FA048B33A29(__this, L_3, L_4, ((int32_t)il2cpp_codegen_add(L_5, 4)), NULL);
		int32_t L_6 = __this->___H2_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___output0;
		int32_t L_8 = ___outOff1;
		RipeMD128Digest_UnpackWord_mCC64E70F7796D22A52B053B08DF48FA048B33A29(__this, L_6, L_7, ((int32_t)il2cpp_codegen_add(L_8, 8)), NULL);
		int32_t L_9 = __this->___H3_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___output0;
		int32_t L_11 = ___outOff1;
		RipeMD128Digest_UnpackWord_mCC64E70F7796D22A52B053B08DF48FA048B33A29(__this, L_9, L_10, ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)12))), NULL);
		VirtualActionInvoker0::Invoke(13 /* System.Void Org.BouncyCastle.Crypto.Digests.GeneralDigest::Reset() */, __this);
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD128Digest_Reset_m45C2916BBF0010A5E4713FE982893FEC94930C05 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		GeneralDigest_Reset_m1CDCFA775518A1FBB227FCB0673015400D6FF246(__this, NULL);
		__this->___H0_5 = ((int32_t)1732584193);
		__this->___H1_6 = ((int32_t)-271733879);
		__this->___H2_7 = ((int32_t)-1732584194);
		__this->___H3_8 = ((int32_t)271733878);
		__this->___xOff_10 = 0;
		V_0 = 0;
		goto IL_004a;
	}

IL_003d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___X_9;
		int32_t L_1 = V_0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (int32_t)0);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_004a:
	{
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___X_9;
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_003d;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::RL(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_RL_mA5D5871282B7A77A2ED046DB853ACEBD95CE0925 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___x0, int32_t ___n1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___n1;
		int32_t L_2 = ___x0;
		int32_t L_3 = ___n1;
		return ((int32_t)(((int32_t)(L_0<<((int32_t)(L_1&((int32_t)31)))))|((int32_t)((uint32_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F1(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_F1_m9337A3708127661C6700820695A4E7B833FAC49C (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		int32_t L_2 = ___z2;
		return ((int32_t)(((int32_t)(L_0^L_1))^L_2));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F2(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_F2_m5B69D7352F24E8AC9757BBB47095C14097776593 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		int32_t L_2 = ___x0;
		int32_t L_3 = ___z2;
		return ((int32_t)(((int32_t)(L_0&L_1))|((int32_t)(((~L_2))&L_3))));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F3(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_F3_m43566ED5C5C004B36ECCBCCC8CAF00E10CDCA940 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		int32_t L_2 = ___z2;
		return ((int32_t)(((int32_t)(L_0|((~L_1))))^L_2));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F4(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_F4_m63489269B9C669FB6CB3911E208E1863CA4EA756 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___x0, int32_t ___y1, int32_t ___z2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		int32_t L_1 = ___z2;
		int32_t L_2 = ___y1;
		int32_t L_3 = ___z2;
		return ((int32_t)(((int32_t)(L_0&L_1))|((int32_t)(L_2&((~L_3))))));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F1(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_F1_m6E10C9AA8DD98DE1DBF63A89FC4261BE6EC1A77B (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		int32_t L_2 = ___c2;
		int32_t L_3 = ___d3;
		int32_t L_4;
		L_4 = RipeMD128Digest_F1_m9337A3708127661C6700820695A4E7B833FAC49C(__this, L_1, L_2, L_3, NULL);
		int32_t L_5 = ___x4;
		int32_t L_6 = ___s5;
		int32_t L_7;
		L_7 = RipeMD128Digest_RL_mA5D5871282B7A77A2ED046DB853ACEBD95CE0925(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, L_4)), L_5)), L_6, NULL);
		return L_7;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F2(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_F2_mF92C740F44D350DFBC44C52EED8428B8E69AEF11 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		int32_t L_2 = ___c2;
		int32_t L_3 = ___d3;
		int32_t L_4;
		L_4 = RipeMD128Digest_F2_m5B69D7352F24E8AC9757BBB47095C14097776593(__this, L_1, L_2, L_3, NULL);
		int32_t L_5 = ___x4;
		int32_t L_6 = ___s5;
		int32_t L_7;
		L_7 = RipeMD128Digest_RL_mA5D5871282B7A77A2ED046DB853ACEBD95CE0925(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, L_4)), L_5)), ((int32_t)1518500249))), L_6, NULL);
		return L_7;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F3(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_F3_m26C3AB304E707ED79093994AF261EC963CD917E7 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		int32_t L_2 = ___c2;
		int32_t L_3 = ___d3;
		int32_t L_4;
		L_4 = RipeMD128Digest_F3_m43566ED5C5C004B36ECCBCCC8CAF00E10CDCA940(__this, L_1, L_2, L_3, NULL);
		int32_t L_5 = ___x4;
		int32_t L_6 = ___s5;
		int32_t L_7;
		L_7 = RipeMD128Digest_RL_mA5D5871282B7A77A2ED046DB853ACEBD95CE0925(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, L_4)), L_5)), ((int32_t)1859775393))), L_6, NULL);
		return L_7;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::F4(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_F4_m05D095DCFDDCD3E6D4E73AC7753A4B78CFF6126E (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		int32_t L_2 = ___c2;
		int32_t L_3 = ___d3;
		int32_t L_4;
		L_4 = RipeMD128Digest_F4_m63489269B9C669FB6CB3911E208E1863CA4EA756(__this, L_1, L_2, L_3, NULL);
		int32_t L_5 = ___x4;
		int32_t L_6 = ___s5;
		int32_t L_7;
		L_7 = RipeMD128Digest_RL_mA5D5871282B7A77A2ED046DB853ACEBD95CE0925(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, L_4)), L_5)), ((int32_t)-1894007588))), L_6, NULL);
		return L_7;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::FF1(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_FF1_mCB220455CE395A1FB419000484C7F22A654E7F3E (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		int32_t L_2 = ___c2;
		int32_t L_3 = ___d3;
		int32_t L_4;
		L_4 = RipeMD128Digest_F1_m9337A3708127661C6700820695A4E7B833FAC49C(__this, L_1, L_2, L_3, NULL);
		int32_t L_5 = ___x4;
		int32_t L_6 = ___s5;
		int32_t L_7;
		L_7 = RipeMD128Digest_RL_mA5D5871282B7A77A2ED046DB853ACEBD95CE0925(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, L_4)), L_5)), L_6, NULL);
		return L_7;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::FF2(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_FF2_mE693D130117CF7BA1D5CE56CD81A74C2CEA99DF3 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		int32_t L_2 = ___c2;
		int32_t L_3 = ___d3;
		int32_t L_4;
		L_4 = RipeMD128Digest_F2_m5B69D7352F24E8AC9757BBB47095C14097776593(__this, L_1, L_2, L_3, NULL);
		int32_t L_5 = ___x4;
		int32_t L_6 = ___s5;
		int32_t L_7;
		L_7 = RipeMD128Digest_RL_mA5D5871282B7A77A2ED046DB853ACEBD95CE0925(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, L_4)), L_5)), ((int32_t)1836072691))), L_6, NULL);
		return L_7;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::FF3(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_FF3_mFB878B1320EE010E64F3C7209ACD5739F150ACEE (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		int32_t L_2 = ___c2;
		int32_t L_3 = ___d3;
		int32_t L_4;
		L_4 = RipeMD128Digest_F3_m43566ED5C5C004B36ECCBCCC8CAF00E10CDCA940(__this, L_1, L_2, L_3, NULL);
		int32_t L_5 = ___x4;
		int32_t L_6 = ___s5;
		int32_t L_7;
		L_7 = RipeMD128Digest_RL_mA5D5871282B7A77A2ED046DB853ACEBD95CE0925(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, L_4)), L_5)), ((int32_t)1548603684))), L_6, NULL);
		return L_7;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::FF4(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RipeMD128Digest_FF4_m554A43D96567012C1926724F89DDC3B4D1996677 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, int32_t ___x4, int32_t ___s5, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		int32_t L_2 = ___c2;
		int32_t L_3 = ___d3;
		int32_t L_4;
		L_4 = RipeMD128Digest_F4_m63489269B9C669FB6CB3911E208E1863CA4EA756(__this, L_1, L_2, L_3, NULL);
		int32_t L_5 = ___x4;
		int32_t L_6 = ___s5;
		int32_t L_7;
		L_7 = RipeMD128Digest_RL_mA5D5871282B7A77A2ED046DB853ACEBD95CE0925(__this, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, L_4)), L_5)), ((int32_t)1352829926))), L_6, NULL);
		return L_7;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::ProcessBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD128Digest_ProcessBlock_m213C20655F62E0C8123499CB4E55E3E07167109A (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		int32_t L_0 = __this->___H0_5;
		int32_t L_1 = L_0;
		V_1 = L_1;
		V_0 = L_1;
		int32_t L_2 = __this->___H1_6;
		int32_t L_3 = L_2;
		V_3 = L_3;
		V_2 = L_3;
		int32_t L_4 = __this->___H2_7;
		int32_t L_5 = L_4;
		V_5 = L_5;
		V_4 = L_5;
		int32_t L_6 = __this->___H3_8;
		int32_t L_7 = L_6;
		V_7 = L_7;
		V_6 = L_7;
		int32_t L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = V_4;
		int32_t L_11 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___X_9;
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15;
		L_15 = RipeMD128Digest_F1_m6E10C9AA8DD98DE1DBF63A89FC4261BE6EC1A77B(__this, L_8, L_9, L_10, L_11, L_14, ((int32_t)11), NULL);
		V_0 = L_15;
		int32_t L_16 = V_6;
		int32_t L_17 = V_0;
		int32_t L_18 = V_2;
		int32_t L_19 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = __this->___X_9;
		int32_t L_21 = 1;
		int32_t L_22 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23;
		L_23 = RipeMD128Digest_F1_m6E10C9AA8DD98DE1DBF63A89FC4261BE6EC1A77B(__this, L_16, L_17, L_18, L_19, L_22, ((int32_t)14), NULL);
		V_6 = L_23;
		int32_t L_24 = V_4;
		int32_t L_25 = V_6;
		int32_t L_26 = V_0;
		int32_t L_27 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = __this->___X_9;
		int32_t L_29 = 2;
		int32_t L_30 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31;
		L_31 = RipeMD128Digest_F1_m6E10C9AA8DD98DE1DBF63A89FC4261BE6EC1A77B(__this, L_24, L_25, L_26, L_27, L_30, ((int32_t)15), NULL);
		V_4 = L_31;
		int32_t L_32 = V_2;
		int32_t L_33 = V_4;
		int32_t L_34 = V_6;
		int32_t L_35 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->___X_9;
		int32_t L_37 = 3;
		int32_t L_38 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39;
		L_39 = RipeMD128Digest_F1_m6E10C9AA8DD98DE1DBF63A89FC4261BE6EC1A77B(__this, L_32, L_33, L_34, L_35, L_38, ((int32_t)12), NULL);
		V_2 = L_39;
		int32_t L_40 = V_0;
		int32_t L_41 = V_2;
		int32_t L_42 = V_4;
		int32_t L_43 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = __this->___X_9;
		int32_t L_45 = 4;
		int32_t L_46 = (L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47;
		L_47 = RipeMD128Digest_F1_m6E10C9AA8DD98DE1DBF63A89FC4261BE6EC1A77B(__this, L_40, L_41, L_42, L_43, L_46, 5, NULL);
		V_0 = L_47;
		int32_t L_48 = V_6;
		int32_t L_49 = V_0;
		int32_t L_50 = V_2;
		int32_t L_51 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = __this->___X_9;
		int32_t L_53 = 5;
		int32_t L_54 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		int32_t L_55;
		L_55 = RipeMD128Digest_F1_m6E10C9AA8DD98DE1DBF63A89FC4261BE6EC1A77B(__this, L_48, L_49, L_50, L_51, L_54, 8, NULL);
		V_6 = L_55;
		int32_t L_56 = V_4;
		int32_t L_57 = V_6;
		int32_t L_58 = V_0;
		int32_t L_59 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = __this->___X_9;
		int32_t L_61 = 6;
		int32_t L_62 = (L_60)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		int32_t L_63;
		L_63 = RipeMD128Digest_F1_m6E10C9AA8DD98DE1DBF63A89FC4261BE6EC1A77B(__this, L_56, L_57, L_58, L_59, L_62, 7, NULL);
		V_4 = L_63;
		int32_t L_64 = V_2;
		int32_t L_65 = V_4;
		int32_t L_66 = V_6;
		int32_t L_67 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = __this->___X_9;
		int32_t L_69 = 7;
		int32_t L_70 = (L_68)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		int32_t L_71;
		L_71 = RipeMD128Digest_F1_m6E10C9AA8DD98DE1DBF63A89FC4261BE6EC1A77B(__this, L_64, L_65, L_66, L_67, L_70, ((int32_t)9), NULL);
		V_2 = L_71;
		int32_t L_72 = V_0;
		int32_t L_73 = V_2;
		int32_t L_74 = V_4;
		int32_t L_75 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = __this->___X_9;
		int32_t L_77 = 8;
		int32_t L_78 = (L_76)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77));
		int32_t L_79;
		L_79 = RipeMD128Digest_F1_m6E10C9AA8DD98DE1DBF63A89FC4261BE6EC1A77B(__this, L_72, L_73, L_74, L_75, L_78, ((int32_t)11), NULL);
		V_0 = L_79;
		int32_t L_80 = V_6;
		int32_t L_81 = V_0;
		int32_t L_82 = V_2;
		int32_t L_83 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = __this->___X_9;
		int32_t L_85 = ((int32_t)9);
		int32_t L_86 = (L_84)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85));
		int32_t L_87;
		L_87 = RipeMD128Digest_F1_m6E10C9AA8DD98DE1DBF63A89FC4261BE6EC1A77B(__this, L_80, L_81, L_82, L_83, L_86, ((int32_t)13), NULL);
		V_6 = L_87;
		int32_t L_88 = V_4;
		int32_t L_89 = V_6;
		int32_t L_90 = V_0;
		int32_t L_91 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = __this->___X_9;
		int32_t L_93 = ((int32_t)10);
		int32_t L_94 = (L_92)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_93));
		int32_t L_95;
		L_95 = RipeMD128Digest_F1_m6E10C9AA8DD98DE1DBF63A89FC4261BE6EC1A77B(__this, L_88, L_89, L_90, L_91, L_94, ((int32_t)14), NULL);
		V_4 = L_95;
		int32_t L_96 = V_2;
		int32_t L_97 = V_4;
		int32_t L_98 = V_6;
		int32_t L_99 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = __this->___X_9;
		int32_t L_101 = ((int32_t)11);
		int32_t L_102 = (L_100)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_101));
		int32_t L_103;
		L_103 = RipeMD128Digest_F1_m6E10C9AA8DD98DE1DBF63A89FC4261BE6EC1A77B(__this, L_96, L_97, L_98, L_99, L_102, ((int32_t)15), NULL);
		V_2 = L_103;
		int32_t L_104 = V_0;
		int32_t L_105 = V_2;
		int32_t L_106 = V_4;
		int32_t L_107 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = __this->___X_9;
		int32_t L_109 = ((int32_t)12);
		int32_t L_110 = (L_108)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_109));
		int32_t L_111;
		L_111 = RipeMD128Digest_F1_m6E10C9AA8DD98DE1DBF63A89FC4261BE6EC1A77B(__this, L_104, L_105, L_106, L_107, L_110, 6, NULL);
		V_0 = L_111;
		int32_t L_112 = V_6;
		int32_t L_113 = V_0;
		int32_t L_114 = V_2;
		int32_t L_115 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_116 = __this->___X_9;
		int32_t L_117 = ((int32_t)13);
		int32_t L_118 = (L_116)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_117));
		int32_t L_119;
		L_119 = RipeMD128Digest_F1_m6E10C9AA8DD98DE1DBF63A89FC4261BE6EC1A77B(__this, L_112, L_113, L_114, L_115, L_118, 7, NULL);
		V_6 = L_119;
		int32_t L_120 = V_4;
		int32_t L_121 = V_6;
		int32_t L_122 = V_0;
		int32_t L_123 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_124 = __this->___X_9;
		int32_t L_125 = ((int32_t)14);
		int32_t L_126 = (L_124)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_125));
		int32_t L_127;
		L_127 = RipeMD128Digest_F1_m6E10C9AA8DD98DE1DBF63A89FC4261BE6EC1A77B(__this, L_120, L_121, L_122, L_123, L_126, ((int32_t)9), NULL);
		V_4 = L_127;
		int32_t L_128 = V_2;
		int32_t L_129 = V_4;
		int32_t L_130 = V_6;
		int32_t L_131 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = __this->___X_9;
		int32_t L_133 = ((int32_t)15);
		int32_t L_134 = (L_132)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_133));
		int32_t L_135;
		L_135 = RipeMD128Digest_F1_m6E10C9AA8DD98DE1DBF63A89FC4261BE6EC1A77B(__this, L_128, L_129, L_130, L_131, L_134, 8, NULL);
		V_2 = L_135;
		int32_t L_136 = V_0;
		int32_t L_137 = V_2;
		int32_t L_138 = V_4;
		int32_t L_139 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = __this->___X_9;
		int32_t L_141 = 7;
		int32_t L_142 = (L_140)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_141));
		int32_t L_143;
		L_143 = RipeMD128Digest_F2_mF92C740F44D350DFBC44C52EED8428B8E69AEF11(__this, L_136, L_137, L_138, L_139, L_142, 7, NULL);
		V_0 = L_143;
		int32_t L_144 = V_6;
		int32_t L_145 = V_0;
		int32_t L_146 = V_2;
		int32_t L_147 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_148 = __this->___X_9;
		int32_t L_149 = 4;
		int32_t L_150 = (L_148)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_149));
		int32_t L_151;
		L_151 = RipeMD128Digest_F2_mF92C740F44D350DFBC44C52EED8428B8E69AEF11(__this, L_144, L_145, L_146, L_147, L_150, 6, NULL);
		V_6 = L_151;
		int32_t L_152 = V_4;
		int32_t L_153 = V_6;
		int32_t L_154 = V_0;
		int32_t L_155 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_156 = __this->___X_9;
		int32_t L_157 = ((int32_t)13);
		int32_t L_158 = (L_156)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_157));
		int32_t L_159;
		L_159 = RipeMD128Digest_F2_mF92C740F44D350DFBC44C52EED8428B8E69AEF11(__this, L_152, L_153, L_154, L_155, L_158, 8, NULL);
		V_4 = L_159;
		int32_t L_160 = V_2;
		int32_t L_161 = V_4;
		int32_t L_162 = V_6;
		int32_t L_163 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_164 = __this->___X_9;
		int32_t L_165 = 1;
		int32_t L_166 = (L_164)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_165));
		int32_t L_167;
		L_167 = RipeMD128Digest_F2_mF92C740F44D350DFBC44C52EED8428B8E69AEF11(__this, L_160, L_161, L_162, L_163, L_166, ((int32_t)13), NULL);
		V_2 = L_167;
		int32_t L_168 = V_0;
		int32_t L_169 = V_2;
		int32_t L_170 = V_4;
		int32_t L_171 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = __this->___X_9;
		int32_t L_173 = ((int32_t)10);
		int32_t L_174 = (L_172)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_173));
		int32_t L_175;
		L_175 = RipeMD128Digest_F2_mF92C740F44D350DFBC44C52EED8428B8E69AEF11(__this, L_168, L_169, L_170, L_171, L_174, ((int32_t)11), NULL);
		V_0 = L_175;
		int32_t L_176 = V_6;
		int32_t L_177 = V_0;
		int32_t L_178 = V_2;
		int32_t L_179 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_180 = __this->___X_9;
		int32_t L_181 = 6;
		int32_t L_182 = (L_180)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_181));
		int32_t L_183;
		L_183 = RipeMD128Digest_F2_mF92C740F44D350DFBC44C52EED8428B8E69AEF11(__this, L_176, L_177, L_178, L_179, L_182, ((int32_t)9), NULL);
		V_6 = L_183;
		int32_t L_184 = V_4;
		int32_t L_185 = V_6;
		int32_t L_186 = V_0;
		int32_t L_187 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_188 = __this->___X_9;
		int32_t L_189 = ((int32_t)15);
		int32_t L_190 = (L_188)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_189));
		int32_t L_191;
		L_191 = RipeMD128Digest_F2_mF92C740F44D350DFBC44C52EED8428B8E69AEF11(__this, L_184, L_185, L_186, L_187, L_190, 7, NULL);
		V_4 = L_191;
		int32_t L_192 = V_2;
		int32_t L_193 = V_4;
		int32_t L_194 = V_6;
		int32_t L_195 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_196 = __this->___X_9;
		int32_t L_197 = 3;
		int32_t L_198 = (L_196)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_197));
		int32_t L_199;
		L_199 = RipeMD128Digest_F2_mF92C740F44D350DFBC44C52EED8428B8E69AEF11(__this, L_192, L_193, L_194, L_195, L_198, ((int32_t)15), NULL);
		V_2 = L_199;
		int32_t L_200 = V_0;
		int32_t L_201 = V_2;
		int32_t L_202 = V_4;
		int32_t L_203 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_204 = __this->___X_9;
		int32_t L_205 = ((int32_t)12);
		int32_t L_206 = (L_204)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_205));
		int32_t L_207;
		L_207 = RipeMD128Digest_F2_mF92C740F44D350DFBC44C52EED8428B8E69AEF11(__this, L_200, L_201, L_202, L_203, L_206, 7, NULL);
		V_0 = L_207;
		int32_t L_208 = V_6;
		int32_t L_209 = V_0;
		int32_t L_210 = V_2;
		int32_t L_211 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_212 = __this->___X_9;
		int32_t L_213 = 0;
		int32_t L_214 = (L_212)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_213));
		int32_t L_215;
		L_215 = RipeMD128Digest_F2_mF92C740F44D350DFBC44C52EED8428B8E69AEF11(__this, L_208, L_209, L_210, L_211, L_214, ((int32_t)12), NULL);
		V_6 = L_215;
		int32_t L_216 = V_4;
		int32_t L_217 = V_6;
		int32_t L_218 = V_0;
		int32_t L_219 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_220 = __this->___X_9;
		int32_t L_221 = ((int32_t)9);
		int32_t L_222 = (L_220)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_221));
		int32_t L_223;
		L_223 = RipeMD128Digest_F2_mF92C740F44D350DFBC44C52EED8428B8E69AEF11(__this, L_216, L_217, L_218, L_219, L_222, ((int32_t)15), NULL);
		V_4 = L_223;
		int32_t L_224 = V_2;
		int32_t L_225 = V_4;
		int32_t L_226 = V_6;
		int32_t L_227 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_228 = __this->___X_9;
		int32_t L_229 = 5;
		int32_t L_230 = (L_228)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_229));
		int32_t L_231;
		L_231 = RipeMD128Digest_F2_mF92C740F44D350DFBC44C52EED8428B8E69AEF11(__this, L_224, L_225, L_226, L_227, L_230, ((int32_t)9), NULL);
		V_2 = L_231;
		int32_t L_232 = V_0;
		int32_t L_233 = V_2;
		int32_t L_234 = V_4;
		int32_t L_235 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_236 = __this->___X_9;
		int32_t L_237 = 2;
		int32_t L_238 = (L_236)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_237));
		int32_t L_239;
		L_239 = RipeMD128Digest_F2_mF92C740F44D350DFBC44C52EED8428B8E69AEF11(__this, L_232, L_233, L_234, L_235, L_238, ((int32_t)11), NULL);
		V_0 = L_239;
		int32_t L_240 = V_6;
		int32_t L_241 = V_0;
		int32_t L_242 = V_2;
		int32_t L_243 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_244 = __this->___X_9;
		int32_t L_245 = ((int32_t)14);
		int32_t L_246 = (L_244)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_245));
		int32_t L_247;
		L_247 = RipeMD128Digest_F2_mF92C740F44D350DFBC44C52EED8428B8E69AEF11(__this, L_240, L_241, L_242, L_243, L_246, 7, NULL);
		V_6 = L_247;
		int32_t L_248 = V_4;
		int32_t L_249 = V_6;
		int32_t L_250 = V_0;
		int32_t L_251 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = __this->___X_9;
		int32_t L_253 = ((int32_t)11);
		int32_t L_254 = (L_252)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_253));
		int32_t L_255;
		L_255 = RipeMD128Digest_F2_mF92C740F44D350DFBC44C52EED8428B8E69AEF11(__this, L_248, L_249, L_250, L_251, L_254, ((int32_t)13), NULL);
		V_4 = L_255;
		int32_t L_256 = V_2;
		int32_t L_257 = V_4;
		int32_t L_258 = V_6;
		int32_t L_259 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_260 = __this->___X_9;
		int32_t L_261 = 8;
		int32_t L_262 = (L_260)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_261));
		int32_t L_263;
		L_263 = RipeMD128Digest_F2_mF92C740F44D350DFBC44C52EED8428B8E69AEF11(__this, L_256, L_257, L_258, L_259, L_262, ((int32_t)12), NULL);
		V_2 = L_263;
		int32_t L_264 = V_0;
		int32_t L_265 = V_2;
		int32_t L_266 = V_4;
		int32_t L_267 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_268 = __this->___X_9;
		int32_t L_269 = 3;
		int32_t L_270 = (L_268)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_269));
		int32_t L_271;
		L_271 = RipeMD128Digest_F3_m26C3AB304E707ED79093994AF261EC963CD917E7(__this, L_264, L_265, L_266, L_267, L_270, ((int32_t)11), NULL);
		V_0 = L_271;
		int32_t L_272 = V_6;
		int32_t L_273 = V_0;
		int32_t L_274 = V_2;
		int32_t L_275 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_276 = __this->___X_9;
		int32_t L_277 = ((int32_t)10);
		int32_t L_278 = (L_276)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_277));
		int32_t L_279;
		L_279 = RipeMD128Digest_F3_m26C3AB304E707ED79093994AF261EC963CD917E7(__this, L_272, L_273, L_274, L_275, L_278, ((int32_t)13), NULL);
		V_6 = L_279;
		int32_t L_280 = V_4;
		int32_t L_281 = V_6;
		int32_t L_282 = V_0;
		int32_t L_283 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_284 = __this->___X_9;
		int32_t L_285 = ((int32_t)14);
		int32_t L_286 = (L_284)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_285));
		int32_t L_287;
		L_287 = RipeMD128Digest_F3_m26C3AB304E707ED79093994AF261EC963CD917E7(__this, L_280, L_281, L_282, L_283, L_286, 6, NULL);
		V_4 = L_287;
		int32_t L_288 = V_2;
		int32_t L_289 = V_4;
		int32_t L_290 = V_6;
		int32_t L_291 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_292 = __this->___X_9;
		int32_t L_293 = 4;
		int32_t L_294 = (L_292)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_293));
		int32_t L_295;
		L_295 = RipeMD128Digest_F3_m26C3AB304E707ED79093994AF261EC963CD917E7(__this, L_288, L_289, L_290, L_291, L_294, 7, NULL);
		V_2 = L_295;
		int32_t L_296 = V_0;
		int32_t L_297 = V_2;
		int32_t L_298 = V_4;
		int32_t L_299 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_300 = __this->___X_9;
		int32_t L_301 = ((int32_t)9);
		int32_t L_302 = (L_300)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_301));
		int32_t L_303;
		L_303 = RipeMD128Digest_F3_m26C3AB304E707ED79093994AF261EC963CD917E7(__this, L_296, L_297, L_298, L_299, L_302, ((int32_t)14), NULL);
		V_0 = L_303;
		int32_t L_304 = V_6;
		int32_t L_305 = V_0;
		int32_t L_306 = V_2;
		int32_t L_307 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_308 = __this->___X_9;
		int32_t L_309 = ((int32_t)15);
		int32_t L_310 = (L_308)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_309));
		int32_t L_311;
		L_311 = RipeMD128Digest_F3_m26C3AB304E707ED79093994AF261EC963CD917E7(__this, L_304, L_305, L_306, L_307, L_310, ((int32_t)9), NULL);
		V_6 = L_311;
		int32_t L_312 = V_4;
		int32_t L_313 = V_6;
		int32_t L_314 = V_0;
		int32_t L_315 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_316 = __this->___X_9;
		int32_t L_317 = 8;
		int32_t L_318 = (L_316)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_317));
		int32_t L_319;
		L_319 = RipeMD128Digest_F3_m26C3AB304E707ED79093994AF261EC963CD917E7(__this, L_312, L_313, L_314, L_315, L_318, ((int32_t)13), NULL);
		V_4 = L_319;
		int32_t L_320 = V_2;
		int32_t L_321 = V_4;
		int32_t L_322 = V_6;
		int32_t L_323 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_324 = __this->___X_9;
		int32_t L_325 = 1;
		int32_t L_326 = (L_324)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327;
		L_327 = RipeMD128Digest_F3_m26C3AB304E707ED79093994AF261EC963CD917E7(__this, L_320, L_321, L_322, L_323, L_326, ((int32_t)15), NULL);
		V_2 = L_327;
		int32_t L_328 = V_0;
		int32_t L_329 = V_2;
		int32_t L_330 = V_4;
		int32_t L_331 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_332 = __this->___X_9;
		int32_t L_333 = 2;
		int32_t L_334 = (L_332)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_333));
		int32_t L_335;
		L_335 = RipeMD128Digest_F3_m26C3AB304E707ED79093994AF261EC963CD917E7(__this, L_328, L_329, L_330, L_331, L_334, ((int32_t)14), NULL);
		V_0 = L_335;
		int32_t L_336 = V_6;
		int32_t L_337 = V_0;
		int32_t L_338 = V_2;
		int32_t L_339 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_340 = __this->___X_9;
		int32_t L_341 = 7;
		int32_t L_342 = (L_340)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_341));
		int32_t L_343;
		L_343 = RipeMD128Digest_F3_m26C3AB304E707ED79093994AF261EC963CD917E7(__this, L_336, L_337, L_338, L_339, L_342, 8, NULL);
		V_6 = L_343;
		int32_t L_344 = V_4;
		int32_t L_345 = V_6;
		int32_t L_346 = V_0;
		int32_t L_347 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_348 = __this->___X_9;
		int32_t L_349 = 0;
		int32_t L_350 = (L_348)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_349));
		int32_t L_351;
		L_351 = RipeMD128Digest_F3_m26C3AB304E707ED79093994AF261EC963CD917E7(__this, L_344, L_345, L_346, L_347, L_350, ((int32_t)13), NULL);
		V_4 = L_351;
		int32_t L_352 = V_2;
		int32_t L_353 = V_4;
		int32_t L_354 = V_6;
		int32_t L_355 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_356 = __this->___X_9;
		int32_t L_357 = 6;
		int32_t L_358 = (L_356)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_357));
		int32_t L_359;
		L_359 = RipeMD128Digest_F3_m26C3AB304E707ED79093994AF261EC963CD917E7(__this, L_352, L_353, L_354, L_355, L_358, 6, NULL);
		V_2 = L_359;
		int32_t L_360 = V_0;
		int32_t L_361 = V_2;
		int32_t L_362 = V_4;
		int32_t L_363 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_364 = __this->___X_9;
		int32_t L_365 = ((int32_t)13);
		int32_t L_366 = (L_364)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_365));
		int32_t L_367;
		L_367 = RipeMD128Digest_F3_m26C3AB304E707ED79093994AF261EC963CD917E7(__this, L_360, L_361, L_362, L_363, L_366, 5, NULL);
		V_0 = L_367;
		int32_t L_368 = V_6;
		int32_t L_369 = V_0;
		int32_t L_370 = V_2;
		int32_t L_371 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_372 = __this->___X_9;
		int32_t L_373 = ((int32_t)11);
		int32_t L_374 = (L_372)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_373));
		int32_t L_375;
		L_375 = RipeMD128Digest_F3_m26C3AB304E707ED79093994AF261EC963CD917E7(__this, L_368, L_369, L_370, L_371, L_374, ((int32_t)12), NULL);
		V_6 = L_375;
		int32_t L_376 = V_4;
		int32_t L_377 = V_6;
		int32_t L_378 = V_0;
		int32_t L_379 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_380 = __this->___X_9;
		int32_t L_381 = 5;
		int32_t L_382 = (L_380)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_381));
		int32_t L_383;
		L_383 = RipeMD128Digest_F3_m26C3AB304E707ED79093994AF261EC963CD917E7(__this, L_376, L_377, L_378, L_379, L_382, 7, NULL);
		V_4 = L_383;
		int32_t L_384 = V_2;
		int32_t L_385 = V_4;
		int32_t L_386 = V_6;
		int32_t L_387 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_388 = __this->___X_9;
		int32_t L_389 = ((int32_t)12);
		int32_t L_390 = (L_388)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_389));
		int32_t L_391;
		L_391 = RipeMD128Digest_F3_m26C3AB304E707ED79093994AF261EC963CD917E7(__this, L_384, L_385, L_386, L_387, L_390, 5, NULL);
		V_2 = L_391;
		int32_t L_392 = V_0;
		int32_t L_393 = V_2;
		int32_t L_394 = V_4;
		int32_t L_395 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_396 = __this->___X_9;
		int32_t L_397 = 1;
		int32_t L_398 = (L_396)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_397));
		int32_t L_399;
		L_399 = RipeMD128Digest_F4_m05D095DCFDDCD3E6D4E73AC7753A4B78CFF6126E(__this, L_392, L_393, L_394, L_395, L_398, ((int32_t)11), NULL);
		V_0 = L_399;
		int32_t L_400 = V_6;
		int32_t L_401 = V_0;
		int32_t L_402 = V_2;
		int32_t L_403 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_404 = __this->___X_9;
		int32_t L_405 = ((int32_t)9);
		int32_t L_406 = (L_404)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_405));
		int32_t L_407;
		L_407 = RipeMD128Digest_F4_m05D095DCFDDCD3E6D4E73AC7753A4B78CFF6126E(__this, L_400, L_401, L_402, L_403, L_406, ((int32_t)12), NULL);
		V_6 = L_407;
		int32_t L_408 = V_4;
		int32_t L_409 = V_6;
		int32_t L_410 = V_0;
		int32_t L_411 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_412 = __this->___X_9;
		int32_t L_413 = ((int32_t)11);
		int32_t L_414 = (L_412)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_413));
		int32_t L_415;
		L_415 = RipeMD128Digest_F4_m05D095DCFDDCD3E6D4E73AC7753A4B78CFF6126E(__this, L_408, L_409, L_410, L_411, L_414, ((int32_t)14), NULL);
		V_4 = L_415;
		int32_t L_416 = V_2;
		int32_t L_417 = V_4;
		int32_t L_418 = V_6;
		int32_t L_419 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_420 = __this->___X_9;
		int32_t L_421 = ((int32_t)10);
		int32_t L_422 = (L_420)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_421));
		int32_t L_423;
		L_423 = RipeMD128Digest_F4_m05D095DCFDDCD3E6D4E73AC7753A4B78CFF6126E(__this, L_416, L_417, L_418, L_419, L_422, ((int32_t)15), NULL);
		V_2 = L_423;
		int32_t L_424 = V_0;
		int32_t L_425 = V_2;
		int32_t L_426 = V_4;
		int32_t L_427 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_428 = __this->___X_9;
		int32_t L_429 = 0;
		int32_t L_430 = (L_428)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_429));
		int32_t L_431;
		L_431 = RipeMD128Digest_F4_m05D095DCFDDCD3E6D4E73AC7753A4B78CFF6126E(__this, L_424, L_425, L_426, L_427, L_430, ((int32_t)14), NULL);
		V_0 = L_431;
		int32_t L_432 = V_6;
		int32_t L_433 = V_0;
		int32_t L_434 = V_2;
		int32_t L_435 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_436 = __this->___X_9;
		int32_t L_437 = 8;
		int32_t L_438 = (L_436)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_437));
		int32_t L_439;
		L_439 = RipeMD128Digest_F4_m05D095DCFDDCD3E6D4E73AC7753A4B78CFF6126E(__this, L_432, L_433, L_434, L_435, L_438, ((int32_t)15), NULL);
		V_6 = L_439;
		int32_t L_440 = V_4;
		int32_t L_441 = V_6;
		int32_t L_442 = V_0;
		int32_t L_443 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_444 = __this->___X_9;
		int32_t L_445 = ((int32_t)12);
		int32_t L_446 = (L_444)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_445));
		int32_t L_447;
		L_447 = RipeMD128Digest_F4_m05D095DCFDDCD3E6D4E73AC7753A4B78CFF6126E(__this, L_440, L_441, L_442, L_443, L_446, ((int32_t)9), NULL);
		V_4 = L_447;
		int32_t L_448 = V_2;
		int32_t L_449 = V_4;
		int32_t L_450 = V_6;
		int32_t L_451 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_452 = __this->___X_9;
		int32_t L_453 = 4;
		int32_t L_454 = (L_452)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_453));
		int32_t L_455;
		L_455 = RipeMD128Digest_F4_m05D095DCFDDCD3E6D4E73AC7753A4B78CFF6126E(__this, L_448, L_449, L_450, L_451, L_454, 8, NULL);
		V_2 = L_455;
		int32_t L_456 = V_0;
		int32_t L_457 = V_2;
		int32_t L_458 = V_4;
		int32_t L_459 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_460 = __this->___X_9;
		int32_t L_461 = ((int32_t)13);
		int32_t L_462 = (L_460)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_461));
		int32_t L_463;
		L_463 = RipeMD128Digest_F4_m05D095DCFDDCD3E6D4E73AC7753A4B78CFF6126E(__this, L_456, L_457, L_458, L_459, L_462, ((int32_t)9), NULL);
		V_0 = L_463;
		int32_t L_464 = V_6;
		int32_t L_465 = V_0;
		int32_t L_466 = V_2;
		int32_t L_467 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_468 = __this->___X_9;
		int32_t L_469 = 3;
		int32_t L_470 = (L_468)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_469));
		int32_t L_471;
		L_471 = RipeMD128Digest_F4_m05D095DCFDDCD3E6D4E73AC7753A4B78CFF6126E(__this, L_464, L_465, L_466, L_467, L_470, ((int32_t)14), NULL);
		V_6 = L_471;
		int32_t L_472 = V_4;
		int32_t L_473 = V_6;
		int32_t L_474 = V_0;
		int32_t L_475 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_476 = __this->___X_9;
		int32_t L_477 = 7;
		int32_t L_478 = (L_476)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_477));
		int32_t L_479;
		L_479 = RipeMD128Digest_F4_m05D095DCFDDCD3E6D4E73AC7753A4B78CFF6126E(__this, L_472, L_473, L_474, L_475, L_478, 5, NULL);
		V_4 = L_479;
		int32_t L_480 = V_2;
		int32_t L_481 = V_4;
		int32_t L_482 = V_6;
		int32_t L_483 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_484 = __this->___X_9;
		int32_t L_485 = ((int32_t)15);
		int32_t L_486 = (L_484)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_485));
		int32_t L_487;
		L_487 = RipeMD128Digest_F4_m05D095DCFDDCD3E6D4E73AC7753A4B78CFF6126E(__this, L_480, L_481, L_482, L_483, L_486, 6, NULL);
		V_2 = L_487;
		int32_t L_488 = V_0;
		int32_t L_489 = V_2;
		int32_t L_490 = V_4;
		int32_t L_491 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_492 = __this->___X_9;
		int32_t L_493 = ((int32_t)14);
		int32_t L_494 = (L_492)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_493));
		int32_t L_495;
		L_495 = RipeMD128Digest_F4_m05D095DCFDDCD3E6D4E73AC7753A4B78CFF6126E(__this, L_488, L_489, L_490, L_491, L_494, 8, NULL);
		V_0 = L_495;
		int32_t L_496 = V_6;
		int32_t L_497 = V_0;
		int32_t L_498 = V_2;
		int32_t L_499 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_500 = __this->___X_9;
		int32_t L_501 = 5;
		int32_t L_502 = (L_500)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_501));
		int32_t L_503;
		L_503 = RipeMD128Digest_F4_m05D095DCFDDCD3E6D4E73AC7753A4B78CFF6126E(__this, L_496, L_497, L_498, L_499, L_502, 6, NULL);
		V_6 = L_503;
		int32_t L_504 = V_4;
		int32_t L_505 = V_6;
		int32_t L_506 = V_0;
		int32_t L_507 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_508 = __this->___X_9;
		int32_t L_509 = 6;
		int32_t L_510 = (L_508)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_509));
		int32_t L_511;
		L_511 = RipeMD128Digest_F4_m05D095DCFDDCD3E6D4E73AC7753A4B78CFF6126E(__this, L_504, L_505, L_506, L_507, L_510, 5, NULL);
		V_4 = L_511;
		int32_t L_512 = V_2;
		int32_t L_513 = V_4;
		int32_t L_514 = V_6;
		int32_t L_515 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_516 = __this->___X_9;
		int32_t L_517 = 2;
		int32_t L_518 = (L_516)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_517));
		int32_t L_519;
		L_519 = RipeMD128Digest_F4_m05D095DCFDDCD3E6D4E73AC7753A4B78CFF6126E(__this, L_512, L_513, L_514, L_515, L_518, ((int32_t)12), NULL);
		V_2 = L_519;
		int32_t L_520 = V_1;
		int32_t L_521 = V_3;
		int32_t L_522 = V_5;
		int32_t L_523 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_524 = __this->___X_9;
		int32_t L_525 = 5;
		int32_t L_526 = (L_524)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_525));
		int32_t L_527;
		L_527 = RipeMD128Digest_FF4_m554A43D96567012C1926724F89DDC3B4D1996677(__this, L_520, L_521, L_522, L_523, L_526, 8, NULL);
		V_1 = L_527;
		int32_t L_528 = V_7;
		int32_t L_529 = V_1;
		int32_t L_530 = V_3;
		int32_t L_531 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_532 = __this->___X_9;
		int32_t L_533 = ((int32_t)14);
		int32_t L_534 = (L_532)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_533));
		int32_t L_535;
		L_535 = RipeMD128Digest_FF4_m554A43D96567012C1926724F89DDC3B4D1996677(__this, L_528, L_529, L_530, L_531, L_534, ((int32_t)9), NULL);
		V_7 = L_535;
		int32_t L_536 = V_5;
		int32_t L_537 = V_7;
		int32_t L_538 = V_1;
		int32_t L_539 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_540 = __this->___X_9;
		int32_t L_541 = 7;
		int32_t L_542 = (L_540)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_541));
		int32_t L_543;
		L_543 = RipeMD128Digest_FF4_m554A43D96567012C1926724F89DDC3B4D1996677(__this, L_536, L_537, L_538, L_539, L_542, ((int32_t)9), NULL);
		V_5 = L_543;
		int32_t L_544 = V_3;
		int32_t L_545 = V_5;
		int32_t L_546 = V_7;
		int32_t L_547 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_548 = __this->___X_9;
		int32_t L_549 = 0;
		int32_t L_550 = (L_548)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_549));
		int32_t L_551;
		L_551 = RipeMD128Digest_FF4_m554A43D96567012C1926724F89DDC3B4D1996677(__this, L_544, L_545, L_546, L_547, L_550, ((int32_t)11), NULL);
		V_3 = L_551;
		int32_t L_552 = V_1;
		int32_t L_553 = V_3;
		int32_t L_554 = V_5;
		int32_t L_555 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_556 = __this->___X_9;
		int32_t L_557 = ((int32_t)9);
		int32_t L_558 = (L_556)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_557));
		int32_t L_559;
		L_559 = RipeMD128Digest_FF4_m554A43D96567012C1926724F89DDC3B4D1996677(__this, L_552, L_553, L_554, L_555, L_558, ((int32_t)13), NULL);
		V_1 = L_559;
		int32_t L_560 = V_7;
		int32_t L_561 = V_1;
		int32_t L_562 = V_3;
		int32_t L_563 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_564 = __this->___X_9;
		int32_t L_565 = 2;
		int32_t L_566 = (L_564)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_565));
		int32_t L_567;
		L_567 = RipeMD128Digest_FF4_m554A43D96567012C1926724F89DDC3B4D1996677(__this, L_560, L_561, L_562, L_563, L_566, ((int32_t)15), NULL);
		V_7 = L_567;
		int32_t L_568 = V_5;
		int32_t L_569 = V_7;
		int32_t L_570 = V_1;
		int32_t L_571 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_572 = __this->___X_9;
		int32_t L_573 = ((int32_t)11);
		int32_t L_574 = (L_572)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_573));
		int32_t L_575;
		L_575 = RipeMD128Digest_FF4_m554A43D96567012C1926724F89DDC3B4D1996677(__this, L_568, L_569, L_570, L_571, L_574, ((int32_t)15), NULL);
		V_5 = L_575;
		int32_t L_576 = V_3;
		int32_t L_577 = V_5;
		int32_t L_578 = V_7;
		int32_t L_579 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_580 = __this->___X_9;
		int32_t L_581 = 4;
		int32_t L_582 = (L_580)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_581));
		int32_t L_583;
		L_583 = RipeMD128Digest_FF4_m554A43D96567012C1926724F89DDC3B4D1996677(__this, L_576, L_577, L_578, L_579, L_582, 5, NULL);
		V_3 = L_583;
		int32_t L_584 = V_1;
		int32_t L_585 = V_3;
		int32_t L_586 = V_5;
		int32_t L_587 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_588 = __this->___X_9;
		int32_t L_589 = ((int32_t)13);
		int32_t L_590 = (L_588)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_589));
		int32_t L_591;
		L_591 = RipeMD128Digest_FF4_m554A43D96567012C1926724F89DDC3B4D1996677(__this, L_584, L_585, L_586, L_587, L_590, 7, NULL);
		V_1 = L_591;
		int32_t L_592 = V_7;
		int32_t L_593 = V_1;
		int32_t L_594 = V_3;
		int32_t L_595 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_596 = __this->___X_9;
		int32_t L_597 = 6;
		int32_t L_598 = (L_596)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_597));
		int32_t L_599;
		L_599 = RipeMD128Digest_FF4_m554A43D96567012C1926724F89DDC3B4D1996677(__this, L_592, L_593, L_594, L_595, L_598, 7, NULL);
		V_7 = L_599;
		int32_t L_600 = V_5;
		int32_t L_601 = V_7;
		int32_t L_602 = V_1;
		int32_t L_603 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_604 = __this->___X_9;
		int32_t L_605 = ((int32_t)15);
		int32_t L_606 = (L_604)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_605));
		int32_t L_607;
		L_607 = RipeMD128Digest_FF4_m554A43D96567012C1926724F89DDC3B4D1996677(__this, L_600, L_601, L_602, L_603, L_606, 8, NULL);
		V_5 = L_607;
		int32_t L_608 = V_3;
		int32_t L_609 = V_5;
		int32_t L_610 = V_7;
		int32_t L_611 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_612 = __this->___X_9;
		int32_t L_613 = 8;
		int32_t L_614 = (L_612)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_613));
		int32_t L_615;
		L_615 = RipeMD128Digest_FF4_m554A43D96567012C1926724F89DDC3B4D1996677(__this, L_608, L_609, L_610, L_611, L_614, ((int32_t)11), NULL);
		V_3 = L_615;
		int32_t L_616 = V_1;
		int32_t L_617 = V_3;
		int32_t L_618 = V_5;
		int32_t L_619 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_620 = __this->___X_9;
		int32_t L_621 = 1;
		int32_t L_622 = (L_620)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_621));
		int32_t L_623;
		L_623 = RipeMD128Digest_FF4_m554A43D96567012C1926724F89DDC3B4D1996677(__this, L_616, L_617, L_618, L_619, L_622, ((int32_t)14), NULL);
		V_1 = L_623;
		int32_t L_624 = V_7;
		int32_t L_625 = V_1;
		int32_t L_626 = V_3;
		int32_t L_627 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_628 = __this->___X_9;
		int32_t L_629 = ((int32_t)10);
		int32_t L_630 = (L_628)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_629));
		int32_t L_631;
		L_631 = RipeMD128Digest_FF4_m554A43D96567012C1926724F89DDC3B4D1996677(__this, L_624, L_625, L_626, L_627, L_630, ((int32_t)14), NULL);
		V_7 = L_631;
		int32_t L_632 = V_5;
		int32_t L_633 = V_7;
		int32_t L_634 = V_1;
		int32_t L_635 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_636 = __this->___X_9;
		int32_t L_637 = 3;
		int32_t L_638 = (L_636)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_637));
		int32_t L_639;
		L_639 = RipeMD128Digest_FF4_m554A43D96567012C1926724F89DDC3B4D1996677(__this, L_632, L_633, L_634, L_635, L_638, ((int32_t)12), NULL);
		V_5 = L_639;
		int32_t L_640 = V_3;
		int32_t L_641 = V_5;
		int32_t L_642 = V_7;
		int32_t L_643 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_644 = __this->___X_9;
		int32_t L_645 = ((int32_t)12);
		int32_t L_646 = (L_644)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_645));
		int32_t L_647;
		L_647 = RipeMD128Digest_FF4_m554A43D96567012C1926724F89DDC3B4D1996677(__this, L_640, L_641, L_642, L_643, L_646, 6, NULL);
		V_3 = L_647;
		int32_t L_648 = V_1;
		int32_t L_649 = V_3;
		int32_t L_650 = V_5;
		int32_t L_651 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_652 = __this->___X_9;
		int32_t L_653 = 6;
		int32_t L_654 = (L_652)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_653));
		int32_t L_655;
		L_655 = RipeMD128Digest_FF3_mFB878B1320EE010E64F3C7209ACD5739F150ACEE(__this, L_648, L_649, L_650, L_651, L_654, ((int32_t)9), NULL);
		V_1 = L_655;
		int32_t L_656 = V_7;
		int32_t L_657 = V_1;
		int32_t L_658 = V_3;
		int32_t L_659 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_660 = __this->___X_9;
		int32_t L_661 = ((int32_t)11);
		int32_t L_662 = (L_660)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_661));
		int32_t L_663;
		L_663 = RipeMD128Digest_FF3_mFB878B1320EE010E64F3C7209ACD5739F150ACEE(__this, L_656, L_657, L_658, L_659, L_662, ((int32_t)13), NULL);
		V_7 = L_663;
		int32_t L_664 = V_5;
		int32_t L_665 = V_7;
		int32_t L_666 = V_1;
		int32_t L_667 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_668 = __this->___X_9;
		int32_t L_669 = 3;
		int32_t L_670 = (L_668)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_669));
		int32_t L_671;
		L_671 = RipeMD128Digest_FF3_mFB878B1320EE010E64F3C7209ACD5739F150ACEE(__this, L_664, L_665, L_666, L_667, L_670, ((int32_t)15), NULL);
		V_5 = L_671;
		int32_t L_672 = V_3;
		int32_t L_673 = V_5;
		int32_t L_674 = V_7;
		int32_t L_675 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_676 = __this->___X_9;
		int32_t L_677 = 7;
		int32_t L_678 = (L_676)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_677));
		int32_t L_679;
		L_679 = RipeMD128Digest_FF3_mFB878B1320EE010E64F3C7209ACD5739F150ACEE(__this, L_672, L_673, L_674, L_675, L_678, 7, NULL);
		V_3 = L_679;
		int32_t L_680 = V_1;
		int32_t L_681 = V_3;
		int32_t L_682 = V_5;
		int32_t L_683 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_684 = __this->___X_9;
		int32_t L_685 = 0;
		int32_t L_686 = (L_684)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_685));
		int32_t L_687;
		L_687 = RipeMD128Digest_FF3_mFB878B1320EE010E64F3C7209ACD5739F150ACEE(__this, L_680, L_681, L_682, L_683, L_686, ((int32_t)12), NULL);
		V_1 = L_687;
		int32_t L_688 = V_7;
		int32_t L_689 = V_1;
		int32_t L_690 = V_3;
		int32_t L_691 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_692 = __this->___X_9;
		int32_t L_693 = ((int32_t)13);
		int32_t L_694 = (L_692)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_693));
		int32_t L_695;
		L_695 = RipeMD128Digest_FF3_mFB878B1320EE010E64F3C7209ACD5739F150ACEE(__this, L_688, L_689, L_690, L_691, L_694, 8, NULL);
		V_7 = L_695;
		int32_t L_696 = V_5;
		int32_t L_697 = V_7;
		int32_t L_698 = V_1;
		int32_t L_699 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_700 = __this->___X_9;
		int32_t L_701 = 5;
		int32_t L_702 = (L_700)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_701));
		int32_t L_703;
		L_703 = RipeMD128Digest_FF3_mFB878B1320EE010E64F3C7209ACD5739F150ACEE(__this, L_696, L_697, L_698, L_699, L_702, ((int32_t)9), NULL);
		V_5 = L_703;
		int32_t L_704 = V_3;
		int32_t L_705 = V_5;
		int32_t L_706 = V_7;
		int32_t L_707 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_708 = __this->___X_9;
		int32_t L_709 = ((int32_t)10);
		int32_t L_710 = (L_708)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_709));
		int32_t L_711;
		L_711 = RipeMD128Digest_FF3_mFB878B1320EE010E64F3C7209ACD5739F150ACEE(__this, L_704, L_705, L_706, L_707, L_710, ((int32_t)11), NULL);
		V_3 = L_711;
		int32_t L_712 = V_1;
		int32_t L_713 = V_3;
		int32_t L_714 = V_5;
		int32_t L_715 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_716 = __this->___X_9;
		int32_t L_717 = ((int32_t)14);
		int32_t L_718 = (L_716)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_717));
		int32_t L_719;
		L_719 = RipeMD128Digest_FF3_mFB878B1320EE010E64F3C7209ACD5739F150ACEE(__this, L_712, L_713, L_714, L_715, L_718, 7, NULL);
		V_1 = L_719;
		int32_t L_720 = V_7;
		int32_t L_721 = V_1;
		int32_t L_722 = V_3;
		int32_t L_723 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_724 = __this->___X_9;
		int32_t L_725 = ((int32_t)15);
		int32_t L_726 = (L_724)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_725));
		int32_t L_727;
		L_727 = RipeMD128Digest_FF3_mFB878B1320EE010E64F3C7209ACD5739F150ACEE(__this, L_720, L_721, L_722, L_723, L_726, 7, NULL);
		V_7 = L_727;
		int32_t L_728 = V_5;
		int32_t L_729 = V_7;
		int32_t L_730 = V_1;
		int32_t L_731 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_732 = __this->___X_9;
		int32_t L_733 = 8;
		int32_t L_734 = (L_732)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_733));
		int32_t L_735;
		L_735 = RipeMD128Digest_FF3_mFB878B1320EE010E64F3C7209ACD5739F150ACEE(__this, L_728, L_729, L_730, L_731, L_734, ((int32_t)12), NULL);
		V_5 = L_735;
		int32_t L_736 = V_3;
		int32_t L_737 = V_5;
		int32_t L_738 = V_7;
		int32_t L_739 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_740 = __this->___X_9;
		int32_t L_741 = ((int32_t)12);
		int32_t L_742 = (L_740)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_741));
		int32_t L_743;
		L_743 = RipeMD128Digest_FF3_mFB878B1320EE010E64F3C7209ACD5739F150ACEE(__this, L_736, L_737, L_738, L_739, L_742, 7, NULL);
		V_3 = L_743;
		int32_t L_744 = V_1;
		int32_t L_745 = V_3;
		int32_t L_746 = V_5;
		int32_t L_747 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_748 = __this->___X_9;
		int32_t L_749 = 4;
		int32_t L_750 = (L_748)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_749));
		int32_t L_751;
		L_751 = RipeMD128Digest_FF3_mFB878B1320EE010E64F3C7209ACD5739F150ACEE(__this, L_744, L_745, L_746, L_747, L_750, 6, NULL);
		V_1 = L_751;
		int32_t L_752 = V_7;
		int32_t L_753 = V_1;
		int32_t L_754 = V_3;
		int32_t L_755 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_756 = __this->___X_9;
		int32_t L_757 = ((int32_t)9);
		int32_t L_758 = (L_756)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_757));
		int32_t L_759;
		L_759 = RipeMD128Digest_FF3_mFB878B1320EE010E64F3C7209ACD5739F150ACEE(__this, L_752, L_753, L_754, L_755, L_758, ((int32_t)15), NULL);
		V_7 = L_759;
		int32_t L_760 = V_5;
		int32_t L_761 = V_7;
		int32_t L_762 = V_1;
		int32_t L_763 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_764 = __this->___X_9;
		int32_t L_765 = 1;
		int32_t L_766 = (L_764)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_765));
		int32_t L_767;
		L_767 = RipeMD128Digest_FF3_mFB878B1320EE010E64F3C7209ACD5739F150ACEE(__this, L_760, L_761, L_762, L_763, L_766, ((int32_t)13), NULL);
		V_5 = L_767;
		int32_t L_768 = V_3;
		int32_t L_769 = V_5;
		int32_t L_770 = V_7;
		int32_t L_771 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_772 = __this->___X_9;
		int32_t L_773 = 2;
		int32_t L_774 = (L_772)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_773));
		int32_t L_775;
		L_775 = RipeMD128Digest_FF3_mFB878B1320EE010E64F3C7209ACD5739F150ACEE(__this, L_768, L_769, L_770, L_771, L_774, ((int32_t)11), NULL);
		V_3 = L_775;
		int32_t L_776 = V_1;
		int32_t L_777 = V_3;
		int32_t L_778 = V_5;
		int32_t L_779 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_780 = __this->___X_9;
		int32_t L_781 = ((int32_t)15);
		int32_t L_782 = (L_780)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_781));
		int32_t L_783;
		L_783 = RipeMD128Digest_FF2_mE693D130117CF7BA1D5CE56CD81A74C2CEA99DF3(__this, L_776, L_777, L_778, L_779, L_782, ((int32_t)9), NULL);
		V_1 = L_783;
		int32_t L_784 = V_7;
		int32_t L_785 = V_1;
		int32_t L_786 = V_3;
		int32_t L_787 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_788 = __this->___X_9;
		int32_t L_789 = 5;
		int32_t L_790 = (L_788)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_789));
		int32_t L_791;
		L_791 = RipeMD128Digest_FF2_mE693D130117CF7BA1D5CE56CD81A74C2CEA99DF3(__this, L_784, L_785, L_786, L_787, L_790, 7, NULL);
		V_7 = L_791;
		int32_t L_792 = V_5;
		int32_t L_793 = V_7;
		int32_t L_794 = V_1;
		int32_t L_795 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_796 = __this->___X_9;
		int32_t L_797 = 1;
		int32_t L_798 = (L_796)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_797));
		int32_t L_799;
		L_799 = RipeMD128Digest_FF2_mE693D130117CF7BA1D5CE56CD81A74C2CEA99DF3(__this, L_792, L_793, L_794, L_795, L_798, ((int32_t)15), NULL);
		V_5 = L_799;
		int32_t L_800 = V_3;
		int32_t L_801 = V_5;
		int32_t L_802 = V_7;
		int32_t L_803 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_804 = __this->___X_9;
		int32_t L_805 = 3;
		int32_t L_806 = (L_804)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_805));
		int32_t L_807;
		L_807 = RipeMD128Digest_FF2_mE693D130117CF7BA1D5CE56CD81A74C2CEA99DF3(__this, L_800, L_801, L_802, L_803, L_806, ((int32_t)11), NULL);
		V_3 = L_807;
		int32_t L_808 = V_1;
		int32_t L_809 = V_3;
		int32_t L_810 = V_5;
		int32_t L_811 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_812 = __this->___X_9;
		int32_t L_813 = 7;
		int32_t L_814 = (L_812)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_813));
		int32_t L_815;
		L_815 = RipeMD128Digest_FF2_mE693D130117CF7BA1D5CE56CD81A74C2CEA99DF3(__this, L_808, L_809, L_810, L_811, L_814, 8, NULL);
		V_1 = L_815;
		int32_t L_816 = V_7;
		int32_t L_817 = V_1;
		int32_t L_818 = V_3;
		int32_t L_819 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_820 = __this->___X_9;
		int32_t L_821 = ((int32_t)14);
		int32_t L_822 = (L_820)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_821));
		int32_t L_823;
		L_823 = RipeMD128Digest_FF2_mE693D130117CF7BA1D5CE56CD81A74C2CEA99DF3(__this, L_816, L_817, L_818, L_819, L_822, 6, NULL);
		V_7 = L_823;
		int32_t L_824 = V_5;
		int32_t L_825 = V_7;
		int32_t L_826 = V_1;
		int32_t L_827 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_828 = __this->___X_9;
		int32_t L_829 = 6;
		int32_t L_830 = (L_828)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_829));
		int32_t L_831;
		L_831 = RipeMD128Digest_FF2_mE693D130117CF7BA1D5CE56CD81A74C2CEA99DF3(__this, L_824, L_825, L_826, L_827, L_830, 6, NULL);
		V_5 = L_831;
		int32_t L_832 = V_3;
		int32_t L_833 = V_5;
		int32_t L_834 = V_7;
		int32_t L_835 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_836 = __this->___X_9;
		int32_t L_837 = ((int32_t)9);
		int32_t L_838 = (L_836)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_837));
		int32_t L_839;
		L_839 = RipeMD128Digest_FF2_mE693D130117CF7BA1D5CE56CD81A74C2CEA99DF3(__this, L_832, L_833, L_834, L_835, L_838, ((int32_t)14), NULL);
		V_3 = L_839;
		int32_t L_840 = V_1;
		int32_t L_841 = V_3;
		int32_t L_842 = V_5;
		int32_t L_843 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_844 = __this->___X_9;
		int32_t L_845 = ((int32_t)11);
		int32_t L_846 = (L_844)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_845));
		int32_t L_847;
		L_847 = RipeMD128Digest_FF2_mE693D130117CF7BA1D5CE56CD81A74C2CEA99DF3(__this, L_840, L_841, L_842, L_843, L_846, ((int32_t)12), NULL);
		V_1 = L_847;
		int32_t L_848 = V_7;
		int32_t L_849 = V_1;
		int32_t L_850 = V_3;
		int32_t L_851 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_852 = __this->___X_9;
		int32_t L_853 = 8;
		int32_t L_854 = (L_852)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_853));
		int32_t L_855;
		L_855 = RipeMD128Digest_FF2_mE693D130117CF7BA1D5CE56CD81A74C2CEA99DF3(__this, L_848, L_849, L_850, L_851, L_854, ((int32_t)13), NULL);
		V_7 = L_855;
		int32_t L_856 = V_5;
		int32_t L_857 = V_7;
		int32_t L_858 = V_1;
		int32_t L_859 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_860 = __this->___X_9;
		int32_t L_861 = ((int32_t)12);
		int32_t L_862 = (L_860)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_861));
		int32_t L_863;
		L_863 = RipeMD128Digest_FF2_mE693D130117CF7BA1D5CE56CD81A74C2CEA99DF3(__this, L_856, L_857, L_858, L_859, L_862, 5, NULL);
		V_5 = L_863;
		int32_t L_864 = V_3;
		int32_t L_865 = V_5;
		int32_t L_866 = V_7;
		int32_t L_867 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_868 = __this->___X_9;
		int32_t L_869 = 2;
		int32_t L_870 = (L_868)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_869));
		int32_t L_871;
		L_871 = RipeMD128Digest_FF2_mE693D130117CF7BA1D5CE56CD81A74C2CEA99DF3(__this, L_864, L_865, L_866, L_867, L_870, ((int32_t)14), NULL);
		V_3 = L_871;
		int32_t L_872 = V_1;
		int32_t L_873 = V_3;
		int32_t L_874 = V_5;
		int32_t L_875 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_876 = __this->___X_9;
		int32_t L_877 = ((int32_t)10);
		int32_t L_878 = (L_876)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_877));
		int32_t L_879;
		L_879 = RipeMD128Digest_FF2_mE693D130117CF7BA1D5CE56CD81A74C2CEA99DF3(__this, L_872, L_873, L_874, L_875, L_878, ((int32_t)13), NULL);
		V_1 = L_879;
		int32_t L_880 = V_7;
		int32_t L_881 = V_1;
		int32_t L_882 = V_3;
		int32_t L_883 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_884 = __this->___X_9;
		int32_t L_885 = 0;
		int32_t L_886 = (L_884)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_885));
		int32_t L_887;
		L_887 = RipeMD128Digest_FF2_mE693D130117CF7BA1D5CE56CD81A74C2CEA99DF3(__this, L_880, L_881, L_882, L_883, L_886, ((int32_t)13), NULL);
		V_7 = L_887;
		int32_t L_888 = V_5;
		int32_t L_889 = V_7;
		int32_t L_890 = V_1;
		int32_t L_891 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_892 = __this->___X_9;
		int32_t L_893 = 4;
		int32_t L_894 = (L_892)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_893));
		int32_t L_895;
		L_895 = RipeMD128Digest_FF2_mE693D130117CF7BA1D5CE56CD81A74C2CEA99DF3(__this, L_888, L_889, L_890, L_891, L_894, 7, NULL);
		V_5 = L_895;
		int32_t L_896 = V_3;
		int32_t L_897 = V_5;
		int32_t L_898 = V_7;
		int32_t L_899 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_900 = __this->___X_9;
		int32_t L_901 = ((int32_t)13);
		int32_t L_902 = (L_900)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_901));
		int32_t L_903;
		L_903 = RipeMD128Digest_FF2_mE693D130117CF7BA1D5CE56CD81A74C2CEA99DF3(__this, L_896, L_897, L_898, L_899, L_902, 5, NULL);
		V_3 = L_903;
		int32_t L_904 = V_1;
		int32_t L_905 = V_3;
		int32_t L_906 = V_5;
		int32_t L_907 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_908 = __this->___X_9;
		int32_t L_909 = 8;
		int32_t L_910 = (L_908)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_909));
		int32_t L_911;
		L_911 = RipeMD128Digest_FF1_mCB220455CE395A1FB419000484C7F22A654E7F3E(__this, L_904, L_905, L_906, L_907, L_910, ((int32_t)15), NULL);
		V_1 = L_911;
		int32_t L_912 = V_7;
		int32_t L_913 = V_1;
		int32_t L_914 = V_3;
		int32_t L_915 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_916 = __this->___X_9;
		int32_t L_917 = 6;
		int32_t L_918 = (L_916)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_917));
		int32_t L_919;
		L_919 = RipeMD128Digest_FF1_mCB220455CE395A1FB419000484C7F22A654E7F3E(__this, L_912, L_913, L_914, L_915, L_918, 5, NULL);
		V_7 = L_919;
		int32_t L_920 = V_5;
		int32_t L_921 = V_7;
		int32_t L_922 = V_1;
		int32_t L_923 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_924 = __this->___X_9;
		int32_t L_925 = 4;
		int32_t L_926 = (L_924)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_925));
		int32_t L_927;
		L_927 = RipeMD128Digest_FF1_mCB220455CE395A1FB419000484C7F22A654E7F3E(__this, L_920, L_921, L_922, L_923, L_926, 8, NULL);
		V_5 = L_927;
		int32_t L_928 = V_3;
		int32_t L_929 = V_5;
		int32_t L_930 = V_7;
		int32_t L_931 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_932 = __this->___X_9;
		int32_t L_933 = 1;
		int32_t L_934 = (L_932)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_933));
		int32_t L_935;
		L_935 = RipeMD128Digest_FF1_mCB220455CE395A1FB419000484C7F22A654E7F3E(__this, L_928, L_929, L_930, L_931, L_934, ((int32_t)11), NULL);
		V_3 = L_935;
		int32_t L_936 = V_1;
		int32_t L_937 = V_3;
		int32_t L_938 = V_5;
		int32_t L_939 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_940 = __this->___X_9;
		int32_t L_941 = 3;
		int32_t L_942 = (L_940)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_941));
		int32_t L_943;
		L_943 = RipeMD128Digest_FF1_mCB220455CE395A1FB419000484C7F22A654E7F3E(__this, L_936, L_937, L_938, L_939, L_942, ((int32_t)14), NULL);
		V_1 = L_943;
		int32_t L_944 = V_7;
		int32_t L_945 = V_1;
		int32_t L_946 = V_3;
		int32_t L_947 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_948 = __this->___X_9;
		int32_t L_949 = ((int32_t)11);
		int32_t L_950 = (L_948)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_949));
		int32_t L_951;
		L_951 = RipeMD128Digest_FF1_mCB220455CE395A1FB419000484C7F22A654E7F3E(__this, L_944, L_945, L_946, L_947, L_950, ((int32_t)14), NULL);
		V_7 = L_951;
		int32_t L_952 = V_5;
		int32_t L_953 = V_7;
		int32_t L_954 = V_1;
		int32_t L_955 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_956 = __this->___X_9;
		int32_t L_957 = ((int32_t)15);
		int32_t L_958 = (L_956)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_957));
		int32_t L_959;
		L_959 = RipeMD128Digest_FF1_mCB220455CE395A1FB419000484C7F22A654E7F3E(__this, L_952, L_953, L_954, L_955, L_958, 6, NULL);
		V_5 = L_959;
		int32_t L_960 = V_3;
		int32_t L_961 = V_5;
		int32_t L_962 = V_7;
		int32_t L_963 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_964 = __this->___X_9;
		int32_t L_965 = 0;
		int32_t L_966 = (L_964)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_965));
		int32_t L_967;
		L_967 = RipeMD128Digest_FF1_mCB220455CE395A1FB419000484C7F22A654E7F3E(__this, L_960, L_961, L_962, L_963, L_966, ((int32_t)14), NULL);
		V_3 = L_967;
		int32_t L_968 = V_1;
		int32_t L_969 = V_3;
		int32_t L_970 = V_5;
		int32_t L_971 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_972 = __this->___X_9;
		int32_t L_973 = 5;
		int32_t L_974 = (L_972)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_973));
		int32_t L_975;
		L_975 = RipeMD128Digest_FF1_mCB220455CE395A1FB419000484C7F22A654E7F3E(__this, L_968, L_969, L_970, L_971, L_974, 6, NULL);
		V_1 = L_975;
		int32_t L_976 = V_7;
		int32_t L_977 = V_1;
		int32_t L_978 = V_3;
		int32_t L_979 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_980 = __this->___X_9;
		int32_t L_981 = ((int32_t)12);
		int32_t L_982 = (L_980)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_981));
		int32_t L_983;
		L_983 = RipeMD128Digest_FF1_mCB220455CE395A1FB419000484C7F22A654E7F3E(__this, L_976, L_977, L_978, L_979, L_982, ((int32_t)9), NULL);
		V_7 = L_983;
		int32_t L_984 = V_5;
		int32_t L_985 = V_7;
		int32_t L_986 = V_1;
		int32_t L_987 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_988 = __this->___X_9;
		int32_t L_989 = 2;
		int32_t L_990 = (L_988)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_989));
		int32_t L_991;
		L_991 = RipeMD128Digest_FF1_mCB220455CE395A1FB419000484C7F22A654E7F3E(__this, L_984, L_985, L_986, L_987, L_990, ((int32_t)12), NULL);
		V_5 = L_991;
		int32_t L_992 = V_3;
		int32_t L_993 = V_5;
		int32_t L_994 = V_7;
		int32_t L_995 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_996 = __this->___X_9;
		int32_t L_997 = ((int32_t)13);
		int32_t L_998 = (L_996)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_997));
		int32_t L_999;
		L_999 = RipeMD128Digest_FF1_mCB220455CE395A1FB419000484C7F22A654E7F3E(__this, L_992, L_993, L_994, L_995, L_998, ((int32_t)9), NULL);
		V_3 = L_999;
		int32_t L_1000 = V_1;
		int32_t L_1001 = V_3;
		int32_t L_1002 = V_5;
		int32_t L_1003 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1004 = __this->___X_9;
		int32_t L_1005 = ((int32_t)9);
		int32_t L_1006 = (L_1004)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1005));
		int32_t L_1007;
		L_1007 = RipeMD128Digest_FF1_mCB220455CE395A1FB419000484C7F22A654E7F3E(__this, L_1000, L_1001, L_1002, L_1003, L_1006, ((int32_t)12), NULL);
		V_1 = L_1007;
		int32_t L_1008 = V_7;
		int32_t L_1009 = V_1;
		int32_t L_1010 = V_3;
		int32_t L_1011 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1012 = __this->___X_9;
		int32_t L_1013 = 7;
		int32_t L_1014 = (L_1012)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1013));
		int32_t L_1015;
		L_1015 = RipeMD128Digest_FF1_mCB220455CE395A1FB419000484C7F22A654E7F3E(__this, L_1008, L_1009, L_1010, L_1011, L_1014, 5, NULL);
		V_7 = L_1015;
		int32_t L_1016 = V_5;
		int32_t L_1017 = V_7;
		int32_t L_1018 = V_1;
		int32_t L_1019 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1020 = __this->___X_9;
		int32_t L_1021 = ((int32_t)10);
		int32_t L_1022 = (L_1020)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1021));
		int32_t L_1023;
		L_1023 = RipeMD128Digest_FF1_mCB220455CE395A1FB419000484C7F22A654E7F3E(__this, L_1016, L_1017, L_1018, L_1019, L_1022, ((int32_t)15), NULL);
		V_5 = L_1023;
		int32_t L_1024 = V_3;
		int32_t L_1025 = V_5;
		int32_t L_1026 = V_7;
		int32_t L_1027 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1028 = __this->___X_9;
		int32_t L_1029 = ((int32_t)14);
		int32_t L_1030 = (L_1028)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1029));
		int32_t L_1031;
		L_1031 = RipeMD128Digest_FF1_mCB220455CE395A1FB419000484C7F22A654E7F3E(__this, L_1024, L_1025, L_1026, L_1027, L_1030, 8, NULL);
		V_3 = L_1031;
		int32_t L_1032 = V_7;
		int32_t L_1033 = V_4;
		int32_t L_1034 = __this->___H1_6;
		V_7 = ((int32_t)il2cpp_codegen_add(L_1032, ((int32_t)il2cpp_codegen_add(L_1033, L_1034))));
		int32_t L_1035 = __this->___H2_7;
		int32_t L_1036 = V_6;
		int32_t L_1037 = V_1;
		__this->___H1_6 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1035, L_1036)), L_1037));
		int32_t L_1038 = __this->___H3_8;
		int32_t L_1039 = V_0;
		int32_t L_1040 = V_3;
		__this->___H2_7 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1038, L_1039)), L_1040));
		int32_t L_1041 = __this->___H0_5;
		int32_t L_1042 = V_2;
		int32_t L_1043 = V_5;
		__this->___H3_8 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1041, L_1042)), L_1043));
		int32_t L_1044 = V_7;
		__this->___H0_5 = L_1044;
		__this->___xOff_10 = 0;
		V_8 = 0;
		goto IL_0c52;
	}

IL_0c42:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1045 = __this->___X_9;
		int32_t L_1046 = V_8;
		(L_1045)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1046), (int32_t)0);
		int32_t L_1047 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_1047, 1));
	}

IL_0c52:
	{
		int32_t L_1048 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1049 = __this->___X_9;
		if ((!(((uint32_t)L_1048) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1049)->max_length))))))
		{
			goto IL_0c42;
		}
	}
	{
		return;
	}
}
// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RipeMD128Digest_Copy_m63A99EE0A8E0C1DAC01AB6E33B2BBA15F375AEDC (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* L_0 = (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5*)il2cpp_codegen_object_new(RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5_il2cpp_TypeInfo_var);
		RipeMD128Digest__ctor_m68A8B6F8390C125DF5022DEB1C7D89A65FD29027(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Digests.RipeMD128Digest::Reset(Org.BouncyCastle.Utilities.IMemoable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RipeMD128Digest_Reset_m0855BD84D102C7E8D3E1ED93320C73FC2E072857 (RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___other0;
		V_0 = ((RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5*)CastclassClass((RuntimeObject*)L_0, RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5_il2cpp_TypeInfo_var));
		RipeMD128Digest_t165CA71E2F23DEC93BFF7D3B93C58B056DB84BB5* L_1 = V_0;
		RipeMD128Digest_CopyIn_m5F89593A11CC7C6F3243D9D8DA20FB5B1E993024(__this, L_1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
