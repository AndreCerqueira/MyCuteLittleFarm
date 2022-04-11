#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker;
template <typename R, typename T1>
struct VirtualFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1Invoker;
template <typename R, typename T1>
struct GenericVirtualFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1*, T2>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { p1, &p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
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
template <typename R>
struct InterfaceFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { &p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3, T4, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, p2, &p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3*, T4*, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, p2, p3, p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3, T4, T5, T6*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4, T5 p5, T6* p6)
	{
		R ret;
		void* params[6] = { p1, p2, &p3, &p4, &p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3*, T4*, T5*, T6>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6 p6)
	{
		R ret;
		void* params[6] = { p1, p2, p3, p4, p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2*, T3*, T4, T5, T6, T7*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5 p5, T6 p6, T7* p7)
	{
		R ret;
		void* params[7] = { p1, p2, p3, &p4, &p5, &p6, p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2*, T3*, T4*, T5*, T6*, T7>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7 p7)
	{
		R ret;
		void* params[7] = { p1, p2, p3, p4, p5, p6, &p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerFuncInvoker8;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerFuncInvoker8<R, T1*, T2, T3*, T4*, T5, T6, T7*, T8>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4, T5 p5, T6 p6, T7* p7, T8 p8)
	{
		R ret;
		void* params[8] = { p1, &p2, p3, p4, &p5, &p6, p7, &p8 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct ConstrainedActionInvoker1;
template <typename T1>
struct ConstrainedActionInvoker1<T1*>
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct ConstrainedFuncInvoker2;
template <typename R, typename T1, typename T2>
struct ConstrainedFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

// UnityEngine.UIElements.UQueryState`1/ActionQueryMatcher<System.Object>
struct ActionQueryMatcher_tB76860A856401075A2CF71D45AC72A9C0F1BB99E;
// UnityEngine.UIElements.UQueryState`1/ActionQueryMatcher<UnityEngine.UIElements.VisualElement>
struct ActionQueryMatcher_tBA08813774EDD8920F40BFFC2F27B8329C7923DD;
// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel>
struct Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<UnityEngine.Camera>
struct Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA;
// System.Action`1<System.IAsyncResult>
struct Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780;
// System.Action`1<UnityEngine.UIElements.IPanel>
struct Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6;
// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Action`1<UnityEngine.Material>
struct Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA;
// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Action`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E;
// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>
struct Action_2_t8B3B3F62C8B5EC13D5C0E28B79C6D396133CA816;
// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8;
// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector>
struct Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement>
struct Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData>
struct Dictionary_2_t29D782BF5D0A26D11A04865B4306B86575506834;
// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct Dictionary_2_t8B8AC3704119A64857E8D359CB4782C5ECEA90E7;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StylePropertyAnimationSystem/ElementPropertyPair,System.Int32>
struct Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574;
// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
// System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4;
// System.Func`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB;
// System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9;
// System.Func`2<System.Single,System.Single>
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2;
// System.Func`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>
struct Func_2_tED7CA67878EF0FB299872769153413F97964501A;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.String>
struct Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
// System.Func`3<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0;
// System.Func`3<System.Type,System.Type[],System.Type>
struct Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5;
// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799;
// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Single,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_4_t2D728D40D290F8C65346C870D314F893B5896872;
// System.Func`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9;
// UnityEngine.UIElements.UIR.Utility/GPUBuffer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct GPUBuffer_1_t59623B2A3B8EFD33FB05C973C4C4EAFCF89ED241;
// System.Reflection.RuntimePropertyInfo/Getter`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
// System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87;
// System.Collections.Generic.ICollection`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_t49C2F44B68A54E1D7F267F9CC6AEAE8497D42901;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.UIElements.StyleSheets.StylePropertyId>
struct IEqualityComparer_1_t341DBC625B94A179D2F2C3E3CF45C76E281F4612;
// UnityEngine.UIElements.IStyleValue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IStyleValue_1_t0807BFB3B6427E5EA21E4D85C41469BE44C00920;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct KeyCollection_tAE1CD1CE327D07F072532A89E6854F2C33EB014A;
// System.Collections.Generic.LinkedList`1<UnityEngine.UIElements.UIR.UIRenderDevice/DeviceToFree>
struct LinkedList_1_t09F6FB09C766455615BBF59716D285304C49E0E7;
// UnityEngine.UIElements.UIR.LinkedPool`1<UnityEngine.UIElements.UIR.MeshHandle>
struct LinkedPool_1_tD8A175EE023C8220138E51E722F4A20ACE9CA851;
// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<System.Object,System.Object>
struct ListQueryMatcher_1_t4D10BEF648526B008BEB75C8576A7D1EBFD73A83;
// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<System.Object,UnityEngine.UIElements.VisualElement>
struct ListQueryMatcher_1_tC447E3396770813CE332360F6EECEEFB6B51FA69;
// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VisualElement>
struct ListQueryMatcher_1_t7F21A0BB6BC47F1797366366A8E33731906C2940;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree>>
struct List_1_tB86898E2E533634C35EC58EC5DAE3353038A9210;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate>>
struct List_1_tA79C35FB5E50135962B53960CB758B9262700632;
// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler>
struct List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC;
// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher>
struct List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelector>
struct List_1_tB8CE94A1885E4D10B34A91CC9D21169286DC0A63;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct List_1_t491E344573B9D6F61E36AF56132B7412453928C9;
// System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset/AttributeOverride>
struct List_1_t70EE7982F45810D4B024CF720D910E67974A3094;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct ObjectPool_1_t14AD861DB16C1D8128773A1568BD9925E67A9ADB;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.InheritedData>
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.LayoutData>
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.RareData>
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransformData>
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransitionData>
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.VisualData>
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct SimpleCoroutineAwaiter_1_t9375CF9D73F0B708D171B52B83182E1990592C49;
// System.Buffers.SpanAction`2<System.Char,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A;
// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
// System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A;
// System.Reflection.RuntimePropertyInfo/StaticGetter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct TaskFactory_1_t3B055CB72CA2D1BEF08BD1C91FFB09DB3268521E;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct TaskFactory_1_t4BEAD6CE2527DBE682C128CEAA0FF2A79483E96C;
// System.Threading.Tasks.TaskFactory`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB;
// System.Tuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8;
// System.Tuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB;
// UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct ValueCollection_t04D5F77EBC72D81BB7FE7199D6C9DC65DEB60064;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Values_1_tD44BBEC769B1388DCA51C01019802B242F987014;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/EmptyData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct EmptyDataU5BU5D_t4F13631B1440411479135A222DA84C0A8FC754FD;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>[]
struct EntryU5BU5D_t524C33EA8D08013B8734724ABCA925485CF3B799;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>[]
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
// System.Collections.Generic.HashSet`1/Slot<System.Linq.Expressions.ParameterExpression>[]
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/StyleData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TimingData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034;
// System.Attribute[]
struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.UIElements.ComputedTransitionProperty[]
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.UIElements.StyleSheets.Dimension[]
struct DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B;
// UnityEngine.UIElements.IVisualTreeUpdater[]
struct IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.TextCore.Text.LineInfo[]
struct LineInfoU5BU5D_t37598F2175B291797270D1161DC29B6296FB169D;
// UnityEngine.TextCore.Text.LinkInfo[]
struct LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51;
// UnityEngine.TextCore.Text.MeshInfo[]
struct MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// UnityEngine.TextCore.Text.PageInfo[]
struct PageInfoU5BU5D_tFEA2CF88695491CFC2F2A2EF6BDCC56E52B0A6D4;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
// UnityEngine.UIElements.RuleMatcher[]
struct RuleMatcherU5BU5D_t0135EA06151E72D04414F3EAF9420CB85EE2236C;
// UnityEngine.UIElements.StyleSheets.ScalableImage[]
struct ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIElements.StyleComplexSelector[]
struct StyleComplexSelectorU5BU5D_tF7B5239DE9BF477DECF97EFBA7CB1D71C45DB857;
// UnityEngine.UIElements.StyleSheets.StylePropertyId[]
struct StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359;
// UnityEngine.UIElements.StyleRule[]
struct StyleRuleU5BU5D_t7897A39D88CA043B2BFB5B28C53B41564EBA3AF3;
// UnityEngine.UIElements.StyleSelector[]
struct StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D;
// UnityEngine.UIElements.StyleSelectorPart[]
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
// UnityEngine.TextCore.Text.TextElementInfo[]
struct TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.UIElements.VisualElement[]
struct VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF;
// UnityEngine.TextCore.Text.WordInfo[]
struct WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values[]
struct ValuesU5BU5D_t5332999C48416329B2A447FCD8C71113DDB459EA;
// UnityEngine.UIElements.StyleSheet/ImportStruct[]
struct ImportStructU5BU5D_t42D231FD5BB4B620965D7BED87D56D531B4C7AE9;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.UIElements.ContextualMenuManager
struct ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UIElements.UIR.DrawParams
struct DrawParams_t523864F415D78BD8BB14E8B7BD349594D6187443;
// UnityEngine.UIElements.ElementUnderPointer
struct ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.UIElements.EventBase
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
// System.Exception
struct Exception_t;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// UnityEngine.UIElements.HierarchyEvent
struct HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.UIElements.ICursorManager
struct ICursorManager_t78B026DED2559C62810B21C54C5F882457073A8B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UIElements.IEventHandler
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// UnityEngine.UIElements.IPanel
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
// UnityEngine.UIElements.IPointerEvent
struct IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7;
// UnityEngine.UIElements.IUxmlAttributes
struct IUxmlAttributes_t9B6679F04874117C59014DE49C35B1841F9A1DDE;
// UnityEngine.UIElements.IVisualTreeUpdater
struct IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t5B384C1DCF0750B44E124D640E4F041DB19B7FD1;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
// System.Threading.Lock
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MonoTypeInfo
struct MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
// UnityEngine.UIElements.UIR.Page
struct Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
// UnityEngine.UIElements.PropagationPaths
struct PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5;
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_t33E37F4C07B3A1F415AA97A5C5F7F5A1662A8574;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
// UnityEngine.UIElements.RepaintData
struct RepaintData_t90534752135661579EC254884F550545D001B5EA;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE;
// System.RuntimeType
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Linq.Expressions.StackGuard
struct StackGuard_t6F37D81861288F2039A29A88A6287419F220E849;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UIElements.StyleComplexSelector
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD;
// UnityEngine.UIElements.StylePropertyAnimationSystem
struct StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718;
// UnityEngine.UIElements.StyleRule
struct StyleRule_t69F0C0989004F85BBD9C72BC7A73F79BFE61651E;
// UnityEngine.UIElements.StyleSelector
struct StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362;
// UnityEngine.UIElements.StyleSheet
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UIElements.UIR.TextureSlotManager
struct TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D;
// System.Type
struct Type_t;
// UnityEngine.UIElements.UIR.UIRenderDevice
struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302;
// UnityEngine.UnityException
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067;
// UnityEngine.UIElements.UxmlAttributeDescription
struct UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2;
// UnityEngine.UIElements.UxmlTypeRestriction
struct UxmlTypeRestriction_t2C4CE1ED76502CDF80010880E058AF0582910A92;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// System.Xml.Linq.XContainer
struct XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF;
// System.Xml.Linq.XDeclaration
struct XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990;
// System.Xml.Linq.XDocument
struct XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1;
// System.Xml.Linq.XObject
struct XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29;
// System.Xml.Schema.XmlListConverter
struct XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF;
// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E;
// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F;
// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;
// System.Reflection.RuntimePropertyInfo/GetterAdapter
struct GetterAdapter_t03939DF178051A4B282ADA9CC4395C34B86D9D2E;
// UnityEngine.UIElements.StylePropertyAnimationSystem/Values
struct Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesBackground
struct ValuesBackground_tFF4533C18E78BDA24210ECA0967C209A2FD2FB34;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesColor
struct ValuesColor_tDE4E373E9165A21D96B77B831D7663BE93073904;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFloat
struct ValuesFloat_t79D7FFC3D96EA35AFBCE6E41A84C30186FFFF0C2;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFont
struct ValuesFont_tD9B58EA95F0D99292A54C9C6C879318BBE3B02A4;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFontDefinition
struct ValuesFontDefinition_t4D0C2DECA9435D3EB901FE70837AD878111678F7;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesInt
struct ValuesInt_t2D0093355274C731BB6DF9C8933EEEDA42276367;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesLength
struct ValuesLength_tCE4AE0723109EE10076DBD46F7A853F202AF5915;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesRotate
struct ValuesRotate_t90582D6825FCBEF3C2A68160CCEC275C51217C63;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesScale
struct ValuesScale_t21E6FC5B09789CB4974FC2ED15C3F83B863FCF8A;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTextShadow
struct ValuesTextShadow_t50CB05DF0E7770164252616605C61B37DB4A966C;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTransformOrigin
struct ValuesTransformOrigin_tB46EC0F073E360E1431CCD4E580BA675D716823F;
// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTranslate
struct ValuesTranslate_tFB5B432755E0DAA7DD8C95E78FDCC78C4885940B;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// UnityEngine.UIElements.VisualElement/CustomStyleAccess
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
// UnityEngine.UIElements.VisualElement/TypeData
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;
// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XNode_t185C922661054AAD14F49676DD6F3CB10D652A30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A452795E040C66D151B05EE8648BF3F8016F207;
IL2CPP_EXTERN_C String_t* _stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614;
IL2CPP_EXTERN_C String_t* _stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral2F9BACDA740D58784E6ACAE19F0F0BC32F753A58;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3B7C488730395F30FB98C2A06659180F70881429;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral7AD319493499620E43634FF644A0CEF1624086AD;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralA7FBBFFB8EE0FB972E2B09691037C46596893A5A;
IL2CPP_EXTERN_C String_t* _stringLiteralB2EAC54936C480056DBBB5B97FD1CFD1C79B1990;
IL2CPP_EXTERN_C String_t* _stringLiteralB382FDA4B30D0397739E8EC9B987AB66568010F7;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F;
IL2CPP_EXTERN_C String_t* _stringLiteralC472776C9180B19630B6E4112538D935B62E3F35;
IL2CPP_EXTERN_C String_t* _stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775;
IL2CPP_EXTERN_C String_t* _stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralF704B54D833421164E45E576DFD279921246BCEA;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE2CB2DBE9CFA9FD3FF4707BB20A9B1FE52C76273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA2DB3B33B757C906EBF689F682FD659A191A242B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m71E6FD21D54996DACBC26526FABF5E57B9E4C3B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSliceUnsafeUtility_GetUnsafePtr_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_m5682E2958E30CCCFB6477FB04847917857BEFAFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeSlice_1_get_Length_m2566843C81FEFDDF6407962D4E34F13C3133028D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionaryHelpers_CopyToNonGenericICollectionHelper_TisIl2CppFullySharedGenericAny_mB4FBCBEA1614B532CB7E2523E770130D72A4AC8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionDelegateFactory_CreateGet_TisIl2CppFullySharedGenericAny_m68C74CDF3ABC2AF3B2EF9CB7C08D11E05879B0A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionDelegateFactory_CreateSet_TisIl2CppFullySharedGenericAny_m3C18D69140F526B310E553C1C35B8E57C4CC7FA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StackGuard_RunOnEmptyStackCore_TisRuntimeObject_m3E82B5CE8F4D3419B7B2926F61607D2901037384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringUtils_ForgivingCaseSensitiveFind_TisIl2CppFullySharedGenericAny_m3FDCD66E0E3F06BAE8B9D6D6773BF58E96F2E7C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Create_TisIl2CppFullySharedGenericAny_mC571D61AA789807D59CAE43CB15AE8779FB56E65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskToApm_End_TisIl2CppFullySharedGenericAny_mA9EB995282FE198F78B9549F49129B68B66E517B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisIl2CppFullySharedGenericAny_mB636433E6C3D31528DE7523373943D4417E75057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisIl2CppFullySharedGenericAny_mB8015D06919AC2DAAF83488DB1E4A9712A2508D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromException_TisIl2CppFullySharedGenericAny_mBCA2F1FE0BB0099662EBCB343DA474E2BB09550A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_Run_TisIl2CppFullySharedGenericAny_m02CCBAD925BF02455927314190511A77E0A87E73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisIl2CppFullySharedGenericStruct_mDC6FE57DC7D62BAC05E6231541767FA81448490E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadPool_QueueUserWorkItem_TisIl2CppFullySharedGenericAny_m9C6B6650B30539CF5E0D5002BEF91E20CEF97FA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIRenderDevice_DrawRanges_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m71F34C7DEDCF897C928FC2BED61084149C5AF648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryBuilder_1__ctor_m841C38F69A30425CCEA1F93525C97AD0B9648486_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryExtensions_Query_TisRuntimeObject_m6A1C2EF1952AF47CD8709A5CC5B5E6620115F342_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxmlAttributeDescription_GetValueFromBag_TisIl2CppFullySharedGenericAny_mAD4F4838D245291B33A0A6819595AAE917FA073A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D;
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.StackGuard/<>c__3`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec__3_2_tBB29CF1C815215807833CEA7087B12B63B7551BC  : public RuntimeObject
{
};

struct U3CU3Ec__3_2_tBB29CF1C815215807833CEA7087B12B63B7551BC_StaticFields
{
	// System.Linq.Expressions.StackGuard/<>c__3`2<T1,T2> System.Linq.Expressions.StackGuard/<>c__3`2::<>9
	U3CU3Ec__3_2_tBB29CF1C815215807833CEA7087B12B63B7551BC* ___U3CU3E9_0;
	// System.Func`2<System.Object,System.Object> System.Linq.Expressions.StackGuard/<>c__3`2::<>9__3_0
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___U3CU3E9__3_0_1;
};

// Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass14_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec__DisplayClass14_0_1_t76EA529FB0FC3BD68537D185424BE9FB75526E96  : public RuntimeObject
{
	// System.Func`2<TSource,System.String> Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass14_0`1::valueSelector
	Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* ___valueSelector_0;
	// System.String Newtonsoft.Json.Utilities.StringUtils/<>c__DisplayClass14_0`1::testValue
	String_t* ___testValue_1;
};

// System.Threading.ThreadPool/<>c__DisplayClass17_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9  : public RuntimeObject
{
	// System.Action`1<TState> System.Threading.ThreadPool/<>c__DisplayClass17_0`1::callBack
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___callBack_0;
};

// TaskExtensions/<AsIEnumerator>d__1`1<System.Object>
struct U3CAsIEnumeratorU3Ed__1_1_tE6211D98DDC76BA6E1A04C9909C10AF65BA77241  : public RuntimeObject
{
	// System.Int32 TaskExtensions/<AsIEnumerator>d__1`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// T TaskExtensions/<AsIEnumerator>d__1`1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Threading.Tasks.Task`1<T> TaskExtensions/<AsIEnumerator>d__1`1::task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___task_2;
};

// IEnumeratorAwaitExtensions/InstructionWrappers/<ReturnSelf>d__2`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CReturnSelfU3Ed__2_1_tC289F9E6881785B4EEA32FF0B9756FB4BFBBEFD0 : public RuntimeObject {};

// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct Dictionary_2_t8B8AC3704119A64857E8D359CB4782C5ECEA90E7  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t524C33EA8D08013B8734724ABCA925485CF3B799* ____entries_1;
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
	KeyCollection_tAE1CD1CE327D07F072532A89E6854F2C33EB014A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t04D5F77EBC72D81BB7FE7199D6C9DC65DEB60064* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};

struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	// T[] System.EmptyArray`1::Value
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value_0;
};

// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};

struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer_0;
};

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// UnityEngine.UIElements.UQuery/IsOfType`1<System.Object>
struct IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4  : public RuntimeObject
{
};

struct IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4_StaticFields
{
	// UnityEngine.UIElements.UQuery/IsOfType`1<T> UnityEngine.UIElements.UQuery/IsOfType`1::s_Instance
	IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4* ___s_Instance_0;
};

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher>
struct List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RuleMatcherU5BU5D_t0135EA06151E72D04414F3EAF9420CB85EE2236C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RuleMatcherU5BU5D_t0135EA06151E72D04414F3EAF9420CB85EE2236C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyAnimationSystem/Values>
struct List_1_t491E344573B9D6F61E36AF56132B7412453928C9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ValuesU5BU5D_t5332999C48416329B2A447FCD8C71113DDB459EA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t491E344573B9D6F61E36AF56132B7412453928C9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ValuesU5BU5D_t5332999C48416329B2A447FCD8C71113DDB459EA* ___s_emptyArray_5;
};

// IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct SimpleCoroutineAwaiter_1_t9375CF9D73F0B708D171B52B83182E1990592C49 : public RuntimeObject {};

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Tuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8 : public RuntimeObject {};

// System.Tuple`3<System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Tuple_3_tF0821A7BEADD05320E476CF9AB276DF6ECE58A83 : public RuntimeObject {};

// System.Tuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB : public RuntimeObject {};

// UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482 : public RuntimeObject {};

struct ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482_StaticFields
{
	// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<T>> UnityEngine.UIElements.Experimental.ValueAnimation`1::sObjectPool
	ObjectPool_1_t14AD861DB16C1D8128773A1568BD9925E67A9ADB* ___sObjectPool_7;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry_0;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
};

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
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

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UnityEngine.UIElements.PointerEventsHelper
struct PointerEventsHelper_tBCB1C72023C15955BDC79A319622ADC3F583EE82  : public RuntimeObject
{
};

// System.Collections.ObjectModel.ReadOnlyDictionaryHelpers
struct ReadOnlyDictionaryHelpers_t2EE6B86AB75EFC31602291E40C3469F1C18D9278  : public RuntimeObject
{
};

// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_t33E37F4C07B3A1F415AA97A5C5F7F5A1662A8574  : public RuntimeObject
{
};

// Newtonsoft.Json.Utilities.ReflectionUtils
struct ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02  : public RuntimeObject
{
};

struct ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_StaticFields
{
	// System.Type[] Newtonsoft.Json.Utilities.ReflectionUtils::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_0;
};

// UnityEngine.Resources
struct Resources_t4745F52065DB80D8880840AEDC45965DE35128E1  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.RuntimeHelpers
struct RuntimeHelpers_t9E6C71E90FD7CAB0987E101A77FBDA52EFDE284C  : public RuntimeObject
{
};

// UnityEngine.UI.SetPropertyUtility
struct SetPropertyUtility_t7A9A8AC1523C59CF066D8802A39FD11F635AE623  : public RuntimeObject
{
};

// System.SpanHelpers
struct SpanHelpers_tCA85E2BE495D0EC31B7D20D20E9FC3309265176A  : public RuntimeObject
{
};

// System.Linq.Expressions.StackGuard
struct StackGuard_t6F37D81861288F2039A29A88A6287419F220E849  : public RuntimeObject
{
	// System.Int32 System.Linq.Expressions.StackGuard::_executionStackCount
	int32_t ____executionStackCount_0;
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

// Newtonsoft.Json.Utilities.StringUtils
struct StringUtils_t75109D93154FD28B31CEBBBC5849300A7F7C3842  : public RuntimeObject
{
};

// UnityEngine.UIElements.StyleComplexSelector
struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD  : public RuntimeObject
{
	// System.Int32 UnityEngine.UIElements.StyleComplexSelector::m_Specificity
	int32_t ___m_Specificity_0;
	// UnityEngine.UIElements.StyleRule UnityEngine.UIElements.StyleComplexSelector::<rule>k__BackingField
	StyleRule_t69F0C0989004F85BBD9C72BC7A73F79BFE61651E* ___U3CruleU3Ek__BackingField_1;
	// UnityEngine.UIElements.StyleSelector[] UnityEngine.UIElements.StyleComplexSelector::m_Selectors
	StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* ___m_Selectors_2;
	// System.Int32 UnityEngine.UIElements.StyleComplexSelector::ruleIndex
	int32_t ___ruleIndex_3;
	// UnityEngine.UIElements.StyleComplexSelector UnityEngine.UIElements.StyleComplexSelector::nextInTable
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___nextInTable_4;
	// System.Int32 UnityEngine.UIElements.StyleComplexSelector::orderInStyleSheet
	int32_t ___orderInStyleSheet_5;
};

struct StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector/PseudoStateData> UnityEngine.UIElements.StyleComplexSelector::s_PseudoStates
	Dictionary_2_t29D782BF5D0A26D11A04865B4306B86575506834* ___s_PseudoStates_6;
};

// UnityEngine.UIElements.StylePropertyAnimationSystem
struct StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718  : public RuntimeObject
{
	// System.Int64 UnityEngine.UIElements.StylePropertyAnimationSystem::m_CurrentTimeMs
	int64_t ___m_CurrentTimeMs_0;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFloat UnityEngine.UIElements.StylePropertyAnimationSystem::m_Floats
	ValuesFloat_t79D7FFC3D96EA35AFBCE6E41A84C30186FFFF0C2* ___m_Floats_1;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesInt UnityEngine.UIElements.StylePropertyAnimationSystem::m_Ints
	ValuesInt_t2D0093355274C731BB6DF9C8933EEEDA42276367* ___m_Ints_2;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesLength UnityEngine.UIElements.StylePropertyAnimationSystem::m_Lengths
	ValuesLength_tCE4AE0723109EE10076DBD46F7A853F202AF5915* ___m_Lengths_3;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesColor UnityEngine.UIElements.StylePropertyAnimationSystem::m_Colors
	ValuesColor_tDE4E373E9165A21D96B77B831D7663BE93073904* ___m_Colors_4;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesBackground UnityEngine.UIElements.StylePropertyAnimationSystem::m_Backgrounds
	ValuesBackground_tFF4533C18E78BDA24210ECA0967C209A2FD2FB34* ___m_Backgrounds_5;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFontDefinition UnityEngine.UIElements.StylePropertyAnimationSystem::m_FontDefinitions
	ValuesFontDefinition_t4D0C2DECA9435D3EB901FE70837AD878111678F7* ___m_FontDefinitions_6;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesFont UnityEngine.UIElements.StylePropertyAnimationSystem::m_Fonts
	ValuesFont_tD9B58EA95F0D99292A54C9C6C879318BBE3B02A4* ___m_Fonts_7;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTextShadow UnityEngine.UIElements.StylePropertyAnimationSystem::m_TextShadows
	ValuesTextShadow_t50CB05DF0E7770164252616605C61B37DB4A966C* ___m_TextShadows_8;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesScale UnityEngine.UIElements.StylePropertyAnimationSystem::m_Scale
	ValuesScale_t21E6FC5B09789CB4974FC2ED15C3F83B863FCF8A* ___m_Scale_9;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesRotate UnityEngine.UIElements.StylePropertyAnimationSystem::m_Rotate
	ValuesRotate_t90582D6825FCBEF3C2A68160CCEC275C51217C63* ___m_Rotate_10;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTranslate UnityEngine.UIElements.StylePropertyAnimationSystem::m_Translate
	ValuesTranslate_tFB5B432755E0DAA7DD8C95E78FDCC78C4885940B* ___m_Translate_11;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesTransformOrigin UnityEngine.UIElements.StylePropertyAnimationSystem::m_TransformOrigin
	ValuesTransformOrigin_tB46EC0F073E360E1431CCD4E580BA675D716823F* ___m_TransformOrigin_12;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyAnimationSystem/Values> UnityEngine.UIElements.StylePropertyAnimationSystem::m_AllValues
	List_1_t491E344573B9D6F61E36AF56132B7412453928C9* ___m_AllValues_13;
	// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values> UnityEngine.UIElements.StylePropertyAnimationSystem::m_PropertyToValues
	Dictionary_2_t8B8AC3704119A64857E8D359CB4782C5ECEA90E7* ___m_PropertyToValues_14;
};

// UnityEngine.UIElements.StyleSelector
struct StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362  : public RuntimeObject
{
	// UnityEngine.UIElements.StyleSelectorPart[] UnityEngine.UIElements.StyleSelector::m_Parts
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___m_Parts_0;
	// UnityEngine.UIElements.StyleSelectorRelationship UnityEngine.UIElements.StyleSelector::m_PreviousRelationship
	int32_t ___m_PreviousRelationship_1;
	// System.Int32 UnityEngine.UIElements.StyleSelector::pseudoStateMask
	int32_t ___pseudoStateMask_2;
	// System.Int32 UnityEngine.UIElements.StyleSelector::negatedPseudoStateMask
	int32_t ___negatedPseudoStateMask_3;
};

// UnityEngine.UIElements.StyleValueExtensions
struct StyleValueExtensions_t726B74FF15FD6E36DAD4BF0C34078437975FF358  : public RuntimeObject
{
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// TaskExtensions
struct TaskExtensions_t56D35813739ECD3726E7BA678CF7A01C8AE409C8  : public RuntimeObject
{
};

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_2;
};

struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler_0;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_1;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException_3;
	// System.Threading.Lock System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject_4;
};

// System.Threading.Tasks.TaskToApm
struct TaskToApm_t85E4852EFE616610E8B037ECB1926B91DEA7D458  : public RuntimeObject
{
};

// System.Threading.ThreadPool
struct ThreadPool_t1EE413B12D8BD9F25602041645272351A26711FC  : public RuntimeObject
{
};

// System.ThrowHelper
struct ThrowHelper_tDAFF1075E5B21B120EF09F3F2EAD51037DAB6F73  : public RuntimeObject
{
};

// System.Tuple
struct Tuple_tB9DB3180F4853E781BFDDC3093798F56B27AB03F  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.Unsafe
struct Unsafe_t013486CBD5A88F5F394651AB34F2AC5AE97E71E4  : public RuntimeObject
{
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tC3E6B7D52A973A81739E8BD97D6E757BA8371D46  : public RuntimeObject
{
};

// UnityEngine.UIElements.UxmlAttributeDescription
struct UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2  : public RuntimeObject
{
	// System.String UnityEngine.UIElements.UxmlAttributeDescription::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String[] UnityEngine.UIElements.UxmlAttributeDescription::m_ObsoleteNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ObsoleteNames_1;
	// System.String UnityEngine.UIElements.UxmlAttributeDescription::<type>k__BackingField
	String_t* ___U3CtypeU3Ek__BackingField_2;
	// System.String UnityEngine.UIElements.UxmlAttributeDescription::<typeNamespace>k__BackingField
	String_t* ___U3CtypeNamespaceU3Ek__BackingField_3;
	// UnityEngine.UIElements.UxmlAttributeDescription/Use UnityEngine.UIElements.UxmlAttributeDescription::<use>k__BackingField
	int32_t ___U3CuseU3Ek__BackingField_4;
	// UnityEngine.UIElements.UxmlTypeRestriction UnityEngine.UIElements.UxmlAttributeDescription::<restriction>k__BackingField
	UxmlTypeRestriction_t2C4CE1ED76502CDF80010880E058AF0582910A92* ___U3CrestrictionU3Ek__BackingField_5;
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

// System.Numerics.Vector
struct Vector_t246EF05F1CA5F494FB8B48AB2724DFCD2C2C5A9A  : public RuntimeObject
{
};

// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9  : public RuntimeObject
{
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualTreeUpdater::m_Panel
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel_0;
	// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray UnityEngine.UIElements.VisualTreeUpdater::m_UpdaterArray
	UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* ___m_UpdaterArray_1;
};

// System.Threading.Volatile
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};

// System.Xml.Linq.XObject
struct XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29  : public RuntimeObject
{
	// System.Xml.Linq.XContainer System.Xml.Linq.XObject::parent
	XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* ___parent_0;
	// System.Object System.Xml.Linq.XObject::annotations
	RuntimeObject* ___annotations_1;
};

// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E  : public RuntimeObject
{
};

// IEnumeratorAwaitExtensions/InstructionWrappers
struct InstructionWrappers_tA6D1C998B8548CC04749D0A85D62B9E4F24D0C19  : public RuntimeObject
{
};

// UnityEngine.UIElements.StylePropertyAnimationSystem/Values
struct Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24  : public RuntimeObject
{
};

// System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult
struct TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB  : public RuntimeObject
{
	// System.Threading.Tasks.Task System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::Task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___Task_0;
	// System.Object System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::_state
	RuntimeObject* ____state_1;
	// System.Boolean System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::_completedSynchronously
	bool ____completedSynchronously_2;
};

// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449  : public RuntimeObject
{
	// UnityEngine.UIElements.IVisualTreeUpdater[] UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::m_VisualTreeUpdaters
	IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8* ___m_VisualTreeUpdaters_0;
};

// UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2<UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/EmptyData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915 
{
	// UnityEngine.UIElements.VisualElement[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::elements
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___elements_0;
	// UnityEngine.UIElements.StyleSheets.StylePropertyId[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::properties
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___properties_1;
	// TTimingData[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::timing
	EmptyDataU5BU5D_t4F13631B1440411479135A222DA84C0A8FC754FD* ___timing_2;
	// TStyleData[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::style
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___style_3;
	// System.Int32 UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::count
	int32_t ___count_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StylePropertyAnimationSystem/ElementPropertyPair,System.Int32> UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::indices
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___indices_5;
};

// UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2<UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TimingData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/StyleData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450 
{
	// UnityEngine.UIElements.VisualElement[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::elements
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___elements_0;
	// UnityEngine.UIElements.StyleSheets.StylePropertyId[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::properties
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___properties_1;
	// TTimingData[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::timing
	TimingDataU5BU5D_t40BFF41AB9AB1B48D40F16053EB4075E2D3BE034* ___timing_2;
	// TStyleData[] UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::style
	StyleDataU5BU5D_t4985308A6F3BF3C1B99A3E0CAA8F2994E329420A* ___style_3;
	// System.Int32 UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::count
	int32_t ___count_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StylePropertyAnimationSystem/ElementPropertyPair,System.Int32> UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2::indices
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___indices_5;
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

// Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.DrawBufferRange>
struct NativeSlice_1_t2E5DBD9A5F77A5044A4160098A0B2A45D3EE8974 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// Unity.Collections.NativeSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData>
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData>
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData>
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData>
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData>
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData>
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_result_22;
};

struct Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t3B055CB72CA2D1BEF08BD1C91FFB09DB3268521E* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};

struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D* ___s_defaultFactory_23;
};

