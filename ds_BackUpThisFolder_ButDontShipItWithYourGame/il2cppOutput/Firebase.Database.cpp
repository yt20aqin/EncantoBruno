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
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { &p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, &p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5* p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
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
struct InvokerFuncInvoker2;
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

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>>
struct Action_1_t7945C3632B9391B8B1E5D718DAA49CC37EE9A746;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>
struct Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>
struct Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>
struct EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IDictionary`2<System.Int32,System.String>
struct IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.Database.Internal.InternalListener>
struct KeyCollection_t6A4A7E84EA0F87A544ABA1FFCB9E0C75C26DD0EE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.String>
struct KeyCollection_t78693409E5147276425329CB69C1414D43C8CCE5;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>
struct KeyCollection_tE21AF622E442F52A79600F87F40EAB2CC726B8FA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Firebase.Database.FirebaseDatabase>
struct KeyCollection_tCE86288D46D2A8B1CA9062CC4D48804EFA516E5F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>
struct TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>
struct TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50;
// System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>
struct Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.Database.Internal.InternalListener>
struct ValueCollection_t2583015C9521963C96356827CE38EEC52B636079;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>
struct ValueCollection_tE9183007A5785689F86BDBB22CB72D19AB5E1192;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>
struct ValueCollection_tBB72FBD33110964869AC6A326F2073A6059CAD0A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Firebase.Database.FirebaseDatabase>
struct ValueCollection_t910CEC07E1C2B78A8208B6E42A63BCDC84915F2B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.Database.Internal.InternalListener>[]
struct EntryU5BU5D_tA27C7EDFC78680914AA578013DF67DF3509E8499;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.String>[]
struct EntryU5BU5D_t8551361338B9BF5705CA61FFE9EA2EDEA1B1EF34;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>[]
struct EntryU5BU5D_tE62CD20E1A7DE6E5CC21C4BF24CE0F004C560B8F;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Firebase.Database.FirebaseDatabase>[]
struct EntryU5BU5D_t0F0413FC28465F7BB7A1D58C7030A899E8870149;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Firebase.Database.ChildChangedEventArgs
struct ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Firebase.Database.DataSnapshot
struct DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A;
// Firebase.Database.DatabaseError
struct DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9;
// Firebase.Database.DatabaseException
struct DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232;
// Firebase.Database.DatabaseReference
struct DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25;
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960;
// Firebase.FirebaseException
struct FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED;
// Firebase.FutureBase
struct FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36;
// Firebase.Database.Internal.Future_InternalDataSnapshot
struct Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// Firebase.Database.Internal.InternalChildListener
struct InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569;
// Firebase.Database.Internal.InternalDataSnapshot
struct InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A;
// Firebase.Database.Internal.InternalDatabaseReference
struct InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904;
// Firebase.Database.Internal.InternalFirebaseDatabase
struct InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B;
// Firebase.Database.Internal.InternalListener
struct InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA;
// Firebase.Database.Internal.InternalQuery
struct InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196;
// Firebase.Database.Internal.InternalValueListener
struct InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// Firebase.Database.Query
struct Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// Firebase.Database.ValueChangedEventArgs
struct ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB;
// Firebase.Variant
struct Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Firebase.Database.DataSnapshot/DataSnapshotList
struct DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tA0DF34D3B373B908F56B3655662A20E7E27B4ACA;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73;
// Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0
struct U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C;
// Firebase.Database.Internal.Future_InternalDataSnapshot/Action
struct Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA;
// Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570;
// Firebase.Database.Internal.InternalChildListener/<OnCancelledHandler>c__AnonStorey2
struct U3COnCancelledHandlerU3Ec__AnonStorey2_t22B73155E1CADB05957372E67D53B2FA47D6D8B8;
// Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0
struct U3COnChildChangeHandlerU3Ec__AnonStorey0_t56115D1441B48B83BADDBF6301F46D60D2C50FED;
// Firebase.Database.Internal.InternalChildListener/<OnChildRemovedHandler>c__AnonStorey1
struct U3COnChildRemovedHandlerU3Ec__AnonStorey1_t90E3BAAD380F693E3ADFD8AA7D3B99C09FAB4BBF;
// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate
struct OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0;
// Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate
struct OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F;
// Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate
struct OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B;
// Firebase.Database.Internal.InternalValueListener/<OnCancelledHandler>c__AnonStorey1
struct U3COnCancelledHandlerU3Ec__AnonStorey1_tE28067CBE98834AAC86C0D52218C9EAFCF5A8F2F;
// Firebase.Database.Internal.InternalValueListener/<OnValueChangedHandler>c__AnonStorey0
struct U3COnValueChangedHandlerU3Ec__AnonStorey0_tB01B8F4519BD0A0485D263C7DB927C7CE442CBDE;
// Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate
struct OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5;
// Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate
struct OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D;
// Firebase.Database.Query/<WrapInternalDataSnapshotTask>c__AnonStorey0
struct U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tEDF9987AAA56631AF297265DE1FE149FCE8E04D2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t7945C3632B9391B8B1E5D718DAA49CC37EE9A746_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_tA0DF34D3B373B908F56B3655662A20E7E27B4ACA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnCancelledHandlerU3Ec__AnonStorey1_tE28067CBE98834AAC86C0D52218C9EAFCF5A8F2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnCancelledHandlerU3Ec__AnonStorey2_t22B73155E1CADB05957372E67D53B2FA47D6D8B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnChildChangeHandlerU3Ec__AnonStorey0_t56115D1441B48B83BADDBF6301F46D60D2C50FED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnChildRemovedHandlerU3Ec__AnonStorey1_t90E3BAAD380F693E3ADFD8AA7D3B99C09FAB4BBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnValueChangedHandlerU3Ec__AnonStorey0_tB01B8F4519BD0A0485D263C7DB927C7CE442CBDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tEDF9987AAA56631AF297265DE1FE149FCE8E04D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07F1E3DA016554FBC48202BBEF3B67E41B513EBA;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteral0F6206E2208D9F6410179E3B8BEA2DB7DD451983;
IL2CPP_EXTERN_C String_t* _stringLiteral161BB2E376DAB7BB196FA3BA56AF5F032401EDD2;
IL2CPP_EXTERN_C String_t* _stringLiteral19F36D351EC83FFF1DD0BF540F6C887240DF749A;
IL2CPP_EXTERN_C String_t* _stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1;
IL2CPP_EXTERN_C String_t* _stringLiteral25A6C8E3033AB7B31F1A36176973EBF46D6AA102;
IL2CPP_EXTERN_C String_t* _stringLiteral25E3F07BC8A8E84E64CBFD59A39E44732195DF1B;
IL2CPP_EXTERN_C String_t* _stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F;
IL2CPP_EXTERN_C String_t* _stringLiteral3510EE6CB670F44AE899467FD7C9F95DEEAD6A2C;
IL2CPP_EXTERN_C String_t* _stringLiteral39CDEA6B946A8A860CA9A58EB2AEF44708FC2201;
IL2CPP_EXTERN_C String_t* _stringLiteral3A25CDFF086AD2E7778FDE479EEAF3DE21276E5C;
IL2CPP_EXTERN_C String_t* _stringLiteral3C76C42E2293FDE8901D3D0BD00FBAEFFA8F224A;
IL2CPP_EXTERN_C String_t* _stringLiteral44786FF8D3D7A6BB34E47B8522E7CD903A39C81C;
IL2CPP_EXTERN_C String_t* _stringLiteral4D6EFB72BB23F4AB919B7E784E88CE1219260B7D;
IL2CPP_EXTERN_C String_t* _stringLiteral4FBD1DB26924C1F6A36CB8F2F4850DE51995B3F9;
IL2CPP_EXTERN_C String_t* _stringLiteral50384A583A192C06635CCD8BE23070E725470116;
IL2CPP_EXTERN_C String_t* _stringLiteral574D4F4FA47FACD0AB8D24AF1E018B029160B79D;
IL2CPP_EXTERN_C String_t* _stringLiteral5B52714C530B7F06A491E0453548C103378B3C0C;
IL2CPP_EXTERN_C String_t* _stringLiteral62C3AC56F06281AA1091C7F369E54BD4F40ABCAD;
IL2CPP_EXTERN_C String_t* _stringLiteral64D2CA5C491D2FD76E0C36ED2AFE1E4EF5CB4AC3;
IL2CPP_EXTERN_C String_t* _stringLiteral7E1C42D303CEBFBB8A6EE62A43AC623CFA8EF06A;
IL2CPP_EXTERN_C String_t* _stringLiteral8225BFBF19631D0C7DACACD3525BFCCACD852480;
IL2CPP_EXTERN_C String_t* _stringLiteral96BAF0A0FD737C639C25139F7FF80E71EF03CC92;
IL2CPP_EXTERN_C String_t* _stringLiteral96BD8930E546DA8CF5E3CC8102CFF21E735B8CE5;
IL2CPP_EXTERN_C String_t* _stringLiteralA430994825FFBD84C878DC4A3DE93644DAB6DC50;
IL2CPP_EXTERN_C String_t* _stringLiteralAFBF46A4D1C5554966D208EBCB0AC7CF2297C3F4;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB5E66B27E692259462C04D33AEF1271A6B5FC8D3;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18;
IL2CPP_EXTERN_C String_t* _stringLiteralC24BCEEB1EA72D694B1BED364734C5C838BE1FC9;
IL2CPP_EXTERN_C String_t* _stringLiteralC7AFB5B2F4FF415E9A57A58EEFBA6C5E92E3529C;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9DEC4BB422E4FB7D60AF8B79864395C4E9AF83;
IL2CPP_EXTERN_C String_t* _stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D;
IL2CPP_EXTERN_C String_t* _stringLiteralDBF0B4029A0C9D8FAAC8C952057ED4B638E435A5;
IL2CPP_EXTERN_C String_t* _stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralF2EE2E00A733D8F7B0857F92D87975D56CEE7145;
IL2CPP_EXTERN_C String_t* _stringLiteralFD3238FA21BFDF2546D17BB7E9E29EB72294946C;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m779C5AC4A5E010490E239608A033E7BD9F58CBEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mAF2F6B72BB0F5B95CDDC755D57D0096DCD18EBA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mB4B7A8724399169A1579ABA27E169A81A4A29ECF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m53367B0B4553F9BAB8EC05A26C50D7088F40FA17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mB96FCF84681FFE97BA7EA45565D94FE64DB2A851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mEEC01F0B32FCA1F893644B7E6077E6C865110B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m221507942D7865AEEF5101ADD152C33188A27994_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD91357EC8988FB0B254FDF284C6AF51DF2F221A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE89209F3032BC734CF79096A19D66A8E18CED709_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m09C3BDF6FA0D1167CE63A80BEB1C1525189B5671_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m26B1CABA0C5F59C2AAD05FF2FD763761EFC16617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDatabase_GetInstance_m3130111FF320EA60C689B327E215DE013D73D872_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDatabase_GetInstance_m3A82477F818D8A66905C07C29DB036B63825DC8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDatabase_OnAppDisposed_mD10E03FDEC79697DD1B2A8AF1EB31FEE46478877_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_GetResult_m660A2334845A8C0B42377DC9ED88FFFA911C7523_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_SWIG_CompletionDispatcher_mC51964F35F1CC1E89E2F2F27868A2A800847DC7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_SWIG_FreeCompletionData_mF96504CC68D810F2185F2C3961CE4D0639B228A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_SWIG_OnCompletion_m8069B6840E23CDE50DDE78E3844B1D1AEEAEF5C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_ThrowIfDisposed_mC3DB98C44BBD94737696260E987D0DB82A03E622_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalChildListener_OnCancelledHandler_m32541A7C5B3ECC99D550EC9FB84927734B3CBE0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalChildListener_OnChildChangeHandler_m09D6C53122D375483BC535E3737AAA5A91CF08CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalChildListener_OnChildRemovedHandler_mBE604A2D8DFD72E85AA563F1F68612A0CC067425_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_Child_mBF5A8FD2325A4C76C65213DFF3DF01A8A3DF5D1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_key_string_m1A510FDFBD689DCEFD22A223AEB1F66449566EBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_value_m394E5BB7C642E4687D677B249DFAA622338E0268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDatabaseReference_is_valid_m390C6DEE8DCFC3487F4A21B55AD3535F408AFB5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDatabaseReference_url_m74610E82DC38D4A79AAC85BD23C518AAE24D7A19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_GetInstanceInternal_mB1861CC018AC59029C70B833973F1218B8A3C767_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_GetReference_m86E6F0EF9294C4DB543B3248639B3EF2AF2E2D49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_ReleaseReferenceInternal_m8DC83753EB17E0D0A96EC83A15240D56E44B6073_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_DestroyChildListener_mB50FE32DFB49B8587269F89F2F02C1D91E7A6E64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_DestroyValueListener_m19812AA2089B447EE6E7A05F3B9D855A06F03FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_GetValueAsync_mDE0591F9BD98AC036E5967B4996F9C32175E613A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_RegisterChildListenerCallbacks_mFF7DE933A199D77FBC23376F3FB6D795E454D3E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_RegisterValueListenerCallbacks_m4136C759B9EA145E1B75D2A6F700CBCCB6D0845C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_is_valid_m9CD001108365F30A7897ABF7751996CFD78326C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalValueListener_OnCancelledHandler_m127FC5F9C160C6E8B376C1F85904A1B0C2371193_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalValueListener_OnValueChangedHandler_m2A2BF51A5F938DDB9E2520CF96860D3C68EA807E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Query_CheckTaskStatus_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m9FAB5282CCDABFFC440825304594AF870D584B5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Query__ctor_m57A7C7992A3CEF8448777374B308FFC72E83516A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m6AA3E2F2D7A0DB5FED79929971F933DA5505DCA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m59BE67CE8F1577CC55385DCC9E08727B63251377_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_mCC1EA36499599E23BFB91C8EED857D5A52D7BF29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mD1053DCCFB4F7B20968576939CB7613412AE14D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m1B0114F1FF108DD8F9F24FAA2DEA558A2A476CE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_mE0037D6F848F8109198782D1CB0EC665B93CADBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m92618FD7111834C883EA889E2AC85EB3D30BF5E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA4DF0AADCFB529BEBF28F39CB07F6B636F58943C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m051BEC1EC3A1F4155DFC3BAAC2CA8B50D6331450_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_mF487D4B9D07D3748558AC293890994D812342832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m3974F8FD7BD47ED2F2B0BA6D58112BCCC32C0589_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m7B23D85245D96EE43899EE092056F728040E3771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_mD0596E40CBDA959588CECC835BF96CC86932665F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m6C6A454591578F01371ABD3DA84BE953F76244FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_mE04BC84D80E03615D1848E3BECB81FFC1DEFA8B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_m80327E39EB58F7F5540B06182DCB9004E4E14BB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetCanceled_mDF601C30BA8FCDF4FC440B757A9F749DF3318EC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_m4C441325C72389157FFB503F944E74DF223AC318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m7371C0347394928D615951ACD5DA9E5E4169DA54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mEC233493779A41449F7F7F244785E2C92DEDDE43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m5203880431733105C123A932250AE74F8F910A93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mAD94C8B5854A3756EDD03BB447A1F1722ACED6F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m50532B9F3E3B251176843C6B9E5600D13B1B5998_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mE745D73D542C2CB354295487B689280699847D66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m20343E9541DCD586432A5CDFC6210E5A35036FA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m903965C40A3B093D3F1FC6851F0F05BCFBA1519A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m792975E491E7E8FF9AFEF0C2D6287B9EA8711232_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnCancelledHandlerU3Ec__AnonStorey1_U3CU3Em__0_mDEE497EF4A69B3541A8DB58EA233C28E2880CFBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnCancelledHandlerU3Ec__AnonStorey2_U3CU3Em__0_mFCB3FEC103596492B677FF67D07FCD4B732EBBD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnChildChangeHandlerU3Ec__AnonStorey0_U3CU3Em__0_mF4F54922AD8AD261FFD2D05C4596A546E384C555_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnChildRemovedHandlerU3Ec__AnonStorey1_U3CU3Em__0_m4D874F94AE4DEBFC6CD0BDE2CAB4A76F0FC04FEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnValueChangedHandlerU3Ec__AnonStorey0_U3CU3Em__0_m9F49E5335F25F63135F33CBBA70DD208D23EB59B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_U3CU3Em__0_m2A0B7F12CCACF24A864194424E4878D6D3DD38D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t835FC236834DF52C940280F2BBD3A8364601904E 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>
struct Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tA27C7EDFC78680914AA578013DF67DF3509E8499* ____entries_1;
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
	KeyCollection_t6A4A7E84EA0F87A544ABA1FFCB9E0C75C26DD0EE* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t2583015C9521963C96356827CE38EEC52B636079* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8551361338B9BF5705CA61FFE9EA2EDEA1B1EF34* ____entries_1;
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
	KeyCollection_t78693409E5147276425329CB69C1414D43C8CCE5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE9183007A5785689F86BDBB22CB72D19AB5E1192* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>
struct Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE62CD20E1A7DE6E5CC21C4BF24CE0F004C560B8F* ____entries_1;
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
	KeyCollection_tE21AF622E442F52A79600F87F40EAB2CC726B8FA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tBB72FBD33110964869AC6A326F2073A6059CAD0A* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0F0413FC28465F7BB7A1D58C7030A899E8870149* ____entries_1;
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
	KeyCollection_tCE86288D46D2A8B1CA9062CC4D48804EFA516E5F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t910CEC07E1C2B78A8208B6E42A63BCDC84915F2B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6* ____entries_1;
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
	KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>
struct TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>
struct TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};
struct Il2CppArrayBounds;

// Firebase.Database.DataSnapshot
struct DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A  : public RuntimeObject
{
	// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.DataSnapshot::internalSnapshot
	InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* ___internalSnapshot_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DataSnapshot::database
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database_1;
	// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::parentSnapshot
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___parentSnapshot_2;
	// Firebase.Database.DataSnapshot/DataSnapshotList Firebase.Database.DataSnapshot::parentList
	DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7* ___parentList_3;
};

// Firebase.Database.DatabaseError
struct DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9  : public RuntimeObject
{
	// System.Int32 Firebase.Database.DatabaseError::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_2;
	// System.String Firebase.Database.DatabaseError::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_3;
	// System.String Firebase.Database.DatabaseError::<Details>k__BackingField
	String_t* ___U3CDetailsU3Ek__BackingField_4;
};

struct DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields
{
	// System.Collections.Generic.IDictionary`2<System.Int32,System.String> Firebase.Database.DatabaseError::ErrorReasons
	RuntimeObject* ___ErrorReasons_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.Int32> Firebase.Database.DatabaseError::ErrorCodes
	RuntimeObject* ___ErrorCodes_1;
};

// Firebase.Database.Internal.DatabaseInternalPINVOKE
struct DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50  : public RuntimeObject
{
};

struct DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_StaticFields
{
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper Firebase.Database.Internal.DatabaseInternalPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C* ___swigExceptionHelper_0;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper Firebase.Database.Internal.DatabaseInternalPINVOKE::swigStringHelper
	SWIGStringHelper_tA0DF34D3B373B908F56B3655662A20E7E27B4ACA* ___swigStringHelper_1;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960  : public RuntimeObject
{
	// Firebase.Database.Internal.InternalFirebaseDatabase Firebase.Database.FirebaseDatabase::internalDatabase
	InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* ___internalDatabase_0;
	// System.String Firebase.Database.FirebaseDatabase::name
	String_t* ___name_1;
	// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::<App>k__BackingField
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___U3CAppU3Ek__BackingField_2;
};

struct FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase> Firebase.Database.FirebaseDatabase::databases
	Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* ___databases_3;
};

// Firebase.Database.Internal.InternalListener
struct InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA  : public RuntimeObject
{
	// System.Int32 Firebase.Database.Internal.InternalListener::uid
	int32_t ___uid_2;
};

