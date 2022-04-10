﻿#include "pch-cpp.hpp"

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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_tEE97FB3EBFE8765D0E2FC164B95E82BA5D0EAE86;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>
struct List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Networking.IMultipartFormSection[]
struct IMultipartFormSectionU5BU5D_t665EF3A0485239BDC58B5C8934196EF568AF2EC3;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType[]
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Networking.IMultipartFormSection
struct IMultipartFormSection_tE1168E22BCEDEA1E27862494E225B2E7B4C56BDF;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Networking.MultipartFormFileSection
struct MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMultipartFormSection_tE1168E22BCEDEA1E27862494E225B2E7B4C56BDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0202811166757AF262261201E48B89F6244FAE6C;
IL2CPP_EXTERN_C String_t* _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708;
IL2CPP_EXTERN_C String_t* _stringLiteral05851BA4FAAADF682AB82A50026F74619C8BC4B6;
IL2CPP_EXTERN_C String_t* _stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05;
IL2CPP_EXTERN_C String_t* _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90;
IL2CPP_EXTERN_C String_t* _stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA;
IL2CPP_EXTERN_C String_t* _stringLiteral225454A90D745E7A7A5DE5C12169566FBC05370D;
IL2CPP_EXTERN_C String_t* _stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317;
IL2CPP_EXTERN_C String_t* _stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86;
IL2CPP_EXTERN_C String_t* _stringLiteral350138951CA76BFC65A77EA2D223A8D476B10BC5;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral4B0CEF65E50AE46EF4878CC1DD83FF8B5ED020EA;
IL2CPP_EXTERN_C String_t* _stringLiteral5103D4E1997DA1B63FD919F701A6A08F2CC278FB;
IL2CPP_EXTERN_C String_t* _stringLiteral56B70A227BDF525F3B35BE8F7F19C2510184DC02;
IL2CPP_EXTERN_C String_t* _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84;
IL2CPP_EXTERN_C String_t* _stringLiteral5AD0071445300544C945A4235FF5EE2237930AF6;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral5CE7A1E1E42333BF53E138868B7E6871FD1FC571;
IL2CPP_EXTERN_C String_t* _stringLiteral641255E7CDC790311725CCB47DB63D989117D244;
IL2CPP_EXTERN_C String_t* _stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F;
IL2CPP_EXTERN_C String_t* _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral6D320886236F09707493AF7F5BC1F3DC4B334714;
IL2CPP_EXTERN_C String_t* _stringLiteral6EC9B8634CD99C1B15ADA83AC13CCF4DCB899E1A;
IL2CPP_EXTERN_C String_t* _stringLiteral716D4DCF03C354CF6AC6FB6BDBEC2E94AAE7139E;
IL2CPP_EXTERN_C String_t* _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
IL2CPP_EXTERN_C String_t* _stringLiteral774D4BF54129BC524F2FC2ADFFD07EC2B34C8843;
IL2CPP_EXTERN_C String_t* _stringLiteral7D2659B30CD7065E2E3DAAE5ABDCFE4A0B66782E;
IL2CPP_EXTERN_C String_t* _stringLiteral7D6783AA5E64857D25AFFFBD74CE5D0AF2558309;
IL2CPP_EXTERN_C String_t* _stringLiteral7DAC516092AE075D549759FBFE57497622D29F15;
IL2CPP_EXTERN_C String_t* _stringLiteral830D3B1988207AD90E6500EFD5191F802329C898;
IL2CPP_EXTERN_C String_t* _stringLiteral8736C4CF815A67FB8DABFB271FFB66F3B496E35A;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteral8DA696190A9052B3303D45C87CA50BEDCFA7494C;
IL2CPP_EXTERN_C String_t* _stringLiteral9305B29342F3BC0993F85105BB6141FF30569ED2;
IL2CPP_EXTERN_C String_t* _stringLiteral93CE1F3EEBFA5A5C2C336C37D31A01039231CA39;
IL2CPP_EXTERN_C String_t* _stringLiteral997F93B8223285BB571C83E7ACD6C6615F5EF04C;
IL2CPP_EXTERN_C String_t* _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
IL2CPP_EXTERN_C String_t* _stringLiteralA3EDB257239BA23A2B3196FB9697A402B943583D;
IL2CPP_EXTERN_C String_t* _stringLiteralBC3A46521634BE1B34BB2F00154A05110A698F36;
IL2CPP_EXTERN_C String_t* _stringLiteralBCE49DFF590DB2AB94984A5C75EF18BDDD83FE69;
IL2CPP_EXTERN_C String_t* _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536;
IL2CPP_EXTERN_C String_t* _stringLiteralC2FDD8C12F3B1B50760A1205078973FB63C7CF62;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralCDFDBC13EE222005FD5A3ED5AE4DD309848E3C50;
IL2CPP_EXTERN_C String_t* _stringLiteralCE02B6F4CAAD9B14B2B4CBB6E5E1A7B2774E4FE2;
IL2CPP_EXTERN_C String_t* _stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38;
IL2CPP_EXTERN_C String_t* _stringLiteralE00A966C5B031CE4B6E347CFA86D0E58926E6409;
IL2CPP_EXTERN_C String_t* _stringLiteralEB3DF58228CDA6AA5325549ADFCEDF52FC5CBF6A;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m97106443867137425CC9BF9FF68809005C5DD631_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mACC41ABCE1A64DB96C1D92AF269E242EBD9D4102_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4806E5E4DB69BA4B3FAC10A4E7AC1C05508F1918_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3534716D04DFE46BF26D5842CF14B4F5E33C384F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0C23D34F33EBEF620CA00054786CC1B6F684CE21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultipartFormFileSection__ctor_m5F1D762C8E510D725DB8451A9083748A3B7798DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m43F0AE90A986A434C9B62B82562A021E0B5065C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9261CD83E770034D4BDBB7D3907F4648D8ED4E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_ToArray_m2E1BCF853BB72AAB8C219A18582F0AB2FA05CF1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m647D47A76DC6BCB65EDACF5DE440431F6E2FE262_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_InternalSetCustomMethod_m438D89359CA23426910FBE2F58D3D6D21E80BF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_InternalSetMethod_m91C9BE2FB38963FEBDACB221CB275CA7AF2828F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_InternalSetUrl_mD3602EB8A5253116EA0EE8B18223A51BE79883E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_method_m35F9B5C788C66EACF3FB36FA220AA6B6777CFE88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_uri_m273584DE722413D238FB04EA0AE5F35A580272C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequest_set_useHttpContinue_m69A9328F59DD88D26472A60530C42DB1D770571E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestUtils_MakeInitialUrl_m5F37E0E7FB2F75F84E1D13EE6F35CC3252B458CE_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t42F165DEA2597BD5AB2C914FCF80349ECF878162 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>
struct List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IMultipartFormSectionU5BU5D_t665EF3A0485239BDC58B5C8934196EF568AF2EC3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IMultipartFormSectionU5BU5D_t665EF3A0485239BDC58B5C8934196EF568AF2EC3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
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

// UnityEngine.Networking.MultipartFormFileSection
struct MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB  : public RuntimeObject
{
	// System.String UnityEngine.Networking.MultipartFormFileSection::name
	String_t* ___name_0;
	// System.Byte[] UnityEngine.Networking.MultipartFormFileSection::data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data_1;
	// System.String UnityEngine.Networking.MultipartFormFileSection::file
	String_t* ___file_2;
	// System.String UnityEngine.Networking.MultipartFormFileSection::content
	String_t* ___content_3;
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

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
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

// UnityEngine.WWWForm
struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;
};

struct WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields
{
	// System.Byte[] UnityEngine.WWWForm::dDash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dDash_6;
	// System.Byte[] UnityEngine.WWWForm::crlf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___crlf_7;
	// System.Byte[] UnityEngine.WWWForm::contentTypeHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___contentTypeHeader_8;
	// System.Byte[] UnityEngine.WWWForm::dispositionHeader
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dispositionHeader_9;
	// System.Byte[] UnityEngine.WWWForm::endQuote
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___endQuote_10;
	// System.Byte[] UnityEngine.WWWForm::fileNameField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fileNameField_11;
	// System.Byte[] UnityEngine.WWWForm::ampersand
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ampersand_12;
	// System.Byte[] UnityEngine.WWWForm::equal
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___equal_13;
};

// UnityEngine.WWWTranscoder
struct WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B  : public RuntimeObject
{
};

struct WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields
{
	// System.Byte[] UnityEngine.WWWTranscoder::ucHexChars
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ucHexChars_0;
	// System.Byte[] UnityEngine.WWWTranscoder::lcHexChars
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lcHexChars_1;
	// System.Byte UnityEngine.WWWTranscoder::urlEscapeChar
	uint8_t ___urlEscapeChar_2;
	// System.Byte[] UnityEngine.WWWTranscoder::urlSpace
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___urlSpace_3;
	// System.Byte[] UnityEngine.WWWTranscoder::dataSpace
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dataSpace_4;
	// System.Byte[] UnityEngine.WWWTranscoder::urlForbidden
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___urlForbidden_5;
	// System.Byte UnityEngine.WWWTranscoder::qpEscapeChar
	uint8_t ___qpEscapeChar_6;
	// System.Byte[] UnityEngine.WWWTranscoder::qpSpace
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qpSpace_7;
	// System.Byte[] UnityEngine.WWWTranscoder::qpForbidden
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___qpForbidden_8;
};

// UnityEngineInternal.WebRequestUtils
struct WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443  : public RuntimeObject
{
};

struct WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___domainRegex_0;
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.IMultipartFormSection>
struct Enumerator_t3221A562679D6D2FAD5ADD680BF5F03F7FE8D58F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
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

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
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

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerBuffer::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A  : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.UploadHandlerRaw::m_Payload
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_pinvoke : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_com : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};

IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_back(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke& marshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled);
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_cleanup(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_com(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_com_back(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com& marshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled);
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_com_cleanup(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_back(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_cleanup(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_back(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_cleanup(UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_back(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_cleanup(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com_back(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled);
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com_cleanup(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com_back(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled);
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com_cleanup(UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com_back(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled);
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com_cleanup(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m2FCA3ADC6B671B4DEA66C3D2C2AE4CA5F627AEE0_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___nativeArray0, const RuntimeMethod* method) ;
// T[] Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* NativeArray_1_ToArray_m36734C0A577134F73463545CA7A587BCA1792002_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_mC831E467D4BD0119FF05A031131A750A97712427_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(T[],Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m840B99F1F4447BB0CE13C53803EB5DB4930E3F89_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___array0, int32_t ___allocator1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;

// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String,System.UriKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m24549041BC5661EAC10BA8CB35B60AD6512AF69B (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___uriString0, int32_t ___uriKind1, const RuntimeMethod* method) ;
// System.Boolean System.Uri::get_IsAbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_m2F9B759B85D295639D7959A616E1FBC203D756DF (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.String System.Uri::get_AbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m5AA91BCDE21E8AD62B9A48948CF3661B2F00E38F (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___baseUri0, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___relativeUri1, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___uriString0, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_mD7EC916948CBFE71F80298DDA6E4209724958B09 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___baseUri0, String_t* ___relativeUri1, const RuntimeMethod* method) ;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Equality_mB299FA02A76FD12A781BCBAD53D65B73C1768682 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri10, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri21, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___input0, const RuntimeMethod* method) ;
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Boolean System.Uri::TryCreate(System.String,System.UriKind,System.Uri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_TryCreate_mBDD7F98C3BEBD9C3936DDF7960533CBB56478FDF (String_t* ___uriString0, int32_t ___uriKind1, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E** ___result2, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String UnityEngineInternal.WebRequestUtils::MakeUriString(System.Uri,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeUriString_mE4CE2CECE45A50A41CEBA43B2F29BDBEF6984CC3 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___targetUri0, String_t* ___targetUrl1, bool ___prependProtocol2, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF36D7701399DDDC077C4B55CF2142E976D956619 (StringBuilder_t* __this, String_t* ___value0, int32_t ___capacity1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.Uri::get_AbsolutePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_AbsolutePath_mABB93DD30D4C0F11948DE5C117650B1C3A9925CA (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngineInternal.WebRequestUtils::URLDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_URLDecode_m8A6FB8F6609D6BFDFBA86A2EA5A687090B67E49A (String_t* ___encoded0, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String System.Uri::get_PathAndQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_PathAndQuery_m33B64A4AAF08510C0199CF5A85918B91D1008E5C (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.String System.Uri::get_Fragment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Fragment_m3CB7AD14DA9618ADE406039D4713F67D6951D835 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.String System.Uri::get_OriginalString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_OriginalString_m3031F9054CA10F2C55C0E2415CC19810D360A5D6 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.WWWTranscoder::URLDecode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_URLDecode_mF1D641C3B75814073B4AE22202CC94A9116A15A4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___toEncode0, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m5309EB3D9652AF0CFBEBFB42324E6AF0BCFB350E (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, String_t* ___fieldName0, String_t* ___value1, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___e2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
inline void List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, String_t* ___fieldName0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddBinaryData_m47F69B41BEF235B6C7D8643630251E134BFF167C (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, String_t* ___fieldName0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___contents1, String_t* ___fileName2, String_t* ___mimeType3, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___key0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_SevenBitClean_m492DA4C48F90C32ACAC216152F34A527759A0818 (String_t* ___s0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___e1, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWWTranscoder_QPEncode_m5C30E12C7156DB3685C020C6E1CBF750D8313083 (String_t* ___toEncode0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___e1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Byte[]>::get_Item(System.Int32)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, int32_t ___index0, const RuntimeMethod* method)
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Int32 System.Collections.Generic.List`1<System.Byte[]>::get_Count()
inline int32_t List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Byte[] UnityEngine.WWWTranscoder::DataEncode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_DataEncode_m18E91BACFE595DF19FEBFA644C27015FD9569AC7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___toEncode0, const RuntimeMethod* method) ;
// System.Text.Encoding UnityEngine.WWWForm::get_DefaultEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20 (const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_Encode_m4A986740A7F5D511F68C9A1DA3AD577AD583D56A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___space2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___forbidden3, bool ___uppercase4, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteArrayContains_m24942004A51B679886583E185D64786773901A4A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, uint8_t ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[],System.Byte&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWTranscoder_Byte2Hex_m5508592B832098DA3772FC30AB94DC223DFF87E5 (uint8_t ___b0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hexChars1, uint8_t* ___byte02, uint8_t* ___byte13, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.WWWTranscoder::Decode(System.Byte[],System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_Decode_mE374CCDECF9DC94BDEF4E4864A1A866EA6E0517E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___space2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.WWWTranscoder::ByteSubArrayEquals(System.Byte[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteSubArrayEquals_mDF73859DE753AC7A72BFB1EA7A680B0A044E3539 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___index1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___comperand2, const RuntimeMethod* method) ;
// System.Byte UnityEngine.WWWTranscoder::Hex2Byte(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WWWTranscoder_Hex2Byte_m2613586F9B456371D972483BB2E1FF55951FE36A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_mBBE58AEA702864FB006771F4600D1D99B1234460 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_SevenBitClean_m0790A7209E5E6423D0A88029B072E1E82579B59B (uint8_t* ___input0, int32_t ___inputLength1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.MultipartFormFileSection::Init(System.String,System.Byte[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipartFormFileSection_Init_m83608819F90DAD79B8B666409AF1D440908B1FFE (MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB* __this, String_t* ___name0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, String_t* ___fileName2, String_t* ___contentType3, const RuntimeMethod* method) ;
// System.Void UnityEngine.AsyncOperation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation__ctor_m53CF89405A1E2DA6F517D05792826F5784B0D6EC (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Abort_m466E8B88BC90F64CE614561BAA88B9412BDB7E8B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Release_m3835F83F59D3976462F1B98810C8FC42E2C512A2 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeDownloadHandlerOnDispose(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m1BF640E233D231F8C0333864C0FE5D9E1DC2E7C6_inline (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeUploadHandlerOnDispose(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeUploadHandlerOnDispose_mFE16234F005357FECF4A45F842D17C0C52B7CA6E_inline (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeCertificateHandlerOnDispose(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeCertificateHandlerOnDispose_m5EFCAF91A547716C4ACA5FB546E991B79E3D0E2A_inline (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Networking.UnityWebRequest::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityWebRequest_Create_m9840C05EBA6B60CB8071F00DED6BE62122A709BA (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetDefaults_m6B95AE6129B13EAB3F66B103F6682AB33C27B3B0 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_url_m5C117F8E00BA03DDC9EBC859DCB31BB4B6E3ECFC (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_method_m35F9B5C788C66EACF3FB36FA220AA6B6777CFE88 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::DisposeHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_DisposeHandlers_mEE16444204C3D4D1D0119B987DA8CEB3979B309D (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalDestroy_mEA38293D4F8B8DB58DA3D739DFEDFAF7BF418B92 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeDownloadHandlerOnDispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_mA5E23BB2B931F6EF089C732D0E56E1B7F9FC1C54_inline (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeUploadHandlerOnDispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeUploadHandlerOnDispose_m909CC9BEACAC26C87F44AA957B8F5E5CD10F5761_inline (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* UnityWebRequest_get_uploadHandler_mF92ED2E0410E7F720B8775B467CFD86B60909CF5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeCertificateHandlerOnDispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m5BF6519F2982ABA7912948690570F7729EDF25E9_inline (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::get_certificateHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* UnityWebRequest_get_certificateHandler_m928A7BE34EB3725EA1D977877B7362E813918D7D (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.CertificateHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler_Dispose_mA33A9B76B93B8DF2FEB665A0AFB1C1E6933CFC43 (CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::BeginWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_BeginWebRequest_m5850801A007A95F35CCBAA5E947FF385DB50AE0D (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::set_webRequest(UnityEngine.Networking.UnityWebRequest)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation_set_webRequest_mB4B19873C06FD29078CB1E8BF05B0D077F0FF711_inline (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isModifiable_m8B2DA7C5B43443C4262BB0289141A608E2695D77 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetMethod_mB3B6FE6A201CC1E22BAEFA0B9A88B4B421915238 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, int32_t ___methodType0, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetWebErrorString_m986FF7F844932E496623D33E700FD52A19FAFDC7 (int32_t ___err0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetCustomMethod_mA970EB4024D1303CF03FFB183CE102A84BC231AB (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___customMethodName0, const RuntimeMethod* method) ;
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49 (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetMethod_m91C9BE2FB38963FEBDACB221CB275CA7AF2828F4 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, int32_t ___methodType0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetCustomMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetCustomMethod_m438D89359CA23426910FBE2F58D3D6D21E80BF40 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___customMethodName0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::GetHTTPStatusString(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetHTTPStatusString_m74E4376F46B315A815D1CF0105AE5A0D36A03219 (int64_t ___responseCode0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::GetError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_GetError_m4A888DDBEE9F390C92090C6355DFB1F94A33BB86 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_use100Continue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_use100Continue_m21E1B5433D7A985CB34CF9561C3D6DB98C4F893F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_absoluteURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_absoluteURL_m1BF6668AF534BC6E7FBB9D19591AF29DF0DAD2F1 (const RuntimeMethod* method) ;
// System.String UnityEngineInternal.WebRequestUtils::MakeInitialUrl(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeInitialUrl_m5F37E0E7FB2F75F84E1D13EE6F35CC3252B458CE (String_t* ___targetUrl0, String_t* ___localUrl1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetUrl_mD3602EB8A5253116EA0EE8B18223A51BE79883E9 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___url0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUrl_m6DF66CA4E86A4604C9A79DF16886AEAB4A2153C5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___url0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_InternalSetRequestHeader_m6D56972D305CBFC6EC3308483E3D9BC06E38F353 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUploadHandler_mB8586D5337FA8C93E791F509235E918CFBD33973 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___uh0, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetDownloadHandler_m3EE61901234B0A0C86424E7A00B860807C73A515 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___dh0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String,UnityEngine.Networking.DownloadHandler,UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m3798CB7D0BE685F2520AF1BBF83B523BBDD7980A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___url0, String_t* ___method1, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___downloadHandler2, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___uploadHandler3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7 (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::SetupPost(UnityEngine.Networking.UnityWebRequest,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetupPost_m5C009EE548C98A48634DEBF77BFCBFC41E900733 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* ___formData1, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.WWWForm::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWForm_get_data_mE064CFB866D49D1E49FA9E0811CE71D039BB0145 (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* WWWForm_get_headers_mF6508B8C984B76EF984495FF01BA7185CFD0C63E (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A il2cppRetVal;
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, const RuntimeMethod*))Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>::get_Count()
inline int32_t List_1_get_Count_m0C23D34F33EBEF620CA00054786CC1B6F684CE21_inline (List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>::GetEnumerator()
inline Enumerator_t3221A562679D6D2FAD5ADD680BF5F03F7FE8D58F List_1_GetEnumerator_m3534716D04DFE46BF26D5842CF14B4F5E33C384F (List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* __this, const RuntimeMethod* method)
{
	Enumerator_t3221A562679D6D2FAD5ADD680BF5F03F7FE8D58F il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.IMultipartFormSection>::Dispose()
inline void Enumerator_Dispose_m97106443867137425CC9BF9FF68809005C5DD631 (Enumerator_t3221A562679D6D2FAD5ADD680BF5F03F7FE8D58F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.IMultipartFormSection>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m4806E5E4DB69BA4B3FAC10A4E7AC1C05508F1918_inline (Enumerator_t3221A562679D6D2FAD5ADD680BF5F03F7FE8D58F* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Networking.IMultipartFormSection>::MoveNext()
inline bool Enumerator_MoveNext_mACC41ABCE1A64DB96C1D92AF269E242EBD9D4102 (Enumerator_t3221A562679D6D2FAD5ADD680BF5F03F7FE8D58F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor(System.Int32)
inline void List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___capacity0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (RuntimeObject*)___collection0, method);
}
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
	return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cppRetVal;
}
// System.Void UnityEngine.Networking.CertificateHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler_Release_m53BEBE2D49365A90BABE06C0B357FFDD71D51D54 (CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Release_mE143BC893E5F52645B5CC99A1141F9EA830E0927 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DownloadHandler_InternalGetByteArray_mED0493B669A60197682B98D7112F93DA7E822C08 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___dh0, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<System.Byte>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_gshared)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<System.Byte>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9261CD83E770034D4BDBB7D3907F4648D8ED4E6 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___nativeArray0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m2FCA3ADC6B671B4DEA66C3D2C2AE4CA5F627AEE0_gshared)(il2cpp_codegen_cast_struct<NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF>(&___nativeArray0), method);
}
// System.Text.Encoding UnityEngine.Networking.DownloadHandler::GetTextEncoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* DownloadHandler_GetTextEncoder_m1D26E8E7DE1CC2FA00EF56F1741B1DDAE4885BF5 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.SByte*,System.Int32,System.Int32,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mA014E75717E6CE25BA9D641971AD637F70532339 (String_t* __this, int8_t* ___value0, int32_t ___startIndex1, int32_t ___length2, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___enc3, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::GetContentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_GetContentType_m678AE10691E33BEE69FFFDB02CACA8AD8AAADDDC (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m490810CB7ADA9230AC0F8D78E213A8EFED129F55 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4 (String_t* __this, Il2CppChar ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m81BD35659E6F89DDD56816975E6E05390D023FE5 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimChars0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_GetEncoding_mBF5A2BA804B4917644BBEC5A4230D0854236D8FE (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T[] Unity.Collections.NativeArray`1<System.Byte>::ToArray()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* NativeArray_1_ToArray_m2E1BCF853BB72AAB8C219A18582F0AB2FA05CF1F (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* il2cppRetVal = ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_ToArray_m36734C0A577134F73463545CA7A587BCA1792002_gshared)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, method);
	return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cppRetVal;
}
// System.Byte* UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* DownloadHandler_InternalGetByteArray_m02B1944EBB84D631395B821D92ED2C09658010C0 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___dh0, int32_t* ___length1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandler::DisposeNativeArray(Unity.Collections.NativeArray`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_DisposeNativeArray_m8151B42296788E932BC35B4D59711499C33D28CF (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___data0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandler::CreateNativeArrayForNativeData(Unity.Collections.NativeArray`1<System.Byte>&,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_CreateNativeArrayForNativeData_m2ACA1D74567D06D6CE11278CBB48B01C022AF100 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___data0, uint8_t* ___bytes1, int32_t ___length2, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Byte>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m43F0AE90A986A434C9B62B82562A021E0B5065C0 (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 il2cppRetVal = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_mC831E467D4BD0119FF05A031131A750A97712427_gshared)(___dataPointer0, ___length1, ___allocator2, method);
	return il2cpp_codegen_cast_struct<NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18>(&il2cppRetVal);
}
// System.IntPtr UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DownloadHandlerBuffer_Create_mF94072BAE4A019B4212CBA5C31B704B886457B3E (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler__ctor_m833275AC5FCAC0BFB4F2D5C1C0C7FD76416CE496 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::InternalCreateBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer_InternalCreateBuffer_mB2AD693185110CBED1FDA8748627DFC51E40A053 (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandler::InternalGetNativeArray(UnityEngine.Networking.DownloadHandler,Unity.Collections.NativeArray`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF DownloadHandler_InternalGetNativeArray_mB34E4B16B70C65D733749180F8F36B6787B6A9B0 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___dh0, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___nativeArray1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Dispose_mD5D4CCF0C2DFF1CB57C9B3A0EF4213ECB9F8F607 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Release_mBCD6EDAAC00B5051FDDE2D9E3395419C2906224B (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandler::InternalSetContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_InternalSetContentType_m66DDA9E69EB2843AB65623DB44B77BCA9EB4F8BB (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* __this, String_t* ___newContentType0, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::.ctor(T[],Unity.Collections.Allocator)
inline void NativeArray_1__ctor_m647D47A76DC6BCB65EDACF5DE440431F6E2FE262 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___allocator1, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m840B99F1F4447BB0CE13C53803EB5DB4930E3F89_gshared)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)___array0, ___allocator1, method);
}
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(Unity.Collections.NativeArray`1<System.Byte>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_mF9F2BAB1D9987051714541669B3D22EC9DBDCFEF (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___data0, bool ___transferOwnership1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler__ctor_mAA0BE0DDDBC45C053006C27E2AEEA68B3376B1FA (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UploadHandlerRaw_Create_m6D9B9EF8DFD2215805544A32AA6D1AC97EBD07F2 (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* ___self0, uint8_t* ___data1, int32_t ___dataLength2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Byte>::Dispose()
inline void NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_gshared)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, method);
}
// System.Void UnityEngine.Networking.UploadHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Dispose_mA92AC689361199836EEABE182E13F9759A74D109 (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngineInternal.WebRequestUtils::RedirectTo(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_RedirectTo_m9D651C0870C26ACFE61BF540CF78CAD85352AFE7 (String_t* ___baseUri0, String_t* ___redirectUri1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_0 = NULL;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_1 = NULL;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		String_t* L_0 = ___redirectUri1;
		Il2CppChar L_1;
		L_1 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_0, 0, NULL);
		V_3 = (bool)((((int32_t)L_1) == ((int32_t)((int32_t)47)))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_3 = ___redirectUri1;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		Uri__ctor_m24549041BC5661EAC10BA8CB35B60AD6512AF69B(L_4, L_3, 2, NULL);
		V_0 = L_4;
		goto IL_0022;
	}

IL_001a:
	{
		String_t* L_5 = ___redirectUri1;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_6 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		Uri__ctor_m24549041BC5661EAC10BA8CB35B60AD6512AF69B(L_6, L_5, 0, NULL);
		V_0 = L_6;
	}

IL_0022:
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_7 = V_0;
		bool L_8;
		L_8 = Uri_get_IsAbsoluteUri_m2F9B759B85D295639D7959A616E1FBC203D756DF(L_7, NULL);
		V_4 = L_8;
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_10 = V_0;
		String_t* L_11;
		L_11 = Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE(L_10, NULL);
		V_5 = L_11;
		goto IL_0052;
	}

IL_0038:
	{
		String_t* L_12 = ___baseUri0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_13 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		Uri__ctor_m24549041BC5661EAC10BA8CB35B60AD6512AF69B(L_13, L_12, 1, NULL);
		V_1 = L_13;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_14 = V_1;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_15 = V_0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_16 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		Uri__ctor_m5AA91BCDE21E8AD62B9A48948CF3661B2F00E38F(L_16, L_14, L_15, NULL);
		V_2 = L_16;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_17 = V_2;
		String_t* L_18;
		L_18 = Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE(L_17, NULL);
		V_5 = L_18;
		goto IL_0052;
	}

IL_0052:
	{
		String_t* L_19 = V_5;
		return L_19;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::MakeInitialUrl(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeInitialUrl_m5F37E0E7FB2F75F84E1D13EE6F35CC3252B458CE (String_t* ___targetUrl0, String_t* ___localUrl1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EC9B8634CD99C1B15ADA83AC13CCF4DCB899E1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_1 = NULL;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_2 = NULL;
	FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* V_3 = NULL;
	bool V_4 = false;
	String_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B7_0 = 0;
	int32_t G_B12_0 = 0;
	{
		String_t* L_0 = ___targetUrl0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		V_4 = L_1;
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		V_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_00e5;
	}

IL_0019:
	{
		V_0 = (bool)0;
		String_t* L_3 = ___localUrl1;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_4, L_3, NULL);
		V_1 = L_4;
		V_2 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL;
		String_t* L_5 = ___targetUrl0;
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, 0, NULL);
		V_6 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)47)))? 1 : 0);
		bool L_7 = V_6;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_8 = V_1;
		String_t* L_9 = ___targetUrl0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_10 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		Uri__ctor_mD7EC916948CBFE71F80298DDA6E4209724958B09(L_10, L_8, L_9, NULL);
		V_2 = L_10;
		V_0 = (bool)1;
	}

IL_0041:
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_11 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Uri_op_Equality_mB299FA02A76FD12A781BCBAD53D65B73C1768682(L_11, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0057;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var);
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_13 = ((WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var))->___domainRegex_0;
		String_t* L_14 = ___targetUrl0;
		bool L_15;
		L_15 = Regex_IsMatch_m7E96E666FBE7259D7638A3A6A21BE824D2406F49(L_13, L_14, NULL);
		G_B7_0 = ((int32_t)(L_15));
		goto IL_0058;
	}

IL_0057:
	{
		G_B7_0 = 0;
	}

IL_0058:
	{
		V_7 = (bool)G_B7_0;
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_0075;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_17 = V_1;
		String_t* L_18;
		L_18 = Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F(L_17, NULL);
		String_t* L_19 = ___targetUrl0;
		String_t* L_20;
		L_20 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_18, _stringLiteral6A1D52382547009AB732F651FE2CA42F1BBA769A, L_19, NULL);
		___targetUrl0 = L_20;
		V_0 = (bool)1;
	}

IL_0075:
	{
		V_3 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)NULL;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_21 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Uri_op_Equality_mB299FA02A76FD12A781BCBAD53D65B73C1768682(L_21, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		if (!L_22)
		{
			goto IL_0090;
		}
	}
	{
		String_t* L_23 = ___targetUrl0;
		Il2CppChar L_24;
		L_24 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, 0, NULL);
		G_B12_0 = ((((int32_t)((((int32_t)L_24) == ((int32_t)((int32_t)46)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0091;
	}

IL_0090:
	{
		G_B12_0 = 0;
	}

IL_0091:
	{
		V_8 = (bool)G_B12_0;
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_00ba;
		}
	}
	{
		String_t* L_26 = ___targetUrl0;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Uri_TryCreate_mBDD7F98C3BEBD9C3936DDF7960533CBB56478FDF(L_26, 1, (&V_2), NULL);
		V_9 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_9;
		if (!L_28)
		{
			goto IL_00b9;
		}
	}
	{
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_29 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_29, _stringLiteral6EC9B8634CD99C1B15ADA83AC13CCF4DCB899E1A, NULL);
		V_3 = L_29;
		V_2 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL;
	}

IL_00b9:
	{
	}

IL_00ba:
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_30 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Uri_op_Equality_mB299FA02A76FD12A781BCBAD53D65B73C1768682(L_30, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		V_10 = L_31;
		bool L_32 = V_10;
		if (!L_32)
		{
			goto IL_00d9;
		}
	}
	try
	{// begin try (depth: 1)
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_33 = V_1;
		String_t* L_34 = ___targetUrl0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_35 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		Uri__ctor_mD7EC916948CBFE71F80298DDA6E4209724958B09(L_35, L_33, L_34, NULL);
		V_2 = L_35;
		V_0 = (bool)1;
		goto IL_00d9;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{// begin catch(System.FormatException)
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_36 = V_3;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebRequestUtils_MakeInitialUrl_m5F37E0E7FB2F75F84E1D13EE6F35CC3252B458CE_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_00d9:
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_37 = V_2;
		String_t* L_38 = ___targetUrl0;
		bool L_39 = V_0;
		il2cpp_codegen_runtime_class_init_inline(WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var);
		String_t* L_40;
		L_40 = WebRequestUtils_MakeUriString_mE4CE2CECE45A50A41CEBA43B2F29BDBEF6984CC3(L_37, L_38, L_39, NULL);
		V_5 = L_40;
		goto IL_00e5;
	}

IL_00e5:
	{
		String_t* L_41 = V_5;
		return L_41;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::MakeUriString(System.Uri,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeUriString_mE4CE2CECE45A50A41CEBA43B2F29BDBEF6984CC3 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___targetUri0, String_t* ___targetUrl1, bool ___prependProtocol2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral225454A90D745E7A7A5DE5C12169566FBC05370D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB3DF58228CDA6AA5325549ADFCEDF52FC5CBF6A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	StringBuilder_t* V_2 = NULL;
	bool V_3 = false;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	String_t* V_7 = NULL;
	bool V_8 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B12_0 = 0;
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___targetUri0;
		String_t* L_1;
		L_1 = Uri_get_Scheme_m29106D5109538220B22FC49DE7B44040E51B0F6F(L_0, NULL);
		V_0 = L_1;
		bool L_2 = ___prependProtocol2;
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = ___targetUrl1;
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		String_t* L_5 = V_0;
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)il2cpp_codegen_add(L_6, 2)))))
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_7 = ___targetUrl1;
		String_t* L_8 = V_0;
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
		G_B4_0 = ((((int32_t)((((int32_t)L_10) == ((int32_t)((int32_t)47)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0033;
	}

IL_0032:
	{
		G_B4_0 = 0;
	}

IL_0033:
	{
		V_1 = (bool)G_B4_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_010d;
		}
	}
	{
		String_t* L_12 = V_0;
		String_t* L_13 = ___targetUrl1;
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		StringBuilder_t* L_15 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF36D7701399DDDC077C4B55CF2142E976D956619(L_15, L_12, L_14, NULL);
		V_2 = L_15;
		StringBuilder_t* L_16 = V_2;
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_16, ((int32_t)58), NULL);
		String_t* L_18 = V_0;
		bool L_19;
		L_19 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_18, _stringLiteralEB3DF58228CDA6AA5325549ADFCEDF52FC5CBF6A, NULL);
		V_3 = L_19;
		bool L_20 = V_3;
		if (!L_20)
		{
			goto IL_00e9;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_21 = ___targetUri0;
		String_t* L_22;
		L_22 = Uri_get_AbsolutePath_mABB93DD30D4C0F11948DE5C117650B1C3A9925CA(L_21, NULL);
		V_4 = L_22;
		String_t* L_23 = V_4;
		bool L_24;
		L_24 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_23, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		V_5 = L_24;
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_0087;
		}
	}
	{
		String_t* L_26 = V_4;
		il2cpp_codegen_runtime_class_init_inline(WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var);
		String_t* L_27;
		L_27 = WebRequestUtils_URLDecode_m8A6FB8F6609D6BFDFBA86A2EA5A687090B67E49A(L_26, NULL);
		V_4 = L_27;
	}

IL_0087:
	{
		String_t* L_28 = V_4;
		bool L_29;
		L_29 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_28, _stringLiteral225454A90D745E7A7A5DE5C12169566FBC05370D, NULL);
		if (!L_29)
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_30 = V_4;
		int32_t L_31;
		L_31 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_30, NULL);
		if ((((int32_t)L_31) <= ((int32_t)6)))
		{
			goto IL_00b0;
		}
	}
	{
		String_t* L_32 = V_4;
		Il2CppChar L_33;
		L_33 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_32, 6, NULL);
		G_B12_0 = ((((int32_t)((((int32_t)L_33) == ((int32_t)((int32_t)47)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00b1;
	}

IL_00b0:
	{
		G_B12_0 = 0;
	}

IL_00b1:
	{
		V_6 = (bool)G_B12_0;
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_00d6;
		}
	}
	{
		StringBuilder_t* L_35 = V_2;
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_35, _stringLiteral218F5A08519088A96BE3C1074984C53EA49F1CCA, NULL);
		StringBuilder_t* L_37 = V_2;
		String_t* L_38 = V_4;
		String_t* L_39;
		L_39 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_38, 5, NULL);
		StringBuilder_t* L_40;
		L_40 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, L_39, NULL);
		goto IL_00df;
	}

IL_00d6:
	{
		StringBuilder_t* L_41 = V_2;
		String_t* L_42 = V_4;
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_41, L_42, NULL);
	}

IL_00df:
	{
		StringBuilder_t* L_44 = V_2;
		String_t* L_45;
		L_45 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_44);
		V_7 = L_45;
		goto IL_0132;
	}

IL_00e9:
	{
		StringBuilder_t* L_46 = V_2;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_47 = ___targetUri0;
		String_t* L_48;
		L_48 = Uri_get_PathAndQuery_m33B64A4AAF08510C0199CF5A85918B91D1008E5C(L_47, NULL);
		StringBuilder_t* L_49;
		L_49 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_46, L_48, NULL);
		StringBuilder_t* L_50 = V_2;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_51 = ___targetUri0;
		String_t* L_52;
		L_52 = Uri_get_Fragment_m3CB7AD14DA9618ADE406039D4713F67D6951D835(L_51, NULL);
		StringBuilder_t* L_53;
		L_53 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_50, L_52, NULL);
		StringBuilder_t* L_54 = V_2;
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_54);
		V_7 = L_55;
		goto IL_0132;
	}

IL_010d:
	{
		String_t* L_56 = ___targetUrl1;
		bool L_57;
		L_57 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_56, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		V_8 = L_57;
		bool L_58 = V_8;
		if (!L_58)
		{
			goto IL_0128;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_59 = ___targetUri0;
		String_t* L_60;
		L_60 = Uri_get_OriginalString_m3031F9054CA10F2C55C0E2415CC19810D360A5D6(L_59, NULL);
		V_7 = L_60;
		goto IL_0132;
	}

IL_0128:
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_61 = ___targetUri0;
		String_t* L_62;
		L_62 = Uri_get_AbsoluteUri_m080934F4F2E2160EBEABDF00F8B6D59888EA63AE(L_61, NULL);
		V_7 = L_62;
		goto IL_0132;
	}

IL_0132:
	{
		String_t* L_63 = V_7;
		return L_63;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::URLDecode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRequestUtils_URLDecode_m8A6FB8F6609D6BFDFBA86A2EA5A687090B67E49A (String_t* ___encoded0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_1 = ___encoded0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = WWWTranscoder_URLDecode_mF1D641C3B75814073B4AE22202CC94A9116A15A4(L_3, NULL);
		V_1 = L_4;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
		L_5 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		String_t* L_7;
		L_7 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_5, L_6);
		V_2 = L_7;
		goto IL_0022;
	}

IL_0022:
	{
		String_t* L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngineInternal.WebRequestUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestUtils__cctor_m5E63FAE9D22D2625297F800D58B6268840431D52 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F);
		s_Il2CppMethodInitialized = true;
	}
	{
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_0 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD(L_0, _stringLiteral665437E312D2053C5919723E2E7EA49D0A2ADE1F, NULL);
		((WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var))->___domainRegex_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var))->___domainRegex_0), (void*)L_0);
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
// System.Text.Encoding UnityEngine.WWWForm::get_DefaultEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20 (const RuntimeMethod* method) 
{
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* V_0 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_ASCII_mCC17A741582B0AB778D261452FD515EBD7297562(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_mB1AA4D4BE7011A371B590332CC65794270F269F6 (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		__this->___containsFiles_5 = (bool)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		__this->___formData_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___formData_0), (void*)L_0);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___fieldNames_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fieldNames_1), (void*)L_1);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___fileNames_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileNames_2), (void*)L_2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___types_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___types_3), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40));
		__this->___boundary_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boundary_4), (void*)L_4);
		V_0 = 0;
		goto IL_0080;
	}

IL_004c:
	{
		int32_t L_5;
		L_5 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)48), ((int32_t)110), NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		V_2 = (bool)((((int32_t)L_6) > ((int32_t)((int32_t)57)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 7));
	}

IL_0064:
	{
		int32_t L_9 = V_1;
		V_3 = (bool)((((int32_t)L_9) > ((int32_t)((int32_t)90)))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 6));
	}

IL_0071:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___boundary_4;
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)(uint8_t)L_14));
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0080:
	{
		int32_t L_16 = V_0;
		V_4 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)40)))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_004c;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, String_t* ___fieldName0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___fieldName0;
		String_t* L_1 = ___value1;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		WWWForm_AddField_m5309EB3D9652AF0CFBEBFB42324E6AF0BCFB350E(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m5309EB3D9652AF0CFBEBFB42324E6AF0BCFB350E (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, String_t* ___fieldName0, String_t* ___value1, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___e2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral774D4BF54129BC524F2FC2ADFFD07EC2B34C8843);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___fieldNames_1;
		String_t* L_1 = ___fieldName0;
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_0, L_1, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___fileNames_2;
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, (String_t*)NULL, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_3 = __this->___formData_0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4 = ___e2;
		String_t* L_5 = ___value1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_3, L_6, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = __this->___types_3;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8 = ___e2;
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(10 /* System.String System.Text.Encoding::get_WebName() */, L_8);
		String_t* L_10;
		L_10 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral774D4BF54129BC524F2FC2ADFFD07EC2B34C8843, L_9, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_7, L_10, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddField_m94A5B3ACC392D98CB1993E0A36CC8201AE36D423 (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, String_t* ___fieldName0, int32_t ___i1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___fieldName0;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___i1), NULL);
		WWWForm_AddField_m6315BDFDEA6F0F57ABCBCF4B1AE482E1893BEB8D(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddBinaryData_m160D514270A31D5C13D9ABB1BDB886F22566EDAB (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, String_t* ___fieldName0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___contents1, String_t* ___fileName2, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___fieldName0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___contents1;
		String_t* L_2 = ___fileName2;
		WWWForm_AddBinaryData_m47F69B41BEF235B6C7D8643630251E134BFF167C(__this, L_0, L_1, L_2, (String_t*)NULL, NULL);
		return;
	}
}
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm_AddBinaryData_m47F69B41BEF235B6C7D8643630251E134BFF167C (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, String_t* ___fieldName0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___contents1, String_t* ___fileName2, String_t* ___mimeType3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral641255E7CDC790311725CCB47DB63D989117D244);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D6783AA5E64857D25AFFFBD74CE5D0AF2558309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B10_0 = 0;
	String_t* G_B13_0 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	{
		__this->___containsFiles_5 = (bool)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___contents1;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) <= ((int32_t)8)))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___contents1;
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)137)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___contents1;
		int32_t L_5 = 1;
		uint8_t L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)80)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___contents1;
		int32_t L_8 = 2;
		uint8_t L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)78)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___contents1;
		int32_t L_11 = 3;
		uint8_t L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)71)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___contents1;
		int32_t L_14 = 4;
		uint8_t L_15 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___contents1;
		int32_t L_17 = 5;
		uint8_t L_18 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___contents1;
		int32_t L_20 = 6;
		uint8_t L_21 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)26)))))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___contents1;
		int32_t L_23 = 7;
		uint8_t L_24 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		G_B10_0 = ((((int32_t)L_24) == ((int32_t)((int32_t)10)))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B10_0 = 0;
	}

IL_004c:
	{
		V_0 = (bool)G_B10_0;
		String_t* L_25 = ___fileName2;
		V_1 = (bool)((((RuntimeObject*)(String_t*)L_25) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_26 = V_1;
		if (!L_26)
		{
			goto IL_006e;
		}
	}
	{
		String_t* L_27 = ___fieldName0;
		bool L_28 = V_0;
		G_B12_0 = L_27;
		if (L_28)
		{
			G_B13_0 = L_27;
			goto IL_0061;
		}
	}
	{
		G_B14_0 = _stringLiteral7D6783AA5E64857D25AFFFBD74CE5D0AF2558309;
		G_B14_1 = G_B12_0;
		goto IL_0066;
	}

IL_0061:
	{
		G_B14_0 = _stringLiteralA15C898F015A9B0BC3268E8883CD03008A56DE26;
		G_B14_1 = G_B13_0;
	}

IL_0066:
	{
		String_t* L_29;
		L_29 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B14_1, G_B14_0, NULL);
		___fileName2 = L_29;
	}

IL_006e:
	{
		String_t* L_30 = ___mimeType3;
		V_2 = (bool)((((RuntimeObject*)(String_t*)L_30) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_31 = V_2;
		if (!L_31)
		{
			goto IL_008e;
		}
	}
	{
		bool L_32 = V_0;
		V_3 = L_32;
		bool L_33 = V_3;
		if (!L_33)
		{
			goto IL_0086;
		}
	}
	{
		___mimeType3 = _stringLiteral75E05143EB132AAA8A22B48813DB8E6047380821;
		goto IL_008d;
	}

IL_0086:
	{
		___mimeType3 = _stringLiteral641255E7CDC790311725CCB47DB63D989117D244;
	}

IL_008d:
	{
	}

IL_008e:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_34 = __this->___fieldNames_1;
		String_t* L_35 = ___fieldName0;
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_34, L_35, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_36 = __this->___fileNames_2;
		String_t* L_37 = ___fileName2;
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_36, L_37, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_38 = __this->___formData_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___contents1;
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_38, L_39, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_40 = __this->___types_3;
		String_t* L_41 = ___mimeType3;
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_40, L_41, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* WWWForm_get_headers_mF6508B8C984B76EF984495FF01BA7185CFD0C63E (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56B70A227BDF525F3B35BE8F7F19C2510184DC02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	bool V_1 = false;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_2 = NULL;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = __this->___containsFiles_5;
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = V_0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___boundary_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___boundary_4;
		String_t* L_7;
		L_7 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)));
		String_t* L_8;
		L_8 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral56B70A227BDF525F3B35BE8F7F19C2510184DC02, L_7, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_3, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, L_8, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		goto IL_0058;
	}

IL_0047:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9 = V_0;
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_9, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_0058:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = V_0;
		V_2 = L_10;
		goto IL_005c;
	}

IL_005c:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_11 = V_2;
		return L_11;
	}
}
// System.Byte[] UnityEngine.WWWForm::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWForm_get_data_mE064CFB866D49D1E49FA9E0811CE71D039BB0145 (WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B0CEF65E50AE46EF4878CC1DD83FF8B5ED020EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDFDBC13EE222005FD5A3ED5AE4DD309848E3C50);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	String_t* V_10 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	int32_t V_14 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_15 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_16 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_17 = NULL;
	bool V_18 = false;
	bool V_19 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_20 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B12_0 = 0;
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_0, ((int32_t)1024), NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_03d1:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = V_0;
					if (!L_1)
					{
						goto IL_03db;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_03db:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				bool L_3 = __this->___containsFiles_5;
				V_1 = L_3;
				bool L_4 = V_1;
				if (!L_4)
				{
					goto IL_0318_1;
				}
			}
			{
				V_2 = 0;
				goto IL_0295_1;
			}

IL_0022_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = V_0;
				il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf_7;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf_7;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, ((int32_t)(((RuntimeArray*)L_7)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_8 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash_6;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash_6;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, ((int32_t)(((RuntimeArray*)L_10)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___boundary_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___boundary_4;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, 0, ((int32_t)(((RuntimeArray*)L_13)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_14 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf_7;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf_7;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, ((int32_t)(((RuntimeArray*)L_16)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_17 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___contentTypeHeader_8;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___contentTypeHeader_8;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_17, L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)));
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_20;
				L_20 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = __this->___types_3;
				int32_t L_22 = V_2;
				String_t* L_23;
				L_23 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_21, L_22, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
				L_24 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_20, L_23);
				V_3 = L_24;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_25 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_3;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_25, L_26, 0, ((int32_t)(((RuntimeArray*)L_27)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_28 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf_7;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf_7;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_28, L_29, 0, ((int32_t)(((RuntimeArray*)L_30)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_31 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dispositionHeader_9;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dispositionHeader_9;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_31, L_32, 0, ((int32_t)(((RuntimeArray*)L_33)->max_length)));
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_34;
				L_34 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
				String_t* L_35;
				L_35 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Text.Encoding::get_HeaderName() */, L_34);
				V_4 = L_35;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_36 = __this->___fieldNames_1;
				int32_t L_37 = V_2;
				String_t* L_38;
				L_38 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_36, L_37, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
				V_5 = L_38;
				String_t* L_39 = V_5;
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_40;
				L_40 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				bool L_41;
				L_41 = WWWTranscoder_SevenBitClean_m492DA4C48F90C32ACAC216152F34A527759A0818(L_39, L_40, NULL);
				if (!L_41)
				{
					goto IL_010d_1;
				}
			}
			{
				String_t* L_42 = V_5;
				int32_t L_43;
				L_43 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_42, _stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86, NULL);
				G_B6_0 = ((((int32_t)L_43) > ((int32_t)(-1)))? 1 : 0);
				goto IL_010e_1;
			}

IL_010d_1:
			{
				G_B6_0 = 1;
			}

IL_010e_1:
			{
				V_8 = (bool)G_B6_0;
				bool L_44 = V_8;
				if (!L_44)
				{
					goto IL_014f_1;
				}
			}
			{
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_45;
				ArrayElementTypeCheck (L_46, _stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86);
				(L_46)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = L_46;
				String_t* L_48 = V_4;
				ArrayElementTypeCheck (L_47, L_48);
				(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_48);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = L_47;
				ArrayElementTypeCheck (L_49, _stringLiteral4B0CEF65E50AE46EF4878CC1DD83FF8B5ED020EA);
				(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4B0CEF65E50AE46EF4878CC1DD83FF8B5ED020EA);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_49;
				String_t* L_51 = V_5;
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_52;
				L_52 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				String_t* L_53;
				L_53 = WWWTranscoder_QPEncode_m5C30E12C7156DB3685C020C6E1CBF750D8313083(L_51, L_52, NULL);
				ArrayElementTypeCheck (L_50, L_53);
				(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_53);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = L_50;
				ArrayElementTypeCheck (L_54, _stringLiteralCDFDBC13EE222005FD5A3ED5AE4DD309848E3C50);
				(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCDFDBC13EE222005FD5A3ED5AE4DD309848E3C50);
				String_t* L_55;
				L_55 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_54, NULL);
				V_5 = L_55;
			}

IL_014f_1:
			{
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_56;
				L_56 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
				String_t* L_57 = V_5;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58;
				L_58 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_56, L_57);
				V_6 = L_58;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_59 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_6;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_6;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_59, L_60, 0, ((int32_t)(((RuntimeArray*)L_61)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_62 = V_0;
				il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___endQuote_10;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___endQuote_10;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_62, L_63, 0, ((int32_t)(((RuntimeArray*)L_64)->max_length)));
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_65 = __this->___fileNames_2;
				int32_t L_66 = V_2;
				String_t* L_67;
				L_67 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_65, L_66, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
				V_9 = (bool)((!(((RuntimeObject*)(String_t*)L_67) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_68 = V_9;
				if (!L_68)
				{
					goto IL_024c_1;
				}
			}
			{
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_69 = __this->___fileNames_2;
				int32_t L_70 = V_2;
				String_t* L_71;
				L_71 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_69, L_70, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
				V_10 = L_71;
				String_t* L_72 = V_10;
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_73;
				L_73 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				bool L_74;
				L_74 = WWWTranscoder_SevenBitClean_m492DA4C48F90C32ACAC216152F34A527759A0818(L_72, L_73, NULL);
				if (!L_74)
				{
					goto IL_01c5_1;
				}
			}
			{
				String_t* L_75 = V_10;
				int32_t L_76;
				L_76 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_75, _stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86, NULL);
				G_B12_0 = ((((int32_t)L_76) > ((int32_t)(-1)))? 1 : 0);
				goto IL_01c6_1;
			}

IL_01c5_1:
			{
				G_B12_0 = 1;
			}

IL_01c6_1:
			{
				V_12 = (bool)G_B12_0;
				bool L_77 = V_12;
				if (!L_77)
				{
					goto IL_0207_1;
				}
			}
			{
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_78 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79 = L_78;
				ArrayElementTypeCheck (L_79, _stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86);
				(L_79)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral333AFA041DE8E9D54728A1EA405FBCB141FC3A86);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = L_79;
				String_t* L_81 = V_4;
				ArrayElementTypeCheck (L_80, L_81);
				(L_80)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_81);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_82 = L_80;
				ArrayElementTypeCheck (L_82, _stringLiteral4B0CEF65E50AE46EF4878CC1DD83FF8B5ED020EA);
				(L_82)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4B0CEF65E50AE46EF4878CC1DD83FF8B5ED020EA);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_83 = L_82;
				String_t* L_84 = V_10;
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_85;
				L_85 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				String_t* L_86;
				L_86 = WWWTranscoder_QPEncode_m5C30E12C7156DB3685C020C6E1CBF750D8313083(L_84, L_85, NULL);
				ArrayElementTypeCheck (L_83, L_86);
				(L_83)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_86);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_87 = L_83;
				ArrayElementTypeCheck (L_87, _stringLiteralCDFDBC13EE222005FD5A3ED5AE4DD309848E3C50);
				(L_87)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCDFDBC13EE222005FD5A3ED5AE4DD309848E3C50);
				String_t* L_88;
				L_88 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_87, NULL);
				V_10 = L_88;
			}

IL_0207_1:
			{
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_89;
				L_89 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
				String_t* L_90 = V_10;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91;
				L_91 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_89, L_90);
				V_11 = L_91;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_92 = V_0;
				il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___fileNameField_11;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___fileNameField_11;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_92, L_93, 0, ((int32_t)(((RuntimeArray*)L_94)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_95 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = V_11;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = V_11;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_95, L_96, 0, ((int32_t)(((RuntimeArray*)L_97)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_98 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___endQuote_10;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___endQuote_10;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_98, L_99, 0, ((int32_t)(((RuntimeArray*)L_100)->max_length)));
			}

IL_024c_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_101 = V_0;
				il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf_7;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf_7;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_101, L_102, 0, ((int32_t)(((RuntimeArray*)L_103)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_104 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_105 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf_7;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf_7;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_104, L_105, 0, ((int32_t)(((RuntimeArray*)L_106)->max_length)));
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_107 = __this->___formData_0;
				int32_t L_108 = V_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109;
				L_109 = List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6(L_107, L_108, List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6_RuntimeMethod_var);
				V_7 = L_109;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_110 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111 = V_7;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = V_7;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_110, L_111, 0, ((int32_t)(((RuntimeArray*)L_112)->max_length)));
				int32_t L_113 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_113, 1));
			}

IL_0295_1:
			{
				int32_t L_114 = V_2;
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_115 = __this->___formData_0;
				int32_t L_116;
				L_116 = List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline(L_115, List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
				V_13 = (bool)((((int32_t)L_114) < ((int32_t)L_116))? 1 : 0);
				bool L_117 = V_13;
				if (L_117)
				{
					goto IL_0022_1;
				}
			}
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_118 = V_0;
				il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_119 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf_7;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_120 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf_7;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_118, L_119, 0, ((int32_t)(((RuntimeArray*)L_120)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_121 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_122 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash_6;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_123 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash_6;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_121, L_122, 0, ((int32_t)(((RuntimeArray*)L_123)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_124 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_125 = __this->___boundary_4;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_126 = __this->___boundary_4;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_124, L_125, 0, ((int32_t)(((RuntimeArray*)L_126)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_127 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_128 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash_6;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_129 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash_6;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_127, L_128, 0, ((int32_t)(((RuntimeArray*)L_129)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_130 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_131 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf_7;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_132 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf_7;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_130, L_131, 0, ((int32_t)(((RuntimeArray*)L_132)->max_length)));
				goto IL_03c7_1;
			}

IL_0318_1:
			{
				V_14 = 0;
				goto IL_03ae_1;
			}

IL_0321_1:
			{
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_133;
				L_133 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_134 = __this->___fieldNames_1;
				int32_t L_135 = V_14;
				String_t* L_136;
				L_136 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_134, L_135, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_137;
				L_137 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_133, L_136);
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_138;
				L_138 = WWWTranscoder_DataEncode_m18E91BACFE595DF19FEBFA644C27015FD9569AC7(L_137, NULL);
				V_15 = L_138;
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_139 = __this->___formData_0;
				int32_t L_140 = V_14;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_141;
				L_141 = List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6(L_139, L_140, List_1_get_Item_m2C6A207D8824FE873045A66C942593AE67D90CA6_RuntimeMethod_var);
				V_16 = L_141;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_142 = V_16;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_143;
				L_143 = WWWTranscoder_DataEncode_m18E91BACFE595DF19FEBFA644C27015FD9569AC7(L_142, NULL);
				V_17 = L_143;
				int32_t L_144 = V_14;
				V_18 = (bool)((((int32_t)L_144) > ((int32_t)0))? 1 : 0);
				bool L_145 = V_18;
				if (!L_145)
				{
					goto IL_0377_1;
				}
			}
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_146 = V_0;
				il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_147 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___ampersand_12;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_148 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___ampersand_12;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_146, L_147, 0, ((int32_t)(((RuntimeArray*)L_148)->max_length)));
			}

IL_0377_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_149 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_150 = V_15;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_151 = V_15;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_149, L_150, 0, ((int32_t)(((RuntimeArray*)L_151)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_152 = V_0;
				il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_153 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___equal_13;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_154 = ((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___equal_13;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_152, L_153, 0, ((int32_t)(((RuntimeArray*)L_154)->max_length)));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_155 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_156 = V_17;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_157 = V_17;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_155, L_156, 0, ((int32_t)(((RuntimeArray*)L_157)->max_length)));
				int32_t L_158 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_158, 1));
			}

IL_03ae_1:
			{
				int32_t L_159 = V_14;
				List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_160 = __this->___formData_0;
				int32_t L_161;
				L_161 = List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_inline(L_160, List_1_get_Count_m88FEB2D94E35C258B61F53400F7CA20E99A7DAD3_RuntimeMethod_var);
				V_19 = (bool)((((int32_t)L_159) < ((int32_t)L_161))? 1 : 0);
				bool L_162 = V_19;
				if (L_162)
				{
					goto IL_0321_1;
				}
			}
			{
			}

IL_03c7_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_163 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_164;
				L_164 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(41 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_163);
				V_20 = L_164;
				goto IL_03dc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_03dc:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_165 = V_20;
		return L_165;
	}
}
// System.Void UnityEngine.WWWForm::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__cctor_m8DE76A2EE24D29570E1E2DBB776C86DF1873415C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3EDB257239BA23A2B3196FB9697A402B943583D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dDash_6), (void*)L_1);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___crlf_7), (void*)L_3);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, _stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___contentTypeHeader_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___contentTypeHeader_8), (void*)L_5);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, _stringLiteralA3EDB257239BA23A2B3196FB9697A402B943583D);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dispositionHeader_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___dispositionHeader_9), (void*)L_7);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
		L_8 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___endQuote_10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___endQuote_10), (void*)L_9);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_10, _stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___fileNameField_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___fileNameField_11), (void*)L_11);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_12;
		L_12 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___ampersand_12 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___ampersand_12), (void*)L_13);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_14;
		L_14 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_14, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___equal_13 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_StaticFields*)il2cpp_codegen_static_fields_for(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var))->___equal_13), (void*)L_15);
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
// System.Byte UnityEngine.WWWTranscoder::Hex2Byte(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WWWTranscoder_Hex2Byte_m2613586F9B456371D972483BB2E1FF55951FE36A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b0, int32_t ___offset1, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	uint8_t V_7 = 0x0;
	bool V_8 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B14_0 = 0;
	{
		V_0 = (uint8_t)0;
		int32_t L_0 = ___offset1;
		V_1 = L_0;
		goto IL_0082;
	}

IL_0007:
	{
		uint8_t L_1 = V_0;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, ((int32_t)16))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___b0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)48))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_7 = V_2;
		G_B4_0 = ((((int32_t)((((int32_t)L_7) > ((int32_t)((int32_t)57)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 0;
	}

IL_0022:
	{
		V_3 = (bool)G_B4_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_9, ((int32_t)48)));
		goto IL_0065;
	}

IL_002d:
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)65))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_11 = V_2;
		G_B9_0 = ((((int32_t)((((int32_t)L_11) > ((int32_t)((int32_t)75)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003d;
	}

IL_003c:
	{
		G_B9_0 = 0;
	}

IL_003d:
	{
		V_4 = (bool)G_B9_0;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)55)));
		goto IL_0065;
	}

IL_004a:
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)97))))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_15 = V_2;
		G_B14_0 = ((((int32_t)((((int32_t)L_15) > ((int32_t)((int32_t)102)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_005a;
	}

IL_0059:
	{
		G_B14_0 = 0;
	}

IL_005a:
	{
		V_5 = (bool)G_B14_0;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_17, ((int32_t)87)));
	}

IL_0065:
	{
		int32_t L_18 = V_2;
		V_6 = (bool)((((int32_t)L_18) > ((int32_t)((int32_t)15)))? 1 : 0);
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		V_7 = (uint8_t)((int32_t)63);
		goto IL_0096;
	}

IL_0077:
	{
		uint8_t L_20 = V_0;
		int32_t L_21 = V_2;
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, ((int32_t)(uint8_t)L_21))));
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0082:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = ___offset1;
		V_8 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)il2cpp_codegen_add(L_24, 2))))? 1 : 0);
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_0007;
		}
	}
	{
		uint8_t L_26 = V_0;
		V_7 = L_26;
		goto IL_0096;
	}

IL_0096:
	{
		uint8_t L_27 = V_7;
		return L_27;
	}
}
// System.Void UnityEngine.WWWTranscoder::Byte2Hex(System.Byte,System.Byte[],System.Byte&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWTranscoder_Byte2Hex_m5508592B832098DA3772FC30AB94DC223DFF87E5 (uint8_t ___b0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hexChars1, uint8_t* ___byte02, uint8_t* ___byte13, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___byte02;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___hexChars1;
		uint8_t L_2 = ___b0;
		int32_t L_3 = ((int32_t)((int32_t)L_2>>4));
		uint8_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		*((int8_t*)L_0) = (int8_t)L_4;
		uint8_t* L_5 = ___byte13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___hexChars1;
		uint8_t L_7 = ___b0;
		int32_t L_8 = ((int32_t)((int32_t)L_7&((int32_t)15)));
		uint8_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		*((int8_t*)L_5) = (int8_t)L_9;
		return;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::DataEncode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_DataEncode_m18E91BACFE595DF19FEBFA644C27015FD9569AC7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___toEncode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___toEncode0;
		il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlEscapeChar_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___dataSpace_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlForbidden_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = WWWTranscoder_Encode_m4A986740A7F5D511F68C9A1DA3AD577AD583D56A(L_0, L_1, L_2, L_3, (bool)0, NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		return L_5;
	}
}
// System.String UnityEngine.WWWTranscoder::QPEncode(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWWTranscoder_QPEncode_m5C30E12C7156DB3685C020C6E1CBF750D8313083 (String_t* ___toEncode0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = ___e1;
		String_t* L_1 = ___toEncode0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		uint8_t L_3 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpEscapeChar_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpSpace_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpForbidden_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = WWWTranscoder_Encode_m4A986740A7F5D511F68C9A1DA3AD577AD583D56A(L_2, L_3, L_4, L_5, (bool)1, NULL);
		V_0 = L_6;
		il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7;
		L_7 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		String_t* L_10;
		L_10 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, ((int32_t)(((RuntimeArray*)L_9)->max_length)));
		V_1 = L_10;
		goto IL_0030;
	}

IL_0030:
	{
		String_t* L_11 = V_1;
		return L_11;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_Encode_m4A986740A7F5D511F68C9A1DA3AD577AD583D56A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___space2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___forbidden3, bool ___uppercase4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	bool V_6 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t G_B8_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B10_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_1, ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_0)->max_length)), 2)), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b3:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					if (!L_2)
					{
						goto IL_00bd;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_00bd:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				V_1 = 0;
				goto IL_009a_1;
			}

IL_0014_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input0;
				int32_t L_5 = V_1;
				int32_t L_6 = L_5;
				uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
				V_2 = (bool)((((int32_t)L_7) == ((int32_t)((int32_t)32)))? 1 : 0);
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_0030_1;
				}
			}
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_9 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___space2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___space2;
				VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_9, L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)));
				goto IL_0095_1;
			}

IL_0030_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___input0;
				int32_t L_13 = V_1;
				int32_t L_14 = L_13;
				uint8_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
				if ((((int32_t)L_15) < ((int32_t)((int32_t)32))))
				{
					goto IL_0049_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___input0;
				int32_t L_17 = V_1;
				int32_t L_18 = L_17;
				uint8_t L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
				if ((((int32_t)L_19) > ((int32_t)((int32_t)126))))
				{
					goto IL_0049_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___forbidden3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___input0;
				int32_t L_22 = V_1;
				int32_t L_23 = L_22;
				uint8_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				bool L_25;
				L_25 = WWWTranscoder_ByteArrayContains_m24942004A51B679886583E185D64786773901A4A(L_20, L_24, NULL);
				G_B8_0 = ((int32_t)(L_25));
				goto IL_004a_1;
			}

IL_0049_1:
			{
				G_B8_0 = 1;
			}

IL_004a_1:
			{
				V_3 = (bool)G_B8_0;
				bool L_26 = V_3;
				if (!L_26)
				{
					goto IL_0089_1;
				}
			}
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_27 = V_0;
				uint8_t L_28 = ___escapeChar1;
				VirtualActionInvoker1< uint8_t >::Invoke(37 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_27, L_28);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___input0;
				int32_t L_30 = V_1;
				int32_t L_31 = L_30;
				uint8_t L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
				bool L_33 = ___uppercase4;
				G_B10_0 = ((int32_t)(L_32));
				if (L_33)
				{
					G_B11_0 = ((int32_t)(L_32));
					goto IL_0065_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___lcHexChars_1;
				G_B12_0 = L_34;
				G_B12_1 = G_B10_0;
				goto IL_006a_1;
			}

IL_0065_1:
			{
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___ucHexChars_0;
				G_B12_0 = L_35;
				G_B12_1 = G_B11_0;
			}

IL_006a_1:
			{
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				WWWTranscoder_Byte2Hex_m5508592B832098DA3772FC30AB94DC223DFF87E5((uint8_t)G_B12_1, G_B12_0, (&V_4), (&V_5), NULL);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_36 = V_0;
				uint8_t L_37 = V_4;
				VirtualActionInvoker1< uint8_t >::Invoke(37 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_36, L_37);
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_38 = V_0;
				uint8_t L_39 = V_5;
				VirtualActionInvoker1< uint8_t >::Invoke(37 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_38, L_39);
				goto IL_0095_1;
			}

IL_0089_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_40 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___input0;
				int32_t L_42 = V_1;
				int32_t L_43 = L_42;
				uint8_t L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
				VirtualActionInvoker1< uint8_t >::Invoke(37 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_40, L_44);
			}

IL_0095_1:
			{
				int32_t L_45 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_45, 1));
			}

IL_009a_1:
			{
				int32_t L_46 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ___input0;
				V_6 = (bool)((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length))))? 1 : 0);
				bool L_48 = V_6;
				if (L_48)
				{
					goto IL_0014_1;
				}
			}
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_49 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
				L_50 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(41 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_49);
				V_7 = L_50;
				goto IL_00be;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00be:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_7;
		return L_51;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::ByteArrayContains(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteArrayContains_m24942004A51B679886583E185D64786773901A4A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, uint8_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		V_1 = 0;
		goto IL_001d;
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		uint8_t L_5 = ___b1;
		V_2 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0018;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_002b;
	}

IL_0018:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001d:
	{
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		V_4 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_4;
		if (L_10)
		{
			goto IL_0009;
		}
	}
	{
		V_3 = (bool)0;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_11 = V_3;
		return L_11;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::URLDecode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_URLDecode_mF1D641C3B75814073B4AE22202CC94A9116A15A4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___toEncode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___toEncode0;
		il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlEscapeChar_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlSpace_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = WWWTranscoder_Decode_mE374CCDECF9DC94BDEF4E4864A1A866EA6E0517E(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0014;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::ByteSubArrayEquals(System.Byte[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteSubArrayEquals_mDF73859DE753AC7A72BFB1EA7A680B0A044E3539 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___index1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___comperand2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		int32_t L_1 = ___index1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___comperand2;
		V_0 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), L_1))) < ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0013;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0040;
	}

IL_0013:
	{
		V_2 = 0;
		goto IL_0030;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___array0;
		int32_t L_5 = ___index1;
		int32_t L_6 = V_2;
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		uint8_t L_8 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___comperand2;
		int32_t L_10 = V_2;
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		V_3 = (bool)((((int32_t)((((int32_t)L_8) == ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_002c;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0040;
	}

IL_002c:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0030:
	{
		int32_t L_15 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___comperand2;
		V_4 = (bool)((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_0017;
		}
	}
	{
		V_1 = (bool)1;
		goto IL_0040;
	}

IL_0040:
	{
		bool L_18 = V_1;
		return L_18;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Decode(System.Byte[],System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWWTranscoder_Decode_mE374CCDECF9DC94BDEF4E4864A1A866EA6E0517E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___space2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t G_B7_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___input0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m9E93692A2BB0E34119603FF6A5D44F6A132052E8(L_1, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0087:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0091;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0091:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				V_1 = 0;
				goto IL_0071_1;
			}

IL_000f_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___input0;
				int32_t L_5 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___space2;
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				bool L_7;
				L_7 = WWWTranscoder_ByteSubArrayEquals_mDF73859DE753AC7A72BFB1EA7A680B0A044E3539(L_4, L_5, L_6, NULL);
				V_2 = L_7;
				bool L_8 = V_2;
				if (!L_8)
				{
					goto IL_0031_1;
				}
			}
			{
				int32_t L_9 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___space2;
				V_1 = ((int32_t)il2cpp_codegen_add(L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_10)->max_length)), 1))));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_11 = V_0;
				VirtualActionInvoker1< uint8_t >::Invoke(37 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_11, (uint8_t)((int32_t)32));
				goto IL_006c_1;
			}

IL_0031_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___input0;
				int32_t L_13 = V_1;
				int32_t L_14 = L_13;
				uint8_t L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
				uint8_t L_16 = ___escapeChar1;
				if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
				{
					goto IL_0041_1;
				}
			}
			{
				int32_t L_17 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___input0;
				G_B7_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_17, 2))) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))? 1 : 0);
				goto IL_0042_1;
			}

IL_0041_1:
			{
				G_B7_0 = 0;
			}

IL_0042_1:
			{
				V_3 = (bool)G_B7_0;
				bool L_19 = V_3;
				if (!L_19)
				{
					goto IL_0060_1;
				}
			}
			{
				int32_t L_20 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_21 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___input0;
				int32_t L_23 = V_1;
				int32_t L_24 = L_23;
				V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
				il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
				uint8_t L_25;
				L_25 = WWWTranscoder_Hex2Byte_m2613586F9B456371D972483BB2E1FF55951FE36A(L_22, L_24, NULL);
				VirtualActionInvoker1< uint8_t >::Invoke(37 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_21, L_25);
				goto IL_006c_1;
			}

IL_0060_1:
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_26 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___input0;
				int32_t L_28 = V_1;
				int32_t L_29 = L_28;
				uint8_t L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
				VirtualActionInvoker1< uint8_t >::Invoke(37 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_26, L_30);
			}

IL_006c_1:
			{
				int32_t L_31 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
			}

IL_0071_1:
			{
				int32_t L_32 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___input0;
				V_4 = (bool)((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))? 1 : 0);
				bool L_34 = V_4;
				if (L_34)
				{
					goto IL_000f_1;
				}
			}
			{
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_35 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36;
				L_36 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(41 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_35);
				V_5 = L_36;
				goto IL_0092;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0092:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_5;
		return L_37;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_SevenBitClean_m492DA4C48F90C32ACAC216152F34A527759A0818 (String_t* ___s0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar* V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	{
		String_t* L_0 = ___s0;
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_1, 2));
		int32_t L_2 = V_0;
		int8_t* L_3 = (int8_t*) alloca(((uintptr_t)L_2));
		memset(L_3, 0, ((uintptr_t)L_2));
		V_1 = (uint8_t*)(L_3);
		String_t* L_4 = ___s0;
		V_4 = L_4;
		String_t* L_5 = V_4;
		V_3 = (Il2CppChar*)((uintptr_t)L_5);
		Il2CppChar* L_6 = V_3;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		Il2CppChar* L_7 = V_3;
		int32_t L_8;
		L_8 = RuntimeHelpers_get_OffsetToStringData_mBBE58AEA702864FB006771F4600D1D99B1234460(NULL);
		V_3 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_7, L_8));
	}

IL_0022:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_9 = ___e1;
		Il2CppChar* L_10 = V_3;
		String_t* L_11 = ___s0;
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		uint8_t* L_13 = V_1;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = VirtualFuncInvoker4< int32_t, Il2CppChar*, int32_t, uint8_t*, int32_t >::Invoke(22 /* System.Int32 System.Text.Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32) */, L_9, L_10, L_12, L_13, L_14);
		V_2 = L_15;
		V_4 = (String_t*)NULL;
		uint8_t* L_16 = V_1;
		int32_t L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = WWWTranscoder_SevenBitClean_m0790A7209E5E6423D0A88029B072E1E82579B59B(L_16, L_17, NULL);
		V_5 = L_18;
		goto IL_0042;
	}

IL_0042:
	{
		bool L_19 = V_5;
		return L_19;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::SevenBitClean(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WWWTranscoder_SevenBitClean_m0790A7209E5E6423D0A88029B072E1E82579B59B (uint8_t* ___input0, int32_t ___inputLength1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	{
		V_0 = 0;
		goto IL_0026;
	}

IL_0005:
	{
		uint8_t* L_0 = ___input0;
		int32_t L_1 = V_0;
		int32_t L_2 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1)));
		if ((((int32_t)L_2) < ((int32_t)((int32_t)32))))
		{
			goto IL_0018;
		}
	}
	{
		uint8_t* L_3 = ___input0;
		int32_t L_4 = V_0;
		int32_t L_5 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4)));
		G_B4_0 = ((((int32_t)L_5) > ((int32_t)((int32_t)126)))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B4_0 = 1;
	}

IL_0019:
	{
		V_1 = (bool)G_B4_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0021;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0032;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0026:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___inputLength1;
		V_3 = (bool)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		bool L_10 = V_3;
		if (L_10)
		{
			goto IL_0005;
		}
	}
	{
		V_2 = (bool)1;
		goto IL_0032;
	}

IL_0032:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Void UnityEngine.WWWTranscoder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWTranscoder__cctor_m45847E379D7CDADE3F6E645E6C5E01D5D560302F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0202811166757AF262261201E48B89F6244FAE6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteral59F5BD34B6C013DEACC784F69C67E95150033A84);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___ucHexChars_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___ucHexChars_0), (void*)L_1);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2;
		L_2 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, _stringLiteralC02C28AFEBE998F767E4AF43E3BE8F5E9FA11536);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___lcHexChars_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___lcHexChars_1), (void*)L_3);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlEscapeChar_2 = (uint8_t)((int32_t)37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)43));
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlSpace_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlSpace_3), (void*)L_5);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, _stringLiteral122DAEB6E112576FD0519243E425F6CD2E97BA90);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___dataSpace_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___dataSpace_4), (void*)L_7);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_8;
		L_8 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, _stringLiteral0202811166757AF262261201E48B89F6244FAE6C);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlForbidden_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___urlForbidden_5), (void*)L_9);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpEscapeChar_6 = (uint8_t)((int32_t)61);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = L_10;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)95));
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpSpace_7 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpSpace_7), (void*)L_11);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_12;
		L_12 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, _stringLiteral0E6EADFEA6F730D8816C511892F550656FD69B05);
		((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpForbidden_8 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t551AAF7200BB7381823C52321E9A60A9EE63641B_il2cpp_TypeInfo_var))->___qpForbidden_8), (void*)L_13);
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
// System.Void UnityEngine.Networking.MultipartFormFileSection::Init(System.String,System.Byte[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipartFormFileSection_Init_m83608819F90DAD79B8B666409AF1D440908B1FFE (MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB* __this, String_t* ___name0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, String_t* ___fileName2, String_t* ___contentType3, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___name0;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data1;
		__this->___data_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_1), (void*)L_1);
		String_t* L_2 = ___fileName2;
		__this->___file_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___file_2), (void*)L_2);
		String_t* L_3 = ___contentType3;
		__this->___content_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___content_3), (void*)L_3);
		return;
	}
}
// System.Void UnityEngine.Networking.MultipartFormFileSection::.ctor(System.String,System.Byte[],System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultipartFormFileSection__ctor_m5F1D762C8E510D725DB8451A9083748A3B7798DA (MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB* __this, String_t* ___name0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, String_t* ___fileName2, String_t* ___contentType3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral641255E7CDC790311725CCB47DB63D989117D244);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2FDD8C12F3B1B50760A1205078973FB63C7CF62);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data1;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data1;
		G_B3_0 = ((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) < ((int32_t)1))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8736C4CF815A67FB8DABFB271FFB66F3B496E35A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MultipartFormFileSection__ctor_m5F1D762C8E510D725DB8451A9083748A3B7798DA_RuntimeMethod_var)));
	}

IL_0024:
	{
		String_t* L_4 = ___fileName2;
		bool L_5;
		L_5 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_4, NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		___fileName2 = _stringLiteralC2FDD8C12F3B1B50760A1205078973FB63C7CF62;
	}

IL_0037:
	{
		String_t* L_7 = ___contentType3;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_7, NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		___contentType3 = _stringLiteral641255E7CDC790311725CCB47DB63D989117D244;
	}

IL_004b:
	{
		String_t* L_10 = ___name0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___data1;
		String_t* L_12 = ___fileName2;
		String_t* L_13 = ___contentType3;
		MultipartFormFileSection_Init_m83608819F90DAD79B8B666409AF1D440908B1FFE(__this, L_10, L_11, L_12, L_13, NULL);
		return;
	}
}
// System.String UnityEngine.Networking.MultipartFormFileSection::get_sectionName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MultipartFormFileSection_get_sectionName_mA1C7BC81F3466CFCC0302D4343AE2F2E9F0976FA (MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___name_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] UnityEngine.Networking.MultipartFormFileSection::get_sectionData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* MultipartFormFileSection_get_sectionData_m00EB23D519819586A4F9207A2180EDB1C06FD4E7 (MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___data_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.MultipartFormFileSection::get_fileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MultipartFormFileSection_get_fileName_mE60E1D878BA08E7EFA5BEB79F990F1A1E5C26005 (MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___file_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.MultipartFormFileSection::get_contentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MultipartFormFileSection_get_contentType_mD9600E35D690A812B6E5546BF5CBF5EE0E941E93 (MultipartFormFileSection_t87881191832E7F9AC25612810A3BE55555D398DB* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___content_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
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


// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke(const UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C& unmarshaled, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke_back(const UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke& marshaled, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C& unmarshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_pinvoke_cleanup(UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_com(const UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C& unmarshaled, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com& marshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_com_back(const UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com& marshaled, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C& unmarshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
IL2CPP_EXTERN_C void UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshal_com_cleanup(UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::set_webRequest(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation_set_webRequest_mB4B19873C06FD29078CB1E8BF05B0D077F0FF711 (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___value0, const RuntimeMethod* method) 
{
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___value0;
		__this->___U3CwebRequestU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation__ctor_m9AD26A39141A733EC40446F6AB7660B44D8EA1ED (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* __this, const RuntimeMethod* method) 
{
	{
		AsyncOperation__ctor_m53CF89405A1E2DA6F517D05792826F5784B0D6EC(__this, NULL);
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






// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_back(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke& marshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_pinvoke_cleanup(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke& marshaled)
{
}






// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_com(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com& marshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_com_back(const UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com& marshaled, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F& unmarshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequest
IL2CPP_EXTERN_C void UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshal_com_cleanup(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com& marshaled)
{
}
// System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetWebErrorString_m986FF7F844932E496623D33E700FD52A19FAFDC7 (int32_t ___err0, const RuntimeMethod* method) 
{
	typedef String_t* (*UnityWebRequest_GetWebErrorString_m986FF7F844932E496623D33E700FD52A19FAFDC7_ftn) (int32_t);
	static UnityWebRequest_GetWebErrorString_m986FF7F844932E496623D33E700FD52A19FAFDC7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetWebErrorString_m986FF7F844932E496623D33E700FD52A19FAFDC7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)");
	String_t* icallRetVal = _il2cpp_icall_func(___err0);
	return icallRetVal;
}
// System.String UnityEngine.Networking.UnityWebRequest::GetHTTPStatusString(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetHTTPStatusString_m74E4376F46B315A815D1CF0105AE5A0D36A03219 (int64_t ___responseCode0, const RuntimeMethod* method) 
{
	typedef String_t* (*UnityWebRequest_GetHTTPStatusString_m74E4376F46B315A815D1CF0105AE5A0D36A03219_ftn) (int64_t);
	static UnityWebRequest_GetHTTPStatusString_m74E4376F46B315A815D1CF0105AE5A0D36A03219_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetHTTPStatusString_m74E4376F46B315A815D1CF0105AE5A0D36A03219_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetHTTPStatusString(System.Int64)");
	String_t* icallRetVal = _il2cpp_icall_func(___responseCode0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeCertificateHandlerOnDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m5BF6519F2982ABA7912948690570F7729EDF25E9 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeCertificateHandlerOnDispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeCertificateHandlerOnDispose_m5EFCAF91A547716C4ACA5FB546E991B79E3D0E2A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeDownloadHandlerOnDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_mA5E23BB2B931F6EF089C732D0E56E1B7F9FC1C54 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeDownloadHandlerOnDispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m1BF640E233D231F8C0333864C0FE5D9E1DC2E7C6 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeUploadHandlerOnDispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeUploadHandlerOnDispose_m909CC9BEACAC26C87F44AA957B8F5E5CD10F5761 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeUploadHandlerOnDispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeUploadHandlerOnDispose_mFE16234F005357FECF4A45F842D17C0C52B7CA6E (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.IntPtr UnityEngine.Networking.UnityWebRequest::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityWebRequest_Create_m9840C05EBA6B60CB8071F00DED6BE62122A709BA (const RuntimeMethod* method) 
{
	typedef intptr_t (*UnityWebRequest_Create_m9840C05EBA6B60CB8071F00DED6BE62122A709BA_ftn) ();
	static UnityWebRequest_Create_m9840C05EBA6B60CB8071F00DED6BE62122A709BA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Create_m9840C05EBA6B60CB8071F00DED6BE62122A709BA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Create()");
	intptr_t icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Release_m3835F83F59D3976462F1B98810C8FC42E2C512A2 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	typedef void (*UnityWebRequest_Release_m3835F83F59D3976462F1B98810C8FC42E2C512A2_ftn) (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*);
	static UnityWebRequest_Release_m3835F83F59D3976462F1B98810C8FC42E2C512A2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Release_m3835F83F59D3976462F1B98810C8FC42E2C512A2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalDestroy_mEA38293D4F8B8DB58DA3D739DFEDFAF7BF418B92 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		UnityWebRequest_Abort_m466E8B88BC90F64CE614561BAA88B9412BDB7E8B(__this, NULL);
		UnityWebRequest_Release_m3835F83F59D3976462F1B98810C8FC42E2C512A2(__this, NULL);
		__this->___m_Ptr_0 = (0);
	}

IL_0030:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetDefaults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetDefaults_m6B95AE6129B13EAB3F66B103F6682AB33C27B3B0 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	{
		UnityWebRequest_set_disposeDownloadHandlerOnDispose_m1BF640E233D231F8C0333864C0FE5D9E1DC2E7C6_inline(__this, (bool)1, NULL);
		UnityWebRequest_set_disposeUploadHandlerOnDispose_mFE16234F005357FECF4A45F842D17C0C52B7CA6E_inline(__this, (bool)1, NULL);
		UnityWebRequest_set_disposeCertificateHandlerOnDispose_m5EFCAF91A547716C4ACA5FB546E991B79E3D0E2A_inline(__this, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m68DB029AEF4E6093EDC2196C980134D2C0C969CA (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0;
		L_0 = UnityWebRequest_Create_m9840C05EBA6B60CB8071F00DED6BE62122A709BA(NULL);
		__this->___m_Ptr_0 = L_0;
		UnityWebRequest_InternalSetDefaults_m6B95AE6129B13EAB3F66B103F6682AB33C27B3B0(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___url0, String_t* ___method1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0;
		L_0 = UnityWebRequest_Create_m9840C05EBA6B60CB8071F00DED6BE62122A709BA(NULL);
		__this->___m_Ptr_0 = L_0;
		UnityWebRequest_InternalSetDefaults_m6B95AE6129B13EAB3F66B103F6682AB33C27B3B0(__this, NULL);
		String_t* L_1 = ___url0;
		UnityWebRequest_set_url_m5C117F8E00BA03DDC9EBC859DCB31BB4B6E3ECFC(__this, L_1, NULL);
		String_t* L_2 = ___method1;
		UnityWebRequest_set_method_m35F9B5C788C66EACF3FB36FA220AA6B6777CFE88(__this, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String,UnityEngine.Networking.DownloadHandler,UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m3798CB7D0BE685F2520AF1BBF83B523BBDD7980A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___url0, String_t* ___method1, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___downloadHandler2, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___uploadHandler3, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		intptr_t L_0;
		L_0 = UnityWebRequest_Create_m9840C05EBA6B60CB8071F00DED6BE62122A709BA(NULL);
		__this->___m_Ptr_0 = L_0;
		UnityWebRequest_InternalSetDefaults_m6B95AE6129B13EAB3F66B103F6682AB33C27B3B0(__this, NULL);
		String_t* L_1 = ___url0;
		UnityWebRequest_set_url_m5C117F8E00BA03DDC9EBC859DCB31BB4B6E3ECFC(__this, L_1, NULL);
		String_t* L_2 = ___method1;
		UnityWebRequest_set_method_m35F9B5C788C66EACF3FB36FA220AA6B6777CFE88(__this, L_2, NULL);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_3 = ___downloadHandler2;
		UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(__this, L_3, NULL);
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_4 = ___uploadHandler3;
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(__this, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Finalize_m7F9D075432280A6CFF21BC2B5C35BFA752FF6ED8 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0012:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			UnityWebRequest_DisposeHandlers_mEE16444204C3D4D1D0119B987DA8CEB3979B309D(__this, NULL);
			UnityWebRequest_InternalDestroy_mEA38293D4F8B8DB58DA3D739DFEDFAF7BF418B92(__this, NULL);
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityWebRequest_DisposeHandlers_mEE16444204C3D4D1D0119B987DA8CEB3979B309D(__this, NULL);
		UnityWebRequest_InternalDestroy_mEA38293D4F8B8DB58DA3D739DFEDFAF7BF418B92(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::DisposeHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_DisposeHandlers_mEE16444204C3D4D1D0119B987DA8CEB3979B309D (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* V_7 = NULL;
	bool V_8 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_disposeDownloadHandlerOnDispose_mA5E23BB2B931F6EF089C732D0E56E1B7F9FC1C54_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_2;
		L_2 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(__this, NULL);
		V_1 = L_2;
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_3 = V_1;
		V_2 = (bool)((!(((RuntimeObject*)(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_5 = V_1;
		VirtualActionInvoker0::Invoke(5 /* System.Void UnityEngine.Networking.DownloadHandler::Dispose() */, L_5);
	}

IL_0024:
	{
	}

IL_0025:
	{
		bool L_6;
		L_6 = UnityWebRequest_get_disposeUploadHandlerOnDispose_m909CC9BEACAC26C87F44AA957B8F5E5CD10F5761_inline(__this, NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_8;
		L_8 = UnityWebRequest_get_uploadHandler_mF92ED2E0410E7F720B8775B467CFD86B60909CF5(__this, NULL);
		V_4 = L_8;
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_9 = V_4;
		V_5 = (bool)((!(((RuntimeObject*)(UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_11 = V_4;
		VirtualActionInvoker0::Invoke(5 /* System.Void UnityEngine.Networking.UploadHandler::Dispose() */, L_11);
	}

IL_004d:
	{
	}

IL_004e:
	{
		bool L_12;
		L_12 = UnityWebRequest_get_disposeCertificateHandlerOnDispose_m5BF6519F2982ABA7912948690570F7729EDF25E9_inline(__this, NULL);
		V_6 = L_12;
		bool L_13 = V_6;
		if (!L_13)
		{
			goto IL_0079;
		}
	}
	{
		CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* L_14;
		L_14 = UnityWebRequest_get_certificateHandler_m928A7BE34EB3725EA1D977877B7362E813918D7D(__this, NULL);
		V_7 = L_14;
		CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* L_15 = V_7;
		V_8 = (bool)((!(((RuntimeObject*)(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804*)L_15) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_16 = V_8;
		if (!L_16)
		{
			goto IL_0078;
		}
	}
	{
		CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* L_17 = V_7;
		CertificateHandler_Dispose_mA33A9B76B93B8DF2FEB665A0AFB1C1E6933CFC43(L_17, NULL);
	}

IL_0078:
	{
	}

IL_0079:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::BeginWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_BeginWebRequest_m5850801A007A95F35CCBAA5E947FF385DB50AE0D (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	typedef UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* (*UnityWebRequest_BeginWebRequest_m5850801A007A95F35CCBAA5E947FF385DB50AE0D_ftn) (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*);
	static UnityWebRequest_BeginWebRequest_m5850801A007A95F35CCBAA5E947FF385DB50AE0D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_BeginWebRequest_m5850801A007A95F35CCBAA5E947FF385DB50AE0D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::BeginWebRequest()");
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* V_0 = NULL;
	bool V_1 = false;
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* V_2 = NULL;
	{
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_0;
		L_0 = UnityWebRequest_BeginWebRequest_m5850801A007A95F35CCBAA5E947FF385DB50AE0D(__this, NULL);
		V_0 = L_0;
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_3 = V_0;
		UnityWebRequestAsyncOperation_set_webRequest_mB4B19873C06FD29078CB1E8BF05B0D077F0FF711_inline(L_3, __this, NULL);
	}

IL_0018:
	{
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_4 = V_0;
		V_2 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_5 = V_2;
		return L_5;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Abort_m466E8B88BC90F64CE614561BAA88B9412BDB7E8B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	typedef void (*UnityWebRequest_Abort_m466E8B88BC90F64CE614561BAA88B9412BDB7E8B_ftn) (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*);
	static UnityWebRequest_Abort_m466E8B88BC90F64CE614561BAA88B9412BDB7E8B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Abort_m466E8B88BC90F64CE614561BAA88B9412BDB7E8B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Abort()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetMethod_mB3B6FE6A201CC1E22BAEFA0B9A88B4B421915238 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, int32_t ___methodType0, const RuntimeMethod* method) 
{
	typedef int32_t (*UnityWebRequest_SetMethod_mB3B6FE6A201CC1E22BAEFA0B9A88B4B421915238_ftn) (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, int32_t);
	static UnityWebRequest_SetMethod_mB3B6FE6A201CC1E22BAEFA0B9A88B4B421915238_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetMethod_mB3B6FE6A201CC1E22BAEFA0B9A88B4B421915238_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___methodType0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetMethod_m91C9BE2FB38963FEBDACB221CB275CA7AF2828F4 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, int32_t ___methodType0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m8B2DA7C5B43443C4262BB0289141A608E2695D77(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral716D4DCF03C354CF6AC6FB6BDBEC2E94AAE7139E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetMethod_m91C9BE2FB38963FEBDACB221CB275CA7AF2828F4_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = ___methodType0;
		int32_t L_4;
		L_4 = UnityWebRequest_SetMethod_mB3B6FE6A201CC1E22BAEFA0B9A88B4B421915238(__this, L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m986FF7F844932E496623D33E700FD52A19FAFDC7(L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetMethod_m91C9BE2FB38963FEBDACB221CB275CA7AF2828F4_RuntimeMethod_var)));
	}

IL_0035:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetCustomMethod_mA970EB4024D1303CF03FFB183CE102A84BC231AB (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___customMethodName0, const RuntimeMethod* method) 
{
	typedef int32_t (*UnityWebRequest_SetCustomMethod_mA970EB4024D1303CF03FFB183CE102A84BC231AB_ftn) (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, String_t*);
	static UnityWebRequest_SetCustomMethod_mA970EB4024D1303CF03FFB183CE102A84BC231AB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetCustomMethod_mA970EB4024D1303CF03FFB183CE102A84BC231AB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___customMethodName0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetCustomMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetCustomMethod_m438D89359CA23426910FBE2F58D3D6D21E80BF40 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___customMethodName0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m8B2DA7C5B43443C4262BB0289141A608E2695D77(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral716D4DCF03C354CF6AC6FB6BDBEC2E94AAE7139E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetCustomMethod_m438D89359CA23426910FBE2F58D3D6D21E80BF40_RuntimeMethod_var)));
	}

IL_0019:
	{
		String_t* L_3 = ___customMethodName0;
		int32_t L_4;
		L_4 = UnityWebRequest_SetCustomMethod_mA970EB4024D1303CF03FFB183CE102A84BC231AB(__this, L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m986FF7F844932E496623D33E700FD52A19FAFDC7(L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetCustomMethod_m438D89359CA23426910FBE2F58D3D6D21E80BF40_RuntimeMethod_var)));
	}

IL_0035:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_method_m35F9B5C788C66EACF3FB36FA220AA6B6777CFE88 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DAC516092AE075D549759FBFE57497622D29F15);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7D2659B30CD7065E2E3DAAE5ABDCFE4A0B66782E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_method_m35F9B5C788C66EACF3FB36FA220AA6B6777CFE88_RuntimeMethod_var)));
	}

IL_0017:
	{
		String_t* L_4 = ___value0;
		String_t* L_5;
		L_5 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_4, NULL);
		V_2 = L_5;
		String_t* L_6 = V_2;
		V_1 = L_6;
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_7, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, NULL);
		if (L_8)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_9 = V_1;
		bool L_10;
		L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
		if (L_10)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_11, _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708, NULL);
		if (L_12)
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_13 = V_1;
		bool L_14;
		L_14 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_13, _stringLiteral7DAC516092AE075D549759FBFE57497622D29F15, NULL);
		if (L_14)
		{
			goto IL_0074;
		}
	}
	{
		goto IL_007e;
	}

IL_0056:
	{
		UnityWebRequest_InternalSetMethod_m91C9BE2FB38963FEBDACB221CB275CA7AF2828F4(__this, 0, NULL);
		goto IL_008d;
	}

IL_0060:
	{
		UnityWebRequest_InternalSetMethod_m91C9BE2FB38963FEBDACB221CB275CA7AF2828F4(__this, 1, NULL);
		goto IL_008d;
	}

IL_006a:
	{
		UnityWebRequest_InternalSetMethod_m91C9BE2FB38963FEBDACB221CB275CA7AF2828F4(__this, 2, NULL);
		goto IL_008d;
	}

IL_0074:
	{
		UnityWebRequest_InternalSetMethod_m91C9BE2FB38963FEBDACB221CB275CA7AF2828F4(__this, 3, NULL);
		goto IL_008d;
	}

IL_007e:
	{
		String_t* L_15 = ___value0;
		String_t* L_16;
		L_16 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_15, NULL);
		UnityWebRequest_InternalSetCustomMethod_m438D89359CA23426910FBE2F58D3D6D21E80BF40(__this, L_16, NULL);
		goto IL_008d;
	}

IL_008d:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::GetError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_GetError_m4A888DDBEE9F390C92090C6355DFB1F94A33BB86 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*UnityWebRequest_GetError_m4A888DDBEE9F390C92090C6355DFB1F94A33BB86_ftn) (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*);
	static UnityWebRequest_GetError_m4A888DDBEE9F390C92090C6355DFB1F94A33BB86_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetError_m4A888DDBEE9F390C92090C6355DFB1F94A33BB86_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetError()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral997F93B8223285BB571C83E7ACD6C6615F5EF04C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(__this, NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) > ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_003d;
	}

IL_0016:
	{
		V_2 = (String_t*)NULL;
		goto IL_004b;
	}

IL_001a:
	{
		int64_t L_4;
		L_4 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(__this, NULL);
		int64_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_5);
		int64_t L_7;
		L_7 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(__this, NULL);
		String_t* L_8;
		L_8 = UnityWebRequest_GetHTTPStatusString_m74E4376F46B315A815D1CF0105AE5A0D36A03219(L_7, NULL);
		String_t* L_9;
		L_9 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral997F93B8223285BB571C83E7ACD6C6615F5EF04C, L_6, L_8, NULL);
		V_2 = L_9;
		goto IL_004b;
	}

IL_003d:
	{
		int32_t L_10;
		L_10 = UnityWebRequest_GetError_m4A888DDBEE9F390C92090C6355DFB1F94A33BB86(__this, NULL);
		String_t* L_11;
		L_11 = UnityWebRequest_GetWebErrorString_m986FF7F844932E496623D33E700FD52A19FAFDC7(L_10, NULL);
		V_2 = L_11;
		goto IL_004b;
	}

IL_004b:
	{
		String_t* L_12 = V_2;
		return L_12;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_use100Continue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_use100Continue_m21E1B5433D7A985CB34CF9561C3D6DB98C4F893F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, bool ___value0, const RuntimeMethod* method) 
{
	typedef void (*UnityWebRequest_set_use100Continue_m21E1B5433D7A985CB34CF9561C3D6DB98C4F893F_ftn) (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, bool);
	static UnityWebRequest_set_use100Continue_m21E1B5433D7A985CB34CF9561C3D6DB98C4F893F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_set_use100Continue_m21E1B5433D7A985CB34CF9561C3D6DB98C4F893F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::set_use100Continue(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_useHttpContinue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_useHttpContinue_m69A9328F59DD88D26472A60530C42DB1D770571E (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, bool ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m8B2DA7C5B43443C4262BB0289141A608E2695D77(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6D320886236F09707493AF7F5BC1F3DC4B334714)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_useHttpContinue_m69A9328F59DD88D26472A60530C42DB1D770571E_RuntimeMethod_var)));
	}

IL_0019:
	{
		bool L_3 = ___value0;
		UnityWebRequest_set_use100Continue_m21E1B5433D7A985CB34CF9561C3D6DB98C4F893F(__this, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_url(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_url_m5C117F8E00BA03DDC9EBC859DCB31BB4B6E3ECFC (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE02B6F4CAAD9B14B2B4CBB6E5E1A7B2774E4FE2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		V_0 = _stringLiteralCE02B6F4CAAD9B14B2B4CBB6E5E1A7B2774E4FE2;
		String_t* L_0;
		L_0 = Application_get_absoluteURL_m1BF6668AF534BC6E7FBB9D19591AF29DF0DAD2F1(NULL);
		V_0 = L_0;
		String_t* L_1 = ___value0;
		String_t* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = WebRequestUtils_MakeInitialUrl_m5F37E0E7FB2F75F84E1D13EE6F35CC3252B458CE(L_1, L_2, NULL);
		UnityWebRequest_InternalSetUrl_mD3602EB8A5253116EA0EE8B18223A51BE79883E9(__this, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_uri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uri_m273584DE722413D238FB04EA0AE5F35A580272C6 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___value0;
		bool L_1;
		L_1 = Uri_get_IsAbsoluteUri_m2F9B759B85D295639D7959A616E1FBC203D756DF(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral830D3B1988207AD90E6500EFD5191F802329C898)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_uri_m273584DE722413D238FB04EA0AE5F35A580272C6_RuntimeMethod_var)));
	}

IL_0019:
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4 = ___value0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_5 = ___value0;
		String_t* L_6;
		L_6 = Uri_get_OriginalString_m3031F9054CA10F2C55C0E2415CC19810D360A5D6(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(WebRequestUtils_t23F1FB533DBFDA3BE5624D901D535B4C6EFAD443_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = WebRequestUtils_MakeUriString_mE4CE2CECE45A50A41CEBA43B2F29BDBEF6984CC3(L_4, L_6, (bool)0, NULL);
		UnityWebRequest_InternalSetUrl_mD3602EB8A5253116EA0EE8B18223A51BE79883E9(__this, L_7, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_8 = ___value0;
		__this->___m_Uri_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Uri_4), (void*)L_8);
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUrl_m6DF66CA4E86A4604C9A79DF16886AEAB4A2153C5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	typedef int32_t (*UnityWebRequest_SetUrl_m6DF66CA4E86A4604C9A79DF16886AEAB4A2153C5_ftn) (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, String_t*);
	static UnityWebRequest_SetUrl_m6DF66CA4E86A4604C9A79DF16886AEAB4A2153C5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetUrl_m6DF66CA4E86A4604C9A79DF16886AEAB4A2153C5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___url0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetUrl_mD3602EB8A5253116EA0EE8B18223A51BE79883E9 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___url0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m8B2DA7C5B43443C4262BB0289141A608E2695D77(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AD0071445300544C945A4235FF5EE2237930AF6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetUrl_mD3602EB8A5253116EA0EE8B18223A51BE79883E9_RuntimeMethod_var)));
	}

IL_0019:
	{
		String_t* L_3 = ___url0;
		int32_t L_4;
		L_4 = UnityWebRequest_SetUrl_m6DF66CA4E86A4604C9A79DF16886AEAB4A2153C5(__this, L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m986FF7F844932E496623D33E700FD52A19FAFDC7(L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_InternalSetUrl_mD3602EB8A5253116EA0EE8B18223A51BE79883E9_RuntimeMethod_var)));
	}

IL_0035:
	{
		return;
	}
}
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	typedef int64_t (*UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B_ftn) (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*);
	static UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_responseCode()");
	int64_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isModifiable_m8B2DA7C5B43443C4262BB0289141A608E2695D77 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	typedef bool (*UnityWebRequest_get_isModifiable_m8B2DA7C5B43443C4262BB0289141A608E2695D77_ftn) (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*);
	static UnityWebRequest_get_isModifiable_m8B2DA7C5B43443C4262BB0289141A608E2695D77_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_isModifiable_m8B2DA7C5B43443C4262BB0289141A608E2695D77_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_isModifiable()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_m3079B53A1CAFD8D5B334C635761E7B7E10B14123 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(__this, NULL);
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m036684411466688E71E67CDD3703BAC9035A56F0 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isHttpError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isHttpError_m945BA480A179E05CC9659846414D9521ED648ED5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0;
		L_0 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449_ftn) (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*);
	static UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_result()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_InternalSetRequestHeader_m6D56972D305CBFC6EC3308483E3D9BC06E38F353 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	typedef int32_t (*UnityWebRequest_InternalSetRequestHeader_m6D56972D305CBFC6EC3308483E3D9BC06E38F353_ftn) (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, String_t*, String_t*);
	static UnityWebRequest_InternalSetRequestHeader_m6D56972D305CBFC6EC3308483E3D9BC06E38F353_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_InternalSetRequestHeader_m6D56972D305CBFC6EC3308483E3D9BC06E38F353_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::InternalSetRequestHeader(System.String,System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___name0, ___value1);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral350138951CA76BFC65A77EA2D223A8D476B10BC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5_RuntimeMethod_var)));
	}

IL_0016:
	{
		String_t* L_4 = ___value1;
		V_2 = (bool)((((RuntimeObject*)(String_t*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9305B29342F3BC0993F85105BB6141FF30569ED2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5_RuntimeMethod_var)));
	}

IL_0029:
	{
		bool L_7;
		L_7 = UnityWebRequest_get_isModifiable_m8B2DA7C5B43443C4262BB0289141A608E2695D77(__this, NULL);
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBCE49DFF590DB2AB94984A5C75EF18BDDD83FE69)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5_RuntimeMethod_var)));
	}

IL_0041:
	{
		String_t* L_10 = ___name0;
		String_t* L_11 = ___value1;
		int32_t L_12;
		L_12 = UnityWebRequest_InternalSetRequestHeader_m6D56972D305CBFC6EC3308483E3D9BC06E38F353(__this, L_10, L_11, NULL);
		V_0 = L_12;
		int32_t L_13 = V_0;
		V_4 = (bool)((!(((uint32_t)L_13) <= ((uint32_t)0)))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_15 = V_0;
		String_t* L_16;
		L_16 = UnityWebRequest_GetWebErrorString_m986FF7F844932E496623D33E700FD52A19FAFDC7(L_15, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_17 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_17, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5_RuntimeMethod_var)));
	}

IL_0060:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUploadHandler_mB8586D5337FA8C93E791F509235E918CFBD33973 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___uh0, const RuntimeMethod* method) 
{
	typedef int32_t (*UnityWebRequest_SetUploadHandler_mB8586D5337FA8C93E791F509235E918CFBD33973_ftn) (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6*);
	static UnityWebRequest_SetUploadHandler_mB8586D5337FA8C93E791F509235E918CFBD33973_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetUploadHandler_mB8586D5337FA8C93E791F509235E918CFBD33973_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___uh0);
	return icallRetVal;
}
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* UnityWebRequest_get_uploadHandler_mF92ED2E0410E7F720B8775B467CFD86B60909CF5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* V_0 = NULL;
	{
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_0 = __this->___m_UploadHandler_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m8B2DA7C5B43443C4262BB0289141A608E2695D77(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral93CE1F3EEBFA5A5C2C336C37D31A01039231CA39)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE_RuntimeMethod_var)));
	}

IL_0019:
	{
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_3 = ___value0;
		int32_t L_4;
		L_4 = UnityWebRequest_SetUploadHandler_mB8586D5337FA8C93E791F509235E918CFBD33973(__this, L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m986FF7F844932E496623D33E700FD52A19FAFDC7(L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE_RuntimeMethod_var)));
	}

IL_0035:
	{
		UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* L_10 = ___value0;
		__this->___m_UploadHandler_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UploadHandler_2), (void*)L_10);
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetDownloadHandler_m3EE61901234B0A0C86424E7A00B860807C73A515 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___dh0, const RuntimeMethod* method) 
{
	typedef int32_t (*UnityWebRequest_SetDownloadHandler_m3EE61901234B0A0C86424E7A00B860807C73A515_ftn) (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB*);
	static UnityWebRequest_SetDownloadHandler_m3EE61901234B0A0C86424E7A00B860807C73A515_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetDownloadHandler_m3EE61901234B0A0C86424E7A00B860807C73A515_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___dh0);
	return icallRetVal;
}
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* V_0 = NULL;
	{
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_0 = __this->___m_DownloadHandler_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		bool L_0;
		L_0 = UnityWebRequest_get_isModifiable_m8B2DA7C5B43443C4262BB0289141A608E2695D77(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC3A46521634BE1B34BB2F00154A05110A698F36)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F_RuntimeMethod_var)));
	}

IL_0019:
	{
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_3 = ___value0;
		int32_t L_4;
		L_4 = UnityWebRequest_SetDownloadHandler_m3EE61901234B0A0C86424E7A00B860807C73A515(__this, L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		V_2 = (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_7 = V_0;
		String_t* L_8;
		L_8 = UnityWebRequest_GetWebErrorString_m986FF7F844932E496623D33E700FD52A19FAFDC7(L_7, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F_RuntimeMethod_var)));
	}

IL_0035:
	{
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_10 = ___value0;
		__this->___m_DownloadHandler_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DownloadHandler_1), (void*)L_10);
		return;
	}
}
// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::get_certificateHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* UnityWebRequest_get_certificateHandler_m928A7BE34EB3725EA1D977877B7362E813918D7D (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* V_0 = NULL;
	{
		CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* L_0 = __this->___m_CertificateHandler_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_mBCC8E02B34F75797C7171EBFC1E28CF32FBF9C4E (String_t* ___uri0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_0 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_1 = NULL;
	{
		String_t* L_0 = ___uri0;
		DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_1 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_1, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_m3798CB7D0BE685F2520AF1BBF83B523BBDD7980A(L_2, L_0, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, L_1, (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6*)NULL, NULL);
		V_0 = L_2;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = V_0;
		V_1 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Delete_m4391983CE4CAC9CD8F4C221E513F44FA74559C8C (String_t* ___uri0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_0 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_1 = NULL;
	{
		String_t* L_0 = ___uri0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_1, L_0, _stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38, NULL);
		V_0 = L_1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = V_0;
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = V_1;
		return L_3;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Put(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Put_m83C23CEC1BD3493EAA6DC35D34B93369C0D09C03 (String_t* ___uri0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bodyData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_0 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_1 = NULL;
	{
		String_t* L_0 = ___uri0;
		DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_1 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___bodyData1;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_3 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_3, L_2, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_m3798CB7D0BE685F2520AF1BBF83B523BBDD7980A(L_4, L_0, _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708, L_1, L_3, NULL);
		V_0 = L_4;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = V_0;
		V_1 = L_5;
		goto IL_001c;
	}

IL_001c:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Post_m1F6BF341F959AC95110C738791EF920713B74786 (String_t* ___uri0, WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* ___formData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_0 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_1 = NULL;
	{
		String_t* L_0 = ___uri0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_mD4739B0BF1C4937479A83B24B531C6B819712A3E(L_1, L_0, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
		V_0 = L_1;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = V_0;
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_3 = ___formData1;
		UnityWebRequest_SetupPost_m5C009EE548C98A48634DEBF77BFCBFC41E900733(L_2, L_3, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = V_0;
		V_1 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::SetupPost(UnityEngine.Networking.UnityWebRequest,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetupPost_m5C009EE548C98A48634DEBF77BFCBFC41E900733 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___request0, WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* ___formData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_5;
	memset((&V_5), 0, sizeof(V_5));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___request0;
		DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_1 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_1, NULL);
		UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_0, L_1, NULL);
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_2 = ___formData1;
		V_2 = (bool)((((RuntimeObject*)(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		goto IL_008c;
	}

IL_0017:
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_4 = ___formData1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = WWWForm_get_data_mE064CFB866D49D1E49FA9E0811CE71D039BB0145(L_4, NULL);
		V_0 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		V_3 = (bool)((((int32_t)(((RuntimeArray*)L_6)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_002b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		V_4 = (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = ___request0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_12 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_12, L_11, NULL);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_10, L_12, NULL);
	}

IL_0042:
	{
		WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045* L_13 = ___formData1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14;
		L_14 = WWWForm_get_headers_mF6508B8C984B76EF984495FF01BA7185CFD0C63E(L_13, NULL);
		V_1 = L_14;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_15 = V_1;
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_16;
		L_16 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_15, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_5 = L_16;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_5), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0072_1;
			}

IL_0054_1:
			{
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_17;
				L_17 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_5), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_6 = L_17;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_18 = ___request0;
				String_t* L_19;
				L_19 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_6), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_20;
				L_20 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_6), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_18, L_19, L_20, NULL);
			}

IL_0072_1:
			{
				bool L_21;
				L_21 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_5), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_0054_1;
				}
			}
			{
				goto IL_008c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008c:
	{
		return;
	}
}
// System.Byte[] UnityEngine.Networking.UnityWebRequest::SerializeFormSections(System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection>,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* UnityWebRequest_SerializeFormSections_m949EB7C2A085F622DB42F4351D6DEFD53894055A (List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* ___multipartFormSections0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___boundary1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m97106443867137425CC9BF9FF68809005C5DD631_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mACC41ABCE1A64DB96C1D92AF269E242EBD9D4102_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4806E5E4DB69BA4B3FAC10A4E7AC1C05508F1918_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMultipartFormSection_tE1168E22BCEDEA1E27862494E225B2E7B4C56BDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3534716D04DFE46BF26D5842CF14B4F5E33C384F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0C23D34F33EBEF620CA00054786CC1B6F684CE21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05851BA4FAAADF682AB82A50026F74619C8BC4B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5103D4E1997DA1B63FD919F701A6A08F2CC278FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE00A966C5B031CE4B6E347CFA86D0E58926E6409);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_3 = NULL;
	bool V_4 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	Enumerator_t3221A562679D6D2FAD5ADD680BF5F03F7FE8D58F V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	Enumerator_t3221A562679D6D2FAD5ADD680BF5F03F7FE8D58F V_8;
	memset((&V_8), 0, sizeof(V_8));
	RuntimeObject* V_9 = NULL;
	String_t* V_10 = NULL;
	String_t* V_11 = NULL;
	String_t* V_12 = NULL;
	String_t* V_13 = NULL;
	String_t* V_14 = NULL;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	int32_t G_B3_0 = 0;
	{
		List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* L_0 = ___multipartFormSections0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* L_1 = ___multipartFormSections0;
		int32_t L_2;
		L_2 = List_1_get_Count_m0C23D34F33EBEF620CA00054786CC1B6F684CE21_inline(L_1, List_1_get_Count_m0C23D34F33EBEF620CA00054786CC1B6F684CE21_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_4 = (bool)G_B3_0;
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		V_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		goto IL_01ea;
	}

IL_001e:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		V_0 = L_5;
		il2cpp_codegen_runtime_class_init_inline(WWWForm_t0DAE123504AB1B2BC17C18714741B92AB3B3B045_il2cpp_TypeInfo_var);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
		L_6 = WWWForm_get_DefaultEncoding_m9CB86CA4A5D6064CC000BF69208D38736012FB20(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		V_1 = L_7;
		V_2 = 0;
		List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* L_8 = ___multipartFormSections0;
		Enumerator_t3221A562679D6D2FAD5ADD680BF5F03F7FE8D58F L_9;
		L_9 = List_1_GetEnumerator_m3534716D04DFE46BF26D5842CF14B4F5E33C384F(L_8, List_1_GetEnumerator_m3534716D04DFE46BF26D5842CF14B4F5E33C384F_RuntimeMethod_var);
		V_6 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0070:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m97106443867137425CC9BF9FF68809005C5DD631((&V_6), Enumerator_Dispose_m97106443867137425CC9BF9FF68809005C5DD631_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0065_1;
			}

IL_004b_1:
			{
				RuntimeObject* L_10;
				L_10 = Enumerator_get_Current_m4806E5E4DB69BA4B3FAC10A4E7AC1C05508F1918_inline((&V_6), Enumerator_get_Current_m4806E5E4DB69BA4B3FAC10A4E7AC1C05508F1918_RuntimeMethod_var);
				V_7 = L_10;
				int32_t L_11 = V_2;
				RuntimeObject* L_12 = V_7;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
				L_13 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Byte[] UnityEngine.Networking.IMultipartFormSection::get_sectionData() */, IMultipartFormSection_tE1168E22BCEDEA1E27862494E225B2E7B4C56BDF_il2cpp_TypeInfo_var, L_12);
				V_2 = ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)il2cpp_codegen_add(((int32_t)64), ((int32_t)(((RuntimeArray*)L_13)->max_length))))));
			}

IL_0065_1:
			{
				bool L_14;
				L_14 = Enumerator_MoveNext_mACC41ABCE1A64DB96C1D92AF269E242EBD9D4102((&V_6), Enumerator_MoveNext_mACC41ABCE1A64DB96C1D92AF269E242EBD9D4102_RuntimeMethod_var);
				if (L_14)
				{
					goto IL_004b_1;
				}
			}
			{
				goto IL_007f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007f:
	{
		int32_t L_15 = V_2;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_16 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B(L_16, L_15, List_1__ctor_m3E1257FEE9C30846E4BA6226CDA5F593A89CF75B_RuntimeMethod_var);
		V_3 = L_16;
		List_1_tCB1A627DDECC594C7E63E3CA2A397D5ABBFAA48D* L_17 = ___multipartFormSections0;
		Enumerator_t3221A562679D6D2FAD5ADD680BF5F03F7FE8D58F L_18;
		L_18 = List_1_GetEnumerator_m3534716D04DFE46BF26D5842CF14B4F5E33C384F(L_17, List_1_GetEnumerator_m3534716D04DFE46BF26D5842CF14B4F5E33C384F_RuntimeMethod_var);
		V_8 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01a9:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m97106443867137425CC9BF9FF68809005C5DD631((&V_8), Enumerator_Dispose_m97106443867137425CC9BF9FF68809005C5DD631_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_019b_1;
			}

IL_0094_1:
			{
				RuntimeObject* L_19;
				L_19 = Enumerator_get_Current_m4806E5E4DB69BA4B3FAC10A4E7AC1C05508F1918_inline((&V_8), Enumerator_get_Current_m4806E5E4DB69BA4B3FAC10A4E7AC1C05508F1918_RuntimeMethod_var);
				V_9 = L_19;
				V_10 = _stringLiteralE00A966C5B031CE4B6E347CFA86D0E58926E6409;
				RuntimeObject* L_20 = V_9;
				String_t* L_21;
				L_21 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.Networking.IMultipartFormSection::get_sectionName() */, IMultipartFormSection_tE1168E22BCEDEA1E27862494E225B2E7B4C56BDF_il2cpp_TypeInfo_var, L_20);
				V_11 = L_21;
				RuntimeObject* L_22 = V_9;
				String_t* L_23;
				L_23 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String UnityEngine.Networking.IMultipartFormSection::get_fileName() */, IMultipartFormSection_tE1168E22BCEDEA1E27862494E225B2E7B4C56BDF_il2cpp_TypeInfo_var, L_22);
				V_12 = L_23;
				String_t* L_24 = V_10;
				String_t* L_25;
				L_25 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral5103D4E1997DA1B63FD919F701A6A08F2CC278FB, L_24, NULL);
				V_13 = L_25;
				String_t* L_26 = V_11;
				bool L_27;
				L_27 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_26, NULL);
				V_15 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
				bool L_28 = V_15;
				if (!L_28)
				{
					goto IL_00ec_1;
				}
			}
			{
				String_t* L_29 = V_13;
				String_t* L_30 = V_11;
				String_t* L_31;
				L_31 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_29, _stringLiteral05851BA4FAAADF682AB82A50026F74619C8BC4B6, L_30, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
				V_13 = L_31;
			}

IL_00ec_1:
			{
				String_t* L_32 = V_12;
				bool L_33;
				L_33 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_32, NULL);
				V_16 = (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
				bool L_34 = V_16;
				if (!L_34)
				{
					goto IL_0113_1;
				}
			}
			{
				String_t* L_35 = V_13;
				String_t* L_36 = V_12;
				String_t* L_37;
				L_37 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_35, _stringLiteralD65B2B7CE306C7EE6A36785EB8503CD74EEACADF, L_36, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
				V_13 = L_37;
			}

IL_0113_1:
			{
				String_t* L_38 = V_13;
				String_t* L_39;
				L_39 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_38, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
				V_13 = L_39;
				RuntimeObject* L_40 = V_9;
				String_t* L_41;
				L_41 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String UnityEngine.Networking.IMultipartFormSection::get_contentType() */, IMultipartFormSection_tE1168E22BCEDEA1E27862494E225B2E7B4C56BDF_il2cpp_TypeInfo_var, L_40);
				V_14 = L_41;
				String_t* L_42 = V_14;
				bool L_43;
				L_43 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_42, NULL);
				V_17 = (bool)((((int32_t)L_43) == ((int32_t)0))? 1 : 0);
				bool L_44 = V_17;
				if (!L_44)
				{
					goto IL_0151_1;
				}
			}
			{
				String_t* L_45 = V_13;
				String_t* L_46 = V_14;
				String_t* L_47;
				L_47 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_45, _stringLiteral2D237ADC0A2A1323199D8ECEAF721FC4EA117317, L_46, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
				V_13 = L_47;
			}

IL_0151_1:
			{
				List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_48 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_0;
				List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_48, (RuntimeObject*)L_49, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
				List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_50 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_1;
				List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_50, (RuntimeObject*)L_51, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
				List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_52 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ___boundary1;
				List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_52, (RuntimeObject*)L_53, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
				List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_54 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_0;
				List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_54, (RuntimeObject*)L_55, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
				List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_56 = V_3;
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_57;
				L_57 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
				String_t* L_58 = V_13;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59;
				L_59 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_57, L_58);
				List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_56, (RuntimeObject*)L_59, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
				List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_60 = V_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_0;
				List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_60, (RuntimeObject*)L_61, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
				List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_62 = V_3;
				RuntimeObject* L_63 = V_9;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64;
				L_64 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(1 /* System.Byte[] UnityEngine.Networking.IMultipartFormSection::get_sectionData() */, IMultipartFormSection_tE1168E22BCEDEA1E27862494E225B2E7B4C56BDF_il2cpp_TypeInfo_var, L_63);
				List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_62, (RuntimeObject*)L_64, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
			}

IL_019b_1:
			{
				bool L_65;
				L_65 = Enumerator_MoveNext_mACC41ABCE1A64DB96C1D92AF269E242EBD9D4102((&V_8), Enumerator_MoveNext_mACC41ABCE1A64DB96C1D92AF269E242EBD9D4102_RuntimeMethod_var);
				if (L_65)
				{
					goto IL_0094_1;
				}
			}
			{
				goto IL_01b8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01b8:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_66 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_0;
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_66, (RuntimeObject*)L_67, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_68 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = V_1;
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_68, (RuntimeObject*)L_69, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_70 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = ___boundary1;
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_70, (RuntimeObject*)L_71, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_72 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = V_1;
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_72, (RuntimeObject*)L_73, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_74 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = V_0;
		List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67(L_74, (RuntimeObject*)L_75, List_1_AddRange_mF51C7242A9710C837B9158D0D120549E49E4FB67_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_76 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77;
		L_77 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_76, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		V_5 = L_77;
		goto IL_01ea;
	}

IL_01ea:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = V_5;
		return L_78;
	}
}
// System.Byte[] UnityEngine.Networking.UnityWebRequest::GenerateBoundary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* UnityWebRequest_GenerateBoundary_m02F95B0E1C8151E973F659F17C62C725CF080490 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_6 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40));
		V_0 = L_0;
		V_1 = 0;
		goto IL_003e;
	}

IL_000d:
	{
		int32_t L_1;
		L_1 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(((int32_t)48), ((int32_t)110), NULL);
		V_2 = L_1;
		int32_t L_2 = V_2;
		V_3 = (bool)((((int32_t)L_2) > ((int32_t)((int32_t)57)))? 1 : 0);
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 7));
	}

IL_0025:
	{
		int32_t L_5 = V_2;
		V_4 = (bool)((((int32_t)L_5) > ((int32_t)((int32_t)90)))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 6));
	}

IL_0034:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)L_10));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003e:
	{
		int32_t L_12 = V_1;
		V_5 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)40)))? 1 : 0);
		bool L_13 = V_5;
		if (L_13)
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		V_6 = L_14;
		goto IL_004e;
	}

IL_004e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_6;
		return L_15;
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
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_back(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_pinvoke_cleanup(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com_back(const CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled, CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
IL2CPP_EXTERN_C void CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshal_com_cleanup(CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.CertificateHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler_Release_m53BEBE2D49365A90BABE06C0B357FFDD71D51D54 (CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* __this, const RuntimeMethod* method) 
{
	typedef void (*CertificateHandler_Release_m53BEBE2D49365A90BABE06C0B357FFDD71D51D54_ftn) (CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804*);
	static CertificateHandler_Release_m53BEBE2D49365A90BABE06C0B357FFDD71D51D54_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CertificateHandler_Release_m53BEBE2D49365A90BABE06C0B357FFDD71D51D54_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.CertificateHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificate_m81E194684391CA512FFC7C3A9172B56D6A1E2752 (CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___certificateData0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificateNative(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificateNative_m73467B32D9B40F6897951F71F80CDDA92F5FD785 (CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___certificateData0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___certificateData0;
		bool L_1;
		L_1 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[]) */, __this, L_0);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Networking.CertificateHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CertificateHandler_Dispose_mA33A9B76B93B8DF2FEB665A0AFB1C1E6933CFC43 (CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		CertificateHandler_Release_m53BEBE2D49365A90BABE06C0B357FFDD71D51D54(__this, NULL);
		__this->___m_Ptr_0 = (0);
	}

IL_0029:
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
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandler
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_back(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandler
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_pinvoke_cleanup(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandler
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com_back(const DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandler
IL2CPP_EXTERN_C void DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshal_com_cleanup(DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.DownloadHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Release_mE143BC893E5F52645B5CC99A1141F9EA830E0927 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) 
{
	typedef void (*DownloadHandler_Release_mE143BC893E5F52645B5CC99A1141F9EA830E0927_ftn) (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB*);
	static DownloadHandler_Release_mE143BC893E5F52645B5CC99A1141F9EA830E0927_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_Release_mE143BC893E5F52645B5CC99A1141F9EA830E0927_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler__ctor_m833275AC5FCAC0BFB4F2D5C1C0C7FD76416CE496 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandler::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Finalize_m21F7E76D39E0CBF30890C6A0C8EDBF049AFFBB14 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker0::Invoke(5 /* System.Void UnityEngine.Networking.DownloadHandler::Dispose() */, __this);
			goto IL_0013;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_Dispose_mD5D4CCF0C2DFF1CB57C9B3A0EF4213ECB9F8F607 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		DownloadHandler_Release_mE143BC893E5F52645B5CC99A1141F9EA830E0927(__this, NULL);
		__this->___m_Ptr_0 = (0);
	}

IL_0029:
	{
		return;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(7 /* System.Byte[] UnityEngine.Networking.DownloadHandler::GetData() */, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String UnityEngine.Networking.DownloadHandler::GetText() */, __this);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandler::GetNativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF DownloadHandler_GetNativeData_m884DE3A326286BFE7B26098CD55D6DCD7D146E23 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) 
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF));
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0 = V_0;
		V_1 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_1 = V_1;
		return L_1;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DownloadHandler_GetData_mCAAC65F3AB3352C789E169EB7D9C7C75BEA74BAC (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = DownloadHandler_InternalGetByteArray_mED0493B669A60197682B98D7112F93DA7E822C08(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.Networking.DownloadHandler::GetText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_GetText_m19ABD4540E4BE6A4D4340933E01D5DE687020E85 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9261CD83E770034D4BDBB7D3907F4648D8ED4E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	String_t* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_0;
		L_0 = VirtualFuncInvoker0< NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF >::Invoke(6 /* Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandler::GetNativeData() */, __this);
		V_0 = L_0;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081((&V_0), NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_2;
		L_2 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_0))->___m_Length_1);
		G_B3_0 = ((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_4 = V_0;
		void* L_5;
		L_5 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9261CD83E770034D4BDBB7D3907F4648D8ED4E6(L_4, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9261CD83E770034D4BDBB7D3907F4648D8ED4E6_RuntimeMethod_var);
		int32_t L_6;
		L_6 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&V_0))->___m_Length_1);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_7;
		L_7 = DownloadHandler_GetTextEncoder_m1D26E8E7DE1CC2FA00EF56F1741B1DDAE4885BF5(__this, NULL);
		String_t* L_8;
		L_8 = String_CreateString_mA014E75717E6CE25BA9D641971AD637F70532339(NULL, (int8_t*)L_5, 0, L_6, L_7, NULL);
		V_2 = L_8;
		goto IL_0047;
	}

IL_003f:
	{
		V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0047;
	}

IL_0047:
	{
		String_t* L_9 = V_2;
		return L_9;
	}
}
// System.Text.Encoding UnityEngine.Networking.DownloadHandler::GetTextEncoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* DownloadHandler_GetTextEncoder_m1D26E8E7DE1CC2FA00EF56F1741B1DDAE4885BF5 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CE7A1E1E42333BF53E138868B7E6871FD1FC571);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	bool V_8 = false;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* V_9 = NULL;
	ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* V_10 = NULL;
	NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0;
		L_0 = DownloadHandler_GetContentType_m678AE10691E33BEE69FFFDB02CACA8AD8AAADDDC(__this, NULL);
		V_0 = L_0;
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_1, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00e7;
		}
	}
	{
		String_t* L_4 = V_0;
		int32_t L_5;
		L_5 = String_IndexOf_m490810CB7ADA9230AC0F8D78E213A8EFED129F55(L_4, _stringLiteral5CE7A1E1E42333BF53E138868B7E6871FD1FC571, 5, NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		V_3 = (bool)((((int32_t)L_6) > ((int32_t)(-1)))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_00e6;
		}
	}
	{
		String_t* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10;
		L_10 = String_IndexOf_m15B90A59047584420D227EE3A7EAC0C5EAF676F4(L_8, ((int32_t)61), L_9, NULL);
		V_4 = L_10;
		int32_t L_11 = V_4;
		V_5 = (bool)((((int32_t)L_11) > ((int32_t)(-1)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_13 = V_0;
		int32_t L_14 = V_4;
		String_t* L_15;
		L_15 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_13, ((int32_t)il2cpp_codegen_add(L_14, 1)), NULL);
		String_t* L_16;
		L_16 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_15, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = L_17;
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)39));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = L_18;
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)34));
		String_t* L_20;
		L_20 = String_Trim_m81BD35659E6F89DDD56816975E6E05390D023FE5(L_16, L_19, NULL);
		String_t* L_21;
		L_21 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_20, NULL);
		V_6 = L_21;
		String_t* L_22 = V_6;
		int32_t L_23;
		L_23 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_22, ((int32_t)59), NULL);
		V_7 = L_23;
		int32_t L_24 = V_7;
		V_8 = (bool)((((int32_t)L_24) > ((int32_t)(-1)))? 1 : 0);
		bool L_25 = V_8;
		if (!L_25)
		{
			goto IL_0099;
		}
	}
	{
		String_t* L_26 = V_6;
		int32_t L_27 = V_7;
		String_t* L_28;
		L_28 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_26, 0, L_27, NULL);
		V_6 = L_28;
	}

IL_0099:
	{
	}
	try
	{// begin try (depth: 1)
		String_t* L_29 = V_6;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_30;
		L_30 = Encoding_GetEncoding_mBF5A2BA804B4917644BBEC5A4230D0854236D8FE(L_29, NULL);
		V_9 = L_30;
		goto IL_00f0;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a6;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c5;
		}
		throw e;
	}

CATCH_00a6:
	{// begin catch(System.ArgumentException)
		V_10 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));
		String_t* L_31 = V_6;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_32 = V_10;
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_32);
		String_t* L_34;
		L_34 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8DA696190A9052B3303D45C87CA50BEDCFA7494C)), L_31, L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_34, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e4;
	}// end catch (depth: 1)

CATCH_00c5:
	{// begin catch(System.NotSupportedException)
		V_11 = ((NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)IL2CPP_GET_ACTIVE_EXCEPTION(NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*));
		String_t* L_35 = V_6;
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_36 = V_11;
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_36);
		String_t* L_38;
		L_38 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8DA696190A9052B3303D45C87CA50BEDCFA7494C)), L_35, L_37, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_38, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e4;
	}// end catch (depth: 1)

IL_00e4:
	{
	}

IL_00e5:
	{
	}

IL_00e6:
	{
	}

IL_00e7:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_39;
		L_39 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		V_9 = L_39;
		goto IL_00f0;
	}

IL_00f0:
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_40 = V_9;
		return L_40;
	}
}
// System.String UnityEngine.Networking.DownloadHandler::GetContentType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_GetContentType_m678AE10691E33BEE69FFFDB02CACA8AD8AAADDDC (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) 
{
	typedef String_t* (*DownloadHandler_GetContentType_m678AE10691E33BEE69FFFDB02CACA8AD8AAADDDC_ftn) (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB*);
	static DownloadHandler_GetContentType_m678AE10691E33BEE69FFFDB02CACA8AD8AAADDDC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_GetContentType_m678AE10691E33BEE69FFFDB02CACA8AD8AAADDDC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::GetContentType()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.DownloadHandler::ReceiveContentLengthHeader(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_ReceiveContentLengthHeader_m545073C4FB5AB9BB6640D24FC2F32070E5FE3F17 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, uint64_t ___contentLength0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___contentLength0;
		VirtualActionInvoker1< int32_t >::Invoke(10 /* System.Void UnityEngine.Networking.DownloadHandler::ReceiveContentLength(System.Int32) */, __this, ((int32_t)L_0));
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandler::ReceiveContentLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_ReceiveContentLength_m058DE0B56C3EBE8ECE3F9570852024EE2A84DE4F (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, int32_t ___contentLength0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Byte* UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* DownloadHandler_InternalGetByteArray_m02B1944EBB84D631395B821D92ED2C09658010C0 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___dh0, int32_t* ___length1, const RuntimeMethod* method) 
{
	typedef uint8_t* (*DownloadHandler_InternalGetByteArray_m02B1944EBB84D631395B821D92ED2C09658010C0_ftn) (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB*, int32_t*);
	static DownloadHandler_InternalGetByteArray_m02B1944EBB84D631395B821D92ED2C09658010C0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_InternalGetByteArray_m02B1944EBB84D631395B821D92ED2C09658010C0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler,System.Int32&)");
	uint8_t* icallRetVal = _il2cpp_icall_func(___dh0, ___length1);
	return icallRetVal;
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DownloadHandler_InternalGetByteArray_mED0493B669A60197682B98D7112F93DA7E822C08 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___dh0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_ToArray_m2E1BCF853BB72AAB8C219A18582F0AB2FA05CF1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_0 = ___dh0;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_1;
		L_1 = VirtualFuncInvoker0< NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF >::Invoke(6 /* Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandler::GetNativeData() */, L_0);
		V_0 = L_1;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081((&V_0), NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = NativeArray_1_ToArray_m2E1BCF853BB72AAB8C219A18582F0AB2FA05CF1F((&V_0), NativeArray_1_ToArray_m2E1BCF853BB72AAB8C219A18582F0AB2FA05CF1F_RuntimeMethod_var);
		V_2 = L_4;
		goto IL_0021;
	}

IL_001d:
	{
		V_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		goto IL_0021;
	}

IL_0021:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_2;
		return L_5;
	}
}
// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandler::InternalGetNativeArray(UnityEngine.Networking.DownloadHandler,Unity.Collections.NativeArray`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF DownloadHandler_InternalGetNativeArray_mB34E4B16B70C65D733749180F8F36B6787B6A9B0 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___dh0, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___nativeArray1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_0 = ___dh0;
		uint8_t* L_1;
		L_1 = DownloadHandler_InternalGetByteArray_m02B1944EBB84D631395B821D92ED2C09658010C0(L_0, (&V_0), NULL);
		V_1 = L_1;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_2 = ___nativeArray1;
		bool L_3;
		L_3 = NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081(L_2, NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_5 = ___nativeArray1;
		int32_t L_6;
		L_6 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_5)->___m_Length_1);
		int32_t L_7 = V_0;
		V_3 = (bool)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_002d;
		}
	}
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_9 = ___nativeArray1;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_10 = (*(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*)L_9);
		V_4 = L_10;
		goto IL_0048;
	}

IL_002d:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_11 = ___nativeArray1;
		DownloadHandler_DisposeNativeArray_m8151B42296788E932BC35B4D59711499C33D28CF(L_11, NULL);
	}

IL_0035:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_12 = ___nativeArray1;
		uint8_t* L_13 = V_1;
		int32_t L_14 = V_0;
		DownloadHandler_CreateNativeArrayForNativeData_m2ACA1D74567D06D6CE11278CBB48B01C022AF100(L_12, L_13, L_14, NULL);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_15 = ___nativeArray1;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_16 = (*(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*)L_15);
		V_4 = L_16;
		goto IL_0048;
	}

IL_0048:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_17 = V_4;
		return L_17;
	}
}
// System.Void UnityEngine.Networking.DownloadHandler::DisposeNativeArray(Unity.Collections.NativeArray`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_DisposeNativeArray_m8151B42296788E932BC35B4D59711499C33D28CF (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_0 = ___data0;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081(L_0, NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0017;
	}

IL_0010:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_3 = ___data0;
		il2cpp_codegen_initobj(L_3, sizeof(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF));
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandler::CreateNativeArrayForNativeData(Unity.Collections.NativeArray`1<System.Byte>&,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandler_CreateNativeArrayForNativeData_m2ACA1D74567D06D6CE11278CBB48B01C022AF100 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___data0, uint8_t* ___bytes1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m43F0AE90A986A434C9B62B82562A021E0B5065C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_0 = ___data0;
		uint8_t* L_1 = ___bytes1;
		int32_t L_2 = ___length2;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_3;
		L_3 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m43F0AE90A986A434C9B62B82562A021E0B5065C0((void*)L_1, L_2, 4, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m43F0AE90A986A434C9B62B82562A021E0B5065C0_RuntimeMethod_var);
		*(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF*)L_0 = L_3;
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
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke(const DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974& unmarshaled, DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_pinvoke& marshaled)
{
	marshaled.___m_NativeData_1 = unmarshaled.___m_NativeData_1;
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke_back(const DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_pinvoke& marshaled, DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974& unmarshaled)
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF unmarshaledm_NativeData_temp_0;
	memset((&unmarshaledm_NativeData_temp_0), 0, sizeof(unmarshaledm_NativeData_temp_0));
	unmarshaledm_NativeData_temp_0 = marshaled.___m_NativeData_1;
	unmarshaled.___m_NativeData_1 = unmarshaledm_NativeData_temp_0;
	intptr_t unmarshaledm_Ptr_temp_1;
	memset((&unmarshaledm_Ptr_temp_1), 0, sizeof(unmarshaledm_Ptr_temp_1));
	unmarshaledm_Ptr_temp_1 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_pinvoke_cleanup(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_com(const DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974& unmarshaled, DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_com& marshaled)
{
	marshaled.___m_NativeData_1 = unmarshaled.___m_NativeData_1;
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_com_back(const DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_com& marshaled, DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974& unmarshaled)
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF unmarshaledm_NativeData_temp_0;
	memset((&unmarshaledm_NativeData_temp_0), 0, sizeof(unmarshaledm_NativeData_temp_0));
	unmarshaledm_NativeData_temp_0 = marshaled.___m_NativeData_1;
	unmarshaled.___m_NativeData_1 = unmarshaledm_NativeData_temp_0;
	intptr_t unmarshaledm_Ptr_temp_1;
	memset((&unmarshaledm_Ptr_temp_1), 0, sizeof(unmarshaledm_Ptr_temp_1));
	unmarshaledm_Ptr_temp_1 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
IL2CPP_EXTERN_C void DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshal_com_cleanup(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_com& marshaled)
{
}
// System.IntPtr UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DownloadHandlerBuffer_Create_mF94072BAE4A019B4212CBA5C31B704B886457B3E (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* ___obj0, const RuntimeMethod* method) 
{
	typedef intptr_t (*DownloadHandlerBuffer_Create_mF94072BAE4A019B4212CBA5C31B704B886457B3E_ftn) (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*);
	static DownloadHandlerBuffer_Create_mF94072BAE4A019B4212CBA5C31B704B886457B3E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerBuffer_Create_mF94072BAE4A019B4212CBA5C31B704B886457B3E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)");
	intptr_t icallRetVal = _il2cpp_icall_func(___obj0);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::InternalCreateBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer_InternalCreateBuffer_mB2AD693185110CBED1FDA8748627DFC51E40A053 (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0;
		L_0 = DownloadHandlerBuffer_Create_mF94072BAE4A019B4212CBA5C31B704B886457B3E(__this, NULL);
		((DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB*)__this)->___m_Ptr_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) 
{
	{
		DownloadHandler__ctor_m833275AC5FCAC0BFB4F2D5C1C0C7FD76416CE496(__this, NULL);
		DownloadHandlerBuffer_InternalCreateBuffer_mB2AD693185110CBED1FDA8748627DFC51E40A053(__this, NULL);
		return;
	}
}
// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerBuffer::GetNativeData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF DownloadHandlerBuffer_GetNativeData_m0CA5C7DDC84622499CFED57069526BCDD240C28F (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) 
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_0 = (&__this->___m_NativeData_1);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_1;
		L_1 = DownloadHandler_InternalGetNativeArray_mB34E4B16B70C65D733749180F8F36B6787B6A9B0(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer_Dispose_m5B47B0183194D920B76BDC9001C3FE81A73D9D39 (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) 
{
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_0 = (&__this->___m_NativeData_1);
		DownloadHandler_DisposeNativeArray_m8151B42296788E932BC35B4D59711499C33D28CF(L_0, NULL);
		DownloadHandler_Dispose_mD5D4CCF0C2DFF1CB57C9B3A0EF4213ECB9F8F607(__this, NULL);
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
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_back(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_pinvoke_cleanup(UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com_back(const UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6& unmarshaled)
{
	intptr_t unmarshaledm_Ptr_temp_0;
	memset((&unmarshaledm_Ptr_temp_0), 0, sizeof(unmarshaledm_Ptr_temp_0));
	unmarshaledm_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandler
IL2CPP_EXTERN_C void UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshal_com_cleanup(UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UploadHandler::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Release_mBCD6EDAAC00B5051FDDE2D9E3395419C2906224B (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* __this, const RuntimeMethod* method) 
{
	typedef void (*UploadHandler_Release_mBCD6EDAAC00B5051FDDE2D9E3395419C2906224B_ftn) (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6*);
	static UploadHandler_Release_mBCD6EDAAC00B5051FDDE2D9E3395419C2906224B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UploadHandler_Release_mBCD6EDAAC00B5051FDDE2D9E3395419C2906224B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UploadHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.UploadHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler__ctor_mAA0BE0DDDBC45C053006C27E2AEEA68B3376B1FA (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Finalize_m8769706C9DA361C89C42AEFE2F3F11549AEF4E4A (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* __this, const RuntimeMethod* method) 
{
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker0::Invoke(5 /* System.Void UnityEngine.Networking.UploadHandler::Dispose() */, __this);
			goto IL_0013;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_Dispose_mA92AC689361199836EEABE182E13F9759A74D109 (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		UploadHandler_Release_mBCD6EDAAC00B5051FDDE2D9E3395419C2906224B(__this, NULL);
		__this->___m_Ptr_0 = (0);
	}

IL_0029:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::set_contentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_set_contentType_mEFF2D2512996DFFF2BFC013388B702078BDC73F3 (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		VirtualActionInvoker1< String_t* >::Invoke(6 /* System.Void UnityEngine.Networking.UploadHandler::SetContentType(System.String) */, __this, L_0);
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::SetContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_SetContentType_mEB13811B6C0441604E6023773B13A2EA68CDED9D (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* __this, String_t* ___newContentType0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___newContentType0;
		UploadHandler_InternalSetContentType_m66DDA9E69EB2843AB65623DB44B77BCA9EB4F8BB(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::InternalSetContentType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandler_InternalSetContentType_m66DDA9E69EB2843AB65623DB44B77BCA9EB4F8BB (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* __this, String_t* ___newContentType0, const RuntimeMethod* method) 
{
	typedef void (*UploadHandler_InternalSetContentType_m66DDA9E69EB2843AB65623DB44B77BCA9EB4F8BB_ftn) (UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6*, String_t*);
	static UploadHandler_InternalSetContentType_m66DDA9E69EB2843AB65623DB44B77BCA9EB4F8BB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UploadHandler_InternalSetContentType_m66DDA9E69EB2843AB65623DB44B77BCA9EB4F8BB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UploadHandler::InternalSetContentType(System.String)");
	_il2cpp_icall_func(__this, ___newContentType0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandlerRaw
IL2CPP_EXTERN_C void UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshal_pinvoke(const UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A& unmarshaled, UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Payload_1 = unmarshaled.___m_Payload_1;
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshal_pinvoke_back(const UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_pinvoke& marshaled, UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A& unmarshaled)
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF unmarshaledm_Payload_temp_0;
	memset((&unmarshaledm_Payload_temp_0), 0, sizeof(unmarshaledm_Payload_temp_0));
	unmarshaledm_Payload_temp_0 = marshaled.___m_Payload_1;
	unmarshaled.___m_Payload_1 = unmarshaledm_Payload_temp_0;
	intptr_t unmarshaledm_Ptr_temp_1;
	memset((&unmarshaledm_Ptr_temp_1), 0, sizeof(unmarshaledm_Ptr_temp_1));
	unmarshaledm_Ptr_temp_1 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandlerRaw
IL2CPP_EXTERN_C void UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshal_pinvoke_cleanup(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandlerRaw
IL2CPP_EXTERN_C void UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshal_com(const UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A& unmarshaled, UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_com& marshaled)
{
	marshaled.___m_Payload_1 = unmarshaled.___m_Payload_1;
	marshaled.___m_Ptr_0 = unmarshaled.___m_Ptr_0;
}
IL2CPP_EXTERN_C void UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshal_com_back(const UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_com& marshaled, UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A& unmarshaled)
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF unmarshaledm_Payload_temp_0;
	memset((&unmarshaledm_Payload_temp_0), 0, sizeof(unmarshaledm_Payload_temp_0));
	unmarshaledm_Payload_temp_0 = marshaled.___m_Payload_1;
	unmarshaled.___m_Payload_1 = unmarshaledm_Payload_temp_0;
	intptr_t unmarshaledm_Ptr_temp_1;
	memset((&unmarshaledm_Ptr_temp_1), 0, sizeof(unmarshaledm_Ptr_temp_1));
	unmarshaledm_Ptr_temp_1 = marshaled.___m_Ptr_0;
	unmarshaled.___m_Ptr_0 = unmarshaledm_Ptr_temp_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandlerRaw
IL2CPP_EXTERN_C void UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshal_com_cleanup(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_com& marshaled)
{
}
// System.IntPtr UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UploadHandlerRaw_Create_m6D9B9EF8DFD2215805544A32AA6D1AC97EBD07F2 (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* ___self0, uint8_t* ___data1, int32_t ___dataLength2, const RuntimeMethod* method) 
{
	typedef intptr_t (*UploadHandlerRaw_Create_m6D9B9EF8DFD2215805544A32AA6D1AC97EBD07F2_ftn) (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*, uint8_t*, int32_t);
	static UploadHandlerRaw_Create_m6D9B9EF8DFD2215805544A32AA6D1AC97EBD07F2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UploadHandlerRaw_Create_m6D9B9EF8DFD2215805544A32AA6D1AC97EBD07F2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UploadHandlerRaw::Create(UnityEngine.Networking.UploadHandlerRaw,System.Byte*,System.Int32)");
	intptr_t icallRetVal = _il2cpp_icall_func(___self0, ___data1, ___dataLength2);
	return icallRetVal;
}
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7 (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m647D47A76DC6BCB65EDACF5DE440431F6E2FE262_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* G_B3_0 = NULL;
	UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* G_B1_0 = NULL;
	UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* G_B2_0 = NULL;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* G_B4_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B3_0 = __this;
			goto IL_0011;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		G_B2_0 = G_B1_0;
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			G_B3_0 = G_B1_0;
			goto IL_0011;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeArray_1__ctor_m647D47A76DC6BCB65EDACF5DE440431F6E2FE262((&L_3), L_2, 4, /*hidden argument*/NativeArray_1__ctor_m647D47A76DC6BCB65EDACF5DE440431F6E2FE262_RuntimeMethod_var);
		G_B4_0 = L_3;
		G_B4_1 = G_B2_0;
		goto IL_001a;
	}

IL_0011:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF));
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_4 = V_0;
		G_B4_0 = L_4;
		G_B4_1 = G_B3_0;
	}

IL_001a:
	{
		UploadHandlerRaw__ctor_mF9F2BAB1D9987051714541669B3D22EC9DBDCFEF(G_B4_1, G_B4_0, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(Unity.Collections.NativeArray`1<System.Byte>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_mF9F2BAB1D9987051714541669B3D22EC9DBDCFEF (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___data0, bool ___transferOwnership1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9261CD83E770034D4BDBB7D3907F4648D8ED4E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		UploadHandler__ctor_mAA0BE0DDDBC45C053006C27E2AEEA68B3376B1FA(__this, NULL);
		bool L_0;
		L_0 = NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081((&___data0), NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___data0))->___m_Length_1);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		intptr_t L_3;
		L_3 = UploadHandlerRaw_Create_m6D9B9EF8DFD2215805544A32AA6D1AC97EBD07F2(__this, (uint8_t*)((uintptr_t)0), 0, NULL);
		((UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6*)__this)->___m_Ptr_0 = L_3;
		goto IL_005b;
	}

IL_0034:
	{
		bool L_4 = ___transferOwnership1;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_6 = ___data0;
		__this->___m_Payload_1 = L_6;
	}

IL_0041:
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_7 = ___data0;
		void* L_8;
		L_8 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9261CD83E770034D4BDBB7D3907F4648D8ED4E6(L_7, NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD9261CD83E770034D4BDBB7D3907F4648D8ED4E6_RuntimeMethod_var);
		int32_t L_9;
		L_9 = IL2CPP_NATIVEARRAY_GET_LENGTH(((&___data0))->___m_Length_1);
		intptr_t L_10;
		L_10 = UploadHandlerRaw_Create_m6D9B9EF8DFD2215805544A32AA6D1AC97EBD07F2(__this, (uint8_t*)L_8, L_9, NULL);
		((UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6*)__this)->___m_Ptr_0 = L_10;
	}

IL_005b:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandlerRaw::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw_Dispose_m7BC523C04CD5582382B23AF4FC019149DE328A1B (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_0 = (&__this->___m_Payload_1);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081(L_0, NativeArray_1_get_IsCreated_mD74FCA194584E6EA7916853B62401EB78240A081_RuntimeMethod_var);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* L_3 = (&__this->___m_Payload_1);
		NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA(L_3, NativeArray_1_Dispose_m8B0F342847ECB90EB814E1F6AA5BF7DC2F271AEA_RuntimeMethod_var);
	}

IL_001c:
	{
		UploadHandler_Dispose_mA92AC689361199836EEABE182E13F9759A74D109(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeDownloadHandlerOnDispose_m1BF640E233D231F8C0333864C0FE5D9E1DC2E7C6_inline (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeUploadHandlerOnDispose_mFE16234F005357FECF4A45F842D17C0C52B7CA6E_inline (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeCertificateHandlerOnDispose_m5EFCAF91A547716C4ACA5FB546E991B79E3D0E2A_inline (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_mA5E23BB2B931F6EF089C732D0E56E1B7F9FC1C54_inline (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeUploadHandlerOnDispose_m909CC9BEACAC26C87F44AA957B8F5E5CD10F5761_inline (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m5BF6519F2982ABA7912948690570F7729EDF25E9_inline (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation_set_webRequest_mB4B19873C06FD29078CB1E8BF05B0D077F0FF711_inline (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___value0, const RuntimeMethod* method) 
{
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___value0;
		__this->___U3CwebRequestU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwebRequestU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
	const uint32_t SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_0 = alloca(SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	// TKey
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// TValue
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