// UnityEngine.UIElements.UQueryBuilder`1<System.Object>
struct UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 
{
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelector> UnityEngine.UIElements.UQueryBuilder`1::m_StyleSelectors
	List_1_tB8CE94A1885E4D10B34A91CC9D21169286DC0A63* ___m_StyleSelectors_0;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart> UnityEngine.UIElements.UQueryBuilder`1::m_Parts
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___m_Parts_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UQueryBuilder`1::m_Element
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Element_2;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher> UnityEngine.UIElements.UQueryBuilder`1::m_Matchers
	List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* ___m_Matchers_3;
	// UnityEngine.UIElements.StyleSelectorRelationship UnityEngine.UIElements.UQueryBuilder`1::m_Relationship
	int32_t ___m_Relationship_4;
	// System.Int32 UnityEngine.UIElements.UQueryBuilder`1::pseudoStatesMask
	int32_t ___pseudoStatesMask_5;
	// System.Int32 UnityEngine.UIElements.UQueryBuilder`1::negatedPseudoStatesMask
	int32_t ___negatedPseudoStatesMask_6;
};

// UnityEngine.UIElements.UQueryBuilder`1<UnityEngine.UIElements.VisualElement>
struct UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139 
{
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelector> UnityEngine.UIElements.UQueryBuilder`1::m_StyleSelectors
	List_1_tB8CE94A1885E4D10B34A91CC9D21169286DC0A63* ___m_StyleSelectors_0;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart> UnityEngine.UIElements.UQueryBuilder`1::m_Parts
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___m_Parts_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UQueryBuilder`1::m_Element
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Element_2;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher> UnityEngine.UIElements.UQueryBuilder`1::m_Matchers
	List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* ___m_Matchers_3;
	// UnityEngine.UIElements.StyleSelectorRelationship UnityEngine.UIElements.UQueryBuilder`1::m_Relationship
	int32_t ___m_Relationship_4;
	// System.Int32 UnityEngine.UIElements.UQueryBuilder`1::pseudoStatesMask
	int32_t ___pseudoStatesMask_5;
	// System.Int32 UnityEngine.UIElements.UQueryBuilder`1::negatedPseudoStatesMask
	int32_t ___negatedPseudoStatesMask_6;
};

// UnityEngine.UIElements.UQueryState`1<System.Object>
struct UQueryState_1_tDA47936DEF27643350186CA4E1DED7053A3D02B2 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UQueryState`1::m_Element
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Element_1;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher> UnityEngine.UIElements.UQueryState`1::m_Matchers
	List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* ___m_Matchers_2;
};

struct UQueryState_1_tDA47936DEF27643350186CA4E1DED7053A3D02B2_StaticFields
{
	// UnityEngine.UIElements.UQueryState`1/ActionQueryMatcher<T> UnityEngine.UIElements.UQueryState`1::s_Action
	ActionQueryMatcher_tB76860A856401075A2CF71D45AC72A9C0F1BB99E* ___s_Action_0;
	// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<T,T> UnityEngine.UIElements.UQueryState`1::s_List
	ListQueryMatcher_1_t4D10BEF648526B008BEB75C8576A7D1EBFD73A83* ___s_List_3;
	// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<T,UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryState`1::s_EnumerationList
	ListQueryMatcher_1_tC447E3396770813CE332360F6EECEEFB6B51FA69* ___s_EnumerationList_4;
};

// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement>
struct UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UQueryState`1::m_Element
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Element_1;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher> UnityEngine.UIElements.UQueryState`1::m_Matchers
	List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* ___m_Matchers_2;
};

struct UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA_StaticFields
{
	// UnityEngine.UIElements.UQueryState`1/ActionQueryMatcher<T> UnityEngine.UIElements.UQueryState`1::s_Action
	ActionQueryMatcher_tBA08813774EDD8920F40BFFC2F27B8329C7923DD* ___s_Action_0;
	// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<T,T> UnityEngine.UIElements.UQueryState`1::s_List
	ListQueryMatcher_1_t7F21A0BB6BC47F1797366366A8E33731906C2940* ___s_List_3;
	// UnityEngine.UIElements.UQueryState`1/ListQueryMatcher`1<T,UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryState`1::s_EnumerationList
	ListQueryMatcher_1_t7F21A0BB6BC47F1797366366A8E33731906C2940* ___s_EnumerationList_4;
};

// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;
};

struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30_StaticFields
{
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.BMPAlloc::Invalid
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___Invalid_0;
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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.CreationContext::<target>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField_1;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.CreationContext::<visualTreeAsset>k__BackingField
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.CreationContext::<slotInsertionPoints>k__BackingField
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset/AttributeOverride> UnityEngine.UIElements.CreationContext::<attributeOverrides>k__BackingField
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField_4;
};

struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_StaticFields
{
	// UnityEngine.UIElements.CreationContext UnityEngine.UIElements.CreationContext::Default
	CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___Default_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField_1;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField_2;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField_3;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField_1;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField_2;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField_3;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField_4;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Focusable::m_DelegatesFocus
	bool ___m_DelegatesFocus_3;
	// System.Boolean UnityEngine.UIElements.Focusable::m_ExcludeFromFocusRing
	bool ___m_ExcludeFromFocusRing_4;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_5;
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

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C 
{
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t* ___parent_0;
	// System.Type System.Reflection.MonoPropertyInfo::declaring_type
	Type_t* ___declaring_type_1;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t* ___get_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t* ___set_method_4;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshaled_pinvoke
{
	Type_t* ___parent_0;
	Type_t* ___declaring_type_1;
	char* ___name_2;
	MethodInfo_t* ___get_method_3;
	MethodInfo_t* ___set_method_4;
	int32_t ___attrs_5;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C_marshaled_com
{
	Type_t* ___parent_0;
	Type_t* ___declaring_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t* ___get_method_3;
	MethodInfo_t* ___set_method_4;
	int32_t ___attrs_5;
};

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
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

// System.Numerics.Register
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte System.Numerics.Register::byte_0
			uint8_t ___byte_0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_1_OffsetPadding[1];
			// System.Byte System.Numerics.Register::byte_1
			uint8_t ___byte_1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_2_OffsetPadding[2];
			// System.Byte System.Numerics.Register::byte_2
			uint8_t ___byte_2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_3_OffsetPadding[3];
			// System.Byte System.Numerics.Register::byte_3
			uint8_t ___byte_3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_4_OffsetPadding[4];
			// System.Byte System.Numerics.Register::byte_4
			uint8_t ___byte_4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_5_OffsetPadding[5];
			// System.Byte System.Numerics.Register::byte_5
			uint8_t ___byte_5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_6_OffsetPadding[6];
			// System.Byte System.Numerics.Register::byte_6
			uint8_t ___byte_6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_7_OffsetPadding[7];
			// System.Byte System.Numerics.Register::byte_7
			uint8_t ___byte_7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_8_OffsetPadding[8];
			// System.Byte System.Numerics.Register::byte_8
			uint8_t ___byte_8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_9_OffsetPadding[9];
			// System.Byte System.Numerics.Register::byte_9
			uint8_t ___byte_9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_10_OffsetPadding[10];
			// System.Byte System.Numerics.Register::byte_10
			uint8_t ___byte_10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_11_OffsetPadding[11];
			// System.Byte System.Numerics.Register::byte_11
			uint8_t ___byte_11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_12_OffsetPadding[12];
			// System.Byte System.Numerics.Register::byte_12
			uint8_t ___byte_12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_13_OffsetPadding[13];
			// System.Byte System.Numerics.Register::byte_13
			uint8_t ___byte_13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_14_OffsetPadding[14];
			// System.Byte System.Numerics.Register::byte_14
			uint8_t ___byte_14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_15_OffsetPadding[15];
			// System.Byte System.Numerics.Register::byte_15
			uint8_t ___byte_15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte System.Numerics.Register::sbyte_0
			int8_t ___sbyte_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_17_OffsetPadding[1];
			// System.SByte System.Numerics.Register::sbyte_1
			int8_t ___sbyte_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_18_OffsetPadding[2];
			// System.SByte System.Numerics.Register::sbyte_2
			int8_t ___sbyte_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_19_OffsetPadding[3];
			// System.SByte System.Numerics.Register::sbyte_3
			int8_t ___sbyte_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_20_OffsetPadding[4];
			// System.SByte System.Numerics.Register::sbyte_4
			int8_t ___sbyte_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_21_OffsetPadding[5];
			// System.SByte System.Numerics.Register::sbyte_5
			int8_t ___sbyte_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_22_OffsetPadding[6];
			// System.SByte System.Numerics.Register::sbyte_6
			int8_t ___sbyte_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_23_OffsetPadding[7];
			// System.SByte System.Numerics.Register::sbyte_7
			int8_t ___sbyte_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_24_OffsetPadding[8];
			// System.SByte System.Numerics.Register::sbyte_8
			int8_t ___sbyte_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_25_OffsetPadding[9];
			// System.SByte System.Numerics.Register::sbyte_9
			int8_t ___sbyte_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_26_OffsetPadding[10];
			// System.SByte System.Numerics.Register::sbyte_10
			int8_t ___sbyte_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_27_OffsetPadding[11];
			// System.SByte System.Numerics.Register::sbyte_11
			int8_t ___sbyte_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_28_OffsetPadding[12];
			// System.SByte System.Numerics.Register::sbyte_12
			int8_t ___sbyte_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_29_OffsetPadding[13];
			// System.SByte System.Numerics.Register::sbyte_13
			int8_t ___sbyte_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_30_OffsetPadding[14];
			// System.SByte System.Numerics.Register::sbyte_14
			int8_t ___sbyte_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_31_OffsetPadding[15];
			// System.SByte System.Numerics.Register::sbyte_15
			int8_t ___sbyte_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 System.Numerics.Register::uint16_0
			uint16_t ___uint16_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_33_OffsetPadding[2];
			// System.UInt16 System.Numerics.Register::uint16_1
			uint16_t ___uint16_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_34_OffsetPadding[4];
			// System.UInt16 System.Numerics.Register::uint16_2
			uint16_t ___uint16_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_35_OffsetPadding[6];
			// System.UInt16 System.Numerics.Register::uint16_3
			uint16_t ___uint16_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_36_OffsetPadding[8];
			// System.UInt16 System.Numerics.Register::uint16_4
			uint16_t ___uint16_4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_37_OffsetPadding[10];
			// System.UInt16 System.Numerics.Register::uint16_5
			uint16_t ___uint16_5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_38_OffsetPadding[12];
			// System.UInt16 System.Numerics.Register::uint16_6
			uint16_t ___uint16_6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_39_OffsetPadding[14];
			// System.UInt16 System.Numerics.Register::uint16_7
			uint16_t ___uint16_7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Numerics.Register::int16_0
			int16_t ___int16_0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_41_OffsetPadding[2];
			// System.Int16 System.Numerics.Register::int16_1
			int16_t ___int16_1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_42_OffsetPadding[4];
			// System.Int16 System.Numerics.Register::int16_2
			int16_t ___int16_2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_43_OffsetPadding[6];
			// System.Int16 System.Numerics.Register::int16_3
			int16_t ___int16_3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_44_OffsetPadding[8];
			// System.Int16 System.Numerics.Register::int16_4
			int16_t ___int16_4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_45_OffsetPadding[10];
			// System.Int16 System.Numerics.Register::int16_5
			int16_t ___int16_5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_46_OffsetPadding[12];
			// System.Int16 System.Numerics.Register::int16_6
			int16_t ___int16_6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_47_OffsetPadding[14];
			// System.Int16 System.Numerics.Register::int16_7
			int16_t ___int16_7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 System.Numerics.Register::uint32_0
			uint32_t ___uint32_0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_49_OffsetPadding[4];
			// System.UInt32 System.Numerics.Register::uint32_1
			uint32_t ___uint32_1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_50_OffsetPadding[8];
			// System.UInt32 System.Numerics.Register::uint32_2
			uint32_t ___uint32_2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_51_OffsetPadding[12];
			// System.UInt32 System.Numerics.Register::uint32_3
			uint32_t ___uint32_3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Numerics.Register::int32_0
			int32_t ___int32_0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_53_OffsetPadding[4];
			// System.Int32 System.Numerics.Register::int32_1
			int32_t ___int32_1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_54_OffsetPadding[8];
			// System.Int32 System.Numerics.Register::int32_2
			int32_t ___int32_2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_55_OffsetPadding[12];
			// System.Int32 System.Numerics.Register::int32_3
			int32_t ___int32_3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Numerics.Register::uint64_0
			uint64_t ___uint64_0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_57_OffsetPadding[8];
			// System.UInt64 System.Numerics.Register::uint64_1
			uint64_t ___uint64_1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 System.Numerics.Register::int64_0
			int64_t ___int64_0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_59_OffsetPadding[8];
			// System.Int64 System.Numerics.Register::int64_1
			int64_t ___int64_1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single System.Numerics.Register::single_0
			float ___single_0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_61_OffsetPadding[4];
			// System.Single System.Numerics.Register::single_1
			float ___single_1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_61_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_62_OffsetPadding[8];
			// System.Single System.Numerics.Register::single_2
			float ___single_2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_62_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_63_OffsetPadding[12];
			// System.Single System.Numerics.Register::single_3
			float ___single_3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_63_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double System.Numerics.Register::double_0
			double ___double_0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_65_OffsetPadding[8];
			// System.Double System.Numerics.Register::double_1
			double ___double_1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_65_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_65_forAlignmentOnly;
		};
	};
};

// UnityEngine.UIElements.RuleMatcher
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E 
{
	// UnityEngine.UIElements.StyleSheet UnityEngine.UIElements.RuleMatcher::sheet
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	// UnityEngine.UIElements.StyleComplexSelector UnityEngine.UIElements.RuleMatcher::complexSelector
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.RuleMatcher
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshaled_pinvoke
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.RuleMatcher
struct RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E_marshaled_com
{
	StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428* ___sheet_0;
	StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* ___complexSelector_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	// System.String UnityEngine.UIElements.StyleSelectorPart::m_Value
	String_t* ___m_Value_0;
	// UnityEngine.UIElements.StyleSelectorType UnityEngine.UIElements.StyleSelectorPart::m_Type
	int32_t ___m_Type_1;
	// System.Object UnityEngine.UIElements.StyleSelectorPart::tempData
	RuntimeObject* ___tempData_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};

// UnityEngine.UIElements.StyleValueHandle
struct StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D 
{
	// UnityEngine.UIElements.StyleValueType UnityEngine.UIElements.StyleValueHandle::m_ValueType
	int32_t ___m_ValueType_0;
	// System.Int32 UnityEngine.UIElements.StyleValueHandle::valueIndex
	int32_t ___valueIndex_1;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// System.Threading.Tasks.VoidTaskResult
struct VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC 
{
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC__padding[1];
	};
};

// System.Xml.Linq.XNode
struct XNode_t185C922661054AAD14F49676DD6F3CB10D652A30  : public XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29
{
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::next
	XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* ___next_2;
};

// System.Xml.Schema.XmlBaseConverter
struct XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D  : public XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E
{
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlBaseConverter::schemaType
	XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* ___schemaType_0;
	// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlBaseConverter::typeCode
	int32_t ___typeCode_1;
	// System.Type System.Xml.Schema.XmlBaseConverter::clrTypeDefault
	Type_t* ___clrTypeDefault_2;
};

struct XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields
{
	// System.Type System.Xml.Schema.XmlBaseConverter::ICollectionType
	Type_t* ___ICollectionType_3;
	// System.Type System.Xml.Schema.XmlBaseConverter::IEnumerableType
	Type_t* ___IEnumerableType_4;
	// System.Type System.Xml.Schema.XmlBaseConverter::IListType
	Type_t* ___IListType_5;
	// System.Type System.Xml.Schema.XmlBaseConverter::ObjectArrayType
	Type_t* ___ObjectArrayType_6;
	// System.Type System.Xml.Schema.XmlBaseConverter::StringArrayType
	Type_t* ___StringArrayType_7;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlAtomicValueArrayType
	Type_t* ___XmlAtomicValueArrayType_8;
	// System.Type System.Xml.Schema.XmlBaseConverter::DecimalType
	Type_t* ___DecimalType_9;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int32Type
	Type_t* ___Int32Type_10;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int64Type
	Type_t* ___Int64Type_11;
	// System.Type System.Xml.Schema.XmlBaseConverter::StringType
	Type_t* ___StringType_12;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlAtomicValueType
	Type_t* ___XmlAtomicValueType_13;
	// System.Type System.Xml.Schema.XmlBaseConverter::ObjectType
	Type_t* ___ObjectType_14;
	// System.Type System.Xml.Schema.XmlBaseConverter::ByteType
	Type_t* ___ByteType_15;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int16Type
	Type_t* ___Int16Type_16;
	// System.Type System.Xml.Schema.XmlBaseConverter::SByteType
	Type_t* ___SByteType_17;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt16Type
	Type_t* ___UInt16Type_18;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt32Type
	Type_t* ___UInt32Type_19;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt64Type
	Type_t* ___UInt64Type_20;
	// System.Type System.Xml.Schema.XmlBaseConverter::XPathItemType
	Type_t* ___XPathItemType_21;
	// System.Type System.Xml.Schema.XmlBaseConverter::DoubleType
	Type_t* ___DoubleType_22;
	// System.Type System.Xml.Schema.XmlBaseConverter::SingleType
	Type_t* ___SingleType_23;
	// System.Type System.Xml.Schema.XmlBaseConverter::DateTimeType
	Type_t* ___DateTimeType_24;
	// System.Type System.Xml.Schema.XmlBaseConverter::DateTimeOffsetType
	Type_t* ___DateTimeOffsetType_25;
	// System.Type System.Xml.Schema.XmlBaseConverter::BooleanType
	Type_t* ___BooleanType_26;
	// System.Type System.Xml.Schema.XmlBaseConverter::ByteArrayType
	Type_t* ___ByteArrayType_27;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlQualifiedNameType
	Type_t* ___XmlQualifiedNameType_28;
	// System.Type System.Xml.Schema.XmlBaseConverter::UriType
	Type_t* ___UriType_29;
	// System.Type System.Xml.Schema.XmlBaseConverter::TimeSpanType
	Type_t* ___TimeSpanType_30;
	// System.Type System.Xml.Schema.XmlBaseConverter::XPathNavigatorType
	Type_t* ___XPathNavigatorType_31;
};

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_definedParameters
	Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69* ____definedParameters_0;
	// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_hoistedParameters
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ____hoistedParameters_1;
};

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_variables
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_frame
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_shadowedVars
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars_2;
};

// UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics
struct DrawStatistics_t4AF06C67CEC7B97509EBAD48E3EE908301598E6F 
{
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::currentFrameIndex
	int32_t ___currentFrameIndex_0;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::totalIndices
	uint32_t ___totalIndices_1;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::commandCount
	uint32_t ___commandCount_2;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::drawCommandCount
	uint32_t ___drawCommandCount_3;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::materialSetCount
	uint32_t ___materialSetCount_4;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::drawRangeCount
	uint32_t ___drawRangeCount_5;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::drawRangeCallCount
	uint32_t ___drawRangeCallCount_6;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::immediateDraws
	uint32_t ___immediateDraws_7;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics::stencilRefChanges
	uint32_t ___stencilRefChanges_8;
};

// UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::m_Owner
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_0;
};

// System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Volatile/VolatileObject::Value
	RuntimeObject* ___Value_0;
};
// Native definition for P/Invoke marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value_0;
};
// Native definition for COM marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value_0;
};

// System.ByReference`1<System.Char>
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};

// UnityEngine.UIElements.UIR.Utility/GPUBuffer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct GPUBuffer_1_t59623B2A3B8EFD33FB05C973C4C4EAFCF89ED241  : public RuntimeObject
{
	// System.IntPtr UnityEngine.UIElements.UIR.Utility/GPUBuffer`1::buffer
	intptr_t ___buffer_0;
	// System.Int32 UnityEngine.UIElements.UIR.Utility/GPUBuffer`1::elemCount
	int32_t ___elemCount_1;
	// System.Int32 UnityEngine.UIElements.UIR.Utility/GPUBuffer`1::elemStride
	int32_t ___elemStride_2;
};

// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC ___m_result_22;
};

struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t4BEAD6CE2527DBE682C128CEAA0FF2A79483E96C* ___s_defaultFactory_23;
};

// System.Threading.Tasks.UnwrapPromise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnwrapPromise_1_t056E9AD8CFB7AFD55E9D63549F5F68C2827ABDB1 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};

// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Values_1_tD44BBEC769B1388DCA51C01019802B242F987014  : public Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24
{
	// System.Int64 UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1::m_CurrentTimeMs
	int64_t ___m_CurrentTimeMs_0;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState<T> UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1::m_CurrentFrameEventsState
	TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* ___m_CurrentFrameEventsState_1;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TransitionEventsFrameState<T> UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1::m_NextFrameEventsState
	TransitionEventsFrameState_tC8B489FD9737C08216D56BB2AE4D35215BDED5AB* ___m_NextFrameEventsState_2;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2<UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/TimingData<T>,UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/StyleData<T>> UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1::running
	AnimationDataSet_2_tEC45C12D404022DC6A2CBD08305B131A4E824450 ___running_3;
	// UnityEngine.UIElements.StylePropertyAnimationSystem/AnimationDataSet`2<UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1/EmptyData<T>,T> UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1::completed
	AnimationDataSet_2_tE0639CCB7D2B897D23E80BC85B176981E675F915 ___completed_4;
};

// System.Numerics.Vector`1<System.UInt64>
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes_4;
};

// System.Numerics.Vector`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_allOnes_4;
};

// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData> UnityEngine.UIElements.ComputedStyle::inheritedData
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData> UnityEngine.UIElements.ComputedStyle::layoutData
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData> UnityEngine.UIElements.ComputedStyle::rareData
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData> UnityEngine.UIElements.ComputedStyle::transformData
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData> UnityEngine.UIElements.ComputedStyle::transitionData
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData> UnityEngine.UIElements.ComputedStyle::visualData
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.ComputedStyle::yogaNode
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue> UnityEngine.UIElements.ComputedStyle::customProperties
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	// System.Int64 UnityEngine.UIElements.ComputedStyle::matchingRulesHash
	int64_t ___matchingRulesHash_8;
	// System.Single UnityEngine.UIElements.ComputedStyle::dpiScaling
	float ___dpiScaling_9;
	// UnityEngine.UIElements.ComputedTransitionProperty[] UnityEngine.UIElements.ComputedStyle::computedTransitions
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions_10;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions_10;
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

