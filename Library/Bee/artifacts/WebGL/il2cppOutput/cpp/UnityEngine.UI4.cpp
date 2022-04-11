﻿#include "pch-cpp.hpp"

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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_tA70AAFA2BD47CD0A094BCB586E2EA3E04C5F8916;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EventFunction_1_tEEF8CCAC607BFA538B3019F06479779298F41F21;
// System.Collections.Generic.IComparer`1<UnityEngine.RaycastHit>
struct IComparer_1_t4029032A6ED22A873F128CBE44DE2F52D471C18F;
// System.Collections.Generic.IComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct KeyCollection_t358D9D86EA73609D5A330DEAD2AFC492CC3882BA;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_t02E640552264E3DEAE676267B620815D33BCD0DF;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct List_1_t6D515F3BEDA0E1BF16E735CE960F740AB8ACBDD3;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct ValueCollection_tE4A676F89CE73FFF8A0046F16CEAF380F9A9CA41;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.EventSystems.PointerEventData>[]
struct EntryU5BU5D_t9F389575B9AE1F230AC15DBCA6E6007A112E6440;
// UnityEngine.EventSystems.BaseRaycaster[]
struct BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.EventSystems.IDropHandler
struct IDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35;
// UnityEngine.EventSystems.IEndDragHandler
struct IEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9;
// UnityEngine.EventSystems.IInitializePotentialDragHandler
struct IInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E;
// UnityEngine.EventSystems.IPointerClickHandler
struct IPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8;
// UnityEngine.EventSystems.IPointerDownHandler
struct IPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573;
// UnityEngine.EventSystems.IPointerExitHandler
struct IPointerExitHandler_t1AA3FC124CC77401AF27435A3D6E611F5C7A57EE;
// UnityEngine.EventSystems.IPointerUpHandler
struct IPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.EventSystems.Physics2DRaycaster
struct Physics2DRaycaster_t8E0FE5BD8DC96C60EE4BA334B0607B63A69761A7;
// UnityEngine.EventSystems.PhysicsRaycaster
struct PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556;
// UnityEngine.UI.ReflectionMethodsCache
struct ReflectionMethodsCache_t711B47CE11EA2092B94127FF8D3361AE2E4859F5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.EventSystems.TouchInputModule
struct TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer
struct RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1;
// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09;
// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback
struct GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C;
// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback
struct GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980;
// UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback
struct GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC;
// UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback
struct Raycast2DCallback_tC7E4C51859884370CFA01C0DD124F214F46E08E0;
// UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback
struct Raycast3DCallback_t6D90FA1FB092312B3B52812191581F209A9C2B4A;
// UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback
struct RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A;

IL2CPP_EXTERN_C RuntimeClass* Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t02E640552264E3DEAE676267B620815D33BCD0DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteShapeRenderer_tE998BB73CF661079736CCC23617E597AB230A4AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0F310FF3EBC19D65A536D81F5D8C7093E972DCA0;
IL2CPP_EXTERN_C String_t* _stringLiteral12BA26D2F44E032136B3146CB230F4F45C5D45DE;
IL2CPP_EXTERN_C String_t* _stringLiteral267CC871678BDBD934CBEA872CCB8F0C72D94E44;
IL2CPP_EXTERN_C String_t* _stringLiteral2A98949D28301C3B04EAD557512780C8D89A9607;
IL2CPP_EXTERN_C String_t* _stringLiteral2B2D9FCF87BC5B281C797365D6EE6332266A0B63;
IL2CPP_EXTERN_C String_t* _stringLiteral2E8BE7BC315CC297C7A3C2864B3A2ED1BD553384;
IL2CPP_EXTERN_C String_t* _stringLiteral30A589687C1FFF9D1706D115A0C664F2A49D9CEF;
IL2CPP_EXTERN_C String_t* _stringLiteral4B1F6E5C644F13999A134C243088737884A6B5D2;
IL2CPP_EXTERN_C String_t* _stringLiteral55489C2AE4CD8276F5514C1F5C0FC0E6C828316F;
IL2CPP_EXTERN_C String_t* _stringLiteral62105F6FE34556E3D1EE1FB639ABDA34F249420F;
IL2CPP_EXTERN_C String_t* _stringLiteral70F1769C72FCAF144F53009F7DA60ED467C29635;
IL2CPP_EXTERN_C String_t* _stringLiteral75B536F4B16F980DC1BE8BFB67378A32681C6F79;
IL2CPP_EXTERN_C String_t* _stringLiteral94A94F7BD0F52C17BB06F5A6BB4E316DC4B69DF8;
IL2CPP_EXTERN_C String_t* _stringLiteral9778C320E07EB86C3995D33DDB63310A2DC91762;
IL2CPP_EXTERN_C String_t* _stringLiteral9D2B27E9061DE91A9190184698F3F04E23827CA1;
IL2CPP_EXTERN_C String_t* _stringLiteralC10E23F5AEEE6BB98CA98C5F6720ED7A4B1DE089;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralED69593F1852661D74AD04003C30B937EE7310BF;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m0086D1B03EE8C6FBD96C163AE20CDA1C1094BAFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInParent_TisBaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832_mA869CA05E07609C8F435F1D779B138F3F2425F8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m5127D66D8AB03E7A21778DD898242C65F0EED034_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m939CB6214446517A933B0216F1C64AB86E291714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m69F94D82492DD2778B91F594B491223C02265150_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mEC2B6AFDB80F9344C20DF0D6A63925642A413615_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m4C9DA44082FBE5886FBFBFE66CBC89771C7971C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mAAB1B55CF77D247B61D04981A59169EFFE9E0AFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_ExecuteHierarchy_TisIPointerExitHandler_t1AA3FC124CC77401AF27435A3D6E611F5C7A57EE_m7C4DE7BA8EED60CCF5320435E9F061CB044FB664_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_mF257FA331CEC3705FC5A620859468C5B9AF0F756_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_m3C0AB91A07534AE98AC11E5B57F40BFF17544993_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mB18F35F748E39943F1C1AE45EE7D15EBDF39833D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_m9FC5FE3B9CC6D87743F88BD3B2B437653DF82673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_GetEventHandler_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m7F91F49169EDCAE4A288B31A5E5DE7600BEC5952_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m7B3F3A069FC951B1807EE83D8EE034137BBE248F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_ToString_m5F8161F26E20B830F794E3C0B87C0570D011D4AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m82AF5EAB1EA13F21CE5250B008E4EBCFEDAB6D53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m1F747311B8D41F5857768B1D6D5C51C43CA8BE4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m585A9E471D1C60EE46BA224A58947647F1E2B83B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m53B48CB7A08406A33847E0C3D9D7511DE8FB0D41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t9F389575B9AE1F230AC15DBCA6E6007A112E6440* ____entries_1;
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
	KeyCollection_t358D9D86EA73609D5A330DEAD2AFC492CC3882BA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE4A676F89CE73FFF8A0046F16CEAF380F9A9CA41* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_t02E640552264E3DEAE676267B620815D33BCD0DF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t02E640552264E3DEAE676267B620815D33BCD0DF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8292C421BBB00D7661DC07462822936152BAB446_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ___s_emptyArray_5;
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

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// UnityEngine.EventSystems.RaycasterManager
struct RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074  : public RuntimeObject
{
};

struct RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster> UnityEngine.EventSystems.RaycasterManager::s_Raycasters
	List_1_t02E640552264E3DEAE676267B620815D33BCD0DF* ___s_Raycasters_0;
};

// UnityEngine.UI.ReflectionMethodsCache
struct ReflectionMethodsCache_t711B47CE11EA2092B94127FF8D3361AE2E4859F5  : public RuntimeObject
{
	// UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback UnityEngine.UI.ReflectionMethodsCache::raycast3D
	Raycast3DCallback_t6D90FA1FB092312B3B52812191581F209A9C2B4A* ___raycast3D_0;
	// UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback UnityEngine.UI.ReflectionMethodsCache::raycast3DAll
	RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A* ___raycast3DAll_1;
	// UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback UnityEngine.UI.ReflectionMethodsCache::getRaycastNonAlloc
	GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC* ___getRaycastNonAlloc_2;
	// UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback UnityEngine.UI.ReflectionMethodsCache::raycast2D
	Raycast2DCallback_tC7E4C51859884370CFA01C0DD124F214F46E08E0* ___raycast2D_3;
	// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback UnityEngine.UI.ReflectionMethodsCache::getRayIntersectionAll
	GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C* ___getRayIntersectionAll_4;
	// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback UnityEngine.UI.ReflectionMethodsCache::getRayIntersectionAllNonAlloc
	GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980* ___getRayIntersectionAllNonAlloc_5;
};

struct ReflectionMethodsCache_t711B47CE11EA2092B94127FF8D3361AE2E4859F5_StaticFields
{
	// UnityEngine.UI.ReflectionMethodsCache UnityEngine.UI.ReflectionMethodsCache::s_ReflectionMethodsCache
	ReflectionMethodsCache_t711B47CE11EA2092B94127FF8D3361AE2E4859F5* ___s_ReflectionMethodsCache_6;
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

// UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer
struct RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1  : public RuntimeObject
{
};

struct RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1_StaticFields
{
	// UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer::instance
	RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1* ___instance_0;
};

// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503  : public RuntimeObject
{
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerInputModule/ButtonState::m_Button
	int32_t ___m_Button_0;
	// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData UnityEngine.EventSystems.PointerInputModule/ButtonState::m_EventData
	MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* ___m_EventData_1;
};

// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154  : public RuntimeObject
{
	// UnityEngine.EventSystems.PointerEventData/FramePressState UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::buttonState
	int32_t ___buttonState_0;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::buttonData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___buttonData_1;
};

// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState> UnityEngine.EventSystems.PointerInputModule/MouseState::m_TrackedButtons
	List_1_t6D515F3BEDA0E1BF16E735CE960F740AB8ACBDD3* ___m_TrackedButtons_0;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct KeyValuePair_2_tC51A92A69CB9B2F98A91443EE066E405EDCA4296 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_tE6E9A5118C80D71EA1E9325D404FAB06593F00C3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tE6E9A5118C80D71EA1E9325D404FAB06593F00C3__padding[12];
	};
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Enumerator_tAC6F215019B1EAEAEE81308CEBA6052DECD5EE7E 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tC51A92A69CB9B2F98A91443EE066E405EDCA4296 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t3A51899FBAA581553000230A6A0F92898553245F  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t3A51899FBAA581553000230A6A0F92898553245F_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::1C3635C112D556F4C11A4FE6BDE6ED3F126C4B2B546811BDB64DE7BDED3A05CB
	__StaticArrayInitTypeSizeU3D12_tE6E9A5118C80D71EA1E9325D404FAB06593F00C3 ___1C3635C112D556F4C11A4FE6BDE6ED3F126C4B2B546811BDB64DE7BDED3A05CB_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_tA70AAFA2BD47CD0A094BCB586E2EA3E04C5F8916  : public MulticastDelegate_t
{
};

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback
struct GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C  : public MulticastDelegate_t
{
};

// UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback
struct GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980  : public MulticastDelegate_t
{
};

// UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback
struct GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC  : public MulticastDelegate_t
{
};

// UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback
struct RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.U2D.SpriteShapeRenderer
struct SpriteShapeRenderer_tE998BB73CF661079736CCC23617E597AB230A4AC  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.Tilemaps.TilemapRenderer
struct TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.BaseInput
struct BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
};

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_DefaultInput_9;
};

// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::m_RootRaycaster
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___m_RootRaycaster_4;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.EventSystems.PhysicsRaycaster
struct PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD  : public BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832
{
	// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::m_EventCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_EventCamera_6;
	// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::m_EventMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_EventMask_7;
	// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::m_MaxRayIntersections
	int32_t ___m_MaxRayIntersections_8;
	// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::m_LastMaxRayIntersections
	int32_t ___m_LastMaxRayIntersections_9;
	// UnityEngine.RaycastHit[] UnityEngine.EventSystems.PhysicsRaycaster::m_Hits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___m_Hits_10;
};

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556  : public BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___m_MouseState_15;
};

// UnityEngine.EventSystems.Physics2DRaycaster
struct Physics2DRaycaster_t8E0FE5BD8DC96C60EE4BA334B0607B63A69761A7  : public PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD
{
	// UnityEngine.RaycastHit2D[] UnityEngine.EventSystems.Physics2DRaycaster::m_Hits
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___m_Hits_11;
};

// UnityEngine.EventSystems.TouchInputModule
struct TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C  : public PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556
{
	// UnityEngine.Vector2 UnityEngine.EventSystems.TouchInputModule::m_LastMousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMousePosition_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.TouchInputModule::m_MousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_MousePosition_17;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.TouchInputModule::m_InputPointerEvent
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___m_InputPointerEvent_18;
	// System.Boolean UnityEngine.EventSystems.TouchInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.EventSystems.BaseRaycaster[]
struct BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799  : public RuntimeArray
{
	ALIGN_FIELD (8) BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* m_Items[1];

