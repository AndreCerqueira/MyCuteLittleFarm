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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
// System.UInt64[][]
struct UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
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
// Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter[]
struct ParameterU5BU5D_t63C04172EA11C424371D4CA4374B577B8E6695AF;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmExponentiator
struct BasicGcmExponentiator_t889C88199B1E25F4C5610EFD2AB4144F96F89832;
// Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmMultiplier
struct BasicGcmMultiplier_t70121FD66BA3790D9F0CD78FA12FD2676920451E;
// Org.BouncyCastle.Crypto.BufferedBlockCipher
struct BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7;
// Org.BouncyCastle.Crypto.BufferedCipherBase
struct BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5;
// Org.BouncyCastle.Crypto.Macs.CMac
struct CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1;
// Org.BouncyCastle.Crypto.Modes.CbcBlockCipher
struct CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548;
// Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac
struct CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D;
// Org.BouncyCastle.Crypto.Modes.CcmBlockCipher
struct CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4;
// Org.BouncyCastle.Crypto.Modes.CfbBlockCipher
struct CfbBlockCipher_tCEBBD2ADC3163E5194A663130E8AA543B1C58C12;
// Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305
struct ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122;
// Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine
struct ChaCha7539Engine_tD1D7125C6C180460972E80EEB9A49E9B8443763E;
// Org.BouncyCastle.Crypto.Modes.CtsBlockCipher
struct CtsBlockCipher_tD61E222E0CD88BC601E0F7A4073205A1A795A5D7;
// Org.BouncyCastle.Crypto.DataLengthException
struct DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC;
// Org.BouncyCastle.Crypto.Modes.EaxBlockCipher
struct EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0;
// Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher
struct GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F;
// Org.BouncyCastle.Crypto.Modes.GcmBlockCipher
struct GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3;
// Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities
struct GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997;
// Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
struct IBlockCipherPadding_t5B2EB9D7A2BB11DD4C72B65E622CED29672E7D6B;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_tE4751F03244264E12A0669633A68076FD032E2CF;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Org.BouncyCastle.Crypto.Modes.Gcm.IGcmExponentiator
struct IGcmExponentiator_tEDB2CF41858778F18EAD938A6589A762F43C776C;
// Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier
struct IGcmMultiplier_tAF775B12F6AF749A4932AFBD6899B0D54A00826B;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// Org.BouncyCastle.Crypto.IMac
struct IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992;
// Org.BouncyCastle.Crypto.InvalidCipherTextException
struct InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher
struct KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D;
// Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher
struct KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// Org.BouncyCastle.Crypto.Modes.OcbBlockCipher
struct OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8;
// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1;
// Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom
struct ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5;
// Org.BouncyCastle.Crypto.Macs.Poly1305
struct Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// Org.BouncyCastle.Crypto.Modes.SicBlockCipher
struct SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105;
// Org.BouncyCastle.Crypto.Macs.SipHash
struct SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A;
// Org.BouncyCastle.Crypto.Digests.SkeinEngine
struct SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB;
// Org.BouncyCastle.Crypto.Macs.SkeinMac
struct SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E;
// Org.BouncyCastle.Crypto.Parameters.SkeinParameters
struct SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator
struct Tables1kGcmExponentiator_t15B1305B08575DCBE165CF932CEB04DB570FAA1B;
// Org.BouncyCastle.Crypto.Modes.Gcm.Tables4kGcmMultiplier
struct Tables4kGcmMultiplier_tB107C775EBF316C21F1C7B58573091D5E450EF0A;
// Org.BouncyCastle.Crypto.Modes.Gcm.Tables64kGcmMultiplier
struct Tables64kGcmMultiplier_tA2C58BD435F6D7B7BE6AC407A0650827AA5833AE;
// Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier
struct Tables8kGcmMultiplier_tB07FBFB1B8DE3234CBD37D39FCE0E7E91AEEF90A;
// Org.BouncyCastle.Crypto.Engines.ThreefishEngine
struct ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C;
// Org.BouncyCastle.Crypto.Macs.VmpcMac
struct VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI
struct UBI_t30B89363C0696B93C7B682B16D4EE222C270A552;
// Org.BouncyCastle.Crypto.Parameters.SkeinParameters/Builder
struct Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BasicGcmExponentiator_t889C88199B1E25F4C5610EFD2AB4144F96F89832_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CfbBlockCipher_tCEBBD2ADC3163E5194A663130E8AA543B1C58C12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChaCha7539Engine_tD1D7125C6C180460972E80EEB9A49E9B8443763E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGcmExponentiator_tEDB2CF41858778F18EAD938A6589A762F43C776C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGcmMultiplier_tAF775B12F6AF749A4932AFBD6899B0D54A00826B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OfbBlockCipher_t72A403CDCDA517916A318565473D48F651DC4A4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tables4kGcmMultiplier_tB107C775EBF316C21F1C7B58573091D5E450EF0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0104DE6F88E37C8826B0F6A3081F373CE56572F5;
IL2CPP_EXTERN_C String_t* _stringLiteral011526050B863D9BA2E645C6CC482792337B7E74;
IL2CPP_EXTERN_C String_t* _stringLiteral01E187759622701239321907D0B46741BA9B86F5;
IL2CPP_EXTERN_C String_t* _stringLiteral07057C293AF5E36D3E606C18B5D474CAE01DB34A;
IL2CPP_EXTERN_C String_t* _stringLiteral0730C8CFFE15F08D48A8C1DECEDA7AD46E318B9E;
IL2CPP_EXTERN_C String_t* _stringLiteral0BBD25A55CCC50AE88CFB6B02D2F00C50C04F354;
IL2CPP_EXTERN_C String_t* _stringLiteral0C2C8987828E01D85FC122E11371CD17A9B27B40;
IL2CPP_EXTERN_C String_t* _stringLiteral11D5CB02A6236ACF1A0A6EA12F8CAB5C0C221C7B;
IL2CPP_EXTERN_C String_t* _stringLiteral12326CDA4F85AD3AF86804E247FCC39F70036FF2;
IL2CPP_EXTERN_C String_t* _stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2;
IL2CPP_EXTERN_C String_t* _stringLiteral2367BCDD7B214D5EEC78058C7E0F28C2DB18486F;
IL2CPP_EXTERN_C String_t* _stringLiteral2377DBFD6A0480712274E803BEE9BEB10CA08A01;
IL2CPP_EXTERN_C String_t* _stringLiteral248BF5CC4E65CCA322C6142014C84E32232A5525;
IL2CPP_EXTERN_C String_t* _stringLiteral2ADD38D5A5D6AF5D786F780BFBD396FC5C0F2910;
IL2CPP_EXTERN_C String_t* _stringLiteral2B727B78FCBFAE5439361EB75523903A4C022DC2;
IL2CPP_EXTERN_C String_t* _stringLiteral2C11CC798877345509F1FA1FB1F897F683FF966C;
IL2CPP_EXTERN_C String_t* _stringLiteral2E8A844C3E2202C0C8A0B5D56D2645FAC07131A8;
IL2CPP_EXTERN_C String_t* _stringLiteral2EFA2E30F19E3F93EF3256C6E6BE9970DF3B4D3E;
IL2CPP_EXTERN_C String_t* _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2;
IL2CPP_EXTERN_C String_t* _stringLiteral36570DC4B6CBC47EEA6EED659B46CE6C34F3F431;
IL2CPP_EXTERN_C String_t* _stringLiteral38D09B1907F51A21FA890AD1B24D91155B49D4DB;
IL2CPP_EXTERN_C String_t* _stringLiteral39160B1C294E5C9ED23B6F6B6E3726472D922B3C;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3DBF817624FAAA546A668A8286A4BB7A28D64BE5;
IL2CPP_EXTERN_C String_t* _stringLiteral41A2189BC076CA51A8306F66C8964C4E63B2B3CE;
IL2CPP_EXTERN_C String_t* _stringLiteral45A76D5C1510A30E3950399F4AED843F92E849A6;
IL2CPP_EXTERN_C String_t* _stringLiteral470EB6F1C03E003EA672DF0087B813915B41D827;
IL2CPP_EXTERN_C String_t* _stringLiteral4901277BD17A5B2F9FD51DCD98D6CE81842202C4;
IL2CPP_EXTERN_C String_t* _stringLiteral4AEFBB61F65FCA6B5F41F05AB7DEEECF9118783C;
IL2CPP_EXTERN_C String_t* _stringLiteral4BF2CE86BA69492C7DE55AB9B517CC2DAC4FB810;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBDAE183BC30C2AD6BD85811A7DA978BDAB9809;
IL2CPP_EXTERN_C String_t* _stringLiteral5024526D2ED5A492FD8EFB18EDFB1BE1B965E2A5;
IL2CPP_EXTERN_C String_t* _stringLiteral508FADA7965A5CC9B9F3F205B9D7F61B002F4352;
IL2CPP_EXTERN_C String_t* _stringLiteral50F39E434D2F5790A2F8998AC61DFE974815FC8C;
IL2CPP_EXTERN_C String_t* _stringLiteral5137C567046C7635F31816E42232FEA1D2BBB6CD;
IL2CPP_EXTERN_C String_t* _stringLiteral52398EFA68ACC6FAF0EB6C85C594D6112C3901C6;
IL2CPP_EXTERN_C String_t* _stringLiteral593CBFE95E3FA15438E893EF8E8CBD31F861CDE1;
IL2CPP_EXTERN_C String_t* _stringLiteral5943A7E2C9B6B97618BE5C61998DFB431B4ECBB6;
IL2CPP_EXTERN_C String_t* _stringLiteral5C72C5A69B309415C82E1CAE445D5ABD75CAB848;
IL2CPP_EXTERN_C String_t* _stringLiteral6348AE9AC0D51DA91EE3554B61F63EF74190CB52;
IL2CPP_EXTERN_C String_t* _stringLiteral6523809DBB0E2DBB30EF30F0EA910994FB2FFFEE;
IL2CPP_EXTERN_C String_t* _stringLiteral65D1B0E1FA928C5674E15C89FEC7B4B01353ACBF;
IL2CPP_EXTERN_C String_t* _stringLiteral6A97AB369F86F4B2FA00721206E1CD3F3E97A1E5;
IL2CPP_EXTERN_C String_t* _stringLiteral6CA65E1F50E7ADFC2CF8ECEE79ABAC4AB9046B12;
IL2CPP_EXTERN_C String_t* _stringLiteral6D60AC5770D4F760AEFAF7885FA604E7091BBEDE;
IL2CPP_EXTERN_C String_t* _stringLiteral6DE84AC4FDE23F1A60950762D258FC808D7B0F13;
IL2CPP_EXTERN_C String_t* _stringLiteral6FAC12148561FEC937CFC59BDE618CF0AF9BA64D;
IL2CPP_EXTERN_C String_t* _stringLiteral727BC807AF1AC64C74DCB7251583325B50E82A42;
IL2CPP_EXTERN_C String_t* _stringLiteral7B5117ACCE82D41F99CC1D74CC4CE4D861965B38;
IL2CPP_EXTERN_C String_t* _stringLiteral7D865DD69B8706FF6897C2242747ACF3F6807F3C;
IL2CPP_EXTERN_C String_t* _stringLiteral7DEB1C823E8104E920B6CFCBA4127F8A45374E76;
IL2CPP_EXTERN_C String_t* _stringLiteral7F9A983F97E640754D4FF0C422EC4417D6927478;
IL2CPP_EXTERN_C String_t* _stringLiteral86676EF5625B07BB6A212B0248104BFAD8CDFD5C;
IL2CPP_EXTERN_C String_t* _stringLiteral885C1F522AFB0B733EF983628BB641707475502A;
IL2CPP_EXTERN_C String_t* _stringLiteral891B56C4C0C887D6C4D327807291921380199FCC;
IL2CPP_EXTERN_C String_t* _stringLiteral8A2FA226E0BD2F452D9FB468B577991FF60938CD;
IL2CPP_EXTERN_C String_t* _stringLiteral8B0AC3917C2E7F324805F362090E51CB24D91200;
IL2CPP_EXTERN_C String_t* _stringLiteral8C0BFDD6B9C6953ED068A731EBCAF58E07A45750;
IL2CPP_EXTERN_C String_t* _stringLiteral8DE60186ED5AF46F40E21D35A05C1DFAEE6A7F2D;
IL2CPP_EXTERN_C String_t* _stringLiteral8E0BB1099A2BB7E26AB1115B17E7A4107597EBF1;
IL2CPP_EXTERN_C String_t* _stringLiteral8F03BAAAD1A2D95F1010A467F3B8DD7CA392CD05;
IL2CPP_EXTERN_C String_t* _stringLiteral8FE94193A3EF39943F898714AC9062F7EBD96279;
IL2CPP_EXTERN_C String_t* _stringLiteral8FED077186F1EAAD044920460BF3DE2FB931CC0C;
IL2CPP_EXTERN_C String_t* _stringLiteral9037918EF368FDB9869069C353AC1D0AA985BD83;
IL2CPP_EXTERN_C String_t* _stringLiteral9285BEB84CFC90BDC52DB62913B2A7EFFB48DF38;
IL2CPP_EXTERN_C String_t* _stringLiteral9519B868DDAF2EA30EC7795FFAF36F3C51AA589D;
IL2CPP_EXTERN_C String_t* _stringLiteral95CE047378BB5A752473C9D4D15D684E03FFA829;
IL2CPP_EXTERN_C String_t* _stringLiteral97A9A868349D6F48CDEEB77E1B607C7ECD80E72E;
IL2CPP_EXTERN_C String_t* _stringLiteral9A16E423F63FBDE7F41066B190E6CF2C0E7DCCF1;
IL2CPP_EXTERN_C String_t* _stringLiteral9A86A3B4AF87A24534CBDFC69C239ECD6A5D87CC;
IL2CPP_EXTERN_C String_t* _stringLiteralA60FCC00D6D4CA6783A659EEC3F2851AEA8D66AD;
IL2CPP_EXTERN_C String_t* _stringLiteralA8250B534396AB58BA9610ADE04FDD1310D4478D;
IL2CPP_EXTERN_C String_t* _stringLiteralAEAC30D8C28806B51680D5DC521FC3C410F2D5B5;
IL2CPP_EXTERN_C String_t* _stringLiteralB14357C2EF9F977031E2911FFA06B1EEC8A5767C;
IL2CPP_EXTERN_C String_t* _stringLiteralB2C8D3FBAAD06D3594B0F1E444B21F1F2C527617;
IL2CPP_EXTERN_C String_t* _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBC2647BD6DA802D3F62530E32EF626870E784F2C;
IL2CPP_EXTERN_C String_t* _stringLiteralBC3A5F3D5BB3E7D48E89B51BFD05B4FBE1D09846;
IL2CPP_EXTERN_C String_t* _stringLiteralBF84375B917AA7A46F68E6773C61E5853C02EAF4;
IL2CPP_EXTERN_C String_t* _stringLiteralC1247379A9C42BAF4DAD87F9ABE2F0CB38AF22A2;
IL2CPP_EXTERN_C String_t* _stringLiteralC18D414929C4A2ACC69D7D2EF4A0C9D467BBFE2F;
IL2CPP_EXTERN_C String_t* _stringLiteralC19A67243F4A3B2010D2D94EAB2C299DEFFBC32F;
IL2CPP_EXTERN_C String_t* _stringLiteralC3DDBD0F898775164D4161E7D18A071607F22674;
IL2CPP_EXTERN_C String_t* _stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13;
IL2CPP_EXTERN_C String_t* _stringLiteralC690C3E3484DF59A062AC0913B3AA0F9E608C757;
IL2CPP_EXTERN_C String_t* _stringLiteralC6B8E7A479BE266CB377B138773E5E798867F697;
IL2CPP_EXTERN_C String_t* _stringLiteralC8395859B32B7B887C6F2ED68A0C1A5C2784CD17;
IL2CPP_EXTERN_C String_t* _stringLiteralCFC5E1DA6D746B614F31BA42FD46FE5A06844ACB;
IL2CPP_EXTERN_C String_t* _stringLiteralD317B044D3F8943C40215001850B2359CD7BA272;
IL2CPP_EXTERN_C String_t* _stringLiteralD6EC569AA0ACFA41FB7FB87F2D80E4E7FE0F6A14;
IL2CPP_EXTERN_C String_t* _stringLiteralDB80EEF4A6BDCB6B1C755569BAB4BD8A610B18FC;
IL2CPP_EXTERN_C String_t* _stringLiteralDF91F11D46E8807FE33EB79CAE11A89BB6018A3D;
IL2CPP_EXTERN_C String_t* _stringLiteralE34BE56CCF14C174933090C28103F2A946D7FE3B;
IL2CPP_EXTERN_C String_t* _stringLiteralE580449FDEA9A2F7D9C6101AE58E2B0CEA315B63;
IL2CPP_EXTERN_C String_t* _stringLiteralE765EF8B98B268C8218B40A1C6C54944E7BB50C8;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralECF58D4421B463ACE7A9F3931C1E236EA5A0454B;
IL2CPP_EXTERN_C String_t* _stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF8E97A2EC91B9BC5BE9457E4364E5C15F95B7FDC;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFFD44595505148598FA11441DC6F85B39A158ACC;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedBlockCipher_DoFinal_mDC35A0839C09CB02969B63934D0D8BB47C0EB0CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedBlockCipher_ProcessByte_mA0A6E1F9A0737EFD7A7CBB56273EFE48A5E28740_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedBlockCipher_ProcessBytes_m38D8C198A66BE63518ADF90E558B0B30266CF451_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedBlockCipher_ProcessBytes_mF347069271FA470D5C703CB3299BAF944B56F779_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedBlockCipher__ctor_m17987FB767EC1491609D7488AE2D2F7710FC930C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedCipherBase_DoFinal_mBD5FA53571BBEC27FEFB866EAB17287FA2C5DB5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedCipherBase_ProcessByte_mC7903564376D6CCFD612131BA05A53AFFEEBCEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BufferedCipherBase_ProcessBytes_mCA03F92C070B2B4DE4205F326C361ACC69A4EE79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CbcBlockCipher_DecryptBlock_m4E8DBE49E59FFB31E9C3746C9BC4AC7F7849B604_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CbcBlockCipher_EncryptBlock_mC8D44F555A58A0BB9FDAB9CDC6A4CEF3FD2CE6E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CbcBlockCipher_Init_m7BA55F00E4A2B24A1415756037DB203E1647B98C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CcmBlockCipher_GetMacSize_m94D51D06FC7E40CE15E447399501AD0F7B32289D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CcmBlockCipher_Init_mD90F361DE6B93146FD3D66E47594555C491CB8EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CcmBlockCipher_ProcessPacket_mB45FE4A1DEDED1FBFA822AD76CD3FD1BDBB525B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CcmBlockCipher_ProcessPacket_mC03F070E4F9E18E2554A6513573115559BC1D9EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CcmBlockCipher__ctor_mDCADA207FE89ED6D99BD82413198C653AC576143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CfbBlockCipher_DecryptBlock_m4318A9502209D6DC8BAFA918B8D1D217BAB3DDAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CfbBlockCipher_EncryptBlock_m1CD9A124F4174F92202B2B7A3A794B18FA19413A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CfbBlockCipher__ctor_m96C98225278D4B349134C9F14B1E7E59CCA74FA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChaCha20Poly1305_CheckAad_m7A33A76717B7B5BC1176D6A1D0A077ACA59E27BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChaCha20Poly1305_CheckData_m9885193D7E29F2DCF8F1514417C4120810A6CE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChaCha20Poly1305_DoFinal_mEE81644C30F06393C501285B783AE7877032ECEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChaCha20Poly1305_GetOutputSize_mFA9B96390AE7635F9C701E693D931B1B1BED22A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChaCha20Poly1305_GetUpdateOutputSize_mDD677A754D2BE66ADFD4B93CFBDDB1990A56AD9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChaCha20Poly1305_IncrementCount_m97F87C0DF61C0CD539C8294C9CC9F0195D837AD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChaCha20Poly1305_Init_m68465C307F36EA18B332278F76BE47A53D96F840_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChaCha20Poly1305_ProcessAadBytes_mD2CA5150DCA66A306798969222BD66B80F2F89CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChaCha20Poly1305_ProcessByte_mE36A8A614CD4625930F5C75D98BFD53A54F94C78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChaCha20Poly1305_ProcessBytes_m3AC0CD3050CB2B1D5436DDB9481856EB1721756E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChaCha20Poly1305_Reset_m59C2B3FF6C3ADC6B884CC9FAB0A2849E95914146_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ChaCha20Poly1305__ctor_mF8A30214DBE7A4213C692C9C07B0CEEFCD3BD8A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CtsBlockCipher_DoFinal_m5D4C4BD4A83B5C67019F5B6FE070D3FB4E8604C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CtsBlockCipher_ProcessBytes_mB85CA1CBC0EA0F326D8A9F86FBFED21BAF760578_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CtsBlockCipher__ctor_mB7BBAC92E743EE55B5888E6BDE7F31829043BB4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EaxBlockCipher_DoFinal_m37947CAB4ED902AC6BE33D1FC906EC8B8D9DF456_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EaxBlockCipher_Init_m3F888A048BCFFB90D717DA0A075B55764DFF015A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EaxBlockCipher_ProcessAadByte_m2B6AEA7D0CD5F111E82850250A859803A882284E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EaxBlockCipher_ProcessAadBytes_m0B26296E699BE3D9969E53051E072D7E82924EDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GOfbBlockCipher_ProcessBlock_mF94A5E757AE3B78FC7B0899E5DD9859870D599F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GOfbBlockCipher__ctor_m41728F9A6150D41A48DA87943290B294C58A0227_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GcmBlockCipher_CheckStatus_mECAF4E7FA5D98319F745F0B85CF3EBBCF20C9CEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GcmBlockCipher_DoFinal_m5AF85CBF03932F45B132BF44BE503208D2C138E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GcmBlockCipher_GetNextCtrBlock_m747CC9B970706C4EB4521247B2776264899F9497_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GcmBlockCipher_Init_m6A6338218CC526546D9BB64FB639D7ECC7057085_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GcmBlockCipher__ctor_m8A2845175ACAD261D5ECB00457FD3F9E1198B1D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KCcmBlockCipher_Init_m04E0D4833CEC3D87BCE2F981D63DC62EBF8D2B98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KCcmBlockCipher_ProcessAAD_m79FD33523E877DE08A1E4990E722A73FC05828F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KCcmBlockCipher_ProcessPacket_m344E885BC3D8DACAFD862BBB1FAE2F544BD324C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KCcmBlockCipher_setNb_m1691E94D49CC5EABA0F785F00CB19CC414DAC106_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KCtrBlockCipher_Init_mD2FFC0E9F1D559998BD98F71A577DB5F828EDCE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KCtrBlockCipher_ProcessBlock_m3510B9B3DF03C463C75EC814623432ACB6B1119C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KCtrBlockCipher_ProcessBytes_m079BC47B7944C6828B94289226A07878914FA8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OcbBlockCipher_DoFinal_mF61E82DADC50ED931CB9DB096FE9A2001C213578_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OcbBlockCipher_Init_m4CCC51F169845704774A26A60D01A0FA7E335353_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OcbBlockCipher__ctor_mD95F4616B211A789244A178A2B5E48A0E35C5861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SipHash_Init_m0DE654CF92F0A1CF6B82CD01DA1D0F531B4AF21A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeinMac_Init_mA0D146C830F8412CC3AF683021CB93206040FB0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VmpcMac_BlockUpdate_m6EAB637B2E0E5772F6C1AF49488933A93FEFF35A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VmpcMac_Init_mE5318BAB03EF84D1C31EA3F2351F52A24EAAB9B0_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.AeadParameters
struct AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::associatedText
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___associatedText_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::nonce
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce_1;
	// Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Parameters.AeadParameters::key
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* ___key_2;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::macSize
	int32_t ___macSize_3;
};
struct Il2CppArrayBounds;

// Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmExponentiator
struct BasicGcmExponentiator_t889C88199B1E25F4C5610EFD2AB4144F96F89832  : public RuntimeObject
{
	// System.UInt64[] Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmExponentiator::x
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x_0;
};

// Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmMultiplier
struct BasicGcmMultiplier_t70121FD66BA3790D9F0CD78FA12FD2676920451E  : public RuntimeObject
{
	// System.UInt64[] Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmMultiplier::H
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___H_0;
};

// Org.BouncyCastle.Crypto.BufferedCipherBase
struct BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5  : public RuntimeObject
{
};

struct BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5_StaticFields
{
	// System.Byte[] Org.BouncyCastle.Crypto.BufferedCipherBase::EmptyBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EmptyBuffer_0;
};

// Org.BouncyCastle.Crypto.Macs.CMac
struct CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.CMac::ZEROES
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ZEROES_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.CMac::mac
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.CMac::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_4;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.CMac::bufOff
	int32_t ___bufOff_5;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Macs.CMac::cipher
	RuntimeObject* ___cipher_6;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.CMac::macSize
	int32_t ___macSize_7;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.CMac::L
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___L_8;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.CMac::Lu
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Lu_9;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.CMac::Lu2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Lu2_10;
};

// Org.BouncyCastle.Crypto.Modes.CbcBlockCipher
struct CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::IV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::cbcV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cbcV_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::cbcNextV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cbcNextV_2;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::blockSize
	int32_t ___blockSize_3;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::cipher
	RuntimeObject* ___cipher_4;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::encrypting
	bool ___encrypting_5;
};

// Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac
struct CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_0;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::bufOff
	int32_t ___bufOff_1;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::cipher
	RuntimeObject* ___cipher_2;
	// Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::padding
	RuntimeObject* ___padding_3;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::macSize
	int32_t ___macSize_4;
};

// Org.BouncyCastle.Crypto.Modes.CcmBlockCipher
struct CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::cipher
	RuntimeObject* ___cipher_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::macBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___macBlock_2;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::forEncryption
	bool ___forEncryption_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::nonce
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce_4;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::initialAssociatedText
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___initialAssociatedText_5;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::macSize
	int32_t ___macSize_6;
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::keyParam
	RuntimeObject* ___keyParam_7;
	// System.IO.MemoryStream Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::associatedText
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___associatedText_8;
	// System.IO.MemoryStream Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::data
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___data_9;
};

struct CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_StaticFields
{
	// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::BlockSize
	int32_t ___BlockSize_0;
};

// Org.BouncyCastle.Crypto.Modes.CfbBlockCipher
struct CfbBlockCipher_tCEBBD2ADC3163E5194A663130E8AA543B1C58C12  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::IV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::cfbV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cfbV_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::cfbOutV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cfbOutV_2;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::encrypting
	bool ___encrypting_3;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::blockSize
	int32_t ___blockSize_4;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::cipher
	RuntimeObject* ___cipher_5;
};

// Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305
struct ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::mChacha20
	ChaCha7539Engine_tD1D7125C6C180460972E80EEB9A49E9B8443763E* ___mChacha20_7;
	// Org.BouncyCastle.Crypto.IMac Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::mPoly1305
	RuntimeObject* ___mPoly1305_8;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::mKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mKey_9;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::mNonce
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mNonce_10;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::mBuf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mBuf_11;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::mMac
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mMac_12;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::mInitialAad
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mInitialAad_13;
	// System.UInt64 Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::mAadCount
	uint64_t ___mAadCount_14;
	// System.UInt64 Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::mDataCount
	uint64_t ___mDataCount_15;
	// Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::mState
	int32_t ___mState_16;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::mBufPos
	int32_t ___mBufPos_17;
};

struct ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122_StaticFields
{
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::Zeroes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Zeroes_6;
};

// Org.BouncyCastle.Crypto.Modes.EaxBlockCipher
struct EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.Modes.SicBlockCipher Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::cipher
	SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* ___cipher_0;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::forEncryption
	bool ___forEncryption_1;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::blockSize
	int32_t ___blockSize_2;
	// Org.BouncyCastle.Crypto.IMac Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::mac
	RuntimeObject* ___mac_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::nonceMac
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonceMac_4;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::associatedTextMac
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___associatedTextMac_5;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::macBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___macBlock_6;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::macSize
	int32_t ___macSize_7;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::bufBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bufBlock_8;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::bufOff
	int32_t ___bufOff_9;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::cipherInitialized
	bool ___cipherInitialized_10;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::initialAssociatedText
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___initialAssociatedText_11;
};

// Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher
struct GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::IV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::ofbV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ofbV_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::ofbOutV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ofbOutV_4;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::blockSize
	int32_t ___blockSize_5;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::cipher
	RuntimeObject* ___cipher_6;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::firstStep
	bool ___firstStep_7;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::N3
	int32_t ___N3_8;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::N4
	int32_t ___N4_9;
};

// Org.BouncyCastle.Crypto.Modes.GcmBlockCipher
struct GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::cipher
	RuntimeObject* ___cipher_1;
	// Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::multiplier
	RuntimeObject* ___multiplier_2;
	// Org.BouncyCastle.Crypto.Modes.Gcm.IGcmExponentiator Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::exp
	RuntimeObject* ___exp_3;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::forEncryption
	bool ___forEncryption_4;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::initialised
	bool ___initialised_5;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::macSize
	int32_t ___macSize_6;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::lastKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lastKey_7;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::nonce
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce_8;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::initialAssociatedText
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___initialAssociatedText_9;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::H
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___H_10;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::J0
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___J0_11;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::bufBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bufBlock_12;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::macBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___macBlock_13;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::S
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S_14;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::S_at
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S_at_15;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::S_atPre
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S_atPre_16;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::counter
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___counter_17;
	// System.UInt32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::blocksRemaining
	uint32_t ___blocksRemaining_18;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::bufOff
	int32_t ___bufOff_19;
	// System.UInt64 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::totalLength
	uint64_t ___totalLength_20;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::atBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___atBlock_21;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::atBlockPos
	int32_t ___atBlockPos_22;
	// System.UInt64 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::atLength
	uint64_t ___atLength_23;
	// System.UInt64 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::atLengthPre
	uint64_t ___atLengthPre_24;
};

// Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities
struct GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC  : public RuntimeObject
{
};

// Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher
struct KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::engine
	RuntimeObject* ___engine_4;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::macSize
	int32_t ___macSize_5;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::forEncryption
	bool ___forEncryption_6;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::initialAssociatedText
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___initialAssociatedText_7;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::mac
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac_8;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::macBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___macBlock_9;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::nonce
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce_10;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::G1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___G1_11;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_12;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::s
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_13;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::counter
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___counter_14;
	// System.IO.MemoryStream Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::associatedText
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___associatedText_15;
	// System.IO.MemoryStream Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::data
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___data_16;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::Nb_
	int32_t ___Nb__17;
};

struct KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_StaticFields
{
	// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::BYTES_IN_INT
	int32_t ___BYTES_IN_INT_0;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::BITS_IN_BYTE
	int32_t ___BITS_IN_BYTE_1;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::MAX_MAC_BIT_LENGTH
	int32_t ___MAX_MAC_BIT_LENGTH_2;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::MIN_MAC_BIT_LENGTH
	int32_t ___MIN_MAC_BIT_LENGTH_3;
};

// Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher
struct KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::IV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::ofbV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ofbV_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::ofbOutV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ofbOutV_2;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::initialised
	bool ___initialised_3;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::byteCount
	int32_t ___byteCount_4;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::blockSize
	int32_t ___blockSize_5;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::cipher
	RuntimeObject* ___cipher_6;
};

// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::key
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key_0;
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

// Org.BouncyCastle.Crypto.Modes.OcbBlockCipher
struct OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::hashCipher
	RuntimeObject* ___hashCipher_1;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::mainCipher
	RuntimeObject* ___mainCipher_2;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::forEncryption
	bool ___forEncryption_3;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::macSize
	int32_t ___macSize_4;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::initialAssociatedText
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___initialAssociatedText_5;
	// System.Collections.IList Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::L
	RuntimeObject* ___L_6;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::L_Asterisk
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___L_Asterisk_7;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::L_Dollar
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___L_Dollar_8;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::KtopInput
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KtopInput_9;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Stretch
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Stretch_10;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OffsetMAIN_0
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OffsetMAIN_0_11;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::hashBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hashBlock_12;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::mainBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mainBlock_13;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::hashBlockPos
	int32_t ___hashBlockPos_14;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::mainBlockPos
	int32_t ___mainBlockPos_15;
	// System.Int64 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::hashBlockCount
	int64_t ___hashBlockCount_16;
	// System.Int64 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::mainBlockCount
	int64_t ___mainBlockCount_17;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OffsetHASH
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OffsetHASH_18;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Sum
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Sum_19;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OffsetMAIN
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OffsetMAIN_20;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Checksum
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Checksum_21;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::macBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___macBlock_22;
};

// Org.BouncyCastle.Crypto.Modes.OfbBlockCipher
struct OfbBlockCipher_t72A403CDCDA517916A318565473D48F651DC4A4A  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::IV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::ofbV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ofbV_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::ofbOutV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ofbOutV_2;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::blockSize
	int32_t ___blockSize_3;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::cipher
	RuntimeObject* ___cipher_4;
};

// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::parameters
	RuntimeObject* ___parameters_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::iv
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv_1;
};

// Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom
struct ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::parameters
	RuntimeObject* ___parameters_0;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::random
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random_1;
};

// Org.BouncyCastle.Crypto.Macs.Poly1305
struct Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Macs.Poly1305::cipher
	RuntimeObject* ___cipher_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.Poly1305::singleByte
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___singleByte_2;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::r0
	uint32_t ___r0_3;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::r1
	uint32_t ___r1_4;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::r2
	uint32_t ___r2_5;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::r3
	uint32_t ___r3_6;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::r4
	uint32_t ___r4_7;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::s1
	uint32_t ___s1_8;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::s2
	uint32_t ___s2_9;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::s3
	uint32_t ___s3_10;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::s4
	uint32_t ___s4_11;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::k0
	uint32_t ___k0_12;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::k1
	uint32_t ___k1_13;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::k2
	uint32_t ___k2_14;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::k3
	uint32_t ___k3_15;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.Poly1305::currentBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___currentBlock_16;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.Poly1305::currentBlockOffset
	int32_t ___currentBlockOffset_17;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::h0
	uint32_t ___h0_18;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::h1
	uint32_t ___h1_19;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::h2
	uint32_t ___h2_20;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::h3
	uint32_t ___h3_21;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::h4
	uint32_t ___h4_22;
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

// Org.BouncyCastle.Crypto.Modes.SicBlockCipher
struct SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.SicBlockCipher::cipher
	RuntimeObject* ___cipher_0;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.SicBlockCipher::blockSize
	int32_t ___blockSize_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.SicBlockCipher::counter
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___counter_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.SicBlockCipher::counterOut
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___counterOut_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.SicBlockCipher::IV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV_4;
};

// Org.BouncyCastle.Crypto.Macs.SipHash
struct SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Macs.SipHash::c
	int32_t ___c_0;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.SipHash::d
	int32_t ___d_1;
	// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::k0
	int64_t ___k0_2;
	// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::k1
	int64_t ___k1_3;
	// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::v0
	int64_t ___v0_4;
	// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::v1
	int64_t ___v1_5;
	// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::v2
	int64_t ___v2_6;
	// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::v3
	int64_t ___v3_7;
	// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::m
	int64_t ___m_8;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.SipHash::wordPos
	int32_t ___wordPos_9;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.SipHash::wordCount
	int32_t ___wordCount_10;
};

// Org.BouncyCastle.Crypto.Digests.SkeinEngine
struct SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.Engines.ThreefishEngine Org.BouncyCastle.Crypto.Digests.SkeinEngine::threefish
	ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C* ___threefish_8;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.SkeinEngine::outputSizeBytes
	int32_t ___outputSizeBytes_9;
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.SkeinEngine::chain
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___chain_10;
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.SkeinEngine::initialState
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___initialState_11;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.SkeinEngine::key
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key_12;
	// Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter[] Org.BouncyCastle.Crypto.Digests.SkeinEngine::preMessageParameters
	ParameterU5BU5D_t63C04172EA11C424371D4CA4374B577B8E6695AF* ___preMessageParameters_13;
	// Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter[] Org.BouncyCastle.Crypto.Digests.SkeinEngine::postMessageParameters
	ParameterU5BU5D_t63C04172EA11C424371D4CA4374B577B8E6695AF* ___postMessageParameters_14;
	// Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI Org.BouncyCastle.Crypto.Digests.SkeinEngine::ubi
	UBI_t30B89363C0696B93C7B682B16D4EE222C270A552* ___ubi_15;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.SkeinEngine::singleByte
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___singleByte_16;
};

struct SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB_StaticFields
{
	// System.Collections.IDictionary Org.BouncyCastle.Crypto.Digests.SkeinEngine::INITIAL_STATES
	RuntimeObject* ___INITIAL_STATES_7;
};

// Org.BouncyCastle.Crypto.Macs.SkeinMac
struct SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.Digests.SkeinEngine Org.BouncyCastle.Crypto.Macs.SkeinMac::engine
	SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* ___engine_3;
};

// Org.BouncyCastle.Crypto.Parameters.SkeinParameters
struct SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8  : public RuntimeObject
{
	// System.Collections.IDictionary Org.BouncyCastle.Crypto.Parameters.SkeinParameters::parameters
	RuntimeObject* ___parameters_8;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator
struct Tables1kGcmExponentiator_t15B1305B08575DCBE165CF932CEB04DB570FAA1B  : public RuntimeObject
{
	// System.Collections.IList Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator::lookupPowX2
	RuntimeObject* ___lookupPowX2_0;
};

// Org.BouncyCastle.Crypto.Modes.Gcm.Tables4kGcmMultiplier
struct Tables4kGcmMultiplier_tB107C775EBF316C21F1C7B58573091D5E450EF0A  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.Gcm.Tables4kGcmMultiplier::H
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___H_0;
	// System.UInt64[] Org.BouncyCastle.Crypto.Modes.Gcm.Tables4kGcmMultiplier::T
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___T_1;
};

// Org.BouncyCastle.Crypto.Modes.Gcm.Tables64kGcmMultiplier
struct Tables64kGcmMultiplier_tA2C58BD435F6D7B7BE6AC407A0650827AA5833AE  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.Gcm.Tables64kGcmMultiplier::H
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___H_0;
	// System.UInt64[][] Org.BouncyCastle.Crypto.Modes.Gcm.Tables64kGcmMultiplier::T
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___T_1;
};

// Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier
struct Tables8kGcmMultiplier_tB07FBFB1B8DE3234CBD37D39FCE0E7E91AEEF90A  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier::H
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___H_0;
	// System.UInt64[][] Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier::T
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___T_1;
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

// Org.BouncyCastle.Crypto.Macs.VmpcMac
struct VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6  : public RuntimeObject
{
	// System.Byte Org.BouncyCastle.Crypto.Macs.VmpcMac::g
	uint8_t ___g_0;
	// System.Byte Org.BouncyCastle.Crypto.Macs.VmpcMac::n
	uint8_t ___n_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.VmpcMac::P
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P_2;
	// System.Byte Org.BouncyCastle.Crypto.Macs.VmpcMac::s
	uint8_t ___s_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.VmpcMac::T
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___T_4;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.VmpcMac::workingIV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workingIV_5;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.VmpcMac::workingKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workingKey_6;
	// System.Byte Org.BouncyCastle.Crypto.Macs.VmpcMac::x1
	uint8_t ___x1_7;
	// System.Byte Org.BouncyCastle.Crypto.Macs.VmpcMac::x2
	uint8_t ___x2_8;
	// System.Byte Org.BouncyCastle.Crypto.Macs.VmpcMac::x3
	uint8_t ___x3_9;
	// System.Byte Org.BouncyCastle.Crypto.Macs.VmpcMac::x4
	uint8_t ___x4_10;
};

// Org.BouncyCastle.Crypto.Parameters.SkeinParameters/Builder
struct Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6  : public RuntimeObject
{
	// System.Collections.IDictionary Org.BouncyCastle.Crypto.Parameters.SkeinParameters/Builder::parameters
	RuntimeObject* ___parameters_0;
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

// Org.BouncyCastle.Crypto.BufferedBlockCipher
struct BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7  : public BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5
{
	// System.Byte[] Org.BouncyCastle.Crypto.BufferedBlockCipher::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_1;
	// System.Int32 Org.BouncyCastle.Crypto.BufferedBlockCipher::bufOff
	int32_t ___bufOff_2;
	// System.Boolean Org.BouncyCastle.Crypto.BufferedBlockCipher::forEncryption
	bool ___forEncryption_3;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.BufferedBlockCipher::cipher
	RuntimeObject* ___cipher_4;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine
struct ChaCha7539Engine_tD1D7125C6C180460972E80EEB9A49E9B8443763E  : public Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4
{
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

// Org.BouncyCastle.Crypto.Modes.CtsBlockCipher
struct CtsBlockCipher_tD61E222E0CD88BC601E0F7A4073205A1A795A5D7  : public BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7
{
	// System.Int32 Org.BouncyCastle.Crypto.Modes.CtsBlockCipher::blockSize
	int32_t ___blockSize_5;
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

// Org.BouncyCastle.Crypto.InvalidCipherTextException
struct InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB  : public CryptoException_t4AD3626BE1D22C083AB2877DC9E63B19B51F1D26
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



// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SipHash__ctor_mF2A1426AAD4AF5D75E0AE3A3A98485EC0FA2ED81 (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, int32_t ___c0, int32_t ___d1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::GetKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16 (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* __this, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Utilities.Pack::LE_To_UInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_LE_To_UInt64_m7F95797FD245489E424B633B5786987B95C2E0DA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt64_To_LE(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_m636E90C1902B2A82549A884FBC29A86CEB2B73F2 (uint64_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::RotateLeft(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SipHash_RotateLeft_mD0C86193B1490DBD0A98CE19F1EE74BF9830FDC7 (int64_t ___x0, int32_t ___n1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.SkeinEngine::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine__ctor_mF91E68903CC0C9FC02C1C0DD1F1E9B221762A11D (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, int32_t ___blockSizeBits0, int32_t ___outputSizeBits1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.SkeinEngine::.ctor(Org.BouncyCastle.Crypto.Digests.SkeinEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine__ctor_m3070EA964D73F5C5E72C1275DF0A49280B024847 (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* ___engine0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.SkeinEngine::get_BlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeinEngine_get_BlockSize_m5F6B1D2FA8ACBB9639AA3666B7B85B8DD2151037 (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.SkeinEngine::get_OutputSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkeinEngine_get_OutputSize_m7B75A727F4C5300C10FEBFBCAEE6E6BBEDC3EF0A_inline (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.SkeinParameters/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m88F4EA119C5649FAFD12B50E5A7EEC0DE814D38A (Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.Parameters.SkeinParameters/Builder Org.BouncyCastle.Crypto.Parameters.SkeinParameters/Builder::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6* Builder_SetKey_m7D926FEBC30CDB6D8283B7581D5547CC82AA7E10 (Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.Parameters.SkeinParameters Org.BouncyCastle.Crypto.Parameters.SkeinParameters/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8* Builder_Build_m4D43C97CEA70091569F5C97B0DC2AACF158FEF7C (Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6* __this, const RuntimeMethod* method) ;
// System.String Org.BouncyCastle.Utilities.Platform::GetTypeName(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_GetTypeName_mEB5EBEF8496572C698AAD5E94A3D3E030BF0F240 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.SkeinParameters::GetKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SkeinParameters_GetKey_mB0360C83775B338B3A690618EF6945F648CB5468 (SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.SkeinEngine::Init(Org.BouncyCastle.Crypto.Parameters.SkeinParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Init_m600D7AFFBFF869AFBE5681C28AF9613DA427D83C (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8* ___parameters0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.SkeinEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Reset_m33B2F40AFEDB819D4BB1E00D174F7661D063E085 (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.SkeinEngine::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Update_m74954574D1266FE7710840FFE7B74F886A37166B (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, uint8_t ___inByte0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.SkeinEngine::Update(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Update_m1C44C4466C02B46ACD3661FD2B13B5959170592C (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___len2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.SkeinEngine::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeinEngine_DoFinal_mDE98915E12A1C2148E59947191FBFE606FFFF730 (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes0, int32_t ___outOff1, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::GetIV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7 (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::initKey(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcMac_initKey_m1497C4E0D51B1A2C3582CF21EE5AADD1B4FFF787 (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyBytes0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ivBytes1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.DataLengthException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2 (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.UInt64[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsUlongs(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* GcmUtilities_AsUlongs_mF912DF51E812AC6A1361FD2441E7B0A695C764F2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, const RuntimeMethod* method) ;
// System.UInt64[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::OneAsUlongs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* GcmUtilities_OneAsUlongs_m03C0DD7C1B6E5DD0698F0CC0C464980D3DA3B264 (const RuntimeMethod* method) ;
// System.UInt64[] Org.BouncyCastle.Utilities.Arrays::Clone(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* Arrays_Clone_m271EAB8D16255673EB3F60DE30564ADE004B4DE5 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___data0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Multiply(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Multiply_m4773B3BDF3D95F2ACE4B19D72070F7C3F78D8A39 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___y1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Square(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Square_m1AC5C6A4111824645F23E54A7FE5F36EA785DC31 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsBytes(System.UInt64[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_AsBytes_m387F56854BFD79AB80969002F51EC3A25CD4582E (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___z1, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Utilities.Pack::UInt32_To_BE(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Pack_UInt32_To_BE_mAF45DA91F57F60A2266F35B86509CFADEF7ECB84 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt32_To_BE(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_m1C17AB1A6CDD4A4C8B4D8F3102F1A4B7B819E237 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt64_To_BE(System.UInt64[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_BE_m4DDB5FD435F6C59808ED354E01EAB28AD7E4F352 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ns0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::BE_To_UInt32(System.Byte[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_BE_To_UInt32_m1C3449DE7AAA30B61CED7CEEB2160B8308A7EE3D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ns2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::BE_To_UInt64(System.Byte[],System.Int32,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_BE_To_UInt64_mAF9D42942030555FEA0CC1F49211B21C73F487D1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___off1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ns2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::BE_To_UInt64(System.Byte[],System.Int32,System.UInt64[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_BE_To_UInt64_mFFF80AB1FFAAF1BFBD5D61A6958AC1228955D51A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, int32_t ___bsOff1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___ns2, int32_t ___nsOff3, int32_t ___nsLen4, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Utilities.Longs::Reverse(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Longs_Reverse_mF7730DBDC798C2F4281CA79C5E283A311D6B9592 (uint64_t ___i0, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::ImplMul64(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t GcmUtilities_ImplMul64_m97EB36F7325585E98F9A25C6C9108F34CC73A16D (uint64_t ___x0, uint64_t ___y1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.Raw.Interleave::Expand64To128Rev(System.UInt64,System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Interleave_Expand64To128Rev_m23B9CE512E7C3B99D7DB69FEE7C8EA63556C7B77 (uint64_t ___x0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z1, int32_t ___zOff2, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Utilities.Arrays::AreEqual(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_m54AF7E088066AA608723BF86DCA171EB025DF926 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___a0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___b1, const RuntimeMethod* method) ;
// System.Collections.IList Org.BouncyCastle.Utilities.Platform::CreateArrayList(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_CreateArrayList_m36B3165D4F845600FEA72DAB49018C28A7B3219A (int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator::EnsureAvailable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables1kGcmExponentiator_EnsureAvailable_m7CF7035202D583EF46C7395785683C3B8CA2F643 (Tables1kGcmExponentiator_t15B1305B08575DCBE165CF932CEB04DB570FAA1B* __this, int32_t ___bit0, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Utilities.Arrays::AreEqual(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_mF00C3B51F7520663ADB08744EA3A1995B9421C18 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Utilities.Arrays::Clone(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_Clone_mC73CD122DC37EDEB733EC84DB0137D8D7DD5B87F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsUlongs(System.Byte[],System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_AsUlongs_mFBF52A7BDA3B08E3426B532DF247885D9D5538F4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z1, int32_t ___zOff2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP7(System.UInt64[],System.Int32,System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP7_m4541A0B6228EBF4969DB7A4472DB904F0018AF05 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, int32_t ___xOff1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z2, int32_t ___zOff3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::DivideP(System.UInt64[],System.Int32,System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_DivideP_mA96F2C3CEE8CB845D7837B12B1D2B6EDB73E8D87 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, int32_t ___xOff1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z2, int32_t ___zOff3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.UInt64[],System.Int32,System.UInt64[],System.Int32,System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_m7FEDEC1BE0DF498BC7F00C3F15972CE04F62717A (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, int32_t ___xOff1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___y2, int32_t ___yOff3, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z4, int32_t ___zOff5, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt64_To_BE(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_BE_m37F9E6B43BA608646BA3860E72A6DF1799B0AC68 (uint64_t ___n0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP8(System.UInt64[],System.Int32,System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP8_m0C43937F3749536884F0D05B7CA7B2FC94C663EB (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, int32_t ___xOff1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___y2, int32_t ___yOff3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP3(System.UInt64[],System.Int32,System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP3_m5D37BC7A1879C39DF11B70E4EB79C22552FF334B (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, int32_t ___xOff1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z2, int32_t ___zOff3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP4(System.UInt64[],System.Int32,System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP4_mCB40910E09ECAA726B18AC78561259A46E435228 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, int32_t ___xOff1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z2, int32_t ___zOff3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CbcBlockCipher_Reset_m092F05364FF79AA3E2A9940234B5757FEAB60400 (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CbcBlockCipher_DecryptBlock_m4E8DBE49E59FFB31E9C3746C9BC4AC7F7849B604 (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CbcBlockCipher_EncryptBlock_mC8D44F555A58A0BB9FDAB9CDC6A4CEF3FD2CE6E0 (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8 (RuntimeObject* ___arg00, RuntimeObject* ___arg11, RuntimeObject* ___arg22, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::GetMacSize(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CcmBlockCipher_GetMacSize_m94D51D06FC7E40CE15E447399501AD0F7B32289D (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, bool ___forEncryption0, int32_t ___requestedMacBits1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Check::DataLength(System.Byte[],System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___off1, int32_t ___len2, String_t* ___msg3, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Utilities.Arrays::CopyOfRange(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_CopyOfRange_mE792FCCB265B59BB814A34909EE76651151E762A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___from1, int32_t ___to2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.InvalidCipherTextException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6 (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.SicBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SicBlockCipher__ctor_mA7ADBD37CBBF2B5DB603804C12BBD044A86DD99A (SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* __this, RuntimeObject* ___cipher0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::.ctor(Org.BouncyCastle.Crypto.ICipherParameters,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994 (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, RuntimeObject* ___parameters0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Check::OutputLength(System.Byte[],System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___off1, int32_t ___len2, String_t* ___msg3, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::CalculateMac(System.Byte[],System.Int32,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CcmBlockCipher_CalculateMac_m96B72BC3DAFF826117DA1FCE59AEB55037E13F89 (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___dataOff1, int32_t ___dataLen2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___macBlock3, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Utilities.Arrays::ConstantTimeAreEqual(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_ConstantTimeAreEqual_m276F471905921D3AACBB6A6A6CE63DCFD4CBAE3E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CbcBlockCipherMac__ctor_m12906E75391E114BA84897865E8EE30CDBC4F28F (CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D* __this, RuntimeObject* ___cipher0, int32_t ___macSizeInBits1, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::HasAssociatedText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CcmBlockCipher_HasAssociatedText_mE1AE56AF01C63C8A5ED7F1478F9406C35A267DC7 (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::GetAssociatedTextLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CcmBlockCipher_GetAssociatedTextLength_mC200FDD97818F28F657C68D0D5AC5778AA405183 (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CfbBlockCipher_Reset_mBF9F8196D0420DEC4D4CCB1E01555A9268272A85 (CfbBlockCipher_tCEBBD2ADC3163E5194A663130E8AA543B1C58C12* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CfbBlockCipher_DecryptBlock_m4318A9502209D6DC8BAFA918B8D1D217BAB3DDAA (CfbBlockCipher_tCEBBD2ADC3163E5194A663130E8AA543B1C58C12* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CfbBlockCipher_EncryptBlock_m1CD9A124F4174F92202B2B7A3A794B18FA19413A (CfbBlockCipher_tCEBBD2ADC3163E5194A663130E8AA543B1C58C12* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Poly1305__ctor_mEE7F9D04CF0340E4E3202F153CE16D7C98AD2A08 (Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::.ctor(Org.BouncyCastle.Crypto.IMac)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305__ctor_mF8A30214DBE7A4213C692C9C07B0CEEFCD3BD8A5 (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, RuntimeObject* ___poly13050, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha7539Engine__ctor_m4A24B49E66D182271F2F13504063F4A5B02B2621 (ChaCha7539Engine_tD1D7125C6C180460972E80EEB9A49E9B8443763E* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A (RuntimeObject* ___arg00, RuntimeObject* ___arg11, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::Reset(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_Reset_m59C2B3FF6C3ADC6B884CC9FAB0A2849E95914146 (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, bool ___clearMac0, bool ___resetCipher1, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::CheckAad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_CheckAad_m7A33A76717B7B5BC1176D6A1D0A077ACA59E27BA (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::IncrementCount(System.UInt64,System.UInt32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ChaCha20Poly1305_IncrementCount_m97F87C0DF61C0CD539C8294C9CC9F0195D837AD7 (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, uint64_t ___count0, uint32_t ___increment1, uint64_t ___limit2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::CheckData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_CheckData_m9885193D7E29F2DCF8F1514417C4120810A6CE54 (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::ProcessData(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_ProcessData_mC0DBBDACF0B561BB81CCE3D5BF396B0B1164E6E3 (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___inLen2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes3, int32_t ___outOff4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::FinishData(Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_FinishData_m91A3853BE32C2498B2838B5782C22D3F9B8A721C (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, int32_t ___nextState0, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Utilities.Arrays::ConstantTimeAreEqual(System.Int32,System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_ConstantTimeAreEqual_m8C56B308A82B46689833CFC23FB88ACA2C7B58CA (int32_t ___len0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a1, int32_t ___aOff2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b3, int32_t ___bOff4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::FinishAad(Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_FinishAad_m68A1A4EB6142D784FC721EAB15585D91D6384891 (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, int32_t ___nextState0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::PadMac(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_PadMac_m773B55E56B0A4DA812675CCB621A63BCE43AAEBF (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, uint64_t ___count0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.KeyParameter::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyParameter__ctor_mF6FAECE6A51D41CEBFE899223AFC9924B6541D8E (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key0, int32_t ___keyOff1, int32_t ___keyLen2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::InitMac()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_InitMac_mB1FE3DC33B5BD6670D6397DA7EFA4EE3A329A2E3 (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.BufferedCipherBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedCipherBase__ctor_m9618532D4A14E7984B6B5360E571CAE9DA6145CB (BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithRandom_get_Parameters_mFED49C45204261ACF08DC4617FC59E9025C5DA8E_inline (ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Check::DataLength(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_DataLength_m2070FC923CDEE7DFBBC7A1A62025B27990673FC5 (bool ___condition0, String_t* ___msg1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.BufferedBlockCipher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedBlockCipher__ctor_mBD0759C890C26AEF2193DF40EDC0D45008CB07AD (BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::GetUnderlyingCipher()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CbcBlockCipher_GetUnderlyingCipher_m9D8930D21D0EA39C84EE8CEDE1EAE9AB9859BD14_inline (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.CMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMac__ctor_mDD6FBE8A55213BDF31F4A4591CE8827D2462FC5D (CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1* __this, RuntimeObject* ___cipher0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::Reset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaxBlockCipher_Reset_m6CA3156D8F3A9B53557DCC410F4032194CF7F88C (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, bool ___clearMac0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::InitCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaxBlockCipher_InitCipher_mC202C0AEA0530F7037D53E649696325A3CDE2FFE (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::Process(System.Byte,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EaxBlockCipher_Process_mED56FCBECB927C250180B6CDC2B3A612702464FA (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, uint8_t ___b0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes1, int32_t ___outOff2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::CalculateMac()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaxBlockCipher_CalculateMac_m318B13FBCDF755DF5DE1FA88E0C25C0A3DED49E9 (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::VerifyMac(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EaxBlockCipher_VerifyMac_mAA15E8327EDE3254F8106477C8896A92B8398693 (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac0, int32_t ___off1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher__ctor_m8A2845175ACAD261D5ECB00457FD3F9E1198B1D9 (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, RuntimeObject* ___c0, RuntimeObject* ___m1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables4kGcmMultiplier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables4kGcmMultiplier__ctor_mEF2E77A3F60D4643C4EC7E6D624CCB583FB920FB (Tables4kGcmMultiplier_tB107C775EBF316C21F1C7B58573091D5E450EF0A* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::gHASH(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_gHASH_m9B51FCD63890BDE82527032575EC3E14BAF2350A (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Y0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, int32_t ___len2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::gHASHBlock(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_gHASHBlock_mCFC1A0B102860733A2DE83A3E5925A05DE8D71FC (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Y0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::CheckStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_CheckStatus_mECAF4E7FA5D98319F745F0B85CF3EBBCF20C9CEE (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::gHASHPartial(System.Byte[],System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_gHASHPartial_mCB900173D833F09922D5C41AFCAB71AA36DCA77E (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Y0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, int32_t ___off2, int32_t ___len3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_ProcessBlock_mF80A1D696E07EC9979EEDDD16A577BAFC1CE9FAC (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___bufOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::InitCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_InitCipher_m8D5958AC7ED800FFB209C92932703AAC90BC5C2A (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::ProcessPartial(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_ProcessPartial_m331570D2882148B099E8949CA51AA3CE923FF5C3 (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___off1, int32_t ___len2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOff4, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_mF3DE5B3CA09288B71B5D6E0159C552B8C06BACD5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___y1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmExponentiator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGcmExponentiator__ctor_m36D6363D489BD4C0EDEC41F879EB48638202F298 (BasicGcmExponentiator_t889C88199B1E25F4C5610EFD2AB4144F96F89832* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Multiply(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Multiply_mC0F3EBA2CCEC2F7760C6DBC2F13B61CC15BA3E58 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___y1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::Reset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_Reset_mF6175865E63FAF6A456A35769CB41437E0835878 (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, bool ___clearMac0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Arrays::Fill(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrays_Fill_m23EB1BA27E305EC869992BD6CA3D6B30F142FD22 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, uint8_t ___b1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::GetNextCtrBlock(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_GetNextCtrBlock_m747CC9B970706C4EB4521247B2776264899F9497 (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___block0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_m1FB8C3D1BED120F8E2F4A86FB2AC7A1B5512ED6E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___y1, int32_t ___yOff2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::gHASHBlock(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_gHASHBlock_m30FDCFAAB124DA778E5CA3437CAB9362478DFF29 (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Y0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, int32_t ___off2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_m1DA1AB941B9AEF620AB1CB54F03068A26A56B4D7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, int32_t ___xOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___y2, int32_t ___yOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___z4, int32_t ___zOff5, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_mAA66FE5C20761579CC7440B18BC135AC31737D22 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, int32_t ___xOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___y2, int32_t ___yOff3, int32_t ___len4, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_m068CDECE6B130AE53AF131920C3FAE08C3AD9072 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___y1, int32_t ___yOff2, int32_t ___yLen3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GOfbBlockCipher_Reset_m2231BC960D8CE99D9D179CB25E5593102EEF209B (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::bytesToint(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GOfbBlockCipher_bytesToint_m132EB4DCD140F572F15B3EAA227BE14184F1B06C (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::intTobytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GOfbBlockCipher_intTobytes_m8DB65F009CD71CBF3B1D5C1A27C75326E1FDEADF (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, int32_t ___num0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes1, int32_t ___outOff2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher__ctor_mADC6A0960D163766B3DBB59C900AAA3F8B473472 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, RuntimeObject* ___engine0, int32_t ___Nb1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::setNb(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_setNb_m1691E94D49CC5EABA0F785F00CB19CC414DAC106 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, int32_t ___Nb0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::intToBytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_intToBytes_m16AC65329A63E3BDCB6643C4A0601D00FFD06A2D (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, int32_t ___num0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes1, int32_t ___outOff2, const RuntimeMethod* method) ;
// System.Byte Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::getFlag(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t KCcmBlockCipher_getFlag_mE35B88807B9FF2999EB5E7BD4B4C62BFDFDD888E (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, bool ___authTextPresents0, int32_t ___macSize1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessAAD(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_ProcessAAD_m79FD33523E877DE08A1E4990E722A73FC05828F0 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___assocText0, int32_t ___assocOff1, int32_t ___assocLen2, int32_t ___dataLen3, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::CalculateMac(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_CalculateMac_mA4118A7BC12FE3E8A25246B06D3ED33DE020218E (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___authText0, int32_t ___authOff1, int32_t ___len2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_ProcessBlock_m249BA206E27B6B453359C3AF0CB88EC1C0FB88C0 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOff4, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessPacket(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCcmBlockCipher_ProcessPacket_m344E885BC3D8DACAFD862BBB1FAE2F544BD324C2 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOff4, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m244C97184477B594D97652377A63F2A205EC9B1E (int32_t ___value0, int32_t ___toBase1, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29 (StringBuilder_t* __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method) ;
// System.String System.Text.StringBuilder::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m8881C26C9DC63CBE2186F7180F780706A10283F6 (String_t* ___value0, int32_t ___fromBase1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher_Reset_m6A4947B31FC2ED648DF6A2A80CE8AF8E8CC42A0A (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, const RuntimeMethod* method) ;
// System.Byte Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::CalculateByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t KCtrBlockCipher_CalculateByte_m978B111433891E0AF9E76CC865C64504CA093A43 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, uint8_t ___b0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::incrementCounterAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher_incrementCounterAt_m15EA59FF8C03506011D848CBE9928489BEFD345D (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, int32_t ___pos0, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::checkCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher_checkCounter_m0999CDF444F2ABDF770F65E8A555CBD3212A9BBA (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCtrBlockCipher_GetBlockSize_mABF015BD46C03876D7BF7E8BF9CE6860CD77A743 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher_ProcessBytes_m079BC47B7944C6828B94289226A07878914FA8B6 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOff4, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OCB_double(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OcbBlockCipher_OCB_double_m539FF6B57BFB0E14A0E8A4AB3DFC430D2865B357 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___block0, const RuntimeMethod* method) ;
// System.Collections.IList Org.BouncyCastle.Utilities.Platform::CreateArrayList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_CreateArrayList_m0F81F3A136E5BA654BC68E7C46D31C4B192EA900 (const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OCB_extend(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_OCB_extend_mB7FCD3C3413150F5298B382C09B178B032F17164 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___block0, int32_t ___pos1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Xor(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_Xor_mE6DBBAF31DE079D3488BB835333BA03438787996 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___block0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___val1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OCB_ntz(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_OCB_ntz_m55AD251CFDE56653D4961FC3338F90E170EADB43 (int64_t ___x0, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ShiftLeft(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_ShiftLeft_m6D54179830F48DDD9271F1CE8B0DD02805CF7434 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___block0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SipHash__ctor_m1CF2BE34378F689D41CED85A942206466CE388ED (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, const RuntimeMethod* method) 
{
	{
		SipHash__ctor_mF2A1426AAD4AF5D75E0AE3A3A98485EC0FA2ED81(__this, 2, 4, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SipHash__ctor_mF2A1426AAD4AF5D75E0AE3A3A98485EC0FA2ED81 (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, int32_t ___c0, int32_t ___d1, const RuntimeMethod* method) 
{
	{
		__this->___m_8 = ((int64_t)0);
		__this->___wordPos_9 = 0;
		__this->___wordCount_10 = 0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___c0;
		__this->___c_0 = L_0;
		int32_t L_1 = ___d1;
		__this->___d_1 = L_1;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Macs.SipHash::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SipHash_get_AlgorithmName_m01D5F108BF366B3C9B933928D40E03CD75863A00 (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6EC569AA0ACFA41FB7FB87F2D80E4E7FE0F6A14);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		ArrayElementTypeCheck (L_1, _stringLiteralD6EC569AA0ACFA41FB7FB87F2D80E4E7FE0F6A14);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralD6EC569AA0ACFA41FB7FB87F2D80E4E7FE0F6A14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		int32_t L_3 = __this->___c_0;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		ArrayElementTypeCheck (L_6, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		int32_t L_8 = __this->___d_1;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		String_t* L_12;
		L_12 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_11, NULL);
		return L_12;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.SipHash::GetMacSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SipHash_GetMacSize_mD5A1CDCC851D381B6F701EEDC5C3B1E69B43ECB8 (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, const RuntimeMethod* method) 
{
	{
		return 8;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::Init(Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SipHash_Init_m0DE654CF92F0A1CF6B82CD01DA1D0F531B4AF21A (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___parameters0;
		V_0 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_1 = V_0;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C2C8987828E01D85FC122E11371CD17A9B27B40)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SipHash_Init_m0DE654CF92F0A1CF6B82CD01DA1D0F531B4AF21A_RuntimeMethod_var)));
	}

IL_001a:
	{
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_3, NULL);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) == ((int32_t)((int32_t)16))))
		{
			goto IL_0038;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDB80EEF4A6BDCB6B1C755569BAB4BD8A610B18FC)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SipHash_Init_m0DE654CF92F0A1CF6B82CD01DA1D0F531B4AF21A_RuntimeMethod_var)));
	}

IL_0038:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		uint64_t L_8;
		L_8 = Pack_LE_To_UInt64_m7F95797FD245489E424B633B5786987B95C2E0DA(L_7, 0, NULL);
		__this->___k0_2 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		uint64_t L_10;
		L_10 = Pack_LE_To_UInt64_m7F95797FD245489E424B633B5786987B95C2E0DA(L_9, 8, NULL);
		__this->___k1_3 = L_10;
		VirtualActionInvoker0::Invoke(18 /* System.Void Org.BouncyCastle.Crypto.Macs.SipHash::Reset() */, __this);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SipHash_Update_mC6103B343F850103EC3665480FEE422C80F0217F (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int64_t L_0 = __this->___m_8;
		uint8_t L_1 = ___input0;
		__this->___m_8 = ((int64_t)(((int64_t)((uint64_t)L_0>>8))|((int64_t)(((int64_t)(uint64_t)L_1)<<((int32_t)56)))));
		int32_t L_2 = __this->___wordPos_9;
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		V_0 = L_3;
		__this->___wordPos_9 = L_3;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)8))))
		{
			goto IL_0035;
		}
	}
	{
		VirtualActionInvoker0::Invoke(19 /* System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ProcessMessageWord() */, __this);
		__this->___wordPos_9 = 0;
	}

IL_0035:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SipHash_BlockUpdate_m786DBD3346A0310B36F849406DAC4D6EFB1C6BDF (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___length2;
		V_1 = ((int32_t)(L_0&((int32_t)-8)));
		int32_t L_1 = __this->___wordPos_9;
		if (L_1)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_002a;
	}

IL_0011:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___offset1;
		int32_t L_4 = V_0;
		uint64_t L_5;
		L_5 = Pack_LE_To_UInt64_m7F95797FD245489E424B633B5786987B95C2E0DA(L_2, ((int32_t)il2cpp_codegen_add(L_3, L_4)), NULL);
		__this->___m_8 = L_5;
		VirtualActionInvoker0::Invoke(19 /* System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ProcessMessageWord() */, __this);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 8));
	}

IL_002a:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_004c;
	}

IL_0030:
	{
		int64_t L_9 = __this->___m_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___input0;
		int32_t L_11 = ___offset1;
		int32_t L_12 = V_0;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		uint8_t L_14 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		__this->___m_8 = ((int64_t)(((int64_t)((uint64_t)L_9>>8))|((int64_t)(((int64_t)(uint64_t)L_14)<<((int32_t)56)))));
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004c:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = ___length2;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_18 = ___length2;
		int32_t L_19 = V_1;
		__this->___wordPos_9 = ((int32_t)il2cpp_codegen_subtract(L_18, L_19));
		return;
	}

IL_005a:
	{
		int32_t L_20 = __this->___wordPos_9;
		V_2 = ((int32_t)(L_20<<3));
		goto IL_0099;
	}

IL_0065:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___input0;
		int32_t L_22 = ___offset1;
		int32_t L_23 = V_0;
		uint64_t L_24;
		L_24 = Pack_LE_To_UInt64_m7F95797FD245489E424B633B5786987B95C2E0DA(L_21, ((int32_t)il2cpp_codegen_add(L_22, L_23)), NULL);
		V_3 = L_24;
		uint64_t L_25 = V_3;
		int32_t L_26 = V_2;
		int64_t L_27 = __this->___m_8;
		int32_t L_28 = V_2;
		__this->___m_8 = ((int64_t)(((int64_t)((int64_t)L_25<<((int32_t)(L_26&((int32_t)63)))))|((int64_t)((uint64_t)L_27>>((int32_t)(((-L_28))&((int32_t)63)))))));
		VirtualActionInvoker0::Invoke(19 /* System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ProcessMessageWord() */, __this);
		uint64_t L_29 = V_3;
		__this->___m_8 = L_29;
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 8));
	}

IL_0099:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00de;
	}

IL_009f:
	{
		int64_t L_33 = __this->___m_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___input0;
		int32_t L_35 = ___offset1;
		int32_t L_36 = V_0;
		int32_t L_37 = ((int32_t)il2cpp_codegen_add(L_35, L_36));
		uint8_t L_38 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		__this->___m_8 = ((int64_t)(((int64_t)((uint64_t)L_33>>8))|((int64_t)(((int64_t)(uint64_t)L_38)<<((int32_t)56)))));
		int32_t L_39 = __this->___wordPos_9;
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		V_4 = L_40;
		__this->___wordPos_9 = L_40;
		int32_t L_41 = V_4;
		if ((!(((uint32_t)L_41) == ((uint32_t)8))))
		{
			goto IL_00da;
		}
	}
	{
		VirtualActionInvoker0::Invoke(19 /* System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ProcessMessageWord() */, __this);
		__this->___wordPos_9 = 0;
	}

IL_00da:
	{
		int32_t L_42 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00de:
	{
		int32_t L_43 = V_0;
		int32_t L_44 = ___length2;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_009f;
		}
	}
	{
		return;
	}
}
// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::DoFinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SipHash_DoFinal_m810184C0FE6E956772CA75E53F09C08FE93506BB (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->___m_8;
		int32_t L_1 = __this->___wordPos_9;
		__this->___m_8 = ((int64_t)((uint64_t)L_0>>((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_subtract(7, L_1))<<3))&((int32_t)63)))));
		int64_t L_2 = __this->___m_8;
		__this->___m_8 = ((int64_t)((uint64_t)L_2>>8));
		int64_t L_3 = __this->___m_8;
		int32_t L_4 = __this->___wordCount_10;
		int32_t L_5 = __this->___wordPos_9;
		__this->___m_8 = ((int64_t)(L_3|((int64_t)(((int64_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_4<<3)), L_5)))<<((int32_t)56)))));
		VirtualActionInvoker0::Invoke(19 /* System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ProcessMessageWord() */, __this);
		int64_t L_6 = __this->___v2_6;
		__this->___v2_6 = ((int64_t)(L_6^((int64_t)((int32_t)255))));
		int32_t L_7 = __this->___d_1;
		VirtualActionInvoker1< int32_t >::Invoke(20 /* System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ApplySipRounds(System.Int32) */, __this, L_7);
		int64_t L_8 = __this->___v0_4;
		int64_t L_9 = __this->___v1_5;
		int64_t L_10 = __this->___v2_6;
		int64_t L_11 = __this->___v3_7;
		V_0 = ((int64_t)(((int64_t)(((int64_t)(L_8^L_9))^L_10))^L_11));
		VirtualActionInvoker0::Invoke(18 /* System.Void Org.BouncyCastle.Crypto.Macs.SipHash::Reset() */, __this);
		int64_t L_12 = V_0;
		return L_12;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.SipHash::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SipHash_DoFinal_mF32245A12EAC11AFC8EEBE690EC27E14E0E94A62 (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		int64_t L_0;
		L_0 = VirtualFuncInvoker0< int64_t >::Invoke(16 /* System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::DoFinal() */, __this);
		V_0 = L_0;
		int64_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___output0;
		int32_t L_3 = ___outOff1;
		Pack_UInt64_To_LE_m636E90C1902B2A82549A884FBC29A86CEB2B73F2(L_1, L_2, L_3, NULL);
		return 8;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SipHash_Reset_m3ED9FB397AA4B0341063FDA00B8353189C08F965 (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___k0_2;
		__this->___v0_4 = ((int64_t)(L_0^((int64_t)8317987319222330741LL)));
		int64_t L_1 = __this->___k1_3;
		__this->___v1_5 = ((int64_t)(L_1^((int64_t)7237128888997146477LL)));
		int64_t L_2 = __this->___k0_2;
		__this->___v2_6 = ((int64_t)(L_2^((int64_t)7816392313619706465LL)));
		int64_t L_3 = __this->___k1_3;
		__this->___v3_7 = ((int64_t)(L_3^((int64_t)8387220255154660723LL)));
		__this->___m_8 = ((int64_t)0);
		__this->___wordPos_9 = 0;
		__this->___wordCount_10 = 0;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ProcessMessageWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SipHash_ProcessMessageWord_mC97638BA604938B624279F1679A940629F1692DF (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___wordCount_10;
		__this->___wordCount_10 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int64_t L_1 = __this->___v3_7;
		int64_t L_2 = __this->___m_8;
		__this->___v3_7 = ((int64_t)(L_1^L_2));
		int32_t L_3 = __this->___c_0;
		VirtualActionInvoker1< int32_t >::Invoke(20 /* System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ApplySipRounds(System.Int32) */, __this, L_3);
		int64_t L_4 = __this->___v0_4;
		int64_t L_5 = __this->___m_8;
		__this->___v0_4 = ((int64_t)(L_4^L_5));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ApplySipRounds(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SipHash_ApplySipRounds_m1A15D0E4271BCCC11C6F5754A4E7DC00EC0CA674 (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, int32_t ___n0, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int64_t L_0 = __this->___v0_4;
		V_0 = L_0;
		int64_t L_1 = __this->___v1_5;
		V_1 = L_1;
		int64_t L_2 = __this->___v2_6;
		V_2 = L_2;
		int64_t L_3 = __this->___v3_7;
		V_3 = L_3;
		V_4 = 0;
		goto IL_007d;
	}

IL_0021:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_1;
		V_0 = ((int64_t)il2cpp_codegen_add(L_4, L_5));
		int64_t L_6 = V_2;
		int64_t L_7 = V_3;
		V_2 = ((int64_t)il2cpp_codegen_add(L_6, L_7));
		int64_t L_8 = V_1;
		int64_t L_9;
		L_9 = SipHash_RotateLeft_mD0C86193B1490DBD0A98CE19F1EE74BF9830FDC7(L_8, ((int32_t)13), NULL);
		V_1 = L_9;
		int64_t L_10 = V_3;
		int64_t L_11;
		L_11 = SipHash_RotateLeft_mD0C86193B1490DBD0A98CE19F1EE74BF9830FDC7(L_10, ((int32_t)16), NULL);
		V_3 = L_11;
		int64_t L_12 = V_1;
		int64_t L_13 = V_0;
		V_1 = ((int64_t)(L_12^L_13));
		int64_t L_14 = V_3;
		int64_t L_15 = V_2;
		V_3 = ((int64_t)(L_14^L_15));
		int64_t L_16 = V_0;
		int64_t L_17;
		L_17 = SipHash_RotateLeft_mD0C86193B1490DBD0A98CE19F1EE74BF9830FDC7(L_16, ((int32_t)32), NULL);
		V_0 = L_17;
		int64_t L_18 = V_2;
		int64_t L_19 = V_1;
		V_2 = ((int64_t)il2cpp_codegen_add(L_18, L_19));
		int64_t L_20 = V_0;
		int64_t L_21 = V_3;
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, L_21));
		int64_t L_22 = V_1;
		int64_t L_23;
		L_23 = SipHash_RotateLeft_mD0C86193B1490DBD0A98CE19F1EE74BF9830FDC7(L_22, ((int32_t)17), NULL);
		V_1 = L_23;
		int64_t L_24 = V_3;
		int64_t L_25;
		L_25 = SipHash_RotateLeft_mD0C86193B1490DBD0A98CE19F1EE74BF9830FDC7(L_24, ((int32_t)21), NULL);
		V_3 = L_25;
		int64_t L_26 = V_1;
		int64_t L_27 = V_2;
		V_1 = ((int64_t)(L_26^L_27));
		int64_t L_28 = V_3;
		int64_t L_29 = V_0;
		V_3 = ((int64_t)(L_28^L_29));
		int64_t L_30 = V_2;
		int64_t L_31;
		L_31 = SipHash_RotateLeft_mD0C86193B1490DBD0A98CE19F1EE74BF9830FDC7(L_30, ((int32_t)32), NULL);
		V_2 = L_31;
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_007d:
	{
		int32_t L_33 = V_4;
		int32_t L_34 = ___n0;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0021;
		}
	}
	{
		int64_t L_35 = V_0;
		__this->___v0_4 = L_35;
		int64_t L_36 = V_1;
		__this->___v1_5 = L_36;
		int64_t L_37 = V_2;
		__this->___v2_6 = L_37;
		int64_t L_38 = V_3;
		__this->___v3_7 = L_38;
		return;
	}
}
// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::RotateLeft(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SipHash_RotateLeft_mD0C86193B1490DBD0A98CE19F1EE74BF9830FDC7 (int64_t ___x0, int32_t ___n1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		int64_t L_0 = ___x0;
		V_0 = L_0;
		uint64_t L_1 = V_0;
		int32_t L_2 = ___n1;
		uint64_t L_3 = V_0;
		int32_t L_4 = ___n1;
		V_0 = ((int64_t)(((int64_t)((int64_t)L_1<<((int32_t)(L_2&((int32_t)63)))))|((int64_t)((uint64_t)L_3>>((int32_t)(((-L_4))&((int32_t)63)))))));
		uint64_t L_5 = V_0;
		return L_5;
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
// System.Void Org.BouncyCastle.Crypto.Macs.SkeinMac::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinMac__ctor_mBCCBED2B2CC243AA6E7B86B6388F48A557F6AAA7 (SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* __this, int32_t ___stateSizeBits0, int32_t ___digestSizeBits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___stateSizeBits0;
		int32_t L_1 = ___digestSizeBits1;
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_2 = (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB*)il2cpp_codegen_object_new(SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB_il2cpp_TypeInfo_var);
		SkeinEngine__ctor_mF91E68903CC0C9FC02C1C0DD1F1E9B221762A11D(L_2, L_0, L_1, NULL);
		__this->___engine_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_3), (void*)L_2);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SkeinMac::.ctor(Org.BouncyCastle.Crypto.Macs.SkeinMac)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinMac__ctor_m2966F80173B57ECF5D7F4EBC69268EDAB4214A8B (SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* __this, SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* ___mac0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* L_0 = ___mac0;
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_1 = L_0->___engine_3;
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_2 = (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB*)il2cpp_codegen_object_new(SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB_il2cpp_TypeInfo_var);
		SkeinEngine__ctor_m3070EA964D73F5C5E72C1275DF0A49280B024847(L_2, L_1, NULL);
		__this->___engine_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_3), (void*)L_2);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Macs.SkeinMac::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkeinMac_get_AlgorithmName_m4208DCC7F3608C3A6731C3A9685AA7E7A3144B1E (SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D60AC5770D4F760AEFAF7885FA604E7091BBEDE);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		ArrayElementTypeCheck (L_1, _stringLiteral6D60AC5770D4F760AEFAF7885FA604E7091BBEDE);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral6D60AC5770D4F760AEFAF7885FA604E7091BBEDE);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_3 = __this->___engine_3;
		int32_t L_4;
		L_4 = SkeinEngine_get_BlockSize_m5F6B1D2FA8ACBB9639AA3666B7B85B8DD2151037(L_3, NULL);
		int32_t L_5 = ((int32_t)il2cpp_codegen_multiply(L_4, 8));
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		ArrayElementTypeCheck (L_2, L_6);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		ArrayElementTypeCheck (L_7, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_9 = __this->___engine_3;
		int32_t L_10;
		L_10 = SkeinEngine_get_OutputSize_m7B75A727F4C5300C10FEBFBCAEE6E6BBEDC3EF0A_inline(L_9, NULL);
		int32_t L_11 = ((int32_t)il2cpp_codegen_multiply(L_10, 8));
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_0;
		String_t* L_14;
		L_14 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_13, NULL);
		return L_14;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SkeinMac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinMac_Init_mA0D146C830F8412CC3AF683021CB93206040FB0C (SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___parameters0;
		if (!((SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8*)IsInstClass((RuntimeObject*)L_0, SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8_il2cpp_TypeInfo_var)))
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_1 = ___parameters0;
		V_0 = ((SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8*)CastclassClass((RuntimeObject*)L_1, SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8_il2cpp_TypeInfo_var));
		goto IL_004c;
	}

IL_0011:
	{
		RuntimeObject* L_2 = ___parameters0;
		if (!((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_2, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6* L_3 = (Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6*)il2cpp_codegen_object_new(Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6_il2cpp_TypeInfo_var);
		Builder__ctor_m88F4EA119C5649FAFD12B50E5A7EEC0DE814D38A(L_3, NULL);
		RuntimeObject* L_4 = ___parameters0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_4, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6* L_6;
		L_6 = Builder_SetKey_m7D926FEBC30CDB6D8283B7581D5547CC82AA7E10(L_3, L_5, NULL);
		SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8* L_7;
		L_7 = Builder_Build_m4D43C97CEA70091569F5C97B0DC2AACF158FEF7C(L_6, NULL);
		V_0 = L_7;
		goto IL_004c;
	}

IL_0036:
	{
		RuntimeObject* L_8 = ___parameters0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_9;
		L_9 = Platform_GetTypeName_mEB5EBEF8496572C698AAD5E94A3D3E030BF0F240(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9285BEB84CFC90BDC52DB62913B2A7EFFB48DF38)), L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeinMac_Init_mA0D146C830F8412CC3AF683021CB93206040FB0C_RuntimeMethod_var)));
	}

IL_004c:
	{
		SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8* L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = SkeinParameters_GetKey_mB0360C83775B338B3A690618EF6945F648CB5468(L_12, NULL);
		if (L_13)
		{
			goto IL_005f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA8250B534396AB58BA9610ADE04FDD1310D4478D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeinMac_Init_mA0D146C830F8412CC3AF683021CB93206040FB0C_RuntimeMethod_var)));
	}

IL_005f:
	{
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_15 = __this->___engine_3;
		SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8* L_16 = V_0;
		SkeinEngine_Init_m600D7AFFBFF869AFBE5681C28AF9613DA427D83C(L_15, L_16, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.SkeinMac::GetMacSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeinMac_GetMacSize_mF62F8E300E7307DCAB87C75903CC9A5A12BC2561 (SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* __this, const RuntimeMethod* method) 
{
	{
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_0 = __this->___engine_3;
		int32_t L_1;
		L_1 = SkeinEngine_get_OutputSize_m7B75A727F4C5300C10FEBFBCAEE6E6BBEDC3EF0A_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SkeinMac::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinMac_Reset_m8DDD5BE167DB326E4448F6437646A92FD54712E0 (SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* __this, const RuntimeMethod* method) 
{
	{
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_0 = __this->___engine_3;
		SkeinEngine_Reset_m33B2F40AFEDB819D4BB1E00D174F7661D063E085(L_0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SkeinMac::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinMac_Update_mDFAE922D67AA3DFA2B70F9BDA19B532C735AEC21 (SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* __this, uint8_t ___inByte0, const RuntimeMethod* method) 
{
	{
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_0 = __this->___engine_3;
		uint8_t L_1 = ___inByte0;
		SkeinEngine_Update_m74954574D1266FE7710840FFE7B74F886A37166B(L_0, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SkeinMac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinMac_BlockUpdate_mFAE493954C8FB6544091E3F833BA44E8C406E38C (SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___len2, const RuntimeMethod* method) 
{
	{
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_0 = __this->___engine_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input0;
		int32_t L_2 = ___inOff1;
		int32_t L_3 = ___len2;
		SkeinEngine_Update_m1C44C4466C02B46ACD3661FD2B13B5959170592C(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.SkeinMac::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeinMac_DoFinal_mD9881163F096C68FFDC9BAB1EAA1F113B69F9450 (SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	{
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_0 = __this->___engine_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___output0;
		int32_t L_2 = ___outOff1;
		int32_t L_3;
		L_3 = SkeinEngine_DoFinal_mDE98915E12A1C2148E59947191FBFE606FFFF730(L_0, L_1, L_2, NULL);
		return L_3;
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
// System.Int32 Org.BouncyCastle.Crypto.Macs.VmpcMac::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VmpcMac_DoFinal_m884F38C4E69FCEE1806776BA635C9B546C202026 (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	{
		V_0 = 1;
		goto IL_01e1;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___P_2;
		uint8_t L_1 = __this->___s_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___P_2;
		uint8_t L_3 = __this->___n_1;
		int32_t L_4 = ((int32_t)((int32_t)L_3&((int32_t)255)));
		uint8_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_5))&((int32_t)255)));
		uint8_t L_7 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		__this->___s_3 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___P_2;
		uint8_t L_9 = __this->___x4_10;
		uint8_t L_10 = __this->___x3_9;
		int32_t L_11 = V_0;
		int32_t L_12 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), L_11))&((int32_t)255)));
		uint8_t L_13 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		__this->___x4_10 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___P_2;
		uint8_t L_15 = __this->___x3_9;
		uint8_t L_16 = __this->___x2_8;
		int32_t L_17 = V_0;
		int32_t L_18 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)), L_17))&((int32_t)255)));
		uint8_t L_19 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		__this->___x3_9 = L_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___P_2;
		uint8_t L_21 = __this->___x2_8;
		uint8_t L_22 = __this->___x1_7;
		int32_t L_23 = V_0;
		int32_t L_24 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22)), L_23))&((int32_t)255)));
		uint8_t L_25 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		__this->___x2_8 = L_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___P_2;
		uint8_t L_27 = __this->___x1_7;
		uint8_t L_28 = __this->___s_3;
		int32_t L_29 = V_0;
		int32_t L_30 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)L_28)), L_29))&((int32_t)255)));
		uint8_t L_31 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		__this->___x1_7 = L_31;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = __this->___T_4;
		uint8_t L_33 = __this->___g_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___T_4;
		uint8_t L_35 = __this->___g_0;
		int32_t L_36 = ((int32_t)((int32_t)L_35&((int32_t)31)));
		uint8_t L_37 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
		uint8_t L_38 = __this->___x1_7;
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_33&((int32_t)31)))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_37^(int32_t)L_38))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = __this->___T_4;
		uint8_t L_40 = __this->___g_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = __this->___T_4;
		uint8_t L_42 = __this->___g_0;
		int32_t L_43 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_42, 1))&((int32_t)31)));
		uint8_t L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		uint8_t L_45 = __this->___x2_8;
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_40, 1))&((int32_t)31)))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_44^(int32_t)L_45))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = __this->___T_4;
		uint8_t L_47 = __this->___g_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = __this->___T_4;
		uint8_t L_49 = __this->___g_0;
		int32_t L_50 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_49, 2))&((int32_t)31)));
		uint8_t L_51 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		uint8_t L_52 = __this->___x3_9;
		(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_47, 2))&((int32_t)31)))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_51^(int32_t)L_52))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = __this->___T_4;
		uint8_t L_54 = __this->___g_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = __this->___T_4;
		uint8_t L_56 = __this->___g_0;
		int32_t L_57 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_56, 3))&((int32_t)31)));
		uint8_t L_58 = (L_55)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57));
		uint8_t L_59 = __this->___x4_10;
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_54, 3))&((int32_t)31)))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_58^(int32_t)L_59))));
		uint8_t L_60 = __this->___g_0;
		__this->___g_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_60, 4))&((int32_t)31))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = __this->___P_2;
		uint8_t L_62 = __this->___n_1;
		int32_t L_63 = ((int32_t)((int32_t)L_62&((int32_t)255)));
		uint8_t L_64 = (L_61)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63));
		V_1 = L_64;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = __this->___P_2;
		uint8_t L_66 = __this->___n_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = __this->___P_2;
		uint8_t L_68 = __this->___s_3;
		int32_t L_69 = ((int32_t)((int32_t)L_68&((int32_t)255)));
		uint8_t L_70 = (L_67)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_69));
		(L_65)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_66&((int32_t)255)))), (uint8_t)L_70);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = __this->___P_2;
		uint8_t L_72 = __this->___s_3;
		uint8_t L_73 = V_1;
		(L_71)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_72&((int32_t)255)))), (uint8_t)L_73);
		uint8_t L_74 = __this->___n_1;
		__this->___n_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_74, 1))&((int32_t)255))));
		int32_t L_75 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01e1:
	{
		int32_t L_76 = V_0;
		if ((((int32_t)L_76) < ((int32_t)((int32_t)25))))
		{
			goto IL_0007;
		}
	}
	{
		V_2 = 0;
		goto IL_0269;
	}

IL_01ed:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = __this->___P_2;
		uint8_t L_78 = __this->___s_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = __this->___P_2;
		int32_t L_80 = V_2;
		int32_t L_81 = ((int32_t)(L_80&((int32_t)255)));
		uint8_t L_82 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = __this->___T_4;
		int32_t L_84 = V_2;
		int32_t L_85 = ((int32_t)(L_84&((int32_t)31)));
		uint8_t L_86 = (L_83)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85));
		int32_t L_87 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)L_82)), (int32_t)L_86))&((int32_t)255)));
		uint8_t L_88 = (L_77)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_87));
		__this->___s_3 = L_88;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = __this->___P_2;
		int32_t L_90 = V_2;
		int32_t L_91 = ((int32_t)(L_90&((int32_t)255)));
		uint8_t L_92 = (L_89)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_91));
		V_3 = L_92;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = __this->___P_2;
		int32_t L_94 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = __this->___P_2;
		uint8_t L_96 = __this->___s_3;
		int32_t L_97 = ((int32_t)((int32_t)L_96&((int32_t)255)));
		uint8_t L_98 = (L_95)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_97));
		(L_93)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_94&((int32_t)255)))), (uint8_t)L_98);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = __this->___P_2;
		uint8_t L_100 = __this->___s_3;
		uint8_t L_101 = V_3;
		(L_99)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_100&((int32_t)255)))), (uint8_t)L_101);
		int32_t L_102 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_102, 1));
	}

IL_0269:
	{
		int32_t L_103 = V_2;
		if ((((int32_t)L_103) < ((int32_t)((int32_t)768))))
		{
			goto IL_01ed;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		V_4 = L_104;
		V_5 = 0;
		goto IL_0330;
	}

IL_0285:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_105 = __this->___P_2;
		uint8_t L_106 = __this->___s_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = __this->___P_2;
		int32_t L_108 = V_5;
		int32_t L_109 = ((int32_t)(L_108&((int32_t)255)));
		uint8_t L_110 = (L_107)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_109));
		int32_t L_111 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)L_110))&((int32_t)255)));
		uint8_t L_112 = (L_105)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_111));
		__this->___s_3 = L_112;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_113 = V_4;
		int32_t L_114 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115 = __this->___P_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_116 = __this->___P_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_117 = __this->___P_2;
		uint8_t L_118 = __this->___s_3;
		int32_t L_119 = ((int32_t)((int32_t)L_118&((int32_t)255)));
		uint8_t L_120 = (L_117)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_119));
		int32_t L_121 = ((int32_t)((int32_t)L_120&((int32_t)255)));
		uint8_t L_122 = (L_116)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_121));
		int32_t L_123 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_122, 1))&((int32_t)255)));
		uint8_t L_124 = (L_115)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_123));
		(L_113)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_114), (uint8_t)L_124);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_125 = __this->___P_2;
		int32_t L_126 = V_5;
		int32_t L_127 = ((int32_t)(L_126&((int32_t)255)));
		uint8_t L_128 = (L_125)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_127));
		V_6 = L_128;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_129 = __this->___P_2;
		int32_t L_130 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_131 = __this->___P_2;
		uint8_t L_132 = __this->___s_3;
		int32_t L_133 = ((int32_t)((int32_t)L_132&((int32_t)255)));
		uint8_t L_134 = (L_131)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_133));
		(L_129)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_130&((int32_t)255)))), (uint8_t)L_134);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_135 = __this->___P_2;
		uint8_t L_136 = __this->___s_3;
		uint8_t L_137 = V_6;
		(L_135)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_136&((int32_t)255)))), (uint8_t)L_137);
		int32_t L_138 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_138, 1));
	}

IL_0330:
	{
		int32_t L_139 = V_5;
		if ((((int32_t)L_139) < ((int32_t)((int32_t)20))))
		{
			goto IL_0285;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_140 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_141 = ___output0;
		int32_t L_142 = ___outOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_143 = V_4;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_140, 0, (RuntimeArray*)L_141, L_142, ((int32_t)(((RuntimeArray*)L_143)->max_length)), NULL);
		VirtualActionInvoker0::Invoke(15 /* System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::Reset() */, __this);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_144 = V_4;
		return ((int32_t)(((RuntimeArray*)L_144)->max_length));
	}
}
// System.String Org.BouncyCastle.Crypto.Macs.VmpcMac::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VmpcMac_get_AlgorithmName_m1225CB94308155AFA23E637111EEB6418C9FEB78 (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE34BE56CCF14C174933090C28103F2A946D7FE3B);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralE34BE56CCF14C174933090C28103F2A946D7FE3B;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.VmpcMac::GetMacSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VmpcMac_GetMacSize_m753123168638945852065C0EE70AE7B66D6EFA98 (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)20);
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcMac_Init_mE5318BAB03EF84D1C31EA3F2351F52A24EAAB9B0 (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) 
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
		RuntimeObject* L_0 = ___parameters0;
		if (((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_0, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral248BF5CC4E65CCA322C6142014C84E32232A5525)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VmpcMac_Init_mE5318BAB03EF84D1C31EA3F2351F52A24EAAB9B0_RuntimeMethod_var)));
	}

IL_0018:
	{
		RuntimeObject* L_2 = ___parameters0;
		V_0 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_2, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_3, NULL);
		V_1 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_4, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_5, NULL);
		if (((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_6, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0048;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F03BAAAD1A2D95F1010A467F3B8DD7CA392CD05)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VmpcMac_Init_mE5318BAB03EF84D1C31EA3F2351F52A24EAAB9B0_RuntimeMethod_var)));
	}

IL_0048:
	{
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_8, NULL);
		__this->___workingIV_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingIV_5), (void*)L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___workingIV_5;
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___workingIV_5;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))) < ((int32_t)1)))
		{
			goto IL_0076;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___workingIV_5;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) <= ((int32_t)((int32_t)768))))
		{
			goto IL_0086;
		}
	}

IL_0076:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E8A844C3E2202C0C8A0B5D56D2645FAC07131A8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VmpcMac_Init_mE5318BAB03EF84D1C31EA3F2351F52A24EAAB9B0_RuntimeMethod_var)));
	}

IL_0086:
	{
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_14, NULL);
		__this->___workingKey_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingKey_6), (void*)L_15);
		VirtualActionInvoker0::Invoke(15 /* System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::Reset() */, __this);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::initKey(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcMac_initKey_m1497C4E0D51B1A2C3582CF21EE5AADD1B4FFF787 (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyBytes0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ivBytes1, const RuntimeMethod* method) 
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
		__this->___s_3 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___P_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___P_2), (void*)L_0);
		V_0 = 0;
		goto IL_0029;
	}

IL_001b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___P_2;
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
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___P_2;
		uint8_t L_7 = __this->___s_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___P_2;
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
		__this->___s_3 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___P_2;
		int32_t L_20 = V_1;
		int32_t L_21 = ((int32_t)(L_20&((int32_t)255)));
		uint8_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_2 = L_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___P_2;
		int32_t L_24 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___P_2;
		uint8_t L_26 = __this->___s_3;
		int32_t L_27 = ((int32_t)((int32_t)L_26&((int32_t)255)));
		uint8_t L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_24&((int32_t)255)))), (uint8_t)L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___P_2;
		uint8_t L_30 = __this->___s_3;
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
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___P_2;
		uint8_t L_35 = __this->___s_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___P_2;
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
		__this->___s_3 = L_46;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___P_2;
		int32_t L_48 = V_3;
		int32_t L_49 = ((int32_t)(L_48&((int32_t)255)));
		uint8_t L_50 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		V_4 = L_50;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->___P_2;
		int32_t L_52 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = __this->___P_2;
		uint8_t L_54 = __this->___s_3;
		int32_t L_55 = ((int32_t)((int32_t)L_54&((int32_t)255)));
		uint8_t L_56 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(L_52&((int32_t)255)))), (uint8_t)L_56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = __this->___P_2;
		uint8_t L_58 = __this->___s_3;
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
		__this->___n_1 = (uint8_t)0;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcMac_Reset_m8D136C741DE4E4E8BC37EA2656A7DC1943C2B173 (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___workingKey_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___workingIV_5;
		VmpcMac_initKey_m1497C4E0D51B1A2C3582CF21EE5AADD1B4FFF787(__this, L_0, L_1, NULL);
		int32_t L_2 = 0;
		V_1 = (uint8_t)L_2;
		__this->___n_1 = (uint8_t)L_2;
		uint8_t L_3 = V_1;
		uint8_t L_4 = L_3;
		V_1 = L_4;
		__this->___x4_10 = L_4;
		uint8_t L_5 = V_1;
		uint8_t L_6 = L_5;
		V_1 = L_6;
		__this->___x3_9 = L_6;
		uint8_t L_7 = V_1;
		uint8_t L_8 = L_7;
		V_1 = L_8;
		__this->___x2_8 = L_8;
		uint8_t L_9 = V_1;
		uint8_t L_10 = L_9;
		V_1 = L_10;
		__this->___x1_7 = L_10;
		uint8_t L_11 = V_1;
		__this->___g_0 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___T_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___T_4), (void*)L_12);
		V_0 = 0;
		goto IL_0064;
	}

IL_0057:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___T_4;
		int32_t L_14 = V_0;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)0);
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0064:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)32))))
		{
			goto IL_0057;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcMac_Update_mBEE4E30E36D4E2612797DD601CC8A77609B20D6E (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___P_2;
		uint8_t L_1 = __this->___s_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___P_2;
		uint8_t L_3 = __this->___n_1;
		int32_t L_4 = ((int32_t)((int32_t)L_3&((int32_t)255)));
		uint8_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_5))&((int32_t)255)));
		uint8_t L_7 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		__this->___s_3 = L_7;
		uint8_t L_8 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___P_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___P_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___P_2;
		uint8_t L_12 = __this->___s_3;
		int32_t L_13 = ((int32_t)((int32_t)L_12&((int32_t)255)));
		uint8_t L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = ((int32_t)((int32_t)L_14&((int32_t)255)));
		uint8_t L_16 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_16, 1))&((int32_t)255)));
		uint8_t L_18 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_8^(int32_t)L_18)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___P_2;
		uint8_t L_20 = __this->___x4_10;
		uint8_t L_21 = __this->___x3_9;
		int32_t L_22 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21))&((int32_t)255)));
		uint8_t L_23 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		__this->___x4_10 = L_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___P_2;
		uint8_t L_25 = __this->___x3_9;
		uint8_t L_26 = __this->___x2_8;
		int32_t L_27 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_26))&((int32_t)255)));
		uint8_t L_28 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		__this->___x3_9 = L_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___P_2;
		uint8_t L_30 = __this->___x2_8;
		uint8_t L_31 = __this->___x1_7;
		int32_t L_32 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_31))&((int32_t)255)));
		uint8_t L_33 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		__this->___x2_8 = L_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___P_2;
		uint8_t L_35 = __this->___x1_7;
		uint8_t L_36 = __this->___s_3;
		uint8_t L_37 = V_0;
		int32_t L_38 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_36)), (int32_t)L_37))&((int32_t)255)));
		uint8_t L_39 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		__this->___x1_7 = L_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = __this->___T_4;
		uint8_t L_41 = __this->___g_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = __this->___T_4;
		uint8_t L_43 = __this->___g_0;
		int32_t L_44 = ((int32_t)((int32_t)L_43&((int32_t)31)));
		uint8_t L_45 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		uint8_t L_46 = __this->___x1_7;
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_41&((int32_t)31)))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_45^(int32_t)L_46))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___T_4;
		uint8_t L_48 = __this->___g_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = __this->___T_4;
		uint8_t L_50 = __this->___g_0;
		int32_t L_51 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_50, 1))&((int32_t)31)));
		uint8_t L_52 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		uint8_t L_53 = __this->___x2_8;
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_48, 1))&((int32_t)31)))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_52^(int32_t)L_53))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = __this->___T_4;
		uint8_t L_55 = __this->___g_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = __this->___T_4;
		uint8_t L_57 = __this->___g_0;
		int32_t L_58 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_57, 2))&((int32_t)31)));
		uint8_t L_59 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		uint8_t L_60 = __this->___x3_9;
		(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_55, 2))&((int32_t)31)))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_59^(int32_t)L_60))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = __this->___T_4;
		uint8_t L_62 = __this->___g_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = __this->___T_4;
		uint8_t L_64 = __this->___g_0;
		int32_t L_65 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_64, 3))&((int32_t)31)));
		uint8_t L_66 = (L_63)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65));
		uint8_t L_67 = __this->___x4_10;
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_62, 3))&((int32_t)31)))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_66^(int32_t)L_67))));
		uint8_t L_68 = __this->___g_0;
		__this->___g_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_68, 4))&((int32_t)31))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = __this->___P_2;
		uint8_t L_70 = __this->___n_1;
		int32_t L_71 = ((int32_t)((int32_t)L_70&((int32_t)255)));
		uint8_t L_72 = (L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71));
		V_1 = L_72;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = __this->___P_2;
		uint8_t L_74 = __this->___n_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = __this->___P_2;
		uint8_t L_76 = __this->___s_3;
		int32_t L_77 = ((int32_t)((int32_t)L_76&((int32_t)255)));
		uint8_t L_78 = (L_75)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77));
		(L_73)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_74&((int32_t)255)))), (uint8_t)L_78);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = __this->___P_2;
		uint8_t L_80 = __this->___s_3;
		uint8_t L_81 = V_1;
		(L_79)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_80&((int32_t)255)))), (uint8_t)L_81);
		uint8_t L_82 = __this->___n_1;
		__this->___n_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_82, 1))&((int32_t)255))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcMac_BlockUpdate_m6EAB637B2E0E5772F6C1AF49488933A93FEFF35A (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___len2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___inOff1;
		int32_t L_1 = ___len2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_3 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VmpcMac_BlockUpdate_m6EAB637B2E0E5772F6C1AF49488933A93FEFF35A_RuntimeMethod_var)));
	}

IL_0013:
	{
		V_0 = 0;
		goto IL_0026;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input0;
		int32_t L_5 = ___inOff1;
		int32_t L_6 = V_0;
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		uint8_t L_8 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		VirtualActionInvoker1< uint8_t >::Invoke(16 /* System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::Update(System.Byte) */, __this, L_8);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0026:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___len2;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcMac__ctor_m854AA3918163F046E47A27860C1623A86FE1D164 (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, const RuntimeMethod* method) 
{
	{
		__this->___n_1 = (uint8_t)0;
		__this->___P_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___P_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___s_3 = (uint8_t)0;
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
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmExponentiator::Init(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGcmExponentiator_Init_m0971A5079C56154D8F2AE9492DFF223FD696C1A2 (BasicGcmExponentiator_t889C88199B1E25F4C5610EFD2AB4144F96F89832* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___x0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1;
		L_1 = GcmUtilities_AsUlongs_mF912DF51E812AC6A1361FD2441E7B0A695C764F2(L_0, NULL);
		__this->___x_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x_0), (void*)L_1);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmExponentiator::ExponentiateX(System.Int64,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGcmExponentiator_ExponentiateX_mD24CA856DAFBD04C4B6D7B04C597FCA668A5F0F0 (BasicGcmExponentiator_t889C88199B1E25F4C5610EFD2AB4144F96F89832* __this, int64_t ___pow0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0;
		L_0 = GcmUtilities_OneAsUlongs_m03C0DD7C1B6E5DD0698F0CC0C464980D3DA3B264(NULL);
		V_0 = L_0;
		int64_t L_1 = ___pow0;
		if ((((int64_t)L_1) <= ((int64_t)((int64_t)0))))
		{
			goto IL_0037;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = __this->___x_0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3;
		L_3 = Arrays_Clone_m271EAB8D16255673EB3F60DE30564ADE004B4DE5(L_2, NULL);
		V_1 = L_3;
	}

IL_0017:
	{
		int64_t L_4 = ___pow0;
		if ((((int64_t)((int64_t)(L_4&((int64_t)1)))) == ((int64_t)((int64_t)0))))
		{
			goto IL_0026;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		GcmUtilities_Multiply_m4773B3BDF3D95F2ACE4B19D72070F7C3F78D8A39(L_5, L_6, NULL);
	}

IL_0026:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = V_1;
		GcmUtilities_Square_m1AC5C6A4111824645F23E54A7FE5F36EA785DC31(L_7, L_8, NULL);
		int64_t L_9 = ___pow0;
		___pow0 = ((int64_t)(L_9>>1));
		int64_t L_10 = ___pow0;
		if ((((int64_t)L_10) > ((int64_t)((int64_t)0))))
		{
			goto IL_0017;
		}
	}

IL_0037:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___output1;
		GcmUtilities_AsBytes_m387F56854BFD79AB80969002F51EC3A25CD4582E(L_11, L_12, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmExponentiator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGcmExponentiator__ctor_m36D6363D489BD4C0EDEC41F879EB48638202F298 (BasicGcmExponentiator_t889C88199B1E25F4C5610EFD2AB4144F96F89832* __this, const RuntimeMethod* method) 
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
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmMultiplier::Init(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGcmMultiplier_Init_m8E9E103AF5F8EA156CB79DA73013C9C538C53E78 (BasicGcmMultiplier_t70121FD66BA3790D9F0CD78FA12FD2676920451E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___H0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___H0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1;
		L_1 = GcmUtilities_AsUlongs_mF912DF51E812AC6A1361FD2441E7B0A695C764F2(L_0, NULL);
		__this->___H_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___H_0), (void*)L_1);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmMultiplier::MultiplyH(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGcmMultiplier_MultiplyH_m323C8C3497E7D6403A80EA0B5F4FA2FDF1ECF1BA (BasicGcmMultiplier_t70121FD66BA3790D9F0CD78FA12FD2676920451E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, const RuntimeMethod* method) 
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___x0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1;
		L_1 = GcmUtilities_AsUlongs_mF912DF51E812AC6A1361FD2441E7B0A695C764F2(L_0, NULL);
		V_0 = L_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->___H_0;
		GcmUtilities_Multiply_m4773B3BDF3D95F2ACE4B19D72070F7C3F78D8A39(L_2, L_3, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___x0;
		GcmUtilities_AsBytes_m387F56854BFD79AB80969002F51EC3A25CD4582E(L_4, L_5, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmMultiplier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGcmMultiplier__ctor_m7B0EB3BBAF5B2AC8925833B62B38B3B4D88D95BA (BasicGcmMultiplier_t70121FD66BA3790D9F0CD78FA12FD2676920451E* __this, const RuntimeMethod* method) 
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
// System.Byte[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::OneAsBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GcmUtilities_OneAsBytes_mDDC4CB1344C26268F65F9D289B06E383B82CFDD7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)128));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		return L_2;
	}
}
// System.UInt32[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::OneAsUints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* GcmUtilities_OneAsUints_m443FC6CF5AA284CA3181811C7E82EA1CB32C16FA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = V_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)-2147483648LL));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		return L_2;
	}
}
// System.UInt64[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::OneAsUlongs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* GcmUtilities_OneAsUlongs_m03C0DD7C1B6E5DD0698F0CC0C464980D3DA3B264 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = V_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)(std::numeric_limits<int64_t>::min)()));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = V_0;
		return L_2;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsBytes(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GcmUtilities_AsBytes_m5E88EA1C7688D34A943C5F02FF69C5D1576E10C3 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Pack_UInt32_To_BE_mAF45DA91F57F60A2266F35B86509CFADEF7ECB84(L_0, NULL);
		return L_1;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsBytes(System.UInt32[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_AsBytes_m4F790E73285C7A97F6FD9C5B9B68FEEDD93BB5CE (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___z1, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___z1;
		Pack_UInt32_To_BE_m1C17AB1A6CDD4A4C8B4D8F3102F1A4B7B819E237(L_0, L_1, 0, NULL);
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsBytes(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GcmUtilities_AsBytes_mD20B485DDA59EC20CD98F151411BAAEC7C067B52 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		Pack_UInt64_To_BE_m4DDB5FD435F6C59808ED354E01EAB28AD7E4F352(L_1, L_2, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsBytes(System.UInt64[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_AsBytes_m387F56854BFD79AB80969002F51EC3A25CD4582E (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___z1, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___z1;
		Pack_UInt64_To_BE_m4DDB5FD435F6C59808ED354E01EAB28AD7E4F352(L_0, L_1, 0, NULL);
		return;
	}
}
// System.UInt32[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsUints(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* GcmUtilities_AsUints_m29956ED801C5E5DFF7AE35227A5E948534D7645F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bs0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		Pack_BE_To_UInt32_m1C3449DE7AAA30B61CED7CEEB2160B8308A7EE3D(L_1, 0, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		return L_3;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsUints(System.Byte[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_AsUints_m795905D2BF90FC5903C00603BB2773EB4AF609D1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___output1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___output1;
		Pack_BE_To_UInt32_m1C3449DE7AAA30B61CED7CEEB2160B8308A7EE3D(L_0, 0, L_1, NULL);
		return;
	}
}
// System.UInt64[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsUlongs(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* GcmUtilities_AsUlongs_mF912DF51E812AC6A1361FD2441E7B0A695C764F2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___x0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = V_0;
		Pack_BE_To_UInt64_mAF9D42942030555FEA0CC1F49211B21C73F487D1(L_1, 0, L_2, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = V_0;
		return L_3;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsUlongs(System.Byte[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_AsUlongs_mB50CE65D9CCAD3BEA3D2960C10BC3F27B716DA71 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___x0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___z1;
		Pack_BE_To_UInt64_mAF9D42942030555FEA0CC1F49211B21C73F487D1(L_0, 0, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsUlongs(System.Byte[],System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_AsUlongs_mFBF52A7BDA3B08E3426B532DF247885D9D5538F4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z1, int32_t ___zOff2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___x0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___z1;
		int32_t L_2 = ___zOff2;
		Pack_BE_To_UInt64_mFFF80AB1FFAAF1BFBD5D61A6958AC1228955D51A(L_0, 0, L_1, L_2, 2, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Copy(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Copy_mE7FAF90B0AC1F58D38338E9E0E8B0C4423E5A4C4 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___z1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___x0;
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___z1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___x0;
		int32_t L_6 = 1;
		uint32_t L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___z1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___x0;
		int32_t L_10 = 2;
		uint32_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___z1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___x0;
		int32_t L_14 = 3;
		uint32_t L_15 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_15);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Copy(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Copy_m48A9D81FD46FA1424BF94573E38EFB36B0DEFD87 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z1, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___z1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___x0;
		int32_t L_2 = 0;
		int64_t L_3 = (int64_t)(L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_3);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___z1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___x0;
		int32_t L_6 = 1;
		int64_t L_7 = (int64_t)(L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_7);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Copy(System.UInt64[],System.Int32,System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Copy_m146094AF62269C85F207712863D2EA65685F9197 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, int32_t ___xOff1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z2, int32_t ___zOff3, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___z2;
		int32_t L_1 = ___zOff3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___x0;
		int32_t L_3 = ___xOff1;
		int32_t L_4 = L_3;
		int64_t L_5 = (int64_t)(L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint64_t)L_5);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___z2;
		int32_t L_7 = ___zOff3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___x0;
		int32_t L_9 = ___xOff1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int64_t L_11 = (int64_t)(L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (uint64_t)L_11);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::DivideP(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_DivideP_m62305D5F6C498DBC9809CA9A4455D54DCEB10074 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___x0;
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___x0;
		int32_t L_4 = 1;
		int64_t L_5 = (int64_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		uint64_t L_6 = V_0;
		V_2 = ((int64_t)((int64_t)L_6>>((int32_t)63)));
		uint64_t L_7 = V_0;
		uint64_t L_8 = V_2;
		V_0 = ((int64_t)((int64_t)L_7^((int64_t)((int64_t)L_8&((int64_t)-2233785415175766016LL)))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___z1;
		uint64_t L_10 = V_0;
		uint64_t L_11 = V_1;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)(((int64_t)((int64_t)L_10<<1))|((int64_t)((uint64_t)L_11>>((int32_t)63))))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___z1;
		uint64_t L_13 = V_1;
		uint64_t L_14 = V_2;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)((int64_t)(((int64_t)((int64_t)L_13<<1))|(int64_t)((-((int64_t)L_14))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::DivideP(System.UInt64[],System.Int32,System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_DivideP_mA96F2C3CEE8CB845D7837B12B1D2B6EDB73E8D87 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, int32_t ___xOff1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z2, int32_t ___zOff3, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___x0;
		int32_t L_1 = ___xOff1;
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___x0;
		int32_t L_5 = ___xOff1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int64_t L_7 = (int64_t)(L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		uint64_t L_8 = V_0;
		V_2 = ((int64_t)((int64_t)L_8>>((int32_t)63)));
		uint64_t L_9 = V_0;
		uint64_t L_10 = V_2;
		V_0 = ((int64_t)((int64_t)L_9^((int64_t)((int64_t)L_10&((int64_t)-2233785415175766016LL)))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___z2;
		int32_t L_12 = ___zOff3;
		uint64_t L_13 = V_0;
		uint64_t L_14 = V_1;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (uint64_t)((int64_t)(((int64_t)((int64_t)L_13<<1))|((int64_t)((uint64_t)L_14>>((int32_t)63))))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = ___z2;
		int32_t L_16 = ___zOff3;
		uint64_t L_17 = V_1;
		uint64_t L_18 = V_2;
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_16, 1))), (uint64_t)((int64_t)(((int64_t)((int64_t)L_17<<1))|(int64_t)((-((int64_t)L_18))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Multiply(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Multiply_mC0F3EBA2CCEC2F7760C6DBC2F13B61CC15BA3E58 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___y1, const RuntimeMethod* method) 
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___x0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1;
		L_1 = GcmUtilities_AsUlongs_mF912DF51E812AC6A1361FD2441E7B0A695C764F2(L_0, NULL);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___y1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3;
		L_3 = GcmUtilities_AsUlongs_mF912DF51E812AC6A1361FD2441E7B0A695C764F2(L_2, NULL);
		V_1 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = V_1;
		GcmUtilities_Multiply_m4773B3BDF3D95F2ACE4B19D72070F7C3F78D8A39(L_4, L_5, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___x0;
		GcmUtilities_AsBytes_m387F56854BFD79AB80969002F51EC3A25CD4582E(L_6, L_7, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Multiply(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Multiply_m6E1A93ABBCEBA8AC4151C97F5B30042461A41B5D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___y1;
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___y1;
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___y1;
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___y1;
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		V_4 = 0;
		V_5 = 0;
		V_6 = 0;
		V_7 = 0;
		V_8 = 0;
		goto IL_009f;
	}

IL_0021:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___x0;
		int32_t L_13 = V_8;
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_9 = L_15;
		V_10 = 0;
		goto IL_0093;
	}

IL_002c:
	{
		int32_t L_16 = V_9;
		V_11 = ((int32_t)(L_16>>((int32_t)31)));
		int32_t L_17 = V_9;
		V_9 = ((int32_t)(L_17<<1));
		uint32_t L_18 = V_4;
		uint32_t L_19 = V_0;
		uint32_t L_20 = V_11;
		V_4 = ((int32_t)((int32_t)L_18^((int32_t)((int32_t)L_19&(int32_t)L_20))));
		uint32_t L_21 = V_5;
		uint32_t L_22 = V_1;
		uint32_t L_23 = V_11;
		V_5 = ((int32_t)((int32_t)L_21^((int32_t)((int32_t)L_22&(int32_t)L_23))));
		uint32_t L_24 = V_6;
		uint32_t L_25 = V_2;
		uint32_t L_26 = V_11;
		V_6 = ((int32_t)((int32_t)L_24^((int32_t)((int32_t)L_25&(int32_t)L_26))));
		uint32_t L_27 = V_7;
		uint32_t L_28 = V_3;
		uint32_t L_29 = V_11;
		V_7 = ((int32_t)((int32_t)L_27^((int32_t)((int32_t)L_28&(int32_t)L_29))));
		uint32_t L_30 = V_3;
		V_12 = ((int32_t)(((int32_t)((int32_t)L_30<<((int32_t)31)))>>8));
		uint32_t L_31 = V_3;
		uint32_t L_32 = V_2;
		V_3 = ((int32_t)(((int32_t)((uint32_t)L_31>>1))|((int32_t)((int32_t)L_32<<((int32_t)31)))));
		uint32_t L_33 = V_2;
		uint32_t L_34 = V_1;
		V_2 = ((int32_t)(((int32_t)((uint32_t)L_33>>1))|((int32_t)((int32_t)L_34<<((int32_t)31)))));
		uint32_t L_35 = V_1;
		uint32_t L_36 = V_0;
		V_1 = ((int32_t)(((int32_t)((uint32_t)L_35>>1))|((int32_t)((int32_t)L_36<<((int32_t)31)))));
		uint32_t L_37 = V_0;
		uint32_t L_38 = V_12;
		V_0 = ((int32_t)(((int32_t)((uint32_t)L_37>>1))^((int32_t)((int32_t)L_38&((int32_t)-520093696)))));
		int32_t L_39 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0093:
	{
		int32_t L_40 = V_10;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)32))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_41 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_009f:
	{
		int32_t L_42 = V_8;
		if ((((int32_t)L_42) < ((int32_t)4)))
		{
			goto IL_0021;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___x0;
		uint32_t L_44 = V_4;
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_44);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___x0;
		uint32_t L_46 = V_5;
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_46);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___x0;
		uint32_t L_48 = V_6;
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___x0;
		uint32_t L_50 = V_7;
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_50);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Multiply(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Multiply_m4773B3BDF3D95F2ACE4B19D72070F7C3F78D8A39 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___y1, const RuntimeMethod* method) 
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
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___x0;
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___x0;
		int32_t L_4 = 1;
		int64_t L_5 = (int64_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___y1;
		int32_t L_7 = 0;
		int64_t L_8 = (int64_t)(L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___y1;
		int32_t L_10 = 1;
		int64_t L_11 = (int64_t)(L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		uint64_t L_12 = V_0;
		uint64_t L_13;
		L_13 = Longs_Reverse_mF7730DBDC798C2F4281CA79C5E283A311D6B9592(L_12, NULL);
		V_4 = L_13;
		uint64_t L_14 = V_1;
		uint64_t L_15;
		L_15 = Longs_Reverse_mF7730DBDC798C2F4281CA79C5E283A311D6B9592(L_14, NULL);
		V_5 = L_15;
		uint64_t L_16 = V_2;
		uint64_t L_17;
		L_17 = Longs_Reverse_mF7730DBDC798C2F4281CA79C5E283A311D6B9592(L_16, NULL);
		V_6 = L_17;
		uint64_t L_18 = V_3;
		uint64_t L_19;
		L_19 = Longs_Reverse_mF7730DBDC798C2F4281CA79C5E283A311D6B9592(L_18, NULL);
		V_7 = L_19;
		uint64_t L_20 = V_4;
		uint64_t L_21 = V_6;
		uint64_t L_22;
		L_22 = GcmUtilities_ImplMul64_m97EB36F7325585E98F9A25C6C9108F34CC73A16D(L_20, L_21, NULL);
		uint64_t L_23;
		L_23 = Longs_Reverse_mF7730DBDC798C2F4281CA79C5E283A311D6B9592(L_22, NULL);
		V_8 = L_23;
		uint64_t L_24 = V_0;
		uint64_t L_25 = V_2;
		uint64_t L_26;
		L_26 = GcmUtilities_ImplMul64_m97EB36F7325585E98F9A25C6C9108F34CC73A16D(L_24, L_25, NULL);
		V_9 = ((int64_t)((int64_t)L_26<<1));
		uint64_t L_27 = V_5;
		uint64_t L_28 = V_7;
		uint64_t L_29;
		L_29 = GcmUtilities_ImplMul64_m97EB36F7325585E98F9A25C6C9108F34CC73A16D(L_27, L_28, NULL);
		uint64_t L_30;
		L_30 = Longs_Reverse_mF7730DBDC798C2F4281CA79C5E283A311D6B9592(L_29, NULL);
		V_10 = L_30;
		uint64_t L_31 = V_1;
		uint64_t L_32 = V_3;
		uint64_t L_33;
		L_33 = GcmUtilities_ImplMul64_m97EB36F7325585E98F9A25C6C9108F34CC73A16D(L_31, L_32, NULL);
		V_11 = ((int64_t)((int64_t)L_33<<1));
		uint64_t L_34 = V_4;
		uint64_t L_35 = V_5;
		uint64_t L_36 = V_6;
		uint64_t L_37 = V_7;
		uint64_t L_38;
		L_38 = GcmUtilities_ImplMul64_m97EB36F7325585E98F9A25C6C9108F34CC73A16D(((int64_t)((int64_t)L_34^(int64_t)L_35)), ((int64_t)((int64_t)L_36^(int64_t)L_37)), NULL);
		uint64_t L_39;
		L_39 = Longs_Reverse_mF7730DBDC798C2F4281CA79C5E283A311D6B9592(L_38, NULL);
		V_12 = L_39;
		uint64_t L_40 = V_0;
		uint64_t L_41 = V_1;
		uint64_t L_42 = V_2;
		uint64_t L_43 = V_3;
		uint64_t L_44;
		L_44 = GcmUtilities_ImplMul64_m97EB36F7325585E98F9A25C6C9108F34CC73A16D(((int64_t)((int64_t)L_40^(int64_t)L_41)), ((int64_t)((int64_t)L_42^(int64_t)L_43)), NULL);
		V_13 = ((int64_t)((int64_t)L_44<<1));
		uint64_t L_45 = V_8;
		V_14 = L_45;
		uint64_t L_46 = V_9;
		uint64_t L_47 = V_8;
		uint64_t L_48 = V_10;
		uint64_t L_49 = V_12;
		V_15 = ((int64_t)(((int64_t)(((int64_t)((int64_t)L_46^(int64_t)L_47))^(int64_t)L_48))^(int64_t)L_49));
		uint64_t L_50 = V_10;
		uint64_t L_51 = V_9;
		uint64_t L_52 = V_11;
		uint64_t L_53 = V_13;
		V_16 = ((int64_t)(((int64_t)(((int64_t)((int64_t)L_50^(int64_t)L_51))^(int64_t)L_52))^(int64_t)L_53));
		uint64_t L_54 = V_11;
		V_17 = L_54;
		uint64_t L_55 = V_15;
		uint64_t L_56 = V_17;
		uint64_t L_57 = V_17;
		uint64_t L_58 = V_17;
		uint64_t L_59 = V_17;
		V_15 = ((int64_t)((int64_t)L_55^((int64_t)(((int64_t)(((int64_t)((int64_t)L_56^((int64_t)((uint64_t)L_57>>1))))^((int64_t)((uint64_t)L_58>>2))))^((int64_t)((uint64_t)L_59>>7))))));
		uint64_t L_60 = V_16;
		uint64_t L_61 = V_17;
		uint64_t L_62 = V_17;
		V_16 = ((int64_t)((int64_t)L_60^((int64_t)(((int64_t)((int64_t)L_61<<((int32_t)62)))^((int64_t)((int64_t)L_62<<((int32_t)57)))))));
		uint64_t L_63 = V_14;
		uint64_t L_64 = V_16;
		uint64_t L_65 = V_16;
		uint64_t L_66 = V_16;
		uint64_t L_67 = V_16;
		V_14 = ((int64_t)((int64_t)L_63^((int64_t)(((int64_t)(((int64_t)((int64_t)L_64^((int64_t)((uint64_t)L_65>>1))))^((int64_t)((uint64_t)L_66>>2))))^((int64_t)((uint64_t)L_67>>7))))));
		uint64_t L_68 = V_15;
		uint64_t L_69 = V_16;
		uint64_t L_70 = V_16;
		uint64_t L_71 = V_16;
		V_15 = ((int64_t)((int64_t)L_68^((int64_t)(((int64_t)(((int64_t)((int64_t)L_69<<((int32_t)63)))^((int64_t)((int64_t)L_70<<((int32_t)62)))))^((int64_t)((int64_t)L_71<<((int32_t)57)))))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_72 = ___x0;
		uint64_t L_73 = V_14;
		(L_72)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_73);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_74 = ___x0;
		uint64_t L_75 = V_15;
		(L_74)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_75);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP_m8477FACD0DC19837FB67A00993687ACE72523FF4 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
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
		uint32_t L_12 = V_3;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_12<<((int32_t)31)))>>((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___x0;
		uint32_t L_14 = V_0;
		uint32_t L_15 = V_4;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_14>>1))^((int32_t)((int32_t)L_15&((int32_t)-520093696))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___x0;
		uint32_t L_17 = V_1;
		uint32_t L_18 = V_0;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_17>>1))|((int32_t)((int32_t)L_18<<((int32_t)31))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___x0;
		uint32_t L_20 = V_2;
		uint32_t L_21 = V_1;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_20>>1))|((int32_t)((int32_t)L_21<<((int32_t)31))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___x0;
		uint32_t L_23 = V_3;
		uint32_t L_24 = V_2;
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_23>>1))|((int32_t)((int32_t)L_24<<((int32_t)31))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP_mC42A752838924950DBA6B89CAA5F6A4806D0BEEC (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
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
		uint32_t L_12 = V_3;
		V_4 = ((int32_t)(((int32_t)((int32_t)L_12<<((int32_t)31)))>>((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___z1;
		uint32_t L_14 = V_0;
		uint32_t L_15 = V_4;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_14>>1))^((int32_t)((int32_t)L_15&((int32_t)-520093696))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___z1;
		uint32_t L_17 = V_1;
		uint32_t L_18 = V_0;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_17>>1))|((int32_t)((int32_t)L_18<<((int32_t)31))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___z1;
		uint32_t L_20 = V_2;
		uint32_t L_21 = V_1;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_20>>1))|((int32_t)((int32_t)L_21<<((int32_t)31))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___z1;
		uint32_t L_23 = V_3;
		uint32_t L_24 = V_2;
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_23>>1))|((int32_t)((int32_t)L_24<<((int32_t)31))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP_mB6422A428AC05BCC343E041F6392C55FB6991A76 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___x0;
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___x0;
		int32_t L_4 = 1;
		int64_t L_5 = (int64_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		uint64_t L_6 = V_1;
		V_2 = ((int64_t)(((int64_t)((int64_t)L_6<<((int32_t)63)))>>((int32_t)63)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = ___x0;
		uint64_t L_8 = V_0;
		uint64_t L_9 = V_2;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)(((int64_t)((uint64_t)L_8>>1))^((int64_t)((int64_t)L_9&((int64_t)-2233785415175766016LL))))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = ___x0;
		uint64_t L_11 = V_1;
		uint64_t L_12 = V_0;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)((int64_t)(((int64_t)((uint64_t)L_11>>1))|((int64_t)((int64_t)L_12<<((int32_t)63))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP_m3137A41DF3BB2C25BAEDD7C0894D416AD9D29817 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___x0;
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___x0;
		int32_t L_4 = 1;
		int64_t L_5 = (int64_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		uint64_t L_6 = V_1;
		V_2 = ((int64_t)(((int64_t)((int64_t)L_6<<((int32_t)63)))>>((int32_t)63)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = ___z1;
		uint64_t L_8 = V_0;
		uint64_t L_9 = V_2;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)(((int64_t)((uint64_t)L_8>>1))^((int64_t)((int64_t)L_9&((int64_t)-2233785415175766016LL))))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = ___z1;
		uint64_t L_11 = V_1;
		uint64_t L_12 = V_0;
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)((int64_t)(((int64_t)((uint64_t)L_11>>1))|((int64_t)((int64_t)L_12<<((int32_t)63))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP3(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP3_mC32BD7B2333C439056DB02233D8A6B1FDDFE3D07 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___x0;
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___x0;
		int32_t L_4 = 1;
		int64_t L_5 = (int64_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		uint64_t L_6 = V_1;
		V_2 = ((int64_t)((int64_t)L_6<<((int32_t)61)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = ___z1;
		uint64_t L_8 = V_0;
		uint64_t L_9 = V_2;
		uint64_t L_10 = V_2;
		uint64_t L_11 = V_2;
		uint64_t L_12 = V_2;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)((uint64_t)L_8>>3))^(int64_t)L_9))^((int64_t)((uint64_t)L_10>>1))))^((int64_t)((uint64_t)L_11>>2))))^((int64_t)((uint64_t)L_12>>7)))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___z1;
		uint64_t L_14 = V_1;
		uint64_t L_15 = V_0;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)((int64_t)(((int64_t)((uint64_t)L_14>>3))|((int64_t)((int64_t)L_15<<((int32_t)61))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP3(System.UInt64[],System.Int32,System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP3_m5D37BC7A1879C39DF11B70E4EB79C22552FF334B (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, int32_t ___xOff1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z2, int32_t ___zOff3, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___x0;
		int32_t L_1 = ___xOff1;
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___x0;
		int32_t L_5 = ___xOff1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int64_t L_7 = (int64_t)(L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		uint64_t L_8 = V_1;
		V_2 = ((int64_t)((int64_t)L_8<<((int32_t)61)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___z2;
		int32_t L_10 = ___zOff3;
		uint64_t L_11 = V_0;
		uint64_t L_12 = V_2;
		uint64_t L_13 = V_2;
		uint64_t L_14 = V_2;
		uint64_t L_15 = V_2;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10), (uint64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)((uint64_t)L_11>>3))^(int64_t)L_12))^((int64_t)((uint64_t)L_13>>1))))^((int64_t)((uint64_t)L_14>>2))))^((int64_t)((uint64_t)L_15>>7)))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___z2;
		int32_t L_17 = ___zOff3;
		uint64_t L_18 = V_1;
		uint64_t L_19 = V_0;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_17, 1))), (uint64_t)((int64_t)(((int64_t)((uint64_t)L_18>>3))|((int64_t)((int64_t)L_19<<((int32_t)61))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP4(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP4_mBF8B3560D9E89574CE4A02F352B5B278BED8D9EC (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___x0;
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___x0;
		int32_t L_4 = 1;
		int64_t L_5 = (int64_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		uint64_t L_6 = V_1;
		V_2 = ((int64_t)((int64_t)L_6<<((int32_t)60)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = ___z1;
		uint64_t L_8 = V_0;
		uint64_t L_9 = V_2;
		uint64_t L_10 = V_2;
		uint64_t L_11 = V_2;
		uint64_t L_12 = V_2;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)((uint64_t)L_8>>4))^(int64_t)L_9))^((int64_t)((uint64_t)L_10>>1))))^((int64_t)((uint64_t)L_11>>2))))^((int64_t)((uint64_t)L_12>>7)))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___z1;
		uint64_t L_14 = V_1;
		uint64_t L_15 = V_0;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)((int64_t)(((int64_t)((uint64_t)L_14>>4))|((int64_t)((int64_t)L_15<<((int32_t)60))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP4(System.UInt64[],System.Int32,System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP4_mCB40910E09ECAA726B18AC78561259A46E435228 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, int32_t ___xOff1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z2, int32_t ___zOff3, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___x0;
		int32_t L_1 = ___xOff1;
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___x0;
		int32_t L_5 = ___xOff1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int64_t L_7 = (int64_t)(L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		uint64_t L_8 = V_1;
		V_2 = ((int64_t)((int64_t)L_8<<((int32_t)60)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___z2;
		int32_t L_10 = ___zOff3;
		uint64_t L_11 = V_0;
		uint64_t L_12 = V_2;
		uint64_t L_13 = V_2;
		uint64_t L_14 = V_2;
		uint64_t L_15 = V_2;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10), (uint64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)((uint64_t)L_11>>4))^(int64_t)L_12))^((int64_t)((uint64_t)L_13>>1))))^((int64_t)((uint64_t)L_14>>2))))^((int64_t)((uint64_t)L_15>>7)))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___z2;
		int32_t L_17 = ___zOff3;
		uint64_t L_18 = V_1;
		uint64_t L_19 = V_0;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_17, 1))), (uint64_t)((int64_t)(((int64_t)((uint64_t)L_18>>4))|((int64_t)((int64_t)L_19<<((int32_t)60))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP7(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP7_m98F4BCE0F138D2398BFD2EB61E2A384BE50F5FDD (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___x0;
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___x0;
		int32_t L_4 = 1;
		int64_t L_5 = (int64_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		uint64_t L_6 = V_1;
		V_2 = ((int64_t)((int64_t)L_6<<((int32_t)57)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = ___z1;
		uint64_t L_8 = V_0;
		uint64_t L_9 = V_2;
		uint64_t L_10 = V_2;
		uint64_t L_11 = V_2;
		uint64_t L_12 = V_2;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)((uint64_t)L_8>>7))^(int64_t)L_9))^((int64_t)((uint64_t)L_10>>1))))^((int64_t)((uint64_t)L_11>>2))))^((int64_t)((uint64_t)L_12>>7)))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___z1;
		uint64_t L_14 = V_1;
		uint64_t L_15 = V_0;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)((int64_t)(((int64_t)((uint64_t)L_14>>7))|((int64_t)((int64_t)L_15<<((int32_t)57))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP7(System.UInt64[],System.Int32,System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP7_m4541A0B6228EBF4969DB7A4472DB904F0018AF05 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, int32_t ___xOff1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z2, int32_t ___zOff3, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___x0;
		int32_t L_1 = ___xOff1;
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___x0;
		int32_t L_5 = ___xOff1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int64_t L_7 = (int64_t)(L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		uint64_t L_8 = V_1;
		V_2 = ((int64_t)((int64_t)L_8<<((int32_t)57)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___z2;
		int32_t L_10 = ___zOff3;
		uint64_t L_11 = V_0;
		uint64_t L_12 = V_2;
		uint64_t L_13 = V_2;
		uint64_t L_14 = V_2;
		uint64_t L_15 = V_2;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10), (uint64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)((uint64_t)L_11>>7))^(int64_t)L_12))^((int64_t)((uint64_t)L_13>>1))))^((int64_t)((uint64_t)L_14>>2))))^((int64_t)((uint64_t)L_15>>7)))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___z2;
		int32_t L_17 = ___zOff3;
		uint64_t L_18 = V_1;
		uint64_t L_19 = V_0;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_17, 1))), (uint64_t)((int64_t)(((int64_t)((uint64_t)L_18>>7))|((int64_t)((int64_t)L_19<<((int32_t)57))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP8(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP8_m11B3D43E2D7CD435CD1C05FD02D1C18116C4AAD5 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
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
		uint32_t L_12 = V_3;
		V_4 = ((int32_t)((int32_t)L_12<<((int32_t)24)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___x0;
		uint32_t L_14 = V_0;
		uint32_t L_15 = V_4;
		uint32_t L_16 = V_4;
		uint32_t L_17 = V_4;
		uint32_t L_18 = V_4;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_14>>8))^(int32_t)L_15))^((int32_t)((uint32_t)L_16>>1))))^((int32_t)((uint32_t)L_17>>2))))^((int32_t)((uint32_t)L_18>>7)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___x0;
		uint32_t L_20 = V_1;
		uint32_t L_21 = V_0;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_20>>8))|((int32_t)((int32_t)L_21<<((int32_t)24))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___x0;
		uint32_t L_23 = V_2;
		uint32_t L_24 = V_1;
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_23>>8))|((int32_t)((int32_t)L_24<<((int32_t)24))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___x0;
		uint32_t L_26 = V_3;
		uint32_t L_27 = V_2;
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_26>>8))|((int32_t)((int32_t)L_27<<((int32_t)24))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP8(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP8_m40026381C14D2F7299C13873BE64DC320AE118EF (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
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
		uint32_t L_12 = V_3;
		V_4 = ((int32_t)((int32_t)L_12<<((int32_t)24)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___y1;
		uint32_t L_14 = V_0;
		uint32_t L_15 = V_4;
		uint32_t L_16 = V_4;
		uint32_t L_17 = V_4;
		uint32_t L_18 = V_4;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)((uint32_t)L_14>>8))^(int32_t)L_15))^((int32_t)((uint32_t)L_16>>1))))^((int32_t)((uint32_t)L_17>>2))))^((int32_t)((uint32_t)L_18>>7)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___y1;
		uint32_t L_20 = V_1;
		uint32_t L_21 = V_0;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_20>>8))|((int32_t)((int32_t)L_21<<((int32_t)24))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___y1;
		uint32_t L_23 = V_2;
		uint32_t L_24 = V_1;
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_23>>8))|((int32_t)((int32_t)L_24<<((int32_t)24))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___y1;
		uint32_t L_26 = V_3;
		uint32_t L_27 = V_2;
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_26>>8))|((int32_t)((int32_t)L_27<<((int32_t)24))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP8(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP8_mA3F02B0B22059889BD6E67D5DE35209C404A8903 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___x0;
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___x0;
		int32_t L_4 = 1;
		int64_t L_5 = (int64_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		uint64_t L_6 = V_1;
		V_2 = ((int64_t)((int64_t)L_6<<((int32_t)56)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = ___x0;
		uint64_t L_8 = V_0;
		uint64_t L_9 = V_2;
		uint64_t L_10 = V_2;
		uint64_t L_11 = V_2;
		uint64_t L_12 = V_2;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)((uint64_t)L_8>>8))^(int64_t)L_9))^((int64_t)((uint64_t)L_10>>1))))^((int64_t)((uint64_t)L_11>>2))))^((int64_t)((uint64_t)L_12>>7)))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___x0;
		uint64_t L_14 = V_1;
		uint64_t L_15 = V_0;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)((int64_t)(((int64_t)((uint64_t)L_14>>8))|((int64_t)((int64_t)L_15<<((int32_t)56))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP8(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP8_mC7D9CB0533E2DC8B0739AB6B37D817B756432821 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___y1, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___x0;
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___x0;
		int32_t L_4 = 1;
		int64_t L_5 = (int64_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		uint64_t L_6 = V_1;
		V_2 = ((int64_t)((int64_t)L_6<<((int32_t)56)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = ___y1;
		uint64_t L_8 = V_0;
		uint64_t L_9 = V_2;
		uint64_t L_10 = V_2;
		uint64_t L_11 = V_2;
		uint64_t L_12 = V_2;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)((uint64_t)L_8>>8))^(int64_t)L_9))^((int64_t)((uint64_t)L_10>>1))))^((int64_t)((uint64_t)L_11>>2))))^((int64_t)((uint64_t)L_12>>7)))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___y1;
		uint64_t L_14 = V_1;
		uint64_t L_15 = V_0;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)((int64_t)(((int64_t)((uint64_t)L_14>>8))|((int64_t)((int64_t)L_15<<((int32_t)56))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP8(System.UInt64[],System.Int32,System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP8_m0C43937F3749536884F0D05B7CA7B2FC94C663EB (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, int32_t ___xOff1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___y2, int32_t ___yOff3, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___x0;
		int32_t L_1 = ___xOff1;
		int32_t L_2 = L_1;
		int64_t L_3 = (int64_t)(L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___x0;
		int32_t L_5 = ___xOff1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int64_t L_7 = (int64_t)(L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		uint64_t L_8 = V_1;
		V_2 = ((int64_t)((int64_t)L_8<<((int32_t)56)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___y2;
		int32_t L_10 = ___yOff3;
		uint64_t L_11 = V_0;
		uint64_t L_12 = V_2;
		uint64_t L_13 = V_2;
		uint64_t L_14 = V_2;
		uint64_t L_15 = V_2;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10), (uint64_t)((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)((uint64_t)L_11>>8))^(int64_t)L_12))^((int64_t)((uint64_t)L_13>>1))))^((int64_t)((uint64_t)L_14>>2))))^((int64_t)((uint64_t)L_15>>7)))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___y2;
		int32_t L_17 = ___yOff3;
		uint64_t L_18 = V_1;
		uint64_t L_19 = V_0;
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_17, 1))), (uint64_t)((int64_t)(((int64_t)((uint64_t)L_18>>8))|((int64_t)((int64_t)L_19<<((int32_t)56))))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Square(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Square_m1AC5C6A4111824645F23E54A7FE5F36EA785DC31 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___x0;
		int32_t L_2 = 0;
		int64_t L_3 = (int64_t)(L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		Interleave_Expand64To128Rev_m23B9CE512E7C3B99D7DB69FEE7C8EA63556C7B77(L_3, L_4, 0, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___x0;
		int32_t L_6 = 1;
		int64_t L_7 = (int64_t)(L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = V_0;
		Interleave_Expand64To128Rev_m23B9CE512E7C3B99D7DB69FEE7C8EA63556C7B77(L_7, L_8, 2, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = V_0;
		int32_t L_10 = 0;
		int64_t L_11 = (int64_t)(L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = L_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = V_0;
		int32_t L_13 = 1;
		int64_t L_14 = (int64_t)(L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = V_0;
		int32_t L_16 = 2;
		int64_t L_17 = (int64_t)(L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_3 = L_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = V_0;
		int32_t L_19 = 3;
		int64_t L_20 = (int64_t)(L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		V_4 = L_20;
		uint64_t L_21 = V_2;
		uint64_t L_22 = V_4;
		uint64_t L_23 = V_4;
		uint64_t L_24 = V_4;
		uint64_t L_25 = V_4;
		V_2 = ((int64_t)((int64_t)L_21^((int64_t)(((int64_t)(((int64_t)((int64_t)L_22^((int64_t)((uint64_t)L_23>>1))))^((int64_t)((uint64_t)L_24>>2))))^((int64_t)((uint64_t)L_25>>7))))));
		uint64_t L_26 = V_3;
		uint64_t L_27 = V_4;
		uint64_t L_28 = V_4;
		V_3 = ((int64_t)((int64_t)L_26^((int64_t)(((int64_t)((int64_t)L_27<<((int32_t)62)))^((int64_t)((int64_t)L_28<<((int32_t)57)))))));
		uint64_t L_29 = V_1;
		uint64_t L_30 = V_3;
		uint64_t L_31 = V_3;
		uint64_t L_32 = V_3;
		uint64_t L_33 = V_3;
		V_1 = ((int64_t)((int64_t)L_29^((int64_t)(((int64_t)(((int64_t)((int64_t)L_30^((int64_t)((uint64_t)L_31>>1))))^((int64_t)((uint64_t)L_32>>2))))^((int64_t)((uint64_t)L_33>>7))))));
		uint64_t L_34 = V_2;
		uint64_t L_35 = V_3;
		uint64_t L_36 = V_3;
		uint64_t L_37 = V_3;
		V_2 = ((int64_t)((int64_t)L_34^((int64_t)(((int64_t)(((int64_t)((int64_t)L_35<<((int32_t)63)))^((int64_t)((int64_t)L_36<<((int32_t)62)))))^((int64_t)((int64_t)L_37<<((int32_t)57)))))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = ___z1;
		uint64_t L_39 = V_1;
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_39);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_40 = ___z1;
		uint64_t L_41 = V_2;
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_41);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_mF3DE5B3CA09288B71B5D6E0159C552B8C06BACD5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___y1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = 0;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		V_2 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		intptr_t L_5 = V_2;
		intptr_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___y1;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_7^(int32_t)L_11))));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = L_13;
		V_1 = L_14;
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		V_2 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		intptr_t L_18 = V_2;
		intptr_t L_19 = L_18;
		uint8_t L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___y1;
		int32_t L_22 = V_0;
		int32_t L_23 = L_22;
		uint8_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_20^(int32_t)L_24))));
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = L_26;
		V_1 = L_27;
		int32_t L_28 = V_0;
		int32_t L_29 = L_28;
		V_2 = L_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_1;
		intptr_t L_31 = V_2;
		intptr_t L_32 = L_31;
		uint8_t L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___y1;
		int32_t L_35 = V_0;
		int32_t L_36 = L_35;
		uint8_t L_37 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_33^(int32_t)L_37))));
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = L_39;
		V_1 = L_40;
		int32_t L_41 = V_0;
		int32_t L_42 = L_41;
		V_2 = L_42;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_1;
		intptr_t L_44 = V_2;
		intptr_t L_45 = L_44;
		uint8_t L_46 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ___y1;
		int32_t L_48 = V_0;
		int32_t L_49 = L_48;
		uint8_t L_50 = (L_47)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_49));
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_42), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_46^(int32_t)L_50))));
		int32_t L_51 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_51, 1));
		int32_t L_52 = V_0;
		if ((((int32_t)L_52) < ((int32_t)((int32_t)16))))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_m1FB8C3D1BED120F8E2F4A86FB2AC7A1B5512ED6E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___y1, int32_t ___yOff2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = 0;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		V_2 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		intptr_t L_5 = V_2;
		intptr_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___y1;
		int32_t L_9 = ___yOff2;
		int32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		uint8_t L_12 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_7^(int32_t)L_12))));
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14;
		V_1 = L_15;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_2 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		intptr_t L_19 = V_2;
		intptr_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___y1;
		int32_t L_23 = ___yOff2;
		int32_t L_24 = V_0;
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		uint8_t L_26 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_21^(int32_t)L_26))));
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = L_28;
		V_1 = L_29;
		int32_t L_30 = V_0;
		int32_t L_31 = L_30;
		V_2 = L_31;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_1;
		intptr_t L_33 = V_2;
		intptr_t L_34 = L_33;
		uint8_t L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___y1;
		int32_t L_37 = ___yOff2;
		int32_t L_38 = V_0;
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_37, L_38));
		uint8_t L_40 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_35^(int32_t)L_40))));
		int32_t L_41 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = L_42;
		V_1 = L_43;
		int32_t L_44 = V_0;
		int32_t L_45 = L_44;
		V_2 = L_45;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_1;
		intptr_t L_47 = V_2;
		intptr_t L_48 = L_47;
		uint8_t L_49 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ___y1;
		int32_t L_51 = ___yOff2;
		int32_t L_52 = V_0;
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_51, L_52));
		uint8_t L_54 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_49^(int32_t)L_54))));
		int32_t L_55 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		int32_t L_56 = V_0;
		if ((((int32_t)L_56) < ((int32_t)((int32_t)16))))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_m1DA1AB941B9AEF620AB1CB54F03068A26A56B4D7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, int32_t ___xOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___y2, int32_t ___yOff3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___z4, int32_t ___zOff5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___z4;
		int32_t L_1 = ___zOff5;
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___x0;
		int32_t L_4 = ___xOff1;
		int32_t L_5 = V_0;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		uint8_t L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___y2;
		int32_t L_9 = ___yOff3;
		int32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		uint8_t L_12 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_7^(int32_t)L_12))));
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___z4;
		int32_t L_15 = ___zOff5;
		int32_t L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___x0;
		int32_t L_18 = ___xOff1;
		int32_t L_19 = V_0;
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		uint8_t L_21 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___y2;
		int32_t L_23 = ___yOff3;
		int32_t L_24 = V_0;
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		uint8_t L_26 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_15, L_16))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_21^(int32_t)L_26))));
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___z4;
		int32_t L_29 = ___zOff5;
		int32_t L_30 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___x0;
		int32_t L_32 = ___xOff1;
		int32_t L_33 = V_0;
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_32, L_33));
		uint8_t L_35 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___y2;
		int32_t L_37 = ___yOff3;
		int32_t L_38 = V_0;
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_37, L_38));
		uint8_t L_40 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, L_30))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_35^(int32_t)L_40))));
		int32_t L_41 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___z4;
		int32_t L_43 = ___zOff5;
		int32_t L_44 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = ___x0;
		int32_t L_46 = ___xOff1;
		int32_t L_47 = V_0;
		int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_46, L_47));
		uint8_t L_49 = (L_45)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ___y2;
		int32_t L_51 = ___yOff3;
		int32_t L_52 = V_0;
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_51, L_52));
		uint8_t L_54 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_43, L_44))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_49^(int32_t)L_54))));
		int32_t L_55 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		int32_t L_56 = V_0;
		if ((((int32_t)L_56) < ((int32_t)((int32_t)16))))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_m068CDECE6B130AE53AF131920C3FAE08C3AD9072 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___y1, int32_t ___yOff2, int32_t ___yLen3, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_0013;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_0 = L_1;
		int32_t L_2 = ___yLen3;
		int32_t L_3 = L_2;
		V_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		intptr_t L_5 = V_1;
		intptr_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___y1;
		int32_t L_9 = ___yOff2;
		int32_t L_10 = ___yLen3;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		uint8_t L_12 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_7^(int32_t)L_12))));
	}

IL_0013:
	{
		int32_t L_13 = ___yLen3;
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		___yLen3 = L_14;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_mAA66FE5C20761579CC7440B18BC135AC31737D22 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, int32_t ___xOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___y2, int32_t ___yOff3, int32_t ___len4, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_0017;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___x0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_0 = L_1;
		int32_t L_2 = ___xOff1;
		int32_t L_3 = ___len4;
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		intptr_t L_6 = V_1;
		intptr_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___y2;
		int32_t L_10 = ___yOff3;
		int32_t L_11 = ___len4;
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		uint8_t L_13 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_8^(int32_t)L_13))));
	}

IL_0017:
	{
		int32_t L_14 = ___len4;
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		___len4 = L_15;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_m2868FD111FDC66CD7B09240B6F45D235E4FD7E9D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___y1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___z2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___z2;
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___x0;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___y1;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_5^(int32_t)L_9))));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___z2;
		int32_t L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___x0;
		int32_t L_14 = V_0;
		int32_t L_15 = L_14;
		uint8_t L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___y1;
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_16^(int32_t)L_20))));
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___z2;
		int32_t L_23 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___x0;
		int32_t L_25 = V_0;
		int32_t L_26 = L_25;
		uint8_t L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___y1;
		int32_t L_29 = V_0;
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_27^(int32_t)L_31))));
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___z2;
		int32_t L_34 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___x0;
		int32_t L_36 = V_0;
		int32_t L_37 = L_36;
		uint8_t L_38 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___y1;
		int32_t L_40 = V_0;
		int32_t L_41 = L_40;
		uint8_t L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_38^(int32_t)L_42))));
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_0;
		if ((((int32_t)L_44) < ((int32_t)((int32_t)16))))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_m8A40CE6BCFF672939D8CE26DF91B3736FDB664E9 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		V_0 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		int32_t L_3 = 0;
		uint32_t L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___y1;
		int32_t L_6 = 0;
		uint32_t L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((int32_t)L_4^(int32_t)L_7)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8;
		V_0 = L_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
		int32_t L_11 = 1;
		uint32_t L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___y1;
		int32_t L_14 = 1;
		uint32_t L_15 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)((int32_t)L_12^(int32_t)L_15)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = L_16;
		V_0 = L_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_0;
		int32_t L_19 = 2;
		uint32_t L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___y1;
		int32_t L_22 = 2;
		uint32_t L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)((int32_t)L_20^(int32_t)L_23)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___x0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = L_24;
		V_0 = L_25;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_0;
		int32_t L_27 = 3;
		uint32_t L_28 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = ___y1;
		int32_t L_30 = 3;
		uint32_t L_31 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)((int32_t)L_28^(int32_t)L_31)));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.UInt32[],System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_mA3F2F6B57D78C90CF7576B153C5AD5A04879A5B0 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x0, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y1, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z2, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___z2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___x0;
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___y1;
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((int32_t)L_3^(int32_t)L_6)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___z2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___x0;
		int32_t L_9 = 1;
		uint32_t L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___y1;
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)((int32_t)L_10^(int32_t)L_13)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___z2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___x0;
		int32_t L_16 = 2;
		uint32_t L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___y1;
		int32_t L_19 = 2;
		uint32_t L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)((int32_t)L_17^(int32_t)L_20)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___z2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___x0;
		int32_t L_23 = 3;
		uint32_t L_24 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___y1;
		int32_t L_26 = 3;
		uint32_t L_27 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)((int32_t)L_24^(int32_t)L_27)));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_mE6DB5D737C6EB45F205C75C643B61FB10A7925B7 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___y1, const RuntimeMethod* method) 
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___x0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = L_0;
		V_0 = L_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = V_0;
		int32_t L_3 = 0;
		int64_t L_4 = (int64_t)(L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = ___y1;
		int32_t L_6 = 0;
		int64_t L_7 = (int64_t)(L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)(L_4^L_7)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___x0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = L_8;
		V_0 = L_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = V_0;
		int32_t L_11 = 1;
		int64_t L_12 = (int64_t)(L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = ___y1;
		int32_t L_14 = 1;
		int64_t L_15 = (int64_t)(L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)((int64_t)(L_12^L_15)));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.UInt64[],System.Int32,System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_m328C74EBE9F5E34FA6D277A14C50077D30F2E004 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, int32_t ___xOff1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___y2, int32_t ___yOff3, const RuntimeMethod* method) 
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___x0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = L_0;
		V_0 = L_1;
		int32_t L_2 = ___xOff1;
		int32_t L_3 = L_2;
		V_1 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		intptr_t L_5 = V_1;
		intptr_t L_6 = L_5;
		int64_t L_7 = (int64_t)(L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___y2;
		int32_t L_9 = ___yOff3;
		int32_t L_10 = L_9;
		int64_t L_11 = (int64_t)(L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint64_t)((int64_t)(L_7^L_11)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___x0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = L_12;
		V_0 = L_13;
		int32_t L_14 = ___xOff1;
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		V_1 = L_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = V_0;
		intptr_t L_17 = V_1;
		intptr_t L_18 = L_17;
		int64_t L_19 = (int64_t)(L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___y2;
		int32_t L_21 = ___yOff3;
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		int64_t L_23 = (int64_t)(L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (uint64_t)((int64_t)(L_19^L_23)));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.UInt64[],System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_m1CEEB474A7F0205713D4F927760F6029688F8494 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___y1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z2, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___z2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___x0;
		int32_t L_2 = 0;
		int64_t L_3 = (int64_t)(L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___y1;
		int32_t L_5 = 0;
		int64_t L_6 = (int64_t)(L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)(L_3^L_6)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = ___z2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___x0;
		int32_t L_9 = 1;
		int64_t L_10 = (int64_t)(L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___y1;
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (uint64_t)((int64_t)(L_10^L_13)));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.UInt64[],System.Int32,System.UInt64[],System.Int32,System.UInt64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_m7FEDEC1BE0DF498BC7F00C3F15972CE04F62717A (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___x0, int32_t ___xOff1, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___y2, int32_t ___yOff3, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___z4, int32_t ___zOff5, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___z4;
		int32_t L_1 = ___zOff5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = ___x0;
		int32_t L_3 = ___xOff1;
		int32_t L_4 = L_3;
		int64_t L_5 = (int64_t)(L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___y2;
		int32_t L_7 = ___yOff3;
		int32_t L_8 = L_7;
		int64_t L_9 = (int64_t)(L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint64_t)((int64_t)(L_5^L_9)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = ___z4;
		int32_t L_11 = ___zOff5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = ___x0;
		int32_t L_13 = ___xOff1;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int64_t L_15 = (int64_t)(L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = ___y2;
		int32_t L_17 = ___yOff3;
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int64_t L_19 = (int64_t)(L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_11, 1))), (uint64_t)((int64_t)(L_15^L_19)));
		return;
	}
}
// System.UInt64 Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::ImplMul64(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t GcmUtilities_ImplMul64_m97EB36F7325585E98F9A25C6C9108F34CC73A16D (uint64_t ___x0, uint64_t ___y1, const RuntimeMethod* method) 
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
	{
		uint64_t L_0 = ___x0;
		V_0 = ((int64_t)((int64_t)L_0&((int64_t)1229782938247303441LL)));
		uint64_t L_1 = ___x0;
		V_1 = ((int64_t)((int64_t)L_1&((int64_t)2459565876494606882LL)));
		uint64_t L_2 = ___x0;
		V_2 = ((int64_t)((int64_t)L_2&((int64_t)4919131752989213764LL)));
		uint64_t L_3 = ___x0;
		V_3 = ((int64_t)((int64_t)L_3&((int64_t)-8608480567731124088LL)));
		uint64_t L_4 = ___y1;
		V_4 = ((int64_t)((int64_t)L_4&((int64_t)1229782938247303441LL)));
		uint64_t L_5 = ___y1;
		V_5 = ((int64_t)((int64_t)L_5&((int64_t)2459565876494606882LL)));
		uint64_t L_6 = ___y1;
		V_6 = ((int64_t)((int64_t)L_6&((int64_t)4919131752989213764LL)));
		uint64_t L_7 = ___y1;
		V_7 = ((int64_t)((int64_t)L_7&((int64_t)-8608480567731124088LL)));
		uint64_t L_8 = V_0;
		uint64_t L_9 = V_4;
		uint64_t L_10 = V_1;
		uint64_t L_11 = V_7;
		uint64_t L_12 = V_2;
		uint64_t L_13 = V_6;
		uint64_t L_14 = V_3;
		uint64_t L_15 = V_5;
		V_8 = ((int64_t)(((int64_t)(((int64_t)(((int64_t)il2cpp_codegen_multiply((int64_t)L_8, (int64_t)L_9))^((int64_t)il2cpp_codegen_multiply((int64_t)L_10, (int64_t)L_11))))^((int64_t)il2cpp_codegen_multiply((int64_t)L_12, (int64_t)L_13))))^((int64_t)il2cpp_codegen_multiply((int64_t)L_14, (int64_t)L_15))));
		uint64_t L_16 = V_0;
		uint64_t L_17 = V_5;
		uint64_t L_18 = V_1;
		uint64_t L_19 = V_4;
		uint64_t L_20 = V_2;
		uint64_t L_21 = V_7;
		uint64_t L_22 = V_3;
		uint64_t L_23 = V_6;
		V_9 = ((int64_t)(((int64_t)(((int64_t)(((int64_t)il2cpp_codegen_multiply((int64_t)L_16, (int64_t)L_17))^((int64_t)il2cpp_codegen_multiply((int64_t)L_18, (int64_t)L_19))))^((int64_t)il2cpp_codegen_multiply((int64_t)L_20, (int64_t)L_21))))^((int64_t)il2cpp_codegen_multiply((int64_t)L_22, (int64_t)L_23))));
		uint64_t L_24 = V_0;
		uint64_t L_25 = V_6;
		uint64_t L_26 = V_1;
		uint64_t L_27 = V_5;
		uint64_t L_28 = V_2;
		uint64_t L_29 = V_4;
		uint64_t L_30 = V_3;
		uint64_t L_31 = V_7;
		V_10 = ((int64_t)(((int64_t)(((int64_t)(((int64_t)il2cpp_codegen_multiply((int64_t)L_24, (int64_t)L_25))^((int64_t)il2cpp_codegen_multiply((int64_t)L_26, (int64_t)L_27))))^((int64_t)il2cpp_codegen_multiply((int64_t)L_28, (int64_t)L_29))))^((int64_t)il2cpp_codegen_multiply((int64_t)L_30, (int64_t)L_31))));
		uint64_t L_32 = V_0;
		uint64_t L_33 = V_7;
		uint64_t L_34 = V_1;
		uint64_t L_35 = V_6;
		uint64_t L_36 = V_2;
		uint64_t L_37 = V_5;
		uint64_t L_38 = V_3;
		uint64_t L_39 = V_4;
		V_11 = ((int64_t)(((int64_t)(((int64_t)(((int64_t)il2cpp_codegen_multiply((int64_t)L_32, (int64_t)L_33))^((int64_t)il2cpp_codegen_multiply((int64_t)L_34, (int64_t)L_35))))^((int64_t)il2cpp_codegen_multiply((int64_t)L_36, (int64_t)L_37))))^((int64_t)il2cpp_codegen_multiply((int64_t)L_38, (int64_t)L_39))));
		uint64_t L_40 = V_8;
		V_8 = ((int64_t)((int64_t)L_40&((int64_t)1229782938247303441LL)));
		uint64_t L_41 = V_9;
		V_9 = ((int64_t)((int64_t)L_41&((int64_t)2459565876494606882LL)));
		uint64_t L_42 = V_10;
		V_10 = ((int64_t)((int64_t)L_42&((int64_t)4919131752989213764LL)));
		uint64_t L_43 = V_11;
		V_11 = ((int64_t)((int64_t)L_43&((int64_t)-8608480567731124088LL)));
		uint64_t L_44 = V_8;
		uint64_t L_45 = V_9;
		uint64_t L_46 = V_10;
		uint64_t L_47 = V_11;
		return ((int64_t)(((int64_t)(((int64_t)((int64_t)L_44|(int64_t)L_45))|(int64_t)L_46))|(int64_t)L_47));
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities__ctor_mB7F54B7FD3ECE30063B87090EE617E9D3A8765E4 (GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC* __this, const RuntimeMethod* method) 
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
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator::Init(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables1kGcmExponentiator_Init_m9977D7A7639BC6E8A617ED00C9AC438D0A2659C4 (Tables1kGcmExponentiator_t15B1305B08575DCBE165CF932CEB04DB570FAA1B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___x0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1;
		L_1 = GcmUtilities_AsUlongs_mF912DF51E812AC6A1361FD2441E7B0A695C764F2(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->___lookupPowX2_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = V_0;
		RuntimeObject* L_4 = __this->___lookupPowX2_0;
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_4, 0);
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Arrays_AreEqual_m54AF7E088066AA608723BF86DCA171EB025DF926(L_3, ((UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)Castclass((RuntimeObject*)L_5, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var)), NULL);
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = Platform_CreateArrayList_m36B3165D4F845600FEA72DAB49018C28A7B3219A(8, NULL);
		__this->___lookupPowX2_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lookupPowX2_0), (void*)L_7);
		RuntimeObject* L_8 = __this->___lookupPowX2_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = V_0;
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, (RuntimeObject*)L_9);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator::ExponentiateX(System.Int64,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables1kGcmExponentiator_ExponentiateX_m0ED460CD8F02057903CD9243C6B2279FA1F8D321 (Tables1kGcmExponentiator_t15B1305B08575DCBE165CF932CEB04DB570FAA1B* __this, int64_t ___pow0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	int32_t V_1 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0;
		L_0 = GcmUtilities_OneAsUlongs_m03C0DD7C1B6E5DD0698F0CC0C464980D3DA3B264(NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0039;
	}

IL_000a:
	{
		int64_t L_1 = ___pow0;
		if ((((int64_t)((int64_t)(L_1&((int64_t)1)))) == ((int64_t)((int64_t)0))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_2 = V_1;
		Tables1kGcmExponentiator_EnsureAvailable_m7CF7035202D583EF46C7395785683C3B8CA2F643(__this, L_2, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = V_0;
		RuntimeObject* L_4 = __this->___lookupPowX2_0;
		int32_t L_5 = V_1;
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_4, L_5);
		GcmUtilities_Multiply_m4773B3BDF3D95F2ACE4B19D72070F7C3F78D8A39(L_3, ((UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)Castclass((RuntimeObject*)L_6, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var)), NULL);
	}

IL_0030:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int64_t L_8 = ___pow0;
		___pow0 = ((int64_t)(L_8>>1));
	}

IL_0039:
	{
		int64_t L_9 = ___pow0;
		if ((((int64_t)L_9) > ((int64_t)((int64_t)0))))
		{
			goto IL_000a;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___output1;
		GcmUtilities_AsBytes_m387F56854BFD79AB80969002F51EC3A25CD4582E(L_10, L_11, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator::EnsureAvailable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables1kGcmExponentiator_EnsureAvailable_m7CF7035202D583EF46C7395785683C3B8CA2F643 (Tables1kGcmExponentiator_t15B1305B08575DCBE165CF932CEB04DB570FAA1B* __this, int32_t ___bit0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->___lookupPowX2_0;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___bit0;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0047;
		}
	}
	{
		RuntimeObject* L_4 = __this->___lookupPowX2_0;
		int32_t L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_4, ((int32_t)il2cpp_codegen_subtract(L_5, 1)));
		V_1 = ((UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)Castclass((RuntimeObject*)L_6, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var));
	}

IL_0024:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8;
		L_8 = Arrays_Clone_m271EAB8D16255673EB3F60DE30564ADE004B4DE5(L_7, NULL);
		V_1 = L_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = V_1;
		GcmUtilities_Square_m1AC5C6A4111824645F23E54A7FE5F36EA785DC31(L_9, L_10, NULL);
		RuntimeObject* L_11 = __this->___lookupPowX2_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_12 = V_1;
		int32_t L_13;
		L_13 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_11, (RuntimeObject*)L_12);
		int32_t L_14 = V_0;
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		V_0 = L_15;
		int32_t L_16 = ___bit0;
		if ((((int32_t)L_15) <= ((int32_t)L_16)))
		{
			goto IL_0024;
		}
	}

IL_0047:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables1kGcmExponentiator__ctor_m36D672FB8F7BDFD6830B2F0FA0903525CC689C7B (Tables1kGcmExponentiator_t15B1305B08575DCBE165CF932CEB04DB570FAA1B* __this, const RuntimeMethod* method) 
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
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables4kGcmMultiplier::Init(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables4kGcmMultiplier_Init_mC5E4ABFCD2131CDF255554199842CFB35A8658E9 (Tables4kGcmMultiplier_tB107C775EBF316C21F1C7B58573091D5E450EF0A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___H0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = __this->___T_1;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		__this->___T_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___T_1), (void*)L_1);
		goto IL_0029;
	}

IL_001a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___H_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___H0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Arrays_AreEqual_mF00C3B51F7520663ADB08744EA3A1995B9421C18(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___H0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = Arrays_Clone_mC73CD122DC37EDEB733EC84DB0137D8D7DD5B87F(L_5, NULL);
		__this->___H_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___H_0), (void*)L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___H_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = __this->___T_1;
		GcmUtilities_AsUlongs_mFBF52A7BDA3B08E3426B532DF247885D9D5538F4(L_7, L_8, 2, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = __this->___T_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = __this->___T_1;
		GcmUtilities_MultiplyP7_m4541A0B6228EBF4969DB7A4472DB904F0018AF05(L_9, 2, L_10, 2, NULL);
		V_0 = 2;
		goto IL_0097;
	}

IL_005e:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = __this->___T_1;
		int32_t L_12 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_13 = __this->___T_1;
		int32_t L_14 = V_0;
		GcmUtilities_DivideP_mA96F2C3CEE8CB845D7837B12B1D2B6EDB73E8D87(L_11, L_12, L_13, ((int32_t)(L_14<<1)), NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = __this->___T_1;
		int32_t L_16 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = __this->___T_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_18 = __this->___T_1;
		int32_t L_19 = V_0;
		GcmUtilities_Xor_m7FEDEC1BE0DF498BC7F00C3F15972CE04F62717A(L_15, ((int32_t)(L_16<<1)), L_17, 2, L_18, ((int32_t)(((int32_t)il2cpp_codegen_add(L_19, 1))<<1)), NULL);
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 2));
	}

IL_0097:
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)256))))
		{
			goto IL_005e;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables4kGcmMultiplier::MultiplyH(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables4kGcmMultiplier_MultiplyH_m7362CAC560A01EF11DB2CFA9A9FEF2C81A0C853F (Tables4kGcmMultiplier_tB107C775EBF316C21F1C7B58573091D5E450EF0A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	int32_t V_3 = 0;
	uint64_t V_4 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___x0;
		int32_t L_1 = ((int32_t)15);
		uint8_t L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int32_t)((int32_t)L_2<<1));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = __this->___T_1;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		int64_t L_6 = (int64_t)(L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = __this->___T_1;
		int32_t L_8 = V_0;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int64_t L_10 = (int64_t)(L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		V_3 = ((int32_t)14);
		goto IL_0063;
	}

IL_0020:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___x0;
		int32_t L_12 = V_3;
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = ((int32_t)((int32_t)L_14<<1));
		uint64_t L_15 = V_2;
		V_4 = ((int64_t)((int64_t)L_15<<((int32_t)56)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = __this->___T_1;
		int32_t L_17 = V_0;
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int64_t L_19 = (int64_t)(L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		uint64_t L_20 = V_2;
		uint64_t L_21 = V_1;
		V_2 = ((int64_t)(L_19^((int64_t)(((int64_t)((uint64_t)L_20>>8))|((int64_t)((int64_t)L_21<<((int32_t)56)))))));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_22 = __this->___T_1;
		int32_t L_23 = V_0;
		int32_t L_24 = L_23;
		int64_t L_25 = (int64_t)(L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		uint64_t L_26 = V_1;
		uint64_t L_27 = V_4;
		uint64_t L_28 = V_4;
		uint64_t L_29 = V_4;
		uint64_t L_30 = V_4;
		V_1 = ((int64_t)(((int64_t)(((int64_t)(((int64_t)(((int64_t)(L_25^((int64_t)((uint64_t)L_26>>8))))^(int64_t)L_27))^((int64_t)((uint64_t)L_28>>1))))^((int64_t)((uint64_t)L_29>>2))))^((int64_t)((uint64_t)L_30>>7))));
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
	}

IL_0063:
	{
		int32_t L_32 = V_3;
		if ((((int32_t)L_32) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		uint64_t L_33 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___x0;
		Pack_UInt64_To_BE_m37F9E6B43BA608646BA3860E72A6DF1799B0AC68(L_33, L_34, 0, NULL);
		uint64_t L_35 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___x0;
		Pack_UInt64_To_BE_m37F9E6B43BA608646BA3860E72A6DF1799B0AC68(L_35, L_36, 8, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables4kGcmMultiplier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables4kGcmMultiplier__ctor_mEF2E77A3F60D4643C4EC7E6D624CCB583FB920FB (Tables4kGcmMultiplier_tB107C775EBF316C21F1C7B58573091D5E450EF0A* __this, const RuntimeMethod* method) 
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
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables64kGcmMultiplier::Init(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables64kGcmMultiplier_Init_mC72770FEC21B4693B8DFD97AA8D5B6BB3B0FFC58 (Tables64kGcmMultiplier_tA2C58BD435F6D7B7BE6AC407A0650827AA5833AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___H0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	int32_t V_2 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_3 = NULL;
	{
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_0 = __this->___T_1;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_1 = (UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11*)(UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11*)SZArrayNew(UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___T_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___T_1), (void*)L_1);
		goto IL_0026;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___H_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___H0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Arrays_AreEqual_mF00C3B51F7520663ADB08744EA3A1995B9421C18(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___H0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = Arrays_Clone_mC73CD122DC37EDEB733EC84DB0137D8D7DD5B87F(L_5, NULL);
		__this->___H_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___H_0), (void*)L_6);
		V_0 = 0;
		goto IL_00a9;
	}

IL_0036:
	{
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7 = __this->___T_1;
		int32_t L_8 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = L_9;
		V_3 = L_10;
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)L_10);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = V_3;
		V_1 = L_11;
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_0067;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___H_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = V_1;
		GcmUtilities_AsUlongs_mFBF52A7BDA3B08E3426B532DF247885D9D5538F4(L_13, L_14, 2, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = V_1;
		GcmUtilities_MultiplyP7_m4541A0B6228EBF4969DB7A4472DB904F0018AF05(L_15, 2, L_16, 2, NULL);
		goto IL_0079;
	}

IL_0067:
	{
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_17 = __this->___T_1;
		int32_t L_18 = V_0;
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = V_1;
		GcmUtilities_MultiplyP8_m0C43937F3749536884F0D05B7CA7B2FC94C663EB(L_20, 2, L_21, 2, NULL);
	}

IL_0079:
	{
		V_2 = 2;
		goto IL_009d;
	}

IL_007d:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_22 = V_1;
		int32_t L_23 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = V_1;
		int32_t L_25 = V_2;
		GcmUtilities_DivideP_mA96F2C3CEE8CB845D7837B12B1D2B6EDB73E8D87(L_22, L_23, L_24, ((int32_t)(L_25<<1)), NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = V_1;
		int32_t L_27 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = V_1;
		int32_t L_30 = V_2;
		GcmUtilities_Xor_m7FEDEC1BE0DF498BC7F00C3F15972CE04F62717A(L_26, ((int32_t)(L_27<<1)), L_28, 2, L_29, ((int32_t)(((int32_t)il2cpp_codegen_add(L_30, 1))<<1)), NULL);
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 2));
	}

IL_009d:
	{
		int32_t L_32 = V_2;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)256))))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00a9:
	{
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)16))))
		{
			goto IL_0036;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables64kGcmMultiplier::MultiplyH(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables64kGcmMultiplier_MultiplyH_m32EB47500CA6BE9779712E0EB4556C603522C45B (Tables64kGcmMultiplier_tA2C58BD435F6D7B7BE6AC407A0650827AA5833AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, const RuntimeMethod* method) 
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	int32_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	{
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_0 = __this->___T_1;
		int32_t L_1 = ((int32_t)15);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___x0;
		int32_t L_4 = ((int32_t)15);
		uint8_t L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int32_t)((int32_t)L_5<<1));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		int64_t L_9 = (int64_t)(L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = V_0;
		int32_t L_11 = V_1;
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int64_t L_13 = (int64_t)(L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_3 = L_13;
		V_4 = ((int32_t)14);
		goto IL_0046;
	}

IL_0021:
	{
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_14 = __this->___T_1;
		int32_t L_15 = V_4;
		int32_t L_16 = L_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___x0;
		int32_t L_19 = V_4;
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		V_1 = ((int32_t)((int32_t)L_21<<1));
		uint64_t L_22 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = V_0;
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		int64_t L_26 = (int64_t)(L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		V_2 = ((int64_t)((int64_t)L_22^L_26));
		uint64_t L_27 = V_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = V_0;
		int32_t L_29 = V_1;
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int64_t L_31 = (int64_t)(L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		V_3 = ((int64_t)((int64_t)L_27^L_31));
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
	}

IL_0046:
	{
		int32_t L_33 = V_4;
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		uint64_t L_34 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___x0;
		Pack_UInt64_To_BE_m37F9E6B43BA608646BA3860E72A6DF1799B0AC68(L_34, L_35, 0, NULL);
		uint64_t L_36 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___x0;
		Pack_UInt64_To_BE_m37F9E6B43BA608646BA3860E72A6DF1799B0AC68(L_36, L_37, 8, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables64kGcmMultiplier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables64kGcmMultiplier__ctor_m7A61A6148B412A348E7CD595A93EE800A993ABB9 (Tables64kGcmMultiplier_tA2C58BD435F6D7B7BE6AC407A0650827AA5833AE* __this, const RuntimeMethod* method) 
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
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier::Init(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables8kGcmMultiplier_Init_m82039B7E0BCA45B6289B324526554D00E13BABA4 (Tables8kGcmMultiplier_tB07FBFB1B8DE3234CBD37D39FCE0E7E91AEEF90A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___H0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	int32_t V_2 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_3 = NULL;
	{
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_0 = __this->___T_1;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_1 = (UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11*)(UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11*)SZArrayNew(UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___T_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___T_1), (void*)L_1);
		goto IL_0026;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___H_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___H0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Arrays_AreEqual_mF00C3B51F7520663ADB08744EA3A1995B9421C18(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___H0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = Arrays_Clone_mC73CD122DC37EDEB733EC84DB0137D8D7DD5B87F(L_5, NULL);
		__this->___H_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___H_0), (void*)L_6);
		V_0 = 0;
		goto IL_00a3;
	}

IL_0036:
	{
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_7 = __this->___T_1;
		int32_t L_8 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = L_9;
		V_3 = L_10;
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)L_10);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = V_3;
		V_1 = L_11;
		int32_t L_12 = V_0;
		if (L_12)
		{
			goto IL_0064;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___H_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = V_1;
		GcmUtilities_AsUlongs_mFBF52A7BDA3B08E3426B532DF247885D9D5538F4(L_13, L_14, 2, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_15 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_16 = V_1;
		GcmUtilities_MultiplyP3_m5D37BC7A1879C39DF11B70E4EB79C22552FF334B(L_15, 2, L_16, 2, NULL);
		goto IL_0076;
	}

IL_0064:
	{
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_17 = __this->___T_1;
		int32_t L_18 = V_0;
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_21 = V_1;
		GcmUtilities_MultiplyP4_mCB40910E09ECAA726B18AC78561259A46E435228(L_20, 2, L_21, 2, NULL);
	}

IL_0076:
	{
		V_2 = 2;
		goto IL_009a;
	}

IL_007a:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_22 = V_1;
		int32_t L_23 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_24 = V_1;
		int32_t L_25 = V_2;
		GcmUtilities_DivideP_mA96F2C3CEE8CB845D7837B12B1D2B6EDB73E8D87(L_22, L_23, L_24, ((int32_t)(L_25<<1)), NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = V_1;
		int32_t L_27 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = V_1;
		int32_t L_30 = V_2;
		GcmUtilities_Xor_m7FEDEC1BE0DF498BC7F00C3F15972CE04F62717A(L_26, ((int32_t)(L_27<<1)), L_28, 2, L_29, ((int32_t)(((int32_t)il2cpp_codegen_add(L_30, 1))<<1)), NULL);
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 2));
	}

IL_009a:
	{
		int32_t L_32 = V_2;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)16))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00a3:
	{
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)32))))
		{
			goto IL_0036;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier::MultiplyH(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables8kGcmMultiplier_MultiplyH_mE54B4D65FB536390FEBE421A2571B19E69EE06C6 (Tables8kGcmMultiplier_tB07FBFB1B8DE3234CBD37D39FCE0E7E91AEEF90A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___x0, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_3 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_0 = ((int64_t)0);
		V_1 = ((int64_t)0);
		V_2 = ((int32_t)15);
		goto IL_005d;
	}

IL_000b:
	{
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_0 = __this->___T_1;
		int32_t L_1 = V_2;
		int32_t L_2 = V_2;
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_3 = L_4;
		UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* L_5 = __this->___T_1;
		int32_t L_6 = V_2;
		int32_t L_7 = V_2;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_4 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___x0;
		int32_t L_11 = V_2;
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = ((int32_t)(((int32_t)((int32_t)L_13&((int32_t)15)))<<1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___x0;
		int32_t L_15 = V_2;
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_6 = ((int32_t)(((int32_t)((int32_t)L_17&((int32_t)240)))>>3));
		uint64_t L_18 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_19 = V_3;
		int32_t L_20 = V_5;
		int32_t L_21 = L_20;
		int64_t L_22 = (int64_t)(L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = V_4;
		int32_t L_24 = V_6;
		int32_t L_25 = L_24;
		int64_t L_26 = (int64_t)(L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int64_t)((int64_t)L_18^((int64_t)(L_22^L_26))));
		uint64_t L_27 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_28 = V_3;
		int32_t L_29 = V_5;
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int64_t L_31 = (int64_t)(L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = V_4;
		int32_t L_33 = V_6;
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		int64_t L_35 = (int64_t)(L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_1 = ((int64_t)((int64_t)L_27^((int64_t)(L_31^L_35))));
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
	}

IL_005d:
	{
		int32_t L_37 = V_2;
		if ((((int32_t)L_37) >= ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		uint64_t L_38 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___x0;
		Pack_UInt64_To_BE_m37F9E6B43BA608646BA3860E72A6DF1799B0AC68(L_38, L_39, 0, NULL);
		uint64_t L_40 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___x0;
		Pack_UInt64_To_BE_m37F9E6B43BA608646BA3860E72A6DF1799B0AC68(L_40, L_41, 8, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables8kGcmMultiplier__ctor_m9B21299A2C2574A8266501BA3D1E86F8FF03D73E (Tables8kGcmMultiplier_tB07FBFB1B8DE3234CBD37D39FCE0E7E91AEEF90A* __this, const RuntimeMethod* method) 
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
// System.Void Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CbcBlockCipher__ctor_mC5E40D0E42BE608A3786ECA72565E2726C339D9F (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, RuntimeObject* ___cipher0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___cipher0;
		__this->___cipher_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_4), (void*)L_0);
		RuntimeObject* L_1 = ___cipher0;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		__this->___blockSize_3 = L_2;
		int32_t L_3 = __this->___blockSize_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___IV_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IV_0), (void*)L_4);
		int32_t L_5 = __this->___blockSize_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->___cbcV_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cbcV_1), (void*)L_6);
		int32_t L_7 = __this->___blockSize_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->___cbcNextV_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cbcNextV_2), (void*)L_8);
		return;
	}
}
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::GetUnderlyingCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CbcBlockCipher_GetUnderlyingCipher_m9D8930D21D0EA39C84EE8CEDE1EAE9AB9859BD14 (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___cipher_4;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CbcBlockCipher_Init_m7BA55F00E4A2B24A1415756037DB203E1647B98C (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		bool L_0 = __this->___encrypting_5;
		V_0 = L_0;
		bool L_1 = ___forEncryption0;
		__this->___encrypting_5 = L_1;
		RuntimeObject* L_2 = ___parameters1;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_2, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_3 = ___parameters1;
		V_1 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_3, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_4 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_4, NULL);
		V_2 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_2;
		int32_t L_7 = __this->___blockSize_3;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)L_7)))
		{
			goto IL_003a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A16E423F63FBDE7F41066B190E6CF2C0E7DCCF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CbcBlockCipher_Init_m7BA55F00E4A2B24A1415756037DB203E1647B98C_RuntimeMethod_var)));
	}

IL_003a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_12 = V_1;
		RuntimeObject* L_13;
		L_13 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_12, NULL);
		___parameters1 = L_13;
	}

IL_0053:
	{
		CbcBlockCipher_Reset_m092F05364FF79AA3E2A9940234B5757FEAB60400(__this, NULL);
		RuntimeObject* L_14 = ___parameters1;
		if (!L_14)
		{
			goto IL_006f;
		}
	}
	{
		RuntimeObject* L_15 = __this->___cipher_4;
		bool L_16 = __this->___encrypting_5;
		RuntimeObject* L_17 = ___parameters1;
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_15, L_16, L_17);
		return;
	}

IL_006f:
	{
		bool L_18 = V_0;
		bool L_19 = __this->___encrypting_5;
		if ((((int32_t)L_18) == ((int32_t)L_19)))
		{
			goto IL_0083;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E0BB1099A2BB7E26AB1115B17E7A4107597EBF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CbcBlockCipher_Init_m7BA55F00E4A2B24A1415756037DB203E1647B98C_RuntimeMethod_var)));
	}

IL_0083:
	{
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CbcBlockCipher_get_AlgorithmName_m9EF865DA5BE5DCC9636C752B67A517950A6C3FEB (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A86A3B4AF87A24534CBDFC69C239ECD6A5D87CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_4;
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, _stringLiteral9A86A3B4AF87A24534CBDFC69C239ECD6A5D87CC, NULL);
		return L_2;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CbcBlockCipher_get_IsPartialBlockOkay_m34D7EC21C8FAAC39040E96B1341B6EFC81E1C50C (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CbcBlockCipher_GetBlockSize_m1F2B9D7A25D9490B45E22EA410BE6C7F7D89FE45 (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_4;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CbcBlockCipher_ProcessBlock_m8C4FBD235EA72955D5F1AD2919C6BFA6CBF1C20F (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___encrypting_5;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input0;
		int32_t L_2 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___output2;
		int32_t L_4 = ___outOff3;
		int32_t L_5;
		L_5 = CbcBlockCipher_DecryptBlock_m4E8DBE49E59FFB31E9C3746C9BC4AC7F7849B604(__this, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___input0;
		int32_t L_7 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___output2;
		int32_t L_9 = ___outOff3;
		int32_t L_10;
		L_10 = CbcBlockCipher_EncryptBlock_mC8D44F555A58A0BB9FDAB9CDC6A4CEF3FD2CE6E0(__this, L_6, L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CbcBlockCipher_Reset_m092F05364FF79AA3E2A9940234B5757FEAB60400 (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___cbcV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___IV_0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___cbcNextV_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___cbcNextV_2;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		RuntimeObject* L_5 = __this->___cipher_4;
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_5);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CbcBlockCipher_EncryptBlock_mC8D44F555A58A0BB9FDAB9CDC6A4CEF3FD2CE6E0 (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = ___inOff1;
		int32_t L_1 = __this->___blockSize_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_3 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CbcBlockCipher_EncryptBlock_mC8D44F555A58A0BB9FDAB9CDC6A4CEF3FD2CE6E0_RuntimeMethod_var)));
	}

IL_0018:
	{
		V_0 = 0;
		goto IL_0036;
	}

IL_001c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___cbcV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		V_2 = L_5;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_3 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_2;
		intptr_t L_9 = V_3;
		intptr_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___input0;
		int32_t L_13 = ___inOff1;
		int32_t L_14 = V_0;
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
		uint8_t L_16 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_11^(int32_t)L_16))));
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0036:
	{
		int32_t L_18 = V_0;
		int32_t L_19 = __this->___blockSize_3;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_20 = __this->___cipher_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___cbcV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___outBytes2;
		int32_t L_23 = ___outOff3;
		int32_t L_24;
		L_24 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_20, L_21, 0, L_22, L_23);
		V_1 = L_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___outBytes2;
		int32_t L_26 = ___outOff3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___cbcV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___cbcV_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_25, L_26, (RuntimeArray*)L_27, 0, ((int32_t)(((RuntimeArray*)L_28)->max_length)), NULL);
		int32_t L_29 = V_1;
		return L_29;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CbcBlockCipher_DecryptBlock_m4E8DBE49E59FFB31E9C3746C9BC4AC7F7849B604 (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		int32_t L_0 = ___inOff1;
		int32_t L_1 = __this->___blockSize_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_3 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CbcBlockCipher_DecryptBlock_m4E8DBE49E59FFB31E9C3746C9BC4AC7F7849B604_RuntimeMethod_var)));
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input0;
		int32_t L_5 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___cbcNextV_2;
		int32_t L_7 = __this->___blockSize_3;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_4, L_5, (RuntimeArray*)L_6, 0, L_7, NULL);
		RuntimeObject* L_8 = __this->___cipher_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___input0;
		int32_t L_10 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___outBytes2;
		int32_t L_12 = ___outOff3;
		int32_t L_13;
		L_13 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_8, L_9, L_10, L_11, L_12);
		V_0 = L_13;
		V_1 = 0;
		goto IL_005e;
	}

IL_0041:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___outBytes2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14;
		V_3 = L_15;
		int32_t L_16 = ___outOff3;
		int32_t L_17 = V_1;
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_16, L_17));
		V_4 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_3;
		intptr_t L_20 = V_4;
		intptr_t L_21 = L_20;
		uint8_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___cbcV_1;
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		uint8_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_22^(int32_t)L_26))));
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_005e:
	{
		int32_t L_28 = V_1;
		int32_t L_29 = __this->___blockSize_3;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0041;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___cbcV_1;
		V_2 = L_30;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = __this->___cbcNextV_2;
		__this->___cbcV_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cbcV_1), (void*)L_31);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_2;
		__this->___cbcNextV_2 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cbcNextV_2), (void*)L_32);
		int32_t L_33 = V_0;
		return L_33;
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
// System.Void Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CcmBlockCipher__ctor_mDCADA207FE89ED6D99BD82413198C653AC576143 (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, RuntimeObject* ___cipher0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		__this->___associatedText_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___associatedText_8), (void*)L_0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_1, NULL);
		__this->___data_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_9), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_2 = ___cipher0;
		__this->___cipher_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_1), (void*)L_2);
		il2cpp_codegen_runtime_class_init_inline(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var);
		int32_t L_3 = ((CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_StaticFields*)il2cpp_codegen_static_fields_for(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var))->___BlockSize_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___macBlock_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___macBlock_2), (void*)L_4);
		RuntimeObject* L_5 = ___cipher0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_5);
		int32_t L_7 = ((CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_StaticFields*)il2cpp_codegen_static_fields_for(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var))->___BlockSize_0;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_005f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var)));
		int32_t L_8 = ((CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var))))->___BlockSize_0;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		String_t* L_11;
		L_11 = String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC6B8E7A479BE266CB377B138773E5E798867F697)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_12, L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CcmBlockCipher__ctor_mDCADA207FE89ED6D99BD82413198C653AC576143_RuntimeMethod_var)));
	}

IL_005f:
	{
		return;
	}
}
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::GetUnderlyingCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CcmBlockCipher_GetUnderlyingCipher_m4D2ED6D7959217BCDBCF8DA38F951EB5E2113056 (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___cipher_1;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CcmBlockCipher_Init_mD90F361DE6B93146FD3D66E47594555C491CB8EA (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* V_1 = NULL;
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_2 = NULL;
	{
		bool L_0 = ___forEncryption0;
		__this->___forEncryption_3 = L_0;
		RuntimeObject* L_1 = ___parameters1;
		if (!((AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B*)IsInstClass((RuntimeObject*)L_1, AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var)))
		{
			goto IL_004a;
		}
	}
	{
		RuntimeObject* L_2 = ___parameters1;
		V_1 = ((AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B*)CastclassClass((RuntimeObject*)L_2, AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var));
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(7 /* System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetNonce() */, L_3);
		__this->___nonce_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nonce_4), (void*)L_4);
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetAssociatedText() */, L_5);
		__this->___initialAssociatedText_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialAssociatedText_5), (void*)L_6);
		bool L_7 = ___forEncryption0;
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_8 = V_1;
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_MacSize() */, L_8);
		int32_t L_10;
		L_10 = CcmBlockCipher_GetMacSize_m94D51D06FC7E40CE15E447399501AD0F7B32289D(__this, L_7, L_9, NULL);
		__this->___macSize_6 = L_10;
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_11 = V_1;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_12;
		L_12 = VirtualFuncInvoker0< KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* >::Invoke(4 /* Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_Key() */, L_11);
		V_0 = L_12;
		goto IL_008f;
	}

IL_004a:
	{
		RuntimeObject* L_13 = ___parameters1;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_13, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0084;
		}
	}
	{
		RuntimeObject* L_14 = ___parameters1;
		V_2 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_14, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_15 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_15, NULL);
		__this->___nonce_4 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nonce_4), (void*)L_16);
		__this->___initialAssociatedText_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialAssociatedText_5), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		bool L_17 = ___forEncryption0;
		int32_t L_18;
		L_18 = CcmBlockCipher_GetMacSize_m94D51D06FC7E40CE15E447399501AD0F7B32289D(__this, L_17, ((int32_t)64), NULL);
		__this->___macSize_6 = L_18;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_19 = V_2;
		RuntimeObject* L_20;
		L_20 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_19, NULL);
		V_0 = L_20;
		goto IL_008f;
	}

IL_0084:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFFD44595505148598FA11441DC6F85B39A158ACC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CcmBlockCipher_Init_mD90F361DE6B93146FD3D66E47594555C491CB8EA_RuntimeMethod_var)));
	}

IL_008f:
	{
		RuntimeObject* L_22 = V_0;
		if (!L_22)
		{
			goto IL_0099;
		}
	}
	{
		RuntimeObject* L_23 = V_0;
		__this->___keyParam_7 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyParam_7), (void*)L_23);
	}

IL_0099:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___nonce_4;
		if (!L_24)
		{
			goto IL_00b8;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___nonce_4;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))) < ((int32_t)7)))
		{
			goto IL_00b8;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___nonce_4;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))) <= ((int32_t)((int32_t)13))))
		{
			goto IL_00c3;
		}
	}

IL_00b8:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_27 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95CE047378BB5A752473C9D4D15D684E03FFA829)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CcmBlockCipher_Init_mD90F361DE6B93146FD3D66E47594555C491CB8EA_RuntimeMethod_var)));
	}

IL_00c3:
	{
		VirtualActionInvoker0::Invoke(26 /* System.Void Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::Reset() */, __this);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CcmBlockCipher_get_AlgorithmName_m6166886BEB08B21AFB3AED5B07E007CCA1AE4988 (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B5117ACCE82D41F99CC1D74CC4CE4D861965B38);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_1;
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, _stringLiteral7B5117ACCE82D41F99CC1D74CC4CE4D861965B38, NULL);
		return L_2;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CcmBlockCipher_GetBlockSize_m36CF78DDAD5A009F391366C3E6C0BF3C09B25711 (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_1;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::ProcessAadByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CcmBlockCipher_ProcessAadByte_mF9B671F74B2F12F991E783928579D0FF045994C1 (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___associatedText_8;
		uint8_t L_1 = ___input0;
		VirtualActionInvoker1< uint8_t >::Invoke(37 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_0, L_1);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CcmBlockCipher_ProcessAadBytes_mE97A91F10C2C51D3F5E4C9CE5AD40AF60596F860 (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___len2, const RuntimeMethod* method) 
{
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___associatedText_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___inBytes0;
		int32_t L_2 = ___inOff1;
		int32_t L_3 = ___len2;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::ProcessByte(System.Byte,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CcmBlockCipher_ProcessByte_m188022C25456C38AC730D15086C6A46724D8876E (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, uint8_t ___input0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes1, int32_t ___outOff2, const RuntimeMethod* method) 
{
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___data_9;
		uint8_t L_1 = ___input0;
		VirtualActionInvoker1< uint8_t >::Invoke(37 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_0, L_1);
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CcmBlockCipher_ProcessBytes_m14CFD640B36716F3B063948A11AC08B1BDEE8A0F (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___inLen2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes3, int32_t ___outOff4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEAC30D8C28806B51680D5DC521FC3C410F2D5B5);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___inBytes0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = ___inLen2;
		Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F(L_0, L_1, L_2, _stringLiteralAEAC30D8C28806B51680D5DC521FC3C410F2D5B5, NULL);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = __this->___data_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___inBytes0;
		int32_t L_5 = ___inOff1;
		int32_t L_6 = ___inLen2;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, L_5, L_6);
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CcmBlockCipher_DoFinal_m140984FF9B6E921E3418386CAACBBE413B3C0FD6 (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___data_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(38 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, L_0);
		V_0 = L_1;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = __this->___data_9;
		int64_t L_3;
		L_3 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_2);
		V_1 = ((int32_t)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___outBytes0;
		int32_t L_7 = ___outOff1;
		int32_t L_8;
		L_8 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(31 /* System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::ProcessPacket(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, __this, L_4, 0, L_5, L_6, L_7);
		V_2 = L_8;
		VirtualActionInvoker0::Invoke(26 /* System.Void Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::Reset() */, __this);
		int32_t L_9 = V_2;
		return L_9;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CcmBlockCipher_Reset_mB9615B630EDC8676AE2752BD3FAEFA8DB0CE1F1A (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_1;
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = __this->___associatedText_8;
		VirtualActionInvoker1< int64_t >::Invoke(31 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_1, ((int64_t)0));
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = __this->___data_9;
		VirtualActionInvoker1< int64_t >::Invoke(31 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_2, ((int64_t)0));
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::GetMac()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CcmBlockCipher_GetMac_mDED5B678E3709B832E2D463D3F6BF5A762E62B0A (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___macBlock_2;
		int32_t L_1 = __this->___macSize_6;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Arrays_CopyOfRange_mE792FCCB265B59BB814A34909EE76651151E762A(L_0, 0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::GetUpdateOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CcmBlockCipher_GetUpdateOutputSize_mE33A81D4F87D94EB4A8BE60A9E5FCB7FC55EAF6C (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, int32_t ___len0, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::GetOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CcmBlockCipher_GetOutputSize_mA666ADA15375E6BCABF049EEDF7062DFFEB4D6D4 (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, int32_t ___len0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___data_9;
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		int32_t L_2 = ___len0;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)L_1), L_2));
		bool L_3 = __this->___forEncryption_3;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___macSize_6;
		return ((int32_t)il2cpp_codegen_add(L_4, L_5));
	}

IL_0020:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->___macSize_6;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->___macSize_6;
		return ((int32_t)il2cpp_codegen_subtract(L_8, L_9));
	}

IL_0032:
	{
		return 0;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::ProcessPacket(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CcmBlockCipher_ProcessPacket_mC03F070E4F9E18E2554A6513573115559BC1D9EF (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___inLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		bool L_0 = __this->___forEncryption_3;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___inLen2;
		int32_t L_2 = __this->___macSize_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_1, L_2)));
		V_0 = L_3;
		goto IL_003a;
	}

IL_0018:
	{
		int32_t L_4 = ___inLen2;
		int32_t L_5 = __this->___macSize_6;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_002c;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_6 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4901277BD17A5B2F9FD51DCD98D6CE81842202C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CcmBlockCipher_ProcessPacket_mC03F070E4F9E18E2554A6513573115559BC1D9EF_RuntimeMethod_var)));
	}

IL_002c:
	{
		int32_t L_7 = ___inLen2;
		int32_t L_8 = __this->___macSize_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8)));
		V_0 = L_9;
	}

IL_003a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___input0;
		int32_t L_11 = ___inOff1;
		int32_t L_12 = ___inLen2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		int32_t L_14;
		L_14 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(31 /* System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::ProcessPacket(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, __this, L_10, L_11, L_12, L_13, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		return L_15;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::ProcessPacket(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CcmBlockCipher_ProcessPacket_mB45FE4A1DEDED1FBFA822AD76CD3FD1BDBB525B0 (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___inLen2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOff4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE580449FDEA9A2F7D9C6101AE58E2B0CEA315B63);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	int32_t V_10 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_11 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	{
		RuntimeObject* L_0 = __this->___keyParam_7;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5943A7E2C9B6B97618BE5C61998DFB431B4ECBB6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CcmBlockCipher_ProcessPacket_mB45FE4A1DEDED1FBFA822AD76CD3FD1BDBB525B0_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___nonce_4;
		V_0 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)15), L_3));
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) >= ((int32_t)4)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_5 = V_1;
		V_2 = ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_multiply(8, L_5))&((int32_t)31)))));
		int32_t L_6 = ___inLen2;
		int32_t L_7 = V_2;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_003d;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36570DC4B6CBC47EEA6EED659B46CE6C34F3F431)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CcmBlockCipher_ProcessPacket_mB45FE4A1DEDED1FBFA822AD76CD3FD1BDBB525B0_RuntimeMethod_var)));
	}

IL_003d:
	{
		il2cpp_codegen_runtime_class_init_inline(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var);
		int32_t L_9 = ((CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_StaticFields*)il2cpp_codegen_static_fields_for(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var))->___BlockSize_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_3 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_3;
		int32_t L_12 = V_1;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_12, 1))&7))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___nonce_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_3;
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_13, (RuntimeArray*)L_14, 1, NULL);
		RuntimeObject* L_15 = __this->___cipher_1;
		SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* L_16 = (SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105*)il2cpp_codegen_object_new(SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105_il2cpp_TypeInfo_var);
		SicBlockCipher__ctor_mA7ADBD37CBBF2B5DB603804C12BBD044A86DD99A(L_16, L_15, NULL);
		V_4 = L_16;
		RuntimeObject* L_17 = V_4;
		bool L_18 = __this->___forEncryption_3;
		RuntimeObject* L_19 = __this->___keyParam_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_3;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_21 = (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)il2cpp_codegen_object_new(ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994(L_21, L_19, L_20, NULL);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_17, L_18, L_21);
		int32_t L_22 = ___inOff1;
		V_6 = L_22;
		int32_t L_23 = ___outOff4;
		V_7 = L_23;
		bool L_24 = __this->___forEncryption_3;
		if (!L_24)
		{
			goto IL_0166;
		}
	}
	{
		int32_t L_25 = ___inLen2;
		int32_t L_26 = __this->___macSize_6;
		V_5 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___output3;
		int32_t L_28 = ___outOff4;
		int32_t L_29 = V_5;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_27, L_28, L_29, _stringLiteralE580449FDEA9A2F7D9C6101AE58E2B0CEA315B63, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___input0;
		int32_t L_31 = ___inOff1;
		int32_t L_32 = ___inLen2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___macBlock_2;
		int32_t L_34;
		L_34 = CcmBlockCipher_CalculateMac_m96B72BC3DAFF826117DA1FCE59AEB55037E13F89(__this, L_30, L_31, L_32, L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var);
		int32_t L_35 = ((CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_StaticFields*)il2cpp_codegen_static_fields_for(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var))->___BlockSize_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_35);
		V_8 = L_36;
		RuntimeObject* L_37 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = __this->___macBlock_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_8;
		int32_t L_40;
		L_40 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_37, L_38, 0, L_39, 0);
		goto IL_0103;
	}

IL_00e0:
	{
		RuntimeObject* L_41 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___input0;
		int32_t L_43 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ___output3;
		int32_t L_45 = V_7;
		int32_t L_46;
		L_46 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_41, L_42, L_43, L_44, L_45);
		int32_t L_47 = V_7;
		il2cpp_codegen_runtime_class_init_inline(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var);
		int32_t L_48 = ((CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_StaticFields*)il2cpp_codegen_static_fields_for(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var))->___BlockSize_0;
		V_7 = ((int32_t)il2cpp_codegen_add(L_47, L_48));
		int32_t L_49 = V_6;
		int32_t L_50 = ((CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_StaticFields*)il2cpp_codegen_static_fields_for(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var))->___BlockSize_0;
		V_6 = ((int32_t)il2cpp_codegen_add(L_49, L_50));
	}

IL_0103:
	{
		int32_t L_51 = V_6;
		int32_t L_52 = ___inOff1;
		int32_t L_53 = ___inLen2;
		il2cpp_codegen_runtime_class_init_inline(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var);
		int32_t L_54 = ((CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_StaticFields*)il2cpp_codegen_static_fields_for(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var))->___BlockSize_0;
		if ((((int32_t)L_51) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_52, L_53)), L_54)))))
		{
			goto IL_00e0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var);
		int32_t L_55 = ((CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_StaticFields*)il2cpp_codegen_static_fields_for(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var))->___BlockSize_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_55);
		V_9 = L_56;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ___input0;
		int32_t L_58 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_9;
		int32_t L_60 = ___inLen2;
		int32_t L_61 = ___inOff1;
		int32_t L_62 = V_6;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_57, L_58, (RuntimeArray*)L_59, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_60, L_61)), L_62)), NULL);
		RuntimeObject* L_63 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = V_9;
		int32_t L_66;
		L_66 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_63, L_64, 0, L_65, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = ___output3;
		int32_t L_69 = V_7;
		int32_t L_70 = ___inLen2;
		int32_t L_71 = ___inOff1;
		int32_t L_72 = V_6;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_67, 0, (RuntimeArray*)L_68, L_69, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_70, L_71)), L_72)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = ___output3;
		int32_t L_75 = ___outOff4;
		int32_t L_76 = ___inLen2;
		int32_t L_77 = __this->___macSize_6;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_73, 0, (RuntimeArray*)L_74, ((int32_t)il2cpp_codegen_add(L_75, L_76)), L_77, NULL);
		goto IL_028e;
	}

IL_0166:
	{
		int32_t L_78 = ___inLen2;
		int32_t L_79 = __this->___macSize_6;
		if ((((int32_t)L_78) >= ((int32_t)L_79)))
		{
			goto IL_017a;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_80 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_80, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4901277BD17A5B2F9FD51DCD98D6CE81842202C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_80, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CcmBlockCipher_ProcessPacket_mB45FE4A1DEDED1FBFA822AD76CD3FD1BDBB525B0_RuntimeMethod_var)));
	}

IL_017a:
	{
		int32_t L_81 = ___inLen2;
		int32_t L_82 = __this->___macSize_6;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_81, L_82));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = ___output3;
		int32_t L_84 = ___outOff4;
		int32_t L_85 = V_5;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_83, L_84, L_85, _stringLiteralE580449FDEA9A2F7D9C6101AE58E2B0CEA315B63, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = ___input0;
		int32_t L_87 = ___inOff1;
		int32_t L_88 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = __this->___macBlock_2;
		int32_t L_90 = __this->___macSize_6;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_86, ((int32_t)il2cpp_codegen_add(L_87, L_88)), (RuntimeArray*)L_89, 0, L_90, NULL);
		RuntimeObject* L_91 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = __this->___macBlock_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = __this->___macBlock_2;
		int32_t L_94;
		L_94 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_91, L_92, 0, L_93, 0);
		int32_t L_95 = __this->___macSize_6;
		V_10 = L_95;
		goto IL_01db;
	}

IL_01cb:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = __this->___macBlock_2;
		int32_t L_97 = V_10;
		(L_96)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_97), (uint8_t)0);
		int32_t L_98 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_01db:
	{
		int32_t L_99 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = __this->___macBlock_2;
		if ((!(((uint32_t)L_99) == ((uint32_t)((int32_t)(((RuntimeArray*)L_100)->max_length))))))
		{
			goto IL_01cb;
		}
	}
	{
		goto IL_020c;
	}

IL_01e9:
	{
		RuntimeObject* L_101 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = ___input0;
		int32_t L_103 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = ___output3;
		int32_t L_105 = V_7;
		int32_t L_106;
		L_106 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_101, L_102, L_103, L_104, L_105);
		int32_t L_107 = V_7;
		il2cpp_codegen_runtime_class_init_inline(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var);
		int32_t L_108 = ((CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_StaticFields*)il2cpp_codegen_static_fields_for(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var))->___BlockSize_0;
		V_7 = ((int32_t)il2cpp_codegen_add(L_107, L_108));
		int32_t L_109 = V_6;
		int32_t L_110 = ((CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_StaticFields*)il2cpp_codegen_static_fields_for(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var))->___BlockSize_0;
		V_6 = ((int32_t)il2cpp_codegen_add(L_109, L_110));
	}

IL_020c:
	{
		int32_t L_111 = V_6;
		int32_t L_112 = ___inOff1;
		int32_t L_113 = V_5;
		il2cpp_codegen_runtime_class_init_inline(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var);
		int32_t L_114 = ((CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_StaticFields*)il2cpp_codegen_static_fields_for(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var))->___BlockSize_0;
		if ((((int32_t)L_111) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_112, L_113)), L_114)))))
		{
			goto IL_01e9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var);
		int32_t L_115 = ((CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_StaticFields*)il2cpp_codegen_static_fields_for(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var))->___BlockSize_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_116 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_115);
		V_11 = L_116;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_117 = ___input0;
		int32_t L_118 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_119 = V_11;
		int32_t L_120 = V_5;
		int32_t L_121 = V_6;
		int32_t L_122 = ___inOff1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_117, L_118, (RuntimeArray*)L_119, 0, ((int32_t)il2cpp_codegen_subtract(L_120, ((int32_t)il2cpp_codegen_subtract(L_121, L_122)))), NULL);
		RuntimeObject* L_123 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_124 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_125 = V_11;
		int32_t L_126;
		L_126 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_123, L_124, 0, L_125, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_127 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_128 = ___output3;
		int32_t L_129 = V_7;
		int32_t L_130 = V_5;
		int32_t L_131 = V_6;
		int32_t L_132 = ___inOff1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_127, 0, (RuntimeArray*)L_128, L_129, ((int32_t)il2cpp_codegen_subtract(L_130, ((int32_t)il2cpp_codegen_subtract(L_131, L_132)))), NULL);
		int32_t L_133 = ((CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_StaticFields*)il2cpp_codegen_static_fields_for(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var))->___BlockSize_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_134 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_133);
		V_12 = L_134;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_135 = ___output3;
		int32_t L_136 = ___outOff4;
		int32_t L_137 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_138 = V_12;
		int32_t L_139;
		L_139 = CcmBlockCipher_CalculateMac_m96B72BC3DAFF826117DA1FCE59AEB55037E13F89(__this, L_135, L_136, L_137, L_138, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_140 = __this->___macBlock_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_141 = V_12;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_142;
		L_142 = Arrays_ConstantTimeAreEqual_m276F471905921D3AACBB6A6A6CE63DCFD4CBAE3E(L_140, L_141, NULL);
		if (L_142)
		{
			goto IL_028e;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_143 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_143, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0730C8CFFE15F08D48A8C1DECEDA7AD46E318B9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_143, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CcmBlockCipher_ProcessPacket_mB45FE4A1DEDED1FBFA822AD76CD3FD1BDBB525B0_RuntimeMethod_var)));
	}

IL_028e:
	{
		int32_t L_144 = V_5;
		return L_144;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::CalculateMac(System.Byte[],System.Int32,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CcmBlockCipher_CalculateMac_m96B72BC3DAFF826117DA1FCE59AEB55037E13F89 (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___dataOff1, int32_t ___dataLen2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___macBlock3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_9 = NULL;
	{
		RuntimeObject* L_0 = __this->___cipher_1;
		int32_t L_1 = __this->___macSize_6;
		CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D* L_2 = (CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D*)il2cpp_codegen_object_new(CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D_il2cpp_TypeInfo_var);
		CbcBlockCipherMac__ctor_m12906E75391E114BA84897865E8EE30CDBC4F28F(L_2, L_0, ((int32_t)il2cpp_codegen_multiply(L_1, 8)), NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		RuntimeObject* L_4 = __this->___keyParam_7;
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Org.BouncyCastle.Crypto.IMac::Init(Org.BouncyCastle.Crypto.ICipherParameters) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_3, L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_1 = L_5;
		bool L_6;
		L_6 = CcmBlockCipher_HasAssociatedText_mE1AE56AF01C63C8A5ED7F1478F9406C35A267DC7(__this, NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7;
		V_9 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_9;
		int32_t L_10 = 0;
		uint8_t L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_11|((int32_t)64)))));
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = L_12;
		V_9 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_9;
		int32_t L_15 = 0;
		uint8_t L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		RuntimeObject* L_17 = V_0;
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IMac::GetMacSize() */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_17);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_16|((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_subtract(L_18, 2))/2))&7))<<3)))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = L_19;
		V_9 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_9;
		int32_t L_22 = 0;
		uint8_t L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___nonce_4;
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_23|((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)15), ((int32_t)(((RuntimeArray*)L_24)->max_length)))), 1))&7)))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___nonce_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___nonce_4;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_25, 0, (RuntimeArray*)L_26, 1, ((int32_t)(((RuntimeArray*)L_27)->max_length)), NULL);
		int32_t L_28 = ___dataLen2;
		V_2 = L_28;
		V_3 = 1;
		goto IL_00a8;
	}

IL_0091:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_1;
		int32_t L_31 = V_3;
		int32_t L_32 = V_2;
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_30)->max_length)), L_31))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_32&((int32_t)255)))));
		int32_t L_33 = V_2;
		V_2 = ((int32_t)(L_33>>8));
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00a8:
	{
		int32_t L_35 = V_2;
		if ((((int32_t)L_35) > ((int32_t)0)))
		{
			goto IL_0091;
		}
	}
	{
		RuntimeObject* L_36 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_1;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_36, L_37, 0, ((int32_t)(((RuntimeArray*)L_38)->max_length)));
		bool L_39;
		L_39 = CcmBlockCipher_HasAssociatedText_mE1AE56AF01C63C8A5ED7F1478F9406C35A267DC7(__this, NULL);
		if (!L_39)
		{
			goto IL_01aa;
		}
	}
	{
		int32_t L_40;
		L_40 = CcmBlockCipher_GetAssociatedTextLength_mC200FDD97818F28F657C68D0D5AC5778AA405183(__this, NULL);
		V_5 = L_40;
		int32_t L_41 = V_5;
		if ((((int32_t)L_41) >= ((int32_t)((int32_t)65280))))
		{
			goto IL_00ec;
		}
	}
	{
		RuntimeObject* L_42 = V_0;
		int32_t L_43 = V_5;
		InterfaceActionInvoker1< uint8_t >::Invoke(3 /* System.Void Org.BouncyCastle.Crypto.IMac::Update(System.Byte) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_42, (uint8_t)((int32_t)(uint8_t)((int32_t)(L_43>>8))));
		RuntimeObject* L_44 = V_0;
		int32_t L_45 = V_5;
		InterfaceActionInvoker1< uint8_t >::Invoke(3 /* System.Void Org.BouncyCastle.Crypto.IMac::Update(System.Byte) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_44, (uint8_t)((int32_t)(uint8_t)L_45));
		V_4 = 2;
		goto IL_0131;
	}

IL_00ec:
	{
		RuntimeObject* L_46 = V_0;
		InterfaceActionInvoker1< uint8_t >::Invoke(3 /* System.Void Org.BouncyCastle.Crypto.IMac::Update(System.Byte) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_46, (uint8_t)((int32_t)255));
		RuntimeObject* L_47 = V_0;
		InterfaceActionInvoker1< uint8_t >::Invoke(3 /* System.Void Org.BouncyCastle.Crypto.IMac::Update(System.Byte) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_47, (uint8_t)((int32_t)254));
		RuntimeObject* L_48 = V_0;
		int32_t L_49 = V_5;
		InterfaceActionInvoker1< uint8_t >::Invoke(3 /* System.Void Org.BouncyCastle.Crypto.IMac::Update(System.Byte) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_48, (uint8_t)((int32_t)(uint8_t)((int32_t)(L_49>>((int32_t)24)))));
		RuntimeObject* L_50 = V_0;
		int32_t L_51 = V_5;
		InterfaceActionInvoker1< uint8_t >::Invoke(3 /* System.Void Org.BouncyCastle.Crypto.IMac::Update(System.Byte) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_50, (uint8_t)((int32_t)(uint8_t)((int32_t)(L_51>>((int32_t)16)))));
		RuntimeObject* L_52 = V_0;
		int32_t L_53 = V_5;
		InterfaceActionInvoker1< uint8_t >::Invoke(3 /* System.Void Org.BouncyCastle.Crypto.IMac::Update(System.Byte) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_52, (uint8_t)((int32_t)(uint8_t)((int32_t)(L_53>>8))));
		RuntimeObject* L_54 = V_0;
		int32_t L_55 = V_5;
		InterfaceActionInvoker1< uint8_t >::Invoke(3 /* System.Void Org.BouncyCastle.Crypto.IMac::Update(System.Byte) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_54, (uint8_t)((int32_t)(uint8_t)L_55));
		V_4 = 6;
	}

IL_0131:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = __this->___initialAssociatedText_5;
		if (!L_56)
		{
			goto IL_014e;
		}
	}
	{
		RuntimeObject* L_57 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = __this->___initialAssociatedText_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = __this->___initialAssociatedText_5;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_57, L_58, 0, ((int32_t)(((RuntimeArray*)L_59)->max_length)));
	}

IL_014e:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_60 = __this->___associatedText_8;
		int64_t L_61;
		L_61 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_60);
		if ((((int64_t)L_61) <= ((int64_t)((int64_t)0))))
		{
			goto IL_0183;
		}
	}
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_62 = __this->___associatedText_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63;
		L_63 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(38 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, L_62);
		V_6 = L_63;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_64 = __this->___associatedText_8;
		int64_t L_65;
		L_65 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_64);
		V_7 = ((int32_t)L_65);
		RuntimeObject* L_66 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_6;
		int32_t L_68 = V_7;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_66, L_67, 0, L_68);
	}

IL_0183:
	{
		int32_t L_69 = V_4;
		int32_t L_70 = V_5;
		V_4 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_69, L_70))%((int32_t)16)));
		int32_t L_71 = V_4;
		if (!L_71)
		{
			goto IL_01aa;
		}
	}
	{
		int32_t L_72 = V_4;
		V_8 = L_72;
		goto IL_01a4;
	}

IL_0197:
	{
		RuntimeObject* L_73 = V_0;
		InterfaceActionInvoker1< uint8_t >::Invoke(3 /* System.Void Org.BouncyCastle.Crypto.IMac::Update(System.Byte) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_73, (uint8_t)0);
		int32_t L_74 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_01a4:
	{
		int32_t L_75 = V_8;
		if ((((int32_t)L_75) < ((int32_t)((int32_t)16))))
		{
			goto IL_0197;
		}
	}

IL_01aa:
	{
		RuntimeObject* L_76 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = ___data0;
		int32_t L_78 = ___dataOff1;
		int32_t L_79 = ___dataLen2;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_76, L_77, L_78, L_79);
		RuntimeObject* L_80 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = ___macBlock3;
		int32_t L_82;
		L_82 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IMac::DoFinal(System.Byte[],System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_80, L_81, 0);
		return L_82;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::GetMacSize(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CcmBlockCipher_GetMacSize_m94D51D06FC7E40CE15E447399501AD0F7B32289D (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, bool ___forEncryption0, int32_t ___requestedMacBits1, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___forEncryption0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = ___requestedMacBits1;
		if ((((int32_t)L_1) < ((int32_t)((int32_t)32))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___requestedMacBits1;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)128))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___requestedMacBits1;
		if (!((int32_t)(L_3&((int32_t)15))))
		{
			goto IL_0021;
		}
	}

IL_0016:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0104DE6F88E37C8826B0F6A3081F373CE56572F5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CcmBlockCipher_GetMacSize_m94D51D06FC7E40CE15E447399501AD0F7B32289D_RuntimeMethod_var)));
	}

IL_0021:
	{
		int32_t L_5 = ___requestedMacBits1;
		return ((int32_t)(L_5>>3));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::GetAssociatedTextLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CcmBlockCipher_GetAssociatedTextLength_mC200FDD97818F28F657C68D0D5AC5778AA405183 (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___associatedText_8;
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___initialAssociatedText_5;
		G_B1_0 = ((int32_t)L_1);
		if (!L_2)
		{
			G_B2_0 = ((int32_t)L_1);
			goto IL_001e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___initialAssociatedText_5;
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		return ((int32_t)il2cpp_codegen_add(G_B3_1, G_B3_0));
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::HasAssociatedText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CcmBlockCipher_HasAssociatedText_mE1AE56AF01C63C8A5ED7F1478F9406C35A267DC7 (CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = CcmBlockCipher_GetAssociatedTextLength_mC200FDD97818F28F657C68D0D5AC5778AA405183(__this, NULL);
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.CcmBlockCipher::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CcmBlockCipher__cctor_m6DF58077A70428462D7BFA715664217E0E7CE335 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_StaticFields*)il2cpp_codegen_static_fields_for(CcmBlockCipher_t1A8D8E68091BD97F5D1325548ABB09C4634FF6F4_il2cpp_TypeInfo_var))->___BlockSize_0 = ((int32_t)16);
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
// System.Void Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CfbBlockCipher__ctor_m96C98225278D4B349134C9F14B1E7E59CCA74FA1 (CfbBlockCipher_tCEBBD2ADC3163E5194A663130E8AA543B1C58C12* __this, RuntimeObject* ___cipher0, int32_t ___bitBlockSize1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___bitBlockSize1;
		if ((((int32_t)L_0) < ((int32_t)8)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___bitBlockSize1;
		if (!((int32_t)(L_1&7)))
		{
			goto IL_002f;
		}
	}

IL_000f:
	{
		int32_t L_2 = ___bitBlockSize1;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE765EF8B98B268C8218B40A1C6C54944E7BB50C8)), L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6FAC12148561FEC937CFC59BDE618CF0AF9BA64D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB14357C2EF9F977031E2911FFA06B1EEC8A5767C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CfbBlockCipher__ctor_m96C98225278D4B349134C9F14B1E7E59CCA74FA1_RuntimeMethod_var)));
	}

IL_002f:
	{
		RuntimeObject* L_7 = ___cipher0;
		__this->___cipher_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_5), (void*)L_7);
		int32_t L_8 = ___bitBlockSize1;
		__this->___blockSize_4 = ((int32_t)(L_8/8));
		RuntimeObject* L_9 = ___cipher0;
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->___IV_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IV_0), (void*)L_11);
		RuntimeObject* L_12 = ___cipher0;
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_13);
		__this->___cfbV_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cfbV_1), (void*)L_14);
		RuntimeObject* L_15 = ___cipher0;
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_16);
		__this->___cfbOutV_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cfbOutV_2), (void*)L_17);
		return;
	}
}
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::GetUnderlyingCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CfbBlockCipher_GetUnderlyingCipher_mE39DFDFC8EEFC6C79456899D176AD76494672DE5 (CfbBlockCipher_tCEBBD2ADC3163E5194A663130E8AA543B1C58C12* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___cipher_5;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CfbBlockCipher_Init_m0924B01D16C7C30EBA16E225FC04581EE6CA4944 (CfbBlockCipher_tCEBBD2ADC3163E5194A663130E8AA543B1C58C12* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	{
		bool L_0 = ___forEncryption0;
		__this->___encrypting_3 = L_0;
		RuntimeObject* L_1 = ___parameters1;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_1, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_2 = ___parameters1;
		V_0 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_2, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_3, NULL);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), ((int32_t)(((RuntimeArray*)L_6)->max_length))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___IV_0;
		int32_t L_9 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_7, 0, (RuntimeArray*)L_8, L_9, ((int32_t)(((RuntimeArray*)L_10)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___IV_0;
		int32_t L_12 = V_2;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_11, 0, L_12, NULL);
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_13 = V_0;
		RuntimeObject* L_14;
		L_14 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_13, NULL);
		___parameters1 = L_14;
	}

IL_0050:
	{
		CfbBlockCipher_Reset_mBF9F8196D0420DEC4D4CCB1E01555A9268272A85(__this, NULL);
		RuntimeObject* L_15 = ___parameters1;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_16 = __this->___cipher_5;
		RuntimeObject* L_17 = ___parameters1;
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_16, (bool)1, L_17);
	}

IL_0066:
	{
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CfbBlockCipher_get_AlgorithmName_m7D89459CC6AA5E2A215AE64263686695065556B2 (CfbBlockCipher_tCEBBD2ADC3163E5194A663130E8AA543B1C58C12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65D1B0E1FA928C5674E15C89FEC7B4B01353ACBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_5;
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = __this->___blockSize_4;
		int32_t L_3 = ((int32_t)il2cpp_codegen_multiply(L_2, 8));
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8(L_1, _stringLiteral65D1B0E1FA928C5674E15C89FEC7B4B01353ACBF, L_4, NULL);
		return L_5;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CfbBlockCipher_get_IsPartialBlockOkay_mBE805011C21289EEF540E4FAF0CC471E01AAEFA8 (CfbBlockCipher_tCEBBD2ADC3163E5194A663130E8AA543B1C58C12* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CfbBlockCipher_GetBlockSize_m6F1460F48113ED9EEBB646C8BA4043D2B77A7C90 (CfbBlockCipher_tCEBBD2ADC3163E5194A663130E8AA543B1C58C12* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___blockSize_4;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CfbBlockCipher_ProcessBlock_m6DDAD38CC997B9D560B756F740C4427FFE702785 (CfbBlockCipher_tCEBBD2ADC3163E5194A663130E8AA543B1C58C12* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___encrypting_3;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input0;
		int32_t L_2 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___output2;
		int32_t L_4 = ___outOff3;
		int32_t L_5;
		L_5 = CfbBlockCipher_DecryptBlock_m4318A9502209D6DC8BAFA918B8D1D217BAB3DDAA(__this, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___input0;
		int32_t L_7 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___output2;
		int32_t L_9 = ___outOff3;
		int32_t L_10;
		L_10 = CfbBlockCipher_EncryptBlock_m1CD9A124F4174F92202B2B7A3A794B18FA19413A(__this, L_6, L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CfbBlockCipher_EncryptBlock_m1CD9A124F4174F92202B2B7A3A794B18FA19413A (CfbBlockCipher_tCEBBD2ADC3163E5194A663130E8AA543B1C58C12* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___inOff1;
		int32_t L_1 = __this->___blockSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_3 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CfbBlockCipher_EncryptBlock_m1CD9A124F4174F92202B2B7A3A794B18FA19413A_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_4 = ___outOff3;
		int32_t L_5 = __this->___blockSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___outBytes2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_7 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CfbBlockCipher_EncryptBlock_m1CD9A124F4174F92202B2B7A3A794B18FA19413A_RuntimeMethod_var)));
	}

IL_0031:
	{
		RuntimeObject* L_8 = __this->___cipher_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___cfbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___cfbOutV_2;
		int32_t L_11;
		L_11 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_8, L_9, 0, L_10, 0);
		V_0 = 0;
		goto IL_0068;
	}

IL_004f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___outBytes2;
		int32_t L_13 = ___outOff3;
		int32_t L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___cfbOutV_2;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___input0;
		int32_t L_20 = ___inOff1;
		int32_t L_21 = V_0;
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		uint8_t L_23 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, L_14))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_18^(int32_t)L_23))));
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0068:
	{
		int32_t L_25 = V_0;
		int32_t L_26 = __this->___blockSize_4;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___cfbV_1;
		int32_t L_28 = __this->___blockSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___cfbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___cfbV_1;
		int32_t L_31 = __this->___blockSize_4;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_27, L_28, (RuntimeArray*)L_29, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_30)->max_length)), L_31)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___outBytes2;
		int32_t L_33 = ___outOff3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___cfbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->___cfbV_1;
		int32_t L_36 = __this->___blockSize_4;
		int32_t L_37 = __this->___blockSize_4;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_32, L_33, (RuntimeArray*)L_34, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_35)->max_length)), L_36)), L_37, NULL);
		int32_t L_38 = __this->___blockSize_4;
		return L_38;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CfbBlockCipher_DecryptBlock_m4318A9502209D6DC8BAFA918B8D1D217BAB3DDAA (CfbBlockCipher_tCEBBD2ADC3163E5194A663130E8AA543B1C58C12* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___inOff1;
		int32_t L_1 = __this->___blockSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_3 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CfbBlockCipher_DecryptBlock_m4318A9502209D6DC8BAFA918B8D1D217BAB3DDAA_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_4 = ___outOff3;
		int32_t L_5 = __this->___blockSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___outBytes2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_7 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CfbBlockCipher_DecryptBlock_m4318A9502209D6DC8BAFA918B8D1D217BAB3DDAA_RuntimeMethod_var)));
	}

IL_0031:
	{
		RuntimeObject* L_8 = __this->___cipher_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___cfbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___cfbOutV_2;
		int32_t L_11;
		L_11 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_8, L_9, 0, L_10, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___cfbV_1;
		int32_t L_13 = __this->___blockSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___cfbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___cfbV_1;
		int32_t L_16 = __this->___blockSize_4;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___input0;
		int32_t L_18 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___cfbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___cfbV_1;
		int32_t L_21 = __this->___blockSize_4;
		int32_t L_22 = __this->___blockSize_4;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_17, L_18, (RuntimeArray*)L_19, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_20)->max_length)), L_21)), L_22, NULL);
		V_0 = 0;
		goto IL_00b1;
	}

IL_0098:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___outBytes2;
		int32_t L_24 = ___outOff3;
		int32_t L_25 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___cfbOutV_2;
		int32_t L_27 = V_0;
		int32_t L_28 = L_27;
		uint8_t L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___input0;
		int32_t L_31 = ___inOff1;
		int32_t L_32 = V_0;
		int32_t L_33 = ((int32_t)il2cpp_codegen_add(L_31, L_32));
		uint8_t L_34 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_29^(int32_t)L_34))));
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00b1:
	{
		int32_t L_36 = V_0;
		int32_t L_37 = __this->___blockSize_4;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_38 = __this->___blockSize_4;
		return L_38;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.CfbBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CfbBlockCipher_Reset_mBF9F8196D0420DEC4D4CCB1E01555A9268272A85 (CfbBlockCipher_tCEBBD2ADC3163E5194A663130E8AA543B1C58C12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___cfbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___IV_0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		RuntimeObject* L_3 = __this->___cipher_5;
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_3);
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
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305__ctor_mF1C96BC3DD2A345499C3805CFDF16B2E26877438 (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A* L_0 = (Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A*)il2cpp_codegen_object_new(Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A_il2cpp_TypeInfo_var);
		Poly1305__ctor_mEE7F9D04CF0340E4E3202F153CE16D7C98AD2A08(L_0, NULL);
		ChaCha20Poly1305__ctor_mF8A30214DBE7A4213C692C9C07B0CEEFCD3BD8A5(__this, L_0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::.ctor(Org.BouncyCastle.Crypto.IMac)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305__ctor_mF8A30214DBE7A4213C692C9C07B0CEEFCD3BD8A5 (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, RuntimeObject* ___poly13050, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChaCha7539Engine_tD1D7125C6C180460972E80EEB9A49E9B8443763E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___mKey_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mKey_9), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		__this->___mNonce_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNonce_10), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)80));
		__this->___mBuf_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mBuf_11), (void*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___mMac_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mMac_12), (void*)L_3);
		__this->___mState_16 = 0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_4 = ___poly13050;
		if (L_4)
		{
			goto IL_004f;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C0BFDD6B9C6953ED068A731EBCAF58E07A45750)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305__ctor_mF8A30214DBE7A4213C692C9C07B0CEEFCD3BD8A5_RuntimeMethod_var)));
	}

IL_004f:
	{
		RuntimeObject* L_6 = ___poly13050;
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IMac::GetMacSize() */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_6);
		if ((((int32_t)((int32_t)16)) == ((int32_t)L_7)))
		{
			goto IL_0069;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9519B868DDAF2EA30EC7795FFAF36F3C51AA589D)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C0BFDD6B9C6953ED068A731EBCAF58E07A45750)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305__ctor_mF8A30214DBE7A4213C692C9C07B0CEEFCD3BD8A5_RuntimeMethod_var)));
	}

IL_0069:
	{
		ChaCha7539Engine_tD1D7125C6C180460972E80EEB9A49E9B8443763E* L_9 = (ChaCha7539Engine_tD1D7125C6C180460972E80EEB9A49E9B8443763E*)il2cpp_codegen_object_new(ChaCha7539Engine_tD1D7125C6C180460972E80EEB9A49E9B8443763E_il2cpp_TypeInfo_var);
		ChaCha7539Engine__ctor_m4A24B49E66D182271F2F13504063F4A5B02B2621(L_9, NULL);
		__this->___mChacha20_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mChacha20_7), (void*)L_9);
		RuntimeObject* L_10 = ___poly13050;
		__this->___mPoly1305_8 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPoly1305_8), (void*)L_10);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChaCha20Poly1305_get_AlgorithmName_mAC4F421C10E4B29CD1B822D633F0E96D5C7584AC (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FED077186F1EAAD044920460BF3DE2FB931CC0C);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral8FED077186F1EAAD044920460BF3DE2FB931CC0C;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_Init_m68465C307F36EA18B332278F76BE47A53D96F840 (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* V_3 = NULL;
	int32_t V_4 = 0;
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_5 = NULL;
	ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* G_B25_0 = NULL;
	ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* G_B24_0 = NULL;
	int32_t G_B26_0 = 0;
	ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* G_B26_1 = NULL;
	{
		RuntimeObject* L_0 = ___parameters1;
		if (!((AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B*)IsInstClass((RuntimeObject*)L_0, AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var)))
		{
			goto IL_005b;
		}
	}
	{
		RuntimeObject* L_1 = ___parameters1;
		V_3 = ((AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B*)CastclassClass((RuntimeObject*)L_1, AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var));
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_2 = V_3;
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_MacSize() */, L_2);
		V_4 = L_3;
		int32_t L_4 = V_4;
		if ((((int32_t)((int32_t)128)) == ((int32_t)L_4)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_5 = V_4;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EBDAE183BC30C2AD6BD85811A7DA978BDAB9809)), L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_Init_m68465C307F36EA18B332278F76BE47A53D96F840_RuntimeMethod_var)));
	}

IL_0037:
	{
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_10 = V_3;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_11;
		L_11 = VirtualFuncInvoker0< KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* >::Invoke(4 /* Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_Key() */, L_10);
		V_0 = L_11;
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_12 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(7 /* System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetNonce() */, L_12);
		V_1 = L_13;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_16 = (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)il2cpp_codegen_object_new(ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994(L_16, L_14, L_15, NULL);
		V_2 = L_16;
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_17 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetAssociatedText() */, L_17);
		__this->___mInitialAad_13 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mInitialAad_13), (void*)L_18);
		goto IL_009c;
	}

IL_005b:
	{
		RuntimeObject* L_19 = ___parameters1;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_19, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_008c;
		}
	}
	{
		RuntimeObject* L_20 = ___parameters1;
		V_5 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_20, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_21 = V_5;
		RuntimeObject* L_22;
		L_22 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_21, NULL);
		V_0 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_22, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_23 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_23, NULL);
		V_1 = L_24;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_25 = V_5;
		V_2 = L_25;
		__this->___mInitialAad_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mInitialAad_13), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		goto IL_009c;
	}

IL_008c:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_26 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC3DDBD0F898775164D4161E7D18A071607F22674)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_Init_m68465C307F36EA18B332278F76BE47A53D96F840_RuntimeMethod_var)));
	}

IL_009c:
	{
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_27 = V_0;
		if (L_27)
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_28 = __this->___mState_16;
		if (L_28)
		{
			goto IL_00c9;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD317B044D3F8943C40215001850B2359CD7BA272)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_Init_m68465C307F36EA18B332278F76BE47A53D96F840_RuntimeMethod_var)));
	}

IL_00b2:
	{
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_30 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_30, NULL);
		if ((((int32_t)((int32_t)32)) == ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_00c9;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_32 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6523809DBB0E2DBB30EF30F0EA910994FB2FFFEE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_Init_m68465C307F36EA18B332278F76BE47A53D96F840_RuntimeMethod_var)));
	}

IL_00c9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_1;
		if (!L_33)
		{
			goto IL_00d3;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_1;
		if ((((int32_t)((int32_t)12)) == ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_00de;
		}
	}

IL_00d3:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_35 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_35, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5137C567046C7635F31816E42232FEA1D2BBB6CD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_Init_m68465C307F36EA18B332278F76BE47A53D96F840_RuntimeMethod_var)));
	}

IL_00de:
	{
		int32_t L_36 = __this->___mState_16;
		if (!L_36)
		{
			goto IL_0118;
		}
	}
	{
		bool L_37 = ___forEncryption0;
		if (!L_37)
		{
			goto IL_0118;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = __this->___mNonce_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Arrays_AreEqual_mF00C3B51F7520663ADB08744EA3A1995B9421C18(L_38, L_39, NULL);
		if (!L_40)
		{
			goto IL_0118;
		}
	}
	{
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_41 = V_0;
		if (!L_41)
		{
			goto IL_010d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = __this->___mKey_9;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_43 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44;
		L_44 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_43, NULL);
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Arrays_AreEqual_mF00C3B51F7520663ADB08744EA3A1995B9421C18(L_42, L_44, NULL);
		if (!L_45)
		{
			goto IL_0118;
		}
	}

IL_010d:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_46 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_46, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECF58D4421B463ACE7A9F3931C1E236EA5A0454B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_Init_m68465C307F36EA18B332278F76BE47A53D96F840_RuntimeMethod_var)));
	}

IL_0118:
	{
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_47 = V_0;
		if (!L_47)
		{
			goto IL_0130;
		}
	}
	{
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_48 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49;
		L_49 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_48, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = __this->___mKey_9;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_49, 0, (RuntimeArray*)L_50, 0, ((int32_t)32), NULL);
	}

IL_0130:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = __this->___mNonce_10;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_51, 0, (RuntimeArray*)L_52, 0, ((int32_t)12), NULL);
		ChaCha7539Engine_tD1D7125C6C180460972E80EEB9A49E9B8443763E* L_53 = __this->___mChacha20_7;
		RuntimeObject* L_54 = V_2;
		VirtualActionInvoker2< bool, RuntimeObject* >::Invoke(9 /* System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, L_53, (bool)1, L_54);
		bool L_55 = ___forEncryption0;
		G_B24_0 = __this;
		if (L_55)
		{
			G_B25_0 = __this;
			goto IL_0154;
		}
	}
	{
		G_B26_0 = 5;
		G_B26_1 = G_B24_0;
		goto IL_0155;
	}

IL_0154:
	{
		G_B26_0 = 1;
		G_B26_1 = G_B25_0;
	}

IL_0155:
	{
		G_B26_1->___mState_16 = G_B26_0;
		ChaCha20Poly1305_Reset_m59C2B3FF6C3ADC6B884CC9FAB0A2849E95914146(__this, (bool)1, (bool)0, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::GetOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChaCha20Poly1305_GetOutputSize_mFA9B96390AE7635F9C701E693D931B1B1BED22A6 (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, int32_t ___len0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___len0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(0, L_0, NULL);
		int32_t L_2 = __this->___mBufPos_17;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		int32_t L_3 = __this->___mState_16;
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 1)))
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_0047;
			}
			case 3:
			{
				goto IL_004c;
			}
			case 4:
			{
				goto IL_003c;
			}
			case 5:
			{
				goto IL_003c;
			}
			case 6:
			{
				goto IL_003c;
			}
		}
	}
	{
		goto IL_004c;
	}

IL_003c:
	{
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(0, ((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)16))), NULL);
		return L_6;
	}

IL_0047:
	{
		int32_t L_7 = V_0;
		return ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)16)));
	}

IL_004c:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_GetOutputSize_mFA9B96390AE7635F9C701E693D931B1B1BED22A6_RuntimeMethod_var)));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::GetUpdateOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChaCha20Poly1305_GetUpdateOutputSize_mDD677A754D2BE66ADFD4B93CFBDDB1990A56AD9D (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, int32_t ___len0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___len0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(0, L_0, NULL);
		int32_t L_2 = __this->___mBufPos_17;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		int32_t L_3 = __this->___mState_16;
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 1)))
		{
			case 0:
			{
				goto IL_004f;
			}
			case 1:
			{
				goto IL_004f;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_0049;
			}
			case 4:
			{
				goto IL_003c;
			}
			case 5:
			{
				goto IL_003c;
			}
			case 6:
			{
				goto IL_003c;
			}
		}
	}
	{
		goto IL_0049;
	}

IL_003c:
	{
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(0, ((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)16))), NULL);
		V_0 = L_6;
		goto IL_004f;
	}

IL_0049:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_GetUpdateOutputSize_mDD677A754D2BE66ADFD4B93CFBDDB1990A56AD9D_RuntimeMethod_var)));
	}

IL_004f:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_0;
		return ((int32_t)il2cpp_codegen_subtract(L_8, ((int32_t)(L_9%((int32_t)64)))));
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::ProcessAadByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_ProcessAadByte_m192C2FB8A509AC95A10175B3852B2F6C01BD291B (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ChaCha20Poly1305_CheckAad_m7A33A76717B7B5BC1176D6A1D0A077ACA59E27BA(__this, NULL);
		uint64_t L_0 = __this->___mAadCount_14;
		uint64_t L_1;
		L_1 = ChaCha20Poly1305_IncrementCount_m97F87C0DF61C0CD539C8294C9CC9F0195D837AD7(__this, L_0, 1, ((int64_t)(-1)), NULL);
		__this->___mAadCount_14 = L_1;
		RuntimeObject* L_2 = __this->___mPoly1305_8;
		uint8_t L_3 = ___input0;
		InterfaceActionInvoker1< uint8_t >::Invoke(3 /* System.Void Org.BouncyCastle.Crypto.IMac::Update(System.Byte) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::ProcessAadBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_ProcessAadBytes_mD2CA5150DCA66A306798969222BD66B80F2F89CC (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___len2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___inBytes0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B0AC3917C2E7F324805F362090E51CB24D91200)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_ProcessAadBytes_mD2CA5150DCA66A306798969222BD66B80F2F89CC_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___inOff1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2ADD38D5A5D6AF5D786F780BFBD396FC5C0F2910)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral727BC807AF1AC64C74DCB7251583325B50E82A42)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_ProcessAadBytes_mD2CA5150DCA66A306798969222BD66B80F2F89CC_RuntimeMethod_var)));
	}

IL_0022:
	{
		int32_t L_4 = ___len2;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2ADD38D5A5D6AF5D786F780BFBD396FC5C0F2910)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50F39E434D2F5790A2F8998AC61DFE974815FC8C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_ProcessAadBytes_mD2CA5150DCA66A306798969222BD66B80F2F89CC_RuntimeMethod_var)));
	}

IL_0036:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___inBytes0;
		int32_t L_7 = ___inOff1;
		int32_t L_8 = ___len2;
		Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F(L_6, L_7, L_8, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ChaCha20Poly1305_CheckAad_m7A33A76717B7B5BC1176D6A1D0A077ACA59E27BA(__this, NULL);
		int32_t L_9 = ___len2;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		uint64_t L_10 = __this->___mAadCount_14;
		int32_t L_11 = ___len2;
		uint64_t L_12;
		L_12 = ChaCha20Poly1305_IncrementCount_m97F87C0DF61C0CD539C8294C9CC9F0195D837AD7(__this, L_10, L_11, ((int64_t)(-1)), NULL);
		__this->___mAadCount_14 = L_12;
		RuntimeObject* L_13 = __this->___mPoly1305_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___inBytes0;
		int32_t L_15 = ___inOff1;
		int32_t L_16 = ___len2;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_13, L_14, L_15, L_16);
	}

IL_0070:
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::ProcessByte(System.Byte,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChaCha20Poly1305_ProcessByte_mE36A8A614CD4625930F5C75D98BFD53A54F94C78 (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, uint8_t ___input0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes1, int32_t ___outOff2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ChaCha20Poly1305_CheckData_m9885193D7E29F2DCF8F1514417C4120810A6CE54(__this, NULL);
		int32_t L_0 = __this->___mState_16;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)7))))
		{
			goto IL_00d8;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___mBuf_11;
		int32_t L_4 = __this->___mBufPos_17;
		uint8_t L_5 = ___input0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)L_5);
		int32_t L_6 = __this->___mBufPos_17;
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		V_1 = L_7;
		__this->___mBufPos_17 = L_7;
		int32_t L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___mBuf_11;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0087;
		}
	}
	{
		RuntimeObject* L_10 = __this->___mPoly1305_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___mBuf_11;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_10, L_11, 0, ((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___mBuf_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___outBytes1;
		int32_t L_14 = ___outOff2;
		ChaCha20Poly1305_ProcessData_mC0DBBDACF0B561BB81CCE3D5BF396B0B1164E6E3(__this, L_12, 0, ((int32_t)64), L_13, L_14, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___mBuf_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___mBuf_11;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_15, ((int32_t)64), (RuntimeArray*)L_16, 0, ((int32_t)16), NULL);
		__this->___mBufPos_17 = ((int32_t)16);
		return ((int32_t)64);
	}

IL_0087:
	{
		return 0;
	}

IL_0089:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___mBuf_11;
		int32_t L_18 = __this->___mBufPos_17;
		uint8_t L_19 = ___input0;
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)L_19);
		int32_t L_20 = __this->___mBufPos_17;
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		V_1 = L_21;
		__this->___mBufPos_17 = L_21;
		int32_t L_22 = V_1;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_00d6;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___mBuf_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___outBytes1;
		int32_t L_25 = ___outOff2;
		ChaCha20Poly1305_ProcessData_mC0DBBDACF0B561BB81CCE3D5BF396B0B1164E6E3(__this, L_23, 0, ((int32_t)64), L_24, L_25, NULL);
		RuntimeObject* L_26 = __this->___mPoly1305_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___outBytes1;
		int32_t L_28 = ___outOff2;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_26, L_27, L_28, ((int32_t)64));
		__this->___mBufPos_17 = 0;
		return ((int32_t)64);
	}

IL_00d6:
	{
		return 0;
	}

IL_00d8:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_29 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_29, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_ProcessByte_mE36A8A614CD4625930F5C75D98BFD53A54F94C78_RuntimeMethod_var)));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChaCha20Poly1305_ProcessBytes_m3AC0CD3050CB2B1D5436DDB9481856EB1721756E (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes3, int32_t ___outOff4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___inBytes0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8B0AC3917C2E7F324805F362090E51CB24D91200)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_ProcessBytes_m3AC0CD3050CB2B1D5436DDB9481856EB1721756E_RuntimeMethod_var)));
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___outBytes3;
		int32_t L_3 = ___inOff1;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2ADD38D5A5D6AF5D786F780BFBD396FC5C0F2910)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral727BC807AF1AC64C74DCB7251583325B50E82A42)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_ProcessBytes_m3AC0CD3050CB2B1D5436DDB9481856EB1721756E_RuntimeMethod_var)));
	}

IL_0025:
	{
		int32_t L_5 = ___len2;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2ADD38D5A5D6AF5D786F780BFBD396FC5C0F2910)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50F39E434D2F5790A2F8998AC61DFE974815FC8C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_ProcessBytes_m3AC0CD3050CB2B1D5436DDB9481856EB1721756E_RuntimeMethod_var)));
	}

IL_0039:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___inBytes0;
		int32_t L_8 = ___inOff1;
		int32_t L_9 = ___len2;
		Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F(L_7, L_8, L_9, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		int32_t L_10 = ___outOff4;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2ADD38D5A5D6AF5D786F780BFBD396FC5C0F2910)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0BBD25A55CCC50AE88CFB6B02D2F00C50C04F354)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_ProcessBytes_m3AC0CD3050CB2B1D5436DDB9481856EB1721756E_RuntimeMethod_var)));
	}

IL_005b:
	{
		ChaCha20Poly1305_CheckData_m9885193D7E29F2DCF8F1514417C4120810A6CE54(__this, NULL);
		V_0 = 0;
		int32_t L_12 = __this->___mState_16;
		V_2 = L_12;
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) == ((int32_t)3)))
		{
			goto IL_0105;
		}
	}
	{
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)7))))
		{
			goto IL_01cc;
		}
	}
	{
		V_1 = 0;
		goto IL_00f9;
	}

IL_007c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___mBuf_11;
		int32_t L_16 = __this->___mBufPos_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___inBytes0;
		int32_t L_18 = ___inOff1;
		int32_t L_19 = V_1;
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		uint8_t L_21 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)L_21);
		int32_t L_22 = __this->___mBufPos_17;
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		V_3 = L_23;
		__this->___mBufPos_17 = L_23;
		int32_t L_24 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___mBuf_11;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))
		{
			goto IL_00f5;
		}
	}
	{
		RuntimeObject* L_26 = __this->___mPoly1305_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___mBuf_11;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_26, L_27, 0, ((int32_t)64));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___mBuf_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___outBytes3;
		int32_t L_30 = ___outOff4;
		int32_t L_31 = V_0;
		ChaCha20Poly1305_ProcessData_mC0DBBDACF0B561BB81CCE3D5BF396B0B1164E6E3(__this, L_28, 0, ((int32_t)64), L_29, ((int32_t)il2cpp_codegen_add(L_30, L_31)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = __this->___mBuf_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___mBuf_11;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_32, ((int32_t)64), (RuntimeArray*)L_33, 0, ((int32_t)16), NULL);
		__this->___mBufPos_17 = ((int32_t)16);
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, ((int32_t)64)));
	}

IL_00f5:
	{
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00f9:
	{
		int32_t L_36 = V_1;
		int32_t L_37 = ___len2;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_007c;
		}
	}
	{
		goto IL_01d2;
	}

IL_0105:
	{
		int32_t L_38 = __this->___mBufPos_17;
		if (!L_38)
		{
			goto IL_01ab;
		}
	}
	{
		goto IL_0171;
	}

IL_0112:
	{
		int32_t L_39 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = __this->___mBuf_11;
		int32_t L_41 = __this->___mBufPos_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___inBytes0;
		int32_t L_43 = ___inOff1;
		int32_t L_44 = L_43;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45 = L_44;
		uint8_t L_46 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41), (uint8_t)L_46);
		int32_t L_47 = __this->___mBufPos_17;
		int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		V_3 = L_48;
		__this->___mBufPos_17 = L_48;
		int32_t L_49 = V_3;
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_0171;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = __this->___mBuf_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = ___outBytes3;
		int32_t L_52 = ___outOff4;
		ChaCha20Poly1305_ProcessData_mC0DBBDACF0B561BB81CCE3D5BF396B0B1164E6E3(__this, L_50, 0, ((int32_t)64), L_51, L_52, NULL);
		RuntimeObject* L_53 = __this->___mPoly1305_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = ___outBytes3;
		int32_t L_55 = ___outOff4;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_53, L_54, L_55, ((int32_t)64));
		__this->___mBufPos_17 = 0;
		V_0 = ((int32_t)64);
		goto IL_01ab;
	}

IL_0171:
	{
		int32_t L_56 = ___len2;
		if ((((int32_t)L_56) > ((int32_t)0)))
		{
			goto IL_0112;
		}
	}
	{
		goto IL_01ab;
	}

IL_0177:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ___inBytes0;
		int32_t L_58 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = ___outBytes3;
		int32_t L_60 = ___outOff4;
		int32_t L_61 = V_0;
		ChaCha20Poly1305_ProcessData_mC0DBBDACF0B561BB81CCE3D5BF396B0B1164E6E3(__this, L_57, L_58, ((int32_t)64), L_59, ((int32_t)il2cpp_codegen_add(L_60, L_61)), NULL);
		RuntimeObject* L_62 = __this->___mPoly1305_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ___outBytes3;
		int32_t L_64 = ___outOff4;
		int32_t L_65 = V_0;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_62, L_63, ((int32_t)il2cpp_codegen_add(L_64, L_65)), ((int32_t)64));
		int32_t L_66 = ___inOff1;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_66, ((int32_t)64)));
		int32_t L_67 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_67, ((int32_t)64)));
		int32_t L_68 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_68, ((int32_t)64)));
	}

IL_01ab:
	{
		int32_t L_69 = ___len2;
		if ((((int32_t)L_69) >= ((int32_t)((int32_t)64))))
		{
			goto IL_0177;
		}
	}
	{
		int32_t L_70 = ___len2;
		if ((((int32_t)L_70) <= ((int32_t)0)))
		{
			goto IL_01d2;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = ___inBytes0;
		int32_t L_72 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = __this->___mBuf_11;
		int32_t L_74 = ___len2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_71, L_72, (RuntimeArray*)L_73, 0, L_74, NULL);
		int32_t L_75 = ___len2;
		__this->___mBufPos_17 = L_75;
		goto IL_01d2;
	}

IL_01cc:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_76 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_76, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_76, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_ProcessBytes_m3AC0CD3050CB2B1D5436DDB9481856EB1721756E_RuntimeMethod_var)));
	}

IL_01d2:
	{
		int32_t L_77 = V_0;
		return L_77;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ChaCha20Poly1305_DoFinal_mEE81644C30F06393C501285B783AE7877032ECEC (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___outBytes0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral011526050B863D9BA2E645C6CC482792337B7E74)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_DoFinal_mEE81644C30F06393C501285B783AE7877032ECEC_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___outOff1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2ADD38D5A5D6AF5D786F780BFBD396FC5C0F2910)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0BBD25A55CCC50AE88CFB6B02D2F00C50C04F354)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_DoFinal_mEE81644C30F06393C501285B783AE7877032ECEC_RuntimeMethod_var)));
	}

IL_0022:
	{
		ChaCha20Poly1305_CheckData_m9885193D7E29F2DCF8F1514417C4120810A6CE54(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___mMac_12;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, ((int32_t)16), NULL);
		V_0 = 0;
		int32_t L_5 = __this->___mState_16;
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)3)))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)7))))
		{
			goto IL_0131;
		}
	}
	{
		int32_t L_8 = __this->___mBufPos_17;
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)16))))
		{
			goto IL_0062;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_9 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4901277BD17A5B2F9FD51DCD98D6CE81842202C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_DoFinal_mEE81644C30F06393C501285B783AE7877032ECEC_RuntimeMethod_var)));
	}

IL_0062:
	{
		int32_t L_10 = __this->___mBufPos_17;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_10, ((int32_t)16)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___outBytes0;
		int32_t L_12 = ___outOff1;
		int32_t L_13 = V_0;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_11, L_12, L_13, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_00a0;
		}
	}
	{
		RuntimeObject* L_15 = __this->___mPoly1305_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___mBuf_11;
		int32_t L_17 = V_0;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_15, L_16, 0, L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___mBuf_11;
		int32_t L_19 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___outBytes0;
		int32_t L_21 = ___outOff1;
		ChaCha20Poly1305_ProcessData_mC0DBBDACF0B561BB81CCE3D5BF396B0B1164E6E3(__this, L_18, 0, L_19, L_20, L_21, NULL);
	}

IL_00a0:
	{
		ChaCha20Poly1305_FinishData_m91A3853BE32C2498B2838B5782C22D3F9B8A721C(__this, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___mMac_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___mBuf_11;
		int32_t L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Arrays_ConstantTimeAreEqual_m8C56B308A82B46689833CFC23FB88ACA2C7B58CA(((int32_t)16), L_22, 0, L_23, L_24, NULL);
		if (L_25)
		{
			goto IL_0137;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_26 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral470EB6F1C03E003EA672DF0087B813915B41D827)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_DoFinal_mEE81644C30F06393C501285B783AE7877032ECEC_RuntimeMethod_var)));
	}

IL_00c9:
	{
		int32_t L_27 = __this->___mBufPos_17;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)16)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___outBytes0;
		int32_t L_29 = ___outOff1;
		int32_t L_30 = V_0;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_28, L_29, L_30, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		int32_t L_31 = __this->___mBufPos_17;
		if ((((int32_t)L_31) <= ((int32_t)0)))
		{
			goto IL_0111;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = __this->___mBuf_11;
		int32_t L_33 = __this->___mBufPos_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___outBytes0;
		int32_t L_35 = ___outOff1;
		ChaCha20Poly1305_ProcessData_mC0DBBDACF0B561BB81CCE3D5BF396B0B1164E6E3(__this, L_32, 0, L_33, L_34, L_35, NULL);
		RuntimeObject* L_36 = __this->___mPoly1305_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___outBytes0;
		int32_t L_38 = ___outOff1;
		int32_t L_39 = __this->___mBufPos_17;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_36, L_37, L_38, L_39);
	}

IL_0111:
	{
		ChaCha20Poly1305_FinishData_m91A3853BE32C2498B2838B5782C22D3F9B8A721C(__this, 4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = __this->___mMac_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___outBytes0;
		int32_t L_42 = ___outOff1;
		int32_t L_43 = __this->___mBufPos_17;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_40, 0, (RuntimeArray*)L_41, ((int32_t)il2cpp_codegen_add(L_42, L_43)), ((int32_t)16), NULL);
		goto IL_0137;
	}

IL_0131:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_44 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_44, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_DoFinal_mEE81644C30F06393C501285B783AE7877032ECEC_RuntimeMethod_var)));
	}

IL_0137:
	{
		ChaCha20Poly1305_Reset_m59C2B3FF6C3ADC6B884CC9FAB0A2849E95914146(__this, (bool)0, (bool)1, NULL);
		int32_t L_45 = V_0;
		return L_45;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::GetMac()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ChaCha20Poly1305_GetMac_m4A981BAF33F6AA5B371433CA5E7E4C088EE91604 (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mMac_12;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Arrays_Clone_mC73CD122DC37EDEB733EC84DB0137D8D7DD5B87F(L_0, NULL);
		return L_1;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_Reset_mDEC1ED9704306062C05B365339D2C022D0B4219A (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, const RuntimeMethod* method) 
{
	{
		ChaCha20Poly1305_Reset_m59C2B3FF6C3ADC6B884CC9FAB0A2849E95914146(__this, (bool)1, (bool)1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::CheckAad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_CheckAad_m7A33A76717B7B5BC1176D6A1D0A077ACA59E27BA (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___mState_16;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0031;
			}
			case 1:
			{
				goto IL_004a;
			}
			case 2:
			{
				goto IL_0044;
			}
			case 3:
			{
				goto IL_0039;
			}
			case 4:
			{
				goto IL_0029;
			}
			case 5:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_0044;
	}

IL_0029:
	{
		__this->___mState_16 = 6;
		return;
	}

IL_0031:
	{
		__this->___mState_16 = 2;
		return;
	}

IL_0039:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8DE60186ED5AF46F40E21D35A05C1DFAEE6A7F2D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_CheckAad_m7A33A76717B7B5BC1176D6A1D0A077ACA59E27BA_RuntimeMethod_var)));
	}

IL_0044:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_CheckAad_m7A33A76717B7B5BC1176D6A1D0A077ACA59E27BA_RuntimeMethod_var)));
	}

IL_004a:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::CheckData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_CheckData_m9885193D7E29F2DCF8F1514417C4120810A6CE54 (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___mState_16;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0035;
			}
			case 1:
			{
				goto IL_0035;
			}
			case 2:
			{
				goto IL_004e;
			}
			case 3:
			{
				goto IL_003d;
			}
			case 4:
			{
				goto IL_002d;
			}
			case 5:
			{
				goto IL_002d;
			}
			case 6:
			{
				goto IL_004e;
			}
		}
	}
	{
		goto IL_0048;
	}

IL_002d:
	{
		ChaCha20Poly1305_FinishAad_m68A1A4EB6142D784FC721EAB15585D91D6384891(__this, 7, NULL);
		return;
	}

IL_0035:
	{
		ChaCha20Poly1305_FinishAad_m68A1A4EB6142D784FC721EAB15585D91D6384891(__this, 3, NULL);
		return;
	}

IL_003d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8DE60186ED5AF46F40E21D35A05C1DFAEE6A7F2D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_CheckData_m9885193D7E29F2DCF8F1514417C4120810A6CE54_RuntimeMethod_var)));
	}

IL_0048:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_CheckData_m9885193D7E29F2DCF8F1514417C4120810A6CE54_RuntimeMethod_var)));
	}

IL_004e:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::FinishAad(Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_FinishAad_m68A1A4EB6142D784FC721EAB15585D91D6384891 (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, int32_t ___nextState0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___mAadCount_14;
		ChaCha20Poly1305_PadMac_m773B55E56B0A4DA812675CCB621A63BCE43AAEBF(__this, L_0, NULL);
		int32_t L_1 = ___nextState0;
		__this->___mState_16 = L_1;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::FinishData(Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305/State)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_FinishData_m91A3853BE32C2498B2838B5782C22D3F9B8A721C (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, int32_t ___nextState0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		uint64_t L_0 = __this->___mDataCount_15;
		ChaCha20Poly1305_PadMac_m773B55E56B0A4DA812675CCB621A63BCE43AAEBF(__this, L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_1;
		uint64_t L_2 = __this->___mAadCount_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		Pack_UInt64_To_LE_m636E90C1902B2A82549A884FBC29A86CEB2B73F2(L_2, L_3, 0, NULL);
		uint64_t L_4 = __this->___mDataCount_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		Pack_UInt64_To_LE_m636E90C1902B2A82549A884FBC29A86CEB2B73F2(L_4, L_5, 8, NULL);
		RuntimeObject* L_6 = __this->___mPoly1305_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_6, L_7, 0, ((int32_t)16));
		RuntimeObject* L_8 = __this->___mPoly1305_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___mMac_12;
		int32_t L_10;
		L_10 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IMac::DoFinal(System.Byte[],System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_8, L_9, 0);
		int32_t L_11 = ___nextState0;
		__this->___mState_16 = L_11;
		return;
	}
}
// System.UInt64 Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::IncrementCount(System.UInt64,System.UInt32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ChaCha20Poly1305_IncrementCount_m97F87C0DF61C0CD539C8294C9CC9F0195D837AD7 (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, uint64_t ___count0, uint32_t ___increment1, uint64_t ___limit2, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___count0;
		uint64_t L_1 = ___limit2;
		uint32_t L_2 = ___increment1;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_1, ((int64_t)(uint64_t)L_2)))))))
		{
			goto IL_0012;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5C72C5A69B309415C82E1CAE445D5ABD75CAB848)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_IncrementCount_m97F87C0DF61C0CD539C8294C9CC9F0195D837AD7_RuntimeMethod_var)));
	}

IL_0012:
	{
		uint64_t L_4 = ___count0;
		uint32_t L_5 = ___increment1;
		return ((int64_t)il2cpp_codegen_add((int64_t)L_4, ((int64_t)(uint64_t)L_5)));
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::InitMac()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_InitMac_mB1FE3DC33B5BD6670D6397DA7EFA4EE3A329A2E3 (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002f:
			{// begin finally (depth: 1)
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
				Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_1, 0, ((int32_t)64), NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			ChaCha7539Engine_tD1D7125C6C180460972E80EEB9A49E9B8443763E* L_2 = __this->___mChacha20_7;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
			VirtualActionInvoker5< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(14 /* System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_2, L_3, 0, ((int32_t)64), L_4, 0);
			RuntimeObject* L_5 = __this->___mPoly1305_8;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
			KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_7 = (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)il2cpp_codegen_object_new(KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
			KeyParameter__ctor_mF6FAECE6A51D41CEBFE899223AFC9924B6541D8E(L_7, L_6, 0, ((int32_t)32), NULL);
			InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Org.BouncyCastle.Crypto.IMac::Init(Org.BouncyCastle.Crypto.ICipherParameters) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_5, L_7);
			goto IL_0039;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::PadMac(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_PadMac_m773B55E56B0A4DA812675CCB621A63BCE43AAEBF (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, uint64_t ___count0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		uint64_t L_0 = ___count0;
		V_0 = ((int32_t)(((int32_t)L_0)&((int32_t)15)));
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_2 = __this->___mPoly1305_8;
		il2cpp_codegen_runtime_class_init_inline(ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122_StaticFields*)il2cpp_codegen_static_fields_for(ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122_il2cpp_TypeInfo_var))->___Zeroes_6;
		int32_t L_4 = V_0;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_2, L_3, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)16), L_4)));
	}

IL_001e:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::ProcessData(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_ProcessData_mC0DBBDACF0B561BB81CCE3D5BF396B0B1164E6E3 (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___inLen2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes3, int32_t ___outOff4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___outBytes3;
		int32_t L_1 = ___outOff4;
		int32_t L_2 = ___inLen2;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_0, L_1, L_2, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		ChaCha7539Engine_tD1D7125C6C180460972E80EEB9A49E9B8443763E* L_3 = __this->___mChacha20_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___inBytes0;
		int32_t L_5 = ___inOff1;
		int32_t L_6 = ___inLen2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___outBytes3;
		int32_t L_8 = ___outOff4;
		VirtualActionInvoker5< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(14 /* System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_3, L_4, L_5, L_6, L_7, L_8);
		uint64_t L_9 = __this->___mDataCount_15;
		int32_t L_10 = ___inLen2;
		uint64_t L_11;
		L_11 = ChaCha20Poly1305_IncrementCount_m97F87C0DF61C0CD539C8294C9CC9F0195D837AD7(__this, L_9, L_10, ((int64_t)274877906880LL), NULL);
		__this->___mDataCount_15 = L_11;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::Reset(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305_Reset_m59C2B3FF6C3ADC6B884CC9FAB0A2849E95914146 (ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122* __this, bool ___clearMac0, bool ___resetCipher1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mBuf_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___mBuf_11;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		bool L_2 = ___clearMac0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___mMac_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___mMac_12;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
	}

IL_002b:
	{
		__this->___mAadCount_14 = ((int64_t)0);
		__this->___mDataCount_15 = ((int64_t)0);
		__this->___mBufPos_17 = 0;
		int32_t L_5 = __this->___mState_16;
		V_0 = L_5;
		int32_t L_6 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 1)))
		{
			case 0:
			{
				goto IL_008a;
			}
			case 1:
			{
				goto IL_007c;
			}
			case 2:
			{
				goto IL_007c;
			}
			case 3:
			{
				goto IL_007c;
			}
			case 4:
			{
				goto IL_008a;
			}
			case 5:
			{
				goto IL_0073;
			}
			case 6:
			{
				goto IL_0073;
			}
			case 7:
			{
				goto IL_0073;
			}
		}
	}
	{
		goto IL_0084;
	}

IL_0073:
	{
		__this->___mState_16 = 5;
		goto IL_008a;
	}

IL_007c:
	{
		__this->___mState_16 = 4;
		return;
	}

IL_0084:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ChaCha20Poly1305_Reset_m59C2B3FF6C3ADC6B884CC9FAB0A2849E95914146_RuntimeMethod_var)));
	}

IL_008a:
	{
		bool L_8 = ___resetCipher1;
		if (!L_8)
		{
			goto IL_0098;
		}
	}
	{
		ChaCha7539Engine_tD1D7125C6C180460972E80EEB9A49E9B8443763E* L_9 = __this->___mChacha20_7;
		VirtualActionInvoker0::Invoke(15 /* System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::Reset() */, L_9);
	}

IL_0098:
	{
		ChaCha20Poly1305_InitMac_mB1FE3DC33B5BD6670D6397DA7EFA4EE3A329A2E3(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___mInitialAad_13;
		if (!L_10)
		{
			goto IL_00bb;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___mInitialAad_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___mInitialAad_13;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(20 /* System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::ProcessAadBytes(System.Byte[],System.Int32,System.Int32) */, __this, L_11, 0, ((int32_t)(((RuntimeArray*)L_12)->max_length)));
	}

IL_00bb:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.ChaCha20Poly1305::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChaCha20Poly1305__cctor_m2653DBE8EC3F47277FB3F3D20C180FE127901523 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		((ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122_StaticFields*)il2cpp_codegen_static_fields_for(ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122_il2cpp_TypeInfo_var))->___Zeroes_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122_StaticFields*)il2cpp_codegen_static_fields_for(ChaCha20Poly1305_t26D3FC08E1A90A96065E786166FD09649FC99122_il2cpp_TypeInfo_var))->___Zeroes_6), (void*)L_0);
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
// System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::ProcessByte(System.Byte,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferedCipherBase_ProcessByte_mC7903564376D6CCFD612131BA05A53AFFEEBCEE6 (BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5* __this, uint8_t ___input0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output1, int32_t ___outOff2, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		uint8_t L_0 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uint8_t >::Invoke(27 /* System.Byte[] Org.BouncyCastle.Crypto.BufferedCipherBase::ProcessByte(System.Byte) */, __this, L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		if (L_2)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		int32_t L_3 = ___outOff2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___output1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length))))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0022;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_6 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BufferedCipherBase_ProcessByte_mC7903564376D6CCFD612131BA05A53AFFEEBCEE6_RuntimeMethod_var)));
	}

IL_0022:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___output1;
		int32_t L_9 = ___outOff2;
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_7, (RuntimeArray*)L_8, L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		return ((int32_t)(((RuntimeArray*)L_10)->max_length));
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.BufferedCipherBase::ProcessBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BufferedCipherBase_ProcessBytes_mE6DAE5CC04E667D9DEAEA09EAE5EBEDB60881BD1 (BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Byte[] Org.BouncyCastle.Crypto.BufferedCipherBase::ProcessBytes(System.Byte[],System.Int32,System.Int32) */, __this, L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)));
		return L_2;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::ProcessBytes(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferedCipherBase_ProcessBytes_m3403D6515C5C89286D9E30CC5A137C38A8975A56 (BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output1, int32_t ___outOff2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___output1;
		int32_t L_3 = ___outOff2;
		int32_t L_4;
		L_4 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(32 /* System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, __this, L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), L_2, L_3);
		return L_4;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferedCipherBase_ProcessBytes_mCA03F92C070B2B4DE4205F326C361ACC69A4EE79 (BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___length2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOff4, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Byte[] Org.BouncyCastle.Crypto.BufferedCipherBase::ProcessBytes(System.Byte[],System.Int32,System.Int32) */, __this, L_0, L_1, L_2);
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		if (L_4)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		int32_t L_5 = ___outOff4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___output3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length))))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0026;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_8 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BufferedCipherBase_ProcessBytes_mCA03F92C070B2B4DE4205F326C361ACC69A4EE79_RuntimeMethod_var)));
	}

IL_0026:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___output3;
		int32_t L_11 = ___outOff4;
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_9, (RuntimeArray*)L_10, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		return ((int32_t)(((RuntimeArray*)L_12)->max_length));
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.BufferedCipherBase::DoFinal(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BufferedCipherBase_DoFinal_m8F89BCE6E48B6AE77B15DCDC2639A095A5A78197 (BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Byte[] Org.BouncyCastle.Crypto.BufferedCipherBase::DoFinal(System.Byte[],System.Int32,System.Int32) */, __this, L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)));
		return L_2;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferedCipherBase_DoFinal_mBD5FA53571BBEC27FEFB866EAB17287FA2C5DB5B (BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(33 /* System.Byte[] Org.BouncyCastle.Crypto.BufferedCipherBase::DoFinal() */, __this);
		V_0 = L_0;
		int32_t L_1 = ___outOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___output0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length))))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_4 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BufferedCipherBase_DoFinal_mBD5FA53571BBEC27FEFB866EAB17287FA2C5DB5B_RuntimeMethod_var)));
	}

IL_001c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___output0;
		int32_t L_7 = ___outOff1;
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_5, (RuntimeArray*)L_6, L_7, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		return ((int32_t)(((RuntimeArray*)L_8)->max_length));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::DoFinal(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferedCipherBase_DoFinal_mCF31E4C942727E70D08974F69D8F0C803515705A (BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output1, int32_t ___outOff2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___output1;
		int32_t L_3 = ___outOff2;
		int32_t L_4;
		L_4 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(38 /* System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::DoFinal(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, __this, L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), L_2, L_3);
		return L_4;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::DoFinal(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferedCipherBase_DoFinal_mE17B88BECBEC05F7C753627183004DA62E308CD3 (BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___length2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOff4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___output3;
		int32_t L_4 = ___outOff4;
		int32_t L_5;
		L_5 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(32 /* System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, __this, L_0, L_1, L_2, L_3, L_4);
		V_0 = L_5;
		int32_t L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___output3;
		int32_t L_8 = ___outOff4;
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = VirtualFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(36 /* System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::DoFinal(System.Byte[],System.Int32) */, __this, L_7, ((int32_t)il2cpp_codegen_add(L_8, L_9)));
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, L_10));
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Void Org.BouncyCastle.Crypto.BufferedCipherBase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedCipherBase__cctor_m6F30C86DA40DA8AB86C3168D7E00351764B428A7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		((BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5_StaticFields*)il2cpp_codegen_static_fields_for(BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5_il2cpp_TypeInfo_var))->___EmptyBuffer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5_StaticFields*)il2cpp_codegen_static_fields_for(BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5_il2cpp_TypeInfo_var))->___EmptyBuffer_0), (void*)L_0);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.BufferedCipherBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedCipherBase__ctor_m9618532D4A14E7984B6B5360E571CAE9DA6145CB (BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5* __this, const RuntimeMethod* method) 
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
// System.Void Org.BouncyCastle.Crypto.BufferedBlockCipher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedBlockCipher__ctor_mBD0759C890C26AEF2193DF40EDC0D45008CB07AD (BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5_il2cpp_TypeInfo_var);
		BufferedCipherBase__ctor_m9618532D4A14E7984B6B5360E571CAE9DA6145CB(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.BufferedBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedBlockCipher__ctor_m17987FB767EC1491609D7488AE2D2F7710FC930C (BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7* __this, RuntimeObject* ___cipher0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5_il2cpp_TypeInfo_var);
		BufferedCipherBase__ctor_m9618532D4A14E7984B6B5360E571CAE9DA6145CB(__this, NULL);
		RuntimeObject* L_0 = ___cipher0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC3A5F3D5BB3E7D48E89B51BFD05B4FBE1D09846)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BufferedBlockCipher__ctor_m17987FB767EC1491609D7488AE2D2F7710FC930C_RuntimeMethod_var)));
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___cipher0;
		__this->___cipher_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_4), (void*)L_2);
		RuntimeObject* L_3 = ___cipher0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___buf_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buf_1), (void*)L_5);
		__this->___bufOff_2 = 0;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.BufferedBlockCipher::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BufferedBlockCipher_get_AlgorithmName_m0D81829987404C030589E07E9151EC9DCB6CA227 (BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_4;
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Org.BouncyCastle.Crypto.BufferedBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedBlockCipher_Init_m3C4B21D312DB3AC409120617000267EB22B26582 (BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* V_0 = NULL;
	{
		bool L_0 = ___forEncryption0;
		__this->___forEncryption_3 = L_0;
		RuntimeObject* L_1 = ___parameters1;
		V_0 = ((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)IsInstClass((RuntimeObject*)L_1, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var));
		ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* L_3 = V_0;
		RuntimeObject* L_4;
		L_4 = ParametersWithRandom_get_Parameters_mFED49C45204261ACF08DC4617FC59E9025C5DA8E_inline(L_3, NULL);
		___parameters1 = L_4;
	}

IL_0019:
	{
		VirtualActionInvoker0::Invoke(39 /* System.Void Org.BouncyCastle.Crypto.BufferedCipherBase::Reset() */, __this);
		RuntimeObject* L_5 = __this->___cipher_4;
		bool L_6 = ___forEncryption0;
		RuntimeObject* L_7 = ___parameters1;
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.BufferedBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferedBlockCipher_GetBlockSize_mBD1327276C3C962ABF9D1965B3FF659905E36BDC (BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_4;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.BufferedBlockCipher::GetUpdateOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferedBlockCipher_GetUpdateOutputSize_m104226ACB69B79602DCDC1053A5265FC4FBFD300 (BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7* __this, int32_t ___length0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___length0;
		int32_t L_1 = __this->___bufOff_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___buf_1;
		V_1 = ((int32_t)(L_2%((int32_t)(((RuntimeArray*)L_3)->max_length))));
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		return ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.BufferedBlockCipher::GetOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferedBlockCipher_GetOutputSize_m1B67347B2AA6F62ABBE8E9125CE4224183BC7505 (BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7* __this, int32_t ___length0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___length0;
		int32_t L_1 = __this->___bufOff_2;
		return ((int32_t)il2cpp_codegen_add(L_0, L_1));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.BufferedBlockCipher::ProcessByte(System.Byte,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferedBlockCipher_ProcessByte_mA0A6E1F9A0737EFD7A7CBB56273EFE48A5E28740 (BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7* __this, uint8_t ___input0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output1, int32_t ___outOff2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___buf_1;
		int32_t L_1 = __this->___bufOff_2;
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->___bufOff_2 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		uint8_t L_4 = ___input0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		int32_t L_5 = __this->___bufOff_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___buf_1;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_7 = ___outOff2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___buf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___output1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_7, ((int32_t)(((RuntimeArray*)L_8)->max_length))))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_10 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BufferedBlockCipher_ProcessByte_mA0A6E1F9A0737EFD7A7CBB56273EFE48A5E28740_RuntimeMethod_var)));
	}

IL_0043:
	{
		__this->___bufOff_2 = 0;
		RuntimeObject* L_11 = __this->___cipher_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___buf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___output1;
		int32_t L_14 = ___outOff2;
		int32_t L_15;
		L_15 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_11, L_12, 0, L_13, L_14);
		return L_15;
	}

IL_005f:
	{
		return 0;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.BufferedBlockCipher::ProcessByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BufferedBlockCipher_ProcessByte_m54E54DAB55077697EFB9DC19A888EC4AADA34E22 (BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B3_0 = NULL;
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(26 /* System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::GetUpdateOutputSize(System.Int32) */, __this, 1);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		G_B3_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(NULL));
		goto IL_0015;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		G_B3_0 = L_3;
	}

IL_0015:
	{
		V_1 = G_B3_0;
		uint8_t L_4 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		int32_t L_6;
		L_6 = VirtualFuncInvoker3< int32_t, uint8_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(28 /* System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::ProcessByte(System.Byte,System.Byte[],System.Int32) */, __this, L_4, L_5, 0);
		V_2 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_10 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_3 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_3;
		int32_t L_14 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_12, 0, (RuntimeArray*)L_13, 0, L_14, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_3;
		V_1 = L_15;
	}

IL_003b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		return L_16;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.BufferedBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BufferedBlockCipher_ProcessBytes_mF347069271FA470D5C703CB3299BAF944B56F779 (BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B7_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BufferedBlockCipher_ProcessBytes_mF347069271FA470D5C703CB3299BAF944B56F779_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___length2;
		if ((((int32_t)L_2) >= ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_0014:
	{
		int32_t L_3 = ___length2;
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(26 /* System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::GetUpdateOutputSize(System.Int32) */, __this, L_3);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		G_B7_0 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(NULL));
		goto IL_0029;
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		G_B7_0 = L_7;
	}

IL_0029:
	{
		V_1 = G_B7_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___input0;
		int32_t L_9 = ___inOff1;
		int32_t L_10 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		int32_t L_12;
		L_12 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(32 /* System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, __this, L_8, L_9, L_10, L_11, 0);
		V_2 = L_12;
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_16 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_16);
		V_3 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_3;
		int32_t L_20 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_18, 0, (RuntimeArray*)L_19, 0, L_20, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_3;
		V_1 = L_21;
	}

IL_0051:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
		return L_22;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.BufferedBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferedBlockCipher_ProcessBytes_m38D8C198A66BE63518ADF90E558B0B30266CF451 (BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___length2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOff4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___length2;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___length2;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8E97A2EC91B9BC5BE9457E4364E5C15F95B7FDC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BufferedBlockCipher_ProcessBytes_m38D8C198A66BE63518ADF90E558B0B30266CF451_RuntimeMethod_var)));
	}

IL_0013:
	{
		return 0;
	}

IL_0015:
	{
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::GetBlockSize() */, __this);
		V_0 = L_3;
		int32_t L_4 = ___length2;
		int32_t L_5;
		L_5 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(26 /* System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::GetUpdateOutputSize(System.Int32) */, __this, L_4);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___output3;
		int32_t L_8 = ___outOff4;
		int32_t L_9 = V_1;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_7, L_8, L_9, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
	}

IL_0037:
	{
		V_2 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___buf_1;
		int32_t L_11 = __this->___bufOff_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_10)->max_length)), L_11));
		int32_t L_12 = ___length2;
		int32_t L_13 = V_3;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_00b8;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___input0;
		int32_t L_15 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___buf_1;
		int32_t L_17 = __this->___bufOff_2;
		int32_t L_18 = V_3;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_14, L_15, (RuntimeArray*)L_16, L_17, L_18, NULL);
		int32_t L_19 = V_2;
		RuntimeObject* L_20 = __this->___cipher_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___buf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___output3;
		int32_t L_23 = ___outOff4;
		int32_t L_24;
		L_24 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_20, L_21, 0, L_22, L_23);
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, L_24));
		__this->___bufOff_2 = 0;
		int32_t L_25 = ___length2;
		int32_t L_26 = V_3;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_25, L_26));
		int32_t L_27 = ___inOff1;
		int32_t L_28 = V_3;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_27, L_28));
		goto IL_00ad;
	}

IL_008d:
	{
		int32_t L_29 = V_2;
		RuntimeObject* L_30 = __this->___cipher_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___input0;
		int32_t L_32 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___output3;
		int32_t L_34 = ___outOff4;
		int32_t L_35 = V_2;
		int32_t L_36;
		L_36 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_30, L_31, L_32, L_33, ((int32_t)il2cpp_codegen_add(L_34, L_35)));
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, L_36));
		int32_t L_37 = ___length2;
		int32_t L_38 = V_0;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_37, L_38));
		int32_t L_39 = ___inOff1;
		int32_t L_40 = V_0;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_39, L_40));
	}

IL_00ad:
	{
		int32_t L_41 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = __this->___buf_1;
		if ((((int32_t)L_41) > ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_008d;
		}
	}

IL_00b8:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___input0;
		int32_t L_44 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = __this->___buf_1;
		int32_t L_46 = __this->___bufOff_2;
		int32_t L_47 = ___length2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_43, L_44, (RuntimeArray*)L_45, L_46, L_47, NULL);
		int32_t L_48 = __this->___bufOff_2;
		int32_t L_49 = ___length2;
		__this->___bufOff_2 = ((int32_t)il2cpp_codegen_add(L_48, L_49));
		int32_t L_50 = __this->___bufOff_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->___buf_1;
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)(((RuntimeArray*)L_51)->max_length))))))
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_52 = V_2;
		RuntimeObject* L_53 = __this->___cipher_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = __this->___buf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = ___output3;
		int32_t L_56 = ___outOff4;
		int32_t L_57 = V_2;
		int32_t L_58;
		L_58 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_53, L_54, 0, L_55, ((int32_t)il2cpp_codegen_add(L_56, L_57)));
		V_2 = ((int32_t)il2cpp_codegen_add(L_52, L_58));
		__this->___bufOff_2 = 0;
	}

IL_010c:
	{
		int32_t L_59 = V_2;
		return L_59;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.BufferedBlockCipher::DoFinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BufferedBlockCipher_DoFinal_m0FC30F0BB87793BD1B7C1F94C6AC8CA636A0167D (BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ((BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5_StaticFields*)il2cpp_codegen_static_fields_for(BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5_il2cpp_TypeInfo_var))->___EmptyBuffer_0;
		V_0 = L_0;
		int32_t L_1;
		L_1 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(25 /* System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::GetOutputSize(System.Int32) */, __this, 0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_0 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6;
		L_6 = VirtualFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(36 /* System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::DoFinal(System.Byte[],System.Int32) */, __this, L_5, 0);
		V_2 = L_6;
		int32_t L_7 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		if ((((int32_t)L_7) >= ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_9 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_3 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_3;
		int32_t L_13 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_11, 0, (RuntimeArray*)L_12, 0, L_13, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_3;
		V_0 = L_14;
		goto IL_0043;
	}

IL_003d:
	{
		VirtualActionInvoker0::Invoke(39 /* System.Void Org.BouncyCastle.Crypto.BufferedCipherBase::Reset() */, __this);
	}

IL_0043:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		return L_15;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.BufferedBlockCipher::DoFinal(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BufferedBlockCipher_DoFinal_mDC35A0839C09CB02969B63934D0D8BB47C0EB0CD (BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___inLen2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t G_B6_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BufferedBlockCipher_DoFinal_mDC35A0839C09CB02969B63934D0D8BB47C0EB0CD_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___inLen2;
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(25 /* System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::GetOutputSize(System.Int32) */, __this, L_2);
		V_0 = L_3;
		il2cpp_codegen_runtime_class_init_inline(BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5_StaticFields*)il2cpp_codegen_static_fields_for(BufferedCipherBase_t3215EA573767D4DCC73E4ABC822C1601755BB2B5_il2cpp_TypeInfo_var))->___EmptyBuffer_0;
		V_1 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		int32_t L_8 = ___inLen2;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_0039;
	}

IL_002e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___input0;
		int32_t L_10 = ___inOff1;
		int32_t L_11 = ___inLen2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		int32_t L_13;
		L_13 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(32 /* System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, __this, L_9, L_10, L_11, L_12, 0);
		G_B6_0 = L_13;
	}

IL_0039:
	{
		V_2 = G_B6_0;
		int32_t L_14 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		int32_t L_16 = V_2;
		int32_t L_17;
		L_17 = VirtualFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(36 /* System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::DoFinal(System.Byte[],System.Int32) */, __this, L_15, L_16);
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, L_17));
		int32_t L_18 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		if ((((int32_t)L_18) >= ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_20 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_3 = L_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_3;
		int32_t L_24 = V_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, 0, L_24, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_3;
		V_1 = L_25;
		goto IL_0066;
	}

IL_0060:
	{
		VirtualActionInvoker0::Invoke(39 /* System.Void Org.BouncyCastle.Crypto.BufferedCipherBase::Reset() */, __this);
	}

IL_0066:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_1;
		return L_26;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.BufferedBlockCipher::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BufferedBlockCipher_DoFinal_m2C4E5DE0AE4E9B79C40805904B643A55A9514D53 (BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45A76D5C1510A30E3950399F4AED843F92E849A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CA65E1F50E7ADFC2CF8ECEE79ABAC4AB9046B12);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0069:
			{// begin finally (depth: 1)
				VirtualActionInvoker0::Invoke(39 /* System.Void Org.BouncyCastle.Crypto.BufferedCipherBase::Reset() */, __this);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___bufOff_2;
				if (!L_0)
				{
					goto IL_0060_1;
				}
			}
			{
				RuntimeObject* L_1 = __this->___cipher_4;
				bool L_2;
				L_2 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean Org.BouncyCastle.Crypto.IBlockCipher::get_IsPartialBlockOkay() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
				Check_DataLength_m2070FC923CDEE7DFBBC7A1A62025B27990673FC5((bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), _stringLiteral6CA65E1F50E7ADFC2CF8ECEE79ABAC4AB9046B12, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___output0;
				int32_t L_4 = ___outOff1;
				int32_t L_5 = __this->___bufOff_2;
				Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_3, L_4, L_5, _stringLiteral45A76D5C1510A30E3950399F4AED843F92E849A6, NULL);
				RuntimeObject* L_6 = __this->___cipher_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___buf_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___buf_1;
				int32_t L_9;
				L_9 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_6, L_7, 0, L_8, 0);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___buf_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___output0;
				int32_t L_12 = ___outOff1;
				int32_t L_13 = __this->___bufOff_2;
				Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_10, 0, (RuntimeArray*)L_11, L_12, L_13, NULL);
			}

IL_0060_1:
			{
				int32_t L_14 = __this->___bufOff_2;
				V_0 = L_14;
				goto IL_0070;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Void Org.BouncyCastle.Crypto.BufferedBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferedBlockCipher_Reset_mF3A3054AE75D6EFCDC344BBE5DC84704C150DBC7 (BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___buf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___buf_1;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		__this->___bufOff_2 = 0;
		RuntimeObject* L_2 = __this->___cipher_4;
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_2);
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
// System.Void Org.BouncyCastle.Crypto.Modes.CtsBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CtsBlockCipher__ctor_mB7BBAC92E743EE55B5888E6BDE7F31829043BB4F (CtsBlockCipher_tD61E222E0CD88BC601E0F7A4073205A1A795A5D7* __this, RuntimeObject* ___cipher0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CfbBlockCipher_tCEBBD2ADC3163E5194A663130E8AA543B1C58C12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OfbBlockCipher_t72A403CDCDA517916A318565473D48F651DC4A4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BufferedBlockCipher__ctor_mBD0759C890C26AEF2193DF40EDC0D45008CB07AD(__this, NULL);
		RuntimeObject* L_0 = ___cipher0;
		if (((OfbBlockCipher_t72A403CDCDA517916A318565473D48F651DC4A4A*)IsInstClass((RuntimeObject*)L_0, OfbBlockCipher_t72A403CDCDA517916A318565473D48F651DC4A4A_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1 = ___cipher0;
		if (!((CfbBlockCipher_tCEBBD2ADC3163E5194A663130E8AA543B1C58C12*)IsInstClass((RuntimeObject*)L_1, CfbBlockCipher_tCEBBD2ADC3163E5194A663130E8AA543B1C58C12_il2cpp_TypeInfo_var)))
		{
			goto IL_0021;
		}
	}

IL_0016:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF84375B917AA7A46F68E6773C61E5853C02EAF4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CtsBlockCipher__ctor_mB7BBAC92E743EE55B5888E6BDE7F31829043BB4F_RuntimeMethod_var)));
	}

IL_0021:
	{
		RuntimeObject* L_3 = ___cipher0;
		((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___cipher_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___cipher_4), (void*)L_3);
		RuntimeObject* L_4 = ___cipher0;
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_4);
		__this->___blockSize_5 = L_5;
		int32_t L_6 = __this->___blockSize_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_6, 2)));
		((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1), (void*)L_7);
		((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2 = 0;
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CtsBlockCipher::GetUpdateOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CtsBlockCipher_GetUpdateOutputSize_m3A24EBBD46A08D74A584F17447B78C8C40C8A2E9 (CtsBlockCipher_tD61E222E0CD88BC601E0F7A4073205A1A795A5D7* __this, int32_t ___length0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___length0;
		int32_t L_1 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		V_1 = ((int32_t)(L_2%((int32_t)(((RuntimeArray*)L_3)->max_length))));
		int32_t L_4 = V_1;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		return ((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)(((RuntimeArray*)L_6)->max_length))));
	}

IL_0022:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		return ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CtsBlockCipher::GetOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CtsBlockCipher_GetOutputSize_m21F92403F0F593CC0202D66C153AC0CFC32CC4E5 (CtsBlockCipher_tD61E222E0CD88BC601E0F7A4073205A1A795A5D7* __this, int32_t ___length0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___length0;
		int32_t L_1 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2;
		return ((int32_t)il2cpp_codegen_add(L_0, L_1));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CtsBlockCipher::ProcessByte(System.Byte,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CtsBlockCipher_ProcessByte_m404EAC89B3D95286048C7DDC755FFDFA8998ADD4 (CtsBlockCipher_tD61E222E0CD88BC601E0F7A4073205A1A795A5D7* __this, uint8_t ___input0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output1, int32_t ___outOff2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		RuntimeObject* L_2 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___cipher_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output1;
		int32_t L_5 = ___outOff2;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_2, L_3, 0, L_4, L_5);
		V_0 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		int32_t L_8 = __this->___blockSize_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		int32_t L_10 = __this->___blockSize_5;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_7, L_8, (RuntimeArray*)L_9, 0, L_10, NULL);
		int32_t L_11 = __this->___blockSize_5;
		((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2 = L_11;
	}

IL_0051:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		int32_t L_13 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2;
		int32_t L_14 = L_13;
		V_1 = L_14;
		((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_1;
		uint8_t L_16 = ___input0;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (uint8_t)L_16);
		int32_t L_17 = V_0;
		return L_17;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CtsBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CtsBlockCipher_ProcessBytes_mB85CA1CBC0EA0F326D8A9F86FBFED21BAF760578 (CtsBlockCipher_tD61E222E0CD88BC601E0F7A4073205A1A795A5D7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___length2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOff4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___length2;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3DBF817624FAAA546A668A8286A4BB7A28D64BE5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CtsBlockCipher_ProcessBytes_mB85CA1CBC0EA0F326D8A9F86FBFED21BAF760578_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(24 /* System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::GetBlockSize() */, __this);
		V_0 = L_2;
		int32_t L_3 = ___length2;
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(26 /* System.Int32 Org.BouncyCastle.Crypto.BufferedCipherBase::GetUpdateOutputSize(System.Int32) */, __this, L_3);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_6 = ___outOff4;
		int32_t L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___output3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0037;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_9 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CtsBlockCipher_ProcessBytes_mB85CA1CBC0EA0F326D8A9F86FBFED21BAF760578_RuntimeMethod_var)));
	}

IL_0037:
	{
		V_2 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		int32_t L_11 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_10)->max_length)), L_11));
		int32_t L_12 = ___length2;
		int32_t L_13 = V_3;
		if ((((int32_t)L_12) <= ((int32_t)L_13)))
		{
			goto IL_00f5;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___input0;
		int32_t L_15 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		int32_t L_17 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2;
		int32_t L_18 = V_3;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_14, L_15, (RuntimeArray*)L_16, L_17, L_18, NULL);
		int32_t L_19 = V_2;
		RuntimeObject* L_20 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___cipher_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___output3;
		int32_t L_23 = ___outOff4;
		int32_t L_24;
		L_24 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_20, L_21, 0, L_22, L_23);
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, L_24));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		int32_t L_26 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		int32_t L_28 = V_0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_25, L_26, (RuntimeArray*)L_27, 0, L_28, NULL);
		int32_t L_29 = V_0;
		((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2 = L_29;
		int32_t L_30 = ___length2;
		int32_t L_31 = V_3;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_30, L_31));
		int32_t L_32 = ___inOff1;
		int32_t L_33 = V_3;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_32, L_33));
		goto IL_00f1;
	}

IL_00a4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___input0;
		int32_t L_35 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		int32_t L_37 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2;
		int32_t L_38 = V_0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_34, L_35, (RuntimeArray*)L_36, L_37, L_38, NULL);
		int32_t L_39 = V_2;
		RuntimeObject* L_40 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___cipher_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___output3;
		int32_t L_43 = ___outOff4;
		int32_t L_44 = V_2;
		int32_t L_45;
		L_45 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_40, L_41, 0, L_42, ((int32_t)il2cpp_codegen_add(L_43, L_44)));
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, L_45));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		int32_t L_47 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		int32_t L_49 = V_0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_46, L_47, (RuntimeArray*)L_48, 0, L_49, NULL);
		int32_t L_50 = ___length2;
		int32_t L_51 = V_0;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_50, L_51));
		int32_t L_52 = ___inOff1;
		int32_t L_53 = V_0;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_52, L_53));
	}

IL_00f1:
	{
		int32_t L_54 = ___length2;
		int32_t L_55 = V_0;
		if ((((int32_t)L_54) > ((int32_t)L_55)))
		{
			goto IL_00a4;
		}
	}

IL_00f5:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___input0;
		int32_t L_57 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		int32_t L_59 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2;
		int32_t L_60 = ___length2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_56, L_57, (RuntimeArray*)L_58, L_59, L_60, NULL);
		int32_t L_61 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2;
		int32_t L_62 = ___length2;
		((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2 = ((int32_t)il2cpp_codegen_add(L_61, L_62));
		int32_t L_63 = V_2;
		return L_63;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.CtsBlockCipher::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CtsBlockCipher_DoFinal_m5D4C4BD4A83B5C67019F5B6FE070D3FB4E8604C7 (CtsBlockCipher_tD61E222E0CD88BC601E0F7A4073205A1A795A5D7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_10 = NULL;
	intptr_t V_11;
	memset((&V_11), 0, sizeof(V_11));
	RuntimeObject* G_B14_0 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	{
		int32_t L_0 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2;
		int32_t L_1 = ___outOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___output0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_3 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2C11CC798877345509F1FA1FB1F897F683FF966C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CtsBlockCipher_DoFinal_m5D4C4BD4A83B5C67019F5B6FE070D3FB4E8604C7_RuntimeMethod_var)));
	}

IL_0018:
	{
		RuntimeObject* L_4 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___cipher_4;
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		int32_t L_6 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2;
		int32_t L_7 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
		int32_t L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_2 = L_9;
		bool L_10 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___forEncryption_3;
		if (!L_10)
		{
			goto IL_0107;
		}
	}
	{
		RuntimeObject* L_11 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___cipher_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_2;
		int32_t L_14;
		L_14 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_11, L_12, 0, L_13, 0);
		int32_t L_15 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_0068;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_17 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B727B78FCBFAE5439361EB75523903A4C022DC2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CtsBlockCipher_DoFinal_m5D4C4BD4A83B5C67019F5B6FE070D3FB4E8604C7_RuntimeMethod_var)));
	}

IL_0068:
	{
		int32_t L_18 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2;
		V_3 = L_18;
		goto IL_0082;
	}

IL_0071:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		int32_t L_20 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_2;
		int32_t L_22 = V_3;
		int32_t L_23 = V_0;
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(L_22, L_23));
		uint8_t L_25 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20), (uint8_t)L_25);
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_0082:
	{
		int32_t L_27 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)(((RuntimeArray*)L_28)->max_length))))))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_29 = V_0;
		V_4 = L_29;
		goto IL_00b4;
	}

IL_0092:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = L_30;
		V_10 = L_31;
		int32_t L_32 = V_4;
		int32_t L_33 = L_32;
		V_11 = L_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_10;
		intptr_t L_35 = V_11;
		intptr_t L_36 = L_35;
		uint8_t L_37 = (L_34)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_2;
		int32_t L_39 = V_4;
		int32_t L_40 = V_0;
		int32_t L_41 = ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
		uint8_t L_42 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_37^(int32_t)L_42))));
		int32_t L_43 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00b4:
	{
		int32_t L_44 = V_4;
		int32_t L_45 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2;
		if ((!(((uint32_t)L_44) == ((uint32_t)L_45))))
		{
			goto IL_0092;
		}
	}
	{
		RuntimeObject* L_46 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___cipher_4;
		if (((CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548*)IsInstClass((RuntimeObject*)L_46, CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548_il2cpp_TypeInfo_var)))
		{
			goto IL_00d3;
		}
	}
	{
		RuntimeObject* L_47 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___cipher_4;
		G_B14_0 = L_47;
		goto IL_00e3;
	}

IL_00d3:
	{
		RuntimeObject* L_48 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___cipher_4;
		RuntimeObject* L_49;
		L_49 = CbcBlockCipher_GetUnderlyingCipher_m9D8930D21D0EA39C84EE8CEDE1EAE9AB9859BD14_inline(((CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548*)CastclassClass((RuntimeObject*)L_48, CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548_il2cpp_TypeInfo_var)), NULL);
		G_B14_0 = L_49;
	}

IL_00e3:
	{
		V_5 = G_B14_0;
		RuntimeObject* L_50 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		int32_t L_52 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ___output0;
		int32_t L_54 = ___outOff1;
		int32_t L_55;
		L_55 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_50, L_51, L_52, L_53, L_54);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ___output0;
		int32_t L_58 = ___outOff1;
		int32_t L_59 = V_0;
		int32_t L_60 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_56, 0, (RuntimeArray*)L_57, ((int32_t)il2cpp_codegen_add(L_58, L_59)), L_60, NULL);
		goto IL_01a0;
	}

IL_0107:
	{
		int32_t L_61 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_61);
		V_6 = L_62;
		RuntimeObject* L_63 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___cipher_4;
		if (((CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548*)IsInstClass((RuntimeObject*)L_63, CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548_il2cpp_TypeInfo_var)))
		{
			goto IL_0124;
		}
	}
	{
		RuntimeObject* L_64 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___cipher_4;
		G_B18_0 = L_64;
		goto IL_0134;
	}

IL_0124:
	{
		RuntimeObject* L_65 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___cipher_4;
		RuntimeObject* L_66;
		L_66 = CbcBlockCipher_GetUnderlyingCipher_m9D8930D21D0EA39C84EE8CEDE1EAE9AB9859BD14_inline(((CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548*)CastclassClass((RuntimeObject*)L_65, CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548_il2cpp_TypeInfo_var)), NULL);
		G_B18_0 = L_66;
	}

IL_0134:
	{
		V_7 = G_B18_0;
		RuntimeObject* L_67 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = V_2;
		int32_t L_70;
		L_70 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_67, L_68, 0, L_69, 0);
		int32_t L_71 = V_0;
		V_8 = L_71;
		goto IL_016a;
	}

IL_014c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = V_6;
		int32_t L_73 = V_8;
		int32_t L_74 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = V_2;
		int32_t L_76 = V_8;
		int32_t L_77 = V_0;
		int32_t L_78 = ((int32_t)il2cpp_codegen_subtract(L_76, L_77));
		uint8_t L_79 = (L_75)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_78));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		int32_t L_81 = V_8;
		int32_t L_82 = L_81;
		uint8_t L_83 = (L_80)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_82));
		(L_72)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_73, L_74))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_79^(int32_t)L_83))));
		int32_t L_84 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_016a:
	{
		int32_t L_85 = V_8;
		int32_t L_86 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2;
		if ((!(((uint32_t)L_85) == ((uint32_t)L_86))))
		{
			goto IL_014c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___buf_1;
		int32_t L_88 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = V_2;
		int32_t L_90 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_87, L_88, (RuntimeArray*)L_89, 0, L_90, NULL);
		RuntimeObject* L_91 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___cipher_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = ___output0;
		int32_t L_94 = ___outOff1;
		int32_t L_95;
		L_95 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_91, L_92, 0, L_93, L_94);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = ___output0;
		int32_t L_98 = ___outOff1;
		int32_t L_99 = V_0;
		int32_t L_100 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_96, 0, (RuntimeArray*)L_97, ((int32_t)il2cpp_codegen_add(L_98, L_99)), L_100, NULL);
	}

IL_01a0:
	{
		int32_t L_101 = ((BufferedBlockCipher_tFB2B603B577BE08B7A8CDC68EB4DB2BFB0AC7BE7*)__this)->___bufOff_2;
		V_9 = L_101;
		VirtualActionInvoker0::Invoke(39 /* System.Void Org.BouncyCastle.Crypto.BufferedCipherBase::Reset() */, __this);
		int32_t L_102 = V_9;
		return L_102;
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
// System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaxBlockCipher__ctor_mAECD43DF18BE1C94ED381CEE01CA5E35F6F2DE7A (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, RuntimeObject* ___cipher0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___cipher0;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		__this->___blockSize_2 = L_1;
		RuntimeObject* L_2 = ___cipher0;
		CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1* L_3 = (CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1*)il2cpp_codegen_object_new(CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1_il2cpp_TypeInfo_var);
		CMac__ctor_mDD6FBE8A55213BDF31F4A4591CE8827D2462FC5D(L_3, L_2, NULL);
		__this->___mac_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mac_3), (void*)L_3);
		int32_t L_4 = __this->___blockSize_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___macBlock_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___macBlock_6), (void*)L_5);
		RuntimeObject* L_6 = __this->___mac_3;
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IMac::GetMacSize() */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->___associatedTextMac_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___associatedTextMac_5), (void*)L_8);
		RuntimeObject* L_9 = __this->___mac_3;
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IMac::GetMacSize() */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->___nonceMac_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nonceMac_4), (void*)L_11);
		RuntimeObject* L_12 = ___cipher0;
		SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* L_13 = (SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105*)il2cpp_codegen_object_new(SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105_il2cpp_TypeInfo_var);
		SicBlockCipher__ctor_mA7ADBD37CBBF2B5DB603804C12BBD044A86DD99A(L_13, L_12, NULL);
		__this->___cipher_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_0), (void*)L_13);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EaxBlockCipher_get_AlgorithmName_m91BEA22C314E5CB477239CBA67EDBDEBA10AAE7F (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11D5CB02A6236ACF1A0A6EA12F8CAB5C0C221C7B);
		s_Il2CppMethodInitialized = true;
	}
	{
		SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* L_0 = __this->___cipher_0;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(10 /* Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.SicBlockCipher::GetUnderlyingCipher() */, L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_2, _stringLiteral11D5CB02A6236ACF1A0A6EA12F8CAB5C0C221C7B, NULL);
		return L_3;
	}
}
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::GetUnderlyingCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EaxBlockCipher_GetUnderlyingCipher_mEA20B87A1F8F49F02E26DF34F37B0FE4E7519B8A (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, const RuntimeMethod* method) 
{
	{
		SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* L_0 = __this->___cipher_0;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EaxBlockCipher_GetBlockSize_m3812E4DC041903601686CD1615D4731DAB9FF2C0 (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, const RuntimeMethod* method) 
{
	{
		SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* L_0 = __this->___cipher_0;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 Org.BouncyCastle.Crypto.Modes.SicBlockCipher::GetBlockSize() */, L_0);
		return L_1;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaxBlockCipher_Init_m3F888A048BCFFB90D717DA0A075B55764DFF015A (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* V_2 = NULL;
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* G_B7_0 = NULL;
	EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* G_B8_1 = NULL;
	{
		bool L_0 = ___forEncryption0;
		__this->___forEncryption_1 = L_0;
		RuntimeObject* L_1 = ___parameters1;
		if (!((AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B*)IsInstClass((RuntimeObject*)L_1, AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var)))
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_2 = ___parameters1;
		V_2 = ((AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B*)CastclassClass((RuntimeObject*)L_2, AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var));
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_3 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(7 /* System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetNonce() */, L_3);
		V_0 = L_4;
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_5 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetAssociatedText() */, L_5);
		__this->___initialAssociatedText_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialAssociatedText_11), (void*)L_6);
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_7 = V_2;
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_MacSize() */, L_7);
		__this->___macSize_7 = ((int32_t)(L_8/8));
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_9 = V_2;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_10;
		L_10 = VirtualFuncInvoker0< KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* >::Invoke(4 /* Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_Key() */, L_9);
		V_1 = L_10;
		goto IL_0084;
	}

IL_0040:
	{
		RuntimeObject* L_11 = ___parameters1;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_11, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		RuntimeObject* L_12 = ___parameters1;
		V_3 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_12, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_13 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_13, NULL);
		V_0 = L_14;
		__this->___initialAssociatedText_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialAssociatedText_11), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		RuntimeObject* L_15 = __this->___mac_3;
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IMac::GetMacSize() */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_15);
		__this->___macSize_7 = ((int32_t)(L_16/2));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_17 = V_3;
		RuntimeObject* L_18;
		L_18 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_17, NULL);
		V_1 = L_18;
		goto IL_0084;
	}

IL_0079:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2EFA2E30F19E3F93EF3256C6E6BE9970DF3B4D3E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EaxBlockCipher_Init_m3F888A048BCFFB90D717DA0A075B55764DFF015A_RuntimeMethod_var)));
	}

IL_0084:
	{
		bool L_20 = ___forEncryption0;
		G_B6_0 = __this;
		if (L_20)
		{
			G_B7_0 = __this;
			goto IL_0097;
		}
	}
	{
		int32_t L_21 = __this->___blockSize_2;
		int32_t L_22 = __this->___macSize_7;
		G_B8_0 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
		G_B8_1 = G_B6_0;
		goto IL_009d;
	}

IL_0097:
	{
		int32_t L_23 = __this->___blockSize_2;
		G_B8_0 = L_23;
		G_B8_1 = G_B7_0;
	}

IL_009d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)G_B8_0);
		G_B8_1->___bufBlock_8 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_1->___bufBlock_8), (void*)L_24);
		int32_t L_25 = __this->___blockSize_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_25);
		V_4 = L_26;
		RuntimeObject* L_27 = __this->___mac_3;
		RuntimeObject* L_28 = V_1;
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void Org.BouncyCastle.Crypto.IMac::Init(Org.BouncyCastle.Crypto.ICipherParameters) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_27, L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_4;
		int32_t L_30 = __this->___blockSize_2;
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_30, 1))), (uint8_t)0);
		RuntimeObject* L_31 = __this->___mac_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_4;
		int32_t L_33 = __this->___blockSize_2;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_31, L_32, 0, L_33);
		RuntimeObject* L_34 = __this->___mac_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_34, L_35, 0, ((int32_t)(((RuntimeArray*)L_36)->max_length)));
		RuntimeObject* L_37 = __this->___mac_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = __this->___nonceMac_4;
		int32_t L_39;
		L_39 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IMac::DoFinal(System.Byte[],System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_37, L_38, 0);
		SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* L_40 = __this->___cipher_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = __this->___nonceMac_4;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_42 = (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)il2cpp_codegen_object_new(ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994(L_42, (RuntimeObject*)NULL, L_41, NULL);
		VirtualActionInvoker2< bool, RuntimeObject* >::Invoke(11 /* System.Void Org.BouncyCastle.Crypto.Modes.SicBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, L_40, (bool)1, L_42);
		VirtualActionInvoker0::Invoke(21 /* System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::Reset() */, __this);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::InitCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaxBlockCipher_InitCipher_mC202C0AEA0530F7037D53E649696325A3CDE2FFE (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		bool L_0 = __this->___cipherInitialized_10;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		__this->___cipherInitialized_10 = (bool)1;
		RuntimeObject* L_1 = __this->___mac_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___associatedTextMac_5;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IMac::DoFinal(System.Byte[],System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_1, L_2, 0);
		int32_t L_4 = __this->___blockSize_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_0 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = __this->___blockSize_2;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_7, 1))), (uint8_t)2);
		RuntimeObject* L_8 = __this->___mac_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		int32_t L_10 = __this->___blockSize_2;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_8, L_9, 0, L_10);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::CalculateMac()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaxBlockCipher_CalculateMac_m318B13FBCDF755DF5DE1FA88E0C25C0A3DED49E9 (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___blockSize_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->___mac_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IMac::DoFinal(System.Byte[],System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_2, L_3, 0);
		V_1 = 0;
		goto IL_0040;
	}

IL_001e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___macBlock_6;
		int32_t L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___nonceMac_4;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___associatedTextMac_5;
		int32_t L_12 = V_1;
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		int32_t L_16 = V_1;
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_10^(int32_t)L_14))^(int32_t)L_18))));
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0040:
	{
		int32_t L_20 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___macBlock_6;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaxBlockCipher_Reset_m4E53B4FDEA09D5748A42A811E4641CFDA488290E (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, const RuntimeMethod* method) 
{
	{
		EaxBlockCipher_Reset_m6CA3156D8F3A9B53557DCC410F4032194CF7F88C(__this, (bool)1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::Reset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaxBlockCipher_Reset_m6CA3156D8F3A9B53557DCC410F4032194CF7F88C (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, bool ___clearMac0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* L_0 = __this->___cipher_0;
		VirtualActionInvoker0::Invoke(16 /* System.Void Org.BouncyCastle.Crypto.Modes.SicBlockCipher::Reset() */, L_0);
		RuntimeObject* L_1 = __this->___mac_3;
		InterfaceActionInvoker0::Invoke(6 /* System.Void Org.BouncyCastle.Crypto.IMac::Reset() */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_1);
		__this->___bufOff_9 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___bufBlock_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___bufBlock_8;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		bool L_4 = ___clearMac0;
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___macBlock_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___macBlock_6;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
	}

IL_0048:
	{
		int32_t L_7 = __this->___blockSize_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_0 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		int32_t L_10 = __this->___blockSize_2;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_10, 1))), (uint8_t)1);
		RuntimeObject* L_11 = __this->___mac_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		int32_t L_13 = __this->___blockSize_2;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_11, L_12, 0, L_13);
		__this->___cipherInitialized_10 = (bool)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___initialAssociatedText_11;
		if (!L_14)
		{
			goto IL_0096;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___initialAssociatedText_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___initialAssociatedText_11;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(23 /* System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32) */, __this, L_15, 0, ((int32_t)(((RuntimeArray*)L_16)->max_length)));
	}

IL_0096:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::ProcessAadByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaxBlockCipher_ProcessAadByte_m2B6AEA7D0CD5F111E82850250A859803A882284E (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___cipherInitialized_10;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7DEB1C823E8104E920B6CFCBA4127F8A45374E76)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EaxBlockCipher_ProcessAadByte_m2B6AEA7D0CD5F111E82850250A859803A882284E_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->___mac_3;
		uint8_t L_3 = ___input0;
		InterfaceActionInvoker1< uint8_t >::Invoke(3 /* System.Void Org.BouncyCastle.Crypto.IMac::Update(System.Byte) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EaxBlockCipher_ProcessAadBytes_m0B26296E699BE3D9969E53051E072D7E82924EDB (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___len2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___cipherInitialized_10;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7DEB1C823E8104E920B6CFCBA4127F8A45374E76)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EaxBlockCipher_ProcessAadBytes_m0B26296E699BE3D9969E53051E072D7E82924EDB_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->___mac_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___inBytes0;
		int32_t L_4 = ___inOff1;
		int32_t L_5 = ___len2;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::ProcessByte(System.Byte,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EaxBlockCipher_ProcessByte_mB3DA8006649073D821CF4B6A9106015310006FB0 (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, uint8_t ___input0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes1, int32_t ___outOff2, const RuntimeMethod* method) 
{
	{
		EaxBlockCipher_InitCipher_mC202C0AEA0530F7037D53E649696325A3CDE2FFE(__this, NULL);
		uint8_t L_0 = ___input0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___outBytes1;
		int32_t L_2 = ___outOff2;
		int32_t L_3;
		L_3 = EaxBlockCipher_Process_mED56FCBECB927C250180B6CDC2B3A612702464FA(__this, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EaxBlockCipher_ProcessBytes_mDB495577A6F4A7C769469C4E56845652093DF4F6 (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes3, int32_t ___outOff4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		EaxBlockCipher_InitCipher_mC202C0AEA0530F7037D53E649696325A3CDE2FFE(__this, NULL);
		V_0 = 0;
		V_1 = 0;
		goto IL_0024;
	}

IL_000c:
	{
		int32_t L_0 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___inBytes0;
		int32_t L_2 = ___inOff1;
		int32_t L_3 = V_1;
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		uint8_t L_5 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___outBytes3;
		int32_t L_7 = ___outOff4;
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = EaxBlockCipher_Process_mED56FCBECB927C250180B6CDC2B3A612702464FA(__this, L_5, L_6, ((int32_t)il2cpp_codegen_add(L_7, L_8)), NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_9));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0024:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = ___len2;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EaxBlockCipher_DoFinal_m37947CAB4ED902AC6BE33D1FC906EC8B8D9DF456 (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		EaxBlockCipher_InitCipher_mC202C0AEA0530F7037D53E649696325A3CDE2FFE(__this, NULL);
		int32_t L_0 = __this->___bufOff_9;
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___bufBlock_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
		V_1 = L_2;
		__this->___bufOff_9 = 0;
		bool L_3 = __this->___forEncryption_1;
		if (!L_3)
		{
			goto IL_0097;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___outBytes0;
		int32_t L_5 = ___outOff1;
		int32_t L_6 = V_0;
		int32_t L_7 = __this->___macSize_7;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_4, L_5, ((int32_t)il2cpp_codegen_add(L_6, L_7)), _stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C, NULL);
		SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* L_8 = __this->___cipher_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___bufBlock_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		int32_t L_11;
		L_11 = VirtualFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(15 /* System.Int32 Org.BouncyCastle.Crypto.Modes.SicBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, L_8, L_9, 0, L_10, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___outBytes0;
		int32_t L_14 = ___outOff1;
		int32_t L_15 = V_0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_12, 0, (RuntimeArray*)L_13, L_14, L_15, NULL);
		RuntimeObject* L_16 = __this->___mac_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		int32_t L_18 = V_0;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_16, L_17, 0, L_18);
		EaxBlockCipher_CalculateMac_m318B13FBCDF755DF5DE1FA88E0C25C0A3DED49E9(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___macBlock_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___outBytes0;
		int32_t L_21 = ___outOff1;
		int32_t L_22 = V_0;
		int32_t L_23 = __this->___macSize_7;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_19, 0, (RuntimeArray*)L_20, ((int32_t)il2cpp_codegen_add(L_21, L_22)), L_23, NULL);
		EaxBlockCipher_Reset_m6CA3156D8F3A9B53557DCC410F4032194CF7F88C(__this, (bool)0, NULL);
		int32_t L_24 = V_0;
		int32_t L_25 = __this->___macSize_7;
		return ((int32_t)il2cpp_codegen_add(L_24, L_25));
	}

IL_0097:
	{
		int32_t L_26 = V_0;
		int32_t L_27 = __this->___macSize_7;
		if ((((int32_t)L_26) >= ((int32_t)L_27)))
		{
			goto IL_00ab;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_28 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4901277BD17A5B2F9FD51DCD98D6CE81842202C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EaxBlockCipher_DoFinal_m37947CAB4ED902AC6BE33D1FC906EC8B8D9DF456_RuntimeMethod_var)));
	}

IL_00ab:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___outBytes0;
		int32_t L_30 = ___outOff1;
		int32_t L_31 = V_0;
		int32_t L_32 = __this->___macSize_7;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_29, L_30, ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), _stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C, NULL);
		int32_t L_33 = V_0;
		int32_t L_34 = __this->___macSize_7;
		if ((((int32_t)L_33) <= ((int32_t)L_34)))
		{
			goto IL_0108;
		}
	}
	{
		RuntimeObject* L_35 = __this->___mac_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___bufBlock_8;
		int32_t L_37 = V_0;
		int32_t L_38 = __this->___macSize_7;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_35, L_36, 0, ((int32_t)il2cpp_codegen_subtract(L_37, L_38)));
		SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* L_39 = __this->___cipher_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = __this->___bufBlock_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_1;
		int32_t L_42;
		L_42 = VirtualFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(15 /* System.Int32 Org.BouncyCastle.Crypto.Modes.SicBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, L_39, L_40, 0, L_41, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ___outBytes0;
		int32_t L_45 = ___outOff1;
		int32_t L_46 = V_0;
		int32_t L_47 = __this->___macSize_7;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_43, 0, (RuntimeArray*)L_44, L_45, ((int32_t)il2cpp_codegen_subtract(L_46, L_47)), NULL);
	}

IL_0108:
	{
		EaxBlockCipher_CalculateMac_m318B13FBCDF755DF5DE1FA88E0C25C0A3DED49E9(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = __this->___bufBlock_8;
		int32_t L_49 = V_0;
		int32_t L_50 = __this->___macSize_7;
		bool L_51;
		L_51 = EaxBlockCipher_VerifyMac_mAA15E8327EDE3254F8106477C8896A92B8398693(__this, L_48, ((int32_t)il2cpp_codegen_subtract(L_49, L_50)), NULL);
		if (L_51)
		{
			goto IL_012f;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_52 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_52, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6DE84AC4FDE23F1A60950762D258FC808D7B0F13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_52, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EaxBlockCipher_DoFinal_m37947CAB4ED902AC6BE33D1FC906EC8B8D9DF456_RuntimeMethod_var)));
	}

IL_012f:
	{
		EaxBlockCipher_Reset_m6CA3156D8F3A9B53557DCC410F4032194CF7F88C(__this, (bool)0, NULL);
		int32_t L_53 = V_0;
		int32_t L_54 = __this->___macSize_7;
		return ((int32_t)il2cpp_codegen_subtract(L_53, L_54));
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::GetMac()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* EaxBlockCipher_GetMac_m80B339E67618459610242EEBEFAEC8C50EB2156C (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		int32_t L_0 = __this->___macSize_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___macBlock_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		int32_t L_4 = __this->___macSize_7;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, L_4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		return L_5;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::GetUpdateOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EaxBlockCipher_GetUpdateOutputSize_mD18D5315B0446C6928997B8B539FFF69904E2933 (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, int32_t ___len0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___len0;
		int32_t L_1 = __this->___bufOff_9;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		bool L_2 = __this->___forEncryption_1;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___macSize_7;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		return 0;
	}

IL_001c:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->___macSize_7;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0025:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_0;
		int32_t L_9 = __this->___blockSize_2;
		return ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)(L_8%L_9))));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::GetOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EaxBlockCipher_GetOutputSize_mAE32C5040D5C734B525DE56F7A97552AF02BE8C1 (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, int32_t ___len0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___len0;
		int32_t L_1 = __this->___bufOff_9;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		bool L_2 = __this->___forEncryption_1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___macSize_7;
		return ((int32_t)il2cpp_codegen_add(L_3, L_4));
	}

IL_001a:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->___macSize_7;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___macSize_7;
		return ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_002c:
	{
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::Process(System.Byte,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EaxBlockCipher_Process_mED56FCBECB927C250180B6CDC2B3A612702464FA (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, uint8_t ___b0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes1, int32_t ___outOff2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFC5E1DA6D746B614F31BA42FD46FE5A06844ACB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___bufBlock_8;
		int32_t L_1 = __this->___bufOff_9;
		int32_t L_2 = L_1;
		V_1 = L_2;
		__this->___bufOff_9 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_1;
		uint8_t L_4 = ___b0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)L_4);
		int32_t L_5 = __this->___bufOff_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___bufBlock_8;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_00d8;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___outBytes1;
		int32_t L_8 = ___outOff2;
		int32_t L_9 = __this->___blockSize_2;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_7, L_8, L_9, _stringLiteralCFC5E1DA6D746B614F31BA42FD46FE5A06844ACB, NULL);
		bool L_10 = __this->___forEncryption_1;
		if (!L_10)
		{
			goto IL_0070;
		}
	}
	{
		SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* L_11 = __this->___cipher_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___bufBlock_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___outBytes1;
		int32_t L_14 = ___outOff2;
		int32_t L_15;
		L_15 = VirtualFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(15 /* System.Int32 Org.BouncyCastle.Crypto.Modes.SicBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, L_11, L_12, 0, L_13, L_14);
		V_0 = L_15;
		RuntimeObject* L_16 = __this->___mac_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___outBytes1;
		int32_t L_18 = ___outOff2;
		int32_t L_19 = __this->___blockSize_2;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_16, L_17, L_18, L_19);
		goto IL_009d;
	}

IL_0070:
	{
		RuntimeObject* L_20 = __this->___mac_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___bufBlock_8;
		int32_t L_22 = __this->___blockSize_2;
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IMac::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IMac_t41A6E1433D7C08058F9D898F71BFA623B736B992_il2cpp_TypeInfo_var, L_20, L_21, 0, L_22);
		SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* L_23 = __this->___cipher_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___bufBlock_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___outBytes1;
		int32_t L_26 = ___outOff2;
		int32_t L_27;
		L_27 = VirtualFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(15 /* System.Int32 Org.BouncyCastle.Crypto.Modes.SicBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, L_23, L_24, 0, L_25, L_26);
		V_0 = L_27;
	}

IL_009d:
	{
		__this->___bufOff_9 = 0;
		bool L_28 = __this->___forEncryption_1;
		if (L_28)
		{
			goto IL_00d6;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___bufBlock_8;
		int32_t L_30 = __this->___blockSize_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = __this->___bufBlock_8;
		int32_t L_32 = __this->___macSize_7;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_29, L_30, (RuntimeArray*)L_31, 0, L_32, NULL);
		int32_t L_33 = __this->___macSize_7;
		__this->___bufOff_9 = L_33;
	}

IL_00d6:
	{
		int32_t L_34 = V_0;
		return L_34;
	}

IL_00d8:
	{
		return 0;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Modes.EaxBlockCipher::VerifyMac(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EaxBlockCipher_VerifyMac_mAA15E8327EDE3254F8106477C8896A92B8398693 (EaxBlockCipher_tA42322CAF36DFB6255259D64D9F737C7178766C0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac0, int32_t ___off1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_001b;
	}

IL_0006:
	{
		int32_t L_0 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___macBlock_6;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___mac0;
		int32_t L_6 = ___off1;
		int32_t L_7 = V_1;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		uint8_t L_9 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = ((int32_t)(L_0|((int32_t)((int32_t)L_4^(int32_t)L_9))));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001b:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->___macSize_7;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_13 = V_0;
		return (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
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
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher__ctor_mD437B0B758F3AEA74AE62E321D7FA0B852762A7F (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, RuntimeObject* ___c0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___c0;
		GcmBlockCipher__ctor_m8A2845175ACAD261D5ECB00457FD3F9E1198B1D9(__this, L_0, (RuntimeObject*)NULL, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher__ctor_m8A2845175ACAD261D5ECB00457FD3F9E1198B1D9 (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, RuntimeObject* ___c0, RuntimeObject* ___m1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tables4kGcmMultiplier_tB107C775EBF316C21F1C7B58573091D5E450EF0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___c0;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)16))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ((int32_t)16);
		RuntimeObject* L_3 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_2);
		String_t* L_4;
		L_4 = String_Concat_mA299F8BBD1426934E2DAA95859E11C2063A116C8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC6B8E7A479BE266CB377B138773E5E798867F697)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GcmBlockCipher__ctor_m8A2845175ACAD261D5ECB00457FD3F9E1198B1D9_RuntimeMethod_var)));
	}

IL_002c:
	{
		RuntimeObject* L_6 = ___m1;
		if (L_6)
		{
			goto IL_0036;
		}
	}
	{
		Tables4kGcmMultiplier_tB107C775EBF316C21F1C7B58573091D5E450EF0A* L_7 = (Tables4kGcmMultiplier_tB107C775EBF316C21F1C7B58573091D5E450EF0A*)il2cpp_codegen_object_new(Tables4kGcmMultiplier_tB107C775EBF316C21F1C7B58573091D5E450EF0A_il2cpp_TypeInfo_var);
		Tables4kGcmMultiplier__ctor_mEF2E77A3F60D4643C4EC7E6D624CCB583FB920FB(L_7, NULL);
		___m1 = L_7;
	}

IL_0036:
	{
		RuntimeObject* L_8 = ___c0;
		__this->___cipher_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_1), (void*)L_8);
		RuntimeObject* L_9 = ___m1;
		__this->___multiplier_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___multiplier_2), (void*)L_9);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GcmBlockCipher_get_AlgorithmName_m1DB8978E2AF9622BD88DD0B5897E0BF2278A141F (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral891B56C4C0C887D6C4D327807291921380199FCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_1;
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, _stringLiteral891B56C4C0C887D6C4D327807291921380199FCC, NULL);
		return L_2;
	}
}
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::GetUnderlyingCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GcmBlockCipher_GetUnderlyingCipher_mEEF1C6CAB71C34751D1FE22C1F864D383F59A50F (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___cipher_1;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GcmBlockCipher_GetBlockSize_mFC82256153992343083ED09C5527292F18C0A61B (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_Init_m6A6338218CC526546D9BB64FB639D7ECC7057085 (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGcmMultiplier_tAF775B12F6AF749A4932AFBD6899B0D54A00826B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* V_2 = NULL;
	int32_t V_3 = 0;
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_4 = NULL;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	int32_t G_B12_0 = 0;
	{
		bool L_0 = ___forEncryption0;
		__this->___forEncryption_4 = L_0;
		__this->___macBlock_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___macBlock_13), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___initialised_5 = (bool)1;
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		RuntimeObject* L_1 = ___parameters1;
		if (!((AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B*)IsInstClass((RuntimeObject*)L_1, AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var)))
		{
			goto IL_007a;
		}
	}
	{
		RuntimeObject* L_2 = ___parameters1;
		V_2 = ((AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B*)CastclassClass((RuntimeObject*)L_2, AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var));
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_3 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(7 /* System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetNonce() */, L_3);
		V_1 = L_4;
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_5 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetAssociatedText() */, L_5);
		__this->___initialAssociatedText_9 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialAssociatedText_9), (void*)L_6);
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_7 = V_2;
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_MacSize() */, L_7);
		V_3 = L_8;
		int32_t L_9 = V_3;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)32))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_10 = V_3;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)128))))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_11 = V_3;
		if (!((int32_t)(L_11%8)))
		{
			goto IL_0068;
		}
	}

IL_0052:
	{
		int32_t L_12 = V_3;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_13);
		String_t* L_15;
		L_15 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EBDAE183BC30C2AD6BD85811A7DA978BDAB9809)), L_14, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GcmBlockCipher_Init_m6A6338218CC526546D9BB64FB639D7ECC7057085_RuntimeMethod_var)));
	}

IL_0068:
	{
		int32_t L_17 = V_3;
		__this->___macSize_6 = ((int32_t)(L_17/8));
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_18 = V_2;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_19;
		L_19 = VirtualFuncInvoker0< KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* >::Invoke(4 /* Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_Key() */, L_18);
		V_0 = L_19;
		goto IL_00bb;
	}

IL_007a:
	{
		RuntimeObject* L_20 = ___parameters1;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_20, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_00b0;
		}
	}
	{
		RuntimeObject* L_21 = ___parameters1;
		V_4 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_21, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_22 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_22, NULL);
		V_1 = L_23;
		__this->___initialAssociatedText_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialAssociatedText_9), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___macSize_6 = ((int32_t)16);
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_24 = V_4;
		RuntimeObject* L_25;
		L_25 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_24, NULL);
		V_0 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_25, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		goto IL_00bb;
	}

IL_00b0:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_26 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7D865DD69B8706FF6897C2242747ACF3F6807F3C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GcmBlockCipher_Init_m6A6338218CC526546D9BB64FB639D7ECC7057085_RuntimeMethod_var)));
	}

IL_00bb:
	{
		bool L_27 = ___forEncryption0;
		if (L_27)
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_28 = __this->___macSize_6;
		G_B12_0 = ((int32_t)il2cpp_codegen_add(((int32_t)16), L_28));
		goto IL_00cb;
	}

IL_00c9:
	{
		G_B12_0 = ((int32_t)16);
	}

IL_00cb:
	{
		V_5 = G_B12_0;
		int32_t L_29 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_29);
		__this->___bufBlock_12 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bufBlock_12), (void*)L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_1;
		if (!L_31)
		{
			goto IL_00e3;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))) >= ((int32_t)1)))
		{
			goto IL_00ee;
		}
	}

IL_00e3:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_33 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral39160B1C294E5C9ED23B6F6B6E3726472D922B3C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GcmBlockCipher_Init_m6A6338218CC526546D9BB64FB639D7ECC7057085_RuntimeMethod_var)));
	}

IL_00ee:
	{
		bool L_34 = ___forEncryption0;
		if (!L_34)
		{
			goto IL_013b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->___nonce_8;
		if (!L_35)
		{
			goto IL_013b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___nonce_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Arrays_AreEqual_mF00C3B51F7520663ADB08744EA3A1995B9421C18(L_36, L_37, NULL);
		if (!L_38)
		{
			goto IL_013b;
		}
	}
	{
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_39 = V_0;
		if (L_39)
		{
			goto IL_0115;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_40 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_40, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral12326CDA4F85AD3AF86804E247FCC39F70036FF2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GcmBlockCipher_Init_m6A6338218CC526546D9BB64FB639D7ECC7057085_RuntimeMethod_var)));
	}

IL_0115:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = __this->___lastKey_7;
		if (!L_41)
		{
			goto IL_013b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = __this->___lastKey_7;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_43 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44;
		L_44 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_43, NULL);
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Arrays_AreEqual_mF00C3B51F7520663ADB08744EA3A1995B9421C18(L_42, L_44, NULL);
		if (!L_45)
		{
			goto IL_013b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_46 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_46, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral12326CDA4F85AD3AF86804E247FCC39F70036FF2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GcmBlockCipher_Init_m6A6338218CC526546D9BB64FB639D7ECC7057085_RuntimeMethod_var)));
	}

IL_013b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = V_1;
		__this->___nonce_8 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nonce_8), (void*)L_47);
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_48 = V_0;
		if (!L_48)
		{
			goto IL_0151;
		}
	}
	{
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_49 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
		L_50 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_49, NULL);
		__this->___lastKey_7 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastKey_7), (void*)L_50);
	}

IL_0151:
	{
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_51 = V_0;
		if (!L_51)
		{
			goto IL_01a2;
		}
	}
	{
		RuntimeObject* L_52 = __this->___cipher_1;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_53 = V_0;
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_52, (bool)1, L_53);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___H_10 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___H_10), (void*)L_54);
		RuntimeObject* L_55 = __this->___cipher_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = __this->___H_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = __this->___H_10;
		int32_t L_58;
		L_58 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_55, L_56, 0, L_57, 0);
		RuntimeObject* L_59 = __this->___multiplier_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = __this->___H_10;
		InterfaceActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Void Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier::Init(System.Byte[]) */, IGcmMultiplier_tAF775B12F6AF749A4932AFBD6899B0D54A00826B_il2cpp_TypeInfo_var, L_59, L_60);
		__this->___exp_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exp_3), (void*)(RuntimeObject*)NULL);
		goto IL_01b5;
	}

IL_01a2:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = __this->___H_10;
		if (L_61)
		{
			goto IL_01b5;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_62 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_62, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD317B044D3F8943C40215001850B2359CD7BA272)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_62, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GcmBlockCipher_Init_m6A6338218CC526546D9BB64FB639D7ECC7057085_RuntimeMethod_var)));
	}

IL_01b5:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___J0_11 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___J0_11), (void*)L_63);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = __this->___nonce_8;
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_64)->max_length))) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_01f5;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = __this->___nonce_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = __this->___J0_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = __this->___nonce_8;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_65, 0, (RuntimeArray*)L_66, 0, ((int32_t)(((RuntimeArray*)L_67)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = __this->___J0_11;
		(L_68)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)1);
		goto IL_023a;
	}

IL_01f5:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = __this->___J0_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = __this->___nonce_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = __this->___nonce_8;
		GcmBlockCipher_gHASH_m9B51FCD63890BDE82527032575EC3E14BAF2350A(__this, L_69, L_70, ((int32_t)(((RuntimeArray*)L_71)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_6 = L_72;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = __this->___nonce_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = V_6;
		Pack_UInt64_To_BE_m37F9E6B43BA608646BA3860E72A6DF1799B0AC68(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_73)->max_length))), ((int64_t)8))), L_74, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = __this->___J0_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = V_6;
		GcmBlockCipher_gHASHBlock_mCFC1A0B102860733A2DE83A3E5925A05DE8D71FC(__this, L_75, L_76, NULL);
	}

IL_023a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___S_14 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___S_14), (void*)L_77);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___S_at_15 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___S_at_15), (void*)L_78);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___S_atPre_16 = L_79;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___S_atPre_16), (void*)L_79);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___atBlock_21 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___atBlock_21), (void*)L_80);
		__this->___atBlockPos_22 = 0;
		__this->___atLength_23 = ((int64_t)0);
		__this->___atLengthPre_24 = ((int64_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = __this->___J0_11;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82;
		L_82 = Arrays_Clone_mC73CD122DC37EDEB733EC84DB0137D8D7DD5B87F(L_81, NULL);
		__this->___counter_17 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___counter_17), (void*)L_82);
		__this->___blocksRemaining_18 = ((int32_t)-2);
		__this->___bufOff_19 = 0;
		__this->___totalLength_20 = ((int64_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = __this->___initialAssociatedText_9;
		if (!L_83)
		{
			goto IL_02ca;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = __this->___initialAssociatedText_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = __this->___initialAssociatedText_9;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32) */, __this, L_84, 0, ((int32_t)(((RuntimeArray*)L_85)->max_length)));
	}

IL_02ca:
	{
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::GetMac()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GcmBlockCipher_GetMac_mA9D5CD06ADD5374A38CA31EE6204440A4052F24F (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___macBlock_13;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___macBlock_13;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Arrays_Clone_mC73CD122DC37EDEB733EC84DB0137D8D7DD5B87F(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		int32_t L_3 = __this->___macSize_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		return L_4;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::GetOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GcmBlockCipher_GetOutputSize_mF42B249282A156A043D8C9932D6014D1DF150E05 (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, int32_t ___len0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___len0;
		int32_t L_1 = __this->___bufOff_19;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		bool L_2 = __this->___forEncryption_4;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___macSize_6;
		return ((int32_t)il2cpp_codegen_add(L_3, L_4));
	}

IL_001a:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->___macSize_6;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___macSize_6;
		return ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_002c:
	{
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::GetUpdateOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GcmBlockCipher_GetUpdateOutputSize_m1899039DC60E65728F07BC835EBEF7853C25D6E8 (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, int32_t ___len0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___len0;
		int32_t L_1 = __this->___bufOff_19;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		bool L_2 = __this->___forEncryption_4;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___macSize_6;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		return 0;
	}

IL_001c:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->___macSize_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0025:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_0;
		return ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)(L_8%((int32_t)16)))));
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::ProcessAadByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_ProcessAadByte_m02D5041949CA65B5E8468F85993F333CD66C1A57 (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		GcmBlockCipher_CheckStatus_mECAF4E7FA5D98319F745F0B85CF3EBBCF20C9CEE(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___atBlock_21;
		int32_t L_1 = __this->___atBlockPos_22;
		uint8_t L_2 = ___input0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)L_2);
		int32_t L_3 = __this->___atBlockPos_22;
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		V_0 = L_4;
		__this->___atBlockPos_22 = L_4;
		int32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0052;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___S_at_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___atBlock_21;
		GcmBlockCipher_gHASHBlock_mCFC1A0B102860733A2DE83A3E5925A05DE8D71FC(__this, L_6, L_7, NULL);
		__this->___atBlockPos_22 = 0;
		uint64_t L_8 = __this->___atLength_23;
		__this->___atLength_23 = ((int64_t)il2cpp_codegen_add((int64_t)L_8, ((int64_t)((int32_t)16))));
	}

IL_0052:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_ProcessAadBytes_m6DECEAFB5D7C7978927973D57469A813B7C97D4B (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, int32_t ___len2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		GcmBlockCipher_CheckStatus_mECAF4E7FA5D98319F745F0B85CF3EBBCF20C9CEE(__this, NULL);
		V_0 = 0;
		goto IL_005e;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___atBlock_21;
		int32_t L_1 = __this->___atBlockPos_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___inBytes0;
		int32_t L_3 = ___inOff1;
		int32_t L_4 = V_0;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		uint8_t L_6 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)L_6);
		int32_t L_7 = __this->___atBlockPos_22;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		V_1 = L_8;
		__this->___atBlockPos_22 = L_8;
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_005a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___S_at_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___atBlock_21;
		GcmBlockCipher_gHASHBlock_mCFC1A0B102860733A2DE83A3E5925A05DE8D71FC(__this, L_10, L_11, NULL);
		__this->___atBlockPos_22 = 0;
		uint64_t L_12 = __this->___atLength_23;
		__this->___atLength_23 = ((int64_t)il2cpp_codegen_add((int64_t)L_12, ((int64_t)((int32_t)16))));
	}

IL_005a:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005e:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___len2;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::InitCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_InitCipher_m8D5958AC7ED800FFB209C92932703AAC90BC5C2A (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = __this->___atLength_23;
		if ((!(((uint64_t)L_0) > ((uint64_t)((int64_t)0)))))
		{
			goto IL_002b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___S_at_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___S_atPre_16;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_1, 0, (RuntimeArray*)L_2, 0, ((int32_t)16), NULL);
		uint64_t L_3 = __this->___atLength_23;
		__this->___atLengthPre_24 = L_3;
	}

IL_002b:
	{
		int32_t L_4 = __this->___atBlockPos_22;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___S_atPre_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___atBlock_21;
		int32_t L_7 = __this->___atBlockPos_22;
		GcmBlockCipher_gHASHPartial_mCB900173D833F09922D5C41AFCAB71AA36DCA77E(__this, L_5, L_6, 0, L_7, NULL);
		uint64_t L_8 = __this->___atLengthPre_24;
		int32_t L_9 = __this->___atBlockPos_22;
		__this->___atLengthPre_24 = ((int64_t)il2cpp_codegen_add((int64_t)L_8, ((int64_t)(uint64_t)((uint32_t)L_9))));
	}

IL_0061:
	{
		uint64_t L_10 = __this->___atLengthPre_24;
		if ((!(((uint64_t)L_10) > ((uint64_t)((int64_t)0)))))
		{
			goto IL_0080;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___S_atPre_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___S_14;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_11, 0, (RuntimeArray*)L_12, 0, ((int32_t)16), NULL);
	}

IL_0080:
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::ProcessByte(System.Byte,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GcmBlockCipher_ProcessByte_mE7FBB534068DEE5C5E40BA6A23E8457AAD5E1507 (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, uint8_t ___input0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output1, int32_t ___outOff2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		GcmBlockCipher_CheckStatus_mECAF4E7FA5D98319F745F0B85CF3EBBCF20C9CEE(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___bufBlock_12;
		int32_t L_1 = __this->___bufOff_19;
		uint8_t L_2 = ___input0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)L_2);
		int32_t L_3 = __this->___bufOff_19;
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		V_0 = L_4;
		__this->___bufOff_19 = L_4;
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___bufBlock_12;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0078;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___bufBlock_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___output1;
		int32_t L_9 = ___outOff2;
		GcmBlockCipher_ProcessBlock_mF80A1D696E07EC9979EEDDD16A577BAFC1CE9FAC(__this, L_7, 0, L_8, L_9, NULL);
		bool L_10 = __this->___forEncryption_4;
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		__this->___bufOff_19 = 0;
		goto IL_0075;
	}

IL_004f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___bufBlock_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___bufBlock_12;
		int32_t L_13 = __this->___macSize_6;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_11, ((int32_t)16), (RuntimeArray*)L_12, 0, L_13, NULL);
		int32_t L_14 = __this->___macSize_6;
		__this->___bufOff_19 = L_14;
	}

IL_0075:
	{
		return ((int32_t)16);
	}

IL_0078:
	{
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GcmBlockCipher_ProcessBytes_mCB7B956865566A192616EB40832D01487A75811A (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOff4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		GcmBlockCipher_CheckStatus_mECAF4E7FA5D98319F745F0B85CF3EBBCF20C9CEE(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = ___len2;
		Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F(L_0, L_1, L_2, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		V_0 = 0;
		bool L_3 = __this->___forEncryption_4;
		if (!L_3)
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_4 = __this->___bufOff_19;
		if (!L_4)
		{
			goto IL_009d;
		}
	}
	{
		goto IL_0078;
	}

IL_002a:
	{
		int32_t L_5 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___bufBlock_12;
		int32_t L_7 = __this->___bufOff_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___input0;
		int32_t L_9 = ___inOff1;
		int32_t L_10 = L_9;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)L_12);
		int32_t L_13 = __this->___bufOff_19;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		V_2 = L_14;
		__this->___bufOff_19 = L_14;
		int32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0078;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___bufBlock_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___output3;
		int32_t L_18 = ___outOff4;
		GcmBlockCipher_ProcessBlock_mF80A1D696E07EC9979EEDDD16A577BAFC1CE9FAC(__this, L_16, 0, L_17, L_18, NULL);
		__this->___bufOff_19 = 0;
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)16)));
		goto IL_009d;
	}

IL_0078:
	{
		int32_t L_20 = ___len2;
		if ((((int32_t)L_20) > ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		goto IL_009d;
	}

IL_007e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___input0;
		int32_t L_22 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___output3;
		int32_t L_24 = ___outOff4;
		int32_t L_25 = V_0;
		GcmBlockCipher_ProcessBlock_mF80A1D696E07EC9979EEDDD16A577BAFC1CE9FAC(__this, L_21, L_22, L_23, ((int32_t)il2cpp_codegen_add(L_24, L_25)), NULL);
		int32_t L_26 = ___inOff1;
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)16)));
		int32_t L_27 = ___len2;
		___len2 = ((int32_t)il2cpp_codegen_subtract(L_27, ((int32_t)16)));
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, ((int32_t)16)));
	}

IL_009d:
	{
		int32_t L_29 = ___len2;
		if ((((int32_t)L_29) >= ((int32_t)((int32_t)16))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_30 = ___len2;
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_0138;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___input0;
		int32_t L_32 = ___inOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___bufBlock_12;
		int32_t L_34 = ___len2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_31, L_32, (RuntimeArray*)L_33, 0, L_34, NULL);
		int32_t L_35 = ___len2;
		__this->___bufOff_19 = L_35;
		goto IL_0138;
	}

IL_00c1:
	{
		V_1 = 0;
		goto IL_0134;
	}

IL_00c5:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___bufBlock_12;
		int32_t L_37 = __this->___bufOff_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___input0;
		int32_t L_39 = ___inOff1;
		int32_t L_40 = V_1;
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(L_39, L_40));
		uint8_t L_42 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37), (uint8_t)L_42);
		int32_t L_43 = __this->___bufOff_19;
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		V_2 = L_44;
		__this->___bufOff_19 = L_44;
		int32_t L_45 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = __this->___bufBlock_12;
		if ((!(((uint32_t)L_45) == ((uint32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))))
		{
			goto IL_0130;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___bufBlock_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ___output3;
		int32_t L_49 = ___outOff4;
		int32_t L_50 = V_0;
		GcmBlockCipher_ProcessBlock_mF80A1D696E07EC9979EEDDD16A577BAFC1CE9FAC(__this, L_47, 0, L_48, ((int32_t)il2cpp_codegen_add(L_49, L_50)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->___bufBlock_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = __this->___bufBlock_12;
		int32_t L_53 = __this->___macSize_6;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_51, ((int32_t)16), (RuntimeArray*)L_52, 0, L_53, NULL);
		int32_t L_54 = __this->___macSize_6;
		__this->___bufOff_19 = L_54;
		int32_t L_55 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_55, ((int32_t)16)));
	}

IL_0130:
	{
		int32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_0134:
	{
		int32_t L_57 = V_1;
		int32_t L_58 = ___len2;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_00c5;
		}
	}

IL_0138:
	{
		int32_t L_59 = V_0;
		return L_59;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GcmBlockCipher_DoFinal_m5AF85CBF03932F45B132BF44BE503208D2C138E8 (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGcmExponentiator_t889C88199B1E25F4C5610EFD2AB4144F96F89832_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGcmExponentiator_tEDB2CF41858778F18EAD938A6589A762F43C776C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	{
		GcmBlockCipher_CheckStatus_mECAF4E7FA5D98319F745F0B85CF3EBBCF20C9CEE(__this, NULL);
		uint64_t L_0 = __this->___totalLength_20;
		if ((!(((uint64_t)L_0) == ((uint64_t)((int64_t)0)))))
		{
			goto IL_0016;
		}
	}
	{
		GcmBlockCipher_InitCipher_m8D5958AC7ED800FFB209C92932703AAC90BC5C2A(__this, NULL);
	}

IL_0016:
	{
		int32_t L_1 = __this->___bufOff_19;
		V_0 = L_1;
		bool L_2 = __this->___forEncryption_4;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___output0;
		int32_t L_4 = ___outOff1;
		int32_t L_5 = V_0;
		int32_t L_6 = __this->___macSize_6;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_3, L_4, ((int32_t)il2cpp_codegen_add(L_5, L_6)), _stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C, NULL);
		goto IL_0065;
	}

IL_003b:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___macSize_6;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_004f;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_9 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4901277BD17A5B2F9FD51DCD98D6CE81842202C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GcmBlockCipher_DoFinal_m5AF85CBF03932F45B132BF44BE503208D2C138E8_RuntimeMethod_var)));
	}

IL_004f:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = __this->___macSize_6;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_10, L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___output0;
		int32_t L_13 = ___outOff1;
		int32_t L_14 = V_0;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_12, L_13, L_14, _stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C, NULL);
	}

IL_0065:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___bufBlock_12;
		int32_t L_17 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___output0;
		int32_t L_19 = ___outOff1;
		GcmBlockCipher_ProcessPartial_m331570D2882148B099E8949CA51AA3CE923FF5C3(__this, L_16, 0, L_17, L_18, L_19, NULL);
	}

IL_0079:
	{
		uint64_t L_20 = __this->___atLength_23;
		int32_t L_21 = __this->___atBlockPos_22;
		__this->___atLength_23 = ((int64_t)il2cpp_codegen_add((int64_t)L_20, ((int64_t)(uint64_t)((uint32_t)L_21))));
		uint64_t L_22 = __this->___atLength_23;
		uint64_t L_23 = __this->___atLengthPre_24;
		if ((!(((uint64_t)L_22) > ((uint64_t)L_23))))
		{
			goto IL_0141;
		}
	}
	{
		int32_t L_24 = __this->___atBlockPos_22;
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_00c0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___S_at_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___atBlock_21;
		int32_t L_27 = __this->___atBlockPos_22;
		GcmBlockCipher_gHASHPartial_mCB900173D833F09922D5C41AFCAB71AA36DCA77E(__this, L_25, L_26, 0, L_27, NULL);
	}

IL_00c0:
	{
		uint64_t L_28 = __this->___atLengthPre_24;
		if ((!(((uint64_t)L_28) > ((uint64_t)((int64_t)0)))))
		{
			goto IL_00db;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___S_at_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___S_atPre_16;
		GcmUtilities_Xor_mF3DE5B3CA09288B71B5D6E0159C552B8C06BACD5(L_29, L_30, NULL);
	}

IL_00db:
	{
		uint64_t L_31 = __this->___totalLength_20;
		V_1 = ((int64_t)((uint64_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply((int64_t)L_31, ((int64_t)8))), ((int64_t)((int32_t)127))))>>7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_2 = L_32;
		RuntimeObject* L_33 = __this->___exp_3;
		if (L_33)
		{
			goto IL_0117;
		}
	}
	{
		BasicGcmExponentiator_t889C88199B1E25F4C5610EFD2AB4144F96F89832* L_34 = (BasicGcmExponentiator_t889C88199B1E25F4C5610EFD2AB4144F96F89832*)il2cpp_codegen_object_new(BasicGcmExponentiator_t889C88199B1E25F4C5610EFD2AB4144F96F89832_il2cpp_TypeInfo_var);
		BasicGcmExponentiator__ctor_m36D6363D489BD4C0EDEC41F879EB48638202F298(L_34, NULL);
		__this->___exp_3 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exp_3), (void*)L_34);
		RuntimeObject* L_35 = __this->___exp_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___H_10;
		InterfaceActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(0 /* System.Void Org.BouncyCastle.Crypto.Modes.Gcm.IGcmExponentiator::Init(System.Byte[]) */, IGcmExponentiator_tEDB2CF41858778F18EAD938A6589A762F43C776C_il2cpp_TypeInfo_var, L_35, L_36);
	}

IL_0117:
	{
		RuntimeObject* L_37 = __this->___exp_3;
		int64_t L_38 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_2;
		InterfaceActionInvoker2< int64_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.Modes.Gcm.IGcmExponentiator::ExponentiateX(System.Int64,System.Byte[]) */, IGcmExponentiator_tEDB2CF41858778F18EAD938A6589A762F43C776C_il2cpp_TypeInfo_var, L_37, L_38, L_39);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = __this->___S_at_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_2;
		GcmUtilities_Multiply_mC0F3EBA2CCEC2F7760C6DBC2F13B61CC15BA3E58(L_40, L_41, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = __this->___S_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = __this->___S_at_15;
		GcmUtilities_Xor_mF3DE5B3CA09288B71B5D6E0159C552B8C06BACD5(L_42, L_43, NULL);
	}

IL_0141:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_3 = L_44;
		uint64_t L_45 = __this->___atLength_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_3;
		Pack_UInt64_To_BE_m37F9E6B43BA608646BA3860E72A6DF1799B0AC68(((int64_t)il2cpp_codegen_multiply((int64_t)L_45, ((int64_t)8))), L_46, 0, NULL);
		uint64_t L_47 = __this->___totalLength_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_3;
		Pack_UInt64_To_BE_m37F9E6B43BA608646BA3860E72A6DF1799B0AC68(((int64_t)il2cpp_codegen_multiply((int64_t)L_47, ((int64_t)8))), L_48, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = __this->___S_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_3;
		GcmBlockCipher_gHASHBlock_mCFC1A0B102860733A2DE83A3E5925A05DE8D71FC(__this, L_49, L_50, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_4 = L_51;
		RuntimeObject* L_52 = __this->___cipher_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = __this->___J0_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_4;
		int32_t L_55;
		L_55 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_52, L_53, 0, L_54, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = __this->___S_14;
		GcmUtilities_Xor_mF3DE5B3CA09288B71B5D6E0159C552B8C06BACD5(L_56, L_57, NULL);
		int32_t L_58 = V_0;
		V_5 = L_58;
		int32_t L_59 = __this->___macSize_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_59);
		__this->___macBlock_13 = L_60;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___macBlock_13), (void*)L_60);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = __this->___macBlock_13;
		int32_t L_63 = __this->___macSize_6;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_61, 0, (RuntimeArray*)L_62, 0, L_63, NULL);
		bool L_64 = __this->___forEncryption_4;
		if (!L_64)
		{
			goto IL_01fb;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = __this->___macBlock_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = ___output0;
		int32_t L_67 = ___outOff1;
		int32_t L_68 = __this->___bufOff_19;
		int32_t L_69 = __this->___macSize_6;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_65, 0, (RuntimeArray*)L_66, ((int32_t)il2cpp_codegen_add(L_67, L_68)), L_69, NULL);
		int32_t L_70 = V_5;
		int32_t L_71 = __this->___macSize_6;
		V_5 = ((int32_t)il2cpp_codegen_add(L_70, L_71));
		goto IL_0237;
	}

IL_01fb:
	{
		int32_t L_72 = __this->___macSize_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_72);
		V_6 = L_73;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = __this->___bufBlock_12;
		int32_t L_75 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = V_6;
		int32_t L_77 = __this->___macSize_6;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_74, L_75, (RuntimeArray*)L_76, 0, L_77, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = __this->___macBlock_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = Arrays_ConstantTimeAreEqual_m276F471905921D3AACBB6A6A6CE63DCFD4CBAE3E(L_78, L_79, NULL);
		if (L_80)
		{
			goto IL_0237;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_81 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_81, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07057C293AF5E36D3E606C18B5D474CAE01DB34A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_81, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GcmBlockCipher_DoFinal_m5AF85CBF03932F45B132BF44BE503208D2C138E8_RuntimeMethod_var)));
	}

IL_0237:
	{
		GcmBlockCipher_Reset_mF6175865E63FAF6A456A35769CB41437E0835878(__this, (bool)0, NULL);
		int32_t L_82 = V_5;
		return L_82;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_Reset_m75B8D4B5C57C8258D4C4C41FE707B4D8B55E50B4 (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, const RuntimeMethod* method) 
{
	{
		GcmBlockCipher_Reset_mF6175865E63FAF6A456A35769CB41437E0835878(__this, (bool)1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::Reset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_Reset_mF6175865E63FAF6A456A35769CB41437E0835878 (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, bool ___clearMac0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_1;
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___S_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___S_14), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___S_at_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___S_at_15), (void*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___S_atPre_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___S_atPre_16), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___atBlock_21 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___atBlock_21), (void*)L_4);
		__this->___atBlockPos_22 = 0;
		__this->___atLength_23 = ((int64_t)0);
		__this->___atLengthPre_24 = ((int64_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___J0_11;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = Arrays_Clone_mC73CD122DC37EDEB733EC84DB0137D8D7DD5B87F(L_5, NULL);
		__this->___counter_17 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___counter_17), (void*)L_6);
		__this->___blocksRemaining_18 = ((int32_t)-2);
		__this->___bufOff_19 = 0;
		__this->___totalLength_20 = ((int64_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___bufBlock_12;
		if (!L_7)
		{
			goto IL_0092;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___bufBlock_12;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		Arrays_Fill_m23EB1BA27E305EC869992BD6CA3D6B30F142FD22(L_8, (uint8_t)0, NULL);
	}

IL_0092:
	{
		bool L_9 = ___clearMac0;
		if (!L_9)
		{
			goto IL_009c;
		}
	}
	{
		__this->___macBlock_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___macBlock_13), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
	}

IL_009c:
	{
		bool L_10 = __this->___forEncryption_4;
		if (!L_10)
		{
			goto IL_00ac;
		}
	}
	{
		__this->___initialised_5 = (bool)0;
		return;
	}

IL_00ac:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___initialAssociatedText_9;
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___initialAssociatedText_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___initialAssociatedText_9;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32) */, __this, L_12, 0, ((int32_t)(((RuntimeArray*)L_13)->max_length)));
	}

IL_00c9:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_ProcessBlock_mF80A1D696E07EC9979EEDDD16A577BAFC1CE9FAC (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___bufOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output2;
		int32_t L_1 = ___outOff3;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_0, L_1, ((int32_t)16), _stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C, NULL);
		uint64_t L_2 = __this->___totalLength_20;
		if ((!(((uint64_t)L_2) == ((uint64_t)((int64_t)0)))))
		{
			goto IL_001f;
		}
	}
	{
		GcmBlockCipher_InitCipher_m8D5958AC7ED800FFB209C92932703AAC90BC5C2A(__this, NULL);
	}

IL_001f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		GcmBlockCipher_GetNextCtrBlock_m747CC9B970706C4EB4521247B2776264899F9497(__this, L_4, NULL);
		bool L_5 = __this->___forEncryption_4;
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___buf0;
		int32_t L_8 = ___bufOff1;
		GcmUtilities_Xor_m1FB8C3D1BED120F8E2F4A86FB2AC7A1B5512ED6E(L_6, L_7, L_8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___S_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		GcmBlockCipher_gHASHBlock_mCFC1A0B102860733A2DE83A3E5925A05DE8D71FC(__this, L_9, L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___output2;
		int32_t L_13 = ___outOff3;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_11, 0, (RuntimeArray*)L_12, L_13, ((int32_t)16), NULL);
		goto IL_0073;
	}

IL_0059:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___S_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___buf0;
		int32_t L_16 = ___bufOff1;
		GcmBlockCipher_gHASHBlock_m30FDCFAAB124DA778E5CA3437CAB9362478DFF29(__this, L_14, L_15, L_16, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___buf0;
		int32_t L_19 = ___bufOff1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___output2;
		int32_t L_21 = ___outOff3;
		GcmUtilities_Xor_m1DA1AB941B9AEF620AB1CB54F03068A26A56B4D7(L_17, 0, L_18, L_19, L_20, L_21, NULL);
	}

IL_0073:
	{
		uint64_t L_22 = __this->___totalLength_20;
		__this->___totalLength_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_22, ((int64_t)((int32_t)16))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::ProcessPartial(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_ProcessPartial_m331570D2882148B099E8949CA51AA3CE923FF5C3 (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf0, int32_t ___off1, int32_t ___len2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOff4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		GcmBlockCipher_GetNextCtrBlock_m747CC9B970706C4EB4521247B2776264899F9497(__this, L_1, NULL);
		bool L_2 = __this->___forEncryption_4;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buf0;
		int32_t L_4 = ___off1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		int32_t L_6 = ___len2;
		GcmUtilities_Xor_mAA66FE5C20761579CC7440B18BC135AC31737D22(L_3, L_4, L_5, 0, L_6, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___S_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___buf0;
		int32_t L_9 = ___off1;
		int32_t L_10 = ___len2;
		GcmBlockCipher_gHASHPartial_mCB900173D833F09922D5C41AFCAB71AA36DCA77E(__this, L_7, L_8, L_9, L_10, NULL);
		goto IL_004b;
	}

IL_0032:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___S_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___buf0;
		int32_t L_13 = ___off1;
		int32_t L_14 = ___len2;
		GcmBlockCipher_gHASHPartial_mCB900173D833F09922D5C41AFCAB71AA36DCA77E(__this, L_11, L_12, L_13, L_14, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___buf0;
		int32_t L_16 = ___off1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		int32_t L_18 = ___len2;
		GcmUtilities_Xor_mAA66FE5C20761579CC7440B18BC135AC31737D22(L_15, L_16, L_17, 0, L_18, NULL);
	}

IL_004b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___buf0;
		int32_t L_20 = ___off1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___output3;
		int32_t L_22 = ___outOff4;
		int32_t L_23 = ___len2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_19, L_20, (RuntimeArray*)L_21, L_22, L_23, NULL);
		uint64_t L_24 = __this->___totalLength_20;
		int32_t L_25 = ___len2;
		__this->___totalLength_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_24, ((int64_t)(uint64_t)((uint32_t)L_25))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::gHASH(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_gHASH_m9B51FCD63890BDE82527032575EC3E14BAF2350A (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Y0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, int32_t ___len2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		int32_t L_0 = ___len2;
		int32_t L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), ((int32_t)16), NULL);
		V_1 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___Y0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___b1;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		GcmBlockCipher_gHASHPartial_mCB900173D833F09922D5C41AFCAB71AA36DCA77E(__this, L_3, L_4, L_5, L_6, NULL);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)16)));
	}

IL_001e:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___len2;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::gHASHBlock(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_gHASHBlock_mCFC1A0B102860733A2DE83A3E5925A05DE8D71FC (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Y0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGcmMultiplier_tAF775B12F6AF749A4932AFBD6899B0D54A00826B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___Y0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___b1;
		GcmUtilities_Xor_mF3DE5B3CA09288B71B5D6E0159C552B8C06BACD5(L_0, L_1, NULL);
		RuntimeObject* L_2 = __this->___multiplier_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___Y0;
		InterfaceActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier::MultiplyH(System.Byte[]) */, IGcmMultiplier_tAF775B12F6AF749A4932AFBD6899B0D54A00826B_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::gHASHBlock(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_gHASHBlock_m30FDCFAAB124DA778E5CA3437CAB9362478DFF29 (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Y0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, int32_t ___off2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGcmMultiplier_tAF775B12F6AF749A4932AFBD6899B0D54A00826B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___Y0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___b1;
		int32_t L_2 = ___off2;
		GcmUtilities_Xor_m1FB8C3D1BED120F8E2F4A86FB2AC7A1B5512ED6E(L_0, L_1, L_2, NULL);
		RuntimeObject* L_3 = __this->___multiplier_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___Y0;
		InterfaceActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier::MultiplyH(System.Byte[]) */, IGcmMultiplier_tAF775B12F6AF749A4932AFBD6899B0D54A00826B_il2cpp_TypeInfo_var, L_3, L_4);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::gHASHPartial(System.Byte[],System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_gHASHPartial_mCB900173D833F09922D5C41AFCAB71AA36DCA77E (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Y0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, int32_t ___off2, int32_t ___len3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGcmMultiplier_tAF775B12F6AF749A4932AFBD6899B0D54A00826B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___Y0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___b1;
		int32_t L_2 = ___off2;
		int32_t L_3 = ___len3;
		GcmUtilities_Xor_m068CDECE6B130AE53AF131920C3FAE08C3AD9072(L_0, L_1, L_2, L_3, NULL);
		RuntimeObject* L_4 = __this->___multiplier_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___Y0;
		InterfaceActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier::MultiplyH(System.Byte[]) */, IGcmMultiplier_tAF775B12F6AF749A4932AFBD6899B0D54A00826B_il2cpp_TypeInfo_var, L_4, L_5);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::GetNextCtrBlock(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_GetNextCtrBlock_m747CC9B970706C4EB4521247B2776264899F9497 (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___block0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->___blocksRemaining_18;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52398EFA68ACC6FAF0EB6C85C594D6112C3901C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GcmBlockCipher_GetNextCtrBlock_m747CC9B970706C4EB4521247B2776264899F9497_RuntimeMethod_var)));
	}

IL_0013:
	{
		uint32_t L_2 = __this->___blocksRemaining_18;
		__this->___blocksRemaining_18 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1));
		V_0 = 1;
		uint32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___counter_17;
		int32_t L_5 = ((int32_t)15);
		uint8_t L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___counter_17;
		uint32_t L_8 = V_0;
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)((int32_t)(uint8_t)L_8));
		uint32_t L_9 = V_0;
		V_0 = ((int32_t)((uint32_t)L_9>>8));
		uint32_t L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___counter_17;
		int32_t L_12 = ((int32_t)14);
		uint8_t L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___counter_17;
		uint32_t L_15 = V_0;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint8_t)((int32_t)(uint8_t)L_15));
		uint32_t L_16 = V_0;
		V_0 = ((int32_t)((uint32_t)L_16>>8));
		uint32_t L_17 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___counter_17;
		int32_t L_19 = ((int32_t)13);
		uint8_t L_20 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)L_20));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___counter_17;
		uint32_t L_22 = V_0;
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint8_t)((int32_t)(uint8_t)L_22));
		uint32_t L_23 = V_0;
		V_0 = ((int32_t)((uint32_t)L_23>>8));
		uint32_t L_24 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___counter_17;
		int32_t L_26 = ((int32_t)12);
		uint8_t L_27 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_27));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___counter_17;
		uint32_t L_29 = V_0;
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint8_t)((int32_t)(uint8_t)L_29));
		RuntimeObject* L_30 = __this->___cipher_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = __this->___counter_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___block0;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_30, L_31, 0, L_32, 0);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::CheckStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmBlockCipher_CheckStatus_mECAF4E7FA5D98319F745F0B85CF3EBBCF20C9CEE (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___initialised_5;
		if (L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1 = __this->___forEncryption_4;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5024526D2ED5A492FD8EFB18EDFB1BE1B965E2A5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GcmBlockCipher_CheckStatus_mECAF4E7FA5D98319F745F0B85CF3EBBCF20C9CEE_RuntimeMethod_var)));
	}

IL_001b:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2377DBFD6A0480712274E803BEE9BEB10CA08A01)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GcmBlockCipher_CheckStatus_mECAF4E7FA5D98319F745F0B85CF3EBBCF20C9CEE_RuntimeMethod_var)));
	}

IL_0026:
	{
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
// System.Void Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GOfbBlockCipher__ctor_m41728F9A6150D41A48DA87943290B294C58A0227 (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, RuntimeObject* ___cipher0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___firstStep_7 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___cipher0;
		__this->___cipher_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_6), (void*)L_0);
		RuntimeObject* L_1 = ___cipher0;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		__this->___blockSize_5 = L_2;
		int32_t L_3 = __this->___blockSize_5;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97A9A868349D6F48CDEEB77E1B607C7ECD80E72E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GOfbBlockCipher__ctor_m41728F9A6150D41A48DA87943290B294C58A0227_RuntimeMethod_var)));
	}

IL_0034:
	{
		RuntimeObject* L_5 = ___cipher0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___IV_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IV_2), (void*)L_7);
		RuntimeObject* L_8 = ___cipher0;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->___ofbV_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ofbV_3), (void*)L_10);
		RuntimeObject* L_11 = ___cipher0;
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_12);
		__this->___ofbOutV_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ofbOutV_4), (void*)L_13);
		return;
	}
}
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::GetUnderlyingCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GOfbBlockCipher_GetUnderlyingCipher_m73C188EB0E94CA84AF9A82CEF8DFF780EC63F63E (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___cipher_6;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GOfbBlockCipher_Init_mC3C4E7D5CD056328FF775DFF7D2A410ACC3BECEF (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	{
		__this->___firstStep_7 = (bool)1;
		__this->___N3_8 = 0;
		__this->___N4_9 = 0;
		RuntimeObject* L_0 = ___parameters1;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_0, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0094;
		}
	}
	{
		RuntimeObject* L_1 = ___parameters1;
		V_0 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_1, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_2, NULL);
		V_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___IV_2;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0076;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___IV_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___IV_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), ((int32_t)(((RuntimeArray*)L_9)->max_length)))), ((int32_t)(((RuntimeArray*)L_10)->max_length)), NULL);
		V_2 = 0;
		goto IL_0065;
	}

IL_0058:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___IV_2;
		int32_t L_12 = V_2;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)0);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0065:
	{
		int32_t L_14 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___IV_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), ((int32_t)(((RuntimeArray*)L_16)->max_length)))))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_008c;
	}

IL_0076:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___IV_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___IV_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_17, 0, (RuntimeArray*)L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)), NULL);
	}

IL_008c:
	{
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_20 = V_0;
		RuntimeObject* L_21;
		L_21 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_20, NULL);
		___parameters1 = L_21;
	}

IL_0094:
	{
		GOfbBlockCipher_Reset_m2231BC960D8CE99D9D179CB25E5593102EEF209B(__this, NULL);
		RuntimeObject* L_22 = ___parameters1;
		if (!L_22)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_23 = __this->___cipher_6;
		RuntimeObject* L_24 = ___parameters1;
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_23, (bool)1, L_24);
	}

IL_00aa:
	{
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GOfbBlockCipher_get_AlgorithmName_mA5B86384AAFF533446F1DCBC01EFD0D63414FCBD (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2C8D3FBAAD06D3594B0F1E444B21F1F2C527617);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_6;
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, _stringLiteralB2C8D3FBAAD06D3594B0F1E444B21F1F2C527617, NULL);
		return L_2;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GOfbBlockCipher_get_IsPartialBlockOkay_mAA148729F478B4F781B1D5A70947683977954891 (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GOfbBlockCipher_GetBlockSize_mC128D00BC597F4C8E2AF8FC4426D476D1C53EB6B (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___blockSize_5;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GOfbBlockCipher_ProcessBlock_mF94A5E757AE3B78FC7B0899E5DD9859870D599F3 (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___inOff1;
		int32_t L_1 = __this->___blockSize_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_3 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GOfbBlockCipher_ProcessBlock_mF94A5E757AE3B78FC7B0899E5DD9859870D599F3_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_4 = ___outOff3;
		int32_t L_5 = __this->___blockSize_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___output2;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_7 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GOfbBlockCipher_ProcessBlock_mF94A5E757AE3B78FC7B0899E5DD9859870D599F3_RuntimeMethod_var)));
	}

IL_0031:
	{
		bool L_8 = __this->___firstStep_7;
		if (!L_8)
		{
			goto IL_0080;
		}
	}
	{
		__this->___firstStep_7 = (bool)0;
		RuntimeObject* L_9 = __this->___cipher_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___ofbV_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___ofbOutV_4;
		int32_t L_12;
		L_12 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_9, L_10, 0, L_11, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___ofbOutV_4;
		int32_t L_14;
		L_14 = GOfbBlockCipher_bytesToint_m132EB4DCD140F572F15B3EAA227BE14184F1B06C(__this, L_13, 0, NULL);
		__this->___N3_8 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___ofbOutV_4;
		int32_t L_16;
		L_16 = GOfbBlockCipher_bytesToint_m132EB4DCD140F572F15B3EAA227BE14184F1B06C(__this, L_15, 4, NULL);
		__this->___N4_9 = L_16;
	}

IL_0080:
	{
		int32_t L_17 = __this->___N3_8;
		__this->___N3_8 = ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)16843009)));
		int32_t L_18 = __this->___N4_9;
		__this->___N4_9 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)16843012)));
		int32_t L_19 = __this->___N4_9;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)16843012))))
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_20 = __this->___N4_9;
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_21 = __this->___N4_9;
		__this->___N4_9 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00c8:
	{
		int32_t L_22 = __this->___N3_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___ofbV_3;
		GOfbBlockCipher_intTobytes_m8DB65F009CD71CBF3B1D5C1A27C75326E1FDEADF(__this, L_22, L_23, 0, NULL);
		int32_t L_24 = __this->___N4_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___ofbV_3;
		GOfbBlockCipher_intTobytes_m8DB65F009CD71CBF3B1D5C1A27C75326E1FDEADF(__this, L_24, L_25, 4, NULL);
		RuntimeObject* L_26 = __this->___cipher_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___ofbV_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___ofbOutV_4;
		int32_t L_29;
		L_29 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_26, L_27, 0, L_28, 0);
		V_0 = 0;
		goto IL_0125;
	}

IL_010c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___output2;
		int32_t L_31 = ___outOff3;
		int32_t L_32 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___ofbOutV_4;
		int32_t L_34 = V_0;
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___input0;
		int32_t L_38 = ___inOff1;
		int32_t L_39 = V_0;
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_38, L_39));
		uint8_t L_41 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_31, L_32))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_36^(int32_t)L_41))));
		int32_t L_42 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0125:
	{
		int32_t L_43 = V_0;
		int32_t L_44 = __this->___blockSize_5;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_010c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = __this->___ofbV_3;
		int32_t L_46 = __this->___blockSize_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___ofbV_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = __this->___ofbV_3;
		int32_t L_49 = __this->___blockSize_5;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_45, L_46, (RuntimeArray*)L_47, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_48)->max_length)), L_49)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = __this->___ofbOutV_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->___ofbV_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = __this->___ofbV_3;
		int32_t L_53 = __this->___blockSize_5;
		int32_t L_54 = __this->___blockSize_5;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_50, 0, (RuntimeArray*)L_51, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_52)->max_length)), L_53)), L_54, NULL);
		int32_t L_55 = __this->___blockSize_5;
		return L_55;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GOfbBlockCipher_Reset_m2231BC960D8CE99D9D179CB25E5593102EEF209B (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___IV_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___ofbV_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___IV_2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		RuntimeObject* L_3 = __this->___cipher_6;
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_3);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::bytesToint(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GOfbBlockCipher_bytesToint_m132EB4DCD140F572F15B3EAA227BE14184F1B06C (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inBytes0, int32_t ___inOff1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___inBytes0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = ((int32_t)il2cpp_codegen_add(L_1, 3));
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___inBytes0;
		int32_t L_5 = ___inOff1;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 2));
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___inBytes0;
		int32_t L_9 = ___inOff1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint8_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___inBytes0;
		int32_t L_13 = ___inOff1;
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int64_t)(((int64_t)((int32_t)((int32_t)L_3<<((int32_t)24))))&((int64_t)(uint64_t)((uint32_t)((int32_t)-16777216)))))), ((int32_t)(((int32_t)((int32_t)L_7<<((int32_t)16)))&((int32_t)16711680))))), ((int32_t)(((int32_t)((int32_t)L_11<<8))&((int32_t)65280))))), ((int32_t)((int32_t)L_15&((int32_t)255)))));
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::intTobytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GOfbBlockCipher_intTobytes_m8DB65F009CD71CBF3B1D5C1A27C75326E1FDEADF (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, int32_t ___num0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes1, int32_t ___outOff2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___outBytes1;
		int32_t L_1 = ___outOff2;
		int32_t L_2 = ___num0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_2>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___outBytes1;
		int32_t L_4 = ___outOff2;
		int32_t L_5 = ___num0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_5>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___outBytes1;
		int32_t L_7 = ___outOff2;
		int32_t L_8 = ___num0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_8>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___outBytes1;
		int32_t L_10 = ___outOff2;
		int32_t L_11 = ___num0;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)((int32_t)(uint8_t)L_11));
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
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::setNb(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_setNb_m1691E94D49CC5EABA0F785F00CB19CC414DAC106 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, int32_t ___Nb0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___Nb0;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___Nb0;
		if ((((int32_t)L_1) == ((int32_t)6)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_2 = ___Nb0;
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_0014;
		}
	}

IL_000c:
	{
		int32_t L_3 = ___Nb0;
		__this->___Nb__17 = L_3;
		return;
	}

IL_0014:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral86676EF5625B07BB6A212B0248104BFAD8CDFD5C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCcmBlockCipher_setNb_m1691E94D49CC5EABA0F785F00CB19CC414DAC106_RuntimeMethod_var)));
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher__ctor_m81F23A22F88A6898D86E98BA6B728C2B6F1276D2 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, RuntimeObject* ___engine0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___engine0;
		KCcmBlockCipher__ctor_mADC6A0960D163766B3DBB59C900AAA3F8B473472(__this, L_0, 4, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher__ctor_mADC6A0960D163766B3DBB59C900AAA3F8B473472 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, RuntimeObject* ___engine0, int32_t ___Nb1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		__this->___associatedText_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___associatedText_15), (void*)L_0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_1, NULL);
		__this->___data_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_16), (void*)L_1);
		__this->___Nb__17 = 4;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_2 = ___engine0;
		__this->___engine_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_4), (void*)L_2);
		RuntimeObject* L_3 = ___engine0;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_3);
		__this->___macSize_5 = L_4;
		RuntimeObject* L_5 = ___engine0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___nonce_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nonce_10), (void*)L_7);
		RuntimeObject* L_8 = ___engine0;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->___initialAssociatedText_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialAssociatedText_7), (void*)L_10);
		RuntimeObject* L_11 = ___engine0;
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_12);
		__this->___mac_8 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mac_8), (void*)L_13);
		RuntimeObject* L_14 = ___engine0;
		int32_t L_15;
		L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_15);
		__this->___macBlock_9 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___macBlock_9), (void*)L_16);
		RuntimeObject* L_17 = ___engine0;
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_18);
		__this->___G1_11 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___G1_11), (void*)L_19);
		RuntimeObject* L_20 = ___engine0;
		int32_t L_21;
		L_21 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_21);
		__this->___buffer_12 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_12), (void*)L_22);
		RuntimeObject* L_23 = ___engine0;
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_24);
		__this->___s_13 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___s_13), (void*)L_25);
		RuntimeObject* L_26 = ___engine0;
		int32_t L_27;
		L_27 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_26);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_27);
		__this->___counter_14 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___counter_14), (void*)L_28);
		int32_t L_29 = ___Nb1;
		KCcmBlockCipher_setNb_m1691E94D49CC5EABA0F785F00CB19CC414DAC106(__this, L_29, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_Init_m04E0D4833CEC3D87BCE2F981D63DC62EBF8D2B98 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___parameters1;
		if (!((AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B*)IsInstClass((RuntimeObject*)L_0, AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var)))
		{
			goto IL_0071;
		}
	}
	{
		RuntimeObject* L_1 = ___parameters1;
		V_1 = ((AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B*)CastclassClass((RuntimeObject*)L_1, AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var));
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_2 = V_1;
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_MacSize() */, L_2);
		il2cpp_codegen_runtime_class_init_inline(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var);
		int32_t L_4 = ((KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_StaticFields*)il2cpp_codegen_static_fields_for(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var))->___MAX_MAC_BIT_LENGTH_2;
		if ((((int32_t)L_3) > ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_5 = V_1;
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_MacSize() */, L_5);
		il2cpp_codegen_runtime_class_init_inline(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var);
		int32_t L_7 = ((KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_StaticFields*)il2cpp_codegen_static_fields_for(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var))->___MIN_MAC_BIT_LENGTH_3;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0033;
		}
	}
	{
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_8 = V_1;
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_MacSize() */, L_8);
		if (!((int32_t)(L_9%8)))
		{
			goto IL_003e;
		}
	}

IL_0033:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2367BCDD7B214D5EEC78058C7E0F28C2DB18486F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCcmBlockCipher_Init_m04E0D4833CEC3D87BCE2F981D63DC62EBF8D2B98_RuntimeMethod_var)));
	}

IL_003e:
	{
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(7 /* System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetNonce() */, L_11);
		__this->___nonce_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nonce_10), (void*)L_12);
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_13 = V_1;
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_MacSize() */, L_13);
		il2cpp_codegen_runtime_class_init_inline(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var);
		int32_t L_15 = ((KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_StaticFields*)il2cpp_codegen_static_fields_for(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var))->___BITS_IN_BYTE_1;
		__this->___macSize_5 = ((int32_t)(L_14/L_15));
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_16 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetAssociatedText() */, L_16);
		__this->___initialAssociatedText_7 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialAssociatedText_7), (void*)L_17);
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_18 = V_1;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_19;
		L_19 = VirtualFuncInvoker0< KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* >::Invoke(4 /* Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_Key() */, L_18);
		V_0 = L_19;
		goto IL_00bb;
	}

IL_0071:
	{
		RuntimeObject* L_20 = ___parameters1;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_20, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_00b0;
		}
	}
	{
		RuntimeObject* L_21 = ___parameters1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_21, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)), NULL);
		__this->___nonce_10 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nonce_10), (void*)L_22);
		RuntimeObject* L_23 = __this->___engine_4;
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_23);
		__this->___macSize_5 = L_24;
		__this->___initialAssociatedText_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialAssociatedText_7), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		RuntimeObject* L_25 = ___parameters1;
		RuntimeObject* L_26;
		L_26 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_25, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_26;
		goto IL_00bb;
	}

IL_00b0:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_27 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1247379A9C42BAF4DAD87F9ABE2F0CB38AF22A2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCcmBlockCipher_Init_m04E0D4833CEC3D87BCE2F981D63DC62EBF8D2B98_RuntimeMethod_var)));
	}

IL_00bb:
	{
		int32_t L_28 = __this->___macSize_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_28);
		__this->___mac_8 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mac_8), (void*)L_29);
		bool L_30 = ___forEncryption0;
		__this->___forEncryption_6 = L_30;
		RuntimeObject* L_31 = __this->___engine_4;
		RuntimeObject* L_32 = V_0;
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_31, (bool)1, L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___counter_14;
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___initialAssociatedText_7;
		if (!L_34)
		{
			goto IL_0106;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->___initialAssociatedText_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___initialAssociatedText_7;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(22 /* System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32) */, __this, L_35, 0, ((int32_t)(((RuntimeArray*)L_36)->max_length)));
	}

IL_0106:
	{
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KCcmBlockCipher_get_AlgorithmName_mE2322A7D266529BC36E4864AE1B0AB7A5E8312A9 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8395859B32B7B887C6F2ED68A0C1A5C2784CD17);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___engine_4;
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, _stringLiteralC8395859B32B7B887C6F2ED68A0C1A5C2784CD17, NULL);
		return L_2;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCcmBlockCipher_GetBlockSize_m4314E62BC6AD77C09A880D58C1CC6BCFEA16E7F3 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___engine_4;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::GetUnderlyingCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KCcmBlockCipher_GetUnderlyingCipher_mA5470EAE4FDC9CB8FD5530746694EE2154368936 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___engine_4;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessAadByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_ProcessAadByte_mC958A5D4C019DF0F1988523A75863D6B4A417704 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___associatedText_15;
		uint8_t L_1 = ___input0;
		VirtualActionInvoker1< uint8_t >::Invoke(37 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_0, L_1);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_ProcessAadBytes_m1DA9CB7AE59E49E3E13F2894FDFF4FD69CA11AE4 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___len2, const RuntimeMethod* method) 
{
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___associatedText_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___input0;
		int32_t L_2 = ___inOff1;
		int32_t L_3 = ___len2;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessAAD(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_ProcessAAD_m79FD33523E877DE08A1E4990E722A73FC05828F0 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___assocText0, int32_t ___assocOff1, int32_t ___assocLen2, int32_t ___dataLen3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		int32_t L_0 = ___assocLen2;
		int32_t L_1 = ___assocOff1;
		RuntimeObject* L_2 = __this->___engine_4;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_2);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_0, L_1))) >= ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38D09B1907F51A21FA890AD1B24D91155B49D4DB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCcmBlockCipher_ProcessAAD_m79FD33523E877DE08A1E4990E722A73FC05828F0_RuntimeMethod_var)));
	}

IL_001b:
	{
		int32_t L_5 = ___assocLen2;
		RuntimeObject* L_6 = __this->___engine_4;
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_6);
		if (!((int32_t)(L_5%L_7)))
		{
			goto IL_0035;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral885C1F522AFB0B733EF983628BB641707475502A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCcmBlockCipher_ProcessAAD_m79FD33523E877DE08A1E4990E722A73FC05828F0_RuntimeMethod_var)));
	}

IL_0035:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___nonce_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___G1_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___nonce_10;
		int32_t L_12 = __this->___Nb__17;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), 1)), NULL);
		int32_t L_13 = ___dataLen3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___buffer_12;
		KCcmBlockCipher_intToBytes_m16AC65329A63E3BDCB6643C4A0601D00FFD06A2D(__this, L_13, L_14, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___buffer_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___G1_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___nonce_10;
		int32_t L_18 = __this->___Nb__17;
		il2cpp_codegen_runtime_class_init_inline(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var);
		int32_t L_19 = ((KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_StaticFields*)il2cpp_codegen_static_fields_for(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var))->___BYTES_IN_INT_0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), 1)), L_19, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___G1_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___G1_11;
		int32_t L_22 = __this->___macSize_5;
		uint8_t L_23;
		L_23 = KCcmBlockCipher_getFlag_mE35B88807B9FF2999EB5E7BD4B4C62BFDFDD888E(__this, (bool)1, L_22, NULL);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_21)->max_length)), 1))), (uint8_t)L_23);
		RuntimeObject* L_24 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___G1_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___macBlock_9;
		int32_t L_27;
		L_27 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_24, L_25, 0, L_26, 0);
		int32_t L_28 = ___assocLen2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___buffer_12;
		KCcmBlockCipher_intToBytes_m16AC65329A63E3BDCB6643C4A0601D00FFD06A2D(__this, L_28, L_29, 0, NULL);
		int32_t L_30 = ___assocLen2;
		RuntimeObject* L_31 = __this->___engine_4;
		int32_t L_32;
		L_32 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_31);
		int32_t L_33 = __this->___Nb__17;
		if ((((int32_t)L_30) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_32, L_33)))))
		{
			goto IL_0166;
		}
	}
	{
		V_0 = 0;
		goto IL_0114;
	}

IL_00ef:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___buffer_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = L_34;
		V_5 = L_35;
		int32_t L_36 = V_0;
		int32_t L_37 = __this->___Nb__17;
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(L_36, L_37));
		V_6 = L_38;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_5;
		intptr_t L_40 = V_6;
		intptr_t L_41 = L_40;
		uint8_t L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___assocText0;
		int32_t L_44 = ___assocOff1;
		int32_t L_45 = V_0;
		int32_t L_46 = ((int32_t)il2cpp_codegen_add(L_44, L_45));
		uint8_t L_47 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_42^(int32_t)L_47))));
		int32_t L_48 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0114:
	{
		int32_t L_49 = V_0;
		int32_t L_50 = ___assocLen2;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_00ef;
		}
	}
	{
		V_1 = 0;
		goto IL_013d;
	}

IL_011c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->___macBlock_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = L_51;
		V_5 = L_52;
		int32_t L_53 = V_1;
		int32_t L_54 = L_53;
		V_6 = L_54;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_5;
		intptr_t L_56 = V_6;
		intptr_t L_57 = L_56;
		uint8_t L_58 = (L_55)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = __this->___buffer_12;
		int32_t L_60 = V_1;
		int32_t L_61 = L_60;
		uint8_t L_62 = (L_59)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_61));
		(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_58^(int32_t)L_62))));
		int32_t L_63 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_013d:
	{
		int32_t L_64 = V_1;
		RuntimeObject* L_65 = __this->___engine_4;
		int32_t L_66;
		L_66 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_65);
		if ((((int32_t)L_64) < ((int32_t)L_66)))
		{
			goto IL_011c;
		}
	}
	{
		RuntimeObject* L_67 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = __this->___macBlock_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = __this->___macBlock_9;
		int32_t L_70;
		L_70 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_67, L_68, 0, L_69, 0);
		return;
	}

IL_0166:
	{
		V_2 = 0;
		goto IL_018b;
	}

IL_016a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = __this->___macBlock_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = L_71;
		V_5 = L_72;
		int32_t L_73 = V_2;
		int32_t L_74 = L_73;
		V_6 = L_74;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = V_5;
		intptr_t L_76 = V_6;
		intptr_t L_77 = L_76;
		uint8_t L_78 = (L_75)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_77));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = __this->___buffer_12;
		int32_t L_80 = V_2;
		int32_t L_81 = L_80;
		uint8_t L_82 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		(L_72)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_74), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_78^(int32_t)L_82))));
		int32_t L_83 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_018b:
	{
		int32_t L_84 = V_2;
		RuntimeObject* L_85 = __this->___engine_4;
		int32_t L_86;
		L_86 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_85);
		if ((((int32_t)L_84) < ((int32_t)L_86)))
		{
			goto IL_016a;
		}
	}
	{
		RuntimeObject* L_87 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = __this->___macBlock_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = __this->___macBlock_9;
		int32_t L_90;
		L_90 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_87, L_88, 0, L_89, 0);
		int32_t L_91 = ___assocLen2;
		V_3 = L_91;
		goto IL_0224;
	}

IL_01b7:
	{
		V_4 = 0;
		goto IL_01de;
	}

IL_01bc:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = __this->___macBlock_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = L_92;
		V_5 = L_93;
		int32_t L_94 = V_4;
		int32_t L_95 = L_94;
		V_6 = L_95;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = V_5;
		intptr_t L_97 = V_6;
		intptr_t L_98 = L_97;
		uint8_t L_99 = (L_96)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_98));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = ___assocText0;
		int32_t L_101 = V_4;
		int32_t L_102 = ___assocOff1;
		int32_t L_103 = ((int32_t)il2cpp_codegen_add(L_101, L_102));
		uint8_t L_104 = (L_100)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_103));
		(L_93)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_95), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_99^(int32_t)L_104))));
		int32_t L_105 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_105, 1));
	}

IL_01de:
	{
		int32_t L_106 = V_4;
		RuntimeObject* L_107 = __this->___engine_4;
		int32_t L_108;
		L_108 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_107);
		if ((((int32_t)L_106) < ((int32_t)L_108)))
		{
			goto IL_01bc;
		}
	}
	{
		RuntimeObject* L_109 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_110 = __this->___macBlock_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111 = __this->___macBlock_9;
		int32_t L_112;
		L_112 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_109, L_110, 0, L_111, 0);
		int32_t L_113 = ___assocOff1;
		RuntimeObject* L_114 = __this->___engine_4;
		int32_t L_115;
		L_115 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_114);
		___assocOff1 = ((int32_t)il2cpp_codegen_add(L_113, L_115));
		int32_t L_116 = V_3;
		RuntimeObject* L_117 = __this->___engine_4;
		int32_t L_118;
		L_118 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_117);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_116, L_118));
	}

IL_0224:
	{
		int32_t L_119 = V_3;
		if (L_119)
		{
			goto IL_01b7;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessByte(System.Byte,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCcmBlockCipher_ProcessByte_m5935A8C0B9F4DF67C8DBB9C9607261B60B3C1DDF (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, uint8_t ___input0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output1, int32_t ___outOff2, const RuntimeMethod* method) 
{
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___data_16;
		uint8_t L_1 = ___input0;
		VirtualActionInvoker1< uint8_t >::Invoke(37 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_0, L_1);
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCcmBlockCipher_ProcessBytes_m97D5E2B848DB1E5284EBFC8ADF0D84F7EA6A7811 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___inLen2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOff4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = ___inLen2;
		Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F(L_0, L_1, L_2, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = __this->___data_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input0;
		int32_t L_5 = ___inOff1;
		int32_t L_6 = ___inLen2;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, L_5, L_6);
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessPacket(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCcmBlockCipher_ProcessPacket_m344E885BC3D8DACAFD862BBB1FAE2F544BD324C2 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOff4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral593CBFE95E3FA15438E893EF8E8CBD31F861CDE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_11 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_12 = NULL;
	intptr_t V_13;
	memset((&V_13), 0, sizeof(V_13));
	int32_t G_B4_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2 = ___len2;
		Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F(L_0, L_1, L_2, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___output3;
		int32_t L_4 = ___outOff4;
		int32_t L_5 = ___len2;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_3, L_4, L_5, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6 = __this->___associatedText_15;
		int64_t L_7;
		L_7 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_6);
		if ((((int64_t)L_7) <= ((int64_t)((int64_t)0))))
		{
			goto IL_0078;
		}
	}
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_8 = __this->___associatedText_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(38 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, L_8);
		V_0 = L_9;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_10 = __this->___associatedText_15;
		int64_t L_11;
		L_11 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_10);
		V_1 = ((int32_t)L_11);
		bool L_12 = __this->___forEncryption_6;
		if (L_12)
		{
			goto IL_0061;
		}
	}
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_13 = __this->___data_16;
		int64_t L_14;
		L_14 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_13);
		int32_t L_15 = __this->___macSize_5;
		G_B4_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)L_14), L_15));
		goto IL_006d;
	}

IL_0061:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_16 = __this->___data_16;
		int64_t L_17;
		L_17 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_16);
		G_B4_0 = ((int32_t)L_17);
	}

IL_006d:
	{
		V_2 = G_B4_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_0;
		int32_t L_19 = V_1;
		int32_t L_20 = V_2;
		KCcmBlockCipher_ProcessAAD_m79FD33523E877DE08A1E4990E722A73FC05828F0(__this, L_18, 0, L_19, L_20, NULL);
	}

IL_0078:
	{
		bool L_21 = __this->___forEncryption_6;
		if (!L_21)
		{
			goto IL_01ae;
		}
	}
	{
		int32_t L_22 = ___len2;
		RuntimeObject* L_23 = __this->___engine_4;
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_23);
		Check_DataLength_m2070FC923CDEE7DFBBC7A1A62025B27990673FC5((bool)((((int32_t)((((int32_t)((int32_t)(L_22%L_24))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral593CBFE95E3FA15438E893EF8E8CBD31F861CDE1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___input0;
		int32_t L_26 = ___inOff1;
		int32_t L_27 = ___len2;
		KCcmBlockCipher_CalculateMac_mA4118A7BC12FE3E8A25246B06D3ED33DE020218E(__this, L_25, L_26, L_27, NULL);
		RuntimeObject* L_28 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___nonce_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___s_13;
		int32_t L_31;
		L_31 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_28, L_29, 0, L_30, 0);
		int32_t L_32 = ___len2;
		V_3 = L_32;
		goto IL_0101;
	}

IL_00c7:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___input0;
		int32_t L_34 = ___inOff1;
		int32_t L_35 = ___len2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___output3;
		int32_t L_37 = ___outOff4;
		KCcmBlockCipher_ProcessBlock_m249BA206E27B6B453359C3AF0CB88EC1C0FB88C0(__this, L_33, L_34, L_35, L_36, L_37, NULL);
		int32_t L_38 = V_3;
		RuntimeObject* L_39 = __this->___engine_4;
		int32_t L_40;
		L_40 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_39);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_38, L_40));
		int32_t L_41 = ___inOff1;
		RuntimeObject* L_42 = __this->___engine_4;
		int32_t L_43;
		L_43 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_42);
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_41, L_43));
		int32_t L_44 = ___outOff4;
		RuntimeObject* L_45 = __this->___engine_4;
		int32_t L_46;
		L_46 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_45);
		___outOff4 = ((int32_t)il2cpp_codegen_add(L_44, L_46));
	}

IL_0101:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) > ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		V_4 = 0;
		goto IL_012f;
	}

IL_010a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = __this->___s_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = L_48;
		V_12 = L_49;
		int32_t L_50 = V_4;
		int32_t L_51 = L_50;
		V_13 = L_51;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_12;
		intptr_t L_53 = V_13;
		intptr_t L_54 = L_53;
		uint8_t L_55 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = __this->___counter_14;
		int32_t L_57 = V_4;
		int32_t L_58 = L_57;
		uint8_t L_59 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51), (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)L_59))));
		int32_t L_60 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_012f:
	{
		int32_t L_61 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = __this->___counter_14;
		if ((((int32_t)L_61) < ((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length)))))
		{
			goto IL_010a;
		}
	}
	{
		RuntimeObject* L_63 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = __this->___s_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = __this->___buffer_12;
		int32_t L_66;
		L_66 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_63, L_64, 0, L_65, 0);
		V_5 = 0;
		goto IL_017c;
	}

IL_015a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = ___output3;
		int32_t L_68 = ___outOff4;
		int32_t L_69 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = __this->___buffer_12;
		int32_t L_71 = V_5;
		int32_t L_72 = L_71;
		uint8_t L_73 = (L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = __this->___macBlock_9;
		int32_t L_75 = V_5;
		int32_t L_76 = L_75;
		uint8_t L_77 = (L_74)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_76));
		(L_67)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_68, L_69))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_73^(int32_t)L_77))));
		int32_t L_78 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_017c:
	{
		int32_t L_79 = V_5;
		int32_t L_80 = __this->___macSize_5;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_015a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = __this->___macBlock_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = __this->___mac_8;
		int32_t L_83 = __this->___macSize_5;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_81, 0, (RuntimeArray*)L_82, 0, L_83, NULL);
		VirtualActionInvoker0::Invoke(29 /* System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::Reset() */, __this);
		int32_t L_84 = ___len2;
		int32_t L_85 = __this->___macSize_5;
		return ((int32_t)il2cpp_codegen_add(L_84, L_85));
	}

IL_01ae:
	{
		int32_t L_86 = ___len2;
		int32_t L_87 = __this->___macSize_5;
		RuntimeObject* L_88 = __this->___engine_4;
		int32_t L_89;
		L_89 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_88);
		Check_DataLength_m2070FC923CDEE7DFBBC7A1A62025B27990673FC5((bool)((((int32_t)((((int32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_86, L_87))%L_89))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral593CBFE95E3FA15438E893EF8E8CBD31F861CDE1, NULL);
		RuntimeObject* L_90 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = __this->___nonce_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = __this->___s_13;
		int32_t L_93;
		L_93 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_90, L_91, 0, L_92, 0);
		int32_t L_94 = ___len2;
		RuntimeObject* L_95 = __this->___engine_4;
		int32_t L_96;
		L_96 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_95);
		V_6 = ((int32_t)(L_94/L_96));
		V_7 = 0;
		goto IL_0232;
	}

IL_0200:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = ___input0;
		int32_t L_98 = ___inOff1;
		int32_t L_99 = ___len2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = ___output3;
		int32_t L_101 = ___outOff4;
		KCcmBlockCipher_ProcessBlock_m249BA206E27B6B453359C3AF0CB88EC1C0FB88C0(__this, L_97, L_98, L_99, L_100, L_101, NULL);
		int32_t L_102 = ___inOff1;
		RuntimeObject* L_103 = __this->___engine_4;
		int32_t L_104;
		L_104 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_103);
		___inOff1 = ((int32_t)il2cpp_codegen_add(L_102, L_104));
		int32_t L_105 = ___outOff4;
		RuntimeObject* L_106 = __this->___engine_4;
		int32_t L_107;
		L_107 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_106);
		___outOff4 = ((int32_t)il2cpp_codegen_add(L_105, L_107));
		int32_t L_108 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_108, 1));
	}

IL_0232:
	{
		int32_t L_109 = V_7;
		int32_t L_110 = V_6;
		if ((((int32_t)L_109) < ((int32_t)L_110)))
		{
			goto IL_0200;
		}
	}
	{
		int32_t L_111 = ___len2;
		int32_t L_112 = ___inOff1;
		if ((((int32_t)L_111) <= ((int32_t)L_112)))
		{
			goto IL_02c8;
		}
	}
	{
		V_8 = 0;
		goto IL_0269;
	}

IL_0244:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_113 = __this->___s_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_114 = L_113;
		V_12 = L_114;
		int32_t L_115 = V_8;
		int32_t L_116 = L_115;
		V_13 = L_116;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_117 = V_12;
		intptr_t L_118 = V_13;
		intptr_t L_119 = L_118;
		uint8_t L_120 = (L_117)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_119));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_121 = __this->___counter_14;
		int32_t L_122 = V_8;
		int32_t L_123 = L_122;
		uint8_t L_124 = (L_121)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_123));
		(L_114)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_116), (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)L_124))));
		int32_t L_125 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_125, 1));
	}

IL_0269:
	{
		int32_t L_126 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_127 = __this->___counter_14;
		if ((((int32_t)L_126) < ((int32_t)((int32_t)(((RuntimeArray*)L_127)->max_length)))))
		{
			goto IL_0244;
		}
	}
	{
		RuntimeObject* L_128 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_129 = __this->___s_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_130 = __this->___buffer_12;
		int32_t L_131;
		L_131 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_128, L_129, 0, L_130, 0);
		V_9 = 0;
		goto IL_02b3;
	}

IL_0294:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_132 = ___output3;
		int32_t L_133 = ___outOff4;
		int32_t L_134 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_135 = __this->___buffer_12;
		int32_t L_136 = V_9;
		int32_t L_137 = L_136;
		uint8_t L_138 = (L_135)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_137));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_139 = ___input0;
		int32_t L_140 = ___inOff1;
		int32_t L_141 = V_9;
		int32_t L_142 = ((int32_t)il2cpp_codegen_add(L_140, L_141));
		uint8_t L_143 = (L_139)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_142));
		(L_132)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_133, L_134))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_138^(int32_t)L_143))));
		int32_t L_144 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_144, 1));
	}

IL_02b3:
	{
		int32_t L_145 = V_9;
		int32_t L_146 = __this->___macSize_5;
		if ((((int32_t)L_145) < ((int32_t)L_146)))
		{
			goto IL_0294;
		}
	}
	{
		int32_t L_147 = ___outOff4;
		int32_t L_148 = __this->___macSize_5;
		___outOff4 = ((int32_t)il2cpp_codegen_add(L_147, L_148));
	}

IL_02c8:
	{
		V_10 = 0;
		goto IL_02f2;
	}

IL_02cd:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_149 = __this->___s_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_150 = L_149;
		V_12 = L_150;
		int32_t L_151 = V_10;
		int32_t L_152 = L_151;
		V_13 = L_152;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_153 = V_12;
		intptr_t L_154 = V_13;
		intptr_t L_155 = L_154;
		uint8_t L_156 = (L_153)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_155));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_157 = __this->___counter_14;
		int32_t L_158 = V_10;
		int32_t L_159 = L_158;
		uint8_t L_160 = (L_157)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_159));
		(L_150)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_152), (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_156, (int32_t)L_160))));
		int32_t L_161 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_161, 1));
	}

IL_02f2:
	{
		int32_t L_162 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_163 = __this->___counter_14;
		if ((((int32_t)L_162) < ((int32_t)((int32_t)(((RuntimeArray*)L_163)->max_length)))))
		{
			goto IL_02cd;
		}
	}
	{
		RuntimeObject* L_164 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_165 = __this->___s_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_166 = __this->___buffer_12;
		int32_t L_167;
		L_167 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_164, L_165, 0, L_166, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_168 = ___output3;
		int32_t L_169 = ___outOff4;
		int32_t L_170 = __this->___macSize_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_171 = __this->___buffer_12;
		int32_t L_172 = __this->___macSize_5;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_168, ((int32_t)il2cpp_codegen_subtract(L_169, L_170)), (RuntimeArray*)L_171, 0, L_172, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_173 = ___output3;
		int32_t L_174 = ___outOff4;
		int32_t L_175 = __this->___macSize_5;
		KCcmBlockCipher_CalculateMac_mA4118A7BC12FE3E8A25246B06D3ED33DE020218E(__this, L_173, 0, ((int32_t)il2cpp_codegen_subtract(L_174, L_175)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_176 = __this->___macBlock_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_177 = __this->___mac_8;
		int32_t L_178 = __this->___macSize_5;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_176, 0, (RuntimeArray*)L_177, 0, L_178, NULL);
		int32_t L_179 = __this->___macSize_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_180 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_179);
		V_11 = L_180;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_181 = __this->___buffer_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_182 = V_11;
		int32_t L_183 = __this->___macSize_5;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_181, 0, (RuntimeArray*)L_182, 0, L_183, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_184 = __this->___mac_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_185 = V_11;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_186;
		L_186 = Arrays_ConstantTimeAreEqual_m276F471905921D3AACBB6A6A6CE63DCFD4CBAE3E(L_184, L_185, NULL);
		if (L_186)
		{
			goto IL_039c;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_187 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_187, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF2CE86BA69492C7DE55AB9B517CC2DAC4FB810)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_187, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCcmBlockCipher_ProcessPacket_m344E885BC3D8DACAFD862BBB1FAE2F544BD324C2_RuntimeMethod_var)));
	}

IL_039c:
	{
		VirtualActionInvoker0::Invoke(29 /* System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::Reset() */, __this);
		int32_t L_188 = ___len2;
		int32_t L_189 = __this->___macSize_5;
		return ((int32_t)il2cpp_codegen_subtract(L_188, L_189));
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_ProcessBlock_m249BA206E27B6B453359C3AF0CB88EC1C0FB88C0 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOff4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___s_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_2 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		V_3 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_2;
		intptr_t L_5 = V_3;
		intptr_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___counter_14;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_11))));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0021:
	{
		int32_t L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___counter_14;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		RuntimeObject* L_15 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___s_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___buffer_12;
		int32_t L_18;
		L_18 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_15, L_16, 0, L_17, 0);
		V_1 = 0;
		goto IL_0064;
	}

IL_004a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___output3;
		int32_t L_20 = ___outOff4;
		int32_t L_21 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___buffer_12;
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___input0;
		int32_t L_27 = ___inOff1;
		int32_t L_28 = V_1;
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_27, L_28));
		uint8_t L_30 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_20, L_21))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_25^(int32_t)L_30))));
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0064:
	{
		int32_t L_32 = V_1;
		RuntimeObject* L_33 = __this->___engine_4;
		int32_t L_34;
		L_34 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_33);
		if ((((int32_t)L_32) < ((int32_t)L_34)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::CalculateMac(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_CalculateMac_mA4118A7BC12FE3E8A25246B06D3ED33DE020218E (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___authText0, int32_t ___authOff1, int32_t ___len2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = ___len2;
		V_0 = L_0;
		goto IL_0067;
	}

IL_0004:
	{
		V_1 = 0;
		goto IL_0022;
	}

IL_0008:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___macBlock_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		V_2 = L_2;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		V_3 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_2;
		intptr_t L_6 = V_3;
		intptr_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___authText0;
		int32_t L_10 = ___authOff1;
		int32_t L_11 = V_1;
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_10, L_11));
		uint8_t L_13 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_8^(int32_t)L_13))));
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0022:
	{
		int32_t L_15 = V_1;
		RuntimeObject* L_16 = __this->___engine_4;
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0008;
		}
	}
	{
		RuntimeObject* L_18 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___macBlock_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___macBlock_9;
		int32_t L_21;
		L_21 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_18, L_19, 0, L_20, 0);
		int32_t L_22 = V_0;
		RuntimeObject* L_23 = __this->___engine_4;
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_23);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_22, L_24));
		int32_t L_25 = ___authOff1;
		RuntimeObject* L_26 = __this->___engine_4;
		int32_t L_27;
		L_27 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_26);
		___authOff1 = ((int32_t)il2cpp_codegen_add(L_25, L_27));
	}

IL_0067:
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) > ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCcmBlockCipher_DoFinal_m3E86CA5248EB6A288602971AFEBD2C0E82C8AFD9 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___data_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(38 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, L_0);
		V_0 = L_1;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = __this->___data_16;
		int64_t L_3;
		L_3 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_2);
		V_1 = ((int32_t)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___output0;
		int32_t L_7 = ___outOff1;
		int32_t L_8;
		L_8 = KCcmBlockCipher_ProcessPacket_m344E885BC3D8DACAFD862BBB1FAE2F544BD324C2(__this, L_4, 0, L_5, L_6, L_7, NULL);
		V_2 = L_8;
		VirtualActionInvoker0::Invoke(29 /* System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::Reset() */, __this);
		int32_t L_9 = V_2;
		return L_9;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::GetMac()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KCcmBlockCipher_GetMac_mDFC1015F53143B9066B4D1C5C5732727E9AA3613 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mac_8;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Arrays_Clone_mC73CD122DC37EDEB733EC84DB0137D8D7DD5B87F(L_0, NULL);
		return L_1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::GetUpdateOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCcmBlockCipher_GetUpdateOutputSize_mBCC09A00CBCC26C60788359A783FDA64B42A692F (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, int32_t ___len0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___len0;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::GetOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCcmBlockCipher_GetOutputSize_mD6D3752267E5A854C2B2D2D94BBB643CB0D0CBEC (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, int32_t ___len0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___len0;
		int32_t L_1 = __this->___macSize_5;
		return ((int32_t)il2cpp_codegen_add(L_0, L_1));
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_Reset_m01A08F7ED40297E2A21F96A0606ACE97604AFB8F (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___G1_11;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		Arrays_Fill_m23EB1BA27E305EC869992BD6CA3D6B30F142FD22(L_0, (uint8_t)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___buffer_12;
		Arrays_Fill_m23EB1BA27E305EC869992BD6CA3D6B30F142FD22(L_1, (uint8_t)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___counter_14;
		Arrays_Fill_m23EB1BA27E305EC869992BD6CA3D6B30F142FD22(L_2, (uint8_t)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___macBlock_9;
		Arrays_Fill_m23EB1BA27E305EC869992BD6CA3D6B30F142FD22(L_3, (uint8_t)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___counter_14;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)1);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = __this->___data_16;
		VirtualActionInvoker1< int64_t >::Invoke(31 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_5, ((int64_t)0));
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6 = __this->___associatedText_15;
		VirtualActionInvoker1< int64_t >::Invoke(31 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_6, ((int64_t)0));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___initialAssociatedText_7;
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___initialAssociatedText_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___initialAssociatedText_7;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(22 /* System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32) */, __this, L_8, 0, ((int32_t)(((RuntimeArray*)L_9)->max_length)));
	}

IL_0070:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::intToBytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_intToBytes_m16AC65329A63E3BDCB6643C4A0601D00FFD06A2D (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, int32_t ___num0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outBytes1, int32_t ___outOff2, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___outBytes1;
		int32_t L_1 = ___outOff2;
		int32_t L_2 = ___num0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_2>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___outBytes1;
		int32_t L_4 = ___outOff2;
		int32_t L_5 = ___num0;
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_5>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___outBytes1;
		int32_t L_7 = ___outOff2;
		int32_t L_8 = ___num0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_8>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___outBytes1;
		int32_t L_10 = ___outOff2;
		int32_t L_11 = ___num0;
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)((int32_t)(uint8_t)L_11));
		return;
	}
}
// System.Byte Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::getFlag(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t KCcmBlockCipher_getFlag_mE35B88807B9FF2999EB5E7BD4B4C62BFDFDD888E (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, bool ___authTextPresents0, int32_t ___macSize1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01E187759622701239321907D0B46741BA9B86F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508FADA7965A5CC9B9F3F205B9D7F61B002F4352);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6348AE9AC0D51DA91EE3554B61F63EF74190CB52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FE94193A3EF39943F898714AC9062F7EBD96279);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9037918EF368FDB9869069C353AC1D0AA985BD83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		bool L_1 = ___authTextPresents0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_2 = V_0;
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
		goto IL_0023;
	}

IL_0017:
	{
		StringBuilder_t* L_4 = V_0;
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___macSize1;
		V_2 = L_6;
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)16))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)16))))
		{
			goto IL_0054;
		}
	}
	{
		goto IL_008a;
	}

IL_0035:
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)32))))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)48))))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)64))))
		{
			goto IL_007e;
		}
	}
	{
		goto IL_008a;
	}

IL_0046:
	{
		StringBuilder_t* L_13 = V_0;
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteral01E187759622701239321907D0B46741BA9B86F5, NULL);
		goto IL_008a;
	}

IL_0054:
	{
		StringBuilder_t* L_15 = V_0;
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral508FADA7965A5CC9B9F3F205B9D7F61B002F4352, NULL);
		goto IL_008a;
	}

IL_0062:
	{
		StringBuilder_t* L_17 = V_0;
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteral8FE94193A3EF39943F898714AC9062F7EBD96279, NULL);
		goto IL_008a;
	}

IL_0070:
	{
		StringBuilder_t* L_19 = V_0;
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral6348AE9AC0D51DA91EE3554B61F63EF74190CB52, NULL);
		goto IL_008a;
	}

IL_007e:
	{
		StringBuilder_t* L_21 = V_0;
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteral9037918EF368FDB9869069C353AC1D0AA985BD83, NULL);
	}

IL_008a:
	{
		int32_t L_23 = __this->___Nb__17;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_24;
		L_24 = Convert_ToString_m244C97184477B594D97652377A63F2A205EC9B1E(((int32_t)il2cpp_codegen_subtract(L_23, 1)), 2, NULL);
		V_1 = L_24;
		goto IL_00b2;
	}

IL_009b:
	{
		String_t* L_25 = V_1;
		StringBuilder_t* L_26 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_26, L_25, NULL);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29(L_26, 0, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		String_t* L_28;
		L_28 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_27, NULL);
		V_1 = L_28;
	}

IL_00b2:
	{
		String_t* L_29 = V_1;
		int32_t L_30;
		L_30 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_29, NULL);
		if ((((int32_t)L_30) < ((int32_t)4)))
		{
			goto IL_009b;
		}
	}
	{
		StringBuilder_t* L_31 = V_0;
		String_t* L_32 = V_1;
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_31, L_32, NULL);
		StringBuilder_t* L_34 = V_0;
		String_t* L_35;
		L_35 = StringBuilder_ToString_mA929A8EEBA552BC580CACD6FD61C7B612142DBED(L_34, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_36;
		L_36 = Convert_ToInt32_m8881C26C9DC63CBE2186F7180F780706A10283F6(L_35, 2, NULL);
		return (uint8_t)((int32_t)(uint8_t)L_36);
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher__cctor_mBFAA3133169B15D616F755AD268D3E70EE2016D8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_StaticFields*)il2cpp_codegen_static_fields_for(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var))->___BYTES_IN_INT_0 = 4;
		((KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_StaticFields*)il2cpp_codegen_static_fields_for(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var))->___BITS_IN_BYTE_1 = 8;
		((KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_StaticFields*)il2cpp_codegen_static_fields_for(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var))->___MAX_MAC_BIT_LENGTH_2 = ((int32_t)512);
		((KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_StaticFields*)il2cpp_codegen_static_fields_for(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var))->___MIN_MAC_BIT_LENGTH_3 = ((int32_t)64);
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
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher__ctor_m72F87F983C515F3454F474E27E1849A94909A8DE (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, RuntimeObject* ___cipher0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___cipher0;
		__this->___cipher_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_6), (void*)L_0);
		RuntimeObject* L_1 = ___cipher0;
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->___IV_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IV_0), (void*)L_3);
		RuntimeObject* L_4 = ___cipher0;
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_4);
		__this->___blockSize_5 = L_5;
		RuntimeObject* L_6 = ___cipher0;
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->___ofbV_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ofbV_1), (void*)L_8);
		RuntimeObject* L_9 = ___cipher0;
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->___ofbOutV_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ofbOutV_2), (void*)L_11);
		return;
	}
}
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::GetUnderlyingCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KCtrBlockCipher_GetUnderlyingCipher_m47B241608742C65A46F6F95C800D24D5B840CF6F (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___cipher_6;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher_Init_mD2FFC0E9F1D559998BD98F71A577DB5F828EDCE6 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	{
		__this->___initialised_3 = (bool)1;
		RuntimeObject* L_0 = ___parameters1;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_0, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0059;
		}
	}
	{
		RuntimeObject* L_1 = ___parameters1;
		V_0 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_1, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_2, NULL);
		V_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), ((int32_t)(((RuntimeArray*)L_5)->max_length))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___IV_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_6, 0, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___IV_0;
		int32_t L_10 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_12 = V_0;
		RuntimeObject* L_13;
		L_13 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_12, NULL);
		___parameters1 = L_13;
		goto IL_0064;
	}

IL_0059:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A2FA226E0BD2F452D9FB468B577991FF60938CD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCtrBlockCipher_Init_mD2FFC0E9F1D559998BD98F71A577DB5F828EDCE6_RuntimeMethod_var)));
	}

IL_0064:
	{
		RuntimeObject* L_15 = ___parameters1;
		if (!L_15)
		{
			goto IL_0074;
		}
	}
	{
		RuntimeObject* L_16 = __this->___cipher_6;
		RuntimeObject* L_17 = ___parameters1;
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_16, (bool)1, L_17);
	}

IL_0074:
	{
		KCtrBlockCipher_Reset_m6A4947B31FC2ED648DF6A2A80CE8AF8E8CC42A0A(__this, NULL);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KCtrBlockCipher_get_AlgorithmName_mFA692BE947795FE741ADAFF10567717068A34D01 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC690C3E3484DF59A062AC0913B3AA0F9E608C757);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_6;
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, _stringLiteralC690C3E3484DF59A062AC0913B3AA0F9E608C757, NULL);
		return L_2;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KCtrBlockCipher_get_IsPartialBlockOkay_mA84E7ABCBDC19FB7111A0554BB4E46871610BF49 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCtrBlockCipher_GetBlockSize_mABF015BD46C03876D7BF7E8BF9CE6860CD77A743 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_6;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Byte Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::ReturnByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t KCtrBlockCipher_ReturnByte_m3A32F77EB520D6C6CE04027427DF7F98E0369293 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___input0;
		uint8_t L_1;
		L_1 = KCtrBlockCipher_CalculateByte_m978B111433891E0AF9E76CC865C64504CA093A43(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher_ProcessBytes_m079BC47B7944C6828B94289226A07878914FA8B6 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOff4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___outOff4;
		int32_t L_1 = ___len2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___output3;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_3 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCtrBlockCipher_ProcessBytes_m079BC47B7944C6828B94289226A07878914FA8B6_RuntimeMethod_var)));
	}

IL_0015:
	{
		int32_t L_4 = ___inOff1;
		int32_t L_5 = ___len2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___input0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0028;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_7 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC19A67243F4A3B2010D2D94EAB2C299DEFFBC32F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCtrBlockCipher_ProcessBytes_m079BC47B7944C6828B94289226A07878914FA8B6_RuntimeMethod_var)));
	}

IL_0028:
	{
		int32_t L_8 = ___inOff1;
		V_0 = L_8;
		int32_t L_9 = ___inOff1;
		int32_t L_10 = ___len2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		int32_t L_11 = ___outOff4;
		V_2 = L_11;
		goto IL_0048;
	}

IL_0033:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___output3;
		int32_t L_13 = V_2;
		int32_t L_14 = L_13;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___input0;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
		uint8_t L_20;
		L_20 = KCtrBlockCipher_CalculateByte_m978B111433891E0AF9E76CC865C64504CA093A43(__this, L_19, NULL);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)L_20);
	}

IL_0048:
	{
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0033;
		}
	}
	{
		return;
	}
}
// System.Byte Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::CalculateByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t KCtrBlockCipher_CalculateByte_m978B111433891E0AF9E76CC865C64504CA093A43 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, uint8_t ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___byteCount_4;
		if (L_0)
		{
			goto IL_004b;
		}
	}
	{
		KCtrBlockCipher_incrementCounterAt_m15EA59FF8C03506011D848CBE9928489BEFD345D(__this, 0, NULL);
		KCtrBlockCipher_checkCounter_m0999CDF444F2ABDF770F65E8A555CBD3212A9BBA(__this, NULL);
		RuntimeObject* L_1 = __this->___cipher_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___ofbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___ofbOutV_2;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1, L_2, 0, L_3, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___ofbOutV_2;
		int32_t L_6 = __this->___byteCount_4;
		int32_t L_7 = L_6;
		V_1 = L_7;
		__this->___byteCount_4 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		uint8_t L_11 = ___b0;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_10^(int32_t)L_11)));
	}

IL_004b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___ofbOutV_2;
		int32_t L_13 = __this->___byteCount_4;
		int32_t L_14 = L_13;
		V_1 = L_14;
		__this->___byteCount_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		uint8_t L_18 = ___b0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_17^(int32_t)L_18)));
		int32_t L_19 = __this->___byteCount_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___ofbV_1;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_007e;
		}
	}
	{
		__this->___byteCount_4 = 0;
	}

IL_007e:
	{
		uint8_t L_21 = V_0;
		return L_21;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCtrBlockCipher_ProcessBlock_m3510B9B3DF03C463C75EC814623432ACB6B1119C (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output2, int32_t ___outOff3, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		int32_t L_1 = ___inOff1;
		int32_t L_2;
		L_2 = KCtrBlockCipher_GetBlockSize_mABF015BD46C03876D7BF7E8BF9CE6860CD77A743(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), L_1))) >= ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_3 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEAC30D8C28806B51680D5DC521FC3C410F2D5B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCtrBlockCipher_ProcessBlock_m3510B9B3DF03C463C75EC814623432ACB6B1119C_RuntimeMethod_var)));
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output2;
		int32_t L_5 = ___outOff3;
		int32_t L_6;
		L_6 = KCtrBlockCipher_GetBlockSize_mABF015BD46C03876D7BF7E8BF9CE6860CD77A743(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), L_5))) >= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_7 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCtrBlockCipher_ProcessBlock_m3510B9B3DF03C463C75EC814623432ACB6B1119C_RuntimeMethod_var)));
	}

IL_0031:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___input0;
		int32_t L_9 = ___inOff1;
		int32_t L_10;
		L_10 = KCtrBlockCipher_GetBlockSize_mABF015BD46C03876D7BF7E8BF9CE6860CD77A743(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___output2;
		int32_t L_12 = ___outOff3;
		KCtrBlockCipher_ProcessBytes_m079BC47B7944C6828B94289226A07878914FA8B6(__this, L_8, L_9, L_10, L_11, L_12, NULL);
		int32_t L_13;
		L_13 = KCtrBlockCipher_GetBlockSize_mABF015BD46C03876D7BF7E8BF9CE6860CD77A743(__this, NULL);
		return L_13;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher_Reset_m6A4947B31FC2ED648DF6A2A80CE8AF8E8CC42A0A (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___initialised_3;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = __this->___cipher_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___ofbV_1;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1, L_2, 0, L_3, 0);
	}

IL_0022:
	{
		RuntimeObject* L_5 = __this->___cipher_6;
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_5);
		__this->___byteCount_4 = 0;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::incrementCounterAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher_incrementCounterAt_m15EA59FF8C03506011D848CBE9928489BEFD345D (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, int32_t ___pos0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint8_t V_3 = 0x0;
	{
		int32_t L_0 = ___pos0;
		V_0 = L_0;
		goto IL_0020;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___ofbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = L_1;
		V_1 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = L_4;
		V_2 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		intptr_t L_7 = V_2;
		intptr_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = ((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, 1)));
		V_3 = (uint8_t)L_10;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)L_10);
		uint8_t L_11 = V_3;
		if (!L_11)
		{
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0020:
	{
		int32_t L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___ofbV_1;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::checkCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher_checkCounter_m0999CDF444F2ABDF770F65E8A555CBD3212A9BBA (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher__ctor_mD95F4616B211A789244A178A2B5E48A0E35C5861 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, RuntimeObject* ___hashCipher0, RuntimeObject* ___mainCipher1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___KtopInput_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KtopInput_9), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		__this->___Stretch_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Stretch_10), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___OffsetMAIN_0_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OffsetMAIN_0_11), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___OffsetMAIN_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OffsetMAIN_20), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_3 = ___hashCipher0;
		if (L_3)
		{
			goto IL_0042;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F9A983F97E640754D4FF0C422EC4417D6927478)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher__ctor_mD95F4616B211A789244A178A2B5E48A0E35C5861_RuntimeMethod_var)));
	}

IL_0042:
	{
		RuntimeObject* L_5 = ___hashCipher0;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_5);
		if ((((int32_t)L_6) == ((int32_t)((int32_t)16))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_7 = ((int32_t)16);
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral41A2189BC076CA51A8306F66C8964C4E63B2B3CE)), L_8, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_10, L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F9A983F97E640754D4FF0C422EC4417D6927478)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher__ctor_mD95F4616B211A789244A178A2B5E48A0E35C5861_RuntimeMethod_var)));
	}

IL_0068:
	{
		RuntimeObject* L_11 = ___mainCipher1;
		if (L_11)
		{
			goto IL_0076;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_12 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC18D414929C4A2ACC69D7D2EF4A0C9D467BBFE2F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher__ctor_mD95F4616B211A789244A178A2B5E48A0E35C5861_RuntimeMethod_var)));
	}

IL_0076:
	{
		RuntimeObject* L_13 = ___mainCipher1;
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_13);
		if ((((int32_t)L_14) == ((int32_t)((int32_t)16))))
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_15 = ((int32_t)16);
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		String_t* L_17;
		L_17 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral41A2189BC076CA51A8306F66C8964C4E63B2B3CE)), L_16, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_18, L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC18D414929C4A2ACC69D7D2EF4A0C9D467BBFE2F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher__ctor_mD95F4616B211A789244A178A2B5E48A0E35C5861_RuntimeMethod_var)));
	}

IL_009c:
	{
		RuntimeObject* L_19 = ___hashCipher0;
		String_t* L_20;
		L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_19);
		RuntimeObject* L_21 = ___mainCipher1;
		String_t* L_22;
		L_22 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_21);
		bool L_23;
		L_23 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_20, L_22, NULL);
		if (L_23)
		{
			goto IL_00ba;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_24 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A97AB369F86F4B2FA00721206E1CD3F3E97A1E5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher__ctor_mD95F4616B211A789244A178A2B5E48A0E35C5861_RuntimeMethod_var)));
	}

IL_00ba:
	{
		RuntimeObject* L_25 = ___hashCipher0;
		__this->___hashCipher_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hashCipher_1), (void*)L_25);
		RuntimeObject* L_26 = ___mainCipher1;
		__this->___mainCipher_2 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCipher_2), (void*)L_26);
		return;
	}
}
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetUnderlyingCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OcbBlockCipher_GetUnderlyingCipher_m477D9687C28734FC998A00578AC0D0F36BB88329 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___mainCipher_2;
		return L_0;
	}
}
// System.String Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OcbBlockCipher_get_AlgorithmName_m70F0B4A0955A478B19589D3A5EA671362896C790 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF91F11D46E8807FE33EB79CAE11A89BB6018A3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___mainCipher_2;
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_1, _stringLiteralDF91F11D46E8807FE33EB79CAE11A89BB6018A3D, NULL);
		return L_2;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_Init_m4CCC51F169845704774A26A60D01A0FA7E335353 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, bool ___forEncryption0, RuntimeObject* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* V_3 = NULL;
	int32_t V_4 = 0;
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* G_B11_0 = NULL;
	OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* G_B12_1 = NULL;
	{
		bool L_0 = __this->___forEncryption_3;
		V_0 = L_0;
		bool L_1 = ___forEncryption0;
		__this->___forEncryption_3 = L_1;
		__this->___macBlock_22 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___macBlock_22), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		RuntimeObject* L_2 = ___parameters1;
		if (!((AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B*)IsInstClass((RuntimeObject*)L_2, AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var)))
		{
			goto IL_007e;
		}
	}
	{
		RuntimeObject* L_3 = ___parameters1;
		V_3 = ((AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B*)CastclassClass((RuntimeObject*)L_3, AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var));
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_4 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(7 /* System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetNonce() */, L_4);
		V_2 = L_5;
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_6 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetAssociatedText() */, L_6);
		__this->___initialAssociatedText_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialAssociatedText_5), (void*)L_7);
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_8 = V_3;
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_MacSize() */, L_8);
		V_4 = L_9;
		int32_t L_10 = V_4;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)64))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_11 = V_4;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)128))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_12 = V_4;
		if (!((int32_t)(L_12%8)))
		{
			goto IL_006b;
		}
	}

IL_0054:
	{
		int32_t L_13 = V_4;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_14);
		String_t* L_16;
		L_16 = String_Concat_mE4A010CB7CF79DB447EA695143BB9402FF04D82A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EBDAE183BC30C2AD6BD85811A7DA978BDAB9809)), L_15, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher_Init_m4CCC51F169845704774A26A60D01A0FA7E335353_RuntimeMethod_var)));
	}

IL_006b:
	{
		int32_t L_18 = V_4;
		__this->___macSize_4 = ((int32_t)(L_18/8));
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_19 = V_3;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_20;
		L_20 = VirtualFuncInvoker0< KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* >::Invoke(4 /* Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_Key() */, L_19);
		V_1 = L_20;
		goto IL_00bf;
	}

IL_007e:
	{
		RuntimeObject* L_21 = ___parameters1;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_21, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_22 = ___parameters1;
		V_5 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_22, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_23 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_23, NULL);
		V_2 = L_24;
		__this->___initialAssociatedText_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialAssociatedText_5), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___macSize_4 = ((int32_t)16);
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_25 = V_5;
		RuntimeObject* L_26;
		L_26 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_25, NULL);
		V_1 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_26, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		goto IL_00bf;
	}

IL_00b4:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_27 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4AEFBB61F65FCA6B5F41F05AB7DEEECF9118783C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher_Init_m4CCC51F169845704774A26A60D01A0FA7E335353_RuntimeMethod_var)));
	}

IL_00bf:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___hashBlock_12 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hashBlock_12), (void*)L_28);
		bool L_29 = ___forEncryption0;
		G_B10_0 = __this;
		if (L_29)
		{
			G_B11_0 = __this;
			goto IL_00db;
		}
	}
	{
		int32_t L_30 = __this->___macSize_4;
		G_B12_0 = ((int32_t)il2cpp_codegen_add(((int32_t)16), L_30));
		G_B12_1 = G_B10_0;
		goto IL_00dd;
	}

IL_00db:
	{
		G_B12_0 = ((int32_t)16);
		G_B12_1 = G_B11_0;
	}

IL_00dd:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)G_B12_0);
		G_B12_1->___mainBlock_13 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&G_B12_1->___mainBlock_13), (void*)L_31);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_2;
		if (L_32)
		{
			goto IL_00f1;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = L_33;
	}

IL_00f1:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_2;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))) <= ((int32_t)((int32_t)15))))
		{
			goto IL_0103;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_35 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_35, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC2647BD6DA802D3F62530E32EF626870E784F2C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher_Init_m4CCC51F169845704774A26A60D01A0FA7E335353_RuntimeMethod_var)));
	}

IL_0103:
	{
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_36 = V_1;
		if (!L_36)
		{
			goto IL_0129;
		}
	}
	{
		RuntimeObject* L_37 = __this->___hashCipher_1;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_38 = V_1;
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_37, (bool)1, L_38);
		RuntimeObject* L_39 = __this->___mainCipher_2;
		bool L_40 = ___forEncryption0;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_41 = V_1;
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_39, L_40, L_41);
		__this->___KtopInput_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KtopInput_9), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		goto IL_0138;
	}

IL_0129:
	{
		bool L_42 = V_0;
		bool L_43 = ___forEncryption0;
		if ((((int32_t)L_42) == ((int32_t)L_43)))
		{
			goto IL_0138;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E0BB1099A2BB7E26AB1115B17E7A4107597EBF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher_Init_m4CCC51F169845704774A26A60D01A0FA7E335353_RuntimeMethod_var)));
	}

IL_0138:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___L_Asterisk_7 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___L_Asterisk_7), (void*)L_45);
		RuntimeObject* L_46 = __this->___hashCipher_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___L_Asterisk_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = __this->___L_Asterisk_7;
		int32_t L_49;
		L_49 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_46, L_47, 0, L_48, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = __this->___L_Asterisk_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51;
		L_51 = OcbBlockCipher_OCB_double_m539FF6B57BFB0E14A0E8A4AB3DFC430D2865B357(L_50, NULL);
		__this->___L_Dollar_8 = L_51;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___L_Dollar_8), (void*)L_51);
		il2cpp_codegen_runtime_class_init_inline(Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		RuntimeObject* L_52;
		L_52 = Platform_CreateArrayList_m0F81F3A136E5BA654BC68E7C46D31C4B192EA900(NULL);
		__this->___L_6 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___L_6), (void*)L_52);
		RuntimeObject* L_53 = __this->___L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = __this->___L_Dollar_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55;
		L_55 = OcbBlockCipher_OCB_double_m539FF6B57BFB0E14A0E8A4AB3DFC430D2865B357(L_54, NULL);
		int32_t L_56;
		L_56 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_53, (RuntimeObject*)L_55);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_2;
		int32_t L_58;
		L_58 = VirtualFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(20 /* System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessNonce(System.Byte[]) */, __this, L_57);
		V_6 = L_58;
		int32_t L_59 = V_6;
		V_7 = ((int32_t)(L_59%8));
		int32_t L_60 = V_6;
		V_8 = ((int32_t)(L_60/8));
		int32_t L_61 = V_7;
		if (L_61)
		{
			goto IL_01c3;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = __this->___Stretch_10;
		int32_t L_63 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = __this->___OffsetMAIN_0_11;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_62, L_63, (RuntimeArray*)L_64, 0, ((int32_t)16), NULL);
		goto IL_020c;
	}

IL_01c3:
	{
		V_9 = 0;
		goto IL_0206;
	}

IL_01c8:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = __this->___Stretch_10;
		int32_t L_66 = V_8;
		int32_t L_67 = L_66;
		uint8_t L_68 = (L_65)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_67));
		V_10 = L_68;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = __this->___Stretch_10;
		int32_t L_70 = V_8;
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		V_8 = L_71;
		int32_t L_72 = L_71;
		uint8_t L_73 = (L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
		V_11 = L_73;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = __this->___OffsetMAIN_0_11;
		int32_t L_75 = V_9;
		uint32_t L_76 = V_10;
		int32_t L_77 = V_7;
		uint32_t L_78 = V_11;
		int32_t L_79 = V_7;
		(L_74)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_75), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_76<<((int32_t)(L_77&((int32_t)31)))))|((int32_t)((uint32_t)L_78>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_79))&((int32_t)31)))))))));
		int32_t L_80 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_0206:
	{
		int32_t L_81 = V_9;
		if ((((int32_t)L_81) < ((int32_t)((int32_t)16))))
		{
			goto IL_01c8;
		}
	}

IL_020c:
	{
		__this->___hashBlockPos_14 = 0;
		__this->___mainBlockPos_15 = 0;
		__this->___hashBlockCount_16 = ((int64_t)0);
		__this->___mainBlockCount_17 = ((int64_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___OffsetHASH_18 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OffsetHASH_18), (void*)L_82);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___Sum_19 = L_83;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Sum_19), (void*)L_83);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = __this->___OffsetMAIN_0_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = __this->___OffsetMAIN_20;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_84, 0, (RuntimeArray*)L_85, 0, ((int32_t)16), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___Checksum_21 = L_86;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Checksum_21), (void*)L_86);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = __this->___initialAssociatedText_5;
		if (!L_87)
		{
			goto IL_0283;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = __this->___initialAssociatedText_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = __this->___initialAssociatedText_5;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(26 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32) */, __this, L_88, 0, ((int32_t)(((RuntimeArray*)L_89)->max_length)));
	}

IL_0283:
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessNonce(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_ProcessNonce_mD1567E4BA792843805635AFFA336A6830D81CB2B (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___N0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	intptr_t V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___N0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___N0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___N0;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_1, 0, (RuntimeArray*)L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), ((int32_t)(((RuntimeArray*)L_4)->max_length)))), ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = __this->___macSize_4;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_7<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = L_8;
		V_4 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___N0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(((int32_t)15), ((int32_t)(((RuntimeArray*)L_10)->max_length))));
		V_5 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_4;
		intptr_t L_13 = V_5;
		intptr_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_15|1))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		int32_t L_17 = ((int32_t)15);
		uint8_t L_18 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = ((int32_t)((int32_t)L_18&((int32_t)63)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = L_19;
		V_4 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_4;
		int32_t L_22 = ((int32_t)15);
		uint8_t L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_23&((int32_t)192)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___KtopInput_9;
		if (!L_24)
		{
			goto IL_006d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___KtopInput_9;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Arrays_AreEqual_mF00C3B51F7520663ADB08744EA3A1995B9421C18(L_25, L_26, NULL);
		if (L_27)
		{
			goto IL_00c2;
		}
	}

IL_006d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_2 = L_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_0;
		__this->___KtopInput_9 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KtopInput_9), (void*)L_29);
		RuntimeObject* L_30 = __this->___hashCipher_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = __this->___KtopInput_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_2;
		int32_t L_33;
		L_33 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_30, L_31, 0, L_32, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->___Stretch_10;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_34, 0, (RuntimeArray*)L_35, 0, ((int32_t)16), NULL);
		V_3 = 0;
		goto IL_00be;
	}

IL_00a5:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___Stretch_10;
		int32_t L_37 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_2;
		int32_t L_39 = V_3;
		int32_t L_40 = L_39;
		uint8_t L_41 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_2;
		int32_t L_43 = V_3;
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		uint8_t L_45 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)16), L_37))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_41^(int32_t)L_45))));
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00be:
	{
		int32_t L_47 = V_3;
		if ((((int32_t)L_47) < ((int32_t)8)))
		{
			goto IL_00a5;
		}
	}

IL_00c2:
	{
		int32_t L_48 = V_1;
		return L_48;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_GetBlockSize_mAECA9C9AD9E8CD760F59F2FA3B436F3E5C85539D (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)16);
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetMac()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OcbBlockCipher_GetMac_m47312F16F373D990C6EEB761689D04943CEB4FD4 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___macBlock_22;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___macBlock_22;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Arrays_Clone_mC73CD122DC37EDEB733EC84DB0137D8D7DD5B87F(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		int32_t L_3 = __this->___macSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		return L_4;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_GetOutputSize_m3B7F44223AC21EB039C0644D18743579BF2C135B (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, int32_t ___len0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___len0;
		int32_t L_1 = __this->___mainBlockPos_15;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		bool L_2 = __this->___forEncryption_3;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___macSize_4;
		return ((int32_t)il2cpp_codegen_add(L_3, L_4));
	}

IL_001a:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->___macSize_4;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___macSize_4;
		return ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_002c:
	{
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetUpdateOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_GetUpdateOutputSize_m882602520E7A6672F8E869E5B2F08494C3878563 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, int32_t ___len0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___len0;
		int32_t L_1 = __this->___mainBlockPos_15;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		bool L_2 = __this->___forEncryption_3;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___macSize_4;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		return 0;
	}

IL_001c:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->___macSize_4;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0025:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_0;
		return ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)(L_8%((int32_t)16)))));
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessAadByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_ProcessAadByte_m9ACBF6AB3F1B4421A684AC24A9D7501C8E4B74E3 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, uint8_t ___input0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___hashBlock_12;
		int32_t L_1 = __this->___hashBlockPos_14;
		uint8_t L_2 = ___input0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)L_2);
		int32_t L_3 = __this->___hashBlockPos_14;
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		V_0 = L_4;
		__this->___hashBlockPos_14 = L_4;
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___hashBlock_12;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		VirtualActionInvoker0::Invoke(33 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessHashBlock() */, __this);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_ProcessAadBytes_mA4846984B600C26B68924584A25E9DB8979B590C (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___off1, int32_t ___len2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_003b;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___hashBlock_12;
		int32_t L_1 = __this->___hashBlockPos_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___off1;
		int32_t L_4 = V_0;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		uint8_t L_6 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)L_6);
		int32_t L_7 = __this->___hashBlockPos_14;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		V_1 = L_8;
		__this->___hashBlockPos_14 = L_8;
		int32_t L_9 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___hashBlock_12;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0037;
		}
	}
	{
		VirtualActionInvoker0::Invoke(33 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessHashBlock() */, __this);
	}

IL_0037:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003b:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___len2;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessByte(System.Byte,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_ProcessByte_m072690D26449EED20298BB1C938D04860B187621 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, uint8_t ___input0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output1, int32_t ___outOff2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mainBlock_13;
		int32_t L_1 = __this->___mainBlockPos_15;
		uint8_t L_2 = ___input0;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)L_2);
		int32_t L_3 = __this->___mainBlockPos_15;
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		V_0 = L_4;
		__this->___mainBlockPos_15 = L_4;
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___mainBlock_13;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___output1;
		int32_t L_8 = ___outOff2;
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(34 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessMainBlock(System.Byte[],System.Int32) */, __this, L_7, L_8);
		return ((int32_t)16);
	}

IL_0034:
	{
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_ProcessBytes_mF81372920D428C0947EE846AA7BA579BF29494DB (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, int32_t ___inOff1, int32_t ___len2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output3, int32_t ___outOff4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0048;
	}

IL_0006:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mainBlock_13;
		int32_t L_1 = __this->___mainBlockPos_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___input0;
		int32_t L_3 = ___inOff1;
		int32_t L_4 = V_1;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		uint8_t L_6 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)L_6);
		int32_t L_7 = __this->___mainBlockPos_15;
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		V_2 = L_8;
		__this->___mainBlockPos_15 = L_8;
		int32_t L_9 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___mainBlock_13;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0044;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___output3;
		int32_t L_12 = ___outOff4;
		int32_t L_13 = V_0;
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(34 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessMainBlock(System.Byte[],System.Int32) */, __this, L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)16)));
	}

IL_0044:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0048:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = ___len2;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_18 = V_0;
		return L_18;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_DoFinal_mF61E82DADC50ED931CB9DB096FE9A2001C213578 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		bool L_0 = __this->___forEncryption_3;
		if (L_0)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_1 = __this->___mainBlockPos_15;
		int32_t L_2 = __this->___macSize_4;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_3 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4901277BD17A5B2F9FD51DCD98D6CE81842202C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher_DoFinal_mF61E82DADC50ED931CB9DB096FE9A2001C213578_RuntimeMethod_var)));
	}

IL_0023:
	{
		int32_t L_4 = __this->___mainBlockPos_15;
		int32_t L_5 = __this->___macSize_4;
		__this->___mainBlockPos_15 = ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		int32_t L_6 = __this->___macSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___mainBlock_13;
		int32_t L_9 = __this->___mainBlockPos_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		int32_t L_11 = __this->___macSize_4;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_005b:
	{
		int32_t L_12 = __this->___hashBlockPos_14;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0081;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___hashBlock_12;
		int32_t L_14 = __this->___hashBlockPos_14;
		OcbBlockCipher_OCB_extend_mB7FCD3C3413150F5298B382C09B178B032F17164(L_13, L_14, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___L_Asterisk_7;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(36 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::UpdateHASH(System.Byte[]) */, __this, L_15);
	}

IL_0081:
	{
		int32_t L_16 = __this->___mainBlockPos_15;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0141;
		}
	}
	{
		bool L_17 = __this->___forEncryption_3;
		if (!L_17)
		{
			goto IL_00b7;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___mainBlock_13;
		int32_t L_19 = __this->___mainBlockPos_15;
		OcbBlockCipher_OCB_extend_mB7FCD3C3413150F5298B382C09B178B032F17164(L_18, L_19, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___Checksum_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___mainBlock_13;
		OcbBlockCipher_Xor_mE6DBBAF31DE079D3488BB835333BA03438787996(L_20, L_21, NULL);
	}

IL_00b7:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___OffsetMAIN_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___L_Asterisk_7;
		OcbBlockCipher_Xor_mE6DBBAF31DE079D3488BB835333BA03438787996(L_22, L_23, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_1 = L_24;
		RuntimeObject* L_25 = __this->___hashCipher_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___OffsetMAIN_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_1;
		int32_t L_28;
		L_28 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_25, L_26, 0, L_27, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___mainBlock_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_1;
		OcbBlockCipher_Xor_mE6DBBAF31DE079D3488BB835333BA03438787996(L_29, L_30, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___output0;
		int32_t L_32 = ___outOff1;
		int32_t L_33 = __this->___mainBlockPos_15;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_31, L_32, L_33, _stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___mainBlock_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___output0;
		int32_t L_36 = ___outOff1;
		int32_t L_37 = __this->___mainBlockPos_15;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_34, 0, (RuntimeArray*)L_35, L_36, L_37, NULL);
		bool L_38 = __this->___forEncryption_3;
		if (L_38)
		{
			goto IL_0141;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = __this->___mainBlock_13;
		int32_t L_40 = __this->___mainBlockPos_15;
		OcbBlockCipher_OCB_extend_mB7FCD3C3413150F5298B382C09B178B032F17164(L_39, L_40, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = __this->___Checksum_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = __this->___mainBlock_13;
		OcbBlockCipher_Xor_mE6DBBAF31DE079D3488BB835333BA03438787996(L_41, L_42, NULL);
	}

IL_0141:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = __this->___Checksum_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = __this->___OffsetMAIN_20;
		OcbBlockCipher_Xor_mE6DBBAF31DE079D3488BB835333BA03438787996(L_43, L_44, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = __this->___Checksum_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = __this->___L_Dollar_8;
		OcbBlockCipher_Xor_mE6DBBAF31DE079D3488BB835333BA03438787996(L_45, L_46, NULL);
		RuntimeObject* L_47 = __this->___hashCipher_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = __this->___Checksum_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = __this->___Checksum_21;
		int32_t L_50;
		L_50 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_47, L_48, 0, L_49, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->___Checksum_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = __this->___Sum_19;
		OcbBlockCipher_Xor_mE6DBBAF31DE079D3488BB835333BA03438787996(L_51, L_52, NULL);
		int32_t L_53 = __this->___macSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_53);
		__this->___macBlock_22 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___macBlock_22), (void*)L_54);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = __this->___Checksum_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = __this->___macBlock_22;
		int32_t L_57 = __this->___macSize_4;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_55, 0, (RuntimeArray*)L_56, 0, L_57, NULL);
		int32_t L_58 = __this->___mainBlockPos_15;
		V_2 = L_58;
		bool L_59 = __this->___forEncryption_3;
		if (!L_59)
		{
			goto IL_01fc;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = ___output0;
		int32_t L_61 = ___outOff1;
		int32_t L_62 = V_2;
		int32_t L_63 = __this->___macSize_4;
		Check_OutputLength_m736DD1F78932A05B6E7BF4BEE7606BAD570FFC3B(L_60, L_61, ((int32_t)il2cpp_codegen_add(L_62, L_63)), _stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = __this->___macBlock_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = ___output0;
		int32_t L_66 = ___outOff1;
		int32_t L_67 = V_2;
		int32_t L_68 = __this->___macSize_4;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_64, 0, (RuntimeArray*)L_65, ((int32_t)il2cpp_codegen_add(L_66, L_67)), L_68, NULL);
		int32_t L_69 = V_2;
		int32_t L_70 = __this->___macSize_4;
		V_2 = ((int32_t)il2cpp_codegen_add(L_69, L_70));
		goto IL_0215;
	}

IL_01fc:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = __this->___macBlock_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = Arrays_ConstantTimeAreEqual_m276F471905921D3AACBB6A6A6CE63DCFD4CBAE3E(L_71, L_72, NULL);
		if (L_73)
		{
			goto IL_0215;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_74 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_74, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA60FCC00D6D4CA6783A659EEC3F2851AEA8D66AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher_DoFinal_mF61E82DADC50ED931CB9DB096FE9A2001C213578_RuntimeMethod_var)));
	}

IL_0215:
	{
		VirtualActionInvoker1< bool >::Invoke(35 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Reset(System.Boolean) */, __this, (bool)0);
		int32_t L_75 = V_2;
		return L_75;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_Reset_m4E3D871D62E7A67343A66CC6FDE5CB6677257A54 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, const RuntimeMethod* method) 
{
	{
		VirtualActionInvoker1< bool >::Invoke(35 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Reset(System.Boolean) */, __this, (bool)1);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Clear(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_Clear_mBF9B88A6E2D823B78E448C284E57F31DB9FB9247 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bs0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bs0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___bs0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bs0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetLSub(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OcbBlockCipher_GetLSub_mE2F23D6AC7EBD0F5E59EE1796EE0E309443658AE (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, int32_t ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0030;
	}

IL_0002:
	{
		RuntimeObject* L_0 = __this->___L_6;
		RuntimeObject* L_1 = __this->___L_6;
		RuntimeObject* L_2 = __this->___L_6;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_1, ((int32_t)il2cpp_codegen_subtract(L_3, 1)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = OcbBlockCipher_OCB_double_m539FF6B57BFB0E14A0E8A4AB3DFC430D2865B357(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)), NULL);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, (RuntimeObject*)L_5);
	}

IL_0030:
	{
		int32_t L_7 = ___n0;
		RuntimeObject* L_8 = __this->___L_6;
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_8);
		if ((((int32_t)L_7) >= ((int32_t)L_9)))
		{
			goto IL_0002;
		}
	}
	{
		RuntimeObject* L_10 = __this->___L_6;
		int32_t L_11 = ___n0;
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_10, L_11);
		return ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_12, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessHashBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_ProcessHashBlock_m0D8D086555BB54715B2AD2C6E3D2ECAD1FE9B3B9 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->___hashBlockCount_16;
		int64_t L_1 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)1)));
		V_0 = L_1;
		__this->___hashBlockCount_16 = L_1;
		int64_t L_2 = V_0;
		int32_t L_3;
		L_3 = OcbBlockCipher_OCB_ntz_m55AD251CFDE56653D4961FC3338F90E170EADB43(L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(32 /* System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetLSub(System.Int32) */, __this, L_3);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(36 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::UpdateHASH(System.Byte[]) */, __this, L_4);
		__this->___hashBlockPos_14 = 0;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessMainBlock(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_ProcessMainBlock_m11CEB0AAE1D33EFEA6B8003A4D547BAC33BB7F8F (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output0, int32_t ___outOff1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___output0;
		int32_t L_1 = ___outOff1;
		Check_DataLength_mE94F6C1465A4D6661F0F110CD60063EF6E556E2F(L_0, L_1, ((int32_t)16), _stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C, NULL);
		bool L_2 = __this->___forEncryption_3;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___Checksum_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___mainBlock_13;
		OcbBlockCipher_Xor_mE6DBBAF31DE079D3488BB835333BA03438787996(L_3, L_4, NULL);
		__this->___mainBlockPos_15 = 0;
	}

IL_002e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___OffsetMAIN_20;
		int64_t L_6 = __this->___mainBlockCount_17;
		int64_t L_7 = ((int64_t)il2cpp_codegen_add(L_6, ((int64_t)1)));
		V_0 = L_7;
		__this->___mainBlockCount_17 = L_7;
		int64_t L_8 = V_0;
		int32_t L_9;
		L_9 = OcbBlockCipher_OCB_ntz_m55AD251CFDE56653D4961FC3338F90E170EADB43(L_8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(32 /* System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetLSub(System.Int32) */, __this, L_9);
		OcbBlockCipher_Xor_mE6DBBAF31DE079D3488BB835333BA03438787996(L_5, L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___mainBlock_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___OffsetMAIN_20;
		OcbBlockCipher_Xor_mE6DBBAF31DE079D3488BB835333BA03438787996(L_11, L_12, NULL);
		RuntimeObject* L_13 = __this->___mainCipher_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___mainBlock_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___mainBlock_13;
		int32_t L_16;
		L_16 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_13, L_14, 0, L_15, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___mainBlock_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___OffsetMAIN_20;
		OcbBlockCipher_Xor_mE6DBBAF31DE079D3488BB835333BA03438787996(L_17, L_18, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___mainBlock_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___output0;
		int32_t L_21 = ___outOff1;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_19, 0, (RuntimeArray*)L_20, L_21, ((int32_t)16), NULL);
		bool L_22 = __this->___forEncryption_3;
		if (L_22)
		{
			goto IL_00e1;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___Checksum_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___mainBlock_13;
		OcbBlockCipher_Xor_mE6DBBAF31DE079D3488BB835333BA03438787996(L_23, L_24, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___mainBlock_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___mainBlock_13;
		int32_t L_27 = __this->___macSize_4;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_25, ((int32_t)16), (RuntimeArray*)L_26, 0, L_27, NULL);
		int32_t L_28 = __this->___macSize_4;
		__this->___mainBlockPos_15 = L_28;
	}

IL_00e1:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Reset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_Reset_m89E40D633651E4745C675C3D06DA3C132D35446D (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, bool ___clearMac0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___hashCipher_1;
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_1 = __this->___mainCipher_2;
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___hashBlock_12;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Clear(System.Byte[]) */, __this, L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___mainBlock_13;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Clear(System.Byte[]) */, __this, L_3);
		__this->___hashBlockPos_14 = 0;
		__this->___mainBlockPos_15 = 0;
		__this->___hashBlockCount_16 = ((int64_t)0);
		__this->___mainBlockCount_17 = ((int64_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___OffsetHASH_18;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Clear(System.Byte[]) */, __this, L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___Sum_19;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Clear(System.Byte[]) */, __this, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___OffsetMAIN_0_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___OffsetMAIN_20;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, 0, ((int32_t)16), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___Checksum_21;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Clear(System.Byte[]) */, __this, L_8);
		bool L_9 = ___clearMac0;
		if (!L_9)
		{
			goto IL_008f;
		}
	}
	{
		__this->___macBlock_22 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___macBlock_22), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
	}

IL_008f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___initialAssociatedText_5;
		if (!L_10)
		{
			goto IL_00ac;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___initialAssociatedText_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___initialAssociatedText_5;
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(26 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32) */, __this, L_11, 0, ((int32_t)(((RuntimeArray*)L_12)->max_length)));
	}

IL_00ac:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::UpdateHASH(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_UpdateHASH_mB249793FB41D5944EFC05E49D5E7E4DED9744EE8 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___LSub0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___OffsetHASH_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___LSub0;
		OcbBlockCipher_Xor_mE6DBBAF31DE079D3488BB835333BA03438787996(L_0, L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___hashBlock_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___OffsetHASH_18;
		OcbBlockCipher_Xor_mE6DBBAF31DE079D3488BB835333BA03438787996(L_2, L_3, NULL);
		RuntimeObject* L_4 = __this->___hashCipher_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___hashBlock_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___hashBlock_12;
		int32_t L_7;
		L_7 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_4, L_5, 0, L_6, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___Sum_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___hashBlock_12;
		OcbBlockCipher_Xor_mE6DBBAF31DE079D3488BB835333BA03438787996(L_8, L_9, NULL);
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OCB_double(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OcbBlockCipher_OCB_double_m539FF6B57BFB0E14A0E8A4AB3DFC430D2865B357 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___block0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___block0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		int32_t L_3;
		L_3 = OcbBlockCipher_ShiftLeft_m6D54179830F48DDD9271F1CE8B0DD02805CF7434(L_1, L_2, NULL);
		V_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		V_2 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_2;
		int32_t L_7 = ((int32_t)15);
		uint8_t L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9 = V_1;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_8^((int32_t)(uint8_t)((int32_t)(((int32_t)135)>>((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_subtract(1, L_9))<<3))&((int32_t)31))))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		return L_10;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OCB_extend(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_OCB_extend_mB7FCD3C3413150F5298B382C09B178B032F17164 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___block0, int32_t ___pos1, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___block0;
		int32_t L_1 = ___pos1;
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)128));
		goto IL_000e;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___block0;
		int32_t L_3 = ___pos1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)0);
	}

IL_000e:
	{
		int32_t L_4 = ___pos1;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		___pos1 = L_5;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)16))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OCB_ntz(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_OCB_ntz_m55AD251CFDE56653D4961FC3338F90E170EADB43 (int64_t ___x0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		int64_t L_0 = ___x0;
		if ((!(((uint64_t)L_0) == ((uint64_t)((int64_t)0)))))
		{
			goto IL_0008;
		}
	}
	{
		return ((int32_t)64);
	}

IL_0008:
	{
		V_0 = 0;
		int64_t L_1 = ___x0;
		V_1 = L_1;
		goto IL_0016;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		uint64_t L_3 = V_1;
		V_1 = ((int64_t)((uint64_t)L_3>>1));
	}

IL_0016:
	{
		uint64_t L_4 = V_1;
		if ((((int64_t)((int64_t)((int64_t)L_4&((int64_t)1)))) == ((int64_t)((int64_t)0))))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ShiftLeft(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_ShiftLeft_m6D54179830F48DDD9271F1CE8B0DD02805CF7434 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___block0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___output1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = ((int32_t)16);
		V_1 = 0;
		goto IL_001a;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___block0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		V_2 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___output1;
		int32_t L_5 = V_0;
		uint32_t L_6 = V_2;
		uint32_t L_7 = V_1;
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_6<<1))|(int32_t)L_7))));
		uint32_t L_8 = V_2;
		V_1 = ((int32_t)(((int32_t)((uint32_t)L_8>>7))&1));
	}

IL_001a:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		V_0 = L_10;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		uint32_t L_11 = V_1;
		return L_11;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Xor(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_Xor_mE6DBBAF31DE079D3488BB835333BA03438787996 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___block0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___val1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = ((int32_t)15);
		goto IL_0018;
	}

IL_0005:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___block0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		V_2 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		intptr_t L_5 = V_2;
		intptr_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___val1;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_7^(int32_t)L_11))));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0018:
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkeinEngine_get_OutputSize_m7B75A727F4C5300C10FEBFBCAEE6E6BBEDC3EF0A_inline (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___outputSizeBytes_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___parameters_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithRandom_get_Parameters_mFED49C45204261ACF08DC4617FC59E9025C5DA8E_inline (ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___parameters_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CbcBlockCipher_GetUnderlyingCipher_m9D8930D21D0EA39C84EE8CEDE1EAE9AB9859BD14_inline (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___cipher_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