// UnityEngine.UIElements.EventBase
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C  : public RuntimeObject
{
	// System.Int64 UnityEngine.UIElements.EventBase::<timestamp>k__BackingField
	int64_t ___U3CtimestampU3Ek__BackingField_2;
	// System.UInt64 UnityEngine.UIElements.EventBase::<eventId>k__BackingField
	uint64_t ___U3CeventIdU3Ek__BackingField_3;
	// System.UInt64 UnityEngine.UIElements.EventBase::<triggerEventId>k__BackingField
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField_4;
	// UnityEngine.UIElements.EventBase/EventPropagation UnityEngine.UIElements.EventBase::<propagation>k__BackingField
	int32_t ___U3CpropagationU3Ek__BackingField_5;
	// UnityEngine.UIElements.PropagationPaths UnityEngine.UIElements.EventBase::m_Path
	PropagationPaths_tA17A0F2CAFF1A86B552ED6D984DAA2F14AB2B0E5* ___m_Path_6;
	// UnityEngine.UIElements.EventBase/LifeCycleStatus UnityEngine.UIElements.EventBase::<lifeCycleStatus>k__BackingField
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField_7;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::<leafTarget>k__BackingField
	RuntimeObject* ___U3CleafTargetU3Ek__BackingField_8;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_Target
	RuntimeObject* ___m_Target_9;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.IEventHandler> UnityEngine.UIElements.EventBase::<skipElements>k__BackingField
	List_1_t6FBD33EFCD307A54E0E8F62AAA0677E2ADAE58D3* ___U3CskipElementsU3Ek__BackingField_10;
	// UnityEngine.UIElements.PropagationPhase UnityEngine.UIElements.EventBase::<propagationPhase>k__BackingField
	int32_t ___U3CpropagationPhaseU3Ek__BackingField_11;
	// UnityEngine.UIElements.IEventHandler UnityEngine.UIElements.EventBase::m_CurrentTarget
	RuntimeObject* ___m_CurrentTarget_12;
	// UnityEngine.Event UnityEngine.UIElements.EventBase::m_ImguiEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ImguiEvent_13;
	// UnityEngine.Vector2 UnityEngine.UIElements.EventBase::<originalMousePosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CoriginalMousePositionU3Ek__BackingField_14;
};

struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_StaticFields
{
	// System.Int64 UnityEngine.UIElements.EventBase::s_LastTypeId
	int64_t ___s_LastTypeId_0;
	// System.UInt64 UnityEngine.UIElements.EventBase::s_NextEventId
	uint64_t ___s_NextEventId_1;
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

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
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

// UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 
{
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearDepthStencil
	bool ___clearDepthStencil_0;
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearColor
	bool ___clearColor_1;
	// UnityEngine.Color UnityEngine.UIElements.PanelClearSettings::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_pinvoke
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_com
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localFlipsWinding
	bool ___localFlipsWinding_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::worldFlipsWinding
	bool ___worldFlipsWinding_16;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_17;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenStencilRef
	int32_t ___childrenStencilRef_18;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenMaskDepth
	int32_t ___childrenMaskDepth_19;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_20;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesLegacyText
	bool ___usesLegacyText_21;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_25;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_26;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::textCoreSettingsID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderLeftColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderTopColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderRightColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderBottomColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::tintColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_37;
	// UnityEngine.Color UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textEntries
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textures
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};

// System.Reflection.RuntimePropertyInfo
struct RuntimePropertyInfo_t5F54C4304A36C216127C93BF1553920A8685537D  : public PropertyInfo_t
{
	// System.IntPtr System.Reflection.RuntimePropertyInfo::klass
	intptr_t ___klass_0;
	// System.IntPtr System.Reflection.RuntimePropertyInfo::prop
	intptr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.RuntimePropertyInfo::info
	MonoPropertyInfo_t8022292639E946C5DEE573BC1C902DB8D7290A1C ___info_2;
	// System.Reflection.PInfo System.Reflection.RuntimePropertyInfo::cached
	int32_t ___cached_3;
	// System.Reflection.RuntimePropertyInfo/GetterAdapter System.Reflection.RuntimePropertyInfo::cached_getter
	GetterAdapter_t03939DF178051A4B282ADA9CC4395C34B86D9D2E* ___cached_getter_4;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0  : public RuntimeObject
{
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory::m_defaultCancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::m_defaultScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;
};

// UnityEngine.TextCore.Text.TextGeneratorUtilities
struct TextGeneratorUtilities_tAD0F329B1A5C7CC27CF63086C11FE092B43FED53  : public RuntimeObject
{
};

struct TextGeneratorUtilities_tAD0F329B1A5C7CC27CF63086C11FE092B43FED53_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.TextCore.Text.TextGeneratorUtilities::largePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___largePositiveVector2_0;
	// UnityEngine.Vector2 UnityEngine.TextCore.Text.TextGeneratorUtilities::largeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___largeNegativeVector2_1;
};

// UnityEngine.TextCore.Text.TextInfo
struct TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09  : public RuntimeObject
{
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::characterCount
	int32_t ___characterCount_2;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::spriteCount
	int32_t ___spriteCount_3;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::spaceCount
	int32_t ___spaceCount_4;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::wordCount
	int32_t ___wordCount_5;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::linkCount
	int32_t ___linkCount_6;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::lineCount
	int32_t ___lineCount_7;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::pageCount
	int32_t ___pageCount_8;
	// System.Int32 UnityEngine.TextCore.Text.TextInfo::materialCount
	int32_t ___materialCount_9;
	// UnityEngine.TextCore.Text.TextElementInfo[] UnityEngine.TextCore.Text.TextInfo::textElementInfo
	TextElementInfoU5BU5D_tEC28C9B72883EE21AA798913497C69E179A15C4E* ___textElementInfo_10;
	// UnityEngine.TextCore.Text.WordInfo[] UnityEngine.TextCore.Text.TextInfo::wordInfo
	WordInfoU5BU5D_tAD74C9720883D7BB229A20FFAE9EFD2CF9963F7B* ___wordInfo_11;
	// UnityEngine.TextCore.Text.LinkInfo[] UnityEngine.TextCore.Text.TextInfo::linkInfo
	LinkInfoU5BU5D_tB7EB23E47AF29CCBEC884F9D0DB95BC97F62AE51* ___linkInfo_12;
	// UnityEngine.TextCore.Text.LineInfo[] UnityEngine.TextCore.Text.TextInfo::lineInfo
	LineInfoU5BU5D_t37598F2175B291797270D1161DC29B6296FB169D* ___lineInfo_13;
	// UnityEngine.TextCore.Text.PageInfo[] UnityEngine.TextCore.Text.TextInfo::pageInfo
	PageInfoU5BU5D_tFEA2CF88695491CFC2F2A2EF6BDCC56E52B0A6D4* ___pageInfo_14;
	// UnityEngine.TextCore.Text.MeshInfo[] UnityEngine.TextCore.Text.TextInfo::meshInfo
	MeshInfoU5BU5D_t3DF8B75BF4A213334EED197AD25E432212894AC6* ___meshInfo_15;
	// System.Boolean UnityEngine.TextCore.Text.TextInfo::isDirty
	bool ___isDirty_16;
};

struct TextInfo_t27E58E62A7552C66D38C175AF9D22622365F5D09_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.TextCore.Text.TextInfo::s_InfinityVectorPositive
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___s_InfinityVectorPositive_0;
	// UnityEngine.Vector2 UnityEngine.TextCore.Text.TextInfo::s_InfinityVectorNegative
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___s_InfinityVectorNegative_1;
};

// UnityEngine.UIElements.UQueryExtensions
struct UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426  : public RuntimeObject
{
};

struct UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_StaticFields
{
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementEmptyQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementEmptyQuery_0;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementNameQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementNameQuery_1;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementClassQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementClassQuery_2;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementNameAndClassQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementNameAndClassQuery_3;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementTypeQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementTypeQuery_4;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementTypeAndNameQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementTypeAndNameQuery_5;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementTypeAndClassQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementTypeAndClassQuery_6;
	// UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.UQueryExtensions::SingleElementTypeAndNameAndClassQuery
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementTypeAndNameAndClassQuery_7;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Xml.Linq.XContainer
struct XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF  : public XNode_t185C922661054AAD14F49676DD6F3CB10D652A30
{
	// System.Object System.Xml.Linq.XContainer::content
	RuntimeObject* ___content_3;
};

// System.Xml.Schema.XmlListConverter
struct XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA  : public XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D
{
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlListConverter::atomicConverter
	XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* ___atomicConverter_32;
};

// System.Span`1<System.Char>
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Span`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303  : public RuntimeObject
{
	// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel> UnityEngine.UIElements.BaseVisualElementPanel::panelDisposed
	Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53* ___panelDisposed_0;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_Scale
	float ___m_Scale_1;
	// UnityEngine.Yoga.YogaConfig UnityEngine.UIElements.BaseVisualElementPanel::yogaConfig
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___yogaConfig_2;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_PixelsPerPoint
	float ___m_PixelsPerPoint_3;
	// UnityEngine.UIElements.PanelClearSettings UnityEngine.UIElements.BaseVisualElementPanel::<clearSettings>k__BackingField
	PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 ___U3CclearSettingsU3Ek__BackingField_4;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<duringLayoutPhase>k__BackingField
	bool ___U3CduringLayoutPhaseU3Ek__BackingField_5;
	// UnityEngine.UIElements.RepaintData UnityEngine.UIElements.BaseVisualElementPanel::<repaintData>k__BackingField
	RepaintData_t90534752135661579EC254884F550545D001B5EA* ___U3CrepaintDataU3Ek__BackingField_6;
	// UnityEngine.UIElements.ICursorManager UnityEngine.UIElements.BaseVisualElementPanel::<cursorManager>k__BackingField
	RuntimeObject* ___U3CcursorManagerU3Ek__BackingField_7;
	// UnityEngine.UIElements.ContextualMenuManager UnityEngine.UIElements.BaseVisualElementPanel::<contextualMenuManager>k__BackingField
	ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B* ___U3CcontextualMenuManagerU3Ek__BackingField_8;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_9;
	// UnityEngine.UIElements.ElementUnderPointer UnityEngine.UIElements.BaseVisualElementPanel::m_TopElementUnderPointers
	ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904* ___m_TopElementUnderPointers_10;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardShaderChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardShaderChanged_11;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardWorldSpaceShaderChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardWorldSpaceShaderChanged_12;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::atlasChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___atlasChanged_13;
	// System.Action`1<UnityEngine.Material> UnityEngine.UIElements.BaseVisualElementPanel::updateMaterial
	Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA* ___updateMaterial_14;
	// UnityEngine.UIElements.HierarchyEvent UnityEngine.UIElements.BaseVisualElementPanel::hierarchyChanged
	HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705* ___hierarchyChanged_15;
	// System.Action`1<UnityEngine.UIElements.IPanel> UnityEngine.UIElements.BaseVisualElementPanel::beforeUpdate
	Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6* ___beforeUpdate_16;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.UIElements.UIR.UIRenderDevice
struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302  : public RuntimeObject
{
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::m_MockDevice
	bool ___m_MockDevice_0;
	// System.IntPtr UnityEngine.UIElements.UIR.UIRenderDevice::m_DefaultStencilState
	intptr_t ___m_DefaultStencilState_1;
	// System.IntPtr UnityEngine.UIElements.UIR.UIRenderDevice::m_VertexDecl
	intptr_t ___m_VertexDecl_2;
	// UnityEngine.UIElements.UIR.Page UnityEngine.UIElements.UIR.UIRenderDevice::m_FirstPage
	Page_tB4EA8095DF85BAF22AB8FCA71400121E721B57C9* ___m_FirstPage_3;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::m_NextPageVertexCount
	uint32_t ___m_NextPageVertexCount_4;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::m_LargeMeshVertexCount
	uint32_t ___m_LargeMeshVertexCount_5;
	// System.Single UnityEngine.UIElements.UIR.UIRenderDevice::m_IndexToVertexCountRatio
	float ___m_IndexToVertexCountRatio_6;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree>> UnityEngine.UIElements.UIR.UIRenderDevice::m_DeferredFrees
	List_1_tB86898E2E533634C35EC58EC5DAE3353038A9210* ___m_DeferredFrees_7;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate>> UnityEngine.UIElements.UIR.UIRenderDevice::m_Updates
	List_1_tA79C35FB5E50135962B53960CB758B9262700632* ___m_Updates_8;
	// System.UInt32[] UnityEngine.UIElements.UIR.UIRenderDevice::m_Fences
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Fences_9;
	// UnityEngine.MaterialPropertyBlock UnityEngine.UIElements.UIR.UIRenderDevice::m_StandardMatProps
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___m_StandardMatProps_10;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::m_FrameIndex
	uint32_t ___m_FrameIndex_11;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::m_NextUpdateID
	uint32_t ___m_NextUpdateID_12;
	// UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics UnityEngine.UIElements.UIR.UIRenderDevice::m_DrawStats
	DrawStatistics_t4AF06C67CEC7B97509EBAD48E3EE908301598E6F ___m_DrawStats_13;
	// UnityEngine.UIElements.UIR.LinkedPool`1<UnityEngine.UIElements.UIR.MeshHandle> UnityEngine.UIElements.UIR.UIRenderDevice::m_MeshHandles
	LinkedPool_1_tD8A175EE023C8220138E51E722F4A20ACE9CA851* ___m_MeshHandles_14;
	// UnityEngine.UIElements.UIR.DrawParams UnityEngine.UIElements.UIR.UIRenderDevice::m_DrawParams
	DrawParams_t523864F415D78BD8BB14E8B7BD349594D6187443* ___m_DrawParams_15;
	// UnityEngine.UIElements.UIR.TextureSlotManager UnityEngine.UIElements.UIR.UIRenderDevice::m_TextureSlotManager
	TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* ___m_TextureSlotManager_16;
	// System.UInt32 UnityEngine.UIElements.UIR.UIRenderDevice::<maxVerticesPerPage>k__BackingField
	uint32_t ___U3CmaxVerticesPerPageU3Ek__BackingField_35;
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::<breakBatches>k__BackingField
	bool ___U3CbreakBatchesU3Ek__BackingField_36;
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_39;
};

struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302_StaticFields
{
	// System.Collections.Generic.LinkedList`1<UnityEngine.UIElements.UIR.UIRenderDevice/DeviceToFree> UnityEngine.UIElements.UIR.UIRenderDevice::m_DeviceFreeQueue
	LinkedList_1_t09F6FB09C766455615BBF59716D285304C49E0E7* ___m_DeviceFreeQueue_17;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::m_ActiveDeviceCount
	int32_t ___m_ActiveDeviceCount_18;
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::m_SubscribedToNotifications
	bool ___m_SubscribedToNotifications_19;
	// System.Boolean UnityEngine.UIElements.UIR.UIRenderDevice::m_SynchronousFree
	bool ___m_SynchronousFree_20;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_FontTexPropID
	int32_t ___s_FontTexPropID_21;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_FontTexSDFScaleID
	int32_t ___s_FontTexSDFScaleID_22;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_GradientSettingsTexID
	int32_t ___s_GradientSettingsTexID_23;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_ShaderInfoTexID
	int32_t ___s_ShaderInfoTexID_24;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_TransformsPropID
	int32_t ___s_TransformsPropID_25;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_ClipRectsPropID
	int32_t ___s_ClipRectsPropID_26;
	// System.Int32 UnityEngine.UIElements.UIR.UIRenderDevice::s_ClipSpaceParamsID
	int32_t ___s_ClipSpaceParamsID_27;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerAllocate
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerAllocate_28;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerFree
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerFree_29;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerAdvanceFrame
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerAdvanceFrame_30;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerFence
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerFence_31;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.UIRenderDevice::s_MarkerBeforeDraw
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerBeforeDraw_32;
	// System.Nullable`1<System.Boolean> UnityEngine.UIElements.UIR.UIRenderDevice::s_VertexTexturingIsAvailable
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___s_VertexTexturingIsAvailable_33;
	// System.Nullable`1<System.Boolean> UnityEngine.UIElements.UIR.UIRenderDevice::s_ShaderModelIs35
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___s_ShaderModelIs35_34;
	// UnityEngine.Texture2D UnityEngine.UIElements.UIR.UIRenderDevice::s_DefaultShaderInfoTexFloat
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_DefaultShaderInfoTexFloat_37;
	// UnityEngine.Texture2D UnityEngine.UIElements.UIR.UIRenderDevice::s_DefaultShaderInfoTexARGB8
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_DefaultShaderInfoTexARGB8_38;
};

// UnityEngine.UnityException
struct UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067  : public Exception_t
{
};

// UnityEngine.UIElements.UIR.Utility
struct Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD  : public RuntimeObject
{
};

struct Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields
{
	// System.Action`1<System.Boolean> UnityEngine.UIElements.UIR.Utility::GraphicsResourcesRecreate
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___GraphicsResourcesRecreate_0;
	// System.Action UnityEngine.UIElements.UIR.Utility::EngineUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___EngineUpdate_1;
	// System.Action UnityEngine.UIElements.UIR.Utility::FlushPendingResources
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___FlushPendingResources_2;
	// System.Action`1<UnityEngine.Camera> UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderers
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* ___RegisterIntermediateRenderers_3;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeAdd
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeAdd_4;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeExecute
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeExecute_5;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeCleanup
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeCleanup_6;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.Utility::s_MarkerRaiseEngineUpdate
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerRaiseEngineUpdate_7;
};

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField_6;
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField_7;
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_12;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList_13;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag_14;
	// UnityEngine.UIElements.VisualElementFlags UnityEngine.UIElements.VisualElement::m_Flags
	int32_t ___m_Flags_15;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_16;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_17;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastLayout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout_18;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastPseudoPadding
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding_19;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData_20;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout_21;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox_22;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache_25;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip_26;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup_27;
	// System.Boolean UnityEngine.UIElements.VisualElement::m_WorldClipIsInfinite
	bool ___m_WorldClipIsInfinite_28;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_30;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_31;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_32;
	// System.Int32 UnityEngine.UIElements.VisualElement::<containedPointerIds>k__BackingField
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField_33;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_34;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___U3CyogaNodeU3Ek__BackingField_35;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style_36;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext_37;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_38;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_39;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_40;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_41;
	// System.Action`1<UnityEngine.UIElements.MeshGenerationContext> UnityEngine.UIElements.VisualElement::<generateVisualContent>k__BackingField
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField_42;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElement::k_GenerateVisualContentMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker_43;
	// UnityEngine.UIElements.VisualElement/RenderTargetMode UnityEngine.UIElements.VisualElement::m_SubRenderTargetMode
	int32_t ___m_SubRenderTargetMode_44;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::m_defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial_46;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations_47;
	// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField_49;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isRootVisualContainer>k__BackingField
	bool ___U3CisRootVisualContainerU3Ek__BackingField_50;
	// System.Boolean UnityEngine.UIElements.VisualElement::<cacheAsBitmap>k__BackingField
	bool ___U3CcacheAsBitmapU3Ek__BackingField_51;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent_52;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent_53;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children_55;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField_56;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualElement::m_VisualTreeAssetSource
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource_57;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess_59;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList_60;
	// UnityEngine.UIElements.VisualElement/TypeData UnityEngine.UIElements.VisualElement::m_TypeData
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData_64;
};

struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList_9;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey_10;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_11;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect_29;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::s_runtimeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial_45;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList_54;
	// UnityEngine.UIElements.VisualElement/CustomStyleAccess UnityEngine.UIElements.VisualElement::s_CustomStyleAccess
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess_58;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath_61;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::tooltipPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey_62;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData> UnityEngine.UIElements.VisualElement::s_TypeData
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData_63;
};

// System.Xml.Linq.XDocument
struct XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1  : public XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF
{
	// System.Xml.Linq.XDeclaration System.Xml.Linq.XDocument::_declaration
	XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ____declaration_4;
};

// System.Action`1<System.IAsyncResult>
struct Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E  : public MulticastDelegate_t
{
};

// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>
struct Action_2_t8B3B3F62C8B5EC13D5C0E28B79C6D396133CA816  : public MulticastDelegate_t
{
};

// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8  : public MulticastDelegate_t
{
};

// System.Func`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB  : public MulticastDelegate_t
{
};

// System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
{
};

// System.Func`2<System.IAsyncResult,System.Threading.Tasks.VoidTaskResult>
struct Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9  : public MulticastDelegate_t
{
};

// System.Func`2<System.Single,System.Single>
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>
struct Func_2_tED7CA67878EF0FB299872769153413F97964501A  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.String>
struct Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C  : public MulticastDelegate_t
{
};

// System.Func`3<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0  : public MulticastDelegate_t
{
};

// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799  : public MulticastDelegate_t
{
};

// System.Func`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.AsyncCallback,System.Object,System.IAsyncResult>
struct Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9  : public MulticastDelegate_t
{
};

// System.Reflection.RuntimePropertyInfo/Getter`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8  : public MulticastDelegate_t
{
};

// System.Buffers.SpanAction`2<System.Char,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A  : public MulticastDelegate_t
{
};

// System.Reflection.RuntimePropertyInfo/StaticGetter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArrayTypeMismatchException
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_18;
};

// UnityEngine.UIElements.StyleSheet
struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.UIElements.StyleSheet::m_ImportedWithErrors
	bool ___m_ImportedWithErrors_4;
	// System.Boolean UnityEngine.UIElements.StyleSheet::m_ImportedWithWarnings
	bool ___m_ImportedWithWarnings_5;
	// UnityEngine.UIElements.StyleRule[] UnityEngine.UIElements.StyleSheet::m_Rules
	StyleRuleU5BU5D_t7897A39D88CA043B2BFB5B28C53B41564EBA3AF3* ___m_Rules_6;
	// UnityEngine.UIElements.StyleComplexSelector[] UnityEngine.UIElements.StyleSheet::m_ComplexSelectors
	StyleComplexSelectorU5BU5D_tF7B5239DE9BF477DECF97EFBA7CB1D71C45DB857* ___m_ComplexSelectors_7;
	// System.Single[] UnityEngine.UIElements.StyleSheet::floats
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___floats_8;
	// UnityEngine.UIElements.StyleSheets.Dimension[] UnityEngine.UIElements.StyleSheet::dimensions
	DimensionU5BU5D_t1EE1B3F9368D444E779CAB3E1CBD9959F8762F4B* ___dimensions_9;
	// UnityEngine.Color[] UnityEngine.UIElements.StyleSheet::colors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors_10;
	// System.String[] UnityEngine.UIElements.StyleSheet::strings
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___strings_11;
	// UnityEngine.Object[] UnityEngine.UIElements.StyleSheet::assets
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___assets_12;
	// UnityEngine.UIElements.StyleSheet/ImportStruct[] UnityEngine.UIElements.StyleSheet::imports
	ImportStructU5BU5D_t42D231FD5BB4B620965D7BED87D56D531B4C7AE9* ___imports_13;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.StyleSheet::m_FlattenedImportedStyleSheets
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___m_FlattenedImportedStyleSheets_14;
	// System.Int32 UnityEngine.UIElements.StyleSheet::m_ContentHash
	int32_t ___m_ContentHash_15;
	// UnityEngine.UIElements.StyleSheets.ScalableImage[] UnityEngine.UIElements.StyleSheet::scalableImages
	ScalableImageU5BU5D_t8C989174900062AED19A057FDCF0529F8C594A52* ___scalableImages_16;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedNameSelectors
	Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F* ___orderedNameSelectors_17;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedTypeSelectors
	Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F* ___orderedTypeSelectors_18;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleComplexSelector> UnityEngine.UIElements.StyleSheet::orderedClassSelectors
	Dictionary_2_t00B3CBC13D1439C8660D9FC33442C5620590706F* ___orderedClassSelectors_19;
	// System.Boolean UnityEngine.UIElements.StyleSheet::m_IsDefaultStyleSheet
	bool ___m_IsDefaultStyleSheet_20;
};

