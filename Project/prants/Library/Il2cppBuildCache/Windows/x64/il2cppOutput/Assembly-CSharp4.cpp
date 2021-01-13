#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct VirtFuncInvoker8
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericVirtFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct GenericVirtFuncInvoker8
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InterfaceFuncInvoker8
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct GenericInterfaceFuncInvoker8
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, T8, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7, T8 p8)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, p8, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};

// System.Action`1<Photon.Compression.ElementCrusher>
struct Action_1_tB4D17413586E52E6108CBAF726B66BEA0D8E1598;
// System.Action`1<emotitron.Compression.FloatCrusher>
struct Action_1_t40B00B540ABD3B15F597C5DD2A34617595A8904D;
// System.Action`1<Photon.Compression.TransformCrusher>
struct Action_1_tE651563760D47CD655EAF1557D140B34FECB81D0;
// System.Action`2<System.IntPtr,Photon.Compression.Internal.PackFrame>
struct Action_2_t3BBD0274AE0477407194AFAB3B4A2BCF40A71D34;
// System.Action`2<System.Object,Photon.Compression.Internal.PackFrame>
struct Action_2_t95F7CF1C13BE7A0EDC1E168451664D3C076A6841;
// System.Action`2<Photon.Compression.Internal.PackFrame,Photon.Compression.Internal.PackFrame>
struct Action_2_tF543EB1BE063AA2C4C189F907F108085AB479B7F;
// System.Action`2<Photon.Pun.Simple.SyncObject,Photon.Pun.Simple.ReadyStateEnum>
struct Action_2_t35DF80DE3245693E3DB3CFEB7B004EB93353E3E8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>>
struct Dictionary_2_tCA11C60FEEFF0141FD46C8FEE5ED9A24894FA60D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Stack`1<Photon.Pun.Simple.SyncAnimator/Frame[]>>
struct Dictionary_2_t453450E6A167FAC3A24AC937885F8E5E361FEDDD;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Pun.Simple.Internal.ParameterSettings[]>
struct Dictionary_2_t04F7229211A4509803D31A1FB8066DE6E3CE649A;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Compression.ElementCrusher>
struct Dictionary_2_tF468851FDB81355866BD796F6968543DBF65F9A4;
// System.Collections.Generic.Dictionary`2<System.Int32,emotitron.Compression.FloatCrusher>
struct Dictionary_2_t7268E0119DE405638D84686C47611C561EFE9F13;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Pun.Simple.Internal.ParameterDefaults>
struct Dictionary_2_tDF1974D4903BE6F640AC95F8FF2D5F5B16441CDD;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Compression.TransformCrusher>
struct Dictionary_2_t74B7F9A431614471D28DCFDCC770AF86E986F1A1;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Pun.Simple.Vital>
struct Dictionary_2_t4406C04B6835B66F89230E5C33FE79AEAB868A1F;
// System.Func`1<Photon.Compression.Internal.PackFrame>
struct Func_1_tECC97AE5F89F601DA79D6BC94EAF1009936D779A;
// System.Func`3<System.IntPtr,System.Int32,Photon.Compression.Internal.PackFrame[]>
struct Func_3_t538E2B68E7ADDFCA0958C78B3C54B131BE1FBD73;
// System.Func`3<System.Object,System.Int32,Photon.Compression.Internal.PackFrame[]>
struct Func_3_t06730F225B5B2A45E2D85A198E9DEEBD7940C673;
// System.Collections.Generic.List`1<UnityEngine.Animator>
struct List_1_t8726F3EB67930AF93439C3FE521CAC9E4BE0DD18;
// System.Collections.Generic.List`1<Photon.Pun.Simple.IFlagTeleport>
struct List_1_t303673044E68C498FB6572DD56CD57FA7CDA5D49;
// System.Collections.Generic.List`1<Photon.Pun.Simple.IMountable>
struct List_1_tB300DA7F74C122DA14BF710BCEC2B2CD29517240;
// System.Collections.Generic.List`1<Photon.Pun.Simple.IOnStateChange>
struct List_1_t591CE6949DF4115FDBE32121ADDB7FF519E4A33F;
// System.Collections.Generic.List`1<Photon.Pun.Simple.IOnVitalParamChange>
struct List_1_t7486DAC9C756CE79E5A762C9F5A0782A08698445;
// System.Collections.Generic.List`1<Photon.Pun.Simple.IOnVitalValueChange>
struct List_1_t53DE7014022DBC8BEE004AC69E9DCFEF6687FDAB;
// System.Collections.Generic.List`1<Photon.Pun.Simple.ITransformController>
struct List_1_t104B7CDE85938BF258D534C10355FEF718189D9B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Photon.Pun.Simple.Internal.ParameterSettings>
struct List_1_tB2B7FCC617C0004836410B5E6DFAC3C14247B7BD;
// System.Collections.Generic.List`1<Photon.Pun.Simple.SyncAnimator>
struct List_1_t6357B4997BD48BC5C70F1A32A5476CE460F06BF9;
// System.Collections.Generic.List`1<Photon.Pun.Simple.VitalDefinition>
struct List_1_t8CE4398E3F16BF2FFA952A51386135CA41CC2633;
// System.Collections.Generic.List`1<Photon.Compression.WorldBounds>
struct List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149;
// System.Collections.Generic.List`1<Photon.Compression.WorldBoundsGroup>
struct List_1_tB0271D7BC496632284188271857311907DE3C2C5;
// System.Collections.Generic.List`1<Photon.Pun.Simple.Internal.NetMsgCallbacks/ByteBufferCallback>
struct List_1_tEB888C6FC5A4844B30ECBD2C27641ED888E30CFE;
// System.Collections.Generic.List`1<Photon.Pun.Simple.SyncContact/ContactRecord>
struct List_1_t0687FB5314E76736A3FC25D45C604675D7841B98;
// System.Collections.Generic.Queue`1<Photon.Pun.Simple.AnimPassThru>
struct Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8;
// System.Collections.Generic.Queue`1<Photon.Pun.Simple.StateChangeInfo>
struct Queue_1_t85279BE55A526BC5DC630F419AC104197D831261;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF;
// Photon.Utilities.SettingsScriptableObject`1<System.Object>
struct SettingsScriptableObject_1_t8BA4325DD694E781F05BF45B519795A4725FB9D2;
// Photon.Utilities.SettingsScriptableObject`1<Photon.Compression.WorldBoundsSettings>
struct SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8;
// System.Collections.Generic.Stack`1<Photon.Pun.Simple.SyncTransform/Frame[]>
struct Stack_1_t962C62ED9D7441FC59BDAD687E10F44AD4182EA7;
// System.Nullable`1<System.Int32>[]
struct Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84;
// System.Nullable`1<System.Single>[]
struct Nullable_1U5BU5D_t02F1C69D15AC8D2407B9D63017EF6E7EC4AD5F94;
// Photon.Pun.Simple.AnimPassThru[]
struct AnimPassThruU5BU5D_tCE36B6C2A6303C169B2D4206082CCE210E54E42B;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Photon.Compression.Internal.PackFrame[]
struct PackFrameU5BU5D_t55AA09B8BA6A76F3EDA2B58EA1DAAC487833D586;
// Photon.Pun.Simple.Internal.ParameterSettings[]
struct ParameterSettingsU5BU5D_tE5019A989ADEB88A9581CFCCA4BB065EE26D9540;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// Photon.Utilities.SmartVar[]
struct SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.UInt64[]
struct UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Photon.Pun.Simple.Vital[]
struct VitalU5BU5D_t5426E6F8C0764BD2B3B30C930CF34CDA75880209;
// Photon.Pun.Simple.VitalData[]
struct VitalDataU5BU5D_t2A6CD47FF154D3492828266C37A7DA84300781E1;
// Photon.Compression.WorldBounds[]
struct WorldBoundsU5BU5D_tB8A46C50AE8B97C9DF7FC38285E400EA56FBDCC0;
// Photon.Compression.WorldBoundsGroup[]
struct WorldBoundsGroupU5BU5D_tBD746407A3918640798E8B56BA85FE82F3CA5FD3;
// Photon.Pun.Simple.SyncAnimator/Frame[]
struct FrameU5BU5D_t2D2111B19433255C9498BDC56FF5E02C56705AA5;
// Photon.Pun.Simple.SyncContact/ContactRecord[]
struct ContactRecordU5BU5D_t8CEC0BD41D36C0B14BAE94D2D855731C77FC9FBE;
// Photon.Pun.Simple.SyncState/Frame[]
struct FrameU5BU5D_tF73231A1A61F89DC2184EC8CE7D4865A313A1513;
// Photon.Pun.Simple.SyncTransform/Frame[]
struct FrameU5BU5D_t24FA0A14C1B12A6680F23266AD2AEEFFCA2F0308;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Shapes.AmmoBar
struct AmmoBar_t4DC08C2C4F62C72F83CF858808448A9362E865CC;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// Shapes.ChargeBar
struct ChargeBar_t9AEDEBF314AF254D0AE32666BC33D429B40C39D4;
// Shapes.Compass
struct Compass_t6054B4C25957A7C06E9646769C58FD4AD12D8FB5;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Photon.Compression.CompressedElement
struct CompressedElement_t17EA551980F8C534AE64C3045A55A66D49EFCC38;
// Photon.Compression.CompressedMatrix
struct CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891;
// Photon.Pun.Simple.ContactReactorBase
struct ContactReactorBase_t0D48513784675FB82C0866B7E3297FC80A301994;
// Shapes.Crosshair
struct Crosshair_tF366A3DF7087734CC58B0F8EA759B8AC7D13F112;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Photon.Compression.ElementCrusher
struct ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8;
// emotitron.Compression.FloatCrusher
struct FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195;
// Shapes.FpsController
struct FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A;
// Photon.Pun.Simple.FrameBase
struct FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Photon.Pun.Simple.IContactSystem
struct IContactSystem_tFC388C83211FBB4DF5E7C89FBE67D917A4159F6F;
// Photon.Pun.Simple.IContactTrigger
struct IContactTrigger_t093FB90EDA1EC4823FAFE49539437440C8967900;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Photon.Compression.IPackObjOnReadyChange
struct IPackObjOnReadyChange_t1C194311A457AF88F849C8526E2806A7DA4C2E98;
// Photon.Pun.Simple.ISpawnController
struct ISpawnController_t725EB420DA1ACCB58244F6698C89692554ABB71E;
// Photon.Pun.Simple.IVitalsSystem
struct IVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715;
// Photon.Compression.LiteFloatCrusher
struct LiteFloatCrusher_t39A2E93378C418A578638EF3626FE3DF1C9F1CCA;
// Photon.Compression.LiteIntCrusher
struct LiteIntCrusher_t1D74BE68FE53AB72435EE8F2A8C6D4F78EC9028F;
// Photon.Compression.Matrix
struct Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// MenuWindow
struct MenuWindow_tFC3D31F78233D75262AC4C4F4756BA3EE318FE5C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Photon.Pun.Simple.Mount
struct Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3;
// Photon.Pun.Simple.MountsManager
struct MountsManager_tE83682448FFBFC600B764AAB10AB5B5B82EDD0D2;
// Photon.Pun.Simple.NetObject
struct NetObject_tBAFFCB25949A24E23A244E439848B8EAA0CCD530;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Photon.Compression.Internal.PackFrame
struct PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F;
// Photon.Pun.Simple.Internal.ParameterDefaults
struct ParameterDefaults_t237F733650515BA27F7DCCABEAA2CF45A8F84E80;
// Photon.Pun.Simple.Internal.ParameterSettings
struct ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C;
// Photon.Pun.PhotonView
struct PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052;
// Photon.Compression.QuatCrusher
struct QuatCrusher_tCA15E814F710A0B7C738E6BE295FE8590D96A4C8;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// Photon.Pun.Simple.SyncAnimator
struct SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4;
// Photon.Pun.Simple.SyncOwner
struct SyncOwner_t0CEF5B2B5474151C9C68A20664504B2B76621500;
// Photon.Pun.Simple.SyncState
struct SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F;
// Photon.Pun.Simple.SyncTransform
struct SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859;
// Photon.Pun.Simple.TRSDefinitionBase
struct TRSDefinitionBase_tA35EC340AFCB457FF024098F1AF0D59BCB6803D0;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Photon.Compression.TransformCrusher
struct TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8;
// System.Type
struct Type_t;
// Photon.Pun.Simple.Vital
struct Vital_t586FF053894D99FD445559B8F8DCA864100D2694;
// Photon.Pun.Simple.VitalDefinition
struct VitalDefinition_t60A9C95185556F5C9BC33AC7E4344A7A57EC5802;
// Photon.Pun.Simple.Vitals
struct Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051;
// Photon.Pun.Simple.VitalsContactReactor
struct VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62;
// Photon.Pun.Simple.VitalsData
struct VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0;
// Photon.Pun.Simple.VitalsUISrcBase
struct VitalsUISrcBase_t058A657A8B301F92A6AAE2F754EE326F4E69A575;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// Photon.Compression.WorldBounds
struct WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2;
// Photon.Compression.WorldBoundsGroup
struct WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD;
// Photon.Compression.WorldBoundsSelectAttributeAttribute
struct WorldBoundsSelectAttributeAttribute_tBA4B9DB5F5BF573D3DFE6E20E979C574472825E7;
// Photon.Compression.WorldBoundsSettings
struct WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4;
// Photon.Compression.XYZSwitchMaskAttribute
struct XYZSwitchMaskAttribute_t9227559376B4115302A43CB3FB232288D6986D9E;
// Photon.Pun.Simple.AutoOwnerComponentEnable/ComponentToggle
struct ComponentToggle_t19355028B5557A61196C9BFD472874316F5D3771;
// Shapes.FpsController/<FixedSteps>d__27
struct U3CFixedStepsU3Ed__27_t2A6013D234A849BC33FA7F18C9711E737C80506D;
// MenuManager/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tF1DFDDB27D3E11B6B201711681C26D6013A199FC;
// Photon.Pun.Simple.Internal.NetMsgCallbacks/ByteBufferCallback
struct ByteBufferCallback_tDD54CEEE46711320B8F59D45F9CF5105314C5F67;
// Photon.Pun.Simple.Internal.NetMsgCallbacks/CallbackLists
struct CallbackLists_tDAA53013B5C0B513CB9EA895C820BCDD6D621C8D;
// Photon.Pun.Simple.NetObject/PackObjRecord
struct PackObjRecord_tDD43943A7BC1357509F04DA1B4AFFDA0DA8CBDC7;
// Photon.Compression.Internal.PackObjectDatabase/PackCopyFrameToObjectDelegate
struct PackCopyFrameToObjectDelegate_t95B7573FE460D068CA760B93677C35287C627875;
// Photon.Compression.Internal.PackObjectDatabase/PackCopyFrameToStructDelegate
struct PackCopyFrameToStructDelegate_t573C14A226006904036BE25919A2AD8CB5426C89;
// Photon.Compression.Internal.PackObjectDatabase/PackFrameDelegate
struct PackFrameDelegate_tA8CEDA0A5574A69DDCD7D3B2EB64D81D467ECEB5;
// Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToFrameDelegate
struct PackInterpFrameToFrameDelegate_t79504A76CC9567E3DE51FCF808EC6C10F7A46552;
// Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToObjectDelegate
struct PackInterpFrameToObjectDelegate_t2E0D7FB7E4261BE520E80777598784969124FD90;
// Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToStructDelegate
struct PackInterpFrameToStructDelegate_t92235466FF0AA7E30B5D1A670FCF4F4D2AD05B66;
// Photon.Compression.Internal.PackObjectDatabase/PackObjDelegate
struct PackObjDelegate_t332A1B8D3CD1C8D703869E40888E6FDAF0E14A7E;
// Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo
struct PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E;
// Photon.Compression.Internal.PackObjectDatabase/PackSnapshotObjectDelegate
struct PackSnapshotObjectDelegate_t17865965EFA7AFE02A9119950B075CDC6C73D947;
// Photon.Compression.Internal.PackObjectDatabase/PackSnapshotStructDelegate
struct PackSnapshotStructDelegate_t4A9815B483E31981CEFFB833299EF1D6892DDC0E;
// Photon.Compression.Internal.PackObjectDatabase/PackStructDelegate
struct PackStructDelegate_tC88966D5724D3357D1927A72E199BF45EA336450;
// Photon.Compression.Internal.PackObjectDatabase/UnpackFrameDelegate
struct UnpackFrameDelegate_tCF8D77A95A0A923F2ECEC064EAE4465C53D6DFD3;
// Readme/Section
struct Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D;
// UnityTemplateProjects.SimpleCameraController/CameraState
struct CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C;
// Photon.Pun.Simple.SyncAdditiveMover/TRSDefinition
struct TRSDefinition_tA65CC57592007173CF8E35F680C37B4A198DFD3B;
// Photon.Pun.Simple.SyncAnimator/Frame
struct Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB;
// Photon.Pun.Simple.SyncContact/Frame
struct Frame_t816C8D5BCA2411AC31AA2C73E5334DA0FDB9B9ED;
// Photon.Pun.Simple.SyncNodeMover/Frame
struct Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082;
// Photon.Pun.Simple.SyncNodeMover/Node
struct Node_t09C1A5B66C5ED4D2E8D1B8E3C325BA689A44ADE4;
// Photon.Pun.Simple.SyncNodeMover/TRSDefinition
struct TRSDefinition_t7AB112AB7E41F74FC1381E91252ECF00771BB73A;
// Photon.Pun.Simple.SyncOwner/Frame
struct Frame_tE212F9082267C57F6BEB1594E886AB16751EA53B;
// Photon.Pun.Simple.SyncShootBase/Frame
struct Frame_t75460503FF702B7DD15EEE3AEE30093A305D577F;
// Photon.Pun.Simple.SyncSpawnTimer/Frame
struct Frame_t2227D436A145B7086B67C15BCBB92D900344230B;
// Photon.Pun.Simple.SyncState/Frame
struct Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65;
// Photon.Pun.Simple.SyncTransform/Frame
struct Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D;
// Photon.Pun.Simple.SyncVitals/Frame
struct Frame_tC3C68D0F728BCD68EBB0F45D3D15E320AB952D09;

IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoundsTools_t53B5F83CFAD6AC296B2FC7103AEA487D0AA863AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContactType_tA35B0627DF95D4E59218C29BCF22EDFF537DA851_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Frame_t2227D436A145B7086B67C15BCBB92D900344230B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Frame_t816C8D5BCA2411AC31AA2C73E5334DA0FDB9B9ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Frame_tC3C68D0F728BCD68EBB0F45D3D15E320AB952D09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Frame_tE212F9082267C57F6BEB1594E886AB16751EA53B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IContactSystem_tFC388C83211FBB4DF5E7C89FBE67D917A4159F6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0687FB5314E76736A3FC25D45C604675D7841B98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB0271D7BC496632284188271857311907DE3C2C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1U5BU5D_t02F1C69D15AC8D2407B9D63017EF6E7EC4AD5F94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OwnedIVitals_t0CF7D7158031C66D4E4F8658D40CA92257B0396C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationFlags_t83C1C8678EBB133FE647D7FFE11E9863356D8151_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VitalDataU5BU5D_t2A6CD47FF154D3492828266C37A7DA84300781E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral7937D4FB5771DDD563A8D27829D481FC02DDB442;
IL2CPP_EXTERN_C String_t* _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralFC450A009E997752F09557BD5D9786123177F2A0;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisIVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_m4B12C61FA139E87C2D6502FE04D3F2E5B9E44DB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5E71B56A8CE695B1F4B9E4A9923F6E9D71E28CEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5C5091686BF15E13ADBBC0396CB616CA6456AE3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7095830EA1C0A4C58AB69E4951382C1DF8C8F638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisIVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_m61E66ABBF4EFDD765B04D575674E3D7467A8EB5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisIVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_mA0D0B1560F29E5056618E7DC569891E977895510_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5C2253D89AAEDB2F156EE5CE868174689166CD77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA03A07B34817990E4F614133053B6946911A747D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m2621906F0BF46C40CA7DD9801F1FE0381F4F3B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF386E60B86F2523BA7EA0F24D8D27264494D3AE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m59C658ABFA61B8697B191C95B5B251D1FCDF1EF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA09DDC5006958FA1324EB87154728392EA5E5611_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mDD2174A6ECCF3232D7684F6BBA0304477232108D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m11BB05CC6E3CA7B8014261AE077F5EBC67CDB4F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m54492BA03A26FDA887EC48DB54ADF2F5CCFB6EDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6F8B6AA388C0AFF3267DB8F619602B73B6CAA274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4D7C559BD5E6D9A5B3ABA831F9BFD0AA8E3FB439_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE314B863C38092DE523EC61F66576DE729BCF861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_mE4594350F95C173DE00F8553C336E6E13A552FAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m75A99D13119CD625499499D1AF9316082F3A8AB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsScriptableObject_1_Awake_m9296BAB1C0962C1EA912FF70ABB6DDB789A92332_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsScriptableObject_1_Initialize_m132C253E35C23610B8D46A20B9EFB39A389005A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsScriptableObject_1__ctor_m84DD8EDE5FE866EE12CBF54224E1EF322B5DA5CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFixedStepsU3Ed__27_System_Collections_IEnumerator_Reset_mB532C67C91F7059D0D6D458235B1B54190E66D92_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84;
struct Nullable_1U5BU5D_t02F1C69D15AC8D2407B9D63017EF6E7EC4AD5F94;
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterSettingsU5BU5D_tE5019A989ADEB88A9581CFCCA4BB065EE26D9540;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct VitalU5BU5D_t5426E6F8C0764BD2B3B30C930CF34CDA75880209;
struct VitalDataU5BU5D_t2A6CD47FF154D3492828266C37A7DA84300781E1;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Compression.WorldBounds>
struct  List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WorldBoundsU5BU5D_tB8A46C50AE8B97C9DF7FC38285E400EA56FBDCC0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149, ____items_1)); }
	inline WorldBoundsU5BU5D_tB8A46C50AE8B97C9DF7FC38285E400EA56FBDCC0* get__items_1() const { return ____items_1; }
	inline WorldBoundsU5BU5D_tB8A46C50AE8B97C9DF7FC38285E400EA56FBDCC0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WorldBoundsU5BU5D_tB8A46C50AE8B97C9DF7FC38285E400EA56FBDCC0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WorldBoundsU5BU5D_tB8A46C50AE8B97C9DF7FC38285E400EA56FBDCC0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149_StaticFields, ____emptyArray_5)); }
	inline WorldBoundsU5BU5D_tB8A46C50AE8B97C9DF7FC38285E400EA56FBDCC0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WorldBoundsU5BU5D_tB8A46C50AE8B97C9DF7FC38285E400EA56FBDCC0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WorldBoundsU5BU5D_tB8A46C50AE8B97C9DF7FC38285E400EA56FBDCC0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Compression.WorldBoundsGroup>
struct  List_1_tB0271D7BC496632284188271857311907DE3C2C5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WorldBoundsGroupU5BU5D_tBD746407A3918640798E8B56BA85FE82F3CA5FD3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB0271D7BC496632284188271857311907DE3C2C5, ____items_1)); }
	inline WorldBoundsGroupU5BU5D_tBD746407A3918640798E8B56BA85FE82F3CA5FD3* get__items_1() const { return ____items_1; }
	inline WorldBoundsGroupU5BU5D_tBD746407A3918640798E8B56BA85FE82F3CA5FD3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WorldBoundsGroupU5BU5D_tBD746407A3918640798E8B56BA85FE82F3CA5FD3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB0271D7BC496632284188271857311907DE3C2C5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB0271D7BC496632284188271857311907DE3C2C5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB0271D7BC496632284188271857311907DE3C2C5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB0271D7BC496632284188271857311907DE3C2C5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WorldBoundsGroupU5BU5D_tBD746407A3918640798E8B56BA85FE82F3CA5FD3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB0271D7BC496632284188271857311907DE3C2C5_StaticFields, ____emptyArray_5)); }
	inline WorldBoundsGroupU5BU5D_tBD746407A3918640798E8B56BA85FE82F3CA5FD3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WorldBoundsGroupU5BU5D_tBD746407A3918640798E8B56BA85FE82F3CA5FD3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WorldBoundsGroupU5BU5D_tBD746407A3918640798E8B56BA85FE82F3CA5FD3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Pun.Simple.SyncContact/ContactRecord>
struct  List_1_t0687FB5314E76736A3FC25D45C604675D7841B98  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ContactRecordU5BU5D_t8CEC0BD41D36C0B14BAE94D2D855731C77FC9FBE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0687FB5314E76736A3FC25D45C604675D7841B98, ____items_1)); }
	inline ContactRecordU5BU5D_t8CEC0BD41D36C0B14BAE94D2D855731C77FC9FBE* get__items_1() const { return ____items_1; }
	inline ContactRecordU5BU5D_t8CEC0BD41D36C0B14BAE94D2D855731C77FC9FBE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ContactRecordU5BU5D_t8CEC0BD41D36C0B14BAE94D2D855731C77FC9FBE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0687FB5314E76736A3FC25D45C604675D7841B98, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0687FB5314E76736A3FC25D45C604675D7841B98, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0687FB5314E76736A3FC25D45C604675D7841B98, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0687FB5314E76736A3FC25D45C604675D7841B98_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ContactRecordU5BU5D_t8CEC0BD41D36C0B14BAE94D2D855731C77FC9FBE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0687FB5314E76736A3FC25D45C604675D7841B98_StaticFields, ____emptyArray_5)); }
	inline ContactRecordU5BU5D_t8CEC0BD41D36C0B14BAE94D2D855731C77FC9FBE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ContactRecordU5BU5D_t8CEC0BD41D36C0B14BAE94D2D855731C77FC9FBE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ContactRecordU5BU5D_t8CEC0BD41D36C0B14BAE94D2D855731C77FC9FBE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<Photon.Pun.Simple.AnimPassThru>
struct  Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	AnimPassThruU5BU5D_tCE36B6C2A6303C169B2D4206082CCE210E54E42B* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8, ____array_0)); }
	inline AnimPassThruU5BU5D_tCE36B6C2A6303C169B2D4206082CCE210E54E42B* get__array_0() const { return ____array_0; }
	inline AnimPassThruU5BU5D_tCE36B6C2A6303C169B2D4206082CCE210E54E42B** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(AnimPassThruU5BU5D_tCE36B6C2A6303C169B2D4206082CCE210E54E42B* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Photon.Compression.CompressedMatrix
struct  CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891  : public RuntimeObject
{
public:
	// Photon.Compression.CompressedElement Photon.Compression.CompressedMatrix::cPos
	CompressedElement_t17EA551980F8C534AE64C3045A55A66D49EFCC38 * ___cPos_0;
	// Photon.Compression.CompressedElement Photon.Compression.CompressedMatrix::cRot
	CompressedElement_t17EA551980F8C534AE64C3045A55A66D49EFCC38 * ___cRot_1;
	// Photon.Compression.CompressedElement Photon.Compression.CompressedMatrix::cScl
	CompressedElement_t17EA551980F8C534AE64C3045A55A66D49EFCC38 * ___cScl_2;
	// Photon.Compression.TransformCrusher Photon.Compression.CompressedMatrix::crusher
	TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8 * ___crusher_3;

public:
	inline static int32_t get_offset_of_cPos_0() { return static_cast<int32_t>(offsetof(CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891, ___cPos_0)); }
	inline CompressedElement_t17EA551980F8C534AE64C3045A55A66D49EFCC38 * get_cPos_0() const { return ___cPos_0; }
	inline CompressedElement_t17EA551980F8C534AE64C3045A55A66D49EFCC38 ** get_address_of_cPos_0() { return &___cPos_0; }
	inline void set_cPos_0(CompressedElement_t17EA551980F8C534AE64C3045A55A66D49EFCC38 * value)
	{
		___cPos_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cPos_0), (void*)value);
	}

	inline static int32_t get_offset_of_cRot_1() { return static_cast<int32_t>(offsetof(CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891, ___cRot_1)); }
	inline CompressedElement_t17EA551980F8C534AE64C3045A55A66D49EFCC38 * get_cRot_1() const { return ___cRot_1; }
	inline CompressedElement_t17EA551980F8C534AE64C3045A55A66D49EFCC38 ** get_address_of_cRot_1() { return &___cRot_1; }
	inline void set_cRot_1(CompressedElement_t17EA551980F8C534AE64C3045A55A66D49EFCC38 * value)
	{
		___cRot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cRot_1), (void*)value);
	}

	inline static int32_t get_offset_of_cScl_2() { return static_cast<int32_t>(offsetof(CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891, ___cScl_2)); }
	inline CompressedElement_t17EA551980F8C534AE64C3045A55A66D49EFCC38 * get_cScl_2() const { return ___cScl_2; }
	inline CompressedElement_t17EA551980F8C534AE64C3045A55A66D49EFCC38 ** get_address_of_cScl_2() { return &___cScl_2; }
	inline void set_cScl_2(CompressedElement_t17EA551980F8C534AE64C3045A55A66D49EFCC38 * value)
	{
		___cScl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cScl_2), (void*)value);
	}

	inline static int32_t get_offset_of_crusher_3() { return static_cast<int32_t>(offsetof(CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891, ___crusher_3)); }
	inline TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8 * get_crusher_3() const { return ___crusher_3; }
	inline TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8 ** get_address_of_crusher_3() { return &___crusher_3; }
	inline void set_crusher_3(TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8 * value)
	{
		___crusher_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crusher_3), (void*)value);
	}
};

struct CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891_StaticFields
{
public:
	// Photon.Compression.CompressedMatrix Photon.Compression.CompressedMatrix::reusable
	CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * ___reusable_4;
	// System.UInt64[] Photon.Compression.CompressedMatrix::reusableArray64
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___reusableArray64_5;
	// System.UInt32[] Photon.Compression.CompressedMatrix::reusableArray32
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___reusableArray32_6;
	// System.Byte[] Photon.Compression.CompressedMatrix::reusableArray8
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___reusableArray8_7;

public:
	inline static int32_t get_offset_of_reusable_4() { return static_cast<int32_t>(offsetof(CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891_StaticFields, ___reusable_4)); }
	inline CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * get_reusable_4() const { return ___reusable_4; }
	inline CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 ** get_address_of_reusable_4() { return &___reusable_4; }
	inline void set_reusable_4(CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * value)
	{
		___reusable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusable_4), (void*)value);
	}

	inline static int32_t get_offset_of_reusableArray64_5() { return static_cast<int32_t>(offsetof(CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891_StaticFields, ___reusableArray64_5)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get_reusableArray64_5() const { return ___reusableArray64_5; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of_reusableArray64_5() { return &___reusableArray64_5; }
	inline void set_reusableArray64_5(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		___reusableArray64_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusableArray64_5), (void*)value);
	}

	inline static int32_t get_offset_of_reusableArray32_6() { return static_cast<int32_t>(offsetof(CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891_StaticFields, ___reusableArray32_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_reusableArray32_6() const { return ___reusableArray32_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_reusableArray32_6() { return &___reusableArray32_6; }
	inline void set_reusableArray32_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___reusableArray32_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusableArray32_6), (void*)value);
	}

	inline static int32_t get_offset_of_reusableArray8_7() { return static_cast<int32_t>(offsetof(CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891_StaticFields, ___reusableArray8_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_reusableArray8_7() const { return ___reusableArray8_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_reusableArray8_7() { return &___reusableArray8_7; }
	inline void set_reusableArray8_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___reusableArray8_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusableArray8_7), (void*)value);
	}
};


// emotitron.Compression.Crusher
struct  Crusher_tB10F2DAC19EE4C1C7A3A34DB2449AA1D819013BD  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// Photon.Pun.Simple.TRSDefinitionBase
struct  TRSDefinitionBase_tA35EC340AFCB457FF024098F1AF0D59BCB6803D0  : public RuntimeObject
{
public:
	// System.Boolean Photon.Pun.Simple.TRSDefinitionBase::local
	bool ___local_0;

public:
	inline static int32_t get_offset_of_local_0() { return static_cast<int32_t>(offsetof(TRSDefinitionBase_tA35EC340AFCB457FF024098F1AF0D59BCB6803D0, ___local_0)); }
	inline bool get_local_0() const { return ___local_0; }
	inline bool* get_address_of_local_0() { return &___local_0; }
	inline void set_local_0(bool value)
	{
		___local_0 = value;
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Photon.Pun.Simple.Vitals
struct  Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Photon.Pun.Simple.IOnVitalValueChange> Photon.Pun.Simple.Vitals::OnVitalValueChangeCallbacks
	List_1_t53DE7014022DBC8BEE004AC69E9DCFEF6687FDAB * ___OnVitalValueChangeCallbacks_0;
	// System.Collections.Generic.List`1<Photon.Pun.Simple.IOnVitalParamChange> Photon.Pun.Simple.Vitals::OnVitalParamChangeCallbacks
	List_1_t7486DAC9C756CE79E5A762C9F5A0782A08698445 * ___OnVitalParamChangeCallbacks_1;
	// System.Collections.Generic.List`1<Photon.Pun.Simple.VitalDefinition> Photon.Pun.Simple.Vitals::vitalDefs
	List_1_t8CE4398E3F16BF2FFA952A51386135CA41CC2633 * ___vitalDefs_2;
	// Photon.Pun.Simple.Vital[] Photon.Pun.Simple.Vitals::vitalArray
	VitalU5BU5D_t5426E6F8C0764BD2B3B30C930CF34CDA75880209* ___vitalArray_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Pun.Simple.Vital> Photon.Pun.Simple.Vitals::vitalLookup
	Dictionary_2_t4406C04B6835B66F89230E5C33FE79AEAB868A1F * ___vitalLookup_4;
	// System.Int32 Photon.Pun.Simple.Vitals::vitalCount
	int32_t ___vitalCount_5;
	// System.Boolean Photon.Pun.Simple.Vitals::initialized
	bool ___initialized_6;

public:
	inline static int32_t get_offset_of_OnVitalValueChangeCallbacks_0() { return static_cast<int32_t>(offsetof(Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051, ___OnVitalValueChangeCallbacks_0)); }
	inline List_1_t53DE7014022DBC8BEE004AC69E9DCFEF6687FDAB * get_OnVitalValueChangeCallbacks_0() const { return ___OnVitalValueChangeCallbacks_0; }
	inline List_1_t53DE7014022DBC8BEE004AC69E9DCFEF6687FDAB ** get_address_of_OnVitalValueChangeCallbacks_0() { return &___OnVitalValueChangeCallbacks_0; }
	inline void set_OnVitalValueChangeCallbacks_0(List_1_t53DE7014022DBC8BEE004AC69E9DCFEF6687FDAB * value)
	{
		___OnVitalValueChangeCallbacks_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVitalValueChangeCallbacks_0), (void*)value);
	}

	inline static int32_t get_offset_of_OnVitalParamChangeCallbacks_1() { return static_cast<int32_t>(offsetof(Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051, ___OnVitalParamChangeCallbacks_1)); }
	inline List_1_t7486DAC9C756CE79E5A762C9F5A0782A08698445 * get_OnVitalParamChangeCallbacks_1() const { return ___OnVitalParamChangeCallbacks_1; }
	inline List_1_t7486DAC9C756CE79E5A762C9F5A0782A08698445 ** get_address_of_OnVitalParamChangeCallbacks_1() { return &___OnVitalParamChangeCallbacks_1; }
	inline void set_OnVitalParamChangeCallbacks_1(List_1_t7486DAC9C756CE79E5A762C9F5A0782A08698445 * value)
	{
		___OnVitalParamChangeCallbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnVitalParamChangeCallbacks_1), (void*)value);
	}

	inline static int32_t get_offset_of_vitalDefs_2() { return static_cast<int32_t>(offsetof(Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051, ___vitalDefs_2)); }
	inline List_1_t8CE4398E3F16BF2FFA952A51386135CA41CC2633 * get_vitalDefs_2() const { return ___vitalDefs_2; }
	inline List_1_t8CE4398E3F16BF2FFA952A51386135CA41CC2633 ** get_address_of_vitalDefs_2() { return &___vitalDefs_2; }
	inline void set_vitalDefs_2(List_1_t8CE4398E3F16BF2FFA952A51386135CA41CC2633 * value)
	{
		___vitalDefs_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vitalDefs_2), (void*)value);
	}

	inline static int32_t get_offset_of_vitalArray_3() { return static_cast<int32_t>(offsetof(Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051, ___vitalArray_3)); }
	inline VitalU5BU5D_t5426E6F8C0764BD2B3B30C930CF34CDA75880209* get_vitalArray_3() const { return ___vitalArray_3; }
	inline VitalU5BU5D_t5426E6F8C0764BD2B3B30C930CF34CDA75880209** get_address_of_vitalArray_3() { return &___vitalArray_3; }
	inline void set_vitalArray_3(VitalU5BU5D_t5426E6F8C0764BD2B3B30C930CF34CDA75880209* value)
	{
		___vitalArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vitalArray_3), (void*)value);
	}

	inline static int32_t get_offset_of_vitalLookup_4() { return static_cast<int32_t>(offsetof(Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051, ___vitalLookup_4)); }
	inline Dictionary_2_t4406C04B6835B66F89230E5C33FE79AEAB868A1F * get_vitalLookup_4() const { return ___vitalLookup_4; }
	inline Dictionary_2_t4406C04B6835B66F89230E5C33FE79AEAB868A1F ** get_address_of_vitalLookup_4() { return &___vitalLookup_4; }
	inline void set_vitalLookup_4(Dictionary_2_t4406C04B6835B66F89230E5C33FE79AEAB868A1F * value)
	{
		___vitalLookup_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vitalLookup_4), (void*)value);
	}

	inline static int32_t get_offset_of_vitalCount_5() { return static_cast<int32_t>(offsetof(Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051, ___vitalCount_5)); }
	inline int32_t get_vitalCount_5() const { return ___vitalCount_5; }
	inline int32_t* get_address_of_vitalCount_5() { return &___vitalCount_5; }
	inline void set_vitalCount_5(int32_t value)
	{
		___vitalCount_5 = value;
	}

	inline static int32_t get_offset_of_initialized_6() { return static_cast<int32_t>(offsetof(Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051, ___initialized_6)); }
	inline bool get_initialized_6() const { return ___initialized_6; }
	inline bool* get_address_of_initialized_6() { return &___initialized_6; }
	inline void set_initialized_6(bool value)
	{
		___initialized_6 = value;
	}
};


// Photon.Pun.Simple.VitalsData
struct  VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0  : public RuntimeObject
{
public:
	// Photon.Pun.Simple.Vitals Photon.Pun.Simple.VitalsData::vitals
	Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051 * ___vitals_0;
	// Photon.Pun.Simple.VitalData[] Photon.Pun.Simple.VitalsData::datas
	VitalDataU5BU5D_t2A6CD47FF154D3492828266C37A7DA84300781E1* ___datas_1;

public:
	inline static int32_t get_offset_of_vitals_0() { return static_cast<int32_t>(offsetof(VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0, ___vitals_0)); }
	inline Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051 * get_vitals_0() const { return ___vitals_0; }
	inline Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051 ** get_address_of_vitals_0() { return &___vitals_0; }
	inline void set_vitals_0(Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051 * value)
	{
		___vitals_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vitals_0), (void*)value);
	}

	inline static int32_t get_offset_of_datas_1() { return static_cast<int32_t>(offsetof(VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0, ___datas_1)); }
	inline VitalDataU5BU5D_t2A6CD47FF154D3492828266C37A7DA84300781E1* get_datas_1() const { return ___datas_1; }
	inline VitalDataU5BU5D_t2A6CD47FF154D3492828266C37A7DA84300781E1** get_address_of_datas_1() { return &___datas_1; }
	inline void set_datas_1(VitalDataU5BU5D_t2A6CD47FF154D3492828266C37A7DA84300781E1* value)
	{
		___datas_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___datas_1), (void*)value);
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Shapes.FpsController/<FixedSteps>d__27
struct  U3CFixedStepsU3Ed__27_t2A6013D234A849BC33FA7F18C9711E737C80506D  : public RuntimeObject
{
public:
	// System.Int32 Shapes.FpsController/<FixedSteps>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Shapes.FpsController/<FixedSteps>d__27::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Shapes.FpsController Shapes.FpsController/<FixedSteps>d__27::<>4__this
	FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFixedStepsU3Ed__27_t2A6013D234A849BC33FA7F18C9711E737C80506D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFixedStepsU3Ed__27_t2A6013D234A849BC33FA7F18C9711E737C80506D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFixedStepsU3Ed__27_t2A6013D234A849BC33FA7F18C9711E737C80506D, ___U3CU3E4__this_2)); }
	inline FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// MenuManager/<>c__DisplayClass5_0
struct  U3CU3Ec__DisplayClass5_0_tF1DFDDB27D3E11B6B201711681C26D6013A199FC  : public RuntimeObject
{
public:
	// System.String MenuManager/<>c__DisplayClass5_0::windowName
	String_t* ___windowName_0;

public:
	inline static int32_t get_offset_of_windowName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tF1DFDDB27D3E11B6B201711681C26D6013A199FC, ___windowName_0)); }
	inline String_t* get_windowName_0() const { return ___windowName_0; }
	inline String_t** get_address_of_windowName_0() { return &___windowName_0; }
	inline void set_windowName_0(String_t* value)
	{
		___windowName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___windowName_0), (void*)value);
	}
};


// Photon.Pun.Simple.Internal.NetMsgCallbacks/CallbackLists
struct  CallbackLists_tDAA53013B5C0B513CB9EA895C820BCDD6D621C8D  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Photon.Pun.Simple.Internal.NetMsgCallbacks/ByteBufferCallback> Photon.Pun.Simple.Internal.NetMsgCallbacks/CallbackLists::bufferCallbacks
	List_1_tEB888C6FC5A4844B30ECBD2C27641ED888E30CFE * ___bufferCallbacks_0;

public:
	inline static int32_t get_offset_of_bufferCallbacks_0() { return static_cast<int32_t>(offsetof(CallbackLists_tDAA53013B5C0B513CB9EA895C820BCDD6D621C8D, ___bufferCallbacks_0)); }
	inline List_1_tEB888C6FC5A4844B30ECBD2C27641ED888E30CFE * get_bufferCallbacks_0() const { return ___bufferCallbacks_0; }
	inline List_1_tEB888C6FC5A4844B30ECBD2C27641ED888E30CFE ** get_address_of_bufferCallbacks_0() { return &___bufferCallbacks_0; }
	inline void set_bufferCallbacks_0(List_1_tEB888C6FC5A4844B30ECBD2C27641ED888E30CFE * value)
	{
		___bufferCallbacks_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bufferCallbacks_0), (void*)value);
	}
};


// Readme/Section
struct  Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D  : public RuntimeObject
{
public:
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heading_0), (void*)value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_1), (void*)value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkText_2), (void*)value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_3), (void*)value);
	}
};


// UnityTemplateProjects.SimpleCameraController/CameraState
struct  CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C  : public RuntimeObject
{
public:
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::yaw
	float ___yaw_0;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::pitch
	float ___pitch_1;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::roll
	float ___roll_2;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::x
	float ___x_3;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::y
	float ___y_4;
	// System.Single UnityTemplateProjects.SimpleCameraController/CameraState::z
	float ___z_5;

public:
	inline static int32_t get_offset_of_yaw_0() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___yaw_0)); }
	inline float get_yaw_0() const { return ___yaw_0; }
	inline float* get_address_of_yaw_0() { return &___yaw_0; }
	inline void set_yaw_0(float value)
	{
		___yaw_0 = value;
	}

	inline static int32_t get_offset_of_pitch_1() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___pitch_1)); }
	inline float get_pitch_1() const { return ___pitch_1; }
	inline float* get_address_of_pitch_1() { return &___pitch_1; }
	inline void set_pitch_1(float value)
	{
		___pitch_1 = value;
	}

	inline static int32_t get_offset_of_roll_2() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___roll_2)); }
	inline float get_roll_2() const { return ___roll_2; }
	inline float* get_address_of_roll_2() { return &___roll_2; }
	inline void set_roll_2(float value)
	{
		___roll_2 = value;
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___x_3)); }
	inline float get_x_3() const { return ___x_3; }
	inline float* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(float value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_y_4() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___y_4)); }
	inline float get_y_4() const { return ___y_4; }
	inline float* get_address_of_y_4() { return &___y_4; }
	inline void set_y_4(float value)
	{
		___y_4 = value;
	}

	inline static int32_t get_offset_of_z_5() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___z_5)); }
	inline float get_z_5() const { return ___z_5; }
	inline float* get_address_of_z_5() { return &___z_5; }
	inline void set_z_5(float value)
	{
		___z_5 = value;
	}
};


// Photon.Pun.Simple.SyncNodeMover/Node
struct  Node_t09C1A5B66C5ED4D2E8D1B8E3C325BA689A44ADE4  : public RuntimeObject
{
public:
	// UnityEngine.Vector3[] Photon.Pun.Simple.SyncNodeMover/Node::trs
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___trs_0;

public:
	inline static int32_t get_offset_of_trs_0() { return static_cast<int32_t>(offsetof(Node_t09C1A5B66C5ED4D2E8D1B8E3C325BA689A44ADE4, ___trs_0)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_trs_0() const { return ___trs_0; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_trs_0() { return &___trs_0; }
	inline void set_trs_0(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___trs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trs_0), (void*)value);
	}
};


// emotitron.Compression.Crusher`1<Photon.Compression.ElementCrusher>
struct  Crusher_1_tDD480B661BF95529EEC1742AF05450B4CF969A85  : public Crusher_tB10F2DAC19EE4C1C7A3A34DB2449AA1D819013BD
{
public:
	// System.Boolean emotitron.Compression.Crusher`1::expanded
	bool ___expanded_0;
	// System.Action`1<T> emotitron.Compression.Crusher`1::OnRecalculated
	Action_1_tB4D17413586E52E6108CBAF726B66BEA0D8E1598 * ___OnRecalculated_1;

public:
	inline static int32_t get_offset_of_expanded_0() { return static_cast<int32_t>(offsetof(Crusher_1_tDD480B661BF95529EEC1742AF05450B4CF969A85, ___expanded_0)); }
	inline bool get_expanded_0() const { return ___expanded_0; }
	inline bool* get_address_of_expanded_0() { return &___expanded_0; }
	inline void set_expanded_0(bool value)
	{
		___expanded_0 = value;
	}

	inline static int32_t get_offset_of_OnRecalculated_1() { return static_cast<int32_t>(offsetof(Crusher_1_tDD480B661BF95529EEC1742AF05450B4CF969A85, ___OnRecalculated_1)); }
	inline Action_1_tB4D17413586E52E6108CBAF726B66BEA0D8E1598 * get_OnRecalculated_1() const { return ___OnRecalculated_1; }
	inline Action_1_tB4D17413586E52E6108CBAF726B66BEA0D8E1598 ** get_address_of_OnRecalculated_1() { return &___OnRecalculated_1; }
	inline void set_OnRecalculated_1(Action_1_tB4D17413586E52E6108CBAF726B66BEA0D8E1598 * value)
	{
		___OnRecalculated_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRecalculated_1), (void*)value);
	}
};


// emotitron.Compression.Crusher`1<emotitron.Compression.FloatCrusher>
struct  Crusher_1_tABE032A6A2818843BF70ACA1786FE4AC9056945B  : public Crusher_tB10F2DAC19EE4C1C7A3A34DB2449AA1D819013BD
{
public:
	// System.Boolean emotitron.Compression.Crusher`1::expanded
	bool ___expanded_0;
	// System.Action`1<T> emotitron.Compression.Crusher`1::OnRecalculated
	Action_1_t40B00B540ABD3B15F597C5DD2A34617595A8904D * ___OnRecalculated_1;

public:
	inline static int32_t get_offset_of_expanded_0() { return static_cast<int32_t>(offsetof(Crusher_1_tABE032A6A2818843BF70ACA1786FE4AC9056945B, ___expanded_0)); }
	inline bool get_expanded_0() const { return ___expanded_0; }
	inline bool* get_address_of_expanded_0() { return &___expanded_0; }
	inline void set_expanded_0(bool value)
	{
		___expanded_0 = value;
	}

	inline static int32_t get_offset_of_OnRecalculated_1() { return static_cast<int32_t>(offsetof(Crusher_1_tABE032A6A2818843BF70ACA1786FE4AC9056945B, ___OnRecalculated_1)); }
	inline Action_1_t40B00B540ABD3B15F597C5DD2A34617595A8904D * get_OnRecalculated_1() const { return ___OnRecalculated_1; }
	inline Action_1_t40B00B540ABD3B15F597C5DD2A34617595A8904D ** get_address_of_OnRecalculated_1() { return &___OnRecalculated_1; }
	inline void set_OnRecalculated_1(Action_1_t40B00B540ABD3B15F597C5DD2A34617595A8904D * value)
	{
		___OnRecalculated_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRecalculated_1), (void*)value);
	}
};


// emotitron.Compression.Crusher`1<Photon.Compression.TransformCrusher>
struct  Crusher_1_t29D21AB551A21978C62883DC6ECB38E7F81F6B10  : public Crusher_tB10F2DAC19EE4C1C7A3A34DB2449AA1D819013BD
{
public:
	// System.Boolean emotitron.Compression.Crusher`1::expanded
	bool ___expanded_0;
	// System.Action`1<T> emotitron.Compression.Crusher`1::OnRecalculated
	Action_1_tE651563760D47CD655EAF1557D140B34FECB81D0 * ___OnRecalculated_1;

public:
	inline static int32_t get_offset_of_expanded_0() { return static_cast<int32_t>(offsetof(Crusher_1_t29D21AB551A21978C62883DC6ECB38E7F81F6B10, ___expanded_0)); }
	inline bool get_expanded_0() const { return ___expanded_0; }
	inline bool* get_address_of_expanded_0() { return &___expanded_0; }
	inline void set_expanded_0(bool value)
	{
		___expanded_0 = value;
	}

	inline static int32_t get_offset_of_OnRecalculated_1() { return static_cast<int32_t>(offsetof(Crusher_1_t29D21AB551A21978C62883DC6ECB38E7F81F6B10, ___OnRecalculated_1)); }
	inline Action_1_tE651563760D47CD655EAF1557D140B34FECB81D0 * get_OnRecalculated_1() const { return ___OnRecalculated_1; }
	inline Action_1_tE651563760D47CD655EAF1557D140B34FECB81D0 ** get_address_of_OnRecalculated_1() { return &___OnRecalculated_1; }
	inline void set_OnRecalculated_1(Action_1_tE651563760D47CD655EAF1557D140B34FECB81D0 * value)
	{
		___OnRecalculated_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnRecalculated_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Photon.Compression.WorldBoundsGroup>
struct  Enumerator_t143BC1A59EB51667AFDEAA4436A2DFF66FED8F73 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tB0271D7BC496632284188271857311907DE3C2C5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t143BC1A59EB51667AFDEAA4436A2DFF66FED8F73, ___list_0)); }
	inline List_1_tB0271D7BC496632284188271857311907DE3C2C5 * get_list_0() const { return ___list_0; }
	inline List_1_tB0271D7BC496632284188271857311907DE3C2C5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tB0271D7BC496632284188271857311907DE3C2C5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t143BC1A59EB51667AFDEAA4436A2DFF66FED8F73, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t143BC1A59EB51667AFDEAA4436A2DFF66FED8F73, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t143BC1A59EB51667AFDEAA4436A2DFF66FED8F73, ___current_3)); }
	inline WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * get_current_3() const { return ___current_3; }
	inline WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Nullable`1<System.Int32>
struct  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Single>
struct  Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A 
{
public:
	// T System.Nullable`1::value
	float ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// Photon.Utilities.FastBitMask128
struct  FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F 
{
public:
	// System.UInt64 Photon.Utilities.FastBitMask128::seg1
	uint64_t ___seg1_0;
	// System.UInt64 Photon.Utilities.FastBitMask128::seg2
	uint64_t ___seg2_1;
	// System.Int32 Photon.Utilities.FastBitMask128::bitcount
	int32_t ___bitcount_2;
	// System.Int32 Photon.Utilities.FastBitMask128::seg1bitcount
	int32_t ___seg1bitcount_3;
	// System.Int32 Photon.Utilities.FastBitMask128::seg2bitcount
	int32_t ___seg2bitcount_4;
	// System.UInt64 Photon.Utilities.FastBitMask128::alltrue1
	uint64_t ___alltrue1_5;
	// System.UInt64 Photon.Utilities.FastBitMask128::alltrue2
	uint64_t ___alltrue2_6;

public:
	inline static int32_t get_offset_of_seg1_0() { return static_cast<int32_t>(offsetof(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F, ___seg1_0)); }
	inline uint64_t get_seg1_0() const { return ___seg1_0; }
	inline uint64_t* get_address_of_seg1_0() { return &___seg1_0; }
	inline void set_seg1_0(uint64_t value)
	{
		___seg1_0 = value;
	}

	inline static int32_t get_offset_of_seg2_1() { return static_cast<int32_t>(offsetof(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F, ___seg2_1)); }
	inline uint64_t get_seg2_1() const { return ___seg2_1; }
	inline uint64_t* get_address_of_seg2_1() { return &___seg2_1; }
	inline void set_seg2_1(uint64_t value)
	{
		___seg2_1 = value;
	}

	inline static int32_t get_offset_of_bitcount_2() { return static_cast<int32_t>(offsetof(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F, ___bitcount_2)); }
	inline int32_t get_bitcount_2() const { return ___bitcount_2; }
	inline int32_t* get_address_of_bitcount_2() { return &___bitcount_2; }
	inline void set_bitcount_2(int32_t value)
	{
		___bitcount_2 = value;
	}

	inline static int32_t get_offset_of_seg1bitcount_3() { return static_cast<int32_t>(offsetof(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F, ___seg1bitcount_3)); }
	inline int32_t get_seg1bitcount_3() const { return ___seg1bitcount_3; }
	inline int32_t* get_address_of_seg1bitcount_3() { return &___seg1bitcount_3; }
	inline void set_seg1bitcount_3(int32_t value)
	{
		___seg1bitcount_3 = value;
	}

	inline static int32_t get_offset_of_seg2bitcount_4() { return static_cast<int32_t>(offsetof(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F, ___seg2bitcount_4)); }
	inline int32_t get_seg2bitcount_4() const { return ___seg2bitcount_4; }
	inline int32_t* get_address_of_seg2bitcount_4() { return &___seg2bitcount_4; }
	inline void set_seg2bitcount_4(int32_t value)
	{
		___seg2bitcount_4 = value;
	}

	inline static int32_t get_offset_of_alltrue1_5() { return static_cast<int32_t>(offsetof(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F, ___alltrue1_5)); }
	inline uint64_t get_alltrue1_5() const { return ___alltrue1_5; }
	inline uint64_t* get_address_of_alltrue1_5() { return &___alltrue1_5; }
	inline void set_alltrue1_5(uint64_t value)
	{
		___alltrue1_5 = value;
	}

	inline static int32_t get_offset_of_alltrue2_6() { return static_cast<int32_t>(offsetof(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F, ___alltrue2_6)); }
	inline uint64_t get_alltrue2_6() const { return ___alltrue2_6; }
	inline uint64_t* get_address_of_alltrue2_6() { return &___alltrue2_6; }
	inline void set_alltrue2_6(uint64_t value)
	{
		___alltrue2_6 = value;
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Photon.Pun.Simple.MountMaskSelector
struct  MountMaskSelector_tA65264EF350B155C4398A393D107F9CCE879128D 
{
public:
	// System.Int32 Photon.Pun.Simple.MountMaskSelector::mask
	int32_t ___mask_0;

public:
	inline static int32_t get_offset_of_mask_0() { return static_cast<int32_t>(offsetof(MountMaskSelector_tA65264EF350B155C4398A393D107F9CCE879128D, ___mask_0)); }
	inline int32_t get_mask_0() const { return ___mask_0; }
	inline int32_t* get_address_of_mask_0() { return &___mask_0; }
	inline void set_mask_0(int32_t value)
	{
		___mask_0 = value;
	}
};


// Photon.Pun.Simple.MountSelector
struct  MountSelector_t384DA5054047AF3A175D2E4FC1D7DBF61F92E329 
{
public:
	// System.Int32 Photon.Pun.Simple.MountSelector::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MountSelector_t384DA5054047AF3A175D2E4FC1D7DBF61F92E329, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};


// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Photon.Pun.Simple.VitalData
struct  VitalData_tA56EE1CC99126DB6393FC3864D0996513295B764 
{
public:
	// System.Double Photon.Pun.Simple.VitalData::_value
	double ____value_0;
	// System.Int32 Photon.Pun.Simple.VitalData::ticksUntilRegen
	int32_t ___ticksUntilRegen_1;
	// System.Int32 Photon.Pun.Simple.VitalData::ticksUntilDecay
	int32_t ___ticksUntilDecay_2;

public:
	inline static int32_t get_offset_of__value_0() { return static_cast<int32_t>(offsetof(VitalData_tA56EE1CC99126DB6393FC3864D0996513295B764, ____value_0)); }
	inline double get__value_0() const { return ____value_0; }
	inline double* get_address_of__value_0() { return &____value_0; }
	inline void set__value_0(double value)
	{
		____value_0 = value;
	}

	inline static int32_t get_offset_of_ticksUntilRegen_1() { return static_cast<int32_t>(offsetof(VitalData_tA56EE1CC99126DB6393FC3864D0996513295B764, ___ticksUntilRegen_1)); }
	inline int32_t get_ticksUntilRegen_1() const { return ___ticksUntilRegen_1; }
	inline int32_t* get_address_of_ticksUntilRegen_1() { return &___ticksUntilRegen_1; }
	inline void set_ticksUntilRegen_1(int32_t value)
	{
		___ticksUntilRegen_1 = value;
	}

	inline static int32_t get_offset_of_ticksUntilDecay_2() { return static_cast<int32_t>(offsetof(VitalData_tA56EE1CC99126DB6393FC3864D0996513295B764, ___ticksUntilDecay_2)); }
	inline int32_t get_ticksUntilDecay_2() const { return ___ticksUntilDecay_2; }
	inline int32_t* get_address_of_ticksUntilDecay_2() { return &___ticksUntilDecay_2; }
	inline void set_ticksUntilDecay_2(int32_t value)
	{
		___ticksUntilDecay_2 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// Photon.Pun.Simple.NetMasterCallbacks/DelayedRegistrationItem
struct  DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE 
{
public:
	// System.Object Photon.Pun.Simple.NetMasterCallbacks/DelayedRegistrationItem::comp
	RuntimeObject * ___comp_0;
	// System.Boolean Photon.Pun.Simple.NetMasterCallbacks/DelayedRegistrationItem::register
	bool ___register_1;

public:
	inline static int32_t get_offset_of_comp_0() { return static_cast<int32_t>(offsetof(DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE, ___comp_0)); }
	inline RuntimeObject * get_comp_0() const { return ___comp_0; }
	inline RuntimeObject ** get_address_of_comp_0() { return &___comp_0; }
	inline void set_comp_0(RuntimeObject * value)
	{
		___comp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comp_0), (void*)value);
	}

	inline static int32_t get_offset_of_register_1() { return static_cast<int32_t>(offsetof(DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE, ___register_1)); }
	inline bool get_register_1() const { return ___register_1; }
	inline bool* get_address_of_register_1() { return &___register_1; }
	inline void set_register_1(bool value)
	{
		___register_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Photon.Pun.Simple.NetMasterCallbacks/DelayedRegistrationItem
struct DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE_marshaled_pinvoke
{
	Il2CppIUnknown* ___comp_0;
	int32_t ___register_1;
};
// Native definition for COM marshalling of Photon.Pun.Simple.NetMasterCallbacks/DelayedRegistrationItem
struct DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE_marshaled_com
{
	Il2CppIUnknown* ___comp_0;
	int32_t ___register_1;
};

// Photon.Compression.NormCompress/NormCompressCodec
struct  NormCompressCodec_tD62E8590F63C7F752A1FAB45B5D2300A6548109D 
{
public:
	// System.Int32 Photon.Compression.NormCompress/NormCompressCodec::bits
	int32_t ___bits_0;
	// System.Single Photon.Compression.NormCompress/NormCompressCodec::encoder
	float ___encoder_1;
	// System.Single Photon.Compression.NormCompress/NormCompressCodec::decoder
	float ___decoder_2;

public:
	inline static int32_t get_offset_of_bits_0() { return static_cast<int32_t>(offsetof(NormCompressCodec_tD62E8590F63C7F752A1FAB45B5D2300A6548109D, ___bits_0)); }
	inline int32_t get_bits_0() const { return ___bits_0; }
	inline int32_t* get_address_of_bits_0() { return &___bits_0; }
	inline void set_bits_0(int32_t value)
	{
		___bits_0 = value;
	}

	inline static int32_t get_offset_of_encoder_1() { return static_cast<int32_t>(offsetof(NormCompressCodec_tD62E8590F63C7F752A1FAB45B5D2300A6548109D, ___encoder_1)); }
	inline float get_encoder_1() const { return ___encoder_1; }
	inline float* get_address_of_encoder_1() { return &___encoder_1; }
	inline void set_encoder_1(float value)
	{
		___encoder_1 = value;
	}

	inline static int32_t get_offset_of_decoder_2() { return static_cast<int32_t>(offsetof(NormCompressCodec_tD62E8590F63C7F752A1FAB45B5D2300A6548109D, ___decoder_2)); }
	inline float get_decoder_2() const { return ___decoder_2; }
	inline float* get_address_of_decoder_2() { return &___decoder_2; }
	inline void set_decoder_2(float value)
	{
		___decoder_2 = value;
	}
};


// Photon.Pun.Simple.Pooling.Pool/PoolItemDef
struct  PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7 
{
public:
	// UnityEngine.GameObject Photon.Pun.Simple.Pooling.Pool/PoolItemDef::prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab_0;
	// System.Int32 Photon.Pun.Simple.Pooling.Pool/PoolItemDef::growBy
	int32_t ___growBy_1;
	// System.Type Photon.Pun.Simple.Pooling.Pool/PoolItemDef::scriptToAdd
	Type_t * ___scriptToAdd_2;

public:
	inline static int32_t get_offset_of_prefab_0() { return static_cast<int32_t>(offsetof(PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7, ___prefab_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefab_0() const { return ___prefab_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefab_0() { return &___prefab_0; }
	inline void set_prefab_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefab_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefab_0), (void*)value);
	}

	inline static int32_t get_offset_of_growBy_1() { return static_cast<int32_t>(offsetof(PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7, ___growBy_1)); }
	inline int32_t get_growBy_1() const { return ___growBy_1; }
	inline int32_t* get_address_of_growBy_1() { return &___growBy_1; }
	inline void set_growBy_1(int32_t value)
	{
		___growBy_1 = value;
	}

	inline static int32_t get_offset_of_scriptToAdd_2() { return static_cast<int32_t>(offsetof(PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7, ___scriptToAdd_2)); }
	inline Type_t * get_scriptToAdd_2() const { return ___scriptToAdd_2; }
	inline Type_t ** get_address_of_scriptToAdd_2() { return &___scriptToAdd_2; }
	inline void set_scriptToAdd_2(Type_t * value)
	{
		___scriptToAdd_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scriptToAdd_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Photon.Pun.Simple.Pooling.Pool/PoolItemDef
struct PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab_0;
	int32_t ___growBy_1;
	Type_t * ___scriptToAdd_2;
};
// Native definition for COM marshalling of Photon.Pun.Simple.Pooling.Pool/PoolItemDef
struct PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab_0;
	int32_t ___growBy_1;
	Type_t * ___scriptToAdd_2;
};

// Photon.Pun.Simple.SyncMoverBase`2/MovementRelation<Photon.Pun.Simple.SyncNodeMover/TRSDefinition,Photon.Pun.Simple.SyncNodeMover/Frame>
struct  MovementRelation_tE1BD899308FE28CE125F260F96DF81604E5B9256 
{
public:
	// System.Int32 Photon.Pun.Simple.SyncMoverBase`2/MovementRelation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MovementRelation_tE1BD899308FE28CE125F260F96DF81604E5B9256, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<UnityEngine.Quaternion>
struct  Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 
{
public:
	// T System.Nullable`1::value
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1, ___value_0)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_value_0() const { return ___value_0; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<UnityEngine.Vector3>
struct  Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 
{
public:
	// T System.Nullable`1::value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___value_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_value_0() const { return ___value_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.AnimatorControllerParameterType
struct  AnimatorControllerParameterType_tAD9F29F9714D48F62AC8F803EA4340971F8C69AE 
{
public:
	// System.Int32 UnityEngine.AnimatorControllerParameterType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AnimatorControllerParameterType_tAD9F29F9714D48F62AC8F803EA4340971F8C69AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// emotitron.Compression.Axis
struct  Axis_t3DBC6949F57ECB901EE425E14820A156682E83E4 
{
public:
	// System.Int32 emotitron.Compression.Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t3DBC6949F57ECB901EE425E14820A156682E83E4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.Simple.AxisMask
struct  AxisMask_t13AF66D86AABB75D514D32B6CD967A7A6A2CFFA2 
{
public:
	// System.Int32 Photon.Pun.Simple.AxisMask::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisMask_t13AF66D86AABB75D514D32B6CD967A7A6A2CFFA2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// emotitron.Compression.BitCullingLevel
struct  BitCullingLevel_t867CDCD43AD1552D0204B6AEDAAF589104CDF0A9 
{
public:
	// System.Int32 emotitron.Compression.BitCullingLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BitCullingLevel_t867CDCD43AD1552D0204B6AEDAAF589104CDF0A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// emotitron.Compression.BitsDeterminedBy
struct  BitsDeterminedBy_t6010C820E265EEC5344EAF0C5A22AD9D7D7F887F 
{
public:
	// System.Int32 emotitron.Compression.BitsDeterminedBy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BitsDeterminedBy_t6010C820E265EEC5344EAF0C5A22AD9D7D7F887F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Bounds
struct  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// Photon.Pun.Simple.Consumption
struct  Consumption_tC0F4E2FDA2B48EDB81CD590B945F02F7F0ABC468 
{
public:
	// System.Int32 Photon.Pun.Simple.Consumption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Consumption_tC0F4E2FDA2B48EDB81CD590B945F02F7F0ABC468, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.Simple.ContactType
struct  ContactType_tA35B0627DF95D4E59218C29BCF22EDFF537DA851 
{
public:
	// System.Int32 Photon.Pun.Simple.ContactType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ContactType_tA35B0627DF95D4E59218C29BCF22EDFF537DA851, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Photon.Pun.Simple.FrameContents
struct  FrameContents_t152EF4548DD7793A693BFDF157FF1A18EE43F844 
{
public:
	// System.Int32 Photon.Pun.Simple.FrameContents::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FrameContents_t152EF4548DD7793A693BFDF157FF1A18EE43F844, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.Simple.Interpolation
struct  Interpolation_t01C9CE315E4822DEB4BFE63414876A3F014ABC9B 
{
public:
	// System.Int32 Photon.Pun.Simple.Interpolation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Interpolation_t01C9CE315E4822DEB4BFE63414876A3F014ABC9B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Compression.NormalizedFloatCompression
struct  NormalizedFloatCompression_tC7D756B896CE1DF8982F217E8D110BEEF49AA5DB 
{
public:
	// System.Int32 Photon.Compression.NormalizedFloatCompression::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NormalizedFloatCompression_tC7D756B896CE1DF8982F217E8D110BEEF49AA5DB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.Simple.ObjState
struct  ObjState_t617FF3E0880E39B397A1535A5C7F9E6D05E7B04A 
{
public:
	// System.Int32 Photon.Pun.Simple.ObjState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjState_t617FF3E0880E39B397A1535A5C7F9E6D05E7B04A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// emotitron.Compression.OutOfBoundsHandling
struct  OutOfBoundsHandling_t28726B96779833748EA2F662ADA455C4D0E85CE9 
{
public:
	// System.Int32 emotitron.Compression.OutOfBoundsHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OutOfBoundsHandling_t28726B96779833748EA2F662ADA455C4D0E85CE9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Compression.Internal.PackFrame
struct  PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F  : public RuntimeObject
{
public:
	// Photon.Utilities.FastBitMask128 Photon.Compression.Internal.PackFrame::mask
	FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F  ___mask_0;
	// Photon.Utilities.FastBitMask128 Photon.Compression.Internal.PackFrame::isCompleteMask
	FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F  ___isCompleteMask_1;

public:
	inline static int32_t get_offset_of_mask_0() { return static_cast<int32_t>(offsetof(PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F, ___mask_0)); }
	inline FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F  get_mask_0() const { return ___mask_0; }
	inline FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * get_address_of_mask_0() { return &___mask_0; }
	inline void set_mask_0(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F  value)
	{
		___mask_0 = value;
	}

	inline static int32_t get_offset_of_isCompleteMask_1() { return static_cast<int32_t>(offsetof(PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F, ___isCompleteMask_1)); }
	inline FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F  get_isCompleteMask_1() const { return ___isCompleteMask_1; }
	inline FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * get_address_of_isCompleteMask_1() { return &___isCompleteMask_1; }
	inline void set_isCompleteMask_1(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F  value)
	{
		___isCompleteMask_1 = value;
	}
};


// Photon.Pun.Simple.Internal.ParameterExtrapolation
struct  ParameterExtrapolation_tC18CAC104FDF0971EB8C3755825D0CD33130F366 
{
public:
	// System.Int32 Photon.Pun.Simple.Internal.ParameterExtrapolation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterExtrapolation_tC18CAC104FDF0971EB8C3755825D0CD33130F366, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.Simple.Internal.ParameterInterpolation
struct  ParameterInterpolation_t9BFB2DEA5E333DC5BA2FAD587CA08EF22F051E31 
{
public:
	// System.Int32 Photon.Pun.Simple.Internal.ParameterInterpolation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterInterpolation_t9BFB2DEA5E333DC5BA2FAD587CA08EF22F051E31, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.Simple.ReadyStateEnum
struct  ReadyStateEnum_t3FA768C87BD6A1F0AA16E54AB64EBB1F56B75D23 
{
public:
	// System.Int32 Photon.Pun.Simple.ReadyStateEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReadyStateEnum_t3FA768C87BD6A1F0AA16E54AB64EBB1F56B75D23, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.Simple.RigidbodyType
struct  RigidbodyType_t22D6EE2A53345B62E58CB7B0514189C8DA9C15C8 
{
public:
	// System.Int32 Photon.Pun.Simple.RigidbodyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyType_t22D6EE2A53345B62E58CB7B0514189C8DA9C15C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Photon.Compression.SerializationFlags
struct  SerializationFlags_t83C1C8678EBB133FE647D7FFE11E9863356D8151 
{
public:
	// System.Int32 Photon.Compression.SerializationFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationFlags_t83C1C8678EBB133FE647D7FFE11E9863356D8151, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Utilities.SmartVarTypeCode
struct  SmartVarTypeCode_t5EBA0A952B005C2EB454340EA840E1D805CD00F9 
{
public:
	// System.Int32 Photon.Utilities.SmartVarTypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SmartVarTypeCode_t5EBA0A952B005C2EB454340EA840E1D805CD00F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// emotitron.Compression.TRSType
struct  TRSType_tC16A1809099705667972166AEDF89EFDD4EBA813 
{
public:
	// System.Int32 emotitron.Compression.TRSType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TRSType_tC16A1809099705667972166AEDF89EFDD4EBA813, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Compression.TransformCrusher
struct  TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8  : public Crusher_1_t29D21AB551A21978C62883DC6ECB38E7F81F6B10
{
public:
	// UnityEngine.Transform Photon.Compression.TransformCrusher::defaultTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___defaultTransform_7;
	// Photon.Compression.ElementCrusher Photon.Compression.TransformCrusher::posCrusher
	ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * ___posCrusher_8;
	// Photon.Compression.ElementCrusher Photon.Compression.TransformCrusher::rotCrusher
	ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * ___rotCrusher_9;
	// Photon.Compression.ElementCrusher Photon.Compression.TransformCrusher::sclCrusher
	ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * ___sclCrusher_10;
	// System.Int32[] Photon.Compression.TransformCrusher::cached_pBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cached_pBits_11;
	// System.Int32[] Photon.Compression.TransformCrusher::cached_rBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cached_rBits_12;
	// System.Int32[] Photon.Compression.TransformCrusher::cached_sBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cached_sBits_13;
	// System.Int32[] Photon.Compression.TransformCrusher::_cached_total
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____cached_total_14;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32> Photon.Compression.TransformCrusher::cached_total
	ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * ___cached_total_15;
	// System.Boolean Photon.Compression.TransformCrusher::cached
	bool ___cached_16;

public:
	inline static int32_t get_offset_of_defaultTransform_7() { return static_cast<int32_t>(offsetof(TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8, ___defaultTransform_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_defaultTransform_7() const { return ___defaultTransform_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_defaultTransform_7() { return &___defaultTransform_7; }
	inline void set_defaultTransform_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___defaultTransform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultTransform_7), (void*)value);
	}

	inline static int32_t get_offset_of_posCrusher_8() { return static_cast<int32_t>(offsetof(TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8, ___posCrusher_8)); }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * get_posCrusher_8() const { return ___posCrusher_8; }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 ** get_address_of_posCrusher_8() { return &___posCrusher_8; }
	inline void set_posCrusher_8(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * value)
	{
		___posCrusher_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___posCrusher_8), (void*)value);
	}

	inline static int32_t get_offset_of_rotCrusher_9() { return static_cast<int32_t>(offsetof(TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8, ___rotCrusher_9)); }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * get_rotCrusher_9() const { return ___rotCrusher_9; }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 ** get_address_of_rotCrusher_9() { return &___rotCrusher_9; }
	inline void set_rotCrusher_9(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * value)
	{
		___rotCrusher_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotCrusher_9), (void*)value);
	}

	inline static int32_t get_offset_of_sclCrusher_10() { return static_cast<int32_t>(offsetof(TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8, ___sclCrusher_10)); }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * get_sclCrusher_10() const { return ___sclCrusher_10; }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 ** get_address_of_sclCrusher_10() { return &___sclCrusher_10; }
	inline void set_sclCrusher_10(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * value)
	{
		___sclCrusher_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sclCrusher_10), (void*)value);
	}

	inline static int32_t get_offset_of_cached_pBits_11() { return static_cast<int32_t>(offsetof(TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8, ___cached_pBits_11)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cached_pBits_11() const { return ___cached_pBits_11; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cached_pBits_11() { return &___cached_pBits_11; }
	inline void set_cached_pBits_11(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cached_pBits_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_pBits_11), (void*)value);
	}

	inline static int32_t get_offset_of_cached_rBits_12() { return static_cast<int32_t>(offsetof(TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8, ___cached_rBits_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cached_rBits_12() const { return ___cached_rBits_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cached_rBits_12() { return &___cached_rBits_12; }
	inline void set_cached_rBits_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cached_rBits_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_rBits_12), (void*)value);
	}

	inline static int32_t get_offset_of_cached_sBits_13() { return static_cast<int32_t>(offsetof(TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8, ___cached_sBits_13)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cached_sBits_13() const { return ___cached_sBits_13; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cached_sBits_13() { return &___cached_sBits_13; }
	inline void set_cached_sBits_13(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cached_sBits_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_sBits_13), (void*)value);
	}

	inline static int32_t get_offset_of__cached_total_14() { return static_cast<int32_t>(offsetof(TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8, ____cached_total_14)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__cached_total_14() const { return ____cached_total_14; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__cached_total_14() { return &____cached_total_14; }
	inline void set__cached_total_14(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____cached_total_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cached_total_14), (void*)value);
	}

	inline static int32_t get_offset_of_cached_total_15() { return static_cast<int32_t>(offsetof(TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8, ___cached_total_15)); }
	inline ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * get_cached_total_15() const { return ___cached_total_15; }
	inline ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF ** get_address_of_cached_total_15() { return &___cached_total_15; }
	inline void set_cached_total_15(ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * value)
	{
		___cached_total_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_total_15), (void*)value);
	}

	inline static int32_t get_offset_of_cached_16() { return static_cast<int32_t>(offsetof(TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8, ___cached_16)); }
	inline bool get_cached_16() const { return ___cached_16; }
	inline bool* get_address_of_cached_16() { return &___cached_16; }
	inline void set_cached_16(bool value)
	{
		___cached_16 = value;
	}
};

struct TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Compression.TransformCrusher> Photon.Compression.TransformCrusher::staticTransformCrushers
	Dictionary_2_t74B7F9A431614471D28DCFDCC770AF86E986F1A1 * ___staticTransformCrushers_6;
	// System.UInt64[] Photon.Compression.TransformCrusher::reusableArray64
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___reusableArray64_17;

public:
	inline static int32_t get_offset_of_staticTransformCrushers_6() { return static_cast<int32_t>(offsetof(TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8_StaticFields, ___staticTransformCrushers_6)); }
	inline Dictionary_2_t74B7F9A431614471D28DCFDCC770AF86E986F1A1 * get_staticTransformCrushers_6() const { return ___staticTransformCrushers_6; }
	inline Dictionary_2_t74B7F9A431614471D28DCFDCC770AF86E986F1A1 ** get_address_of_staticTransformCrushers_6() { return &___staticTransformCrushers_6; }
	inline void set_staticTransformCrushers_6(Dictionary_2_t74B7F9A431614471D28DCFDCC770AF86E986F1A1 * value)
	{
		___staticTransformCrushers_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___staticTransformCrushers_6), (void*)value);
	}

	inline static int32_t get_offset_of_reusableArray64_17() { return static_cast<int32_t>(offsetof(TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8_StaticFields, ___reusableArray64_17)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get_reusableArray64_17() const { return ___reusableArray64_17; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of_reusableArray64_17() { return &___reusableArray64_17; }
	inline void set_reusableArray64_17(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		___reusableArray64_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusableArray64_17), (void*)value);
	}
};


// Photon.Pun.Simple.Vital
struct  Vital_t586FF053894D99FD445559B8F8DCA864100D2694  : public RuntimeObject
{
public:
	// Photon.Pun.Simple.VitalDefinition Photon.Pun.Simple.Vital::vitalDef
	VitalDefinition_t60A9C95185556F5C9BC33AC7E4344A7A57EC5802 * ___vitalDef_0;
	// Photon.Pun.Simple.VitalData Photon.Pun.Simple.Vital::vitalData
	VitalData_tA56EE1CC99126DB6393FC3864D0996513295B764  ___vitalData_1;
	// System.Collections.Generic.List`1<Photon.Pun.Simple.IOnVitalValueChange> Photon.Pun.Simple.Vital::OnValueChangeCallbacks
	List_1_t53DE7014022DBC8BEE004AC69E9DCFEF6687FDAB * ___OnValueChangeCallbacks_2;
	// System.Collections.Generic.List`1<Photon.Pun.Simple.IOnVitalParamChange> Photon.Pun.Simple.Vital::OnParamChangeCallbacks
	List_1_t7486DAC9C756CE79E5A762C9F5A0782A08698445 * ___OnParamChangeCallbacks_3;

public:
	inline static int32_t get_offset_of_vitalDef_0() { return static_cast<int32_t>(offsetof(Vital_t586FF053894D99FD445559B8F8DCA864100D2694, ___vitalDef_0)); }
	inline VitalDefinition_t60A9C95185556F5C9BC33AC7E4344A7A57EC5802 * get_vitalDef_0() const { return ___vitalDef_0; }
	inline VitalDefinition_t60A9C95185556F5C9BC33AC7E4344A7A57EC5802 ** get_address_of_vitalDef_0() { return &___vitalDef_0; }
	inline void set_vitalDef_0(VitalDefinition_t60A9C95185556F5C9BC33AC7E4344A7A57EC5802 * value)
	{
		___vitalDef_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vitalDef_0), (void*)value);
	}

	inline static int32_t get_offset_of_vitalData_1() { return static_cast<int32_t>(offsetof(Vital_t586FF053894D99FD445559B8F8DCA864100D2694, ___vitalData_1)); }
	inline VitalData_tA56EE1CC99126DB6393FC3864D0996513295B764  get_vitalData_1() const { return ___vitalData_1; }
	inline VitalData_tA56EE1CC99126DB6393FC3864D0996513295B764 * get_address_of_vitalData_1() { return &___vitalData_1; }
	inline void set_vitalData_1(VitalData_tA56EE1CC99126DB6393FC3864D0996513295B764  value)
	{
		___vitalData_1 = value;
	}

	inline static int32_t get_offset_of_OnValueChangeCallbacks_2() { return static_cast<int32_t>(offsetof(Vital_t586FF053894D99FD445559B8F8DCA864100D2694, ___OnValueChangeCallbacks_2)); }
	inline List_1_t53DE7014022DBC8BEE004AC69E9DCFEF6687FDAB * get_OnValueChangeCallbacks_2() const { return ___OnValueChangeCallbacks_2; }
	inline List_1_t53DE7014022DBC8BEE004AC69E9DCFEF6687FDAB ** get_address_of_OnValueChangeCallbacks_2() { return &___OnValueChangeCallbacks_2; }
	inline void set_OnValueChangeCallbacks_2(List_1_t53DE7014022DBC8BEE004AC69E9DCFEF6687FDAB * value)
	{
		___OnValueChangeCallbacks_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnValueChangeCallbacks_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnParamChangeCallbacks_3() { return static_cast<int32_t>(offsetof(Vital_t586FF053894D99FD445559B8F8DCA864100D2694, ___OnParamChangeCallbacks_3)); }
	inline List_1_t7486DAC9C756CE79E5A762C9F5A0782A08698445 * get_OnParamChangeCallbacks_3() const { return ___OnParamChangeCallbacks_3; }
	inline List_1_t7486DAC9C756CE79E5A762C9F5A0782A08698445 ** get_address_of_OnParamChangeCallbacks_3() { return &___OnParamChangeCallbacks_3; }
	inline void set_OnParamChangeCallbacks_3(List_1_t7486DAC9C756CE79E5A762C9F5A0782A08698445 * value)
	{
		___OnParamChangeCallbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnParamChangeCallbacks_3), (void*)value);
	}
};


// Photon.Pun.Simple.VitalType
struct  VitalType_t4407F642A6719C5E4DA86D2A4358446A9EB116DE 
{
public:
	// System.Int32 Photon.Pun.Simple.VitalType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VitalType_t4407F642A6719C5E4DA86D2A4358446A9EB116DE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Compression.WorldBoundsSelectAttributeAttribute
struct  WorldBoundsSelectAttributeAttribute_tBA4B9DB5F5BF573D3DFE6E20E979C574472825E7  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:

public:
};


// Photon.Compression.XYZSwitchMaskAttribute
struct  XYZSwitchMaskAttribute_t9227559376B4115302A43CB3FB232288D6986D9E  : public PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052
{
public:

public:
};


// emotitron.Utilities.Networking.AutoDestroyWrongNetLib/NetLib
struct  NetLib_t2B27DA63F16A8559DE429D9EB48E1025F2592DB4 
{
public:
	// System.Int32 emotitron.Utilities.Networking.AutoDestroyWrongNetLib/NetLib::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetLib_t2B27DA63F16A8559DE429D9EB48E1025F2592DB4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.Simple.AutoOwnerComponentEnable/EnableIf
struct  EnableIf_t7A0557007999D6A4717282A88E9280CC29D6B1F9 
{
public:
	// System.Int32 Photon.Pun.Simple.AutoOwnerComponentEnable/EnableIf::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EnableIf_t7A0557007999D6A4717282A88E9280CC29D6B1F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.Simple.AutoOwnerGameObjEnable/EnableIf
struct  EnableIf_t4719622CBA0BAA60DA1A45F9CE97977E6F49D962 
{
public:
	// System.Int32 Photon.Pun.Simple.AutoOwnerGameObjEnable/EnableIf::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EnableIf_t4719622CBA0BAA60DA1A45F9CE97977E6F49D962, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// emotitron.Utilities.Example.BasicController/Timing
struct  Timing_t5F55230631675AC47844070555A5D049EE99444F 
{
public:
	// System.Int32 emotitron.Utilities.Example.BasicController/Timing::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Timing_t5F55230631675AC47844070555A5D049EE99444F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Utilities.BoundsTools/BoundsType
struct  BoundsType_tFA1EE0E17C106BA5CEBB148A13645AC42B6FA715 
{
public:
	// System.Int32 Photon.Utilities.BoundsTools/BoundsType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BoundsType_tFA1EE0E17C106BA5CEBB148A13645AC42B6FA715, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Shapes.Compass/<>c__DisplayClass13_0
struct  U3CU3Ec__DisplayClass13_0_t7EEA56B5D66B4B24516C755A399EFC1AF64CDDB7 
{
public:
	// System.Single Shapes.Compass/<>c__DisplayClass13_0::angWorldMax
	float ___angWorldMax_0;
	// System.Single Shapes.Compass/<>c__DisplayClass13_0::angWorldMin
	float ___angWorldMin_1;
	// System.Single Shapes.Compass/<>c__DisplayClass13_0::angUiMin
	float ___angUiMin_2;
	// System.Single Shapes.Compass/<>c__DisplayClass13_0::angUiMax
	float ___angUiMax_3;
	// UnityEngine.Vector2 Shapes.Compass/<>c__DisplayClass13_0::compArcOrigin
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___compArcOrigin_4;
	// Shapes.Compass Shapes.Compass/<>c__DisplayClass13_0::<>4__this
	Compass_t6054B4C25957A7C06E9646769C58FD4AD12D8FB5 * ___U3CU3E4__this_5;

public:
	inline static int32_t get_offset_of_angWorldMax_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t7EEA56B5D66B4B24516C755A399EFC1AF64CDDB7, ___angWorldMax_0)); }
	inline float get_angWorldMax_0() const { return ___angWorldMax_0; }
	inline float* get_address_of_angWorldMax_0() { return &___angWorldMax_0; }
	inline void set_angWorldMax_0(float value)
	{
		___angWorldMax_0 = value;
	}

	inline static int32_t get_offset_of_angWorldMin_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t7EEA56B5D66B4B24516C755A399EFC1AF64CDDB7, ___angWorldMin_1)); }
	inline float get_angWorldMin_1() const { return ___angWorldMin_1; }
	inline float* get_address_of_angWorldMin_1() { return &___angWorldMin_1; }
	inline void set_angWorldMin_1(float value)
	{
		___angWorldMin_1 = value;
	}

	inline static int32_t get_offset_of_angUiMin_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t7EEA56B5D66B4B24516C755A399EFC1AF64CDDB7, ___angUiMin_2)); }
	inline float get_angUiMin_2() const { return ___angUiMin_2; }
	inline float* get_address_of_angUiMin_2() { return &___angUiMin_2; }
	inline void set_angUiMin_2(float value)
	{
		___angUiMin_2 = value;
	}

	inline static int32_t get_offset_of_angUiMax_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t7EEA56B5D66B4B24516C755A399EFC1AF64CDDB7, ___angUiMax_3)); }
	inline float get_angUiMax_3() const { return ___angUiMax_3; }
	inline float* get_address_of_angUiMax_3() { return &___angUiMax_3; }
	inline void set_angUiMax_3(float value)
	{
		___angUiMax_3 = value;
	}

	inline static int32_t get_offset_of_compArcOrigin_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t7EEA56B5D66B4B24516C755A399EFC1AF64CDDB7, ___compArcOrigin_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_compArcOrigin_4() const { return ___compArcOrigin_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_compArcOrigin_4() { return &___compArcOrigin_4; }
	inline void set_compArcOrigin_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___compArcOrigin_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_t7EEA56B5D66B4B24516C755A399EFC1AF64CDDB7, ___U3CU3E4__this_5)); }
	inline Compass_t6054B4C25957A7C06E9646769C58FD4AD12D8FB5 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline Compass_t6054B4C25957A7C06E9646769C58FD4AD12D8FB5 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(Compass_t6054B4C25957A7C06E9646769C58FD4AD12D8FB5 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}
};


// Photon.Compression.Element/VectorType
struct  VectorType_t1BAD4CC7A420198A2CBDFB5919D4489657436D5D 
{
public:
	// System.Int32 Photon.Compression.Element/VectorType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VectorType_t1BAD4CC7A420198A2CBDFB5919D4489657436D5D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Compression.ElementCrusher/StaticTRSType
struct  StaticTRSType_tDB375D28CE31F0BC84054AAB53C6B1601887282E 
{
public:
	// System.Int32 Photon.Compression.ElementCrusher/StaticTRSType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StaticTRSType_tDB375D28CE31F0BC84054AAB53C6B1601887282E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Compression.ElementCrusher/UniformAxes
struct  UniformAxes_t1D9004FDB82F5D148E61FF359EB30D04C723FB73 
{
public:
	// System.Int32 Photon.Compression.ElementCrusher/UniformAxes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UniformAxes_t1D9004FDB82F5D148E61FF359EB30D04C723FB73, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Compression.LiteFloatCrusher/Normalization
struct  Normalization_tA6E6C87D82F2345D8F6935F327D7C5730E19F6C8 
{
public:
	// System.Int32 Photon.Compression.LiteFloatCrusher/Normalization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Normalization_tA6E6C87D82F2345D8F6935F327D7C5730E19F6C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LowFrameRate/SlowWhat
struct  SlowWhat_t07EAD5903E0E0F1FE696E04004DBA86B64329216 
{
public:
	// System.Int32 LowFrameRate/SlowWhat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SlowWhat_t07EAD5903E0E0F1FE696E04004DBA86B64329216, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.Simple.MaskLogic/Operator
struct  Operator_t8F8EBDAA30D6F1C95235E6BCEB9E0D6D40A0F6B9 
{
public:
	// System.Int32 Photon.Pun.Simple.MaskLogic/Operator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Operator_t8F8EBDAA30D6F1C95235E6BCEB9E0D6D40A0F6B9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.Simple.NetObject/PackObjRecord
struct  PackObjRecord_tDD43943A7BC1357509F04DA1B4AFFDA0DA8CBDC7  : public RuntimeObject
{
public:
	// UnityEngine.Component Photon.Pun.Simple.NetObject/PackObjRecord::component
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___component_0;
	// Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo Photon.Pun.Simple.NetObject/PackObjRecord::info
	PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E * ___info_1;
	// Photon.Compression.Internal.PackFrame[] Photon.Pun.Simple.NetObject/PackObjRecord::packFrames
	PackFrameU5BU5D_t55AA09B8BA6A76F3EDA2B58EA1DAAC487833D586* ___packFrames_2;
	// Photon.Utilities.FastBitMask128 Photon.Pun.Simple.NetObject/PackObjRecord::prevReadyMask
	FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F  ___prevReadyMask_3;
	// Photon.Utilities.FastBitMask128 Photon.Pun.Simple.NetObject/PackObjRecord::readyMask
	FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F  ___readyMask_4;
	// Photon.Compression.IPackObjOnReadyChange Photon.Pun.Simple.NetObject/PackObjRecord::onReadyCallback
	RuntimeObject* ___onReadyCallback_5;

public:
	inline static int32_t get_offset_of_component_0() { return static_cast<int32_t>(offsetof(PackObjRecord_tDD43943A7BC1357509F04DA1B4AFFDA0DA8CBDC7, ___component_0)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_component_0() const { return ___component_0; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_component_0() { return &___component_0; }
	inline void set_component_0(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___component_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___component_0), (void*)value);
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(PackObjRecord_tDD43943A7BC1357509F04DA1B4AFFDA0DA8CBDC7, ___info_1)); }
	inline PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E * get_info_1() const { return ___info_1; }
	inline PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E ** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E * value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___info_1), (void*)value);
	}

	inline static int32_t get_offset_of_packFrames_2() { return static_cast<int32_t>(offsetof(PackObjRecord_tDD43943A7BC1357509F04DA1B4AFFDA0DA8CBDC7, ___packFrames_2)); }
	inline PackFrameU5BU5D_t55AA09B8BA6A76F3EDA2B58EA1DAAC487833D586* get_packFrames_2() const { return ___packFrames_2; }
	inline PackFrameU5BU5D_t55AA09B8BA6A76F3EDA2B58EA1DAAC487833D586** get_address_of_packFrames_2() { return &___packFrames_2; }
	inline void set_packFrames_2(PackFrameU5BU5D_t55AA09B8BA6A76F3EDA2B58EA1DAAC487833D586* value)
	{
		___packFrames_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___packFrames_2), (void*)value);
	}

	inline static int32_t get_offset_of_prevReadyMask_3() { return static_cast<int32_t>(offsetof(PackObjRecord_tDD43943A7BC1357509F04DA1B4AFFDA0DA8CBDC7, ___prevReadyMask_3)); }
	inline FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F  get_prevReadyMask_3() const { return ___prevReadyMask_3; }
	inline FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * get_address_of_prevReadyMask_3() { return &___prevReadyMask_3; }
	inline void set_prevReadyMask_3(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F  value)
	{
		___prevReadyMask_3 = value;
	}

	inline static int32_t get_offset_of_readyMask_4() { return static_cast<int32_t>(offsetof(PackObjRecord_tDD43943A7BC1357509F04DA1B4AFFDA0DA8CBDC7, ___readyMask_4)); }
	inline FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F  get_readyMask_4() const { return ___readyMask_4; }
	inline FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * get_address_of_readyMask_4() { return &___readyMask_4; }
	inline void set_readyMask_4(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F  value)
	{
		___readyMask_4 = value;
	}

	inline static int32_t get_offset_of_onReadyCallback_5() { return static_cast<int32_t>(offsetof(PackObjRecord_tDD43943A7BC1357509F04DA1B4AFFDA0DA8CBDC7, ___onReadyCallback_5)); }
	inline RuntimeObject* get_onReadyCallback_5() const { return ___onReadyCallback_5; }
	inline RuntimeObject** get_address_of_onReadyCallback_5() { return &___onReadyCallback_5; }
	inline void set_onReadyCallback_5(RuntimeObject* value)
	{
		___onReadyCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onReadyCallback_5), (void*)value);
	}
};


// Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo
struct  PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E  : public RuntimeObject
{
public:
	// System.Type Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::packFrameType
	Type_t * ___packFrameType_0;
	// System.Int32 Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::maxBits
	int32_t ___maxBits_1;
	// System.Int32 Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::maxBytes
	int32_t ___maxBytes_2;
	// Photon.Utilities.FastBitMask128 Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::defaultReadyMask
	FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F  ___defaultReadyMask_3;
	// Photon.Compression.Internal.PackObjectDatabase/PackObjDelegate Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::PackObjToBuffer
	PackObjDelegate_t332A1B8D3CD1C8D703869E40888E6FDAF0E14A7E * ___PackObjToBuffer_4;
	// Photon.Compression.Internal.PackObjectDatabase/PackStructDelegate Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::PackStructToBuffer
	PackStructDelegate_tC88966D5724D3357D1927A72E199BF45EA336450 * ___PackStructToBuffer_5;
	// Photon.Compression.Internal.PackObjectDatabase/PackFrameDelegate Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::PackFrameToBuffer
	PackFrameDelegate_tA8CEDA0A5574A69DDCD7D3B2EB64D81D467ECEB5 * ___PackFrameToBuffer_6;
	// Photon.Compression.Internal.PackObjectDatabase/UnpackFrameDelegate Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::UnpackFrameFromBuffer
	UnpackFrameDelegate_tCF8D77A95A0A923F2ECEC064EAE4465C53D6DFD3 * ___UnpackFrameFromBuffer_7;
	// System.Func`1<Photon.Compression.Internal.PackFrame> Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::FactoryFrame
	Func_1_tECC97AE5F89F601DA79D6BC94EAF1009936D779A * ___FactoryFrame_8;
	// System.Func`3<System.Object,System.Int32,Photon.Compression.Internal.PackFrame[]> Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::FactoryFramesObj
	Func_3_t06730F225B5B2A45E2D85A198E9DEEBD7940C673 * ___FactoryFramesObj_9;
	// System.Func`3<System.IntPtr,System.Int32,Photon.Compression.Internal.PackFrame[]> Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::FactoryFramesStruct
	Func_3_t538E2B68E7ADDFCA0958C78B3C54B131BE1FBD73 * ___FactoryFramesStruct_10;
	// Photon.Compression.Internal.PackObjectDatabase/PackCopyFrameToObjectDelegate Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::CopyFrameToObj
	PackCopyFrameToObjectDelegate_t95B7573FE460D068CA760B93677C35287C627875 * ___CopyFrameToObj_11;
	// Photon.Compression.Internal.PackObjectDatabase/PackCopyFrameToStructDelegate Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::CopyFrameToStruct
	PackCopyFrameToStructDelegate_t573C14A226006904036BE25919A2AD8CB5426C89 * ___CopyFrameToStruct_12;
	// Photon.Compression.Internal.PackObjectDatabase/PackSnapshotObjectDelegate Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::SnapObject
	PackSnapshotObjectDelegate_t17865965EFA7AFE02A9119950B075CDC6C73D947 * ___SnapObject_13;
	// Photon.Compression.Internal.PackObjectDatabase/PackSnapshotStructDelegate Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::SnapStruct
	PackSnapshotStructDelegate_t4A9815B483E31981CEFFB833299EF1D6892DDC0E * ___SnapStruct_14;
	// Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToFrameDelegate Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::InterpFrameToFrame
	PackInterpFrameToFrameDelegate_t79504A76CC9567E3DE51FCF808EC6C10F7A46552 * ___InterpFrameToFrame_15;
	// Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToObjectDelegate Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::InterpFrameToObj
	PackInterpFrameToObjectDelegate_t2E0D7FB7E4261BE520E80777598784969124FD90 * ___InterpFrameToObj_16;
	// Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToStructDelegate Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::InterpFrameToStruct
	PackInterpFrameToStructDelegate_t92235466FF0AA7E30B5D1A670FCF4F4D2AD05B66 * ___InterpFrameToStruct_17;
	// System.Action`2<System.Object,Photon.Compression.Internal.PackFrame> Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::CaptureObj
	Action_2_t95F7CF1C13BE7A0EDC1E168451664D3C076A6841 * ___CaptureObj_18;
	// System.Action`2<System.IntPtr,Photon.Compression.Internal.PackFrame> Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::CaptureStruct
	Action_2_t3BBD0274AE0477407194AFAB3B4A2BCF40A71D34 * ___CaptureStruct_19;
	// System.Action`2<Photon.Compression.Internal.PackFrame,Photon.Compression.Internal.PackFrame> Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::CopyFrameToFrame
	Action_2_tF543EB1BE063AA2C4C189F907F108085AB479B7F * ___CopyFrameToFrame_20;
	// System.Int32 Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::fieldCount
	int32_t ___fieldCount_21;

public:
	inline static int32_t get_offset_of_packFrameType_0() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___packFrameType_0)); }
	inline Type_t * get_packFrameType_0() const { return ___packFrameType_0; }
	inline Type_t ** get_address_of_packFrameType_0() { return &___packFrameType_0; }
	inline void set_packFrameType_0(Type_t * value)
	{
		___packFrameType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___packFrameType_0), (void*)value);
	}

	inline static int32_t get_offset_of_maxBits_1() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___maxBits_1)); }
	inline int32_t get_maxBits_1() const { return ___maxBits_1; }
	inline int32_t* get_address_of_maxBits_1() { return &___maxBits_1; }
	inline void set_maxBits_1(int32_t value)
	{
		___maxBits_1 = value;
	}

	inline static int32_t get_offset_of_maxBytes_2() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___maxBytes_2)); }
	inline int32_t get_maxBytes_2() const { return ___maxBytes_2; }
	inline int32_t* get_address_of_maxBytes_2() { return &___maxBytes_2; }
	inline void set_maxBytes_2(int32_t value)
	{
		___maxBytes_2 = value;
	}

	inline static int32_t get_offset_of_defaultReadyMask_3() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___defaultReadyMask_3)); }
	inline FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F  get_defaultReadyMask_3() const { return ___defaultReadyMask_3; }
	inline FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * get_address_of_defaultReadyMask_3() { return &___defaultReadyMask_3; }
	inline void set_defaultReadyMask_3(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F  value)
	{
		___defaultReadyMask_3 = value;
	}

	inline static int32_t get_offset_of_PackObjToBuffer_4() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___PackObjToBuffer_4)); }
	inline PackObjDelegate_t332A1B8D3CD1C8D703869E40888E6FDAF0E14A7E * get_PackObjToBuffer_4() const { return ___PackObjToBuffer_4; }
	inline PackObjDelegate_t332A1B8D3CD1C8D703869E40888E6FDAF0E14A7E ** get_address_of_PackObjToBuffer_4() { return &___PackObjToBuffer_4; }
	inline void set_PackObjToBuffer_4(PackObjDelegate_t332A1B8D3CD1C8D703869E40888E6FDAF0E14A7E * value)
	{
		___PackObjToBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PackObjToBuffer_4), (void*)value);
	}

	inline static int32_t get_offset_of_PackStructToBuffer_5() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___PackStructToBuffer_5)); }
	inline PackStructDelegate_tC88966D5724D3357D1927A72E199BF45EA336450 * get_PackStructToBuffer_5() const { return ___PackStructToBuffer_5; }
	inline PackStructDelegate_tC88966D5724D3357D1927A72E199BF45EA336450 ** get_address_of_PackStructToBuffer_5() { return &___PackStructToBuffer_5; }
	inline void set_PackStructToBuffer_5(PackStructDelegate_tC88966D5724D3357D1927A72E199BF45EA336450 * value)
	{
		___PackStructToBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PackStructToBuffer_5), (void*)value);
	}

	inline static int32_t get_offset_of_PackFrameToBuffer_6() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___PackFrameToBuffer_6)); }
	inline PackFrameDelegate_tA8CEDA0A5574A69DDCD7D3B2EB64D81D467ECEB5 * get_PackFrameToBuffer_6() const { return ___PackFrameToBuffer_6; }
	inline PackFrameDelegate_tA8CEDA0A5574A69DDCD7D3B2EB64D81D467ECEB5 ** get_address_of_PackFrameToBuffer_6() { return &___PackFrameToBuffer_6; }
	inline void set_PackFrameToBuffer_6(PackFrameDelegate_tA8CEDA0A5574A69DDCD7D3B2EB64D81D467ECEB5 * value)
	{
		___PackFrameToBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PackFrameToBuffer_6), (void*)value);
	}

	inline static int32_t get_offset_of_UnpackFrameFromBuffer_7() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___UnpackFrameFromBuffer_7)); }
	inline UnpackFrameDelegate_tCF8D77A95A0A923F2ECEC064EAE4465C53D6DFD3 * get_UnpackFrameFromBuffer_7() const { return ___UnpackFrameFromBuffer_7; }
	inline UnpackFrameDelegate_tCF8D77A95A0A923F2ECEC064EAE4465C53D6DFD3 ** get_address_of_UnpackFrameFromBuffer_7() { return &___UnpackFrameFromBuffer_7; }
	inline void set_UnpackFrameFromBuffer_7(UnpackFrameDelegate_tCF8D77A95A0A923F2ECEC064EAE4465C53D6DFD3 * value)
	{
		___UnpackFrameFromBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnpackFrameFromBuffer_7), (void*)value);
	}

	inline static int32_t get_offset_of_FactoryFrame_8() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___FactoryFrame_8)); }
	inline Func_1_tECC97AE5F89F601DA79D6BC94EAF1009936D779A * get_FactoryFrame_8() const { return ___FactoryFrame_8; }
	inline Func_1_tECC97AE5F89F601DA79D6BC94EAF1009936D779A ** get_address_of_FactoryFrame_8() { return &___FactoryFrame_8; }
	inline void set_FactoryFrame_8(Func_1_tECC97AE5F89F601DA79D6BC94EAF1009936D779A * value)
	{
		___FactoryFrame_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FactoryFrame_8), (void*)value);
	}

	inline static int32_t get_offset_of_FactoryFramesObj_9() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___FactoryFramesObj_9)); }
	inline Func_3_t06730F225B5B2A45E2D85A198E9DEEBD7940C673 * get_FactoryFramesObj_9() const { return ___FactoryFramesObj_9; }
	inline Func_3_t06730F225B5B2A45E2D85A198E9DEEBD7940C673 ** get_address_of_FactoryFramesObj_9() { return &___FactoryFramesObj_9; }
	inline void set_FactoryFramesObj_9(Func_3_t06730F225B5B2A45E2D85A198E9DEEBD7940C673 * value)
	{
		___FactoryFramesObj_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FactoryFramesObj_9), (void*)value);
	}

	inline static int32_t get_offset_of_FactoryFramesStruct_10() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___FactoryFramesStruct_10)); }
	inline Func_3_t538E2B68E7ADDFCA0958C78B3C54B131BE1FBD73 * get_FactoryFramesStruct_10() const { return ___FactoryFramesStruct_10; }
	inline Func_3_t538E2B68E7ADDFCA0958C78B3C54B131BE1FBD73 ** get_address_of_FactoryFramesStruct_10() { return &___FactoryFramesStruct_10; }
	inline void set_FactoryFramesStruct_10(Func_3_t538E2B68E7ADDFCA0958C78B3C54B131BE1FBD73 * value)
	{
		___FactoryFramesStruct_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FactoryFramesStruct_10), (void*)value);
	}

	inline static int32_t get_offset_of_CopyFrameToObj_11() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___CopyFrameToObj_11)); }
	inline PackCopyFrameToObjectDelegate_t95B7573FE460D068CA760B93677C35287C627875 * get_CopyFrameToObj_11() const { return ___CopyFrameToObj_11; }
	inline PackCopyFrameToObjectDelegate_t95B7573FE460D068CA760B93677C35287C627875 ** get_address_of_CopyFrameToObj_11() { return &___CopyFrameToObj_11; }
	inline void set_CopyFrameToObj_11(PackCopyFrameToObjectDelegate_t95B7573FE460D068CA760B93677C35287C627875 * value)
	{
		___CopyFrameToObj_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CopyFrameToObj_11), (void*)value);
	}

	inline static int32_t get_offset_of_CopyFrameToStruct_12() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___CopyFrameToStruct_12)); }
	inline PackCopyFrameToStructDelegate_t573C14A226006904036BE25919A2AD8CB5426C89 * get_CopyFrameToStruct_12() const { return ___CopyFrameToStruct_12; }
	inline PackCopyFrameToStructDelegate_t573C14A226006904036BE25919A2AD8CB5426C89 ** get_address_of_CopyFrameToStruct_12() { return &___CopyFrameToStruct_12; }
	inline void set_CopyFrameToStruct_12(PackCopyFrameToStructDelegate_t573C14A226006904036BE25919A2AD8CB5426C89 * value)
	{
		___CopyFrameToStruct_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CopyFrameToStruct_12), (void*)value);
	}

	inline static int32_t get_offset_of_SnapObject_13() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___SnapObject_13)); }
	inline PackSnapshotObjectDelegate_t17865965EFA7AFE02A9119950B075CDC6C73D947 * get_SnapObject_13() const { return ___SnapObject_13; }
	inline PackSnapshotObjectDelegate_t17865965EFA7AFE02A9119950B075CDC6C73D947 ** get_address_of_SnapObject_13() { return &___SnapObject_13; }
	inline void set_SnapObject_13(PackSnapshotObjectDelegate_t17865965EFA7AFE02A9119950B075CDC6C73D947 * value)
	{
		___SnapObject_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SnapObject_13), (void*)value);
	}

	inline static int32_t get_offset_of_SnapStruct_14() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___SnapStruct_14)); }
	inline PackSnapshotStructDelegate_t4A9815B483E31981CEFFB833299EF1D6892DDC0E * get_SnapStruct_14() const { return ___SnapStruct_14; }
	inline PackSnapshotStructDelegate_t4A9815B483E31981CEFFB833299EF1D6892DDC0E ** get_address_of_SnapStruct_14() { return &___SnapStruct_14; }
	inline void set_SnapStruct_14(PackSnapshotStructDelegate_t4A9815B483E31981CEFFB833299EF1D6892DDC0E * value)
	{
		___SnapStruct_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SnapStruct_14), (void*)value);
	}

	inline static int32_t get_offset_of_InterpFrameToFrame_15() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___InterpFrameToFrame_15)); }
	inline PackInterpFrameToFrameDelegate_t79504A76CC9567E3DE51FCF808EC6C10F7A46552 * get_InterpFrameToFrame_15() const { return ___InterpFrameToFrame_15; }
	inline PackInterpFrameToFrameDelegate_t79504A76CC9567E3DE51FCF808EC6C10F7A46552 ** get_address_of_InterpFrameToFrame_15() { return &___InterpFrameToFrame_15; }
	inline void set_InterpFrameToFrame_15(PackInterpFrameToFrameDelegate_t79504A76CC9567E3DE51FCF808EC6C10F7A46552 * value)
	{
		___InterpFrameToFrame_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InterpFrameToFrame_15), (void*)value);
	}

	inline static int32_t get_offset_of_InterpFrameToObj_16() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___InterpFrameToObj_16)); }
	inline PackInterpFrameToObjectDelegate_t2E0D7FB7E4261BE520E80777598784969124FD90 * get_InterpFrameToObj_16() const { return ___InterpFrameToObj_16; }
	inline PackInterpFrameToObjectDelegate_t2E0D7FB7E4261BE520E80777598784969124FD90 ** get_address_of_InterpFrameToObj_16() { return &___InterpFrameToObj_16; }
	inline void set_InterpFrameToObj_16(PackInterpFrameToObjectDelegate_t2E0D7FB7E4261BE520E80777598784969124FD90 * value)
	{
		___InterpFrameToObj_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InterpFrameToObj_16), (void*)value);
	}

	inline static int32_t get_offset_of_InterpFrameToStruct_17() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___InterpFrameToStruct_17)); }
	inline PackInterpFrameToStructDelegate_t92235466FF0AA7E30B5D1A670FCF4F4D2AD05B66 * get_InterpFrameToStruct_17() const { return ___InterpFrameToStruct_17; }
	inline PackInterpFrameToStructDelegate_t92235466FF0AA7E30B5D1A670FCF4F4D2AD05B66 ** get_address_of_InterpFrameToStruct_17() { return &___InterpFrameToStruct_17; }
	inline void set_InterpFrameToStruct_17(PackInterpFrameToStructDelegate_t92235466FF0AA7E30B5D1A670FCF4F4D2AD05B66 * value)
	{
		___InterpFrameToStruct_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InterpFrameToStruct_17), (void*)value);
	}

	inline static int32_t get_offset_of_CaptureObj_18() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___CaptureObj_18)); }
	inline Action_2_t95F7CF1C13BE7A0EDC1E168451664D3C076A6841 * get_CaptureObj_18() const { return ___CaptureObj_18; }
	inline Action_2_t95F7CF1C13BE7A0EDC1E168451664D3C076A6841 ** get_address_of_CaptureObj_18() { return &___CaptureObj_18; }
	inline void set_CaptureObj_18(Action_2_t95F7CF1C13BE7A0EDC1E168451664D3C076A6841 * value)
	{
		___CaptureObj_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CaptureObj_18), (void*)value);
	}

	inline static int32_t get_offset_of_CaptureStruct_19() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___CaptureStruct_19)); }
	inline Action_2_t3BBD0274AE0477407194AFAB3B4A2BCF40A71D34 * get_CaptureStruct_19() const { return ___CaptureStruct_19; }
	inline Action_2_t3BBD0274AE0477407194AFAB3B4A2BCF40A71D34 ** get_address_of_CaptureStruct_19() { return &___CaptureStruct_19; }
	inline void set_CaptureStruct_19(Action_2_t3BBD0274AE0477407194AFAB3B4A2BCF40A71D34 * value)
	{
		___CaptureStruct_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CaptureStruct_19), (void*)value);
	}

	inline static int32_t get_offset_of_CopyFrameToFrame_20() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___CopyFrameToFrame_20)); }
	inline Action_2_tF543EB1BE063AA2C4C189F907F108085AB479B7F * get_CopyFrameToFrame_20() const { return ___CopyFrameToFrame_20; }
	inline Action_2_tF543EB1BE063AA2C4C189F907F108085AB479B7F ** get_address_of_CopyFrameToFrame_20() { return &___CopyFrameToFrame_20; }
	inline void set_CopyFrameToFrame_20(Action_2_tF543EB1BE063AA2C4C189F907F108085AB479B7F * value)
	{
		___CopyFrameToFrame_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CopyFrameToFrame_20), (void*)value);
	}

	inline static int32_t get_offset_of_fieldCount_21() { return static_cast<int32_t>(offsetof(PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E, ___fieldCount_21)); }
	inline int32_t get_fieldCount_21() const { return ___fieldCount_21; }
	inline int32_t* get_address_of_fieldCount_21() { return &___fieldCount_21; }
	inline void set_fieldCount_21(int32_t value)
	{
		___fieldCount_21 = value;
	}
};


// Photon.Pun.Simple.SyncAdditiveMover/TRSDefinition
struct  TRSDefinition_tA65CC57592007173CF8E35F680C37B4A198DFD3B  : public TRSDefinitionBase_tA35EC340AFCB457FF024098F1AF0D59BCB6803D0
{
public:
	// UnityEngine.Vector3 Photon.Pun.Simple.SyncAdditiveMover/TRSDefinition::addVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___addVector_1;

public:
	inline static int32_t get_offset_of_addVector_1() { return static_cast<int32_t>(offsetof(TRSDefinition_tA65CC57592007173CF8E35F680C37B4A198DFD3B, ___addVector_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_addVector_1() const { return ___addVector_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_addVector_1() { return &___addVector_1; }
	inline void set_addVector_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___addVector_1 = value;
	}
};


// Photon.Pun.Simple.SyncNodeMover/Movement
struct  Movement_t1798C10740501998F968A896B895AA28309505E0 
{
public:
	// System.Int32 Photon.Pun.Simple.SyncNodeMover/Movement::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Movement_t1798C10740501998F968A896B895AA28309505E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.Simple.TickEngineSettings/BufferCorrection
struct  BufferCorrection_t7743EB9389B13ECFBD075B91ABE5ECD0A0863828 
{
public:
	// System.Int32 Photon.Pun.Simple.TickEngineSettings/BufferCorrection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BufferCorrection_t7743EB9389B13ECFBD075B91ABE5ECD0A0863828, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.Simple.TickEngineSettings/FrameCountEnum
struct  FrameCountEnum_tAD3773223089724EB02154E29F44A7DAE2DC670B 
{
public:
	// System.Int32 Photon.Pun.Simple.TickEngineSettings/FrameCountEnum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FrameCountEnum_tAD3773223089724EB02154E29F44A7DAE2DC670B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.Simple.TickEngineSettings/LogInfoLevel
struct  LogInfoLevel_t5287A84E6EEAB49F128559C04DBB17D3093B0C8F 
{
public:
	// System.Int32 Photon.Pun.Simple.TickEngineSettings/LogInfoLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogInfoLevel_t5287A84E6EEAB49F128559C04DBB17D3093B0C8F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.Simple.VitalUIBase/TargetField
struct  TargetField_tEEA8DDD611CF940FB85E83F50170CACD13F055CA 
{
public:
	// System.Int32 Photon.Pun.Simple.VitalUIBase/TargetField::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TargetField_tEEA8DDD611CF940FB85E83F50170CACD13F055CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.Simple.VitalsUISrcBase/MonitorSource
struct  MonitorSource_t8465703E093B812639D0A2F8BEA7EDA6D6BBA3D1 
{
public:
	// System.Int32 Photon.Pun.Simple.VitalsUISrcBase/MonitorSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MonitorSource_t8465703E093B812639D0A2F8BEA7EDA6D6BBA3D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.Simple.SyncState/Frame/Changes
struct  Changes_tEF3C07192A8C0D49ED84773D111642455BB51DF5 
{
public:
	// System.Int32 Photon.Pun.Simple.SyncState/Frame/Changes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Changes_tEF3C07192A8C0D49ED84773D111642455BB51DF5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// Photon.Pun.Simple.ContactEvent
struct  ContactEvent_t626CD0536CDB74CB6475D38893313349347F8313 
{
public:
	// Photon.Pun.Simple.IContactSystem Photon.Pun.Simple.ContactEvent::contactSystem
	RuntimeObject* ___contactSystem_0;
	// Photon.Pun.Simple.IContactTrigger Photon.Pun.Simple.ContactEvent::contactTrigger
	RuntimeObject* ___contactTrigger_1;
	// Photon.Pun.Simple.ContactType Photon.Pun.Simple.ContactEvent::contactType
	int32_t ___contactType_2;

public:
	inline static int32_t get_offset_of_contactSystem_0() { return static_cast<int32_t>(offsetof(ContactEvent_t626CD0536CDB74CB6475D38893313349347F8313, ___contactSystem_0)); }
	inline RuntimeObject* get_contactSystem_0() const { return ___contactSystem_0; }
	inline RuntimeObject** get_address_of_contactSystem_0() { return &___contactSystem_0; }
	inline void set_contactSystem_0(RuntimeObject* value)
	{
		___contactSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contactSystem_0), (void*)value);
	}

	inline static int32_t get_offset_of_contactTrigger_1() { return static_cast<int32_t>(offsetof(ContactEvent_t626CD0536CDB74CB6475D38893313349347F8313, ___contactTrigger_1)); }
	inline RuntimeObject* get_contactTrigger_1() const { return ___contactTrigger_1; }
	inline RuntimeObject** get_address_of_contactTrigger_1() { return &___contactTrigger_1; }
	inline void set_contactTrigger_1(RuntimeObject* value)
	{
		___contactTrigger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contactTrigger_1), (void*)value);
	}

	inline static int32_t get_offset_of_contactType_2() { return static_cast<int32_t>(offsetof(ContactEvent_t626CD0536CDB74CB6475D38893313349347F8313, ___contactType_2)); }
	inline int32_t get_contactType_2() const { return ___contactType_2; }
	inline int32_t* get_address_of_contactType_2() { return &___contactType_2; }
	inline void set_contactType_2(int32_t value)
	{
		___contactType_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Photon.Pun.Simple.ContactEvent
struct ContactEvent_t626CD0536CDB74CB6475D38893313349347F8313_marshaled_pinvoke
{
	RuntimeObject* ___contactSystem_0;
	RuntimeObject* ___contactTrigger_1;
	int32_t ___contactType_2;
};
// Native definition for COM marshalling of Photon.Pun.Simple.ContactEvent
struct ContactEvent_t626CD0536CDB74CB6475D38893313349347F8313_marshaled_com
{
	RuntimeObject* ___contactSystem_0;
	RuntimeObject* ___contactTrigger_1;
	int32_t ___contactType_2;
};

// Photon.Compression.Element
struct  Element_t3B6173E3F02244D529DFB937B971A87F1CEEECB5 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Photon.Compression.Element/VectorType Photon.Compression.Element::vectorType
			int32_t ___vectorType_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___vectorType_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___v_1_OffsetPadding[4];
			// UnityEngine.Vector3 Photon.Compression.Element::v
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___v_1_OffsetPadding_forAlignmentOnly[4];
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___quat_2_OffsetPadding[4];
			// UnityEngine.Quaternion Photon.Compression.Element::quat
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___quat_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___quat_2_OffsetPadding_forAlignmentOnly[4];
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___quat_2_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_vectorType_0() { return static_cast<int32_t>(offsetof(Element_t3B6173E3F02244D529DFB937B971A87F1CEEECB5, ___vectorType_0)); }
	inline int32_t get_vectorType_0() const { return ___vectorType_0; }
	inline int32_t* get_address_of_vectorType_0() { return &___vectorType_0; }
	inline void set_vectorType_0(int32_t value)
	{
		___vectorType_0 = value;
	}

	inline static int32_t get_offset_of_v_1() { return static_cast<int32_t>(offsetof(Element_t3B6173E3F02244D529DFB937B971A87F1CEEECB5, ___v_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_v_1() const { return ___v_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_v_1() { return &___v_1; }
	inline void set_v_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___v_1 = value;
	}

	inline static int32_t get_offset_of_quat_2() { return static_cast<int32_t>(offsetof(Element_t3B6173E3F02244D529DFB937B971A87F1CEEECB5, ___quat_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_quat_2() const { return ___quat_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_quat_2() { return &___quat_2; }
	inline void set_quat_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___quat_2 = value;
	}
};


// Photon.Compression.ElementCrusher
struct  ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8  : public Crusher_1_tDD480B661BF95529EEC1742AF05450B4CF969A85
{
public:
	// System.Boolean Photon.Compression.ElementCrusher::hideFieldName
	bool ___hideFieldName_10;
	// emotitron.Compression.TRSType Photon.Compression.ElementCrusher::_trsType
	int32_t ____trsType_11;
	// UnityEngine.Transform Photon.Compression.ElementCrusher::defaultTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___defaultTransform_12;
	// Photon.Compression.ElementCrusher/UniformAxes Photon.Compression.ElementCrusher::uniformAxes
	int32_t ___uniformAxes_13;
	// emotitron.Compression.FloatCrusher Photon.Compression.ElementCrusher::_xcrusher
	FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * ____xcrusher_14;
	// emotitron.Compression.FloatCrusher Photon.Compression.ElementCrusher::_ycrusher
	FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * ____ycrusher_15;
	// emotitron.Compression.FloatCrusher Photon.Compression.ElementCrusher::_zcrusher
	FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * ____zcrusher_16;
	// emotitron.Compression.FloatCrusher Photon.Compression.ElementCrusher::_ucrusher
	FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * ____ucrusher_17;
	// Photon.Compression.QuatCrusher Photon.Compression.ElementCrusher::_qcrusher
	QuatCrusher_tCA15E814F710A0B7C738E6BE295FE8590D96A4C8 * ____qcrusher_18;
	// System.Boolean Photon.Compression.ElementCrusher::local
	bool ___local_19;
	// System.Boolean Photon.Compression.ElementCrusher::useWorldBounds
	bool ___useWorldBounds_20;
	// System.Int32 Photon.Compression.ElementCrusher::boundsGroupId
	int32_t ___boundsGroupId_21;
	// System.Boolean Photon.Compression.ElementCrusher::enableTRSTypeSelector
	bool ___enableTRSTypeSelector_22;
	// System.Boolean Photon.Compression.ElementCrusher::enableLocalSelector
	bool ___enableLocalSelector_23;
	// System.Boolean Photon.Compression.ElementCrusher::cached
	bool ___cached_24;
	// System.Boolean Photon.Compression.ElementCrusher::cache_xEnabled
	bool ___cache_xEnabled_25;
	// System.Boolean Photon.Compression.ElementCrusher::cache_yEnabled
	bool ___cache_yEnabled_26;
	// System.Boolean Photon.Compression.ElementCrusher::cache_zEnabled
	bool ___cache_zEnabled_27;
	// System.Boolean Photon.Compression.ElementCrusher::cache_uEnabled
	bool ___cache_uEnabled_28;
	// System.Boolean Photon.Compression.ElementCrusher::cache_qEnabled
	bool ___cache_qEnabled_29;
	// System.Boolean Photon.Compression.ElementCrusher::cache_isUniformScale
	bool ___cache_isUniformScale_30;
	// System.Int32[] Photon.Compression.ElementCrusher::cache_xBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cache_xBits_31;
	// System.Int32[] Photon.Compression.ElementCrusher::cache_yBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cache_yBits_32;
	// System.Int32[] Photon.Compression.ElementCrusher::cache_zBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cache_zBits_33;
	// System.Int32[] Photon.Compression.ElementCrusher::cache_uBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cache_uBits_34;
	// System.Int32[] Photon.Compression.ElementCrusher::cache_TotalBits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___cache_TotalBits_35;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32> Photon.Compression.ElementCrusher::Cached_TotalBits
	ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * ___Cached_TotalBits_36;
	// System.Int32 Photon.Compression.ElementCrusher::cache_qBits
	int32_t ___cache_qBits_37;
	// System.Boolean Photon.Compression.ElementCrusher::cache_mustCorrectRotationX
	bool ___cache_mustCorrectRotationX_38;
	// UnityEngine.Bounds Photon.Compression.ElementCrusher::bounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___bounds_39;

public:
	inline static int32_t get_offset_of_hideFieldName_10() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___hideFieldName_10)); }
	inline bool get_hideFieldName_10() const { return ___hideFieldName_10; }
	inline bool* get_address_of_hideFieldName_10() { return &___hideFieldName_10; }
	inline void set_hideFieldName_10(bool value)
	{
		___hideFieldName_10 = value;
	}

	inline static int32_t get_offset_of__trsType_11() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ____trsType_11)); }
	inline int32_t get__trsType_11() const { return ____trsType_11; }
	inline int32_t* get_address_of__trsType_11() { return &____trsType_11; }
	inline void set__trsType_11(int32_t value)
	{
		____trsType_11 = value;
	}

	inline static int32_t get_offset_of_defaultTransform_12() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___defaultTransform_12)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_defaultTransform_12() const { return ___defaultTransform_12; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_defaultTransform_12() { return &___defaultTransform_12; }
	inline void set_defaultTransform_12(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___defaultTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_uniformAxes_13() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___uniformAxes_13)); }
	inline int32_t get_uniformAxes_13() const { return ___uniformAxes_13; }
	inline int32_t* get_address_of_uniformAxes_13() { return &___uniformAxes_13; }
	inline void set_uniformAxes_13(int32_t value)
	{
		___uniformAxes_13 = value;
	}

	inline static int32_t get_offset_of__xcrusher_14() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ____xcrusher_14)); }
	inline FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * get__xcrusher_14() const { return ____xcrusher_14; }
	inline FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 ** get_address_of__xcrusher_14() { return &____xcrusher_14; }
	inline void set__xcrusher_14(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * value)
	{
		____xcrusher_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____xcrusher_14), (void*)value);
	}

	inline static int32_t get_offset_of__ycrusher_15() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ____ycrusher_15)); }
	inline FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * get__ycrusher_15() const { return ____ycrusher_15; }
	inline FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 ** get_address_of__ycrusher_15() { return &____ycrusher_15; }
	inline void set__ycrusher_15(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * value)
	{
		____ycrusher_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ycrusher_15), (void*)value);
	}

	inline static int32_t get_offset_of__zcrusher_16() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ____zcrusher_16)); }
	inline FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * get__zcrusher_16() const { return ____zcrusher_16; }
	inline FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 ** get_address_of__zcrusher_16() { return &____zcrusher_16; }
	inline void set__zcrusher_16(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * value)
	{
		____zcrusher_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____zcrusher_16), (void*)value);
	}

	inline static int32_t get_offset_of__ucrusher_17() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ____ucrusher_17)); }
	inline FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * get__ucrusher_17() const { return ____ucrusher_17; }
	inline FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 ** get_address_of__ucrusher_17() { return &____ucrusher_17; }
	inline void set__ucrusher_17(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * value)
	{
		____ucrusher_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ucrusher_17), (void*)value);
	}

	inline static int32_t get_offset_of__qcrusher_18() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ____qcrusher_18)); }
	inline QuatCrusher_tCA15E814F710A0B7C738E6BE295FE8590D96A4C8 * get__qcrusher_18() const { return ____qcrusher_18; }
	inline QuatCrusher_tCA15E814F710A0B7C738E6BE295FE8590D96A4C8 ** get_address_of__qcrusher_18() { return &____qcrusher_18; }
	inline void set__qcrusher_18(QuatCrusher_tCA15E814F710A0B7C738E6BE295FE8590D96A4C8 * value)
	{
		____qcrusher_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____qcrusher_18), (void*)value);
	}

	inline static int32_t get_offset_of_local_19() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___local_19)); }
	inline bool get_local_19() const { return ___local_19; }
	inline bool* get_address_of_local_19() { return &___local_19; }
	inline void set_local_19(bool value)
	{
		___local_19 = value;
	}

	inline static int32_t get_offset_of_useWorldBounds_20() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___useWorldBounds_20)); }
	inline bool get_useWorldBounds_20() const { return ___useWorldBounds_20; }
	inline bool* get_address_of_useWorldBounds_20() { return &___useWorldBounds_20; }
	inline void set_useWorldBounds_20(bool value)
	{
		___useWorldBounds_20 = value;
	}

	inline static int32_t get_offset_of_boundsGroupId_21() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___boundsGroupId_21)); }
	inline int32_t get_boundsGroupId_21() const { return ___boundsGroupId_21; }
	inline int32_t* get_address_of_boundsGroupId_21() { return &___boundsGroupId_21; }
	inline void set_boundsGroupId_21(int32_t value)
	{
		___boundsGroupId_21 = value;
	}

	inline static int32_t get_offset_of_enableTRSTypeSelector_22() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___enableTRSTypeSelector_22)); }
	inline bool get_enableTRSTypeSelector_22() const { return ___enableTRSTypeSelector_22; }
	inline bool* get_address_of_enableTRSTypeSelector_22() { return &___enableTRSTypeSelector_22; }
	inline void set_enableTRSTypeSelector_22(bool value)
	{
		___enableTRSTypeSelector_22 = value;
	}

	inline static int32_t get_offset_of_enableLocalSelector_23() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___enableLocalSelector_23)); }
	inline bool get_enableLocalSelector_23() const { return ___enableLocalSelector_23; }
	inline bool* get_address_of_enableLocalSelector_23() { return &___enableLocalSelector_23; }
	inline void set_enableLocalSelector_23(bool value)
	{
		___enableLocalSelector_23 = value;
	}

	inline static int32_t get_offset_of_cached_24() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___cached_24)); }
	inline bool get_cached_24() const { return ___cached_24; }
	inline bool* get_address_of_cached_24() { return &___cached_24; }
	inline void set_cached_24(bool value)
	{
		___cached_24 = value;
	}

	inline static int32_t get_offset_of_cache_xEnabled_25() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___cache_xEnabled_25)); }
	inline bool get_cache_xEnabled_25() const { return ___cache_xEnabled_25; }
	inline bool* get_address_of_cache_xEnabled_25() { return &___cache_xEnabled_25; }
	inline void set_cache_xEnabled_25(bool value)
	{
		___cache_xEnabled_25 = value;
	}

	inline static int32_t get_offset_of_cache_yEnabled_26() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___cache_yEnabled_26)); }
	inline bool get_cache_yEnabled_26() const { return ___cache_yEnabled_26; }
	inline bool* get_address_of_cache_yEnabled_26() { return &___cache_yEnabled_26; }
	inline void set_cache_yEnabled_26(bool value)
	{
		___cache_yEnabled_26 = value;
	}

	inline static int32_t get_offset_of_cache_zEnabled_27() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___cache_zEnabled_27)); }
	inline bool get_cache_zEnabled_27() const { return ___cache_zEnabled_27; }
	inline bool* get_address_of_cache_zEnabled_27() { return &___cache_zEnabled_27; }
	inline void set_cache_zEnabled_27(bool value)
	{
		___cache_zEnabled_27 = value;
	}

	inline static int32_t get_offset_of_cache_uEnabled_28() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___cache_uEnabled_28)); }
	inline bool get_cache_uEnabled_28() const { return ___cache_uEnabled_28; }
	inline bool* get_address_of_cache_uEnabled_28() { return &___cache_uEnabled_28; }
	inline void set_cache_uEnabled_28(bool value)
	{
		___cache_uEnabled_28 = value;
	}

	inline static int32_t get_offset_of_cache_qEnabled_29() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___cache_qEnabled_29)); }
	inline bool get_cache_qEnabled_29() const { return ___cache_qEnabled_29; }
	inline bool* get_address_of_cache_qEnabled_29() { return &___cache_qEnabled_29; }
	inline void set_cache_qEnabled_29(bool value)
	{
		___cache_qEnabled_29 = value;
	}

	inline static int32_t get_offset_of_cache_isUniformScale_30() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___cache_isUniformScale_30)); }
	inline bool get_cache_isUniformScale_30() const { return ___cache_isUniformScale_30; }
	inline bool* get_address_of_cache_isUniformScale_30() { return &___cache_isUniformScale_30; }
	inline void set_cache_isUniformScale_30(bool value)
	{
		___cache_isUniformScale_30 = value;
	}

	inline static int32_t get_offset_of_cache_xBits_31() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___cache_xBits_31)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cache_xBits_31() const { return ___cache_xBits_31; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cache_xBits_31() { return &___cache_xBits_31; }
	inline void set_cache_xBits_31(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cache_xBits_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cache_xBits_31), (void*)value);
	}

	inline static int32_t get_offset_of_cache_yBits_32() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___cache_yBits_32)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cache_yBits_32() const { return ___cache_yBits_32; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cache_yBits_32() { return &___cache_yBits_32; }
	inline void set_cache_yBits_32(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cache_yBits_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cache_yBits_32), (void*)value);
	}

	inline static int32_t get_offset_of_cache_zBits_33() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___cache_zBits_33)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cache_zBits_33() const { return ___cache_zBits_33; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cache_zBits_33() { return &___cache_zBits_33; }
	inline void set_cache_zBits_33(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cache_zBits_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cache_zBits_33), (void*)value);
	}

	inline static int32_t get_offset_of_cache_uBits_34() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___cache_uBits_34)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cache_uBits_34() const { return ___cache_uBits_34; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cache_uBits_34() { return &___cache_uBits_34; }
	inline void set_cache_uBits_34(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cache_uBits_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cache_uBits_34), (void*)value);
	}

	inline static int32_t get_offset_of_cache_TotalBits_35() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___cache_TotalBits_35)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_cache_TotalBits_35() const { return ___cache_TotalBits_35; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_cache_TotalBits_35() { return &___cache_TotalBits_35; }
	inline void set_cache_TotalBits_35(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___cache_TotalBits_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cache_TotalBits_35), (void*)value);
	}

	inline static int32_t get_offset_of_Cached_TotalBits_36() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___Cached_TotalBits_36)); }
	inline ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * get_Cached_TotalBits_36() const { return ___Cached_TotalBits_36; }
	inline ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF ** get_address_of_Cached_TotalBits_36() { return &___Cached_TotalBits_36; }
	inline void set_Cached_TotalBits_36(ReadOnlyCollection_1_t3E37961FF3644E8E5BC1468444123741B9E47EFF * value)
	{
		___Cached_TotalBits_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cached_TotalBits_36), (void*)value);
	}

	inline static int32_t get_offset_of_cache_qBits_37() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___cache_qBits_37)); }
	inline int32_t get_cache_qBits_37() const { return ___cache_qBits_37; }
	inline int32_t* get_address_of_cache_qBits_37() { return &___cache_qBits_37; }
	inline void set_cache_qBits_37(int32_t value)
	{
		___cache_qBits_37 = value;
	}

	inline static int32_t get_offset_of_cache_mustCorrectRotationX_38() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___cache_mustCorrectRotationX_38)); }
	inline bool get_cache_mustCorrectRotationX_38() const { return ___cache_mustCorrectRotationX_38; }
	inline bool* get_address_of_cache_mustCorrectRotationX_38() { return &___cache_mustCorrectRotationX_38; }
	inline void set_cache_mustCorrectRotationX_38(bool value)
	{
		___cache_mustCorrectRotationX_38 = value;
	}

	inline static int32_t get_offset_of_bounds_39() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8, ___bounds_39)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_bounds_39() const { return ___bounds_39; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_bounds_39() { return &___bounds_39; }
	inline void set_bounds_39(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___bounds_39 = value;
	}
};

struct ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Compression.ElementCrusher> Photon.Compression.ElementCrusher::staticElementCrushers
	Dictionary_2_tF468851FDB81355866BD796F6968543DBF65F9A4 * ___staticElementCrushers_2;
	// Photon.Compression.CompressedElement Photon.Compression.ElementCrusher::reusableCE
	CompressedElement_t17EA551980F8C534AE64C3045A55A66D49EFCC38 * ___reusableCE_3;
	// Photon.Compression.ElementCrusher Photon.Compression.ElementCrusher::defaultUncompressedElementCrusher
	ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * ___defaultUncompressedElementCrusher_4;
	// Photon.Compression.ElementCrusher Photon.Compression.ElementCrusher::defaultUncompressedPosCrusher
	ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * ___defaultUncompressedPosCrusher_5;
	// Photon.Compression.ElementCrusher Photon.Compression.ElementCrusher::defaultUncompressedSclCrusher
	ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * ___defaultUncompressedSclCrusher_6;
	// Photon.Compression.ElementCrusher Photon.Compression.ElementCrusher::defaultHalfFloatElementCrusher
	ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * ___defaultHalfFloatElementCrusher_7;
	// Photon.Compression.ElementCrusher Photon.Compression.ElementCrusher::defaultHalfFloatPosCrusher
	ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * ___defaultHalfFloatPosCrusher_8;
	// Photon.Compression.ElementCrusher Photon.Compression.ElementCrusher::defaultHalfFloatSclCrusher
	ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * ___defaultHalfFloatSclCrusher_9;
	// System.UInt64[] Photon.Compression.ElementCrusher::reusableArray64
	UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* ___reusableArray64_40;

public:
	inline static int32_t get_offset_of_staticElementCrushers_2() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8_StaticFields, ___staticElementCrushers_2)); }
	inline Dictionary_2_tF468851FDB81355866BD796F6968543DBF65F9A4 * get_staticElementCrushers_2() const { return ___staticElementCrushers_2; }
	inline Dictionary_2_tF468851FDB81355866BD796F6968543DBF65F9A4 ** get_address_of_staticElementCrushers_2() { return &___staticElementCrushers_2; }
	inline void set_staticElementCrushers_2(Dictionary_2_tF468851FDB81355866BD796F6968543DBF65F9A4 * value)
	{
		___staticElementCrushers_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___staticElementCrushers_2), (void*)value);
	}

	inline static int32_t get_offset_of_reusableCE_3() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8_StaticFields, ___reusableCE_3)); }
	inline CompressedElement_t17EA551980F8C534AE64C3045A55A66D49EFCC38 * get_reusableCE_3() const { return ___reusableCE_3; }
	inline CompressedElement_t17EA551980F8C534AE64C3045A55A66D49EFCC38 ** get_address_of_reusableCE_3() { return &___reusableCE_3; }
	inline void set_reusableCE_3(CompressedElement_t17EA551980F8C534AE64C3045A55A66D49EFCC38 * value)
	{
		___reusableCE_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusableCE_3), (void*)value);
	}

	inline static int32_t get_offset_of_defaultUncompressedElementCrusher_4() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8_StaticFields, ___defaultUncompressedElementCrusher_4)); }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * get_defaultUncompressedElementCrusher_4() const { return ___defaultUncompressedElementCrusher_4; }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 ** get_address_of_defaultUncompressedElementCrusher_4() { return &___defaultUncompressedElementCrusher_4; }
	inline void set_defaultUncompressedElementCrusher_4(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * value)
	{
		___defaultUncompressedElementCrusher_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultUncompressedElementCrusher_4), (void*)value);
	}

	inline static int32_t get_offset_of_defaultUncompressedPosCrusher_5() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8_StaticFields, ___defaultUncompressedPosCrusher_5)); }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * get_defaultUncompressedPosCrusher_5() const { return ___defaultUncompressedPosCrusher_5; }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 ** get_address_of_defaultUncompressedPosCrusher_5() { return &___defaultUncompressedPosCrusher_5; }
	inline void set_defaultUncompressedPosCrusher_5(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * value)
	{
		___defaultUncompressedPosCrusher_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultUncompressedPosCrusher_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultUncompressedSclCrusher_6() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8_StaticFields, ___defaultUncompressedSclCrusher_6)); }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * get_defaultUncompressedSclCrusher_6() const { return ___defaultUncompressedSclCrusher_6; }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 ** get_address_of_defaultUncompressedSclCrusher_6() { return &___defaultUncompressedSclCrusher_6; }
	inline void set_defaultUncompressedSclCrusher_6(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * value)
	{
		___defaultUncompressedSclCrusher_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultUncompressedSclCrusher_6), (void*)value);
	}

	inline static int32_t get_offset_of_defaultHalfFloatElementCrusher_7() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8_StaticFields, ___defaultHalfFloatElementCrusher_7)); }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * get_defaultHalfFloatElementCrusher_7() const { return ___defaultHalfFloatElementCrusher_7; }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 ** get_address_of_defaultHalfFloatElementCrusher_7() { return &___defaultHalfFloatElementCrusher_7; }
	inline void set_defaultHalfFloatElementCrusher_7(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * value)
	{
		___defaultHalfFloatElementCrusher_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultHalfFloatElementCrusher_7), (void*)value);
	}

	inline static int32_t get_offset_of_defaultHalfFloatPosCrusher_8() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8_StaticFields, ___defaultHalfFloatPosCrusher_8)); }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * get_defaultHalfFloatPosCrusher_8() const { return ___defaultHalfFloatPosCrusher_8; }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 ** get_address_of_defaultHalfFloatPosCrusher_8() { return &___defaultHalfFloatPosCrusher_8; }
	inline void set_defaultHalfFloatPosCrusher_8(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * value)
	{
		___defaultHalfFloatPosCrusher_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultHalfFloatPosCrusher_8), (void*)value);
	}

	inline static int32_t get_offset_of_defaultHalfFloatSclCrusher_9() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8_StaticFields, ___defaultHalfFloatSclCrusher_9)); }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * get_defaultHalfFloatSclCrusher_9() const { return ___defaultHalfFloatSclCrusher_9; }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 ** get_address_of_defaultHalfFloatSclCrusher_9() { return &___defaultHalfFloatSclCrusher_9; }
	inline void set_defaultHalfFloatSclCrusher_9(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * value)
	{
		___defaultHalfFloatSclCrusher_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultHalfFloatSclCrusher_9), (void*)value);
	}

	inline static int32_t get_offset_of_reusableArray64_40() { return static_cast<int32_t>(offsetof(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8_StaticFields, ___reusableArray64_40)); }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* get_reusableArray64_40() const { return ___reusableArray64_40; }
	inline UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2** get_address_of_reusableArray64_40() { return &___reusableArray64_40; }
	inline void set_reusableArray64_40(UInt64U5BU5D_t7C6E32D10F47677C1CEF3C30F4E4CE95B3A633E2* value)
	{
		___reusableArray64_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusableArray64_40), (void*)value);
	}
};


// emotitron.Compression.FloatCrusher
struct  FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195  : public Crusher_1_tABE032A6A2818843BF70ACA1786FE4AC9056945B
{
public:
	// emotitron.Compression.Axis emotitron.Compression.FloatCrusher::axis
	int32_t ___axis_6;
	// System.Boolean emotitron.Compression.FloatCrusher::showBCL
	bool ___showBCL_7;
	// System.Boolean emotitron.Compression.FloatCrusher::expandBCL
	bool ___expandBCL_8;
	// System.Boolean emotitron.Compression.FloatCrusher::showEnableToggle
	bool ___showEnableToggle_9;
	// System.Boolean emotitron.Compression.FloatCrusher::enabled
	bool ___enabled_10;
	// System.Boolean emotitron.Compression.FloatCrusher::_accurateCenter
	bool ____accurateCenter_11;
	// emotitron.Compression.OutOfBoundsHandling emotitron.Compression.FloatCrusher::outOfBoundsHandling
	int32_t ___outOfBoundsHandling_12;
	// System.Single emotitron.Compression.FloatCrusher::encoder
	float ___encoder_13;
	// System.Single emotitron.Compression.FloatCrusher::decoder
	float ___decoder_14;
	// System.Single emotitron.Compression.FloatCrusher::actualMin
	float ___actualMin_15;
	// System.Single emotitron.Compression.FloatCrusher::actualMax
	float ___actualMax_16;
	// System.UInt32[] emotitron.Compression.FloatCrusher::masks
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___masks_17;
	// System.Single emotitron.Compression.FloatCrusher::wrappoint
	float ___wrappoint_18;
	// System.Single emotitron.Compression.FloatCrusher::range
	float ___range_19;
	// System.Single emotitron.Compression.FloatCrusher::rotationMaxValue
	float ___rotationMaxValue_20;
	// System.UInt32 emotitron.Compression.FloatCrusher::maxEncodedVal
	uint32_t ___maxEncodedVal_21;
	// System.Single emotitron.Compression.FloatCrusher::centerValue
	float ___centerValue_22;
	// System.UInt32 emotitron.Compression.FloatCrusher::centerEncodedValue
	uint32_t ___centerEncodedValue_23;
	// System.Boolean emotitron.Compression.FloatCrusher::_limitRange
	bool ____limitRange_24;
	// System.Boolean emotitron.Compression.FloatCrusher::_useHalfRangeX
	bool ____useHalfRangeX_25;
	// emotitron.Compression.BitsDeterminedBy emotitron.Compression.FloatCrusher::_bitsDeterminedBy
	int32_t ____bitsDeterminedBy_26;
	// System.Int32[] emotitron.Compression.FloatCrusher::_bits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____bits_27;
	// System.Single emotitron.Compression.FloatCrusher::_min
	float ____min_28;
	// System.Single emotitron.Compression.FloatCrusher::_max
	float ____max_29;
	// System.UInt64 emotitron.Compression.FloatCrusher::_resolution
	uint64_t ____resolution_30;
	// System.Single emotitron.Compression.FloatCrusher::_precision
	float ____precision_31;
	// emotitron.Compression.TRSType emotitron.Compression.FloatCrusher::_trsType
	int32_t ____trsType_32;

public:
	inline static int32_t get_offset_of_axis_6() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ___axis_6)); }
	inline int32_t get_axis_6() const { return ___axis_6; }
	inline int32_t* get_address_of_axis_6() { return &___axis_6; }
	inline void set_axis_6(int32_t value)
	{
		___axis_6 = value;
	}

	inline static int32_t get_offset_of_showBCL_7() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ___showBCL_7)); }
	inline bool get_showBCL_7() const { return ___showBCL_7; }
	inline bool* get_address_of_showBCL_7() { return &___showBCL_7; }
	inline void set_showBCL_7(bool value)
	{
		___showBCL_7 = value;
	}

	inline static int32_t get_offset_of_expandBCL_8() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ___expandBCL_8)); }
	inline bool get_expandBCL_8() const { return ___expandBCL_8; }
	inline bool* get_address_of_expandBCL_8() { return &___expandBCL_8; }
	inline void set_expandBCL_8(bool value)
	{
		___expandBCL_8 = value;
	}

	inline static int32_t get_offset_of_showEnableToggle_9() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ___showEnableToggle_9)); }
	inline bool get_showEnableToggle_9() const { return ___showEnableToggle_9; }
	inline bool* get_address_of_showEnableToggle_9() { return &___showEnableToggle_9; }
	inline void set_showEnableToggle_9(bool value)
	{
		___showEnableToggle_9 = value;
	}

	inline static int32_t get_offset_of_enabled_10() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ___enabled_10)); }
	inline bool get_enabled_10() const { return ___enabled_10; }
	inline bool* get_address_of_enabled_10() { return &___enabled_10; }
	inline void set_enabled_10(bool value)
	{
		___enabled_10 = value;
	}

	inline static int32_t get_offset_of__accurateCenter_11() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ____accurateCenter_11)); }
	inline bool get__accurateCenter_11() const { return ____accurateCenter_11; }
	inline bool* get_address_of__accurateCenter_11() { return &____accurateCenter_11; }
	inline void set__accurateCenter_11(bool value)
	{
		____accurateCenter_11 = value;
	}

	inline static int32_t get_offset_of_outOfBoundsHandling_12() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ___outOfBoundsHandling_12)); }
	inline int32_t get_outOfBoundsHandling_12() const { return ___outOfBoundsHandling_12; }
	inline int32_t* get_address_of_outOfBoundsHandling_12() { return &___outOfBoundsHandling_12; }
	inline void set_outOfBoundsHandling_12(int32_t value)
	{
		___outOfBoundsHandling_12 = value;
	}

	inline static int32_t get_offset_of_encoder_13() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ___encoder_13)); }
	inline float get_encoder_13() const { return ___encoder_13; }
	inline float* get_address_of_encoder_13() { return &___encoder_13; }
	inline void set_encoder_13(float value)
	{
		___encoder_13 = value;
	}

	inline static int32_t get_offset_of_decoder_14() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ___decoder_14)); }
	inline float get_decoder_14() const { return ___decoder_14; }
	inline float* get_address_of_decoder_14() { return &___decoder_14; }
	inline void set_decoder_14(float value)
	{
		___decoder_14 = value;
	}

	inline static int32_t get_offset_of_actualMin_15() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ___actualMin_15)); }
	inline float get_actualMin_15() const { return ___actualMin_15; }
	inline float* get_address_of_actualMin_15() { return &___actualMin_15; }
	inline void set_actualMin_15(float value)
	{
		___actualMin_15 = value;
	}

	inline static int32_t get_offset_of_actualMax_16() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ___actualMax_16)); }
	inline float get_actualMax_16() const { return ___actualMax_16; }
	inline float* get_address_of_actualMax_16() { return &___actualMax_16; }
	inline void set_actualMax_16(float value)
	{
		___actualMax_16 = value;
	}

	inline static int32_t get_offset_of_masks_17() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ___masks_17)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_masks_17() const { return ___masks_17; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_masks_17() { return &___masks_17; }
	inline void set_masks_17(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___masks_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___masks_17), (void*)value);
	}

	inline static int32_t get_offset_of_wrappoint_18() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ___wrappoint_18)); }
	inline float get_wrappoint_18() const { return ___wrappoint_18; }
	inline float* get_address_of_wrappoint_18() { return &___wrappoint_18; }
	inline void set_wrappoint_18(float value)
	{
		___wrappoint_18 = value;
	}

	inline static int32_t get_offset_of_range_19() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ___range_19)); }
	inline float get_range_19() const { return ___range_19; }
	inline float* get_address_of_range_19() { return &___range_19; }
	inline void set_range_19(float value)
	{
		___range_19 = value;
	}

	inline static int32_t get_offset_of_rotationMaxValue_20() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ___rotationMaxValue_20)); }
	inline float get_rotationMaxValue_20() const { return ___rotationMaxValue_20; }
	inline float* get_address_of_rotationMaxValue_20() { return &___rotationMaxValue_20; }
	inline void set_rotationMaxValue_20(float value)
	{
		___rotationMaxValue_20 = value;
	}

	inline static int32_t get_offset_of_maxEncodedVal_21() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ___maxEncodedVal_21)); }
	inline uint32_t get_maxEncodedVal_21() const { return ___maxEncodedVal_21; }
	inline uint32_t* get_address_of_maxEncodedVal_21() { return &___maxEncodedVal_21; }
	inline void set_maxEncodedVal_21(uint32_t value)
	{
		___maxEncodedVal_21 = value;
	}

	inline static int32_t get_offset_of_centerValue_22() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ___centerValue_22)); }
	inline float get_centerValue_22() const { return ___centerValue_22; }
	inline float* get_address_of_centerValue_22() { return &___centerValue_22; }
	inline void set_centerValue_22(float value)
	{
		___centerValue_22 = value;
	}

	inline static int32_t get_offset_of_centerEncodedValue_23() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ___centerEncodedValue_23)); }
	inline uint32_t get_centerEncodedValue_23() const { return ___centerEncodedValue_23; }
	inline uint32_t* get_address_of_centerEncodedValue_23() { return &___centerEncodedValue_23; }
	inline void set_centerEncodedValue_23(uint32_t value)
	{
		___centerEncodedValue_23 = value;
	}

	inline static int32_t get_offset_of__limitRange_24() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ____limitRange_24)); }
	inline bool get__limitRange_24() const { return ____limitRange_24; }
	inline bool* get_address_of__limitRange_24() { return &____limitRange_24; }
	inline void set__limitRange_24(bool value)
	{
		____limitRange_24 = value;
	}

	inline static int32_t get_offset_of__useHalfRangeX_25() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ____useHalfRangeX_25)); }
	inline bool get__useHalfRangeX_25() const { return ____useHalfRangeX_25; }
	inline bool* get_address_of__useHalfRangeX_25() { return &____useHalfRangeX_25; }
	inline void set__useHalfRangeX_25(bool value)
	{
		____useHalfRangeX_25 = value;
	}

	inline static int32_t get_offset_of__bitsDeterminedBy_26() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ____bitsDeterminedBy_26)); }
	inline int32_t get__bitsDeterminedBy_26() const { return ____bitsDeterminedBy_26; }
	inline int32_t* get_address_of__bitsDeterminedBy_26() { return &____bitsDeterminedBy_26; }
	inline void set__bitsDeterminedBy_26(int32_t value)
	{
		____bitsDeterminedBy_26 = value;
	}

	inline static int32_t get_offset_of__bits_27() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ____bits_27)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__bits_27() const { return ____bits_27; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__bits_27() { return &____bits_27; }
	inline void set__bits_27(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____bits_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bits_27), (void*)value);
	}

	inline static int32_t get_offset_of__min_28() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ____min_28)); }
	inline float get__min_28() const { return ____min_28; }
	inline float* get_address_of__min_28() { return &____min_28; }
	inline void set__min_28(float value)
	{
		____min_28 = value;
	}

	inline static int32_t get_offset_of__max_29() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ____max_29)); }
	inline float get__max_29() const { return ____max_29; }
	inline float* get_address_of__max_29() { return &____max_29; }
	inline void set__max_29(float value)
	{
		____max_29 = value;
	}

	inline static int32_t get_offset_of__resolution_30() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ____resolution_30)); }
	inline uint64_t get__resolution_30() const { return ____resolution_30; }
	inline uint64_t* get_address_of__resolution_30() { return &____resolution_30; }
	inline void set__resolution_30(uint64_t value)
	{
		____resolution_30 = value;
	}

	inline static int32_t get_offset_of__precision_31() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ____precision_31)); }
	inline float get__precision_31() const { return ____precision_31; }
	inline float* get_address_of__precision_31() { return &____precision_31; }
	inline void set__precision_31(float value)
	{
		____precision_31 = value;
	}

	inline static int32_t get_offset_of__trsType_32() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195, ____trsType_32)); }
	inline int32_t get__trsType_32() const { return ____trsType_32; }
	inline int32_t* get_address_of__trsType_32() { return &____trsType_32; }
	inline void set__trsType_32(int32_t value)
	{
		____trsType_32 = value;
	}
};

struct FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,emotitron.Compression.FloatCrusher> emotitron.Compression.FloatCrusher::staticFloatCrushers
	Dictionary_2_t7268E0119DE405638D84686C47611C561EFE9F13 * ___staticFloatCrushers_3;
	// emotitron.Compression.FloatCrusher emotitron.Compression.FloatCrusher::defaultUncompressedCrusher
	FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * ___defaultUncompressedCrusher_4;
	// emotitron.Compression.FloatCrusher emotitron.Compression.FloatCrusher::defaulHalfFloatCrusher
	FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * ___defaulHalfFloatCrusher_5;

public:
	inline static int32_t get_offset_of_staticFloatCrushers_3() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195_StaticFields, ___staticFloatCrushers_3)); }
	inline Dictionary_2_t7268E0119DE405638D84686C47611C561EFE9F13 * get_staticFloatCrushers_3() const { return ___staticFloatCrushers_3; }
	inline Dictionary_2_t7268E0119DE405638D84686C47611C561EFE9F13 ** get_address_of_staticFloatCrushers_3() { return &___staticFloatCrushers_3; }
	inline void set_staticFloatCrushers_3(Dictionary_2_t7268E0119DE405638D84686C47611C561EFE9F13 * value)
	{
		___staticFloatCrushers_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___staticFloatCrushers_3), (void*)value);
	}

	inline static int32_t get_offset_of_defaultUncompressedCrusher_4() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195_StaticFields, ___defaultUncompressedCrusher_4)); }
	inline FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * get_defaultUncompressedCrusher_4() const { return ___defaultUncompressedCrusher_4; }
	inline FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 ** get_address_of_defaultUncompressedCrusher_4() { return &___defaultUncompressedCrusher_4; }
	inline void set_defaultUncompressedCrusher_4(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * value)
	{
		___defaultUncompressedCrusher_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultUncompressedCrusher_4), (void*)value);
	}

	inline static int32_t get_offset_of_defaulHalfFloatCrusher_5() { return static_cast<int32_t>(offsetof(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195_StaticFields, ___defaulHalfFloatCrusher_5)); }
	inline FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * get_defaulHalfFloatCrusher_5() const { return ___defaulHalfFloatCrusher_5; }
	inline FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 ** get_address_of_defaulHalfFloatCrusher_5() { return &___defaulHalfFloatCrusher_5; }
	inline void set_defaulHalfFloatCrusher_5(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * value)
	{
		___defaulHalfFloatCrusher_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaulHalfFloatCrusher_5), (void*)value);
	}
};


// Photon.Pun.Simple.FrameBase
struct  FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.Simple.FrameBase::frameId
	int32_t ___frameId_0;
	// Photon.Pun.Simple.FrameContents Photon.Pun.Simple.FrameBase::content
	int32_t ___content_1;

public:
	inline static int32_t get_offset_of_frameId_0() { return static_cast<int32_t>(offsetof(FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6, ___frameId_0)); }
	inline int32_t get_frameId_0() const { return ___frameId_0; }
	inline int32_t* get_address_of_frameId_0() { return &___frameId_0; }
	inline void set_frameId_0(int32_t value)
	{
		___frameId_0 = value;
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6, ___content_1)); }
	inline int32_t get_content_1() const { return ___content_1; }
	inline int32_t* get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(int32_t value)
	{
		___content_1 = value;
	}
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// Photon.Utilities.SmartVar
struct  SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Photon.Utilities.SmartVarTypeCode Photon.Utilities.SmartVar::TypeCode
			int32_t ___TypeCode_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___TypeCode_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Int_1_OffsetPadding[4];
			// System.Int32 Photon.Utilities.SmartVar::Int
			int32_t ___Int_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Int_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___Int_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt_2_OffsetPadding[4];
			// System.UInt32 Photon.Utilities.SmartVar::UInt
			uint32_t ___UInt_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt_2_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Bool_3_OffsetPadding[4];
			// System.Boolean Photon.Utilities.SmartVar::Bool
			bool ___Bool_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Bool_3_OffsetPadding_forAlignmentOnly[4];
			bool ___Bool_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float_4_OffsetPadding[4];
			// System.Single Photon.Utilities.SmartVar::Float
			float ___Float_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float_4_OffsetPadding_forAlignmentOnly[4];
			float ___Float_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_5_OffsetPadding[4];
			// System.Byte Photon.Utilities.SmartVar::Byte8
			uint8_t ___Byte8_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_5_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte8_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Short_6_OffsetPadding[4];
			// System.Int16 Photon.Utilities.SmartVar::Short
			int16_t ___Short_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Short_6_OffsetPadding_forAlignmentOnly[4];
			int16_t ___Short_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort_7_OffsetPadding[4];
			// System.UInt16 Photon.Utilities.SmartVar::UShort
			uint16_t ___UShort_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort_7_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Char_8_OffsetPadding[4];
			// System.Char Photon.Utilities.SmartVar::Char
			Il2CppChar ___Char_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Char_8_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___Char_8_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_TypeCode_0() { return static_cast<int32_t>(offsetof(SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7, ___TypeCode_0)); }
	inline int32_t get_TypeCode_0() const { return ___TypeCode_0; }
	inline int32_t* get_address_of_TypeCode_0() { return &___TypeCode_0; }
	inline void set_TypeCode_0(int32_t value)
	{
		___TypeCode_0 = value;
	}

	inline static int32_t get_offset_of_Int_1() { return static_cast<int32_t>(offsetof(SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7, ___Int_1)); }
	inline int32_t get_Int_1() const { return ___Int_1; }
	inline int32_t* get_address_of_Int_1() { return &___Int_1; }
	inline void set_Int_1(int32_t value)
	{
		___Int_1 = value;
	}

	inline static int32_t get_offset_of_UInt_2() { return static_cast<int32_t>(offsetof(SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7, ___UInt_2)); }
	inline uint32_t get_UInt_2() const { return ___UInt_2; }
	inline uint32_t* get_address_of_UInt_2() { return &___UInt_2; }
	inline void set_UInt_2(uint32_t value)
	{
		___UInt_2 = value;
	}

	inline static int32_t get_offset_of_Bool_3() { return static_cast<int32_t>(offsetof(SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7, ___Bool_3)); }
	inline bool get_Bool_3() const { return ___Bool_3; }
	inline bool* get_address_of_Bool_3() { return &___Bool_3; }
	inline void set_Bool_3(bool value)
	{
		___Bool_3 = value;
	}

	inline static int32_t get_offset_of_Float_4() { return static_cast<int32_t>(offsetof(SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7, ___Float_4)); }
	inline float get_Float_4() const { return ___Float_4; }
	inline float* get_address_of_Float_4() { return &___Float_4; }
	inline void set_Float_4(float value)
	{
		___Float_4 = value;
	}

	inline static int32_t get_offset_of_Byte8_5() { return static_cast<int32_t>(offsetof(SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7, ___Byte8_5)); }
	inline uint8_t get_Byte8_5() const { return ___Byte8_5; }
	inline uint8_t* get_address_of_Byte8_5() { return &___Byte8_5; }
	inline void set_Byte8_5(uint8_t value)
	{
		___Byte8_5 = value;
	}

	inline static int32_t get_offset_of_Short_6() { return static_cast<int32_t>(offsetof(SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7, ___Short_6)); }
	inline int16_t get_Short_6() const { return ___Short_6; }
	inline int16_t* get_address_of_Short_6() { return &___Short_6; }
	inline void set_Short_6(int16_t value)
	{
		___Short_6 = value;
	}

	inline static int32_t get_offset_of_UShort_7() { return static_cast<int32_t>(offsetof(SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7, ___UShort_7)); }
	inline uint16_t get_UShort_7() const { return ___UShort_7; }
	inline uint16_t* get_address_of_UShort_7() { return &___UShort_7; }
	inline void set_UShort_7(uint16_t value)
	{
		___UShort_7 = value;
	}

	inline static int32_t get_offset_of_Char_8() { return static_cast<int32_t>(offsetof(SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7, ___Char_8)); }
	inline Il2CppChar get_Char_8() const { return ___Char_8; }
	inline Il2CppChar* get_address_of_Char_8() { return &___Char_8; }
	inline void set_Char_8(Il2CppChar value)
	{
		___Char_8 = value;
	}
};

struct SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7_StaticFields
{
public:
	// Photon.Utilities.SmartVar Photon.Utilities.SmartVar::None
	SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7  ___None_9;

public:
	inline static int32_t get_offset_of_None_9() { return static_cast<int32_t>(offsetof(SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7_StaticFields, ___None_9)); }
	inline SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7  get_None_9() const { return ___None_9; }
	inline SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7 * get_address_of_None_9() { return &___None_9; }
	inline void set_None_9(SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7  value)
	{
		___None_9 = value;
	}
};

// Native definition for P/Invoke marshalling of Photon.Utilities.SmartVar
struct SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___TypeCode_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___TypeCode_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Int_1_OffsetPadding[4];
			int32_t ___Int_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Int_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___Int_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt_2_OffsetPadding[4];
			uint32_t ___UInt_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt_2_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Bool_3_OffsetPadding[4];
			int32_t ___Bool_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Bool_3_OffsetPadding_forAlignmentOnly[4];
			int32_t ___Bool_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float_4_OffsetPadding[4];
			float ___Float_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float_4_OffsetPadding_forAlignmentOnly[4];
			float ___Float_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_5_OffsetPadding[4];
			uint8_t ___Byte8_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_5_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte8_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Short_6_OffsetPadding[4];
			int16_t ___Short_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Short_6_OffsetPadding_forAlignmentOnly[4];
			int16_t ___Short_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort_7_OffsetPadding[4];
			uint16_t ___UShort_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort_7_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Char_8_OffsetPadding[4];
			uint8_t ___Char_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Char_8_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Char_8_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of Photon.Utilities.SmartVar
struct SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___TypeCode_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___TypeCode_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Int_1_OffsetPadding[4];
			int32_t ___Int_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Int_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___Int_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt_2_OffsetPadding[4];
			uint32_t ___UInt_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt_2_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Bool_3_OffsetPadding[4];
			int32_t ___Bool_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Bool_3_OffsetPadding_forAlignmentOnly[4];
			int32_t ___Bool_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float_4_OffsetPadding[4];
			float ___Float_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float_4_OffsetPadding_forAlignmentOnly[4];
			float ___Float_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_5_OffsetPadding[4];
			uint8_t ___Byte8_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_5_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte8_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Short_6_OffsetPadding[4];
			int16_t ___Short_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Short_6_OffsetPadding_forAlignmentOnly[4];
			int16_t ___Short_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort_7_OffsetPadding[4];
			uint16_t ___UShort_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort_7_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Char_8_OffsetPadding[4];
			uint8_t ___Char_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Char_8_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Char_8_forAlignmentOnly;
		};
	};
};

// Photon.Pun.Simple.StateChangeInfo
struct  StateChangeInfo_t488DBF913F0D275D386E94764E155DAF09A16D28 
{
public:
	// Photon.Pun.Simple.ObjState Photon.Pun.Simple.StateChangeInfo::objState
	int32_t ___objState_0;
	// Photon.Pun.Simple.Mount Photon.Pun.Simple.StateChangeInfo::mount
	Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3 * ___mount_1;
	// System.Nullable`1<UnityEngine.Vector3> Photon.Pun.Simple.StateChangeInfo::offsetPos
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___offsetPos_2;
	// System.Nullable`1<UnityEngine.Quaternion> Photon.Pun.Simple.StateChangeInfo::offsetRot
	Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  ___offsetRot_3;
	// System.Nullable`1<UnityEngine.Vector3> Photon.Pun.Simple.StateChangeInfo::velocity
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___velocity_4;
	// System.Boolean Photon.Pun.Simple.StateChangeInfo::force
	bool ___force_5;

public:
	inline static int32_t get_offset_of_objState_0() { return static_cast<int32_t>(offsetof(StateChangeInfo_t488DBF913F0D275D386E94764E155DAF09A16D28, ___objState_0)); }
	inline int32_t get_objState_0() const { return ___objState_0; }
	inline int32_t* get_address_of_objState_0() { return &___objState_0; }
	inline void set_objState_0(int32_t value)
	{
		___objState_0 = value;
	}

	inline static int32_t get_offset_of_mount_1() { return static_cast<int32_t>(offsetof(StateChangeInfo_t488DBF913F0D275D386E94764E155DAF09A16D28, ___mount_1)); }
	inline Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3 * get_mount_1() const { return ___mount_1; }
	inline Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3 ** get_address_of_mount_1() { return &___mount_1; }
	inline void set_mount_1(Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3 * value)
	{
		___mount_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mount_1), (void*)value);
	}

	inline static int32_t get_offset_of_offsetPos_2() { return static_cast<int32_t>(offsetof(StateChangeInfo_t488DBF913F0D275D386E94764E155DAF09A16D28, ___offsetPos_2)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_offsetPos_2() const { return ___offsetPos_2; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_offsetPos_2() { return &___offsetPos_2; }
	inline void set_offsetPos_2(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___offsetPos_2 = value;
	}

	inline static int32_t get_offset_of_offsetRot_3() { return static_cast<int32_t>(offsetof(StateChangeInfo_t488DBF913F0D275D386E94764E155DAF09A16D28, ___offsetRot_3)); }
	inline Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  get_offsetRot_3() const { return ___offsetRot_3; }
	inline Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1 * get_address_of_offsetRot_3() { return &___offsetRot_3; }
	inline void set_offsetRot_3(Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  value)
	{
		___offsetRot_3 = value;
	}

	inline static int32_t get_offset_of_velocity_4() { return static_cast<int32_t>(offsetof(StateChangeInfo_t488DBF913F0D275D386E94764E155DAF09A16D28, ___velocity_4)); }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  get_velocity_4() const { return ___velocity_4; }
	inline Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258 * get_address_of_velocity_4() { return &___velocity_4; }
	inline void set_velocity_4(Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  value)
	{
		___velocity_4 = value;
	}

	inline static int32_t get_offset_of_force_5() { return static_cast<int32_t>(offsetof(StateChangeInfo_t488DBF913F0D275D386E94764E155DAF09A16D28, ___force_5)); }
	inline bool get_force_5() const { return ___force_5; }
	inline bool* get_address_of_force_5() { return &___force_5; }
	inline void set_force_5(bool value)
	{
		___force_5 = value;
	}
};

// Native definition for P/Invoke marshalling of Photon.Pun.Simple.StateChangeInfo
struct StateChangeInfo_t488DBF913F0D275D386E94764E155DAF09A16D28_marshaled_pinvoke
{
	int32_t ___objState_0;
	Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3 * ___mount_1;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___offsetPos_2;
	Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  ___offsetRot_3;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___velocity_4;
	int32_t ___force_5;
};
// Native definition for COM marshalling of Photon.Pun.Simple.StateChangeInfo
struct StateChangeInfo_t488DBF913F0D275D386E94764E155DAF09A16D28_marshaled_com
{
	int32_t ___objState_0;
	Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3 * ___mount_1;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___offsetPos_2;
	Nullable_1_tD696E865843136E8D2141FD179BA7F088A4D8BA1  ___offsetRot_3;
	Nullable_1_t1829213F3538788DF79B4659AFC9D6A9C90C3258  ___velocity_4;
	int32_t ___force_5;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Photon.Pun.Simple.VitalNameType
struct  VitalNameType_tBD6CE2BA5A56EBB8D1B36A3D37CD2141BE313777 
{
public:
	// Photon.Pun.Simple.VitalType Photon.Pun.Simple.VitalNameType::type
	int32_t ___type_0;
	// System.Int32 Photon.Pun.Simple.VitalNameType::hash
	int32_t ___hash_1;
	// System.String Photon.Pun.Simple.VitalNameType::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(VitalNameType_tBD6CE2BA5A56EBB8D1B36A3D37CD2141BE313777, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(VitalNameType_tBD6CE2BA5A56EBB8D1B36A3D37CD2141BE313777, ___hash_1)); }
	inline int32_t get_hash_1() const { return ___hash_1; }
	inline int32_t* get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(int32_t value)
	{
		___hash_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(VitalNameType_tBD6CE2BA5A56EBB8D1B36A3D37CD2141BE313777, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}
};

struct VitalNameType_tBD6CE2BA5A56EBB8D1B36A3D37CD2141BE313777_StaticFields
{
public:
	// System.String[] Photon.Pun.Simple.VitalNameType::enumNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___enumNames_3;

public:
	inline static int32_t get_offset_of_enumNames_3() { return static_cast<int32_t>(offsetof(VitalNameType_tBD6CE2BA5A56EBB8D1B36A3D37CD2141BE313777_StaticFields, ___enumNames_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_enumNames_3() const { return ___enumNames_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_enumNames_3() { return &___enumNames_3; }
	inline void set_enumNames_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___enumNames_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumNames_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Photon.Pun.Simple.VitalNameType
struct VitalNameType_tBD6CE2BA5A56EBB8D1B36A3D37CD2141BE313777_marshaled_pinvoke
{
	int32_t ___type_0;
	int32_t ___hash_1;
	char* ___name_2;
};
// Native definition for COM marshalling of Photon.Pun.Simple.VitalNameType
struct VitalNameType_tBD6CE2BA5A56EBB8D1B36A3D37CD2141BE313777_marshaled_com
{
	int32_t ___type_0;
	int32_t ___hash_1;
	Il2CppChar* ___name_2;
};

// Photon.Compression.WorldBoundsGroup
struct  WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD  : public RuntimeObject
{
public:
	// System.String Photon.Compression.WorldBoundsGroup::name
	String_t* ___name_2;
	// System.Action Photon.Compression.WorldBoundsGroup::OnWorldBoundChanged
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnWorldBoundChanged_3;
	// Photon.Compression.ElementCrusher Photon.Compression.WorldBoundsGroup::crusher
	ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * ___crusher_4;
	// System.Collections.Generic.List`1<Photon.Compression.WorldBounds> Photon.Compression.WorldBoundsGroup::activeWorldBounds
	List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * ___activeWorldBounds_5;
	// UnityEngine.Bounds Photon.Compression.WorldBoundsGroup::_combinedWorldBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ____combinedWorldBounds_6;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnWorldBoundChanged_3() { return static_cast<int32_t>(offsetof(WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD, ___OnWorldBoundChanged_3)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnWorldBoundChanged_3() const { return ___OnWorldBoundChanged_3; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnWorldBoundChanged_3() { return &___OnWorldBoundChanged_3; }
	inline void set_OnWorldBoundChanged_3(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnWorldBoundChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnWorldBoundChanged_3), (void*)value);
	}

	inline static int32_t get_offset_of_crusher_4() { return static_cast<int32_t>(offsetof(WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD, ___crusher_4)); }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * get_crusher_4() const { return ___crusher_4; }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 ** get_address_of_crusher_4() { return &___crusher_4; }
	inline void set_crusher_4(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * value)
	{
		___crusher_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crusher_4), (void*)value);
	}

	inline static int32_t get_offset_of_activeWorldBounds_5() { return static_cast<int32_t>(offsetof(WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD, ___activeWorldBounds_5)); }
	inline List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * get_activeWorldBounds_5() const { return ___activeWorldBounds_5; }
	inline List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 ** get_address_of_activeWorldBounds_5() { return &___activeWorldBounds_5; }
	inline void set_activeWorldBounds_5(List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * value)
	{
		___activeWorldBounds_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeWorldBounds_5), (void*)value);
	}

	inline static int32_t get_offset_of__combinedWorldBounds_6() { return static_cast<int32_t>(offsetof(WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD, ____combinedWorldBounds_6)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get__combinedWorldBounds_6() const { return ____combinedWorldBounds_6; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of__combinedWorldBounds_6() { return &____combinedWorldBounds_6; }
	inline void set__combinedWorldBounds_6(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		____combinedWorldBounds_6 = value;
	}
};


// Photon.Pun.Simple.AutoOwnerComponentEnable/ComponentToggle
struct  ComponentToggle_t19355028B5557A61196C9BFD472874316F5D3771  : public RuntimeObject
{
public:
	// UnityEngine.Behaviour Photon.Pun.Simple.AutoOwnerComponentEnable/ComponentToggle::component
	Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * ___component_0;
	// Photon.Pun.Simple.AutoOwnerComponentEnable/EnableIf Photon.Pun.Simple.AutoOwnerComponentEnable/ComponentToggle::enableIfOwned
	int32_t ___enableIfOwned_1;

public:
	inline static int32_t get_offset_of_component_0() { return static_cast<int32_t>(offsetof(ComponentToggle_t19355028B5557A61196C9BFD472874316F5D3771, ___component_0)); }
	inline Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * get_component_0() const { return ___component_0; }
	inline Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 ** get_address_of_component_0() { return &___component_0; }
	inline void set_component_0(Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * value)
	{
		___component_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___component_0), (void*)value);
	}

	inline static int32_t get_offset_of_enableIfOwned_1() { return static_cast<int32_t>(offsetof(ComponentToggle_t19355028B5557A61196C9BFD472874316F5D3771, ___enableIfOwned_1)); }
	inline int32_t get_enableIfOwned_1() const { return ___enableIfOwned_1; }
	inline int32_t* get_address_of_enableIfOwned_1() { return &___enableIfOwned_1; }
	inline void set_enableIfOwned_1(int32_t value)
	{
		___enableIfOwned_1 = value;
	}
};


// Photon.Pun.Simple.SyncContact/ContactRecord
struct  ContactRecord_tF317CB14AD69AF5461EA5C4ACD8670E0E93593B3 
{
public:
	// Photon.Pun.Simple.ContactType Photon.Pun.Simple.SyncContact/ContactRecord::contactType
	int32_t ___contactType_0;
	// System.Int32 Photon.Pun.Simple.SyncContact/ContactRecord::contactSystemViewID
	int32_t ___contactSystemViewID_1;
	// System.Byte Photon.Pun.Simple.SyncContact/ContactRecord::contactSystemIndex
	uint8_t ___contactSystemIndex_2;

public:
	inline static int32_t get_offset_of_contactType_0() { return static_cast<int32_t>(offsetof(ContactRecord_tF317CB14AD69AF5461EA5C4ACD8670E0E93593B3, ___contactType_0)); }
	inline int32_t get_contactType_0() const { return ___contactType_0; }
	inline int32_t* get_address_of_contactType_0() { return &___contactType_0; }
	inline void set_contactType_0(int32_t value)
	{
		___contactType_0 = value;
	}

	inline static int32_t get_offset_of_contactSystemViewID_1() { return static_cast<int32_t>(offsetof(ContactRecord_tF317CB14AD69AF5461EA5C4ACD8670E0E93593B3, ___contactSystemViewID_1)); }
	inline int32_t get_contactSystemViewID_1() const { return ___contactSystemViewID_1; }
	inline int32_t* get_address_of_contactSystemViewID_1() { return &___contactSystemViewID_1; }
	inline void set_contactSystemViewID_1(int32_t value)
	{
		___contactSystemViewID_1 = value;
	}

	inline static int32_t get_offset_of_contactSystemIndex_2() { return static_cast<int32_t>(offsetof(ContactRecord_tF317CB14AD69AF5461EA5C4ACD8670E0E93593B3, ___contactSystemIndex_2)); }
	inline uint8_t get_contactSystemIndex_2() const { return ___contactSystemIndex_2; }
	inline uint8_t* get_address_of_contactSystemIndex_2() { return &___contactSystemIndex_2; }
	inline void set_contactSystemIndex_2(uint8_t value)
	{
		___contactSystemIndex_2 = value;
	}
};


// Photon.Pun.Simple.SyncNodeMover/TRSDefinition
struct  TRSDefinition_t7AB112AB7E41F74FC1381E91252ECF00771BB73A  : public TRSDefinitionBase_tA35EC340AFCB457FF024098F1AF0D59BCB6803D0
{
public:
	// Photon.Pun.Simple.AxisMask Photon.Pun.Simple.SyncNodeMover/TRSDefinition::includeAxes
	int32_t ___includeAxes_1;
	// Photon.Pun.Simple.SyncMoverBase`2/MovementRelation<Photon.Pun.Simple.SyncNodeMover/TRSDefinition,Photon.Pun.Simple.SyncNodeMover/Frame> Photon.Pun.Simple.SyncNodeMover/TRSDefinition::relation
	int32_t ___relation_2;

public:
	inline static int32_t get_offset_of_includeAxes_1() { return static_cast<int32_t>(offsetof(TRSDefinition_t7AB112AB7E41F74FC1381E91252ECF00771BB73A, ___includeAxes_1)); }
	inline int32_t get_includeAxes_1() const { return ___includeAxes_1; }
	inline int32_t* get_address_of_includeAxes_1() { return &___includeAxes_1; }
	inline void set_includeAxes_1(int32_t value)
	{
		___includeAxes_1 = value;
	}

	inline static int32_t get_offset_of_relation_2() { return static_cast<int32_t>(offsetof(TRSDefinition_t7AB112AB7E41F74FC1381E91252ECF00771BB73A, ___relation_2)); }
	inline int32_t get_relation_2() const { return ___relation_2; }
	inline int32_t* get_address_of_relation_2() { return &___relation_2; }
	inline void set_relation_2(int32_t value)
	{
		___relation_2 = value;
	}
};


// System.Action`2<System.IntPtr,Photon.Compression.Internal.PackFrame>
struct  Action_2_t3BBD0274AE0477407194AFAB3B4A2BCF40A71D34  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Object,Photon.Compression.Internal.PackFrame>
struct  Action_2_t95F7CF1C13BE7A0EDC1E168451664D3C076A6841  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<Photon.Compression.Internal.PackFrame,Photon.Compression.Internal.PackFrame>
struct  Action_2_tF543EB1BE063AA2C4C189F907F108085AB479B7F  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<Photon.Compression.Internal.PackFrame>
struct  Func_1_tECC97AE5F89F601DA79D6BC94EAF1009936D779A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.IntPtr,System.Int32,Photon.Compression.Internal.PackFrame[]>
struct  Func_3_t538E2B68E7ADDFCA0958C78B3C54B131BE1FBD73  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`3<System.Object,System.Int32,Photon.Compression.Internal.PackFrame[]>
struct  Func_3_t06730F225B5B2A45E2D85A198E9DEEBD7940C673  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Photon.Compression.Matrix
struct  Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D  : public RuntimeObject
{
public:
	// Photon.Compression.TransformCrusher Photon.Compression.Matrix::crusher
	TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8 * ___crusher_0;
	// UnityEngine.Vector3 Photon.Compression.Matrix::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// Photon.Compression.Element Photon.Compression.Matrix::rotation
	Element_t3B6173E3F02244D529DFB937B971A87F1CEEECB5  ___rotation_2;
	// UnityEngine.Vector3 Photon.Compression.Matrix::scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_3;

public:
	inline static int32_t get_offset_of_crusher_0() { return static_cast<int32_t>(offsetof(Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D, ___crusher_0)); }
	inline TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8 * get_crusher_0() const { return ___crusher_0; }
	inline TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8 ** get_address_of_crusher_0() { return &___crusher_0; }
	inline void set_crusher_0(TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8 * value)
	{
		___crusher_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crusher_0), (void*)value);
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D, ___rotation_2)); }
	inline Element_t3B6173E3F02244D529DFB937B971A87F1CEEECB5  get_rotation_2() const { return ___rotation_2; }
	inline Element_t3B6173E3F02244D529DFB937B971A87F1CEEECB5 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Element_t3B6173E3F02244D529DFB937B971A87F1CEEECB5  value)
	{
		___rotation_2 = value;
	}

	inline static int32_t get_offset_of_scale_3() { return static_cast<int32_t>(offsetof(Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D, ___scale_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scale_3() const { return ___scale_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scale_3() { return &___scale_3; }
	inline void set_scale_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scale_3 = value;
	}
};

struct Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D_StaticFields
{
public:
	// Photon.Compression.Matrix Photon.Compression.Matrix::reusable
	Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * ___reusable_4;

public:
	inline static int32_t get_offset_of_reusable_4() { return static_cast<int32_t>(offsetof(Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D_StaticFields, ___reusable_4)); }
	inline Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * get_reusable_4() const { return ___reusable_4; }
	inline Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D ** get_address_of_reusable_4() { return &___reusable_4; }
	inline void set_reusable_4(Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * value)
	{
		___reusable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reusable_4), (void*)value);
	}
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Photon.Pun.Simple.Internal.ParameterSettings
struct  ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C  : public RuntimeObject
{
public:
	// System.Int32 Photon.Pun.Simple.Internal.ParameterSettings::hash
	int32_t ___hash_0;
	// UnityEngine.AnimatorControllerParameterType Photon.Pun.Simple.Internal.ParameterSettings::paramType
	int32_t ___paramType_1;
	// System.Boolean Photon.Pun.Simple.Internal.ParameterSettings::include
	bool ___include_2;
	// Photon.Pun.Simple.Internal.ParameterInterpolation Photon.Pun.Simple.Internal.ParameterSettings::interpolate
	int32_t ___interpolate_3;
	// Photon.Pun.Simple.Internal.ParameterExtrapolation Photon.Pun.Simple.Internal.ParameterSettings::extrapolate
	int32_t ___extrapolate_4;
	// Photon.Utilities.SmartVar Photon.Pun.Simple.Internal.ParameterSettings::defaultValue
	SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7  ___defaultValue_5;
	// Photon.Compression.LiteFloatCrusher Photon.Pun.Simple.Internal.ParameterSettings::fcrusher
	LiteFloatCrusher_t39A2E93378C418A578638EF3626FE3DF1C9F1CCA * ___fcrusher_6;
	// Photon.Compression.LiteIntCrusher Photon.Pun.Simple.Internal.ParameterSettings::icrusher
	LiteIntCrusher_t1D74BE68FE53AB72435EE8F2A8C6D4F78EC9028F * ___icrusher_7;

public:
	inline static int32_t get_offset_of_hash_0() { return static_cast<int32_t>(offsetof(ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C, ___hash_0)); }
	inline int32_t get_hash_0() const { return ___hash_0; }
	inline int32_t* get_address_of_hash_0() { return &___hash_0; }
	inline void set_hash_0(int32_t value)
	{
		___hash_0 = value;
	}

	inline static int32_t get_offset_of_paramType_1() { return static_cast<int32_t>(offsetof(ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C, ___paramType_1)); }
	inline int32_t get_paramType_1() const { return ___paramType_1; }
	inline int32_t* get_address_of_paramType_1() { return &___paramType_1; }
	inline void set_paramType_1(int32_t value)
	{
		___paramType_1 = value;
	}

	inline static int32_t get_offset_of_include_2() { return static_cast<int32_t>(offsetof(ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C, ___include_2)); }
	inline bool get_include_2() const { return ___include_2; }
	inline bool* get_address_of_include_2() { return &___include_2; }
	inline void set_include_2(bool value)
	{
		___include_2 = value;
	}

	inline static int32_t get_offset_of_interpolate_3() { return static_cast<int32_t>(offsetof(ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C, ___interpolate_3)); }
	inline int32_t get_interpolate_3() const { return ___interpolate_3; }
	inline int32_t* get_address_of_interpolate_3() { return &___interpolate_3; }
	inline void set_interpolate_3(int32_t value)
	{
		___interpolate_3 = value;
	}

	inline static int32_t get_offset_of_extrapolate_4() { return static_cast<int32_t>(offsetof(ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C, ___extrapolate_4)); }
	inline int32_t get_extrapolate_4() const { return ___extrapolate_4; }
	inline int32_t* get_address_of_extrapolate_4() { return &___extrapolate_4; }
	inline void set_extrapolate_4(int32_t value)
	{
		___extrapolate_4 = value;
	}

	inline static int32_t get_offset_of_defaultValue_5() { return static_cast<int32_t>(offsetof(ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C, ___defaultValue_5)); }
	inline SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7  get_defaultValue_5() const { return ___defaultValue_5; }
	inline SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7 * get_address_of_defaultValue_5() { return &___defaultValue_5; }
	inline void set_defaultValue_5(SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7  value)
	{
		___defaultValue_5 = value;
	}

	inline static int32_t get_offset_of_fcrusher_6() { return static_cast<int32_t>(offsetof(ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C, ___fcrusher_6)); }
	inline LiteFloatCrusher_t39A2E93378C418A578638EF3626FE3DF1C9F1CCA * get_fcrusher_6() const { return ___fcrusher_6; }
	inline LiteFloatCrusher_t39A2E93378C418A578638EF3626FE3DF1C9F1CCA ** get_address_of_fcrusher_6() { return &___fcrusher_6; }
	inline void set_fcrusher_6(LiteFloatCrusher_t39A2E93378C418A578638EF3626FE3DF1C9F1CCA * value)
	{
		___fcrusher_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fcrusher_6), (void*)value);
	}

	inline static int32_t get_offset_of_icrusher_7() { return static_cast<int32_t>(offsetof(ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C, ___icrusher_7)); }
	inline LiteIntCrusher_t1D74BE68FE53AB72435EE8F2A8C6D4F78EC9028F * get_icrusher_7() const { return ___icrusher_7; }
	inline LiteIntCrusher_t1D74BE68FE53AB72435EE8F2A8C6D4F78EC9028F ** get_address_of_icrusher_7() { return &___icrusher_7; }
	inline void set_icrusher_7(LiteIntCrusher_t1D74BE68FE53AB72435EE8F2A8C6D4F78EC9028F * value)
	{
		___icrusher_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icrusher_7), (void*)value);
	}
};

struct ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Int32> Photon.Pun.Simple.Internal.ParameterSettings::rebuiltHashes
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___rebuiltHashes_8;
	// System.Collections.Generic.List`1<Photon.Pun.Simple.Internal.ParameterSettings> Photon.Pun.Simple.Internal.ParameterSettings::rebuiltSettings
	List_1_tB2B7FCC617C0004836410B5E6DFAC3C14247B7BD * ___rebuiltSettings_9;

public:
	inline static int32_t get_offset_of_rebuiltHashes_8() { return static_cast<int32_t>(offsetof(ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C_StaticFields, ___rebuiltHashes_8)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_rebuiltHashes_8() const { return ___rebuiltHashes_8; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_rebuiltHashes_8() { return &___rebuiltHashes_8; }
	inline void set_rebuiltHashes_8(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___rebuiltHashes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rebuiltHashes_8), (void*)value);
	}

	inline static int32_t get_offset_of_rebuiltSettings_9() { return static_cast<int32_t>(offsetof(ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C_StaticFields, ___rebuiltSettings_9)); }
	inline List_1_tB2B7FCC617C0004836410B5E6DFAC3C14247B7BD * get_rebuiltSettings_9() const { return ___rebuiltSettings_9; }
	inline List_1_tB2B7FCC617C0004836410B5E6DFAC3C14247B7BD ** get_address_of_rebuiltSettings_9() { return &___rebuiltSettings_9; }
	inline void set_rebuiltSettings_9(List_1_tB2B7FCC617C0004836410B5E6DFAC3C14247B7BD * value)
	{
		___rebuiltSettings_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rebuiltSettings_9), (void*)value);
	}
};


// Photon.Utilities.SettingsScriptableObjectBase
struct  SettingsScriptableObjectBase_t7D2A0AF46275A24ABAC455DC70BB5362EEA41DCB  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Photon.Pun.Simple.Internal.NetMsgCallbacks/ByteBufferCallback
struct  ByteBufferCallback_tDD54CEEE46711320B8F59D45F9CF5105314C5F67  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Compression.Internal.PackObjectDatabase/PackCopyFrameToObjectDelegate
struct  PackCopyFrameToObjectDelegate_t95B7573FE460D068CA760B93677C35287C627875  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Compression.Internal.PackObjectDatabase/PackCopyFrameToStructDelegate
struct  PackCopyFrameToStructDelegate_t573C14A226006904036BE25919A2AD8CB5426C89  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Compression.Internal.PackObjectDatabase/PackFrameDelegate
struct  PackFrameDelegate_tA8CEDA0A5574A69DDCD7D3B2EB64D81D467ECEB5  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToFrameDelegate
struct  PackInterpFrameToFrameDelegate_t79504A76CC9567E3DE51FCF808EC6C10F7A46552  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToObjectDelegate
struct  PackInterpFrameToObjectDelegate_t2E0D7FB7E4261BE520E80777598784969124FD90  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToStructDelegate
struct  PackInterpFrameToStructDelegate_t92235466FF0AA7E30B5D1A670FCF4F4D2AD05B66  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Compression.Internal.PackObjectDatabase/PackObjDelegate
struct  PackObjDelegate_t332A1B8D3CD1C8D703869E40888E6FDAF0E14A7E  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Compression.Internal.PackObjectDatabase/PackSnapshotObjectDelegate
struct  PackSnapshotObjectDelegate_t17865965EFA7AFE02A9119950B075CDC6C73D947  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Compression.Internal.PackObjectDatabase/PackSnapshotStructDelegate
struct  PackSnapshotStructDelegate_t4A9815B483E31981CEFFB833299EF1D6892DDC0E  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Compression.Internal.PackObjectDatabase/PackStructDelegate
struct  PackStructDelegate_tC88966D5724D3357D1927A72E199BF45EA336450  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Compression.Internal.PackObjectDatabase/UnpackFrameDelegate
struct  UnpackFrameDelegate_tCF8D77A95A0A923F2ECEC064EAE4465C53D6DFD3  : public MulticastDelegate_t
{
public:

public:
};


// Photon.Pun.Simple.SyncAnimator/Frame
struct  Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB  : public FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6
{
public:
	// Photon.Pun.Simple.SyncAnimator Photon.Pun.Simple.SyncAnimator/Frame::syncAnimator
	SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4 * ___syncAnimator_2;
	// Photon.Utilities.SmartVar[] Photon.Pun.Simple.SyncAnimator/Frame::parameters
	SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE* ___parameters_3;
	// System.Nullable`1<System.Int32>[] Photon.Pun.Simple.SyncAnimator/Frame::stateHashes
	Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* ___stateHashes_4;
	// System.Boolean[] Photon.Pun.Simple.SyncAnimator/Frame::layerIsInTransition
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___layerIsInTransition_5;
	// System.Single[] Photon.Pun.Simple.SyncAnimator/Frame::normalizedTime
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___normalizedTime_6;
	// System.Nullable`1<System.Single>[] Photon.Pun.Simple.SyncAnimator/Frame::layerWeights
	Nullable_1U5BU5D_t02F1C69D15AC8D2407B9D63017EF6E7EC4AD5F94* ___layerWeights_7;
	// System.Collections.Generic.Queue`1<Photon.Pun.Simple.AnimPassThru> Photon.Pun.Simple.SyncAnimator/Frame::passThrus
	Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8 * ___passThrus_8;

public:
	inline static int32_t get_offset_of_syncAnimator_2() { return static_cast<int32_t>(offsetof(Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB, ___syncAnimator_2)); }
	inline SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4 * get_syncAnimator_2() const { return ___syncAnimator_2; }
	inline SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4 ** get_address_of_syncAnimator_2() { return &___syncAnimator_2; }
	inline void set_syncAnimator_2(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4 * value)
	{
		___syncAnimator_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncAnimator_2), (void*)value);
	}

	inline static int32_t get_offset_of_parameters_3() { return static_cast<int32_t>(offsetof(Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB, ___parameters_3)); }
	inline SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE* get_parameters_3() const { return ___parameters_3; }
	inline SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE** get_address_of_parameters_3() { return &___parameters_3; }
	inline void set_parameters_3(SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE* value)
	{
		___parameters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parameters_3), (void*)value);
	}

	inline static int32_t get_offset_of_stateHashes_4() { return static_cast<int32_t>(offsetof(Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB, ___stateHashes_4)); }
	inline Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* get_stateHashes_4() const { return ___stateHashes_4; }
	inline Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84** get_address_of_stateHashes_4() { return &___stateHashes_4; }
	inline void set_stateHashes_4(Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* value)
	{
		___stateHashes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateHashes_4), (void*)value);
	}

	inline static int32_t get_offset_of_layerIsInTransition_5() { return static_cast<int32_t>(offsetof(Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB, ___layerIsInTransition_5)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_layerIsInTransition_5() const { return ___layerIsInTransition_5; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_layerIsInTransition_5() { return &___layerIsInTransition_5; }
	inline void set_layerIsInTransition_5(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___layerIsInTransition_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layerIsInTransition_5), (void*)value);
	}

	inline static int32_t get_offset_of_normalizedTime_6() { return static_cast<int32_t>(offsetof(Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB, ___normalizedTime_6)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_normalizedTime_6() const { return ___normalizedTime_6; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_normalizedTime_6() { return &___normalizedTime_6; }
	inline void set_normalizedTime_6(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___normalizedTime_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normalizedTime_6), (void*)value);
	}

	inline static int32_t get_offset_of_layerWeights_7() { return static_cast<int32_t>(offsetof(Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB, ___layerWeights_7)); }
	inline Nullable_1U5BU5D_t02F1C69D15AC8D2407B9D63017EF6E7EC4AD5F94* get_layerWeights_7() const { return ___layerWeights_7; }
	inline Nullable_1U5BU5D_t02F1C69D15AC8D2407B9D63017EF6E7EC4AD5F94** get_address_of_layerWeights_7() { return &___layerWeights_7; }
	inline void set_layerWeights_7(Nullable_1U5BU5D_t02F1C69D15AC8D2407B9D63017EF6E7EC4AD5F94* value)
	{
		___layerWeights_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___layerWeights_7), (void*)value);
	}

	inline static int32_t get_offset_of_passThrus_8() { return static_cast<int32_t>(offsetof(Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB, ___passThrus_8)); }
	inline Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8 * get_passThrus_8() const { return ___passThrus_8; }
	inline Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8 ** get_address_of_passThrus_8() { return &___passThrus_8; }
	inline void set_passThrus_8(Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8 * value)
	{
		___passThrus_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___passThrus_8), (void*)value);
	}
};


// Photon.Pun.Simple.SyncContact/Frame
struct  Frame_t816C8D5BCA2411AC31AA2C73E5334DA0FDB9B9ED  : public FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6
{
public:
	// System.Collections.Generic.List`1<Photon.Pun.Simple.SyncContact/ContactRecord> Photon.Pun.Simple.SyncContact/Frame::contactRecords
	List_1_t0687FB5314E76736A3FC25D45C604675D7841B98 * ___contactRecords_2;

public:
	inline static int32_t get_offset_of_contactRecords_2() { return static_cast<int32_t>(offsetof(Frame_t816C8D5BCA2411AC31AA2C73E5334DA0FDB9B9ED, ___contactRecords_2)); }
	inline List_1_t0687FB5314E76736A3FC25D45C604675D7841B98 * get_contactRecords_2() const { return ___contactRecords_2; }
	inline List_1_t0687FB5314E76736A3FC25D45C604675D7841B98 ** get_address_of_contactRecords_2() { return &___contactRecords_2; }
	inline void set_contactRecords_2(List_1_t0687FB5314E76736A3FC25D45C604675D7841B98 * value)
	{
		___contactRecords_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contactRecords_2), (void*)value);
	}
};


// Photon.Pun.Simple.SyncNodeMover/Frame
struct  Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082  : public FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6
{
public:
	// System.Int32 Photon.Pun.Simple.SyncNodeMover/Frame::targetNode
	int32_t ___targetNode_2;
	// System.Single Photon.Pun.Simple.SyncNodeMover/Frame::phase
	float ___phase_3;
	// System.UInt32 Photon.Pun.Simple.SyncNodeMover/Frame::cphase
	uint32_t ___cphase_4;

public:
	inline static int32_t get_offset_of_targetNode_2() { return static_cast<int32_t>(offsetof(Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082, ___targetNode_2)); }
	inline int32_t get_targetNode_2() const { return ___targetNode_2; }
	inline int32_t* get_address_of_targetNode_2() { return &___targetNode_2; }
	inline void set_targetNode_2(int32_t value)
	{
		___targetNode_2 = value;
	}

	inline static int32_t get_offset_of_phase_3() { return static_cast<int32_t>(offsetof(Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082, ___phase_3)); }
	inline float get_phase_3() const { return ___phase_3; }
	inline float* get_address_of_phase_3() { return &___phase_3; }
	inline void set_phase_3(float value)
	{
		___phase_3 = value;
	}

	inline static int32_t get_offset_of_cphase_4() { return static_cast<int32_t>(offsetof(Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082, ___cphase_4)); }
	inline uint32_t get_cphase_4() const { return ___cphase_4; }
	inline uint32_t* get_address_of_cphase_4() { return &___cphase_4; }
	inline void set_cphase_4(uint32_t value)
	{
		___cphase_4 = value;
	}
};


// Photon.Pun.Simple.SyncOwner/Frame
struct  Frame_tE212F9082267C57F6BEB1594E886AB16751EA53B  : public FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6
{
public:
	// System.Int32 Photon.Pun.Simple.SyncOwner/Frame::ownerActorId
	int32_t ___ownerActorId_2;
	// System.Boolean Photon.Pun.Simple.SyncOwner/Frame::ownerHasChanged
	bool ___ownerHasChanged_3;

public:
	inline static int32_t get_offset_of_ownerActorId_2() { return static_cast<int32_t>(offsetof(Frame_tE212F9082267C57F6BEB1594E886AB16751EA53B, ___ownerActorId_2)); }
	inline int32_t get_ownerActorId_2() const { return ___ownerActorId_2; }
	inline int32_t* get_address_of_ownerActorId_2() { return &___ownerActorId_2; }
	inline void set_ownerActorId_2(int32_t value)
	{
		___ownerActorId_2 = value;
	}

	inline static int32_t get_offset_of_ownerHasChanged_3() { return static_cast<int32_t>(offsetof(Frame_tE212F9082267C57F6BEB1594E886AB16751EA53B, ___ownerHasChanged_3)); }
	inline bool get_ownerHasChanged_3() const { return ___ownerHasChanged_3; }
	inline bool* get_address_of_ownerHasChanged_3() { return &___ownerHasChanged_3; }
	inline void set_ownerHasChanged_3(bool value)
	{
		___ownerHasChanged_3 = value;
	}
};


// Photon.Pun.Simple.SyncShootBase/Frame
struct  Frame_t75460503FF702B7DD15EEE3AEE30093A305D577F  : public FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6
{
public:
	// System.UInt32 Photon.Pun.Simple.SyncShootBase/Frame::triggerMask
	uint32_t ___triggerMask_2;

public:
	inline static int32_t get_offset_of_triggerMask_2() { return static_cast<int32_t>(offsetof(Frame_t75460503FF702B7DD15EEE3AEE30093A305D577F, ___triggerMask_2)); }
	inline uint32_t get_triggerMask_2() const { return ___triggerMask_2; }
	inline uint32_t* get_address_of_triggerMask_2() { return &___triggerMask_2; }
	inline void set_triggerMask_2(uint32_t value)
	{
		___triggerMask_2 = value;
	}
};


// Photon.Pun.Simple.SyncSpawnTimer/Frame
struct  Frame_t2227D436A145B7086B67C15BCBB92D900344230B  : public FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6
{
public:
	// System.Int32 Photon.Pun.Simple.SyncSpawnTimer/Frame::ticksUntilRespawn
	int32_t ___ticksUntilRespawn_2;
	// System.Int32 Photon.Pun.Simple.SyncSpawnTimer/Frame::ticksUntilDespawn
	int32_t ___ticksUntilDespawn_3;

public:
	inline static int32_t get_offset_of_ticksUntilRespawn_2() { return static_cast<int32_t>(offsetof(Frame_t2227D436A145B7086B67C15BCBB92D900344230B, ___ticksUntilRespawn_2)); }
	inline int32_t get_ticksUntilRespawn_2() const { return ___ticksUntilRespawn_2; }
	inline int32_t* get_address_of_ticksUntilRespawn_2() { return &___ticksUntilRespawn_2; }
	inline void set_ticksUntilRespawn_2(int32_t value)
	{
		___ticksUntilRespawn_2 = value;
	}

	inline static int32_t get_offset_of_ticksUntilDespawn_3() { return static_cast<int32_t>(offsetof(Frame_t2227D436A145B7086B67C15BCBB92D900344230B, ___ticksUntilDespawn_3)); }
	inline int32_t get_ticksUntilDespawn_3() const { return ___ticksUntilDespawn_3; }
	inline int32_t* get_address_of_ticksUntilDespawn_3() { return &___ticksUntilDespawn_3; }
	inline void set_ticksUntilDespawn_3(int32_t value)
	{
		___ticksUntilDespawn_3 = value;
	}
};


// Photon.Pun.Simple.SyncState/Frame
struct  Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65  : public FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6
{
public:
	// Photon.Pun.Simple.ObjState Photon.Pun.Simple.SyncState/Frame::state
	int32_t ___state_2;
	// System.Nullable`1<System.Int32> Photon.Pun.Simple.SyncState/Frame::mountToViewID
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___mountToViewID_3;
	// System.Nullable`1<System.Int32> Photon.Pun.Simple.SyncState/Frame::mountTypeId
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___mountTypeId_4;

public:
	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_mountToViewID_3() { return static_cast<int32_t>(offsetof(Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65, ___mountToViewID_3)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_mountToViewID_3() const { return ___mountToViewID_3; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_mountToViewID_3() { return &___mountToViewID_3; }
	inline void set_mountToViewID_3(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___mountToViewID_3 = value;
	}

	inline static int32_t get_offset_of_mountTypeId_4() { return static_cast<int32_t>(offsetof(Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65, ___mountTypeId_4)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_mountTypeId_4() const { return ___mountTypeId_4; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_mountTypeId_4() { return &___mountTypeId_4; }
	inline void set_mountTypeId_4(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___mountTypeId_4 = value;
	}
};


// Photon.Pun.Simple.SyncTransform/Frame
struct  Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D  : public FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6
{
public:
	// System.Boolean Photon.Pun.Simple.SyncTransform/Frame::hasTeleported
	bool ___hasTeleported_2;
	// Photon.Compression.Matrix Photon.Pun.Simple.SyncTransform/Frame::m
	Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * ___m_3;
	// Photon.Compression.CompressedMatrix Photon.Pun.Simple.SyncTransform/Frame::cm
	CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * ___cm_4;
	// Photon.Pun.Simple.SyncTransform Photon.Pun.Simple.SyncTransform/Frame::owner
	SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859 * ___owner_5;
	// Photon.Compression.Matrix Photon.Pun.Simple.SyncTransform/Frame::telem
	Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * ___telem_6;
	// Photon.Compression.CompressedMatrix Photon.Pun.Simple.SyncTransform/Frame::telecm
	CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * ___telecm_7;
	// System.Int32 Photon.Pun.Simple.SyncTransform/Frame::parentHash
	int32_t ___parentHash_8;
	// System.Int32 Photon.Pun.Simple.SyncTransform/Frame::telePparentHash
	int32_t ___telePparentHash_9;

public:
	inline static int32_t get_offset_of_hasTeleported_2() { return static_cast<int32_t>(offsetof(Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D, ___hasTeleported_2)); }
	inline bool get_hasTeleported_2() const { return ___hasTeleported_2; }
	inline bool* get_address_of_hasTeleported_2() { return &___hasTeleported_2; }
	inline void set_hasTeleported_2(bool value)
	{
		___hasTeleported_2 = value;
	}

	inline static int32_t get_offset_of_m_3() { return static_cast<int32_t>(offsetof(Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D, ___m_3)); }
	inline Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * get_m_3() const { return ___m_3; }
	inline Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D ** get_address_of_m_3() { return &___m_3; }
	inline void set_m_3(Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * value)
	{
		___m_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_3), (void*)value);
	}

	inline static int32_t get_offset_of_cm_4() { return static_cast<int32_t>(offsetof(Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D, ___cm_4)); }
	inline CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * get_cm_4() const { return ___cm_4; }
	inline CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 ** get_address_of_cm_4() { return &___cm_4; }
	inline void set_cm_4(CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * value)
	{
		___cm_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cm_4), (void*)value);
	}

	inline static int32_t get_offset_of_owner_5() { return static_cast<int32_t>(offsetof(Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D, ___owner_5)); }
	inline SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859 * get_owner_5() const { return ___owner_5; }
	inline SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859 ** get_address_of_owner_5() { return &___owner_5; }
	inline void set_owner_5(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859 * value)
	{
		___owner_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___owner_5), (void*)value);
	}

	inline static int32_t get_offset_of_telem_6() { return static_cast<int32_t>(offsetof(Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D, ___telem_6)); }
	inline Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * get_telem_6() const { return ___telem_6; }
	inline Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D ** get_address_of_telem_6() { return &___telem_6; }
	inline void set_telem_6(Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * value)
	{
		___telem_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___telem_6), (void*)value);
	}

	inline static int32_t get_offset_of_telecm_7() { return static_cast<int32_t>(offsetof(Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D, ___telecm_7)); }
	inline CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * get_telecm_7() const { return ___telecm_7; }
	inline CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 ** get_address_of_telecm_7() { return &___telecm_7; }
	inline void set_telecm_7(CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * value)
	{
		___telecm_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___telecm_7), (void*)value);
	}

	inline static int32_t get_offset_of_parentHash_8() { return static_cast<int32_t>(offsetof(Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D, ___parentHash_8)); }
	inline int32_t get_parentHash_8() const { return ___parentHash_8; }
	inline int32_t* get_address_of_parentHash_8() { return &___parentHash_8; }
	inline void set_parentHash_8(int32_t value)
	{
		___parentHash_8 = value;
	}

	inline static int32_t get_offset_of_telePparentHash_9() { return static_cast<int32_t>(offsetof(Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D, ___telePparentHash_9)); }
	inline int32_t get_telePparentHash_9() const { return ___telePparentHash_9; }
	inline int32_t* get_address_of_telePparentHash_9() { return &___telePparentHash_9; }
	inline void set_telePparentHash_9(int32_t value)
	{
		___telePparentHash_9 = value;
	}
};


// Photon.Pun.Simple.SyncVitals/Frame
struct  Frame_tC3C68D0F728BCD68EBB0F45D3D15E320AB952D09  : public FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6
{
public:
	// Photon.Pun.Simple.VitalsData Photon.Pun.Simple.SyncVitals/Frame::vitalsData
	VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0 * ___vitalsData_2;

public:
	inline static int32_t get_offset_of_vitalsData_2() { return static_cast<int32_t>(offsetof(Frame_tC3C68D0F728BCD68EBB0F45D3D15E320AB952D09, ___vitalsData_2)); }
	inline VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0 * get_vitalsData_2() const { return ___vitalsData_2; }
	inline VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0 ** get_address_of_vitalsData_2() { return &___vitalsData_2; }
	inline void set_vitalsData_2(VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0 * value)
	{
		___vitalsData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vitalsData_2), (void*)value);
	}
};


// Photon.Utilities.SettingsScriptableObject`1<Photon.Compression.WorldBoundsSettings>
struct  SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8  : public SettingsScriptableObjectBase_t7D2A0AF46275A24ABAC455DC70BB5362EEA41DCB
{
public:

public:
};

struct SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_StaticFields
{
public:
	// System.String Photon.Utilities.SettingsScriptableObject`1::AssetName
	String_t* ___AssetName_4;
	// System.Action Photon.Utilities.SettingsScriptableObject`1::OnSingletonReady
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnSingletonReady_5;
	// T Photon.Utilities.SettingsScriptableObject`1::single
	WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * ___single_6;

public:
	inline static int32_t get_offset_of_AssetName_4() { return static_cast<int32_t>(offsetof(SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_StaticFields, ___AssetName_4)); }
	inline String_t* get_AssetName_4() const { return ___AssetName_4; }
	inline String_t** get_address_of_AssetName_4() { return &___AssetName_4; }
	inline void set_AssetName_4(String_t* value)
	{
		___AssetName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssetName_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnSingletonReady_5() { return static_cast<int32_t>(offsetof(SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_StaticFields, ___OnSingletonReady_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnSingletonReady_5() const { return ___OnSingletonReady_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnSingletonReady_5() { return &___OnSingletonReady_5; }
	inline void set_OnSingletonReady_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnSingletonReady_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSingletonReady_5), (void*)value);
	}

	inline static int32_t get_offset_of_single_6() { return static_cast<int32_t>(offsetof(SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_StaticFields, ___single_6)); }
	inline WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * get_single_6() const { return ___single_6; }
	inline WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 ** get_address_of_single_6() { return &___single_6; }
	inline void set_single_6(WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * value)
	{
		___single_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___single_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Shapes.FpsController
struct  FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Shapes.FpsController::head
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___head_4;
	// UnityEngine.Camera Shapes.FpsController::cam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam_5;
	// Shapes.Crosshair Shapes.FpsController::crosshair
	Crosshair_tF366A3DF7087734CC58B0F8EA759B8AC7D13F112 * ___crosshair_6;
	// Shapes.ChargeBar Shapes.FpsController::chargeBar
	ChargeBar_t9AEDEBF314AF254D0AE32666BC33D429B40C39D4 * ___chargeBar_7;
	// Shapes.AmmoBar Shapes.FpsController::ammoBar
	AmmoBar_t4DC08C2C4F62C72F83CF858808448A9362E865CC * ___ammoBar_8;
	// Shapes.Compass Shapes.FpsController::compass
	Compass_t6054B4C25957A7C06E9646769C58FD4AD12D8FB5 * ___compass_9;
	// UnityEngine.Transform Shapes.FpsController::crosshairTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___crosshairTransform_10;
	// System.Single Shapes.FpsController::smoof
	float ___smoof_11;
	// System.Single Shapes.FpsController::moveSpeed
	float ___moveSpeed_12;
	// System.Single Shapes.FpsController::lookSensitivity
	float ___lookSensitivity_13;
	// System.Single Shapes.FpsController::yaw
	float ___yaw_14;
	// System.Single Shapes.FpsController::pitch
	float ___pitch_15;
	// UnityEngine.Vector2 Shapes.FpsController::moveInput
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___moveInput_16;
	// UnityEngine.Vector3 Shapes.FpsController::moveVel
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___moveVel_17;
	// System.Single Shapes.FpsController::ammoBarAngularSpanRad
	float ___ammoBarAngularSpanRad_18;
	// System.Single Shapes.FpsController::ammoBarOutlineThickness
	float ___ammoBarOutlineThickness_19;
	// System.Single Shapes.FpsController::ammoBarThickness
	float ___ammoBarThickness_20;
	// System.Single Shapes.FpsController::ammoBarRadius
	float ___ammoBarRadius_21;
	// System.Single Shapes.FpsController::fireSidebarRadiusPunchAmount
	float ___fireSidebarRadiusPunchAmount_22;
	// UnityEngine.AnimationCurve Shapes.FpsController::shakeAnimX
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___shakeAnimX_23;
	// UnityEngine.AnimationCurve Shapes.FpsController::shakeAnimY
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___shakeAnimY_24;

public:
	inline static int32_t get_offset_of_head_4() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___head_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_head_4() const { return ___head_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_head_4() { return &___head_4; }
	inline void set_head_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___head_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_4), (void*)value);
	}

	inline static int32_t get_offset_of_cam_5() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___cam_5)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cam_5() const { return ___cam_5; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cam_5() { return &___cam_5; }
	inline void set_cam_5(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cam_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_5), (void*)value);
	}

	inline static int32_t get_offset_of_crosshair_6() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___crosshair_6)); }
	inline Crosshair_tF366A3DF7087734CC58B0F8EA759B8AC7D13F112 * get_crosshair_6() const { return ___crosshair_6; }
	inline Crosshair_tF366A3DF7087734CC58B0F8EA759B8AC7D13F112 ** get_address_of_crosshair_6() { return &___crosshair_6; }
	inline void set_crosshair_6(Crosshair_tF366A3DF7087734CC58B0F8EA759B8AC7D13F112 * value)
	{
		___crosshair_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crosshair_6), (void*)value);
	}

	inline static int32_t get_offset_of_chargeBar_7() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___chargeBar_7)); }
	inline ChargeBar_t9AEDEBF314AF254D0AE32666BC33D429B40C39D4 * get_chargeBar_7() const { return ___chargeBar_7; }
	inline ChargeBar_t9AEDEBF314AF254D0AE32666BC33D429B40C39D4 ** get_address_of_chargeBar_7() { return &___chargeBar_7; }
	inline void set_chargeBar_7(ChargeBar_t9AEDEBF314AF254D0AE32666BC33D429B40C39D4 * value)
	{
		___chargeBar_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chargeBar_7), (void*)value);
	}

	inline static int32_t get_offset_of_ammoBar_8() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___ammoBar_8)); }
	inline AmmoBar_t4DC08C2C4F62C72F83CF858808448A9362E865CC * get_ammoBar_8() const { return ___ammoBar_8; }
	inline AmmoBar_t4DC08C2C4F62C72F83CF858808448A9362E865CC ** get_address_of_ammoBar_8() { return &___ammoBar_8; }
	inline void set_ammoBar_8(AmmoBar_t4DC08C2C4F62C72F83CF858808448A9362E865CC * value)
	{
		___ammoBar_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ammoBar_8), (void*)value);
	}

	inline static int32_t get_offset_of_compass_9() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___compass_9)); }
	inline Compass_t6054B4C25957A7C06E9646769C58FD4AD12D8FB5 * get_compass_9() const { return ___compass_9; }
	inline Compass_t6054B4C25957A7C06E9646769C58FD4AD12D8FB5 ** get_address_of_compass_9() { return &___compass_9; }
	inline void set_compass_9(Compass_t6054B4C25957A7C06E9646769C58FD4AD12D8FB5 * value)
	{
		___compass_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compass_9), (void*)value);
	}

	inline static int32_t get_offset_of_crosshairTransform_10() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___crosshairTransform_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_crosshairTransform_10() const { return ___crosshairTransform_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_crosshairTransform_10() { return &___crosshairTransform_10; }
	inline void set_crosshairTransform_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___crosshairTransform_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crosshairTransform_10), (void*)value);
	}

	inline static int32_t get_offset_of_smoof_11() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___smoof_11)); }
	inline float get_smoof_11() const { return ___smoof_11; }
	inline float* get_address_of_smoof_11() { return &___smoof_11; }
	inline void set_smoof_11(float value)
	{
		___smoof_11 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_12() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___moveSpeed_12)); }
	inline float get_moveSpeed_12() const { return ___moveSpeed_12; }
	inline float* get_address_of_moveSpeed_12() { return &___moveSpeed_12; }
	inline void set_moveSpeed_12(float value)
	{
		___moveSpeed_12 = value;
	}

	inline static int32_t get_offset_of_lookSensitivity_13() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___lookSensitivity_13)); }
	inline float get_lookSensitivity_13() const { return ___lookSensitivity_13; }
	inline float* get_address_of_lookSensitivity_13() { return &___lookSensitivity_13; }
	inline void set_lookSensitivity_13(float value)
	{
		___lookSensitivity_13 = value;
	}

	inline static int32_t get_offset_of_yaw_14() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___yaw_14)); }
	inline float get_yaw_14() const { return ___yaw_14; }
	inline float* get_address_of_yaw_14() { return &___yaw_14; }
	inline void set_yaw_14(float value)
	{
		___yaw_14 = value;
	}

	inline static int32_t get_offset_of_pitch_15() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___pitch_15)); }
	inline float get_pitch_15() const { return ___pitch_15; }
	inline float* get_address_of_pitch_15() { return &___pitch_15; }
	inline void set_pitch_15(float value)
	{
		___pitch_15 = value;
	}

	inline static int32_t get_offset_of_moveInput_16() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___moveInput_16)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_moveInput_16() const { return ___moveInput_16; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_moveInput_16() { return &___moveInput_16; }
	inline void set_moveInput_16(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___moveInput_16 = value;
	}

	inline static int32_t get_offset_of_moveVel_17() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___moveVel_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_moveVel_17() const { return ___moveVel_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_moveVel_17() { return &___moveVel_17; }
	inline void set_moveVel_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___moveVel_17 = value;
	}

	inline static int32_t get_offset_of_ammoBarAngularSpanRad_18() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___ammoBarAngularSpanRad_18)); }
	inline float get_ammoBarAngularSpanRad_18() const { return ___ammoBarAngularSpanRad_18; }
	inline float* get_address_of_ammoBarAngularSpanRad_18() { return &___ammoBarAngularSpanRad_18; }
	inline void set_ammoBarAngularSpanRad_18(float value)
	{
		___ammoBarAngularSpanRad_18 = value;
	}

	inline static int32_t get_offset_of_ammoBarOutlineThickness_19() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___ammoBarOutlineThickness_19)); }
	inline float get_ammoBarOutlineThickness_19() const { return ___ammoBarOutlineThickness_19; }
	inline float* get_address_of_ammoBarOutlineThickness_19() { return &___ammoBarOutlineThickness_19; }
	inline void set_ammoBarOutlineThickness_19(float value)
	{
		___ammoBarOutlineThickness_19 = value;
	}

	inline static int32_t get_offset_of_ammoBarThickness_20() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___ammoBarThickness_20)); }
	inline float get_ammoBarThickness_20() const { return ___ammoBarThickness_20; }
	inline float* get_address_of_ammoBarThickness_20() { return &___ammoBarThickness_20; }
	inline void set_ammoBarThickness_20(float value)
	{
		___ammoBarThickness_20 = value;
	}

	inline static int32_t get_offset_of_ammoBarRadius_21() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___ammoBarRadius_21)); }
	inline float get_ammoBarRadius_21() const { return ___ammoBarRadius_21; }
	inline float* get_address_of_ammoBarRadius_21() { return &___ammoBarRadius_21; }
	inline void set_ammoBarRadius_21(float value)
	{
		___ammoBarRadius_21 = value;
	}

	inline static int32_t get_offset_of_fireSidebarRadiusPunchAmount_22() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___fireSidebarRadiusPunchAmount_22)); }
	inline float get_fireSidebarRadiusPunchAmount_22() const { return ___fireSidebarRadiusPunchAmount_22; }
	inline float* get_address_of_fireSidebarRadiusPunchAmount_22() { return &___fireSidebarRadiusPunchAmount_22; }
	inline void set_fireSidebarRadiusPunchAmount_22(float value)
	{
		___fireSidebarRadiusPunchAmount_22 = value;
	}

	inline static int32_t get_offset_of_shakeAnimX_23() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___shakeAnimX_23)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_shakeAnimX_23() const { return ___shakeAnimX_23; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_shakeAnimX_23() { return &___shakeAnimX_23; }
	inline void set_shakeAnimX_23(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___shakeAnimX_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shakeAnimX_23), (void*)value);
	}

	inline static int32_t get_offset_of_shakeAnimY_24() { return static_cast<int32_t>(offsetof(FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A, ___shakeAnimY_24)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_shakeAnimY_24() const { return ___shakeAnimY_24; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_shakeAnimY_24() { return &___shakeAnimY_24; }
	inline void set_shakeAnimY_24(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___shakeAnimY_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shakeAnimY_24), (void*)value);
	}
};


// MenuWindow
struct  MenuWindow_tFC3D31F78233D75262AC4C4F4756BA3EE318FE5C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject MenuWindow::_windowHolder
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ____windowHolder_4;
	// UnityEngine.Transform MenuWindow::_windowParent
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____windowParent_5;
	// System.Int32 MenuWindow::Id
	int32_t ___Id_6;
	// System.String MenuWindow::Name
	String_t* ___Name_7;

public:
	inline static int32_t get_offset_of__windowHolder_4() { return static_cast<int32_t>(offsetof(MenuWindow_tFC3D31F78233D75262AC4C4F4756BA3EE318FE5C, ____windowHolder_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get__windowHolder_4() const { return ____windowHolder_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of__windowHolder_4() { return &____windowHolder_4; }
	inline void set__windowHolder_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		____windowHolder_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____windowHolder_4), (void*)value);
	}

	inline static int32_t get_offset_of__windowParent_5() { return static_cast<int32_t>(offsetof(MenuWindow_tFC3D31F78233D75262AC4C4F4756BA3EE318FE5C, ____windowParent_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__windowParent_5() const { return ____windowParent_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__windowParent_5() { return &____windowParent_5; }
	inline void set__windowParent_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____windowParent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____windowParent_5), (void*)value);
	}

	inline static int32_t get_offset_of_Id_6() { return static_cast<int32_t>(offsetof(MenuWindow_tFC3D31F78233D75262AC4C4F4756BA3EE318FE5C, ___Id_6)); }
	inline int32_t get_Id_6() const { return ___Id_6; }
	inline int32_t* get_address_of_Id_6() { return &___Id_6; }
	inline void set_Id_6(int32_t value)
	{
		___Id_6 = value;
	}

	inline static int32_t get_offset_of_Name_7() { return static_cast<int32_t>(offsetof(MenuWindow_tFC3D31F78233D75262AC4C4F4756BA3EE318FE5C, ___Name_7)); }
	inline String_t* get_Name_7() const { return ___Name_7; }
	inline String_t** get_address_of_Name_7() { return &___Name_7; }
	inline void set_Name_7(String_t* value)
	{
		___Name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_7), (void*)value);
	}
};


// Photon.Pun.Simple.NetComponent
struct  NetComponent_t4FF50B37FAD5A9DB748A81D3F098888AA0344B6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Photon.Pun.Simple.NetComponent::prefabInstanceId
	int32_t ___prefabInstanceId_4;
	// Photon.Pun.Simple.NetObject Photon.Pun.Simple.NetComponent::netObj
	NetObject_tBAFFCB25949A24E23A244E439848B8EAA0CCD530 * ___netObj_5;
	// Photon.Pun.Simple.RigidbodyType Photon.Pun.Simple.NetComponent::<RigidbodyType>k__BackingField
	int32_t ___U3CRigidbodyTypeU3Ek__BackingField_6;
	// Photon.Pun.PhotonView Photon.Pun.Simple.NetComponent::photonView
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___photonView_7;
	// System.Boolean Photon.Pun.Simple.NetComponent::hadFirstAuthorityAssgn
	bool ___hadFirstAuthorityAssgn_8;

public:
	inline static int32_t get_offset_of_prefabInstanceId_4() { return static_cast<int32_t>(offsetof(NetComponent_t4FF50B37FAD5A9DB748A81D3F098888AA0344B6F, ___prefabInstanceId_4)); }
	inline int32_t get_prefabInstanceId_4() const { return ___prefabInstanceId_4; }
	inline int32_t* get_address_of_prefabInstanceId_4() { return &___prefabInstanceId_4; }
	inline void set_prefabInstanceId_4(int32_t value)
	{
		___prefabInstanceId_4 = value;
	}

	inline static int32_t get_offset_of_netObj_5() { return static_cast<int32_t>(offsetof(NetComponent_t4FF50B37FAD5A9DB748A81D3F098888AA0344B6F, ___netObj_5)); }
	inline NetObject_tBAFFCB25949A24E23A244E439848B8EAA0CCD530 * get_netObj_5() const { return ___netObj_5; }
	inline NetObject_tBAFFCB25949A24E23A244E439848B8EAA0CCD530 ** get_address_of_netObj_5() { return &___netObj_5; }
	inline void set_netObj_5(NetObject_tBAFFCB25949A24E23A244E439848B8EAA0CCD530 * value)
	{
		___netObj_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___netObj_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRigidbodyTypeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(NetComponent_t4FF50B37FAD5A9DB748A81D3F098888AA0344B6F, ___U3CRigidbodyTypeU3Ek__BackingField_6)); }
	inline int32_t get_U3CRigidbodyTypeU3Ek__BackingField_6() const { return ___U3CRigidbodyTypeU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CRigidbodyTypeU3Ek__BackingField_6() { return &___U3CRigidbodyTypeU3Ek__BackingField_6; }
	inline void set_U3CRigidbodyTypeU3Ek__BackingField_6(int32_t value)
	{
		___U3CRigidbodyTypeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_photonView_7() { return static_cast<int32_t>(offsetof(NetComponent_t4FF50B37FAD5A9DB748A81D3F098888AA0344B6F, ___photonView_7)); }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * get_photonView_7() const { return ___photonView_7; }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** get_address_of_photonView_7() { return &___photonView_7; }
	inline void set_photonView_7(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		___photonView_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___photonView_7), (void*)value);
	}

	inline static int32_t get_offset_of_hadFirstAuthorityAssgn_8() { return static_cast<int32_t>(offsetof(NetComponent_t4FF50B37FAD5A9DB748A81D3F098888AA0344B6F, ___hadFirstAuthorityAssgn_8)); }
	inline bool get_hadFirstAuthorityAssgn_8() const { return ___hadFirstAuthorityAssgn_8; }
	inline bool* get_address_of_hadFirstAuthorityAssgn_8() { return &___hadFirstAuthorityAssgn_8; }
	inline void set_hadFirstAuthorityAssgn_8(bool value)
	{
		___hadFirstAuthorityAssgn_8 = value;
	}
};


// Photon.Pun.Simple.VitalsUISrcBase
struct  VitalsUISrcBase_t058A657A8B301F92A6AAE2F754EE326F4E69A575  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Photon.Pun.Simple.VitalsUISrcBase/MonitorSource Photon.Pun.Simple.VitalsUISrcBase::monitor
	int32_t ___monitor_4;
	// UnityEngine.Object Photon.Pun.Simple.VitalsUISrcBase::vitalsSource
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___vitalsSource_5;
	// Photon.Pun.Simple.Vitals Photon.Pun.Simple.VitalsUISrcBase::vitals
	Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051 * ___vitals_6;

public:
	inline static int32_t get_offset_of_monitor_4() { return static_cast<int32_t>(offsetof(VitalsUISrcBase_t058A657A8B301F92A6AAE2F754EE326F4E69A575, ___monitor_4)); }
	inline int32_t get_monitor_4() const { return ___monitor_4; }
	inline int32_t* get_address_of_monitor_4() { return &___monitor_4; }
	inline void set_monitor_4(int32_t value)
	{
		___monitor_4 = value;
	}

	inline static int32_t get_offset_of_vitalsSource_5() { return static_cast<int32_t>(offsetof(VitalsUISrcBase_t058A657A8B301F92A6AAE2F754EE326F4E69A575, ___vitalsSource_5)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_vitalsSource_5() const { return ___vitalsSource_5; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_vitalsSource_5() { return &___vitalsSource_5; }
	inline void set_vitalsSource_5(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___vitalsSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vitalsSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_vitals_6() { return static_cast<int32_t>(offsetof(VitalsUISrcBase_t058A657A8B301F92A6AAE2F754EE326F4E69A575, ___vitals_6)); }
	inline Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051 * get_vitals_6() const { return ___vitals_6; }
	inline Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051 ** get_address_of_vitals_6() { return &___vitals_6; }
	inline void set_vitals_6(Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051 * value)
	{
		___vitals_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vitals_6), (void*)value);
	}
};


// Photon.Compression.WorldBounds
struct  WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Bounds Photon.Compression.WorldBounds::manualBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___manualBounds_4;
	// System.Int32 Photon.Compression.WorldBounds::worldBoundsGrp
	int32_t ___worldBoundsGrp_5;
	// System.Boolean Photon.Compression.WorldBounds::includeChildren
	bool ___includeChildren_6;
	// Photon.Utilities.BoundsTools/BoundsType Photon.Compression.WorldBounds::factorIn
	int32_t ___factorIn_7;
	// UnityEngine.Bounds Photon.Compression.WorldBounds::myBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___myBounds_8;
	// System.Int32 Photon.Compression.WorldBounds::myBoundsCount
	int32_t ___myBoundsCount_9;
	// System.Action Photon.Compression.WorldBounds::OnWorldBoundsChange
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___OnWorldBoundsChange_10;

public:
	inline static int32_t get_offset_of_manualBounds_4() { return static_cast<int32_t>(offsetof(WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2, ___manualBounds_4)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_manualBounds_4() const { return ___manualBounds_4; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_manualBounds_4() { return &___manualBounds_4; }
	inline void set_manualBounds_4(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___manualBounds_4 = value;
	}

	inline static int32_t get_offset_of_worldBoundsGrp_5() { return static_cast<int32_t>(offsetof(WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2, ___worldBoundsGrp_5)); }
	inline int32_t get_worldBoundsGrp_5() const { return ___worldBoundsGrp_5; }
	inline int32_t* get_address_of_worldBoundsGrp_5() { return &___worldBoundsGrp_5; }
	inline void set_worldBoundsGrp_5(int32_t value)
	{
		___worldBoundsGrp_5 = value;
	}

	inline static int32_t get_offset_of_includeChildren_6() { return static_cast<int32_t>(offsetof(WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2, ___includeChildren_6)); }
	inline bool get_includeChildren_6() const { return ___includeChildren_6; }
	inline bool* get_address_of_includeChildren_6() { return &___includeChildren_6; }
	inline void set_includeChildren_6(bool value)
	{
		___includeChildren_6 = value;
	}

	inline static int32_t get_offset_of_factorIn_7() { return static_cast<int32_t>(offsetof(WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2, ___factorIn_7)); }
	inline int32_t get_factorIn_7() const { return ___factorIn_7; }
	inline int32_t* get_address_of_factorIn_7() { return &___factorIn_7; }
	inline void set_factorIn_7(int32_t value)
	{
		___factorIn_7 = value;
	}

	inline static int32_t get_offset_of_myBounds_8() { return static_cast<int32_t>(offsetof(WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2, ___myBounds_8)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_myBounds_8() const { return ___myBounds_8; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_myBounds_8() { return &___myBounds_8; }
	inline void set_myBounds_8(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___myBounds_8 = value;
	}

	inline static int32_t get_offset_of_myBoundsCount_9() { return static_cast<int32_t>(offsetof(WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2, ___myBoundsCount_9)); }
	inline int32_t get_myBoundsCount_9() const { return ___myBoundsCount_9; }
	inline int32_t* get_address_of_myBoundsCount_9() { return &___myBoundsCount_9; }
	inline void set_myBoundsCount_9(int32_t value)
	{
		___myBoundsCount_9 = value;
	}

	inline static int32_t get_offset_of_OnWorldBoundsChange_10() { return static_cast<int32_t>(offsetof(WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2, ___OnWorldBoundsChange_10)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_OnWorldBoundsChange_10() const { return ___OnWorldBoundsChange_10; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_OnWorldBoundsChange_10() { return &___OnWorldBoundsChange_10; }
	inline void set_OnWorldBoundsChange_10(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___OnWorldBoundsChange_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnWorldBoundsChange_10), (void*)value);
	}
};


// Photon.Compression.WorldBoundsSettings
struct  WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4  : public SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8
{
public:
	// System.Collections.Generic.List`1<Photon.Compression.WorldBoundsGroup> Photon.Compression.WorldBoundsSettings::worldBoundsGroups
	List_1_tB0271D7BC496632284188271857311907DE3C2C5 * ___worldBoundsGroups_7;

public:
	inline static int32_t get_offset_of_worldBoundsGroups_7() { return static_cast<int32_t>(offsetof(WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4, ___worldBoundsGroups_7)); }
	inline List_1_tB0271D7BC496632284188271857311907DE3C2C5 * get_worldBoundsGroups_7() const { return ___worldBoundsGroups_7; }
	inline List_1_tB0271D7BC496632284188271857311907DE3C2C5 ** get_address_of_worldBoundsGroups_7() { return &___worldBoundsGroups_7; }
	inline void set_worldBoundsGroups_7(List_1_tB0271D7BC496632284188271857311907DE3C2C5 * value)
	{
		___worldBoundsGroups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___worldBoundsGroups_7), (void*)value);
	}
};

struct WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4_StaticFields
{
public:
	// Photon.Compression.ElementCrusher Photon.Compression.WorldBoundsSettings::defaultWorldBoundsCrusher
	ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * ___defaultWorldBoundsCrusher_8;

public:
	inline static int32_t get_offset_of_defaultWorldBoundsCrusher_8() { return static_cast<int32_t>(offsetof(WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4_StaticFields, ___defaultWorldBoundsCrusher_8)); }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * get_defaultWorldBoundsCrusher_8() const { return ___defaultWorldBoundsCrusher_8; }
	inline ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 ** get_address_of_defaultWorldBoundsCrusher_8() { return &___defaultWorldBoundsCrusher_8; }
	inline void set_defaultWorldBoundsCrusher_8(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * value)
	{
		___defaultWorldBoundsCrusher_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultWorldBoundsCrusher_8), (void*)value);
	}
};


// Photon.Pun.Simple.ContactReactorBase
struct  ContactReactorBase_t0D48513784675FB82C0866B7E3297FC80A301994  : public NetComponent_t4FF50B37FAD5A9DB748A81D3F098888AA0344B6F
{
public:
	// Photon.Pun.Simple.ContactType Photon.Pun.Simple.ContactReactorBase::triggerOn
	int32_t ___triggerOn_9;
	// Photon.Pun.Simple.SyncState Photon.Pun.Simple.ContactReactorBase::syncState
	SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F * ___syncState_10;
	// System.Int32 Photon.Pun.Simple.ContactReactorBase::syncStateMountMask
	int32_t ___syncStateMountMask_11;

public:
	inline static int32_t get_offset_of_triggerOn_9() { return static_cast<int32_t>(offsetof(ContactReactorBase_t0D48513784675FB82C0866B7E3297FC80A301994, ___triggerOn_9)); }
	inline int32_t get_triggerOn_9() const { return ___triggerOn_9; }
	inline int32_t* get_address_of_triggerOn_9() { return &___triggerOn_9; }
	inline void set_triggerOn_9(int32_t value)
	{
		___triggerOn_9 = value;
	}

	inline static int32_t get_offset_of_syncState_10() { return static_cast<int32_t>(offsetof(ContactReactorBase_t0D48513784675FB82C0866B7E3297FC80A301994, ___syncState_10)); }
	inline SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F * get_syncState_10() const { return ___syncState_10; }
	inline SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F ** get_address_of_syncState_10() { return &___syncState_10; }
	inline void set_syncState_10(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F * value)
	{
		___syncState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncState_10), (void*)value);
	}

	inline static int32_t get_offset_of_syncStateMountMask_11() { return static_cast<int32_t>(offsetof(ContactReactorBase_t0D48513784675FB82C0866B7E3297FC80A301994, ___syncStateMountMask_11)); }
	inline int32_t get_syncStateMountMask_11() const { return ___syncStateMountMask_11; }
	inline int32_t* get_address_of_syncStateMountMask_11() { return &___syncStateMountMask_11; }
	inline void set_syncStateMountMask_11(int32_t value)
	{
		___syncStateMountMask_11 = value;
	}
};


// Photon.Pun.Simple.Mount
struct  Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3  : public NetComponent_t4FF50B37FAD5A9DB748A81D3F098888AA0344B6F
{
public:
	// Photon.Pun.Simple.MountSelector Photon.Pun.Simple.Mount::mountType
	MountSelector_t384DA5054047AF3A175D2E4FC1D7DBF61F92E329  ___mountType_10;
	// System.Int32 Photon.Pun.Simple.Mount::componentIndex
	int32_t ___componentIndex_11;
	// System.Collections.Generic.List`1<Photon.Pun.Simple.IMountable> Photon.Pun.Simple.Mount::mountedObjs
	List_1_tB300DA7F74C122DA14BF710BCEC2B2CD29517240 * ___mountedObjs_12;
	// Photon.Pun.Simple.MountsManager Photon.Pun.Simple.Mount::mountsLookup
	MountsManager_tE83682448FFBFC600B764AAB10AB5B5B82EDD0D2 * ___mountsLookup_13;

public:
	inline static int32_t get_offset_of_mountType_10() { return static_cast<int32_t>(offsetof(Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3, ___mountType_10)); }
	inline MountSelector_t384DA5054047AF3A175D2E4FC1D7DBF61F92E329  get_mountType_10() const { return ___mountType_10; }
	inline MountSelector_t384DA5054047AF3A175D2E4FC1D7DBF61F92E329 * get_address_of_mountType_10() { return &___mountType_10; }
	inline void set_mountType_10(MountSelector_t384DA5054047AF3A175D2E4FC1D7DBF61F92E329  value)
	{
		___mountType_10 = value;
	}

	inline static int32_t get_offset_of_componentIndex_11() { return static_cast<int32_t>(offsetof(Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3, ___componentIndex_11)); }
	inline int32_t get_componentIndex_11() const { return ___componentIndex_11; }
	inline int32_t* get_address_of_componentIndex_11() { return &___componentIndex_11; }
	inline void set_componentIndex_11(int32_t value)
	{
		___componentIndex_11 = value;
	}

	inline static int32_t get_offset_of_mountedObjs_12() { return static_cast<int32_t>(offsetof(Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3, ___mountedObjs_12)); }
	inline List_1_tB300DA7F74C122DA14BF710BCEC2B2CD29517240 * get_mountedObjs_12() const { return ___mountedObjs_12; }
	inline List_1_tB300DA7F74C122DA14BF710BCEC2B2CD29517240 ** get_address_of_mountedObjs_12() { return &___mountedObjs_12; }
	inline void set_mountedObjs_12(List_1_tB300DA7F74C122DA14BF710BCEC2B2CD29517240 * value)
	{
		___mountedObjs_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mountedObjs_12), (void*)value);
	}

	inline static int32_t get_offset_of_mountsLookup_13() { return static_cast<int32_t>(offsetof(Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3, ___mountsLookup_13)); }
	inline MountsManager_tE83682448FFBFC600B764AAB10AB5B5B82EDD0D2 * get_mountsLookup_13() const { return ___mountsLookup_13; }
	inline MountsManager_tE83682448FFBFC600B764AAB10AB5B5B82EDD0D2 ** get_address_of_mountsLookup_13() { return &___mountsLookup_13; }
	inline void set_mountsLookup_13(MountsManager_tE83682448FFBFC600B764AAB10AB5B5B82EDD0D2 * value)
	{
		___mountsLookup_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mountsLookup_13), (void*)value);
	}
};


// Photon.Pun.Simple.SyncObject
struct  SyncObject_t7B24897D57A467933F808982BE12F60F6AF2E102  : public NetComponent_t4FF50B37FAD5A9DB748A81D3F098888AA0344B6F
{
public:
	// System.Int32 Photon.Pun.Simple.SyncObject::_applyOrder
	int32_t ____applyOrder_9;
	// System.Int32 Photon.Pun.Simple.SyncObject::keyframeRate
	int32_t ___keyframeRate_10;
	// System.Boolean Photon.Pun.Simple.SyncObject::useDeltas
	bool ___useDeltas_11;
	// System.Boolean Photon.Pun.Simple.SyncObject::_alwaysReady
	bool ____alwaysReady_13;
	// System.Boolean Photon.Pun.Simple.SyncObject::serializeThis
	bool ___serializeThis_15;
	// System.Int32 Photon.Pun.Simple.SyncObject::syncObjIndex
	int32_t ___syncObjIndex_16;
	// Photon.Pun.Simple.ReadyStateEnum Photon.Pun.Simple.SyncObject::_readyState
	int32_t ____readyState_17;
	// System.Action`2<Photon.Pun.Simple.SyncObject,Photon.Pun.Simple.ReadyStateEnum> Photon.Pun.Simple.SyncObject::onReadyCallbacks
	Action_2_t35DF80DE3245693E3DB3CFEB7B004EB93353E3E8 * ___onReadyCallbacks_18;

public:
	inline static int32_t get_offset_of__applyOrder_9() { return static_cast<int32_t>(offsetof(SyncObject_t7B24897D57A467933F808982BE12F60F6AF2E102, ____applyOrder_9)); }
	inline int32_t get__applyOrder_9() const { return ____applyOrder_9; }
	inline int32_t* get_address_of__applyOrder_9() { return &____applyOrder_9; }
	inline void set__applyOrder_9(int32_t value)
	{
		____applyOrder_9 = value;
	}

	inline static int32_t get_offset_of_keyframeRate_10() { return static_cast<int32_t>(offsetof(SyncObject_t7B24897D57A467933F808982BE12F60F6AF2E102, ___keyframeRate_10)); }
	inline int32_t get_keyframeRate_10() const { return ___keyframeRate_10; }
	inline int32_t* get_address_of_keyframeRate_10() { return &___keyframeRate_10; }
	inline void set_keyframeRate_10(int32_t value)
	{
		___keyframeRate_10 = value;
	}

	inline static int32_t get_offset_of_useDeltas_11() { return static_cast<int32_t>(offsetof(SyncObject_t7B24897D57A467933F808982BE12F60F6AF2E102, ___useDeltas_11)); }
	inline bool get_useDeltas_11() const { return ___useDeltas_11; }
	inline bool* get_address_of_useDeltas_11() { return &___useDeltas_11; }
	inline void set_useDeltas_11(bool value)
	{
		___useDeltas_11 = value;
	}

	inline static int32_t get_offset_of__alwaysReady_13() { return static_cast<int32_t>(offsetof(SyncObject_t7B24897D57A467933F808982BE12F60F6AF2E102, ____alwaysReady_13)); }
	inline bool get__alwaysReady_13() const { return ____alwaysReady_13; }
	inline bool* get_address_of__alwaysReady_13() { return &____alwaysReady_13; }
	inline void set__alwaysReady_13(bool value)
	{
		____alwaysReady_13 = value;
	}

	inline static int32_t get_offset_of_serializeThis_15() { return static_cast<int32_t>(offsetof(SyncObject_t7B24897D57A467933F808982BE12F60F6AF2E102, ___serializeThis_15)); }
	inline bool get_serializeThis_15() const { return ___serializeThis_15; }
	inline bool* get_address_of_serializeThis_15() { return &___serializeThis_15; }
	inline void set_serializeThis_15(bool value)
	{
		___serializeThis_15 = value;
	}

	inline static int32_t get_offset_of_syncObjIndex_16() { return static_cast<int32_t>(offsetof(SyncObject_t7B24897D57A467933F808982BE12F60F6AF2E102, ___syncObjIndex_16)); }
	inline int32_t get_syncObjIndex_16() const { return ___syncObjIndex_16; }
	inline int32_t* get_address_of_syncObjIndex_16() { return &___syncObjIndex_16; }
	inline void set_syncObjIndex_16(int32_t value)
	{
		___syncObjIndex_16 = value;
	}

	inline static int32_t get_offset_of__readyState_17() { return static_cast<int32_t>(offsetof(SyncObject_t7B24897D57A467933F808982BE12F60F6AF2E102, ____readyState_17)); }
	inline int32_t get__readyState_17() const { return ____readyState_17; }
	inline int32_t* get_address_of__readyState_17() { return &____readyState_17; }
	inline void set__readyState_17(int32_t value)
	{
		____readyState_17 = value;
	}

	inline static int32_t get_offset_of_onReadyCallbacks_18() { return static_cast<int32_t>(offsetof(SyncObject_t7B24897D57A467933F808982BE12F60F6AF2E102, ___onReadyCallbacks_18)); }
	inline Action_2_t35DF80DE3245693E3DB3CFEB7B004EB93353E3E8 * get_onReadyCallbacks_18() const { return ___onReadyCallbacks_18; }
	inline Action_2_t35DF80DE3245693E3DB3CFEB7B004EB93353E3E8 ** get_address_of_onReadyCallbacks_18() { return &___onReadyCallbacks_18; }
	inline void set_onReadyCallbacks_18(Action_2_t35DF80DE3245693E3DB3CFEB7B004EB93353E3E8 * value)
	{
		___onReadyCallbacks_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onReadyCallbacks_18), (void*)value);
	}
};


// Photon.Pun.Simple.SyncObject`1<Photon.Pun.Simple.SyncAnimator/Frame>
struct  SyncObject_1_t0F5A284E6E5ACB7959B0A019E6A16D913AED94D1  : public SyncObject_t7B24897D57A467933F808982BE12F60F6AF2E102
{
public:
	// TFrame[] Photon.Pun.Simple.SyncObject`1::frames
	FrameU5BU5D_t2D2111B19433255C9498BDC56FF5E02C56705AA5* ___frames_19;
	// TFrame Photon.Pun.Simple.SyncObject`1::prevFrame
	Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * ___prevFrame_20;
	// TFrame Photon.Pun.Simple.SyncObject`1::snapFrame
	Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * ___snapFrame_21;
	// TFrame Photon.Pun.Simple.SyncObject`1::targFrame
	Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * ___targFrame_22;
	// TFrame Photon.Pun.Simple.SyncObject`1::offtickFrame
	Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * ___offtickFrame_23;
	// System.Boolean Photon.Pun.Simple.SyncObject`1::hadInitialSnapshot
	bool ___hadInitialSnapshot_24;

public:
	inline static int32_t get_offset_of_frames_19() { return static_cast<int32_t>(offsetof(SyncObject_1_t0F5A284E6E5ACB7959B0A019E6A16D913AED94D1, ___frames_19)); }
	inline FrameU5BU5D_t2D2111B19433255C9498BDC56FF5E02C56705AA5* get_frames_19() const { return ___frames_19; }
	inline FrameU5BU5D_t2D2111B19433255C9498BDC56FF5E02C56705AA5** get_address_of_frames_19() { return &___frames_19; }
	inline void set_frames_19(FrameU5BU5D_t2D2111B19433255C9498BDC56FF5E02C56705AA5* value)
	{
		___frames_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frames_19), (void*)value);
	}

	inline static int32_t get_offset_of_prevFrame_20() { return static_cast<int32_t>(offsetof(SyncObject_1_t0F5A284E6E5ACB7959B0A019E6A16D913AED94D1, ___prevFrame_20)); }
	inline Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * get_prevFrame_20() const { return ___prevFrame_20; }
	inline Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB ** get_address_of_prevFrame_20() { return &___prevFrame_20; }
	inline void set_prevFrame_20(Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * value)
	{
		___prevFrame_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prevFrame_20), (void*)value);
	}

	inline static int32_t get_offset_of_snapFrame_21() { return static_cast<int32_t>(offsetof(SyncObject_1_t0F5A284E6E5ACB7959B0A019E6A16D913AED94D1, ___snapFrame_21)); }
	inline Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * get_snapFrame_21() const { return ___snapFrame_21; }
	inline Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB ** get_address_of_snapFrame_21() { return &___snapFrame_21; }
	inline void set_snapFrame_21(Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * value)
	{
		___snapFrame_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___snapFrame_21), (void*)value);
	}

	inline static int32_t get_offset_of_targFrame_22() { return static_cast<int32_t>(offsetof(SyncObject_1_t0F5A284E6E5ACB7959B0A019E6A16D913AED94D1, ___targFrame_22)); }
	inline Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * get_targFrame_22() const { return ___targFrame_22; }
	inline Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB ** get_address_of_targFrame_22() { return &___targFrame_22; }
	inline void set_targFrame_22(Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * value)
	{
		___targFrame_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targFrame_22), (void*)value);
	}

	inline static int32_t get_offset_of_offtickFrame_23() { return static_cast<int32_t>(offsetof(SyncObject_1_t0F5A284E6E5ACB7959B0A019E6A16D913AED94D1, ___offtickFrame_23)); }
	inline Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * get_offtickFrame_23() const { return ___offtickFrame_23; }
	inline Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB ** get_address_of_offtickFrame_23() { return &___offtickFrame_23; }
	inline void set_offtickFrame_23(Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * value)
	{
		___offtickFrame_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offtickFrame_23), (void*)value);
	}

	inline static int32_t get_offset_of_hadInitialSnapshot_24() { return static_cast<int32_t>(offsetof(SyncObject_1_t0F5A284E6E5ACB7959B0A019E6A16D913AED94D1, ___hadInitialSnapshot_24)); }
	inline bool get_hadInitialSnapshot_24() const { return ___hadInitialSnapshot_24; }
	inline bool* get_address_of_hadInitialSnapshot_24() { return &___hadInitialSnapshot_24; }
	inline void set_hadInitialSnapshot_24(bool value)
	{
		___hadInitialSnapshot_24 = value;
	}
};


// Photon.Pun.Simple.SyncObject`1<Photon.Pun.Simple.SyncState/Frame>
struct  SyncObject_1_tBC6B0F9BD506AA4B05AF25106A40498A29F62EB1  : public SyncObject_t7B24897D57A467933F808982BE12F60F6AF2E102
{
public:
	// TFrame[] Photon.Pun.Simple.SyncObject`1::frames
	FrameU5BU5D_tF73231A1A61F89DC2184EC8CE7D4865A313A1513* ___frames_19;
	// TFrame Photon.Pun.Simple.SyncObject`1::prevFrame
	Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * ___prevFrame_20;
	// TFrame Photon.Pun.Simple.SyncObject`1::snapFrame
	Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * ___snapFrame_21;
	// TFrame Photon.Pun.Simple.SyncObject`1::targFrame
	Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * ___targFrame_22;
	// TFrame Photon.Pun.Simple.SyncObject`1::offtickFrame
	Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * ___offtickFrame_23;
	// System.Boolean Photon.Pun.Simple.SyncObject`1::hadInitialSnapshot
	bool ___hadInitialSnapshot_24;

public:
	inline static int32_t get_offset_of_frames_19() { return static_cast<int32_t>(offsetof(SyncObject_1_tBC6B0F9BD506AA4B05AF25106A40498A29F62EB1, ___frames_19)); }
	inline FrameU5BU5D_tF73231A1A61F89DC2184EC8CE7D4865A313A1513* get_frames_19() const { return ___frames_19; }
	inline FrameU5BU5D_tF73231A1A61F89DC2184EC8CE7D4865A313A1513** get_address_of_frames_19() { return &___frames_19; }
	inline void set_frames_19(FrameU5BU5D_tF73231A1A61F89DC2184EC8CE7D4865A313A1513* value)
	{
		___frames_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frames_19), (void*)value);
	}

	inline static int32_t get_offset_of_prevFrame_20() { return static_cast<int32_t>(offsetof(SyncObject_1_tBC6B0F9BD506AA4B05AF25106A40498A29F62EB1, ___prevFrame_20)); }
	inline Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * get_prevFrame_20() const { return ___prevFrame_20; }
	inline Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 ** get_address_of_prevFrame_20() { return &___prevFrame_20; }
	inline void set_prevFrame_20(Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * value)
	{
		___prevFrame_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prevFrame_20), (void*)value);
	}

	inline static int32_t get_offset_of_snapFrame_21() { return static_cast<int32_t>(offsetof(SyncObject_1_tBC6B0F9BD506AA4B05AF25106A40498A29F62EB1, ___snapFrame_21)); }
	inline Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * get_snapFrame_21() const { return ___snapFrame_21; }
	inline Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 ** get_address_of_snapFrame_21() { return &___snapFrame_21; }
	inline void set_snapFrame_21(Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * value)
	{
		___snapFrame_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___snapFrame_21), (void*)value);
	}

	inline static int32_t get_offset_of_targFrame_22() { return static_cast<int32_t>(offsetof(SyncObject_1_tBC6B0F9BD506AA4B05AF25106A40498A29F62EB1, ___targFrame_22)); }
	inline Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * get_targFrame_22() const { return ___targFrame_22; }
	inline Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 ** get_address_of_targFrame_22() { return &___targFrame_22; }
	inline void set_targFrame_22(Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * value)
	{
		___targFrame_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targFrame_22), (void*)value);
	}

	inline static int32_t get_offset_of_offtickFrame_23() { return static_cast<int32_t>(offsetof(SyncObject_1_tBC6B0F9BD506AA4B05AF25106A40498A29F62EB1, ___offtickFrame_23)); }
	inline Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * get_offtickFrame_23() const { return ___offtickFrame_23; }
	inline Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 ** get_address_of_offtickFrame_23() { return &___offtickFrame_23; }
	inline void set_offtickFrame_23(Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * value)
	{
		___offtickFrame_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offtickFrame_23), (void*)value);
	}

	inline static int32_t get_offset_of_hadInitialSnapshot_24() { return static_cast<int32_t>(offsetof(SyncObject_1_tBC6B0F9BD506AA4B05AF25106A40498A29F62EB1, ___hadInitialSnapshot_24)); }
	inline bool get_hadInitialSnapshot_24() const { return ___hadInitialSnapshot_24; }
	inline bool* get_address_of_hadInitialSnapshot_24() { return &___hadInitialSnapshot_24; }
	inline void set_hadInitialSnapshot_24(bool value)
	{
		___hadInitialSnapshot_24 = value;
	}
};


// Photon.Pun.Simple.SyncObject`1<Photon.Pun.Simple.SyncTransform/Frame>
struct  SyncObject_1_t315EDCC426BE4E9365F5CBC4091C1FEA16959EE5  : public SyncObject_t7B24897D57A467933F808982BE12F60F6AF2E102
{
public:
	// TFrame[] Photon.Pun.Simple.SyncObject`1::frames
	FrameU5BU5D_t24FA0A14C1B12A6680F23266AD2AEEFFCA2F0308* ___frames_19;
	// TFrame Photon.Pun.Simple.SyncObject`1::prevFrame
	Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * ___prevFrame_20;
	// TFrame Photon.Pun.Simple.SyncObject`1::snapFrame
	Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * ___snapFrame_21;
	// TFrame Photon.Pun.Simple.SyncObject`1::targFrame
	Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * ___targFrame_22;
	// TFrame Photon.Pun.Simple.SyncObject`1::offtickFrame
	Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * ___offtickFrame_23;
	// System.Boolean Photon.Pun.Simple.SyncObject`1::hadInitialSnapshot
	bool ___hadInitialSnapshot_24;

public:
	inline static int32_t get_offset_of_frames_19() { return static_cast<int32_t>(offsetof(SyncObject_1_t315EDCC426BE4E9365F5CBC4091C1FEA16959EE5, ___frames_19)); }
	inline FrameU5BU5D_t24FA0A14C1B12A6680F23266AD2AEEFFCA2F0308* get_frames_19() const { return ___frames_19; }
	inline FrameU5BU5D_t24FA0A14C1B12A6680F23266AD2AEEFFCA2F0308** get_address_of_frames_19() { return &___frames_19; }
	inline void set_frames_19(FrameU5BU5D_t24FA0A14C1B12A6680F23266AD2AEEFFCA2F0308* value)
	{
		___frames_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frames_19), (void*)value);
	}

	inline static int32_t get_offset_of_prevFrame_20() { return static_cast<int32_t>(offsetof(SyncObject_1_t315EDCC426BE4E9365F5CBC4091C1FEA16959EE5, ___prevFrame_20)); }
	inline Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * get_prevFrame_20() const { return ___prevFrame_20; }
	inline Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D ** get_address_of_prevFrame_20() { return &___prevFrame_20; }
	inline void set_prevFrame_20(Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * value)
	{
		___prevFrame_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prevFrame_20), (void*)value);
	}

	inline static int32_t get_offset_of_snapFrame_21() { return static_cast<int32_t>(offsetof(SyncObject_1_t315EDCC426BE4E9365F5CBC4091C1FEA16959EE5, ___snapFrame_21)); }
	inline Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * get_snapFrame_21() const { return ___snapFrame_21; }
	inline Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D ** get_address_of_snapFrame_21() { return &___snapFrame_21; }
	inline void set_snapFrame_21(Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * value)
	{
		___snapFrame_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___snapFrame_21), (void*)value);
	}

	inline static int32_t get_offset_of_targFrame_22() { return static_cast<int32_t>(offsetof(SyncObject_1_t315EDCC426BE4E9365F5CBC4091C1FEA16959EE5, ___targFrame_22)); }
	inline Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * get_targFrame_22() const { return ___targFrame_22; }
	inline Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D ** get_address_of_targFrame_22() { return &___targFrame_22; }
	inline void set_targFrame_22(Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * value)
	{
		___targFrame_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targFrame_22), (void*)value);
	}

	inline static int32_t get_offset_of_offtickFrame_23() { return static_cast<int32_t>(offsetof(SyncObject_1_t315EDCC426BE4E9365F5CBC4091C1FEA16959EE5, ___offtickFrame_23)); }
	inline Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * get_offtickFrame_23() const { return ___offtickFrame_23; }
	inline Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D ** get_address_of_offtickFrame_23() { return &___offtickFrame_23; }
	inline void set_offtickFrame_23(Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * value)
	{
		___offtickFrame_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offtickFrame_23), (void*)value);
	}

	inline static int32_t get_offset_of_hadInitialSnapshot_24() { return static_cast<int32_t>(offsetof(SyncObject_1_t315EDCC426BE4E9365F5CBC4091C1FEA16959EE5, ___hadInitialSnapshot_24)); }
	inline bool get_hadInitialSnapshot_24() const { return ___hadInitialSnapshot_24; }
	inline bool* get_address_of_hadInitialSnapshot_24() { return &___hadInitialSnapshot_24; }
	inline void set_hadInitialSnapshot_24(bool value)
	{
		___hadInitialSnapshot_24 = value;
	}
};


// Photon.Pun.Simple.VitalsContactReactor
struct  VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62  : public ContactReactorBase_t0D48513784675FB82C0866B7E3297FC80A301994
{
public:
	// Photon.Pun.Simple.VitalNameType Photon.Pun.Simple.VitalsContactReactor::vitalNameType
	VitalNameType_tBD6CE2BA5A56EBB8D1B36A3D37CD2141BE313777  ___vitalNameType_12;
	// System.Double Photon.Pun.Simple.VitalsContactReactor::dischargeOnEnter
	double ___dischargeOnEnter_13;
	// System.Double Photon.Pun.Simple.VitalsContactReactor::dischargeOnExit
	double ___dischargeOnExit_14;
	// System.Double Photon.Pun.Simple.VitalsContactReactor::dischargeOnScan
	double ___dischargeOnScan_15;
	// System.Double Photon.Pun.Simple.VitalsContactReactor::dischargePerSec
	double ___dischargePerSec_16;
	// System.Boolean Photon.Pun.Simple.VitalsContactReactor::propagate
	bool ___propagate_17;
	// System.Boolean Photon.Pun.Simple.VitalsContactReactor::allowOverload
	bool ___allowOverload_18;
	// System.Boolean Photon.Pun.Simple.VitalsContactReactor::isPickup
	bool ___isPickup_19;
	// System.Boolean Photon.Pun.Simple.VitalsContactReactor::useCharges
	bool ___useCharges_20;
	// System.Double Photon.Pun.Simple.VitalsContactReactor::_charges
	double ____charges_21;
	// System.Double Photon.Pun.Simple.VitalsContactReactor::initialCharges
	double ___initialCharges_22;
	// Photon.Pun.Simple.Consumption Photon.Pun.Simple.VitalsContactReactor::consumeDespawn
	int32_t ___consumeDespawn_23;
	// System.Double Photon.Pun.Simple.VitalsContactReactor::valuePerFixed
	double ___valuePerFixed_24;

public:
	inline static int32_t get_offset_of_vitalNameType_12() { return static_cast<int32_t>(offsetof(VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62, ___vitalNameType_12)); }
	inline VitalNameType_tBD6CE2BA5A56EBB8D1B36A3D37CD2141BE313777  get_vitalNameType_12() const { return ___vitalNameType_12; }
	inline VitalNameType_tBD6CE2BA5A56EBB8D1B36A3D37CD2141BE313777 * get_address_of_vitalNameType_12() { return &___vitalNameType_12; }
	inline void set_vitalNameType_12(VitalNameType_tBD6CE2BA5A56EBB8D1B36A3D37CD2141BE313777  value)
	{
		___vitalNameType_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___vitalNameType_12))->___name_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_dischargeOnEnter_13() { return static_cast<int32_t>(offsetof(VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62, ___dischargeOnEnter_13)); }
	inline double get_dischargeOnEnter_13() const { return ___dischargeOnEnter_13; }
	inline double* get_address_of_dischargeOnEnter_13() { return &___dischargeOnEnter_13; }
	inline void set_dischargeOnEnter_13(double value)
	{
		___dischargeOnEnter_13 = value;
	}

	inline static int32_t get_offset_of_dischargeOnExit_14() { return static_cast<int32_t>(offsetof(VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62, ___dischargeOnExit_14)); }
	inline double get_dischargeOnExit_14() const { return ___dischargeOnExit_14; }
	inline double* get_address_of_dischargeOnExit_14() { return &___dischargeOnExit_14; }
	inline void set_dischargeOnExit_14(double value)
	{
		___dischargeOnExit_14 = value;
	}

	inline static int32_t get_offset_of_dischargeOnScan_15() { return static_cast<int32_t>(offsetof(VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62, ___dischargeOnScan_15)); }
	inline double get_dischargeOnScan_15() const { return ___dischargeOnScan_15; }
	inline double* get_address_of_dischargeOnScan_15() { return &___dischargeOnScan_15; }
	inline void set_dischargeOnScan_15(double value)
	{
		___dischargeOnScan_15 = value;
	}

	inline static int32_t get_offset_of_dischargePerSec_16() { return static_cast<int32_t>(offsetof(VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62, ___dischargePerSec_16)); }
	inline double get_dischargePerSec_16() const { return ___dischargePerSec_16; }
	inline double* get_address_of_dischargePerSec_16() { return &___dischargePerSec_16; }
	inline void set_dischargePerSec_16(double value)
	{
		___dischargePerSec_16 = value;
	}

	inline static int32_t get_offset_of_propagate_17() { return static_cast<int32_t>(offsetof(VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62, ___propagate_17)); }
	inline bool get_propagate_17() const { return ___propagate_17; }
	inline bool* get_address_of_propagate_17() { return &___propagate_17; }
	inline void set_propagate_17(bool value)
	{
		___propagate_17 = value;
	}

	inline static int32_t get_offset_of_allowOverload_18() { return static_cast<int32_t>(offsetof(VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62, ___allowOverload_18)); }
	inline bool get_allowOverload_18() const { return ___allowOverload_18; }
	inline bool* get_address_of_allowOverload_18() { return &___allowOverload_18; }
	inline void set_allowOverload_18(bool value)
	{
		___allowOverload_18 = value;
	}

	inline static int32_t get_offset_of_isPickup_19() { return static_cast<int32_t>(offsetof(VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62, ___isPickup_19)); }
	inline bool get_isPickup_19() const { return ___isPickup_19; }
	inline bool* get_address_of_isPickup_19() { return &___isPickup_19; }
	inline void set_isPickup_19(bool value)
	{
		___isPickup_19 = value;
	}

	inline static int32_t get_offset_of_useCharges_20() { return static_cast<int32_t>(offsetof(VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62, ___useCharges_20)); }
	inline bool get_useCharges_20() const { return ___useCharges_20; }
	inline bool* get_address_of_useCharges_20() { return &___useCharges_20; }
	inline void set_useCharges_20(bool value)
	{
		___useCharges_20 = value;
	}

	inline static int32_t get_offset_of__charges_21() { return static_cast<int32_t>(offsetof(VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62, ____charges_21)); }
	inline double get__charges_21() const { return ____charges_21; }
	inline double* get_address_of__charges_21() { return &____charges_21; }
	inline void set__charges_21(double value)
	{
		____charges_21 = value;
	}

	inline static int32_t get_offset_of_initialCharges_22() { return static_cast<int32_t>(offsetof(VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62, ___initialCharges_22)); }
	inline double get_initialCharges_22() const { return ___initialCharges_22; }
	inline double* get_address_of_initialCharges_22() { return &___initialCharges_22; }
	inline void set_initialCharges_22(double value)
	{
		___initialCharges_22 = value;
	}

	inline static int32_t get_offset_of_consumeDespawn_23() { return static_cast<int32_t>(offsetof(VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62, ___consumeDespawn_23)); }
	inline int32_t get_consumeDespawn_23() const { return ___consumeDespawn_23; }
	inline int32_t* get_address_of_consumeDespawn_23() { return &___consumeDespawn_23; }
	inline void set_consumeDespawn_23(int32_t value)
	{
		___consumeDespawn_23 = value;
	}

	inline static int32_t get_offset_of_valuePerFixed_24() { return static_cast<int32_t>(offsetof(VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62, ___valuePerFixed_24)); }
	inline double get_valuePerFixed_24() const { return ___valuePerFixed_24; }
	inline double* get_address_of_valuePerFixed_24() { return &___valuePerFixed_24; }
	inline void set_valuePerFixed_24(double value)
	{
		___valuePerFixed_24 = value;
	}
};


// Photon.Pun.Simple.SyncAnimator
struct  SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4  : public SyncObject_1_t0F5A284E6E5ACB7959B0A019E6A16D913AED94D1
{
public:
	// System.Collections.Generic.List`1<System.Int32> Photon.Pun.Simple.SyncAnimator::sharedTriggIndexes
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___sharedTriggIndexes_27;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Photon.Pun.Simple.SyncAnimator::sharedTriggHashes
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___sharedTriggHashes_28;
	// System.Collections.Generic.List`1<System.Int32> Photon.Pun.Simple.SyncAnimator::sharedStateIndexes
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___sharedStateIndexes_31;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Photon.Pun.Simple.SyncAnimator::sharedStateHashes
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___sharedStateHashes_32;
	// UnityEngine.Animator Photon.Pun.Simple.SyncAnimator::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_33;
	// System.Boolean Photon.Pun.Simple.SyncAnimator::autoRootMotion
	bool ___autoRootMotion_34;
	// System.Boolean Photon.Pun.Simple.SyncAnimator::syncPassThrus
	bool ___syncPassThrus_35;
	// Photon.Compression.NormalizedFloatCompression Photon.Pun.Simple.SyncAnimator::passthruNormTimeCompress
	int32_t ___passthruNormTimeCompress_36;
	// System.Boolean Photon.Pun.Simple.SyncAnimator::syncStates
	bool ___syncStates_37;
	// Photon.Compression.NormalizedFloatCompression Photon.Pun.Simple.SyncAnimator::normalizedTimeCompress
	int32_t ___normalizedTimeCompress_38;
	// System.Boolean Photon.Pun.Simple.SyncAnimator::syncLayers
	bool ___syncLayers_39;
	// System.Boolean Photon.Pun.Simple.SyncAnimator::syncLayerWeights
	bool ___syncLayerWeights_40;
	// Photon.Compression.NormalizedFloatCompression Photon.Pun.Simple.SyncAnimator::layerWeightCompress
	int32_t ___layerWeightCompress_41;
	// System.Int32 Photon.Pun.Simple.SyncAnimator::layerCount
	int32_t ___layerCount_42;
	// System.Boolean Photon.Pun.Simple.SyncAnimator::syncParams
	bool ___syncParams_43;
	// System.Boolean Photon.Pun.Simple.SyncAnimator::useGlobalParamSettings
	bool ___useGlobalParamSettings_44;
	// Photon.Pun.Simple.Internal.ParameterDefaults Photon.Pun.Simple.SyncAnimator::sharedParamDefaults
	ParameterDefaults_t237F733650515BA27F7DCCABEAA2CF45A8F84E80 * ___sharedParamDefaults_46;
	// Photon.Pun.Simple.Internal.ParameterSettings[] Photon.Pun.Simple.SyncAnimator::sharedParamSettings
	ParameterSettingsU5BU5D_tE5019A989ADEB88A9581CFCCA4BB065EE26D9540* ___sharedParamSettings_48;
	// System.Int32 Photon.Pun.Simple.SyncAnimator::paramCount
	int32_t ___paramCount_49;
	// System.Int32 Photon.Pun.Simple.SyncAnimator::bitsForTriggerIndex
	int32_t ___bitsForTriggerIndex_50;
	// System.Int32 Photon.Pun.Simple.SyncAnimator::bitsForStateIndex
	int32_t ___bitsForStateIndex_51;
	// System.Int32 Photon.Pun.Simple.SyncAnimator::bitsForTransIndex
	int32_t ___bitsForTransIndex_52;
	// System.Int32 Photon.Pun.Simple.SyncAnimator::bitsForLayerIndex
	int32_t ___bitsForLayerIndex_53;
	// System.Boolean Photon.Pun.Simple.SyncAnimator::defaultRootMotion
	bool ___defaultRootMotion_54;
	// System.Int32[] Photon.Pun.Simple.SyncAnimator::lastAnimationHash
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___lastAnimationHash_55;
	// System.UInt32[] Photon.Pun.Simple.SyncAnimator::lastLayerWeight
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___lastLayerWeight_56;
	// Photon.Utilities.SmartVar[] Photon.Pun.Simple.SyncAnimator::lastSentParams
	SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE* ___lastSentParams_57;
	// Photon.Pun.Simple.SyncAnimator/Frame Photon.Pun.Simple.SyncAnimator::currentFrame
	Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * ___currentFrame_58;
	// System.Collections.Generic.Queue`1<Photon.Pun.Simple.AnimPassThru> Photon.Pun.Simple.SyncAnimator::passThruQueue
	Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8 * ___passThruQueue_62;

public:
	inline static int32_t get_offset_of_sharedTriggIndexes_27() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___sharedTriggIndexes_27)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_sharedTriggIndexes_27() const { return ___sharedTriggIndexes_27; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_sharedTriggIndexes_27() { return &___sharedTriggIndexes_27; }
	inline void set_sharedTriggIndexes_27(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___sharedTriggIndexes_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedTriggIndexes_27), (void*)value);
	}

	inline static int32_t get_offset_of_sharedTriggHashes_28() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___sharedTriggHashes_28)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_sharedTriggHashes_28() const { return ___sharedTriggHashes_28; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_sharedTriggHashes_28() { return &___sharedTriggHashes_28; }
	inline void set_sharedTriggHashes_28(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___sharedTriggHashes_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedTriggHashes_28), (void*)value);
	}

	inline static int32_t get_offset_of_sharedStateIndexes_31() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___sharedStateIndexes_31)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_sharedStateIndexes_31() const { return ___sharedStateIndexes_31; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_sharedStateIndexes_31() { return &___sharedStateIndexes_31; }
	inline void set_sharedStateIndexes_31(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___sharedStateIndexes_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedStateIndexes_31), (void*)value);
	}

	inline static int32_t get_offset_of_sharedStateHashes_32() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___sharedStateHashes_32)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_sharedStateHashes_32() const { return ___sharedStateHashes_32; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_sharedStateHashes_32() { return &___sharedStateHashes_32; }
	inline void set_sharedStateHashes_32(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___sharedStateHashes_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedStateHashes_32), (void*)value);
	}

	inline static int32_t get_offset_of_animator_33() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___animator_33)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_33() const { return ___animator_33; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_33() { return &___animator_33; }
	inline void set_animator_33(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_33), (void*)value);
	}

	inline static int32_t get_offset_of_autoRootMotion_34() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___autoRootMotion_34)); }
	inline bool get_autoRootMotion_34() const { return ___autoRootMotion_34; }
	inline bool* get_address_of_autoRootMotion_34() { return &___autoRootMotion_34; }
	inline void set_autoRootMotion_34(bool value)
	{
		___autoRootMotion_34 = value;
	}

	inline static int32_t get_offset_of_syncPassThrus_35() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___syncPassThrus_35)); }
	inline bool get_syncPassThrus_35() const { return ___syncPassThrus_35; }
	inline bool* get_address_of_syncPassThrus_35() { return &___syncPassThrus_35; }
	inline void set_syncPassThrus_35(bool value)
	{
		___syncPassThrus_35 = value;
	}

	inline static int32_t get_offset_of_passthruNormTimeCompress_36() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___passthruNormTimeCompress_36)); }
	inline int32_t get_passthruNormTimeCompress_36() const { return ___passthruNormTimeCompress_36; }
	inline int32_t* get_address_of_passthruNormTimeCompress_36() { return &___passthruNormTimeCompress_36; }
	inline void set_passthruNormTimeCompress_36(int32_t value)
	{
		___passthruNormTimeCompress_36 = value;
	}

	inline static int32_t get_offset_of_syncStates_37() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___syncStates_37)); }
	inline bool get_syncStates_37() const { return ___syncStates_37; }
	inline bool* get_address_of_syncStates_37() { return &___syncStates_37; }
	inline void set_syncStates_37(bool value)
	{
		___syncStates_37 = value;
	}

	inline static int32_t get_offset_of_normalizedTimeCompress_38() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___normalizedTimeCompress_38)); }
	inline int32_t get_normalizedTimeCompress_38() const { return ___normalizedTimeCompress_38; }
	inline int32_t* get_address_of_normalizedTimeCompress_38() { return &___normalizedTimeCompress_38; }
	inline void set_normalizedTimeCompress_38(int32_t value)
	{
		___normalizedTimeCompress_38 = value;
	}

	inline static int32_t get_offset_of_syncLayers_39() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___syncLayers_39)); }
	inline bool get_syncLayers_39() const { return ___syncLayers_39; }
	inline bool* get_address_of_syncLayers_39() { return &___syncLayers_39; }
	inline void set_syncLayers_39(bool value)
	{
		___syncLayers_39 = value;
	}

	inline static int32_t get_offset_of_syncLayerWeights_40() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___syncLayerWeights_40)); }
	inline bool get_syncLayerWeights_40() const { return ___syncLayerWeights_40; }
	inline bool* get_address_of_syncLayerWeights_40() { return &___syncLayerWeights_40; }
	inline void set_syncLayerWeights_40(bool value)
	{
		___syncLayerWeights_40 = value;
	}

	inline static int32_t get_offset_of_layerWeightCompress_41() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___layerWeightCompress_41)); }
	inline int32_t get_layerWeightCompress_41() const { return ___layerWeightCompress_41; }
	inline int32_t* get_address_of_layerWeightCompress_41() { return &___layerWeightCompress_41; }
	inline void set_layerWeightCompress_41(int32_t value)
	{
		___layerWeightCompress_41 = value;
	}

	inline static int32_t get_offset_of_layerCount_42() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___layerCount_42)); }
	inline int32_t get_layerCount_42() const { return ___layerCount_42; }
	inline int32_t* get_address_of_layerCount_42() { return &___layerCount_42; }
	inline void set_layerCount_42(int32_t value)
	{
		___layerCount_42 = value;
	}

	inline static int32_t get_offset_of_syncParams_43() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___syncParams_43)); }
	inline bool get_syncParams_43() const { return ___syncParams_43; }
	inline bool* get_address_of_syncParams_43() { return &___syncParams_43; }
	inline void set_syncParams_43(bool value)
	{
		___syncParams_43 = value;
	}

	inline static int32_t get_offset_of_useGlobalParamSettings_44() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___useGlobalParamSettings_44)); }
	inline bool get_useGlobalParamSettings_44() const { return ___useGlobalParamSettings_44; }
	inline bool* get_address_of_useGlobalParamSettings_44() { return &___useGlobalParamSettings_44; }
	inline void set_useGlobalParamSettings_44(bool value)
	{
		___useGlobalParamSettings_44 = value;
	}

	inline static int32_t get_offset_of_sharedParamDefaults_46() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___sharedParamDefaults_46)); }
	inline ParameterDefaults_t237F733650515BA27F7DCCABEAA2CF45A8F84E80 * get_sharedParamDefaults_46() const { return ___sharedParamDefaults_46; }
	inline ParameterDefaults_t237F733650515BA27F7DCCABEAA2CF45A8F84E80 ** get_address_of_sharedParamDefaults_46() { return &___sharedParamDefaults_46; }
	inline void set_sharedParamDefaults_46(ParameterDefaults_t237F733650515BA27F7DCCABEAA2CF45A8F84E80 * value)
	{
		___sharedParamDefaults_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedParamDefaults_46), (void*)value);
	}

	inline static int32_t get_offset_of_sharedParamSettings_48() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___sharedParamSettings_48)); }
	inline ParameterSettingsU5BU5D_tE5019A989ADEB88A9581CFCCA4BB065EE26D9540* get_sharedParamSettings_48() const { return ___sharedParamSettings_48; }
	inline ParameterSettingsU5BU5D_tE5019A989ADEB88A9581CFCCA4BB065EE26D9540** get_address_of_sharedParamSettings_48() { return &___sharedParamSettings_48; }
	inline void set_sharedParamSettings_48(ParameterSettingsU5BU5D_tE5019A989ADEB88A9581CFCCA4BB065EE26D9540* value)
	{
		___sharedParamSettings_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedParamSettings_48), (void*)value);
	}

	inline static int32_t get_offset_of_paramCount_49() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___paramCount_49)); }
	inline int32_t get_paramCount_49() const { return ___paramCount_49; }
	inline int32_t* get_address_of_paramCount_49() { return &___paramCount_49; }
	inline void set_paramCount_49(int32_t value)
	{
		___paramCount_49 = value;
	}

	inline static int32_t get_offset_of_bitsForTriggerIndex_50() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___bitsForTriggerIndex_50)); }
	inline int32_t get_bitsForTriggerIndex_50() const { return ___bitsForTriggerIndex_50; }
	inline int32_t* get_address_of_bitsForTriggerIndex_50() { return &___bitsForTriggerIndex_50; }
	inline void set_bitsForTriggerIndex_50(int32_t value)
	{
		___bitsForTriggerIndex_50 = value;
	}

	inline static int32_t get_offset_of_bitsForStateIndex_51() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___bitsForStateIndex_51)); }
	inline int32_t get_bitsForStateIndex_51() const { return ___bitsForStateIndex_51; }
	inline int32_t* get_address_of_bitsForStateIndex_51() { return &___bitsForStateIndex_51; }
	inline void set_bitsForStateIndex_51(int32_t value)
	{
		___bitsForStateIndex_51 = value;
	}

	inline static int32_t get_offset_of_bitsForTransIndex_52() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___bitsForTransIndex_52)); }
	inline int32_t get_bitsForTransIndex_52() const { return ___bitsForTransIndex_52; }
	inline int32_t* get_address_of_bitsForTransIndex_52() { return &___bitsForTransIndex_52; }
	inline void set_bitsForTransIndex_52(int32_t value)
	{
		___bitsForTransIndex_52 = value;
	}

	inline static int32_t get_offset_of_bitsForLayerIndex_53() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___bitsForLayerIndex_53)); }
	inline int32_t get_bitsForLayerIndex_53() const { return ___bitsForLayerIndex_53; }
	inline int32_t* get_address_of_bitsForLayerIndex_53() { return &___bitsForLayerIndex_53; }
	inline void set_bitsForLayerIndex_53(int32_t value)
	{
		___bitsForLayerIndex_53 = value;
	}

	inline static int32_t get_offset_of_defaultRootMotion_54() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___defaultRootMotion_54)); }
	inline bool get_defaultRootMotion_54() const { return ___defaultRootMotion_54; }
	inline bool* get_address_of_defaultRootMotion_54() { return &___defaultRootMotion_54; }
	inline void set_defaultRootMotion_54(bool value)
	{
		___defaultRootMotion_54 = value;
	}

	inline static int32_t get_offset_of_lastAnimationHash_55() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___lastAnimationHash_55)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_lastAnimationHash_55() const { return ___lastAnimationHash_55; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_lastAnimationHash_55() { return &___lastAnimationHash_55; }
	inline void set_lastAnimationHash_55(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___lastAnimationHash_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastAnimationHash_55), (void*)value);
	}

	inline static int32_t get_offset_of_lastLayerWeight_56() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___lastLayerWeight_56)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_lastLayerWeight_56() const { return ___lastLayerWeight_56; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_lastLayerWeight_56() { return &___lastLayerWeight_56; }
	inline void set_lastLayerWeight_56(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___lastLayerWeight_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastLayerWeight_56), (void*)value);
	}

	inline static int32_t get_offset_of_lastSentParams_57() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___lastSentParams_57)); }
	inline SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE* get_lastSentParams_57() const { return ___lastSentParams_57; }
	inline SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE** get_address_of_lastSentParams_57() { return &___lastSentParams_57; }
	inline void set_lastSentParams_57(SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE* value)
	{
		___lastSentParams_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastSentParams_57), (void*)value);
	}

	inline static int32_t get_offset_of_currentFrame_58() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___currentFrame_58)); }
	inline Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * get_currentFrame_58() const { return ___currentFrame_58; }
	inline Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB ** get_address_of_currentFrame_58() { return &___currentFrame_58; }
	inline void set_currentFrame_58(Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * value)
	{
		___currentFrame_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFrame_58), (void*)value);
	}

	inline static int32_t get_offset_of_passThruQueue_62() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4, ___passThruQueue_62)); }
	inline Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8 * get_passThruQueue_62() const { return ___passThruQueue_62; }
	inline Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8 ** get_address_of_passThruQueue_62() { return &___passThruQueue_62; }
	inline void set_passThruQueue_62(Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8 * value)
	{
		___passThruQueue_62 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___passThruQueue_62), (void*)value);
	}
};

struct SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>> Photon.Pun.Simple.SyncAnimator::masterSharedTriggHashes
	Dictionary_2_tCA11C60FEEFF0141FD46C8FEE5ED9A24894FA60D * ___masterSharedTriggHashes_25;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>> Photon.Pun.Simple.SyncAnimator::masterSharedTriggIndexes
	Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * ___masterSharedTriggIndexes_26;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>> Photon.Pun.Simple.SyncAnimator::masterSharedStateHashes
	Dictionary_2_tCA11C60FEEFF0141FD46C8FEE5ED9A24894FA60D * ___masterSharedStateHashes_29;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>> Photon.Pun.Simple.SyncAnimator::masterSharedStateIndexes
	Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * ___masterSharedStateIndexes_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Pun.Simple.Internal.ParameterDefaults> Photon.Pun.Simple.SyncAnimator::masterSharedParamDefaults
	Dictionary_2_tDF1974D4903BE6F640AC95F8FF2D5F5B16441CDD * ___masterSharedParamDefaults_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Pun.Simple.Internal.ParameterSettings[]> Photon.Pun.Simple.SyncAnimator::masterSharedParamSettings
	Dictionary_2_t04F7229211A4509803D31A1FB8066DE6E3CE649A * ___masterSharedParamSettings_47;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Stack`1<Photon.Pun.Simple.SyncAnimator/Frame[]>> Photon.Pun.Simple.SyncAnimator::masterSharedFramePool
	Dictionary_2_t453450E6A167FAC3A24AC937885F8E5E361FEDDD * ___masterSharedFramePool_59;
	// System.Collections.Generic.List`1<UnityEngine.Animator> Photon.Pun.Simple.SyncAnimator::foundAnimators
	List_1_t8726F3EB67930AF93439C3FE521CAC9E4BE0DD18 * ___foundAnimators_60;
	// System.Collections.Generic.List`1<Photon.Pun.Simple.SyncAnimator> Photon.Pun.Simple.SyncAnimator::foundSyncs
	List_1_t6357B4997BD48BC5C70F1A32A5476CE460F06BF9 * ___foundSyncs_61;

public:
	inline static int32_t get_offset_of_masterSharedTriggHashes_25() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4_StaticFields, ___masterSharedTriggHashes_25)); }
	inline Dictionary_2_tCA11C60FEEFF0141FD46C8FEE5ED9A24894FA60D * get_masterSharedTriggHashes_25() const { return ___masterSharedTriggHashes_25; }
	inline Dictionary_2_tCA11C60FEEFF0141FD46C8FEE5ED9A24894FA60D ** get_address_of_masterSharedTriggHashes_25() { return &___masterSharedTriggHashes_25; }
	inline void set_masterSharedTriggHashes_25(Dictionary_2_tCA11C60FEEFF0141FD46C8FEE5ED9A24894FA60D * value)
	{
		___masterSharedTriggHashes_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___masterSharedTriggHashes_25), (void*)value);
	}

	inline static int32_t get_offset_of_masterSharedTriggIndexes_26() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4_StaticFields, ___masterSharedTriggIndexes_26)); }
	inline Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * get_masterSharedTriggIndexes_26() const { return ___masterSharedTriggIndexes_26; }
	inline Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA ** get_address_of_masterSharedTriggIndexes_26() { return &___masterSharedTriggIndexes_26; }
	inline void set_masterSharedTriggIndexes_26(Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * value)
	{
		___masterSharedTriggIndexes_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___masterSharedTriggIndexes_26), (void*)value);
	}

	inline static int32_t get_offset_of_masterSharedStateHashes_29() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4_StaticFields, ___masterSharedStateHashes_29)); }
	inline Dictionary_2_tCA11C60FEEFF0141FD46C8FEE5ED9A24894FA60D * get_masterSharedStateHashes_29() const { return ___masterSharedStateHashes_29; }
	inline Dictionary_2_tCA11C60FEEFF0141FD46C8FEE5ED9A24894FA60D ** get_address_of_masterSharedStateHashes_29() { return &___masterSharedStateHashes_29; }
	inline void set_masterSharedStateHashes_29(Dictionary_2_tCA11C60FEEFF0141FD46C8FEE5ED9A24894FA60D * value)
	{
		___masterSharedStateHashes_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___masterSharedStateHashes_29), (void*)value);
	}

	inline static int32_t get_offset_of_masterSharedStateIndexes_30() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4_StaticFields, ___masterSharedStateIndexes_30)); }
	inline Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * get_masterSharedStateIndexes_30() const { return ___masterSharedStateIndexes_30; }
	inline Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA ** get_address_of_masterSharedStateIndexes_30() { return &___masterSharedStateIndexes_30; }
	inline void set_masterSharedStateIndexes_30(Dictionary_2_t6A09D48EA86C5F8C9091C5DBC03E3E69BF69C9CA * value)
	{
		___masterSharedStateIndexes_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___masterSharedStateIndexes_30), (void*)value);
	}

	inline static int32_t get_offset_of_masterSharedParamDefaults_45() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4_StaticFields, ___masterSharedParamDefaults_45)); }
	inline Dictionary_2_tDF1974D4903BE6F640AC95F8FF2D5F5B16441CDD * get_masterSharedParamDefaults_45() const { return ___masterSharedParamDefaults_45; }
	inline Dictionary_2_tDF1974D4903BE6F640AC95F8FF2D5F5B16441CDD ** get_address_of_masterSharedParamDefaults_45() { return &___masterSharedParamDefaults_45; }
	inline void set_masterSharedParamDefaults_45(Dictionary_2_tDF1974D4903BE6F640AC95F8FF2D5F5B16441CDD * value)
	{
		___masterSharedParamDefaults_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___masterSharedParamDefaults_45), (void*)value);
	}

	inline static int32_t get_offset_of_masterSharedParamSettings_47() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4_StaticFields, ___masterSharedParamSettings_47)); }
	inline Dictionary_2_t04F7229211A4509803D31A1FB8066DE6E3CE649A * get_masterSharedParamSettings_47() const { return ___masterSharedParamSettings_47; }
	inline Dictionary_2_t04F7229211A4509803D31A1FB8066DE6E3CE649A ** get_address_of_masterSharedParamSettings_47() { return &___masterSharedParamSettings_47; }
	inline void set_masterSharedParamSettings_47(Dictionary_2_t04F7229211A4509803D31A1FB8066DE6E3CE649A * value)
	{
		___masterSharedParamSettings_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___masterSharedParamSettings_47), (void*)value);
	}

	inline static int32_t get_offset_of_masterSharedFramePool_59() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4_StaticFields, ___masterSharedFramePool_59)); }
	inline Dictionary_2_t453450E6A167FAC3A24AC937885F8E5E361FEDDD * get_masterSharedFramePool_59() const { return ___masterSharedFramePool_59; }
	inline Dictionary_2_t453450E6A167FAC3A24AC937885F8E5E361FEDDD ** get_address_of_masterSharedFramePool_59() { return &___masterSharedFramePool_59; }
	inline void set_masterSharedFramePool_59(Dictionary_2_t453450E6A167FAC3A24AC937885F8E5E361FEDDD * value)
	{
		___masterSharedFramePool_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___masterSharedFramePool_59), (void*)value);
	}

	inline static int32_t get_offset_of_foundAnimators_60() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4_StaticFields, ___foundAnimators_60)); }
	inline List_1_t8726F3EB67930AF93439C3FE521CAC9E4BE0DD18 * get_foundAnimators_60() const { return ___foundAnimators_60; }
	inline List_1_t8726F3EB67930AF93439C3FE521CAC9E4BE0DD18 ** get_address_of_foundAnimators_60() { return &___foundAnimators_60; }
	inline void set_foundAnimators_60(List_1_t8726F3EB67930AF93439C3FE521CAC9E4BE0DD18 * value)
	{
		___foundAnimators_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foundAnimators_60), (void*)value);
	}

	inline static int32_t get_offset_of_foundSyncs_61() { return static_cast<int32_t>(offsetof(SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4_StaticFields, ___foundSyncs_61)); }
	inline List_1_t6357B4997BD48BC5C70F1A32A5476CE460F06BF9 * get_foundSyncs_61() const { return ___foundSyncs_61; }
	inline List_1_t6357B4997BD48BC5C70F1A32A5476CE460F06BF9 ** get_address_of_foundSyncs_61() { return &___foundSyncs_61; }
	inline void set_foundSyncs_61(List_1_t6357B4997BD48BC5C70F1A32A5476CE460F06BF9 * value)
	{
		___foundSyncs_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foundSyncs_61), (void*)value);
	}
};


// Photon.Pun.Simple.SyncState
struct  SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F  : public SyncObject_1_tBC6B0F9BD506AA4B05AF25106A40498A29F62EB1
{
public:
	// Photon.Pun.Simple.ObjState Photon.Pun.Simple.SyncState::initialState
	int32_t ___initialState_25;
	// Photon.Pun.Simple.ObjState Photon.Pun.Simple.SyncState::respawnState
	int32_t ___respawnState_26;
	// Photon.Pun.Simple.ObjState Photon.Pun.Simple.SyncState::readyState
	int32_t ___readyState_27;
	// Photon.Pun.Simple.ObjState Photon.Pun.Simple.SyncState::unreadyState
	int32_t ___unreadyState_28;
	// Photon.Pun.Simple.MountMaskSelector Photon.Pun.Simple.SyncState::mountableTo
	MountMaskSelector_tA65264EF350B155C4398A393D107F9CCE879128D  ___mountableTo_29;
	// System.Boolean Photon.Pun.Simple.SyncState::autoReset
	bool ___autoReset_30;
	// System.Boolean Photon.Pun.Simple.SyncState::autoOwnerChange
	bool ___autoOwnerChange_31;
	// System.Boolean Photon.Pun.Simple.SyncState::mountReliable
	bool ___mountReliable_32;
	// Photon.Pun.Simple.SyncState/Frame Photon.Pun.Simple.SyncState::currentState
	Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * ___currentState_33;
	// Photon.Pun.Simple.Mount Photon.Pun.Simple.SyncState::currentMount
	Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3 * ___currentMount_34;
	// System.Boolean Photon.Pun.Simple.SyncState::netObjIsReady
	bool ___netObjIsReady_35;
	// Photon.Pun.Simple.MountsManager Photon.Pun.Simple.SyncState::mountsLookup
	MountsManager_tE83682448FFBFC600B764AAB10AB5B5B82EDD0D2 * ___mountsLookup_36;
	// Photon.Pun.Simple.SyncTransform Photon.Pun.Simple.SyncState::syncTransform
	SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859 * ___syncTransform_37;
	// Photon.Pun.Simple.SyncOwner Photon.Pun.Simple.SyncState::syncOwner
	SyncOwner_t0CEF5B2B5474151C9C68A20664504B2B76621500 * ___syncOwner_38;
	// Photon.Pun.Simple.ISpawnController Photon.Pun.Simple.SyncState::iSpawnController
	RuntimeObject* ___iSpawnController_39;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Photon.Pun.Simple.SyncState::mountTypeIdToIndex
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___mountTypeIdToIndex_40;
	// System.Int32[] Photon.Pun.Simple.SyncState::indexToMountTypeId
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___indexToMountTypeId_41;
	// System.Int32 Photon.Pun.Simple.SyncState::bitsForMountType
	int32_t ___bitsForMountType_42;
	// Photon.Pun.Simple.StateChangeInfo Photon.Pun.Simple.SyncState::respawnStateInfo
	StateChangeInfo_t488DBF913F0D275D386E94764E155DAF09A16D28  ___respawnStateInfo_43;
	// System.Collections.Generic.List`1<Photon.Pun.Simple.IOnStateChange> Photon.Pun.Simple.SyncState::onStateChangeCallbacks
	List_1_t591CE6949DF4115FDBE32121ADDB7FF519E4A33F * ___onStateChangeCallbacks_44;
	// System.Collections.Generic.List`1<Photon.Pun.Simple.IFlagTeleport> Photon.Pun.Simple.SyncState::flagTeleportCallbacks
	List_1_t303673044E68C498FB6572DD56CD57FA7CDA5D49 * ___flagTeleportCallbacks_45;
	// System.Collections.Generic.Queue`1<Photon.Pun.Simple.StateChangeInfo> Photon.Pun.Simple.SyncState::stateChangeQueue
	Queue_1_t85279BE55A526BC5DC630F419AC104197D831261 * ___stateChangeQueue_46;
	// Photon.Pun.Simple.SyncState/Frame Photon.Pun.Simple.SyncState::prevSerializedFrame
	Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * ___prevSerializedFrame_47;

public:
	inline static int32_t get_offset_of_initialState_25() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___initialState_25)); }
	inline int32_t get_initialState_25() const { return ___initialState_25; }
	inline int32_t* get_address_of_initialState_25() { return &___initialState_25; }
	inline void set_initialState_25(int32_t value)
	{
		___initialState_25 = value;
	}

	inline static int32_t get_offset_of_respawnState_26() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___respawnState_26)); }
	inline int32_t get_respawnState_26() const { return ___respawnState_26; }
	inline int32_t* get_address_of_respawnState_26() { return &___respawnState_26; }
	inline void set_respawnState_26(int32_t value)
	{
		___respawnState_26 = value;
	}

	inline static int32_t get_offset_of_readyState_27() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___readyState_27)); }
	inline int32_t get_readyState_27() const { return ___readyState_27; }
	inline int32_t* get_address_of_readyState_27() { return &___readyState_27; }
	inline void set_readyState_27(int32_t value)
	{
		___readyState_27 = value;
	}

	inline static int32_t get_offset_of_unreadyState_28() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___unreadyState_28)); }
	inline int32_t get_unreadyState_28() const { return ___unreadyState_28; }
	inline int32_t* get_address_of_unreadyState_28() { return &___unreadyState_28; }
	inline void set_unreadyState_28(int32_t value)
	{
		___unreadyState_28 = value;
	}

	inline static int32_t get_offset_of_mountableTo_29() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___mountableTo_29)); }
	inline MountMaskSelector_tA65264EF350B155C4398A393D107F9CCE879128D  get_mountableTo_29() const { return ___mountableTo_29; }
	inline MountMaskSelector_tA65264EF350B155C4398A393D107F9CCE879128D * get_address_of_mountableTo_29() { return &___mountableTo_29; }
	inline void set_mountableTo_29(MountMaskSelector_tA65264EF350B155C4398A393D107F9CCE879128D  value)
	{
		___mountableTo_29 = value;
	}

	inline static int32_t get_offset_of_autoReset_30() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___autoReset_30)); }
	inline bool get_autoReset_30() const { return ___autoReset_30; }
	inline bool* get_address_of_autoReset_30() { return &___autoReset_30; }
	inline void set_autoReset_30(bool value)
	{
		___autoReset_30 = value;
	}

	inline static int32_t get_offset_of_autoOwnerChange_31() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___autoOwnerChange_31)); }
	inline bool get_autoOwnerChange_31() const { return ___autoOwnerChange_31; }
	inline bool* get_address_of_autoOwnerChange_31() { return &___autoOwnerChange_31; }
	inline void set_autoOwnerChange_31(bool value)
	{
		___autoOwnerChange_31 = value;
	}

	inline static int32_t get_offset_of_mountReliable_32() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___mountReliable_32)); }
	inline bool get_mountReliable_32() const { return ___mountReliable_32; }
	inline bool* get_address_of_mountReliable_32() { return &___mountReliable_32; }
	inline void set_mountReliable_32(bool value)
	{
		___mountReliable_32 = value;
	}

	inline static int32_t get_offset_of_currentState_33() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___currentState_33)); }
	inline Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * get_currentState_33() const { return ___currentState_33; }
	inline Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 ** get_address_of_currentState_33() { return &___currentState_33; }
	inline void set_currentState_33(Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * value)
	{
		___currentState_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentState_33), (void*)value);
	}

	inline static int32_t get_offset_of_currentMount_34() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___currentMount_34)); }
	inline Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3 * get_currentMount_34() const { return ___currentMount_34; }
	inline Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3 ** get_address_of_currentMount_34() { return &___currentMount_34; }
	inline void set_currentMount_34(Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3 * value)
	{
		___currentMount_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMount_34), (void*)value);
	}

	inline static int32_t get_offset_of_netObjIsReady_35() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___netObjIsReady_35)); }
	inline bool get_netObjIsReady_35() const { return ___netObjIsReady_35; }
	inline bool* get_address_of_netObjIsReady_35() { return &___netObjIsReady_35; }
	inline void set_netObjIsReady_35(bool value)
	{
		___netObjIsReady_35 = value;
	}

	inline static int32_t get_offset_of_mountsLookup_36() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___mountsLookup_36)); }
	inline MountsManager_tE83682448FFBFC600B764AAB10AB5B5B82EDD0D2 * get_mountsLookup_36() const { return ___mountsLookup_36; }
	inline MountsManager_tE83682448FFBFC600B764AAB10AB5B5B82EDD0D2 ** get_address_of_mountsLookup_36() { return &___mountsLookup_36; }
	inline void set_mountsLookup_36(MountsManager_tE83682448FFBFC600B764AAB10AB5B5B82EDD0D2 * value)
	{
		___mountsLookup_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mountsLookup_36), (void*)value);
	}

	inline static int32_t get_offset_of_syncTransform_37() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___syncTransform_37)); }
	inline SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859 * get_syncTransform_37() const { return ___syncTransform_37; }
	inline SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859 ** get_address_of_syncTransform_37() { return &___syncTransform_37; }
	inline void set_syncTransform_37(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859 * value)
	{
		___syncTransform_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncTransform_37), (void*)value);
	}

	inline static int32_t get_offset_of_syncOwner_38() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___syncOwner_38)); }
	inline SyncOwner_t0CEF5B2B5474151C9C68A20664504B2B76621500 * get_syncOwner_38() const { return ___syncOwner_38; }
	inline SyncOwner_t0CEF5B2B5474151C9C68A20664504B2B76621500 ** get_address_of_syncOwner_38() { return &___syncOwner_38; }
	inline void set_syncOwner_38(SyncOwner_t0CEF5B2B5474151C9C68A20664504B2B76621500 * value)
	{
		___syncOwner_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncOwner_38), (void*)value);
	}

	inline static int32_t get_offset_of_iSpawnController_39() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___iSpawnController_39)); }
	inline RuntimeObject* get_iSpawnController_39() const { return ___iSpawnController_39; }
	inline RuntimeObject** get_address_of_iSpawnController_39() { return &___iSpawnController_39; }
	inline void set_iSpawnController_39(RuntimeObject* value)
	{
		___iSpawnController_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iSpawnController_39), (void*)value);
	}

	inline static int32_t get_offset_of_mountTypeIdToIndex_40() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___mountTypeIdToIndex_40)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_mountTypeIdToIndex_40() const { return ___mountTypeIdToIndex_40; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_mountTypeIdToIndex_40() { return &___mountTypeIdToIndex_40; }
	inline void set_mountTypeIdToIndex_40(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___mountTypeIdToIndex_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mountTypeIdToIndex_40), (void*)value);
	}

	inline static int32_t get_offset_of_indexToMountTypeId_41() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___indexToMountTypeId_41)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_indexToMountTypeId_41() const { return ___indexToMountTypeId_41; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_indexToMountTypeId_41() { return &___indexToMountTypeId_41; }
	inline void set_indexToMountTypeId_41(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___indexToMountTypeId_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexToMountTypeId_41), (void*)value);
	}

	inline static int32_t get_offset_of_bitsForMountType_42() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___bitsForMountType_42)); }
	inline int32_t get_bitsForMountType_42() const { return ___bitsForMountType_42; }
	inline int32_t* get_address_of_bitsForMountType_42() { return &___bitsForMountType_42; }
	inline void set_bitsForMountType_42(int32_t value)
	{
		___bitsForMountType_42 = value;
	}

	inline static int32_t get_offset_of_respawnStateInfo_43() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___respawnStateInfo_43)); }
	inline StateChangeInfo_t488DBF913F0D275D386E94764E155DAF09A16D28  get_respawnStateInfo_43() const { return ___respawnStateInfo_43; }
	inline StateChangeInfo_t488DBF913F0D275D386E94764E155DAF09A16D28 * get_address_of_respawnStateInfo_43() { return &___respawnStateInfo_43; }
	inline void set_respawnStateInfo_43(StateChangeInfo_t488DBF913F0D275D386E94764E155DAF09A16D28  value)
	{
		___respawnStateInfo_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___respawnStateInfo_43))->___mount_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_onStateChangeCallbacks_44() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___onStateChangeCallbacks_44)); }
	inline List_1_t591CE6949DF4115FDBE32121ADDB7FF519E4A33F * get_onStateChangeCallbacks_44() const { return ___onStateChangeCallbacks_44; }
	inline List_1_t591CE6949DF4115FDBE32121ADDB7FF519E4A33F ** get_address_of_onStateChangeCallbacks_44() { return &___onStateChangeCallbacks_44; }
	inline void set_onStateChangeCallbacks_44(List_1_t591CE6949DF4115FDBE32121ADDB7FF519E4A33F * value)
	{
		___onStateChangeCallbacks_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onStateChangeCallbacks_44), (void*)value);
	}

	inline static int32_t get_offset_of_flagTeleportCallbacks_45() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___flagTeleportCallbacks_45)); }
	inline List_1_t303673044E68C498FB6572DD56CD57FA7CDA5D49 * get_flagTeleportCallbacks_45() const { return ___flagTeleportCallbacks_45; }
	inline List_1_t303673044E68C498FB6572DD56CD57FA7CDA5D49 ** get_address_of_flagTeleportCallbacks_45() { return &___flagTeleportCallbacks_45; }
	inline void set_flagTeleportCallbacks_45(List_1_t303673044E68C498FB6572DD56CD57FA7CDA5D49 * value)
	{
		___flagTeleportCallbacks_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flagTeleportCallbacks_45), (void*)value);
	}

	inline static int32_t get_offset_of_stateChangeQueue_46() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___stateChangeQueue_46)); }
	inline Queue_1_t85279BE55A526BC5DC630F419AC104197D831261 * get_stateChangeQueue_46() const { return ___stateChangeQueue_46; }
	inline Queue_1_t85279BE55A526BC5DC630F419AC104197D831261 ** get_address_of_stateChangeQueue_46() { return &___stateChangeQueue_46; }
	inline void set_stateChangeQueue_46(Queue_1_t85279BE55A526BC5DC630F419AC104197D831261 * value)
	{
		___stateChangeQueue_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateChangeQueue_46), (void*)value);
	}

	inline static int32_t get_offset_of_prevSerializedFrame_47() { return static_cast<int32_t>(offsetof(SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F, ___prevSerializedFrame_47)); }
	inline Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * get_prevSerializedFrame_47() const { return ___prevSerializedFrame_47; }
	inline Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 ** get_address_of_prevSerializedFrame_47() { return &___prevSerializedFrame_47; }
	inline void set_prevSerializedFrame_47(Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * value)
	{
		___prevSerializedFrame_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prevSerializedFrame_47), (void*)value);
	}
};


// Photon.Pun.Simple.SyncTransform
struct  SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859  : public SyncObject_1_t315EDCC426BE4E9365F5CBC4091C1FEA16959EE5
{
public:
	// Photon.Pun.Simple.Interpolation Photon.Pun.Simple.SyncTransform::interpolation
	int32_t ___interpolation_25;
	// System.Single Photon.Pun.Simple.SyncTransform::extrapolateRatio
	float ___extrapolateRatio_26;
	// System.Int32 Photon.Pun.Simple.SyncTransform::extrapolationCount
	int32_t ___extrapolationCount_27;
	// System.Single Photon.Pun.Simple.SyncTransform::teleportThreshold
	float ___teleportThreshold_28;
	// System.Single Photon.Pun.Simple.SyncTransform::teleportThresholdSqrMag
	float ___teleportThresholdSqrMag_29;
	// System.Boolean Photon.Pun.Simple.SyncTransform::teleportReliable
	bool ___teleportReliable_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Compression.TransformCrusher> Photon.Pun.Simple.SyncTransform::masterSharedCrushers
	Dictionary_2_t74B7F9A431614471D28DCFDCC770AF86E986F1A1 * ___masterSharedCrushers_31;
	// Photon.Compression.TransformCrusher Photon.Pun.Simple.SyncTransform::transformCrusher
	TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8 * ___transformCrusher_32;
	// System.Boolean Photon.Pun.Simple.SyncTransform::hasTeleported
	bool ___hasTeleported_33;
	// System.Int32 Photon.Pun.Simple.SyncTransform::teleNewParentId
	int32_t ___teleNewParentId_34;
	// Photon.Compression.Matrix Photon.Pun.Simple.SyncTransform::preTeleportM
	Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * ___preTeleportM_35;
	// Photon.Compression.CompressedMatrix Photon.Pun.Simple.SyncTransform::preTeleportCM
	CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * ___preTeleportCM_36;
	// UnityEngine.Rigidbody Photon.Pun.Simple.SyncTransform::rb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb_37;
	// UnityEngine.Rigidbody2D Photon.Pun.Simple.SyncTransform::rb2d
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb2d_38;
	// System.Collections.Generic.List`1<Photon.Pun.Simple.ITransformController> Photon.Pun.Simple.SyncTransform::iTransformControllers
	List_1_t104B7CDE85938BF258D534C10355FEF718189D9B * ___iTransformControllers_39;
	// System.Boolean Photon.Pun.Simple.SyncTransform::allowInterpolation
	bool ___allowInterpolation_40;
	// System.Boolean Photon.Pun.Simple.SyncTransform::allowReconstructionOfEmpty
	bool ___allowReconstructionOfEmpty_41;
	// Photon.Pun.Simple.SyncTransform/Frame Photon.Pun.Simple.SyncTransform::prevSentFrame
	Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * ___prevSentFrame_43;
	// System.Boolean Photon.Pun.Simple.SyncTransform::skipInterpolation
	bool ___skipInterpolation_44;

public:
	inline static int32_t get_offset_of_interpolation_25() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859, ___interpolation_25)); }
	inline int32_t get_interpolation_25() const { return ___interpolation_25; }
	inline int32_t* get_address_of_interpolation_25() { return &___interpolation_25; }
	inline void set_interpolation_25(int32_t value)
	{
		___interpolation_25 = value;
	}

	inline static int32_t get_offset_of_extrapolateRatio_26() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859, ___extrapolateRatio_26)); }
	inline float get_extrapolateRatio_26() const { return ___extrapolateRatio_26; }
	inline float* get_address_of_extrapolateRatio_26() { return &___extrapolateRatio_26; }
	inline void set_extrapolateRatio_26(float value)
	{
		___extrapolateRatio_26 = value;
	}

	inline static int32_t get_offset_of_extrapolationCount_27() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859, ___extrapolationCount_27)); }
	inline int32_t get_extrapolationCount_27() const { return ___extrapolationCount_27; }
	inline int32_t* get_address_of_extrapolationCount_27() { return &___extrapolationCount_27; }
	inline void set_extrapolationCount_27(int32_t value)
	{
		___extrapolationCount_27 = value;
	}

	inline static int32_t get_offset_of_teleportThreshold_28() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859, ___teleportThreshold_28)); }
	inline float get_teleportThreshold_28() const { return ___teleportThreshold_28; }
	inline float* get_address_of_teleportThreshold_28() { return &___teleportThreshold_28; }
	inline void set_teleportThreshold_28(float value)
	{
		___teleportThreshold_28 = value;
	}

	inline static int32_t get_offset_of_teleportThresholdSqrMag_29() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859, ___teleportThresholdSqrMag_29)); }
	inline float get_teleportThresholdSqrMag_29() const { return ___teleportThresholdSqrMag_29; }
	inline float* get_address_of_teleportThresholdSqrMag_29() { return &___teleportThresholdSqrMag_29; }
	inline void set_teleportThresholdSqrMag_29(float value)
	{
		___teleportThresholdSqrMag_29 = value;
	}

	inline static int32_t get_offset_of_teleportReliable_30() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859, ___teleportReliable_30)); }
	inline bool get_teleportReliable_30() const { return ___teleportReliable_30; }
	inline bool* get_address_of_teleportReliable_30() { return &___teleportReliable_30; }
	inline void set_teleportReliable_30(bool value)
	{
		___teleportReliable_30 = value;
	}

	inline static int32_t get_offset_of_masterSharedCrushers_31() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859, ___masterSharedCrushers_31)); }
	inline Dictionary_2_t74B7F9A431614471D28DCFDCC770AF86E986F1A1 * get_masterSharedCrushers_31() const { return ___masterSharedCrushers_31; }
	inline Dictionary_2_t74B7F9A431614471D28DCFDCC770AF86E986F1A1 ** get_address_of_masterSharedCrushers_31() { return &___masterSharedCrushers_31; }
	inline void set_masterSharedCrushers_31(Dictionary_2_t74B7F9A431614471D28DCFDCC770AF86E986F1A1 * value)
	{
		___masterSharedCrushers_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___masterSharedCrushers_31), (void*)value);
	}

	inline static int32_t get_offset_of_transformCrusher_32() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859, ___transformCrusher_32)); }
	inline TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8 * get_transformCrusher_32() const { return ___transformCrusher_32; }
	inline TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8 ** get_address_of_transformCrusher_32() { return &___transformCrusher_32; }
	inline void set_transformCrusher_32(TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8 * value)
	{
		___transformCrusher_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transformCrusher_32), (void*)value);
	}

	inline static int32_t get_offset_of_hasTeleported_33() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859, ___hasTeleported_33)); }
	inline bool get_hasTeleported_33() const { return ___hasTeleported_33; }
	inline bool* get_address_of_hasTeleported_33() { return &___hasTeleported_33; }
	inline void set_hasTeleported_33(bool value)
	{
		___hasTeleported_33 = value;
	}

	inline static int32_t get_offset_of_teleNewParentId_34() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859, ___teleNewParentId_34)); }
	inline int32_t get_teleNewParentId_34() const { return ___teleNewParentId_34; }
	inline int32_t* get_address_of_teleNewParentId_34() { return &___teleNewParentId_34; }
	inline void set_teleNewParentId_34(int32_t value)
	{
		___teleNewParentId_34 = value;
	}

	inline static int32_t get_offset_of_preTeleportM_35() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859, ___preTeleportM_35)); }
	inline Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * get_preTeleportM_35() const { return ___preTeleportM_35; }
	inline Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D ** get_address_of_preTeleportM_35() { return &___preTeleportM_35; }
	inline void set_preTeleportM_35(Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * value)
	{
		___preTeleportM_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preTeleportM_35), (void*)value);
	}

	inline static int32_t get_offset_of_preTeleportCM_36() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859, ___preTeleportCM_36)); }
	inline CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * get_preTeleportCM_36() const { return ___preTeleportCM_36; }
	inline CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 ** get_address_of_preTeleportCM_36() { return &___preTeleportCM_36; }
	inline void set_preTeleportCM_36(CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * value)
	{
		___preTeleportCM_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preTeleportCM_36), (void*)value);
	}

	inline static int32_t get_offset_of_rb_37() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859, ___rb_37)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rb_37() const { return ___rb_37; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rb_37() { return &___rb_37; }
	inline void set_rb_37(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rb_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_37), (void*)value);
	}

	inline static int32_t get_offset_of_rb2d_38() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859, ___rb2d_38)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb2d_38() const { return ___rb2d_38; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb2d_38() { return &___rb2d_38; }
	inline void set_rb2d_38(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb2d_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb2d_38), (void*)value);
	}

	inline static int32_t get_offset_of_iTransformControllers_39() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859, ___iTransformControllers_39)); }
	inline List_1_t104B7CDE85938BF258D534C10355FEF718189D9B * get_iTransformControllers_39() const { return ___iTransformControllers_39; }
	inline List_1_t104B7CDE85938BF258D534C10355FEF718189D9B ** get_address_of_iTransformControllers_39() { return &___iTransformControllers_39; }
	inline void set_iTransformControllers_39(List_1_t104B7CDE85938BF258D534C10355FEF718189D9B * value)
	{
		___iTransformControllers_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iTransformControllers_39), (void*)value);
	}

	inline static int32_t get_offset_of_allowInterpolation_40() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859, ___allowInterpolation_40)); }
	inline bool get_allowInterpolation_40() const { return ___allowInterpolation_40; }
	inline bool* get_address_of_allowInterpolation_40() { return &___allowInterpolation_40; }
	inline void set_allowInterpolation_40(bool value)
	{
		___allowInterpolation_40 = value;
	}

	inline static int32_t get_offset_of_allowReconstructionOfEmpty_41() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859, ___allowReconstructionOfEmpty_41)); }
	inline bool get_allowReconstructionOfEmpty_41() const { return ___allowReconstructionOfEmpty_41; }
	inline bool* get_address_of_allowReconstructionOfEmpty_41() { return &___allowReconstructionOfEmpty_41; }
	inline void set_allowReconstructionOfEmpty_41(bool value)
	{
		___allowReconstructionOfEmpty_41 = value;
	}

	inline static int32_t get_offset_of_prevSentFrame_43() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859, ___prevSentFrame_43)); }
	inline Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * get_prevSentFrame_43() const { return ___prevSentFrame_43; }
	inline Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D ** get_address_of_prevSentFrame_43() { return &___prevSentFrame_43; }
	inline void set_prevSentFrame_43(Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * value)
	{
		___prevSentFrame_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prevSentFrame_43), (void*)value);
	}

	inline static int32_t get_offset_of_skipInterpolation_44() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859, ___skipInterpolation_44)); }
	inline bool get_skipInterpolation_44() const { return ___skipInterpolation_44; }
	inline bool* get_address_of_skipInterpolation_44() { return &___skipInterpolation_44; }
	inline void set_skipInterpolation_44(bool value)
	{
		___skipInterpolation_44 = value;
	}
};

struct SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859_StaticFields
{
public:
	// System.Collections.Generic.Stack`1<Photon.Pun.Simple.SyncTransform/Frame[]> Photon.Pun.Simple.SyncTransform::framePool
	Stack_1_t962C62ED9D7441FC59BDAD687E10F44AD4182EA7 * ___framePool_42;

public:
	inline static int32_t get_offset_of_framePool_42() { return static_cast<int32_t>(offsetof(SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859_StaticFields, ___framePool_42)); }
	inline Stack_1_t962C62ED9D7441FC59BDAD687E10F44AD4182EA7 * get_framePool_42() const { return ___framePool_42; }
	inline Stack_1_t962C62ED9D7441FC59BDAD687E10F44AD4182EA7 ** get_address_of_framePool_42() { return &___framePool_42; }
	inline void set_framePool_42(Stack_1_t962C62ED9D7441FC59BDAD687E10F44AD4182EA7 * value)
	{
		___framePool_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___framePool_42), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Photon.Pun.Simple.Vital[]
struct VitalU5BU5D_t5426E6F8C0764BD2B3B30C930CF34CDA75880209  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vital_t586FF053894D99FD445559B8F8DCA864100D2694 * m_Items[1];

public:
	inline Vital_t586FF053894D99FD445559B8F8DCA864100D2694 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vital_t586FF053894D99FD445559B8F8DCA864100D2694 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vital_t586FF053894D99FD445559B8F8DCA864100D2694 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vital_t586FF053894D99FD445559B8F8DCA864100D2694 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vital_t586FF053894D99FD445559B8F8DCA864100D2694 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vital_t586FF053894D99FD445559B8F8DCA864100D2694 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Photon.Pun.Simple.VitalData[]
struct VitalDataU5BU5D_t2A6CD47FF154D3492828266C37A7DA84300781E1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) VitalData_tA56EE1CC99126DB6393FC3864D0996513295B764  m_Items[1];

public:
	inline VitalData_tA56EE1CC99126DB6393FC3864D0996513295B764  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VitalData_tA56EE1CC99126DB6393FC3864D0996513295B764 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VitalData_tA56EE1CC99126DB6393FC3864D0996513295B764  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline VitalData_tA56EE1CC99126DB6393FC3864D0996513295B764  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VitalData_tA56EE1CC99126DB6393FC3864D0996513295B764 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VitalData_tA56EE1CC99126DB6393FC3864D0996513295B764  value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Nullable`1<System.Int32>[]
struct Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  m_Items[1];

public:
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Nullable`1<System.Single>[]
struct Nullable_1U5BU5D_t02F1C69D15AC8D2407B9D63017EF6E7EC4AD5F94  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  m_Items[1];

public:
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  value)
	{
		m_Items[index] = value;
	}
};
// Photon.Utilities.SmartVar[]
struct SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7  m_Items[1];

public:
	inline SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7  value)
	{
		m_Items[index] = value;
	}
};
// Photon.Pun.Simple.Internal.ParameterSettings[]
struct ParameterSettingsU5BU5D_tE5019A989ADEB88A9581CFCCA4BB065EE26D9540  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C * m_Items[1];

public:
	inline ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInParent_TisRuntimeObject_m1CAE1DA88E1147164A44737BD03D5CB12DC73673_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// T Photon.Utilities.SettingsScriptableObject`1<System.Object>::get_Single()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * SettingsScriptableObject_1_get_Single_m78FF321F186CCBE2CE95D429152ACA53A4C78C8A_gshared (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void Photon.Utilities.SettingsScriptableObject`1<System.Object>::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsScriptableObject_1_Awake_m62E21262CEB2FC98B0687ACA52D38D519B9AA32F_gshared (SettingsScriptableObject_1_t8BA4325DD694E781F05BF45B519795A4725FB9D2 * __this, const RuntimeMethod* method);
// System.Void Photon.Utilities.SettingsScriptableObject`1<System.Object>::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsScriptableObject_1_Initialize_mB0A2ACCD0F87C8C4E6C35E87FFD9E6435B0603A1_gshared (SettingsScriptableObject_1_t8BA4325DD694E781F05BF45B519795A4725FB9D2 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void Photon.Utilities.SettingsScriptableObject`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsScriptableObject_1__ctor_m2BBA749F74CFC0485E882A0261B65A7FD1607A02_gshared (SettingsScriptableObject_1_t8BA4325DD694E781F05BF45B519795A4725FB9D2 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Photon.Pun.Simple.AnimPassThru>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m75A99D13119CD625499499D1AF9316082F3A8AB6_gshared (Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Photon.Pun.Simple.AnimPassThru>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mE4594350F95C173DE00F8553C336E6E13A552FAB_gshared (Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Photon.Pun.Simple.SyncContact/ContactRecord>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6F8B6AA388C0AFF3267DB8F619602B73B6CAA274_gshared (List_1_t0687FB5314E76736A3FC25D45C604675D7841B98 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Photon.Pun.Simple.SyncContact/ContactRecord>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m2621906F0BF46C40CA7DD9801F1FE0381F4F3B54_gshared (List_1_t0687FB5314E76736A3FC25D45C604675D7841B98 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);

// System.Void Photon.Pun.Simple.VitalNameType::.ctor(Photon.Pun.Simple.VitalType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VitalNameType__ctor_mC876ED832802B1CBD33D78041025EA8B93D5664C (VitalNameType_tBD6CE2BA5A56EBB8D1B36A3D37CD2141BE313777 * __this, int32_t ___vitalType0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5 (const RuntimeMethod* method);
// System.Double System.Math::Min(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Min_m029DC981252B020B92B6DEC21AF0D42C56FA12B9 (double ___val10, double ___val21, const RuntimeMethod* method);
// System.Double System.Math::Max(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Max_mA7AFB223891668427745BC854ACBC24849AEDCB6 (double ___val10, double ___val21, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Photon.Pun.Simple.SyncState::Despawn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncState_Despawn_m4C2D682B3B594D924E1802A09A5A8197F21E4825 (SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F * __this, bool ___immediate0, const RuntimeMethod* method);
// System.Void Photon.Pun.Simple.ContactReactorBase::OnAwakeInitialize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContactReactorBase_OnAwakeInitialize_mA56A46E0BCE189A1CA1E438CB662B9709057D626 (ContactReactorBase_t0D48513784675FB82C0866B7E3297FC80A301994 * __this, bool ___isNetObject0, const RuntimeMethod* method);
// System.Double Photon.Pun.Simple.VitalsContactReactor::GetValueForTriggerType(Photon.Pun.Simple.ContactType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VitalsContactReactor_GetValueForTriggerType_mA11BF8CD1D591D21418B77721CF24B57370B0C37 (VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62 * __this, int32_t ___collideType0, const RuntimeMethod* method);
// System.Double Photon.Pun.Simple.Vitals::ApplyCharges(Photon.Pun.Simple.VitalNameType,System.Double,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Vitals_ApplyCharges_m280C5B443E8CC4EF355C398CB429411D326BACCD (Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051 * __this, VitalNameType_tBD6CE2BA5A56EBB8D1B36A3D37CD2141BE313777  ___vitalNameType0, double ___discharge1, bool ___allowOverload2, bool ___propagate3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void Photon.Pun.Simple.SyncState::HardMount(Photon.Pun.Simple.Mount)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SyncState_HardMount_mC725B19C7EBCC105774C2BE234FCACFC52A356B8 (SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F * __this, Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3 * ___mountTo0, const RuntimeMethod* method);
// System.Void Photon.Pun.Simple.ContactReactorBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContactReactorBase__ctor_m83F6D724C0937C989EB88AC851864E476320CC78 (ContactReactorBase_t0D48513784675FB82C0866B7E3297FC80A301994 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// Photon.Pun.Simple.Vital[] Photon.Pun.Simple.Vitals::get_VitalArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VitalU5BU5D_t5426E6F8C0764BD2B3B30C930CF34CDA75880209* Vitals_get_VitalArray_mA4643474C5A8077A82B01EC7EFCA24594C771154 (Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<Photon.Pun.Simple.IVitalsSystem>()
inline RuntimeObject* Component_GetComponentInParent_TisIVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_m4B12C61FA139E87C2D6502FE04D3F2E5B9E44DB8 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// Photon.Pun.Simple.IVitalsSystem Photon.Pun.Simple.OwnedIVitals::get_LastItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OwnedIVitals_get_LastItem_mFCB2C9635EEB2E382E27AE4C6AE5B80F895029AC (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// Photon.Pun.Simple.IVitalsSystem Photon.Pun.Simple.VitalsUISrcBase::FindIVitalComponentOnGameObj(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VitalsUISrcBase_FindIVitalComponentOnGameObj_m0E41F926F3EA8C424545CD795F1AA3353249751A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInParent<Photon.Pun.Simple.IVitalsSystem>()
inline RuntimeObject* GameObject_GetComponentInParent_TisIVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_mA0D0B1560F29E5056618E7DC569891E977895510 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_m1CAE1DA88E1147164A44737BD03D5CB12DC73673_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponentInChildren<Photon.Pun.Simple.IVitalsSystem>()
inline RuntimeObject* GameObject_GetComponentInChildren_TisIVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_m61E66ABBF4EFDD765B04D575674E3D7467A8EB5E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void Photon.Compression.WorldBounds::CollectMyBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBounds_CollectMyBounds_mDCB260639C3A2FC0F21394C97773E30B06D451CB (WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * __this, const RuntimeMethod* method);
// T Photon.Utilities.SettingsScriptableObject`1<Photon.Compression.WorldBoundsSettings>::get_Single()
inline WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413 (const RuntimeMethod* method)
{
	return ((  WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * (*) (const RuntimeMethod*))SettingsScriptableObject_1_get_Single_m78FF321F186CCBE2CE95D429152ACA53A4C78C8A_gshared)(method);
}
// System.Int32 System.Collections.Generic.List`1<Photon.Compression.WorldBoundsGroup>::get_Count()
inline int32_t List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_inline (List_1_tB0271D7BC496632284188271857311907DE3C2C5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB0271D7BC496632284188271857311907DE3C2C5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void Photon.Compression.WorldBoundsGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBoundsGroup__ctor_m9A23912F71ECAD449CA5A143FCC3FBD61A41D1CD (WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Photon.Compression.WorldBoundsGroup>::Add(!0)
inline void List_1_Add_mA03A07B34817990E4F614133053B6946911A747D (List_1_tB0271D7BC496632284188271857311907DE3C2C5 * __this, WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB0271D7BC496632284188271857311907DE3C2C5 *, WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<Photon.Compression.WorldBoundsGroup>::get_Item(System.Int32)
inline WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_inline (List_1_tB0271D7BC496632284188271857311907DE3C2C5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * (*) (List_1_tB0271D7BC496632284188271857311907DE3C2C5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Bounds Photon.Utilities.BoundsTools::CollectMyBounds(UnityEngine.GameObject,Photon.Utilities.BoundsTools/BoundsType,System.Int32&,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  BoundsTools_CollectMyBounds_mB75F3CAA250D9D8B8D0C60DBA3C799D98740D8B3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, int32_t ___factorIn1, int32_t* ___numOfBoundsFound2, bool ___includeChildren3, bool ___includeInactive4, const RuntimeMethod* method);
// System.Void Photon.Compression.WorldBoundsSettings::RemoveWorldBoundsFromAll(Photon.Compression.WorldBounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBoundsSettings_RemoveWorldBoundsFromAll_mD4FC452212F60FB971FAE76495BC5CACE12F1C48 (WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * ___wb0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Photon.Compression.WorldBounds>::Contains(!0)
inline bool List_1_Contains_m59C658ABFA61B8697B191C95B5B251D1FCDF1EF7 (List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * __this, WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 *, WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 *, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Photon.Compression.WorldBounds>::Add(!0)
inline void List_1_Add_m5C2253D89AAEDB2F156EE5CE868174689166CD77 (List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * __this, WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 *, WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Photon.Compression.WorldBoundsGroup::RecalculateWorldCombinedBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBoundsGroup_RecalculateWorldCombinedBounds_m7101D109AD3319D47836A37A74D2505FE8F575A4 (WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void Photon.Compression.WorldBounds::FactorInBounds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBounds_FactorInBounds_mA9907E1B388293266CC626441D153D1E63C64821 (WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * __this, bool ___b0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_magenta_m46B928AB3005B062069E5DF9CB271E1373A29FE0 (const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Photon.Compression.WorldBounds>::Remove(!0)
inline bool List_1_Remove_mDD2174A6ECCF3232D7684F6BBA0304477232108D (List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * __this, WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 *, WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___size1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Photon.Compression.WorldBounds>::get_Count()
inline int32_t List_1_get_Count_m4D7C559BD5E6D9A5B3ABA831F9BFD0AA8E3FB439_inline (List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void Photon.Compression.ElementCrusher::.ctor(emotitron.Compression.TRSType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementCrusher__ctor_m5C1FB12430E6BBE6DC763B5EC6D73E1C6464DF19 (ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * __this, int32_t ___trsType0, bool ___enableTRSTypeSelector1, const RuntimeMethod* method);
// System.Void emotitron.Compression.FloatCrusher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatCrusher__ctor_m07A8A7E799A1A5AA7BAEE4E3FB90FC2F03D0C2AF (FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * __this, const RuntimeMethod* method);
// System.Void emotitron.Compression.FloatCrusher::set_Resolution(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatCrusher_set_Resolution_mC08E87FF3B986EF27AEFA6DD8B7FDD918072565E (FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void emotitron.Compression.FloatCrusher::set_BitsDeterminedBy(emotitron.Compression.BitsDeterminedBy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatCrusher_set_BitsDeterminedBy_m29AF2226CCE841AAEFBFBC7DBECB896352F87845 (FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Compression.ElementCrusher::set_XCrusher(emotitron.Compression.FloatCrusher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementCrusher_set_XCrusher_m893FBB1AE13F65BE1FFD5ECF008C20DFA302350E (ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * __this, FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * ___value0, const RuntimeMethod* method);
// System.Void Photon.Compression.ElementCrusher::set_YCrusher(emotitron.Compression.FloatCrusher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementCrusher_set_YCrusher_mFA4E7C0BFCFE7E3F19E9836A4E37AF270D4A36FA (ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * __this, FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * ___value0, const RuntimeMethod* method);
// System.Void Photon.Compression.ElementCrusher::set_ZCrusher(emotitron.Compression.FloatCrusher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementCrusher_set_ZCrusher_mED9C46362B139B88C37679F9911F814E66968A83 (ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * __this, FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Photon.Compression.WorldBounds>::Clear()
inline void List_1_Clear_mF386E60B86F2523BA7EA0F24D8D27264494D3AE4 (List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// emotitron.Compression.FloatCrusher Photon.Compression.ElementCrusher::get_XCrusher()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * ElementCrusher_get_XCrusher_m9CBE9161585467AF380BB937D37D07A78EB1BF48_inline (ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * __this, const RuntimeMethod* method);
// emotitron.Compression.FloatCrusher Photon.Compression.ElementCrusher::get_YCrusher()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * ElementCrusher_get_YCrusher_m2B5EDE4118B3A8766DEADF2A300D61BFE581060E_inline (ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * __this, const RuntimeMethod* method);
// emotitron.Compression.FloatCrusher Photon.Compression.ElementCrusher::get_ZCrusher()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * ElementCrusher_get_ZCrusher_m408681EAD7F5999B7BAA2C71BE46B914F5EC7A9E_inline (ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * __this, const RuntimeMethod* method);
// emotitron.Compression.BitsDeterminedBy emotitron.Compression.FloatCrusher::get_BitsDeterminedBy()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FloatCrusher_get_BitsDeterminedBy_m4CF5BE0134B950873A3190C1DC6077AC02B5752C_inline (FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Photon.Compression.WorldBounds>::get_Item(System.Int32)
inline WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * List_1_get_Item_mE314B863C38092DE523EC61F66576DE729BCF861_inline (List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * (*) (List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bounds_Encapsulate_mA1D113F56C635E1ACD53FCCB1C6C2560A295533B (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___bounds0, const RuntimeMethod* method);
// System.Void Photon.Compression.ElementCrusher::set_Bounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElementCrusher_set_Bounds_mDC84EF850076EE71BF9AB209CF0BB43BE6EFE767 (ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * __this, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___value0, const RuntimeMethod* method);
// Photon.Compression.ElementCrusher Photon.Compression.WorldBoundsGroup::GetUncompressedCrusher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * WorldBoundsGroup_GetUncompressedCrusher_m9B062777718606D82AADDA77EED6751F30D239FA (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Photon.Compression.WorldBounds>::.ctor()
inline void List_1__ctor_m11BB05CC6E3CA7B8014261AE077F5EBC67CDB4F6 (List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7 (PropertyAttribute_t4A352471DF625C56C811E27AC86B7E1CE6444052 * __this, const RuntimeMethod* method);
// System.Void Photon.Utilities.SettingsScriptableObject`1<Photon.Compression.WorldBoundsSettings>::Awake()
inline void SettingsScriptableObject_1_Awake_m9296BAB1C0962C1EA912FF70ABB6DDB789A92332 (SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8 * __this, const RuntimeMethod* method)
{
	((  void (*) (SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8 *, const RuntimeMethod*))SettingsScriptableObject_1_Awake_m62E21262CEB2FC98B0687ACA52D38D519B9AA32F_gshared)(__this, method);
}
// System.Void Photon.Utilities.SettingsScriptableObject`1<Photon.Compression.WorldBoundsSettings>::Initialize()
inline void SettingsScriptableObject_1_Initialize_m132C253E35C23610B8D46A20B9EFB39A389005A9 (SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8 * __this, const RuntimeMethod* method)
{
	((  void (*) (SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8 *, const RuntimeMethod*))SettingsScriptableObject_1_Initialize_mB0A2ACCD0F87C8C4E6C35E87FFD9E6435B0603A1_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Photon.Compression.WorldBoundsGroup>::GetEnumerator()
inline Enumerator_t143BC1A59EB51667AFDEAA4436A2DFF66FED8F73  List_1_GetEnumerator_mA09DDC5006958FA1324EB87154728392EA5E5611 (List_1_tB0271D7BC496632284188271857311907DE3C2C5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t143BC1A59EB51667AFDEAA4436A2DFF66FED8F73  (*) (List_1_tB0271D7BC496632284188271857311907DE3C2C5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Photon.Compression.WorldBoundsGroup>::get_Current()
inline WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * Enumerator_get_Current_m7095830EA1C0A4C58AB69E4951382C1DF8C8F638_inline (Enumerator_t143BC1A59EB51667AFDEAA4436A2DFF66FED8F73 * __this, const RuntimeMethod* method)
{
	return ((  WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * (*) (Enumerator_t143BC1A59EB51667AFDEAA4436A2DFF66FED8F73 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Photon.Compression.WorldBoundsGroup>::MoveNext()
inline bool Enumerator_MoveNext_m5C5091686BF15E13ADBBC0396CB616CA6456AE3B (Enumerator_t143BC1A59EB51667AFDEAA4436A2DFF66FED8F73 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t143BC1A59EB51667AFDEAA4436A2DFF66FED8F73 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Photon.Compression.WorldBoundsGroup>::Dispose()
inline void Enumerator_Dispose_m5E71B56A8CE695B1F4B9E4A9923F6E9D71E28CEB (Enumerator_t143BC1A59EB51667AFDEAA4436A2DFF66FED8F73 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t143BC1A59EB51667AFDEAA4436A2DFF66FED8F73 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Int32 emotitron.Compression.FloatCrusher::GetBits(emotitron.Compression.BitCullingLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FloatCrusher_GetBits_mE1F063FB6D2DDB8BA7E2E55D5788F9CA432A183D (FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * __this, int32_t ___bcl0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Photon.Compression.WorldBoundsGroup>::.ctor()
inline void List_1__ctor_m54492BA03A26FDA887EC48DB54ADF2F5CCFB6EDD (List_1_tB0271D7BC496632284188271857311907DE3C2C5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB0271D7BC496632284188271857311907DE3C2C5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Photon.Utilities.SettingsScriptableObject`1<Photon.Compression.WorldBoundsSettings>::.ctor()
inline void SettingsScriptableObject_1__ctor_m84DD8EDE5FE866EE12CBF54224E1EF322B5DA5CD (SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8 * __this, const RuntimeMethod* method)
{
	((  void (*) (SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8 *, const RuntimeMethod*))SettingsScriptableObject_1__ctor_m2BBA749F74CFC0485E882A0261B65A7FD1607A02_gshared)(__this, method);
}
// System.Void Shapes.FpsController::FixedUpdateManual()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FpsController_FixedUpdateManual_m912902D4D4ABE97C8EDF183F25A5B0437F11C1EE (FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Pun.Simple.NetMasterCallbacks/DelayedRegistrationItem::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelayedRegistrationItem__ctor_m7B9D08E5BA12F454397D1FEA43A0E2F7DC90B351 (DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE * __this, RuntimeObject * ___comp0, bool ___register1, const RuntimeMethod* method);
// System.Void Photon.Compression.NormCompress/NormCompressCodec::.ctor(System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NormCompressCodec__ctor_mD4D8272DDC0047F86ECB52692B25E736B8E1BC6F (NormCompressCodec_tD62E8590F63C7F752A1FAB45B5D2300A6548109D * __this, int32_t ___bits0, float ___encoder1, float ___decoder2, const RuntimeMethod* method);
// System.Void Photon.Pun.Simple.Pooling.Pool/PoolItemDef::.ctor(UnityEngine.GameObject,System.Int32,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolItemDef__ctor_mA72BFBDF08D5E78A7596872935D2F624D89AD3C4 (PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab0, int32_t ___growBy1, Type_t * ___scriptToAdd2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Photon.Pun.Simple.TRSDefinitionBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TRSDefinitionBase__ctor_m6BCB82AF91558D900C42526816F251C53CF0046E (TRSDefinitionBase_tA35EC340AFCB457FF024098F1AF0D59BCB6803D0 * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.Simple.FrameBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameBase__ctor_m03874791CDB2DC0140005769CDABA349A5396370 (FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.Simple.FrameBase::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameBase__ctor_mD76BE87E69C74515EE1BEBC2B5E852EC38289573 (FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * __this, int32_t ___frameId0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Photon.Pun.Simple.AnimPassThru>::.ctor(System.Int32)
inline void Queue_1__ctor_m75A99D13119CD625499499D1AF9316082F3A8AB6 (Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8 *, int32_t, const RuntimeMethod*))Queue_1__ctor_m75A99D13119CD625499499D1AF9316082F3A8AB6_gshared)(__this, ___capacity0, method);
}
// System.Void Photon.Pun.Simple.FrameBase::CopyFrom(Photon.Pun.Simple.FrameBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameBase_CopyFrom_m50DE3B0C96AA48AE6C49EAE39F782DCB7098D216 (FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * __this, FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * ___sourceFrame0, const RuntimeMethod* method);
// System.Void Photon.Pun.Simple.FrameBase::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameBase_Clear_m89D8155A85BBC229DFA55B99629FCA2ABF432F6D (FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<Photon.Pun.Simple.AnimPassThru>::Clear()
inline void Queue_1_Clear_mE4594350F95C173DE00F8553C336E6E13A552FAB (Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8 *, const RuntimeMethod*))Queue_1_Clear_mE4594350F95C173DE00F8553C336E6E13A552FAB_gshared)(__this, method);
}
// System.Void Photon.Pun.Simple.SyncContact/ContactRecord::.ctor(System.Int32,System.Byte,Photon.Pun.Simple.ContactType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContactRecord__ctor_m4655A562BCB10ADCAC747D6C27A25288C234DEAF (ContactRecord_tF317CB14AD69AF5461EA5C4ACD8670E0E93593B3 * __this, int32_t ___contactSystemViewID0, uint8_t ___contactSystemIndex1, int32_t ___contactType2, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.Byte::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m6A11C71EB9B8031596645EA1A4C2430721B282B5 (uint8_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String Photon.Pun.Simple.SyncContact/ContactRecord::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContactRecord_ToString_mEB3B9DA75F93A491D46B36EE169C3559E13619F8 (ContactRecord_tF317CB14AD69AF5461EA5C4ACD8670E0E93593B3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Photon.Pun.Simple.SyncContact/ContactRecord>::.ctor(System.Int32)
inline void List_1__ctor_m6F8B6AA388C0AFF3267DB8F619602B73B6CAA274 (List_1_t0687FB5314E76736A3FC25D45C604675D7841B98 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0687FB5314E76736A3FC25D45C604675D7841B98 *, int32_t, const RuntimeMethod*))List_1__ctor_m6F8B6AA388C0AFF3267DB8F619602B73B6CAA274_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<Photon.Pun.Simple.SyncContact/ContactRecord>::Clear()
inline void List_1_Clear_m2621906F0BF46C40CA7DD9801F1FE0381F4F3B54 (List_1_t0687FB5314E76736A3FC25D45C604675D7841B98 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0687FB5314E76736A3FC25D45C604675D7841B98 *, const RuntimeMethod*))List_1_Clear_m2621906F0BF46C40CA7DD9801F1FE0381F4F3B54_gshared)(__this, method);
}
// System.Void Photon.Pun.Simple.SyncContact/Frame::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_m7F299AB277D3DCE17DBE8233819FAF29984EDD60 (Frame_t816C8D5BCA2411AC31AA2C73E5334DA0FDB9B9ED * __this, int32_t ___frameId0, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// System.Void Photon.Compression.Matrix::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix__ctor_m092BA387C900662175C95A9325EDE9823EFEBBEA (Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * __this, const RuntimeMethod* method);
// System.Void Photon.Compression.CompressedMatrix::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressedMatrix__ctor_m064CFFFCCB7DDC4FF411FBF5E36C66DF6381DB5E (CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void Photon.Compression.TransformCrusher::Capture(UnityEngine.Transform,Photon.Compression.CompressedMatrix,Photon.Compression.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformCrusher_Capture_m1BF19E59E367AA33AD7EE4913D228BE90308C767 (TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___tr0, CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * ___cm1, Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * ___m2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void Photon.Compression.MatrixExtensions::CopyFrom(Photon.Compression.Matrix,Photon.Compression.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixExtensions_CopyFrom_mF4E0FFB8B5F99F427A93AD135EDB7F4159B023A1 (Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * ___target0, Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * ___src1, const RuntimeMethod* method);
// System.Void Photon.Compression.CompressedMatrix::CopyFrom(Photon.Compression.CompressedMatrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompressedMatrix_CopyFrom_m4629FB4AEE43E4B6AAB6B5ED222152D7C8EECB04 (CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * __this, CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * ___copySource0, const RuntimeMethod* method);
// System.Boolean Photon.Compression.CompressedMatrix::Equals(Photon.Compression.CompressedMatrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CompressedMatrix_Equals_mF1F1CC7679C6FFE682D9F6F077E82EAD927F36EA (CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * __this, CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Boolean Photon.Compression.Element::op_Equality(Photon.Compression.Element,Photon.Compression.Element)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Element_op_Equality_m777DE4C6EDA1898EB75BBFCBECA8302C665D7EA6 (Element_t3B6173E3F02244D529DFB937B971A87F1CEEECB5  ___a0, Element_t3B6173E3F02244D529DFB937B971A87F1CEEECB5  ___b1, const RuntimeMethod* method);
// System.String UnityEngine.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.String Photon.Compression.Element::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Element_ToString_mAA6A8DD9B0B97DA027CCBE4D9A11A85AA9E9CAFB (Element_t3B6173E3F02244D529DFB937B971A87F1CEEECB5 * __this, const RuntimeMethod* method);
// System.Void Photon.Pun.Simple.VitalsData::.ctor(Photon.Pun.Simple.Vitals)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VitalsData__ctor_m5C6C59B591B347B277D1239B12E9DB1A7048C9F9 (VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0 * __this, Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051 * ___vitals0, const RuntimeMethod* method);
// System.Void Photon.Pun.Simple.VitalsData::CopyFrom(Photon.Pun.Simple.VitalsData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VitalsData_CopyFrom_mEDE369637869CF7307A9549CCAF0487D6F5B5D67 (VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0 * __this, VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0 * ___source0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Photon.Pun.Simple.VitalNameType Photon.Pun.Simple.VitalsContactReactor::get_VitalNameType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VitalNameType_tBD6CE2BA5A56EBB8D1B36A3D37CD2141BE313777  VitalsContactReactor_get_VitalNameType_mD5FA4DFA76B1968838AA7325538E61DE99365D04 (VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62 * __this, const RuntimeMethod* method)
{
	{
		// virtual public VitalNameType VitalNameType { get { return new VitalNameType(VitalType.None); } }
		VitalNameType_tBD6CE2BA5A56EBB8D1B36A3D37CD2141BE313777  L_0;
		memset((&L_0), 0, sizeof(L_0));
		VitalNameType__ctor_mC876ED832802B1CBD33D78041025EA8B93D5664C((&L_0), 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Double Photon.Pun.Simple.VitalsContactReactor::get_DischargePerSec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VitalsContactReactor_get_DischargePerSec_m884D60E62EA942F1C74581253ACA05852B0682FC (VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62 * __this, const RuntimeMethod* method)
{
	{
		// return dischargePerSec;
		double L_0 = __this->get_dischargePerSec_16();
		return L_0;
	}
}
// System.Void Photon.Pun.Simple.VitalsContactReactor::set_DischargePerSec(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VitalsContactReactor_set_DischargePerSec_m1050F6A5B5F59D88E7581C3F3C86B3EB9372B372 (VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// valuePerFixed = value * Time.fixedDeltaTime;
		double L_0 = ___value0;
		float L_1;
		L_1 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		__this->set_valuePerFixed_24(((double)il2cpp_codegen_multiply((double)L_0, (double)((double)((double)L_1)))));
		// dischargePerSec = value;
		double L_2 = ___value0;
		__this->set_dischargePerSec_16(L_2);
		// }
		return;
	}
}
// System.Boolean Photon.Pun.Simple.VitalsContactReactor::get_Propagate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VitalsContactReactor_get_Propagate_m735599AB01BDD9F2CA8DD46BC5E4A7300535A067 (VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62 * __this, const RuntimeMethod* method)
{
	{
		// get { return propagate; }
		bool L_0 = __this->get_propagate_17();
		return L_0;
	}
}
// System.Void Photon.Pun.Simple.VitalsContactReactor::set_Propagate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VitalsContactReactor_set_Propagate_mC4032E90C1BBB9944CA4F0271ED2D52E76961E0D (VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { propagate = value; }
		bool L_0 = ___value0;
		__this->set_propagate_17(L_0);
		// set { propagate = value; }
		return;
	}
}
// System.Boolean Photon.Pun.Simple.VitalsContactReactor::get_AllowOverload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VitalsContactReactor_get_AllowOverload_mC41B938D4538FBED3D7BE085D967C5FCE7529E96 (VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62 * __this, const RuntimeMethod* method)
{
	{
		// get { return allowOverload; }
		bool L_0 = __this->get_allowOverload_18();
		return L_0;
	}
}
// System.Void Photon.Pun.Simple.VitalsContactReactor::set_AllowOverload(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VitalsContactReactor_set_AllowOverload_m75151A8243EDAC99C01A1EBCFE296FF97C147BE3 (VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { allowOverload = value; }
		bool L_0 = ___value0;
		__this->set_allowOverload_18(L_0);
		// set { allowOverload = value; }
		return;
	}
}
// System.Boolean Photon.Pun.Simple.VitalsContactReactor::get_IsPickup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VitalsContactReactor_get_IsPickup_m22A73F3B1EFF26950B39B0261D236CEE02824194 (VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62 * __this, const RuntimeMethod* method)
{
	{
		// public override bool IsPickup { get { return isPickup; } }
		bool L_0 = __this->get_isPickup_19();
		return L_0;
	}
}
// System.Double Photon.Pun.Simple.VitalsContactReactor::get_Charges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VitalsContactReactor_get_Charges_m9B6D52FECADC2D1680375247C318637EF10B1DE2 (VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62 * __this, const RuntimeMethod* method)
{
	{
		// get { return _charges; }
		double L_0 = __this->get__charges_21();
		return L_0;
	}
}
// Photon.Pun.Simple.Consumption Photon.Pun.Simple.VitalsContactReactor::ConsumeCharges(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VitalsContactReactor_ConsumeCharges_m29D1BB1D9D451773F8F962F63F107E30C3D47153 (VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62 * __this, double ___amount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double G_B5_0 = 0.0;
	{
		// if (amount == 0)
		double L_0 = ___amount0;
		if ((!(((double)L_0) == ((double)(0.0)))))
		{
			goto IL_000e;
		}
	}
	{
		// return Consumption.None;
		return (int32_t)(0);
	}

IL_000e:
	{
		// double unclamped = _charges - amount;
		double L_1 = __this->get__charges_21();
		double L_2 = ___amount0;
		V_0 = ((double)il2cpp_codegen_subtract((double)L_1, (double)L_2));
		// var clamped = ((initialCharges >= 0) ? System.Math.Max(unclamped, 0) : System.Math.Min(unclamped, 0));
		double L_3 = __this->get_initialCharges_22();
		if ((((double)L_3) >= ((double)(0.0))))
		{
			goto IL_0039;
		}
	}
	{
		double L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = Math_Min_m029DC981252B020B92B6DEC21AF0D42C56FA12B9(L_4, (0.0), /*hidden argument*/NULL);
		G_B5_0 = L_5;
		goto IL_0048;
	}

IL_0039:
	{
		double L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = Math_Max_mA7AFB223891668427745BC854ACBC24849AEDCB6(L_6, (0.0), /*hidden argument*/NULL);
		G_B5_0 = L_7;
	}

IL_0048:
	{
		V_1 = G_B5_0;
		// _charges = clamped;
		double L_8 = V_1;
		__this->set__charges_21(L_8);
		// if (/*useCharges && */clamped != initialCharges)
		double L_9 = V_1;
		double L_10 = __this->get_initialCharges_22();
		if ((((double)L_9) == ((double)L_10)))
		{
			goto IL_0069;
		}
	}
	{
		// return (clamped == 0) ? Consumption.All : Consumption.Partial;
		double L_11 = V_1;
		if ((((double)L_11) == ((double)(0.0))))
		{
			goto IL_0067;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0067:
	{
		return (int32_t)(3);
	}

IL_0069:
	{
		// return Consumption.None;
		return (int32_t)(0);
	}
}
// System.Void Photon.Pun.Simple.VitalsContactReactor::Consume(Photon.Pun.Simple.Consumption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VitalsContactReactor_Consume_m05247107E5F71D93D4979D1308EFD7E2251C0ACA (VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62 * __this, int32_t ___consumed0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (consumed == Consumption.None)
		int32_t L_0 = ___consumed0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		// return;
		return;
	}

IL_0004:
	{
		// if (consumeDespawn != Consumption.None && syncState != null)
		int32_t L_1 = __this->get_consumeDespawn_23();
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F * L_2 = ((ContactReactorBase_t0D48513784675FB82C0866B7E3297FC80A301994 *)__this)->get_syncState_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		// if (consumed == Consumption.All)
		int32_t L_4 = ___consumed0;
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_002b;
		}
	}
	{
		// syncState.Despawn(false);
		SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F * L_5 = ((ContactReactorBase_t0D48513784675FB82C0866B7E3297FC80A301994 *)__this)->get_syncState_10();
		NullCheck(L_5);
		SyncState_Despawn_m4C2D682B3B594D924E1802A09A5A8197F21E4825(L_5, (bool)0, /*hidden argument*/NULL);
		return;
	}

IL_002b:
	{
		// else if (consumeDespawn == Consumption.Partial)
		int32_t L_6 = __this->get_consumeDespawn_23();
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0040;
		}
	}
	{
		// syncState.Despawn(false);
		SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F * L_7 = ((ContactReactorBase_t0D48513784675FB82C0866B7E3297FC80A301994 *)__this)->get_syncState_10();
		NullCheck(L_7);
		SyncState_Despawn_m4C2D682B3B594D924E1802A09A5A8197F21E4825(L_7, (bool)0, /*hidden argument*/NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.Simple.VitalsContactReactor::OnAwakeInitialize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VitalsContactReactor_OnAwakeInitialize_m23722538A42232E034155ABF95F7CEDA7FC35D9C (VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62 * __this, bool ___isNetObject0, const RuntimeMethod* method)
{
	{
		// base.OnAwakeInitialize(isNetObject);
		bool L_0 = ___isNetObject0;
		ContactReactorBase_OnAwakeInitialize_mA56A46E0BCE189A1CA1E438CB662B9709057D626(__this, L_0, /*hidden argument*/NULL);
		// valuePerFixed = dischargePerSec * Time.fixedDeltaTime;
		double L_1 = __this->get_dischargePerSec_16();
		float L_2;
		L_2 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		__this->set_valuePerFixed_24(((double)il2cpp_codegen_multiply((double)L_1, (double)((double)((double)L_2)))));
		// }
		return;
	}
}
// Photon.Pun.Simple.Consumption Photon.Pun.Simple.VitalsContactReactor::ProcessContactEvent(Photon.Pun.Simple.ContactEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VitalsContactReactor_ProcessContactEvent_m671128B392FCA41293756EA3CC53455E046E763B (VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62 * __this, ContactEvent_t626CD0536CDB74CB6475D38893313349347F8313  ___contactEvent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IContactSystem_tFC388C83211FBB4DF5E7C89FBE67D917A4159F6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	double V_1 = 0.0;
	double V_2 = 0.0;
	int32_t V_3 = 0;
	Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3 * V_4 = NULL;
	{
		// var system = (contactEvent.contactSystem as IVitalsSystem);
		ContactEvent_t626CD0536CDB74CB6475D38893313349347F8313  L_0 = ___contactEvent0;
		RuntimeObject* L_1 = L_0.get_contactSystem_0();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_il2cpp_TypeInfo_var));
		// if (system == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		// return Consumption.None;
		return (int32_t)(0);
	}

IL_0011:
	{
		// double value = GetValueForTriggerType(contactEvent.contactType);
		ContactEvent_t626CD0536CDB74CB6475D38893313349347F8313  L_3 = ___contactEvent0;
		int32_t L_4 = L_3.get_contactType_2();
		double L_5;
		L_5 = VitalsContactReactor_GetValueForTriggerType_mA11BF8CD1D591D21418B77721CF24B57370B0C37(__this, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// double consumed = system.Vitals.ApplyCharges(vitalNameType, value, allowOverload, propagate);
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051 * L_7;
		L_7 = InterfaceFuncInvoker0< Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051 * >::Invoke(0 /* Photon.Pun.Simple.Vitals Photon.Pun.Simple.IVitalsSystem::get_Vitals() */, IVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_il2cpp_TypeInfo_var, L_6);
		VitalNameType_tBD6CE2BA5A56EBB8D1B36A3D37CD2141BE313777  L_8 = __this->get_vitalNameType_12();
		double L_9 = V_1;
		bool L_10 = __this->get_allowOverload_18();
		bool L_11 = __this->get_propagate_17();
		NullCheck(L_7);
		double L_12;
		L_12 = Vitals_ApplyCharges_m280C5B443E8CC4EF355C398CB429411D326BACCD(L_7, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		// if (useCharges)
		bool L_13 = __this->get_useCharges_20();
		if (!L_13)
		{
			goto IL_004f;
		}
	}
	{
		// consumption = ConsumeCharges(consumed);
		double L_14 = V_2;
		int32_t L_15;
		L_15 = VirtFuncInvoker1< int32_t, double >::Invoke(44 /* Photon.Pun.Simple.Consumption Photon.Pun.Simple.VitalsContactReactor::ConsumeCharges(System.Double) */, __this, L_14);
		V_3 = L_15;
		// }
		goto IL_0070;
	}

IL_004f:
	{
		// else if (consumed != 0)
		double L_16 = V_2;
		if ((((double)L_16) == ((double)(0.0))))
		{
			goto IL_006e;
		}
	}
	{
		// if (consumed == value)
		double L_17 = V_2;
		double L_18 = V_1;
		if ((!(((double)L_17) == ((double)L_18))))
		{
			goto IL_0063;
		}
	}
	{
		// consumption = Consumption.All;
		V_3 = 3;
		// }
		goto IL_0065;
	}

IL_0063:
	{
		// consumption = Consumption.Partial;
		V_3 = 1;
	}

IL_0065:
	{
		// Consume(consumption);
		int32_t L_19 = V_3;
		VirtActionInvoker1< int32_t >::Invoke(45 /* System.Void Photon.Pun.Simple.VitalsContactReactor::Consume(Photon.Pun.Simple.Consumption) */, __this, L_19);
		// }
		goto IL_0070;
	}

IL_006e:
	{
		// return Consumption.None;
		return (int32_t)(0);
	}

IL_0070:
	{
		// if (isPickup && consumption != Consumption.None)
		bool L_20 = __this->get_isPickup_19();
		if (!L_20)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_21 = V_3;
		if (!L_21)
		{
			goto IL_009b;
		}
	}
	{
		// Mount mount = system.TryPickup(this, contactEvent);
		RuntimeObject* L_22 = V_0;
		ContactEvent_t626CD0536CDB74CB6475D38893313349347F8313  L_23 = ___contactEvent0;
		NullCheck(L_22);
		Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3 * L_24;
		L_24 = InterfaceFuncInvoker2< Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3 *, RuntimeObject*, ContactEvent_t626CD0536CDB74CB6475D38893313349347F8313  >::Invoke(9 /* Photon.Pun.Simple.Mount Photon.Pun.Simple.IContactSystem::TryPickup(Photon.Pun.Simple.IContactReactor,Photon.Pun.Simple.ContactEvent) */, IContactSystem_tFC388C83211FBB4DF5E7C89FBE67D917A4159F6F_il2cpp_TypeInfo_var, L_22, __this, L_23);
		V_4 = L_24;
		// if (mount)
		Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3 * L_25 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_009b;
		}
	}
	{
		// syncState.HardMount(mount);
		SyncState_t535D902268714D2D08D842E7FEEC7D3F2EEC268F * L_27 = ((ContactReactorBase_t0D48513784675FB82C0866B7E3297FC80A301994 *)__this)->get_syncState_10();
		Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3 * L_28 = V_4;
		NullCheck(L_27);
		SyncState_HardMount_mC725B19C7EBCC105774C2BE234FCACFC52A356B8(L_27, L_28, /*hidden argument*/NULL);
	}

IL_009b:
	{
		// return consumption;
		int32_t L_29 = V_3;
		return L_29;
	}
}
// System.Void Photon.Pun.Simple.VitalsContactReactor::OnStateChange(Photon.Pun.Simple.ObjState,Photon.Pun.Simple.ObjState,UnityEngine.Transform,Photon.Pun.Simple.Mount,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VitalsContactReactor_OnStateChange_m2D34FBAA5652AC6FAC0E1D81F78744B99CA36197 (VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62 * __this, int32_t ___newState0, int32_t ___previousState1, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___attachmentTransform2, Mount_tF13088F7D4D32EF2291F98E88E55238E7E41EEE3 * ___attachTo3, bool ___isReady4, const RuntimeMethod* method)
{
	{
		// if (previousState == ObjState.Despawned && (newState & ObjState.Visible) != 0)
		int32_t L_0 = ___previousState1;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = ___newState0;
		if (!((int32_t)((int32_t)L_1&(int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		// _charges = initialCharges;
		double L_2 = __this->get_initialCharges_22();
		__this->set__charges_21(L_2);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Double Photon.Pun.Simple.VitalsContactReactor::DischargeValue(Photon.Pun.Simple.ContactType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VitalsContactReactor_DischargeValue_mF69415F14A8CD50A8C8F6EB5AE1614D839AE2CA6 (VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62 * __this, int32_t ___contactType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		int32_t L_0 = ___contactType0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0042;
			}
			case 3:
			{
				goto IL_0030;
			}
		}
	}
	{
		int32_t L_1 = ___contactType0;
		if ((((int32_t)L_1) == ((int32_t)8)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0042;
	}

IL_001e:
	{
		// discharge = dischargeOnEnter;
		double L_2 = __this->get_dischargeOnEnter_13();
		V_0 = L_2;
		// break;
		goto IL_004c;
	}

IL_0027:
	{
		// discharge = dischargePerSec;
		double L_3 = __this->get_dischargePerSec_16();
		V_0 = L_3;
		// break;
		goto IL_004c;
	}

IL_0030:
	{
		// discharge = dischargeOnExit;
		double L_4 = __this->get_dischargeOnExit_14();
		V_0 = L_4;
		// break;
		goto IL_004c;
	}

IL_0039:
	{
		// discharge = dischargeOnScan;
		double L_5 = __this->get_dischargeOnScan_15();
		V_0 = L_5;
		// break;
		goto IL_004c;
	}

IL_0042:
	{
		// discharge = 0;
		V_0 = (0.0);
	}

IL_004c:
	{
		// if (useCharges)
		bool L_6 = __this->get_useCharges_20();
		if (!L_6)
		{
			goto IL_007a;
		}
	}
	{
		// if (discharge >= 0)
		double L_7 = V_0;
		if ((!(((double)L_7) >= ((double)(0.0)))))
		{
			goto IL_006d;
		}
	}
	{
		// return System.Math.Min(discharge, _charges);
		double L_8 = V_0;
		double L_9 = __this->get__charges_21();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = Math_Min_m029DC981252B020B92B6DEC21AF0D42C56FA12B9(L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_006d:
	{
		// return System.Math.Max(discharge, _charges);
		double L_11 = V_0;
		double L_12 = __this->get__charges_21();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = Math_Max_mA7AFB223891668427745BC854ACBC24849AEDCB6(L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_007a:
	{
		// return discharge;
		double L_14 = V_0;
		return L_14;
	}
}
// System.Double Photon.Pun.Simple.VitalsContactReactor::GetValueForTriggerType(Photon.Pun.Simple.ContactType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VitalsContactReactor_GetValueForTriggerType_mA11BF8CD1D591D21418B77721CF24B57370B0C37 (VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62 * __this, int32_t ___collideType0, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		int32_t L_0 = ___collideType0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0042;
			}
			case 3:
			{
				goto IL_0030;
			}
		}
	}
	{
		int32_t L_1 = ___collideType0;
		if ((((int32_t)L_1) == ((int32_t)8)))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_0042;
	}

IL_001e:
	{
		// value = dischargeOnEnter; break;
		double L_2 = __this->get_dischargeOnEnter_13();
		V_0 = L_2;
		// value = dischargeOnEnter; break;
		goto IL_004c;
	}

IL_0027:
	{
		// value = valuePerFixed; break;
		double L_3 = __this->get_valuePerFixed_24();
		V_0 = L_3;
		// value = valuePerFixed; break;
		goto IL_004c;
	}

IL_0030:
	{
		// value = dischargeOnExit; break;
		double L_4 = __this->get_dischargeOnExit_14();
		V_0 = L_4;
		// value = dischargeOnExit; break;
		goto IL_004c;
	}

IL_0039:
	{
		// value = dischargeOnScan; break;
		double L_5 = __this->get_dischargeOnScan_15();
		V_0 = L_5;
		// value = dischargeOnScan; break;
		goto IL_004c;
	}

IL_0042:
	{
		// value = 0; break;
		V_0 = (0.0);
	}

IL_004c:
	{
		// return value;
		double L_6 = V_0;
		return L_6;
	}
}
// System.Void Photon.Pun.Simple.VitalsContactReactor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VitalsContactReactor__ctor_m916A5391002EA2DAE9E4F0204A96D4BB3787A708 (VitalsContactReactor_tC056FA8ADE5FD176F5710BBFAD886005BE0BAF62 * __this, const RuntimeMethod* method)
{
	{
		// protected VitalNameType vitalNameType = new VitalNameType(VitalType.Health);
		VitalNameType_tBD6CE2BA5A56EBB8D1B36A3D37CD2141BE313777  L_0;
		memset((&L_0), 0, sizeof(L_0));
		VitalNameType__ctor_mC876ED832802B1CBD33D78041025EA8B93D5664C((&L_0), 2, /*hidden argument*/NULL);
		__this->set_vitalNameType_12(L_0);
		// [HideInInspector] public double dischargeOnEnter = 20;
		__this->set_dischargeOnEnter_13((20.0));
		// [HideInInspector] public double dischargeOnExit = 20;
		__this->set_dischargeOnExit_14((20.0));
		// [HideInInspector] public double dischargeOnScan = 20;
		__this->set_dischargeOnScan_15((20.0));
		// [HideInInspector] protected double dischargePerSec = 20;
		__this->set_dischargePerSec_16((20.0));
		// protected bool isPickup = true;
		__this->set_isPickup_19((bool)1);
		// public double _charges = 50;
		__this->set__charges_21((50.0));
		// [SerializeField] protected double initialCharges = 50;
		__this->set_initialCharges_22((50.0));
		ContactReactorBase__ctor_m83F6D724C0937C989EB88AC851864E476320CC78(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Pun.Simple.VitalsData::.ctor(Photon.Pun.Simple.Vitals)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VitalsData__ctor_m5C6C59B591B347B277D1239B12E9DB1A7048C9F9 (VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0 * __this, Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051 * ___vitals0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VitalDataU5BU5D_t2A6CD47FF154D3492828266C37A7DA84300781E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public VitalsData(Vitals vitals)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.vitals = vitals;
		Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051 * L_0 = ___vitals0;
		__this->set_vitals_0(L_0);
		// datas = new VitalData[vitals.VitalArray.Length];
		Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051 * L_1 = ___vitals0;
		NullCheck(L_1);
		VitalU5BU5D_t5426E6F8C0764BD2B3B30C930CF34CDA75880209* L_2;
		L_2 = Vitals_get_VitalArray_mA4643474C5A8077A82B01EC7EFCA24594C771154(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		VitalDataU5BU5D_t2A6CD47FF154D3492828266C37A7DA84300781E1* L_3 = (VitalDataU5BU5D_t2A6CD47FF154D3492828266C37A7DA84300781E1*)(VitalDataU5BU5D_t2A6CD47FF154D3492828266C37A7DA84300781E1*)SZArrayNew(VitalDataU5BU5D_t2A6CD47FF154D3492828266C37A7DA84300781E1_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		__this->set_datas_1(L_3);
		// }
		return;
	}
}
// System.Void Photon.Pun.Simple.VitalsData::CopyFrom(Photon.Pun.Simple.VitalsData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VitalsData_CopyFrom_mEDE369637869CF7307A9549CCAF0487D6F5B5D67 (VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0 * __this, VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0 * ___source0, const RuntimeMethod* method)
{
	VitalDataU5BU5D_t2A6CD47FF154D3492828266C37A7DA84300781E1* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// var srcdatas = source.datas;
		VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0 * L_0 = ___source0;
		NullCheck(L_0);
		VitalDataU5BU5D_t2A6CD47FF154D3492828266C37A7DA84300781E1* L_1 = L_0->get_datas_1();
		V_0 = L_1;
		// for (int i = 0, cnt = srcdatas.Length; i < cnt; ++i)
		V_1 = 0;
		// for (int i = 0, cnt = srcdatas.Length; i < cnt; ++i)
		VitalDataU5BU5D_t2A6CD47FF154D3492828266C37A7DA84300781E1* L_2 = V_0;
		NullCheck(L_2);
		V_2 = ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		goto IL_0026;
	}

IL_000f:
	{
		// datas[i] = srcdatas[i];
		VitalDataU5BU5D_t2A6CD47FF154D3492828266C37A7DA84300781E1* L_3 = __this->get_datas_1();
		int32_t L_4 = V_1;
		VitalDataU5BU5D_t2A6CD47FF154D3492828266C37A7DA84300781E1* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		VitalData_tA56EE1CC99126DB6393FC3864D0996513295B764  L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (VitalData_tA56EE1CC99126DB6393FC3864D0996513295B764 )L_8);
		// for (int i = 0, cnt = srcdatas.Length; i < cnt; ++i)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0026:
	{
		// for (int i = 0, cnt = srcdatas.Length; i < cnt; ++i)
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000f;
		}
	}
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
// System.Void Photon.Pun.Simple.VitalsUISrcBase::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VitalsUISrcBase_Reset_mD0E6F8A96B60A62187512CADB4244A2047D3C647 (VitalsUISrcBase_t058A657A8B301F92A6AAE2F754EE326F4E69A575 * __this, const RuntimeMethod* method)
{
	{
		// ApplyVitalsSource(null);
		RuntimeObject* L_0;
		L_0 = VirtFuncInvoker1< RuntimeObject*, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * >::Invoke(7 /* Photon.Pun.Simple.IVitalsSystem Photon.Pun.Simple.VitalsUISrcBase::ApplyVitalsSource(UnityEngine.Object) */, __this, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL);
		// }
		return;
	}
}
// Photon.Pun.Simple.IVitalsSystem Photon.Pun.Simple.VitalsUISrcBase::ApplyVitalsSource(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VitalsUISrcBase_ApplyVitalsSource_mE22BA810C6C24BED5183FDC67FBA9CFF81F14566 (VitalsUISrcBase_t058A657A8B301F92A6AAE2F754EE326F4E69A575 * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___srcObj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisIVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_m4B12C61FA139E87C2D6502FE04D3F2E5B9E44DB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OwnedIVitals_t0CF7D7158031C66D4E4F8658D40CA92257B0396C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// if (monitor == MonitorSource.Auto)
		int32_t L_0 = __this->get_monitor_4();
		if (L_0)
		{
			goto IL_0041;
		}
	}
	{
		// if (srcObj == null)
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1 = ___srcObj0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// srcObj = (Object)GetComponentInParent<IVitalsSystem>();
		RuntimeObject* L_3;
		L_3 = Component_GetComponentInParent_TisIVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_m4B12C61FA139E87C2D6502FE04D3F2E5B9E44DB8(__this, /*hidden argument*/Component_GetComponentInParent_TisIVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_m4B12C61FA139E87C2D6502FE04D3F2E5B9E44DB8_RuntimeMethod_var);
		___srcObj0 = ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)CastclassClass((RuntimeObject*)L_3, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var));
		// monitor = MonitorSource.Self;
		__this->set_monitor_4(2);
	}

IL_0025:
	{
		// if (srcObj == null)
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_4 = ___srcObj0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		// srcObj = (Object)OwnedIVitals.LastItem;
		IL2CPP_RUNTIME_CLASS_INIT(OwnedIVitals_t0CF7D7158031C66D4E4F8658D40CA92257B0396C_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = OwnedIVitals_get_LastItem_mFCB2C9635EEB2E382E27AE4C6AE5B80F895029AC(/*hidden argument*/NULL);
		___srcObj0 = ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)CastclassClass((RuntimeObject*)L_6, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var));
		// monitor = MonitorSource.Owned;
		__this->set_monitor_4(1);
	}

IL_0041:
	{
		// if (monitor == MonitorSource.Owned)
		int32_t L_7 = __this->get_monitor_4();
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0059;
		}
	}
	{
		// var ownedVitals = OwnedIVitals.LastItem;
		IL2CPP_RUNTIME_CLASS_INIT(OwnedIVitals_t0CF7D7158031C66D4E4F8658D40CA92257B0396C_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = OwnedIVitals_get_LastItem_mFCB2C9635EEB2E382E27AE4C6AE5B80F895029AC(/*hidden argument*/NULL);
		// vitalsSrcComp = ownedVitals as Component;
		V_1 = ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)IsInstClass((RuntimeObject*)L_8, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684_il2cpp_TypeInfo_var));
		// vitalsSrcGO = null;
		V_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
		// }
		goto IL_0082;
	}

IL_0059:
	{
		// else if (monitor == MonitorSource.Self)
		int32_t L_9 = __this->get_monitor_4();
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_006d;
		}
	}
	{
		// vitalsSrcGO = gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		V_0 = L_10;
		// vitalsSrcComp = null;
		V_1 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)NULL;
		// }
		goto IL_0082;
	}

IL_006d:
	{
		// vitalsSource = srcObj;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_11 = ___srcObj0;
		__this->set_vitalsSource_5(L_11);
		// vitalsSrcGO = srcObj as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_12 = ___srcObj0;
		V_0 = ((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_12, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var));
		// vitalsSrcComp = srcObj as Component;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_13 = ___srcObj0;
		V_1 = ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)IsInstClass((RuntimeObject*)L_13, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684_il2cpp_TypeInfo_var));
	}

IL_0082:
	{
		// if (vitalsSrcGO)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00a7;
		}
	}
	{
		// vs = FindIVitalComponentOnGameObj(vitalsSrcGO);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_0;
		RuntimeObject* L_17;
		L_17 = VitalsUISrcBase_FindIVitalComponentOnGameObj_m0E41F926F3EA8C424545CD795F1AA3353249751A(L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		// if (vs != null)
		RuntimeObject* L_18 = V_2;
		if (!L_18)
		{
			goto IL_00d6;
		}
	}
	{
		// vitalsSource = (vs as Component).gameObject;
		RuntimeObject* L_19 = V_2;
		NullCheck(((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)IsInstClass((RuntimeObject*)L_19, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684_il2cpp_TypeInfo_var)));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)IsInstClass((RuntimeObject*)L_19, Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		__this->set_vitalsSource_5(L_20);
		// }
		goto IL_00d6;
	}

IL_00a7:
	{
		// else if (vitalsSrcComp)
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_21 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00cd;
		}
	}
	{
		// vs = vitalsSrcComp as IVitalsSystem;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_23 = V_1;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_il2cpp_TypeInfo_var));
		// if (monitor == MonitorSource.GameObject)
		int32_t L_24 = __this->get_monitor_4();
		if ((!(((uint32_t)L_24) == ((uint32_t)3))))
		{
			goto IL_00d6;
		}
	}
	{
		// vitalsSource = vitalsSrcComp.gameObject;
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_25 = V_1;
		NullCheck(L_25);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_25, /*hidden argument*/NULL);
		__this->set_vitalsSource_5(L_26);
		// }
		goto IL_00d6;
	}

IL_00cd:
	{
		// vs = null;
		V_2 = (RuntimeObject*)NULL;
		// vitalsSource = null;
		__this->set_vitalsSource_5((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL);
	}

IL_00d6:
	{
		// return vs;
		RuntimeObject* L_27 = V_2;
		return L_27;
	}
}
// Photon.Pun.Simple.IVitalsSystem Photon.Pun.Simple.VitalsUISrcBase::FindIVitalComponentOnGameObj(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VitalsUISrcBase_FindIVitalComponentOnGameObj_m0E41F926F3EA8C424545CD795F1AA3353249751A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisIVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_m61E66ABBF4EFDD765B04D575674E3D7467A8EB5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisIVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_mA0D0B1560F29E5056618E7DC569891E977895510_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (go)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___go0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// IVitalsSystem ivitalcomp = go.GetComponentInParent<IVitalsSystem>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___go0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = GameObject_GetComponentInParent_TisIVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_mA0D0B1560F29E5056618E7DC569891E977895510(L_2, /*hidden argument*/GameObject_GetComponentInParent_TisIVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_mA0D0B1560F29E5056618E7DC569891E977895510_RuntimeMethod_var);
		V_0 = L_3;
		// if (ivitalcomp == null)
		RuntimeObject* L_4 = V_0;
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		// ivitalcomp = go.GetComponentInChildren<IVitalsSystem>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = ___go0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = GameObject_GetComponentInChildren_TisIVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_m61E66ABBF4EFDD765B04D575674E3D7467A8EB5E(L_5, /*hidden argument*/GameObject_GetComponentInChildren_TisIVitalsSystem_tEB28DF6553852427782BDAA8947119B0284E1715_m61E66ABBF4EFDD765B04D575674E3D7467A8EB5E_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_0019:
	{
		// return ivitalcomp;
		RuntimeObject* L_7 = V_0;
		return L_7;
	}

IL_001b:
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// System.Void Photon.Pun.Simple.VitalsUISrcBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VitalsUISrcBase__ctor_mD351C36DDFAB9D35A3BA26B163556BE5FB61FC3C (VitalsUISrcBase_t058A657A8B301F92A6AAE2F754EE326F4E69A575 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.Bounds Photon.Compression.WorldBounds::get_ManualBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  WorldBounds_get_ManualBounds_mE6ED6F6A8DFCFE7D999F269149F5860148CD2690 (WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * __this, const RuntimeMethod* method)
{
	{
		// get { return manualBounds; }
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_0 = __this->get_manualBounds_4();
		return L_0;
	}
}
// System.Void Photon.Compression.WorldBounds::set_ManualBounds(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBounds_set_ManualBounds_m3B8B0BFA5DEC1199092A8E646055153D853870DE (WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * __this, Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___value0, const RuntimeMethod* method)
{
	{
		// manualBounds = value;
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_0 = ___value0;
		__this->set_manualBounds_4(L_0);
		// CollectMyBounds();
		WorldBounds_CollectMyBounds_mDCB260639C3A2FC0F21394C97773E30B06D451CB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Photon.Utilities.BoundsTools/BoundsType Photon.Compression.WorldBounds::get_FactorIn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorldBounds_get_FactorIn_m64C878D9892F00EE6D0587BACE4F0519C5B967F8 (WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * __this, const RuntimeMethod* method)
{
	{
		// get { return factorIn; }
		int32_t L_0 = __this->get_factorIn_7();
		return L_0;
	}
}
// System.Void Photon.Compression.WorldBounds::set_FactorIn(Photon.Utilities.BoundsTools/BoundsType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBounds_set_FactorIn_m10A55BBBC81BB9B5420719F2EE8A6D2BB3B2C40E (WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// factorIn = value;
		int32_t L_0 = ___value0;
		__this->set_factorIn_7(L_0);
		// CollectMyBounds();
		WorldBounds_CollectMyBounds_mDCB260639C3A2FC0F21394C97773E30B06D451CB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Compression.WorldBounds::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBounds_Awake_mF27E6E87DFE70FB3D5156CD3091E632D25BA9A2B (WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * __this, const RuntimeMethod* method)
{
	{
		// CollectMyBounds();
		WorldBounds_CollectMyBounds_mDCB260639C3A2FC0F21394C97773E30B06D451CB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Compression.WorldBounds::CollectMyBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBounds_CollectMyBounds_mDCB260639C3A2FC0F21394C97773E30B06D451CB (WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsTools_t53B5F83CFAD6AC296B2FC7103AEA487D0AA863AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5C2253D89AAEDB2F156EE5CE868174689166CD77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA03A07B34817990E4F614133053B6946911A747D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m59C658ABFA61B8697B191C95B5B251D1FCDF1EF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * V_0 = NULL;
	WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * V_1 = NULL;
	{
		// var wbso = WorldBoundsSettings.Single;
		IL2CPP_RUNTIME_CLASS_INIT(SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var);
		WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * L_0;
		L_0 = SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413(/*hidden argument*/SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413_RuntimeMethod_var);
		V_0 = L_0;
		// if (!wbso)
		WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (WorldBoundsSettings.Single.worldBoundsGroups.Count == 0)
		IL2CPP_RUNTIME_CLASS_INIT(SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var);
		WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * L_3;
		L_3 = SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413(/*hidden argument*/SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_4 = L_3->get_worldBoundsGroups_7();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_inline(L_4, /*hidden argument*/List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		// WorldBoundsSettings.Single.worldBoundsGroups.Add(new WorldBoundsGroup());
		IL2CPP_RUNTIME_CLASS_INIT(SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var);
		WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * L_6;
		L_6 = SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413(/*hidden argument*/SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413_RuntimeMethod_var);
		NullCheck(L_6);
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_7 = L_6->get_worldBoundsGroups_7();
		WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_8 = (WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD *)il2cpp_codegen_object_new(WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD_il2cpp_TypeInfo_var);
		WorldBoundsGroup__ctor_m9A23912F71ECAD449CA5A143FCC3FBD61A41D1CD(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		List_1_Add_mA03A07B34817990E4F614133053B6946911A747D(L_7, L_8, /*hidden argument*/List_1_Add_mA03A07B34817990E4F614133053B6946911A747D_RuntimeMethod_var);
	}

IL_0034:
	{
		// if (worldBoundsGrp >= WorldBoundsSettings.Single.worldBoundsGroups.Count)
		int32_t L_9 = __this->get_worldBoundsGrp_5();
		IL2CPP_RUNTIME_CLASS_INIT(SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var);
		WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * L_10;
		L_10 = SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413(/*hidden argument*/SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413_RuntimeMethod_var);
		NullCheck(L_10);
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_11 = L_10->get_worldBoundsGroups_7();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_inline(L_11, /*hidden argument*/List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_12)))
		{
			goto IL_0052;
		}
	}
	{
		// worldBoundsGrp = 0;
		__this->set_worldBoundsGrp_5(0);
	}

IL_0052:
	{
		// var grp = wbso.worldBoundsGroups[worldBoundsGrp];
		WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * L_13 = V_0;
		NullCheck(L_13);
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_14 = L_13->get_worldBoundsGroups_7();
		int32_t L_15 = __this->get_worldBoundsGrp_5();
		NullCheck(L_14);
		WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_16;
		L_16 = List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_RuntimeMethod_var);
		V_1 = L_16;
		// if (factorIn == BoundsTools.BoundsType.Manual)
		int32_t L_17 = __this->get_factorIn_7();
		if ((!(((uint32_t)L_17) == ((uint32_t)3))))
		{
			goto IL_0082;
		}
	}
	{
		// myBounds = manualBounds;
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_18 = __this->get_manualBounds_4();
		__this->set_myBounds_8(L_18);
		// myBoundsCount = 1;
		__this->set_myBoundsCount_9(1);
		// }
		goto IL_00a6;
	}

IL_0082:
	{
		// myBounds = BoundsTools.CollectMyBounds(gameObject, factorIn, out myBoundsCount, includeChildren, false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		int32_t L_20 = __this->get_factorIn_7();
		int32_t* L_21 = __this->get_address_of_myBoundsCount_9();
		bool L_22 = __this->get_includeChildren_6();
		IL2CPP_RUNTIME_CLASS_INIT(BoundsTools_t53B5F83CFAD6AC296B2FC7103AEA487D0AA863AA_il2cpp_TypeInfo_var);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_23;
		L_23 = BoundsTools_CollectMyBounds_mB75F3CAA250D9D8B8D0C60DBA3C799D98740D8B3(L_19, L_20, (int32_t*)L_21, L_22, (bool)0, /*hidden argument*/NULL);
		__this->set_myBounds_8(L_23);
	}

IL_00a6:
	{
		// WorldBoundsSettings.RemoveWorldBoundsFromAll(this);
		WorldBoundsSettings_RemoveWorldBoundsFromAll_mD4FC452212F60FB971FAE76495BC5CACE12F1C48(__this, /*hidden argument*/NULL);
		// if (myBoundsCount > 0 && enabled)
		int32_t L_24 = __this->get_myBoundsCount_9();
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_00dd;
		}
	}
	{
		bool L_25;
		L_25 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00dd;
		}
	}
	{
		// if (!grp.activeWorldBounds.Contains(this))
		WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_26 = V_1;
		NullCheck(L_26);
		List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * L_27 = L_26->get_activeWorldBounds_5();
		NullCheck(L_27);
		bool L_28;
		L_28 = List_1_Contains_m59C658ABFA61B8697B191C95B5B251D1FCDF1EF7(L_27, __this, /*hidden argument*/List_1_Contains_m59C658ABFA61B8697B191C95B5B251D1FCDF1EF7_RuntimeMethod_var);
		if (L_28)
		{
			goto IL_00dd;
		}
	}
	{
		// grp.activeWorldBounds.Add(this);
		WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_29 = V_1;
		NullCheck(L_29);
		List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * L_30 = L_29->get_activeWorldBounds_5();
		NullCheck(L_30);
		List_1_Add_m5C2253D89AAEDB2F156EE5CE868174689166CD77(L_30, __this, /*hidden argument*/List_1_Add_m5C2253D89AAEDB2F156EE5CE868174689166CD77_RuntimeMethod_var);
		// grp.RecalculateWorldCombinedBounds();
		WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_31 = V_1;
		NullCheck(L_31);
		WorldBoundsGroup_RecalculateWorldCombinedBounds_m7101D109AD3319D47836A37A74D2505FE8F575A4(L_31, /*hidden argument*/NULL);
	}

IL_00dd:
	{
		// if (OnWorldBoundsChange != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_32 = __this->get_OnWorldBoundsChange_10();
		if (!L_32)
		{
			goto IL_00f0;
		}
	}
	{
		// OnWorldBoundsChange();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_33 = __this->get_OnWorldBoundsChange_10();
		NullCheck(L_33);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_33, /*hidden argument*/NULL);
	}

IL_00f0:
	{
		// }
		return;
	}
}
// System.Void Photon.Compression.WorldBounds::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBounds_Start_m1BF2DD12C9D47C6C3E5D8D87E78669DC69D75E0B (WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Compression.WorldBounds::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBounds_OnEnable_m2EEE66F897FEF235F3EFA5BA80D60425DCF68201 (WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * __this, const RuntimeMethod* method)
{
	{
		// FactorInBounds(true);
		WorldBounds_FactorInBounds_mA9907E1B388293266CC626441D153D1E63C64821(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Compression.WorldBounds::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBounds_OnDisable_mD9A74F1D1A9B548EBB1C8783B09FE5B54F80FFB1 (WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * __this, const RuntimeMethod* method)
{
	{
		// FactorInBounds(false);
		WorldBounds_FactorInBounds_mA9907E1B388293266CC626441D153D1E63C64821(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Compression.WorldBounds::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBounds_OnDrawGizmosSelected_m83FF02DC2800E854736C3FB853A41F7E3184BFE9 (WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Gizmos.color = Color.magenta;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_magenta_m46B928AB3005B062069E5DF9CB271E1373A29FE0(/*hidden argument*/NULL);
		Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(L_0, /*hidden argument*/NULL);
		// Gizmos.DrawWireCube(
		//     WorldBoundsSettings.Single.worldBoundsGroups[worldBoundsGrp]._combinedWorldBounds.center,
		//     WorldBoundsSettings.Single.worldBoundsGroups[worldBoundsGrp]._combinedWorldBounds.size);
		IL2CPP_RUNTIME_CLASS_INIT(SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var);
		WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * L_1;
		L_1 = SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413(/*hidden argument*/SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413_RuntimeMethod_var);
		NullCheck(L_1);
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_2 = L_1->get_worldBoundsGroups_7();
		int32_t L_3 = __this->get_worldBoundsGrp_5();
		NullCheck(L_2);
		WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_4;
		L_4 = List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_RuntimeMethod_var);
		NullCheck(L_4);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_5 = L_4->get_address_of__combinedWorldBounds_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)L_5, /*hidden argument*/NULL);
		WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * L_7;
		L_7 = SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413(/*hidden argument*/SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413_RuntimeMethod_var);
		NullCheck(L_7);
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_8 = L_7->get_worldBoundsGroups_7();
		int32_t L_9 = __this->get_worldBoundsGrp_5();
		NullCheck(L_8);
		WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_10;
		L_10 = List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_inline(L_8, L_9, /*hidden argument*/List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_RuntimeMethod_var);
		NullCheck(L_10);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_11 = L_10->get_address_of__combinedWorldBounds_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)L_11, /*hidden argument*/NULL);
		Gizmos_DrawWireCube_mC526244E50C6E5793D4066C9C99023D5FF8424BF(L_6, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Compression.WorldBounds::FactorInBounds(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBounds_FactorInBounds_mA9907E1B388293266CC626441D153D1E63C64821 (WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * __this, bool ___b0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5C2253D89AAEDB2F156EE5CE868174689166CD77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m59C658ABFA61B8697B191C95B5B251D1FCDF1EF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mDD2174A6ECCF3232D7684F6BBA0304477232108D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * V_0 = NULL;
	{
		// if (this == null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(__this, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// if (worldBoundsGrp >= WorldBoundsSettings.Single.worldBoundsGroups.Count)
		int32_t L_1 = __this->get_worldBoundsGrp_5();
		IL2CPP_RUNTIME_CLASS_INIT(SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var);
		WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * L_2;
		L_2 = SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413(/*hidden argument*/SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413_RuntimeMethod_var);
		NullCheck(L_2);
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_3 = L_2->get_worldBoundsGroups_7();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_inline(L_3, /*hidden argument*/List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_RuntimeMethod_var);
		if ((((int32_t)L_1) < ((int32_t)L_4)))
		{
			goto IL_0028;
		}
	}
	{
		// worldBoundsGrp = 0;
		__this->set_worldBoundsGrp_5(0);
	}

IL_0028:
	{
		// var grp = WorldBoundsSettings.Single.worldBoundsGroups[worldBoundsGrp];
		IL2CPP_RUNTIME_CLASS_INIT(SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var);
		WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * L_5;
		L_5 = SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413(/*hidden argument*/SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413_RuntimeMethod_var);
		NullCheck(L_5);
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_6 = L_5->get_worldBoundsGroups_7();
		int32_t L_7 = __this->get_worldBoundsGrp_5();
		NullCheck(L_6);
		WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_8;
		L_8 = List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_RuntimeMethod_var);
		V_0 = L_8;
		// if (b)
		bool L_9 = ___b0;
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		// if (!grp.activeWorldBounds.Contains(this))
		WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_10 = V_0;
		NullCheck(L_10);
		List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * L_11 = L_10->get_activeWorldBounds_5();
		NullCheck(L_11);
		bool L_12;
		L_12 = List_1_Contains_m59C658ABFA61B8697B191C95B5B251D1FCDF1EF7(L_11, __this, /*hidden argument*/List_1_Contains_m59C658ABFA61B8697B191C95B5B251D1FCDF1EF7_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_006a;
		}
	}
	{
		// grp.activeWorldBounds.Add(this);
		WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_13 = V_0;
		NullCheck(L_13);
		List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * L_14 = L_13->get_activeWorldBounds_5();
		NullCheck(L_14);
		List_1_Add_m5C2253D89AAEDB2F156EE5CE868174689166CD77(L_14, __this, /*hidden argument*/List_1_Add_m5C2253D89AAEDB2F156EE5CE868174689166CD77_RuntimeMethod_var);
		// }
		goto IL_006a;
	}

IL_005d:
	{
		// grp.activeWorldBounds.Remove(this);
		WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_15 = V_0;
		NullCheck(L_15);
		List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * L_16 = L_15->get_activeWorldBounds_5();
		NullCheck(L_16);
		bool L_17;
		L_17 = List_1_Remove_mDD2174A6ECCF3232D7684F6BBA0304477232108D(L_16, __this, /*hidden argument*/List_1_Remove_mDD2174A6ECCF3232D7684F6BBA0304477232108D_RuntimeMethod_var);
	}

IL_006a:
	{
		// grp.RecalculateWorldCombinedBounds();
		WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_18 = V_0;
		NullCheck(L_18);
		WorldBoundsGroup_RecalculateWorldCombinedBounds_m7101D109AD3319D47836A37A74D2505FE8F575A4(L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Compression.WorldBounds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBounds__ctor_mC6A15601B21925D446DE888ED9D44A9A055C45A2 (WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * __this, const RuntimeMethod* method)
{
	{
		// private Bounds manualBounds = new Bounds(new Vector3(0,0,0), new Vector3(600, 40, 600));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (600.0f), (40.0f), (600.0f), /*hidden argument*/NULL);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3((&L_2), L_0, L_1, /*hidden argument*/NULL);
		__this->set_manualBounds_4(L_2);
		// private bool includeChildren = true;
		__this->set_includeChildren_6((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Int32 Photon.Compression.WorldBoundsGroup::get_ActiveBoundsObjCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorldBoundsGroup_get_ActiveBoundsObjCount_m8055FB6B8AFE597613E13D9AC0144B456509CC08 (WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4D7C559BD5E6D9A5B3ABA831F9BFD0AA8E3FB439_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int ActiveBoundsObjCount { get { return activeWorldBounds.Count; } }
		List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * L_0 = __this->get_activeWorldBounds_5();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4D7C559BD5E6D9A5B3ABA831F9BFD0AA8E3FB439_inline(L_0, /*hidden argument*/List_1_get_Count_m4D7C559BD5E6D9A5B3ABA831F9BFD0AA8E3FB439_RuntimeMethod_var);
		return L_1;
	}
}
// Photon.Compression.ElementCrusher Photon.Compression.WorldBoundsGroup::GetUncompressedCrusher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * WorldBoundsGroup_GetUncompressedCrusher_m9B062777718606D82AADDA77EED6751F30D239FA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ElementCrusher(TRSType.Position, false)
		// {
		//     enableLocalSelector = false,
		//     hideFieldName = true,
		//     XCrusher = new FloatCrusher() { axis = Axis.X, outOfBoundsHandling = OutOfBoundsHandling.Clamp, Resolution = 100, BitsDeterminedBy = BitsDeterminedBy.Uncompressed },
		//     YCrusher = new FloatCrusher() { axis = Axis.Y, outOfBoundsHandling = OutOfBoundsHandling.Clamp, Resolution = 100, BitsDeterminedBy = BitsDeterminedBy.Uncompressed },
		//     ZCrusher = new FloatCrusher() { axis = Axis.Z, outOfBoundsHandling = OutOfBoundsHandling.Clamp, Resolution = 100, BitsDeterminedBy = BitsDeterminedBy.Uncompressed }
		// };
		ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * L_0 = (ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 *)il2cpp_codegen_object_new(ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8_il2cpp_TypeInfo_var);
		ElementCrusher__ctor_m5C1FB12430E6BBE6DC763B5EC6D73E1C6464DF19(L_0, 0, (bool)0, /*hidden argument*/NULL);
		ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_enableLocalSelector_23((bool)0);
		ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * L_2 = L_1;
		NullCheck(L_2);
		L_2->set_hideFieldName_10((bool)1);
		ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * L_3 = L_2;
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_4 = (FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 *)il2cpp_codegen_object_new(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195_il2cpp_TypeInfo_var);
		FloatCrusher__ctor_m07A8A7E799A1A5AA7BAEE4E3FB90FC2F03D0C2AF(L_4, /*hidden argument*/NULL);
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_5 = L_4;
		NullCheck(L_5);
		L_5->set_axis_6(0);
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_6 = L_5;
		NullCheck(L_6);
		L_6->set_outOfBoundsHandling_12(1);
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_7 = L_6;
		NullCheck(L_7);
		FloatCrusher_set_Resolution_mC08E87FF3B986EF27AEFA6DD8B7FDD918072565E(L_7, ((int64_t)((int64_t)((int32_t)100))), /*hidden argument*/NULL);
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_8 = L_7;
		NullCheck(L_8);
		FloatCrusher_set_BitsDeterminedBy_m29AF2226CCE841AAEFBFBC7DBECB896352F87845(L_8, ((int32_t)-5), /*hidden argument*/NULL);
		NullCheck(L_3);
		ElementCrusher_set_XCrusher_m893FBB1AE13F65BE1FFD5ECF008C20DFA302350E(L_3, L_8, /*hidden argument*/NULL);
		ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * L_9 = L_3;
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_10 = (FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 *)il2cpp_codegen_object_new(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195_il2cpp_TypeInfo_var);
		FloatCrusher__ctor_m07A8A7E799A1A5AA7BAEE4E3FB90FC2F03D0C2AF(L_10, /*hidden argument*/NULL);
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_11 = L_10;
		NullCheck(L_11);
		L_11->set_axis_6(1);
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_12 = L_11;
		NullCheck(L_12);
		L_12->set_outOfBoundsHandling_12(1);
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_13 = L_12;
		NullCheck(L_13);
		FloatCrusher_set_Resolution_mC08E87FF3B986EF27AEFA6DD8B7FDD918072565E(L_13, ((int64_t)((int64_t)((int32_t)100))), /*hidden argument*/NULL);
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_14 = L_13;
		NullCheck(L_14);
		FloatCrusher_set_BitsDeterminedBy_m29AF2226CCE841AAEFBFBC7DBECB896352F87845(L_14, ((int32_t)-5), /*hidden argument*/NULL);
		NullCheck(L_9);
		ElementCrusher_set_YCrusher_mFA4E7C0BFCFE7E3F19E9836A4E37AF270D4A36FA(L_9, L_14, /*hidden argument*/NULL);
		ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * L_15 = L_9;
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_16 = (FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 *)il2cpp_codegen_object_new(FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195_il2cpp_TypeInfo_var);
		FloatCrusher__ctor_m07A8A7E799A1A5AA7BAEE4E3FB90FC2F03D0C2AF(L_16, /*hidden argument*/NULL);
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_17 = L_16;
		NullCheck(L_17);
		L_17->set_axis_6(2);
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_18 = L_17;
		NullCheck(L_18);
		L_18->set_outOfBoundsHandling_12(1);
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_19 = L_18;
		NullCheck(L_19);
		FloatCrusher_set_Resolution_mC08E87FF3B986EF27AEFA6DD8B7FDD918072565E(L_19, ((int64_t)((int64_t)((int32_t)100))), /*hidden argument*/NULL);
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_20 = L_19;
		NullCheck(L_20);
		FloatCrusher_set_BitsDeterminedBy_m29AF2226CCE841AAEFBFBC7DBECB896352F87845(L_20, ((int32_t)-5), /*hidden argument*/NULL);
		NullCheck(L_15);
		ElementCrusher_set_ZCrusher_mED9C46362B139B88C37679F9911F814E66968A83(L_15, L_20, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void Photon.Compression.WorldBoundsGroup::ResetActiveBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBoundsGroup_ResetActiveBounds_m884E548A1C67B22EF751BD760992AF2240D5BB8F (WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF386E60B86F2523BA7EA0F24D8D27264494D3AE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeWorldBounds.Clear();
		List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * L_0 = __this->get_activeWorldBounds_5();
		NullCheck(L_0);
		List_1_Clear_mF386E60B86F2523BA7EA0F24D8D27264494D3AE4(L_0, /*hidden argument*/List_1_Clear_mF386E60B86F2523BA7EA0F24D8D27264494D3AE4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Photon.Compression.WorldBoundsGroup::RecalculateWorldCombinedBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBoundsGroup_RecalculateWorldCombinedBounds_m7101D109AD3319D47836A37A74D2505FE8F575A4 (WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4D7C559BD5E6D9A5B3ABA831F9BFD0AA8E3FB439_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE314B863C38092DE523EC61F66576DE729BCF861_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * V_0 = NULL;
	FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * V_1 = NULL;
	FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		// var xc = crusher.XCrusher;
		ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * L_0 = __this->get_crusher_4();
		NullCheck(L_0);
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_1;
		L_1 = ElementCrusher_get_XCrusher_m9CBE9161585467AF380BB937D37D07A78EB1BF48_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var yc = crusher.YCrusher;
		ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * L_2 = __this->get_crusher_4();
		NullCheck(L_2);
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_3;
		L_3 = ElementCrusher_get_YCrusher_m2B5EDE4118B3A8766DEADF2A300D61BFE581060E_inline(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// var zc = crusher.ZCrusher;
		ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * L_4 = __this->get_crusher_4();
		NullCheck(L_4);
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_5;
		L_5 = ElementCrusher_get_ZCrusher_m408681EAD7F5999B7BAA2C71BE46B914F5EC7A9E_inline(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// if (activeWorldBounds.Count == 0)
		List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * L_6 = __this->get_activeWorldBounds_5();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m4D7C559BD5E6D9A5B3ABA831F9BFD0AA8E3FB439_inline(L_6, /*hidden argument*/List_1_get_Count_m4D7C559BD5E6D9A5B3ABA831F9BFD0AA8E3FB439_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0042;
		}
	}
	{
		// _combinedWorldBounds = new Bounds();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_8 = __this->get_address_of__combinedWorldBounds_6();
		il2cpp_codegen_initobj(L_8, sizeof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 ));
		// }
		goto IL_0141;
	}

IL_0042:
	{
		// if (xc.BitsDeterminedBy > 0 ||
		//     xc.BitsDeterminedBy == BitsDeterminedBy.SetBits || xc.BitsDeterminedBy == BitsDeterminedBy.Uncompressed || xc.BitsDeterminedBy == BitsDeterminedBy.HalfFloat)
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = FloatCrusher_get_BitsDeterminedBy_m4CF5BE0134B950873A3190C1DC6077AC02B5752C_inline(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = FloatCrusher_get_BitsDeterminedBy_m4CF5BE0134B950873A3190C1DC6077AC02B5752C_inline(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)(-1))))
		{
			goto IL_0068;
		}
	}
	{
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = FloatCrusher_get_BitsDeterminedBy_m4CF5BE0134B950873A3190C1DC6077AC02B5752C_inline(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_14) == ((int32_t)((int32_t)-5))))
		{
			goto IL_0068;
		}
	}
	{
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = FloatCrusher_get_BitsDeterminedBy_m4CF5BE0134B950873A3190C1DC6077AC02B5752C_inline(L_15, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)-4)))))
		{
			goto IL_0079;
		}
	}

IL_0068:
	{
		// xc.Resolution = 100;
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_17 = V_0;
		NullCheck(L_17);
		FloatCrusher_set_Resolution_mC08E87FF3B986EF27AEFA6DD8B7FDD918072565E(L_17, ((int64_t)((int64_t)((int32_t)100))), /*hidden argument*/NULL);
		// xc.BitsDeterminedBy = BitsDeterminedBy.Resolution;
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_18 = V_0;
		NullCheck(L_18);
		FloatCrusher_set_BitsDeterminedBy_m29AF2226CCE841AAEFBFBC7DBECB896352F87845(L_18, ((int32_t)-3), /*hidden argument*/NULL);
	}

IL_0079:
	{
		// if (yc.BitsDeterminedBy > 0 ||
		//     yc.BitsDeterminedBy == BitsDeterminedBy.SetBits || yc.BitsDeterminedBy == BitsDeterminedBy.Uncompressed || yc.BitsDeterminedBy == BitsDeterminedBy.HalfFloat)
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = FloatCrusher_get_BitsDeterminedBy_m4CF5BE0134B950873A3190C1DC6077AC02B5752C_inline(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_20) > ((int32_t)0)))
		{
			goto IL_009f;
		}
	}
	{
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = FloatCrusher_get_BitsDeterminedBy_m4CF5BE0134B950873A3190C1DC6077AC02B5752C_inline(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) == ((int32_t)(-1))))
		{
			goto IL_009f;
		}
	}
	{
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_23 = V_1;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = FloatCrusher_get_BitsDeterminedBy_m4CF5BE0134B950873A3190C1DC6077AC02B5752C_inline(L_23, /*hidden argument*/NULL);
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-5))))
		{
			goto IL_009f;
		}
	}
	{
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_25 = V_1;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = FloatCrusher_get_BitsDeterminedBy_m4CF5BE0134B950873A3190C1DC6077AC02B5752C_inline(L_25, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)-4)))))
		{
			goto IL_00b0;
		}
	}

IL_009f:
	{
		// yc.Resolution = 100;
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_27 = V_1;
		NullCheck(L_27);
		FloatCrusher_set_Resolution_mC08E87FF3B986EF27AEFA6DD8B7FDD918072565E(L_27, ((int64_t)((int64_t)((int32_t)100))), /*hidden argument*/NULL);
		// yc.BitsDeterminedBy = BitsDeterminedBy.Resolution;
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_28 = V_1;
		NullCheck(L_28);
		FloatCrusher_set_BitsDeterminedBy_m29AF2226CCE841AAEFBFBC7DBECB896352F87845(L_28, ((int32_t)-3), /*hidden argument*/NULL);
	}

IL_00b0:
	{
		// if (zc.BitsDeterminedBy > 0 ||
		//     zc.BitsDeterminedBy == BitsDeterminedBy.SetBits || zc.BitsDeterminedBy == BitsDeterminedBy.Uncompressed || zc.BitsDeterminedBy == BitsDeterminedBy.HalfFloat)
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_29 = V_2;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = FloatCrusher_get_BitsDeterminedBy_m4CF5BE0134B950873A3190C1DC6077AC02B5752C_inline(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_30) > ((int32_t)0)))
		{
			goto IL_00d6;
		}
	}
	{
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = FloatCrusher_get_BitsDeterminedBy_m4CF5BE0134B950873A3190C1DC6077AC02B5752C_inline(L_31, /*hidden argument*/NULL);
		if ((((int32_t)L_32) == ((int32_t)(-1))))
		{
			goto IL_00d6;
		}
	}
	{
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_33 = V_2;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = FloatCrusher_get_BitsDeterminedBy_m4CF5BE0134B950873A3190C1DC6077AC02B5752C_inline(L_33, /*hidden argument*/NULL);
		if ((((int32_t)L_34) == ((int32_t)((int32_t)-5))))
		{
			goto IL_00d6;
		}
	}
	{
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_35 = V_2;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = FloatCrusher_get_BitsDeterminedBy_m4CF5BE0134B950873A3190C1DC6077AC02B5752C_inline(L_35, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)-4)))))
		{
			goto IL_00e7;
		}
	}

IL_00d6:
	{
		// zc.Resolution = 100;
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_37 = V_2;
		NullCheck(L_37);
		FloatCrusher_set_Resolution_mC08E87FF3B986EF27AEFA6DD8B7FDD918072565E(L_37, ((int64_t)((int64_t)((int32_t)100))), /*hidden argument*/NULL);
		// zc.BitsDeterminedBy = BitsDeterminedBy.Resolution;
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_38 = V_2;
		NullCheck(L_38);
		FloatCrusher_set_BitsDeterminedBy_m29AF2226CCE841AAEFBFBC7DBECB896352F87845(L_38, ((int32_t)-3), /*hidden argument*/NULL);
	}

IL_00e7:
	{
		// _combinedWorldBounds = activeWorldBounds[0].myBounds;
		List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * L_39 = __this->get_activeWorldBounds_5();
		NullCheck(L_39);
		WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * L_40;
		L_40 = List_1_get_Item_mE314B863C38092DE523EC61F66576DE729BCF861_inline(L_39, 0, /*hidden argument*/List_1_get_Item_mE314B863C38092DE523EC61F66576DE729BCF861_RuntimeMethod_var);
		NullCheck(L_40);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_41 = L_40->get_myBounds_8();
		__this->set__combinedWorldBounds_6(L_41);
		// for (int i = 1; i < activeWorldBounds.Count; i++)
		V_3 = 1;
		goto IL_0122;
	}

IL_0102:
	{
		// _combinedWorldBounds.Encapsulate(activeWorldBounds[i].myBounds);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * L_42 = __this->get_address_of__combinedWorldBounds_6();
		List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * L_43 = __this->get_activeWorldBounds_5();
		int32_t L_44 = V_3;
		NullCheck(L_43);
		WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * L_45;
		L_45 = List_1_get_Item_mE314B863C38092DE523EC61F66576DE729BCF861_inline(L_43, L_44, /*hidden argument*/List_1_get_Item_mE314B863C38092DE523EC61F66576DE729BCF861_RuntimeMethod_var);
		NullCheck(L_45);
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_46 = L_45->get_myBounds_8();
		Bounds_Encapsulate_mA1D113F56C635E1ACD53FCCB1C6C2560A295533B((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)L_42, L_46, /*hidden argument*/NULL);
		// for (int i = 1; i < activeWorldBounds.Count; i++)
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_0122:
	{
		// for (int i = 1; i < activeWorldBounds.Count; i++)
		int32_t L_48 = V_3;
		List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * L_49 = __this->get_activeWorldBounds_5();
		NullCheck(L_49);
		int32_t L_50;
		L_50 = List_1_get_Count_m4D7C559BD5E6D9A5B3ABA831F9BFD0AA8E3FB439_inline(L_49, /*hidden argument*/List_1_get_Count_m4D7C559BD5E6D9A5B3ABA831F9BFD0AA8E3FB439_RuntimeMethod_var);
		if ((((int32_t)L_48) < ((int32_t)L_50)))
		{
			goto IL_0102;
		}
	}
	{
		// crusher.Bounds = _combinedWorldBounds;
		ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * L_51 = __this->get_crusher_4();
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_52 = __this->get__combinedWorldBounds_6();
		NullCheck(L_51);
		ElementCrusher_set_Bounds_mDC84EF850076EE71BF9AB209CF0BB43BE6EFE767(L_51, L_52, /*hidden argument*/NULL);
	}

IL_0141:
	{
		// if (OnWorldBoundChanged != null)
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_53 = __this->get_OnWorldBoundChanged_3();
		if (!L_53)
		{
			goto IL_0154;
		}
	}
	{
		// OnWorldBoundChanged();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_54 = __this->get_OnWorldBoundChanged_3();
		NullCheck(L_54);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_54, /*hidden argument*/NULL);
	}

IL_0154:
	{
		// }
		return;
	}
}
// System.Void Photon.Compression.WorldBoundsGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBoundsGroup__ctor_m9A23912F71ECAD449CA5A143FCC3FBD61A41D1CD (WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m11BB05CC6E3CA7B8014261AE077F5EBC67CDB4F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string name = defaultName;
		__this->set_name_2(_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		// public /*readonly*/ ElementCrusher crusher = GetUncompressedCrusher();
		ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * L_0;
		L_0 = WorldBoundsGroup_GetUncompressedCrusher_m9B062777718606D82AADDA77EED6751F30D239FA(/*hidden argument*/NULL);
		__this->set_crusher_4(L_0);
		// public readonly List<WorldBounds> activeWorldBounds = new List<WorldBounds>();
		List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * L_1 = (List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 *)il2cpp_codegen_object_new(List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149_il2cpp_TypeInfo_var);
		List_1__ctor_m11BB05CC6E3CA7B8014261AE077F5EBC67CDB4F6(L_1, /*hidden argument*/List_1__ctor_m11BB05CC6E3CA7B8014261AE077F5EBC67CDB4F6_RuntimeMethod_var);
		__this->set_activeWorldBounds_5(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Compression.WorldBoundsSelectAttributeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBoundsSelectAttributeAttribute__ctor_m9145939AADDBF5ECCC915A5699289E700FC4C4DB (WorldBoundsSelectAttributeAttribute_tBA4B9DB5F5BF573D3DFE6E20E979C574472825E7 * __this, const RuntimeMethod* method)
{
	{
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Compression.WorldBoundsSettings::Bootstrap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBoundsSettings_Bootstrap_mFA01BE3E186E3388BDEC8FDED0DB2DAF11846010 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * V_0 = NULL;
	List_1_tB0271D7BC496632284188271857311907DE3C2C5 * V_1 = NULL;
	{
		// var single = Single;
		IL2CPP_RUNTIME_CLASS_INIT(SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var);
		WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * L_0;
		L_0 = SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413(/*hidden argument*/SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413_RuntimeMethod_var);
		V_0 = L_0;
		// var wbgs = single.worldBoundsGroups;
		WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * L_1 = V_0;
		NullCheck(L_1);
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_2 = L_1->get_worldBoundsGroups_7();
		V_1 = L_2;
		// if (single != null && wbgs.Count > 0)
		WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_inline(L_5, /*hidden argument*/List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_RuntimeMethod_var);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		// defaultWorldBoundsCrusher = single.worldBoundsGroups[0].crusher;
		WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * L_7 = V_0;
		NullCheck(L_7);
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_8 = L_7->get_worldBoundsGroups_7();
		NullCheck(L_8);
		WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_9;
		L_9 = List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_inline(L_8, 0, /*hidden argument*/List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_RuntimeMethod_var);
		NullCheck(L_9);
		ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * L_10 = L_9->get_crusher_4();
		((WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4_StaticFields*)il2cpp_codegen_static_fields_for(WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4_il2cpp_TypeInfo_var))->set_defaultWorldBoundsCrusher_8(L_10);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void Photon.Compression.WorldBoundsSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBoundsSettings_Awake_m6D3AFE135A17D56CF0AC60834ED30DCE6C8C07E2 (WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA03A07B34817990E4F614133053B6946911A747D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsScriptableObject_1_Awake_m9296BAB1C0962C1EA912FF70ABB6DDB789A92332_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		SettingsScriptableObject_1_Awake_m9296BAB1C0962C1EA912FF70ABB6DDB789A92332(__this, /*hidden argument*/SettingsScriptableObject_1_Awake_m9296BAB1C0962C1EA912FF70ABB6DDB789A92332_RuntimeMethod_var);
		// if (worldBoundsGroups.Count == 0)
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_0 = __this->get_worldBoundsGroups_7();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_inline(L_0, /*hidden argument*/List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		// worldBoundsGroups.Add(new WorldBoundsGroup());
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_2 = __this->get_worldBoundsGroups_7();
		WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_3 = (WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD *)il2cpp_codegen_object_new(WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD_il2cpp_TypeInfo_var);
		WorldBoundsGroup__ctor_m9A23912F71ECAD449CA5A143FCC3FBD61A41D1CD(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		List_1_Add_mA03A07B34817990E4F614133053B6946911A747D(L_2, L_3, /*hidden argument*/List_1_Add_mA03A07B34817990E4F614133053B6946911A747D_RuntimeMethod_var);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void Photon.Compression.WorldBoundsSettings::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBoundsSettings_Initialize_mF0F0D9124247877DFCEAE5E32BE9907E1D1DA0D4 (WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5E71B56A8CE695B1F4B9E4A9923F6E9D71E28CEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5C5091686BF15E13ADBBC0396CB616CA6456AE3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7095830EA1C0A4C58AB69E4951382C1DF8C8F638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA03A07B34817990E4F614133053B6946911A747D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA09DDC5006958FA1324EB87154728392EA5E5611_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsScriptableObject_1_Initialize_m132C253E35C23610B8D46A20B9EFB39A389005A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t143BC1A59EB51667AFDEAA4436A2DFF66FED8F73  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// base.Initialize();
		SettingsScriptableObject_1_Initialize_m132C253E35C23610B8D46A20B9EFB39A389005A9(__this, /*hidden argument*/SettingsScriptableObject_1_Initialize_m132C253E35C23610B8D46A20B9EFB39A389005A9_RuntimeMethod_var);
		// if (worldBoundsGroups.Count == 0)
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_0 = __this->get_worldBoundsGroups_7();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_inline(L_0, /*hidden argument*/List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0023;
		}
	}
	{
		// worldBoundsGroups.Add(new WorldBoundsGroup());
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_2 = __this->get_worldBoundsGroups_7();
		WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_3 = (WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD *)il2cpp_codegen_object_new(WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD_il2cpp_TypeInfo_var);
		WorldBoundsGroup__ctor_m9A23912F71ECAD449CA5A143FCC3FBD61A41D1CD(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		List_1_Add_mA03A07B34817990E4F614133053B6946911A747D(L_2, L_3, /*hidden argument*/List_1_Add_mA03A07B34817990E4F614133053B6946911A747D_RuntimeMethod_var);
	}

IL_0023:
	{
		// defaultWorldBoundsCrusher = worldBoundsGroups[0].crusher;
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_4 = __this->get_worldBoundsGroups_7();
		NullCheck(L_4);
		WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_5;
		L_5 = List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_inline(L_4, 0, /*hidden argument*/List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_RuntimeMethod_var);
		NullCheck(L_5);
		ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * L_6 = L_5->get_crusher_4();
		((WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4_StaticFields*)il2cpp_codegen_static_fields_for(WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4_il2cpp_TypeInfo_var))->set_defaultWorldBoundsCrusher_8(L_6);
		// foreach (var wbs in worldBoundsGroups)
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_7 = __this->get_worldBoundsGroups_7();
		NullCheck(L_7);
		Enumerator_t143BC1A59EB51667AFDEAA4436A2DFF66FED8F73  L_8;
		L_8 = List_1_GetEnumerator_mA09DDC5006958FA1324EB87154728392EA5E5611(L_7, /*hidden argument*/List_1_GetEnumerator_mA09DDC5006958FA1324EB87154728392EA5E5611_RuntimeMethod_var);
		V_0 = L_8;
	}

IL_0045:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0053;
		}

IL_0047:
		{
			// foreach (var wbs in worldBoundsGroups)
			WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_9;
			L_9 = Enumerator_get_Current_m7095830EA1C0A4C58AB69E4951382C1DF8C8F638_inline((Enumerator_t143BC1A59EB51667AFDEAA4436A2DFF66FED8F73 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m7095830EA1C0A4C58AB69E4951382C1DF8C8F638_RuntimeMethod_var);
			// wbs.RecalculateWorldCombinedBounds();
			NullCheck(L_9);
			WorldBoundsGroup_RecalculateWorldCombinedBounds_m7101D109AD3319D47836A37A74D2505FE8F575A4(L_9, /*hidden argument*/NULL);
		}

IL_0053:
		{
			// foreach (var wbs in worldBoundsGroups)
			bool L_10;
			L_10 = Enumerator_MoveNext_m5C5091686BF15E13ADBBC0396CB616CA6456AE3B((Enumerator_t143BC1A59EB51667AFDEAA4436A2DFF66FED8F73 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m5C5091686BF15E13ADBBC0396CB616CA6456AE3B_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0047;
			}
		}

IL_005c:
		{
			IL2CPP_LEAVE(0x6C, FINALLY_005e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005e;
	}

FINALLY_005e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5E71B56A8CE695B1F4B9E4A9923F6E9D71E28CEB((Enumerator_t143BC1A59EB51667AFDEAA4436A2DFF66FED8F73 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m5E71B56A8CE695B1F4B9E4A9923F6E9D71E28CEB_RuntimeMethod_var);
		IL2CPP_END_FINALLY(94)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(94)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void Photon.Compression.WorldBoundsSettings::RemoveWorldBoundsFromAll(Photon.Compression.WorldBounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBoundsSettings_RemoveWorldBoundsFromAll_mD4FC452212F60FB971FAE76495BC5CACE12F1C48 (WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * ___wb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m59C658ABFA61B8697B191C95B5B251D1FCDF1EF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mDD2174A6ECCF3232D7684F6BBA0304477232108D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB0271D7BC496632284188271857311907DE3C2C5 * V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * V_2 = NULL;
	{
		// var wbgs = Single.worldBoundsGroups;
		IL2CPP_RUNTIME_CLASS_INIT(SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var);
		WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * L_0;
		L_0 = SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413(/*hidden argument*/SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_1 = L_0->get_worldBoundsGroups_7();
		V_0 = L_1;
		// for (int i = 0; i < wbgs.Count; ++i)
		V_1 = 0;
		goto IL_003d;
	}

IL_000f:
	{
		// var awb = wbgs[i].activeWorldBounds;
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_4;
		L_4 = List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_RuntimeMethod_var);
		NullCheck(L_4);
		List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * L_5 = L_4->get_activeWorldBounds_5();
		V_2 = L_5;
		// if (awb.Contains(wb))
		List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * L_6 = V_2;
		WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * L_7 = ___wb0;
		NullCheck(L_6);
		bool L_8;
		L_8 = List_1_Contains_m59C658ABFA61B8697B191C95B5B251D1FCDF1EF7(L_6, L_7, /*hidden argument*/List_1_Contains_m59C658ABFA61B8697B191C95B5B251D1FCDF1EF7_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		// awb.Remove(wb);
		List_1_t8E761DA58A77D272EBD7FEDD20625BF3ED2AA149 * L_9 = V_2;
		WorldBounds_tE410321AEEE35D14B934A6BBB77BFF481087E3C2 * L_10 = ___wb0;
		NullCheck(L_9);
		bool L_11;
		L_11 = List_1_Remove_mDD2174A6ECCF3232D7684F6BBA0304477232108D(L_9, L_10, /*hidden argument*/List_1_Remove_mDD2174A6ECCF3232D7684F6BBA0304477232108D_RuntimeMethod_var);
		// wbgs[i].RecalculateWorldCombinedBounds();
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_14;
		L_14 = List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_RuntimeMethod_var);
		NullCheck(L_14);
		WorldBoundsGroup_RecalculateWorldCombinedBounds_m7101D109AD3319D47836A37A74D2505FE8F575A4(L_14, /*hidden argument*/NULL);
	}

IL_0039:
	{
		// for (int i = 0; i < wbgs.Count; ++i)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003d:
	{
		// for (int i = 0; i < wbgs.Count; ++i)
		int32_t L_16 = V_1;
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_inline(L_17, /*hidden argument*/List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 Photon.Compression.WorldBoundsSettings::TallyBits(System.Int32&,emotitron.Compression.BitCullingLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorldBoundsSettings_TallyBits_m2426A01202C2A94EE6D322D609F3EB295470A6C3 (int32_t* ___index0, int32_t ___bcl1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB0271D7BC496632284188271857311907DE3C2C5 * V_0 = NULL;
	ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * V_1 = NULL;
	{
		// var wbs = Single.worldBoundsGroups;
		IL2CPP_RUNTIME_CLASS_INIT(SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var);
		WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * L_0;
		L_0 = SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413(/*hidden argument*/SettingsScriptableObject_1_get_Single_m476459EF43D42667F9AB47240EBB4ACE1FD91413_RuntimeMethod_var);
		NullCheck(L_0);
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_1 = L_0->get_worldBoundsGroups_7();
		V_0 = L_1;
		// if (index >= wbs.Count)
		int32_t* L_2 = ___index0;
		int32_t L_3 = *((int32_t*)L_2);
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_inline(L_4, /*hidden argument*/List_1_get_Count_m4D63B809AA734BC62BC32E8C21B32F96F06A4D70_RuntimeMethod_var);
		if ((((int32_t)L_3) < ((int32_t)L_5)))
		{
			goto IL_0018;
		}
	}
	{
		// index = 0;
		int32_t* L_6 = ___index0;
		*((int32_t*)L_6) = (int32_t)0;
	}

IL_0018:
	{
		// var crusher = single.worldBoundsGroups[index].crusher;
		IL2CPP_RUNTIME_CLASS_INIT(SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var);
		WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * L_7 = ((SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_StaticFields*)il2cpp_codegen_static_fields_for(SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var))->get_single_6();
		NullCheck(L_7);
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_8 = L_7->get_worldBoundsGroups_7();
		int32_t* L_9 = ___index0;
		int32_t L_10 = *((int32_t*)L_9);
		NullCheck(L_8);
		WorldBoundsGroup_tFDBDB1828E7055909E85F130B396CB7D7F84A7BD * L_11;
		L_11 = List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_inline(L_8, L_10, /*hidden argument*/List_1_get_Item_mC7902655E0645BF23A20DDBB9D44D5040081DFBE_RuntimeMethod_var);
		NullCheck(L_11);
		ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * L_12 = L_11->get_crusher_4();
		V_1 = L_12;
		// return
		//     crusher.XCrusher.GetBits(bcl) +
		//     crusher.YCrusher.GetBits(bcl) +
		//     crusher.ZCrusher.GetBits(bcl);
		ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * L_13 = V_1;
		NullCheck(L_13);
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_14;
		L_14 = ElementCrusher_get_XCrusher_m9CBE9161585467AF380BB937D37D07A78EB1BF48_inline(L_13, /*hidden argument*/NULL);
		int32_t L_15 = ___bcl1;
		NullCheck(L_14);
		int32_t L_16;
		L_16 = FloatCrusher_GetBits_mE1F063FB6D2DDB8BA7E2E55D5788F9CA432A183D(L_14, L_15, /*hidden argument*/NULL);
		ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * L_17 = V_1;
		NullCheck(L_17);
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_18;
		L_18 = ElementCrusher_get_YCrusher_m2B5EDE4118B3A8766DEADF2A300D61BFE581060E_inline(L_17, /*hidden argument*/NULL);
		int32_t L_19 = ___bcl1;
		NullCheck(L_18);
		int32_t L_20;
		L_20 = FloatCrusher_GetBits_mE1F063FB6D2DDB8BA7E2E55D5788F9CA432A183D(L_18, L_19, /*hidden argument*/NULL);
		ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * L_21 = V_1;
		NullCheck(L_21);
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_22;
		L_22 = ElementCrusher_get_ZCrusher_m408681EAD7F5999B7BAA2C71BE46B914F5EC7A9E_inline(L_21, /*hidden argument*/NULL);
		int32_t L_23 = ___bcl1;
		NullCheck(L_22);
		int32_t L_24;
		L_24 = FloatCrusher_GetBits_mE1F063FB6D2DDB8BA7E2E55D5788F9CA432A183D(L_22, L_23, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_20)), (int32_t)L_24));
	}
}
// System.Void Photon.Compression.WorldBoundsSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldBoundsSettings__ctor_mAE503F9B288A959056FE72C44049845975F12658 (WorldBoundsSettings_t3747F34783B92C195EFB3BA1157C084C168F90D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m54492BA03A26FDA887EC48DB54ADF2F5CCFB6EDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB0271D7BC496632284188271857311907DE3C2C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsScriptableObject_1__ctor_m84DD8EDE5FE866EE12CBF54224E1EF322B5DA5CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WorldBoundsGroup> worldBoundsGroups = new List<WorldBoundsGroup>();
		List_1_tB0271D7BC496632284188271857311907DE3C2C5 * L_0 = (List_1_tB0271D7BC496632284188271857311907DE3C2C5 *)il2cpp_codegen_object_new(List_1_tB0271D7BC496632284188271857311907DE3C2C5_il2cpp_TypeInfo_var);
		List_1__ctor_m54492BA03A26FDA887EC48DB54ADF2F5CCFB6EDD(L_0, /*hidden argument*/List_1__ctor_m54492BA03A26FDA887EC48DB54ADF2F5CCFB6EDD_RuntimeMethod_var);
		__this->set_worldBoundsGroups_7(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(SettingsScriptableObject_1_t9D293B62A7062AC978830DBD9A53B3823F5946A8_il2cpp_TypeInfo_var);
		SettingsScriptableObject_1__ctor_m84DD8EDE5FE866EE12CBF54224E1EF322B5DA5CD(__this, /*hidden argument*/SettingsScriptableObject_1__ctor_m84DD8EDE5FE866EE12CBF54224E1EF322B5DA5CD_RuntimeMethod_var);
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
// System.Void Photon.Compression.XYZSwitchMaskAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XYZSwitchMaskAttribute__ctor_m53F989E78C0C677324AD6FDACB571B9AA9248202 (XYZSwitchMaskAttribute_t9227559376B4115302A43CB3FB232288D6986D9E * __this, const RuntimeMethod* method)
{
	{
		// public XYZSwitchMaskAttribute() { }
		PropertyAttribute__ctor_mA13181D93341AEAE429F0615989CB4647F2EB8A7(__this, /*hidden argument*/NULL);
		// public XYZSwitchMaskAttribute() { }
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
// System.Void Photon.Pun.Simple.AutoOwnerComponentEnable/ComponentToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentToggle__ctor_m99EBFADD813C20F035FACD26A0936A609F53385E (ComponentToggle_t19355028B5557A61196C9BFD472874316F5D3771 * __this, const RuntimeMethod* method)
{
	{
		// public EnableIf enableIfOwned = EnableIf.Owner;
		__this->set_enableIfOwned_1(1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Shapes.FpsController/<FixedSteps>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFixedStepsU3Ed__27__ctor_m661142ED3A6812E0AC4F8EE84836F320DE8CE60E (U3CFixedStepsU3Ed__27_t2A6013D234A849BC33FA7F18C9711E737C80506D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Shapes.FpsController/<FixedSteps>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFixedStepsU3Ed__27_System_IDisposable_Dispose_mB9179F0146A20014C7CBC2A8E7B85566AB8B459E (U3CFixedStepsU3Ed__27_t2A6013D234A849BC33FA7F18C9711E737C80506D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Shapes.FpsController/<FixedSteps>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFixedStepsU3Ed__27_MoveNext_m6AB87420053A2136A4CF17BBAF19FAC8FC327E0F (U3CFixedStepsU3Ed__27_t2A6013D234A849BC33FA7F18C9711E737C80506D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// FixedUpdateManual();
		FpsController_tC27648C09CF9A747CE4316093C648E5ACF12087A * L_4 = V_1;
		NullCheck(L_4);
		FpsController_FixedUpdateManual_m912902D4D4ABE97C8EDF183F25A5B0437F11C1EE(L_4, /*hidden argument*/NULL);
		// yield return new WaitForSeconds( 0.01f ); 
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, (0.00999999978f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while( true ) {
		goto IL_001e;
	}
}
// System.Object Shapes.FpsController/<FixedSteps>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFixedStepsU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC1ECC42DF57EC139B3224AA8F3FBE5F26C684C2F (U3CFixedStepsU3Ed__27_t2A6013D234A849BC33FA7F18C9711E737C80506D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Shapes.FpsController/<FixedSteps>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFixedStepsU3Ed__27_System_Collections_IEnumerator_Reset_mB532C67C91F7059D0D6D458235B1B54190E66D92 (U3CFixedStepsU3Ed__27_t2A6013D234A849BC33FA7F18C9711E737C80506D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFixedStepsU3Ed__27_System_Collections_IEnumerator_Reset_mB532C67C91F7059D0D6D458235B1B54190E66D92_RuntimeMethod_var)));
	}
}
// System.Object Shapes.FpsController/<FixedSteps>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFixedStepsU3Ed__27_System_Collections_IEnumerator_get_Current_m7734A24119D2A9166781D1BB2913CBBF874CB157 (U3CFixedStepsU3Ed__27_t2A6013D234A849BC33FA7F18C9711E737C80506D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MenuManager/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m51B6A9BB25174028C99A40E6AABB43D7C963B459 (U3CU3Ec__DisplayClass5_0_tF1DFDDB27D3E11B6B201711681C26D6013A199FC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MenuManager/<>c__DisplayClass5_0::<WindowTurnOn>b__0(MenuWindow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CWindowTurnOnU3Eb__0_m0AA3D81098B53E0CE2EC5881035DFC3AF6A442E4 (U3CU3Ec__DisplayClass5_0_tF1DFDDB27D3E11B6B201711681C26D6013A199FC * __this, MenuWindow_tFC3D31F78233D75262AC4C4F4756BA3EE318FE5C * ___windowToFind0, const RuntimeMethod* method)
{
	{
		// var windowsToTurnInverse = _menuWindows.Where(windowToFind => !windowName.Equals(windowToFind.Name));
		String_t* L_0 = __this->get_windowName_0();
		MenuWindow_tFC3D31F78233D75262AC4C4F4756BA3EE318FE5C * L_1 = ___windowToFind0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_Name_7();
		NullCheck(L_0);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_0, L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean MenuManager/<>c__DisplayClass5_0::<WindowTurnOn>b__1(MenuWindow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CWindowTurnOnU3Eb__1_mE37A1DF0B3A63DC9AC4BB5B7DEA1F929B6630565 (U3CU3Ec__DisplayClass5_0_tF1DFDDB27D3E11B6B201711681C26D6013A199FC * __this, MenuWindow_tFC3D31F78233D75262AC4C4F4756BA3EE318FE5C * ___windowToFind0, const RuntimeMethod* method)
{
	{
		// var window = _menuWindows.Find(windowToFind => windowName.Equals(windowToFind.Name));
		String_t* L_0 = __this->get_windowName_0();
		MenuWindow_tFC3D31F78233D75262AC4C4F4756BA3EE318FE5C * L_1 = ___windowToFind0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_Name_7();
		NullCheck(L_0);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_0, L_2, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Photon.Pun.Simple.NetMasterCallbacks/DelayedRegistrationItem
IL2CPP_EXTERN_C void DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE_marshal_pinvoke(const DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE& unmarshaled, DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get_comp_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_comp_0()))
		{
			marshaled.___comp_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_comp_0()));
			(marshaled.___comp_0)->AddRef();
		}
		else
		{
			marshaled.___comp_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_comp_0());
		}
	}
	else
	{
		marshaled.___comp_0 = NULL;
	}
	marshaled.___register_1 = static_cast<int32_t>(unmarshaled.get_register_1());
}
IL2CPP_EXTERN_C void DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE_marshal_pinvoke_back(const DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE_marshaled_pinvoke& marshaled, DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___comp_0 != NULL)
	{
		unmarshaled.set_comp_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___comp_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_comp_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_comp_0()), Il2CppIUnknown::IID, marshaled.___comp_0);
		}
	}
	else
	{
		unmarshaled.set_comp_0(NULL);
	}
	bool unmarshaled_register_temp_1 = false;
	unmarshaled_register_temp_1 = static_cast<bool>(marshaled.___register_1);
	unmarshaled.set_register_1(unmarshaled_register_temp_1);
}
// Conversion method for clean up from marshalling of: Photon.Pun.Simple.NetMasterCallbacks/DelayedRegistrationItem
IL2CPP_EXTERN_C void DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE_marshal_pinvoke_cleanup(DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE_marshaled_pinvoke& marshaled)
{
	if (marshaled.___comp_0 != NULL)
	{
		(marshaled.___comp_0)->Release();
		marshaled.___comp_0 = NULL;
	}
}
// Conversion methods for marshalling of: Photon.Pun.Simple.NetMasterCallbacks/DelayedRegistrationItem
IL2CPP_EXTERN_C void DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE_marshal_com(const DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE& unmarshaled, DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE_marshaled_com& marshaled)
{
	if (unmarshaled.get_comp_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_comp_0()))
		{
			marshaled.___comp_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_comp_0()));
			(marshaled.___comp_0)->AddRef();
		}
		else
		{
			marshaled.___comp_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_comp_0());
		}
	}
	else
	{
		marshaled.___comp_0 = NULL;
	}
	marshaled.___register_1 = static_cast<int32_t>(unmarshaled.get_register_1());
}
IL2CPP_EXTERN_C void DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE_marshal_com_back(const DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE_marshaled_com& marshaled, DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___comp_0 != NULL)
	{
		unmarshaled.set_comp_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___comp_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_comp_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_comp_0()), Il2CppIUnknown::IID, marshaled.___comp_0);
		}
	}
	else
	{
		unmarshaled.set_comp_0(NULL);
	}
	bool unmarshaled_register_temp_1 = false;
	unmarshaled_register_temp_1 = static_cast<bool>(marshaled.___register_1);
	unmarshaled.set_register_1(unmarshaled_register_temp_1);
}
// Conversion method for clean up from marshalling of: Photon.Pun.Simple.NetMasterCallbacks/DelayedRegistrationItem
IL2CPP_EXTERN_C void DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE_marshal_com_cleanup(DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE_marshaled_com& marshaled)
{
	if (marshaled.___comp_0 != NULL)
	{
		(marshaled.___comp_0)->Release();
		marshaled.___comp_0 = NULL;
	}
}
// System.Void Photon.Pun.Simple.NetMasterCallbacks/DelayedRegistrationItem::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelayedRegistrationItem__ctor_m7B9D08E5BA12F454397D1FEA43A0E2F7DC90B351 (DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE * __this, RuntimeObject * ___comp0, bool ___register1, const RuntimeMethod* method)
{
	{
		// public DelayedRegistrationItem(object comp, bool register) { this.comp = comp; this.register = register; }
		RuntimeObject * L_0 = ___comp0;
		__this->set_comp_0(L_0);
		// public DelayedRegistrationItem(object comp, bool register) { this.comp = comp; this.register = register; }
		bool L_1 = ___register1;
		__this->set_register_1(L_1);
		// public DelayedRegistrationItem(object comp, bool register) { this.comp = comp; this.register = register; }
		return;
	}
}
IL2CPP_EXTERN_C  void DelayedRegistrationItem__ctor_m7B9D08E5BA12F454397D1FEA43A0E2F7DC90B351_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___comp0, bool ___register1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE * _thisAdjusted = reinterpret_cast<DelayedRegistrationItem_t81612726C60BFE0DB5CD40E252DCDA0ABA7DE1AE *>(__this + _offset);
	DelayedRegistrationItem__ctor_m7B9D08E5BA12F454397D1FEA43A0E2F7DC90B351(_thisAdjusted, ___comp0, ___register1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Pun.Simple.Internal.NetMsgCallbacks/ByteBufferCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBufferCallback__ctor_m3139ADAB225C7D6165D4DDA52474F17F2E12241F (ByteBufferCallback_tDD54CEEE46711320B8F59D45F9CF5105314C5F67 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Photon.Pun.Simple.Internal.NetMsgCallbacks/ByteBufferCallback::Invoke(System.Object,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBufferCallback_Invoke_mA9709C0647A3C2AE4C1F5843C2C42724238BA728 (ByteBufferCallback_tDD54CEEE46711320B8F59D45F9CF5105314C5F67 * __this, RuntimeObject * ___conn0, int32_t ___connId1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___conn0, ___connId1, ___buffer2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___conn0, ___connId1, ___buffer2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, ___conn0, ___connId1, ___buffer2);
					else
						GenericVirtActionInvoker2< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, ___conn0, ___connId1, ___buffer2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___conn0, ___connId1, ___buffer2);
					else
						VirtActionInvoker2< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___conn0, ___connId1, ___buffer2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___conn0, ___connId1, ___buffer2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, targetThis, ___conn0, ___connId1, ___buffer2);
					else
						GenericVirtActionInvoker3< RuntimeObject *, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, targetThis, ___conn0, ___connId1, ___buffer2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___conn0, ___connId1, ___buffer2);
					else
						VirtActionInvoker3< RuntimeObject *, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___conn0, ___connId1, ___buffer2);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___conn0, ___connId1, ___buffer2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___conn0, ___connId1, ___buffer2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Photon.Pun.Simple.Internal.NetMsgCallbacks/ByteBufferCallback::BeginInvoke(System.Object,System.Int32,System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ByteBufferCallback_BeginInvoke_mEDE52CE01354A72225AE8B7585D9476F725A1D70 (ByteBufferCallback_tDD54CEEE46711320B8F59D45F9CF5105314C5F67 * __this, RuntimeObject * ___conn0, int32_t ___connId1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___conn0;
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___connId1);
	__d_args[2] = ___buffer2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Photon.Pun.Simple.Internal.NetMsgCallbacks/ByteBufferCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ByteBufferCallback_EndInvoke_m1D7C89B5B62BA8BC2B0A33B55816FDC97C14CB0C (ByteBufferCallback_tDD54CEEE46711320B8F59D45F9CF5105314C5F67 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Pun.Simple.Internal.NetMsgCallbacks/CallbackLists::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackLists__ctor_m848EC8A14EAF590967E9C6156E2A63D2CC10F265 (CallbackLists_tDAA53013B5C0B513CB9EA895C820BCDD6D621C8D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Pun.Simple.NetObject/PackObjRecord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackObjRecord__ctor_m2C8D1BAA7097B291C2854904A473AAD63579F789 (PackObjRecord_tDD43943A7BC1357509F04DA1B4AFFDA0DA8CBDC7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Compression.NormCompress/NormCompressCodec::.ctor(System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NormCompressCodec__ctor_mD4D8272DDC0047F86ECB52692B25E736B8E1BC6F (NormCompressCodec_tD62E8590F63C7F752A1FAB45B5D2300A6548109D * __this, int32_t ___bits0, float ___encoder1, float ___decoder2, const RuntimeMethod* method)
{
	{
		// this.bits = bits;
		int32_t L_0 = ___bits0;
		__this->set_bits_0(L_0);
		// this.encoder = encoder;
		float L_1 = ___encoder1;
		__this->set_encoder_1(L_1);
		// this.decoder = decoder;
		float L_2 = ___decoder2;
		__this->set_decoder_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NormCompressCodec__ctor_mD4D8272DDC0047F86ECB52692B25E736B8E1BC6F_AdjustorThunk (RuntimeObject * __this, int32_t ___bits0, float ___encoder1, float ___decoder2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	NormCompressCodec_tD62E8590F63C7F752A1FAB45B5D2300A6548109D * _thisAdjusted = reinterpret_cast<NormCompressCodec_tD62E8590F63C7F752A1FAB45B5D2300A6548109D *>(__this + _offset);
	NormCompressCodec__ctor_mD4D8272DDC0047F86ECB52692B25E736B8E1BC6F(_thisAdjusted, ___bits0, ___encoder1, ___decoder2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackCopyFrameToObjectDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackCopyFrameToObjectDelegate__ctor_m82AEC012BED315A3C806E8CB8135EF2402B7456D (PackCopyFrameToObjectDelegate_t95B7573FE460D068CA760B93677C35287C627875 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackCopyFrameToObjectDelegate::Invoke(Photon.Compression.Internal.PackFrame,System.Object,Photon.Utilities.FastBitMask128&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackCopyFrameToObjectDelegate_Invoke_m5FF1D2EF1607F0EA2FAD5056CF547D913DC570A7 (PackCopyFrameToObjectDelegate_t95B7573FE460D068CA760B93677C35287C627875 * __this, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___src0, RuntimeObject * ___trg1, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___mask2, int32_t* ___maskOffset3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___src0, ___trg1, ___mask2, ___maskOffset3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___src0, ___trg1, ___mask2, ___maskOffset3, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, ___src0, ___trg1, ___mask2, ___maskOffset3);
					else
						GenericVirtActionInvoker3< RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, ___src0, ___trg1, ___mask2, ___maskOffset3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___src0, ___trg1, ___mask2, ___maskOffset3);
					else
						VirtActionInvoker3< RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___src0, ___trg1, ___mask2, ___maskOffset3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___src0, ___trg1, ___mask2, ___maskOffset3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, targetThis, ___src0, ___trg1, ___mask2, ___maskOffset3);
					else
						GenericVirtActionInvoker4< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, targetThis, ___src0, ___trg1, ___mask2, ___maskOffset3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___src0, ___trg1, ___mask2, ___maskOffset3);
					else
						VirtActionInvoker4< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___src0, ___trg1, ___mask2, ___maskOffset3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___src0, ___trg1, ___mask2, ___maskOffset3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___src0, ___trg1, ___mask2, ___maskOffset3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Photon.Compression.Internal.PackObjectDatabase/PackCopyFrameToObjectDelegate::BeginInvoke(Photon.Compression.Internal.PackFrame,System.Object,Photon.Utilities.FastBitMask128&,System.Int32&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PackCopyFrameToObjectDelegate_BeginInvoke_m0D9E3B6D2744804A560549DD381085360C5283E2 (PackCopyFrameToObjectDelegate_t95B7573FE460D068CA760B93677C35287C627875 * __this, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___src0, RuntimeObject * ___trg1, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___mask2, int32_t* ___maskOffset3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___src0;
	__d_args[1] = ___trg1;
	__d_args[2] = Box(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var, &*___mask2);
	__d_args[3] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___maskOffset3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackCopyFrameToObjectDelegate::EndInvoke(Photon.Utilities.FastBitMask128&,System.Int32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackCopyFrameToObjectDelegate_EndInvoke_mCD22A8DDF32005CCCD5CB41F1A50E63A3EBAC0EF (PackCopyFrameToObjectDelegate_t95B7573FE460D068CA760B93677C35287C627875 * __this, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___mask0, int32_t* ___maskOffset1, RuntimeObject* ___result2, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___mask0,
	___maskOffset1,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackCopyFrameToStructDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackCopyFrameToStructDelegate__ctor_m6C135E1F2F25A5099C6517BF6DF16EF80C847254 (PackCopyFrameToStructDelegate_t573C14A226006904036BE25919A2AD8CB5426C89 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackCopyFrameToStructDelegate::Invoke(Photon.Compression.Internal.PackFrame,System.IntPtr,Photon.Utilities.FastBitMask128&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackCopyFrameToStructDelegate_Invoke_m3BF03A7760BCC8CCDB9B111BD5AE6A868E9D3257 (PackCopyFrameToStructDelegate_t573C14A226006904036BE25919A2AD8CB5426C89 * __this, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___src0, intptr_t ___trg1, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___mask2, int32_t* ___maskOffset3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___src0, ___trg1, ___mask2, ___maskOffset3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___src0, ___trg1, ___mask2, ___maskOffset3, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, ___src0, ___trg1, ___mask2, ___maskOffset3);
					else
						GenericVirtActionInvoker3< intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, ___src0, ___trg1, ___mask2, ___maskOffset3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___src0, ___trg1, ___mask2, ___maskOffset3);
					else
						VirtActionInvoker3< intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___src0, ___trg1, ___mask2, ___maskOffset3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___src0, ___trg1, ___mask2, ___maskOffset3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, targetThis, ___src0, ___trg1, ___mask2, ___maskOffset3);
					else
						GenericVirtActionInvoker4< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, targetThis, ___src0, ___trg1, ___mask2, ___maskOffset3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___src0, ___trg1, ___mask2, ___maskOffset3);
					else
						VirtActionInvoker4< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___src0, ___trg1, ___mask2, ___maskOffset3);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___src0, ___trg1, ___mask2, ___maskOffset3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___src0, ___trg1, ___mask2, ___maskOffset3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Photon.Compression.Internal.PackObjectDatabase/PackCopyFrameToStructDelegate::BeginInvoke(Photon.Compression.Internal.PackFrame,System.IntPtr,Photon.Utilities.FastBitMask128&,System.Int32&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PackCopyFrameToStructDelegate_BeginInvoke_m2EFD0B94B5A67CA562B49D664F468D1D3CE15521 (PackCopyFrameToStructDelegate_t573C14A226006904036BE25919A2AD8CB5426C89 * __this, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___src0, intptr_t ___trg1, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___mask2, int32_t* ___maskOffset3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___src0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___trg1);
	__d_args[2] = Box(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var, &*___mask2);
	__d_args[3] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___maskOffset3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackCopyFrameToStructDelegate::EndInvoke(Photon.Utilities.FastBitMask128&,System.Int32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackCopyFrameToStructDelegate_EndInvoke_m8B9349C05C51A4F392179F29FFCFEAD1BEA5D884 (PackCopyFrameToStructDelegate_t573C14A226006904036BE25919A2AD8CB5426C89 * __this, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___mask0, int32_t* ___maskOffset1, RuntimeObject* ___result2, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___mask0,
	___maskOffset1,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackFrameDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackFrameDelegate__ctor_m3AB7B4A6065888A2B3BC5BBB6C28EB079925651B (PackFrameDelegate_tA8CEDA0A5574A69DDCD7D3B2EB64D81D467ECEB5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Photon.Compression.SerializationFlags Photon.Compression.Internal.PackObjectDatabase/PackFrameDelegate::Invoke(Photon.Compression.Internal.PackFrame,Photon.Compression.Internal.PackFrame,Photon.Utilities.FastBitMask128&,System.Int32&,System.Byte[],System.Int32&,System.Int32,Photon.Compression.SerializationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PackFrameDelegate_Invoke_m6DFD157A492B7E28393118273FD408DEDDE7B1E4 (PackFrameDelegate_tA8CEDA0A5574A69DDCD7D3B2EB64D81D467ECEB5 * __this, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___obj0, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___prevFrame1, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___mask2, int32_t* ___maskOffset3, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer4, int32_t* ___bitposition5, int32_t ___frameId6, int32_t ___forceKeyframe7, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 8)
			{
				// open
				typedef int32_t (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7, targetMethod);
			}
		}
		else if (___parameterCount != 8)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker7< int32_t, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(targetMethod, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
					else
						result = GenericVirtFuncInvoker7< int32_t, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(targetMethod, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker7< int32_t, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
					else
						result = VirtFuncInvoker7< int32_t, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker8< int32_t, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
					else
						result = GenericVirtFuncInvoker8< int32_t, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker8< int32_t, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
					else
						result = VirtFuncInvoker8< int32_t, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Photon.Compression.Internal.PackObjectDatabase/PackFrameDelegate::BeginInvoke(Photon.Compression.Internal.PackFrame,Photon.Compression.Internal.PackFrame,Photon.Utilities.FastBitMask128&,System.Int32&,System.Byte[],System.Int32&,System.Int32,Photon.Compression.SerializationFlags,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PackFrameDelegate_BeginInvoke_m8BF7F4A5F6A29BFF7C6CF0FCF55965100ADE35AD (PackFrameDelegate_tA8CEDA0A5574A69DDCD7D3B2EB64D81D467ECEB5 * __this, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___obj0, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___prevFrame1, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___mask2, int32_t* ___maskOffset3, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer4, int32_t* ___bitposition5, int32_t ___frameId6, int32_t ___forceKeyframe7, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback8, RuntimeObject * ___object9, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationFlags_t83C1C8678EBB133FE647D7FFE11E9863356D8151_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[9] = {0};
	__d_args[0] = ___obj0;
	__d_args[1] = ___prevFrame1;
	__d_args[2] = Box(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var, &*___mask2);
	__d_args[3] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___maskOffset3);
	__d_args[4] = ___buffer4;
	__d_args[5] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___bitposition5);
	__d_args[6] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___frameId6);
	__d_args[7] = Box(SerializationFlags_t83C1C8678EBB133FE647D7FFE11E9863356D8151_il2cpp_TypeInfo_var, &___forceKeyframe7);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback8, (RuntimeObject*)___object9);;
}
// Photon.Compression.SerializationFlags Photon.Compression.Internal.PackObjectDatabase/PackFrameDelegate::EndInvoke(Photon.Utilities.FastBitMask128&,System.Int32&,System.Int32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PackFrameDelegate_EndInvoke_mA0AB8705D0E328916BE0A090FB8E7304AA7CE038 (PackFrameDelegate_tA8CEDA0A5574A69DDCD7D3B2EB64D81D467ECEB5 * __this, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___mask0, int32_t* ___maskOffset1, int32_t* ___bitposition2, RuntimeObject* ___result3, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___mask0,
	___maskOffset1,
	___bitposition2,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result3, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToFrameDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackInterpFrameToFrameDelegate__ctor_mAF04880290C8C90D31871FC95CBFE7EA97F0EFA5 (PackInterpFrameToFrameDelegate_t79504A76CC9567E3DE51FCF808EC6C10F7A46552 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToFrameDelegate::Invoke(Photon.Compression.Internal.PackFrame,Photon.Compression.Internal.PackFrame,Photon.Compression.Internal.PackFrame,System.Single,Photon.Utilities.FastBitMask128&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackInterpFrameToFrameDelegate_Invoke_mED737C5EC0959631C7BD1A6355879FA03B099157 (PackInterpFrameToFrameDelegate_t79504A76CC9567E3DE51FCF808EC6C10F7A46552 * __this, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___start0, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___end1, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___trg2, float ___ntime3, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___readyMask4, int32_t* ___maskOffset5, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 6)
			{
				// open
				typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5, targetMethod);
			}
		}
		else if (___parameterCount != 6)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
					else
						GenericVirtActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
					else
						VirtActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker6< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, targetThis, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
					else
						GenericVirtActionInvoker6< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, targetThis, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker6< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
					else
						VirtActionInvoker6< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToFrameDelegate::BeginInvoke(Photon.Compression.Internal.PackFrame,Photon.Compression.Internal.PackFrame,Photon.Compression.Internal.PackFrame,System.Single,Photon.Utilities.FastBitMask128&,System.Int32&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PackInterpFrameToFrameDelegate_BeginInvoke_m89ED1013B078805DDB1DAF8490B119E8C975833D (PackInterpFrameToFrameDelegate_t79504A76CC9567E3DE51FCF808EC6C10F7A46552 * __this, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___start0, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___end1, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___trg2, float ___ntime3, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___readyMask4, int32_t* ___maskOffset5, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback6, RuntimeObject * ___object7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = ___start0;
	__d_args[1] = ___end1;
	__d_args[2] = ___trg2;
	__d_args[3] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___ntime3);
	__d_args[4] = Box(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var, &*___readyMask4);
	__d_args[5] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___maskOffset5);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);;
}
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToFrameDelegate::EndInvoke(Photon.Utilities.FastBitMask128&,System.Int32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackInterpFrameToFrameDelegate_EndInvoke_m5A77B00C7576462319085F5AADB399D63D63FFF4 (PackInterpFrameToFrameDelegate_t79504A76CC9567E3DE51FCF808EC6C10F7A46552 * __this, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___readyMask0, int32_t* ___maskOffset1, RuntimeObject* ___result2, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___readyMask0,
	___maskOffset1,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToObjectDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackInterpFrameToObjectDelegate__ctor_mB66EEEF906E99252B7215887D9D77EF3C8014A7B (PackInterpFrameToObjectDelegate_t2E0D7FB7E4261BE520E80777598784969124FD90 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToObjectDelegate::Invoke(Photon.Compression.Internal.PackFrame,Photon.Compression.Internal.PackFrame,System.Object,System.Single,Photon.Utilities.FastBitMask128&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackInterpFrameToObjectDelegate_Invoke_m9E3D03DE3C0B77CD9D63DD2406996A95D6F240FD (PackInterpFrameToObjectDelegate_t2E0D7FB7E4261BE520E80777598784969124FD90 * __this, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___start0, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___end1, RuntimeObject * ___trg2, float ___ntime3, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___readyMask4, int32_t* ___maskOffset5, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 6)
			{
				// open
				typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5, targetMethod);
			}
		}
		else if (___parameterCount != 6)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
					else
						GenericVirtActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
					else
						VirtActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker6< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, targetThis, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
					else
						GenericVirtActionInvoker6< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, targetThis, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker6< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
					else
						VirtActionInvoker6< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToObjectDelegate::BeginInvoke(Photon.Compression.Internal.PackFrame,Photon.Compression.Internal.PackFrame,System.Object,System.Single,Photon.Utilities.FastBitMask128&,System.Int32&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PackInterpFrameToObjectDelegate_BeginInvoke_m7363015F4C5F7B6E72895AE679EA5A826D251D5E (PackInterpFrameToObjectDelegate_t2E0D7FB7E4261BE520E80777598784969124FD90 * __this, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___start0, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___end1, RuntimeObject * ___trg2, float ___ntime3, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___readyMask4, int32_t* ___maskOffset5, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback6, RuntimeObject * ___object7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = ___start0;
	__d_args[1] = ___end1;
	__d_args[2] = ___trg2;
	__d_args[3] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___ntime3);
	__d_args[4] = Box(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var, &*___readyMask4);
	__d_args[5] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___maskOffset5);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);;
}
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToObjectDelegate::EndInvoke(Photon.Utilities.FastBitMask128&,System.Int32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackInterpFrameToObjectDelegate_EndInvoke_m449EFE8D4ED9B769E2AAA94C06B22C13F186E565 (PackInterpFrameToObjectDelegate_t2E0D7FB7E4261BE520E80777598784969124FD90 * __this, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___readyMask0, int32_t* ___maskOffset1, RuntimeObject* ___result2, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___readyMask0,
	___maskOffset1,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToStructDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackInterpFrameToStructDelegate__ctor_m60F082381FF7CC7E039FC9666C32750C9DEC644D (PackInterpFrameToStructDelegate_t92235466FF0AA7E30B5D1A670FCF4F4D2AD05B66 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToStructDelegate::Invoke(Photon.Compression.Internal.PackFrame,Photon.Compression.Internal.PackFrame,System.IntPtr,System.Single,Photon.Utilities.FastBitMask128&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackInterpFrameToStructDelegate_Invoke_mA90BCFFE9F780A474053D10F0E0A86AD8B0BB8F3 (PackInterpFrameToStructDelegate_t92235466FF0AA7E30B5D1A670FCF4F4D2AD05B66 * __this, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___start0, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___end1, intptr_t ___trg2, float ___ntime3, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___readyMask4, int32_t* ___maskOffset5, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 6)
			{
				// open
				typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5, targetMethod);
			}
		}
		else if (___parameterCount != 6)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
					else
						GenericVirtActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
					else
						VirtActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker6< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, targetThis, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
					else
						GenericVirtActionInvoker6< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, targetThis, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker6< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
					else
						VirtActionInvoker6< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, float, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___start0, ___end1, ___trg2, ___ntime3, ___readyMask4, ___maskOffset5, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToStructDelegate::BeginInvoke(Photon.Compression.Internal.PackFrame,Photon.Compression.Internal.PackFrame,System.IntPtr,System.Single,Photon.Utilities.FastBitMask128&,System.Int32&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PackInterpFrameToStructDelegate_BeginInvoke_mF3CE947AFA298685CE99023971B9AEA4E55E7906 (PackInterpFrameToStructDelegate_t92235466FF0AA7E30B5D1A670FCF4F4D2AD05B66 * __this, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___start0, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___end1, intptr_t ___trg2, float ___ntime3, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___readyMask4, int32_t* ___maskOffset5, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback6, RuntimeObject * ___object7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = ___start0;
	__d_args[1] = ___end1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___trg2);
	__d_args[3] = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &___ntime3);
	__d_args[4] = Box(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var, &*___readyMask4);
	__d_args[5] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___maskOffset5);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);;
}
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToStructDelegate::EndInvoke(Photon.Utilities.FastBitMask128&,System.Int32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackInterpFrameToStructDelegate_EndInvoke_mCBD4C1CF1ADF3D6A6A5B92F647D2BBFF5B76BC83 (PackInterpFrameToStructDelegate_t92235466FF0AA7E30B5D1A670FCF4F4D2AD05B66 * __this, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___readyMask0, int32_t* ___maskOffset1, RuntimeObject* ___result2, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___readyMask0,
	___maskOffset1,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackObjDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackObjDelegate__ctor_mF2DB69C7EDEFBA6AC9906D72DCB0917EC8DA5C19 (PackObjDelegate_t332A1B8D3CD1C8D703869E40888E6FDAF0E14A7E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Photon.Compression.SerializationFlags Photon.Compression.Internal.PackObjectDatabase/PackObjDelegate::Invoke(System.Object&,Photon.Compression.Internal.PackFrame,Photon.Utilities.FastBitMask128&,System.Int32&,System.Byte[],System.Int32&,System.Int32,Photon.Compression.SerializationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PackObjDelegate_Invoke_mF1F38783FB3BC3C49C02ED739436C8AC6B8B9DCA (PackObjDelegate_t332A1B8D3CD1C8D703869E40888E6FDAF0E14A7E * __this, RuntimeObject ** ___obj0, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___prevFrame1, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___mask2, int32_t* ___maskOffset3, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer4, int32_t* ___bitposition5, int32_t ___frameId6, int32_t ___forceKeyframe7, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 8)
			{
				// open
				typedef int32_t (*FunctionPointerType) (RuntimeObject **, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, RuntimeObject **, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker8< int32_t, RuntimeObject **, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
					else
						result = GenericVirtFuncInvoker8< int32_t, RuntimeObject **, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker8< int32_t, RuntimeObject **, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
					else
						result = VirtFuncInvoker8< int32_t, RuntimeObject **, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject **, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, RuntimeObject **, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Photon.Compression.Internal.PackObjectDatabase/PackObjDelegate::BeginInvoke(System.Object&,Photon.Compression.Internal.PackFrame,Photon.Utilities.FastBitMask128&,System.Int32&,System.Byte[],System.Int32&,System.Int32,Photon.Compression.SerializationFlags,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PackObjDelegate_BeginInvoke_mFB9DF4DB10F9DAC58A5A10B463E2CB96FD15EEE4 (PackObjDelegate_t332A1B8D3CD1C8D703869E40888E6FDAF0E14A7E * __this, RuntimeObject ** ___obj0, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___prevFrame1, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___mask2, int32_t* ___maskOffset3, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer4, int32_t* ___bitposition5, int32_t ___frameId6, int32_t ___forceKeyframe7, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback8, RuntimeObject * ___object9, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationFlags_t83C1C8678EBB133FE647D7FFE11E9863356D8151_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[9] = {0};
	__d_args[0] = *___obj0;
	__d_args[1] = ___prevFrame1;
	__d_args[2] = Box(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var, &*___mask2);
	__d_args[3] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___maskOffset3);
	__d_args[4] = ___buffer4;
	__d_args[5] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___bitposition5);
	__d_args[6] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___frameId6);
	__d_args[7] = Box(SerializationFlags_t83C1C8678EBB133FE647D7FFE11E9863356D8151_il2cpp_TypeInfo_var, &___forceKeyframe7);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback8, (RuntimeObject*)___object9);;
}
// Photon.Compression.SerializationFlags Photon.Compression.Internal.PackObjectDatabase/PackObjDelegate::EndInvoke(System.Object&,Photon.Utilities.FastBitMask128&,System.Int32&,System.Int32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PackObjDelegate_EndInvoke_mFFCAFC88AB35A49E102077CCAA6B2D2DBD9347CC (PackObjDelegate_t332A1B8D3CD1C8D703869E40888E6FDAF0E14A7E * __this, RuntimeObject ** ___obj0, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___mask1, int32_t* ___maskOffset2, int32_t* ___bitposition3, RuntimeObject* ___result4, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___obj0,
	___mask1,
	___maskOffset2,
	___bitposition3,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result4, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::.ctor(Photon.Utilities.FastBitMask128,Photon.Compression.Internal.PackObjectDatabase/PackObjDelegate,Photon.Compression.Internal.PackObjectDatabase/PackFrameDelegate,Photon.Compression.Internal.PackObjectDatabase/UnpackFrameDelegate,System.Int32,System.Func`1<Photon.Compression.Internal.PackFrame>,System.Func`3<System.Object,System.Int32,Photon.Compression.Internal.PackFrame[]>,Photon.Compression.Internal.PackObjectDatabase/PackCopyFrameToObjectDelegate,System.Action`2<System.Object,Photon.Compression.Internal.PackFrame>,System.Action`2<Photon.Compression.Internal.PackFrame,Photon.Compression.Internal.PackFrame>,Photon.Compression.Internal.PackObjectDatabase/PackSnapshotObjectDelegate,Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToFrameDelegate,Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToObjectDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackObjectInfo__ctor_mDB179438C3F2A8EBD01AF46988E6F3FF35BC4AD0 (PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E * __this, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F  ___defaultReadyMask0, PackObjDelegate_t332A1B8D3CD1C8D703869E40888E6FDAF0E14A7E * ___packObjToBuffer1, PackFrameDelegate_tA8CEDA0A5574A69DDCD7D3B2EB64D81D467ECEB5 * ___packFrameToBuffer2, UnpackFrameDelegate_tCF8D77A95A0A923F2ECEC064EAE4465C53D6DFD3 * ___unpackFrameFromBuffer3, int32_t ___maxBits4, Func_1_tECC97AE5F89F601DA79D6BC94EAF1009936D779A * ___factoryFrame5, Func_3_t06730F225B5B2A45E2D85A198E9DEEBD7940C673 * ___factoryFramesObj6, PackCopyFrameToObjectDelegate_t95B7573FE460D068CA760B93677C35287C627875 * ___copyFrameToObj7, Action_2_t95F7CF1C13BE7A0EDC1E168451664D3C076A6841 * ___captureObj8, Action_2_tF543EB1BE063AA2C4C189F907F108085AB479B7F * ___copyFrameToFrame9, PackSnapshotObjectDelegate_t17865965EFA7AFE02A9119950B075CDC6C73D947 * ___snapObject10, PackInterpFrameToFrameDelegate_t79504A76CC9567E3DE51FCF808EC6C10F7A46552 * ___interpFrameToFrame11, PackInterpFrameToObjectDelegate_t2E0D7FB7E4261BE520E80777598784969124FD90 * ___interpFrameToObj12, int32_t ___fieldCount13, const RuntimeMethod* method)
{
	{
		// public PackObjectInfo(
		//     FastBitMask128 defaultReadyMask,
		//     PackObjDelegate packObjToBuffer,
		//     
		//     PackFrameDelegate packFrameToBuffer,
		//     UnpackFrameDelegate unpackFrameFromBuffer,
		//     int maxBits,
		//     Func<PackFrame> factoryFrame,
		//     Func<System.Object, int, PackFrame[]> factoryFramesObj,
		//     PackCopyFrameToObjectDelegate copyFrameToObj,
		//     Action<System.Object, PackFrame> captureObj,
		//     Action<PackFrame, PackFrame> copyFrameToFrame,
		//     PackSnapshotObjectDelegate snapObject,
		//     PackInterpFrameToFrameDelegate interpFrameToFrame,
		//     PackInterpFrameToObjectDelegate interpFrameToObj,
		//     int fieldCount
		//     )
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.PackObjToBuffer = packObjToBuffer;
		PackObjDelegate_t332A1B8D3CD1C8D703869E40888E6FDAF0E14A7E * L_0 = ___packObjToBuffer1;
		__this->set_PackObjToBuffer_4(L_0);
		// this.defaultReadyMask = defaultReadyMask;
		FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F  L_1 = ___defaultReadyMask0;
		__this->set_defaultReadyMask_3(L_1);
		// this.PackFrameToBuffer = packFrameToBuffer;
		PackFrameDelegate_tA8CEDA0A5574A69DDCD7D3B2EB64D81D467ECEB5 * L_2 = ___packFrameToBuffer2;
		__this->set_PackFrameToBuffer_6(L_2);
		// this.UnpackFrameFromBuffer = unpackFrameFromBuffer;
		UnpackFrameDelegate_tCF8D77A95A0A923F2ECEC064EAE4465C53D6DFD3 * L_3 = ___unpackFrameFromBuffer3;
		__this->set_UnpackFrameFromBuffer_7(L_3);
		// this.maxBits = maxBits;
		int32_t L_4 = ___maxBits4;
		__this->set_maxBits_1(L_4);
		// this.maxBytes = (maxBits + 7) >> 3;
		int32_t L_5 = ___maxBits4;
		__this->set_maxBytes_2(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)7))>>(int32_t)3)));
		// this.FactoryFrame = factoryFrame;
		Func_1_tECC97AE5F89F601DA79D6BC94EAF1009936D779A * L_6 = ___factoryFrame5;
		__this->set_FactoryFrame_8(L_6);
		// this.FactoryFramesObj = factoryFramesObj;
		Func_3_t06730F225B5B2A45E2D85A198E9DEEBD7940C673 * L_7 = ___factoryFramesObj6;
		__this->set_FactoryFramesObj_9(L_7);
		// this.CopyFrameToObj = copyFrameToObj;
		PackCopyFrameToObjectDelegate_t95B7573FE460D068CA760B93677C35287C627875 * L_8 = ___copyFrameToObj7;
		__this->set_CopyFrameToObj_11(L_8);
		// this.CaptureObj = captureObj;
		Action_2_t95F7CF1C13BE7A0EDC1E168451664D3C076A6841 * L_9 = ___captureObj8;
		__this->set_CaptureObj_18(L_9);
		// this.CopyFrameToFrame = copyFrameToFrame;
		Action_2_tF543EB1BE063AA2C4C189F907F108085AB479B7F * L_10 = ___copyFrameToFrame9;
		__this->set_CopyFrameToFrame_20(L_10);
		// this.SnapObject = snapObject;
		PackSnapshotObjectDelegate_t17865965EFA7AFE02A9119950B075CDC6C73D947 * L_11 = ___snapObject10;
		__this->set_SnapObject_13(L_11);
		// this.InterpFrameToFrame = interpFrameToFrame;
		PackInterpFrameToFrameDelegate_t79504A76CC9567E3DE51FCF808EC6C10F7A46552 * L_12 = ___interpFrameToFrame11;
		__this->set_InterpFrameToFrame_15(L_12);
		// this.InterpFrameToObj = interpFrameToObj;
		PackInterpFrameToObjectDelegate_t2E0D7FB7E4261BE520E80777598784969124FD90 * L_13 = ___interpFrameToObj12;
		__this->set_InterpFrameToObj_16(L_13);
		// this.fieldCount = fieldCount;
		int32_t L_14 = ___fieldCount13;
		__this->set_fieldCount_21(L_14);
		// }
		return;
	}
}
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackObjectInfo::.ctor(Photon.Utilities.FastBitMask128,Photon.Compression.Internal.PackObjectDatabase/PackStructDelegate,Photon.Compression.Internal.PackObjectDatabase/PackFrameDelegate,Photon.Compression.Internal.PackObjectDatabase/UnpackFrameDelegate,System.Int32,System.Func`1<Photon.Compression.Internal.PackFrame>,System.Func`3<System.IntPtr,System.Int32,Photon.Compression.Internal.PackFrame[]>,Photon.Compression.Internal.PackObjectDatabase/PackCopyFrameToStructDelegate,System.Action`2<System.IntPtr,Photon.Compression.Internal.PackFrame>,System.Action`2<Photon.Compression.Internal.PackFrame,Photon.Compression.Internal.PackFrame>,Photon.Compression.Internal.PackObjectDatabase/PackSnapshotStructDelegate,Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToFrameDelegate,Photon.Compression.Internal.PackObjectDatabase/PackInterpFrameToStructDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackObjectInfo__ctor_m34C5989CE9A23AF2E5E6AB69D1A585345C9CF18B (PackObjectInfo_tECB6BB7731B510FEBFEE283BEEA25161F236B87E * __this, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F  ___defaultReadyMask0, PackStructDelegate_tC88966D5724D3357D1927A72E199BF45EA336450 * ___packStructToBuffer1, PackFrameDelegate_tA8CEDA0A5574A69DDCD7D3B2EB64D81D467ECEB5 * ___packFrameToBuffer2, UnpackFrameDelegate_tCF8D77A95A0A923F2ECEC064EAE4465C53D6DFD3 * ___unpackFrameFromBuffer3, int32_t ___maxBits4, Func_1_tECC97AE5F89F601DA79D6BC94EAF1009936D779A * ___factoryFrame5, Func_3_t538E2B68E7ADDFCA0958C78B3C54B131BE1FBD73 * ___factoryFramesStruct6, PackCopyFrameToStructDelegate_t573C14A226006904036BE25919A2AD8CB5426C89 * ___copyFrameToStruct7, Action_2_t3BBD0274AE0477407194AFAB3B4A2BCF40A71D34 * ___captureStruct8, Action_2_tF543EB1BE063AA2C4C189F907F108085AB479B7F * ___copyFrameToFrame9, PackSnapshotStructDelegate_t4A9815B483E31981CEFFB833299EF1D6892DDC0E * ___snapStruct10, PackInterpFrameToFrameDelegate_t79504A76CC9567E3DE51FCF808EC6C10F7A46552 * ___interpFrameToFrame11, PackInterpFrameToStructDelegate_t92235466FF0AA7E30B5D1A670FCF4F4D2AD05B66 * ___interpFrameToStruct12, int32_t ___fieldCount13, const RuntimeMethod* method)
{
	{
		// public PackObjectInfo(
		//     FastBitMask128 defaultReadyMask,
		//     PackStructDelegate packStructToBuffer,
		//     
		//     PackFrameDelegate packFrameToBuffer,
		//     UnpackFrameDelegate unpackFrameFromBuffer,
		//     int maxBits,
		//     Func<PackFrame> factoryFrame,
		//     Func<IntPtr, int, PackFrame[]> factoryFramesStruct,
		//     PackCopyFrameToStructDelegate copyFrameToStruct,
		//     Action<IntPtr, PackFrame> captureStruct,
		//     Action<PackFrame, PackFrame> copyFrameToFrame,
		//     PackSnapshotStructDelegate snapStruct,
		//     PackInterpFrameToFrameDelegate interpFrameToFrame,
		//     PackInterpFrameToStructDelegate interpFrameToStruct,
		//     int fieldCount
		//     )
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.defaultReadyMask = defaultReadyMask;
		FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F  L_0 = ___defaultReadyMask0;
		__this->set_defaultReadyMask_3(L_0);
		// this.PackStructToBuffer = packStructToBuffer;
		PackStructDelegate_tC88966D5724D3357D1927A72E199BF45EA336450 * L_1 = ___packStructToBuffer1;
		__this->set_PackStructToBuffer_5(L_1);
		// this.PackFrameToBuffer = packFrameToBuffer;
		PackFrameDelegate_tA8CEDA0A5574A69DDCD7D3B2EB64D81D467ECEB5 * L_2 = ___packFrameToBuffer2;
		__this->set_PackFrameToBuffer_6(L_2);
		// this.UnpackFrameFromBuffer = unpackFrameFromBuffer;
		UnpackFrameDelegate_tCF8D77A95A0A923F2ECEC064EAE4465C53D6DFD3 * L_3 = ___unpackFrameFromBuffer3;
		__this->set_UnpackFrameFromBuffer_7(L_3);
		// this.maxBits = maxBits;
		int32_t L_4 = ___maxBits4;
		__this->set_maxBits_1(L_4);
		// this.maxBytes = (maxBits + 7) >> 3;
		int32_t L_5 = ___maxBits4;
		__this->set_maxBytes_2(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)7))>>(int32_t)3)));
		// this.FactoryFrame = factoryFrame;
		Func_1_tECC97AE5F89F601DA79D6BC94EAF1009936D779A * L_6 = ___factoryFrame5;
		__this->set_FactoryFrame_8(L_6);
		// this.FactoryFramesStruct = factoryFramesStruct;
		Func_3_t538E2B68E7ADDFCA0958C78B3C54B131BE1FBD73 * L_7 = ___factoryFramesStruct6;
		__this->set_FactoryFramesStruct_10(L_7);
		// this.CopyFrameToStruct = copyFrameToStruct;
		PackCopyFrameToStructDelegate_t573C14A226006904036BE25919A2AD8CB5426C89 * L_8 = ___copyFrameToStruct7;
		__this->set_CopyFrameToStruct_12(L_8);
		// this.CaptureStruct = captureStruct;
		Action_2_t3BBD0274AE0477407194AFAB3B4A2BCF40A71D34 * L_9 = ___captureStruct8;
		__this->set_CaptureStruct_19(L_9);
		// this.CopyFrameToFrame = copyFrameToFrame;
		Action_2_tF543EB1BE063AA2C4C189F907F108085AB479B7F * L_10 = ___copyFrameToFrame9;
		__this->set_CopyFrameToFrame_20(L_10);
		// this.SnapStruct = snapStruct;
		PackSnapshotStructDelegate_t4A9815B483E31981CEFFB833299EF1D6892DDC0E * L_11 = ___snapStruct10;
		__this->set_SnapStruct_14(L_11);
		// this.InterpFrameToFrame = interpFrameToFrame;
		PackInterpFrameToFrameDelegate_t79504A76CC9567E3DE51FCF808EC6C10F7A46552 * L_12 = ___interpFrameToFrame11;
		__this->set_InterpFrameToFrame_15(L_12);
		// this.InterpFrameToStruct = interpFrameToStruct;
		PackInterpFrameToStructDelegate_t92235466FF0AA7E30B5D1A670FCF4F4D2AD05B66 * L_13 = ___interpFrameToStruct12;
		__this->set_InterpFrameToStruct_17(L_13);
		// this.fieldCount = fieldCount;
		int32_t L_14 = ___fieldCount13;
		__this->set_fieldCount_21(L_14);
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
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackSnapshotObjectDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackSnapshotObjectDelegate__ctor_m40EF5B7B5AE288D96C6C0282F7593F376559E3DC (PackSnapshotObjectDelegate_t17865965EFA7AFE02A9119950B075CDC6C73D947 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackSnapshotObjectDelegate::Invoke(Photon.Compression.Internal.PackFrame,Photon.Compression.Internal.PackFrame,System.Object,Photon.Utilities.FastBitMask128&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackSnapshotObjectDelegate_Invoke_m7369971D9C7D952FDC43C81A12BE2DD4A56BAD63 (PackSnapshotObjectDelegate_t17865965EFA7AFE02A9119950B075CDC6C73D947 * __this, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___snap0, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___targ1, RuntimeObject * ___trg2, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___readyMask3, int32_t* ___maskOffset4, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4, targetMethod);
			}
		}
		else if (___parameterCount != 5)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4);
					else
						GenericVirtActionInvoker4< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4);
					else
						VirtActionInvoker4< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, targetThis, ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4);
					else
						GenericVirtActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, targetThis, ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4);
					else
						VirtActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, RuntimeObject *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Photon.Compression.Internal.PackObjectDatabase/PackSnapshotObjectDelegate::BeginInvoke(Photon.Compression.Internal.PackFrame,Photon.Compression.Internal.PackFrame,System.Object,Photon.Utilities.FastBitMask128&,System.Int32&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PackSnapshotObjectDelegate_BeginInvoke_mB0107E1705804CE9607FC4E37761BA1874556541 (PackSnapshotObjectDelegate_t17865965EFA7AFE02A9119950B075CDC6C73D947 * __this, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___snap0, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___targ1, RuntimeObject * ___trg2, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___readyMask3, int32_t* ___maskOffset4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___snap0;
	__d_args[1] = ___targ1;
	__d_args[2] = ___trg2;
	__d_args[3] = Box(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var, &*___readyMask3);
	__d_args[4] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___maskOffset4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackSnapshotObjectDelegate::EndInvoke(Photon.Utilities.FastBitMask128&,System.Int32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackSnapshotObjectDelegate_EndInvoke_m4FD416D6D09AF90E33CB222F2BAE5FD6C0A48299 (PackSnapshotObjectDelegate_t17865965EFA7AFE02A9119950B075CDC6C73D947 * __this, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___readyMask0, int32_t* ___maskOffset1, RuntimeObject* ___result2, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___readyMask0,
	___maskOffset1,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackSnapshotStructDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackSnapshotStructDelegate__ctor_mBD3950387F51FEE6C74C2BF8C87A3270734B71AE (PackSnapshotStructDelegate_t4A9815B483E31981CEFFB833299EF1D6892DDC0E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackSnapshotStructDelegate::Invoke(Photon.Compression.Internal.PackFrame,Photon.Compression.Internal.PackFrame,System.IntPtr,Photon.Utilities.FastBitMask128&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackSnapshotStructDelegate_Invoke_m6BFD62F295A487F41F19F049A492A88F06A44516 (PackSnapshotStructDelegate_t4A9815B483E31981CEFFB833299EF1D6892DDC0E * __this, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___snap0, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___targ1, intptr_t ___trg2, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___readyMask3, int32_t* ___maskOffset4, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 5)
			{
				// open
				typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4, targetMethod);
			}
		}
		else if (___parameterCount != 5)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4);
					else
						GenericVirtActionInvoker4< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4);
					else
						VirtActionInvoker4< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, targetThis, ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4);
					else
						GenericVirtActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(targetMethod, targetThis, ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4);
					else
						VirtActionInvoker5< PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, intptr_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___snap0, ___targ1, ___trg2, ___readyMask3, ___maskOffset4, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Photon.Compression.Internal.PackObjectDatabase/PackSnapshotStructDelegate::BeginInvoke(Photon.Compression.Internal.PackFrame,Photon.Compression.Internal.PackFrame,System.IntPtr,Photon.Utilities.FastBitMask128&,System.Int32&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PackSnapshotStructDelegate_BeginInvoke_mA35D56F39644EE60C7BD1A9B93A3DDF006D48947 (PackSnapshotStructDelegate_t4A9815B483E31981CEFFB833299EF1D6892DDC0E * __this, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___snap0, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___targ1, intptr_t ___trg2, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___readyMask3, int32_t* ___maskOffset4, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___snap0;
	__d_args[1] = ___targ1;
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___trg2);
	__d_args[3] = Box(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var, &*___readyMask3);
	__d_args[4] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___maskOffset4);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);;
}
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackSnapshotStructDelegate::EndInvoke(Photon.Utilities.FastBitMask128&,System.Int32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackSnapshotStructDelegate_EndInvoke_m9D6A570A8685D90AEC34161C3B9CAD1D4C940C54 (PackSnapshotStructDelegate_t4A9815B483E31981CEFFB833299EF1D6892DDC0E * __this, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___readyMask0, int32_t* ___maskOffset1, RuntimeObject* ___result2, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___readyMask0,
	___maskOffset1,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result2, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Compression.Internal.PackObjectDatabase/PackStructDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackStructDelegate__ctor_m70D3EDF7BE30F1291456389E1020F50C5C3166A6 (PackStructDelegate_tC88966D5724D3357D1927A72E199BF45EA336450 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Photon.Compression.SerializationFlags Photon.Compression.Internal.PackObjectDatabase/PackStructDelegate::Invoke(System.IntPtr,Photon.Compression.Internal.PackFrame,Photon.Utilities.FastBitMask128&,System.Int32&,System.Byte[],System.Int32&,System.Int32,Photon.Compression.SerializationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PackStructDelegate_Invoke_m6711DDDE2D8D48A1CCEC40F74C7ACF8BD2285816 (PackStructDelegate_tC88966D5724D3357D1927A72E199BF45EA336450 * __this, intptr_t ___obj0, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___prevFrame1, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___mask2, int32_t* ___maskOffset3, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer4, int32_t* ___bitposition5, int32_t ___frameId6, int32_t ___forceKeyframe7, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 8)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker8< int32_t, intptr_t, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
					else
						result = GenericVirtFuncInvoker8< int32_t, intptr_t, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker8< int32_t, intptr_t, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
					else
						result = VirtFuncInvoker8< int32_t, intptr_t, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___prevFrame1, ___mask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Photon.Compression.Internal.PackObjectDatabase/PackStructDelegate::BeginInvoke(System.IntPtr,Photon.Compression.Internal.PackFrame,Photon.Utilities.FastBitMask128&,System.Int32&,System.Byte[],System.Int32&,System.Int32,Photon.Compression.SerializationFlags,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PackStructDelegate_BeginInvoke_m53518904A36192EB9CC2A67B0ABC31F2F7BC856F (PackStructDelegate_tC88966D5724D3357D1927A72E199BF45EA336450 * __this, intptr_t ___obj0, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___prevFrame1, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___mask2, int32_t* ___maskOffset3, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer4, int32_t* ___bitposition5, int32_t ___frameId6, int32_t ___forceKeyframe7, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback8, RuntimeObject * ___object9, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationFlags_t83C1C8678EBB133FE647D7FFE11E9863356D8151_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[9] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___obj0);
	__d_args[1] = ___prevFrame1;
	__d_args[2] = Box(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var, &*___mask2);
	__d_args[3] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___maskOffset3);
	__d_args[4] = ___buffer4;
	__d_args[5] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___bitposition5);
	__d_args[6] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___frameId6);
	__d_args[7] = Box(SerializationFlags_t83C1C8678EBB133FE647D7FFE11E9863356D8151_il2cpp_TypeInfo_var, &___forceKeyframe7);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback8, (RuntimeObject*)___object9);;
}
// Photon.Compression.SerializationFlags Photon.Compression.Internal.PackObjectDatabase/PackStructDelegate::EndInvoke(Photon.Utilities.FastBitMask128&,System.Int32&,System.Int32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PackStructDelegate_EndInvoke_m76C02BAA1BAF82B46A2FE8F9C2BA82B205FDDD6A (PackStructDelegate_tC88966D5724D3357D1927A72E199BF45EA336450 * __this, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___mask0, int32_t* ___maskOffset1, int32_t* ___bitposition2, RuntimeObject* ___result3, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___mask0,
	___maskOffset1,
	___bitposition2,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result3, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Photon.Compression.Internal.PackObjectDatabase/UnpackFrameDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnpackFrameDelegate__ctor_m9374F7AB0DB7FD6DABA75C8361F8BC4AB94694F6 (UnpackFrameDelegate_tCF8D77A95A0A923F2ECEC064EAE4465C53D6DFD3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// Photon.Compression.SerializationFlags Photon.Compression.Internal.PackObjectDatabase/UnpackFrameDelegate::Invoke(Photon.Compression.Internal.PackFrame,Photon.Utilities.FastBitMask128&,Photon.Utilities.FastBitMask128&,System.Int32&,System.Byte[],System.Int32&,System.Int32,Photon.Compression.SerializationFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnpackFrameDelegate_Invoke_m1C92E67AC47A62296991ABE966E595DB94F25283 (UnpackFrameDelegate_tCF8D77A95A0A923F2ECEC064EAE4465C53D6DFD3 * __this, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___obj0, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___hasContentMask1, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___isCompleteMask2, int32_t* ___maskOffset3, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer4, int32_t* ___bitposition5, int32_t ___frameId6, int32_t ___forceKeyframe7, const RuntimeMethod* method)
{
	int32_t result = 0;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 8)
			{
				// open
				typedef int32_t (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___obj0, ___hasContentMask1, ___isCompleteMask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___hasContentMask1, ___isCompleteMask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7, targetMethod);
			}
		}
		else if (___parameterCount != 8)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker7< int32_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(targetMethod, ___obj0, ___hasContentMask1, ___isCompleteMask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
					else
						result = GenericVirtFuncInvoker7< int32_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(targetMethod, ___obj0, ___hasContentMask1, ___isCompleteMask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker7< int32_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___obj0, ___hasContentMask1, ___isCompleteMask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
					else
						result = VirtFuncInvoker7< int32_t, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___obj0, ___hasContentMask1, ___isCompleteMask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
				}
			}
			else
			{
				typedef int32_t (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___obj0, ___hasContentMask1, ___isCompleteMask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker8< int32_t, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___obj0, ___hasContentMask1, ___isCompleteMask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
					else
						result = GenericVirtFuncInvoker8< int32_t, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___obj0, ___hasContentMask1, ___isCompleteMask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker8< int32_t, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0, ___hasContentMask1, ___isCompleteMask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
					else
						result = VirtFuncInvoker8< int32_t, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0, ___hasContentMask1, ___isCompleteMask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef int32_t (*FunctionPointerType) (PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___obj0, ___hasContentMask1, ___isCompleteMask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7, targetMethod);
				}
				else
				{
					typedef int32_t (*FunctionPointerType) (void*, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F *, int32_t*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t*, int32_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___hasContentMask1, ___isCompleteMask2, ___maskOffset3, ___buffer4, ___bitposition5, ___frameId6, ___forceKeyframe7, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Photon.Compression.Internal.PackObjectDatabase/UnpackFrameDelegate::BeginInvoke(Photon.Compression.Internal.PackFrame,Photon.Utilities.FastBitMask128&,Photon.Utilities.FastBitMask128&,System.Int32&,System.Byte[],System.Int32&,System.Int32,Photon.Compression.SerializationFlags,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnpackFrameDelegate_BeginInvoke_m2CDC0ED3A6C0FEE4253F20872B9408A315CCB02D (UnpackFrameDelegate_tCF8D77A95A0A923F2ECEC064EAE4465C53D6DFD3 * __this, PackFrame_t3728F78453D3B09472257FEBAC507B573D5B039F * ___obj0, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___hasContentMask1, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___isCompleteMask2, int32_t* ___maskOffset3, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer4, int32_t* ___bitposition5, int32_t ___frameId6, int32_t ___forceKeyframe7, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback8, RuntimeObject * ___object9, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerializationFlags_t83C1C8678EBB133FE647D7FFE11E9863356D8151_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[9] = {0};
	__d_args[0] = ___obj0;
	__d_args[1] = Box(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var, &*___hasContentMask1);
	__d_args[2] = Box(FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F_il2cpp_TypeInfo_var, &*___isCompleteMask2);
	__d_args[3] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___maskOffset3);
	__d_args[4] = ___buffer4;
	__d_args[5] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &*___bitposition5);
	__d_args[6] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___frameId6);
	__d_args[7] = Box(SerializationFlags_t83C1C8678EBB133FE647D7FFE11E9863356D8151_il2cpp_TypeInfo_var, &___forceKeyframe7);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback8, (RuntimeObject*)___object9);;
}
// Photon.Compression.SerializationFlags Photon.Compression.Internal.PackObjectDatabase/UnpackFrameDelegate::EndInvoke(Photon.Utilities.FastBitMask128&,Photon.Utilities.FastBitMask128&,System.Int32&,System.Int32&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnpackFrameDelegate_EndInvoke_mB5060801912636D5B3DA1EE1737F8EB82B916B34 (UnpackFrameDelegate_tCF8D77A95A0A923F2ECEC064EAE4465C53D6DFD3 * __this, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___hasContentMask0, FastBitMask128_t6E647ED47F2FD414DF64DA25724112903F6B998F * ___isCompleteMask1, int32_t* ___maskOffset2, int32_t* ___bitposition3, RuntimeObject* ___result4, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___hasContentMask0,
	___isCompleteMask1,
	___maskOffset2,
	___bitposition3,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result4, ___out_args);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Photon.Pun.Simple.Pooling.Pool/PoolItemDef
IL2CPP_EXTERN_C void PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7_marshal_pinvoke(const PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7& unmarshaled, PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7_marshaled_pinvoke& marshaled)
{
	Exception_t* ___prefab_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'prefab' of type 'PoolItemDef': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___prefab_0Exception, NULL);
}
IL2CPP_EXTERN_C void PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7_marshal_pinvoke_back(const PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7_marshaled_pinvoke& marshaled, PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7& unmarshaled)
{
	Exception_t* ___prefab_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'prefab' of type 'PoolItemDef': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___prefab_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Photon.Pun.Simple.Pooling.Pool/PoolItemDef
IL2CPP_EXTERN_C void PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7_marshal_pinvoke_cleanup(PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Photon.Pun.Simple.Pooling.Pool/PoolItemDef
IL2CPP_EXTERN_C void PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7_marshal_com(const PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7& unmarshaled, PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7_marshaled_com& marshaled)
{
	Exception_t* ___prefab_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'prefab' of type 'PoolItemDef': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___prefab_0Exception, NULL);
}
IL2CPP_EXTERN_C void PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7_marshal_com_back(const PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7_marshaled_com& marshaled, PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7& unmarshaled)
{
	Exception_t* ___prefab_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'prefab' of type 'PoolItemDef': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___prefab_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Photon.Pun.Simple.Pooling.Pool/PoolItemDef
IL2CPP_EXTERN_C void PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7_marshal_com_cleanup(PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7_marshaled_com& marshaled)
{
}
// System.Void Photon.Pun.Simple.Pooling.Pool/PoolItemDef::.ctor(UnityEngine.GameObject,System.Int32,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolItemDef__ctor_mA72BFBDF08D5E78A7596872935D2F624D89AD3C4 (PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab0, int32_t ___growBy1, Type_t * ___scriptToAdd2, const RuntimeMethod* method)
{
	{
		// this.prefab = prefab;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___prefab0;
		__this->set_prefab_0(L_0);
		// this.growBy = growBy;
		int32_t L_1 = ___growBy1;
		__this->set_growBy_1(L_1);
		// this.scriptToAdd = scriptToAdd;
		Type_t * L_2 = ___scriptToAdd2;
		__this->set_scriptToAdd_2(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PoolItemDef__ctor_mA72BFBDF08D5E78A7596872935D2F624D89AD3C4_AdjustorThunk (RuntimeObject * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab0, int32_t ___growBy1, Type_t * ___scriptToAdd2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7 * _thisAdjusted = reinterpret_cast<PoolItemDef_tEC75DD9F44C3DC847CCACAEF2E98B17A8AC5F9F7 *>(__this + _offset);
	PoolItemDef__ctor_mA72BFBDF08D5E78A7596872935D2F624D89AD3C4(_thisAdjusted, ___prefab0, ___growBy1, ___scriptToAdd2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_mBAD5262A353BC071C61B8DB462A3D4D5AB5C7C4E (Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_mAF13C515CFB1085295C01A870D93375E98F16647 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	{
		// pitch = t.eulerAngles.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		__this->set_pitch_1(L_2);
		// yaw = t.eulerAngles.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___t0;
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		__this->set_yaw_0(L_5);
		// roll = t.eulerAngles.z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = ___t0;
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_z_4();
		__this->set_roll_2(L_8);
		// x = t.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = ___t0;
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		__this->set_x_3(L_11);
		// y = t.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = ___t0;
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		__this->set_y_4(L_14);
		// z = t.position.z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = ___t0;
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_z_4();
		__this->set_z_5(L_17);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_mB8F7239BD9DB70190E59D47D75DD125AD9AF3A96 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 rotatedTranslation = Quaternion.Euler(pitch, yaw, roll) * translation;
		float L_0 = __this->get_pitch_1();
		float L_1 = __this->get_yaw_0();
		float L_2 = __this->get_roll_2();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___translation0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// x += rotatedTranslation.x;
		float L_6 = __this->get_x_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		float L_8 = L_7.get_x_2();
		__this->set_x_3(((float)il2cpp_codegen_add((float)L_6, (float)L_8)));
		// y += rotatedTranslation.y;
		float L_9 = __this->get_y_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = L_10.get_y_3();
		__this->set_y_4(((float)il2cpp_codegen_add((float)L_9, (float)L_11)));
		// z += rotatedTranslation.z;
		float L_12 = __this->get_z_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		float L_14 = L_13.get_z_4();
		__this->set_z_5(((float)il2cpp_codegen_add((float)L_12, (float)L_14)));
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController/CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_mF2D4B962A677B281ED2F539A2FFF8A693FB9A326 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * ___target0, float ___positionLerpPct1, float ___rotationLerpPct2, const RuntimeMethod* method)
{
	{
		// yaw = Mathf.Lerp(yaw, target.yaw, rotationLerpPct);
		float L_0 = __this->get_yaw_0();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_1 = ___target0;
		NullCheck(L_1);
		float L_2 = L_1->get_yaw_0();
		float L_3 = ___rotationLerpPct2;
		float L_4;
		L_4 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_0, L_2, L_3, /*hidden argument*/NULL);
		__this->set_yaw_0(L_4);
		// pitch = Mathf.Lerp(pitch, target.pitch, rotationLerpPct);
		float L_5 = __this->get_pitch_1();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_6 = ___target0;
		NullCheck(L_6);
		float L_7 = L_6->get_pitch_1();
		float L_8 = ___rotationLerpPct2;
		float L_9;
		L_9 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_5, L_7, L_8, /*hidden argument*/NULL);
		__this->set_pitch_1(L_9);
		// roll = Mathf.Lerp(roll, target.roll, rotationLerpPct);
		float L_10 = __this->get_roll_2();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_11 = ___target0;
		NullCheck(L_11);
		float L_12 = L_11->get_roll_2();
		float L_13 = ___rotationLerpPct2;
		float L_14;
		L_14 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_10, L_12, L_13, /*hidden argument*/NULL);
		__this->set_roll_2(L_14);
		// x = Mathf.Lerp(x, target.x, positionLerpPct);
		float L_15 = __this->get_x_3();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_16 = ___target0;
		NullCheck(L_16);
		float L_17 = L_16->get_x_3();
		float L_18 = ___positionLerpPct1;
		float L_19;
		L_19 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_15, L_17, L_18, /*hidden argument*/NULL);
		__this->set_x_3(L_19);
		// y = Mathf.Lerp(y, target.y, positionLerpPct);
		float L_20 = __this->get_y_4();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_21 = ___target0;
		NullCheck(L_21);
		float L_22 = L_21->get_y_4();
		float L_23 = ___positionLerpPct1;
		float L_24;
		L_24 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_20, L_22, L_23, /*hidden argument*/NULL);
		__this->set_y_4(L_24);
		// z = Mathf.Lerp(z, target.z, positionLerpPct);
		float L_25 = __this->get_z_5();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_26 = ___target0;
		NullCheck(L_26);
		float L_27 = L_26->get_z_5();
		float L_28 = ___positionLerpPct1;
		float L_29;
		L_29 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_25, L_27, L_28, /*hidden argument*/NULL);
		__this->set_z_5(L_29);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_mE653356FD34828D19ECB6793439A14C38F372410 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	{
		// t.eulerAngles = new Vector3(pitch, yaw, roll);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		float L_1 = __this->get_pitch_1();
		float L_2 = __this->get_yaw_0();
		float L_3 = __this->get_roll_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_0, L_4, /*hidden argument*/NULL);
		// t.position = new Vector3(x, y, z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___t0;
		float L_6 = __this->get_x_3();
		float L_7 = __this->get_y_4();
		float L_8 = __this->get_z_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m9C5338CABE70B8C73F8A4A08C1AFA1B33417DE9D (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Pun.Simple.SyncAdditiveMover/TRSDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TRSDefinition__ctor_m230B5D31A903F96368B210E1A2DE9E3F96B0F5EB (TRSDefinition_tA65CC57592007173CF8E35F680C37B4A198DFD3B * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 addVector = new Vector3(0, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_addVector_1(L_0);
		TRSDefinitionBase__ctor_m6BCB82AF91558D900C42526816F251C53CF0046E(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Pun.Simple.SyncAnimator/Frame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_m4A596802B5745B7FBA0931C1293504AC01F25388 (Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * __this, const RuntimeMethod* method)
{
	{
		// public Frame() : base() { }
		FrameBase__ctor_m03874791CDB2DC0140005769CDABA349A5396370(__this, /*hidden argument*/NULL);
		// public Frame() : base() { }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncAnimator/Frame::.ctor(Photon.Pun.Simple.SyncAnimator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_m2AB53C7D177B64612A007E64DFC15F6910A21557 (Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * __this, SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4 * ___syncAnimator0, int32_t ___frameId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1U5BU5D_t02F1C69D15AC8D2407B9D63017EF6E7EC4AD5F94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m75A99D13119CD625499499D1AF9316082F3A8AB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// public Frame(SyncAnimator syncAnimator, int frameId) : base(frameId)
		int32_t L_0 = ___frameId1;
		FrameBase__ctor_mD76BE87E69C74515EE1BEBC2B5E852EC38289573(__this, L_0, /*hidden argument*/NULL);
		// this.syncAnimator = syncAnimator;
		SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4 * L_1 = ___syncAnimator0;
		__this->set_syncAnimator_2(L_1);
		// int layerCount = syncAnimator.layerCount;
		SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4 * L_2 = ___syncAnimator0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_layerCount_42();
		V_0 = L_3;
		// stateHashes = new int?[layerCount];
		int32_t L_4 = V_0;
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* L_5 = (Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84*)(Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84*)SZArrayNew(Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->set_stateHashes_4(L_5);
		// layerIsInTransition = new bool[layerCount];
		int32_t L_6 = V_0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_7 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)SZArrayNew(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->set_layerIsInTransition_5(L_7);
		// normalizedTime = new float[layerCount];
		int32_t L_8 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->set_normalizedTime_6(L_9);
		// layerWeights = new float?[layerCount];
		int32_t L_10 = V_0;
		Nullable_1U5BU5D_t02F1C69D15AC8D2407B9D63017EF6E7EC4AD5F94* L_11 = (Nullable_1U5BU5D_t02F1C69D15AC8D2407B9D63017EF6E7EC4AD5F94*)(Nullable_1U5BU5D_t02F1C69D15AC8D2407B9D63017EF6E7EC4AD5F94*)SZArrayNew(Nullable_1U5BU5D_t02F1C69D15AC8D2407B9D63017EF6E7EC4AD5F94_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->set_layerWeights_7(L_11);
		// passThrus = new Queue<AnimPassThru>(2);
		Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8 * L_12 = (Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8 *)il2cpp_codegen_object_new(Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8_il2cpp_TypeInfo_var);
		Queue_1__ctor_m75A99D13119CD625499499D1AF9316082F3A8AB6(L_12, 2, /*hidden argument*/Queue_1__ctor_m75A99D13119CD625499499D1AF9316082F3A8AB6_RuntimeMethod_var);
		__this->set_passThrus_8(L_12);
		// parameters = new SmartVar[syncAnimator.paramCount];
		SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4 * L_13 = ___syncAnimator0;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_paramCount_49();
		SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE* L_15 = (SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE*)(SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE*)SZArrayNew(SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE_il2cpp_TypeInfo_var, (uint32_t)L_14);
		__this->set_parameters_3(L_15);
		// int paramcnt = syncAnimator.paramCount;
		SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4 * L_16 = ___syncAnimator0;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_paramCount_49();
		V_1 = L_17;
		// for (int pid = 0; pid < paramcnt; ++pid)
		V_2 = 0;
		goto IL_008a;
	}

IL_006d:
	{
		// parameters[pid] = syncAnimator.sharedParamSettings[pid].defaultValue;
		SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE* L_18 = __this->get_parameters_3();
		int32_t L_19 = V_2;
		SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4 * L_20 = ___syncAnimator0;
		NullCheck(L_20);
		ParameterSettingsU5BU5D_tE5019A989ADEB88A9581CFCCA4BB065EE26D9540* L_21 = L_20->get_sharedParamSettings_48();
		int32_t L_22 = V_2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		ParameterSettings_tD00123C4CD07D7213565282CC79412B3455D3C0C * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7  L_25 = L_24->get_defaultValue_5();
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7 )L_25);
		// for (int pid = 0; pid < paramcnt; ++pid)
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_008a:
	{
		// for (int pid = 0; pid < paramcnt; ++pid)
		int32_t L_27 = V_2;
		int32_t L_28 = V_1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_006d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncAnimator/Frame::CopyFrom(Photon.Pun.Simple.FrameBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_CopyFrom_mAD27E0021FDB2E3304135EF1344AD24E692D0284 (Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * __this, FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * ___sourceFrame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * V_0 = NULL;
	SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// base.CopyFrom(sourceFrame);
		FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * L_0 = ___sourceFrame0;
		FrameBase_CopyFrom_m50DE3B0C96AA48AE6C49EAE39F782DCB7098D216(__this, L_0, /*hidden argument*/NULL);
		// Frame frame = sourceFrame as Frame;
		FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * L_1 = ___sourceFrame0;
		V_0 = ((Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB *)IsInstClass((RuntimeObject*)L_1, Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB_il2cpp_TypeInfo_var));
		// if (syncAnimator.syncParams)
		SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4 * L_2 = __this->get_syncAnimator_2();
		NullCheck(L_2);
		bool L_3 = L_2->get_syncParams_43();
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// var ps = frame.parameters;
		Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * L_4 = V_0;
		NullCheck(L_4);
		SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE* L_5 = L_4->get_parameters_3();
		V_1 = L_5;
		// int paramcnt = ps.Length;
		SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE* L_6 = V_1;
		NullCheck(L_6);
		V_2 = ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)));
		// for (int i = 0; i < paramcnt; ++i)
		V_3 = 0;
		goto IL_0041;
	}

IL_002a:
	{
		// parameters[i] = ps[i];
		SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE* L_7 = __this->get_parameters_3();
		int32_t L_8 = V_3;
		SmartVarU5BU5D_tCE8D0B838EE9433F902CCD4B63219F83C27AE2AE* L_9 = V_1;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7  L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (SmartVar_t6A4CD7290A91B6132718CCFE38178A8A8EC7BDA7 )L_12);
		// for (int i = 0; i < paramcnt; ++i)
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0041:
	{
		// for (int i = 0; i < paramcnt; ++i)
		int32_t L_14 = V_3;
		int32_t L_15 = V_2;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002a;
		}
	}

IL_0045:
	{
		// if (syncAnimator.syncStates)
		SyncAnimator_t5666E1C0849F58F2160F48AE6C4E6F0D032646F4 * L_16 = __this->get_syncAnimator_2();
		NullCheck(L_16);
		bool L_17 = L_16->get_syncStates_37();
		if (!L_17)
		{
			goto IL_00c5;
		}
	}
	{
		// int lyrCnt = frame.stateHashes.Length;
		Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * L_18 = V_0;
		NullCheck(L_18);
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* L_19 = L_18->get_stateHashes_4();
		NullCheck(L_19);
		V_4 = ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)));
		// for (int i = 0; i < lyrCnt; ++i)
		V_5 = 0;
		goto IL_00bf;
	}

IL_0061:
	{
		// stateHashes[i] = frame.stateHashes[i];
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* L_20 = __this->get_stateHashes_4();
		int32_t L_21 = V_5;
		Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * L_22 = V_0;
		NullCheck(L_22);
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* L_23 = L_22->get_stateHashes_4();
		int32_t L_24 = V_5;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_26 = (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 )(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 )L_26);
		// layerIsInTransition[i] = frame.layerIsInTransition[i];
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_27 = __this->get_layerIsInTransition_5();
		int32_t L_28 = V_5;
		Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * L_29 = V_0;
		NullCheck(L_29);
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_30 = L_29->get_layerIsInTransition_5();
		int32_t L_31 = V_5;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		uint8_t L_33 = (uint8_t)(L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (bool)L_33);
		// normalizedTime[i] = frame.normalizedTime[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_34 = __this->get_normalizedTime_6();
		int32_t L_35 = V_5;
		Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * L_36 = V_0;
		NullCheck(L_36);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_37 = L_36->get_normalizedTime_6();
		int32_t L_38 = V_5;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		float L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (float)L_40);
		// layerWeights[i] = frame.layerWeights[i];
		Nullable_1U5BU5D_t02F1C69D15AC8D2407B9D63017EF6E7EC4AD5F94* L_41 = __this->get_layerWeights_7();
		int32_t L_42 = V_5;
		Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * L_43 = V_0;
		NullCheck(L_43);
		Nullable_1U5BU5D_t02F1C69D15AC8D2407B9D63017EF6E7EC4AD5F94* L_44 = L_43->get_layerWeights_7();
		int32_t L_45 = V_5;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A  L_47 = (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A )(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A )L_47);
		// for (int i = 0; i < lyrCnt; ++i)
		int32_t L_48 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_00bf:
	{
		// for (int i = 0; i < lyrCnt; ++i)
		int32_t L_49 = V_5;
		int32_t L_50 = V_4;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0061;
		}
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncAnimator/Frame::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_Clear_mCB45CA595C610945CD85F2A2389F578409C8CE86 (Frame_t037C0BB8C1568E3192A1CC85DE5EC8A2B49C79FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_mE4594350F95C173DE00F8553C336E6E13A552FAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// base.Clear();
		FrameBase_Clear_m89D8155A85BBC229DFA55B99629FCA2ABF432F6D(__this, /*hidden argument*/NULL);
		// for (int i = 0, cnt = stateHashes.Length; i < cnt; ++i)
		V_0 = 0;
		// for (int i = 0, cnt = stateHashes.Length; i < cnt; ++i)
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* L_0 = __this->get_stateHashes_4();
		NullCheck(L_0);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		goto IL_0029;
	}

IL_0013:
	{
		// stateHashes[i] = null;
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* L_1 = __this->get_stateHashes_4();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		il2cpp_codegen_initobj(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2))), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
		// for (int i = 0, cnt = stateHashes.Length; i < cnt; ++i)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0029:
	{
		// for (int i = 0, cnt = stateHashes.Length; i < cnt; ++i)
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0013;
		}
	}
	{
		// passThrus.Clear();
		Queue_1_t3A94E770507F13DB169668933D6B8F917C83D4F8 * L_6 = __this->get_passThrus_8();
		NullCheck(L_6);
		Queue_1_Clear_mE4594350F95C173DE00F8553C336E6E13A552FAB(L_6, /*hidden argument*/Queue_1_Clear_mE4594350F95C173DE00F8553C336E6E13A552FAB_RuntimeMethod_var);
		// for (int layer = 0, cnt = layerWeights.Length; layer < cnt; ++layer)
		V_2 = 0;
		// for (int layer = 0, cnt = layerWeights.Length; layer < cnt; ++layer)
		Nullable_1U5BU5D_t02F1C69D15AC8D2407B9D63017EF6E7EC4AD5F94* L_7 = __this->get_layerWeights_7();
		NullCheck(L_7);
		V_3 = ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)));
		goto IL_008c;
	}

IL_0045:
	{
		// layerWeights[layer] = null;
		Nullable_1U5BU5D_t02F1C69D15AC8D2407B9D63017EF6E7EC4AD5F94* L_8 = __this->get_layerWeights_7();
		int32_t L_9 = V_2;
		NullCheck(L_8);
		il2cpp_codegen_initobj(((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), sizeof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A ));
		// stateHashes[layer] = null;
		Nullable_1U5BU5D_t5B3D203913020903FAA29BB280A49C2908B4ED84* L_10 = __this->get_stateHashes_4();
		int32_t L_11 = V_2;
		NullCheck(L_10);
		il2cpp_codegen_initobj(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
		// normalizedTime[layer] = 0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_12 = __this->get_normalizedTime_6();
		int32_t L_13 = V_2;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (float)(0.0f));
		// layerWeights[layer] = null;
		Nullable_1U5BU5D_t02F1C69D15AC8D2407B9D63017EF6E7EC4AD5F94* L_14 = __this->get_layerWeights_7();
		int32_t L_15 = V_2;
		NullCheck(L_14);
		il2cpp_codegen_initobj(((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), sizeof(Nullable_1_t0C4AC2E457C437FA106160547FD9BA5B50B1888A ));
		// for (int layer = 0, cnt = layerWeights.Length; layer < cnt; ++layer)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_008c:
	{
		// for (int layer = 0, cnt = layerWeights.Length; layer < cnt; ++layer)
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0045;
		}
	}
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
// System.Void Photon.Pun.Simple.SyncContact/ContactRecord::.ctor(System.Int32,System.Byte,Photon.Pun.Simple.ContactType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContactRecord__ctor_m4655A562BCB10ADCAC747D6C27A25288C234DEAF (ContactRecord_tF317CB14AD69AF5461EA5C4ACD8670E0E93593B3 * __this, int32_t ___contactSystemViewID0, uint8_t ___contactSystemIndex1, int32_t ___contactType2, const RuntimeMethod* method)
{
	{
		// this.contactSystemViewID = contactSystemViewID;
		int32_t L_0 = ___contactSystemViewID0;
		__this->set_contactSystemViewID_1(L_0);
		// this.contactSystemIndex = contactSystemIndex;
		uint8_t L_1 = ___contactSystemIndex1;
		__this->set_contactSystemIndex_2(L_1);
		// this.contactType = contactType;
		int32_t L_2 = ___contactType2;
		__this->set_contactType_0(L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ContactRecord__ctor_m4655A562BCB10ADCAC747D6C27A25288C234DEAF_AdjustorThunk (RuntimeObject * __this, int32_t ___contactSystemViewID0, uint8_t ___contactSystemIndex1, int32_t ___contactType2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ContactRecord_tF317CB14AD69AF5461EA5C4ACD8670E0E93593B3 * _thisAdjusted = reinterpret_cast<ContactRecord_tF317CB14AD69AF5461EA5C4ACD8670E0E93593B3 *>(__this + _offset);
	ContactRecord__ctor_m4655A562BCB10ADCAC747D6C27A25288C234DEAF(_thisAdjusted, ___contactSystemViewID0, ___contactSystemIndex1, ___contactType2, method);
}
// System.String Photon.Pun.Simple.SyncContact/ContactRecord::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContactRecord_ToString_mEB3B9DA75F93A491D46B36EE169C3559E13619F8 (ContactRecord_tF317CB14AD69AF5461EA5C4ACD8670E0E93593B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContactType_tA35B0627DF95D4E59218C29BCF22EDFF537DA851_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7937D4FB5771DDD563A8D27829D481FC02DDB442);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC450A009E997752F09557BD5D9786123177F2A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return contactType + " view: " + contactSystemViewID + " index:" + contactSystemIndex;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		int32_t* L_2 = __this->get_address_of_contactType_0();
		RuntimeObject * L_3 = Box(ContactType_tA35B0627DF95D4E59218C29BCF22EDFF537DA851_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		*L_2 = *(int32_t*)UnBox(L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral7937D4FB5771DDD563A8D27829D481FC02DDB442);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral7937D4FB5771DDD563A8D27829D481FC02DDB442);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		int32_t* L_7 = __this->get_address_of_contactSystemViewID_1();
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_8);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralFC450A009E997752F09557BD5D9786123177F2A0);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralFC450A009E997752F09557BD5D9786123177F2A0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		uint8_t* L_11 = __this->get_address_of_contactSystemIndex_2();
		String_t* L_12;
		L_12 = Byte_ToString_m6A11C71EB9B8031596645EA1A4C2430721B282B5((uint8_t*)L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_12);
		String_t* L_13;
		L_13 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_10, /*hidden argument*/NULL);
		return L_13;
	}
}
IL2CPP_EXTERN_C  String_t* ContactRecord_ToString_mEB3B9DA75F93A491D46B36EE169C3559E13619F8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ContactRecord_tF317CB14AD69AF5461EA5C4ACD8670E0E93593B3 * _thisAdjusted = reinterpret_cast<ContactRecord_tF317CB14AD69AF5461EA5C4ACD8670E0E93593B3 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ContactRecord_ToString_mEB3B9DA75F93A491D46B36EE169C3559E13619F8(_thisAdjusted, method);
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
// System.Void Photon.Pun.Simple.SyncContact/Frame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_mB29F34878EE06FA611080EC87D7EA557899F3966 (Frame_t816C8D5BCA2411AC31AA2C73E5334DA0FDB9B9ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6F8B6AA388C0AFF3267DB8F619602B73B6CAA274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0687FB5314E76736A3FC25D45C604675D7841B98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ContactRecord> contactRecords = new List<ContactRecord>(1);
		List_1_t0687FB5314E76736A3FC25D45C604675D7841B98 * L_0 = (List_1_t0687FB5314E76736A3FC25D45C604675D7841B98 *)il2cpp_codegen_object_new(List_1_t0687FB5314E76736A3FC25D45C604675D7841B98_il2cpp_TypeInfo_var);
		List_1__ctor_m6F8B6AA388C0AFF3267DB8F619602B73B6CAA274(L_0, 1, /*hidden argument*/List_1__ctor_m6F8B6AA388C0AFF3267DB8F619602B73B6CAA274_RuntimeMethod_var);
		__this->set_contactRecords_2(L_0);
		// public Frame() : base() { }
		FrameBase__ctor_m03874791CDB2DC0140005769CDABA349A5396370(__this, /*hidden argument*/NULL);
		// public Frame() : base() { }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncContact/Frame::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_m7F299AB277D3DCE17DBE8233819FAF29984EDD60 (Frame_t816C8D5BCA2411AC31AA2C73E5334DA0FDB9B9ED * __this, int32_t ___frameId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6F8B6AA388C0AFF3267DB8F619602B73B6CAA274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0687FB5314E76736A3FC25D45C604675D7841B98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ContactRecord> contactRecords = new List<ContactRecord>(1);
		List_1_t0687FB5314E76736A3FC25D45C604675D7841B98 * L_0 = (List_1_t0687FB5314E76736A3FC25D45C604675D7841B98 *)il2cpp_codegen_object_new(List_1_t0687FB5314E76736A3FC25D45C604675D7841B98_il2cpp_TypeInfo_var);
		List_1__ctor_m6F8B6AA388C0AFF3267DB8F619602B73B6CAA274(L_0, 1, /*hidden argument*/List_1__ctor_m6F8B6AA388C0AFF3267DB8F619602B73B6CAA274_RuntimeMethod_var);
		__this->set_contactRecords_2(L_0);
		// public Frame(int frameId) : base(frameId)
		int32_t L_1 = ___frameId0;
		FrameBase__ctor_mD76BE87E69C74515EE1BEBC2B5E852EC38289573(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncContact/Frame::CopyFrom(Photon.Pun.Simple.FrameBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_CopyFrom_mFCAE8CF466923C2DD089B6BB1E26617847082242 (Frame_t816C8D5BCA2411AC31AA2C73E5334DA0FDB9B9ED * __this, FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * ___sourceFrame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2621906F0BF46C40CA7DD9801F1FE0381F4F3B54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.CopyFrom(sourceFrame);
		FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * L_0 = ___sourceFrame0;
		FrameBase_CopyFrom_m50DE3B0C96AA48AE6C49EAE39F782DCB7098D216(__this, L_0, /*hidden argument*/NULL);
		// this.content = FrameContents.Empty;
		((FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 *)__this)->set_content_1(0);
		// this.contactRecords.Clear();
		List_1_t0687FB5314E76736A3FC25D45C604675D7841B98 * L_1 = __this->get_contactRecords_2();
		NullCheck(L_1);
		List_1_Clear_m2621906F0BF46C40CA7DD9801F1FE0381F4F3B54(L_1, /*hidden argument*/List_1_Clear_m2621906F0BF46C40CA7DD9801F1FE0381F4F3B54_RuntimeMethod_var);
		// }
		return;
	}
}
// Photon.Pun.Simple.SyncContact/Frame Photon.Pun.Simple.SyncContact/Frame::Construct(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Frame_t816C8D5BCA2411AC31AA2C73E5334DA0FDB9B9ED * Frame_Construct_mE3309950E2F7C3BAC2C329095EE8A7018DFD02DA (int32_t ___frameId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Frame_t816C8D5BCA2411AC31AA2C73E5334DA0FDB9B9ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new Frame(frameId);
		int32_t L_0 = ___frameId0;
		Frame_t816C8D5BCA2411AC31AA2C73E5334DA0FDB9B9ED * L_1 = (Frame_t816C8D5BCA2411AC31AA2C73E5334DA0FDB9B9ED *)il2cpp_codegen_object_new(Frame_t816C8D5BCA2411AC31AA2C73E5334DA0FDB9B9ED_il2cpp_TypeInfo_var);
		Frame__ctor_m7F299AB277D3DCE17DBE8233819FAF29984EDD60(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Photon.Pun.Simple.SyncContact/Frame::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_Clear_m851200320910F6541FD5A1DD6E9256DD3D46790D (Frame_t816C8D5BCA2411AC31AA2C73E5334DA0FDB9B9ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2621906F0BF46C40CA7DD9801F1FE0381F4F3B54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Clear();
		FrameBase_Clear_m89D8155A85BBC229DFA55B99629FCA2ABF432F6D(__this, /*hidden argument*/NULL);
		// contactRecords.Clear();
		List_1_t0687FB5314E76736A3FC25D45C604675D7841B98 * L_0 = __this->get_contactRecords_2();
		NullCheck(L_0);
		List_1_Clear_m2621906F0BF46C40CA7DD9801F1FE0381F4F3B54(L_0, /*hidden argument*/List_1_Clear_m2621906F0BF46C40CA7DD9801F1FE0381F4F3B54_RuntimeMethod_var);
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
// System.Void Photon.Pun.Simple.SyncNodeMover/Frame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_mA102384985C2CFA73CA49CBD2C47A3B050B6585F (Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082 * __this, const RuntimeMethod* method)
{
	{
		// public Frame() : base() { }
		FrameBase__ctor_m03874791CDB2DC0140005769CDABA349A5396370(__this, /*hidden argument*/NULL);
		// public Frame() : base() { }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncNodeMover/Frame::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_mC8E58AF4FEE46598A2B897E8CB1AFF77FE9C9311 (Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082 * __this, int32_t ___frameId0, const RuntimeMethod* method)
{
	{
		// public Frame(int frameId) : base(frameId) { }
		int32_t L_0 = ___frameId0;
		FrameBase__ctor_mD76BE87E69C74515EE1BEBC2B5E852EC38289573(__this, L_0, /*hidden argument*/NULL);
		// public Frame(int frameId) : base(frameId) { }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncNodeMover/Frame::CopyFrom(Photon.Pun.Simple.FrameBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_CopyFrom_m37CD38E05C967DC76A154F678A1AA30561E6CDBE (Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082 * __this, FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * ___sourceFrame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082 * V_0 = NULL;
	{
		// base.CopyFrom(sourceFrame);
		FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * L_0 = ___sourceFrame0;
		FrameBase_CopyFrom_m50DE3B0C96AA48AE6C49EAE39F782DCB7098D216(__this, L_0, /*hidden argument*/NULL);
		// Frame src = sourceFrame as Frame;
		FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * L_1 = ___sourceFrame0;
		V_0 = ((Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082 *)IsInstClass((RuntimeObject*)L_1, Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082_il2cpp_TypeInfo_var));
		// this.targetNode = src.targetNode;
		Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_targetNode_2();
		__this->set_targetNode_2(L_3);
		// this.phase = src.phase;
		Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082 * L_4 = V_0;
		NullCheck(L_4);
		float L_5 = L_4->get_phase_3();
		__this->set_phase_3(L_5);
		// this.cphase = src.cphase;
		Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082 * L_6 = V_0;
		NullCheck(L_6);
		uint32_t L_7 = L_6->get_cphase_4();
		__this->set_cphase_4(L_7);
		// }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncNodeMover/Frame::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_Clear_mDEA575C90475EA7D491D0A209AB23A9A27071308 (Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082 * __this, const RuntimeMethod* method)
{
	{
		// base.Clear();
		FrameBase_Clear_m89D8155A85BBC229DFA55B99629FCA2ABF432F6D(__this, /*hidden argument*/NULL);
		// this.targetNode = -1;
		__this->set_targetNode_2((-1));
		// this.phase = -1;
		__this->set_phase_3((-1.0f));
		// this.cphase = 0;
		__this->set_cphase_4(0);
		// }
		return;
	}
}
// System.Boolean Photon.Pun.Simple.SyncNodeMover/Frame::Compare(Photon.Pun.Simple.SyncNodeMover/Frame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Frame_Compare_m489F5E59B7ABEDA59A00FC6B234F950CB9A339F6 (Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082 * __this, Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082 * ___otherFrame0, const RuntimeMethod* method)
{
	{
		// if (
		//     targetNode != otherFrame.targetNode ||
		//     phase != otherFrame.phase ||
		//     cphase != otherFrame.cphase
		//     )
		int32_t L_0 = __this->get_targetNode_2();
		Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082 * L_1 = ___otherFrame0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_targetNode_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_002a;
		}
	}
	{
		float L_3 = __this->get_phase_3();
		Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082 * L_4 = ___otherFrame0;
		NullCheck(L_4);
		float L_5 = L_4->get_phase_3();
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002a;
		}
	}
	{
		uint32_t L_6 = __this->get_cphase_4();
		Frame_tC244BFFC38BDFEE36ACBF28BBE9FB0C1FDBE4082 * L_7 = ___otherFrame0;
		NullCheck(L_7);
		uint32_t L_8 = L_7->get_cphase_4();
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_002c;
		}
	}

IL_002a:
	{
		// return false;
		return (bool)0;
	}

IL_002c:
	{
		// return true;
		return (bool)1;
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
// UnityEngine.Vector3 Photon.Pun.Simple.SyncNodeMover/Node::get_Pos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Node_get_Pos_m99C5F3031DF91BE62544395F93184D64D9C15FD3 (Node_t09C1A5B66C5ED4D2E8D1B8E3C325BA689A44ADE4 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Pos { get { return trs[0]; } set { trs[0] = value; } }
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = __this->get_trs_0();
		NullCheck(L_0);
		int32_t L_1 = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.Void Photon.Pun.Simple.SyncNodeMover/Node::set_Pos(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_Pos_mB827392507C64663E6E1FF8E68A3A3C8EBBEAC11 (Node_t09C1A5B66C5ED4D2E8D1B8E3C325BA689A44ADE4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Pos { get { return trs[0]; } set { trs[0] = value; } }
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = __this->get_trs_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1);
		// public Vector3 Pos { get { return trs[0]; } set { trs[0] = value; } }
		return;
	}
}
// UnityEngine.Vector3 Photon.Pun.Simple.SyncNodeMover/Node::get_Rot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Node_get_Rot_m438F747D82A4FB3175D1C0A7C1BEA4E0E7105CF5 (Node_t09C1A5B66C5ED4D2E8D1B8E3C325BA689A44ADE4 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Rot { get { return trs[1]; } set { trs[1] = value; } }
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = __this->get_trs_0();
		NullCheck(L_0);
		int32_t L_1 = 1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.Void Photon.Pun.Simple.SyncNodeMover/Node::set_Rot(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_Rot_mAE4DF41D0A70F6384420969D3DA645A008979CFD (Node_t09C1A5B66C5ED4D2E8D1B8E3C325BA689A44ADE4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Rot { get { return trs[1]; } set { trs[1] = value; } }
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = __this->get_trs_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1);
		// public Vector3 Rot { get { return trs[1]; } set { trs[1] = value; } }
		return;
	}
}
// UnityEngine.Vector3 Photon.Pun.Simple.SyncNodeMover/Node::get_Scl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Node_get_Scl_mD63EBF87C8BBDACBD00F6C9C5B7080DEFB7122D9 (Node_t09C1A5B66C5ED4D2E8D1B8E3C325BA689A44ADE4 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Scl { get { return trs[2]; } set { trs[2] = value; } }
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = __this->get_trs_0();
		NullCheck(L_0);
		int32_t L_1 = 2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.Void Photon.Pun.Simple.SyncNodeMover/Node::set_Scl(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node_set_Scl_m2B2C7982F35B3D78206469CDC5C0FCB7DB63AAAE (Node_t09C1A5B66C5ED4D2E8D1B8E3C325BA689A44ADE4 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector3 Scl { get { return trs[2]; } set { trs[2] = value; } }
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = __this->get_trs_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1);
		// public Vector3 Scl { get { return trs[2]; } set { trs[2] = value; } }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncNodeMover/Node::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m2F5D7E410E055FDD9E45E350866C5722698DA079 (Node_t09C1A5B66C5ED4D2E8D1B8E3C325BA689A44ADE4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3[] trs = new Vector3[3] { new Vector3(0, 0, 0), new Vector3(0, 0, 0), new Vector3(1, 1, 1) };
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_0 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)3);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = L_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_2);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_4);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_5 = L_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_6);
		__this->set_trs_0(L_5);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Pun.Simple.SyncNodeMover/TRSDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TRSDefinition__ctor_m64BF76A7E50960937B013A1C59C57B5741DCED3E (TRSDefinition_t7AB112AB7E41F74FC1381E91252ECF00771BB73A * __this, const RuntimeMethod* method)
{
	{
		// public AxisMask includeAxes = AxisMask.XYZ;
		__this->set_includeAxes_1(7);
		// public MovementRelation relation = MovementRelation.Relative;
		__this->set_relation_2(1);
		TRSDefinitionBase__ctor_m6BCB82AF91558D900C42526816F251C53CF0046E(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Pun.Simple.SyncOwner/Frame::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_Clear_m26D7578371A9327E28D57126B8ADA2A1F02FF298 (Frame_tE212F9082267C57F6BEB1594E886AB16751EA53B * __this, const RuntimeMethod* method)
{
	{
		// ownerActorId = -1;
		__this->set_ownerActorId_2((-1));
		// ownerHasChanged = false;
		__this->set_ownerHasChanged_3((bool)0);
		// base.Clear();
		FrameBase_Clear_m89D8155A85BBC229DFA55B99629FCA2ABF432F6D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncOwner/Frame::CopyFrom(Photon.Pun.Simple.FrameBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_CopyFrom_m14D7BD1B6FB2B07FD06005EBB828A848F2D07941 (Frame_tE212F9082267C57F6BEB1594E886AB16751EA53B * __this, FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * ___sourceFrame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Frame_tE212F9082267C57F6BEB1594E886AB16751EA53B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Frame_tE212F9082267C57F6BEB1594E886AB16751EA53B * V_0 = NULL;
	{
		// base.CopyFrom(sourceFrame);
		FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * L_0 = ___sourceFrame0;
		FrameBase_CopyFrom_m50DE3B0C96AA48AE6C49EAE39F782DCB7098D216(__this, L_0, /*hidden argument*/NULL);
		// Frame src = sourceFrame as Frame;
		FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * L_1 = ___sourceFrame0;
		V_0 = ((Frame_tE212F9082267C57F6BEB1594E886AB16751EA53B *)IsInstClass((RuntimeObject*)L_1, Frame_tE212F9082267C57F6BEB1594E886AB16751EA53B_il2cpp_TypeInfo_var));
		// ownerActorId = src.ownerActorId;
		Frame_tE212F9082267C57F6BEB1594E886AB16751EA53B * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_ownerActorId_2();
		__this->set_ownerActorId_2(L_3);
		// ownerHasChanged = false;
		__this->set_ownerHasChanged_3((bool)0);
		// }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncOwner/Frame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_m58CDDC95B7FE2BDB387AA27EDFB2CB691AF9EF18 (Frame_tE212F9082267C57F6BEB1594E886AB16751EA53B * __this, const RuntimeMethod* method)
{
	{
		FrameBase__ctor_m03874791CDB2DC0140005769CDABA349A5396370(__this, /*hidden argument*/NULL);
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
// System.Void Photon.Pun.Simple.SyncShootBase/Frame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_mE72F1F649DFFF97C199465580E8060A96F78C9F7 (Frame_t75460503FF702B7DD15EEE3AEE30093A305D577F * __this, const RuntimeMethod* method)
{
	{
		// public Frame() : base() { }
		FrameBase__ctor_m03874791CDB2DC0140005769CDABA349A5396370(__this, /*hidden argument*/NULL);
		// public Frame() : base() { }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncShootBase/Frame::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_m836E5AB11DA0B4165FBE46C60ED4E3DCA44BA9CB (Frame_t75460503FF702B7DD15EEE3AEE30093A305D577F * __this, int32_t ___frameId0, const RuntimeMethod* method)
{
	{
		// public Frame(int frameId) : base(frameId) { }
		int32_t L_0 = ___frameId0;
		FrameBase__ctor_mD76BE87E69C74515EE1BEBC2B5E852EC38289573(__this, L_0, /*hidden argument*/NULL);
		// public Frame(int frameId) : base(frameId) { }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncShootBase/Frame::CopyFrom(Photon.Pun.Simple.FrameBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_CopyFrom_mFBAC804F93C2DED78188DD18858110267F47F87C (Frame_t75460503FF702B7DD15EEE3AEE30093A305D577F * __this, FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * ___sourceFrame0, const RuntimeMethod* method)
{
	{
		// triggerMask = 0;
		__this->set_triggerMask_2(0);
		// }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncShootBase/Frame::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_Clear_mB052D219E9384DA1EDA0C46D8CEAA6B675886A9F (Frame_t75460503FF702B7DD15EEE3AEE30093A305D577F * __this, const RuntimeMethod* method)
{
	{
		// base.Clear();
		FrameBase_Clear_m89D8155A85BBC229DFA55B99629FCA2ABF432F6D(__this, /*hidden argument*/NULL);
		// triggerMask = 0;
		__this->set_triggerMask_2(0);
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
// System.Void Photon.Pun.Simple.SyncSpawnTimer/Frame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_mB5BBF0E447E02BF7FBCB8B2409A97420108D4A58 (Frame_t2227D436A145B7086B67C15BCBB92D900344230B * __this, const RuntimeMethod* method)
{
	{
		// public Frame() : base() { }
		FrameBase__ctor_m03874791CDB2DC0140005769CDABA349A5396370(__this, /*hidden argument*/NULL);
		// public Frame() : base() { }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncSpawnTimer/Frame::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_mBA0D60A3786BF9202053066F5AD27DE137578DA3 (Frame_t2227D436A145B7086B67C15BCBB92D900344230B * __this, int32_t ___frameId0, const RuntimeMethod* method)
{
	{
		// public Frame(int frameId) : base(frameId) { }
		int32_t L_0 = ___frameId0;
		FrameBase__ctor_mD76BE87E69C74515EE1BEBC2B5E852EC38289573(__this, L_0, /*hidden argument*/NULL);
		// public Frame(int frameId) : base(frameId) { }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncSpawnTimer/Frame::CopyFrom(Photon.Pun.Simple.FrameBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_CopyFrom_m6AE9918186B008556F14E486EE69F2D109FA2635 (Frame_t2227D436A145B7086B67C15BCBB92D900344230B * __this, FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * ___sourceFrame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Frame_t2227D436A145B7086B67C15BCBB92D900344230B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Frame_t2227D436A145B7086B67C15BCBB92D900344230B * V_0 = NULL;
	{
		// base.CopyFrom(sourceFrame);
		FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * L_0 = ___sourceFrame0;
		FrameBase_CopyFrom_m50DE3B0C96AA48AE6C49EAE39F782DCB7098D216(__this, L_0, /*hidden argument*/NULL);
		// Frame src = sourceFrame as Frame;
		FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * L_1 = ___sourceFrame0;
		V_0 = ((Frame_t2227D436A145B7086B67C15BCBB92D900344230B *)IsInstClass((RuntimeObject*)L_1, Frame_t2227D436A145B7086B67C15BCBB92D900344230B_il2cpp_TypeInfo_var));
		// ticksUntilRespawn = src.ticksUntilRespawn;
		Frame_t2227D436A145B7086B67C15BCBB92D900344230B * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_ticksUntilRespawn_2();
		__this->set_ticksUntilRespawn_2(L_3);
		// ticksUntilDespawn = src.ticksUntilDespawn;
		Frame_t2227D436A145B7086B67C15BCBB92D900344230B * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_ticksUntilDespawn_3();
		__this->set_ticksUntilDespawn_3(L_5);
		// }
		return;
	}
}
// System.Boolean Photon.Pun.Simple.SyncSpawnTimer/Frame::Compare(Photon.Pun.Simple.SyncSpawnTimer/Frame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Frame_Compare_m06ACE9C7CD110B62ACE068668D46016F9BF13CDF (Frame_t2227D436A145B7086B67C15BCBB92D900344230B * __this, Frame_t2227D436A145B7086B67C15BCBB92D900344230B * ___otherFrame0, const RuntimeMethod* method)
{
	{
		// return
		//     ticksUntilRespawn == otherFrame.ticksUntilRespawn &&
		//     ticksUntilDespawn == otherFrame.ticksUntilDespawn;
		int32_t L_0 = __this->get_ticksUntilRespawn_2();
		Frame_t2227D436A145B7086B67C15BCBB92D900344230B * L_1 = ___otherFrame0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_ticksUntilRespawn_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = __this->get_ticksUntilDespawn_3();
		Frame_t2227D436A145B7086B67C15BCBB92D900344230B * L_4 = ___otherFrame0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_ticksUntilDespawn_3();
		return (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
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
// System.Void Photon.Pun.Simple.SyncState/Frame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_m55BFEA78D60EF7DB31BADAC64CD46762DAEAF762 (Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * __this, const RuntimeMethod* method)
{
	{
		// public Frame() : base() { }
		FrameBase__ctor_m03874791CDB2DC0140005769CDABA349A5396370(__this, /*hidden argument*/NULL);
		// public Frame() : base() { }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncState/Frame::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_mE479E94B2710F127942378F99A4563242AE8887D (Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * __this, int32_t ___frameId0, const RuntimeMethod* method)
{
	{
		// public Frame(int frameId) : base(frameId) { }
		int32_t L_0 = ___frameId0;
		FrameBase__ctor_mD76BE87E69C74515EE1BEBC2B5E852EC38289573(__this, L_0, /*hidden argument*/NULL);
		// public Frame(int frameId) : base(frameId) { }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncState/Frame::CopyFrom(Photon.Pun.Simple.FrameBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_CopyFrom_m771CF9FE3BD4AB2E853DC68BC5E15CBDCD462468 (Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * __this, FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * ___sourceFrame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * V_0 = NULL;
	{
		// base.CopyFrom(sourceFrame);
		FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * L_0 = ___sourceFrame0;
		FrameBase_CopyFrom_m50DE3B0C96AA48AE6C49EAE39F782DCB7098D216(__this, L_0, /*hidden argument*/NULL);
		// Frame src = sourceFrame as Frame;
		FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * L_1 = ___sourceFrame0;
		V_0 = ((Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 *)IsInstClass((RuntimeObject*)L_1, Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65_il2cpp_TypeInfo_var));
		// state = src.state;
		Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_state_2();
		__this->set_state_2(L_3);
		// mountToViewID = src.mountToViewID;
		Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * L_4 = V_0;
		NullCheck(L_4);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_5 = L_4->get_mountToViewID_3();
		__this->set_mountToViewID_3(L_5);
		// mountTypeId = src.mountTypeId;
		Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * L_6 = V_0;
		NullCheck(L_6);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_7 = L_6->get_mountTypeId_4();
		__this->set_mountTypeId_4(L_7);
		// }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncState/Frame::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_Clear_mBE1C355D8B86FCDE8C2E75B9DC29A5D607988A75 (Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * __this, const RuntimeMethod* method)
{
	{
		// base.Clear();
		FrameBase_Clear_m89D8155A85BBC229DFA55B99629FCA2ABF432F6D(__this, /*hidden argument*/NULL);
		// state = 0;
		__this->set_state_2(0);
		// mountToViewID = null;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * L_0 = __this->get_address_of_mountToViewID_3();
		il2cpp_codegen_initobj(L_0, sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
		// mountTypeId = null;
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * L_1 = __this->get_address_of_mountTypeId_4();
		il2cpp_codegen_initobj(L_1, sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
		// }
		return;
	}
}
// System.Boolean Photon.Pun.Simple.SyncState/Frame::Compare(Photon.Pun.Simple.SyncState/Frame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Frame_Compare_m83AE6D0AC6108B2314FB595E819905C5B9FE18DD (Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * __this, Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * ___otherFrame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (/*respawn != otherFrame.respawn ||*/
		//     state != otherFrame.state ||
		//     mountToViewID != otherFrame.mountToViewID ||
		//     mountTypeId != otherFrame.mountTypeId)
		int32_t L_0 = __this->get_state_2();
		Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * L_1 = ___otherFrame0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_state_2();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0070;
		}
	}
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_3 = __this->get_mountToViewID_3();
		V_0 = L_3;
		Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * L_4 = ___otherFrame0;
		NullCheck(L_4);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_5 = L_4->get_mountToViewID_3();
		V_1 = L_5;
		int32_t L_6;
		L_6 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		int32_t L_7;
		L_7 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_1), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		bool L_8;
		L_8 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		bool L_9;
		L_9 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (!((int32_t)((int32_t)((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0)&(int32_t)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0))))
		{
			goto IL_0070;
		}
	}
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_10 = __this->get_mountTypeId_4();
		V_1 = L_10;
		Frame_tEB3E8763D3086CC2F9877A5348B0342569F5DC65 * L_11 = ___otherFrame0;
		NullCheck(L_11);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_12 = L_11->get_mountTypeId_4();
		V_0 = L_12;
		int32_t L_13;
		L_13 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_1), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		int32_t L_14;
		L_14 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		bool L_15;
		L_15 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		bool L_16;
		L_16 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)L_13) == ((int32_t)L_14))? 1 : 0)&(int32_t)((((int32_t)L_15) == ((int32_t)L_16))? 1 : 0))))
		{
			goto IL_0072;
		}
	}

IL_0070:
	{
		// return false;
		return (bool)0;
	}

IL_0072:
	{
		// return true;
		return (bool)1;
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
// System.Void Photon.Pun.Simple.SyncTransform/Frame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_m3E0311B1ADDE909B6D3CDF2E56410E9A02AA31B3 (Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Frame() : base()
		FrameBase__ctor_m03874791CDB2DC0140005769CDABA349A5396370(__this, /*hidden argument*/NULL);
		// m = new Matrix();
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_0 = (Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D *)il2cpp_codegen_object_new(Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D_il2cpp_TypeInfo_var);
		Matrix__ctor_m092BA387C900662175C95A9325EDE9823EFEBBEA(L_0, /*hidden argument*/NULL);
		__this->set_m_3(L_0);
		// cm = new CompressedMatrix();
		CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * L_1 = (CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 *)il2cpp_codegen_object_new(CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891_il2cpp_TypeInfo_var);
		CompressedMatrix__ctor_m064CFFFCCB7DDC4FF411FBF5E36C66DF6381DB5E(L_1, /*hidden argument*/NULL);
		__this->set_cm_4(L_1);
		// telem = new Matrix();
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_2 = (Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D *)il2cpp_codegen_object_new(Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D_il2cpp_TypeInfo_var);
		Matrix__ctor_m092BA387C900662175C95A9325EDE9823EFEBBEA(L_2, /*hidden argument*/NULL);
		__this->set_telem_6(L_2);
		// telecm = new CompressedMatrix();
		CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * L_3 = (CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 *)il2cpp_codegen_object_new(CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891_il2cpp_TypeInfo_var);
		CompressedMatrix__ctor_m064CFFFCCB7DDC4FF411FBF5E36C66DF6381DB5E(L_3, /*hidden argument*/NULL);
		__this->set_telecm_7(L_3);
		// parentHash = -2;
		__this->set_parentHash_8(((int32_t)-2));
		// }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncTransform/Frame::.ctor(Photon.Pun.Simple.SyncTransform,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_mDD1846ABDD3BBEA7C6581F5DBED496B33B81F314 (Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * __this, SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859 * ___sst0, int32_t ___frameId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * G_B2_0 = NULL;
	Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * G_B3_1 = NULL;
	{
		// public Frame(SyncTransform sst, int frameId) : base(frameId)
		int32_t L_0 = ___frameId1;
		FrameBase__ctor_mD76BE87E69C74515EE1BEBC2B5E852EC38289573(__this, L_0, /*hidden argument*/NULL);
		// m = new Matrix();
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_1 = (Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D *)il2cpp_codegen_object_new(Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D_il2cpp_TypeInfo_var);
		Matrix__ctor_m092BA387C900662175C95A9325EDE9823EFEBBEA(L_1, /*hidden argument*/NULL);
		__this->set_m_3(L_1);
		// cm = new CompressedMatrix();
		CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * L_2 = (CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 *)il2cpp_codegen_object_new(CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891_il2cpp_TypeInfo_var);
		CompressedMatrix__ctor_m064CFFFCCB7DDC4FF411FBF5E36C66DF6381DB5E(L_2, /*hidden argument*/NULL);
		__this->set_cm_4(L_2);
		// telem = new Matrix();
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_3 = (Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D *)il2cpp_codegen_object_new(Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D_il2cpp_TypeInfo_var);
		Matrix__ctor_m092BA387C900662175C95A9325EDE9823EFEBBEA(L_3, /*hidden argument*/NULL);
		__this->set_telem_6(L_3);
		// telecm = new CompressedMatrix();
		CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * L_4 = (CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 *)il2cpp_codegen_object_new(CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891_il2cpp_TypeInfo_var);
		CompressedMatrix__ctor_m064CFFFCCB7DDC4FF411FBF5E36C66DF6381DB5E(L_4, /*hidden argument*/NULL);
		__this->set_telecm_7(L_4);
		// sst.transformCrusher.Capture(sst.transform, cm, m);
		SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859 * L_5 = ___sst0;
		NullCheck(L_5);
		TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8 * L_6 = L_5->get_transformCrusher_32();
		SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859 * L_7 = ___sst0;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * L_9 = __this->get_cm_4();
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_10 = __this->get_m_3();
		NullCheck(L_6);
		TransformCrusher_Capture_m1BF19E59E367AA33AD7EE4913D228BE90308C767(L_6, L_8, L_9, L_10, /*hidden argument*/NULL);
		// var par = sst.transform.parent;
		SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859 * L_11 = ___sst0;
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// parentHash = par ? par.GetInstanceID() : -1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_14, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (L_15)
		{
			G_B2_0 = __this;
			goto IL_0068;
		}
	}
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B1_0;
		goto IL_006e;
	}

IL_0068:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_16, /*hidden argument*/NULL);
		G_B3_0 = L_17;
		G_B3_1 = G_B2_0;
	}

IL_006e:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_parentHash_8(G_B3_0);
		// }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncTransform/Frame::.ctor(Photon.Pun.Simple.SyncTransform/Frame,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_mE8A7AE6A825D7AE6DFDAFA6C6E6555995842605A (Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * __this, Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * ___srcFrame0, int32_t ___frameId1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Frame(Frame srcFrame, int frameId) : base(frameId)
		int32_t L_0 = ___frameId1;
		FrameBase__ctor_mD76BE87E69C74515EE1BEBC2B5E852EC38289573(__this, L_0, /*hidden argument*/NULL);
		// m = new Matrix();
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_1 = (Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D *)il2cpp_codegen_object_new(Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D_il2cpp_TypeInfo_var);
		Matrix__ctor_m092BA387C900662175C95A9325EDE9823EFEBBEA(L_1, /*hidden argument*/NULL);
		__this->set_m_3(L_1);
		// cm = new CompressedMatrix();
		CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * L_2 = (CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 *)il2cpp_codegen_object_new(CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891_il2cpp_TypeInfo_var);
		CompressedMatrix__ctor_m064CFFFCCB7DDC4FF411FBF5E36C66DF6381DB5E(L_2, /*hidden argument*/NULL);
		__this->set_cm_4(L_2);
		// telem = new Matrix();
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_3 = (Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D *)il2cpp_codegen_object_new(Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D_il2cpp_TypeInfo_var);
		Matrix__ctor_m092BA387C900662175C95A9325EDE9823EFEBBEA(L_3, /*hidden argument*/NULL);
		__this->set_telem_6(L_3);
		// telecm = new CompressedMatrix();
		CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * L_4 = (CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 *)il2cpp_codegen_object_new(CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891_il2cpp_TypeInfo_var);
		CompressedMatrix__ctor_m064CFFFCCB7DDC4FF411FBF5E36C66DF6381DB5E(L_4, /*hidden argument*/NULL);
		__this->set_telecm_7(L_4);
		// CopyFrom(srcFrame);
		Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * L_5 = ___srcFrame0;
		VirtActionInvoker1< FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * >::Invoke(4 /* System.Void Photon.Pun.Simple.FrameBase::CopyFrom(Photon.Pun.Simple.FrameBase) */, __this, L_5);
		// }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncTransform/Frame::Set(Photon.Pun.Simple.SyncTransform,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_Set_mC95A4FD32E4715ED051538F1B86881AB7EB81004 (Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * __this, SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859 * ___sst0, int32_t ___frameId1, const RuntimeMethod* method)
{
	{
		// sst.transformCrusher.Capture(sst.transform, cm, m);
		SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859 * L_0 = ___sst0;
		NullCheck(L_0);
		TransformCrusher_t0BD006D3EA6AD9CA22150183DFF428D993F415F8 * L_1 = L_0->get_transformCrusher_32();
		SyncTransform_tF1017C651F8056A28EFD3F669234FFAB41538859 * L_2 = ___sst0;
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * L_4 = __this->get_cm_4();
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_5 = __this->get_m_3();
		NullCheck(L_1);
		TransformCrusher_Capture_m1BF19E59E367AA33AD7EE4913D228BE90308C767(L_1, L_3, L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncTransform/Frame::CopyFrom(Photon.Pun.Simple.FrameBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_CopyFrom_m9F6B8105EF9F4F75F4C46AF459E3382B06217946 (Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * __this, FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * ___sourceFrame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * V_0 = NULL;
	{
		// base.CopyFrom(sourceFrame);
		FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * L_0 = ___sourceFrame0;
		FrameBase_CopyFrom_m50DE3B0C96AA48AE6C49EAE39F782DCB7098D216(__this, L_0, /*hidden argument*/NULL);
		// Frame src = sourceFrame as Frame;
		FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * L_1 = ___sourceFrame0;
		V_0 = ((Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D *)IsInstClass((RuntimeObject*)L_1, Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D_il2cpp_TypeInfo_var));
		// if (src.hasTeleported)
		Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->get_hasTeleported_2();
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// m.CopyFrom(src.telem);
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_4 = __this->get_m_3();
		Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * L_5 = V_0;
		NullCheck(L_5);
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_6 = L_5->get_telem_6();
		MatrixExtensions_CopyFrom_mF4E0FFB8B5F99F427A93AD135EDB7F4159B023A1(L_4, L_6, /*hidden argument*/NULL);
		// cm.CopyFrom(src.telecm);
		CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * L_7 = __this->get_cm_4();
		Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * L_8 = V_0;
		NullCheck(L_8);
		CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * L_9 = L_8->get_telecm_7();
		NullCheck(L_7);
		CompressedMatrix_CopyFrom_m4629FB4AEE43E4B6AAB6B5ED222152D7C8EECB04(L_7, L_9, /*hidden argument*/NULL);
		// }
		goto IL_005c;
	}

IL_003a:
	{
		// m.CopyFrom(src.m);
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_10 = __this->get_m_3();
		Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * L_11 = V_0;
		NullCheck(L_11);
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_12 = L_11->get_m_3();
		MatrixExtensions_CopyFrom_mF4E0FFB8B5F99F427A93AD135EDB7F4159B023A1(L_10, L_12, /*hidden argument*/NULL);
		// cm.CopyFrom(src.cm);
		CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * L_13 = __this->get_cm_4();
		Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * L_14 = V_0;
		NullCheck(L_14);
		CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * L_15 = L_14->get_cm_4();
		NullCheck(L_13);
		CompressedMatrix_CopyFrom_m4629FB4AEE43E4B6AAB6B5ED222152D7C8EECB04(L_13, L_15, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// hasTeleported = false; 
		__this->set_hasTeleported_2((bool)0);
		// parentHash = src.parentHash;
		Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_parentHash_8();
		__this->set_parentHash_8(L_17);
		// }
		return;
	}
}
// System.Boolean Photon.Pun.Simple.SyncTransform/Frame::FastCompareCompressed(Photon.Pun.Simple.SyncTransform/Frame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Frame_FastCompareCompressed_m1EAF4817527F25007C4410CB40C9A453EF91EDCE (Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * __this, Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * ___other0, const RuntimeMethod* method)
{
	{
		// bool match = cm.Equals(other.cm);
		CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * L_0 = __this->get_cm_4();
		Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * L_1 = ___other0;
		NullCheck(L_1);
		CompressedMatrix_t9A782B1857C2C26EEEC0A5A314586EEEF4CFD891 * L_2 = L_1->get_cm_4();
		NullCheck(L_0);
		bool L_3;
		L_3 = CompressedMatrix_Equals_mF1F1CC7679C6FFE682D9F6F077E82EAD927F36EA(L_0, L_2, /*hidden argument*/NULL);
		// if (match)
		if (!L_3)
		{
			goto IL_0015;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0015:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean Photon.Pun.Simple.SyncTransform/Frame::FastCompareUncompressed(Photon.Pun.Simple.SyncTransform/Frame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Frame_FastCompareUncompressed_m373B17D45C692209ED4A7EAD4E8E5ED64C684754 (Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * __this, Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * ___other0, const RuntimeMethod* method)
{
	{
		// return
		//     m.position == other.m.position &&
		//     m.rotation == other.m.rotation &&
		//     m.scale == other.m.scale;
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_0 = __this->get_m_3();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = L_0->get_position_1();
		Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * L_2 = ___other0;
		NullCheck(L_2);
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_3 = L_2->get_m_3();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3->get_position_1();
		bool L_5;
		L_5 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_1, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0056;
		}
	}
	{
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_6 = __this->get_m_3();
		NullCheck(L_6);
		Element_t3B6173E3F02244D529DFB937B971A87F1CEEECB5  L_7 = L_6->get_rotation_2();
		Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * L_8 = ___other0;
		NullCheck(L_8);
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_9 = L_8->get_m_3();
		NullCheck(L_9);
		Element_t3B6173E3F02244D529DFB937B971A87F1CEEECB5  L_10 = L_9->get_rotation_2();
		bool L_11;
		L_11 = Element_op_Equality_m777DE4C6EDA1898EB75BBFCBECA8302C665D7EA6(L_7, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_12 = __this->get_m_3();
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = L_12->get_scale_3();
		Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * L_14 = ___other0;
		NullCheck(L_14);
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_15 = L_14->get_m_3();
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = L_15->get_scale_3();
		bool L_17;
		L_17 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_13, L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_0056:
	{
		return (bool)0;
	}
}
// System.Void Photon.Pun.Simple.SyncTransform/Frame::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_Clear_m947CB9448AE3731509EADF55661CED3CD4B8F0E5 (Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * __this, const RuntimeMethod* method)
{
	{
		// base.Clear();
		FrameBase_Clear_m89D8155A85BBC229DFA55B99629FCA2ABF432F6D(__this, /*hidden argument*/NULL);
		// hasTeleported = false;
		__this->set_hasTeleported_2((bool)0);
		// parentHash = -2;
		__this->set_parentHash_8(((int32_t)-2));
		// }
		return;
	}
}
// System.String Photon.Pun.Simple.SyncTransform/Frame::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Frame_ToString_mD66B798CED2E3253F56BC9536854958F2E841838 (Frame_t574BE3B368164ED9BE788DF8BBAA71188D78C01D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Element_t3B6173E3F02244D529DFB937B971A87F1CEEECB5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return "[" + frameId + " " + m.position + " / " + m.rotation + "]";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		int32_t* L_3 = ((FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 *)__this)->get_address_of_frameId_0();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = L_5;
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_7 = __this->get_m_3();
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = L_7->get_position_1();
		V_0 = L_8;
		String_t* L_9;
		L_9 = Vector3_ToString_mD5085501F9A0483542E9F7B18CD09C0AB977E318((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral8F8BFCFC439A636B20C06C334A493AB7004843ED);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		Matrix_t40E9D475914915ED2EE27DFB396F8EB38FAE2B9D * L_12 = __this->get_m_3();
		NullCheck(L_12);
		Element_t3B6173E3F02244D529DFB937B971A87F1CEEECB5  L_13 = L_12->get_rotation_2();
		V_1 = L_13;
		String_t* L_14;
		L_14 = Element_ToString_mAA6A8DD9B0B97DA027CCBE4D9A11A85AA9E9CAFB((Element_t3B6173E3F02244D529DFB937B971A87F1CEEECB5 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_14);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_11;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		String_t* L_16;
		L_16 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_15, /*hidden argument*/NULL);
		return L_16;
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
// System.Void Photon.Pun.Simple.SyncVitals/Frame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_m2B345443EDD1234092D0BB2486B313A486BCA220 (Frame_tC3C68D0F728BCD68EBB0F45D3D15E320AB952D09 * __this, const RuntimeMethod* method)
{
	{
		// public Frame() : base() { }
		FrameBase__ctor_m03874791CDB2DC0140005769CDABA349A5396370(__this, /*hidden argument*/NULL);
		// public Frame() : base() { }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncVitals/Frame::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_m86F444C6EA7350F3455596003660187BD72C5953 (Frame_tC3C68D0F728BCD68EBB0F45D3D15E320AB952D09 * __this, int32_t ___frameId0, const RuntimeMethod* method)
{
	{
		// public Frame(int frameId) : base(frameId) { }
		int32_t L_0 = ___frameId0;
		FrameBase__ctor_mD76BE87E69C74515EE1BEBC2B5E852EC38289573(__this, L_0, /*hidden argument*/NULL);
		// public Frame(int frameId) : base(frameId) { }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncVitals/Frame::.ctor(System.Int32,Photon.Pun.Simple.Vitals)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame__ctor_m612BC42F891EF5B33D5391F0A09427F27CA73A94 (Frame_tC3C68D0F728BCD68EBB0F45D3D15E320AB952D09 * __this, int32_t ___frameId0, Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051 * ___vitals1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Frame(int frameId, Vitals vitals) : base(frameId)
		int32_t L_0 = ___frameId0;
		FrameBase__ctor_mD76BE87E69C74515EE1BEBC2B5E852EC38289573(__this, L_0, /*hidden argument*/NULL);
		// vitalsData = new VitalsData(vitals);
		Vitals_t7D13864EB771CB8AB7F3E4FB4BF66C588BAAC051 * L_1 = ___vitals1;
		VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0 * L_2 = (VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0 *)il2cpp_codegen_object_new(VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0_il2cpp_TypeInfo_var);
		VitalsData__ctor_m5C6C59B591B347B277D1239B12E9DB1A7048C9F9(L_2, L_1, /*hidden argument*/NULL);
		__this->set_vitalsData_2(L_2);
		// }
		return;
	}
}
// System.Void Photon.Pun.Simple.SyncVitals/Frame::CopyFrom(Photon.Pun.Simple.FrameBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Frame_CopyFrom_mFE4B61D41E4B12CF776169A85CE79F74BD61E12E (Frame_tC3C68D0F728BCD68EBB0F45D3D15E320AB952D09 * __this, FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * ___sourceFrame0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Frame_tC3C68D0F728BCD68EBB0F45D3D15E320AB952D09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0 * V_0 = NULL;
	{
		// base.CopyFrom(sourceFrame);
		FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * L_0 = ___sourceFrame0;
		FrameBase_CopyFrom_m50DE3B0C96AA48AE6C49EAE39F782DCB7098D216(__this, L_0, /*hidden argument*/NULL);
		// var srcVitalsData = (sourceFrame as Frame).vitalsData;
		FrameBase_t63AEA3168A919138D1E05B40FA93F3CAF6A4D2C6 * L_1 = ___sourceFrame0;
		NullCheck(((Frame_tC3C68D0F728BCD68EBB0F45D3D15E320AB952D09 *)IsInstClass((RuntimeObject*)L_1, Frame_tC3C68D0F728BCD68EBB0F45D3D15E320AB952D09_il2cpp_TypeInfo_var)));
		VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0 * L_2 = ((Frame_tC3C68D0F728BCD68EBB0F45D3D15E320AB952D09 *)IsInstClass((RuntimeObject*)L_1, Frame_tC3C68D0F728BCD68EBB0F45D3D15E320AB952D09_il2cpp_TypeInfo_var))->get_vitalsData_2();
		V_0 = L_2;
		// vitalsData.CopyFrom(srcVitalsData);
		VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0 * L_3 = __this->get_vitalsData_2();
		VitalsData_tC95F84AEC0CE659EA2C924B353E5D7D3950167D0 * L_4 = V_0;
		NullCheck(L_3);
		VitalsData_CopyFrom_mEDE369637869CF7307A9549CCAF0487D6F5B5D67(L_3, L_4, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * ElementCrusher_get_XCrusher_m9CBE9161585467AF380BB937D37D07A78EB1BF48_inline (ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * __this, const RuntimeMethod* method)
{
	{
		// get { return _xcrusher; }
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_0 = __this->get__xcrusher_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * ElementCrusher_get_YCrusher_m2B5EDE4118B3A8766DEADF2A300D61BFE581060E_inline (ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * __this, const RuntimeMethod* method)
{
	{
		// get { return _ycrusher; }
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_0 = __this->get__ycrusher_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * ElementCrusher_get_ZCrusher_m408681EAD7F5999B7BAA2C71BE46B914F5EC7A9E_inline (ElementCrusher_tBB3F015C9AD2ABC0DE4200929FC68976CA4616A8 * __this, const RuntimeMethod* method)
{
	{
		// get { return _zcrusher; }
		FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * L_0 = __this->get__zcrusher_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FloatCrusher_get_BitsDeterminedBy_m4CF5BE0134B950873A3190C1DC6077AC02B5752C_inline (FloatCrusher_t9E48714376FACD960EF5C7434E1A6C051F47E195 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__bitsDeterminedBy_26();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