struct InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields
{
	// System.Int32 Firebase.Database.Internal.InternalListener::uidGenerator
	int32_t ___uidGenerator_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener> Firebase.Database.Internal.InternalListener::databaseCallbacks
	Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* ___databaseCallbacks_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Firebase.Database.Query
struct Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED  : public RuntimeObject
{
	// Firebase.Database.Internal.InternalQuery Firebase.Database.Query::internalQuery
	InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* ___internalQuery_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Query::database
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database_1;
	// Firebase.Database.Internal.InternalValueListener Firebase.Database.Query::valueListener
	InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* ___valueListener_2;
	// Firebase.Database.Internal.InternalChildListener Firebase.Database.Query::childListener
	InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* ___childListener_3;
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

// Firebase.Database.DataSnapshot/DataSnapshotList
struct DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7  : public RuntimeObject
{
};

// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C  : public RuntimeObject
{
};

struct SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields
{
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___applicationDelegate_0;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___arithmeticDelegate_1;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___divideByZeroDelegate_2;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___indexOutOfRangeDelegate_3;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___invalidCastDelegate_4;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___invalidOperationDelegate_5;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___ioDelegate_6;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___nullReferenceDelegate_7;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___outOfMemoryDelegate_8;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___overflowDelegate_9;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___systemDelegate_10;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* ___argumentDelegate_11;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* ___argumentNullDelegate_12;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* ___argumentOutOfRangeDelegate_13;
};

// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException
struct SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6  : public RuntimeObject
{
};

struct SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_StaticFields
{
	// System.Int32 Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;
};

struct SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_ThreadStaticFields
{
	// System.Exception Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::pendingException
	Exception_t* ___pendingException_0;
};

// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_tA0DF34D3B373B908F56B3655662A20E7E27B4ACA  : public RuntimeObject
{
};

struct SWIGStringHelper_tA0DF34D3B373B908F56B3655662A20E7E27B4ACA_StaticFields
{
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06* ___stringDelegate_0;
};

// Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0
struct U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C  : public RuntimeObject
{
	// Firebase.Database.Internal.Future_InternalDataSnapshot Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0::fu
	Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot> Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0::tcs
	TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478* ___tcs_1;
};

// Firebase.Database.Internal.InternalChildListener/<OnCancelledHandler>c__AnonStorey2
struct U3COnCancelledHandlerU3Ec__AnonStorey2_t22B73155E1CADB05957372E67D53B2FA47D6D8B8  : public RuntimeObject
{
	// System.Int32 Firebase.Database.Internal.InternalChildListener/<OnCancelledHandler>c__AnonStorey2::callbackId
	int32_t ___callbackId_0;
	// Firebase.Database.Internal.Error Firebase.Database.Internal.InternalChildListener/<OnCancelledHandler>c__AnonStorey2::error
	int32_t ___error_1;
	// System.String Firebase.Database.Internal.InternalChildListener/<OnCancelledHandler>c__AnonStorey2::msg
	String_t* ___msg_2;
};

// Firebase.Database.Internal.InternalValueListener/<OnCancelledHandler>c__AnonStorey1
struct U3COnCancelledHandlerU3Ec__AnonStorey1_tE28067CBE98834AAC86C0D52218C9EAFCF5A8F2F  : public RuntimeObject
{
	// System.Int32 Firebase.Database.Internal.InternalValueListener/<OnCancelledHandler>c__AnonStorey1::callbackId
	int32_t ___callbackId_0;
	// Firebase.Database.Internal.Error Firebase.Database.Internal.InternalValueListener/<OnCancelledHandler>c__AnonStorey1::error
	int32_t ___error_1;
	// System.String Firebase.Database.Internal.InternalValueListener/<OnCancelledHandler>c__AnonStorey1::msg
	String_t* ___msg_2;
};

// Firebase.Database.Query/<WrapInternalDataSnapshotTask>c__AnonStorey0
struct U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tEDF9987AAA56631AF297265DE1FE149FCE8E04D2  : public RuntimeObject
{
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot> Firebase.Database.Query/<WrapInternalDataSnapshotTask>c__AnonStorey0::tcs
	TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B* ___tcs_0;
	// Firebase.Database.Query Firebase.Database.Query/<WrapInternalDataSnapshotTask>c__AnonStorey0::$this
	Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* ___U24this_1;
};

// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>
struct Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
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

// Firebase.Database.ChildChangedEventArgs
struct ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// Firebase.Database.DataSnapshot Firebase.Database.ChildChangedEventArgs::<Snapshot>k__BackingField
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___U3CSnapshotU3Ek__BackingField_1;
	// Firebase.Database.DatabaseError Firebase.Database.ChildChangedEventArgs::<DatabaseError>k__BackingField
	DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___U3CDatabaseErrorU3Ek__BackingField_2;
	// System.String Firebase.Database.ChildChangedEventArgs::<PreviousChildName>k__BackingField
	String_t* ___U3CPreviousChildNameU3Ek__BackingField_3;
};

// Firebase.Database.DatabaseReference
struct DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D  : public Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED
{
	// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.DatabaseReference::internalReference
	InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904* ___internalReference_4;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DatabaseReference::<Database>k__BackingField
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___U3CDatabaseU3Ek__BackingField_5;
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

// Firebase.Database.ValueChangedEventArgs
struct ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// Firebase.Database.DataSnapshot Firebase.Database.ValueChangedEventArgs::<Snapshot>k__BackingField
	DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___U3CSnapshotU3Ek__BackingField_1;
	// Firebase.Database.DatabaseError Firebase.Database.ValueChangedEventArgs::<DatabaseError>k__BackingField
	DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___U3CDatabaseErrorU3Ek__BackingField_2;
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

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// Firebase.Database.Internal.InternalChildListener
struct InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569  : public InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA
{
	// System.Object Firebase.Database.Internal.InternalChildListener::eventLock
	RuntimeObject* ___eventLock_3;
	// Firebase.Database.Internal.InternalQuery Firebase.Database.Internal.InternalChildListener::internalQuery
	InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* ___internalQuery_4;
	// System.IntPtr Firebase.Database.Internal.InternalChildListener::cppListener
	intptr_t ___cppListener_5;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Internal.InternalChildListener::database
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database_6;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::cancelledImpl
	EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* ___cancelledImpl_7;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childAddedImpl
	EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* ___childAddedImpl_8;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childChangedImpl
	EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* ___childChangedImpl_9;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childMovedImpl
	EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* ___childMovedImpl_10;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childRemovedImpl
	EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* ___childRemovedImpl_11;
};

struct InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_StaticFields
{
	// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate Firebase.Database.Internal.InternalChildListener::<>f__mg$cache0
	OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* ___U3CU3Ef__mgU24cache0_12;
	// Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate Firebase.Database.Internal.InternalChildListener::<>f__mg$cache1
	OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* ___U3CU3Ef__mgU24cache1_13;
	// Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate Firebase.Database.Internal.InternalChildListener::<>f__mg$cache2
	OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* ___U3CU3Ef__mgU24cache2_14;
};

// Firebase.Database.Internal.InternalValueListener
struct InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D  : public InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA
{
	// System.Object Firebase.Database.Internal.InternalValueListener::eventLock
	RuntimeObject* ___eventLock_3;
	// Firebase.Database.Internal.InternalQuery Firebase.Database.Internal.InternalValueListener::internalQuery
	InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* ___internalQuery_4;
	// System.IntPtr Firebase.Database.Internal.InternalValueListener::cppListener
	intptr_t ___cppListener_5;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Internal.InternalValueListener::database
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database_6;
	// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs> Firebase.Database.Internal.InternalValueListener::valueChangedImpl
	EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* ___valueChangedImpl_7;
};

struct InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_StaticFields
{
	// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate Firebase.Database.Internal.InternalValueListener::<>f__mg$cache0
	OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* ___U3CU3Ef__mgU24cache0_8;
	// Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate Firebase.Database.Internal.InternalValueListener::<>f__mg$cache1
	OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* ___U3CU3Ef__mgU24cache1_9;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0
struct U3COnChildChangeHandlerU3Ec__AnonStorey0_t56115D1441B48B83BADDBF6301F46D60D2C50FED  : public RuntimeObject
{
	// System.IntPtr Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0::snapshot
	intptr_t ___snapshot_0;
	// System.Int32 Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0::callbackId
	int32_t ___callbackId_1;
	// Firebase.Database.Internal.ChildChangeType Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0::changeType
	int32_t ___changeType_2;
	// System.String Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0::previousChildName
	String_t* ___previousChildName_3;
};

// Firebase.Database.Internal.InternalChildListener/<OnChildRemovedHandler>c__AnonStorey1
struct U3COnChildRemovedHandlerU3Ec__AnonStorey1_t90E3BAAD380F693E3ADFD8AA7D3B99C09FAB4BBF  : public RuntimeObject
{
	// System.IntPtr Firebase.Database.Internal.InternalChildListener/<OnChildRemovedHandler>c__AnonStorey1::snapshot
	intptr_t ___snapshot_0;
	// System.Int32 Firebase.Database.Internal.InternalChildListener/<OnChildRemovedHandler>c__AnonStorey1::callbackId
	int32_t ___callbackId_1;
};

// Firebase.Database.Internal.InternalValueListener/<OnValueChangedHandler>c__AnonStorey0
struct U3COnValueChangedHandlerU3Ec__AnonStorey0_tB01B8F4519BD0A0485D263C7DB927C7CE442CBDE  : public RuntimeObject
{
	// System.IntPtr Firebase.Database.Internal.InternalValueListener/<OnValueChangedHandler>c__AnonStorey0::snapshot
	intptr_t ___snapshot_0;
	// System.Int32 Firebase.Database.Internal.InternalValueListener/<OnValueChangedHandler>c__AnonStorey0::callbackId
	int32_t ___callbackId_1;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// Firebase.Database.DatabaseException
struct DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232  : public Exception_t
{
};

// Firebase.FirebaseApp
struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___AppDisposed_4;
};

struct FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields
{
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject* ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A* ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3* ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject* ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_11;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject* ___CheckDependenciesThreadLock_12;
	// Firebase.FirebaseApp/CreateDelegate Firebase.FirebaseApp::<>f__am$cache0
	CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73* ___U3CU3Ef__amU24cache0_13;
	// System.Func`1<System.Boolean> Firebase.FirebaseApp::<>f__am$cache1
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3Ef__amU24cache1_14;
};

// Firebase.FirebaseException
struct FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED  : public Exception_t
{
	// System.Int32 Firebase.FirebaseException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_18;
};

// Firebase.FutureBase
struct FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.FutureBase::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.FutureBase::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.Database.Internal.InternalDataSnapshot
struct InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalDataSnapshot::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Database.Internal.InternalDataSnapshot::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.Database.Internal.InternalFirebaseDatabase
struct InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalFirebaseDatabase::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Database.Internal.InternalFirebaseDatabase::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// Firebase.Database.Internal.InternalQuery
struct InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalQuery::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Database.Internal.InternalQuery::swigCMemOwn
	bool ___swigCMemOwn_1;
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

// Firebase.Variant
struct Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Variant::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Variant::swigCMemOwn
	bool ___swigCMemOwn_1;
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>>
struct Action_1_t7945C3632B9391B8B1E5D718DAA49CC37EE9A746  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>
struct EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// Firebase.Database.Internal.Future_InternalDataSnapshot
struct Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE  : public FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36
{
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.Future_InternalDataSnapshot::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
	// System.IntPtr Firebase.Database.Internal.Future_InternalDataSnapshot::callbackData
	intptr_t ___callbackData_6;
	// Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_CompletionCB
	SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570* ___SWIG_CompletionCB_7;
};

struct Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action> Firebase.Database.Internal.Future_InternalDataSnapshot::Callbacks
	Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449* ___Callbacks_3;
	// System.Int32 Firebase.Database.Internal.Future_InternalDataSnapshot::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.Database.Internal.Future_InternalDataSnapshot::CallbackLock
	RuntimeObject* ___CallbackLock_5;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Firebase.Database.Internal.InternalDatabaseReference
struct InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904  : public InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196
{
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalDatabaseReference::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_2;
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Firebase.Database.Internal.Future_InternalDataSnapshot/Action
struct Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA  : public MulticastDelegate_t
{
};

// Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570  : public MulticastDelegate_t
{
};

// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate
struct OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0  : public MulticastDelegate_t
{
};

// Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate
struct OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F  : public MulticastDelegate_t
{
};

// Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate
struct OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B  : public MulticastDelegate_t
{
};

// Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate
struct OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5  : public MulticastDelegate_t
{
};

// Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate
struct OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D  : public MulticastDelegate_t
{
};

// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590  : public MulticastDelegate_t
{
};

// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78  : public MulticastDelegate_t
{
};

// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06  : public MulticastDelegate_t
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

// System.DivideByZeroException
struct DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_m7DB7E6251CB92C741F7E081E2ECAA06FF79E212F_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetCanceled_mA69C039F3F3D08D1CCD6ADE3E9693B6157038ABB_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_mA0846133B2903064AAD1D23FE61AE736A033F866_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678* ___continuationAction0, const RuntimeMethod* method) ;
// System.Boolean Firebase.Database.Query::CheckTaskStatus<System.Object>(System.Threading.Tasks.Task,System.Threading.Tasks.TaskCompletionSource`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool Query_CheckTaskStatus_TisRuntimeObject_m6E87585E0D51B92E28C5BCA0C4CC7D783605D664_gshared (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___tcs1, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;

// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m2C55BA213B4AE63F3C44D32D454338E1CDBA3EDD (SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m4AB21F56EA3861B447D71ACE15F748111EDE0C64 (SWIGStringHelper_tA0DF34D3B373B908F56B3655662A20E7E27B4ACA* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m6AA3E2F2D7A0DB5FED79929971F933DA5505DCA6 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m1B0114F1FF108DD8F9F24FAA2DEA558A2A476CE7 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mE0037D6F848F8109198782D1CB0EC665B93CADBE (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA4DF0AADCFB529BEBF28F39CB07F6B636F58943C (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m051BEC1EC3A1F4155DFC3BAAC2CA8B50D6331450 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mF487D4B9D07D3748558AC293890994D812342832 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m92618FD7111834C883EA889E2AC85EB3D30BF5E6 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m3974F8FD7BD47ED2F2B0BA6D58112BCCC32C0589 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m7B23D85245D96EE43899EE092056F728040E3771 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mD0596E40CBDA959588CECC835BF96CC86932665F (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m6C6A454591578F01371ABD3DA84BE953F76244FB (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m59BE67CE8F1577CC55385DCC9E08727B63251377 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mCC1EA36499599E23BFB91C8EED857D5A52D7BF29 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mD1053DCCFB4F7B20968576939CB7613412AE14D3 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m65CD1F48FF72A522CFAABFF2E74545D088C9EB48 (ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m3CB756D662593F33880447E5CC38BFBF828A0A77 (ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_m724C7259A9F31E130F845BE10C5D889117C4A8C4 (ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___applicationDelegate0, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___arithmeticDelegate1, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___divideByZeroDelegate2, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___indexOutOfRangeDelegate3, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___invalidCastDelegate4, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___invalidOperationDelegate5, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___ioDelegate6, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___nullReferenceDelegate7, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___outOfMemoryDelegate8, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___overflowDelegate9, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___systemExceptionDelegate10, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_m1E3DD77923D26076BDCC437546031FD2E46BECFC (ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* ___argumentDelegate0, ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* ___argumentNullDelegate1, ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* ___argumentOutOfRangeDelegate2, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Exception Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m48781C21D2A2CFB7733420C2F22AE4090F31911A (const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_mE04BC84D80E03615D1848E3BECB81FFC1DEFA8B8 (Exception_t* ___e0, const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23 (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2 (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, Exception_t* ___innerException2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m80327E39EB58F7F5540B06182DCB9004E4E14BB7 (String_t* ___cString0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m391698EA4A2E509AD2DAB97A9334F930FFD4EE1C (SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m40FCD11A43DD0D40622E48554E681DFD54C77E76 (SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06* ___stringDelegate0, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalDatabaseReference_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDatabaseReference_SWIGUpcast_m6A2F1AA8A576FCA74F81C623E9A3B7B72105B2E9 (intptr_t ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalQuery::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery__ctor_m892B8C4ADDCF77D96FC4323A38541505CC4CF064 (InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalQuery::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Finalize_mB2815BC64F0A8F9D20136C0D0D4858276AA1EB76 (InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* __this, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::delete_InternalDatabaseReference(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalDatabaseReference_m56A2EDEA1D97AB2E002E09FC5CBA81470F6B0E61 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalQuery::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Dispose_mF188E49785E9505985E11DDB11617172F09B38B3 (InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* __this, const RuntimeMethod* method) ;
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalDatabaseReference_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalDatabaseReference_is_valid_m790EEA0283855D7D4881289A91349981613E7E03 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538 (const RuntimeMethod* method) ;
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF (const RuntimeMethod* method) ;
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalDatabaseReference_url(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_InternalDatabaseReference_url_m06AE5B0D6601DAA88183601F7225F3791D41051B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::delete_InternalQuery(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalQuery_mAA36FD13954E5847FC7C81668C2B9752EA1C60E3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalQuery_GetValue(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalQuery_GetValue_mEDF9F65AFCB78F087EC31013AB7D6C70004432B0 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot__ctor_m6E96A12ED99B370C88B871C779AA2F58E2B2016B (Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot> Firebase.Database.Internal.Future_InternalDataSnapshot::GetTask(Firebase.Database.Internal.Future_InternalDataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* Future_InternalDataSnapshot_GetTask_m4D698D63D66C032C3437379B76B8AE41A6319AE1 (Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* ___fu0, const RuntimeMethod* method) ;
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalQuery_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalQuery_is_valid_mD381AC68C54C6E46CCA22A5E42618D2586FE0906 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalQuery_DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_DestroyValueListener_m1CC094DE40D4E4CB537A8B99A227A7FD289CD49D (intptr_t ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalQuery_RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_RegisterValueListenerCallbacks_m5C207989234FA35BDCA59EC4826C84C4C0901AA4 (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* ___jarg10, OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* ___jarg21, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalQuery_DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_DestroyChildListener_m04A90A4AC7BB0EF7970A560AD6F642A678886775 (intptr_t ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalQuery_RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_RegisterChildListenerCallbacks_mF471D02CC33FF2E517384E997A47F0362CA9EE30 (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* ___jarg10, OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* ___jarg21, OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* ___jarg32, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::delete_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalDataSnapshot_mF281CC6A2A2B5F1A2835BA382CC1657ADC76B7B5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalDataSnapshot_Child__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDataSnapshot_Child__SWIG_0_m3E48060136916A0ED620EC5B3200E2EB4E8D48E3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot__ctor_m4B612437CCFF2270A32351445BD34F910881AFBB (InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalDataSnapshot_key_string(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_InternalDataSnapshot_key_string_m2731AD9605628654AC4FCE12AA00F16C34ECF5A5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalDataSnapshot_value(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDataSnapshot_value_mF3B841957DEEAD694ECABD83C8335AD029355295 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.Variant::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Variant__ctor_mCBCDC0D6E1290E1A8412B59A4A8956BC32DFA163 (Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::ReleaseReferenceInternal(Firebase.Database.Internal.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_ReleaseReferenceInternal_m8DC83753EB17E0D0A96EC83A15240D56E44B6073 (InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* ___instance0, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalFirebaseDatabase_GetReference__SWIG_1(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetReference__SWIG_1_m00BFF8CEE8B5E662E8DAC6E1FDA19B28F8D74D05 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalDatabaseReference::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference__ctor_mD703FCC3BCBA9E2CA25A75A35AAD4401443F0644 (InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F FirebaseApp_getCPtr_mCF6551417C0F1D98798ED7810553EBD977381D16 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___obj0, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalFirebaseDatabase_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetInstanceInternal_mD2A542BAAB350575811FA946A188EDF594F5E7FA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, int32_t* ___jarg32, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase__ctor_m695FDAC34F083A04FF70599C4937DFA5BEA59B1E (InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalFirebaseDatabase::getCPtr(Firebase.Database.Internal.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F InternalFirebaseDatabase_getCPtr_mFC95394C0ABA2F7B7F2A4AF971175BA0152F5261 (InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* ___obj0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalFirebaseDatabase_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalFirebaseDatabase_ReleaseReferenceInternal_m497C77570C374BC498AE8B43AA368B7F62C5CB72 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SWIG_CompletionDispatcher_mC51964F35F1CC1E89E2F2F27868A2A800847DC7D (int32_t ___key0, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIGUpcast_m0A866554DE2531C44C98F7F0E864E2EFE14C3B0C (intptr_t ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase__ctor_m98C8AE4F030730C1CEE7E0B4A1816C623F2B9BE0 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.Void Firebase.FutureBase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Finalize_m9CD99D25C0199A337732E16288ABCE051A4D5CB7 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SetCompletionData_m69A013C6FB723BDBF844FEF27E2BC26EB0544BAB (Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* __this, intptr_t ___data0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::delete_Future_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_Future_InternalDataSnapshot_mC76F3471BF57583E096DF0C1E77CF17032FDDED1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void Firebase.FutureBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m32193D02DE4608C6C3EDF42F3D0495707DA4D15E (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_m4611A28FE15344B8BBB14AD90E3902748531A365 (U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>::.ctor()
inline void TaskCompletionSource_1__ctor_mAD94C8B5854A3756EDD03BB447A1F1722ACED6F2 (TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m38C2A3EA4E3B4C06C4251ABD631B669F9E45386A (const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_m4C441325C72389157FFB503F944E74DF223AC318 (TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478*, Exception_t*, const RuntimeMethod*))TaskCompletionSource_1_SetException_m7DB7E6251CB92C741F7E081E2ECAA06FF79E212F_gshared)(__this, ___exception0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>::get_Task()
inline Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* TaskCompletionSource_1_get_Task_m50532B9F3E3B251176843C6B9E5600D13B1B5998_inline (TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* (*) (TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// Firebase.FutureStatus Firebase.FutureBase::status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_status_mC75FD35438B176F95462D3A5D7D9194629211902 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException__ctor_m18D67DA955D2B4EA2BC58BCE0E96AC0A177DD70F (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* __this, int32_t ___errorCode0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mA6ED19E45A376E7AA2F35274CAE9C1E172526532 (Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SetOnCompletionCallback(Firebase.Database.Internal.Future_InternalDataSnapshot/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SetOnCompletionCallback_m0B2B8F60AA575E53074451D5DE0B122A78B368B2 (Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* __this, Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA* ___userCompletionCallback0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_ThrowIfDisposed_mC3DB98C44BBD94737696260E987D0DB82A03E622 (Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_mB602492E0889BF6CE746A72DA9CBAFAF71837F00 (SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>::.ctor()
inline void Dictionary_2__ctor_mD91357EC8988FB0B254FDF284C6AF51DF2F221A1 (Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m09C3BDF6FA0D1167CE63A80BEB1C1525189B5671 (Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449* __this, int32_t ___key0, Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449*, int32_t, Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// System.IntPtr Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_OnCompletion(Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_InternalDataSnapshot_SWIG_OnCompletion_m8069B6840E23CDE50DDE78E3844B1D1AEEAEF5C0 (Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* __this, SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570* ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SWIG_FreeCompletionData_mF96504CC68D810F2185F2C3961CE4D0639B228A5 (Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* __this, intptr_t ___data0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m53367B0B4553F9BAB8EC05A26C50D7088F40FA17 (Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449* __this, int32_t ___key0, Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449*, int32_t, Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>::Remove(TKey)
inline bool Dictionary_2_Remove_mB4B7A8724399169A1579ABA27E169A81A4A29ECF (Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m5E846E072C7551A5B7382CBFFE1BB3C990FB9FA1_inline (Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA* __this, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIG_OnCompletion_mB16DB05A8E2B101C200CA5C0FE9E150E6BF59D48 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570* ___jarg21, int32_t ___jarg32, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIG_FreeCompletionData_m678F5EE9E7D3D1A8798AF1D1E085630E54101DFF (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method) ;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Future_InternalDataSnapshot_GetResult_m486C7EF7C3890191F3B7120653248B2CA10C7A56 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>::SetCanceled()
inline void TaskCompletionSource_1_SetCanceled_mDF601C30BA8FCDF4FC440B757A9F749DF3318EC8 (TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478*, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_mA69C039F3F3D08D1CCD6ADE3E9693B6157038ABB_gshared)(__this, method);
}
// System.Int32 Firebase.FutureBase::error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_error_m47E3B5E0A43B4C19510A77B3658EE5D7D10B6030 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// System.String Firebase.FutureBase::error_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m5CC18319253B1ECC3C8AC675B213A08B1755D527 (FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36* __this, const RuntimeMethod* method) ;
// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.Internal.Future_InternalDataSnapshot::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* Future_InternalDataSnapshot_GetResult_m660A2334845A8C0B42377DC9ED88FFFA911C7523 (Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_mEC233493779A41449F7F7F244785E2C92DEDDE43 (TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478* __this, InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478*, InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared)(__this, ___result0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_m59195C58FF0FC63681CED394EB6618F03A25B3B4 (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalValueListener::OnValueChangedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnValueChangedHandler_m2A2BF51A5F938DDB9E2520CF96860D3C68EA807E (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalValueListener::OnCancelledHandler(System.Int32,Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnCancelledHandler_m127FC5F9C160C6E8B376C1F85904A1B0C2371193 (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate__ctor_m7D5FD1E072A9031443448E5D582E23D8015B808B (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate__ctor_m80BF259A3B5530546C3765A0D9822B7F76644BE4 (OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalQuery::RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterValueListenerCallbacks_m4136C759B9EA145E1B75D2A6F700CBCCB6D0845C (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* ___cancelledCallback0, OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* ___valueChangedCallback1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener__ctor_mCF26EC92A2240B44BFB372FA650958CCBD9A0180 (InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA* __this, const RuntimeMethod* method) ;
// System.Boolean Firebase.Database.Internal.InternalListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalListener_TryGetListener_m98E8EAD97FFE115420096531BA8CA146898E58C5 (int32_t ___uid0, InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA** ___listener1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalValueListener/<OnValueChangedHandler>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnValueChangedHandlerU3Ec__AnonStorey0__ctor_m3FB4A7BF3D9F94BE4FDEEEF1B9D33447AA8C524D (U3COnValueChangedHandlerU3Ec__AnonStorey0_tB01B8F4519BD0A0485D263C7DB927C7CE442CBDE* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m0B206615C9C9608E5D2CC1738CB2056F121811FB (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalValueListener/<OnCancelledHandler>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCancelledHandlerU3Ec__AnonStorey1__ctor_mF91084EC680555042AB3700C4ECF663916829BC0 (U3COnCancelledHandlerU3Ec__AnonStorey1_tE28067CBE98834AAC86C0D52218C9EAFCF5A8F2F* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalQuery::DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyValueListener_m19812AA2089B447EE6E7A05F3B9D855A06F03FFD (intptr_t ___listener0, const RuntimeMethod* method) ;
// System.Boolean Firebase.Database.Internal.InternalValueListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalValueListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalValueListener_TryGetListener_m13452162C9592C47A39C7C0B704E8E25ADCC2D1A (int32_t ___callbackId0, InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D** ___valueListener1, const RuntimeMethod* method) ;
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::CreateSnapshot(Firebase.Database.Internal.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* DataSnapshot_CreateSnapshot_mB4F13FA3E4E46833D9780D7D8490423DF3148BCC (InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* ___internalSnapshot0, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_m3746F9CA3C31CF3ECFE96A4C2E258D394149F7BF (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___snapshot0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m138A2D3506A270F2AB9DF6EE30246FE32C0F2672_inline (EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* __this, RuntimeObject* ___sender0, ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044*, RuntimeObject*, ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// Firebase.Database.DatabaseError Firebase.Database.DatabaseError::FromError(Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* DatabaseError_FromError_m8B5FA9C9EF754565FA56A120D53480DAB952A580 (int32_t ___error0, String_t* ___msg1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_mFAFCFA9665476BAD0D16CD6906EA3554ABB0F283 (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___error0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mB96FCF84681FFE97BA7EA45565D94FE64DB2A851 (Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* __this, int32_t ___key0, InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D*, int32_t, InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Firebase.Database.Internal.InternalListener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_Dispose_m6D7CA28EE5C08ED9103B2EAD4ACCD0016ACDA0CC (InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::Remove(TKey)
inline bool Dictionary_2_Remove_mAF2F6B72BB0F5B95CDDC755D57D0096DCD18EBA7 (Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::.ctor()
inline void Dictionary_2__ctor_mE89209F3032BC734CF79096A19D66A8E18CED709 (Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildChangeHandler(System.Int32,Firebase.Database.Internal.ChildChangeType,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildChangeHandler_m09D6C53122D375483BC535E3737AAA5A91CF08CF (int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildRemovedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildRemovedHandler_mBE604A2D8DFD72E85AA563F1F68612A0CC067425 (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalChildListener::OnCancelledHandler(System.Int32,Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnCancelledHandler_m32541A7C5B3ECC99D550EC9FB84927734B3CBE0B (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate__ctor_m278F4837562673E7CA3C172D6BDB62BD9238B78E (OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate__ctor_m11125CD973C22C05C781648FD541AAA731526F8C (OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalQuery::RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterChildListenerCallbacks_mFF7DE933A199D77FBC23376F3FB6D795E454D3E9 (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* ___cancelledCallback0, OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* ___childChangeCallback1, OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* ___childRemovedCallback2, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnChildChangeHandlerU3Ec__AnonStorey0__ctor_mCFD527763708413AC15743191BF0DB57397E3554 (U3COnChildChangeHandlerU3Ec__AnonStorey0_t56115D1441B48B83BADDBF6301F46D60D2C50FED* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalChildListener/<OnChildRemovedHandler>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnChildRemovedHandlerU3Ec__AnonStorey1__ctor_m7719CD7D5F4E75C8EF10E52BB0CED73A9D648653 (U3COnChildRemovedHandlerU3Ec__AnonStorey1_t90E3BAAD380F693E3ADFD8AA7D3B99C09FAB4BBF* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalChildListener/<OnCancelledHandler>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCancelledHandlerU3Ec__AnonStorey2__ctor_m1DF96006936C8DAB49ADB1D3CFBB6DEC2CDBAB25 (U3COnCancelledHandlerU3Ec__AnonStorey2_t22B73155E1CADB05957372E67D53B2FA47D6D8B8* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalQuery::DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyChildListener_mB50FE32DFB49B8587269F89F2F02C1D91E7A6E64 (intptr_t ___listener0, const RuntimeMethod* method) ;
// System.Boolean Firebase.Database.Internal.InternalChildListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalChildListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalChildListener_TryGetListener_mF31C6727DB004EE23987AA5B1F5BE8A540D47E92 (int32_t ___callbackId0, InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569** ___childListener1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DataSnapshot,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_m8D4FB933484AE04658CA020AA78973B8D417A013 (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___snapshot0, String_t* ___previousChildName1, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m08DDFE5209405EBEC20FF3DA6E767B0DB57E06D1_inline (EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* __this, RuntimeObject* ___sender0, ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9*, RuntimeObject*, ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_mCE05C1743B7236D84ADFC50D1DC746D205C7E4CC (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___error0, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Database.ValueChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_Snapshot_m664FEFFC667D86C6E261AB06D9325FC09EBF1449_inline (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.ValueChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_DatabaseError_m289AF8CCA253CF21C307135423350D1BE212169E_inline (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalValueListener::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener__ctor_mAC548AECF68F334C19E043AC711D16BEABA61499 (InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* __this, InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* ___internalQuery0, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Internal.InternalChildListener::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener__ctor_m0C111E3446213E20703731363653DEFF6AC4C391 (InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* __this, InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* ___internalQuery0, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.Query/<WrapInternalDataSnapshotTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0__ctor_mFB535B49F747C8C5CBC8A34FDCD3C1C33B1893DA (U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tEDF9987AAA56631AF297265DE1FE149FCE8E04D2* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>::.ctor()
inline void TaskCompletionSource_1__ctor_m5203880431733105C123A932250AE74F8F910A93 (TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5C268288EB8A555F42BFD4FF9360F587562D7408 (Action_1_t7945C3632B9391B8B1E5D718DAA49CC37EE9A746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7945C3632B9391B8B1E5D718DAA49CC37EE9A746*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_m20343E9541DCD586432A5CDFC6210E5A35036FA2 (Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* __this, Action_1_t7945C3632B9391B8B1E5D718DAA49CC37EE9A746* ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3*, Action_1_t7945C3632B9391B8B1E5D718DAA49CC37EE9A746*, const RuntimeMethod*))Task_1_ContinueWith_mA0846133B2903064AAD1D23FE61AE736A033F866_gshared)(__this, ___continuationAction0, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>::get_Task()
inline Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* TaskCompletionSource_1_get_Task_mE745D73D542C2CB354295487B689280699847D66_inline (TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* (*) (TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot> Firebase.Database.Internal.InternalQuery::GetValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* InternalQuery_GetValueAsync_mDE0591F9BD98AC036E5967B4996F9C32175E613A (InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::WrapInternalDataSnapshotTask(System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* Query_WrapInternalDataSnapshotTask_m70AD530D19FAC103C3B784CE11AD5B19172E79B9 (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* ___it0, const RuntimeMethod* method) ;
// System.Boolean Firebase.Database.Query::CheckTaskStatus<Firebase.Database.DataSnapshot>(System.Threading.Tasks.Task,System.Threading.Tasks.TaskCompletionSource`1<TResult>)
inline bool Query_CheckTaskStatus_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m9FAB5282CCDABFFC440825304594AF870D584B5B (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___task0, TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B* ___tcs1, const RuntimeMethod* method)
{
	return ((  bool (*) (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED*, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B*, const RuntimeMethod*))Query_CheckTaskStatus_TisRuntimeObject_m6E87585E0D51B92E28C5BCA0C4CC7D783605D664_gshared)(__this, ___task0, ___tcs1, method);
}
// TResult System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>::get_Result()
inline InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* Task_1_get_Result_m903965C40A3B093D3F1FC6851F0F05BCFBA1519A (Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* __this, const RuntimeMethod* method)
{
	return ((  InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* (*) (Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_m7371C0347394928D615951ACD5DA9E5E4169DA54 (TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B*, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared)(__this, ___result0, method);
}
// System.Void Firebase.Database.FirebaseDatabase::set_App(Firebase.FirebaseApp)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseDatabase_set_App_m7B018585E9B3FAC825B2B08A6943052AF6293D6C_inline (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___value0, const RuntimeMethod* method) ;
// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::get_App()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseDatabase_get_App_mCAE467A1AD76CFC175A5988C1BACCBC684083B4E_inline (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2 (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.FirebaseApp::add_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_add_AppDisposed_m849DD816EFE8D669DBFA139254D5E3C4D8C78F85 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.FirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_Dispose_mA44D4A1381D0A1C3EE45303C037A86C2D51FC77B (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::Remove(TKey)
inline bool Dictionary_2_Remove_m779C5AC4A5E010490E239608A033E7BD9F58CBEA (Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Void Firebase.FirebaseApp::remove_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_remove_AppDisposed_mAAF77EA50314A467CBB4481448C72FA9B7173289 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___value0, const RuntimeMethod* method) ;
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_get_DefaultInstance_mCA6FC0DE0B25880FC6ACEAD5585ED84407690C61 (const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseException__ctor_mAA398869C4ADA4E90F85E7B352065E7A17A88962 (DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232* __this, String_t* ___message0, const RuntimeMethod* method) ;
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* FirebaseDatabase_GetInstance_m3130111FF320EA60C689B327E215DE013D73D872 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___app0, String_t* ___url1, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_m89C11F96726C8E4FD3CCAE04A5DC3129F7CD975E (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mEEC01F0B32FCA1F893644B7E6077E6C865110B4A (Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* __this, String_t* ___key0, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF*, String_t*, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// Firebase.Database.Internal.InternalFirebaseDatabase Firebase.Database.Internal.InternalFirebaseDatabase::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* InternalFirebaseDatabase_GetInstanceInternal_mB1861CC018AC59029C70B833973F1218B8A3C767 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___app0, String_t* ___url1, int32_t* ___init_result_out2, const RuntimeMethod* method) ;
// System.Void Firebase.Database.FirebaseDatabase::.ctor(Firebase.FirebaseApp,Firebase.Database.Internal.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase__ctor_m7BD7F7529F58B3AC2DAE5662AA93DACCF4B6C7BE (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___app0, InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* ___internalDB1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m26B1CABA0C5F59C2AAD05FF2FD763761EFC16617 (Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* __this, String_t* ___key0, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF*, String_t*, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.Internal.InternalFirebaseDatabase::GetReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904* InternalFirebaseDatabase_GetReference_m86E6F0EF9294C4DB543B3248639B3EF2AF2E2D49 (InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseReference::.ctor(Firebase.Database.Internal.InternalDatabaseReference,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseReference__ctor_m1AB02999A95E3B7FE6BEB2CCC941B0FC8EADC147 (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904* ___internalRef0, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::.ctor()
inline void Dictionary_2__ctor_m221507942D7865AEEF5101ADD152C33188A27994 (Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Firebase.Database.Query::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query__ctor_m57A7C7992A3CEF8448777374B308FFC72E83516A (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* ___internalQuery0, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseReference::set_Database(Firebase.Database.FirebaseDatabase)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseReference_set_Database_m2E45848FF8060F8D805ADB4892879771690D740C_inline (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___value0, const RuntimeMethod* method) ;
// System.String Firebase.Database.Internal.InternalDatabaseReference::url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDatabaseReference_url_m74610E82DC38D4A79AAC85BD23C518AAE24D7A19 (InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor()
inline void Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4 (Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// System.Void Firebase.Database.DatabaseError::set_Code(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Code_m4DA74376D7C9DA4348815E479A418C5130D83959_inline (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseError::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Message_mF5D8EAD1111E14E48A24415621D5DFB6BDF6C5B0_inline (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseError::set_Details(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Details_m8AF923DAE6BEBE88C2F16B81C4F91C8FF75A2F3B_inline (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Firebase.Database.DatabaseError::ErrorToCode(Firebase.Database.Internal.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DatabaseError_ErrorToCode_m8800BAB6688436446F83E753B45B4A4F7E585C8E (int32_t ___error0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DatabaseError::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError__ctor_mADE8BF63184FF3A6B166B16C8B2C3890F4E2AA87 (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, int32_t ___code0, String_t* ___message1, String_t* ___details2, const RuntimeMethod* method) ;
// System.String Firebase.Database.DatabaseError::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_m7D2C33D0913B955723BA70372B1FA894F3DE08CE_inline (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Firebase.Database.DataSnapshot::.ctor(Firebase.Database.Internal.InternalDataSnapshot,Firebase.Database.FirebaseDatabase,Firebase.Database.DataSnapshot,Firebase.Database.DataSnapshot/DataSnapshotList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSnapshot__ctor_m07FBC7F4FEB965DA1F861834C467D4F2046A739B (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* ___internalSnapshot0, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database1, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___parentSnapshot2, DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7* ___parentList3, const RuntimeMethod* method) ;
// System.Object Firebase.Database.DataSnapshot::GetValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSnapshot_GetValue_m8CE6C5E7DC1FA7DF2D3768351402A3071B43358C (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, bool ___useExportFormat0, const RuntimeMethod* method) ;
// System.String Firebase.Database.Internal.InternalDataSnapshot::key_string()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDataSnapshot_key_string_m1A510FDFBD689DCEFD22A223AEB1F66449566EBE (InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* __this, const RuntimeMethod* method) ;
// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.Internal.InternalDataSnapshot::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* InternalDataSnapshot_Child_mBF5A8FD2325A4C76C65213DFF3DF01A8A3DF5D1F (InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* __this, String_t* ___path0, const RuntimeMethod* method) ;
// Firebase.Variant Firebase.Database.Internal.InternalDataSnapshot::value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* InternalDataSnapshot_value_m394E5BB7C642E4687D677B249DFAA622338E0268 (InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* __this, const RuntimeMethod* method) ;
// System.Object Firebase.VariantExtension::ToObject(Firebase.Variant,Firebase.VariantExtension/KeyOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VariantExtension_ToObject_m5886091BA12BE41013A6ED0FFF8984372DA80D2F (Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* ___variant0, int32_t ___options1, const RuntimeMethod* method) ;
// System.String Firebase.Database.DataSnapshot::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_get_Key_m71F6DF80BFBCFA8C9C2F2368AD5F6A44F5E70908 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) ;
// System.Object Firebase.Database.DataSnapshot::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSnapshot_get_Value_mF787DB763C81F79ED7CC2621AC49708EB8A6DBA2 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.ChildChangedEventArgs::set_PreviousChildName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_PreviousChildName_mA8CB8F8600798C3A3355233B9DEAA30E12D5B4D3_inline (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.ChildChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_Snapshot_m3C081820094FC6F71F880867072C0C451E44F5FD_inline (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Database.ChildChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_DatabaseError_mF145AE36CB0516ACADD912A548765222B56AABF2_inline (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___value0, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIG_FreeCompletionData(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_Future_InternalDataSnapshot_GetResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_delete_Future_InternalDataSnapshot(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalFirebaseDatabase_GetReference__SWIG_1(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalFirebaseDatabase_GetInstanceInternal(void*, char*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalFirebaseDatabase_ReleaseReferenceInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_delete_InternalDataSnapshot(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalDataSnapshot_Child__SWIG_0(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Database_CSharp_InternalDataSnapshot_key_string(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalDataSnapshot_value(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_delete_InternalQuery(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_GetValue(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_is_valid(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_DestroyValueListener(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_RegisterValueListenerCallbacks(Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_DestroyChildListener(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_RegisterChildListenerCallbacks(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_delete_InternalDatabaseReference(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Database_CSharp_InternalDatabaseReference_is_valid(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Database_CSharp_InternalDatabaseReference_url(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalDatabaseReference_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_DatabaseInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionArgumentCallbacks_DatabaseInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_DatabaseInternal(Il2CppMethodPointer);
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
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE__cctor_m0EC92CB6E3753B1985496DC663F839AA73E79C5A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_tA0DF34D3B373B908F56B3655662A20E7E27B4ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C* L_0 = (SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C*)il2cpp_codegen_object_new(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGExceptionHelper__ctor_m2C55BA213B4AE63F3C44D32D454338E1CDBA3EDD(L_0, NULL);
		((DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var))->___swigExceptionHelper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var))->___swigExceptionHelper_0), (void*)L_0);
		SWIGStringHelper_tA0DF34D3B373B908F56B3655662A20E7E27B4ACA* L_1 = (SWIGStringHelper_tA0DF34D3B373B908F56B3655662A20E7E27B4ACA*)il2cpp_codegen_object_new(SWIGStringHelper_tA0DF34D3B373B908F56B3655662A20E7E27B4ACA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SWIGStringHelper__ctor_m4AB21F56EA3861B447D71ACE15F748111EDE0C64(L_1, NULL);
		((DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var))->___swigStringHelper_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var))->___swigStringHelper_1), (void*)L_1);
		return;
	}
}
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIG_OnCompletion_mB16DB05A8E2B101C200CA5C0FE9E150E6BF59D48 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570* ___jarg21, int32_t ___jarg32, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIG_OnCompletion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIG_OnCompletion)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#endif

	return returnValue;
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIG_FreeCompletionData_m678F5EE9E7D3D1A8798AF1D1E085630E54101DFF (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIG_FreeCompletionData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIG_FreeCompletionData)(____jarg10_marshaled, ___jarg21);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

}
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Future_InternalDataSnapshot_GetResult_m486C7EF7C3890191F3B7120653248B2CA10C7A56 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_Future_InternalDataSnapshot_GetResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_Future_InternalDataSnapshot_GetResult)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::delete_Future_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_Future_InternalDataSnapshot_mC76F3471BF57583E096DF0C1E77CF17032FDDED1 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_delete_Future_InternalDataSnapshot", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_delete_Future_InternalDataSnapshot)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalFirebaseDatabase_GetReference__SWIG_1(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetReference__SWIG_1_m00BFF8CEE8B5E662E8DAC6E1FDA19B28F8D74D05 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_InternalFirebaseDatabase_GetReference__SWIG_1", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalFirebaseDatabase_GetReference__SWIG_1)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalFirebaseDatabase_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetInstanceInternal_mD2A542BAAB350575811FA946A188EDF594F5E7FA (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, int32_t* ___jarg32, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_InternalFirebaseDatabase_GetInstanceInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalFirebaseDatabase_GetInstanceInternal)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalFirebaseDatabase_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalFirebaseDatabase_ReleaseReferenceInternal_m497C77570C374BC498AE8B43AA368B7F62C5CB72 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_InternalFirebaseDatabase_ReleaseReferenceInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalFirebaseDatabase_ReleaseReferenceInternal)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::delete_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalDataSnapshot_mF281CC6A2A2B5F1A2835BA382CC1657ADC76B7B5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_delete_InternalDataSnapshot", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_delete_InternalDataSnapshot)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalDataSnapshot_Child__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDataSnapshot_Child__SWIG_0_m3E48060136916A0ED620EC5B3200E2EB4E8D48E3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, String_t* ___jarg21, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_InternalDataSnapshot_Child__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDataSnapshot_Child__SWIG_0)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalDataSnapshot_key_string(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_InternalDataSnapshot_key_string_m2731AD9605628654AC4FCE12AA00F16C34ECF5A5 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_InternalDataSnapshot_key_string", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDataSnapshot_key_string)(____jarg10_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalDataSnapshot_value(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDataSnapshot_value_mF3B841957DEEAD694ECABD83C8335AD029355295 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_InternalDataSnapshot_value", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDataSnapshot_value)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::delete_InternalQuery(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalQuery_mAA36FD13954E5847FC7C81668C2B9752EA1C60E3 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_delete_InternalQuery", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_delete_InternalQuery)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalQuery_GetValue(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalQuery_GetValue_mEDF9F65AFCB78F087EC31013AB7D6C70004432B0 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_InternalQuery_GetValue", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_GetValue)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalQuery_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalQuery_is_valid_mD381AC68C54C6E46CCA22A5E42618D2586FE0906 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_InternalQuery_is_valid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_is_valid)(____jarg10_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalQuery_DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_DestroyValueListener_m1CC094DE40D4E4CB537A8B99A227A7FD289CD49D (intptr_t ___jarg10, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_InternalQuery_DestroyValueListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_DestroyValueListener)(___jarg10);
	#else
	il2cppPInvokeFunc(___jarg10);
	#endif

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalQuery_RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_RegisterValueListenerCallbacks_m5C207989234FA35BDCA59EC4826C84C4C0901AA4 (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* ___jarg10, OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* ___jarg21, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_InternalQuery_RegisterValueListenerCallbacks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_RegisterValueListenerCallbacks)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalQuery_DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_DestroyChildListener_m04A90A4AC7BB0EF7970A560AD6F642A678886775 (intptr_t ___jarg10, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_InternalQuery_DestroyChildListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_DestroyChildListener)(___jarg10);
	#else
	il2cppPInvokeFunc(___jarg10);
	#endif

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalQuery_RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_RegisterChildListenerCallbacks_mF471D02CC33FF2E517384E997A47F0362CA9EE30 (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* ___jarg10, OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* ___jarg21, OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* ___jarg32, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_InternalQuery_RegisterChildListenerCallbacks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Marshaling of parameter '___jarg32' to native representation
	Il2CppMethodPointer ____jarg32_marshaled = NULL;
	____jarg32_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg32));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_RegisterChildListenerCallbacks)(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled);
	#endif

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::delete_InternalDatabaseReference(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalDatabaseReference_m56A2EDEA1D97AB2E002E09FC5CBA81470F6B0E61 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_delete_InternalDatabaseReference", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_delete_InternalDatabaseReference)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalDatabaseReference_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalDatabaseReference_is_valid_m790EEA0283855D7D4881289A91349981613E7E03 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_InternalDatabaseReference_is_valid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDatabaseReference_is_valid)(____jarg10_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalDatabaseReference_url(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_InternalDatabaseReference_url_m06AE5B0D6601DAA88183601F7225F3791D41051B (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_InternalDatabaseReference_url", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDatabaseReference_url)(____jarg10_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIGUpcast_m0A866554DE2531C44C98F7F0E864E2EFE14C3B0C (intptr_t ___jarg10, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIGUpcast)(___jarg10);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___jarg10);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::InternalDatabaseReference_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDatabaseReference_SWIGUpcast_m6A2F1AA8A576FCA74F81C623E9A3B7B72105B2E9 (intptr_t ___jarg10, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Database_CSharp_InternalDatabaseReference_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDatabaseReference_SWIGUpcast)(___jarg10);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___jarg10);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m6AA3E2F2D7A0DB5FED79929971F933DA5505DCA6(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m6AA3E2F2D7A0DB5FED79929971F933DA5505DCA6(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m1B0114F1FF108DD8F9F24FAA2DEA558A2A476CE7(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m1B0114F1FF108DD8F9F24FAA2DEA558A2A476CE7(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_mE0037D6F848F8109198782D1CB0EC665B93CADBE(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_mE0037D6F848F8109198782D1CB0EC665B93CADBE(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA4DF0AADCFB529BEBF28F39CB07F6B636F58943C(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA4DF0AADCFB529BEBF28F39CB07F6B636F58943C(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m051BEC1EC3A1F4155DFC3BAAC2CA8B50D6331450(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m051BEC1EC3A1F4155DFC3BAAC2CA8B50D6331450(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_mF487D4B9D07D3748558AC293890994D812342832(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_mF487D4B9D07D3748558AC293890994D812342832(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m92618FD7111834C883EA889E2AC85EB3D30BF5E6(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m92618FD7111834C883EA889E2AC85EB3D30BF5E6(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m3974F8FD7BD47ED2F2B0BA6D58112BCCC32C0589(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m3974F8FD7BD47ED2F2B0BA6D58112BCCC32C0589(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m7B23D85245D96EE43899EE092056F728040E3771(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m7B23D85245D96EE43899EE092056F728040E3771(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_mD0596E40CBDA959588CECC835BF96CC86932665F(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_mD0596E40CBDA959588CECC835BF96CC86932665F(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m6C6A454591578F01371ABD3DA84BE953F76244FB(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m6C6A454591578F01371ABD3DA84BE953F76244FB(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m59BE67CE8F1577CC55385DCC9E08727B63251377(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m59BE67CE8F1577CC55385DCC9E08727B63251377(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_mCC1EA36499599E23BFB91C8EED857D5A52D7BF29(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_mCC1EA36499599E23BFB91C8EED857D5A52D7BF29(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mD1053DCCFB4F7B20968576939CB7613412AE14D3(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mD1053DCCFB4F7B20968576939CB7613412AE14D3(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_mDC2CC2932390E9E47083E2956503F5501534FDF6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_m6AA3E2F2D7A0DB5FED79929971F933DA5505DCA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_m59BE67CE8F1577CC55385DCC9E08727B63251377_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_mCC1EA36499599E23BFB91C8EED857D5A52D7BF29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mD1053DCCFB4F7B20968576939CB7613412AE14D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_m1B0114F1FF108DD8F9F24FAA2DEA558A2A476CE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_mE0037D6F848F8109198782D1CB0EC665B93CADBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_m92618FD7111834C883EA889E2AC85EB3D30BF5E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA4DF0AADCFB529BEBF28F39CB07F6B636F58943C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_m051BEC1EC3A1F4155DFC3BAAC2CA8B50D6331450_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_mF487D4B9D07D3748558AC293890994D812342832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m3974F8FD7BD47ED2F2B0BA6D58112BCCC32C0589_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_m7B23D85245D96EE43899EE092056F728040E3771_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_mD0596E40CBDA959588CECC835BF96CC86932665F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_m6C6A454591578F01371ABD3DA84BE953F76244FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_0 = (ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78*)il2cpp_codegen_object_new(ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExceptionDelegate__ctor_m65CD1F48FF72A522CFAABFF2E74545D088C9EB48(L_0, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingApplicationException_m6AA3E2F2D7A0DB5FED79929971F933DA5505DCA6_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___applicationDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___applicationDelegate_0), (void*)L_0);
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_1 = (ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78*)il2cpp_codegen_object_new(ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ExceptionDelegate__ctor_m65CD1F48FF72A522CFAABFF2E74545D088C9EB48(L_1, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArithmeticException_m1B0114F1FF108DD8F9F24FAA2DEA558A2A476CE7_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___arithmeticDelegate_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___arithmeticDelegate_1), (void*)L_1);
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_2 = (ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78*)il2cpp_codegen_object_new(ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ExceptionDelegate__ctor_m65CD1F48FF72A522CFAABFF2E74545D088C9EB48(L_2, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingDivideByZeroException_mE0037D6F848F8109198782D1CB0EC665B93CADBE_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2), (void*)L_2);
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_3 = (ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78*)il2cpp_codegen_object_new(ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ExceptionDelegate__ctor_m65CD1F48FF72A522CFAABFF2E74545D088C9EB48(L_3, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA4DF0AADCFB529BEBF28F39CB07F6B636F58943C_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3), (void*)L_3);
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_4 = (ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78*)il2cpp_codegen_object_new(ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ExceptionDelegate__ctor_m65CD1F48FF72A522CFAABFF2E74545D088C9EB48(L_4, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidCastException_m051BEC1EC3A1F4155DFC3BAAC2CA8B50D6331450_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___invalidCastDelegate_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___invalidCastDelegate_4), (void*)L_4);
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_5 = (ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78*)il2cpp_codegen_object_new(ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ExceptionDelegate__ctor_m65CD1F48FF72A522CFAABFF2E74545D088C9EB48(L_5, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidOperationException_mF487D4B9D07D3748558AC293890994D812342832_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5), (void*)L_5);
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_6 = (ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78*)il2cpp_codegen_object_new(ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ExceptionDelegate__ctor_m65CD1F48FF72A522CFAABFF2E74545D088C9EB48(L_6, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIOException_m92618FD7111834C883EA889E2AC85EB3D30BF5E6_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___ioDelegate_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___ioDelegate_6), (void*)L_6);
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_7 = (ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78*)il2cpp_codegen_object_new(ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ExceptionDelegate__ctor_m65CD1F48FF72A522CFAABFF2E74545D088C9EB48(L_7, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingNullReferenceException_m3974F8FD7BD47ED2F2B0BA6D58112BCCC32C0589_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7), (void*)L_7);
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_8 = (ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78*)il2cpp_codegen_object_new(ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ExceptionDelegate__ctor_m65CD1F48FF72A522CFAABFF2E74545D088C9EB48(L_8, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOutOfMemoryException_m7B23D85245D96EE43899EE092056F728040E3771_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8), (void*)L_8);
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_9 = (ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78*)il2cpp_codegen_object_new(ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ExceptionDelegate__ctor_m65CD1F48FF72A522CFAABFF2E74545D088C9EB48(L_9, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOverflowException_mD0596E40CBDA959588CECC835BF96CC86932665F_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___overflowDelegate_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___overflowDelegate_9), (void*)L_9);
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_10 = (ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78*)il2cpp_codegen_object_new(ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ExceptionDelegate__ctor_m65CD1F48FF72A522CFAABFF2E74545D088C9EB48(L_10, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingSystemException_m6C6A454591578F01371ABD3DA84BE953F76244FB_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___systemDelegate_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___systemDelegate_10), (void*)L_10);
		ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* L_11 = (ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ExceptionArgumentDelegate__ctor_m3CB756D662593F33880447E5CC38BFBF828A0A77(L_11, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentException_m59BE67CE8F1577CC55385DCC9E08727B63251377_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___argumentDelegate_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___argumentDelegate_11), (void*)L_11);
		ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* L_12 = (ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ExceptionArgumentDelegate__ctor_m3CB756D662593F33880447E5CC38BFBF828A0A77(L_12, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentNullException_mCC1EA36499599E23BFB91C8EED857D5A52D7BF29_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___argumentNullDelegate_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___argumentNullDelegate_12), (void*)L_12);
		ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* L_13 = (ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		ExceptionArgumentDelegate__ctor_m3CB756D662593F33880447E5CC38BFBF828A0A77(L_13, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mD1053DCCFB4F7B20968576939CB7613412AE14D3_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13), (void*)L_13);
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_14 = ((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___applicationDelegate_0;
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_15 = ((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___arithmeticDelegate_1;
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_16 = ((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2;
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_17 = ((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3;
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_18 = ((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___invalidCastDelegate_4;
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_19 = ((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5;
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_20 = ((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___ioDelegate_6;
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_21 = ((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7;
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_22 = ((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8;
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_23 = ((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___overflowDelegate_9;
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* L_24 = ((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___systemDelegate_10;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_m724C7259A9F31E130F845BE10C5D889117C4A8C4(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, NULL);
		ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* L_25 = ((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___argumentDelegate_11;
		ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* L_26 = ((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___argumentNullDelegate_12;
		ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* L_27 = ((SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_m1E3DD77923D26076BDCC437546031FD2E46BECFC(L_25, L_26, L_27, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m2C55BA213B4AE63F3C44D32D454338E1CDBA3EDD (SWIGExceptionHelper_t6D3F385035AA81B65D9A5E0490E1611E661E024C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_m724C7259A9F31E130F845BE10C5D889117C4A8C4 (ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___applicationDelegate0, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___arithmeticDelegate1, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___divideByZeroDelegate2, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___indexOutOfRangeDelegate3, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___invalidCastDelegate4, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___invalidOperationDelegate5, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___ioDelegate6, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___nullReferenceDelegate7, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___outOfMemoryDelegate8, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___overflowDelegate9, ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* ___systemExceptionDelegate10, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "SWIGRegisterExceptionCallbacks_DatabaseInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___applicationDelegate0' to native representation
	Il2CppMethodPointer ____applicationDelegate0_marshaled = NULL;
	____applicationDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___applicationDelegate0));

	// Marshaling of parameter '___arithmeticDelegate1' to native representation
	Il2CppMethodPointer ____arithmeticDelegate1_marshaled = NULL;
	____arithmeticDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___arithmeticDelegate1));

	// Marshaling of parameter '___divideByZeroDelegate2' to native representation
	Il2CppMethodPointer ____divideByZeroDelegate2_marshaled = NULL;
	____divideByZeroDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___divideByZeroDelegate2));

	// Marshaling of parameter '___indexOutOfRangeDelegate3' to native representation
	Il2CppMethodPointer ____indexOutOfRangeDelegate3_marshaled = NULL;
	____indexOutOfRangeDelegate3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indexOutOfRangeDelegate3));

	// Marshaling of parameter '___invalidCastDelegate4' to native representation
	Il2CppMethodPointer ____invalidCastDelegate4_marshaled = NULL;
	____invalidCastDelegate4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidCastDelegate4));

	// Marshaling of parameter '___invalidOperationDelegate5' to native representation
	Il2CppMethodPointer ____invalidOperationDelegate5_marshaled = NULL;
	____invalidOperationDelegate5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidOperationDelegate5));

	// Marshaling of parameter '___ioDelegate6' to native representation
	Il2CppMethodPointer ____ioDelegate6_marshaled = NULL;
	____ioDelegate6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ioDelegate6));

	// Marshaling of parameter '___nullReferenceDelegate7' to native representation
	Il2CppMethodPointer ____nullReferenceDelegate7_marshaled = NULL;
	____nullReferenceDelegate7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___nullReferenceDelegate7));

	// Marshaling of parameter '___outOfMemoryDelegate8' to native representation
	Il2CppMethodPointer ____outOfMemoryDelegate8_marshaled = NULL;
	____outOfMemoryDelegate8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___outOfMemoryDelegate8));

	// Marshaling of parameter '___overflowDelegate9' to native representation
	Il2CppMethodPointer ____overflowDelegate9_marshaled = NULL;
	____overflowDelegate9_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___overflowDelegate9));

	// Marshaling of parameter '___systemExceptionDelegate10' to native representation
	Il2CppMethodPointer ____systemExceptionDelegate10_marshaled = NULL;
	____systemExceptionDelegate10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___systemExceptionDelegate10));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_DatabaseInternal)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#else
	il2cppPInvokeFunc(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#endif

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_m1E3DD77923D26076BDCC437546031FD2E46BECFC (ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* ___argumentDelegate0, ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* ___argumentNullDelegate1, ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* ___argumentOutOfRangeDelegate2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "SWIGRegisterExceptionArgumentCallbacks_DatabaseInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___argumentDelegate0' to native representation
	Il2CppMethodPointer ____argumentDelegate0_marshaled = NULL;
	____argumentDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentDelegate0));

	// Marshaling of parameter '___argumentNullDelegate1' to native representation
	Il2CppMethodPointer ____argumentNullDelegate1_marshaled = NULL;
	____argumentNullDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentNullDelegate1));

	// Marshaling of parameter '___argumentOutOfRangeDelegate2' to native representation
	Il2CppMethodPointer ____argumentOutOfRangeDelegate2_marshaled = NULL;
	____argumentOutOfRangeDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentOutOfRangeDelegate2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionArgumentCallbacks_DatabaseInternal)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#else
	il2cppPInvokeFunc(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#endif

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m6AA3E2F2D7A0DB5FED79929971F933DA5505DCA6 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m48781C21D2A2CFB7733420C2F22AE4090F31911A(NULL);
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_2 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mE04BC84D80E03615D1848E3BECB81FFC1DEFA8B8(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m1B0114F1FF108DD8F9F24FAA2DEA558A2A476CE7 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m48781C21D2A2CFB7733420C2F22AE4090F31911A(NULL);
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_2 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mE04BC84D80E03615D1848E3BECB81FFC1DEFA8B8(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mE0037D6F848F8109198782D1CB0EC665B93CADBE (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m48781C21D2A2CFB7733420C2F22AE4090F31911A(NULL);
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_2 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mE04BC84D80E03615D1848E3BECB81FFC1DEFA8B8(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA4DF0AADCFB529BEBF28F39CB07F6B636F58943C (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m48781C21D2A2CFB7733420C2F22AE4090F31911A(NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_2 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mE04BC84D80E03615D1848E3BECB81FFC1DEFA8B8(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m051BEC1EC3A1F4155DFC3BAAC2CA8B50D6331450 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m48781C21D2A2CFB7733420C2F22AE4090F31911A(NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mE04BC84D80E03615D1848E3BECB81FFC1DEFA8B8(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_mF487D4B9D07D3748558AC293890994D812342832 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m48781C21D2A2CFB7733420C2F22AE4090F31911A(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mE04BC84D80E03615D1848E3BECB81FFC1DEFA8B8(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m92618FD7111834C883EA889E2AC85EB3D30BF5E6 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m48781C21D2A2CFB7733420C2F22AE4090F31911A(NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_2 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mE04BC84D80E03615D1848E3BECB81FFC1DEFA8B8(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m3974F8FD7BD47ED2F2B0BA6D58112BCCC32C0589 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m48781C21D2A2CFB7733420C2F22AE4090F31911A(NULL);
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mE04BC84D80E03615D1848E3BECB81FFC1DEFA8B8(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_m7B23D85245D96EE43899EE092056F728040E3771 (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m48781C21D2A2CFB7733420C2F22AE4090F31911A(NULL);
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_2 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mE04BC84D80E03615D1848E3BECB81FFC1DEFA8B8(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mD0596E40CBDA959588CECC835BF96CC86932665F (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m48781C21D2A2CFB7733420C2F22AE4090F31911A(NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mE04BC84D80E03615D1848E3BECB81FFC1DEFA8B8(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m6C6A454591578F01371ABD3DA84BE953F76244FB (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m48781C21D2A2CFB7733420C2F22AE4090F31911A(NULL);
		SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* L_2 = (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295*)il2cpp_codegen_object_new(SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_mE04BC84D80E03615D1848E3BECB81FFC1DEFA8B8(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m59BE67CE8F1577CC55385DCC9E08727B63251377 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_m48781C21D2A2CFB7733420C2F22AE4090F31911A(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0(L_3, L_0, L_1, L_2, NULL);
		SWIGPendingException_Set_mE04BC84D80E03615D1848E3BECB81FFC1DEFA8B8(L_3, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_mCC1EA36499599E23BFB91C8EED857D5A52D7BF29 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	{
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_m48781C21D2A2CFB7733420C2F22AE4090F31911A(NULL);
		V_0 = L_0;
		Exception_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_4, NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_8 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ArgumentNullException__ctor_m6D9C7B47EA708382838B264BA02EBB7576DFA155(L_8, L_6, L_7, NULL);
		SWIGPendingException_Set_mE04BC84D80E03615D1848E3BECB81FFC1DEFA8B8(L_8, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_mD1053DCCFB4F7B20968576939CB7613412AE14D3 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	{
		Exception_t* L_0;
		L_0 = SWIGPendingException_Retrieve_m48781C21D2A2CFB7733420C2F22AE4090F31911A(NULL);
		V_0 = L_0;
		Exception_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_2, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_4, NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_8, L_6, L_7, NULL);
		SWIGPendingException_Set_mE04BC84D80E03615D1848E3BECB81FFC1DEFA8B8(L_8, NULL);
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
void ExceptionDelegate_Invoke_mB57FE9FA274AE13C28F98B7F61A152D11B034073_Multicast(ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* __this, String_t* ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* currentDelegate = reinterpret_cast<ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionDelegate_Invoke_mB57FE9FA274AE13C28F98B7F61A152D11B034073_Open(ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void ExceptionDelegate_Invoke_mB57FE9FA274AE13C28F98B7F61A152D11B034073_OpenStaticInvoker(ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
void ExceptionDelegate_Invoke_mB57FE9FA274AE13C28F98B7F61A152D11B034073_ClosedStaticInvoker(ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78 (ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m65CD1F48FF72A522CFAABFF2E74545D088C9EB48 (ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_mB57FE9FA274AE13C28F98B7F61A152D11B034073_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_mB57FE9FA274AE13C28F98B7F61A152D11B034073_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_mB57FE9FA274AE13C28F98B7F61A152D11B034073_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_mB57FE9FA274AE13C28F98B7F61A152D11B034073_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionDelegate_Invoke_mB57FE9FA274AE13C28F98B7F61A152D11B034073_Multicast;
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_mB57FE9FA274AE13C28F98B7F61A152D11B034073 (ExceptionDelegate_t66E568D150BA82A9E08BD9C1CF771E26A79E9B78* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ExceptionArgumentDelegate_Invoke_mCDB172EBD039BF2F3E36B1AC045320A062AB16AF_Multicast(ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* currentDelegate = reinterpret_cast<ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, ___paramName1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionArgumentDelegate_Invoke_mCDB172EBD039BF2F3E36B1AC045320A062AB16AF_Open(ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, ___paramName1, method);
}
void ExceptionArgumentDelegate_Invoke_mCDB172EBD039BF2F3E36B1AC045320A062AB16AF_OpenStaticInvoker(ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0, ___paramName1);
}
void ExceptionArgumentDelegate_Invoke_mCDB172EBD039BF2F3E36B1AC045320A062AB16AF_ClosedStaticInvoker(ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0, ___paramName1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590 (ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Marshaling of parameter '___paramName1' to native representation
	char* ____paramName1_marshaled = NULL;
	____paramName1_marshaled = il2cpp_codegen_marshal_string(___paramName1);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled, ____paramName1_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramName1' native representation
	il2cpp_codegen_marshal_free(____paramName1_marshaled);
	____paramName1_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m3CB756D662593F33880447E5CC38BFBF828A0A77 (ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_mCDB172EBD039BF2F3E36B1AC045320A062AB16AF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_mCDB172EBD039BF2F3E36B1AC045320A062AB16AF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_mCDB172EBD039BF2F3E36B1AC045320A062AB16AF_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_mCDB172EBD039BF2F3E36B1AC045320A062AB16AF_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionArgumentDelegate_Invoke_mCDB172EBD039BF2F3E36B1AC045320A062AB16AF_Multicast;
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_mCDB172EBD039BF2F3E36B1AC045320A062AB16AF (ExceptionArgumentDelegate_t268F356B2D0C0A1400B52B137A8E909FFF211590* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, ___paramName1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m38C2A3EA4E3B4C06C4251ABD631B669F9E45386A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)0;
		int32_t L_0 = ((SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_1 = ((SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_il2cpp_TypeInfo_var))->___pendingException_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0019:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_mE04BC84D80E03615D1848E3BECB81FFC1DEFA8B8 (Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Exception_t* L_0 = ((SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_il2cpp_TypeInfo_var))->___pendingException_0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t* L_1 = ((SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_il2cpp_TypeInfo_var))))->___pendingException_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), NULL);
		Exception_t* L_4 = ___e0;
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_5 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_5, L_3, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_mE04BC84D80E03615D1848E3BECB81FFC1DEFA8B8_RuntimeMethod_var)));
	}

IL_002a:
	{
		Exception_t* L_6 = ___e0;
		((SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_il2cpp_TypeInfo_var))->___pendingException_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_il2cpp_TypeInfo_var))->___pendingException_0), (void*)L_6);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		V_0 = L_8;
		RuntimeObject* L_9 = V_0;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_9, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				RuntimeObject* L_10 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_10, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			int32_t L_11 = ((SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
			goto IL_0059;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0059:
	{
		return;
	}
}
// System.Exception Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m48781C21D2A2CFB7733420C2F22AE4090F31911A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		V_0 = (Exception_t*)NULL;
		int32_t L_0 = ((SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Exception_t* L_1 = ((SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_il2cpp_TypeInfo_var))->___pendingException_0;
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t* L_2 = ((SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = L_2;
		((SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		V_1 = L_4;
		RuntimeObject* L_5 = V_1;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_5, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				RuntimeObject* L_6 = V_1;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_6, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			int32_t L_7 = ((SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0E2EB3FB160A57731FC1DB8A7929A1727D8E84F6_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
			goto IL_004c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004c:
	{
		Exception_t* L_8 = V_0;
		return L_8;
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m80327E39EB58F7F5540B06182DCB9004E4E14BB7(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_m80327E39EB58F7F5540B06182DCB9004E4E14BB7(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_mE49776244A976305A6B0B95FFC24DBC64EE7EABA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_m80327E39EB58F7F5540B06182DCB9004E4E14BB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_tA0DF34D3B373B908F56B3655662A20E7E27B4ACA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06* L_0 = (SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06*)il2cpp_codegen_object_new(SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGStringDelegate__ctor_m391698EA4A2E509AD2DAB97A9334F930FFD4EE1C(L_0, NULL, (intptr_t)((void*)SWIGStringHelper_CreateString_m80327E39EB58F7F5540B06182DCB9004E4E14BB7_RuntimeMethod_var), NULL);
		((SWIGStringHelper_tA0DF34D3B373B908F56B3655662A20E7E27B4ACA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tA0DF34D3B373B908F56B3655662A20E7E27B4ACA_il2cpp_TypeInfo_var))->___stringDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGStringHelper_tA0DF34D3B373B908F56B3655662A20E7E27B4ACA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tA0DF34D3B373B908F56B3655662A20E7E27B4ACA_il2cpp_TypeInfo_var))->___stringDelegate_0), (void*)L_0);
		SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06* L_1 = ((SWIGStringHelper_tA0DF34D3B373B908F56B3655662A20E7E27B4ACA_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_tA0DF34D3B373B908F56B3655662A20E7E27B4ACA_il2cpp_TypeInfo_var))->___stringDelegate_0;
		SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m40FCD11A43DD0D40622E48554E681DFD54C77E76(L_1, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m4AB21F56EA3861B447D71ACE15F748111EDE0C64 (SWIGStringHelper_tA0DF34D3B373B908F56B3655662A20E7E27B4ACA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m40FCD11A43DD0D40622E48554E681DFD54C77E76 (SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06* ___stringDelegate0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "SWIGRegisterStringCallback_DatabaseInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_DatabaseInternal)(____stringDelegate0_marshaled);
	#else
	il2cppPInvokeFunc(____stringDelegate0_marshaled);
	#endif

}
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m80327E39EB58F7F5540B06182DCB9004E4E14BB7 (String_t* ___cString0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___cString0;
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
String_t* SWIGStringDelegate_Invoke_mA5AB2C492228079C525DE27B80B49F194BBC83FA_Multicast(SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06* __this, String_t* ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	String_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06* currentDelegate = reinterpret_cast<SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06*>(delegatesToInvoke[i]);
		typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
String_t* SWIGStringDelegate_Invoke_mA5AB2C492228079C525DE27B80B49F194BBC83FA_Open(SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
String_t* SWIGStringDelegate_Invoke_mA5AB2C492228079C525DE27B80B49F194BBC83FA_OpenStaticInvoker(SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06* __this, String_t* ___message0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
String_t* SWIGStringDelegate_Invoke_mA5AB2C492228079C525DE27B80B49F194BBC83FA_ClosedStaticInvoker(SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06* __this, String_t* ___message0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< String_t*, RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06 (SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m391698EA4A2E509AD2DAB97A9334F930FFD4EE1C (SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_mA5AB2C492228079C525DE27B80B49F194BBC83FA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_mA5AB2C492228079C525DE27B80B49F194BBC83FA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_mA5AB2C492228079C525DE27B80B49F194BBC83FA_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_mA5AB2C492228079C525DE27B80B49F194BBC83FA_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SWIGStringDelegate_Invoke_mA5AB2C492228079C525DE27B80B49F194BBC83FA_Multicast;
}
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_mA5AB2C492228079C525DE27B80B49F194BBC83FA (SWIGStringDelegate_tF016BE221D27F3074D424EF26BAC0DA92CB7FB06* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.Internal.InternalDatabaseReference::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference__ctor_mD703FCC3BCBA9E2CA25A75A35AAD4401443F0644 (InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___cPtr0;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_InternalDatabaseReference_SWIGUpcast_m6A2F1AA8A576FCA74F81C623E9A3B7B72105B2E9(L_0, NULL);
		bool L_2 = ___cMemoryOwn1;
		InternalQuery__ctor_m892B8C4ADDCF77D96FC4323A38541505CC4CF064(__this, L_1, L_2, NULL);
		intptr_t L_3 = ___cPtr0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_4), __this, L_3, /*hidden argument*/NULL);
		__this->___swigCPtr_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_2))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalDatabaseReference::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference_Finalize_m66E5D7C1C36666194A5D8D1B206FB45085109B54 (InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				InternalQuery_Finalize_mB2815BC64F0A8F9D20136C0D0D4858276AA1EB76(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalQuery::Dispose() */, __this);
			goto IL_0012;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalDatabaseReference::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference_Dispose_m7CCF735B9CBC35B264A981356C61B77C3A254B02 (InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0065:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_3 = (&__this->___swigCPtr_2);
				intptr_t L_4;
				L_4 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_3, NULL);
				bool L_5;
				L_5 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_4, (0), NULL);
				if (!L_5)
				{
					goto IL_0054_1;
				}
			}
			{
				bool L_6 = ((InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196*)__this)->___swigCMemOwn_1;
				if (!L_6)
				{
					goto IL_0043_1;
				}
			}
			{
				((InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196*)__this)->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_7 = __this->___swigCPtr_2;
				il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
				DatabaseInternalPINVOKE_delete_InternalDatabaseReference_m56A2EDEA1D97AB2E002E09FC5CBA81470F6B0E61(L_7, NULL);
			}

IL_0043_1:
			{
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_8;
				memset((&L_8), 0, sizeof(L_8));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_8), NULL, (0), /*hidden argument*/NULL);
				__this->___swigCPtr_2 = L_8;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_2))->____wrapper_0), (void*)NULL);
			}

IL_0054_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
				InternalQuery_Dispose_mF188E49785E9505985E11DDB11617172F09B38B3(__this, NULL);
				goto IL_006c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006c:
	{
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalDatabaseReference::is_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalDatabaseReference_is_valid_m390C6DEE8DCFC3487F4A21B55AD3535F408AFB5D (InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = DatabaseInternalPINVOKE_InternalDatabaseReference_is_valid_m790EEA0283855D7D4881289A91349981613E7E03(L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDatabaseReference_is_valid_m390C6DEE8DCFC3487F4A21B55AD3535F408AFB5D_RuntimeMethod_var)));
	}

IL_001c:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Database.Internal.InternalDatabaseReference::url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDatabaseReference_url_m74610E82DC38D4A79AAC85BD23C518AAE24D7A19 (InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = DatabaseInternalPINVOKE_InternalDatabaseReference_url_m06AE5B0D6601DAA88183601F7225F3791D41051B(L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDatabaseReference_url_m74610E82DC38D4A79AAC85BD23C518AAE24D7A19_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
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
// System.Void Firebase.Database.Internal.InternalQuery::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery__ctor_m892B8C4ADDCF77D96FC4323A38541505CC4CF064 (InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___cPtr0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Finalize_mB2815BC64F0A8F9D20136C0D0D4858276AA1EB76 (InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* __this, const RuntimeMethod* method) 
{
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
			VirtualActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalQuery::Dispose() */, __this);
			goto IL_0012;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Dispose_mF188E49785E9505985E11DDB11617172F09B38B3 (InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_3 = (&__this->___swigCPtr_0);
				intptr_t L_4;
				L_4 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_3, NULL);
				bool L_5;
				L_5 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_4, (0), NULL);
				if (!L_5)
				{
					goto IL_0054_1;
				}
			}
			{
				bool L_6 = __this->___swigCMemOwn_1;
				if (!L_6)
				{
					goto IL_0043_1;
				}
			}
			{
				__this->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_7 = __this->___swigCPtr_0;
				il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
				DatabaseInternalPINVOKE_delete_InternalQuery_mAA36FD13954E5847FC7C81668C2B9752EA1C60E3(L_7, NULL);
			}

IL_0043_1:
			{
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_8;
				memset((&L_8), 0, sizeof(L_8));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_8), NULL, (0), /*hidden argument*/NULL);
				__this->___swigCPtr_0 = L_8;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			}

IL_0054_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot> Firebase.Database.Internal.InternalQuery::GetValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* InternalQuery_GetValueAsync_mDE0591F9BD98AC036E5967B4996F9C32175E613A (InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_InternalQuery_GetValue_mEDF9F65AFCB78F087EC31013AB7D6C70004432B0(L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_GetValueAsync_mDE0591F9BD98AC036E5967B4996F9C32175E613A_RuntimeMethod_var)));
	}

IL_001c:
	{
		intptr_t L_4 = V_0;
		Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* L_5 = (Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE*)il2cpp_codegen_object_new(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Future_InternalDataSnapshot__ctor_m6E96A12ED99B370C88B871C779AA2F58E2B2016B(L_5, L_4, (bool)1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var);
		Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* L_6;
		L_6 = Future_InternalDataSnapshot_GetTask_m4D698D63D66C032C3437379B76B8AE41A6319AE1(L_5, NULL);
		return L_6;
	}
}
// System.Boolean Firebase.Database.Internal.InternalQuery::is_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalQuery_is_valid_m9CD001108365F30A7897ABF7751996CFD78326C0 (InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = DatabaseInternalPINVOKE_InternalQuery_is_valid_mD381AC68C54C6E46CCA22A5E42618D2586FE0906(L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_is_valid_m9CD001108365F30A7897ABF7751996CFD78326C0_RuntimeMethod_var)));
	}

IL_001c:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyValueListener_m19812AA2089B447EE6E7A05F3B9D855A06F03FFD (intptr_t ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___listener0;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalQuery_DestroyValueListener_m1CC094DE40D4E4CB537A8B99A227A7FD289CD49D(L_0, NULL);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538(NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_DestroyValueListener_m19812AA2089B447EE6E7A05F3B9D855A06F03FFD_RuntimeMethod_var)));
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterValueListenerCallbacks_m4136C759B9EA145E1B75D2A6F700CBCCB6D0845C (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* ___cancelledCallback0, OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* ___valueChangedCallback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* L_0 = ___cancelledCallback0;
		OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* L_1 = ___valueChangedCallback1;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalQuery_RegisterValueListenerCallbacks_m5C207989234FA35BDCA59EC4826C84C4C0901AA4(L_0, L_1, NULL);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538(NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_RegisterValueListenerCallbacks_m4136C759B9EA145E1B75D2A6F700CBCCB6D0845C_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyChildListener_mB50FE32DFB49B8587269F89F2F02C1D91E7A6E64 (intptr_t ___listener0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___listener0;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalQuery_DestroyChildListener_m04A90A4AC7BB0EF7970A560AD6F642A678886775(L_0, NULL);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538(NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t* L_2;
		L_2 = SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_DestroyChildListener_mB50FE32DFB49B8587269F89F2F02C1D91E7A6E64_RuntimeMethod_var)));
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterChildListenerCallbacks_mFF7DE933A199D77FBC23376F3FB6D795E454D3E9 (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* ___cancelledCallback0, OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* ___childChangeCallback1, OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* ___childRemovedCallback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* L_0 = ___cancelledCallback0;
		OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* L_1 = ___childChangeCallback1;
		OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* L_2 = ___childRemovedCallback2;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalQuery_RegisterChildListenerCallbacks_mF471D02CC33FF2E517384E997A47F0362CA9EE30(L_0, L_1, L_2, NULL);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538(NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_RegisterChildListenerCallbacks_mFF7DE933A199D77FBC23376F3FB6D795E454D3E9_RuntimeMethod_var)));
	}

IL_0018:
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
// System.Void Firebase.Database.Internal.InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot__ctor_m4B612437CCFF2270A32351445BD34F910881AFBB (InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___cPtr0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalDataSnapshot::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot_Finalize_m8FC58754BBF9C8E86B899F9BB4BF741997073694 (InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* __this, const RuntimeMethod* method) 
{
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
			VirtualActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose() */, __this);
			goto IL_0012;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot_Dispose_mE3F14AACDF347045D740C373A8236CCE237AF57A (InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_3 = (&__this->___swigCPtr_0);
				intptr_t L_4;
				L_4 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_3, NULL);
				bool L_5;
				L_5 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_4, (0), NULL);
				if (!L_5)
				{
					goto IL_0054_1;
				}
			}
			{
				bool L_6 = __this->___swigCMemOwn_1;
				if (!L_6)
				{
					goto IL_0043_1;
				}
			}
			{
				__this->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_7 = __this->___swigCPtr_0;
				il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
				DatabaseInternalPINVOKE_delete_InternalDataSnapshot_mF281CC6A2A2B5F1A2835BA382CC1657ADC76B7B5(L_7, NULL);
			}

IL_0043_1:
			{
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_8;
				memset((&L_8), 0, sizeof(L_8));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_8), NULL, (0), /*hidden argument*/NULL);
				__this->___swigCPtr_0 = L_8;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			}

IL_0054_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		return;
	}
}
// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.Internal.InternalDataSnapshot::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* InternalDataSnapshot_Child_mBF5A8FD2325A4C76C65213DFF3DF01A8A3DF5D1F (InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = DatabaseInternalPINVOKE_InternalDataSnapshot_Child__SWIG_0_m3E48060136916A0ED620EC5B3200E2EB4E8D48E3(L_0, L_1, NULL);
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_3 = (InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A*)il2cpp_codegen_object_new(InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InternalDataSnapshot__ctor_m4B612437CCFF2270A32351445BD34F910881AFBB(L_3, L_2, (bool)1, NULL);
		V_0 = L_3;
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538(NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshot_Child_mBF5A8FD2325A4C76C65213DFF3DF01A8A3DF5D1F_RuntimeMethod_var)));
	}

IL_0023:
	{
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_6 = V_0;
		return L_6;
	}
}
// System.String Firebase.Database.Internal.InternalDataSnapshot::key_string()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDataSnapshot_key_string_m1A510FDFBD689DCEFD22A223AEB1F66449566EBE (InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = DatabaseInternalPINVOKE_InternalDataSnapshot_key_string_m2731AD9605628654AC4FCE12AA00F16C34ECF5A5(L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshot_key_string_m1A510FDFBD689DCEFD22A223AEB1F66449566EBE_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// Firebase.Variant Firebase.Database.Internal.InternalDataSnapshot::value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* InternalDataSnapshot_value_m394E5BB7C642E4687D677B249DFAA622338E0268 (InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_InternalDataSnapshot_value_mF3B841957DEEAD694ECABD83C8335AD029355295(L_0, NULL);
		Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* L_2 = (Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C*)il2cpp_codegen_object_new(Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Variant__ctor_mCBCDC0D6E1290E1A8412B59A4A8956BC32DFA163(L_2, L_1, (bool)1, NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538(NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshot_value_m394E5BB7C642E4687D677B249DFAA622338E0268_RuntimeMethod_var)));
	}

IL_0022:
	{
		Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* L_5 = V_0;
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
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase__ctor_m695FDAC34F083A04FF70599C4937DFA5BEA59B1E (InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->___swigCMemOwn_1 = L_0;
		intptr_t L_1 = ___cPtr0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->___swigCPtr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalFirebaseDatabase::getCPtr(Firebase.Database.Internal.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F InternalFirebaseDatabase_getCPtr_mFC95394C0ABA2F7B7F2A4AF971175BA0152F5261 (InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_1), NULL, (0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_3 = L_2->___swigCPtr_0;
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_Finalize_m233B25AE0C8C8DEFDDD68DBC8C4CE301A546B7E7 (InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* __this, const RuntimeMethod* method) 
{
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
			VirtualActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalFirebaseDatabase::Dispose() */, __this);
			goto IL_0012;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_Dispose_mBFD75C4B28DDBC3BD3FDED05E6B2184DA78B43C3 (InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0035:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			InternalFirebaseDatabase_ReleaseReferenceInternal_m8DC83753EB17E0D0A96EC83A15240D56E44B6073(__this, NULL);
			__this->___swigCMemOwn_1 = (bool)0;
			HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_3;
			memset((&L_3), 0, sizeof(L_3));
			HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_3), NULL, (0), /*hidden argument*/NULL);
			__this->___swigCPtr_0 = L_3;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_0))->____wrapper_0), (void*)NULL);
			il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
			goto IL_003c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		return;
	}
}
// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.Internal.InternalFirebaseDatabase::GetReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904* InternalFirebaseDatabase_GetReference_m86E6F0EF9294C4DB543B3248639B3EF2AF2E2D49 (InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		String_t* L_1 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetReference__SWIG_1_m00BFF8CEE8B5E662E8DAC6E1FDA19B28F8D74D05(L_0, L_1, NULL);
		InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904* L_3 = (InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904*)il2cpp_codegen_object_new(InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InternalDatabaseReference__ctor_mD703FCC3BCBA9E2CA25A75A35AAD4401443F0644(L_3, L_2, (bool)1, NULL);
		V_0 = L_3;
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538(NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalFirebaseDatabase_GetReference_m86E6F0EF9294C4DB543B3248639B3EF2AF2E2D49_RuntimeMethod_var)));
	}

IL_0023:
	{
		InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904* L_6 = V_0;
		return L_6;
	}
}
// Firebase.Database.Internal.InternalFirebaseDatabase Firebase.Database.Internal.InternalFirebaseDatabase::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* InternalFirebaseDatabase_GetInstanceInternal_mB1861CC018AC59029C70B833973F1218B8A3C767 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___app0, String_t* ___url1, int32_t* ___init_result_out2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* V_2 = NULL;
	InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* V_3 = NULL;
	InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* G_B4_0 = NULL;
	{
		V_0 = 0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0046:
			{// begin finally (depth: 1)
				int32_t* L_0 = ___init_result_out2;
				int32_t L_1 = V_0;
				*((int32_t*)L_0) = (int32_t)L_1;
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_2 = ___app0;
				il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_3;
				L_3 = FirebaseApp_getCPtr_mCF6551417C0F1D98798ED7810553EBD977381D16(L_2, NULL);
				String_t* L_4 = ___url1;
				il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
				intptr_t L_5;
				L_5 = DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetInstanceInternal_mD2A542BAAB350575811FA946A188EDF594F5E7FA(L_3, L_4, (&V_0), NULL);
				V_1 = L_5;
				intptr_t L_6 = V_1;
				bool L_7;
				L_7 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_6, (0), NULL);
				if (!L_7)
				{
					goto IL_0027_1;
				}
			}
			{
				G_B4_0 = ((InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B*)(NULL));
				goto IL_002e_1;
			}

IL_0027_1:
			{
				intptr_t L_8 = V_1;
				InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* L_9 = (InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B*)il2cpp_codegen_object_new(InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				InternalFirebaseDatabase__ctor_m695FDAC34F083A04FF70599C4937DFA5BEA59B1E(L_9, L_8, (bool)0, NULL);
				G_B4_0 = L_9;
			}

IL_002e_1:
			{
				V_2 = G_B4_0;
				bool L_10;
				L_10 = SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538(NULL);
				if (!L_10)
				{
					goto IL_003f_1;
				}
			}
			{
				Exception_t* L_11;
				L_11 = SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF(NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalFirebaseDatabase_GetInstanceInternal_mB1861CC018AC59029C70B833973F1218B8A3C767_RuntimeMethod_var)));
			}

IL_003f_1:
			{
				InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* L_12 = V_2;
				V_3 = L_12;
				goto IL_004a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* L_13 = V_3;
		return L_13;
	}
}
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::ReleaseReferenceInternal(Firebase.Database.Internal.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_ReleaseReferenceInternal_m8DC83753EB17E0D0A96EC83A15240D56E44B6073 (InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* L_0 = ___instance0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		L_1 = InternalFirebaseDatabase_getCPtr_mFC95394C0ABA2F7B7F2A4AF971175BA0152F5261(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalFirebaseDatabase_ReleaseReferenceInternal_m497C77570C374BC498AE8B43AA368B7F62C5CB72(L_1, NULL);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538(NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalFirebaseDatabase_ReleaseReferenceInternal_m8DC83753EB17E0D0A96EC83A15240D56E44B6073_RuntimeMethod_var)));
	}

IL_001b:
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Future_InternalDataSnapshot_SWIG_CompletionDispatcher_mC51964F35F1CC1E89E2F2F27868A2A800847DC7D(int32_t ___key0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Future_InternalDataSnapshot_SWIG_CompletionDispatcher_mC51964F35F1CC1E89E2F2F27868A2A800847DC7D(___key0, NULL);

}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot__ctor_m6E96A12ED99B370C88B871C779AA2F58E2B2016B (Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___callbackData_6 = (0);
		intptr_t L_0 = ___cPtr0;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIGUpcast_m0A866554DE2531C44C98F7F0E864E2EFE14C3B0C(L_0, NULL);
		bool L_2 = ___cMemoryOwn1;
		FutureBase__ctor_m98C8AE4F030730C1CEE7E0B4A1816C623F2B9BE0(__this, L_1, L_2, NULL);
		intptr_t L_3 = ___cPtr0;
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_4), __this, L_3, /*hidden argument*/NULL);
		__this->___swigCPtr_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_2))->____wrapper_0), (void*)NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_Finalize_m2DAFB1C5C7DC708FFDFA81B6D417FD3102C0994F (Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				FutureBase_Finalize_m9CD99D25C0199A337732E16288ABCE051A4D5CB7(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker0::Invoke(5 /* System.Void Firebase.FutureBase::Dispose() */, __this);
			goto IL_0012;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_Dispose_mA1E1337C593E6502C187CAFBBEC938799726D4D6 (Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var))->___disposeLock_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0070:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_3 = (&__this->___swigCPtr_2);
				intptr_t L_4;
				L_4 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_3, NULL);
				bool L_5;
				L_5 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_4, (0), NULL);
				if (!L_5)
				{
					goto IL_005f_1;
				}
			}
			{
				Future_InternalDataSnapshot_SetCompletionData_m69A013C6FB723BDBF844FEF27E2BC26EB0544BAB(__this, (0), NULL);
				bool L_6 = ((FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36*)__this)->___swigCMemOwn_1;
				if (!L_6)
				{
					goto IL_004e_1;
				}
			}
			{
				((FutureBase_tF38FE6B48C073E6DAD0949D535A166EE13CCAA36*)__this)->___swigCMemOwn_1 = (bool)0;
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_7 = __this->___swigCPtr_2;
				il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
				DatabaseInternalPINVOKE_delete_Future_InternalDataSnapshot_mC76F3471BF57583E096DF0C1E77CF17032FDDED1(L_7, NULL);
			}

IL_004e_1:
			{
				HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_8;
				memset((&L_8), 0, sizeof(L_8));
				HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_8), NULL, (0), /*hidden argument*/NULL);
				__this->___swigCPtr_2 = L_8;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___swigCPtr_2))->____wrapper_0), (void*)NULL);
			}

IL_005f_1:
			{
				il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
				GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
				FutureBase_Dispose_m32193D02DE4608C6C3EDF42F3D0495707DA4D15E(__this, NULL);
				goto IL_0077;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0077:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot> Firebase.Database.Internal.Future_InternalDataSnapshot::GetTask(Firebase.Database.Internal.Future_InternalDataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* Future_InternalDataSnapshot_GetTask_m4D698D63D66C032C3437379B76B8AE41A6319AE1 (Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* ___fu0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m4C441325C72389157FFB503F944E74DF223AC318_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mAD94C8B5854A3756EDD03BB447A1F1722ACED6F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m50532B9F3E3B251176843C6B9E5600D13B1B5998_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m792975E491E7E8FF9AFEF0C2D6287B9EA8711232_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C* V_0 = NULL;
	{
		U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C* L_0 = (U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C*)il2cpp_codegen_object_new(U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetTaskU3Ec__AnonStorey0__ctor_m4611A28FE15344B8BBB14AD90E3902748531A365(L_0, NULL);
		V_0 = L_0;
		U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C* L_1 = V_0;
		Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* L_2 = ___fu0;
		NullCheck(L_1);
		L_1->___fu_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fu_0), (void*)L_2);
		U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C* L_3 = V_0;
		TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478* L_4 = (TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478*)il2cpp_codegen_object_new(TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TaskCompletionSource_1__ctor_mAD94C8B5854A3756EDD03BB447A1F1722ACED6F2(L_4, TaskCompletionSource_1__ctor_mAD94C8B5854A3756EDD03BB447A1F1722ACED6F2_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->___tcs_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___tcs_1), (void*)L_4);
		bool L_5;
		L_5 = SWIGPendingException_get_Pending_m38C2A3EA4E3B4C06C4251ABD631B669F9E45386A(NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C* L_6 = V_0;
		NullCheck(L_6);
		TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478* L_7 = L_6->___tcs_1;
		Exception_t* L_8;
		L_8 = SWIGPendingException_Retrieve_m48781C21D2A2CFB7733420C2F22AE4090F31911A(NULL);
		NullCheck(L_7);
		TaskCompletionSource_1_SetException_m4C441325C72389157FFB503F944E74DF223AC318(L_7, L_8, TaskCompletionSource_1_SetException_m4C441325C72389157FFB503F944E74DF223AC318_RuntimeMethod_var);
		U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C* L_9 = V_0;
		NullCheck(L_9);
		TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478* L_10 = L_9->___tcs_1;
		NullCheck(L_10);
		Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* L_11;
		L_11 = TaskCompletionSource_1_get_Task_m50532B9F3E3B251176843C6B9E5600D13B1B5998_inline(L_10, TaskCompletionSource_1_get_Task_m50532B9F3E3B251176843C6B9E5600D13B1B5998_RuntimeMethod_var);
		return L_11;
	}

IL_003e:
	{
		U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C* L_12 = V_0;
		NullCheck(L_12);
		Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* L_13 = L_12->___fu_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = FutureBase_status_mC75FD35438B176F95462D3A5D7D9194629211902(L_13, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_0071;
		}
	}
	{
		U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C* L_15 = V_0;
		NullCheck(L_15);
		TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478* L_16 = L_15->___tcs_1;
		FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* L_17 = (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED*)il2cpp_codegen_object_new(FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		FirebaseException__ctor_m18D67DA955D2B4EA2BC58BCE0E96AC0A177DD70F(L_17, 0, _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18, NULL);
		NullCheck(L_16);
		TaskCompletionSource_1_SetException_m4C441325C72389157FFB503F944E74DF223AC318(L_16, L_17, TaskCompletionSource_1_SetException_m4C441325C72389157FFB503F944E74DF223AC318_RuntimeMethod_var);
		U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C* L_18 = V_0;
		NullCheck(L_18);
		TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478* L_19 = L_18->___tcs_1;
		NullCheck(L_19);
		Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* L_20;
		L_20 = TaskCompletionSource_1_get_Task_m50532B9F3E3B251176843C6B9E5600D13B1B5998_inline(L_19, TaskCompletionSource_1_get_Task_m50532B9F3E3B251176843C6B9E5600D13B1B5998_RuntimeMethod_var);
		return L_20;
	}

IL_0071:
	{
		U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C* L_21 = V_0;
		NullCheck(L_21);
		Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* L_22 = L_21->___fu_0;
		U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C* L_23 = V_0;
		Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA* L_24 = (Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA*)il2cpp_codegen_object_new(Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Action__ctor_mA6ED19E45A376E7AA2F35274CAE9C1E172526532(L_24, L_23, (intptr_t)((void*)U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m792975E491E7E8FF9AFEF0C2D6287B9EA8711232_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		Future_InternalDataSnapshot_SetOnCompletionCallback_m0B2B8F60AA575E53074451D5DE0B122A78B368B2(L_22, L_24, NULL);
		U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C* L_25 = V_0;
		NullCheck(L_25);
		TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478* L_26 = L_25->___tcs_1;
		NullCheck(L_26);
		Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* L_27;
		L_27 = TaskCompletionSource_1_get_Task_m50532B9F3E3B251176843C6B9E5600D13B1B5998_inline(L_26, TaskCompletionSource_1_get_Task_m50532B9F3E3B251176843C6B9E5600D13B1B5998_RuntimeMethod_var);
		return L_27;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_ThrowIfDisposed_mC3DB98C44BBD94737696260E987D0DB82A03E622 (Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* L_0 = (&__this->___swigCPtr_2);
		intptr_t L_1;
		L_1 = HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline(L_0, NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_InternalDataSnapshot_ThrowIfDisposed_mC3DB98C44BBD94737696260E987D0DB82A03E622_RuntimeMethod_var)));
	}

IL_0025:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SetOnCompletionCallback(Firebase.Database.Internal.Future_InternalDataSnapshot/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SetOnCompletionCallback_m0B2B8F60AA575E53074451D5DE0B122A78B368B2 (Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* __this, Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA* ___userCompletionCallback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD91357EC8988FB0B254FDF284C6AF51DF2F221A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m09C3BDF6FA0D1167CE63A80BEB1C1525189B5671_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_SWIG_CompletionDispatcher_mC51964F35F1CC1E89E2F2F27868A2A800847DC7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		Future_InternalDataSnapshot_ThrowIfDisposed_mC3DB98C44BBD94737696260E987D0DB82A03E622(__this, NULL);
		SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570* L_0 = __this->___SWIG_CompletionCB_7;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570* L_1 = (SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570*)il2cpp_codegen_object_new(SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SWIG_CompletionDelegate__ctor_mB602492E0889BF6CE746A72DA9CBAFAF71837F00(L_1, NULL, (intptr_t)((void*)Future_InternalDataSnapshot_SWIG_CompletionDispatcher_mC51964F35F1CC1E89E2F2F27868A2A800847DC7D_RuntimeMethod_var), NULL);
		__this->___SWIG_CompletionCB_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SWIG_CompletionCB_7), (void*)L_1);
	}

IL_0023:
	{
		il2cpp_codegen_runtime_class_init_inline(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var))->___CallbackLock_5;
		V_1 = L_2;
		RuntimeObject* L_3 = V_1;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_3, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{// begin finally (depth: 1)
				RuntimeObject* L_4 = V_1;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_4, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var);
				Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449* L_5 = ((Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var))->___Callbacks_3;
				if (L_5)
				{
					goto IL_0043_1;
				}
			}
			{
				Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449* L_6 = (Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449*)il2cpp_codegen_object_new(Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				Dictionary_2__ctor_mD91357EC8988FB0B254FDF284C6AF51DF2F221A1(L_6, Dictionary_2__ctor_mD91357EC8988FB0B254FDF284C6AF51DF2F221A1_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var);
				((Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var))->___Callbacks_3 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&((Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var))->___Callbacks_3), (void*)L_6);
			}

IL_0043_1:
			{
				il2cpp_codegen_runtime_class_init_inline(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var);
				int32_t L_7 = ((Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var))->___CallbackIndex_4;
				int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
				((Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var))->___CallbackIndex_4 = L_8;
				V_0 = L_8;
				Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449* L_9 = ((Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var))->___Callbacks_3;
				int32_t L_10 = V_0;
				Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA* L_11 = ___userCompletionCallback0;
				NullCheck(L_9);
				Dictionary_2_set_Item_m09C3BDF6FA0D1167CE63A80BEB1C1525189B5671(L_9, L_10, L_11, Dictionary_2_set_Item_m09C3BDF6FA0D1167CE63A80BEB1C1525189B5671_RuntimeMethod_var);
				goto IL_0069;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570* L_12 = __this->___SWIG_CompletionCB_7;
		int32_t L_13 = V_0;
		intptr_t L_14;
		L_14 = Future_InternalDataSnapshot_SWIG_OnCompletion_m8069B6840E23CDE50DDE78E3844B1D1AEEAEF5C0(__this, L_12, L_13, NULL);
		Future_InternalDataSnapshot_SetCompletionData_m69A013C6FB723BDBF844FEF27E2BC26EB0544BAB(__this, L_14, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SetCompletionData_m69A013C6FB723BDBF844FEF27E2BC26EB0544BAB (Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* __this, intptr_t ___data0, const RuntimeMethod* method) 
{
	{
		Future_InternalDataSnapshot_ThrowIfDisposed_mC3DB98C44BBD94737696260E987D0DB82A03E622(__this, NULL);
		intptr_t L_0 = __this->___callbackData_6;
		Future_InternalDataSnapshot_SWIG_FreeCompletionData_mF96504CC68D810F2185F2C3961CE4D0639B228A5(__this, L_0, NULL);
		intptr_t L_1 = ___data0;
		__this->___callbackData_6 = L_1;
		return;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SWIG_CompletionDispatcher_mC51964F35F1CC1E89E2F2F27868A2A800847DC7D (int32_t ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mB4B7A8724399169A1579ABA27E169A81A4A29ECF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m53367B0B4553F9BAB8EC05A26C50D7088F40FA17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		V_0 = (Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA*)NULL;
		il2cpp_codegen_runtime_class_init_inline(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var))->___CallbackLock_5;
		V_1 = L_0;
		RuntimeObject* L_1 = V_1;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_1;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var);
				Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449* L_3 = ((Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var))->___Callbacks_3;
				if (!L_3)
				{
					goto IL_0036_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var);
				Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449* L_4 = ((Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var))->___Callbacks_3;
				int32_t L_5 = ___key0;
				NullCheck(L_4);
				bool L_6;
				L_6 = Dictionary_2_TryGetValue_m53367B0B4553F9BAB8EC05A26C50D7088F40FA17(L_4, L_5, (&V_0), Dictionary_2_TryGetValue_m53367B0B4553F9BAB8EC05A26C50D7088F40FA17_RuntimeMethod_var);
				if (!L_6)
				{
					goto IL_0036_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var);
				Dictionary_2_tE5C352B3CB368EB0A9B137276072B90D09055449* L_7 = ((Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var))->___Callbacks_3;
				int32_t L_8 = ___key0;
				NullCheck(L_7);
				bool L_9;
				L_9 = Dictionary_2_Remove_mB4B7A8724399169A1579ABA27E169A81A4A29ECF(L_7, L_8, Dictionary_2_Remove_mB4B7A8724399169A1579ABA27E169A81A4A29ECF_RuntimeMethod_var);
			}

IL_0036_1:
			{
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA* L_10 = V_0;
		if (!L_10)
		{
			goto IL_004e;
		}
	}
	{
		Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA* L_11 = V_0;
		NullCheck(L_11);
		Action_Invoke_m5E846E072C7551A5B7382CBFFE1BB3C990FB9FA1_inline(L_11, NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.IntPtr Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_OnCompletion(Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_InternalDataSnapshot_SWIG_OnCompletion_m8069B6840E23CDE50DDE78E3844B1D1AEEAEF5C0 (Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* __this, SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570* ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570* L_1 = ___cs_callback0;
		int32_t L_2 = ___cs_key1;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIG_OnCompletion_mB16DB05A8E2B101C200CA5C0FE9E150E6BF59D48(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538(NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		Exception_t* L_5;
		L_5 = SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_InternalDataSnapshot_SWIG_OnCompletion_m8069B6840E23CDE50DDE78E3844B1D1AEEAEF5C0_RuntimeMethod_var)));
	}

IL_001e:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SWIG_FreeCompletionData_mF96504CC68D810F2185F2C3961CE4D0639B228A5 (Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* __this, intptr_t ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		intptr_t L_1 = ___data0;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIG_FreeCompletionData_m678F5EE9E7D3D1A8798AF1D1E085630E54101DFF(L_0, L_1, NULL);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538(NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t* L_3;
		L_3 = SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_InternalDataSnapshot_SWIG_FreeCompletionData_mF96504CC68D810F2185F2C3961CE4D0639B228A5_RuntimeMethod_var)));
	}

IL_001c:
	{
		return;
	}
}
// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.Internal.Future_InternalDataSnapshot::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* Future_InternalDataSnapshot_GetResult_m660A2334845A8C0B42377DC9ED88FFFA911C7523 (Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_2;
		il2cpp_codegen_runtime_class_init_inline(DatabaseInternalPINVOKE_tA205E23066F7511D119B1147C03B058160B56E50_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_Future_InternalDataSnapshot_GetResult_m486C7EF7C3890191F3B7120653248B2CA10C7A56(L_0, NULL);
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_2 = (InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A*)il2cpp_codegen_object_new(InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InternalDataSnapshot__ctor_m4B612437CCFF2270A32351445BD34F910881AFBB(L_2, L_1, (bool)1, NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538(NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t* L_4;
		L_4 = SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_InternalDataSnapshot_GetResult_m660A2334845A8C0B42377DC9ED88FFFA911C7523_RuntimeMethod_var)));
	}

IL_0022:
	{
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_5 = V_0;
		return L_5;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot__cctor_m0EAD8896B95F937E5B7BE33F97F6DF4913971482 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var))->___CallbackIndex_4 = 0;
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var))->___CallbackLock_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE_il2cpp_TypeInfo_var))->___CallbackLock_5), (void*)L_0);
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
void Action_Invoke_m5E846E072C7551A5B7382CBFFE1BB3C990FB9FA1_Multicast(Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA* currentDelegate = reinterpret_cast<Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Action_Invoke_m5E846E072C7551A5B7382CBFFE1BB3C990FB9FA1_Open(Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void Action_Invoke_m5E846E072C7551A5B7382CBFFE1BB3C990FB9FA1_OpenStaticInvoker(Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void Action_Invoke_m5E846E072C7551A5B7382CBFFE1BB3C990FB9FA1_ClosedStaticInvoker(Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA (Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mA6ED19E45A376E7AA2F35274CAE9C1E172526532 (Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Action_Invoke_m5E846E072C7551A5B7382CBFFE1BB3C990FB9FA1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Action_Invoke_m5E846E072C7551A5B7382CBFFE1BB3C990FB9FA1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Action_Invoke_m5E846E072C7551A5B7382CBFFE1BB3C990FB9FA1_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&Action_Invoke_m5E846E072C7551A5B7382CBFFE1BB3C990FB9FA1_Multicast;
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m5E846E072C7551A5B7382CBFFE1BB3C990FB9FA1 (Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SWIG_CompletionDelegate_Invoke_m71D30A5A5BBB156BE82B4E553015647F9698055E_Multicast(SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570* __this, int32_t ___index0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570* currentDelegate = reinterpret_cast<SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___index0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SWIG_CompletionDelegate_Invoke_m71D30A5A5BBB156BE82B4E553015647F9698055E_Open(SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570* __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___index0, method);
}
void SWIG_CompletionDelegate_Invoke_m71D30A5A5BBB156BE82B4E553015647F9698055E_OpenStaticInvoker(SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570* __this, int32_t ___index0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___index0);
}
void SWIG_CompletionDelegate_Invoke_m71D30A5A5BBB156BE82B4E553015647F9698055E_ClosedStaticInvoker(SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570* __this, int32_t ___index0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___index0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570 (SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570* __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___index0);

}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_mB602492E0889BF6CE746A72DA9CBAFAF71837F00 (SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIG_CompletionDelegate_Invoke_m71D30A5A5BBB156BE82B4E553015647F9698055E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SWIG_CompletionDelegate_Invoke_m71D30A5A5BBB156BE82B4E553015647F9698055E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIG_CompletionDelegate_Invoke_m71D30A5A5BBB156BE82B4E553015647F9698055E_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&SWIG_CompletionDelegate_Invoke_m71D30A5A5BBB156BE82B4E553015647F9698055E_Multicast;
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_Invoke_m71D30A5A5BBB156BE82B4E553015647F9698055E (SWIG_CompletionDelegate_tE3E56127D62A185FB2012829CF3E1C4E16568570* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___index0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_m4611A28FE15344B8BBB14AD90E3902748531A365 (U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m792975E491E7E8FF9AFEF0C2D6287B9EA8711232 (U3CGetTaskU3Ec__AnonStorey0_t1D7DC16DD4F01DA2F0A4E8F0744440F68BA5882C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetCanceled_mDF601C30BA8FCDF4FC440B757A9F749DF3318EC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m4C441325C72389157FFB503F944E74DF223AC318_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mEC233493779A41449F7F7F244785E2C92DEDDE43_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* L_0 = __this->___fu_0;
			NullCheck(L_0);
			int32_t L_1;
			L_1 = FutureBase_status_mC75FD35438B176F95462D3A5D7D9194629211902(L_0, NULL);
			if ((!(((uint32_t)L_1) == ((uint32_t)2))))
			{
				goto IL_0021_1;
			}
		}
		{
			TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478* L_2 = __this->___tcs_1;
			NullCheck(L_2);
			TaskCompletionSource_1_SetCanceled_mDF601C30BA8FCDF4FC440B757A9F749DF3318EC8(L_2, TaskCompletionSource_1_SetCanceled_mDF601C30BA8FCDF4FC440B757A9F749DF3318EC8_RuntimeMethod_var);
			goto IL_006a_1;
		}

IL_0021_1:
		{
			Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* L_3 = __this->___fu_0;
			NullCheck(L_3);
			int32_t L_4;
			L_4 = FutureBase_error_m47E3B5E0A43B4C19510A77B3658EE5D7D10B6030(L_3, NULL);
			V_0 = L_4;
			int32_t L_5 = V_0;
			if (!L_5)
			{
				goto IL_0054_1;
			}
		}
		{
			TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478* L_6 = __this->___tcs_1;
			int32_t L_7 = V_0;
			Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* L_8 = __this->___fu_0;
			NullCheck(L_8);
			String_t* L_9;
			L_9 = FutureBase_error_message_m5CC18319253B1ECC3C8AC675B213A08B1755D527(L_8, NULL);
			FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED* L_10 = (FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED*)il2cpp_codegen_object_new(FirebaseException_t9E9B64098EF276E794C8CFFFA87E23904F33F3ED_il2cpp_TypeInfo_var);
			NullCheck(L_10);
			FirebaseException__ctor_m18D67DA955D2B4EA2BC58BCE0E96AC0A177DD70F(L_10, L_7, L_9, NULL);
			NullCheck(L_6);
			TaskCompletionSource_1_SetException_m4C441325C72389157FFB503F944E74DF223AC318(L_6, L_10, TaskCompletionSource_1_SetException_m4C441325C72389157FFB503F944E74DF223AC318_RuntimeMethod_var);
			goto IL_006a_1;
		}

IL_0054_1:
		{
			TaskCompletionSource_1_t09AC0D856805573AC8C10C3AEC843E5711DBB478* L_11 = __this->___tcs_1;
			Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* L_12 = __this->___fu_0;
			NullCheck(L_12);
			InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_13;
			L_13 = Future_InternalDataSnapshot_GetResult_m660A2334845A8C0B42377DC9ED88FFFA911C7523(L_12, NULL);
			NullCheck(L_11);
			TaskCompletionSource_1_SetResult_mEC233493779A41449F7F7F244785E2C92DEDDE43(L_11, L_13, TaskCompletionSource_1_SetResult_mEC233493779A41449F7F7F244785E2C92DEDDE43_RuntimeMethod_var);
		}

IL_006a_1:
		{
			goto IL_0086;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006f;
		}
		throw e;
	}

CATCH_006f:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_14 = V_1;
		String_t* L_15;
		L_15 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F)), L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogUtil_t004F911611FD3AE3085F5CA8159A798C3CA16D39_il2cpp_TypeInfo_var)));
		LogUtil_LogMessage_m59195C58FF0FC63681CED394EB6618F03A25B3B4(4, L_15, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0086;
	}// end catch (depth: 1)

IL_0086:
	{
		Future_InternalDataSnapshot_t50B6681C15AC0A05E0D89B8776CCEC376C34C2DE* L_16 = __this->___fu_0;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(5 /* System.Void Firebase.FutureBase::Dispose() */, L_16);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalValueListener_OnValueChangedHandler_m2A2BF51A5F938DDB9E2520CF96860D3C68EA807E(int32_t ___callbackId0, intptr_t ___snapshot1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	InternalValueListener_OnValueChangedHandler_m2A2BF51A5F938DDB9E2520CF96860D3C68EA807E(___callbackId0, ___snapshot1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalValueListener_OnCancelledHandler_m127FC5F9C160C6E8B376C1F85904A1B0C2371193(int32_t ___callbackId0, int32_t ___error1, char* ___msg2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___msg2' to managed representation
	String_t* ____msg2_unmarshaled = NULL;
	____msg2_unmarshaled = il2cpp_codegen_marshal_string_result(___msg2);

	// Managed method invocation
	InternalValueListener_OnCancelledHandler_m127FC5F9C160C6E8B376C1F85904A1B0C2371193(___callbackId0, ___error1, ____msg2_unmarshaled, NULL);

}
// System.Void Firebase.Database.Internal.InternalValueListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener__cctor_m7DB122596741CB940BA6FDEC0B1FEFBA204D4E4E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_OnCancelledHandler_m127FC5F9C160C6E8B376C1F85904A1B0C2371193_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_OnValueChangedHandler_m2A2BF51A5F938DDB9E2520CF96860D3C68EA807E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* G_B4_0 = NULL;
	OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* G_B3_0 = NULL;
	{
		OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* L_0 = ((InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_8;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* L_1 = (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0*)il2cpp_codegen_object_new(OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OnCancelledDelegate__ctor_m7D5FD1E072A9031443448E5D582E23D8015B808B(L_1, NULL, (intptr_t)((void*)InternalValueListener_OnCancelledHandler_m127FC5F9C160C6E8B376C1F85904A1B0C2371193_RuntimeMethod_var), NULL);
		((InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_8), (void*)L_1);
	}

IL_0018:
	{
		OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* L_2 = ((InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_8;
		OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* L_3 = ((InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_9;
		G_B3_0 = L_2;
		if (L_3)
		{
			G_B4_0 = L_2;
			goto IL_0035;
		}
	}
	{
		OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* L_4 = (OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D*)il2cpp_codegen_object_new(OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		OnValueChangedDelegate__ctor_m80BF259A3B5530546C3765A0D9822B7F76644BE4(L_4, NULL, (intptr_t)((void*)InternalValueListener_OnValueChangedHandler_m2A2BF51A5F938DDB9E2520CF96860D3C68EA807E_RuntimeMethod_var), NULL);
		((InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_9), (void*)L_4);
		G_B4_0 = G_B3_0;
	}

IL_0035:
	{
		OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* L_5 = ((InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_9;
		InternalQuery_RegisterValueListenerCallbacks_m4136C759B9EA145E1B75D2A6F700CBCCB6D0845C(G_B4_0, L_5, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener__ctor_mAC548AECF68F334C19E043AC711D16BEABA61499 (InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* __this, InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* ___internalQuery0, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___eventLock_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventLock_3), (void*)L_0);
		__this->___cppListener_5 = (0);
		il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		InternalListener__ctor_mCF26EC92A2240B44BFB372FA650958CCBD9A0180(__this, NULL);
		InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* L_1 = ___internalQuery0;
		__this->___internalQuery_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___internalQuery_4), (void*)L_1);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_2 = ___database1;
		__this->___database_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___database_6), (void*)L_2);
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalValueListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalValueListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalValueListener_TryGetListener_m13452162C9592C47A39C7C0B704E8E25ADCC2D1A (int32_t ___callbackId0, InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D** ___valueListener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA* V_0 = NULL;
	{
		V_0 = (InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA*)NULL;
		int32_t L_0 = ___callbackId0;
		il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = InternalListener_TryGetListener_m98E8EAD97FFE115420096531BA8CA146898E58C5(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D** L_2 = ___valueListener1;
		InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA* L_3 = V_0;
		*((RuntimeObject**)L_2) = (RuntimeObject*)((InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D*)IsInstSealed((RuntimeObject*)L_3, InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)((InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D*)IsInstSealed((RuntimeObject*)L_3, InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var)));
		InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D** L_4 = ___valueListener1;
		InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* L_5 = *((InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D**)L_4);
		return (bool)((((int32_t)((((RuntimeObject*)(InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D** L_6 = ___valueListener1;
		*((RuntimeObject**)L_6) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)NULL);
		return (bool)0;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::OnValueChangedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnValueChangedHandler_m2A2BF51A5F938DDB9E2520CF96860D3C68EA807E (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnValueChangedHandlerU3Ec__AnonStorey0_U3CU3Em__0_m9F49E5335F25F63135F33CBBA70DD208D23EB59B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnValueChangedHandlerU3Ec__AnonStorey0_tB01B8F4519BD0A0485D263C7DB927C7CE442CBDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnValueChangedHandlerU3Ec__AnonStorey0_tB01B8F4519BD0A0485D263C7DB927C7CE442CBDE* V_0 = NULL;
	{
		U3COnValueChangedHandlerU3Ec__AnonStorey0_tB01B8F4519BD0A0485D263C7DB927C7CE442CBDE* L_0 = (U3COnValueChangedHandlerU3Ec__AnonStorey0_tB01B8F4519BD0A0485D263C7DB927C7CE442CBDE*)il2cpp_codegen_object_new(U3COnValueChangedHandlerU3Ec__AnonStorey0_tB01B8F4519BD0A0485D263C7DB927C7CE442CBDE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnValueChangedHandlerU3Ec__AnonStorey0__ctor_m3FB4A7BF3D9F94BE4FDEEEF1B9D33447AA8C524D(L_0, NULL);
		V_0 = L_0;
		U3COnValueChangedHandlerU3Ec__AnonStorey0_tB01B8F4519BD0A0485D263C7DB927C7CE442CBDE* L_1 = V_0;
		intptr_t L_2 = ___snapshot1;
		NullCheck(L_1);
		L_1->___snapshot_0 = L_2;
		U3COnValueChangedHandlerU3Ec__AnonStorey0_tB01B8F4519BD0A0485D263C7DB927C7CE442CBDE* L_3 = V_0;
		int32_t L_4 = ___callbackId0;
		NullCheck(L_3);
		L_3->___callbackId_1 = L_4;
		U3COnValueChangedHandlerU3Ec__AnonStorey0_tB01B8F4519BD0A0485D263C7DB927C7CE442CBDE* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3COnValueChangedHandlerU3Ec__AnonStorey0_U3CU3Em__0_m9F49E5335F25F63135F33CBBA70DD208D23EB59B_RuntimeMethod_var), NULL);
		ExceptionAggregator_Wrap_m0B206615C9C9608E5D2CC1738CB2056F121811FB(L_6, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::OnCancelledHandler(System.Int32,Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnCancelledHandler_m127FC5F9C160C6E8B376C1F85904A1B0C2371193 (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnCancelledHandlerU3Ec__AnonStorey1_U3CU3Em__0_mDEE497EF4A69B3541A8DB58EA233C28E2880CFBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnCancelledHandlerU3Ec__AnonStorey1_tE28067CBE98834AAC86C0D52218C9EAFCF5A8F2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnCancelledHandlerU3Ec__AnonStorey1_tE28067CBE98834AAC86C0D52218C9EAFCF5A8F2F* V_0 = NULL;
	{
		U3COnCancelledHandlerU3Ec__AnonStorey1_tE28067CBE98834AAC86C0D52218C9EAFCF5A8F2F* L_0 = (U3COnCancelledHandlerU3Ec__AnonStorey1_tE28067CBE98834AAC86C0D52218C9EAFCF5A8F2F*)il2cpp_codegen_object_new(U3COnCancelledHandlerU3Ec__AnonStorey1_tE28067CBE98834AAC86C0D52218C9EAFCF5A8F2F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnCancelledHandlerU3Ec__AnonStorey1__ctor_mF91084EC680555042AB3700C4ECF663916829BC0(L_0, NULL);
		V_0 = L_0;
		U3COnCancelledHandlerU3Ec__AnonStorey1_tE28067CBE98834AAC86C0D52218C9EAFCF5A8F2F* L_1 = V_0;
		int32_t L_2 = ___callbackId0;
		NullCheck(L_1);
		L_1->___callbackId_0 = L_2;
		U3COnCancelledHandlerU3Ec__AnonStorey1_tE28067CBE98834AAC86C0D52218C9EAFCF5A8F2F* L_3 = V_0;
		int32_t L_4 = ___error1;
		NullCheck(L_3);
		L_3->___error_1 = L_4;
		U3COnCancelledHandlerU3Ec__AnonStorey1_tE28067CBE98834AAC86C0D52218C9EAFCF5A8F2F* L_5 = V_0;
		String_t* L_6 = ___msg2;
		NullCheck(L_5);
		L_5->___msg_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___msg_2), (void*)L_6);
		U3COnCancelledHandlerU3Ec__AnonStorey1_tE28067CBE98834AAC86C0D52218C9EAFCF5A8F2F* L_7 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, L_7, (intptr_t)((void*)U3COnCancelledHandlerU3Ec__AnonStorey1_U3CU3Em__0_mDEE497EF4A69B3541A8DB58EA233C28E2880CFBF_RuntimeMethod_var), NULL);
		ExceptionAggregator_Wrap_m0B206615C9C9608E5D2CC1738CB2056F121811FB(L_8, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::DestroyCppListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_DestroyCppListener_m2F5CB0AEF6BDDD53B3DB2CD1CA73FA71DDB458D3 (InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___cppListener_5;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		intptr_t L_2 = __this->___cppListener_5;
		InternalQuery_DestroyValueListener_m19812AA2089B447EE6E7A05F3B9D855A06F03FFD(L_2, NULL);
		__this->___cppListener_5 = (0);
	}

IL_002b:
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
void OnValueChangedDelegate_Invoke_mBE6DE21EC167AD59CFF4878B676D00B5F1A7FE36_Multicast(OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* currentDelegate = reinterpret_cast<OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___callbackId0, ___snapshot1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnValueChangedDelegate_Invoke_mBE6DE21EC167AD59CFF4878B676D00B5F1A7FE36_Open(OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___callbackId0, ___snapshot1, method);
}
void OnValueChangedDelegate_Invoke_mBE6DE21EC167AD59CFF4878B676D00B5F1A7FE36_OpenStaticInvoker(OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___callbackId0, ___snapshot1);
}
void OnValueChangedDelegate_Invoke_mBE6DE21EC167AD59CFF4878B676D00B5F1A7FE36_ClosedStaticInvoker(OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___callbackId0, ___snapshot1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D (OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___snapshot1);

}
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate__ctor_m80BF259A3B5530546C3765A0D9822B7F76644BE4 (OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnValueChangedDelegate_Invoke_mBE6DE21EC167AD59CFF4878B676D00B5F1A7FE36_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnValueChangedDelegate_Invoke_mBE6DE21EC167AD59CFF4878B676D00B5F1A7FE36_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnValueChangedDelegate_Invoke_mBE6DE21EC167AD59CFF4878B676D00B5F1A7FE36_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnValueChangedDelegate_Invoke_mBE6DE21EC167AD59CFF4878B676D00B5F1A7FE36_Multicast;
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate_Invoke_mBE6DE21EC167AD59CFF4878B676D00B5F1A7FE36 (OnValueChangedDelegate_tBAD34B2C949FAC8B59EE9A11939AAA31A3DE963D* __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___callbackId0, ___snapshot1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnCancelledDelegate_Invoke_mF417375CDD8B682E0B28D4A8A0AB720AFF28BE35_Multicast(OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5* __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5* currentDelegate = reinterpret_cast<OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___callbackId0, ___error1, ___msg2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnCancelledDelegate_Invoke_mF417375CDD8B682E0B28D4A8A0AB720AFF28BE35_Open(OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5* __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___callbackId0, ___error1, ___msg2, method);
}
void OnCancelledDelegate_Invoke_mF417375CDD8B682E0B28D4A8A0AB720AFF28BE35_OpenStaticInvoker(OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5* __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< int32_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___callbackId0, ___error1, ___msg2);
}
void OnCancelledDelegate_Invoke_mF417375CDD8B682E0B28D4A8A0AB720AFF28BE35_ClosedStaticInvoker(OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5* __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, int32_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___callbackId0, ___error1, ___msg2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5 (OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5* __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___error1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate__ctor_m8FAB144B0258C7B1B9E92ABB0767928DF52080B8 (OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCancelledDelegate_Invoke_mF417375CDD8B682E0B28D4A8A0AB720AFF28BE35_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnCancelledDelegate_Invoke_mF417375CDD8B682E0B28D4A8A0AB720AFF28BE35_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCancelledDelegate_Invoke_mF417375CDD8B682E0B28D4A8A0AB720AFF28BE35_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnCancelledDelegate_Invoke_mF417375CDD8B682E0B28D4A8A0AB720AFF28BE35_Multicast;
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::Invoke(System.Int32,Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_Invoke_mF417375CDD8B682E0B28D4A8A0AB720AFF28BE35 (OnCancelledDelegate_t6B60AD1045AB3D45381F0FD2F88A06F80206F4F5* __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___callbackId0, ___error1, ___msg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.Internal.InternalValueListener/<OnValueChangedHandler>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnValueChangedHandlerU3Ec__AnonStorey0__ctor_m3FB4A7BF3D9F94BE4FDEEEF1B9D33447AA8C524D (U3COnValueChangedHandlerU3Ec__AnonStorey0_tB01B8F4519BD0A0485D263C7DB927C7CE442CBDE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener/<OnValueChangedHandler>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnValueChangedHandlerU3Ec__AnonStorey0_U3CU3Em__0_m9F49E5335F25F63135F33CBBA70DD208D23EB59B (U3COnValueChangedHandlerU3Ec__AnonStorey0_tB01B8F4519BD0A0485D263C7DB927C7CE442CBDE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* V_0 = NULL;
	EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* V_1 = NULL;
	InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* V_2 = NULL;
	{
		intptr_t L_0 = __this->___snapshot_0;
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_1 = (InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A*)il2cpp_codegen_object_new(InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InternalDataSnapshot__ctor_m4B612437CCFF2270A32351445BD34F910881AFBB(L_1, L_0, (bool)1, NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044*)NULL;
		V_2 = (InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D*)NULL;
		int32_t L_2 = __this->___callbackId_1;
		il2cpp_codegen_runtime_class_init_inline(InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = InternalValueListener_TryGetListener_m13452162C9592C47A39C7C0B704E8E25ADCC2D1A(L_2, (&V_2), NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* L_4 = V_2;
		NullCheck(L_4);
		EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* L_5 = L_4->___valueChangedImpl_7;
		V_1 = L_5;
	}

IL_002a:
	{
		EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* L_6 = V_1;
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* L_7 = V_1;
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_8 = V_0;
		InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* L_9 = V_2;
		NullCheck(L_9);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_10 = L_9->___database_6;
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_11;
		L_11 = DataSnapshot_CreateSnapshot_mB4F13FA3E4E46833D9780D7D8490423DF3148BCC(L_8, L_10, NULL);
		ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* L_12 = (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB*)il2cpp_codegen_object_new(ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ValueChangedEventArgs__ctor_m3746F9CA3C31CF3ECFE96A4C2E258D394149F7BF(L_12, L_11, NULL);
		NullCheck(L_7);
		EventHandler_1_Invoke_m138A2D3506A270F2AB9DF6EE30246FE32C0F2672_inline(L_7, NULL, L_12, NULL);
		goto IL_0053;
	}

IL_004d:
	{
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_13 = V_0;
		NullCheck(L_13);
		VirtualActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose() */, L_13);
	}

IL_0053:
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
// System.Void Firebase.Database.Internal.InternalValueListener/<OnCancelledHandler>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCancelledHandlerU3Ec__AnonStorey1__ctor_mF91084EC680555042AB3700C4ECF663916829BC0 (U3COnCancelledHandlerU3Ec__AnonStorey1_tE28067CBE98834AAC86C0D52218C9EAFCF5A8F2F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener/<OnCancelledHandler>c__AnonStorey1::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCancelledHandlerU3Ec__AnonStorey1_U3CU3Em__0_mDEE497EF4A69B3541A8DB58EA233C28E2880CFBF (U3COnCancelledHandlerU3Ec__AnonStorey1_tE28067CBE98834AAC86C0D52218C9EAFCF5A8F2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* V_0 = NULL;
	InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* V_1 = NULL;
	{
		V_0 = (EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044*)NULL;
		int32_t L_0 = __this->___callbackId_0;
		il2cpp_codegen_runtime_class_init_inline(InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = InternalValueListener_TryGetListener_m13452162C9592C47A39C7C0B704E8E25ADCC2D1A(L_0, (&V_1), NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* L_2 = V_1;
		NullCheck(L_2);
		EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* L_3 = L_2->___valueChangedImpl_7;
		V_0 = L_3;
	}

IL_001b:
	{
		EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		EventHandler_1_t7300E1D9B9D401E737A8A11D7B94073D6D2B4044* L_5 = V_0;
		int32_t L_6 = __this->___error_1;
		String_t* L_7 = __this->___msg_2;
		il2cpp_codegen_runtime_class_init_inline(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var);
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_8;
		L_8 = DatabaseError_FromError_m8B5FA9C9EF754565FA56A120D53480DAB952A580(L_6, L_7, NULL);
		ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* L_9 = (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB*)il2cpp_codegen_object_new(ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ValueChangedEventArgs__ctor_mFAFCFA9665476BAD0D16CD6906EA3554ABB0F283(L_9, L_8, NULL);
		NullCheck(L_5);
		EventHandler_1_Invoke_m138A2D3506A270F2AB9DF6EE30246FE32C0F2672_inline(L_5, NULL, L_9, NULL);
	}

IL_003e:
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
// System.Void Firebase.Database.Internal.InternalListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener__ctor_mCF26EC92A2240B44BFB372FA650958CCBD9A0180 (InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* L_0 = ((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___databaseCallbacks_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
			int32_t L_3 = ((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___uidGenerator_0;
			int32_t L_4 = L_3;
			((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___uidGenerator_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
			__this->___uid_2 = L_4;
			goto IL_0031;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalListener_TryGetListener_m98E8EAD97FFE115420096531BA8CA146898E58C5 (int32_t ___uid0, InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA** ___listener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB96FCF84681FFE97BA7EA45565D94FE64DB2A851_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* L_0 = ((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___databaseCallbacks_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001e:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
			Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* L_3 = ((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___databaseCallbacks_1;
			int32_t L_4 = ___uid0;
			InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA** L_5 = ___listener1;
			NullCheck(L_3);
			bool L_6;
			L_6 = Dictionary_2_TryGetValue_mB96FCF84681FFE97BA7EA45565D94FE64DB2A851(L_3, L_4, L_5, Dictionary_2_TryGetValue_mB96FCF84681FFE97BA7EA45565D94FE64DB2A851_RuntimeMethod_var);
			V_1 = L_6;
			goto IL_0025;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0025:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_Finalize_m6BBDE3363C32BF18B507EED58DC2A4479EBEE267 (InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA* __this, const RuntimeMethod* method) 
{
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
			InternalListener_Dispose_m6D7CA28EE5C08ED9103B2EAD4ACCD0016ACDA0CC(__this, NULL);
			goto IL_0012;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_Dispose_m6D7CA28EE5C08ED9103B2EAD4ACCD0016ACDA0CC (InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mAF2F6B72BB0F5B95CDDC755D57D0096DCD18EBA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalListener::DestroyCppListener() */, __this);
		il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* L_0 = ((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___databaseCallbacks_1;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0028:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
			Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* L_3 = ((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___databaseCallbacks_1;
			int32_t L_4 = __this->___uid_2;
			NullCheck(L_3);
			bool L_5;
			L_5 = Dictionary_2_Remove_mAF2F6B72BB0F5B95CDDC755D57D0096DCD18EBA7(L_3, L_4, Dictionary_2_Remove_mAF2F6B72BB0F5B95CDDC755D57D0096DCD18EBA7_RuntimeMethod_var);
			goto IL_002f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002f:
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener__cctor_mE73345B76E967E0F05518F47FB7408C1287C3AAE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE89209F3032BC734CF79096A19D66A8E18CED709_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___uidGenerator_0 = 0;
		Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D* L_0 = (Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D*)il2cpp_codegen_object_new(Dictionary_2_t0276F26FE36D9E041CCF246492D214D6A5726F8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mE89209F3032BC734CF79096A19D66A8E18CED709(L_0, Dictionary_2__ctor_mE89209F3032BC734CF79096A19D66A8E18CED709_RuntimeMethod_var);
		((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___databaseCallbacks_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var))->___databaseCallbacks_1), (void*)L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnChildChangeHandler_m09D6C53122D375483BC535E3737AAA5A91CF08CF(int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, char* ___previousChildName3)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___previousChildName3' to managed representation
	String_t* ____previousChildName3_unmarshaled = NULL;
	____previousChildName3_unmarshaled = il2cpp_codegen_marshal_string_result(___previousChildName3);

	// Managed method invocation
	InternalChildListener_OnChildChangeHandler_m09D6C53122D375483BC535E3737AAA5A91CF08CF(___callbackId0, ___changeType1, ___snapshot2, ____previousChildName3_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnChildRemovedHandler_mBE604A2D8DFD72E85AA563F1F68612A0CC067425(int32_t ___callbackId0, intptr_t ___snapshot1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	InternalChildListener_OnChildRemovedHandler_mBE604A2D8DFD72E85AA563F1F68612A0CC067425(___callbackId0, ___snapshot1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnCancelledHandler_m32541A7C5B3ECC99D550EC9FB84927734B3CBE0B(int32_t ___callbackId0, int32_t ___error1, char* ___msg2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___msg2' to managed representation
	String_t* ____msg2_unmarshaled = NULL;
	____msg2_unmarshaled = il2cpp_codegen_marshal_string_result(___msg2);

	// Managed method invocation
	InternalChildListener_OnCancelledHandler_m32541A7C5B3ECC99D550EC9FB84927734B3CBE0B(___callbackId0, ___error1, ____msg2_unmarshaled, NULL);

}
// System.Void Firebase.Database.Internal.InternalChildListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener__cctor_m6B06DD60E707D7BEC1D053A0124F702DDDD8D719 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_OnCancelledHandler_m32541A7C5B3ECC99D550EC9FB84927734B3CBE0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_OnChildChangeHandler_m09D6C53122D375483BC535E3737AAA5A91CF08CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_OnChildRemovedHandler_mBE604A2D8DFD72E85AA563F1F68612A0CC067425_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* G_B4_0 = NULL;
	OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* G_B3_0 = NULL;
	OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* G_B6_0 = NULL;
	OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* G_B6_1 = NULL;
	OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* G_B5_0 = NULL;
	OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* G_B5_1 = NULL;
	{
		OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* L_0 = ((InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_12;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* L_1 = (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0*)il2cpp_codegen_object_new(OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OnCancelledDelegate__ctor_m7D5FD1E072A9031443448E5D582E23D8015B808B(L_1, NULL, (intptr_t)((void*)InternalChildListener_OnCancelledHandler_m32541A7C5B3ECC99D550EC9FB84927734B3CBE0B_RuntimeMethod_var), NULL);
		((InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_12), (void*)L_1);
	}

IL_0018:
	{
		OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* L_2 = ((InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_12;
		OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* L_3 = ((InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_13;
		G_B3_0 = L_2;
		if (L_3)
		{
			G_B4_0 = L_2;
			goto IL_0035;
		}
	}
	{
		OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* L_4 = (OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F*)il2cpp_codegen_object_new(OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		OnChildChangeDelegate__ctor_m278F4837562673E7CA3C172D6BDB62BD9238B78E(L_4, NULL, (intptr_t)((void*)InternalChildListener_OnChildChangeHandler_m09D6C53122D375483BC535E3737AAA5A91CF08CF_RuntimeMethod_var), NULL);
		((InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_13), (void*)L_4);
		G_B4_0 = G_B3_0;
	}

IL_0035:
	{
		OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* L_5 = ((InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_13;
		OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* L_6 = ((InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache2_14;
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
		if (L_6)
		{
			G_B6_0 = L_5;
			G_B6_1 = G_B4_0;
			goto IL_0052;
		}
	}
	{
		OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* L_7 = (OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B*)il2cpp_codegen_object_new(OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		OnChildRemovedDelegate__ctor_m11125CD973C22C05C781648FD541AAA731526F8C(L_7, NULL, (intptr_t)((void*)InternalChildListener_OnChildRemovedHandler_mBE604A2D8DFD72E85AA563F1F68612A0CC067425_RuntimeMethod_var), NULL);
		((InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache2_14 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache2_14), (void*)L_7);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
	}

IL_0052:
	{
		OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* L_8 = ((InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache2_14;
		InternalQuery_RegisterChildListenerCallbacks_mFF7DE933A199D77FBC23376F3FB6D795E454D3E9(G_B6_1, G_B6_0, L_8, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener__ctor_m0C111E3446213E20703731363653DEFF6AC4C391 (InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* __this, InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* ___internalQuery0, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___eventLock_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventLock_3), (void*)L_0);
		__this->___cppListener_5 = (0);
		il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		InternalListener__ctor_mCF26EC92A2240B44BFB372FA650958CCBD9A0180(__this, NULL);
		InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* L_1 = ___internalQuery0;
		__this->___internalQuery_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___internalQuery_4), (void*)L_1);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_2 = ___database1;
		__this->___database_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___database_6), (void*)L_2);
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalChildListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalChildListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalChildListener_TryGetListener_mF31C6727DB004EE23987AA5B1F5BE8A540D47E92 (int32_t ___callbackId0, InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569** ___childListener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA* V_0 = NULL;
	{
		V_0 = (InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA*)NULL;
		int32_t L_0 = ___callbackId0;
		il2cpp_codegen_runtime_class_init_inline(InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = InternalListener_TryGetListener_m98E8EAD97FFE115420096531BA8CA146898E58C5(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569** L_2 = ___childListener1;
		InternalListener_t5BE6488EBC4A97BFAC7E7951E332784A55544CCA* L_3 = V_0;
		*((RuntimeObject**)L_2) = (RuntimeObject*)((InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569*)IsInstSealed((RuntimeObject*)L_3, InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)((InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569*)IsInstSealed((RuntimeObject*)L_3, InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var)));
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569** L_4 = ___childListener1;
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* L_5 = *((InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569**)L_4);
		return (bool)((((int32_t)((((RuntimeObject*)(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569** L_6 = ___childListener1;
		*((RuntimeObject**)L_6) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)NULL);
		return (bool)0;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildChangeHandler(System.Int32,Firebase.Database.Internal.ChildChangeType,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildChangeHandler_m09D6C53122D375483BC535E3737AAA5A91CF08CF (int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnChildChangeHandlerU3Ec__AnonStorey0_U3CU3Em__0_mF4F54922AD8AD261FFD2D05C4596A546E384C555_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnChildChangeHandlerU3Ec__AnonStorey0_t56115D1441B48B83BADDBF6301F46D60D2C50FED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnChildChangeHandlerU3Ec__AnonStorey0_t56115D1441B48B83BADDBF6301F46D60D2C50FED* V_0 = NULL;
	{
		U3COnChildChangeHandlerU3Ec__AnonStorey0_t56115D1441B48B83BADDBF6301F46D60D2C50FED* L_0 = (U3COnChildChangeHandlerU3Ec__AnonStorey0_t56115D1441B48B83BADDBF6301F46D60D2C50FED*)il2cpp_codegen_object_new(U3COnChildChangeHandlerU3Ec__AnonStorey0_t56115D1441B48B83BADDBF6301F46D60D2C50FED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnChildChangeHandlerU3Ec__AnonStorey0__ctor_mCFD527763708413AC15743191BF0DB57397E3554(L_0, NULL);
		V_0 = L_0;
		U3COnChildChangeHandlerU3Ec__AnonStorey0_t56115D1441B48B83BADDBF6301F46D60D2C50FED* L_1 = V_0;
		intptr_t L_2 = ___snapshot2;
		NullCheck(L_1);
		L_1->___snapshot_0 = L_2;
		U3COnChildChangeHandlerU3Ec__AnonStorey0_t56115D1441B48B83BADDBF6301F46D60D2C50FED* L_3 = V_0;
		int32_t L_4 = ___callbackId0;
		NullCheck(L_3);
		L_3->___callbackId_1 = L_4;
		U3COnChildChangeHandlerU3Ec__AnonStorey0_t56115D1441B48B83BADDBF6301F46D60D2C50FED* L_5 = V_0;
		int32_t L_6 = ___changeType1;
		NullCheck(L_5);
		L_5->___changeType_2 = L_6;
		U3COnChildChangeHandlerU3Ec__AnonStorey0_t56115D1441B48B83BADDBF6301F46D60D2C50FED* L_7 = V_0;
		String_t* L_8 = ___previousChildName3;
		NullCheck(L_7);
		L_7->___previousChildName_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___previousChildName_3), (void*)L_8);
		U3COnChildChangeHandlerU3Ec__AnonStorey0_t56115D1441B48B83BADDBF6301F46D60D2C50FED* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3COnChildChangeHandlerU3Ec__AnonStorey0_U3CU3Em__0_mF4F54922AD8AD261FFD2D05C4596A546E384C555_RuntimeMethod_var), NULL);
		ExceptionAggregator_Wrap_m0B206615C9C9608E5D2CC1738CB2056F121811FB(L_10, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildRemovedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildRemovedHandler_mBE604A2D8DFD72E85AA563F1F68612A0CC067425 (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnChildRemovedHandlerU3Ec__AnonStorey1_U3CU3Em__0_m4D874F94AE4DEBFC6CD0BDE2CAB4A76F0FC04FEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnChildRemovedHandlerU3Ec__AnonStorey1_t90E3BAAD380F693E3ADFD8AA7D3B99C09FAB4BBF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnChildRemovedHandlerU3Ec__AnonStorey1_t90E3BAAD380F693E3ADFD8AA7D3B99C09FAB4BBF* V_0 = NULL;
	{
		U3COnChildRemovedHandlerU3Ec__AnonStorey1_t90E3BAAD380F693E3ADFD8AA7D3B99C09FAB4BBF* L_0 = (U3COnChildRemovedHandlerU3Ec__AnonStorey1_t90E3BAAD380F693E3ADFD8AA7D3B99C09FAB4BBF*)il2cpp_codegen_object_new(U3COnChildRemovedHandlerU3Ec__AnonStorey1_t90E3BAAD380F693E3ADFD8AA7D3B99C09FAB4BBF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnChildRemovedHandlerU3Ec__AnonStorey1__ctor_m7719CD7D5F4E75C8EF10E52BB0CED73A9D648653(L_0, NULL);
		V_0 = L_0;
		U3COnChildRemovedHandlerU3Ec__AnonStorey1_t90E3BAAD380F693E3ADFD8AA7D3B99C09FAB4BBF* L_1 = V_0;
		intptr_t L_2 = ___snapshot1;
		NullCheck(L_1);
		L_1->___snapshot_0 = L_2;
		U3COnChildRemovedHandlerU3Ec__AnonStorey1_t90E3BAAD380F693E3ADFD8AA7D3B99C09FAB4BBF* L_3 = V_0;
		int32_t L_4 = ___callbackId0;
		NullCheck(L_3);
		L_3->___callbackId_1 = L_4;
		U3COnChildRemovedHandlerU3Ec__AnonStorey1_t90E3BAAD380F693E3ADFD8AA7D3B99C09FAB4BBF* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3COnChildRemovedHandlerU3Ec__AnonStorey1_U3CU3Em__0_m4D874F94AE4DEBFC6CD0BDE2CAB4A76F0FC04FEE_RuntimeMethod_var), NULL);
		ExceptionAggregator_Wrap_m0B206615C9C9608E5D2CC1738CB2056F121811FB(L_6, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnCancelledHandler(System.Int32,Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnCancelledHandler_m32541A7C5B3ECC99D550EC9FB84927734B3CBE0B (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnCancelledHandlerU3Ec__AnonStorey2_U3CU3Em__0_mFCB3FEC103596492B677FF67D07FCD4B732EBBD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COnCancelledHandlerU3Ec__AnonStorey2_t22B73155E1CADB05957372E67D53B2FA47D6D8B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3COnCancelledHandlerU3Ec__AnonStorey2_t22B73155E1CADB05957372E67D53B2FA47D6D8B8* V_0 = NULL;
	{
		U3COnCancelledHandlerU3Ec__AnonStorey2_t22B73155E1CADB05957372E67D53B2FA47D6D8B8* L_0 = (U3COnCancelledHandlerU3Ec__AnonStorey2_t22B73155E1CADB05957372E67D53B2FA47D6D8B8*)il2cpp_codegen_object_new(U3COnCancelledHandlerU3Ec__AnonStorey2_t22B73155E1CADB05957372E67D53B2FA47D6D8B8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COnCancelledHandlerU3Ec__AnonStorey2__ctor_m1DF96006936C8DAB49ADB1D3CFBB6DEC2CDBAB25(L_0, NULL);
		V_0 = L_0;
		U3COnCancelledHandlerU3Ec__AnonStorey2_t22B73155E1CADB05957372E67D53B2FA47D6D8B8* L_1 = V_0;
		int32_t L_2 = ___callbackId0;
		NullCheck(L_1);
		L_1->___callbackId_0 = L_2;
		U3COnCancelledHandlerU3Ec__AnonStorey2_t22B73155E1CADB05957372E67D53B2FA47D6D8B8* L_3 = V_0;
		int32_t L_4 = ___error1;
		NullCheck(L_3);
		L_3->___error_1 = L_4;
		U3COnCancelledHandlerU3Ec__AnonStorey2_t22B73155E1CADB05957372E67D53B2FA47D6D8B8* L_5 = V_0;
		String_t* L_6 = ___msg2;
		NullCheck(L_5);
		L_5->___msg_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___msg_2), (void*)L_6);
		U3COnCancelledHandlerU3Ec__AnonStorey2_t22B73155E1CADB05957372E67D53B2FA47D6D8B8* L_7 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, L_7, (intptr_t)((void*)U3COnCancelledHandlerU3Ec__AnonStorey2_U3CU3Em__0_mFCB3FEC103596492B677FF67D07FCD4B732EBBD5_RuntimeMethod_var), NULL);
		ExceptionAggregator_Wrap_m0B206615C9C9608E5D2CC1738CB2056F121811FB(L_8, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::DestroyCppListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_DestroyCppListener_m01ED1FBDB1052C672AA189B9F8BB8EB6A20CB036 (InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___cppListener_5;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1(L_0, (0), NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		intptr_t L_2 = __this->___cppListener_5;
		InternalQuery_DestroyChildListener_mB50FE32DFB49B8587269F89F2F02C1D91E7A6E64(L_2, NULL);
		__this->___cppListener_5 = (0);
	}

IL_002b:
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
void OnCancelledDelegate_Invoke_m030F321CECA72063C3E62650AE48401C932F40BC_Multicast(OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* currentDelegate = reinterpret_cast<OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___callbackId0, ___error1, ___msg2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnCancelledDelegate_Invoke_m030F321CECA72063C3E62650AE48401C932F40BC_Open(OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___callbackId0, ___error1, ___msg2, method);
}
void OnCancelledDelegate_Invoke_m030F321CECA72063C3E62650AE48401C932F40BC_OpenStaticInvoker(OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< int32_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___callbackId0, ___error1, ___msg2);
}
void OnCancelledDelegate_Invoke_m030F321CECA72063C3E62650AE48401C932F40BC_ClosedStaticInvoker(OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, int32_t, int32_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___callbackId0, ___error1, ___msg2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0 (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___error1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate__ctor_m7D5FD1E072A9031443448E5D582E23D8015B808B (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCancelledDelegate_Invoke_m030F321CECA72063C3E62650AE48401C932F40BC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnCancelledDelegate_Invoke_m030F321CECA72063C3E62650AE48401C932F40BC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCancelledDelegate_Invoke_m030F321CECA72063C3E62650AE48401C932F40BC_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnCancelledDelegate_Invoke_m030F321CECA72063C3E62650AE48401C932F40BC_Multicast;
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::Invoke(System.Int32,Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_Invoke_m030F321CECA72063C3E62650AE48401C932F40BC (OnCancelledDelegate_t00A083ED3BEB8060C5E562C8E76C7D1B973E2BA0* __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___callbackId0, ___error1, ___msg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnChildChangeDelegate_Invoke_m4E28E6525C883B67F2543FE4B1D62A4A142A9CD1_Multicast(OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* currentDelegate = reinterpret_cast<OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnChildChangeDelegate_Invoke_m4E28E6525C883B67F2543FE4B1D62A4A142A9CD1_Open(OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, method);
}
void OnChildChangeDelegate_Invoke_m4E28E6525C883B67F2543FE4B1D62A4A142A9CD1_OpenStaticInvoker(OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	InvokerActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
}
void OnChildChangeDelegate_Invoke_m4E28E6525C883B67F2543FE4B1D62A4A142A9CD1_ClosedStaticInvoker(OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, int32_t, int32_t, intptr_t, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F (OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___previousChildName3' to native representation
	char* ____previousChildName3_marshaled = NULL;
	____previousChildName3_marshaled = il2cpp_codegen_marshal_string(___previousChildName3);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___changeType1, ___snapshot2, ____previousChildName3_marshaled);

	// Marshaling cleanup of parameter '___previousChildName3' native representation
	il2cpp_codegen_marshal_free(____previousChildName3_marshaled);
	____previousChildName3_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate__ctor_m278F4837562673E7CA3C172D6BDB62BD9238B78E (OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnChildChangeDelegate_Invoke_m4E28E6525C883B67F2543FE4B1D62A4A142A9CD1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnChildChangeDelegate_Invoke_m4E28E6525C883B67F2543FE4B1D62A4A142A9CD1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnChildChangeDelegate_Invoke_m4E28E6525C883B67F2543FE4B1D62A4A142A9CD1_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnChildChangeDelegate_Invoke_m4E28E6525C883B67F2543FE4B1D62A4A142A9CD1_Multicast;
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::Invoke(System.Int32,Firebase.Database.Internal.ChildChangeType,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate_Invoke_m4E28E6525C883B67F2543FE4B1D62A4A142A9CD1 (OnChildChangeDelegate_tE121C8EE3B943265E9012619F90D831FDED9094F* __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnChildRemovedDelegate_Invoke_m2B4AADF361DB440F0A25AFB83B0F1C81054CB384_Multicast(OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* currentDelegate = reinterpret_cast<OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___callbackId0, ___snapshot1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnChildRemovedDelegate_Invoke_m2B4AADF361DB440F0A25AFB83B0F1C81054CB384_Open(OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___callbackId0, ___snapshot1, method);
}
void OnChildRemovedDelegate_Invoke_m2B4AADF361DB440F0A25AFB83B0F1C81054CB384_OpenStaticInvoker(OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___callbackId0, ___snapshot1);
}
void OnChildRemovedDelegate_Invoke_m2B4AADF361DB440F0A25AFB83B0F1C81054CB384_ClosedStaticInvoker(OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___callbackId0, ___snapshot1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B (OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___snapshot1);

}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate__ctor_m11125CD973C22C05C781648FD541AAA731526F8C (OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnChildRemovedDelegate_Invoke_m2B4AADF361DB440F0A25AFB83B0F1C81054CB384_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnChildRemovedDelegate_Invoke_m2B4AADF361DB440F0A25AFB83B0F1C81054CB384_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnChildRemovedDelegate_Invoke_m2B4AADF361DB440F0A25AFB83B0F1C81054CB384_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnChildRemovedDelegate_Invoke_m2B4AADF361DB440F0A25AFB83B0F1C81054CB384_Multicast;
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate_Invoke_m2B4AADF361DB440F0A25AFB83B0F1C81054CB384 (OnChildRemovedDelegate_t202E2826D92859441F312FC11D112D97465DF56B* __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___callbackId0, ___snapshot1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnChildChangeHandlerU3Ec__AnonStorey0__ctor_mCFD527763708413AC15743191BF0DB57397E3554 (U3COnChildChangeHandlerU3Ec__AnonStorey0_t56115D1441B48B83BADDBF6301F46D60D2C50FED* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener/<OnChildChangeHandler>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnChildChangeHandlerU3Ec__AnonStorey0_U3CU3Em__0_mF4F54922AD8AD261FFD2D05C4596A546E384C555 (U3COnChildChangeHandlerU3Ec__AnonStorey0_t56115D1441B48B83BADDBF6301F46D60D2C50FED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* V_0 = NULL;
	EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* V_1 = NULL;
	InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* V_2 = NULL;
	{
		intptr_t L_0 = __this->___snapshot_0;
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_1 = (InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A*)il2cpp_codegen_object_new(InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InternalDataSnapshot__ctor_m4B612437CCFF2270A32351445BD34F910881AFBB(L_1, L_0, (bool)1, NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9*)NULL;
		V_2 = (InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569*)NULL;
		int32_t L_2 = __this->___callbackId_1;
		il2cpp_codegen_runtime_class_init_inline(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = InternalChildListener_TryGetListener_mF31C6727DB004EE23987AA5B1F5BE8A540D47E92(L_2, (&V_2), NULL);
		if (!L_3)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_4 = __this->___changeType_2;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_5 = __this->___changeType_2;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_6 = __this->___changeType_2;
		if ((((int32_t)L_6) == ((int32_t)3)))
		{
			goto IL_0064;
		}
	}
	{
		goto IL_0070;
	}

IL_004c:
	{
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* L_7 = V_2;
		NullCheck(L_7);
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_8 = L_7->___childAddedImpl_8;
		V_1 = L_8;
		goto IL_0070;
	}

IL_0058:
	{
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* L_9 = V_2;
		NullCheck(L_9);
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_10 = L_9->___childChangedImpl_9;
		V_1 = L_10;
		goto IL_0070;
	}

IL_0064:
	{
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* L_11 = V_2;
		NullCheck(L_11);
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_12 = L_11->___childMovedImpl_10;
		V_1 = L_12;
		goto IL_0070;
	}

IL_0070:
	{
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_13 = V_1;
		if (!L_13)
		{
			goto IL_0099;
		}
	}
	{
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_14 = V_1;
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_15 = V_0;
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* L_16 = V_2;
		NullCheck(L_16);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_17 = L_16->___database_6;
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_18;
		L_18 = DataSnapshot_CreateSnapshot_mB4F13FA3E4E46833D9780D7D8490423DF3148BCC(L_15, L_17, NULL);
		String_t* L_19 = __this->___previousChildName_3;
		ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* L_20 = (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937*)il2cpp_codegen_object_new(ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		ChildChangedEventArgs__ctor_m8D4FB933484AE04658CA020AA78973B8D417A013(L_20, L_18, L_19, NULL);
		NullCheck(L_14);
		EventHandler_1_Invoke_m08DDFE5209405EBEC20FF3DA6E767B0DB57E06D1_inline(L_14, NULL, L_20, NULL);
		goto IL_009f;
	}

IL_0099:
	{
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_21 = V_0;
		NullCheck(L_21);
		VirtualActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose() */, L_21);
	}

IL_009f:
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
// System.Void Firebase.Database.Internal.InternalChildListener/<OnChildRemovedHandler>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnChildRemovedHandlerU3Ec__AnonStorey1__ctor_m7719CD7D5F4E75C8EF10E52BB0CED73A9D648653 (U3COnChildRemovedHandlerU3Ec__AnonStorey1_t90E3BAAD380F693E3ADFD8AA7D3B99C09FAB4BBF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener/<OnChildRemovedHandler>c__AnonStorey1::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnChildRemovedHandlerU3Ec__AnonStorey1_U3CU3Em__0_m4D874F94AE4DEBFC6CD0BDE2CAB4A76F0FC04FEE (U3COnChildRemovedHandlerU3Ec__AnonStorey1_t90E3BAAD380F693E3ADFD8AA7D3B99C09FAB4BBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* V_0 = NULL;
	EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* V_1 = NULL;
	InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* V_2 = NULL;
	{
		intptr_t L_0 = __this->___snapshot_0;
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_1 = (InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A*)il2cpp_codegen_object_new(InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InternalDataSnapshot__ctor_m4B612437CCFF2270A32351445BD34F910881AFBB(L_1, L_0, (bool)1, NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9*)NULL;
		V_2 = (InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569*)NULL;
		int32_t L_2 = __this->___callbackId_1;
		il2cpp_codegen_runtime_class_init_inline(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = InternalChildListener_TryGetListener_mF31C6727DB004EE23987AA5B1F5BE8A540D47E92(L_2, (&V_2), NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* L_4 = V_2;
		NullCheck(L_4);
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_5 = L_4->___childRemovedImpl_11;
		V_1 = L_5;
	}

IL_002a:
	{
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_6 = V_1;
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_7 = V_1;
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_8 = V_0;
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* L_9 = V_2;
		NullCheck(L_9);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_10 = L_9->___database_6;
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_11;
		L_11 = DataSnapshot_CreateSnapshot_mB4F13FA3E4E46833D9780D7D8490423DF3148BCC(L_8, L_10, NULL);
		ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* L_12 = (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937*)il2cpp_codegen_object_new(ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ChildChangedEventArgs__ctor_m8D4FB933484AE04658CA020AA78973B8D417A013(L_12, L_11, (String_t*)NULL, NULL);
		NullCheck(L_7);
		EventHandler_1_Invoke_m08DDFE5209405EBEC20FF3DA6E767B0DB57E06D1_inline(L_7, NULL, L_12, NULL);
		goto IL_0054;
	}

IL_004e:
	{
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_13 = V_0;
		NullCheck(L_13);
		VirtualActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose() */, L_13);
	}

IL_0054:
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
// System.Void Firebase.Database.Internal.InternalChildListener/<OnCancelledHandler>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCancelledHandlerU3Ec__AnonStorey2__ctor_m1DF96006936C8DAB49ADB1D3CFBB6DEC2CDBAB25 (U3COnCancelledHandlerU3Ec__AnonStorey2_t22B73155E1CADB05957372E67D53B2FA47D6D8B8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener/<OnCancelledHandler>c__AnonStorey2::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnCancelledHandlerU3Ec__AnonStorey2_U3CU3Em__0_mFCB3FEC103596492B677FF67D07FCD4B732EBBD5 (U3COnCancelledHandlerU3Ec__AnonStorey2_t22B73155E1CADB05957372E67D53B2FA47D6D8B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* V_0 = NULL;
	InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* V_1 = NULL;
	{
		V_0 = (EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9*)NULL;
		int32_t L_0 = __this->___callbackId_0;
		il2cpp_codegen_runtime_class_init_inline(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = InternalChildListener_TryGetListener_mF31C6727DB004EE23987AA5B1F5BE8A540D47E92(L_0, (&V_1), NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* L_2 = V_1;
		NullCheck(L_2);
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_3 = L_2->___cancelledImpl_7;
		V_0 = L_3;
	}

IL_001b:
	{
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_4 = V_0;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		EventHandler_1_tD798EE5B5514ADFE98557DC45E91A5D0F55C07F9* L_5 = V_0;
		int32_t L_6 = __this->___error_1;
		String_t* L_7 = __this->___msg_2;
		il2cpp_codegen_runtime_class_init_inline(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var);
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_8;
		L_8 = DatabaseError_FromError_m8B5FA9C9EF754565FA56A120D53480DAB952A580(L_6, L_7, NULL);
		ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* L_9 = (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937*)il2cpp_codegen_object_new(ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ChildChangedEventArgs__ctor_mCE05C1743B7236D84ADFC50D1DC746D205C7E4CC(L_9, L_8, NULL);
		NullCheck(L_5);
		EventHandler_1_Invoke_m08DDFE5209405EBEC20FF3DA6E767B0DB57E06D1_inline(L_5, NULL, L_9, NULL);
	}

IL_003e:
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
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_m3746F9CA3C31CF3ECFE96A4C2E258D394149F7BF (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___snapshot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_0 = ___snapshot0;
		ValueChangedEventArgs_set_Snapshot_m664FEFFC667D86C6E261AB06D9325FC09EBF1449_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_mFAFCFA9665476BAD0D16CD6906EA3554ABB0F283 (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_0 = ___error0;
		ValueChangedEventArgs_set_DatabaseError_m289AF8CCA253CF21C307135423350D1BE212169E_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_Snapshot_m664FEFFC667D86C6E261AB06D9325FC09EBF1449 (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___value0, const RuntimeMethod* method) 
{
	{
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_0 = ___value0;
		__this->___U3CSnapshotU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSnapshotU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_DatabaseError_m289AF8CCA253CF21C307135423350D1BE212169E (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___value0, const RuntimeMethod* method) 
{
	{
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_0 = ___value0;
		__this->___U3CDatabaseErrorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDatabaseErrorU3Ek__BackingField_2), (void*)L_0);
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
// System.Void Firebase.Database.Query::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query__ctor_m57A7C7992A3CEF8448777374B308FFC72E83516A (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* ___internalQuery0, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* L_0 = ___internalQuery0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(6 /* System.Boolean Firebase.Database.Internal.InternalQuery::is_valid() */, L_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07F1E3DA016554FBC48202BBEF3B67E41B513EBA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Query__ctor_m57A7C7992A3CEF8448777374B308FFC72E83516A_RuntimeMethod_var)));
	}

IL_001c:
	{
		InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* L_3 = ___internalQuery0;
		__this->___internalQuery_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___internalQuery_0), (void*)L_3);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_4 = ___database1;
		__this->___database_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___database_1), (void*)L_4);
		InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* L_5 = ___internalQuery0;
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_6 = ___database1;
		InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D* L_7 = (InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D*)il2cpp_codegen_object_new(InternalValueListener_t0914895A956DEA80C13F2827A43BD7B753834D2D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		InternalValueListener__ctor_mAC548AECF68F334C19E043AC711D16BEABA61499(L_7, L_5, L_6, NULL);
		__this->___valueListener_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___valueListener_2), (void*)L_7);
		InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* L_8 = ___internalQuery0;
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_9 = ___database1;
		InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569* L_10 = (InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569*)il2cpp_codegen_object_new(InternalChildListener_tE567078BA9C488CDCBF4DC5C358AA9EC27A50569_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		InternalChildListener__ctor_m0C111E3446213E20703731363653DEFF6AC4C391(L_10, L_8, L_9, NULL);
		__this->___childListener_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___childListener_3), (void*)L_10);
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::WrapInternalDataSnapshotTask(System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* Query_WrapInternalDataSnapshotTask_m70AD530D19FAC103C3B784CE11AD5B19172E79B9 (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* ___it0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7945C3632B9391B8B1E5D718DAA49CC37EE9A746_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m5203880431733105C123A932250AE74F8F910A93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mE745D73D542C2CB354295487B689280699847D66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m20343E9541DCD586432A5CDFC6210E5A35036FA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_U3CU3Em__0_m2A0B7F12CCACF24A864194424E4878D6D3DD38D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tEDF9987AAA56631AF297265DE1FE149FCE8E04D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tEDF9987AAA56631AF297265DE1FE149FCE8E04D2* V_0 = NULL;
	{
		U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tEDF9987AAA56631AF297265DE1FE149FCE8E04D2* L_0 = (U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tEDF9987AAA56631AF297265DE1FE149FCE8E04D2*)il2cpp_codegen_object_new(U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tEDF9987AAA56631AF297265DE1FE149FCE8E04D2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0__ctor_mFB535B49F747C8C5CBC8A34FDCD3C1C33B1893DA(L_0, NULL);
		V_0 = L_0;
		U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tEDF9987AAA56631AF297265DE1FE149FCE8E04D2* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U24this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U24this_1), (void*)__this);
		U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tEDF9987AAA56631AF297265DE1FE149FCE8E04D2* L_2 = V_0;
		TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B* L_3 = (TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B*)il2cpp_codegen_object_new(TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TaskCompletionSource_1__ctor_m5203880431733105C123A932250AE74F8F910A93(L_3, TaskCompletionSource_1__ctor_m5203880431733105C123A932250AE74F8F910A93_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___tcs_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___tcs_0), (void*)L_3);
		Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* L_4 = ___it0;
		U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tEDF9987AAA56631AF297265DE1FE149FCE8E04D2* L_5 = V_0;
		Action_1_t7945C3632B9391B8B1E5D718DAA49CC37EE9A746* L_6 = (Action_1_t7945C3632B9391B8B1E5D718DAA49CC37EE9A746*)il2cpp_codegen_object_new(Action_1_t7945C3632B9391B8B1E5D718DAA49CC37EE9A746_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_m5C268288EB8A555F42BFD4FF9360F587562D7408(L_6, L_5, (intptr_t)((void*)U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_U3CU3Em__0_m2A0B7F12CCACF24A864194424E4878D6D3DD38D9_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
		L_7 = Task_1_ContinueWith_m20343E9541DCD586432A5CDFC6210E5A35036FA2(L_4, L_6, Task_1_ContinueWith_m20343E9541DCD586432A5CDFC6210E5A35036FA2_RuntimeMethod_var);
		U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tEDF9987AAA56631AF297265DE1FE149FCE8E04D2* L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B* L_9 = L_8->___tcs_0;
		NullCheck(L_9);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_10;
		L_10 = TaskCompletionSource_1_get_Task_mE745D73D542C2CB354295487B689280699847D66_inline(L_9, TaskCompletionSource_1_get_Task_mE745D73D542C2CB354295487B689280699847D66_RuntimeMethod_var);
		return L_10;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::GetValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* Query_GetValueAsync_mFEB57CCE078D10FC3A6DA6DA2A7DCD16CC4673F5 (Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* __this, const RuntimeMethod* method) 
{
	{
		InternalQuery_tB7C0D74AAFD9B2A5768AB82021C33443922AC196* L_0 = __this->___internalQuery_0;
		NullCheck(L_0);
		Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* L_1;
		L_1 = InternalQuery_GetValueAsync_mDE0591F9BD98AC036E5967B4996F9C32175E613A(L_0, NULL);
		Task_1_tEF384421AF949B7843F34F35E8C31D2400026E50* L_2;
		L_2 = Query_WrapInternalDataSnapshotTask_m70AD530D19FAC103C3B784CE11AD5B19172E79B9(__this, L_1, NULL);
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
// System.Void Firebase.Database.Query/<WrapInternalDataSnapshotTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0__ctor_mFB535B49F747C8C5CBC8A34FDCD3C1C33B1893DA (U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tEDF9987AAA56631AF297265DE1FE149FCE8E04D2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.Query/<WrapInternalDataSnapshotTask>c__AnonStorey0::<>m__0(System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_U3CU3Em__0_m2A0B7F12CCACF24A864194424E4878D6D3DD38D9 (U3CWrapInternalDataSnapshotTaskU3Ec__AnonStorey0_tEDF9987AAA56631AF297265DE1FE149FCE8E04D2* __this, Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Query_CheckTaskStatus_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m9FAB5282CCDABFFC440825304594AF870D584B5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m7371C0347394928D615951ACD5DA9E5E4169DA54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m903965C40A3B093D3F1FC6851F0F05BCFBA1519A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* L_0 = __this->___U24this_1;
		Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* L_1 = ___task0;
		TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B* L_2 = __this->___tcs_0;
		NullCheck(L_0);
		bool L_3;
		L_3 = Query_CheckTaskStatus_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m9FAB5282CCDABFFC440825304594AF870D584B5B(L_0, L_1, L_2, Query_CheckTaskStatus_TisDataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_m9FAB5282CCDABFFC440825304594AF870D584B5B_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		TaskCompletionSource_1_t5C4CAFB02C8DA5FCDEFAEC2EE691E8E10D76711B* L_4 = __this->___tcs_0;
		Task_1_t7DBAD186E2CAF59E0A176C064546EB613541BEC3* L_5 = ___task0;
		NullCheck(L_5);
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_6;
		L_6 = Task_1_get_Result_m903965C40A3B093D3F1FC6851F0F05BCFBA1519A(L_5, Task_1_get_Result_m903965C40A3B093D3F1FC6851F0F05BCFBA1519A_RuntimeMethod_var);
		Query_tA5BE8BD73821BF548F4FC7A3E4BE684B0CCC31ED* L_7 = __this->___U24this_1;
		NullCheck(L_7);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_8 = L_7->___database_1;
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_9;
		L_9 = DataSnapshot_CreateSnapshot_mB4F13FA3E4E46833D9780D7D8490423DF3148BCC(L_6, L_8, NULL);
		NullCheck(L_4);
		TaskCompletionSource_1_SetResult_m7371C0347394928D615951ACD5DA9E5E4169DA54(L_4, L_9, TaskCompletionSource_1_SetResult_m7371C0347394928D615951ACD5DA9E5E4169DA54_RuntimeMethod_var);
	}

IL_0038:
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
// System.Void Firebase.Database.FirebaseDatabase::.ctor(Firebase.FirebaseApp,Firebase.Database.Internal.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase__ctor_m7BD7F7529F58B3AC2DAE5662AA93DACCF4B6C7BE (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___app0, InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* ___internalDB1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_OnAppDisposed_mD10E03FDEC79697DD1B2A8AF1EB31FEE46478877_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ___app0;
		FirebaseDatabase_set_App_m7B018585E9B3FAC825B2B08A6943052AF6293D6C_inline(__this, L_0, NULL);
		InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* L_1 = ___internalDB1;
		__this->___internalDatabase_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___internalDatabase_0), (void*)L_1);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_2;
		L_2 = FirebaseDatabase_get_App_mCAE467A1AD76CFC175A5988C1BACCBC684083B4E_inline(__this, NULL);
		EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_3 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_3, __this, (intptr_t)((void*)FirebaseDatabase_OnAppDisposed_mD10E03FDEC79697DD1B2A8AF1EB31FEE46478877_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		FirebaseApp_add_AppDisposed_m849DD816EFE8D669DBFA139254D5E3C4D8C78F85(L_2, L_3, NULL);
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_Finalize_m03DBF4DED5E098A1524E069DEA659A1C69867EAF (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, const RuntimeMethod* method) 
{
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
			FirebaseDatabase_Dispose_mA44D4A1381D0A1C3EE45303C037A86C2D51FC77B(__this, NULL);
			goto IL_0012;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::OnAppDisposed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_OnAppDisposed_mD10E03FDEC79697DD1B2A8AF1EB31FEE46478877 (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___eventArgs1, const RuntimeMethod* method) 
{
	{
		FirebaseDatabase_Dispose_mA44D4A1381D0A1C3EE45303C037A86C2D51FC77B(__this, NULL);
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_Dispose_mA44D4A1381D0A1C3EE45303C037A86C2D51FC77B (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m779C5AC4A5E010490E239608A033E7BD9F58CBEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_OnAppDisposed_mD10E03FDEC79697DD1B2A8AF1EB31FEE46478877_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		V_0 = __this;
		RuntimeObject* L_0 = V_0;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007c:
			{// begin finally (depth: 1)
				RuntimeObject* L_1 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* L_2 = __this->___internalDatabase_0;
				if (L_2)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_0083;
			}

IL_001e_1:
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
				Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* L_3 = ((FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var))->___databases_3;
				V_1 = L_3;
				RuntimeObject* L_4 = V_1;
				Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_4, NULL);
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0040_1:
					{// begin finally (depth: 2)
						RuntimeObject* L_5 = V_1;
						Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_5, NULL);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					il2cpp_codegen_runtime_class_init_inline(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
					Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* L_6 = ((FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var))->___databases_3;
					String_t* L_7 = __this->___name_1;
					NullCheck(L_6);
					bool L_8;
					L_8 = Dictionary_2_Remove_m779C5AC4A5E010490E239608A033E7BD9F58CBEA(L_6, L_7, Dictionary_2_Remove_m779C5AC4A5E010490E239608A033E7BD9F58CBEA_RuntimeMethod_var);
					goto IL_0047_1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0047_1:
			{
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_9;
				L_9 = FirebaseDatabase_get_App_mCAE467A1AD76CFC175A5988C1BACCBC684083B4E_inline(__this, NULL);
				EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_10 = (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)il2cpp_codegen_object_new(EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				EventHandler__ctor_m95444CE8D5A6F1AFC9793866C3FE884E732DCEB2(L_10, __this, (intptr_t)((void*)FirebaseDatabase_OnAppDisposed_mD10E03FDEC79697DD1B2A8AF1EB31FEE46478877_RuntimeMethod_var), NULL);
				NullCheck(L_9);
				FirebaseApp_remove_AppDisposed_mAAF77EA50314A467CBB4481448C72FA9B7173289(L_9, L_10, NULL);
				FirebaseDatabase_set_App_m7B018585E9B3FAC825B2B08A6943052AF6293D6C_inline(__this, (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)NULL, NULL);
				InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* L_11 = __this->___internalDatabase_0;
				NullCheck(L_11);
				VirtualActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalFirebaseDatabase::Dispose() */, L_11);
				__this->___internalDatabase_0 = (InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___internalDatabase_0), (void*)(InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B*)NULL);
				goto IL_0083;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0083:
	{
		return;
	}
}
// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseDatabase_get_App_mCAE467A1AD76CFC175A5988C1BACCBC684083B4E (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, const RuntimeMethod* method) 
{
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = __this->___U3CAppU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::set_App(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_set_App_m7B018585E9B3FAC825B2B08A6943052AF6293D6C (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___value0, const RuntimeMethod* method) 
{
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ___value0;
		__this->___U3CAppU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAppU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* FirebaseDatabase_GetInstance_m3A82477F818D8A66905C07C29DB036B63825DC8A (String_t* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0;
		L_0 = FirebaseApp_get_DefaultInstance_mCA6FC0DE0B25880FC6ACEAD5585ED84407690C61(NULL);
		V_0 = L_0;
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232* L_2 = (DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		DatabaseException__ctor_mAA398869C4ADA4E90F85E7B352065E7A17A88962(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50384A583A192C06635CCD8BE23070E725470116)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseDatabase_GetInstance_m3A82477F818D8A66905C07C29DB036B63825DC8A_RuntimeMethod_var)));
	}

IL_0017:
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_3 = V_0;
		String_t* L_4 = ___url0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_5;
		L_5 = FirebaseDatabase_GetInstance_m3130111FF320EA60C689B327E215DE013D73D872(L_3, L_4, NULL);
		return L_5;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* FirebaseDatabase_GetInstance_m3130111FF320EA60C689B327E215DE013D73D872 (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___app0, String_t* ___url1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mEEC01F0B32FCA1F893644B7E6077E6C865110B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m26B1CABA0C5F59C2AAD05FF2FD763761EFC16617_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* V_4 = NULL;
	{
		String_t* L_0 = ___url1;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232* L_2 = (DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		DatabaseException__ctor_mAA398869C4ADA4E90F85E7B352065E7A17A88962(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FBD1DB26924C1F6A36CB8F2F4850DE51995B3F9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseDatabase_GetInstance_m3130111FF320EA60C689B327E215DE013D73D872_RuntimeMethod_var)));
	}

IL_0016:
	{
		V_0 = (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960*)NULL;
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_3 = ___app0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = FirebaseApp_get_Name_m89C11F96726C8E4FD3CCAE04A5DC3129F7CD975E(L_3, NULL);
		String_t* L_5 = ___url1;
		String_t* L_6;
		L_6 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D, L_4, L_5, NULL);
		V_1 = L_6;
		il2cpp_codegen_runtime_class_init_inline(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* L_7 = ((FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var))->___databases_3;
		V_2 = L_7;
		RuntimeObject* L_8 = V_2;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_8, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008c:
			{// begin finally (depth: 1)
				RuntimeObject* L_9 = V_2;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_9, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
				Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* L_10 = ((FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var))->___databases_3;
				String_t* L_11 = V_1;
				NullCheck(L_10);
				bool L_12;
				L_12 = Dictionary_2_TryGetValue_mEEC01F0B32FCA1F893644B7E6077E6C865110B4A(L_10, L_11, (&V_0), Dictionary_2_TryGetValue_mEEC01F0B32FCA1F893644B7E6077E6C865110B4A_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0087_1;
				}
			}
			{
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_13 = ___app0;
				String_t* L_14 = ___url1;
				InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* L_15;
				L_15 = InternalFirebaseDatabase_GetInstanceInternal_mB1861CC018AC59029C70B833973F1218B8A3C767(L_13, L_14, (&V_3), NULL);
				V_4 = L_15;
				InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* L_16 = V_4;
				if (!L_16)
				{
					goto IL_0060_1;
				}
			}
			{
				int32_t L_17 = V_3;
				if (!L_17)
				{
					goto IL_006b_1;
				}
			}

IL_0060_1:
			{
				DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232* L_18 = (DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232_il2cpp_TypeInfo_var)));
				NullCheck(L_18);
				DatabaseException__ctor_mAA398869C4ADA4E90F85E7B352065E7A17A88962(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7AFB5B2F4FF415E9A57A58EEFBA6C5E92E3529C)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseDatabase_GetInstance_m3130111FF320EA60C689B327E215DE013D73D872_RuntimeMethod_var)));
			}

IL_006b_1:
			{
				FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_19 = ___app0;
				InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* L_20 = V_4;
				FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_21 = (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960*)il2cpp_codegen_object_new(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
				NullCheck(L_21);
				FirebaseDatabase__ctor_m7BD7F7529F58B3AC2DAE5662AA93DACCF4B6C7BE(L_21, L_19, L_20, NULL);
				V_0 = L_21;
				FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_22 = V_0;
				String_t* L_23 = V_1;
				NullCheck(L_22);
				L_22->___name_1 = L_23;
				Il2CppCodeGenWriteBarrier((void**)(&L_22->___name_1), (void*)L_23);
				il2cpp_codegen_runtime_class_init_inline(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
				Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* L_24 = ((FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var))->___databases_3;
				String_t* L_25 = V_1;
				FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_26 = V_0;
				NullCheck(L_24);
				Dictionary_2_set_Item_m26B1CABA0C5F59C2AAD05FF2FD763761EFC16617(L_24, L_25, L_26, Dictionary_2_set_Item_m26B1CABA0C5F59C2AAD05FF2FD763761EFC16617_RuntimeMethod_var);
			}

IL_0087_1:
			{
				goto IL_0093;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0093:
	{
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_27 = V_0;
		return L_27;
	}
}
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::GetReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* FirebaseDatabase_GetReference_mD5FB59E3CA12A055A376B26E1D6A94CF6B74C12F (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalFirebaseDatabase_t90FE0A8D94EC8C4A933C8C0849D49B025B84AA6B* L_0 = __this->___internalDatabase_0;
		String_t* L_1 = ___path0;
		NullCheck(L_0);
		InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904* L_2;
		L_2 = InternalFirebaseDatabase_GetReference_m86E6F0EF9294C4DB543B3248639B3EF2AF2E2D49(L_0, L_1, NULL);
		DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* L_3 = (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D*)il2cpp_codegen_object_new(DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DatabaseReference__ctor_m1AB02999A95E3B7FE6BEB2CCC941B0FC8EADC147(L_3, L_2, __this, NULL);
		return L_3;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase__cctor_m17BD28EC0209239B7E898AE44DBAA524478C4BE4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m221507942D7865AEEF5101ADD152C33188A27994_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF* L_0 = (Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF*)il2cpp_codegen_object_new(Dictionary_2_tC7676598510356955876D867191E1510F67CC1DF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m221507942D7865AEEF5101ADD152C33188A27994(L_0, Dictionary_2__ctor_m221507942D7865AEEF5101ADD152C33188A27994_RuntimeMethod_var);
		((FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var))->___databases_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960_il2cpp_TypeInfo_var))->___databases_3), (void*)L_0);
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
// System.Void Firebase.Database.DatabaseReference::.ctor(Firebase.Database.Internal.InternalDatabaseReference,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseReference__ctor_m1AB02999A95E3B7FE6BEB2CCC941B0FC8EADC147 (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904* ___internalRef0, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database1, const RuntimeMethod* method) 
{
	{
		InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904* L_0 = ___internalRef0;
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_1 = ___database1;
		Query__ctor_m57A7C7992A3CEF8448777374B308FFC72E83516A(__this, L_0, L_1, NULL);
		InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904* L_2 = ___internalRef0;
		__this->___internalReference_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___internalReference_4), (void*)L_2);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_3 = ___database1;
		DatabaseReference_set_Database_m2E45848FF8060F8D805ADB4892879771690D740C_inline(__this, L_3, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseReference::set_Database(Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseReference_set_Database_m2E45848FF8060F8D805ADB4892879771690D740C (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___value0, const RuntimeMethod* method) 
{
	{
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_0 = ___value0;
		__this->___U3CDatabaseU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDatabaseU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.String Firebase.Database.DatabaseReference::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseReference_ToString_mC43EB2D3C99EAF07116EBAD3CCCD2BE6037B8606 (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, const RuntimeMethod* method) 
{
	{
		InternalDatabaseReference_t03BE4E1D557B48D374268E7B319BD12894F06904* L_0 = __this->___internalReference_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InternalDatabaseReference_url_m74610E82DC38D4A79AAC85BD23C518AAE24D7A19(L_0, NULL);
		return L_1;
	}
}
// System.Boolean Firebase.Database.DatabaseReference::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseReference_Equals_mB96AC53247EB74CD6D3713588588BF3858C72E7A (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, RuntimeObject* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = ___other0;
		if (!((DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D*)IsInstSealed((RuntimeObject*)L_0, DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		RuntimeObject* L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		bool L_4;
		L_4 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_1, L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		return (bool)G_B3_0;
	}
}
// System.Int32 Firebase.Database.DatabaseReference::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DatabaseReference_GetHashCode_mAE101105F6D0C81635E79097D21CBF4A86E274EA (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
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
// System.Void Firebase.Database.DatabaseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseException__ctor_mAA398869C4ADA4E90F85E7B352065E7A17A88962 (DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseException__ctor_m30665E8EB8BE7EC9D7EF15D7B91CD3CD0FDDDB73 (DatabaseException_t136AB1D7986FFA974C2518DC8C67500267A86232* __this, String_t* ___message0, Exception_t* ___cause1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___cause1;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
// System.Void Firebase.Database.DatabaseError::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError__cctor_mF95F6365831C48C517CD8F09BB4FAE4441FFFF80 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F6206E2208D9F6410179E3B8BEA2DB7DD451983);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral161BB2E376DAB7BB196FA3BA56AF5F032401EDD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19F36D351EC83FFF1DD0BF540F6C887240DF749A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25A6C8E3033AB7B31F1A36176973EBF46D6AA102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25E3F07BC8A8E84E64CBFD59A39E44732195DF1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3510EE6CB670F44AE899467FD7C9F95DEEAD6A2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A25CDFF086AD2E7778FDE479EEAF3DE21276E5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C76C42E2293FDE8901D3D0BD00FBAEFFA8F224A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44786FF8D3D7A6BB34E47B8522E7CD903A39C81C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D6EFB72BB23F4AB919B7E784E88CE1219260B7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B52714C530B7F06A491E0453548C103378B3C0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62C3AC56F06281AA1091C7F369E54BD4F40ABCAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64D2CA5C491D2FD76E0C36ED2AFE1E4EF5CB4AC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8225BFBF19631D0C7DACACD3525BFCCACD852480);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96BAF0A0FD737C639C25139F7FF80E71EF03CC92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96BD8930E546DA8CF5E3CC8102CFF21E735B8CE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA430994825FFBD84C878DC4A3DE93644DAB6DC50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFBF46A4D1C5554966D208EBCB0AC7CF2297C3F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5E66B27E692259462C04D33AEF1271A6B5FC8D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC24BCEEB1EA72D694B1BED364734C5C838BE1FC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBF0B4029A0C9D8FAAC8C952057ED4B638E435A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2EE2E00A733D8F7B0857F92D87975D56CEE7145);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD3238FA21BFDF2546D17BB7E9E29EB72294946C);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9* L_0 = (Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9*)il2cpp_codegen_object_new(Dictionary_2_t291007AFA4B4075BA87D802F2E42017CB8C857C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4(L_0, Dictionary_2__ctor_mC854597C0C338BBA12EE451456D8658DF6D01BD4_RuntimeMethod_var);
		((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0), (void*)L_0);
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_1 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968(L_1, Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1), (void*)L_1);
		RuntimeObject* L_2 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_2, (-1), _stringLiteralC24BCEEB1EA72D694B1BED364734C5C838BE1FC9);
		RuntimeObject* L_3 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_3);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_3, ((int32_t)-2), _stringLiteral64D2CA5C491D2FD76E0C36ED2AFE1E4EF5CB4AC3);
		RuntimeObject* L_4 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_4);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_4, ((int32_t)-3), _stringLiteral161BB2E376DAB7BB196FA3BA56AF5F032401EDD2);
		RuntimeObject* L_5 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_5, ((int32_t)-4), _stringLiteralF2EE2E00A733D8F7B0857F92D87975D56CEE7145);
		RuntimeObject* L_6 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_6);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_6, ((int32_t)-6), _stringLiteralFD3238FA21BFDF2546D17BB7E9E29EB72294946C);
		RuntimeObject* L_7 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_7);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_7, ((int32_t)-7), _stringLiteral96BD8930E546DA8CF5E3CC8102CFF21E735B8CE5);
		RuntimeObject* L_8 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_8);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_8, ((int32_t)-8), _stringLiteral3A25CDFF086AD2E7778FDE479EEAF3DE21276E5C);
		RuntimeObject* L_9 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_9);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_9, ((int32_t)-9), _stringLiteral4D6EFB72BB23F4AB919B7E784E88CE1219260B7D);
		RuntimeObject* L_10 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_10, ((int32_t)-10), _stringLiteral8225BFBF19631D0C7DACACD3525BFCCACD852480);
		RuntimeObject* L_11 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_11);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_11, ((int32_t)-11), _stringLiteral62C3AC56F06281AA1091C7F369E54BD4F40ABCAD);
		RuntimeObject* L_12 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_12);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_12, ((int32_t)-24), _stringLiteralAFBF46A4D1C5554966D208EBCB0AC7CF2297C3F4);
		RuntimeObject* L_13 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_13);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_13, ((int32_t)-25), _stringLiteral25E3F07BC8A8E84E64CBFD59A39E44732195DF1B);
		RuntimeObject* L_14 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		NullCheck(L_14);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_14, ((int32_t)-999), _stringLiteral44786FF8D3D7A6BB34E47B8522E7CD903A39C81C);
		RuntimeObject* L_15 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_15);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_15, _stringLiteral3510EE6CB670F44AE899467FD7C9F95DEEAD6A2C, (-1));
		RuntimeObject* L_16 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_16);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_16, _stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1, ((int32_t)-2));
		RuntimeObject* L_17 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_17);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_17, _stringLiteral19F36D351EC83FFF1DD0BF540F6C887240DF749A, ((int32_t)-3));
		RuntimeObject* L_18 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_18);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_18, _stringLiteral5B52714C530B7F06A491E0453548C103378B3C0C, ((int32_t)-4));
		RuntimeObject* L_19 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_19);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_19, _stringLiteral0F6206E2208D9F6410179E3B8BEA2DB7DD451983, ((int32_t)-6));
		RuntimeObject* L_20 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_20);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_20, _stringLiteralDBF0B4029A0C9D8FAAC8C952057ED4B638E435A5, ((int32_t)-7));
		RuntimeObject* L_21 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_21);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_21, _stringLiteralA430994825FFBD84C878DC4A3DE93644DAB6DC50, ((int32_t)-8));
		RuntimeObject* L_22 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_22);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_22, _stringLiteral3C76C42E2293FDE8901D3D0BD00FBAEFFA8F224A, ((int32_t)-9));
		RuntimeObject* L_23 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_23);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_23, _stringLiteral25A6C8E3033AB7B31F1A36176973EBF46D6AA102, ((int32_t)-10));
		RuntimeObject* L_24 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_24);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_24, _stringLiteral96BAF0A0FD737C639C25139F7FF80E71EF03CC92, ((int32_t)-24));
		RuntimeObject* L_25 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorCodes_1;
		NullCheck(L_25);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_25, _stringLiteralB5E66B27E692259462C04D33AEF1271A6B5FC8D3, ((int32_t)-25));
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError__ctor_mADE8BF63184FF3A6B166B16C8B2C3890F4E2AA87 (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, int32_t ___code0, String_t* ___message1, String_t* ___details2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* G_B2_0 = NULL;
	DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* G_B3_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___code0;
		DatabaseError_set_Code_m4DA74376D7C9DA4348815E479A418C5130D83959_inline(__this, L_0, NULL);
		String_t* L_1 = ___message1;
		DatabaseError_set_Message_mF5D8EAD1111E14E48A24415621D5DFB6BDF6C5B0_inline(__this, L_1, NULL);
		String_t* L_2 = ___details2;
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0026;
	}

IL_0025:
	{
		String_t* L_4 = ___details2;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0026:
	{
		NullCheck(G_B3_1);
		DatabaseError_set_Details_m8AF923DAE6BEBE88C2F16B81C4F91C8FF75A2F3B_inline(G_B3_1, G_B3_0, NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError_set_Code_m4DA74376D7C9DA4348815E479A418C5130D83959 (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCodeU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String Firebase.Database.DatabaseError::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_m7D2C33D0913B955723BA70372B1FA894F3DE08CE (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError_set_Message_mF5D8EAD1111E14E48A24415621D5DFB6BDF6C5B0 (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Details(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError_set_Details_m8AF923DAE6BEBE88C2F16B81C4F91C8FF75A2F3B (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDetailsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDetailsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Int32 Firebase.Database.DatabaseError::ErrorToCode(Firebase.Database.Internal.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DatabaseError_ErrorToCode_m8800BAB6688436446F83E753B45B4A4F7E585C8E (int32_t ___error0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___error0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_004e;
			}
			case 4:
			{
				goto IL_0051;
			}
			case 5:
			{
				goto IL_0054;
			}
			case 6:
			{
				goto IL_0057;
			}
			case 7:
			{
				goto IL_005a;
			}
			case 8:
			{
				goto IL_005d;
			}
			case 9:
			{
				goto IL_0060;
			}
			case 10:
			{
				goto IL_0066;
			}
			case 11:
			{
				goto IL_0069;
			}
			case 12:
			{
				goto IL_0069;
			}
			case 13:
			{
				goto IL_0069;
			}
		}
	}
	{
		goto IL_0069;
	}

IL_0045:
	{
		return ((int32_t)-4);
	}

IL_0048:
	{
		return ((int32_t)-6);
	}

IL_004b:
	{
		return ((int32_t)-7);
	}

IL_004e:
	{
		return ((int32_t)-8);
	}

IL_0051:
	{
		return ((int32_t)-24);
	}

IL_0054:
	{
		return ((int32_t)-2);
	}

IL_0057:
	{
		return ((int32_t)-9);
	}

IL_005a:
	{
		return ((int32_t)-3);
	}

IL_005d:
	{
		return ((int32_t)-10);
	}

IL_0060:
	{
		return ((int32_t)-999);
	}

IL_0066:
	{
		return ((int32_t)-25);
	}

IL_0069:
	{
		return ((int32_t)-999);
	}
}
// Firebase.Database.DatabaseError Firebase.Database.DatabaseError::FromError(Firebase.Database.Internal.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* DatabaseError_FromError_m8B5FA9C9EF754565FA56A120D53480DAB952A580 (int32_t ___error0, String_t* ___msg1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* G_B4_0 = NULL;
	{
		int32_t L_0 = ___error0;
		il2cpp_codegen_runtime_class_init_inline(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DatabaseError_ErrorToCode_m8800BAB6688436446F83E753B45B4A4F7E585C8E(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = ___msg1;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_3 = ___msg1;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_002d;
		}
	}

IL_001d:
	{
		il2cpp_codegen_runtime_class_init_inline(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var))->___ErrorReasons_0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.Int32,System.String>::get_Item(TKey) */, IDictionary_2_tC7ECF58B3D8135C576609A46A8FB8D60D3EAB0BA_il2cpp_TypeInfo_var, L_6, L_7);
		G_B4_0 = L_8;
		goto IL_002e;
	}

IL_002d:
	{
		String_t* L_9 = ___msg1;
		G_B4_0 = L_9;
	}

IL_002e:
	{
		V_1 = G_B4_0;
		int32_t L_10 = V_0;
		String_t* L_11 = V_1;
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_12 = (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9*)il2cpp_codegen_object_new(DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		DatabaseError__ctor_mADE8BF63184FF3A6B166B16C8B2C3890F4E2AA87(L_12, L_10, L_11, (String_t*)NULL, NULL);
		return L_12;
	}
}
// System.String Firebase.Database.DatabaseError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseError_ToString_m055C002095D30932189163DF5A5AE178560BAE12 (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E1C42D303CEBFBB8A6EE62A43AC623CFA8EF06A);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = DatabaseError_get_Message_m7D2C33D0913B955723BA70372B1FA894F3DE08CE_inline(__this, NULL);
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral7E1C42D303CEBFBB8A6EE62A43AC623CFA8EF06A, L_0, NULL);
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
// System.Void Firebase.Database.DataSnapshot::.ctor(Firebase.Database.Internal.InternalDataSnapshot,Firebase.Database.FirebaseDatabase,Firebase.Database.DataSnapshot,Firebase.Database.DataSnapshot/DataSnapshotList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSnapshot__ctor_m07FBC7F4FEB965DA1F861834C467D4F2046A739B (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* ___internalSnapshot0, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database1, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___parentSnapshot2, DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7* ___parentList3, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_0 = ___internalSnapshot0;
		__this->___internalSnapshot_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___internalSnapshot_0), (void*)L_0);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_1 = ___database1;
		__this->___database_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___database_1), (void*)L_1);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_2 = ___parentSnapshot2;
		__this->___parentSnapshot_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parentSnapshot_2), (void*)L_2);
		DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7* L_3 = ___parentList3;
		__this->___parentList_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parentList_3), (void*)L_3);
		return;
	}
}
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::CreateSnapshot(Firebase.Database.Internal.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* DataSnapshot_CreateSnapshot_mB4F13FA3E4E46833D9780D7D8490423DF3148BCC (InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* ___internalSnapshot0, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___database1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_0 = ___internalSnapshot0;
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_1 = ___database1;
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_2 = (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A*)il2cpp_codegen_object_new(DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DataSnapshot__ctor_m07FBC7F4FEB965DA1F861834C467D4F2046A739B(L_2, L_0, L_1, (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A*)NULL, (DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7*)NULL, NULL);
		return L_2;
	}
}
// System.Object Firebase.Database.DataSnapshot::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSnapshot_get_Value_mF787DB763C81F79ED7CC2621AC49708EB8A6DBA2 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = DataSnapshot_GetValue_m8CE6C5E7DC1FA7DF2D3768351402A3071B43358C(__this, (bool)0, NULL);
		return L_0;
	}
}
// System.String Firebase.Database.DataSnapshot::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_get_Key_m71F6DF80BFBCFA8C9C2F2368AD5F6A44F5E70908 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) 
{
	{
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_0 = __this->___internalSnapshot_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InternalDataSnapshot_key_string_m1A510FDFBD689DCEFD22A223AEB1F66449566EBE(L_0, NULL);
		return L_1;
	}
}
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* DataSnapshot_Child_m308ABEC425ADE01909B1A318D61DC965802EF64C (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_0 = __this->___internalSnapshot_0;
		String_t* L_1 = ___path0;
		NullCheck(L_0);
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_2;
		L_2 = InternalDataSnapshot_Child_mBF5A8FD2325A4C76C65213DFF3DF01A8A3DF5D1F(L_0, L_1, NULL);
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_3 = __this->___database_1;
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_4 = (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A*)il2cpp_codegen_object_new(DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DataSnapshot__ctor_m07FBC7F4FEB965DA1F861834C467D4F2046A739B(L_4, L_2, L_3, __this, (DataSnapshotList_t507B53E9191BB3AF6C5884F76D37DDE0FA99B5C7*)NULL, NULL);
		return L_4;
	}
}
// System.Object Firebase.Database.DataSnapshot::GetValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSnapshot_GetValue_m8CE6C5E7DC1FA7DF2D3768351402A3071B43358C (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, bool ___useExportFormat0, const RuntimeMethod* method) 
{
	{
		InternalDataSnapshot_tB517604D8CCD159FA2AF47CB50694C380486AC4A* L_0 = __this->___internalSnapshot_0;
		NullCheck(L_0);
		Variant_t90BF6FF4942F60EB844D3C90213E72E9D4240F1C* L_1;
		L_1 = InternalDataSnapshot_value_m394E5BB7C642E4687D677B249DFAA622338E0268(L_0, NULL);
		RuntimeObject* L_2;
		L_2 = VariantExtension_ToObject_m5886091BA12BE41013A6ED0FFF8984372DA80D2F(L_1, 1, NULL);
		return L_2;
	}
}
// System.String Firebase.Database.DataSnapshot::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_ToString_m6BC5EFD78A962DE07A12D64ED72E0B4A68782E19 (DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39CDEA6B946A8A860CA9A58EB2AEF44708FC2201);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral574D4F4FA47FACD0AB8D24AF1E018B029160B79D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB9DEC4BB422E4FB7D60AF8B79864395C4E9AF83);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral574D4F4FA47FACD0AB8D24AF1E018B029160B79D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral574D4F4FA47FACD0AB8D24AF1E018B029160B79D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = DataSnapshot_get_Key_m71F6DF80BFBCFA8C9C2F2368AD5F6A44F5E70908(__this, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral39CDEA6B946A8A860CA9A58EB2AEF44708FC2201);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral39CDEA6B946A8A860CA9A58EB2AEF44708FC2201);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		RuntimeObject* L_6;
		L_6 = DataSnapshot_get_Value_mF787DB763C81F79ED7CC2621AC49708EB8A6DBA2(__this, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralCB9DEC4BB422E4FB7D60AF8B79864395C4E9AF83);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralCB9DEC4BB422E4FB7D60AF8B79864395C4E9AF83);
		String_t* L_8;
		L_8 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_7, NULL);
		return L_8;
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
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DataSnapshot,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_m8D4FB933484AE04658CA020AA78973B8D417A013 (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___snapshot0, String_t* ___previousChildName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		String_t* L_0 = ___previousChildName1;
		ChildChangedEventArgs_set_PreviousChildName_mA8CB8F8600798C3A3355233B9DEAA30E12D5B4D3_inline(__this, L_0, NULL);
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_1 = ___snapshot0;
		ChildChangedEventArgs_set_Snapshot_m3C081820094FC6F71F880867072C0C451E44F5FD_inline(__this, L_1, NULL);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_mCE05C1743B7236D84ADFC50D1DC746D205C7E4CC (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_0 = ___error0;
		ChildChangedEventArgs_set_DatabaseError_mF145AE36CB0516ACADD912A548765222B56AABF2_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_Snapshot_m3C081820094FC6F71F880867072C0C451E44F5FD (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___value0, const RuntimeMethod* method) 
{
	{
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_0 = ___value0;
		__this->___U3CSnapshotU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSnapshotU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_DatabaseError_mF145AE36CB0516ACADD912A548765222B56AABF2 (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___value0, const RuntimeMethod* method) 
{
	{
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_0 = ___value0;
		__this->___U3CDatabaseErrorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDatabaseErrorU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_PreviousChildName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_PreviousChildName_mA8CB8F8600798C3A3355233B9DEAA30E12D5B4D3 (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CPreviousChildNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPreviousChildNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____handle_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m5E846E072C7551A5B7382CBFFE1BB3C990FB9FA1_inline (Action_tE1A62721D33024AA04A0D26A91C78B47D4242FFA* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_Snapshot_m664FEFFC667D86C6E261AB06D9325FC09EBF1449_inline (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___value0, const RuntimeMethod* method) 
{
	{
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_0 = ___value0;
		__this->___U3CSnapshotU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSnapshotU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_DatabaseError_m289AF8CCA253CF21C307135423350D1BE212169E_inline (ValueChangedEventArgs_t8E15F0CB1F83812A628870BF56E2CC5BF56A2FBB* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___value0, const RuntimeMethod* method) 
{
	{
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_0 = ___value0;
		__this->___U3CDatabaseErrorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDatabaseErrorU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseDatabase_set_App_m7B018585E9B3FAC825B2B08A6943052AF6293D6C_inline (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___value0, const RuntimeMethod* method) 
{
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = ___value0;
		__this->___U3CAppU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAppU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseDatabase_get_App_mCAE467A1AD76CFC175A5988C1BACCBC684083B4E_inline (FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* __this, const RuntimeMethod* method) 
{
	{
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_0 = __this->___U3CAppU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseReference_set_Database_m2E45848FF8060F8D805ADB4892879771690D740C_inline (DatabaseReference_tD6F9941BEAE8109991B814490DA64099EECBFA6D* __this, FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* ___value0, const RuntimeMethod* method) 
{
	{
		FirebaseDatabase_t39655E1CF62FCA36F81637138EABB8E0E88FF960* L_0 = ___value0;
		__this->___U3CDatabaseU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDatabaseU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Code_m4DA74376D7C9DA4348815E479A418C5130D83959_inline (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCodeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Message_mF5D8EAD1111E14E48A24415621D5DFB6BDF6C5B0_inline (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Details_m8AF923DAE6BEBE88C2F16B81C4F91C8FF75A2F3B_inline (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDetailsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDetailsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_m7D2C33D0913B955723BA70372B1FA894F3DE08CE_inline (DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_PreviousChildName_mA8CB8F8600798C3A3355233B9DEAA30E12D5B4D3_inline (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CPreviousChildNameU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPreviousChildNameU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_Snapshot_m3C081820094FC6F71F880867072C0C451E44F5FD_inline (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* ___value0, const RuntimeMethod* method) 
{
	{
		DataSnapshot_tF8B2EB3F4F07CDF924E0D65F31933D4F333F0C3A* L_0 = ___value0;
		__this->___U3CSnapshotU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSnapshotU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_DatabaseError_mF145AE36CB0516ACADD912A548765222B56AABF2_inline (ChildChangedEventArgs_t8791D1660D2DB8C77665D885F1FD6CB230468937* __this, DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* ___value0, const RuntimeMethod* method) 
{
	{
		DatabaseError_tFD978352951107742E3BC2F2D2BA135C388722D9* L_0 = ___value0;
		__this->___U3CDatabaseErrorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDatabaseErrorU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