struct StyleSheet_t6FAF43FCDB45BC6BED0522A222FD4C1A9BB10428_StaticFields
{
	// System.String UnityEngine.UIElements.StyleSheet::kCustomPropertyMarker
	String_t* ___kCustomPropertyMarker_21;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.RuntimeType
struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1  : public TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D
{
	// System.MonoTypeInfo System.RuntimeType::type_info
	MonoTypeInfo_t90D5999A69AC524474FDEAC50F55B6CE868AB501* ___type_info_27;
	// System.Object System.RuntimeType::GenericCache
	RuntimeObject* ___GenericCache_28;
	// System.Reflection.RuntimeConstructorInfo System.RuntimeType::m_serializationCtor
	RuntimeConstructorInfo_tB41E49C7CFA74A03CCC986E78ABB0C0BD331A5AE* ___m_serializationCtor_29;
};

struct RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_StaticFields
{
	// System.RuntimeType System.RuntimeType::ValueType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ValueType_10;
	// System.RuntimeType System.RuntimeType::EnumType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___EnumType_11;
	// System.RuntimeType System.RuntimeType::ObjectType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___ObjectType_12;
	// System.RuntimeType System.RuntimeType::StringType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___StringType_13;
	// System.RuntimeType System.RuntimeType::DelegateType
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___DelegateType_14;
	// System.Type[] System.RuntimeType::s_SICtorParamTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___s_SICtorParamTypes_15;
	// System.Func`3<System.Type,System.Type[],System.Type> System.RuntimeType::MakeTypeBuilderInstantiation
	Func_3_t0787D839A577CB564A3192D4164941D5F3DCFBB5* ___MakeTypeBuilderInstantiation_16;
	// System.RuntimeType System.RuntimeType::s_typedRef
	RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___s_typedRef_26;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Attribute[]
struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1  : public RuntimeArray
{
	ALIGN_FIELD (8) Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* m_Items[1];

	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UIElements.StyleSelector[]
struct StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* m_Items[1];

	inline StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UIElements.StyleSelectorPart[]
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 m_Items[1];

	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tempData_2), (void*)NULL);
		#endif
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Value_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tempData_2), (void*)NULL);
		#endif
	}
};
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisIl2CppFullySharedGenericAny_mA4E158678160F1D9713643D243397452502EE932_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// R System.Linq.Expressions.StackGuard::RunOnEmptyStackCore<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`2<System.Object,R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackGuard_RunOnEmptyStackCore_TisIl2CppFullySharedGenericAny_m99455F2A5D798D61FF08E150B8841AC821D862D4_gshared (StackGuard_t6F37D81861288F2039A29A88A6287419F220E849* __this, Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9* ___action0, RuntimeObject* ___state1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Span`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___key0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility::GetUnsafePtr<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeSlice`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_mA322D643B4614EDF4D9BA350D20A7468995EC49C_gshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___nativeSlice0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_gshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.UQueryState`1<T> UnityEngine.UIElements.UQueryState`1<System.Object>::RebuildOn(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UQueryState_1_tDA47936DEF27643350186CA4E1DED7053A3D02B2 UQueryState_1_RebuildOn_mF29E43348045B1219A757EBBF43C892C32EEA5DC_gshared (UQueryState_1_tDA47936DEF27643350186CA4E1DED7053A3D02B2* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element0, const RuntimeMethod* method) ;
// T UnityEngine.UIElements.UQueryState`1<System.Object>::First()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UQueryState_1_First_m19FF1885E9D1D57D0EBA715820CA3C02C2C9C363_gshared (UQueryState_1_tDA47936DEF27643350186CA4E1DED7053A3D02B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UQueryBuilder`1<System.Object>::.ctor(UnityEngine.UIElements.VisualElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UQueryBuilder_1__ctor_m9C0EC0A8947CAE0CD99B7FC847861454BE629EF6_gshared (UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___visualElement0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m38FF5678044D39B69F0EF275C8457A01F9B19527_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_CheckNullArgument_m93E646E76D8C0A9061CAD32FCA94E603893D5DD8 (RuntimeObject* ___arg0, String_t* ___message1, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Internal_CloneSingle_mAC9821862527DC97F2352A298D8C095333911238 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___data0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UnityException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312 (UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Instantiate_mA736122BD463ED7A689D245C55B114C7BD9F3660 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
inline bool PlayableHandle_IsPlayableOfType_TisIl2CppFullySharedGenericAny_mA4E158678160F1D9713643D243397452502EE932 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisIl2CppFullySharedGenericAny_mA4E158678160F1D9713643D243397452502EE932_gshared)((PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)__this, method);
}
// UnityEngine.UIElements.IPanel UnityEngine.UIElements.VisualElement::get_panel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::get_hierarchy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4 (Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.EventBase::set_target(UnityEngine.UIElements.IEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElementListPool::Get(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* VisualElementListPool_Get_m48329D983AB87CC13C00F09D51925CC7114B8878 (int32_t ___initialCapacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::Add(T)
inline void List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::get_Count()
inline int32_t List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_inline (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>::get_Item(System.Int32)
inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092 (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, int32_t ___index0, const RuntimeMethod* method)
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.UIElements.VisualElementListPool::Release(System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementListPool_Release_m4D2C1DB70B5C26E8342C16C2C94E13DEB0A1850A (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___elements0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLowerBound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsByRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsByRef_mA417B3C05E39BCF8F21A2B6437A1B41D3BE638A4 (Type_t* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_m0A1ACFD32B2B62D93621E698CBCFF04722C3A4D5 (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject* ___arg02, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Attribute[] Newtonsoft.Json.Utilities.ReflectionUtils::GetAttributes(System.Object,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* ReflectionUtils_GetAttributes_mC731561D3A0317252C3D268A07312588DE64F468 (RuntimeObject* ___attributeProvider0, Type_t* ___attributeType1, bool ___inherit2, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_GetBuiltinResource_m8761B94EA68B13EC714994F6536B356A1AEF4538 (Type_t* ___type0, String_t* ___path1, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_mDCC8EBD3196F1CE1B86E74416AD90CF86320C401 (String_t* ___path0, Type_t* ___systemTypeInstance1, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.RuntimeTypeHandle::HasReferences(System.RuntimeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeTypeHandle_HasReferences_mF2DFD49F0F9970F97178FBC419BDFB6509346D2C (RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1* ___type0, const RuntimeMethod* method) ;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ScriptableObject_CreateInstance_m986453A5542E9241E445F5F525212CF0C0BCCCBC (Type_t* ___type0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1 (int32_t ___value0, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294 (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398 (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F5DD19B4170C027D5367001F7BC95A0658A2169_gshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___object0, ___method1, method);
}
// R System.Linq.Expressions.StackGuard::RunOnEmptyStackCore<System.Object>(System.Func`2<System.Object,R>,System.Object)
inline RuntimeObject* StackGuard_RunOnEmptyStackCore_TisRuntimeObject_m3E82B5CE8F4D3419B7B2926F61607D2901037384 (StackGuard_t6F37D81861288F2039A29A88A6287419F220E849* __this, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___action0, RuntimeObject* ___state1, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (StackGuard_t6F37D81861288F2039A29A88A6287419F220E849*, Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9*, RuntimeObject*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))StackGuard_RunOnEmptyStackCore_TisIl2CppFullySharedGenericAny_m99455F2A5D798D61FF08E150B8841AC821D862D4_gshared)((StackGuard_t6F37D81861288F2039A29A88A6287419F220E849*)__this, (Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9*)___action0, ___state1, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::get_Factory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m43A2FDDF77C9EF77808C2B97926D3FDBDF320297_inline (const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_m8C6A7AC91155BE2372CC22EA7B923073EA0D2BBB (const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m691F1408A31BC6BAB9A38DB128B452933DABC8EE_inline (const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.String System.String::FastAllocateString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_FastAllocateString_mF8E983B7ABC42CA6EB80C5052243D21E81CC2112 (int32_t ___length0, const RuntimeMethod* method) ;
// System.Char& System.String::GetRawStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline)((Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)__this, (Il2CppFullySharedGenericAny*)___ptr0, ___length1, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522 (const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StylePropertyId,UnityEngine.UIElements.StylePropertyAnimationSystem/Values>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mE2CB2DBE9CFA9FD3FF4707BB20A9B1FE52C76273 (Dictionary_2_t8B8AC3704119A64857E8D359CB4782C5ECEA90E7* __this, int32_t ___key0, Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___key0, (Il2CppFullySharedGenericAny)___value1, method);
}
// System.Int64 UnityEngine.UIElements.StylePropertyAnimationSystem::CurrentTimeMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StylePropertyAnimationSystem_CurrentTimeMs_m3B079B6B759368132A67B8F2E6052A270A7A49B6 (StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyAnimationSystem/Values>::Contains(T)
inline bool List_1_Contains_m71E6FD21D54996DACBC26526FABF5E57B9E4C3B4 (List_1_t491E344573B9D6F61E36AF56132B7412453928C9* __this, Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIElements.StylePropertyAnimationSystem/Values>::Add(T)
inline void List_1_Add_mA2DB3B33B757C906EBF689F682FD659A191A242B_inline (List_1_t491E344573B9D6F61E36AF56132B7412453928C9* __this, Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// UnityEngine.UIElements.StyleValueType UnityEngine.UIElements.StyleValueHandle::get_valueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9 (StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.OperationCanceledException::get_CancellationToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::TrySetCanceled(System.Threading.CancellationToken,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___tokenToRecord0, RuntimeObject* ___cancellationException1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::TrySetException(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, RuntimeObject* ___exceptionObject0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::InternalCurrentIfAttached(System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_InternalCurrentIfAttached_m1153A4F682B30E4FEEED553E1ACD14910AFC4996 (int32_t ___creationOptions0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::NextPowerOfTwo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_NextPowerOfTwo_m25B17CBCFB02762842BE3725618DD97C7C4B1014 (int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.UnityException UnityEngine.Texture::CreateNonReadableException(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* Texture_CreateNonReadableException_m29786CD930E89C281564A9B341FD4088FBC8C94F (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___t0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Texture2D::GetWritableImageData(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture2D_GetWritableImageData_m8E26026A332040F8713E5A2A13C5545797159A5E (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___frame0, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Texture2D::GetRawImageDataSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Texture2D_GetRawImageDataSize_m690AA2A7E6B0A207BC6DCA00A6313C3407CE3418 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItemHelper(System.Threading.WaitCallback,System.Object,System.Threading.StackCrawlMark&,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItemHelper_mADD7DAB054548E8B134A401F330D8957884F6B83 (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___callBack0, RuntimeObject* ___state1, int32_t* ___stackMark2, bool ___compressStack3, bool ___forceGlobal4, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF (int32_t ___argument0, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility::GetUnsafePtr<UnityEngine.UIElements.UIR.DrawBufferRange>(Unity.Collections.NativeSlice`1<T>)
inline void* NativeSliceUnsafeUtility_GetUnsafePtr_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_m5682E2958E30CCCFB6477FB04847917857BEFAFA (NativeSlice_1_t2E5DBD9A5F77A5044A4160098A0B2A45D3EE8974 ___nativeSlice0, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_mA322D643B4614EDF4D9BA350D20A7468995EC49C_gshared)(il2cpp_codegen_cast_struct<NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, NativeSlice_1_t2E5DBD9A5F77A5044A4160098A0B2A45D3EE8974>(&___nativeSlice0), method);
}
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.DrawBufferRange>::get_Length()
inline int32_t NativeSlice_1_get_Length_m2566843C81FEFDDF6407962D4E34F13C3133028D_inline (NativeSlice_1_t2E5DBD9A5F77A5044A4160098A0B2A45D3EE8974* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_gshared_inline)((NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*)__this, method);
}
// System.Void UnityEngine.UIElements.UIR.Utility::DrawRanges(System.IntPtr,System.IntPtr*,System.Int32,System.IntPtr,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_DrawRanges_m5C054AC5885504B35399A861D70E9492DBC957A6 (intptr_t ___ib0, intptr_t* ___vertexStreams1, int32_t ___streamCount2, intptr_t ___ranges3, int32_t ___rangeCount4, intptr_t ___vertexDecl5, const RuntimeMethod* method) ;
// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UQueryExtensions::Q(UnityEngine.UIElements.VisualElement,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* UQueryExtensions_Q_m625363964EA8275D50A9767F1E3468901C1B0BEC (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___e0, String_t* ___name1, String_t* ___className2, const RuntimeMethod* method) ;
// UnityEngine.UIElements.UQueryState`1<T> UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement>::RebuildOn(UnityEngine.UIElements.VisualElement)
inline UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004 (UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___element0, const RuntimeMethod* method)
{
	return ((  UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA (*) (UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))UQueryState_1_RebuildOn_mF29E43348045B1219A757EBBF43C892C32EEA5DC_gshared)(__this, ___element0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.UIElements.RuleMatcher>::get_Item(System.Int32)
inline RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68 (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* __this, int32_t ___index0, const RuntimeMethod* method)
{
	RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.UIElements.StyleSelector[] UnityEngine.UIElements.StyleComplexSelector::get_selectors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02 (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSelectorPart[] UnityEngine.UIElements.StyleSelector::get_parts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF (StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* __this, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSelectorPart UnityEngine.UIElements.StyleSelectorPart::CreatePredicate(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 StyleSelectorPart_CreatePredicate_mB47D568BDD71A75929CCF6BD1981FE0565687EDD (RuntimeObject* ___predicate0, const RuntimeMethod* method) ;
// T UnityEngine.UIElements.UQueryState`1<UnityEngine.UIElements.VisualElement>::First()
inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94 (UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA* __this, const RuntimeMethod* method)
{
	return ((  VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* (*) (UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA*, const RuntimeMethod*))UQueryState_1_First_m19FF1885E9D1D57D0EBA715820CA3C02C2C9C363_gshared)(__this, method);
}
// UnityEngine.UIElements.StyleSelectorPart UnityEngine.UIElements.StyleSelectorPart::CreateClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 StyleSelectorPart_CreateClass_m35749E6336C3E92EADB130D6BF196FD7AAB9F066 (String_t* ___className0, const RuntimeMethod* method) ;
// UnityEngine.UIElements.StyleSelectorPart UnityEngine.UIElements.StyleSelectorPart::CreateId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 StyleSelectorPart_CreateId_m0D9ACD2EEC4D2CA1081B8158ED53F268840568E4 (String_t* ___Id0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UQueryBuilder`1<UnityEngine.UIElements.VisualElement>::.ctor(UnityEngine.UIElements.VisualElement)
inline void UQueryBuilder_1__ctor_m841C38F69A30425CCEA1F93525C97AD0B9648486 (UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___visualElement0, const RuntimeMethod* method)
{
	((  void (*) (UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))UQueryBuilder_1__ctor_m9C0EC0A8947CAE0CD99B7FC847861454BE629EF6_gshared)(__this, ___visualElement0, method);
}
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE (void* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Utility::SetVectorArray(UnityEngine.MaterialPropertyBlock,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_m6C8F08342C9D3D33A183B29536DA13B07E2763FA (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___props0, int32_t ___name1, intptr_t ___vector4s2, int32_t ___count3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.UxmlAttributeDescription::TryGetValueFromBagAsString(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___bag0, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___cc1, String_t** ___value2, const RuntimeMethod* method) ;
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::get_Item(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___phase0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::set_Item(UnityEngine.UIElements.VisualTreeUpdatePhase,UnityEngine.UIElements.IVisualTreeUpdater)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11 (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___phase0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Linq.Expressions.ParameterExpression>()
inline ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_inline (const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m38FF5678044D39B69F0EF275C8457A01F9B19527_gshared_inline)(method);
	return (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Int32)
inline void List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline void List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PushParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) ;
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PopParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Push(T)
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Pop()
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* il2cppRetVal;
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF704B54D833421164E45E576DFD279921246BCEA);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___original0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_CheckNullArgument_m93E646E76D8C0A9061CAD32FCA94E603893D5DD8(L_0, _stringLiteralF704B54D833421164E45E576DFD279921246BCEA, NULL);
		RuntimeObject* L_1 = ___original0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Object_Internal_CloneSingle_mAC9821862527DC97F2352A298D8C095333911238((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_1, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_3 = V_0;
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* L_6 = (UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067_il2cpp_TypeInfo_var)));
		UnityException__ctor_mF8A65C9C71A1E0DE6A3224467040765901959312(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_RuntimeMethod_var)));
	}

IL_003e:
	{
		RuntimeObject* L_7 = V_0;
		V_2 = L_7;
		goto IL_0042;
	}

IL_0042:
	{
		RuntimeObject* L_8 = V_2;
		return L_8;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___original0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___position1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rotation2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Object_Instantiate_mA736122BD463ED7A689D245C55B114C7BD9F3660((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0, L_1, L_2, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_0016;
	}

IL_0016:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisIl2CppFullySharedGenericAny_mA4E158678160F1D9713643D243397452502EE932_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		Type_t* L_0;
		L_0 = PlayableHandle_GetPlayableType_mD9750F1B85DF086F52641D6AB85789601486B686(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t*)L_0) == ((RuntimeObject*)(Type_t*)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisIl2CppFullySharedGenericAny_mA4E158678160F1D9713643D243397452502EE932_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisIl2CppFullySharedGenericAny_mA4E158678160F1D9713643D243397452502EE932(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.UIElements.PointerEventsHelper::SendEnterLeave<System.Object,System.Object>(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.IPointerEvent,UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventsHelper_SendEnterLeave_TisRuntimeObject_TisRuntimeObject_mC3C4D3BB23143B4669E79E95E2739F08278B4382_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___previousTopElementUnderPointer0, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___currentTopElementUnderPointer1, RuntimeObject* ___triggerEvent2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position3, int32_t ___pointerId4, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_1 = NULL;
	int32_t V_2 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_3 = NULL;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* V_4 = NULL;
	bool V_5 = false;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	bool V_10 = false;
	bool V_11 = false;
	RuntimeObject* V_12 = NULL;
	bool V_13 = false;
	int32_t V_14 = 0;
	RuntimeObject* V_15 = NULL;
	bool V_16 = false;
	int32_t G_B3_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___previousTopElementUnderPointer0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___previousTopElementUnderPointer0;
		RuntimeObject* L_2;
		L_2 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_1, NULL);
		G_B3_0 = ((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_5 = (bool)G_B3_0;
		bool L_3 = V_5;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		___previousTopElementUnderPointer0 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)NULL;
	}

IL_001b:
	{
		V_0 = 0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = ___previousTopElementUnderPointer0;
		V_1 = L_4;
		goto IL_0037;
	}

IL_0021:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6 = V_1;
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_7;
		L_7 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_6, NULL);
		V_6 = L_7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8;
		L_8 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		V_1 = L_8;
	}

IL_0037:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9 = V_1;
		V_7 = (bool)((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_10 = V_7;
		if (L_10)
		{
			goto IL_0021;
		}
	}
	{
		V_2 = 0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_11 = ___currentTopElementUnderPointer1;
		V_3 = L_11;
		goto IL_005d;
	}

IL_0047:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = V_3;
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_14;
		L_14 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_13, NULL);
		V_6 = L_14;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15;
		L_15 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		V_3 = L_15;
	}

IL_005d:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_16 = V_3;
		V_8 = (bool)((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_16) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_17 = V_8;
		if (L_17)
		{
			goto IL_0047;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18 = ___previousTopElementUnderPointer0;
		V_1 = L_18;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_19 = ___currentTopElementUnderPointer1;
		V_3 = L_19;
		goto IL_00c5;
	}

IL_006d:
	{
		RuntimeObject* L_20 = ___triggerEvent2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___position3;
		int32_t L_22 = ___pointerId4;
		RuntimeObject* L_23;
		L_23 = InvokerFuncInvoker3< RuntimeObject*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_20, L_21, L_22);
		V_9 = L_23;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_24 = V_9;
					if (!L_24)
					{
						goto IL_00af;
					}
				}
				{
					RuntimeObject* L_25 = V_9;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
				}

IL_00af:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_26 = V_9;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_27 = V_1;
			EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_26, (RuntimeObject*)L_27, NULL);
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_28 = V_1;
			RuntimeObject* L_29 = V_9;
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(6 /* System.Void UnityEngine.UIElements.CallbackEventHandler::SendEvent(UnityEngine.UIElements.EventBase) */, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_28, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_29);
			goto IL_00b0;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b0:
	{
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_31 = V_1;
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_32;
		L_32 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_31, NULL);
		V_6 = L_32;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_33;
		L_33 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		V_1 = L_33;
	}

IL_00c5:
	{
		int32_t L_34 = V_0;
		int32_t L_35 = V_2;
		V_10 = (bool)((((int32_t)L_34) > ((int32_t)L_35))? 1 : 0);
		bool L_36 = V_10;
		if (L_36)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_37 = V_2;
		il2cpp_codegen_runtime_class_init_inline(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var);
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_38;
		L_38 = VisualElementListPool_Get_m48329D983AB87CC13C00F09D51925CC7114B8878(L_37, NULL);
		V_4 = L_38;
		goto IL_00f8;
	}

IL_00d9:
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_39 = V_4;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_40 = V_3;
		List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline(L_39, L_40, List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_42 = V_3;
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_43;
		L_43 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_42, NULL);
		V_6 = L_43;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_44;
		L_44 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		V_3 = L_44;
	}

IL_00f8:
	{
		int32_t L_45 = V_2;
		int32_t L_46 = V_0;
		V_11 = (bool)((((int32_t)L_45) > ((int32_t)L_46))? 1 : 0);
		bool L_47 = V_11;
		if (L_47)
		{
			goto IL_00d9;
		}
	}
	{
		goto IL_0171;
	}

IL_0104:
	{
		RuntimeObject* L_48 = ___triggerEvent2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = ___position3;
		int32_t L_50 = ___pointerId4;
		RuntimeObject* L_51;
		L_51 = InvokerFuncInvoker3< RuntimeObject*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_48, L_49, L_50);
		V_12 = L_51;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0130:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_52 = V_12;
					if (!L_52)
					{
						goto IL_0146;
					}
				}
				{
					RuntimeObject* L_53 = V_12;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_53);
				}

IL_0146:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_54 = V_12;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_55 = V_1;
			EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_54, (RuntimeObject*)L_55, NULL);
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_56 = V_1;
			RuntimeObject* L_57 = V_12;
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(6 /* System.Void UnityEngine.UIElements.CallbackEventHandler::SendEvent(UnityEngine.UIElements.EventBase) */, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_56, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_57);
			goto IL_0147;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0147:
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_58 = V_4;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_59 = V_3;
		List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline(L_58, L_59, List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_60 = V_1;
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_61;
		L_61 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_60, NULL);
		V_6 = L_61;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_62;
		L_62 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		V_1 = L_62;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_63 = V_3;
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_64;
		L_64 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_63, NULL);
		V_6 = L_64;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_65;
		L_65 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_6), NULL);
		V_3 = L_65;
	}

IL_0171:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_66 = V_1;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_67 = V_3;
		V_13 = (bool)((((int32_t)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_66) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_67))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_68 = V_13;
		if (L_68)
		{
			goto IL_0104;
		}
	}
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_69 = V_4;
		int32_t L_70;
		L_70 = List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_inline(L_69, List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_RuntimeMethod_var);
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_70, 1));
		goto IL_01e5;
	}

IL_018b:
	{
		RuntimeObject* L_71 = ___triggerEvent2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = ___position3;
		int32_t L_73 = ___pointerId4;
		RuntimeObject* L_74;
		L_74 = InvokerFuncInvoker3< RuntimeObject*, RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_71, L_72, L_73);
		V_15 = L_74;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01c7:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_75 = V_15;
					if (!L_75)
					{
						goto IL_01dd;
					}
				}
				{
					RuntimeObject* L_76 = V_15;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_76);
				}

IL_01dd:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_77 = V_15;
			List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_78 = V_4;
			int32_t L_79 = V_14;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_80;
			L_80 = List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092(L_78, L_79, List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
			EventBase_set_target_mBDBE0FB1321254FEDFC4B0EF34DBDA8105FFCBA2((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_77, (RuntimeObject*)L_80, NULL);
			List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_81 = V_4;
			int32_t L_82 = V_14;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_83;
			L_83 = List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092(L_81, L_82, List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
			RuntimeObject* L_84 = V_15;
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(6 /* System.Void UnityEngine.UIElements.CallbackEventHandler::SendEvent(UnityEngine.UIElements.EventBase) */, (CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4*)L_83, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_84);
			goto IL_01de;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01de:
	{
		int32_t L_85 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_subtract(L_85, 1));
	}

IL_01e5:
	{
		int32_t L_86 = V_14;
		V_16 = (bool)((((int32_t)((((int32_t)L_86) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_87 = V_16;
		if (L_87)
		{
			goto IL_018b;
		}
	}
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_88 = V_4;
		il2cpp_codegen_runtime_class_init_inline(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var);
		VisualElementListPool_Release_m4D2C1DB70B5C26E8342C16C2C94E13DEB0A1850A(L_88, NULL);
		return;
	}
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionaryHelpers::CopyToNonGenericICollectionHelper<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.ICollection`1<T>,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionaryHelpers_CopyToNonGenericICollectionHelper_TisIl2CppFullySharedGenericAny_mB4FBCBEA1614B532CB7E2523E770130D72A4AC8A_gshared (RuntimeObject* ___collection0, RuntimeArray* ___array1, int32_t ___index2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tE6E7395077C7503F34E3FDB27E624624B10EF552 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	// T
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_T_tE6E7395077C7503F34E3FDB27E624624B10EF552);
	const Il2CppFullySharedGenericAny L_38 = alloca(SizeOf_T_tE6E7395077C7503F34E3FDB27E624624B10EF552);
	RuntimeObject* V_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_tE6E7395077C7503F34E3FDB27E624624B10EF552);
	memset(V_4, 0, SizeOf_T_tE6E7395077C7503F34E3FDB27E624624B10EF552);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___array1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyDictionaryHelpers_CopyToNonGenericICollectionHelper_TisIl2CppFullySharedGenericAny_mB4FBCBEA1614B532CB7E2523E770130D72A4AC8A_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___array1;
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyDictionaryHelpers_CopyToNonGenericICollectionHelper_TisIl2CppFullySharedGenericAny_mB4FBCBEA1614B532CB7E2523E770130D72A4AC8A_RuntimeMethod_var)));
	}

IL_0022:
	{
		RuntimeArray* L_5 = ___array1;
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyDictionaryHelpers_CopyToNonGenericICollectionHelper_TisIl2CppFullySharedGenericAny_mB4FBCBEA1614B532CB7E2523E770130D72A4AC8A_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_8 = ___index2;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_004a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyDictionaryHelpers_CopyToNonGenericICollectionHelper_TisIl2CppFullySharedGenericAny_mB4FBCBEA1614B532CB7E2523E770130D72A4AC8A_RuntimeMethod_var)));
	}

IL_004a:
	{
		RuntimeArray* L_10 = ___array1;
		int32_t L_11;
		L_11 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_10, NULL);
		int32_t L_12 = ___index2;
		RuntimeObject* L_13 = ___collection0;
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0Invoker< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_13);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_11, L_12))) >= ((int32_t)L_14)))
		{
			goto IL_0065;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyDictionaryHelpers_CopyToNonGenericICollectionHelper_TisIl2CppFullySharedGenericAny_mB4FBCBEA1614B532CB7E2523E770130D72A4AC8A_RuntimeMethod_var)));
	}

IL_0065:
	{
		RuntimeObject* L_16 = ___collection0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var));
		RuntimeObject* L_17 = V_0;
		if (!L_17)
		{
			goto IL_0078;
		}
	}
	{
		RuntimeObject* L_18 = V_0;
		RuntimeArray* L_19 = ___array1;
		int32_t L_20 = ___index2;
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_18, L_19, L_20);
		return;
	}

IL_0078:
	{
		RuntimeArray* L_21 = ___array1;
		V_1 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_21, il2cpp_rgctx_data(method->rgctx_data, 2)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = V_1;
		if (!L_22)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_23 = ___collection0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = V_1;
		int32_t L_25 = ___index2;
		InterfaceActionInvoker2Invoker< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::CopyTo(T[],System.Int32) */, il2cpp_rgctx_data(method->rgctx_data, 0), L_23, L_24, L_25);
		return;
	}

IL_008b:
	{
		RuntimeArray* L_26 = ___array1;
		V_2 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_2;
		if (L_27)
		{
			goto IL_00a0;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_28 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyDictionaryHelpers_CopyToNonGenericICollectionHelper_TisIl2CppFullySharedGenericAny_mB4FBCBEA1614B532CB7E2523E770130D72A4AC8A_RuntimeMethod_var)));
	}

IL_00a0:
	{
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeObject* L_29 = ___collection0;
			RuntimeObject* L_30;
			L_30 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator() */, il2cpp_rgctx_data(method->rgctx_data, 4), (RuntimeObject*)L_29);
			V_3 = L_30;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00cb_1:
				{// begin finally (depth: 2)
					{
						RuntimeObject* L_31 = V_3;
						if (!L_31)
						{
							goto IL_00d4_1;
						}
					}
					{
						RuntimeObject* L_32 = V_3;
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
					}

IL_00d4_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_00c1_2;
				}

IL_00aa_2:
				{
					RuntimeObject* L_33 = V_3;
					InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(method->rgctx_data, 6), L_33, (Il2CppFullySharedGenericAny*)L_34);
					il2cpp_codegen_memcpy(V_4, L_34, SizeOf_T_tE6E7395077C7503F34E3FDB27E624624B10EF552);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = V_2;
					int32_t L_36 = ___index2;
					int32_t L_37 = L_36;
					___index2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
					il2cpp_codegen_memcpy(L_38, V_4, SizeOf_T_tE6E7395077C7503F34E3FDB27E624624B10EF552);
					RuntimeObject* L_39 = Box(il2cpp_rgctx_data(method->rgctx_data, 8), L_38);
					ArrayElementTypeCheck (L_35, L_39);
					(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37), (RuntimeObject*)L_39);
				}

IL_00c1_2:
				{
					RuntimeObject* L_40 = V_3;
					bool L_41;
					L_41 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_40);
					if (L_41)
					{
						goto IL_00aa_2;
					}
				}
				{
					goto IL_00d5_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00d5_1:
		{
			goto IL_00e3;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d7;
		}
		throw e;
	}

CATCH_00d7:
	{// begin catch(System.ArrayTypeMismatchException)
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_42 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadOnlyDictionaryHelpers_CopyToNonGenericICollectionHelper_TisIl2CppFullySharedGenericAny_mB4FBCBEA1614B532CB7E2523E770130D72A4AC8A_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_00e3:
	{
		return;
	}
}
// System.Func`2<T,System.Object> Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateGet<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tED7CA67878EF0FB299872769153413F97964501A* ReflectionDelegateFactory_CreateGet_TisIl2CppFullySharedGenericAny_m68C74CDF3ABC2AF3B2EF9CB7C08D11E05879B0A5_gshared (ReflectionDelegateFactory_t33E37F4C07B3A1F415AA97A5C5F7F5A1662A8574* __this, MemberInfo_t* ___memberInfo0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyInfo_t* V_0 = NULL;
	FieldInfo_t* V_1 = NULL;
	{
		MemberInfo_t* L_0 = ___memberInfo0;
		V_0 = ((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_0, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		PropertyInfo_t* L_2 = V_0;
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_2);
		bool L_4;
		L_4 = Type_get_IsByRef_mA417B3C05E39BCF8F21A2B6437A1B41D3BE638A4(L_3, NULL);
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		PropertyInfo_t* L_6 = V_0;
		String_t* L_7;
		L_7 = StringUtils_FormatWith_m0A1ACFD32B2B62D93621E698CBCFF04722C3A4D5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3B7C488730395F30FB98C2A06659180F70881429)), (RuntimeObject*)L_5, (RuntimeObject*)L_6, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionDelegateFactory_CreateGet_TisIl2CppFullySharedGenericAny_m68C74CDF3ABC2AF3B2EF9CB7C08D11E05879B0A5_RuntimeMethod_var)));
	}

IL_002d:
	{
		PropertyInfo_t* L_9 = V_0;
		Func_2_tED7CA67878EF0FB299872769153413F97964501A* L_10;
		L_10 = GenericVirtualFuncInvoker1Invoker< Func_2_tED7CA67878EF0FB299872769153413F97964501A*, PropertyInfo_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_9);
		return L_10;
	}

IL_0035:
	{
		MemberInfo_t* L_11 = ___memberInfo0;
		V_1 = ((FieldInfo_t*)IsInstClass((RuntimeObject*)L_11, FieldInfo_t_il2cpp_TypeInfo_var));
		FieldInfo_t* L_12 = V_1;
		if (!L_12)
		{
			goto IL_0047;
		}
	}
	{
		FieldInfo_t* L_13 = V_1;
		Func_2_tED7CA67878EF0FB299872769153413F97964501A* L_14;
		L_14 = GenericVirtualFuncInvoker1Invoker< Func_2_tED7CA67878EF0FB299872769153413F97964501A*, FieldInfo_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), __this, L_13);
		return L_14;
	}

IL_0047:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_15;
		L_15 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		MemberInfo_t* L_16 = ___memberInfo0;
		String_t* L_17;
		L_17 = StringUtils_FormatWith_m0A1ACFD32B2B62D93621E698CBCFF04722C3A4D5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7FBBFFB8EE0FB972E2B09691037C46596893A5A)), (RuntimeObject*)L_15, (RuntimeObject*)L_16, NULL);
		Exception_t* L_18 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_18, L_17, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionDelegateFactory_CreateGet_TisIl2CppFullySharedGenericAny_m68C74CDF3ABC2AF3B2EF9CB7C08D11E05879B0A5_RuntimeMethod_var)));
	}
}
// System.Action`2<T,System.Object> Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateSet<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_2_t8B3B3F62C8B5EC13D5C0E28B79C6D396133CA816* ReflectionDelegateFactory_CreateSet_TisIl2CppFullySharedGenericAny_m3C18D69140F526B310E553C1C35B8E57C4CC7FA4_gshared (ReflectionDelegateFactory_t33E37F4C07B3A1F415AA97A5C5F7F5A1662A8574* __this, MemberInfo_t* ___memberInfo0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	PropertyInfo_t* V_0 = NULL;
	FieldInfo_t* V_1 = NULL;
	{
		MemberInfo_t* L_0 = ___memberInfo0;
		V_0 = ((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_0, PropertyInfo_t_il2cpp_TypeInfo_var));
		PropertyInfo_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		PropertyInfo_t* L_2 = V_0;
		Action_2_t8B3B3F62C8B5EC13D5C0E28B79C6D396133CA816* L_3;
		L_3 = GenericVirtualFuncInvoker1Invoker< Action_2_t8B3B3F62C8B5EC13D5C0E28B79C6D396133CA816*, PropertyInfo_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this, L_2);
		return L_3;
	}