	inline BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA m_Items[1];

	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 m_Items[1];

	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
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


// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExecuteEvents_Execute_TisIl2CppFullySharedGenericAny_m8218FA99743233AE0C5B3E4732115DA9E111C824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_tEEF8CCAC607BFA538B3019F06479779298F41F21* ___functor2, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_ExecuteHierarchy_TisIl2CppFullySharedGenericAny_m5C2885F126DCA7253DB4D60F5BDFC6E132C3D091_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_tEEF8CCAC607BFA538B3019F06479779298F41F21* ___callbackFunction2, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_GetEventHandler_TisIl2CppFullySharedGenericAny_mA12CB5D3FCBC13839918CE61FD3437F2C34E9D79_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) ;
// System.String System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyValuePair_2_ToString_m73A769E5C2C6956378D80913C3E9D8A68513F905_gshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInParent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Component_GetComponentsInParent_TisIl2CppFullySharedGenericAny_m7DBB34BAB9422139D82BE02CA44558059A74136E_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_mBB2E34F0F908431CBE87584E7729449B9E68C01E_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___array0, int32_t ___index1, int32_t ___length2, RuntimeObject* ___comparer3, const RuntimeMethod* method) ;

// System.Void UnityEngine.EventSystems.PointerInputModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerInputModule__ctor_mBF074492478BFC24F87EF2C941D6C11A8ACDAF11 (PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33 (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_isFocused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_get_isFocused_mB0BB5BE03F7203A06D2F351ACD28BA177079104A (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_dragging()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_dragging_mE0AD837F228E3830D4A74657AD3D47F53F6C87E9_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_endDragHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* ExecuteEvents_get_endDragHandler_m6F1588E368AD932233A5E6BCD8D7259E9C5B921E (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IEndDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_mF257FA331CEC3705FC5A620859468C5B9AF0F756 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_tEEF8CCAC607BFA538B3019F06479779298F41F21*, const RuntimeMethod*))ExecuteEvents_Execute_TisIl2CppFullySharedGenericAny_m8218FA99743233AE0C5B3E4732115DA9E111C824_gshared)(___target0, ___eventData1, (EventFunction_1_tEEF8CCAC607BFA538B3019F06479779298F41F21*)___functor2, method);
}
// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::get_input()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* BaseInputModule_get_input_mCB3F78528AA14A7AD7E957870DBB0152B4BF13FB (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::get_forceModuleActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchInputModule_get_forceModuleActive_m7200F7B6C80EDD69987615B8356B6B2497461FCA (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::ShouldActivateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseInputModule_ShouldActivateModule_m51B70F9097EF7FEB20B62D4D775F7FEA853185A1 (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.TouchInputModule::UseFakeInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchInputModule_UseFakeInput_m66A84384ADA044187F239B1CFC143C42E5E56774 (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.TouchInputModule::FakeTouches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchInputModule_FakeTouches_m264BF2C70234CD04B0162FE4CED673B1A77A84F9 (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchInputModule_ProcessTouchEvents_mBB28D85996F6280141E39A462BC35EF01373E514 (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.PointerInputModule/ButtonState UnityEngine.EventSystems.PointerInputModule/MouseState::GetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503* MouseState_GetButtonState_mD25E7D214B0499DBBE3B3E532CD7085C1A021E51 (MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* __this, int32_t ___button0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData UnityEngine.EventSystems.PointerInputModule/ButtonState::get_eventData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* ButtonState_get_eventData_m4767730784143F1DCE06B6138658A31CBC5E155F (ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::PressedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseButtonEventData_PressedThisFrame_mEE5DC95537AAEB346C57DCA85917E0701A44388D (MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_delta(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_delta_mD200AF7CCAEAD92D947091902AF864CB4ACE0F1D_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::ReleasedThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseButtonEventData_ReleasedThisFrame_m5AD4F06D1CA6E0ACD6E84EEFAD4FB112098AFD51 (MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchPress(UnityEngine.EventSystems.PointerEventData,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchInputModule_ProcessTouchPress_m1DC51E52E6B419F02626EB567A60411A0FCFA517 (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___pointerEvent0, bool ___pressed1, bool ___released2, const RuntimeMethod* method) ;
// UnityEngine.TouchType UnityEngine.Touch::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_type_mB505EF2DCF13160DFA0C6AAF406DCB4CBED20745 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.PointerInputModule::GetTouchPointerEventData(UnityEngine.Touch,System.Boolean&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* PointerInputModule_GetTouchPointerEventData_m55EBA8BD04214AAD8E98B9109D44610496A5B2E1 (PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556* __this, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 ___input0, bool* ___pressed1, bool* ___released2, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerInputModule::RemovePointerData(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerInputModule_RemovePointerData_m012713A1B4511855549793D6BA2B7998134B1BE9 (PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1 (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_eligibleForClick(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_dragging(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_dragging_m43982B3F95F05986F40A736914CFBC45D2A9BB8E_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_useDragThreshold(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_useDragThreshold_m63FE2034E4B240F1A0A902B1EB893B3DBA2D848B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pressPosition_m85544FBAB798DABE70067508294A6C4841A95379_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerPressRaycast_m55CA127474B4CBCA795A9C872B7630AAF766F852_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerInputModule::DeselectIfSelectionChanged(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerInputModule_DeselectIfSelectionChanged_m8F111DD2317E33C4F0498F651BC52BD5C984A95B (PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentOverGo0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___pointerEvent1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerEnter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.BaseInputModule::HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputModule_HandlePointerExitAndEnter_m0815F06EAF8F937916E0656D66A69844CB211298 (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___currentPointerData0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___newEnterTarget1, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerEnter(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerEnter_m2DA660C24CBDE9B83DF2B2D09D9AF0E94A770D17_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerDownHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* ExecuteEvents_get_pointerDownHandler_mF03E3A959BA9C0FA008013C1A02AE0AF6042DF44 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IPointerDownHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mAAB1B55CF77D247B61D04981A59169EFFE9E0AFD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* ___callbackFunction2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_tEEF8CCAC607BFA538B3019F06479779298F41F21*, const RuntimeMethod*))ExecuteEvents_ExecuteHierarchy_TisIl2CppFullySharedGenericAny_m5C2885F126DCA7253DB4D60F5BDFC6E132C3D091_gshared)(___root0, ___eventData1, (EventFunction_1_tEEF8CCAC607BFA538B3019F06479779298F41F21*)___callbackFunction2, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m7B3F3A069FC951B1807EE83D8EE034137BBE248F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))ExecuteEvents_GetEventHandler_TisIl2CppFullySharedGenericAny_mA12CB5D3FCBC13839918CE61FD3437F2C34E9D79_gshared)(___root0, method);
}
// System.Single UnityEngine.Time::get_unscaledTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledTime_m99A3C76AB74B5278B44A5E8B3498E51ABBF793CA (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_lastPress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_lastPress_m46720C62503214A44EE947679A8BA307BC2AEEDC_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.EventSystems.PointerEventData::get_clickTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerEventData_get_clickTime_m5ABE0298E8CEF28B6BD7E750E940756CD78AB96E_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_clickCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_clickCount_m3977011C09DB9F904B1AAC3708B821B8D6AC0F9F_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickCount(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_clickCount_m0A87C2C367987492F310786DC9C3DF1616EA4D49_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickTime(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_clickTime_m93D27EB35F490AC9100369A23002F09148F85996_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPress(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData_set_pointerPress_m51241AAA6E5F87ADEBBB8DB7D4452CE45200BEE8 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_rawPointerPress(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_rawPointerPress_mEEC4E3C7CD00F1DDCD3DA98DA5837E71BB8455E3_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::GetEventHandler<UnityEngine.EventSystems.IDragHandler>(UnityEngine.GameObject)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_GetEventHandler_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m7F91F49169EDCAE4A288B31A5E5DE7600BEC5952 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))ExecuteEvents_GetEventHandler_TisIl2CppFullySharedGenericAny_mA12CB5D3FCBC13839918CE61FD3437F2C34E9D79_gshared)(___root0, method);
}
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerDrag(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_initializePotentialDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD* ExecuteEvents_get_initializePotentialDrag_mD6C19D7BF028E6319B08CBF2BB7F0B8FDEEB03F1 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IInitializePotentialDragHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_m3C0AB91A07534AE98AC11E5B57F40BFF17544993 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_tEEF8CCAC607BFA538B3019F06479779298F41F21*, const RuntimeMethod*))ExecuteEvents_Execute_TisIl2CppFullySharedGenericAny_m8218FA99743233AE0C5B3E4732115DA9E111C824_gshared)(___target0, ___eventData1, (EventFunction_1_tEEF8CCAC607BFA538B3019F06479779298F41F21*)___functor2, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerPress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerPress_mEE815DDB67E40AA587090BCCE0E3CABA6405C50A (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerUpHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* ExecuteEvents_get_pointerUpHandler_mD03905CA3A384EC6AA81326758AB878087DC8C86 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerUpHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_m9FC5FE3B9CC6D87743F88BD3B2B437653DF82673 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_tEEF8CCAC607BFA538B3019F06479779298F41F21*, const RuntimeMethod*))ExecuteEvents_Execute_TisIl2CppFullySharedGenericAny_m8218FA99743233AE0C5B3E4732115DA9E111C824_gshared)(___target0, ___eventData1, (EventFunction_1_tEEF8CCAC607BFA538B3019F06479779298F41F21*)___functor2, method);
}
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_eligibleForClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_eligibleForClick_m4B01A1640C694FD7421BDFB19CF763BC85672C8E_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerClickHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* ExecuteEvents_get_pointerClickHandler_m4BF7FB241BD3AE488E0E1BE900666ECC2F2DFA78 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.ExecuteEvents::Execute<UnityEngine.EventSystems.IPointerClickHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline bool ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mB18F35F748E39943F1C1AE45EE7D15EBDF39833D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* ___functor2, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_tEEF8CCAC607BFA538B3019F06479779298F41F21*, const RuntimeMethod*))ExecuteEvents_Execute_TisIl2CppFullySharedGenericAny_m8218FA99743233AE0C5B3E4732115DA9E111C824_gshared)(___target0, ___eventData1, (EventFunction_1_tEEF8CCAC607BFA538B3019F06479779298F41F21*)___functor2, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::get_dropHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733* ExecuteEvents_get_dropHandler_m61ECC86CEAC77AA7C7E7793F6241D2413858354C (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IDropHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m4C9DA44082FBE5886FBFBFE66CBC89771C7971C5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733* ___callbackFunction2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_tEEF8CCAC607BFA538B3019F06479779298F41F21*, const RuntimeMethod*))ExecuteEvents_ExecuteHierarchy_TisIl2CppFullySharedGenericAny_m5C2885F126DCA7253DB4D60F5BDFC6E132C3D091_gshared)(___root0, ___eventData1, (EventFunction_1_tEEF8CCAC607BFA538B3019F06479779298F41F21*)___callbackFunction2, method);
}
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerExitHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventFunction_1_tA70AAFA2BD47CD0A094BCB586E2EA3E04C5F8916* ExecuteEvents_get_pointerExitHandler_m154D2E32DCA968A218B1AC5997E5D8F68D4E5E77 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.EventSystems.ExecuteEvents::ExecuteHierarchy<UnityEngine.EventSystems.IPointerExitHandler>(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData,UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ExecuteEvents_ExecuteHierarchy_TisIPointerExitHandler_t1AA3FC124CC77401AF27435A3D6E611F5C7A57EE_m7C4DE7BA8EED60CCF5320435E9F061CB044FB664 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___root0, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData1, EventFunction_1_tA70AAFA2BD47CD0A094BCB586E2EA3E04C5F8916* ___callbackFunction2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F*, EventFunction_1_tEEF8CCAC607BFA538B3019F06479779298F41F21*, const RuntimeMethod*))ExecuteEvents_ExecuteHierarchy_TisIl2CppFullySharedGenericAny_m5C2885F126DCA7253DB4D60F5BDFC6E132C3D091_gshared)(___root0, ___eventData1, (EventFunction_1_tEEF8CCAC607BFA538B3019F06479779298F41F21*)___callbackFunction2, method);
}
// System.Void UnityEngine.EventSystems.BaseInputModule::DeactivateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseInputModule_DeactivateModule_mAE698307DADBE4DE8A26BD3DE5F3F7E3D75B385D (BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerInputModule::ClearSelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerInputModule_ClearSelection_mC5852667E5B9CA97C2A4CAB3D7C907344511C1D2 (PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.PointerInputModule::GetLastPointerEventData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* PointerInputModule_GetLastPointerEventData_m6355023718EB2DCF6D9C226A57B63B70CCEECAB4 (PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::GetEnumerator()
inline Enumerator_tAC6F215019B1EAEAEE81308CEBA6052DECD5EE7E Dictionary_2_GetEnumerator_m5127D66D8AB03E7A21778DD898242C65F0EED034 (Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* __this, const RuntimeMethod* method)
{
	Enumerator_tAC6F215019B1EAEAEE81308CEBA6052DECD5EE7E il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::Dispose()
inline void Enumerator_Dispose_m939CB6214446517A933B0216F1C64AB86E291714 (Enumerator_tAC6F215019B1EAEAEE81308CEBA6052DECD5EE7E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::get_Current()
inline KeyValuePair_2_tC51A92A69CB9B2F98A91443EE066E405EDCA4296 Enumerator_get_Current_mEC2B6AFDB80F9344C20DF0D6A63925642A413615_inline (Enumerator_tAC6F215019B1EAEAEE81308CEBA6052DECD5EE7E* __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tC51A92A69CB9B2F98A91443EE066E405EDCA4296 il2cppRetVal;
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, const RuntimeMethod*))Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.EventSystems.PointerEventData>::ToString()
inline String_t* KeyValuePair_2_ToString_m5F8161F26E20B830F794E3C0B87C0570D011D4AD (KeyValuePair_2_tC51A92A69CB9B2F98A91443EE066E405EDCA4296* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, const RuntimeMethod*))KeyValuePair_2_ToString_m73A769E5C2C6956378D80913C3E9D8A68513F905_gshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.EventSystems.PointerEventData>::MoveNext()
inline bool Enumerator_MoveNext_m69F94D82492DD2778B91F594B491223C02265150 (Enumerator_tAC6F215019B1EAEAEE81308CEBA6052DECD5EE7E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Contains(T)
inline bool List_1_Contains_m1F747311B8D41F5857768B1D6D5C51C43CA8BE4C (List_1_t02E640552264E3DEAE676267B620815D33BCD0DF* __this, BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Add(T)
inline void List_1_Add_m82AF5EAB1EA13F21CE5250B008E4EBCFEDAB6D53_inline (List_1_t02E640552264E3DEAE676267B620815D33BCD0DF* __this, BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Remove(T)
inline bool List_1_Remove_m585A9E471D1C60EE46BA224A58947647F1E2B83B (List_1_t02E640552264E3DEAE676267B620815D33BCD0DF* __this, BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Remove_m9BCE8CEF94E6F2BF8624D65214FF4F3CA686D60C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
inline void List_1__ctor_m53B48CB7A08406A33847E0C3D9D7511DE8FB0D41 (List_1_t02E640552264E3DEAE676267B620815D33BCD0DF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T[] UnityEngine.Component::GetComponentsInParent<UnityEngine.EventSystems.BaseRaycaster>()
inline BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* Component_GetComponentsInParent_TisBaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832_mA869CA05E07609C8F435F1D779B138F3F2425F8C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInParent_TisIl2CppFullySharedGenericAny_m7DBB34BAB9422139D82BE02CA44558059A74136E_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, method);
	return (BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799*)il2cppRetVal;
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnEnable_m8989ABF5C038905A68E5536BED2E6FFAF8767FFC (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.RaycasterManager::AddRaycaster(UnityEngine.EventSystems.BaseRaycaster)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycasterManager_AddRaycaster_m02B34CF546A389947D4BA6BE4840ED8860F1D85D (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___baseRaycaster0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.RaycasterManager::RemoveRaycasters(UnityEngine.EventSystems.BaseRaycaster)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycasterManager_RemoveRaycasters_mE635817554BD615E5E8B94470792BF0E5B24FD58 (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___baseRaycaster0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnDisable_m18D5A0B93F65FB50F4D6CE8197EC07F3452C5DDE (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::OnCanvasHierarchyChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnCanvasHierarchyChanged_mCAC018CB33FA00E857288B64E3722226638A1229 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::OnTransformParentChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnTransformParentChanged_mAD56D3C6049A1746F00DC2643D1666F7DE921384 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour__ctor_m24C66A65DDD996E779871C6655CF11B871F11337 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsRaycaster__ctor_mB7D4BAC26DC219A10060B35498EE9D5F05AD0E80 (PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.PhysicsRaycaster::ComputeRayAndDistance(UnityEngine.EventSystems.PointerEventData,UnityEngine.Ray&,System.Int32&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhysicsRaycaster_ComputeRayAndDistance_mCFEFA9D83EC1E63393454E383FFFEF89E14C173B (PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* ___ray1, int32_t* ___eventDisplayIndex2, float* ___distanceToClipPlane3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_maxRayIntersections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhysicsRaycaster_get_maxRayIntersections_mA06D0B5E291BCF94AE1EF4ED7B68890F39395911 (PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.ReflectionMethodsCache UnityEngine.UI.ReflectionMethodsCache::get_Singleton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReflectionMethodsCache_t711B47CE11EA2092B94127FF8D3361AE2E4859F5* ReflectionMethodsCache_get_Singleton_m3DCE77AADA1986F8283BAA54B89FD83558E18FC1 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_finalEventMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhysicsRaycaster_get_finalEventMask_m20AD2327FE81B38A5853B23970A587EAA2ECCB1B (PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* __this, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D[] UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback::Invoke(UnityEngine.Ray,System.Single,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* GetRayIntersectionAllCallback_Invoke_m917AA4108EBDC724AFEF39BFD06A586B7461F497_inline (GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___r0, float ___f1, int32_t ___i2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback::Invoke(UnityEngine.Ray,UnityEngine.RaycastHit2D[],System.Single,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GetRayIntersectionAllNonAllocCallback_Invoke_mFAA36E9AF362DC72204EEF53B28DBFC3367D09A7_inline (GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___r0, RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___results1, float ___f2, int32_t ___i3, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.EventSystems.RaycastResult::set_gameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastResult_set_gameObject_mCFEB66C0E3F01AC5E55040FE8BEB16E40427BD9E (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RaycastHit2D_get_normal_m75F1EBDE347BACEB5A6A6AA72543C740806AB5F2 (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
inline int32_t List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Renderer_get_sortingLayerID_m3D7AE74F1B87099810CF969CB4520C85F9AE5F92 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Renderer_get_sortingOrder_m4CE7ADEEC8E2F28CC1D10B1D4091A10F8F1583FA (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::Add(T)
inline void List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_inline (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___item0, method);
}
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922 (int32_t ___intVal0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.BaseRaycaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRaycaster__ctor_m1B6A963368E54C1E450BE15FAF1AE082142A1683 (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_depth_mDF67FFF8ED61750467DFC4C6D8F236850AD1BB1D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_cullingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cullingMask_m6F5AFF8FB522F876D99E839BF77D8F27F26A1EF8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Display::RelativeMouseAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Display_RelativeMouseAt_m978A03E5176C10A4A5CD1DEE6088FF7C3FE6EBBF (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___inputMouseCoordinates0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Camera::get_targetDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_targetDisplay_m204A169C94EEABDB491FA5A77CC684146B10DF80 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Camera_get_pixelRect_m5F40F5C324EB252261F66962411EE08CC4BE39E7 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_mB1160CD465F3E9616AA4EED72AFFD611BD8D2B6B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit[] UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback::Invoke(UnityEngine.Ray,System.Single,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* RaycastAllCallback_Invoke_mB30319766AF5F0D5145A6C0AFFEA829A31A5D4B7_inline (RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___r0, float ___f1, int32_t ___i2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback::Invoke(UnityEngine.Ray,UnityEngine.RaycastHit[],System.Single,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GetRaycastNonAllocCallback_Invoke_m36411365E9622819DAB93D0BB0F169FEE99F07D9_inline (GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___r0, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___results1, float ___f2, int32_t ___i3, const RuntimeMethod* method) ;
// System.Void System.Array::Sort<UnityEngine.RaycastHit>(T[],System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
inline void Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m0086D1B03EE8C6FBD96C163AE20CDA1C1094BAFF (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___array0, int32_t ___index1, int32_t ___length2, RuntimeObject* ___comparer3, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisIl2CppFullySharedGenericAny_mBB2E34F0F908431CBE87584E7729449B9E68C01E_gshared)((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)___array0, ___index1, ___length2, (RuntimeObject*)___comparer3, method);
}
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F (float* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHitComparer__ctor_mAB0536EE515BF2BD1B29BE3B39E8BA9E9CFE97C3 (RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.RaycastResult::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastResult_get_isValid_m69957B97C041A9E3FAF4ECA82BB8099C9FA171CE (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.RaycastResult::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastResult_Clear_m0E9DA70AC69CF143CEA8428AFC5BA552F99643AE (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.EventSystems.RaycastResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RaycastResult_ToString_m0267000494B09783ABD507B9329ADB01FBBC5428 (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.EventSystems.TouchInputModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchInputModule__ctor_mCBE23B5A3A8CE1CD042A061D7E070B04A45E3075 (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, const RuntimeMethod* method) 
{
	{
		// protected TouchInputModule()
		PointerInputModule__ctor_mBF074492478BFC24F87EF2C941D6C11A8ACDAF11(__this, NULL);
		// {}
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.TouchInputModule::get_allowActivationOnStandalone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchInputModule_get_allowActivationOnStandalone_m2F9A65E10F7BE98D250CC3D6C9CABA3BCCE95995 (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return m_ForceModuleActive; }
		bool L_0 = __this->___m_ForceModuleActive_19;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_ForceModuleActive; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.EventSystems.TouchInputModule::set_allowActivationOnStandalone(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchInputModule_set_allowActivationOnStandalone_m5AB9798D9B6071B37FC67E0D1A81A58A0A59D7AD (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_ForceModuleActive = value; }
		bool L_0 = ___value0;
		__this->___m_ForceModuleActive_19 = L_0;
		// set { m_ForceModuleActive = value; }
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.TouchInputModule::get_forceModuleActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchInputModule_get_forceModuleActive_m7200F7B6C80EDD69987615B8356B6B2497461FCA (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return m_ForceModuleActive; }
		bool L_0 = __this->___m_ForceModuleActive_19;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_ForceModuleActive; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.EventSystems.TouchInputModule::set_forceModuleActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchInputModule_set_forceModuleActive_m32676A04010774CA55055EE93A05ED6C6388D2C2 (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_ForceModuleActive = value; }
		bool L_0 = ___value0;
		__this->___m_ForceModuleActive_19 = L_0;
		// set { m_ForceModuleActive = value; }
		return;
	}
}
// System.Void UnityEngine.EventSystems.TouchInputModule::UpdateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchInputModule_UpdateModule_mE6F4F74D770ACFEF3C46611C71CBE705342EA608 (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_mF257FA331CEC3705FC5A620859468C5B9AF0F756_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// if (!eventSystem.isFocused)
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_0;
		L_0 = BaseInputModule_get_eventSystem_m341B2378F61A58D5432906B9EE1E12265E2FAB33(__this, NULL);
		bool L_1;
		L_1 = EventSystem_get_isFocused_mB0BB5BE03F7203A06D2F351ACD28BA177079104A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		// if (m_InputPointerEvent != null && m_InputPointerEvent.pointerDrag != null && m_InputPointerEvent.dragging)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = __this->___m_InputPointerEvent_18;
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_4 = __this->___m_InputPointerEvent_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = __this->___m_InputPointerEvent_18;
		bool L_8;
		L_8 = PointerEventData_get_dragging_mE0AD837F228E3830D4A74657AD3D47F53F6C87E9_inline(L_7, NULL);
		G_B5_0 = ((int32_t)(L_8));
		goto IL_003d;
	}

IL_003c:
	{
		G_B5_0 = 0;
	}

IL_003d:
	{
		V_1 = (bool)G_B5_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		// ExecuteEvents.Execute(m_InputPointerEvent.pointerDrag, m_InputPointerEvent, ExecuteEvents.endDragHandler);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_10 = __this->___m_InputPointerEvent_18;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_10, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_12 = __this->___m_InputPointerEvent_18;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* L_13;
		L_13 = ExecuteEvents_get_endDragHandler_m6F1588E368AD932233A5E6BCD8D7259E9C5B921E(NULL);
		bool L_14;
		L_14 = ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_mF257FA331CEC3705FC5A620859468C5B9AF0F756(L_11, L_12, L_13, ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_mF257FA331CEC3705FC5A620859468C5B9AF0F756_RuntimeMethod_var);
	}

IL_005d:
	{
		// m_InputPointerEvent = null;
		__this->___m_InputPointerEvent_18 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InputPointerEvent_18), (void*)(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)NULL);
	}

IL_0065:
	{
		// m_LastMousePosition = m_MousePosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = __this->___m_MousePosition_17;
		__this->___m_LastMousePosition_16 = L_15;
		// m_MousePosition = input.mousePosition;
		BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* L_16;
		L_16 = BaseInputModule_get_input_mCB3F78528AA14A7AD7E957870DBB0152B4BF13FB(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = VirtualFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(26 /* UnityEngine.Vector2 UnityEngine.EventSystems.BaseInput::get_mousePosition() */, L_16);
		__this->___m_MousePosition_17 = L_17;
		// }
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.TouchInputModule::IsModuleSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchInputModule_IsModuleSupported_m795B5298EC90DC063A96147CF3B3287EC27C9799 (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return forceModuleActive || input.touchSupported;
		bool L_0;
		L_0 = TouchInputModule_get_forceModuleActive_m7200F7B6C80EDD69987615B8356B6B2497461FCA(__this, NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* L_1;
		L_1 = BaseInputModule_get_input_mCB3F78528AA14A7AD7E957870DBB0152B4BF13FB(__this, NULL);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(28 /* System.Boolean UnityEngine.EventSystems.BaseInput::get_touchSupported() */, L_1);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.EventSystems.TouchInputModule::ShouldActivateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchInputModule_ShouldActivateModule_m4B17231DE579430D27088D6592378FB7547ADBDC (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (!base.ShouldActivateModule())
		bool L_0;
		L_0 = BaseInputModule_ShouldActivateModule_m51B70F9097EF7FEB20B62D4D775F7FEA853185A1(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0075;
	}

IL_0012:
	{
		// if (m_ForceModuleActive)
		bool L_2 = __this->___m_ForceModuleActive_19;
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0075;
	}

IL_0020:
	{
		// if (UseFakeInput())
		bool L_4;
		L_4 = TouchInputModule_UseFakeInput_m66A84384ADA044187F239B1CFC143C42E5E56774(__this, NULL);
		V_3 = L_4;
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0064;
		}
	}
	{
		// bool wantsEnable = input.GetMouseButtonDown(0);
		BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* L_6;
		L_6 = BaseInputModule_get_input_mCB3F78528AA14A7AD7E957870DBB0152B4BF13FB(__this, NULL);
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, int32_t >::Invoke(23 /* System.Boolean UnityEngine.EventSystems.BaseInput::GetMouseButtonDown(System.Int32) */, L_6, 0);
		V_4 = L_7;
		// wantsEnable |= (m_MousePosition - m_LastMousePosition).sqrMagnitude > 0.0f;
		bool L_8 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = __this->___m_MousePosition_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = __this->___m_LastMousePosition_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_9, L_10, NULL);
		V_5 = L_11;
		float L_12;
		L_12 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_5), NULL);
		V_4 = (bool)((int32_t)((int32_t)L_8|((((float)L_12) > ((float)(0.0f)))? 1 : 0)));
		// return wantsEnable;
		bool L_13 = V_4;
		V_1 = L_13;
		goto IL_0075;
	}

IL_0064:
	{
		// return input.touchCount > 0;
		BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* L_14;
		L_14 = BaseInputModule_get_input_mCB3F78528AA14A7AD7E957870DBB0152B4BF13FB(__this, NULL);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 UnityEngine.EventSystems.BaseInput::get_touchCount() */, L_14);
		V_1 = (bool)((((int32_t)L_15) > ((int32_t)0))? 1 : 0);
		goto IL_0075;
	}

IL_0075:
	{
		// }
		bool L_16 = V_1;
		return L_16;
	}
}
// System.Boolean UnityEngine.EventSystems.TouchInputModule::UseFakeInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchInputModule_UseFakeInput_m66A84384ADA044187F239B1CFC143C42E5E56774 (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return !input.touchSupported;
		BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* L_0;
		L_0 = BaseInputModule_get_input_mCB3F78528AA14A7AD7E957870DBB0152B4BF13FB(__this, NULL);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(28 /* System.Boolean UnityEngine.EventSystems.BaseInput::get_touchSupported() */, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.EventSystems.TouchInputModule::Process()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchInputModule_Process_m3C0CB50AB7D9E92B519787F7742AE0976FB36841 (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (UseFakeInput())
		bool L_0;
		L_0 = TouchInputModule_UseFakeInput_m66A84384ADA044187F239B1CFC143C42E5E56774(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// FakeTouches();
		TouchInputModule_FakeTouches_m264BF2C70234CD04B0162FE4CED673B1A77A84F9(__this, NULL);
		goto IL_001b;
	}

IL_0014:
	{
		// ProcessTouchEvents();
		TouchInputModule_ProcessTouchEvents_mBB28D85996F6280141E39A462BC35EF01373E514(__this, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.TouchInputModule::FakeTouches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchInputModule_FakeTouches_m264BF2C70234CD04B0162FE4CED673B1A77A84F9 (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, const RuntimeMethod* method) 
{
	MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* V_0 = NULL;
	MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// var pointerData = GetMousePointerEventData(0);
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_0;
		L_0 = VirtualFuncInvoker1< MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09*, int32_t >::Invoke(28 /* UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::GetMousePointerEventData(System.Int32) */, __this, 0);
		V_0 = L_0;
		// var leftPressData = pointerData.GetButtonState(PointerEventData.InputButton.Left).eventData;
		MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* L_1 = V_0;
		ButtonState_tB671FC9C48F167DBC1CDAFEB53C373D8567AE503* L_2;
		L_2 = MouseState_GetButtonState_mD25E7D214B0499DBBE3B3E532CD7085C1A021E51(L_1, 0, NULL);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_3;
		L_3 = ButtonState_get_eventData_m4767730784143F1DCE06B6138658A31CBC5E155F(L_2, NULL);
		V_1 = L_3;
		// if (leftPressData.PressedThisFrame())
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_4 = V_1;
		bool L_5;
		L_5 = MouseButtonEventData_PressedThisFrame_mEE5DC95537AAEB346C57DCA85917E0701A44388D(L_4, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// leftPressData.buttonData.delta = Vector2.zero;
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_7 = V_1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_8 = L_7->___buttonData_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		PointerEventData_set_delta_mD200AF7CCAEAD92D947091902AF864CB4ACE0F1D_inline(L_8, L_9, NULL);
	}

IL_0031:
	{
		// ProcessTouchPress(leftPressData.buttonData, leftPressData.PressedThisFrame(), leftPressData.ReleasedThisFrame());
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_10 = V_1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_11 = L_10->___buttonData_1;
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_12 = V_1;
		bool L_13;
		L_13 = MouseButtonEventData_PressedThisFrame_mEE5DC95537AAEB346C57DCA85917E0701A44388D(L_12, NULL);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_14 = V_1;
		bool L_15;
		L_15 = MouseButtonEventData_ReleasedThisFrame_m5AD4F06D1CA6E0ACD6E84EEFAD4FB112098AFD51(L_14, NULL);
		TouchInputModule_ProcessTouchPress_m1DC51E52E6B419F02626EB567A60411A0FCFA517(__this, L_11, L_13, L_15, NULL);
		// if (input.GetMouseButton(0))
		BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* L_16;
		L_16 = BaseInputModule_get_input_mCB3F78528AA14A7AD7E957870DBB0152B4BF13FB(__this, NULL);
		bool L_17;
		L_17 = VirtualFuncInvoker1< bool, int32_t >::Invoke(25 /* System.Boolean UnityEngine.EventSystems.BaseInput::GetMouseButton(System.Int32) */, L_16, 0);
		V_3 = L_17;
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_0076;
		}
	}
	{
		// ProcessMove(leftPressData.buttonData);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_19 = V_1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_20 = L_19->___buttonData_1;
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(29 /* System.Void UnityEngine.EventSystems.PointerInputModule::ProcessMove(UnityEngine.EventSystems.PointerEventData) */, __this, L_20);
		// ProcessDrag(leftPressData.buttonData);
		MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* L_21 = V_1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_22 = L_21->___buttonData_1;
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(30 /* System.Void UnityEngine.EventSystems.PointerInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData) */, __this, L_22);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchInputModule_ProcessTouchEvents_mBB28D85996F6280141E39A462BC35EF01373E514 (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// for (int i = 0; i < input.touchCount; ++i)
		V_0 = 0;
		goto IL_006b;
	}

IL_0005:
	{
		// Touch touch = input.GetTouch(i);
		BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* L_0;
		L_0 = BaseInputModule_get_input_mCB3F78528AA14A7AD7E957870DBB0152B4BF13FB(__this, NULL);
		int32_t L_1 = V_0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = VirtualFuncInvoker1< Touch_t03E51455ED508492B3F278903A0114FA0E87B417, int32_t >::Invoke(30 /* UnityEngine.Touch UnityEngine.EventSystems.BaseInput::GetTouch(System.Int32) */, L_0, L_1);
		V_1 = L_2;
		// if (touch.type == TouchType.Indirect)
		int32_t L_3;
		L_3 = Touch_get_type_mB505EF2DCF13160DFA0C6AAF406DCB4CBED20745((&V_1), NULL);
		V_5 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// continue;
		goto IL_0067;
	}

IL_0025:
	{
		// var pointer = GetTouchPointerEventData(touch, out pressed, out released);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_5 = V_1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6;
		L_6 = PointerInputModule_GetTouchPointerEventData_m55EBA8BD04214AAD8E98B9109D44610496A5B2E1(__this, L_5, (&V_3), (&V_2), NULL);
		V_4 = L_6;
		// ProcessTouchPress(pointer, pressed, released);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = V_4;
		bool L_8 = V_3;
		bool L_9 = V_2;
		TouchInputModule_ProcessTouchPress_m1DC51E52E6B419F02626EB567A60411A0FCFA517(__this, L_7, L_8, L_9, NULL);
		// if (!released)
		bool L_10 = V_2;
		V_6 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		// ProcessMove(pointer);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_12 = V_4;
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(29 /* System.Void UnityEngine.EventSystems.PointerInputModule::ProcessMove(UnityEngine.EventSystems.PointerEventData) */, __this, L_12);
		// ProcessDrag(pointer);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_13 = V_4;
		VirtualActionInvoker1< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* >::Invoke(30 /* System.Void UnityEngine.EventSystems.PointerInputModule::ProcessDrag(UnityEngine.EventSystems.PointerEventData) */, __this, L_13);
		goto IL_0066;
	}

IL_005d:
	{
		// RemovePointerData(pointer);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_14 = V_4;
		PointerInputModule_RemovePointerData_m012713A1B4511855549793D6BA2B7998134B1BE9(__this, L_14, NULL);
	}

IL_0066:
	{
	}

IL_0067:
	{
		// for (int i = 0; i < input.touchCount; ++i)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_006b:
	{
		// for (int i = 0; i < input.touchCount; ++i)
		int32_t L_16 = V_0;
		BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* L_17;
		L_17 = BaseInputModule_get_input_mCB3F78528AA14A7AD7E957870DBB0152B4BF13FB(__this, NULL);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(29 /* System.Int32 UnityEngine.EventSystems.BaseInput::get_touchCount() */, L_17);
		V_7 = (bool)((((int32_t)L_16) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_7;
		if (L_19)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.TouchInputModule::ProcessTouchPress(UnityEngine.EventSystems.PointerEventData,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchInputModule_ProcessTouchPress_m1DC51E52E6B419F02626EB567A60411A0FCFA517 (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___pointerEvent0, bool ___pressed1, bool ___released2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m4C9DA44082FBE5886FBFBFE66CBC89771C7971C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mAAB1B55CF77D247B61D04981A59169EFFE9E0AFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_ExecuteHierarchy_TisIPointerExitHandler_t1AA3FC124CC77401AF27435A3D6E611F5C7A57EE_m7C4DE7BA8EED60CCF5320435E9F061CB044FB664_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_mF257FA331CEC3705FC5A620859468C5B9AF0F756_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_m3C0AB91A07534AE98AC11E5B57F40BFF17544993_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mB18F35F748E39943F1C1AE45EE7D15EBDF39833D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_m9FC5FE3B9CC6D87743F88BD3B2B437653DF82673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_GetEventHandler_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m7F91F49169EDCAE4A288B31A5E5DE7600BEC5952_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m7B3F3A069FC951B1807EE83D8EE034137BBE248F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	float V_8 = 0.0f;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	bool V_12 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	int32_t G_B18_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B28_0 = 0;
	{
		// var currentOverGo = pointerEvent.pointerCurrentRaycast.gameObject;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___pointerEvent0;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_1;
		L_1 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_0, NULL);
		V_1 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1((&V_1), NULL);
		V_0 = L_2;
		// if (pressed)
		bool L_3 = ___pressed1;
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_015f;
		}
	}
	{
		// pointerEvent.eligibleForClick = true;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = ___pointerEvent0;
		PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline(L_5, (bool)1, NULL);
		// pointerEvent.delta = Vector2.zero;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___pointerEvent0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		PointerEventData_set_delta_mD200AF7CCAEAD92D947091902AF864CB4ACE0F1D_inline(L_6, L_7, NULL);
		// pointerEvent.dragging = false;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_8 = ___pointerEvent0;
		PointerEventData_set_dragging_m43982B3F95F05986F40A736914CFBC45D2A9BB8E_inline(L_8, (bool)0, NULL);
		// pointerEvent.useDragThreshold = true;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_9 = ___pointerEvent0;
		PointerEventData_set_useDragThreshold_m63FE2034E4B240F1A0A902B1EB893B3DBA2D848B_inline(L_9, (bool)1, NULL);
		// pointerEvent.pressPosition = pointerEvent.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_10 = ___pointerEvent0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_11 = ___pointerEvent0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_11, NULL);
		PointerEventData_set_pressPosition_m85544FBAB798DABE70067508294A6C4841A95379_inline(L_10, L_12, NULL);
		// pointerEvent.pointerPressRaycast = pointerEvent.pointerCurrentRaycast;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_13 = ___pointerEvent0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_14 = ___pointerEvent0;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_15;
		L_15 = PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline(L_14, NULL);
		PointerEventData_set_pointerPressRaycast_m55CA127474B4CBCA795A9C872B7630AAF766F852_inline(L_13, L_15, NULL);
		// DeselectIfSelectionChanged(currentOverGo, pointerEvent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_17 = ___pointerEvent0;
		PointerInputModule_DeselectIfSelectionChanged_m8F111DD2317E33C4F0498F651BC52BD5C984A95B(__this, L_16, L_17, NULL);
		// if (pointerEvent.pointerEnter != currentOverGo)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_18 = ___pointerEvent0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline(L_18, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_19, L_20, NULL);
		V_5 = L_21;
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_0085;
		}
	}
	{
		// HandlePointerExitAndEnter(pointerEvent, currentOverGo);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_23 = ___pointerEvent0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_0;
		BaseInputModule_HandlePointerExitAndEnter_m0815F06EAF8F937916E0656D66A69844CB211298(__this, L_23, L_24, NULL);
		// pointerEvent.pointerEnter = currentOverGo;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_25 = ___pointerEvent0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_0;
		PointerEventData_set_pointerEnter_m2DA660C24CBDE9B83DF2B2D09D9AF0E94A770D17_inline(L_25, L_26, NULL);
	}

IL_0085:
	{
		// var newPressed = ExecuteEvents.ExecuteHierarchy(currentOverGo, pointerEvent, ExecuteEvents.pointerDownHandler);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_28 = ___pointerEvent0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t00024D26E9CCD074EEBC25568B0383863A4CF117* L_29;
		L_29 = ExecuteEvents_get_pointerDownHandler_mF03E3A959BA9C0FA008013C1A02AE0AF6042DF44(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mAAB1B55CF77D247B61D04981A59169EFFE9E0AFD(L_27, L_28, L_29, ExecuteEvents_ExecuteHierarchy_TisIPointerDownHandler_t42CC83619BB6295404D44090142F7726003CE573_mAAB1B55CF77D247B61D04981A59169EFFE9E0AFD_RuntimeMethod_var);
		V_3 = L_30;
		// if (newPressed == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_31, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_6 = L_32;
		bool L_33 = V_6;
		if (!L_33)
		{
			goto IL_00a6;
		}
	}
	{
		// newPressed = ExecuteEvents.GetEventHandler<IPointerClickHandler>(currentOverGo);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35;
		L_35 = ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m7B3F3A069FC951B1807EE83D8EE034137BBE248F(L_34, ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m7B3F3A069FC951B1807EE83D8EE034137BBE248F_RuntimeMethod_var);
		V_3 = L_35;
	}

IL_00a6:
	{
		// float time = Time.unscaledTime;
		float L_36;
		L_36 = Time_get_unscaledTime_m99A3C76AB74B5278B44A5E8B3498E51ABBF793CA(NULL);
		V_4 = L_36;
		// if (newPressed == pointerEvent.lastPress)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = V_3;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_38 = ___pointerEvent0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = PointerEventData_get_lastPress_m46720C62503214A44EE947679A8BA307BC2AEEDC_inline(L_38, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_37, L_39, NULL);
		V_7 = L_40;
		bool L_41 = V_7;
		if (!L_41)
		{
			goto IL_0103;
		}
	}
	{
		// var diffTime = time - pointerEvent.clickTime;
		float L_42 = V_4;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_43 = ___pointerEvent0;
		float L_44;
		L_44 = PointerEventData_get_clickTime_m5ABE0298E8CEF28B6BD7E750E940756CD78AB96E_inline(L_43, NULL);
		V_8 = ((float)il2cpp_codegen_subtract(L_42, L_44));
		// if (diffTime < 0.3f)
		float L_45 = V_8;
		V_9 = (bool)((((float)L_45) < ((float)(0.300000012f)))? 1 : 0);
		bool L_46 = V_9;
		if (!L_46)
		{
			goto IL_00ef;
		}
	}
	{
		// ++pointerEvent.clickCount;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_47 = ___pointerEvent0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_48 = L_47;
		int32_t L_49;
		L_49 = PointerEventData_get_clickCount_m3977011C09DB9F904B1AAC3708B821B8D6AC0F9F_inline(L_48, NULL);
		V_10 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = V_10;
		PointerEventData_set_clickCount_m0A87C2C367987492F310786DC9C3DF1616EA4D49_inline(L_48, L_50, NULL);
		goto IL_00f7;
	}

IL_00ef:
	{
		// pointerEvent.clickCount = 1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_51 = ___pointerEvent0;
		PointerEventData_set_clickCount_m0A87C2C367987492F310786DC9C3DF1616EA4D49_inline(L_51, 1, NULL);
	}

IL_00f7:
	{
		// pointerEvent.clickTime = time;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_52 = ___pointerEvent0;
		float L_53 = V_4;
		PointerEventData_set_clickTime_m93D27EB35F490AC9100369A23002F09148F85996_inline(L_52, L_53, NULL);
		goto IL_010d;
	}

IL_0103:
	{
		// pointerEvent.clickCount = 1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_54 = ___pointerEvent0;
		PointerEventData_set_clickCount_m0A87C2C367987492F310786DC9C3DF1616EA4D49_inline(L_54, 1, NULL);
	}

IL_010d:
	{
		// pointerEvent.pointerPress = newPressed;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_55 = ___pointerEvent0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = V_3;
		PointerEventData_set_pointerPress_m51241AAA6E5F87ADEBBB8DB7D4452CE45200BEE8(L_55, L_56, NULL);
		// pointerEvent.rawPointerPress = currentOverGo;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_57 = ___pointerEvent0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = V_0;
		PointerEventData_set_rawPointerPress_mEEC4E3C7CD00F1DDCD3DA98DA5837E71BB8455E3_inline(L_57, L_58, NULL);
		// pointerEvent.clickTime = time;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_59 = ___pointerEvent0;
		float L_60 = V_4;
		PointerEventData_set_clickTime_m93D27EB35F490AC9100369A23002F09148F85996_inline(L_59, L_60, NULL);
		// pointerEvent.pointerDrag = ExecuteEvents.GetEventHandler<IDragHandler>(currentOverGo);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_61 = ___pointerEvent0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63;
		L_63 = ExecuteEvents_GetEventHandler_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m7F91F49169EDCAE4A288B31A5E5DE7600BEC5952(L_62, ExecuteEvents_GetEventHandler_TisIDragHandler_t9FF2B3D79AB401D7E2485254973D15C0F117D00D_m7F91F49169EDCAE4A288B31A5E5DE7600BEC5952_RuntimeMethod_var);
		PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline(L_61, L_63, NULL);
		// if (pointerEvent.pointerDrag != null)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_64 = ___pointerEvent0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65;
		L_65 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_64, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_66;
		L_66 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_65, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_11 = L_66;
		bool L_67 = V_11;
		if (!L_67)
		{
			goto IL_0157;
		}
	}
	{
		// ExecuteEvents.Execute(pointerEvent.pointerDrag, pointerEvent, ExecuteEvents.initializePotentialDrag);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_68 = ___pointerEvent0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69;
		L_69 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_68, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_70 = ___pointerEvent0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t7DFDB0A0C9926E06BF7870695CD48A0533DFABAD* L_71;
		L_71 = ExecuteEvents_get_initializePotentialDrag_mD6C19D7BF028E6319B08CBF2BB7F0B8FDEEB03F1(NULL);
		bool L_72;
		L_72 = ExecuteEvents_Execute_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_m3C0AB91A07534AE98AC11E5B57F40BFF17544993(L_69, L_70, L_71, ExecuteEvents_Execute_TisIInitializePotentialDragHandler_tAFCBB3BBC98C928ED8D5703C39F4781446AB8E9E_m3C0AB91A07534AE98AC11E5B57F40BFF17544993_RuntimeMethod_var);
	}

IL_0157:
	{
		// m_InputPointerEvent = pointerEvent;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_73 = ___pointerEvent0;
		__this->___m_InputPointerEvent_18 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InputPointerEvent_18), (void*)L_73);
	}

IL_015f:
	{
		// if (released)
		bool L_74 = ___released2;
		V_12 = L_74;
		bool L_75 = V_12;
		if (!L_75)
		{
			goto IL_025d;
		}
	}
	{
		// ExecuteEvents.Execute(pointerEvent.pointerPress, pointerEvent, ExecuteEvents.pointerUpHandler);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_76 = ___pointerEvent0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77;
		L_77 = PointerEventData_get_pointerPress_mEE815DDB67E40AA587090BCCE0E3CABA6405C50A(L_76, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_78 = ___pointerEvent0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t919A3841A202FB8C678BC0172FAB7E2F79B88AD8* L_79;
		L_79 = ExecuteEvents_get_pointerUpHandler_mD03905CA3A384EC6AA81326758AB878087DC8C86(NULL);
		bool L_80;
		L_80 = ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_m9FC5FE3B9CC6D87743F88BD3B2B437653DF82673(L_77, L_78, L_79, ExecuteEvents_Execute_TisIPointerUpHandler_tB2D4D0ABEAFF77BE8D0159D638D85E1AF7BAF210_m9FC5FE3B9CC6D87743F88BD3B2B437653DF82673_RuntimeMethod_var);
		// var pointerUpHandler = ExecuteEvents.GetEventHandler<IPointerClickHandler>(currentOverGo);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82;
		L_82 = ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m7B3F3A069FC951B1807EE83D8EE034137BBE248F(L_81, ExecuteEvents_GetEventHandler_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_m7B3F3A069FC951B1807EE83D8EE034137BBE248F_RuntimeMethod_var);
		V_13 = L_82;
		// if (pointerEvent.pointerPress == pointerUpHandler && pointerEvent.eligibleForClick)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_83 = ___pointerEvent0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84;
		L_84 = PointerEventData_get_pointerPress_mEE815DDB67E40AA587090BCCE0E3CABA6405C50A(L_83, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = V_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_84, L_85, NULL);
		if (!L_86)
		{
			goto IL_019b;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_87 = ___pointerEvent0;
		bool L_88;
		L_88 = PointerEventData_get_eligibleForClick_m4B01A1640C694FD7421BDFB19CF763BC85672C8E_inline(L_87, NULL);
		G_B18_0 = ((int32_t)(L_88));
		goto IL_019c;
	}

IL_019b:
	{
		G_B18_0 = 0;
	}

IL_019c:
	{
		V_14 = (bool)G_B18_0;
		bool L_89 = V_14;
		if (!L_89)
		{
			goto IL_01b8;
		}
	}
	{
		// ExecuteEvents.Execute(pointerEvent.pointerPress, pointerEvent, ExecuteEvents.pointerClickHandler);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_90 = ___pointerEvent0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91;
		L_91 = PointerEventData_get_pointerPress_mEE815DDB67E40AA587090BCCE0E3CABA6405C50A(L_90, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_92 = ___pointerEvent0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t586168BFEFD0CF29A2B706B5411BF712BD73359E* L_93;
		L_93 = ExecuteEvents_get_pointerClickHandler_m4BF7FB241BD3AE488E0E1BE900666ECC2F2DFA78(NULL);
		bool L_94;
		L_94 = ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mB18F35F748E39943F1C1AE45EE7D15EBDF39833D(L_91, L_92, L_93, ExecuteEvents_Execute_TisIPointerClickHandler_t77341AA19DE37C26F5F619DE8BD28B70D5A2B5D8_mB18F35F748E39943F1C1AE45EE7D15EBDF39833D_RuntimeMethod_var);
		goto IL_01e4;
	}

IL_01b8:
	{
		// else if (pointerEvent.pointerDrag != null && pointerEvent.dragging)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_95 = ___pointerEvent0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96;
		L_96 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_95, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_97;
		L_97 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_96, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_97)
		{
			goto IL_01ce;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_98 = ___pointerEvent0;
		bool L_99;
		L_99 = PointerEventData_get_dragging_mE0AD837F228E3830D4A74657AD3D47F53F6C87E9_inline(L_98, NULL);
		G_B23_0 = ((int32_t)(L_99));
		goto IL_01cf;
	}

IL_01ce:
	{
		G_B23_0 = 0;
	}

IL_01cf:
	{
		V_15 = (bool)G_B23_0;
		bool L_100 = V_15;
		if (!L_100)
		{
			goto IL_01e4;
		}
	}
	{
		// ExecuteEvents.ExecuteHierarchy(currentOverGo, pointerEvent, ExecuteEvents.dropHandler);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_101 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_102 = ___pointerEvent0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_tB3864D36512C3A896DAC44E898E5D9E1A92CB733* L_103;
		L_103 = ExecuteEvents_get_dropHandler_m61ECC86CEAC77AA7C7E7793F6241D2413858354C(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_104;
		L_104 = ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m4C9DA44082FBE5886FBFBFE66CBC89771C7971C5(L_101, L_102, L_103, ExecuteEvents_ExecuteHierarchy_TisIDropHandler_t9F3B358BA4812886852E9AB85A653ABF73B9AA35_m4C9DA44082FBE5886FBFBFE66CBC89771C7971C5_RuntimeMethod_var);
	}

IL_01e4:
	{
		// pointerEvent.eligibleForClick = false;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_105 = ___pointerEvent0;
		PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline(L_105, (bool)0, NULL);
		// pointerEvent.pointerPress = null;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_106 = ___pointerEvent0;
		PointerEventData_set_pointerPress_m51241AAA6E5F87ADEBBB8DB7D4452CE45200BEE8(L_106, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// pointerEvent.rawPointerPress = null;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_107 = ___pointerEvent0;
		PointerEventData_set_rawPointerPress_mEEC4E3C7CD00F1DDCD3DA98DA5837E71BB8455E3_inline(L_107, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// if (pointerEvent.pointerDrag != null && pointerEvent.dragging)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_108 = ___pointerEvent0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_109;
		L_109 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_108, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_110;
		L_110 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_109, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_110)
		{
			goto IL_0212;
		}
	}
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_111 = ___pointerEvent0;
		bool L_112;
		L_112 = PointerEventData_get_dragging_mE0AD837F228E3830D4A74657AD3D47F53F6C87E9_inline(L_111, NULL);
		G_B28_0 = ((int32_t)(L_112));
		goto IL_0213;
	}

IL_0212:
	{
		G_B28_0 = 0;
	}

IL_0213:
	{
		V_16 = (bool)G_B28_0;
		bool L_113 = V_16;
		if (!L_113)
		{
			goto IL_022b;
		}
	}
	{
		// ExecuteEvents.Execute(pointerEvent.pointerDrag, pointerEvent, ExecuteEvents.endDragHandler);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_114 = ___pointerEvent0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_115;
		L_115 = PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline(L_114, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_116 = ___pointerEvent0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_t33BA7CA3F9202146F70BE77589CE24F7451C584C* L_117;
		L_117 = ExecuteEvents_get_endDragHandler_m6F1588E368AD932233A5E6BCD8D7259E9C5B921E(NULL);
		bool L_118;
		L_118 = ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_mF257FA331CEC3705FC5A620859468C5B9AF0F756(L_115, L_116, L_117, ExecuteEvents_Execute_TisIEndDragHandler_t9A93E4A27E7CEED446E5FE3DACF39B1A552C23A9_mF257FA331CEC3705FC5A620859468C5B9AF0F756_RuntimeMethod_var);
	}

IL_022b:
	{
		// pointerEvent.dragging = false;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_119 = ___pointerEvent0;
		PointerEventData_set_dragging_m43982B3F95F05986F40A736914CFBC45D2A9BB8E_inline(L_119, (bool)0, NULL);
		// pointerEvent.pointerDrag = null;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_120 = ___pointerEvent0;
		PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline(L_120, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// ExecuteEvents.ExecuteHierarchy(pointerEvent.pointerEnter, pointerEvent, ExecuteEvents.pointerExitHandler);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_121 = ___pointerEvent0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122;
		L_122 = PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline(L_121, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_123 = ___pointerEvent0;
		il2cpp_codegen_runtime_class_init_inline(ExecuteEvents_t74DCF8B83743EE2773ACF182344612A048E2CC59_il2cpp_TypeInfo_var);
		EventFunction_1_tA70AAFA2BD47CD0A094BCB586E2EA3E04C5F8916* L_124;
		L_124 = ExecuteEvents_get_pointerExitHandler_m154D2E32DCA968A218B1AC5997E5D8F68D4E5E77(NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125;
		L_125 = ExecuteEvents_ExecuteHierarchy_TisIPointerExitHandler_t1AA3FC124CC77401AF27435A3D6E611F5C7A57EE_m7C4DE7BA8EED60CCF5320435E9F061CB044FB664(L_122, L_123, L_124, ExecuteEvents_ExecuteHierarchy_TisIPointerExitHandler_t1AA3FC124CC77401AF27435A3D6E611F5C7A57EE_m7C4DE7BA8EED60CCF5320435E9F061CB044FB664_RuntimeMethod_var);
		// pointerEvent.pointerEnter = null;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_126 = ___pointerEvent0;
		PointerEventData_set_pointerEnter_m2DA660C24CBDE9B83DF2B2D09D9AF0E94A770D17_inline(L_126, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// m_InputPointerEvent = pointerEvent;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_127 = ___pointerEvent0;
		__this->___m_InputPointerEvent_18 = L_127;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InputPointerEvent_18), (void*)L_127);
	}

IL_025d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.TouchInputModule::DeactivateModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchInputModule_DeactivateModule_m7CF377DBC376C3EC560523E76514E9F47CCC9DEE (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, const RuntimeMethod* method) 
{
	{
		// base.DeactivateModule();
		BaseInputModule_DeactivateModule_mAE698307DADBE4DE8A26BD3DE5F3F7E3D75B385D(__this, NULL);
		// ClearSelection();
		PointerInputModule_ClearSelection_mC5852667E5B9CA97C2A4CAB3D7C907344511C1D2(__this, NULL);
		// }
		return;
	}
}
// System.String UnityEngine.EventSystems.TouchInputModule::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TouchInputModule_ToString_m1AD08DB012D85A33FC0EA3322D5AA5EB98CD1956 (TouchInputModule_t154B7CF685F02D5B9529572B1A96EBD75AAA945C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m5127D66D8AB03E7A21778DD898242C65F0EED034_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m939CB6214446517A933B0216F1C64AB86E291714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m69F94D82492DD2778B91F594B491223C02265150_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mEC2B6AFDB80F9344C20DF0D6A63925642A413615_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_ToString_m5F8161F26E20B830F794E3C0B87C0570D011D4AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55489C2AE4CD8276F5514C1F5C0FC0E6C828316F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9778C320E07EB86C3995D33DDB63310A2DC91762);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_2 = NULL;
	bool V_3 = false;
	Enumerator_tAC6F215019B1EAEAEE81308CEBA6052DECD5EE7E V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_tC51A92A69CB9B2F98A91443EE066E405EDCA4296 V_5;
	memset((&V_5), 0, sizeof(V_5));
	String_t* V_6 = NULL;
	StringBuilder_t* G_B2_0 = NULL;
	StringBuilder_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	StringBuilder_t* G_B3_1 = NULL;
	{
		// var sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// sb.AppendLine(UseFakeInput() ? "Input: Faked" : "Input: Touch");
		StringBuilder_t* L_1 = V_0;
		bool L_2;
		L_2 = TouchInputModule_UseFakeInput_m66A84384ADA044187F239B1CFC143C42E5E56774(__this, NULL);
		G_B1_0 = L_1;
		if (L_2)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		G_B3_0 = _stringLiteral55489C2AE4CD8276F5514C1F5C0FC0E6C828316F;
		G_B3_1 = G_B1_0;
		goto IL_001c;
	}

IL_0017:
	{
		G_B3_0 = _stringLiteral9778C320E07EB86C3995D33DDB63310A2DC91762;
		G_B3_1 = G_B2_0;
	}

IL_001c:
	{
		StringBuilder_t* L_3;
		L_3 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(G_B3_1, G_B3_0, NULL);
		// if (UseFakeInput())
		bool L_4;
		L_4 = TouchInputModule_UseFakeInput_m66A84384ADA044187F239B1CFC143C42E5E56774(__this, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		// var pointerData = GetLastPointerEventData(kMouseLeftId);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6;
		L_6 = PointerInputModule_GetLastPointerEventData_m6355023718EB2DCF6D9C226A57B63B70CCEECAB4(__this, (-1), NULL);
		V_2 = L_6;
		// if (pointerData != null)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = V_2;
		V_3 = (bool)((!(((RuntimeObject*)(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)L_7) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		// sb.AppendLine(pointerData.ToString());
		StringBuilder_t* L_9 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_10 = V_2;
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_9, L_11, NULL);
	}

IL_004a:
	{
		goto IL_0096;
	}

IL_004d:
	{
		// foreach (var pointerEventData in m_PointerData)
		Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* L_13 = ((PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556*)__this)->___m_PointerData_14;
		Enumerator_tAC6F215019B1EAEAEE81308CEBA6052DECD5EE7E L_14;
		L_14 = Dictionary_2_GetEnumerator_m5127D66D8AB03E7A21778DD898242C65F0EED034(L_13, Dictionary_2_GetEnumerator_m5127D66D8AB03E7A21778DD898242C65F0EED034_RuntimeMethod_var);
		V_4 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0086:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m939CB6214446517A933B0216F1C64AB86E291714((&V_4), Enumerator_Dispose_m939CB6214446517A933B0216F1C64AB86E291714_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007b_1;
			}

IL_005e_1:
			{
				// foreach (var pointerEventData in m_PointerData)
				KeyValuePair_2_tC51A92A69CB9B2F98A91443EE066E405EDCA4296 L_15;
				L_15 = Enumerator_get_Current_mEC2B6AFDB80F9344C20DF0D6A63925642A413615_inline((&V_4), Enumerator_get_Current_mEC2B6AFDB80F9344C20DF0D6A63925642A413615_RuntimeMethod_var);
				V_5 = L_15;
				// sb.AppendLine(pointerEventData.ToString());
				StringBuilder_t* L_16 = V_0;
				String_t* L_17;
				L_17 = KeyValuePair_2_ToString_m5F8161F26E20B830F794E3C0B87C0570D011D4AD((&V_5), KeyValuePair_2_ToString_m5F8161F26E20B830F794E3C0B87C0570D011D4AD_RuntimeMethod_var);
				StringBuilder_t* L_18;
				L_18 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_16, L_17, NULL);
			}

IL_007b_1:
			{
				// foreach (var pointerEventData in m_PointerData)
				bool L_19;
				L_19 = Enumerator_MoveNext_m69F94D82492DD2778B91F594B491223C02265150((&V_4), Enumerator_MoveNext_m69F94D82492DD2778B91F594B491223C02265150_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_005e_1;
				}
			}
			{
				goto IL_0095;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0095:
	{
	}

IL_0096:
	{
		// return sb.ToString();
		StringBuilder_t* L_20 = V_0;
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		V_6 = L_21;
		goto IL_00a0;
	}

IL_00a0:
	{
		// }
		String_t* L_22 = V_6;
		return L_22;
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
// System.Void UnityEngine.EventSystems.RaycasterManager::AddRaycaster(UnityEngine.EventSystems.BaseRaycaster)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycasterManager_AddRaycaster_m02B34CF546A389947D4BA6BE4840ED8860F1D85D (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___baseRaycaster0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m82AF5EAB1EA13F21CE5250B008E4EBCFEDAB6D53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m1F747311B8D41F5857768B1D6D5C51C43CA8BE4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (s_Raycasters.Contains(baseRaycaster))
		il2cpp_codegen_runtime_class_init_inline(RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var);
		List_1_t02E640552264E3DEAE676267B620815D33BCD0DF* L_0 = ((RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_StaticFields*)il2cpp_codegen_static_fields_for(RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var))->___s_Raycasters_0;
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_1 = ___baseRaycaster0;
		bool L_2;
		L_2 = List_1_Contains_m1F747311B8D41F5857768B1D6D5C51C43CA8BE4C(L_0, L_1, List_1_Contains_m1F747311B8D41F5857768B1D6D5C51C43CA8BE4C_RuntimeMethod_var);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// return;
		goto IL_001e;
	}

IL_0012:
	{
		// s_Raycasters.Add(baseRaycaster);
		il2cpp_codegen_runtime_class_init_inline(RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var);
		List_1_t02E640552264E3DEAE676267B620815D33BCD0DF* L_4 = ((RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_StaticFields*)il2cpp_codegen_static_fields_for(RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var))->___s_Raycasters_0;
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_5 = ___baseRaycaster0;
		List_1_Add_m82AF5EAB1EA13F21CE5250B008E4EBCFEDAB6D53_inline(L_4, L_5, List_1_Add_m82AF5EAB1EA13F21CE5250B008E4EBCFEDAB6D53_RuntimeMethod_var);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster> UnityEngine.EventSystems.RaycasterManager::GetRaycasters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t02E640552264E3DEAE676267B620815D33BCD0DF* RaycasterManager_GetRaycasters_mC8D21FE6FBC6EB9012B5561D8453DD75E6E2A34C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t02E640552264E3DEAE676267B620815D33BCD0DF* V_0 = NULL;
	{
		// return s_Raycasters;
		il2cpp_codegen_runtime_class_init_inline(RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var);
		List_1_t02E640552264E3DEAE676267B620815D33BCD0DF* L_0 = ((RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_StaticFields*)il2cpp_codegen_static_fields_for(RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var))->___s_Raycasters_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		List_1_t02E640552264E3DEAE676267B620815D33BCD0DF* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.EventSystems.RaycasterManager::RemoveRaycasters(UnityEngine.EventSystems.BaseRaycaster)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycasterManager_RemoveRaycasters_mE635817554BD615E5E8B94470792BF0E5B24FD58 (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___baseRaycaster0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m1F747311B8D41F5857768B1D6D5C51C43CA8BE4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m585A9E471D1C60EE46BA224A58947647F1E2B83B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!s_Raycasters.Contains(baseRaycaster))
		il2cpp_codegen_runtime_class_init_inline(RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var);
		List_1_t02E640552264E3DEAE676267B620815D33BCD0DF* L_0 = ((RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_StaticFields*)il2cpp_codegen_static_fields_for(RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var))->___s_Raycasters_0;
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_1 = ___baseRaycaster0;
		bool L_2;
		L_2 = List_1_Contains_m1F747311B8D41F5857768B1D6D5C51C43CA8BE4C(L_0, L_1, List_1_Contains_m1F747311B8D41F5857768B1D6D5C51C43CA8BE4C_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		goto IL_0021;
	}

IL_0015:
	{
		// s_Raycasters.Remove(baseRaycaster);
		il2cpp_codegen_runtime_class_init_inline(RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var);
		List_1_t02E640552264E3DEAE676267B620815D33BCD0DF* L_4 = ((RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_StaticFields*)il2cpp_codegen_static_fields_for(RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var))->___s_Raycasters_0;
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_5 = ___baseRaycaster0;
		bool L_6;
		L_6 = List_1_Remove_m585A9E471D1C60EE46BA224A58947647F1E2B83B(L_4, L_5, List_1_Remove_m585A9E471D1C60EE46BA224A58947647F1E2B83B_RuntimeMethod_var);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.RaycasterManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycasterManager__cctor_mD54B4074998B6AE8F412E28ABAB6FFE3DE470286 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m53B48CB7A08406A33847E0C3D9D7511DE8FB0D41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t02E640552264E3DEAE676267B620815D33BCD0DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<BaseRaycaster> s_Raycasters = new List<BaseRaycaster>();
		List_1_t02E640552264E3DEAE676267B620815D33BCD0DF* L_0 = (List_1_t02E640552264E3DEAE676267B620815D33BCD0DF*)il2cpp_codegen_object_new(List_1_t02E640552264E3DEAE676267B620815D33BCD0DF_il2cpp_TypeInfo_var);
		List_1__ctor_m53B48CB7A08406A33847E0C3D9D7511DE8FB0D41(L_0, List_1__ctor_m53B48CB7A08406A33847E0C3D9D7511DE8FB0D41_RuntimeMethod_var);
		((RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_StaticFields*)il2cpp_codegen_static_fields_for(RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var))->___s_Raycasters_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_StaticFields*)il2cpp_codegen_static_fields_for(RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var))->___s_Raycasters_0), (void*)L_0);
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
// System.Int32 UnityEngine.EventSystems.BaseRaycaster::get_priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseRaycaster_get_priority_m79C109ECC138B84A60F9CFA40242628A8B29C838 (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return 0; }
		V_0 = 0;
		goto IL_0005;
	}

IL_0005:
	{
		// get { return 0; }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Int32 UnityEngine.EventSystems.BaseRaycaster::get_sortOrderPriority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseRaycaster_get_sortOrderPriority_m4E0BEBF85F720AE4B7C78E99CCD786779C3E7226 (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return int.MinValue; }
		V_0 = ((int32_t)-2147483648LL);
		goto IL_0009;
	}

IL_0009:
	{
		// get { return int.MinValue; }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Int32 UnityEngine.EventSystems.BaseRaycaster::get_renderOrderPriority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseRaycaster_get_renderOrderPriority_m03C407856FF76393AB6EE26FA173131B8F36CA66 (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return int.MinValue; }
		V_0 = ((int32_t)-2147483648LL);
		goto IL_0009;
	}

IL_0009:
	{
		// get { return int.MinValue; }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::get_rootRaycaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* BaseRaycaster_get_rootRaycaster_m63E20D85A8B9867AC196768924F8BE579668BF28 (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInParent_TisBaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832_mA869CA05E07609C8F435F1D779B138F3F2425F8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* V_1 = NULL;
	bool V_2 = false;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* V_3 = NULL;
	{
		// if (m_RootRaycaster == null)
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_0 = __this->___m_RootRaycaster_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// var baseRaycasters = GetComponentsInParent<BaseRaycaster>();
		BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* L_3;
		L_3 = Component_GetComponentsInParent_TisBaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832_mA869CA05E07609C8F435F1D779B138F3F2425F8C(__this, Component_GetComponentsInParent_TisBaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832_mA869CA05E07609C8F435F1D779B138F3F2425F8C_RuntimeMethod_var);
		V_1 = L_3;
		// if (baseRaycasters.Length != 0)
		BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* L_4 = V_1;
		V_2 = (bool)((!(((uint32_t)(((RuntimeArray*)L_4)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// m_RootRaycaster = baseRaycasters[baseRaycasters.Length - 1];
		BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* L_6 = V_1;
		BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* L_7 = V_1;
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), 1));
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		__this->___m_RootRaycaster_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RootRaycaster_4), (void*)L_9);
	}

IL_002f:
	{
	}

IL_0030:
	{
		// return m_RootRaycaster;
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_10 = __this->___m_RootRaycaster_4;
		V_3 = L_10;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_11 = V_3;
		return L_11;
	}
}
// System.String UnityEngine.EventSystems.BaseRaycaster::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseRaycaster_ToString_m12811CE16AB7E07C949B78CDE309C4B2E44B5377 (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E8BE7BC315CC297C7A3C2864B3A2ED1BD553384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70F1769C72FCAF144F53009F7DA60ED467C29635);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75B536F4B16F980DC1BE8BFB67378A32681C6F79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D2B27E9061DE91A9190184698F3F04E23827CA1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	{
		// return "Name: " + gameObject + "\n" +
		//     "eventCamera: " + eventCamera + "\n" +
		//     "sortOrderPriority: " + sortOrderPriority + "\n" +
		//     "renderOrderPriority: " + renderOrderPriority;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral70F1769C72FCAF144F53009F7DA60ED467C29635);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral70F1769C72FCAF144F53009F7DA60ED467C29635);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = 1;
			G_B2_2 = L_2;
			G_B2_3 = L_2;
			goto IL_001e;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_0023;
	}

IL_001e:
	{
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0023:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral9D2B27E9061DE91A9190184698F3F04E23827CA1);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral9D2B27E9061DE91A9190184698F3F04E23827CA1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = L_8;
		G_B4_0 = L_9;
		G_B4_1 = 3;
		G_B4_2 = L_7;
		G_B4_3 = L_7;
		if (L_9)
		{
			G_B5_0 = L_9;
			G_B5_1 = 3;
			G_B5_2 = L_7;
			G_B5_3 = L_7;
			goto IL_003b;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_0040;
	}

IL_003b:
	{
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_10;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_0040:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = G_B6_3;
		ArrayElementTypeCheck (L_11, _stringLiteral2E8BE7BC315CC297C7A3C2864B3A2ED1BD553384);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral2E8BE7BC315CC297C7A3C2864B3A2ED1BD553384);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.EventSystems.BaseRaycaster::get_sortOrderPriority() */, __this);
		V_0 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		ArrayElementTypeCheck (L_15, _stringLiteral75B536F4B16F980DC1BE8BFB67378A32681C6F79);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral75B536F4B16F980DC1BE8BFB67378A32681C6F79);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 UnityEngine.EventSystems.BaseRaycaster::get_renderOrderPriority() */, __this);
		V_0 = L_17;
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)L_18);
		String_t* L_19;
		L_19 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_16, NULL);
		V_1 = L_19;
		goto IL_007b;
	}

IL_007b:
	{
		// }
		String_t* L_20 = V_1;
		return L_20;
	}
}
// System.Void UnityEngine.EventSystems.BaseRaycaster::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRaycaster_OnEnable_m87CCF1ACD4116BB8BC0D9DB427F5B07C6FDE3D96 (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		UIBehaviour_OnEnable_m8989ABF5C038905A68E5536BED2E6FFAF8767FFC(__this, NULL);
		// RaycasterManager.AddRaycaster(this);
		il2cpp_codegen_runtime_class_init_inline(RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var);
		RaycasterManager_AddRaycaster_m02B34CF546A389947D4BA6BE4840ED8860F1D85D(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.BaseRaycaster::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRaycaster_OnDisable_mC90A700D5F78DDAD0DD926983C2A8D7C50A5D880 (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RaycasterManager.RemoveRaycasters(this);
		il2cpp_codegen_runtime_class_init_inline(RaycasterManager_tE359EBDE4F0EF3681A6E3662B340AC4D53502074_il2cpp_TypeInfo_var);
		RaycasterManager_RemoveRaycasters_mE635817554BD615E5E8B94470792BF0E5B24FD58(__this, NULL);
		// base.OnDisable();
		UIBehaviour_OnDisable_m18D5A0B93F65FB50F4D6CE8197EC07F3452C5DDE(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.BaseRaycaster::OnCanvasHierarchyChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRaycaster_OnCanvasHierarchyChanged_m20A82CFED659012D1F052C5026B8294B44D99BD7 (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* __this, const RuntimeMethod* method) 
{
	{
		// base.OnCanvasHierarchyChanged();
		UIBehaviour_OnCanvasHierarchyChanged_mCAC018CB33FA00E857288B64E3722226638A1229(__this, NULL);
		// m_RootRaycaster = null;
		__this->___m_RootRaycaster_4 = (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RootRaycaster_4), (void*)(BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.BaseRaycaster::OnTransformParentChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRaycaster_OnTransformParentChanged_m121068CDDBC97032FF51C4ED944D4C126CB58F7F (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* __this, const RuntimeMethod* method) 
{
	{
		// base.OnTransformParentChanged();
		UIBehaviour_OnTransformParentChanged_mAD56D3C6049A1746F00DC2643D1666F7DE921384(__this, NULL);
		// m_RootRaycaster = null;
		__this->___m_RootRaycaster_4 = (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RootRaycaster_4), (void*)(BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.EventSystems.BaseRaycaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRaycaster__ctor_m1B6A963368E54C1E450BE15FAF1AE082142A1683 (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* __this, const RuntimeMethod* method) 
{
	{
		UIBehaviour__ctor_m24C66A65DDD996E779871C6655CF11B871F11337(__this, NULL);
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
// System.Void UnityEngine.EventSystems.Physics2DRaycaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics2DRaycaster__ctor_mF2F12F2AF9DDCA74EB09349D038A67F3D3F88CF9 (Physics2DRaycaster_t8E0FE5BD8DC96C60EE4BA334B0607B63A69761A7* __this, const RuntimeMethod* method) 
{
	{
		// protected Physics2DRaycaster()
		PhysicsRaycaster__ctor_mB7D4BAC26DC219A10060B35498EE9D5F05AD0E80(__this, NULL);
		// {}
		return;
	}
}
// System.Void UnityEngine.EventSystems.Physics2DRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics2DRaycaster_Raycast_m9F6AA9C9DC7A34C01959F2053446D3FFCE567630 (Physics2DRaycaster_t8E0FE5BD8DC96C60EE4BA334B0607B63A69761A7* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___resultAppendList1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteShapeRenderer_tE998BB73CF661079736CCC23617E597AB230A4AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_12 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_13 = NULL;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* G_B23_0 = NULL;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* G_B22_0 = NULL;
	int32_t G_B24_0 = 0;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* G_B24_1 = NULL;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* G_B26_0 = NULL;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* G_B25_0 = NULL;
	int32_t G_B27_0 = 0;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* G_B27_1 = NULL;
	{
		// Ray ray = new Ray();
		il2cpp_codegen_initobj((&V_0), sizeof(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00));
		// float distanceToClipPlane = 0;
		V_1 = (0.0f);
		// int displayIndex = 0;
		V_2 = 0;
		// if (!ComputeRayAndDistance(eventData, ref ray, ref displayIndex, ref distanceToClipPlane))
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		bool L_1;
		L_1 = PhysicsRaycaster_ComputeRayAndDistance_mCFEFA9D83EC1E63393454E383FFFEF89E14C173B(__this, L_0, (&V_0), (&V_2), (&V_1), NULL);
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// return;
		goto IL_0295;
	}

IL_002c:
	{
		// int hitCount = 0;
		V_3 = 0;
		// if (maxRayIntersections == 0)
		int32_t L_3;
		L_3 = PhysicsRaycaster_get_maxRayIntersections_mA06D0B5E291BCF94AE1EF4ED7B68890F39395911(__this, NULL);
		V_5 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_007f;
		}
	}
	{
		// if (ReflectionMethodsCache.Singleton.getRayIntersectionAll == null)
		ReflectionMethodsCache_t711B47CE11EA2092B94127FF8D3361AE2E4859F5* L_5;
		L_5 = ReflectionMethodsCache_get_Singleton_m3DCE77AADA1986F8283BAA54B89FD83558E18FC1(NULL);
		GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C* L_6 = L_5->___getRayIntersectionAll_4;
		V_6 = (bool)((((RuntimeObject*)(GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_6;
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		// return;
		goto IL_0295;
	}

IL_0056:
	{
		// m_Hits = ReflectionMethodsCache.Singleton.getRayIntersectionAll(ray, distanceToClipPlane, finalEventMask);
		ReflectionMethodsCache_t711B47CE11EA2092B94127FF8D3361AE2E4859F5* L_8;
		L_8 = ReflectionMethodsCache_get_Singleton_m3DCE77AADA1986F8283BAA54B89FD83558E18FC1(NULL);
		GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C* L_9 = L_8->___getRayIntersectionAll_4;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_10 = V_0;
		float L_11 = V_1;
		int32_t L_12;
		L_12 = PhysicsRaycaster_get_finalEventMask_m20AD2327FE81B38A5853B23970A587EAA2ECCB1B(__this, NULL);
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_13;
		L_13 = GetRayIntersectionAllCallback_Invoke_m917AA4108EBDC724AFEF39BFD06A586B7461F497_inline(L_9, L_10, L_11, L_12, NULL);
		__this->___m_Hits_11 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Hits_11), (void*)L_13);
		// hitCount = m_Hits.Length;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_14 = __this->___m_Hits_11;
		V_3 = ((int32_t)(((RuntimeArray*)L_14)->max_length));
		goto IL_00ed;
	}

IL_007f:
	{
		// if (ReflectionMethodsCache.Singleton.getRayIntersectionAllNonAlloc == null)
		ReflectionMethodsCache_t711B47CE11EA2092B94127FF8D3361AE2E4859F5* L_15;
		L_15 = ReflectionMethodsCache_get_Singleton_m3DCE77AADA1986F8283BAA54B89FD83558E18FC1(NULL);
		GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980* L_16 = L_15->___getRayIntersectionAllNonAlloc_5;
		V_7 = (bool)((((RuntimeObject*)(GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980*)L_16) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0098;
		}
	}
	{
		// return;
		goto IL_0295;
	}

IL_0098:
	{
		// if (m_LastMaxRayIntersections != m_MaxRayIntersections)
		int32_t L_18 = ((PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD*)__this)->___m_LastMaxRayIntersections_9;
		int32_t L_19 = ((PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD*)__this)->___m_MaxRayIntersections_8;
		V_8 = (bool)((((int32_t)((((int32_t)L_18) == ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_00ce;
		}
	}
	{
		// m_Hits = new RaycastHit2D[maxRayIntersections];
		int32_t L_21;
		L_21 = PhysicsRaycaster_get_maxRayIntersections_mA06D0B5E291BCF94AE1EF4ED7B68890F39395911(__this, NULL);
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_22 = (RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)(RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*)SZArrayNew(RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7_il2cpp_TypeInfo_var, (uint32_t)L_21);
		__this->___m_Hits_11 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Hits_11), (void*)L_22);
		// m_LastMaxRayIntersections = m_MaxRayIntersections;
		int32_t L_23 = ((PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD*)__this)->___m_MaxRayIntersections_8;
		((PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD*)__this)->___m_LastMaxRayIntersections_9 = L_23;
	}

IL_00ce:
	{
		// hitCount = ReflectionMethodsCache.Singleton.getRayIntersectionAllNonAlloc(ray, m_Hits, distanceToClipPlane, finalEventMask);
		ReflectionMethodsCache_t711B47CE11EA2092B94127FF8D3361AE2E4859F5* L_24;
		L_24 = ReflectionMethodsCache_get_Singleton_m3DCE77AADA1986F8283BAA54B89FD83558E18FC1(NULL);
		GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980* L_25 = L_24->___getRayIntersectionAllNonAlloc_5;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_26 = V_0;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_27 = __this->___m_Hits_11;
		float L_28 = V_1;
		int32_t L_29;
		L_29 = PhysicsRaycaster_get_finalEventMask_m20AD2327FE81B38A5853B23970A587EAA2ECCB1B(__this, NULL);
		int32_t L_30;
		L_30 = GetRayIntersectionAllNonAllocCallback_Invoke_mFAA36E9AF362DC72204EEF53B28DBFC3367D09A7_inline(L_25, L_26, L_27, L_28, L_29, NULL);
		V_3 = L_30;
	}

IL_00ed:
	{
		// if (hitCount != 0)
		int32_t L_31 = V_3;
		V_9 = (bool)((!(((uint32_t)L_31) <= ((uint32_t)0)))? 1 : 0);
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_0295;
		}
	}
	{
		// for (int b = 0, bmax = hitCount; b < bmax; ++b)
		V_10 = 0;
		// for (int b = 0, bmax = hitCount; b < bmax; ++b)
		int32_t L_33 = V_3;
		V_11 = L_33;
		goto IL_0285;
	}

IL_0106:
	{
		// Renderer r2d = null;
		V_12 = (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)NULL;
		// var rendererResult = m_Hits[b].collider.gameObject.GetComponent<Renderer>();
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_34 = __this->___m_Hits_11;
		int32_t L_35 = V_10;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_36;
		L_36 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD(((L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35))), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_36, NULL);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_38;
		L_38 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_37, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		V_13 = L_38;
		// if (rendererResult != null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_39 = V_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_39, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_15 = L_40;
		bool L_41 = V_15;
		if (!L_41)
		{
			goto IL_017a;
		}
	}
	{
		// if (rendererResult is SpriteRenderer)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_42 = V_13;
		V_16 = (bool)((!(((RuntimeObject*)(SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B*)((SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B*)IsInstSealed((RuntimeObject*)L_42, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_43 = V_16;
		if (!L_43)
		{
			goto IL_014d;
		}
	}
	{
		// r2d = rendererResult;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_44 = V_13;
		V_12 = L_44;
	}

IL_014d:
	{
		// if (rendererResult is TilemapRenderer)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_45 = V_13;
		V_17 = (bool)((!(((RuntimeObject*)(TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*)((TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*)IsInstSealed((RuntimeObject*)L_45, TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_46 = V_17;
		if (!L_46)
		{
			goto IL_0163;
		}
	}
	{
		// r2d = rendererResult;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_47 = V_13;
		V_12 = L_47;
	}

IL_0163:
	{
		// if (rendererResult is SpriteShapeRenderer)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_48 = V_13;
		V_18 = (bool)((!(((RuntimeObject*)(SpriteShapeRenderer_tE998BB73CF661079736CCC23617E597AB230A4AC*)((SpriteShapeRenderer_tE998BB73CF661079736CCC23617E597AB230A4AC*)IsInstClass((RuntimeObject*)L_48, SpriteShapeRenderer_tE998BB73CF661079736CCC23617E597AB230A4AC_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_49 = V_18;
		if (!L_49)
		{
			goto IL_0179;
		}
	}
	{
		// r2d = rendererResult;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_50 = V_13;
		V_12 = L_50;
	}

IL_0179:
	{
	}

IL_017a:
	{
		// var result = new RaycastResult
		// {
		//     gameObject = m_Hits[b].collider.gameObject,
		//     module = this,
		//     distance = Vector3.Distance(eventCamera.transform.position, m_Hits[b].point),
		//     worldPosition = m_Hits[b].point,
		//     worldNormal = m_Hits[b].normal,
		//     screenPosition = eventData.position,
		//     displayIndex = displayIndex,
		//     index = resultAppendList.Count,
		//     sortingLayer =  r2d != null ? r2d.sortingLayerID : 0,
		//     sortingOrder = r2d != null ? r2d.sortingOrder : 0
		// };
		il2cpp_codegen_initobj((&V_19), sizeof(RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023));
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_51 = __this->___m_Hits_11;
		int32_t L_52 = V_10;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_53;
		L_53 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD(((L_51)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_52))), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54;
		L_54 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_53, NULL);
		RaycastResult_set_gameObject_mCFEB66C0E3F01AC5E55040FE8BEB16E40427BD9E((&V_19), L_54, NULL);
		(&V_19)->___module_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_19)->___module_1), (void*)__this);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_55;
		L_55 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_56;
		L_56 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_55, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_56, NULL);
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_58 = __this->___m_Hits_11;
		int32_t L_59 = V_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60;
		L_60 = RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B(((L_58)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_59))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_60, NULL);
		float L_62;
		L_62 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_57, L_61, NULL);
		(&V_19)->___distance_2 = L_62;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_63 = __this->___m_Hits_11;
		int32_t L_64 = V_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		L_65 = RaycastHit2D_get_point_mB35E988E9E04328EFE926228A18334326721A36B(((L_63)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_64))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_65, NULL);
		(&V_19)->___worldPosition_7 = L_66;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_67 = __this->___m_Hits_11;
		int32_t L_68 = V_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69;
		L_69 = RaycastHit2D_get_normal_m75F1EBDE347BACEB5A6A6AA72543C740806AB5F2(((L_67)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_68))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_69, NULL);
		(&V_19)->___worldNormal_8 = L_70;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_71 = ___eventData0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72;
		L_72 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_71, NULL);
		(&V_19)->___screenPosition_9 = L_72;
		int32_t L_73 = V_2;
		(&V_19)->___displayIndex_10 = L_73;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_74 = ___resultAppendList1;
		int32_t L_75;
		L_75 = List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline(L_74, List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		(&V_19)->___index_3 = ((float)L_75);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_76 = V_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_77;
		L_77 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_76, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B22_0 = (&V_19);
		if (L_77)
		{
			G_B23_0 = (&V_19);
			goto IL_024a;
		}
	}
	{
		G_B24_0 = 0;
		G_B24_1 = G_B22_0;
		goto IL_0251;
	}

IL_024a:
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_78 = V_12;
		int32_t L_79;
		L_79 = Renderer_get_sortingLayerID_m3D7AE74F1B87099810CF969CB4520C85F9AE5F92(L_78, NULL);
		G_B24_0 = L_79;
		G_B24_1 = G_B23_0;
	}

IL_0251:
	{
		G_B24_1->___sortingLayer_5 = G_B24_0;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_80 = V_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_81;
		L_81 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_80, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B25_0 = (&V_19);
		if (L_81)
		{
			G_B26_0 = (&V_19);
			goto IL_0265;
		}
	}
	{
		G_B27_0 = 0;
		G_B27_1 = G_B25_0;
		goto IL_026c;
	}

IL_0265:
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_82 = V_12;
		int32_t L_83;
		L_83 = Renderer_get_sortingOrder_m4CE7ADEEC8E2F28CC1D10B1D4091A10F8F1583FA(L_82, NULL);
		G_B27_0 = L_83;
		G_B27_1 = G_B26_0;
	}

IL_026c:
	{
		G_B27_1->___sortingOrder_6 = G_B27_0;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_84 = V_19;
		V_14 = L_84;
		// resultAppendList.Add(result);
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_85 = ___resultAppendList1;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_86 = V_14;
		List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_inline(L_85, L_86, List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_RuntimeMethod_var);
		// for (int b = 0, bmax = hitCount; b < bmax; ++b)
		int32_t L_87 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_0285:
	{
		// for (int b = 0, bmax = hitCount; b < bmax; ++b)
		int32_t L_88 = V_10;
		int32_t L_89 = V_11;
		V_20 = (bool)((((int32_t)L_88) < ((int32_t)L_89))? 1 : 0);
		bool L_90 = V_20;
		if (L_90)
		{
			goto IL_0106;
		}
	}
	{
	}

IL_0295:
	{
		// }
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
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsRaycaster__ctor_mB7D4BAC26DC219A10060B35498EE9D5F05AD0E80 (PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* __this, const RuntimeMethod* method) 
{
	{
		// protected LayerMask m_EventMask = kNoEventMaskSet;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0;
		L_0 = LayerMask_op_Implicit_mDC9C22C4477684D460FCF25B1BFE6B54419FB922((-1), NULL);
		__this->___m_EventMask_7 = L_0;
		// protected int m_MaxRayIntersections = 0;
		__this->___m_MaxRayIntersections_8 = 0;
		// protected int m_LastMaxRayIntersections = 0;
		__this->___m_LastMaxRayIntersections_9 = 0;
		// protected PhysicsRaycaster()
		BaseRaycaster__ctor_m1B6A963368E54C1E450BE15FAF1AE082142A1683(__this, NULL);
		// {}
		return;
	}
}
// UnityEngine.Camera UnityEngine.EventSystems.PhysicsRaycaster::get_eventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* PhysicsRaycaster_get_eventCamera_m95026618116D1781A906DDE4AF9C415F2374013C (PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_1 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B4_0 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B3_0 = NULL;
	{
		// if (m_EventCamera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___m_EventCamera_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// m_EventCamera = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___m_EventCamera_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EventCamera_6), (void*)L_3);
	}

IL_001d:
	{
		// return m_EventCamera ?? Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___m_EventCamera_6;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = L_4;
		G_B3_0 = L_5;
		if (L_5)
		{
			G_B4_0 = L_5;
			goto IL_002c;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		G_B4_0 = L_6;
	}

IL_002c:
	{
		V_1 = G_B4_0;
		goto IL_002f;
	}

IL_002f:
	{
		// }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = V_1;
		return L_7;
	}
}
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhysicsRaycaster_get_depth_mCC2E924588088DB1DCA160765C09734D3C4F7F60 (PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// get { return (eventCamera != null) ? (int)eventCamera.depth : 0xFFFFFF; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((int32_t)16777215);
		goto IL_0022;
	}

IL_0016:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		float L_3;
		L_3 = Camera_get_depth_mDF67FFF8ED61750467DFC4C6D8F236850AD1BB1D(L_2, NULL);
		G_B3_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_3);
	}

IL_0022:
	{
		V_0 = G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		// get { return (eventCamera != null) ? (int)eventCamera.depth : 0xFFFFFF; }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_finalEventMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhysicsRaycaster_get_finalEventMask_m20AD2327FE81B38A5853B23970A587EAA2ECCB1B (PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// get { return (eventCamera != null) ? eventCamera.cullingMask & m_EventMask : kNoEventMaskSet; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_0029;
	}

IL_0012:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		int32_t L_3;
		L_3 = Camera_get_cullingMask_m6F5AFF8FB522F876D99E839BF77D8F27F26A1EF8(L_2, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_4 = __this->___m_EventMask_7;
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_4, NULL);
		G_B3_0 = ((int32_t)(L_3&L_5));
	}

IL_0029:
	{
		V_0 = G_B3_0;
		goto IL_002c;
	}

IL_002c:
	{
		// get { return (eventCamera != null) ? eventCamera.cullingMask & m_EventMask : kNoEventMaskSet; }
		int32_t L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.LayerMask UnityEngine.EventSystems.PhysicsRaycaster::get_eventMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB PhysicsRaycaster_get_eventMask_mA8FE3884CD425BD59BD22784F4D5219159426DB9 (PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* __this, const RuntimeMethod* method) 
{
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return m_EventMask; }
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = __this->___m_EventMask_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_EventMask; }
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::set_eventMask(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsRaycaster_set_eventMask_mD5110BE565C7E3F1738369519D44587452CA056D (PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_EventMask = value; }
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_0 = ___value0;
		__this->___m_EventMask_7 = L_0;
		// set { m_EventMask = value; }
		return;
	}
}
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster::get_maxRayIntersections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhysicsRaycaster_get_maxRayIntersections_mA06D0B5E291BCF94AE1EF4ED7B68890F39395911 (PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return m_MaxRayIntersections; }
		int32_t L_0 = __this->___m_MaxRayIntersections_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_MaxRayIntersections; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::set_maxRayIntersections(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsRaycaster_set_maxRayIntersections_mECCF07932870A3B5C8875AE6204FC1ECB2CE01F7 (PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_MaxRayIntersections = value; }
		int32_t L_0 = ___value0;
		__this->___m_MaxRayIntersections_8 = L_0;
		// set { m_MaxRayIntersections = value; }
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.PhysicsRaycaster::ComputeRayAndDistance(UnityEngine.EventSystems.PointerEventData,UnityEngine.Ray&,System.Int32&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PhysicsRaycaster_ComputeRayAndDistance_mCFEFA9D83EC1E63393454E383FFFEF89E14C173B (PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* ___ray1, int32_t* ___eventDisplayIndex2, float* ___distanceToClipPlane3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_7;
	memset((&V_7), 0, sizeof(V_7));
	float* G_B11_0 = NULL;
	float* G_B10_0 = NULL;
	float G_B12_0 = 0.0f;
	float* G_B12_1 = NULL;
	{
		// if (eventCamera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00ed;
	}

IL_0018:
	{
		// var eventPosition = Display.RelativeMouseAt(eventData.position);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Display_t06A3B0F5169CA3C02A4D5171F27499A23D3581D1_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Display_RelativeMouseAt_m978A03E5176C10A4A5CD1DEE6088FF7C3FE6EBBF(L_5, NULL);
		V_0 = L_6;
		// if (eventPosition != Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_9;
		L_9 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_7, L_8, NULL);
		V_4 = L_9;
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		// eventDisplayIndex = (int)eventPosition.z;
		int32_t* L_11 = ___eventDisplayIndex2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		float L_13 = L_12.___z_4;
		*((int32_t*)L_11) = (int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_13);
		// if (eventDisplayIndex != eventCamera.targetDisplay)
		int32_t* L_14 = ___eventDisplayIndex2;
		int32_t L_15 = *((int32_t*)L_14);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16;
		L_16 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		int32_t L_17;
		L_17 = Camera_get_targetDisplay_m204A169C94EEABDB491FA5A77CC684146B10DF80(L_16, NULL);
		V_5 = (bool)((((int32_t)((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0063;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00ed;
	}

IL_0063:
	{
		goto IL_0074;
	}

IL_0066:
	{
		// eventPosition = eventData.position;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_19 = ___eventData0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_20, NULL);
		V_0 = L_21;
	}

IL_0074:
	{
		// if (!eventCamera.pixelRect.Contains(eventPosition))
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22;
		L_22 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_23;
		L_23 = Camera_get_pixelRect_m5F40F5C324EB252261F66962411EE08CC4BE39E7(L_22, NULL);
		V_7 = L_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		bool L_25;
		L_25 = Rect_Contains_mB1160CD465F3E9616AA4EED72AFFD611BD8D2B6B((&V_7), L_24, NULL);
		V_6 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_0096;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00ed;
	}

IL_0096:
	{
		// ray = eventCamera.ScreenPointToRay(eventPosition);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_27 = ___ray1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_28;
		L_28 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_30;
		L_30 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_28, L_29, NULL);
		*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)L_27 = L_30;
		// float projectionDirection = ray.direction.z;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* L_31 = ___ray1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086(L_31, NULL);
		float L_33 = L_32.___z_4;
		V_1 = L_33;
		// distanceToClipPlane = Mathf.Approximately(0.0f, projectionDirection)
		//     ? Mathf.Infinity
		//     : Mathf.Abs((eventCamera.farClipPlane - eventCamera.nearClipPlane) / projectionDirection);
		float* L_34 = ___distanceToClipPlane3;
		float L_35 = V_1;
		bool L_36;
		L_36 = Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline((0.0f), L_35, NULL);
		G_B10_0 = L_34;
		if (L_36)
		{
			G_B11_0 = L_34;
			goto IL_00e3;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_37;
		L_37 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		float L_38;
		L_38 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_37, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_39;
		L_39 = VirtualFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(18 /* UnityEngine.Camera UnityEngine.EventSystems.BaseRaycaster::get_eventCamera() */, __this);
		float L_40;
		L_40 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_39, NULL);
		float L_41 = V_1;
		float L_42;
		L_42 = fabsf(((float)(((float)il2cpp_codegen_subtract(L_38, L_40))/L_41)));
		G_B12_0 = L_42;
		G_B12_1 = G_B10_0;
		goto IL_00e8;
	}

IL_00e3:
	{
		G_B12_0 = (std::numeric_limits<float>::infinity());
		G_B12_1 = G_B11_0;
	}

IL_00e8:
	{
		*((float*)G_B12_1) = (float)G_B12_0;
		// return true;
		V_3 = (bool)1;
		goto IL_00ed;
	}

IL_00ed:
	{
		// }
		bool L_43 = V_3;
		return L_43;
	}
}
// System.Void UnityEngine.EventSystems.PhysicsRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhysicsRaycaster_Raycast_mB29925EB33102E9BEAA76658F8A59CA666C78B1A (PhysicsRaycaster_t0ACA9046D8D0B195B59DB1F7CA4DD6BB634A56DD* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___resultAppendList1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m0086D1B03EE8C6FBD96C163AE20CDA1C1094BAFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_13;
	memset((&V_13), 0, sizeof(V_13));
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	{
		// Ray ray = new Ray();
		il2cpp_codegen_initobj((&V_0), sizeof(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00));
		// int displayIndex = 0;
		V_1 = 0;
		// float distanceToClipPlane = 0;
		V_2 = (0.0f);
		// if (!ComputeRayAndDistance(eventData, ref ray, ref displayIndex, ref distanceToClipPlane))
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		bool L_1;
		L_1 = PhysicsRaycaster_ComputeRayAndDistance_mCFEFA9D83EC1E63393454E383FFFEF89E14C173B(__this, L_0, (&V_0), (&V_1), (&V_2), NULL);
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// return;
		goto IL_01f5;
	}

IL_002c:
	{
		// int hitCount = 0;
		V_3 = 0;
		// if (m_MaxRayIntersections == 0)
		int32_t L_3 = __this->___m_MaxRayIntersections_8;
		V_5 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_007f;
		}
	}
	{
		// if (ReflectionMethodsCache.Singleton.raycast3DAll == null)
		ReflectionMethodsCache_t711B47CE11EA2092B94127FF8D3361AE2E4859F5* L_5;
		L_5 = ReflectionMethodsCache_get_Singleton_m3DCE77AADA1986F8283BAA54B89FD83558E18FC1(NULL);
		RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A* L_6 = L_5->___raycast3DAll_1;
		V_6 = (bool)((((RuntimeObject*)(RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_7 = V_6;
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		// return;
		goto IL_01f5;
	}

IL_0056:
	{
		// m_Hits = ReflectionMethodsCache.Singleton.raycast3DAll(ray, distanceToClipPlane, finalEventMask);
		ReflectionMethodsCache_t711B47CE11EA2092B94127FF8D3361AE2E4859F5* L_8;
		L_8 = ReflectionMethodsCache_get_Singleton_m3DCE77AADA1986F8283BAA54B89FD83558E18FC1(NULL);
		RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A* L_9 = L_8->___raycast3DAll_1;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_10 = V_0;
		float L_11 = V_2;
		int32_t L_12;
		L_12 = PhysicsRaycaster_get_finalEventMask_m20AD2327FE81B38A5853B23970A587EAA2ECCB1B(__this, NULL);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_13;
		L_13 = RaycastAllCallback_Invoke_mB30319766AF5F0D5145A6C0AFFEA829A31A5D4B7_inline(L_9, L_10, L_11, L_12, NULL);
		__this->___m_Hits_10 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Hits_10), (void*)L_13);
		// hitCount = m_Hits.Length;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_14 = __this->___m_Hits_10;
		V_3 = ((int32_t)(((RuntimeArray*)L_14)->max_length));
		goto IL_00ed;
	}

IL_007f:
	{
		// if (ReflectionMethodsCache.Singleton.getRaycastNonAlloc == null)
		ReflectionMethodsCache_t711B47CE11EA2092B94127FF8D3361AE2E4859F5* L_15;
		L_15 = ReflectionMethodsCache_get_Singleton_m3DCE77AADA1986F8283BAA54B89FD83558E18FC1(NULL);
		GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC* L_16 = L_15->___getRaycastNonAlloc_2;
		V_7 = (bool)((((RuntimeObject*)(GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC*)L_16) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0098;
		}
	}
	{
		// return;
		goto IL_01f5;
	}

IL_0098:
	{
		// if (m_LastMaxRayIntersections != m_MaxRayIntersections)
		int32_t L_18 = __this->___m_LastMaxRayIntersections_9;
		int32_t L_19 = __this->___m_MaxRayIntersections_8;
		V_8 = (bool)((((int32_t)((((int32_t)L_18) == ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_8;
		if (!L_20)
		{
			goto IL_00ce;
		}
	}
	{
		// m_Hits = new RaycastHit[m_MaxRayIntersections];
		int32_t L_21 = __this->___m_MaxRayIntersections_8;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_22 = (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)SZArrayNew(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var, (uint32_t)L_21);
		__this->___m_Hits_10 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Hits_10), (void*)L_22);
		// m_LastMaxRayIntersections = m_MaxRayIntersections;
		int32_t L_23 = __this->___m_MaxRayIntersections_8;
		__this->___m_LastMaxRayIntersections_9 = L_23;
	}

IL_00ce:
	{
		// hitCount = ReflectionMethodsCache.Singleton.getRaycastNonAlloc(ray, m_Hits, distanceToClipPlane, finalEventMask);
		ReflectionMethodsCache_t711B47CE11EA2092B94127FF8D3361AE2E4859F5* L_24;
		L_24 = ReflectionMethodsCache_get_Singleton_m3DCE77AADA1986F8283BAA54B89FD83558E18FC1(NULL);
		GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC* L_25 = L_24->___getRaycastNonAlloc_2;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_26 = V_0;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_27 = __this->___m_Hits_10;
		float L_28 = V_2;
		int32_t L_29;
		L_29 = PhysicsRaycaster_get_finalEventMask_m20AD2327FE81B38A5853B23970A587EAA2ECCB1B(__this, NULL);
		int32_t L_30;
		L_30 = GetRaycastNonAllocCallback_Invoke_m36411365E9622819DAB93D0BB0F169FEE99F07D9_inline(L_25, L_26, L_27, L_28, L_29, NULL);
		V_3 = L_30;
	}

IL_00ed:
	{
		// if (hitCount != 0)
		int32_t L_31 = V_3;
		V_9 = (bool)((!(((uint32_t)L_31) <= ((uint32_t)0)))? 1 : 0);
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_01f5;
		}
	}
	{
		// if (hitCount > 1)
		int32_t L_33 = V_3;
		V_10 = (bool)((((int32_t)L_33) > ((int32_t)1))? 1 : 0);
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_0118;
		}
	}
	{
		// System.Array.Sort(m_Hits, 0, hitCount, RaycastHitComparer.instance);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_35 = __this->___m_Hits_10;
		int32_t L_36 = V_3;
		il2cpp_codegen_runtime_class_init_inline(RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1_il2cpp_TypeInfo_var);
		RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1* L_37 = ((RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1_StaticFields*)il2cpp_codegen_static_fields_for(RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1_il2cpp_TypeInfo_var))->___instance_0;
		Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m0086D1B03EE8C6FBD96C163AE20CDA1C1094BAFF(L_35, 0, L_36, L_37, Array_Sort_TisRaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5_m0086D1B03EE8C6FBD96C163AE20CDA1C1094BAFF_RuntimeMethod_var);
	}

IL_0118:
	{
		// for (int b = 0, bmax = hitCount; b < bmax; ++b)
		V_11 = 0;
		// for (int b = 0, bmax = hitCount; b < bmax; ++b)
		int32_t L_38 = V_3;
		V_12 = L_38;
		goto IL_01e5;
	}

IL_0123:
	{
		// var result = new RaycastResult
		// {
		//     gameObject = m_Hits[b].collider.gameObject,
		//     module = this,
		//     distance = m_Hits[b].distance,
		//     worldPosition = m_Hits[b].point,
		//     worldNormal = m_Hits[b].normal,
		//     screenPosition = eventData.position,
		//     displayIndex = displayIndex,
		//     index = resultAppendList.Count,
		//     sortingLayer = 0,
		//     sortingOrder = 0
		// };
		il2cpp_codegen_initobj((&V_14), sizeof(RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023));
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_39 = __this->___m_Hits_10;
		int32_t L_40 = V_11;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_41;
		L_41 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(((L_39)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_40))), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
		L_42 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_41, NULL);
		RaycastResult_set_gameObject_mCFEB66C0E3F01AC5E55040FE8BEB16E40427BD9E((&V_14), L_42, NULL);
		(&V_14)->___module_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_14)->___module_1), (void*)__this);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_43 = __this->___m_Hits_10;
		int32_t L_44 = V_11;
		float L_45;
		L_45 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78(((L_43)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_44))), NULL);
		(&V_14)->___distance_2 = L_45;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_46 = __this->___m_Hits_10;
		int32_t L_47 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_47))), NULL);
		(&V_14)->___worldPosition_7 = L_48;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_49 = __this->___m_Hits_10;
		int32_t L_50 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5(((L_49)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_50))), NULL);
		(&V_14)->___worldNormal_8 = L_51;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_52 = ___eventData0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		L_53 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_52, NULL);
		(&V_14)->___screenPosition_9 = L_53;
		int32_t L_54 = V_1;
		(&V_14)->___displayIndex_10 = L_54;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_55 = ___resultAppendList1;
		int32_t L_56;
		L_56 = List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_inline(L_55, List_1_get_Count_mE2EBEDC861C1EC398EDBE6CF2C9FB604AA71523E_RuntimeMethod_var);
		(&V_14)->___index_3 = ((float)L_56);
		(&V_14)->___sortingLayer_5 = 0;
		(&V_14)->___sortingOrder_6 = 0;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_57 = V_14;
		V_13 = L_57;
		// resultAppendList.Add(result);
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_58 = ___resultAppendList1;
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_59 = V_13;
		List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_inline(L_58, L_59, List_1_Add_mEB6DFEA132B5B7BF540D34177054003185D250E7_RuntimeMethod_var);
		// for (int b = 0, bmax = hitCount; b < bmax; ++b)
		int32_t L_60 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_01e5:
	{
		// for (int b = 0, bmax = hitCount; b < bmax; ++b)
		int32_t L_61 = V_11;
		int32_t L_62 = V_12;
		V_15 = (bool)((((int32_t)L_61) < ((int32_t)L_62))? 1 : 0);
		bool L_63 = V_15;
		if (L_63)
		{
			goto IL_0123;
		}
	}
	{
	}

IL_01f5:
	{
		// }
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
// System.Int32 UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer::Compare(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RaycastHitComparer_Compare_mB5B88FE52375A12B781682C712FE58193F417A03 (RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___x0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___y1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// return x.distance.CompareTo(y.distance);
		float L_0;
		L_0 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&___x0), NULL);
		V_0 = L_0;
		float L_1;
		L_1 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&___y1), NULL);
		int32_t L_2;
		L_2 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F((&V_0), L_1, NULL);
		V_1 = L_2;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHitComparer__ctor_mAB0536EE515BF2BD1B29BE3B39E8BA9E9CFE97C3 (RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHitComparer__cctor_m2AF7BB0B25461CCA9CA4C8EE799439478D18E1D3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static RaycastHitComparer instance = new RaycastHitComparer();
		RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1* L_0 = (RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1*)il2cpp_codegen_object_new(RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1_il2cpp_TypeInfo_var);
		RaycastHitComparer__ctor_mAB0536EE515BF2BD1B29BE3B39E8BA9E9CFE97C3(L_0, NULL);
		((RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1_StaticFields*)il2cpp_codegen_static_fields_for(RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1_il2cpp_TypeInfo_var))->___instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1_StaticFields*)il2cpp_codegen_static_fields_for(RaycastHitComparer_t8EF6567C19BE9FB575E01A10941FBF7DE3D3DDF1_il2cpp_TypeInfo_var))->___instance_0), (void*)L_0);
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
// Conversion methods for marshalling of: UnityEngine.EventSystems.RaycastResult
IL2CPP_EXTERN_C void RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke(const RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023& unmarshaled, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GameObject' of type 'RaycastResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke_back(const RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke& marshaled, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023& unmarshaled)
{
	Exception_t* ___m_GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GameObject' of type 'RaycastResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.EventSystems.RaycastResult
IL2CPP_EXTERN_C void RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_pinvoke_cleanup(RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.EventSystems.RaycastResult
IL2CPP_EXTERN_C void RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_com(const RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023& unmarshaled, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com& marshaled)
{
	Exception_t* ___m_GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GameObject' of type 'RaycastResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GameObject_0Exception, NULL);
}
IL2CPP_EXTERN_C void RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_com_back(const RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com& marshaled, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023& unmarshaled)
{
	Exception_t* ___m_GameObject_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GameObject' of type 'RaycastResult': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GameObject_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.EventSystems.RaycastResult
IL2CPP_EXTERN_C void RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshal_com_cleanup(RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com& marshaled)
{
}
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1 (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// get { return m_GameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_GameObject_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_GameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023*>(__this + _offset);
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* _returnValue;
	_returnValue = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.EventSystems.RaycastResult::set_gameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastResult_set_gameObject_mCFEB66C0E3F01AC5E55040FE8BEB16E40427BD9E (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_GameObject = value; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_GameObject_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GameObject_0), (void*)L_0);
		// set { m_GameObject = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void RaycastResult_set_gameObject_mCFEB66C0E3F01AC5E55040FE8BEB16E40427BD9E_AdjustorThunk (RuntimeObject* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method)
{
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023*>(__this + _offset);
	RaycastResult_set_gameObject_mCFEB66C0E3F01AC5E55040FE8BEB16E40427BD9E(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.EventSystems.RaycastResult::get_isValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastResult_get_isValid_m69957B97C041A9E3FAF4ECA82BB8099C9FA171CE (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// get { return module != null && gameObject != null; }
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_0 = __this->___module_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0021;
	}

IL_0021:
	{
		// get { return module != null && gameObject != null; }
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool RaycastResult_get_isValid_m69957B97C041A9E3FAF4ECA82BB8099C9FA171CE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023*>(__this + _offset);
	bool _returnValue;
	_returnValue = RaycastResult_get_isValid_m69957B97C041A9E3FAF4ECA82BB8099C9FA171CE(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.EventSystems.RaycastResult::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastResult_Clear_m0E9DA70AC69CF143CEA8428AFC5BA552F99643AE (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) 
{
	{
		// gameObject = null;
		RaycastResult_set_gameObject_mCFEB66C0E3F01AC5E55040FE8BEB16E40427BD9E(__this, (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL, NULL);
		// module = null;
		__this->___module_1 = (BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___module_1), (void*)(BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832*)NULL);
		// distance = 0;
		__this->___distance_2 = (0.0f);
		// index = 0;
		__this->___index_3 = (0.0f);
		// depth = 0;
		__this->___depth_4 = 0;
		// sortingLayer = 0;
		__this->___sortingLayer_5 = 0;
		// sortingOrder = 0;
		__this->___sortingOrder_6 = 0;
		// worldNormal = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		__this->___worldNormal_8 = L_0;
		// worldPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___worldPosition_7 = L_1;
		// screenPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_2, NULL);
		__this->___screenPosition_9 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void RaycastResult_Clear_m0E9DA70AC69CF143CEA8428AFC5BA552F99643AE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023*>(__this + _offset);
	RaycastResult_Clear_m0E9DA70AC69CF143CEA8428AFC5BA552F99643AE(_thisAdjusted, method);
}
// System.String UnityEngine.EventSystems.RaycastResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RaycastResult_ToString_m0267000494B09783ABD507B9329ADB01FBBC5428 (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F310FF3EBC19D65A536D81F5D8C7093E972DCA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12BA26D2F44E032136B3146CB230F4F45C5D45DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral267CC871678BDBD934CBEA872CCB8F0C72D94E44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A98949D28301C3B04EAD557512780C8D89A9607);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B2D9FCF87BC5B281C797365D6EE6332266A0B63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30A589687C1FFF9D1706D115A0C664F2A49D9CEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B1F6E5C644F13999A134C243088737884A6B5D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62105F6FE34556E3D1EE1FB639ABDA34F249420F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70F1769C72FCAF144F53009F7DA60ED467C29635);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94A94F7BD0F52C17BB06F5A6BB4E316DC4B69DF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC10E23F5AEEE6BB98CA98C5F6720ED7A4B1DE089);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED69593F1852661D74AD04003C30B937EE7310BF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	{
		// if (!isValid)
		bool L_0;
		L_0 = RaycastResult_get_isValid_m69957B97C041A9E3FAF4ECA82BB8099C9FA171CE(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// return "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_017a;
	}

IL_0019:
	{
		// return "Name: " + gameObject + "\n" +
		//     "module: " + module + "\n" +
		//     "distance: " + distance + "\n" +
		//     "index: " + index + "\n" +
		//     "depth: " + depth + "\n" +
		//     "worldNormal: " + worldNormal + "\n" +
		//     "worldPosition: " + worldPosition + "\n" +
		//     "screenPosition: " + screenPosition + "\n" +
		//     "module.sortOrderPriority: " + module.sortOrderPriority + "\n" +
		//     "module.renderOrderPriority: " + module.renderOrderPriority + "\n" +
		//     "sortingLayer: " + sortingLayer + "\n" +
		//     "sortingOrder: " + sortingOrder;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteral70F1769C72FCAF144F53009F7DA60ED467C29635);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral70F1769C72FCAF144F53009F7DA60ED467C29635);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = 1;
		G_B3_2 = L_4;
		G_B3_3 = L_4;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = 1;
			G_B4_2 = L_4;
			G_B4_3 = L_4;
			goto IL_0037;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		G_B5_2 = G_B3_2;
		G_B5_3 = G_B3_3;
		goto IL_003c;
	}

IL_0037:
	{
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
		G_B5_0 = L_7;
		G_B5_1 = G_B4_1;
		G_B5_2 = G_B4_2;
		G_B5_3 = G_B4_3;
	}

IL_003c:
	{
		ArrayElementTypeCheck (G_B5_2, G_B5_0);
		(G_B5_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B5_1), (String_t*)G_B5_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = G_B5_3;
		ArrayElementTypeCheck (L_8, _stringLiteral12BA26D2F44E032136B3146CB230F4F45C5D45DE);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral12BA26D2F44E032136B3146CB230F4F45C5D45DE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_10 = __this->___module_1;
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_11 = L_10;
		G_B6_0 = L_11;
		G_B6_1 = 3;
		G_B6_2 = L_9;
		G_B6_3 = L_9;
		if (L_11)
		{
			G_B7_0 = L_11;
			G_B7_1 = 3;
			G_B7_2 = L_9;
			G_B7_3 = L_9;
			goto IL_0054;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0059;
	}

IL_0054:
	{
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B7_0);
		G_B8_0 = L_12;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0059:
	{
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B8_3;
		ArrayElementTypeCheck (L_13, _stringLiteral94A94F7BD0F52C17BB06F5A6BB4E316DC4B69DF8);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral94A94F7BD0F52C17BB06F5A6BB4E316DC4B69DF8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		float* L_15 = (&__this->___distance_2);
		String_t* L_16;
		L_16 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_15, NULL);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_14;
		ArrayElementTypeCheck (L_17, _stringLiteralC10E23F5AEEE6BB98CA98C5F6720ED7A4B1DE089);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralC10E23F5AEEE6BB98CA98C5F6720ED7A4B1DE089);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		float* L_19 = (&__this->___index_3);
		String_t* L_20;
		L_20 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_19, NULL);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_18;
		ArrayElementTypeCheck (L_21, _stringLiteral4B1F6E5C644F13999A134C243088737884A6B5D2);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral4B1F6E5C644F13999A134C243088737884A6B5D2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		int32_t* L_23 = (&__this->___depth_4);
		String_t* L_24;
		L_24 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_23, NULL);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_22;
		ArrayElementTypeCheck (L_25, _stringLiteral62105F6FE34556E3D1EE1FB639ABDA34F249420F);
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral62105F6FE34556E3D1EE1FB639ABDA34F249420F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___worldNormal_8;
		V_2 = L_27;
		String_t* L_28;
		L_28 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_2), NULL);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_26;
		ArrayElementTypeCheck (L_29, _stringLiteral30A589687C1FFF9D1706D115A0C664F2A49D9CEF);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral30A589687C1FFF9D1706D115A0C664F2A49D9CEF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = __this->___worldPosition_7;
		V_2 = L_31;
		String_t* L_32;
		L_32 = Vector3_ToString_m6C24B9F0382D25D75B05C606E127CD14660574EE((&V_2), NULL);
		ArrayElementTypeCheck (L_30, L_32);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_30;
		ArrayElementTypeCheck (L_33, _stringLiteralED69593F1852661D74AD04003C30B937EE7310BF);
		(L_33)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteralED69593F1852661D74AD04003C30B937EE7310BF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = __this->___screenPosition_9;
		V_3 = L_35;
		String_t* L_36;
		L_36 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_3), NULL);
		ArrayElementTypeCheck (L_34, L_36);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_36);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_34;
		ArrayElementTypeCheck (L_37, _stringLiteral267CC871678BDBD934CBEA872CCB8F0C72D94E44);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteral267CC871678BDBD934CBEA872CCB8F0C72D94E44);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_39 = __this->___module_1;
		int32_t L_40;
		L_40 = VirtualFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 UnityEngine.EventSystems.BaseRaycaster::get_sortOrderPriority() */, L_39);
		V_4 = L_40;
		String_t* L_41;
		L_41 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)L_41);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_38;
		ArrayElementTypeCheck (L_42, _stringLiteral0F310FF3EBC19D65A536D81F5D8C7093E972DCA0);
		(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteral0F310FF3EBC19D65A536D81F5D8C7093E972DCA0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42;
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_44 = __this->___module_1;
		int32_t L_45;
		L_45 = VirtualFuncInvoker0< int32_t >::Invoke(21 /* System.Int32 UnityEngine.EventSystems.BaseRaycaster::get_renderOrderPriority() */, L_44);
		V_4 = L_45;
		String_t* L_46;
		L_46 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		ArrayElementTypeCheck (L_43, L_46);
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)L_46);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = L_43;
		ArrayElementTypeCheck (L_47, _stringLiteral2A98949D28301C3B04EAD557512780C8D89A9607);
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)20)), (String_t*)_stringLiteral2A98949D28301C3B04EAD557512780C8D89A9607);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_47;
		int32_t* L_49 = (&__this->___sortingLayer_5);
		String_t* L_50;
		L_50 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_49, NULL);
		ArrayElementTypeCheck (L_48, L_50);
		(L_48)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)21)), (String_t*)L_50);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = L_48;
		ArrayElementTypeCheck (L_51, _stringLiteral2B2D9FCF87BC5B281C797365D6EE6332266A0B63);
		(L_51)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)22)), (String_t*)_stringLiteral2B2D9FCF87BC5B281C797365D6EE6332266A0B63);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_51;
		int32_t* L_53 = (&__this->___sortingOrder_6);
		String_t* L_54;
		L_54 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_53, NULL);
		ArrayElementTypeCheck (L_52, L_54);
		(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)23)), (String_t*)L_54);
		String_t* L_55;
		L_55 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_52, NULL);
		V_1 = L_55;
		goto IL_017a;
	}

IL_017a:
	{
		// }
		String_t* L_56 = V_1;
		return L_56;
	}
}
IL2CPP_EXTERN_C  String_t* RaycastResult_ToString_m0267000494B09783ABD507B9329ADB01FBBC5428_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = RaycastResult_ToString_m0267000494B09783ABD507B9329ADB01FBBC5428(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.EventSystems.UIBehaviour::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Awake_mDF9D1A4867C8E730C59A7CAE97709CA9B8F3A0F2 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) 
{
	{
		// {}
		return;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnEnable_m8989ABF5C038905A68E5536BED2E6FFAF8767FFC (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) 
{
	{
		// {}
		return;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Start_mB12643ED6D859CD3682B4BF5B9CA7F72E8A72B45 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) 
{
	{
		// {}
		return;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnDisable_m18D5A0B93F65FB50F4D6CE8197EC07F3452C5DDE (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) 
{
	{
		// {}
		return;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnDestroy_mF225CF9163823F19BE5E2B2735D35898A20D608B (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) 
{
	{
		// {}
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIBehaviour_IsActive_m9E79A0650C81204AF9A861BBBA8685D9563AE9C4 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return isActiveAndEnabled;
		bool L_0;
		L_0 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::OnRectTransformDimensionsChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnRectTransformDimensionsChange_m86A6D20E0EBF41CDB89DD1E87F23624263B68159 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) 
{
	{
		// {}
		return;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::OnBeforeTransformParentChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnBeforeTransformParentChanged_m980EF41E33A7541BD6C65AEC305B25A19C9CA30F (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) 
{
	{
		// {}
		return;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::OnTransformParentChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnTransformParentChanged_mAD56D3C6049A1746F00DC2643D1666F7DE921384 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) 
{
	{
		// {}
		return;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::OnDidApplyAnimationProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnDidApplyAnimationProperties_mE011A7C92134E28AE2AF3A0EBFB2E4AB88ABE748 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) 
{
	{
		// {}
		return;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::OnCanvasGroupChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnCanvasGroupChanged_m592FA8BF5238E712E73E2D99258EE0DB6D88D84B (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) 
{
	{
		// {}
		return;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::OnCanvasHierarchyChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_OnCanvasHierarchyChanged_mCAC018CB33FA00E857288B64E3722226638A1229 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) 
{
	{
		// {}
		return;
	}
}
// System.Boolean UnityEngine.EventSystems.UIBehaviour::IsDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIBehaviour_IsDestroyed_m2E9FFA28686D1C82697FB467002541CC58A06BCA (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return this == null;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(__this, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.EventSystems.UIBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour__ctor_m24C66A65DDD996E779871C6655CF11B871F11337 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerDrag_m36BF08A32216845A8095C5F74DFE6C9959A11E96_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject pointerDrag { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CpointerDragU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_dragging_mE0AD837F228E3830D4A74657AD3D47F53F6C87E9_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public bool dragging { get; set; }
		bool L_0 = __this->___U3CdraggingU3Ek__BackingField_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_delta_mD200AF7CCAEAD92D947091902AF864CB4ACE0F1D_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 delta { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CdeltaU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 PointerEventData_get_pointerCurrentRaycast_m1C6B7D707CEE9C6574DD443289D90102EDC7A2C4_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public RaycastResult pointerCurrentRaycast { get; set; }
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = __this->___U3CpointerCurrentRaycastU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_eligibleForClick_m360125CB3E348F3CF64C39F163467A842E479C21_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool eligibleForClick { get; set; }
		bool L_0 = ___value0;
		__this->___U3CeligibleForClickU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_dragging_m43982B3F95F05986F40A736914CFBC45D2A9BB8E_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool dragging { get; set; }
		bool L_0 = ___value0;
		__this->___U3CdraggingU3Ek__BackingField_22 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_useDragThreshold_m63FE2034E4B240F1A0A902B1EB893B3DBA2D848B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool useDragThreshold { get; set; }
		bool L_0 = ___value0;
		__this->___U3CuseDragThresholdU3Ek__BackingField_21 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pressPosition_m85544FBAB798DABE70067508294A6C4841A95379_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 pressPosition { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CpressPositionU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerPressRaycast_m55CA127474B4CBCA795A9C872B7630AAF766F852_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___value0, const RuntimeMethod* method) 
{
	{
		// public RaycastResult pointerPressRaycast { get; set; }
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = ___value0;
		__this->___U3CpointerPressRaycastU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_pointerEnter_m6CE76D5C0C36C4666CDDE348B57885C52D495A4B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject pointerEnter { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CpointerEnterU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerEnter_m2DA660C24CBDE9B83DF2B2D09D9AF0E94A770D17_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject pointerEnter { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CpointerEnterU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpointerEnterU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PointerEventData_get_lastPress_m46720C62503214A44EE947679A8BA307BC2AEEDC_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject lastPress { get; private set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3ClastPressU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PointerEventData_get_clickTime_m5ABE0298E8CEF28B6BD7E750E940756CD78AB96E_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public float clickTime { get; set; }
		float L_0 = __this->___U3CclickTimeU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_clickCount_m3977011C09DB9F904B1AAC3708B821B8D6AC0F9F_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public int clickCount { get; set; }
		int32_t L_0 = __this->___U3CclickCountU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_clickCount_m0A87C2C367987492F310786DC9C3DF1616EA4D49_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public int clickCount { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CclickCountU3Ek__BackingField_19 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_clickTime_m93D27EB35F490AC9100369A23002F09148F85996_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float clickTime { get; set; }
		float L_0 = ___value0;
		__this->___U3CclickTimeU3Ek__BackingField_18 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_rawPointerPress_mEEC4E3C7CD00F1DDCD3DA98DA5837E71BB8455E3_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject rawPointerPress { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CrawPointerPressU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrawPointerPressU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pointerDrag_m0E8D72362B07962843671C39ADC8F4D5E4915010_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// public GameObject pointerDrag { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___U3CpointerDragU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpointerDragU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PointerEventData_get_eligibleForClick_m4B01A1640C694FD7421BDFB19CF763BC85672C8E_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public bool eligibleForClick { get; set; }
		bool L_0 = __this->___U3CeligibleForClickU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* GetRayIntersectionAllCallback_Invoke_m917AA4108EBDC724AFEF39BFD06A586B7461F497_inline (GetRayIntersectionAllCallback_t52E7AE4ECEA3F9744FF7F8448F852C872A70315C* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___r0, float ___f1, int32_t ___i2, const RuntimeMethod* method) 
{
	typedef RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* (*FunctionPointerType) (RuntimeObject*, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___r0, ___f1, ___i2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GetRayIntersectionAllNonAllocCallback_Invoke_mFAA36E9AF362DC72204EEF53B28DBFC3367D09A7_inline (GetRayIntersectionAllNonAllocCallback_t28D7ACEBBE525DE0CBEA67986E4C3891D694F980* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___r0, RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* ___results1, float ___f2, int32_t ___i3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7*, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___r0, ___results1, ___f2, ___i3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1C8DD0BB6A2D22A7DCF09AD7F8EE9ABD12D3F620_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* RaycastAllCallback_Invoke_mB30319766AF5F0D5145A6C0AFFEA829A31A5D4B7_inline (RaycastAllCallback_t4AFFDCDAA6F02DD74E1E2DE455BA011D82BED47A* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___r0, float ___f1, int32_t ___i2, const RuntimeMethod* method) 
{
	typedef RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* (*FunctionPointerType) (RuntimeObject*, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___r0, ___f1, ___i2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GetRaycastNonAllocCallback_Invoke_m36411365E9622819DAB93D0BB0F169FEE99F07D9_inline (GetRaycastNonAllocCallback_tC3DA6EE6063FE663DD0A9FC52439D825DE4A1FFC* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___r0, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___results1, float ___f2, int32_t ___i3, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*, float, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___r0, ___results1, ___f2, ___i3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