IL_0012:
	{
		MemberInfo_t* L_4 = ___memberInfo0;
		V_1 = ((FieldInfo_t*)IsInstClass((RuntimeObject*)L_4, FieldInfo_t_il2cpp_TypeInfo_var));
		FieldInfo_t* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		FieldInfo_t* L_6 = V_1;
		Action_2_t8B3B3F62C8B5EC13D5C0E28B79C6D396133CA816* L_7;
		L_7 = GenericVirtualFuncInvoker1Invoker< Action_2_t8B3B3F62C8B5EC13D5C0E28B79C6D396133CA816*, FieldInfo_t* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 2), __this, L_6);
		return L_7;
	}

IL_0024:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
		L_8 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		MemberInfo_t* L_9 = ___memberInfo0;
		String_t* L_10;
		L_10 = StringUtils_FormatWith_m0A1ACFD32B2B62D93621E698CBCFF04722C3A4D5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F9BACDA740D58784E6ACAE19F0F0BC32F753A58)), (RuntimeObject*)L_8, (RuntimeObject*)L_9, NULL);
		Exception_t* L_11 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionDelegateFactory_CreateSet_TisIl2CppFullySharedGenericAny_m3C18D69140F526B310E553C1C35B8E57C4CC7FA4_RuntimeMethod_var)));
	}
}
// T Newtonsoft.Json.Utilities.ReflectionUtils::GetAttribute<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetAttribute_TisRuntimeObject_m8ADA2A9FD65B26073F192A505020878D89CB7936_gshared (RuntimeObject* ___attributeProvider0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeObject* L_0 = ___attributeProvider0;
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, (bool)1);
		return L_1;
	}
}
// T Newtonsoft.Json.Utilities.ReflectionUtils::GetAttribute<System.Object>(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetAttribute_TisRuntimeObject_m4CAED8FAE14D07AB210C120CF73818692E343DF1_gshared (RuntimeObject* ___attributeProvider0, bool ___inherit1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ___attributeProvider0;
		bool L_1 = ___inherit1;
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = InvokerFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, RuntimeObject*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0, L_1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_4 = V_0;
		return L_4;
	}

IL_0015:
	{
		RuntimeObject* L_5;
		L_5 = InvokerFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, (RuntimeObject*)G_B2_0);
		return L_5;
	}
}
// T[] Newtonsoft.Json.Utilities.ReflectionUtils::GetAttributes<System.Object>(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ReflectionUtils_GetAttributes_TisRuntimeObject_mDB2EB684AA9F32B7961211ECFABDF6D621F91EC3_gshared (RuntimeObject* ___attributeProvider0, bool ___inherit1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___attributeProvider0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		bool L_3 = ___inherit1;
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tAF70075D68E65666CDD73C84AB0BDE41A87C9E02_il2cpp_TypeInfo_var);
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_4;
		L_4 = ReflectionUtils_GetAttributes_mC731561D3A0317252C3D268A07312588DE64F468(L_0, L_2, L_3, NULL);
		V_0 = L_4;
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_5 = V_0;
		V_1 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 1)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_1;
		if (!L_6)
		{
			goto IL_001e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_1;
		return L_7;
	}

IL_001e:
	{
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = InvokerFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = InvokerFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_9);
		return L_10;
	}
}
// T UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_GetBuiltinResource_TisRuntimeObject_mB6B9B4952510999CA5D6816315DF9391076D0329_gshared (String_t* ___path0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		String_t* L_2 = ___path0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Resources_GetBuiltinResource_m8761B94EA68B13EC714994F6536B356A1AEF4538(L_1, L_2, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared (String_t* ___path0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		String_t* L_0 = ___path0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Resources_Load_mDCC8EBD3196F1CE1B86E74416AD90CF86320C401(L_0, L_2, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisIl2CppFullySharedGenericAny_m07DDBBBFECDBD187397571B84CE56ACFC36593F1_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_1, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_mF2DFD49F0F9970F97178FBC419BDFB6509346D2C(((RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1*)IsInstClass((RuntimeObject*)L_4, RuntimeType_tB1A69257E7A00D07AB0CABD8D5BA7D83E0DC9EC1_il2cpp_TypeInfo_var)), NULL);
		return L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Object System.Reflection.RuntimePropertyInfo::GetterAdapterFrame<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Reflection.RuntimePropertyInfo/Getter`2<T,R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimePropertyInfo_GetterAdapterFrame_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m75EF23C304B30F3DDBEB941C68CA242C9F2A7C70_gshared (Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* ___getter0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// T
	// sizeof(T)
	const uint32_t SizeOf_T_t9D010360E74C95EC1182ACA9FD322A41C95D25F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t9D010360E74C95EC1182ACA9FD322A41C95D25F4);
	// R
	// sizeof(R)
	const uint32_t SizeOf_R_t58401F4284B7F00BBB05BF5C6988BA9AA774D700 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_R_t58401F4284B7F00BBB05BF5C6988BA9AA774D700);
	{
		Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* L_0 = ___getter0;
		RuntimeObject* L_1 = ___obj1;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->rgctx_data, 1), L_2);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_3))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_3)))), (Il2CppFullySharedGenericAny*)L_4);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), L_4);
		return L_5;
	}
}
// System.Object System.Reflection.RuntimePropertyInfo::StaticGetterAdapterFrame<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Reflection.RuntimePropertyInfo/StaticGetter`1<R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RuntimePropertyInfo_StaticGetterAdapterFrame_TisIl2CppFullySharedGenericAny_m95FA8149F07404C4DBB372E77EDA09E6F3E4ED40_gshared (StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302* ___getter0, RuntimeObject* ___obj1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// R
	// sizeof(R)
	const uint32_t SizeOf_R_t6C54281F8B2608EDA385CBD8F137F48D185E5C2C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_R_t6C54281F8B2608EDA385CBD8F137F48D185E5C2C);
	{
		StaticGetter_1_t5C0B26D3ABAE6F5762F45AD85D572BDF5BDB1302* L_0 = ___getter0;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0, (Il2CppFullySharedGenericAny*)L_1);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->rgctx_data, 2), L_1);
		return L_2;
	}
}
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableObject_CreateInstance_TisRuntimeObject_mBE664E52864F727B39B81313FA00C5FCFF9BAE62_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_2;
		L_2 = ScriptableObject_CreateInstance_m986453A5542E9241E445F5F525212CF0C0BCCCBC(L_1, NULL);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetClass<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetClass_TisRuntimeObject_m2DB5872676B25E0987A7EEAABB327F9C8B97AE78_gshared (RuntimeObject** ___currentValue0, RuntimeObject* ___newValue1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		// if ((currentValue == null && newValue == null) || (currentValue != null && currentValue.Equals(newValue)))
		RuntimeObject** L_0 = ___currentValue0;
		RuntimeObject* L_1 = (*(RuntimeObject**)L_0);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_2 = ___newValue1;
		if (!L_2)
		{
			goto IL_003a;
		}
	}

IL_0016:
	{
		RuntimeObject** L_3 = ___currentValue0;
		RuntimeObject* L_4 = (*(RuntimeObject**)L_3);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject** L_5 = ___currentValue0;
		RuntimeObject* L_6 = ___newValue1;
		bool L_7;
		L_7 = VirtualFuncInvoker1Invoker< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (*L_5), L_6);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0038;
	}

IL_0037:
	{
		G_B5_0 = 0;
	}

IL_0038:
	{
		G_B7_0 = G_B5_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B7_0 = 1;
	}

IL_003b:
	{
		V_0 = (bool)G_B7_0;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_004e;
	}

IL_0043:
	{
		// currentValue = newValue;
		RuntimeObject** L_9 = ___currentValue0;
		RuntimeObject* L_10 = ___newValue1;
		*(RuntimeObject**)L_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)L_10);
		// return true;
		V_1 = (bool)1;
		goto IL_004e;
	}

IL_004e:
	{
		// }
		bool L_11 = V_1;
		return L_11;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisIl2CppFullySharedGenericStruct_m2DEE87A5BC3F7551124CB7CA567BC60B663C93AB_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___currentValue0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___newValue1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t084F9A8314BAA35CCA268F253333DAECA9B6896D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// T
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t084F9A8314BAA35CCA268F253333DAECA9B6896D);
	const Il2CppFullySharedGenericStruct L_7 = L_2;
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t084F9A8314BAA35CCA268F253333DAECA9B6896D);
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_0;
		L_0 = InvokerFuncInvoker0< EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		Il2CppFullySharedGenericStruct* L_1 = ___currentValue0;
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t084F9A8314BAA35CCA268F253333DAECA9B6896D);
		il2cpp_codegen_memcpy(L_3, ___newValue1, SizeOf_T_t084F9A8314BAA35CCA268F253333DAECA9B6896D);
		bool L_4;
		L_4 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Equals(T,T) */, L_0, L_2, L_3);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_001a;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0025;
	}

IL_001a:
	{
		// currentValue = newValue;
		Il2CppFullySharedGenericStruct* L_6 = ___currentValue0;
		il2cpp_codegen_memcpy(L_7, ___newValue1, SizeOf_T_t084F9A8314BAA35CCA268F253333DAECA9B6896D);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_6, L_7, SizeOf_T_t084F9A8314BAA35CCA268F253333DAECA9B6896D);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericStruct*)L_6, (void*)L_7);
		// return true;
		V_1 = (bool)1;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Int32 System.SpanHelpers::IndexOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOf_TisIl2CppFullySharedGenericAny_mA1EC12FB39B15FD4BC1D0064A8F55CF12A898B8E_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___searchSpace0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, int32_t ___length2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_13 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_27 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_34 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_41 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_48 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_55 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_66 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_73 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_80 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_87 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_95 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	// T
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
	const Il2CppFullySharedGenericAny L_12 = L_5;
	const Il2CppFullySharedGenericAny L_19 = L_5;
	const Il2CppFullySharedGenericAny L_26 = L_5;
	const Il2CppFullySharedGenericAny L_33 = L_5;
	const Il2CppFullySharedGenericAny L_40 = L_5;
	const Il2CppFullySharedGenericAny L_47 = L_5;
	const Il2CppFullySharedGenericAny L_54 = L_5;
	const Il2CppFullySharedGenericAny L_65 = L_5;
	const Il2CppFullySharedGenericAny L_72 = L_5;
	const Il2CppFullySharedGenericAny L_79 = L_5;
	const Il2CppFullySharedGenericAny L_86 = L_5;
	const Il2CppFullySharedGenericAny L_94 = L_5;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0;
		L_0 = IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1(0, NULL);
		V_0 = L_0;
		goto IL_0133;
	}

IL_000c:
	{
		int32_t L_1 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_1, 8));
		Il2CppFullySharedGenericAny* L_2 = ___searchSpace0;
		intptr_t L_3 = V_0;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_2, L_3);
		il2cpp_codegen_memcpy(L_5, L_4, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_7;
		L_7 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_6, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_5: *(void**)L_5));
		if (L_7)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_8 = ___searchSpace0;
		intptr_t L_9 = V_0;
		intptr_t L_10;
		L_10 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_9, 1, NULL);
		Il2CppFullySharedGenericAny* L_11;
		L_11 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_8, L_10);
		il2cpp_codegen_memcpy(L_12, L_11, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_14;
		L_14 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_13, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_12: *(void**)L_12));
		if (L_14)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_15 = ___searchSpace0;
		intptr_t L_16 = V_0;
		intptr_t L_17;
		L_17 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_16, 2, NULL);
		Il2CppFullySharedGenericAny* L_18;
		L_18 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_15, L_17);
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_21;
		L_21 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_20, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_19: *(void**)L_19));
		if (L_21)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_22 = ___searchSpace0;
		intptr_t L_23 = V_0;
		intptr_t L_24;
		L_24 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_23, 3, NULL);
		Il2CppFullySharedGenericAny* L_25;
		L_25 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_22, L_24);
		il2cpp_codegen_memcpy(L_26, L_25, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_28;
		L_28 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_27, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_26: *(void**)L_26));
		if (L_28)
		{
			goto IL_0226;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_29 = ___searchSpace0;
		intptr_t L_30 = V_0;
		intptr_t L_31;
		L_31 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_30, 4, NULL);
		Il2CppFullySharedGenericAny* L_32;
		L_32 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_29, L_31);
		il2cpp_codegen_memcpy(L_33, L_32, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_35;
		L_35 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_34, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_33: *(void**)L_33));
		if (L_35)
		{
			goto IL_0234;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_36 = ___searchSpace0;
		intptr_t L_37 = V_0;
		intptr_t L_38;
		L_38 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_37, 5, NULL);
		Il2CppFullySharedGenericAny* L_39;
		L_39 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_36, L_38);
		il2cpp_codegen_memcpy(L_40, L_39, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_42;
		L_42 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_41, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_40: *(void**)L_40));
		if (L_42)
		{
			goto IL_0242;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_43 = ___searchSpace0;
		intptr_t L_44 = V_0;
		intptr_t L_45;
		L_45 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_44, 6, NULL);
		Il2CppFullySharedGenericAny* L_46;
		L_46 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_43, L_45);
		il2cpp_codegen_memcpy(L_47, L_46, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_49;
		L_49 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_48, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_47: *(void**)L_47));
		if (L_49)
		{
			goto IL_0250;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_50 = ___searchSpace0;
		intptr_t L_51 = V_0;
		intptr_t L_52;
		L_52 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_51, 7, NULL);
		Il2CppFullySharedGenericAny* L_53;
		L_53 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_50, L_52);
		il2cpp_codegen_memcpy(L_54, L_53, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_56;
		L_56 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_55, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_54: *(void**)L_54));
		if (L_56)
		{
			goto IL_025e;
		}
	}
	{
		intptr_t L_57 = V_0;
		intptr_t L_58;
		L_58 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_57, 8, NULL);
		V_0 = L_58;
	}

IL_0133:
	{
		int32_t L_59 = ___length2;
		if ((((int32_t)L_59) >= ((int32_t)8)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_60 = ___length2;
		if ((((int32_t)L_60) < ((int32_t)4)))
		{
			goto IL_01fc;
		}
	}
	{
		int32_t L_61 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_61, 4));
		Il2CppFullySharedGenericAny* L_62 = ___searchSpace0;
		intptr_t L_63 = V_0;
		Il2CppFullySharedGenericAny* L_64;
		L_64 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_62, L_63);
		il2cpp_codegen_memcpy(L_65, L_64, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_67;
		L_67 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_66, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_65: *(void**)L_65));
		if (L_67)
		{
			goto IL_0202;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_68 = ___searchSpace0;
		intptr_t L_69 = V_0;
		intptr_t L_70;
		L_70 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_69, 1, NULL);
		Il2CppFullySharedGenericAny* L_71;
		L_71 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_68, L_70);
		il2cpp_codegen_memcpy(L_72, L_71, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_74;
		L_74 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_73, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_72: *(void**)L_72));
		if (L_74)
		{
			goto IL_020a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_75 = ___searchSpace0;
		intptr_t L_76 = V_0;
		intptr_t L_77;
		L_77 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_76, 2, NULL);
		Il2CppFullySharedGenericAny* L_78;
		L_78 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_75, L_77);
		il2cpp_codegen_memcpy(L_79, L_78, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_81;
		L_81 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_80, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_79: *(void**)L_79));
		if (L_81)
		{
			goto IL_0218;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_82 = ___searchSpace0;
		intptr_t L_83 = V_0;
		intptr_t L_84;
		L_84 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_83, 3, NULL);
		Il2CppFullySharedGenericAny* L_85;
		L_85 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_82, L_84);
		il2cpp_codegen_memcpy(L_86, L_85, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_88;
		L_88 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_87, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_86: *(void**)L_86));
		if (L_88)
		{
			goto IL_0226;
		}
	}
	{
		intptr_t L_89 = V_0;
		intptr_t L_90;
		L_90 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_89, 4, NULL);
		V_0 = L_90;
		goto IL_01fc;
	}

IL_01d4:
	{
		Il2CppFullySharedGenericAny* L_91 = ___searchSpace0;
		intptr_t L_92 = V_0;
		Il2CppFullySharedGenericAny* L_93;
		L_93 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_91, L_92);
		il2cpp_codegen_memcpy(L_94, L_93, SizeOf_T_t356CE9200BC70FFD6BA86854F514CCA30607BFBC);
		bool L_96;
		L_96 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), L_95, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_94: *(void**)L_94));
		if (L_96)
		{
			goto IL_0202;
		}
	}
	{
		intptr_t L_97 = V_0;
		intptr_t L_98;
		L_98 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_97, 1, NULL);
		V_0 = L_98;
		int32_t L_99 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
	}

IL_01fc:
	{
		int32_t L_100 = ___length2;
		if ((((int32_t)L_100) > ((int32_t)0)))
		{
			goto IL_01d4;
		}
	}
	{
		return (-1);
	}

IL_0202:
	{
		intptr_t L_101 = V_0;
		void* L_102;
		L_102 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_101, NULL);
		return ((int32_t)(intptr_t)L_102);
	}

IL_020a:
	{
		intptr_t L_103 = V_0;
		intptr_t L_104;
		L_104 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_103, 1, NULL);
		void* L_105;
		L_105 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_104, NULL);
		return ((int32_t)(intptr_t)L_105);
	}

IL_0218:
	{
		intptr_t L_106 = V_0;
		intptr_t L_107;
		L_107 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_106, 2, NULL);
		void* L_108;
		L_108 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_107, NULL);
		return ((int32_t)(intptr_t)L_108);
	}

IL_0226:
	{
		intptr_t L_109 = V_0;
		intptr_t L_110;
		L_110 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_109, 3, NULL);
		void* L_111;
		L_111 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_110, NULL);
		return ((int32_t)(intptr_t)L_111);
	}

IL_0234:
	{
		intptr_t L_112 = V_0;
		intptr_t L_113;
		L_113 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_112, 4, NULL);
		void* L_114;
		L_114 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_113, NULL);
		return ((int32_t)(intptr_t)L_114);
	}

IL_0242:
	{
		intptr_t L_115 = V_0;
		intptr_t L_116;
		L_116 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_115, 5, NULL);
		void* L_117;
		L_117 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_116, NULL);
		return ((int32_t)(intptr_t)L_117);
	}

IL_0250:
	{
		intptr_t L_118 = V_0;
		intptr_t L_119;
		L_119 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_118, 6, NULL);
		void* L_120;
		L_120 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_119, NULL);
		return ((int32_t)(intptr_t)L_120);
	}

IL_025e:
	{
		intptr_t L_121 = V_0;
		intptr_t L_122;
		L_122 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_121, 7, NULL);
		void* L_123;
		L_123 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_122, NULL);
		return ((int32_t)(intptr_t)L_123);
	}
}
// System.Int32 System.SpanHelpers::IndexOfAny<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.Int32,T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpanHelpers_IndexOfAny_TisIl2CppFullySharedGenericAny_mC56B4329F78822D2E496147504F53065D70F02DC_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___searchSpace0, int32_t ___searchSpaceLength1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value2, int32_t ___valueLength3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t02F4DD655BCC6BE45C55FC63E7541AC68792A389 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t02F4DD655BCC6BE45C55FC63E7541AC68792A389);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___valueLength3;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_002f;
	}

IL_000b:
	{
		Il2CppFullySharedGenericAny* L_1 = ___searchSpace0;
		Il2CppFullySharedGenericAny* L_2 = ___value2;
		int32_t L_3 = V_1;
		Il2CppFullySharedGenericAny* L_4;
		L_4 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_2, L_3);
		il2cpp_codegen_memcpy(L_5, L_4, SizeOf_T_t02F4DD655BCC6BE45C55FC63E7541AC68792A389);
		int32_t L_6 = ___searchSpaceLength1;
		int32_t L_7;
		L_7 = InvokerFuncInvoker3< int32_t, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_5: *(void**)L_5), L_6);
		V_2 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_8) < ((uint32_t)L_9))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_10 = V_2;
		V_0 = L_10;
		int32_t L_11 = V_2;
		___searchSpaceLength1 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0033;
		}
	}

IL_002b:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_002f:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___valueLength3;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_000b;
		}
	}

IL_0033:
	{
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Boolean System.SpanHelpers::SequenceEqual<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpanHelpers_SequenceEqual_TisIl2CppFullySharedGenericAny_mA9A3B1A57C2357F0B7BDB6DC001010066D0A2BCC_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___first0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___second1, int32_t ___length2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_23 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_34 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_45 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_56 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_67 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_78 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_89 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_103 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_114 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_125 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_136 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_147 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	// T
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
	const Il2CppFullySharedGenericAny L_22 = L_11;
	const Il2CppFullySharedGenericAny L_33 = L_11;
	const Il2CppFullySharedGenericAny L_44 = L_11;
	const Il2CppFullySharedGenericAny L_55 = L_11;
	const Il2CppFullySharedGenericAny L_66 = L_11;
	const Il2CppFullySharedGenericAny L_77 = L_11;
	const Il2CppFullySharedGenericAny L_88 = L_11;
	const Il2CppFullySharedGenericAny L_102 = L_11;
	const Il2CppFullySharedGenericAny L_113 = L_11;
	const Il2CppFullySharedGenericAny L_124 = L_11;
	const Il2CppFullySharedGenericAny L_135 = L_11;
	const Il2CppFullySharedGenericAny L_146 = L_11;
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericAny* L_0 = ___first0;
		Il2CppFullySharedGenericAny* L_1 = ___second1;
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		if (L_2)
		{
			goto IL_0289;
		}
	}
	{
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mB06D1B6CFBA72B5C55FBEC1BA3BC25958AB60EB1(0, NULL);
		V_0 = L_3;
		goto IL_0191;
	}

IL_0018:
	{
		int32_t L_4 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_4, 8));
		Il2CppFullySharedGenericAny* L_5 = ___first0;
		intptr_t L_6 = V_0;
		Il2CppFullySharedGenericAny* L_7;
		L_7 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_5, L_6);
		Il2CppFullySharedGenericAny* L_8 = ___second1;
		intptr_t L_9 = V_0;
		Il2CppFullySharedGenericAny* L_10;
		L_10 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_8, L_9);
		il2cpp_codegen_memcpy(L_11, L_10, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_13;
		L_13 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_12, (void*)L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_11: *(void**)L_11));
		if (!L_13)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_14 = ___first0;
		intptr_t L_15 = V_0;
		intptr_t L_16;
		L_16 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_15, 1, NULL);
		Il2CppFullySharedGenericAny* L_17;
		L_17 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_14, L_16);
		Il2CppFullySharedGenericAny* L_18 = ___second1;
		intptr_t L_19 = V_0;
		intptr_t L_20;
		L_20 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_19, 1, NULL);
		Il2CppFullySharedGenericAny* L_21;
		L_21 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_18, L_20);
		il2cpp_codegen_memcpy(L_22, L_21, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_24;
		L_24 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_23, (void*)L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_22: *(void**)L_22));
		if (!L_24)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_25 = ___first0;
		intptr_t L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_26, 2, NULL);
		Il2CppFullySharedGenericAny* L_28;
		L_28 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_25, L_27);
		Il2CppFullySharedGenericAny* L_29 = ___second1;
		intptr_t L_30 = V_0;
		intptr_t L_31;
		L_31 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_30, 2, NULL);
		Il2CppFullySharedGenericAny* L_32;
		L_32 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_29, L_31);
		il2cpp_codegen_memcpy(L_33, L_32, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_35;
		L_35 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_34, (void*)L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_33: *(void**)L_33));
		if (!L_35)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_36 = ___first0;
		intptr_t L_37 = V_0;
		intptr_t L_38;
		L_38 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_37, 3, NULL);
		Il2CppFullySharedGenericAny* L_39;
		L_39 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_36, L_38);
		Il2CppFullySharedGenericAny* L_40 = ___second1;
		intptr_t L_41 = V_0;
		intptr_t L_42;
		L_42 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_41, 3, NULL);
		Il2CppFullySharedGenericAny* L_43;
		L_43 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_40, L_42);
		il2cpp_codegen_memcpy(L_44, L_43, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_46;
		L_46 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_45, (void*)L_39, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_44: *(void**)L_44));
		if (!L_46)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_47 = ___first0;
		intptr_t L_48 = V_0;
		intptr_t L_49;
		L_49 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_48, 4, NULL);
		Il2CppFullySharedGenericAny* L_50;
		L_50 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_47, L_49);
		Il2CppFullySharedGenericAny* L_51 = ___second1;
		intptr_t L_52 = V_0;
		intptr_t L_53;
		L_53 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_52, 4, NULL);
		Il2CppFullySharedGenericAny* L_54;
		L_54 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_51, L_53);
		il2cpp_codegen_memcpy(L_55, L_54, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_57;
		L_57 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_56, (void*)L_50, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_55: *(void**)L_55));
		if (!L_57)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_58 = ___first0;
		intptr_t L_59 = V_0;
		intptr_t L_60;
		L_60 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_59, 5, NULL);
		Il2CppFullySharedGenericAny* L_61;
		L_61 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_58, L_60);
		Il2CppFullySharedGenericAny* L_62 = ___second1;
		intptr_t L_63 = V_0;
		intptr_t L_64;
		L_64 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_63, 5, NULL);
		Il2CppFullySharedGenericAny* L_65;
		L_65 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_62, L_64);
		il2cpp_codegen_memcpy(L_66, L_65, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_68;
		L_68 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_67, (void*)L_61, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_66: *(void**)L_66));
		if (!L_68)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_69 = ___first0;
		intptr_t L_70 = V_0;
		intptr_t L_71;
		L_71 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_70, 6, NULL);
		Il2CppFullySharedGenericAny* L_72;
		L_72 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_69, L_71);
		Il2CppFullySharedGenericAny* L_73 = ___second1;
		intptr_t L_74 = V_0;
		intptr_t L_75;
		L_75 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_74, 6, NULL);
		Il2CppFullySharedGenericAny* L_76;
		L_76 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_73, L_75);
		il2cpp_codegen_memcpy(L_77, L_76, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_79;
		L_79 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_78, (void*)L_72, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_77: *(void**)L_77));
		if (!L_79)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_80 = ___first0;
		intptr_t L_81 = V_0;
		intptr_t L_82;
		L_82 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_81, 7, NULL);
		Il2CppFullySharedGenericAny* L_83;
		L_83 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_80, L_82);
		Il2CppFullySharedGenericAny* L_84 = ___second1;
		intptr_t L_85 = V_0;
		intptr_t L_86;
		L_86 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_85, 7, NULL);
		Il2CppFullySharedGenericAny* L_87;
		L_87 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_84, L_86);
		il2cpp_codegen_memcpy(L_88, L_87, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_90;
		L_90 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_89, (void*)L_83, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_88: *(void**)L_88));
		if (!L_90)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_91 = V_0;
		intptr_t L_92;
		L_92 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_91, 8, NULL);
		V_0 = L_92;
	}

IL_0191:
	{
		int32_t L_93 = ___length2;
		if ((((int32_t)L_93) >= ((int32_t)8)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_94 = ___length2;
		if ((((int32_t)L_94) < ((int32_t)4)))
		{
			goto IL_0285;
		}
	}
	{
		int32_t L_95 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_95, 4));
		Il2CppFullySharedGenericAny* L_96 = ___first0;
		intptr_t L_97 = V_0;
		Il2CppFullySharedGenericAny* L_98;
		L_98 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_96, L_97);
		Il2CppFullySharedGenericAny* L_99 = ___second1;
		intptr_t L_100 = V_0;
		Il2CppFullySharedGenericAny* L_101;
		L_101 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_99, L_100);
		il2cpp_codegen_memcpy(L_102, L_101, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_104;
		L_104 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_103, (void*)L_98, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_102: *(void**)L_102));
		if (!L_104)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_105 = ___first0;
		intptr_t L_106 = V_0;
		intptr_t L_107;
		L_107 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_106, 1, NULL);
		Il2CppFullySharedGenericAny* L_108;
		L_108 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_105, L_107);
		Il2CppFullySharedGenericAny* L_109 = ___second1;
		intptr_t L_110 = V_0;
		intptr_t L_111;
		L_111 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_110, 1, NULL);
		Il2CppFullySharedGenericAny* L_112;
		L_112 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_109, L_111);
		il2cpp_codegen_memcpy(L_113, L_112, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_115;
		L_115 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_114, (void*)L_108, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_113: *(void**)L_113));
		if (!L_115)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_116 = ___first0;
		intptr_t L_117 = V_0;
		intptr_t L_118;
		L_118 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_117, 2, NULL);
		Il2CppFullySharedGenericAny* L_119;
		L_119 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_116, L_118);
		Il2CppFullySharedGenericAny* L_120 = ___second1;
		intptr_t L_121 = V_0;
		intptr_t L_122;
		L_122 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_121, 2, NULL);
		Il2CppFullySharedGenericAny* L_123;
		L_123 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_120, L_122);
		il2cpp_codegen_memcpy(L_124, L_123, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_126;
		L_126 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_125, (void*)L_119, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_124: *(void**)L_124));
		if (!L_126)
		{
			goto IL_028b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_127 = ___first0;
		intptr_t L_128 = V_0;
		intptr_t L_129;
		L_129 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_128, 3, NULL);
		Il2CppFullySharedGenericAny* L_130;
		L_130 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_127, L_129);
		Il2CppFullySharedGenericAny* L_131 = ___second1;
		intptr_t L_132 = V_0;
		intptr_t L_133;
		L_133 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_132, 3, NULL);
		Il2CppFullySharedGenericAny* L_134;
		L_134 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_131, L_133);
		il2cpp_codegen_memcpy(L_135, L_134, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_137;
		L_137 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_136, (void*)L_130, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_135: *(void**)L_135));
		if (!L_137)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_138 = V_0;
		intptr_t L_139;
		L_139 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_138, 4, NULL);
		V_0 = L_139;
		goto IL_0285;
	}

IL_0258:
	{
		Il2CppFullySharedGenericAny* L_140 = ___first0;
		intptr_t L_141 = V_0;
		Il2CppFullySharedGenericAny* L_142;
		L_142 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_140, L_141);
		Il2CppFullySharedGenericAny* L_143 = ___second1;
		intptr_t L_144 = V_0;
		Il2CppFullySharedGenericAny* L_145;
		L_145 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_143, L_144);
		il2cpp_codegen_memcpy(L_146, L_145, SizeOf_T_t31781420BB091038BE3C175661CA379B2DB69B4C);
		bool L_148;
		L_148 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), L_147, (void*)L_142, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_146: *(void**)L_146));
		if (!L_148)
		{
			goto IL_028b;
		}
	}
	{
		intptr_t L_149 = V_0;
		intptr_t L_150;
		L_150 = IntPtr_op_Addition_mC0EBEFD80883C26CF2FE4BFD7DEDECAD61480CFE(L_149, 1, NULL);
		V_0 = L_150;
		int32_t L_151 = ___length2;
		___length2 = ((int32_t)il2cpp_codegen_subtract(L_151, 1));
	}

IL_0285:
	{
		int32_t L_152 = ___length2;
		if ((((int32_t)L_152) > ((int32_t)0)))
		{
			goto IL_0258;
		}
	}

IL_0289:
	{
		return (bool)1;
	}

IL_028b:
	{
		return (bool)0;
	}
}
// System.Void System.Linq.Expressions.StackGuard::RunOnEmptyStack<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Action`2<T1,T2>,T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackGuard_RunOnEmptyStack_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m42C4C26F7654B2912AA14A7D05145D7E2CB1A73E_gshared (StackGuard_t6F37D81861288F2039A29A88A6287419F220E849* __this, Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8* ___action0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg11, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg22, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackGuard_RunOnEmptyStackCore_TisRuntimeObject_m3E82B5CE8F4D3419B7B2926F61607D2901037384_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T1)
	const uint32_t SizeOf_T1_t65BC5F8F22425E1C4760A099E9E6CB773176C2FA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// sizeof(T2)
	const uint32_t SizeOf_T2_tF6F2164F425859FD9679DE7DBFA2D0CEC0098E08 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// T1
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_t65BC5F8F22425E1C4760A099E9E6CB773176C2FA);
	// T2
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T2_tF6F2164F425859FD9679DE7DBFA2D0CEC0098E08);
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* G_B2_0 = NULL;
	StackGuard_t6F37D81861288F2039A29A88A6287419F220E849* G_B2_1 = NULL;
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* G_B1_0 = NULL;
	StackGuard_t6F37D81861288F2039A29A88A6287419F220E849* G_B1_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_0 = ((U3CU3Ec__3_2_tBB29CF1C815215807833CEA7087B12B63B7551BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__3_0_1;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__3_2_tBB29CF1C815215807833CEA7087B12B63B7551BC* L_2 = ((U3CU3Ec__3_2_tBB29CF1C815215807833CEA7087B12B63B7551BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_3 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)il2cpp_codegen_object_new(Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var);
		Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_4 = L_3;
		((U3CU3Ec__3_2_tBB29CF1C815215807833CEA7087B12B63B7551BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__3_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__3_2_tBB29CF1C815215807833CEA7087B12B63B7551BC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__3_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8* L_5 = ___action0;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___arg11 : &___arg11), SizeOf_T1_t65BC5F8F22425E1C4760A099E9E6CB773176C2FA);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? ___arg22 : &___arg22), SizeOf_T2_tF6F2164F425859FD9679DE7DBFA2D0CEC0098E08);
		Tuple_3_tF0821A7BEADD05320E476CF9AB276DF6ECE58A83* L_8;
		L_8 = InvokerFuncInvoker3< Tuple_3_tF0821A7BEADD05320E476CF9AB276DF6ECE58A83*, Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? L_7: *(void**)L_7));
		RuntimeObject* L_9;
		L_9 = StackGuard_RunOnEmptyStackCore_TisRuntimeObject_m3E82B5CE8F4D3419B7B2926F61607D2901037384(G_B2_1, G_B2_0, (RuntimeObject*)L_8, StackGuard_RunOnEmptyStackCore_TisRuntimeObject_m3E82B5CE8F4D3419B7B2926F61607D2901037384_RuntimeMethod_var);
		return;
	}
}
// R System.Linq.Expressions.StackGuard::RunOnEmptyStackCore<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`2<System.Object,R>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StackGuard_RunOnEmptyStackCore_TisIl2CppFullySharedGenericAny_m99455F2A5D798D61FF08E150B8841AC821D862D4_gshared (StackGuard_t6F37D81861288F2039A29A88A6287419F220E849* __this, Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9* ___action0, RuntimeObject* ___state1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(R)
	const uint32_t SizeOf_R_t863D1D9F2510110A7A0BF37CA72556F892ACBB4A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	// R
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_R_t863D1D9F2510110A7A0BF37CA72556F892ACBB4A);
	const Il2CppFullySharedGenericAny L_15 = L_14;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_0 = NULL;
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_R_t863D1D9F2510110A7A0BF37CA72556F892ACBB4A);
	memset(V_2, 0, SizeOf_R_t863D1D9F2510110A7A0BF37CA72556F892ACBB4A);
	{
		int32_t L_0 = (int32_t)__this->____executionStackCount_0;
		__this->____executionStackCount_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004c:
			{// begin finally (depth: 1)
				int32_t L_1 = (int32_t)__this->____executionStackCount_0;
				__this->____executionStackCount_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
				TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_2;
				L_2 = Task_get_Factory_m43A2FDDF77C9EF77808C2B97926D3FDBDF320297_inline(NULL);
				Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9* L_3 = ___action0;
				RuntimeObject* L_4 = ___state1;
				il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5;
				L_5 = CancellationToken_get_None_m8C6A7AC91155BE2372CC22EA7B923073EA0D2BBB(NULL);
				il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
				TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_6;
				L_6 = TaskScheduler_get_Default_m691F1408A31BC6BAB9A38DB128B452933DABC8EE_inline(NULL);
				Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_7;
				L_7 = InvokerFuncInvoker5< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_2, L_3, L_4, L_5, (int32_t)8, L_6);
				V_0 = L_7;
				Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_8 = V_0;
				TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 L_9;
				L_9 = InvokerFuncInvoker0< TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_8);
				V_1 = L_9;
				bool L_10;
				L_10 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), (&V_1));
				if (L_10)
				{
					goto IL_0042_1;
				}
			}
			{
				Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_11 = V_0;
				WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* L_12;
				L_12 = InterfaceFuncInvoker0< WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* >::Invoke(1 /* System.Threading.WaitHandle System.IAsyncResult::get_AsyncWaitHandle() */, IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
				bool L_13;
				L_13 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_12);
			}

IL_0042_1:
			{
				InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), (&V_1), (Il2CppFullySharedGenericAny*)L_14);
				il2cpp_codegen_memcpy(V_2, L_14, SizeOf_R_t863D1D9F2510110A7A0BF37CA72556F892ACBB4A);
				goto IL_005b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		il2cpp_codegen_memcpy(L_15, V_2, SizeOf_R_t863D1D9F2510110A7A0BF37CA72556F892ACBB4A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_15, SizeOf_R_t863D1D9F2510110A7A0BF37CA72556F892ACBB4A);
		return;
	}
}
// System.String System.String::Create<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisIl2CppFullySharedGenericAny_mC571D61AA789807D59CAE43CB15AE8779FB56E65_gshared (int32_t ___length0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___state1, SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* ___action2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TState)
	const uint32_t SizeOf_TState_t3685CA87E19DEC51A75EEB567FB0A26966100966 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// TState
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TState_t3685CA87E19DEC51A75EEB567FB0A26966100966);
	String_t* V_0 = NULL;
	{
		SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* L_0 = ___action2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisIl2CppFullySharedGenericAny_mC571D61AA789807D59CAE43CB15AE8779FB56E65_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___length0;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___length0;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_Create_TisIl2CppFullySharedGenericAny_mC571D61AA789807D59CAE43CB15AE8779FB56E65_RuntimeMethod_var)));
	}

IL_0026:
	{
		int32_t L_6 = ___length0;
		String_t* L_7;
		L_7 = String_FastAllocateString_mF8E983B7ABC42CA6EB80C5052243D21E81CC2112(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* L_8 = ___action2;
		String_t* L_9 = V_0;
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___length0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, /*hidden argument*/Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___state1 : &___state1), SizeOf_TState_t3685CA87E19DEC51A75EEB567FB0A26966100966);
		InvokerActionInvoker2< Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_8, L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_13: *(void**)L_13));
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.Text.StringBuilder System.Text.StringBuilder::AppendSpanFormattable<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisIl2CppFullySharedGenericAny_mF50A5C2F631F6F4450B612A08A50CA5E6DC58AEC_gshared (StringBuilder_t* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		String_t* L_2;
		L_2 = ConstrainedFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), L_1, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value0 : &___value0), (String_t*)NULL, (RuntimeObject*)L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_2, NULL);
		return L_3;
	}
}
// TSource Newtonsoft.Json.Utilities.StringUtils::ForgivingCaseSensitiveFind<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringUtils_ForgivingCaseSensitiveFind_TisIl2CppFullySharedGenericAny_m3FDCD66E0E3F06BAE8B9D6D6773BF58E96F2E7C7_gshared (RuntimeObject* ___source0, Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* ___valueSelector1, String_t* ___testValue2, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_t3C7A4DBC8A08A901AB170AE00AB99599E902A50D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 10));
	// TSource
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_TSource_t3C7A4DBC8A08A901AB170AE00AB99599E902A50D);
	const Il2CppFullySharedGenericAny L_22 = L_17;
	U3CU3Ec__DisplayClass14_0_1_t76EA529FB0FC3BD68537D185424BE9FB75526E96* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_1_t76EA529FB0FC3BD68537D185424BE9FB75526E96* L_0 = (U3CU3Ec__DisplayClass14_0_1_t76EA529FB0FC3BD68537D185424BE9FB75526E96*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_1_t76EA529FB0FC3BD68537D185424BE9FB75526E96* L_1 = V_0;
		Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* L_2 = ___valueSelector1;
		L_1->___valueSelector_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___valueSelector_0), (void*)L_2);
		U3CU3Ec__DisplayClass14_0_1_t76EA529FB0FC3BD68537D185424BE9FB75526E96* L_3 = V_0;
		String_t* L_4 = ___testValue2;
		L_3->___testValue_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___testValue_1), (void*)L_4);
		RuntimeObject* L_5 = ___source0;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtils_ForgivingCaseSensitiveFind_TisIl2CppFullySharedGenericAny_m3FDCD66E0E3F06BAE8B9D6D6773BF58E96F2E7C7_RuntimeMethod_var)));
	}

IL_0022:
	{
		U3CU3Ec__DisplayClass14_0_1_t76EA529FB0FC3BD68537D185424BE9FB75526E96* L_7 = V_0;
		Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C* L_8 = (Func_2_t3793651739D8B94095DFFF75C3BD348E5E2C455C*)L_7->___valueSelector_0;
		if (L_8)
		{
			goto IL_0035;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2EAC54936C480056DBBB5B97FD1CFD1C79B1990)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringUtils_ForgivingCaseSensitiveFind_TisIl2CppFullySharedGenericAny_m3FDCD66E0E3F06BAE8B9D6D6773BF58E96F2E7C7_RuntimeMethod_var)));
	}

IL_0035:
	{
		RuntimeObject* L_10 = ___source0;
		U3CU3Ec__DisplayClass14_0_1_t76EA529FB0FC3BD68537D185424BE9FB75526E96* L_11 = V_0;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_12 = (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_12, (RuntimeObject*)L_11, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 4)));
		RuntimeObject* L_13;
		L_13 = InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), NULL, L_10, L_12);
		V_1 = L_13;
		RuntimeObject* L_14 = V_1;
		int32_t L_15;
		L_15 = InvokerFuncInvoker1< int32_t, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), NULL, L_14);
		if ((((int32_t)L_15) > ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_16 = V_1;
		InvokerActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), NULL, L_16, (Il2CppFullySharedGenericAny*)L_17);
		il2cpp_codegen_memcpy(il2cppRetVal, L_17, SizeOf_TSource_t3C7A4DBC8A08A901AB170AE00AB99599E902A50D);
		return;
	}

IL_0058:
	{
		RuntimeObject* L_18 = ___source0;
		U3CU3Ec__DisplayClass14_0_1_t76EA529FB0FC3BD68537D185424BE9FB75526E96* L_19 = V_0;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_20 = (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		InvokerActionInvoker2< RuntimeObject*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_20, (RuntimeObject*)L_19, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 11)));
		RuntimeObject* L_21;
		L_21 = InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), NULL, L_18, L_20);
		InvokerActionInvoker2< RuntimeObject*, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), NULL, L_21, (Il2CppFullySharedGenericAny*)L_22);
		il2cpp_codegen_memcpy(il2cppRetVal, L_22, SizeOf_TSource_t3C7A4DBC8A08A901AB170AE00AB99599E902A50D);
		return;
	}
}
// T UnityEngine.UIElements.StylePropertyAnimationSystem::GetOrCreate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylePropertyAnimationSystem_GetOrCreate_TisIl2CppFullySharedGenericAny_m6AF28A93C46556C2DD21CCE29F1DD629E9A9890F_gshared (StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___values0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	const Il2CppFullySharedGenericAny L_5 = L_1;
	const Il2CppFullySharedGenericAny L_8 = L_1;
	const Il2CppFullySharedGenericAny L_9 = L_1;
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	const Il2CppFullySharedGenericAny L_6 = L_2;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	memset(V_0, 0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	memset(V_1, 0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	memset(V_2, 0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	memset(G_B3_0, 0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	{
		Il2CppFullySharedGenericAny* L_0 = ___values0;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 1), L_2);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_4 = ___values0;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(L_6, L_5, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_4, L_6, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_4, (void*)L_6);
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy(G_B3_0, L_7, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		goto IL_0021;
	}

IL_0020:
	{
		il2cpp_codegen_memcpy(L_8, V_0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy(G_B3_0, L_8, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
	}

IL_0021:
	{
		il2cpp_codegen_memcpy(V_2, G_B3_0, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		goto IL_0024;
	}

IL_0024:
	{
		il2cpp_codegen_memcpy(L_9, V_2, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_T_tFB8528D8102E0B1FDE923E53EF2A2B05CE81758C);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.StylePropertyAnimationSystem::StartTransition<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.StyleSheets.StylePropertyId,T,T,System.Int32,System.Int32,System.Func`2<System.Single,System.Single>,UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyAnimationSystem_StartTransition_TisIl2CppFullySharedGenericAny_mE706D3C8BDC81F443721E91FB0FC9F22123F88A7_gshared (StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___owner0, int32_t ___prop1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___startValue2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___endValue3, int32_t ___durationMs4, int32_t ___delayMs5, Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___easingCurve6, Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* ___values7, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE2CB2DBE9CFA9FD3FF4707BB20A9B1FE52C76273_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tADE7374A11CEF160DEB0F474A59D11D11DA19992 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tADE7374A11CEF160DEB0F474A59D11D11DA19992);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_tADE7374A11CEF160DEB0F474A59D11D11DA19992);
	bool V_0 = false;
	bool V_1 = false;
	{
		Dictionary_2_t8B8AC3704119A64857E8D359CB4782C5ECEA90E7* L_0 = (Dictionary_2_t8B8AC3704119A64857E8D359CB4782C5ECEA90E7*)__this->___m_PropertyToValues_14;
		int32_t L_1 = ___prop1;
		Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* L_2 = ___values7;
		Dictionary_2_set_Item_mE2CB2DBE9CFA9FD3FF4707BB20A9B1FE52C76273(L_0, L_1, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)L_2, Dictionary_2_set_Item_mE2CB2DBE9CFA9FD3FF4707BB20A9B1FE52C76273_RuntimeMethod_var);
		Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* L_3 = ___values7;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4 = ___owner0;
		int32_t L_5 = ___prop1;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___startValue2 : &___startValue2), SizeOf_T_tADE7374A11CEF160DEB0F474A59D11D11DA19992);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___endValue3 : &___endValue3), SizeOf_T_tADE7374A11CEF160DEB0F474A59D11D11DA19992);
		int32_t L_8 = ___durationMs4;
		int32_t L_9 = ___delayMs5;
		Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* L_10 = ___easingCurve6;
		int64_t L_11;
		L_11 = StylePropertyAnimationSystem_CurrentTimeMs_m3B079B6B759368132A67B8F2E6052A270A7A49B6(__this, NULL);
		bool L_12;
		L_12 = InvokerFuncInvoker8< bool, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, int32_t, int32_t, Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2*, int64_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_3, L_4, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_7: *(void**)L_7), L_8, L_9, L_10, L_11);
		V_0 = L_12;
		Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* L_13 = ___values7;
		InvokerActionInvoker1< Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), __this, L_13);
		bool L_14 = V_0;
		V_1 = L_14;
		goto IL_0036;
	}

IL_0036:
	{
		bool L_15 = V_1;
		return L_15;
	}
}
// System.Void UnityEngine.UIElements.StylePropertyAnimationSystem::UpdateTracking<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.StylePropertyAnimationSystem/Values`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StylePropertyAnimationSystem_UpdateTracking_TisIl2CppFullySharedGenericAny_m5B0E6C7002E704D5BFBBD5A22E5E70BE5528639A_gshared (StylePropertyAnimationSystem_tB499821AFC54DE61DC54CFDCD392C337F5097718* __this, Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* ___values0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA2DB3B33B757C906EBF689F682FD659A191A242B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m71E6FD21D54996DACBC26526FABF5E57B9E4C3B4_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* L_0 = ___values0;
		bool L_1;
		L_1 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		List_1_t491E344573B9D6F61E36AF56132B7412453928C9* L_2 = (List_1_t491E344573B9D6F61E36AF56132B7412453928C9*)__this->___m_AllValues_13;
		Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* L_3 = ___values0;
		bool L_4;
		L_4 = List_1_Contains_m71E6FD21D54996DACBC26526FABF5E57B9E4C3B4(L_2, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)L_3, List_1_Contains_m71E6FD21D54996DACBC26526FABF5E57B9E4C3B4_RuntimeMethod_var);
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_001b;
	}

IL_001a:
	{
		G_B3_0 = 0;
	}

IL_001b:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		List_1_t491E344573B9D6F61E36AF56132B7412453928C9* L_6 = (List_1_t491E344573B9D6F61E36AF56132B7412453928C9*)__this->___m_AllValues_13;
		Values_1_tD44BBEC769B1388DCA51C01019802B242F987014* L_7 = ___values0;
		List_1_Add_mA2DB3B33B757C906EBF689F682FD659A191A242B_inline(L_6, (Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24*)L_7, List_1_Add_mA2DB3B33B757C906EBF689F682FD659A191A242B_RuntimeMethod_var);
	}

IL_002e:
	{
		return;
	}
}
// T UnityEngine.UIElements.StyleSheet::CheckAccess<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],UnityEngine.UIElements.StyleValueType,UnityEngine.UIElements.StyleValueHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleSheet_CheckAccess_TisIl2CppFullySharedGenericAny_m3FF708C8A24141FC75246FE64C307FCA1BF08121_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___list0, int32_t ___type1, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle2, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A452795E040C66D151B05EE8648BF3F8016F207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC472776C9180B19630B6E4112538D935B62E3F35);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tB28208FB7982AD991A4C8A725F059C0890FBB3D5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T_tB28208FB7982AD991A4C8A725F059C0890FBB3D5);
	const Il2CppFullySharedGenericAny L_24 = L_23;
	const Il2CppFullySharedGenericAny L_25 = L_23;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tB28208FB7982AD991A4C8A725F059C0890FBB3D5);
	memset(V_0, 0, SizeOf_T_tB28208FB7982AD991A4C8A725F059C0890FBB3D5);
	bool V_1 = false;
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_tB28208FB7982AD991A4C8A725F059C0890FBB3D5);
	memset(V_3, 0, SizeOf_T_tB28208FB7982AD991A4C8A725F059C0890FBB3D5);
	int32_t G_B6_0 = 0;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tB28208FB7982AD991A4C8A725F059C0890FBB3D5);
		int32_t L_0;
		L_0 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9((&___handle2), NULL);
		int32_t L_1 = ___type1;
		V_1 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___type1;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var, &L_6);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9;
		L_9 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9((&___handle2), NULL);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var, &L_10);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_11);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteral0A452795E040C66D151B05EE8648BF3F8016F207, L_8, NULL);
		goto IL_0086;
	}

IL_0047:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___list0;
		if (!L_12)
		{
			goto IL_0063;
		}
	}
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_13 = ___handle2;
		int32_t L_14 = (int32_t)L_13.___valueIndex_1;
		if ((((int32_t)L_14) < ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_15 = ___handle2;
		int32_t L_16 = (int32_t)L_15.___valueIndex_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___list0;
		G_B6_0 = ((((int32_t)((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0064;
	}

IL_0063:
	{
		G_B6_0 = 1;
	}

IL_0064:
	{
		V_2 = (bool)G_B6_0;
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_0077;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E((RuntimeObject*)_stringLiteralC472776C9180B19630B6E4112538D935B62E3F35, NULL);
		goto IL_0086;
	}

IL_0077:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = ___list0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_20 = ___handle2;
		int32_t L_21 = (int32_t)L_20.___valueIndex_1;
		int32_t L_22 = L_21;
		il2cpp_codegen_memcpy(L_23, (L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_22)), SizeOf_T_tB28208FB7982AD991A4C8A725F059C0890FBB3D5);
		il2cpp_codegen_memcpy(V_0, L_23, SizeOf_T_tB28208FB7982AD991A4C8A725F059C0890FBB3D5);
	}

IL_0086:
	{
		il2cpp_codegen_memcpy(L_24, V_0, SizeOf_T_tB28208FB7982AD991A4C8A725F059C0890FBB3D5);
		il2cpp_codegen_memcpy(V_3, L_24, SizeOf_T_tB28208FB7982AD991A4C8A725F059C0890FBB3D5);
		goto IL_008a;
	}

IL_008a:
	{
		il2cpp_codegen_memcpy(L_25, V_3, SizeOf_T_tB28208FB7982AD991A4C8A725F059C0890FBB3D5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_25, SizeOf_T_tB28208FB7982AD991A4C8A725F059C0890FBB3D5);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.StyleSheet::TryCheckAccess<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[],UnityEngine.UIElements.StyleValueType,UnityEngine.UIElements.StyleValueHandle,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleSheet_TryCheckAccess_TisIl2CppFullySharedGenericAny_mD7F0FC1144C47AF441A04698A058C0539F29CD49_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___list0, int32_t ___type1, StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D ___handle2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A452795E040C66D151B05EE8648BF3F8016F207);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t68DD2B5303E70614A056159B95B95E79835C3FC3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t68DD2B5303E70614A056159B95B95E79835C3FC3);
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B4_0 = 0;
	{
		V_0 = (bool)0;
		Il2CppFullySharedGenericAny* L_0 = ___value3;
		il2cpp_codegen_initobj(L_0, SizeOf_T_t68DD2B5303E70614A056159B95B95E79835C3FC3);
		int32_t L_1;
		L_1 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9((&___handle2), NULL);
		int32_t L_2 = ___type1;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_002a;
		}
	}
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_3 = ___handle2;
		int32_t L_4 = (int32_t)L_3.___valueIndex_1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_002a;
		}
	}
	{
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_5 = ___handle2;
		int32_t L_6 = (int32_t)L_5.___valueIndex_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = ___list0;
		G_B4_0 = ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))? 1 : 0);
		goto IL_002b;
	}

IL_002a:
	{
		G_B4_0 = 0;
	}

IL_002b:
	{
		V_1 = (bool)G_B4_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_9 = ___value3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___list0;
		StyleValueHandle_t5831643AAA7AD8C5C43A4498C5E0A2545F78227D L_11 = ___handle2;
		int32_t L_12 = (int32_t)L_11.___valueIndex_1;
		int32_t L_13 = L_12;
		il2cpp_codegen_memcpy(L_14, (L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)), SizeOf_T_t68DD2B5303E70614A056159B95B95E79835C3FC3);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_9, L_14, SizeOf_T_t68DD2B5303E70614A056159B95B95E79835C3FC3);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_9, (void*)L_14);
		V_0 = (bool)1;
		goto IL_0072;
	}

IL_0047:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		int32_t L_17 = ___type1;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var, &L_18);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_16;
		int32_t L_21;
		L_21 = StyleValueHandle_get_valueType_m4FC4142350A61A75D5CD80C559689A5CC2F741B9((&___handle2), NULL);
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(StyleValueType_tC3253FE046DBB95224A74D13B534D015CC4AADDE_il2cpp_TypeInfo_var, &L_22);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_23);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_mA33C95EF832A60D72A7EE26074E13A86BE7E30C6(_stringLiteral0A452795E040C66D151B05EE8648BF3F8016F207, L_20, NULL);
	}

IL_0072:
	{
		bool L_24 = V_0;
		V_2 = L_24;
		goto IL_0076;
	}

IL_0076:
	{
		bool L_25 = V_2;
		return L_25;
	}
}
// System.Void UnityEngine.UIElements.StyleValueExtensions::CopyFrom<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.List`1<T>,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StyleValueExtensions_CopyFrom_TisIl2CppFullySharedGenericAny_m955227A6E50894DBE88DF88AC344E4046A352398_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___list0, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___other1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___list0;
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___list0;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___other1;
		InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (RuntimeObject*)L_2);
		return;
	}
}
// System.String UnityEngine.UIElements.StyleValueExtensions::DebugString<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.IStyleValue`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StyleValueExtensions_DebugString_TisIl2CppFullySharedGenericAny_m65D88D823891C8C515D8E0D5ED4AC7DD82DDA7C7_gshared (RuntimeObject* ___styleValue0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94);
		il2cpp_rgctx_method_init(method);
	}
	// T
	// sizeof(T)
	const uint32_t SizeOf_T_t57C9968E17C46FAFE4C83356081E77E62AE5ECDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t57C9968E17C46FAFE4C83356081E77E62AE5ECDC);
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ___styleValue0;
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0Invoker< int32_t >::Invoke(1 /* UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.IStyleValue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_keyword() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_0);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_2 = ___styleValue0;
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T UnityEngine.UIElements.IStyleValue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_value() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_2, (Il2CppFullySharedGenericAny*)L_3);
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), L_3);
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_4, NULL);
		G_B3_0 = L_5;
		goto IL_0035;
	}

IL_0020:
	{
		RuntimeObject* L_6 = ___styleValue0;
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0Invoker< int32_t >::Invoke(1 /* UnityEngine.UIElements.StyleKeyword UnityEngine.UIElements.IStyleValue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_keyword() */, il2cpp_rgctx_data(method->rgctx_data, 0), L_6);
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral23114468D04FA2B7A2DA455B545DB914D0A3ED94, L_9, NULL);
		G_B3_0 = L_10;
	}

IL_0035:
	{
		V_0 = G_B3_0;
		goto IL_0038;
	}

IL_0038:
	{
		String_t* L_11 = V_0;
		return L_11;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCanceled<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCanceled_TisIl2CppFullySharedGenericAny_m72E5B3BCC808BB2F1400B06350A32D16371B45AA_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = ___cancellationToken0;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_1;
		L_1 = InvokerFuncInvoker1< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_0);
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCancellation_TisIl2CppFullySharedGenericAny_mB636433E6C3D31528DE7523373943D4417E75057_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_tB032C1A2095381900012737B6DE1239064D7772F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// TResult
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TResult_tB032C1A2095381900012737B6DE1239064D7772F);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TResult_tB032C1A2095381900012737B6DE1239064D7772F);
	memset(V_0, 0, SizeOf_TResult_tB032C1A2095381900012737B6DE1239064D7772F);
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___cancellationToken0), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisIl2CppFullySharedGenericAny_mB636433E6C3D31528DE7523373943D4417E75057_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TResult_tB032C1A2095381900012737B6DE1239064D7772F);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_TResult_tB032C1A2095381900012737B6DE1239064D7772F);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken0;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		InvokerActionInvoker4< bool, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_4, (bool)1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_2: *(void**)L_2), (int32_t)0, L_3);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.OperationCanceledException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCancellation_TisIl2CppFullySharedGenericAny_mB8015D06919AC2DAAF83488DB1E4A9712A2508D1_gshared (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* ___exception0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = ___exception0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisIl2CppFullySharedGenericAny_mB8015D06919AC2DAAF83488DB1E4A9712A2508D1_RuntimeMethod_var)));
	}

IL_000e:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_2);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3 = L_2;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_4 = ___exception0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5;
		L_5 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_4, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = ___exception0;
		bool L_7;
		L_7 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, L_5, (RuntimeObject*)L_6, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromException<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromException_TisIl2CppFullySharedGenericAny_mBCA2F1FE0BB0099662EBCB343DA474E2BB09550A_gshared (Exception_t* ___exception0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Exception_t* L_0 = ___exception0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromException_TisIl2CppFullySharedGenericAny_mBCA2F1FE0BB0099662EBCB343DA474E2BB09550A_RuntimeMethod_var)));
	}

IL_000e:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_2);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3 = L_2;
		Exception_t* L_4 = ___exception0;
		bool L_5;
		L_5 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, (RuntimeObject*)L_4, NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromResult_TisIl2CppFullySharedGenericAny_m02E7B253339286E5DB22748B17A41CBC6D4419CA_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___result0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t3F3CCAFD1ED489600F2070D9249A91218CC6A408 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// TResult
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t3F3CCAFD1ED489600F2070D9249A91218CC6A408);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___result0 : &___result0), SizeOf_TResult_t3F3CCAFD1ED489600F2070D9249A91218CC6A408);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_1 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_0: *(void**)L_0));
		return L_1;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_Run_TisIl2CppFullySharedGenericAny_m09538402CAB85F6A199A805057CD770FAEF1A75A_gshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___function0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_0 = ___function0;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_2;
		L_2 = TaskScheduler_get_Default_m691F1408A31BC6BAB9A38DB128B452933DABC8EE_inline(NULL);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3;
		L_3 = InvokerFuncInvoker6< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL, L_0, L_1, (int32_t)8, (int32_t)0, L_2);
		return L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_Run_TisIl2CppFullySharedGenericAny_m332D92D0FC46B545DB879636B480B5DCFB0B60B5_gshared (Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* ___function0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* L_0 = ___function0;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2;
		L_2 = InvokerFuncInvoker2< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`1<System.Threading.Tasks.Task`1<TResult>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_Run_TisIl2CppFullySharedGenericAny_m02CCBAD925BF02455927314190511A77E0A87E73_gshared (Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* ___function0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* L_0 = ___function0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7AD319493499620E43634FF644A0CEF1624086AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_Run_TisIl2CppFullySharedGenericAny_m02CCBAD925BF02455927314190511A77E0A87E73_RuntimeMethod_var)));
	}

IL_000e:
	{
		bool L_2;
		L_2 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___cancellationToken1), NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken1;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4;
		L_4 = InvokerFuncInvoker1< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3);
		return L_4;
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_5;
		L_5 = Task_get_Factory_m43A2FDDF77C9EF77808C2B97926D3FDBDF320297_inline(NULL);
		Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* L_6 = ___function0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___cancellationToken1;
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_8;
		L_8 = TaskScheduler_get_Default_m691F1408A31BC6BAB9A38DB128B452933DABC8EE_inline(NULL);
		Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266* L_9;
		L_9 = InvokerFuncInvoker4< Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266*, Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_5, L_6, L_7, (int32_t)8, L_8);
		UnwrapPromise_1_t056E9AD8CFB7AFD55E9D63549F5F68C2827ABDB1* L_10 = (UnwrapPromise_1_t056E9AD8CFB7AFD55E9D63549F5F68C2827ABDB1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		InvokerActionInvoker2< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_10, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_9, (bool)1);
		return (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)L_10;
	}
}
// System.Collections.Generic.IEnumerator`1<T> TaskExtensions::AsIEnumerator<System.Object>(System.Threading.Tasks.Task`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskExtensions_AsIEnumerator_TisRuntimeObject_mD4CEF455D16E6665EEF88E1443116C83D5718B50_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___task0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		U3CAsIEnumeratorU3Ed__1_1_tE6211D98DDC76BA6E1A04C9909C10AF65BA77241* L_0 = (U3CAsIEnumeratorU3Ed__1_1_tE6211D98DDC76BA6E1A04C9909C10AF65BA77241*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		InvokerActionInvoker1< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0, 0);
		U3CAsIEnumeratorU3Ed__1_1_tE6211D98DDC76BA6E1A04C9909C10AF65BA77241* L_1 = L_0;
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_2 = ___task0;
		L_1->___task_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___task_2), (void*)L_2);
		return (RuntimeObject*)L_1;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`4<TArg1,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,TArg1,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppFullySharedGenericAny_m04115576E6CC428982884D8F87DD3724A14DBF1A_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799* ___beginMethod0, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___endMethod1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg12, RuntimeObject* ___state3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TArg1)
	const uint32_t SizeOf_TArg1_tB1C103A032CE9BD6E8BC9AC113B2D739B054F785 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// TArg1
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TArg1_tB1C103A032CE9BD6E8BC9AC113B2D739B054F785);
	{
		Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799* L_0 = ___beginMethod0;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___endMethod1;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___arg12 : &___arg12), SizeOf_TArg1_tB1C103A032CE9BD6E8BC9AC113B2D739B054F785);
		RuntimeObject* L_3 = ___state3;
		int32_t L_4 = (int32_t)__this->___m_defaultCreationOptions_2;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = InvokerFuncInvoker5< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppFullySharedGenericAny, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), __this, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_2: *(void**)L_2), L_3, L_4);
		return L_5;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`4<TArg1,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,TArg1,System.Object,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppFullySharedGenericAny_m4F65D83940E1B36D36E32537F53DDBD4EF7CDCD7_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799* ___beginMethod0, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___endMethod1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg12, RuntimeObject* ___state3, int32_t ___creationOptions4, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TArg1)
	const uint32_t SizeOf_TArg1_tC08EB94AF45F8297A70909AB081D4BE051B78B49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// TArg1
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TArg1_tC08EB94AF45F8297A70909AB081D4BE051B78B49);
	{
		Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799* L_0 = ___beginMethod0;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___endMethod1;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___arg12 : &___arg12), SizeOf_TArg1_tC08EB94AF45F8297A70909AB081D4BE051B78B49);
		RuntimeObject* L_3 = ___state3;
		int32_t L_4 = ___creationOptions4;
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_5;
		L_5 = InvokerFuncInvoker6< Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*, Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799*, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppFullySharedGenericAny, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, (Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*)NULL, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_2: *(void**)L_2), L_3, L_4);
		return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`5<TArg1,TArg2,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,TArg1,TArg2,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mDA4D7F2612BE37F888FDEBC6BCC9ABB0DCF93ED7_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* ___beginMethod0, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___endMethod1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg12, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg23, RuntimeObject* ___state4, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TArg1)
	const uint32_t SizeOf_TArg1_t21F6284D80A35C30C6EBF467D434A5A961962037 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// sizeof(TArg2)
	const uint32_t SizeOf_TArg2_t9DF84619D7F5C64775E8171C1DF9905463073DCB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// TArg1
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TArg1_t21F6284D80A35C30C6EBF467D434A5A961962037);
	// TArg2
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TArg2_t9DF84619D7F5C64775E8171C1DF9905463073DCB);
	{
		Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* L_0 = ___beginMethod0;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___endMethod1;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___arg12 : &___arg12), SizeOf_TArg1_t21F6284D80A35C30C6EBF467D434A5A961962037);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___arg23 : &___arg23), SizeOf_TArg2_t9DF84619D7F5C64775E8171C1DF9905463073DCB);
		RuntimeObject* L_4 = ___state4;
		int32_t L_5 = (int32_t)__this->___m_defaultCreationOptions_2;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = InvokerFuncInvoker6< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), __this, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_3: *(void**)L_3), L_4, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task System.Threading.Tasks.TaskFactory::FromAsync<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`5<TArg1,TArg2,System.AsyncCallback,System.Object,System.IAsyncResult>,System.Action`1<System.IAsyncResult>,TArg1,TArg2,System.Object,System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m78E42B6911823B51D9AE1A90E071856A3A910D53_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* ___beginMethod0, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___endMethod1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg12, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg23, RuntimeObject* ___state4, int32_t ___creationOptions5, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TArg1)
	const uint32_t SizeOf_TArg1_tFF1C5C3E8019C353F9626B4B859583B486C1737B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// sizeof(TArg2)
	const uint32_t SizeOf_TArg2_tBC544DB55DFEFC252830381AE8BEA9A908906E9C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// TArg1
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TArg1_tFF1C5C3E8019C353F9626B4B859583B486C1737B);
	// TArg2
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TArg2_tBC544DB55DFEFC252830381AE8BEA9A908906E9C);
	{
		Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* L_0 = ___beginMethod0;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___endMethod1;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___arg12 : &___arg12), SizeOf_TArg1_tFF1C5C3E8019C353F9626B4B859583B486C1737B);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___arg23 : &___arg23), SizeOf_TArg2_tBC544DB55DFEFC252830381AE8BEA9A908906E9C);
		RuntimeObject* L_4 = ___state4;
		int32_t L_5 = ___creationOptions5;
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_6;
		L_6 = InvokerFuncInvoker7< Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9*, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, (Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*)NULL, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_3: *(void**)L_3), L_4, L_5);
		return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_6;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::StartNew<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`1<TResult>,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskFactory_StartNew_TisIl2CppFullySharedGenericAny_m093A8AAFB7FEC0A2D65CEAEBE25DE0EB91469C36_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___function0, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1, int32_t ___creationOptions2, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___scheduler3, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		int32_t L_0 = ___creationOptions2;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_InternalCurrentIfAttached_m1153A4F682B30E4FEEED553E1ACD14910AFC4996(L_0, NULL);
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_2 = ___function0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___cancellationToken1;
		int32_t L_4 = ___creationOptions2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = ___scheduler3;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_6;
		L_6 = InvokerFuncInvoker6< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_1, L_2, L_3, L_4, (int32_t)0, L_5);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::StartNew<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Func`2<System.Object,TResult>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskFactory_StartNew_TisIl2CppFullySharedGenericAny_m76EE5D98B340430C4C47231CDF77B89D3AC194D6_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9* ___function0, RuntimeObject* ___state1, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken2, int32_t ___creationOptions3, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___scheduler4, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		int32_t L_0 = ___creationOptions3;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_InternalCurrentIfAttached_m1153A4F682B30E4FEEED553E1ACD14910AFC4996(L_0, NULL);
		Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9* L_2 = ___function0;
		RuntimeObject* L_3 = ___state1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___cancellationToken2;
		int32_t L_5 = ___creationOptions3;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_6 = ___scheduler4;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_7;
		L_7 = InvokerFuncInvoker7< Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_1, L_2, L_3, L_4, L_5, (int32_t)0, L_6);
		return L_7;
	}
}
// TResult System.Threading.Tasks.TaskToApm::End<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToApm_End_TisIl2CppFullySharedGenericAny_mA9EB995282FE198F78B9549F49129B68B66E517B_gshared (RuntimeObject* ___asyncResult0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t3675A36E512D38E1F035883627A6691EAA17FE0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// TResult
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TResult_t3675A36E512D38E1F035883627A6691EAA17FE0C);
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_0 = NULL;
	TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* V_1 = NULL;
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___asyncResult0;
		V_1 = ((TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB*)IsInstSealed((RuntimeObject*)L_0, TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var));
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_2 = V_1;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_2->___Task_0;
		V_0 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_001f;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___asyncResult0;
		V_0 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_001f:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_5 = V_0;
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskToApm_End_TisIl2CppFullySharedGenericAny_mA9EB995282FE198F78B9549F49129B68B66E517B_RuntimeMethod_var)));
	}

IL_0028:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_7 = V_0;
		TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 L_8;
		L_8 = InvokerFuncInvoker0< TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_7);
		V_2 = L_8;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (&V_2), (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_TResult_t3675A36E512D38E1F035883627A6691EAA17FE0C);
		return;
	}
}
// System.Void UnityEngine.TextCore.Text.TextGeneratorUtilities::ResizeInternalArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextGeneratorUtilities_ResizeInternalArray_TisIl2CppFullySharedGenericAny_m37A787CA2223C53F17430DF437321132B4E4C665_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___array0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___array0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)L_0);
		int32_t L_2;
		L_2 = Mathf_NextPowerOfTwo_m25B17CBCFB02762842BE3725618DD97C7C4B1014(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)), NULL);
		V_0 = L_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_3 = ___array0;
		int32_t L_4 = V_0;
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3, L_4);
		return;
	}
}
// System.Void UnityEngine.TextCore.Text.TextInfo::Resize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInfo_Resize_TisIl2CppFullySharedGenericAny_mA21FDA06A8D5C09210944A54B3090F0179A99190_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___array0, int32_t ___size1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___size1;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = ___size1;
		int32_t L_2;
		L_2 = Mathf_NextPowerOfTwo_m25B17CBCFB02762842BE3725618DD97C7C4B1014(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0018;
	}

IL_0011:
	{
		int32_t L_3 = ___size1;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)256)));
	}

IL_0018:
	{
		V_0 = G_B3_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_4 = ___array0;
		int32_t L_5 = V_0;
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_4, L_5);
		return;
	}
}
// System.Void UnityEngine.TextCore.Text.TextInfo::Resize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[]&,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextInfo_Resize_TisIl2CppFullySharedGenericAny_m39936E636252E70A22B0F13357857BA6754B7732_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___array0, int32_t ___size1, bool ___isBlockAllocated2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		bool L_0 = ___isBlockAllocated2;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = ___size1;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)1024))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___size1;
		int32_t L_4;
		L_4 = Mathf_NextPowerOfTwo_m25B17CBCFB02762842BE3725618DD97C7C4B1014(L_3, NULL);
		G_B4_0 = L_4;
		goto IL_001d;
	}

IL_0016:
	{
		int32_t L_5 = ___size1;
		G_B4_0 = ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)256)));
	}

IL_001d:
	{
		___size1 = G_B4_0;
	}

IL_001f:
	{
		int32_t L_6 = ___size1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_7 = ___array0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = *((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)L_7);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0034;
	}

IL_002c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_10 = ___array0;
		int32_t L_11 = ___size1;
		InvokerActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_10, L_11);
	}

IL_0034:
	{
		return;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 Texture2D_GetRawTextureData_TisIl2CppFullySharedGenericStruct_mDC6FE57DC7D62BAC05E6231541767FA81448490E_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.Texture::get_isReadable() */, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		UnityException_tA1EC1E95ADE689CF6EB7FAFF77C160AE1F559067* L_2;
		L_2 = Texture_CreateNonReadableException_m29786CD930E89C281564A9B341FD4088FBC8C94F((Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this, (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*)__this, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Texture2D_GetRawTextureData_TisIl2CppFullySharedGenericStruct_mDC6FE57DC7D62BAC05E6231541767FA81448490E_RuntimeMethod_var)));
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		V_0 = L_3;
		intptr_t L_4;
		L_4 = Texture2D_GetWritableImageData_m8E26026A332040F8713E5A2A13C5545797159A5E(__this, 0, NULL);
		void* L_5;
		L_5 = IntPtr_op_Explicit_m693F2F9E685EE117D4AC080342B8959DAF684294(L_4, NULL);
		int64_t L_6;
		L_6 = Texture2D_GetRawImageDataSize_m690AA2A7E6B0A207BC6DCA00A6313C3407CE3418(__this, NULL);
		int32_t L_7 = V_0;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_8;
		L_8 = InvokerFuncInvoker3< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, void*, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, ((int32_t)((int64_t)(L_6/((int64_t)L_7)))), (int32_t)1);
		V_1 = L_8;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_9 = V_1;
		V_3 = L_9;
		goto IL_003d;
	}

IL_003d:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_10 = V_3;
		return L_10;
	}
}
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Action`1<TState>,TState,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_TisIl2CppFullySharedGenericAny_m9C6B6650B30539CF5E0D5002BEF91E20CEF97FA1_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___callBack0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___state1, bool ___preferLocal2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(TState)
	const uint32_t SizeOf_TState_t9D342CE33C4E25F3F1C8347F70C733A54807FA11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// TState
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TState_t9D342CE33C4E25F3F1C8347F70C733A54807FA11);
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* G_B2_0 = NULL;
	U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* G_B1_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* L_0 = (U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* L_1 = L_0;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_2 = ___callBack0;
		L_1->___callBack_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callBack_0), (void*)L_2);
		U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* L_3 = L_1;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_4 = (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)L_3->___callBack_0;
		G_B1_0 = L_3;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB382FDA4B30D0397739E8EC9B987AB66568010F7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadPool_QueueUserWorkItem_TisIl2CppFullySharedGenericAny_m9C6B6650B30539CF5E0D5002BEF91E20CEF97FA1_RuntimeMethod_var)));
	}

IL_001f:
	{
		V_0 = (int32_t)1;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_6 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_6, (RuntimeObject*)G_B2_0, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___state1 : &___state1), SizeOf_TState_t9D342CE33C4E25F3F1C8347F70C733A54807FA11);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(method->rgctx_data, 4), L_7);
		bool L_9 = ___preferLocal2;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItemHelper_mADD7DAB054548E8B134A401F330D8957884F6B83(L_6, L_8, (&V_0), (bool)1, (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0), NULL);
		return L_10;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppFullySharedGenericAny_mD007C33FD9DD0D9D2616B3BDBC2C5BF2BD05C2AD_gshared (RuntimeObject* ___value0, int32_t ___argName1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tE62573C48DF6DECFAEF5210EE929BABB2F87B1CB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE62573C48DF6DECFAEF5210EE929BABB2F87B1CB);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE62573C48DF6DECFAEF5210EE929BABB2F87B1CB);
	memset(V_0, 0, SizeOf_T_tE62573C48DF6DECFAEF5210EE929BABB2F87B1CB);
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE62573C48DF6DECFAEF5210EE929BABB2F87B1CB);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_tE62573C48DF6DECFAEF5210EE929BABB2F87B1CB);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m37384675C99E588A5288DECAE9BD7AD7849B22FF(L_3, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Tuple`2<T1,T2> System.Tuple::Create<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* Tuple_Create_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE9AF76CD5498601EB67AAC29E56FB8DC552EA368_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item21, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T1)
	const uint32_t SizeOf_T1_tC7837DD779766E5E8A9C32A653E2D4B52001901B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// sizeof(T2)
	const uint32_t SizeOf_T2_tD87612FA17742E62670A0E0E676A40E375A51D39 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T1
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tC7837DD779766E5E8A9C32A653E2D4B52001901B);
	// T2
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_tD87612FA17742E62670A0E0E676A40E375A51D39);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___item10 : &___item10), SizeOf_T1_tC7837DD779766E5E8A9C32A653E2D4B52001901B);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___item21 : &___item21), SizeOf_T2_tD87612FA17742E62670A0E0E676A40E375A51D39);
		Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* L_2 = (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
// System.Tuple`3<T1,T2,T3> System.Tuple::Create<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* Tuple_Create_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE95973CD9E913D5B6AEE7676E248BE649C216793_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item32, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T1)
	const uint32_t SizeOf_T1_t68926ED79371B1C4B8FCD6F0ADC023E8F359F09B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// sizeof(T2)
	const uint32_t SizeOf_T2_t3A3E6DCA56D2C76A9E66B836712301795560DD45 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// sizeof(T3)
	const uint32_t SizeOf_T3_tABBB5597BCD59B7338A50071C7774BDAE957B0F8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T1
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t68926ED79371B1C4B8FCD6F0ADC023E8F359F09B);
	// T2
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t3A3E6DCA56D2C76A9E66B836712301795560DD45);
	// T3
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T3_tABBB5597BCD59B7338A50071C7774BDAE957B0F8);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___item10 : &___item10), SizeOf_T1_t68926ED79371B1C4B8FCD6F0ADC023E8F359F09B);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___item21 : &___item21), SizeOf_T2_t3A3E6DCA56D2C76A9E66B836712301795560DD45);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___item32 : &___item32), SizeOf_T3_tABBB5597BCD59B7338A50071C7774BDAE957B0F8);
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_3 = (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
// System.Void UnityEngine.UIElements.UIR.UIRenderDevice::DrawRanges<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(UnityEngine.UIElements.UIR.Utility/GPUBuffer`1<I>,UnityEngine.UIElements.UIR.Utility/GPUBuffer`1<T>,Unity.Collections.NativeSlice`1<UnityEngine.UIElements.UIR.DrawBufferRange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIRenderDevice_DrawRanges_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m71F34C7DEDCF897C928FC2BED61084149C5AF648_gshared (UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302* __this, GPUBuffer_1_t59623B2A3B8EFD33FB05C973C4C4EAFCF89ED241* ___ib0, GPUBuffer_1_t59623B2A3B8EFD33FB05C973C4C4EAFCF89ED241* ___vb1, NativeSlice_1_t2E5DBD9A5F77A5044A4160098A0B2A45D3EE8974 ___ranges2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSliceUnsafeUtility_GetUnsafePtr_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_m5682E2958E30CCCFB6477FB04847917857BEFAFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeSlice_1_get_Length_m2566843C81FEFDDF6407962D4E34F13C3133028D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIRenderDevice_DrawRanges_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m71F34C7DEDCF897C928FC2BED61084149C5AF648_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t* V_0 = NULL;
	{
		uint32_t L_0 = sizeof(intptr_t);
		if ((uintptr_t)((uintptr_t)1) * (uintptr_t)L_0 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), UIRenderDevice_DrawRanges_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m71F34C7DEDCF897C928FC2BED61084149C5AF648_RuntimeMethod_var);
		int8_t* L_1 = (int8_t*) alloca(((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)1), (int32_t)L_0)));
		memset(L_1, 0, ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)1), (int32_t)L_0)));
		V_0 = (intptr_t*)(L_1);
		intptr_t* L_2 = V_0;
		GPUBuffer_1_t59623B2A3B8EFD33FB05C973C4C4EAFCF89ED241* L_3 = ___vb1;
		intptr_t L_4;
		L_4 = InvokerFuncInvoker0< intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_3);
		*((intptr_t*)L_2) = (intptr_t)L_4;
		GPUBuffer_1_t59623B2A3B8EFD33FB05C973C4C4EAFCF89ED241* L_5 = ___ib0;
		intptr_t L_6;
		L_6 = InvokerFuncInvoker0< intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_5);
		intptr_t* L_7 = V_0;
		NativeSlice_1_t2E5DBD9A5F77A5044A4160098A0B2A45D3EE8974 L_8 = ___ranges2;
		void* L_9;
		L_9 = NativeSliceUnsafeUtility_GetUnsafePtr_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_m5682E2958E30CCCFB6477FB04847917857BEFAFA(L_8, NativeSliceUnsafeUtility_GetUnsafePtr_TisDrawBufferRange_t684F255F5C954760B12F6689F84E78811040C7A4_m5682E2958E30CCCFB6477FB04847917857BEFAFA_RuntimeMethod_var);
		intptr_t L_10;
		memset((&L_10), 0, sizeof(L_10));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_10), L_9, /*hidden argument*/NULL);
		int32_t L_11;
		L_11 = NativeSlice_1_get_Length_m2566843C81FEFDDF6407962D4E34F13C3133028D_inline((&___ranges2), NativeSlice_1_get_Length_m2566843C81FEFDDF6407962D4E34F13C3133028D_RuntimeMethod_var);
		intptr_t L_12 = (intptr_t)__this->___m_VertexDecl_2;
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Utility_DrawRanges_m5C054AC5885504B35399A861D70E9492DBC957A6(L_6, L_7, 1, L_10, L_11, L_12, NULL);
		return;
	}
}
// Unity.Collections.NativeSlice`1<T> UnityEngine.UIElements.UIR.UIRenderDevice::PtrToSlice<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 UIRenderDevice_PtrToSlice_TisIl2CppFullySharedGenericStruct_m02CD4500DE029AC1DD59979A7C29E01DD5C8117B_gshared (void* ___p0, int32_t ___count1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		void* L_0 = ___p0;
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		int32_t L_2 = ___count1;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_3;
		L_3 = InvokerFuncInvoker3< NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, void*, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2);
		V_0 = L_3;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_4 = V_0;
		V_1 = L_4;
		goto IL_0012;
	}

IL_0012:
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_5 = V_1;
		return L_5;
	}
}
// T UnityEngine.UIElements.UQueryExtensions::Q<System.Object>(UnityEngine.UIElements.VisualElement,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UQueryExtensions_Q_TisRuntimeObject_m89141E23D03237B5D03A2B126F6726F52A6AC35C_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___e0, String_t* ___name1, String_t* ___className2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		V_1 = (bool)((((RuntimeObject*)(Type_t*)L_1) == ((RuntimeObject*)(Type_t*)L_3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = ___e0;
		String_t* L_6 = ___name1;
		String_t* L_7 = ___className2;
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8;
		L_8 = UQueryExtensions_Q_m625363964EA8275D50A9767F1E3468901C1B0BEC(L_5, L_6, L_7, NULL);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0237;
	}

IL_0034:
	{
		String_t* L_9 = ___name1;
		V_3 = (bool)((((RuntimeObject*)(String_t*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_0114;
		}
	}
	{
		String_t* L_11 = ___className2;
		V_4 = (bool)((((RuntimeObject*)(String_t*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_009b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = ___e0;
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_14;
		L_14 = UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004((&((UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_StaticFields*)il2cpp_codegen_static_fields_for(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var))->___SingleElementTypeQuery_4), L_13, UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004_RuntimeMethod_var);
		V_0 = L_14;
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_15 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_16 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_15.___m_Matchers_2;
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_17;
		L_17 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_16, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_18 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_17.___complexSelector_1;
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_19;
		L_19 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_18, NULL);
		int32_t L_20 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_21 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_22;
		L_22 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4* L_23 = ((IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 3)))->___s_Instance_0;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_24;
		L_24 = StyleSelectorPart_CreatePredicate_mB47D568BDD71A75929CCF6BD1981FE0565687EDD((RuntimeObject*)L_23, NULL);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_24);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_25;
		L_25 = UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94((&V_0), UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94_RuntimeMethod_var);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_25, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0237;
	}

IL_009b:
	{
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_26 = ___e0;
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_27;
		L_27 = UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004((&((UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_StaticFields*)il2cpp_codegen_static_fields_for(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var))->___SingleElementTypeAndClassQuery_6), L_26, UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004_RuntimeMethod_var);
		V_0 = L_27;
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_28 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_29 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_28.___m_Matchers_2;
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_30;
		L_30 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_29, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_31 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_30.___complexSelector_1;
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_32;
		L_32 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_31, NULL);
		int32_t L_33 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_34 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_35;
		L_35 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_34, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4* L_36 = ((IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 3)))->___s_Instance_0;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_37;
		L_37 = StyleSelectorPart_CreatePredicate_mB47D568BDD71A75929CCF6BD1981FE0565687EDD((RuntimeObject*)L_36, NULL);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_37);
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_38 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_39 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_38.___m_Matchers_2;
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_40;
		L_40 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_39, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_41 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_40.___complexSelector_1;
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_42;
		L_42 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_41, NULL);
		int32_t L_43 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_44 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_45;
		L_45 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_44, NULL);
		String_t* L_46 = ___className2;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_47;
		L_47 = StyleSelectorPart_CreateClass_m35749E6336C3E92EADB130D6BF196FD7AAB9F066(L_46, NULL);
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_47);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_48;
		L_48 = UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94((&V_0), UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94_RuntimeMethod_var);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_48, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0237;
	}

IL_0114:
	{
		String_t* L_49 = ___className2;
		V_5 = (bool)((((RuntimeObject*)(String_t*)L_49) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_50 = V_5;
		if (!L_50)
		{
			goto IL_0198;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_51 = ___e0;
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_52;
		L_52 = UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004((&((UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_StaticFields*)il2cpp_codegen_static_fields_for(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var))->___SingleElementTypeAndNameQuery_5), L_51, UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004_RuntimeMethod_var);
		V_0 = L_52;
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_53 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_54 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_53.___m_Matchers_2;
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_55;
		L_55 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_54, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_56 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_55.___complexSelector_1;
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_57;
		L_57 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_56, NULL);
		int32_t L_58 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_59 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_60;
		L_60 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_59, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4* L_61 = ((IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 3)))->___s_Instance_0;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_62;
		L_62 = StyleSelectorPart_CreatePredicate_mB47D568BDD71A75929CCF6BD1981FE0565687EDD((RuntimeObject*)L_61, NULL);
		(L_60)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_62);
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_63 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_64 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_63.___m_Matchers_2;
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_65;
		L_65 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_64, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_66 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_65.___complexSelector_1;
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_67;
		L_67 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_66, NULL);
		int32_t L_68 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_69 = (L_67)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_68));
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_70;
		L_70 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_69, NULL);
		String_t* L_71 = ___name1;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_72;
		L_72 = StyleSelectorPart_CreateId_m0D9ACD2EEC4D2CA1081B8158ED53F268840568E4(L_71, NULL);
		(L_70)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_72);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_73;
		L_73 = UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94((&V_0), UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94_RuntimeMethod_var);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_73, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0237;
	}

IL_0198:
	{
		il2cpp_codegen_runtime_class_init_inline(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_74 = ___e0;
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_75;
		L_75 = UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004((&((UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_StaticFields*)il2cpp_codegen_static_fields_for(UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_il2cpp_TypeInfo_var))->___SingleElementTypeAndNameAndClassQuery_7), L_74, UQueryState_1_RebuildOn_m6A44E1618AB0FD0EDCBEEF093B74FDEA03723004_RuntimeMethod_var);
		V_0 = L_75;
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_76 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_77 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_76.___m_Matchers_2;
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_78;
		L_78 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_77, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_79 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_78.___complexSelector_1;
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_80;
		L_80 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_79, NULL);
		int32_t L_81 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_82 = (L_80)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_83;
		L_83 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_82, NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 3));
		IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4* L_84 = ((IsOfType_1_tAD57152B527BA8DDBDA8E8C388140620049ADBE4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 3)))->___s_Instance_0;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_85;
		L_85 = StyleSelectorPart_CreatePredicate_mB47D568BDD71A75929CCF6BD1981FE0565687EDD((RuntimeObject*)L_84, NULL);
		(L_83)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_85);
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_86 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_87 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_86.___m_Matchers_2;
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_88;
		L_88 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_87, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_89 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_88.___complexSelector_1;
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_90;
		L_90 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_89, NULL);
		int32_t L_91 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_92 = (L_90)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_91));
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_93;
		L_93 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_92, NULL);
		String_t* L_94 = ___name1;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_95;
		L_95 = StyleSelectorPart_CreateId_m0D9ACD2EEC4D2CA1081B8158ED53F268840568E4(L_94, NULL);
		(L_93)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_95);
		UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA L_96 = V_0;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_97 = (List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC*)L_96.___m_Matchers_2;
		RuleMatcher_t327CFEB02C81AA20E639DE949DCBBAB5E92FF28E L_98;
		L_98 = List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68(L_97, 0, List_1_get_Item_mB33745D62B8763A3CCF432DC7DE3151625657F68_RuntimeMethod_var);
		StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD* L_99 = (StyleComplexSelector_tE46C29F65FDBA48D3152781187401C8B55B7D8AD*)L_98.___complexSelector_1;
		StyleSelectorU5BU5D_t11A633455FC601606B3DF3CEDDDAB1625B54708D* L_100;
		L_100 = StyleComplexSelector_get_selectors_m54911D4E758E1A19A16E948D6D10BEB5795ADC02(L_99, NULL);
		int32_t L_101 = 0;
		StyleSelector_t9B00AE16312CA9F598A45B52F74BC14899CA7362* L_102 = (L_100)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_101));
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_103;
		L_103 = StyleSelector_get_parts_mE6EEAE6825862DDA89947B892B661A865D463CEF(L_102, NULL);
		String_t* L_104 = ___className2;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_105;
		L_105 = StyleSelectorPart_CreateClass_m35749E6336C3E92EADB130D6BF196FD7AAB9F066(L_104, NULL);
		(L_103)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)L_105);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_106;
		L_106 = UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94((&V_0), UQueryState_1_First_m0E66C612BCBDFFA32D636D936B37CF56C0C2BA94_RuntimeMethod_var);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_106, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0237;
	}

IL_0237:
	{
		RuntimeObject* L_107 = V_2;
		return L_107;
	}
}
// UnityEngine.UIElements.UQueryBuilder`1<T> UnityEngine.UIElements.UQueryExtensions::Query<System.Object>(UnityEngine.UIElements.VisualElement,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 UQueryExtensions_Query_TisRuntimeObject_m6A1C2EF1952AF47CD8709A5CC5B5E6620115F342_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___e0, String_t* ___name1, String_t* ___className2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UQueryBuilder_1__ctor_m841C38F69A30425CCEA1F93525C97AD0B9648486_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___e0;
		V_1 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UQueryExtensions_Query_TisRuntimeObject_m6A1C2EF1952AF47CD8709A5CC5B5E6620115F342_RuntimeMethod_var)));
	}

IL_0014:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3 = ___e0;
		UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139 L_4;
		memset((&L_4), 0, sizeof(L_4));
		UQueryBuilder_1__ctor_m841C38F69A30425CCEA1F93525C97AD0B9648486((&L_4), L_3, /*hidden argument*/UQueryBuilder_1__ctor_m841C38F69A30425CCEA1F93525C97AD0B9648486_RuntimeMethod_var);
		V_2 = L_4;
		String_t* L_5 = ___name1;
		String_t* L_6 = ___className2;
		UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 L_7;
		L_7 = InvokerFuncInvoker2< UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2, String_t*, String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), (&V_2), L_5, L_6);
		V_0 = L_7;
		UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 L_8 = V_0;
		V_3 = L_8;
		goto IL_0029;
	}

IL_0029:
	{
		UQueryBuilder_1_t8CB9E64859C07C671A5AFE928DC28F2828EC1BD2 L_9 = V_3;
		return L_9;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mA776878E17D6C89A34DECD67476A3B74E00A17ED_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t723815F6601616697B9CA45CDFF5C394DBB2BA05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	{
		Il2CppFullySharedGenericAny* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = SizeOf_T_t723815F6601616697B9CA45CDFF5C394DBB2BA05;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mC8BEDC55BA2BEBD97E748563F7CDBD2207C7296B_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___source0, intptr_t ___elementOffset1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t2C6587B909967C277BA98C9DEF12620959E001D2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	{
		Il2CppFullySharedGenericAny* L_0 = ___source0;
		intptr_t L_1 = ___elementOffset1;
		uint32_t L_2 = SizeOf_T_t2C6587B909967C277BA98C9DEF12620959E001D2;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::Add<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_Add_TisIl2CppFullySharedGenericAny_mF9ADAE9E7FEE99C0D48C45C41C457E2FC8F2F930_gshared (void* ___source0, int32_t ___elementOffset1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t25A6BC065D7777DD481589EC0E5A911DC751087C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___elementOffset1;
		uint32_t L_2 = SizeOf_T_t25A6BC065D7777DD481589EC0E5A911DC751087C;
		return ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m60CB897178565BAB459AC5DF6093CE94B25DF111_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___source0, intptr_t ___byteOffset1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___source0;
		intptr_t L_1 = ___byteOffset1;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m118A42403810B99A0549EB4E5F30C950F0935D21_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___source0, uint64_t ___byteOffset1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___source0;
		uint64_t L_1 = ___byteOffset1;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_m04BEF6277775C13DD8A986812AAA3FCEC32DCCBE((void*)((uintptr_t)L_1), NULL);
		Il2CppFullySharedGenericAny* L_3;
		L_3 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_2);
		return L_3;
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisIl2CppFullySharedGenericAny_m5F4B6D09776601BD6F2EA18BAB08BE7F640A787F_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___left0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___right1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___left0;
		Il2CppFullySharedGenericAny* L_1 = ___right1;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
// T System.Runtime.CompilerServices.Unsafe::As<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_As_TisRuntimeObject_m4BCC0ED093BFD47D807324EA964B9020D6203B95_gshared (RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___o0;
		return L_0;
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m80FADCB5E6CC8A1865E6F26DFEF2CD94BF91507A_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___source0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___source0;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisIl2CppFullySharedGenericAny_m4299CF773ABA68063CC2349190DCB9E3D147C0E7_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___value0;
		return (void*)(((uintptr_t)L_0));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_m000278E7BF50F6456AC869C06F0FC2978FC07FDA_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___source0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___source0;
		return L_0;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_m0E69757966ABC5AC1A634FD84C2F18B88CA213DD_gshared (void* ___source0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___source0;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisIl2CppFullySharedGenericAny_m84E64FD0D0A7C2EEAF6B6DF2A7403798BA7E02F7_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___left0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___right1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___left0;
		Il2CppFullySharedGenericAny* L_1 = ___right1;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// T System.Runtime.CompilerServices.Unsafe::Read<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_Read_TisIl2CppFullySharedGenericAny_m76354D2C381FED7189A898CF0ABD92139C2226BC_gshared (void* ___source0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tD6C0FC5B61C47D4353904986944F37C7308B481C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tD6C0FC5B61C47D4353904986944F37C7308B481C);
	{
		void* L_0 = ___source0;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tD6C0FC5B61C47D4353904986944F37C7308B481C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tD6C0FC5B61C47D4353904986944F37C7308B481C);
		return;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_ReadUnaligned_TisIl2CppFullySharedGenericAny_m68922ABEBA47C801C71CFBACE3648458CC81451C_gshared (uint8_t* ___source0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tC9C0164859DE6E4D58636925B6758D92908F5540 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tC9C0164859DE6E4D58636925B6758D92908F5540);
	{
		uint8_t* L_0 = ___source0;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tC9C0164859DE6E4D58636925B6758D92908F5540);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tC9C0164859DE6E4D58636925B6758D92908F5540);
		return;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mC21AC4A303359BF2D60749808AC47500C825375D_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tC9200F9C6857EA695B0074F82A5778283BA78FD6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tC9200F9C6857EA695B0074F82A5778283BA78FD6;
		return (int32_t)L_0;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Byte&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisIl2CppFullySharedGenericAny_m4B60EEEC18B4C0775A6760F90EB0CBDD4A5039EB_gshared (uint8_t* ___destination0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t8AC12E90A10A15C08DFA6228B30CD1E8817DA55A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t8AC12E90A10A15C08DFA6228B30CD1E8817DA55A);
	{
		uint8_t* L_0 = ___destination0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value1 : &___value1), SizeOf_T_t8AC12E90A10A15C08DFA6228B30CD1E8817DA55A);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_T_t8AC12E90A10A15C08DFA6228B30CD1E8817DA55A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		return;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m832E1AA2499C9C542231D44DF64A1C0E98898825_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility::EnumEquals<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_EnumEquals_TisIl2CppFullySharedGenericStruct_m16323DFCABF497DF19B802126CB9DCAE67A67175_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___lhs0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___rhs1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t037727C64B15963012175593340444EA34EB389E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t037727C64B15963012175593340444EA34EB389E);
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t037727C64B15963012175593340444EA34EB389E);
	{
		il2cpp_codegen_memcpy(L_0, ___lhs0, SizeOf_T_t037727C64B15963012175593340444EA34EB389E);
		il2cpp_codegen_memcpy(L_1, ___rhs1, SizeOf_T_t037727C64B15963012175593340444EA34EB389E);
		return (bool)((((int64_t)((int64_t)L_0)) == ((int64_t)((int64_t)L_1)))? 1 : 0);
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::EnumToInt<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_EnumToInt_TisIl2CppFullySharedGenericStruct_mE1C98BF2C9354966EB1D831D33479190191E49AD_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___enumValue0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct*, int32_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (Il2CppFullySharedGenericStruct*)___enumValue0, (&V_0));
		int32_t L_0 = V_0;
		V_1 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::InternalEnumToInt<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalEnumToInt_TisIl2CppFullySharedGenericAny_mADAA6C8E6274B90EB1C28C063666F96977E6CA48_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___enumValue0, int32_t* ___intValue1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t* L_0 = ___intValue1;
		Il2CppFullySharedGenericAny* L_1 = ___enumValue0;
		int32_t L_2 = *((int32_t*)L_1);
		*((int32_t*)L_0) = (int32_t)L_2;
		return;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m9C5EDFD70A3D351D292C6BF29C0EECBDEDCF6CF5_gshared (void* ___source0, int32_t ___index1, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t36A57F9CE6EB234DE97351DCA9ED54BE9E078207 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t36A57F9CE6EB234DE97351DCA9ED54BE9E078207);
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = SizeOf_T_t36A57F9CE6EB234DE97351DCA9ED54BE9E078207;
		il2cpp_codegen_memcpy(L_3, ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), SizeOf_T_t36A57F9CE6EB234DE97351DCA9ED54BE9E078207);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t36A57F9CE6EB234DE97351DCA9ED54BE9E078207);
		return;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElementWithStride_TisIl2CppFullySharedGenericAny_m9B96B79520743C85C06FD2EF89EB76405E5716F0_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t0CF86CC2E427A2F2A260E2663885FDD5AA53F533 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t0CF86CC2E427A2F2A260E2663885FDD5AA53F533);
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		il2cpp_codegen_memcpy(L_3, ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), SizeOf_T_t0CF86CC2E427A2F2A260E2663885FDD5AA53F533);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t0CF86CC2E427A2F2A260E2663885FDD5AA53F533);
		return;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_m24A1FF4760612C0510B423C4A4E13BBE4801BAC5_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t0CC1D76DF14D95F8EACD9DB5B55E2C5EDD000035 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_t0CC1D76DF14D95F8EACD9DB5B55E2C5EDD000035;
		return (int32_t)L_0;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m84385A977356DBBC280DFCE8A8FD40607D30238F_gshared (void* ___destination0, int32_t ___index1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tF9333180B7DF78112D3B62D2E60EB4F10CC9E094 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF9333180B7DF78112D3B62D2E60EB4F10CC9E094);
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = SizeOf_T_tF9333180B7DF78112D3B62D2E60EB4F10CC9E094;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value2 : &___value2), SizeOf_T_tF9333180B7DF78112D3B62D2E60EB4F10CC9E094);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), L_3, SizeOf_T_tF9333180B7DF78112D3B62D2E60EB4F10CC9E094);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisIl2CppFullySharedGenericAny_m74BD3588259556A716A94508AC587C4DF988D887_gshared (void* ___destination0, int32_t ___index1, int32_t ___stride2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tF48857F3BB8786EDF8E83F41236E473C2AF9B2AA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF48857F3BB8786EDF8E83F41236E473C2AF9B2AA);
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___value3 : &___value3), SizeOf_T_tF48857F3BB8786EDF8E83F41236E473C2AF9B2AA);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), L_3, SizeOf_T_tF48857F3BB8786EDF8E83F41236E473C2AF9B2AA);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), (void*)L_3);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetVectorArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(UnityEngine.MaterialPropertyBlock,System.Int32,Unity.Collections.NativeSlice`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_TisIl2CppFullySharedGenericStruct_m90D506AE8377EFD80DB587E0828EA2EC23BB330D_gshared (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___props0, int32_t ___name1, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___vector4s2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (&___vector4s2));
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), (&___vector4s2));
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, L_1))/((int32_t)16)));
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_2 = ___props0;
		int32_t L_3 = ___name1;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_4 = ___vector4s2;
		void* L_5;
		L_5 = InvokerFuncInvoker1< void*, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_4);
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_6), L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Utility_SetVectorArray_m6C8F08342C9D3D33A183B29536DA13B07E2763FA(L_2, L_3, L_6, L_7, NULL);
		return;
	}
}
// T UnityEngine.UIElements.UxmlAttributeDescription::GetValueFromBag<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxmlAttributeDescription_GetValueFromBag_TisIl2CppFullySharedGenericAny_mAD4F4838D245291B33A0A6819595AAE917FA073A_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___bag0, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___cc1, Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* ___converterFunc2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___defaultValue3, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	const Il2CppFullySharedGenericAny L_11 = L_9;
	const Il2CppFullySharedGenericAny L_12 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	memset(V_3, 0, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	{
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_0 = ___converterFunc2;
		V_1 = (bool)((((RuntimeObject*)(Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UxmlAttributeDescription_GetValueFromBag_TisIl2CppFullySharedGenericAny_mAD4F4838D245291B33A0A6819595AAE917FA073A_RuntimeMethod_var)));
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___bag0;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___cc1;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_7 = ___converterFunc2;
		String_t* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___defaultValue3 : &___defaultValue3), SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		InvokerActionInvoker3< String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_9: *(void**)L_9), (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy(V_3, L_10, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		goto IL_0035;
	}

IL_0030:
	{
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___defaultValue3 : &___defaultValue3), SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		il2cpp_codegen_memcpy(V_3, L_11, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		goto IL_0035;
	}

IL_0035:
	{
		il2cpp_codegen_memcpy(L_12, V_3, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_12, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.UxmlAttributeDescription::TryGetValueFromBag<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBag_TisIl2CppFullySharedGenericAny_mCED4FA8C9BF02C7E06E00E3C378BF3E04890B72F_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___bag0, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___cc1, Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* ___converterFunc2, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___defaultValue3, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___value4, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
	const Il2CppFullySharedGenericAny L_12 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___bag0;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_1 = ___cc1;
		bool L_2;
		L_2 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_0, L_1, (&V_0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_4 = ___converterFunc2;
		V_2 = (bool)((!(((RuntimeObject*)(Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_6 = ___value4;
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_7 = ___converterFunc2;
		String_t* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___defaultValue3 : &___defaultValue3), SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		InvokerActionInvoker3< String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_9: *(void**)L_9), (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, L_10, SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)L_10);
		goto IL_0037;
	}

IL_002c:
	{
		Il2CppFullySharedGenericAny* L_11 = ___value4;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___defaultValue3 : &___defaultValue3), SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_11, L_12, SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_11, (void*)L_12);
	}

IL_0037:
	{
		V_3 = (bool)1;
		goto IL_003f;
	}

IL_003b:
	{
		V_3 = (bool)0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Numerics.Vector`1<System.UInt64> System.Numerics.Vector::AsVectorUInt64<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisIl2CppFullySharedGenericStruct_m79FB4427170C30BCE81E09A4E768EB13D254F711_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___value0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = InvokerFuncInvoker1< Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0);
		return L_1;
	}
}
// System.Numerics.Vector`1<T> System.Numerics.Vector::Equals<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Numerics.Vector`1<T>,System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 Vector_Equals_TisIl2CppFullySharedGenericStruct_m6F089ED88955D9D91866E5EA2B76F3C006809BCF_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___left0, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___right1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___left0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_1 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_2;
		L_2 = InvokerFuncInvoker2< Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		return L_2;
	}
}
// UnityEngine.UIElements.Experimental.ValueAnimation`1<T> UnityEngine.UIElements.VisualElement::StartAnimation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.Experimental.ValueAnimation`1<T>,System.Func`2<UnityEngine.UIElements.VisualElement,T>,T,System.Int32,System.Action`2<UnityEngine.UIElements.VisualElement,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* VisualElement_StartAnimation_TisIl2CppFullySharedGenericAny_m7C5DF9BEFDC72CB1B91AA3BAFE9EBC967BAA51DD_gshared (/*UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* ___anim0, Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C* ___fromValueGetter1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___to2, int32_t ___durationMs3, Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E* ___onValueChanged4, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t8F22694D7E4107CBB0A8C6C8BD8CE34C2145FAA8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t8F22694D7E4107CBB0A8C6C8BD8CE34C2145FAA8);
	ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* V_0 = NULL;
	{
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_0 = ___anim0;
		Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C* L_1 = ___fromValueGetter1;
		InvokerActionInvoker1< Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_0, L_1);
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_2 = ___anim0;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___to2 : &___to2), SizeOf_T_t8F22694D7E4107CBB0A8C6C8BD8CE34C2145FAA8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_3: *(void**)L_3));
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_4 = ___anim0;
		int32_t L_5 = ___durationMs3;
		InvokerActionInvoker1< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_4, L_5);
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_6 = ___anim0;
		Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E* L_7 = ___onValueChanged4;
		InvokerActionInvoker1< Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_6, L_7);
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_8 = ___anim0;
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), L_8);
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_9 = ___anim0;
		V_0 = L_9;
		goto IL_002d;
	}

IL_002d:
	{
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.UIElements.VisualTreeUpdater::SetUpdater<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_SetUpdater_TisIl2CppFullySharedGenericAny_m4EF351A8B23A4EE9E88C20E5398468F5AC304360_gshared (VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9* __this, int32_t ___phase0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	memset(V_0, 0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	memset(V_1, 0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_0 = (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449*)__this->___m_UpdaterArray_1;
		int32_t L_1 = ___phase0;
		RuntimeObject* L_2;
		L_2 = UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C(L_0, L_1, NULL);
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0013;
		}
	}
	{
		goto IL_0019;
	}

IL_0013:
	{
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)G_B2_0);
	}

IL_0019:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_1, L_4, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_5 = (BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)__this->___m_Panel_0;
		ConstrainedActionInvoker1< BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_6, (void*)(Il2CppFullySharedGenericAny*)V_1, L_5);
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		il2cpp_codegen_memcpy(V_0, L_7, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_8 = (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449*)__this->___m_UpdaterArray_1;
		int32_t L_9 = ___phase0;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_10);
		UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11(L_8, L_9, (RuntimeObject*)L_11, NULL);
		return;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Volatile_Read_TisRuntimeObject_m1BB143C73CA3A7A5B880A663FEE10E149F0F274F_gshared (RuntimeObject** ___location0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject** L_0 = ___location0;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = (RuntimeObject*)L_1->___Value_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_3;
		L_3 = il2cpp_unsafe_as<RuntimeObject*>(L_2);
		return L_3;
	}
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_mB9B6B04771AC33604CEAD0611ADB13B54869254B_gshared (RuntimeObject** ___location0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject** L_0 = ___location0;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = ___value1;
		il2cpp_codegen_memory_barrier();
		L_1->___Value_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value_0), (void*)L_2);
		return;
	}
}
// T System.Xml.Linq.XDocument::GetFirstNode<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocument_GetFirstNode_TisRuntimeObject_mB6611AFC4A5D605253FE7A3ABB8BFCB6250CA705_gshared (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_t185C922661054AAD14F49676DD6F3CB10D652A30_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)__this)->___content_3;
		V_0 = ((XNode_t185C922661054AAD14F49676DD6F3CB10D652A30*)IsInstClass((RuntimeObject*)L_0, XNode_t185C922661054AAD14F49676DD6F3CB10D652A30_il2cpp_TypeInfo_var));
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}

IL_000f:
	{
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_2 = V_0;
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_3 = (XNode_t185C922661054AAD14F49676DD6F3CB10D652A30*)L_2->___next_2;
		V_0 = L_3;
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_4 = V_0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
	}

IL_002c:
	{
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_7 = V_0;
		RuntimeObject* L_8 = (RuntimeObject*)((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)__this)->___content_3;
		if ((!(((RuntimeObject*)(XNode_t185C922661054AAD14F49676DD6F3CB10D652A30*)L_7) == ((RuntimeObject*)(RuntimeObject*)L_8))))
		{
			goto IL_000f;
		}
	}

IL_0035:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_2;
		return L_9;
	}
}
// T System.Xml.Linq.XObject::Annotation<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XObject_Annotation_TisRuntimeObject_mA59EF6437D825A65AED4C032B09C4AAEAD53631E_gshared (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___annotations_1;
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___annotations_1;
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->___annotations_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_0028:
	{
		V_1 = 0;
		goto IL_004d;
	}

IL_002c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject* L_8 = V_2;
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_9 = V_2;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_10 = V_3;
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeObject* L_11 = V_3;
		return L_11;
	}

IL_0049:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004d:
	{
		int32_t L_13 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_002c;
		}
	}

IL_0053:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
		RuntimeObject* L_15 = V_4;
		return L_15;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* XmlListConverter_ToArray_TisIl2CppFullySharedGenericAny_mE842A5B9F83A5858104C85C66B591AD394929357_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tDC5A1FFD4912C532F838E238130A2E3F50CA030C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_tDC5A1FFD4912C532F838E238130A2E3F50CA030C);
	const Il2CppFullySharedGenericAny L_37 = L_15;
	RuntimeObject* V_0 = NULL;
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_1 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___list0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		void* L_16 = UnBox_Any(L_14, il2cpp_rgctx_data(method->rgctx_data, 2), L_15);
		il2cpp_codegen_memcpy((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)), (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_16))), SizeOf_T_tDC5A1FFD4912C532F838E238130A2E3F50CA030C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)), (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_16))));
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0047:
	{
		int32_t L_18 = V_3;
		RuntimeObject* L_19 = V_0;
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_001a;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = V_2;
		return L_21;
	}

IL_0052:
	{
		RuntimeObject* L_22 = ___list0;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_23 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_23);
		V_1 = L_23;
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_22, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_25 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_26 = V_6;
					if (!L_26)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_27 = V_6;
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_28 = V_4;
				RuntimeObject* L_29;
				L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_28);
				V_5 = L_29;
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_30 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_31 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
				RuntimeObject* L_32 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_33, NULL);
				RuntimeObject* L_35 = ___nsResolver1;
				RuntimeObject* L_36;
				L_36 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_31, L_32, L_34, L_35);
				void* L_38 = UnBox_Any(L_36, il2cpp_rgctx_data(method->rgctx_data, 2), L_37);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_38))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_38)))));
			}

IL_0093_1:
			{
				RuntimeObject* L_39 = V_4;
				bool L_40;
				L_40 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_39);
				if (L_40)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_41 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_42;
		L_42 = InvokerFuncInvoker0< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_41);
		return L_42;
	}
}
// System.Collections.IEnumerator IEnumeratorAwaitExtensions/InstructionWrappers::ReturnSelf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionWrappers_ReturnSelf_TisIl2CppFullySharedGenericAny_m929C9EAE04A221C06DA20A59FE7075B3F1769109_gshared (/*IEnumeratorAwaitExtensions/SimpleCoroutineAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/SimpleCoroutineAwaiter_1_t9375CF9D73F0B708D171B52B83182E1990592C49* ___awaiter0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___instruction1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tD39EC617B60343F8152CAD0BD65BA5680F7A02E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tD39EC617B60343F8152CAD0BD65BA5680F7A02E1);
	{
		U3CReturnSelfU3Ed__2_1_tC289F9E6881785B4EEA32FF0B9756FB4BFBBEFD0* L_0 = (U3CReturnSelfU3Ed__2_1_tC289F9E6881785B4EEA32FF0B9756FB4BFBBEFD0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		InvokerActionInvoker1< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0, 0);
		U3CReturnSelfU3Ed__2_1_tC289F9E6881785B4EEA32FF0B9756FB4BFBBEFD0* L_1 = L_0;
		SimpleCoroutineAwaiter_1_t9375CF9D73F0B708D171B52B83182E1990592C49* L_2 = ___awaiter0;
		il2cpp_codegen_write_instance_field_data<SimpleCoroutineAwaiter_1_t9375CF9D73F0B708D171B52B83182E1990592C49*>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),2), L_2);
		U3CReturnSelfU3Ed__2_1_tC289F9E6881785B4EEA32FF0B9756FB4BFBBEFD0* L_3 = L_1;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___instruction1 : &___instruction1), SizeOf_T_tD39EC617B60343F8152CAD0BD65BA5680F7A02E1);
		il2cpp_codegen_write_instance_field_data(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),3), L_4, SizeOf_T_tD39EC617B60343F8152CAD0BD65BA5680F7A02E1);
		return (RuntimeObject*)L_3;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitLambda<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisIl2CppFullySharedGenericAny_m3A43E5E58A18E3D2892C620B8AED19012BA4E57B_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___node0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_1 = ___node0;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_7 = ___node0;
		int32_t L_8 = V_3;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(17 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___node0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = InvokerFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15);
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitLambda<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisIl2CppFullySharedGenericAny_m0060183C8192066670005792D19D2EC19C50DBB7_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___node0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_0 = ___node0;
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_3 = ___node0;
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_6 = ___node0;
		int32_t L_7 = V_2;
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(17 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___node0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___node0;
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_23 = ___node0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_25 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_26 = ___node0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_28;
		L_28 = VirtualFuncInvoker2Invoker< Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(19 /* System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Rewrite(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[]) */, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	{
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_0 = __this->___U3ChierarchyU3Ek__BackingField_49;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m43A2FDDF77C9EF77808C2B97926D3FDBDF320297_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CFactoryU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m691F1408A31BC6BAB9A38DB128B452933DABC8EE_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var))->___s_defaultTaskScheduler_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) 
{
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->____cancellationToken_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body_3;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_gshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___ptr0;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_gshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m38FF5678044D39B69F0EF275C8457A01F9B19527_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
}
