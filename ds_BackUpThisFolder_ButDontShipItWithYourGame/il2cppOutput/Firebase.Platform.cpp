﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>
struct Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>
struct EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.String>
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t0AFD6CF8DF742647C96B2C7BB9E9FAE42538D551;
// System.Collections.Generic.IEnumerator`1<System.Exception>
struct IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IList`1<System.Exception>
struct IList_1_t584E66CD0123CFB6503AC3E597748948194AAA5E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct KeyCollection_tB7504948EAC2AECFD233197DBE83D74D0D12CFA8;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Threading.ManualResetEvent>
struct KeyCollection_t4F700C23BDF1E14E2E52EBA12576364A2B59E406;
// System.Collections.Generic.List`1<System.Exception>
struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// Firebase.Platform.MainThreadProperty`1<System.Boolean>
struct MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97;
// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>
struct Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6;
// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>
struct Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct ValueCollection_t87759E63E3496C207528111673C9A61DA2471344;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Threading.ManualResetEvent>
struct ValueCollection_t04637302418E50CC664F5763757EFA471396883C;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>[]
struct EntryU5BU5D_t88D79B5C078B734AE8BB3266E34E12AF08FCEEEF;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Threading.ManualResetEvent>[]
struct EntryU5BU5D_tEAD5EF40B7E79B2A5CB55F4135EC117EAC616F9A;
// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>[]
struct Tuple_2U5BU5D_t075A6E3BE33C4C5967544F6B2DA4381897C13E08;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Exception[]
struct ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F;
// Firebase.Platform.Default.AppConfigExtensions
struct AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// Firebase.Platform.DebugLogger
struct DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Firebase.Dispatcher
struct Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// System.Exception
struct Exception_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// Firebase.Platform.FirebaseAppUtilsStub
struct FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02;
// Firebase.Platform.FirebaseHandler
struct FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586;
// Firebase.Platform.FirebaseMonoBehaviour
struct FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Firebase.Platform.IAppConfigExtensions
struct IAppConfigExtensions_t2BC1AFEF8FF5F2A7D5B45F23000CEE8FEE376418;
// Firebase.Platform.IClockService
struct IClockService_t62FFADE4F3DABB6EBE3869EEBE8C577963F1A026;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Firebase.Platform.IFirebaseAppUtils
struct IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391;
// Firebase.Platform.ILoggingService
struct ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.MulticastDelegate
struct MulticastDelegate_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// Firebase.Platform.Default.SystemClock
struct SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Type
struct Type_t;
// Firebase.Platform.Default.UnityConfigExtensions
struct UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152;
// Firebase.Unity.UnityLoggingService
struct UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB;
// Firebase.Unity.UnitySynchronizationContext
struct UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_tE0DE36700D110F4D267B26686541ABCF9588A6DD;
// Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0
struct U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE;
// Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs
struct ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD;
// Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3
struct U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB;
// Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4
struct U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D;
// Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1
struct U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C;
// Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey2
struct U3CSendCoroutineU3Ec__AnonStorey2_tF3318E0B5D0C9626BEE7239B69C936A6ADEB446E;
// Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0
struct U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC;
// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir
struct SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0
struct U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTraceLogType_t2AD431F7181A4203AAE2D538963997CB3A917DF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7Bf1ff318eU2D91e6U2D436aU2D9a52U2Dac02be4f7d0eU7D_t54B8FF32EAD70318A421BB5FB5ECE4E1E50CE79C____U24fieldU2D0_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6;
IL2CPP_EXTERN_C String_t* _stringLiteral174B9BBC1D59366161BECBD73C2048B5A97F4837;
IL2CPP_EXTERN_C String_t* _stringLiteral28C266F303F178CE0931272538E30F328A704472;
IL2CPP_EXTERN_C String_t* _stringLiteral3433AED96C62C86E15C34BD631F69FC3120A45E7;
IL2CPP_EXTERN_C String_t* _stringLiteral41C3A91ACED7A15B540EECC0D39B93A9C07B959D;
IL2CPP_EXTERN_C String_t* _stringLiteral57B9206E5BA716A0B4139531B38C1431A85E8D8B;
IL2CPP_EXTERN_C String_t* _stringLiteral5A00A52D746A79D3B1B788CFBF70D40C304302E1;
IL2CPP_EXTERN_C String_t* _stringLiteral60FB63D7E83627D00092C51BE9FCDAAE7EC01CF5;
IL2CPP_EXTERN_C String_t* _stringLiteral69A7A27A97142E232EA28BA2557E507697865243;
IL2CPP_EXTERN_C String_t* _stringLiteral7F900F58C3A67CA9C0902E5993677B7671078EDE;
IL2CPP_EXTERN_C String_t* _stringLiteral896A2A117718A23135B6923C80A00C014390CF99;
IL2CPP_EXTERN_C String_t* _stringLiteral947107DA743C5DEC8247B198CC466791C8222A85;
IL2CPP_EXTERN_C String_t* _stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6;
IL2CPP_EXTERN_C String_t* _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253;
IL2CPP_EXTERN_C String_t* _stringLiteralDB797A4D97C7FD6146460C6DC4591BE1D9CE6A0B;
IL2CPP_EXTERN_C String_t* _stringLiteralF906AF52934523A28A29533224E8CEEDAC1486F2;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m523AD6A503FCF15DD28F0785FAE73C3A78F80048_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4FB85806B2D5CF8ED85E32F65BEF2CB51759EC9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m72D8077DA89EFD2BE1F61E6BE812DFB87A61CE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m028C4569FA346D1EB7C69F4597C31397F0C6F884_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExceptionAggregator_ThrowAndClearPendingExceptions_m5678256804A44705C715EC54446D8F973C4029A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseEditorDispatcher_ListenToPlayState_m26460E4F581DC3A701E81F1031D0B8FFFDFA8975_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseEditorDispatcher_PlayModeStateChanged_mEBABF2E4EC5AFD6F6ED10B2471759E9531DE011C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseEditorDispatcher_Update_mF6AC2EC58DD196A30C1D9A95B37546F193E4214A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseEditorDispatcher_get_EditorApplicationType_m744C3F7A8A4F0111A7428A471FF1832EE21E9F4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8C4725C3DF7F1159BEF2DA709A93954C5B7AFD18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_RunOnMainThread_TisString_t_m770F390A79BCDA0CEAFB59AC51FE1229DA1A504C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_U3CStopMonoBehaviourU3Em__0_m7DB65876BB737146E6D9DF00E6204630555FCEA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_U3CUpdateU3Em__1_m5E9FD5D8FC63F7B6B73F590E633BB07CE39710B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseLogger_CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs_mC97D0928657EF657E397290DA97756027989B96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72_m28C6532E1F1B457178DAAA19892CC93D9FDFF73A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA_m8EBC722B106AE0F77C444EF03B1FC8478BF9E7D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m77AB6DB3A46250AD8149B5CB7B5768D64D3F4012_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m0B7B24FBD852FDE8C9EEC3AC5A3AD4E932EB6674_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD910536376B8EBB5BDB30088BE4FE395391592F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8915FA10115EA488EBCCFED6C74E11364E162A23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlatformInformation_U3Cget_DefaultConfigLocationU3Em__0_mB7D05CFBAD9DFFA0789DF9735A497582C3AAD37F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlatformInformation_U3Cget_RuntimeVersionU3Em__1_m3634742A6E7BAE70524BA137CE7395CF267EDE4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m9F03297B32A022B56794CC307F0AF365210C556A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m47B0A189B0B33BCBCF55992AAF6D5C4ABE7F5E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCB766C7ACAE78532567A3CDC0DB2F2F7613E1701_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m2948F9B0BD57935D7584835A97B91C98252B42B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2__ctor_m23CDE129D3AD4479E1302E40EF73080C8632534F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_m057128974F4A74EDE05F93B5652F2B6D5ECA5DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_U3CU3Em__0_m75CC84232DD114BBF6CACE54B45DB3668274556C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendU3Ec__AnonStorey4_U3CU3Em__0_m69DFDB921B19E4E00EEDF3FB22AD93087791EC09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C;
struct LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t470C01FFE5A91E977C611A22059B0CD8B99DB7F3 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t88D79B5C078B734AE8BB3266E34E12AF08FCEEEF* ____entries_1;
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
	KeyCollection_tB7504948EAC2AECFD233197DBE83D74D0D12CFA8* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t87759E63E3496C207528111673C9A61DA2471344* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>
struct Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEAD5EF40B7E79B2A5CB55F4135EC117EAC616F9A* ____entries_1;
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
	KeyCollection_t4F700C23BDF1E14E2E52EBA12576364A2B59E406* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t04637302418E50CC664F5763757EFA471396883C* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Exception>
struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
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

// Firebase.Platform.MainThreadProperty`1<System.Boolean>
struct MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97  : public RuntimeObject
{
	// System.Func`1<T> Firebase.Platform.MainThreadProperty`1::getPropertyDelegate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___getPropertyDelegate_0;
	// System.Int32 Firebase.Platform.MainThreadProperty`1::lastGetPropertyTickCount
	int32_t ___lastGetPropertyTickCount_1;
	// T Firebase.Platform.MainThreadProperty`1::cachedValue
	bool ___cachedValue_2;
};

// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>
struct Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	Tuple_2U5BU5D_t075A6E3BE33C4C5967544F6B2DA4381897C13E08* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject* ___m_Item2_1;
};

// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>
struct Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject* ___m_Item2_1;
};

// Firebase.Platform.Default.AppConfigExtensions
struct AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48  : public RuntimeObject
{
};

struct AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields
{
	// System.Uri Firebase.Platform.Default.AppConfigExtensions::DefaultUpdateUrl
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___DefaultUpdateUrl_0;
	// System.String Firebase.Platform.Default.AppConfigExtensions::Default
	String_t* ___Default_1;
	// System.Object Firebase.Platform.Default.AppConfigExtensions::Sync
	RuntimeObject* ___Sync_2;
	// Firebase.Platform.Default.AppConfigExtensions Firebase.Platform.Default.AppConfigExtensions::_instance
	AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* ____instance_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>> Firebase.Platform.Default.AppConfigExtensions::SStringState
	Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* ___SStringState_4;
};
struct Il2CppArrayBounds;

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// Firebase.Platform.DebugLogger
struct DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1  : public RuntimeObject
{
};

struct DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_StaticFields
{
	// Firebase.Platform.DebugLogger Firebase.Platform.DebugLogger::_instance
	DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* ____instance_0;
};

// Firebase.Dispatcher
struct Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6  : public RuntimeObject
{
	// System.Int32 Firebase.Dispatcher::ownerThreadId
	int32_t ___ownerThreadId_0;
	// System.Collections.Generic.Queue`1<System.Action> Firebase.Dispatcher::queue
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* ___queue_1;
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

// Firebase.ExceptionAggregator
struct ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3  : public RuntimeObject
{
};

struct ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_ThreadStaticFields
{
	// System.Collections.Generic.List`1<System.Exception> Firebase.ExceptionAggregator::threadLocalExceptions
	List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* ___threadLocalExceptions_0;
};

// Firebase.Platform.FirebaseAppUtilsStub
struct FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02  : public RuntimeObject
{
};

struct FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_StaticFields
{
	// Firebase.Platform.FirebaseAppUtilsStub Firebase.Platform.FirebaseAppUtilsStub::_instance
	FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* ____instance_0;
};

// Firebase.Platform.FirebaseEditorDispatcher
struct FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C  : public RuntimeObject
{
};

struct FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields
{
	// System.Action Firebase.Platform.FirebaseEditorDispatcher::<>f__mg$cache0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3Ef__mgU24cache0_0;
	// System.Action Firebase.Platform.FirebaseEditorDispatcher::<>f__mg$cache1
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3Ef__mgU24cache1_1;
	// System.Action Firebase.Platform.FirebaseEditorDispatcher::<>f__mg$cache2
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3Ef__mgU24cache2_2;
};

// Firebase.Platform.FirebaseHandler
struct FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586  : public RuntimeObject
{
	// System.Boolean Firebase.Platform.FirebaseHandler::<IsPlayMode>k__BackingField
	bool ___U3CIsPlayModeU3Ek__BackingField_4;
	// System.EventHandler`1<System.EventArgs> Firebase.Platform.FirebaseHandler::Updated
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___Updated_6;
	// System.Action Firebase.Platform.FirebaseHandler::UpdatedEventWrapper
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___UpdatedEventWrapper_7;
	// System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs> Firebase.Platform.FirebaseHandler::ApplicationFocusChanged
	EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* ___ApplicationFocusChanged_8;
};

struct FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields
{
	// Firebase.Platform.FirebaseMonoBehaviour Firebase.Platform.FirebaseHandler::firebaseMonoBehaviour
	FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* ___firebaseMonoBehaviour_0;
	// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler::<AppUtils>k__BackingField
	RuntimeObject* ___U3CAppUtilsU3Ek__BackingField_1;
	// System.Int32 Firebase.Platform.FirebaseHandler::tickCount
	int32_t ___tickCount_2;
	// Firebase.Dispatcher Firebase.Platform.FirebaseHandler::<ThreadDispatcher>k__BackingField
	Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* ___U3CThreadDispatcherU3Ek__BackingField_3;
	// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::firebaseHandler
	FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* ___firebaseHandler_5;
	// System.Func`1<System.Boolean> Firebase.Platform.FirebaseHandler::<>f__am$cache0
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3Ef__amU24cache0_9;
};

// Firebase.Platform.FirebaseLogger
struct FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42  : public RuntimeObject
{
};

struct FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields
{
	// Firebase.Platform.MainThreadProperty`1<System.Boolean> Firebase.Platform.FirebaseLogger::incompatibleStackUnwindingEnabled
	MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* ___incompatibleStackUnwindingEnabled_0;
	// System.Func`1<System.Boolean> Firebase.Platform.FirebaseLogger::<>f__mg$cache0
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3Ef__mgU24cache0_1;
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

// Firebase.Platform.PlatformInformation
struct PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94  : public RuntimeObject
{
};

struct PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields
{
	// System.String Firebase.Platform.PlatformInformation::runtimeVersion
	String_t* ___runtimeVersion_0;
	// System.Single Firebase.Platform.PlatformInformation::<RealtimeSinceStartupSafe>k__BackingField
	float ___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1;
	// System.Func`1<System.String> Firebase.Platform.PlatformInformation::<>f__am$cache0
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___U3CU3Ef__amU24cache0_2;
	// System.Func`1<System.String> Firebase.Platform.PlatformInformation::<>f__am$cache1
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___U3CU3Ef__amU24cache1_3;
};

// Firebase.Platform.Services
struct Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E  : public RuntimeObject
{
};

struct Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields
{
	// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::<AppConfig>k__BackingField
	RuntimeObject* ___U3CAppConfigU3Ek__BackingField_0;
	// Firebase.Platform.IClockService Firebase.Platform.Services::<Clock>k__BackingField
	RuntimeObject* ___U3CClockU3Ek__BackingField_1;
	// Firebase.Platform.ILoggingService Firebase.Platform.Services::<Logging>k__BackingField
	RuntimeObject* ___U3CLoggingU3Ek__BackingField_2;
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

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
};

// Firebase.Platform.Default.SystemClock
struct SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13  : public RuntimeObject
{
};

struct SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_StaticFields
{
	// Firebase.Platform.IClockService Firebase.Platform.Default.SystemClock::Instance
	RuntimeObject* ___Instance_0;
};

// Firebase.Unity.UnityLoggingService
struct UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB  : public RuntimeObject
{
};

struct UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_StaticFields
{
	// Firebase.Unity.UnityLoggingService Firebase.Unity.UnityLoggingService::_instance
	UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* ____instance_0;
};

// Firebase.Unity.UnityPlatformServices
struct UnityPlatformServices_t7D48ED4FE484C77B2D6E77155BF53BFFD6BC60B4  : public RuntimeObject
{
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;
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
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
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

// Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0
struct U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE  : public RuntimeObject
{
	// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0::appUtils
	RuntimeObject* ___appUtils_0;
};

// Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3
struct U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB  : public RuntimeObject
{
	// System.Threading.SendOrPostCallback Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3::d
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___d_0;
};

// Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4
struct U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D  : public RuntimeObject
{
	// System.Threading.ManualResetEvent Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4::newSignal
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___newSignal_0;
	// Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3 Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4::<>f__ref$3
	U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB* ___U3CU3Ef__refU243_1;
};

// Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1
struct U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C  : public RuntimeObject
{
};

// Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey2
struct U3CSendCoroutineU3Ec__AnonStorey2_tF3318E0B5D0C9626BEE7239B69C936A6ADEB446E  : public RuntimeObject
{
};

// Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0
struct U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC  : public RuntimeObject
{
	// System.Func`1<System.Collections.IEnumerator> Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::coroutine
	Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* ___coroutine_0;
	// System.Threading.ManualResetEvent Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::newSignal
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___newSignal_1;
	// System.Object Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::$current
	RuntimeObject* ___U24current_2;
	// System.Boolean Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::$PC
	int32_t ___U24PC_4;
};

// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0
struct U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68  : public RuntimeObject
{
	// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::<entry>__0
	Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* ___U3CentryU3E__0_0;
	// System.Object Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$locvar0
	RuntimeObject* ___U24locvar0_1;
	// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$this
	SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* ___U24this_2;
	// System.Object Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$current
	RuntimeObject* ___U24current_3;
	// System.Boolean Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$PC
	int32_t ___U24PC_5;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Reflection.EventInfo
struct EventInfo_t  : public MemberInfo_t
{
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_tE0DE36700D110F4D267B26686541ABCF9588A6DD* ___cached_add_event_0;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// Firebase.Platform.Default.UnityConfigExtensions
struct UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152  : public AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48
{
};

struct UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields
{
	// Firebase.Platform.Default.UnityConfigExtensions Firebase.Platform.Default.UnityConfigExtensions::_instance
	UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* ____instance_5;
};

// Firebase.Unity.UnitySynchronizationContext
struct UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690  : public SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0
{
	// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext::queue
	Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* ___queue_2;
	// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir Firebase.Unity.UnitySynchronizationContext::behavior
	SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* ___behavior_3;
	// System.Int32 Firebase.Unity.UnitySynchronizationContext::mainThreadId
	int32_t ___mainThreadId_4;
};

struct UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields
{
	// Firebase.Unity.UnitySynchronizationContext Firebase.Unity.UnitySynchronizationContext::_instance
	UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* ____instance_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent> Firebase.Unity.UnitySynchronizationContext::signalDictionary
	Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* ___signalDictionary_5;
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

// <PrivateImplementationDetails>{f1ff318e-91e6-436a-9a52-ac02be4f7d0e}/$ArrayType=20
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D20_tE46FE4B62B2712F036B53CB84CBD53BFB6EEC1A8 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D20_tE46FE4B62B2712F036B53CB84CBD53BFB6EEC1A8__padding[20];
	};
};
#pragma pack(pop, tp)

// Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs
struct ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Boolean Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::<HasFocus>k__BackingField
	bool ___U3CHasFocusU3Ek__BackingField_1;
};

// <PrivateImplementationDetails>{f1ff318e-91e6-436a-9a52-ac02be4f7d0e}
struct U3CPrivateImplementationDetailsU3EU7Bf1ff318eU2D91e6U2D436aU2D9a52U2Dac02be4f7d0eU7D_t54B8FF32EAD70318A421BB5FB5ECE4E1E50CE79C  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3EU7Bf1ff318eU2D91e6U2D436aU2D9a52U2Dac02be4f7d0eU7D_t54B8FF32EAD70318A421BB5FB5ECE4E1E50CE79C_StaticFields
{
	// <PrivateImplementationDetails>{f1ff318e-91e6-436a-9a52-ac02be4f7d0e}/$ArrayType=20 <PrivateImplementationDetails>{f1ff318e-91e6-436a-9a52-ac02be4f7d0e}::$field-0
	U24ArrayTypeU3D20_tE46FE4B62B2712F036B53CB84CBD53BFB6EEC1A8 ___U24fieldU2D0_0;
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

// UnityEngine.LogType
struct LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331 
{
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F  : public Exception_t
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* ___m_innerExceptions_18;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
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

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>
struct EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`1<System.String>
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158  : public EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E
{
};

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Firebase.Platform.FirebaseMonoBehaviour
struct FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir
struct SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::callbackQueue
	Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* ___callbackQueue_4;
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.LogType[]
struct LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063  : public RuntimeArray
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
// System.Exception[]
struct ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C  : public RuntimeArray
{
	ALIGN_FIELD (8) Exception_t* m_Items[1];

	inline Exception_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Exception_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Exception_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Exception_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Exception_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Exception_t* value)
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


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Boolean>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8C4725C3DF7F1159BEF2DA709A93954C5B7AFD18_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___f0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) ;
// T Firebase.Platform.MainThreadProperty`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42_gshared (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.MainThreadProperty`1<System.Boolean>::.ctor(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083_gshared (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___getPropertyDelegate0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Object>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseHandler_RunOnMainThread_TisRuntimeObject_mFBD9852B378F327A1BBA92DD45B4E2F0ABAB2CF1_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___f0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Tuple`2<System.Object,System.Object>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489_gshared (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, RuntimeObject* ___item10, RuntimeObject* ___item21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T1 System.Tuple`2<System.Object,System.Object>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) ;
// T2 System.Tuple`2<System.Object,System.Object>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m487A0501D6F875A04F7D8F93F1CB3C813994AA64_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Type Firebase.Platform.FirebaseEditorDispatcher::get_EditorApplicationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* FirebaseEditorDispatcher_get_EditorApplicationType_m744C3F7A8A4F0111A7428A471FF1832EE21E9F4F (const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseEditorDispatcher::AddRemoveCallbackToField(System.Reflection.FieldInfo,System.Action,System.Object,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_AddRemoveCallbackToField_mDA1FE1B11F0931F52F72E71C495E2CB124F0F33B (FieldInfo_t* ___eventField0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, RuntimeObject* ___target2, bool ___add3, String_t* ___errorMessage4, const RuntimeMethod* method) ;
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::get_DefaultInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* FirebaseHandler_get_DefaultInstance_mAE0FC8CDB594816EE0DC5A552501A20500655F1E_inline (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_Update_mDBFD412D735E6C3F328C9BA3E5B3C5ECFBF49138 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) ;
// System.Reflection.EventInfo System.Type::GetEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventInfo_t* Type_GetEvent_mB4D71EF747D967D102846CB4FADA5DA0291E6A83 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_CreateDelegate_m54D60E94C8F2D3C551E447D63FE7F549A6FEBECD (Type_t* ___type0, RuntimeObject* ___firstArgument1, MethodInfo_t* ___method2, const RuntimeMethod* method) ;
// System.Boolean Firebase.Platform.FirebaseHandler::get_IsPlayMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96_inline (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) ;
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlaying_m1E0AD5FC35B4CC8CBF3CB9C979888AF2385B167A (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StopEditorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StopEditorUpdate_mEBA51CC256D7E6F74C078B41991EC7E16406FCB2 (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::StartMonoBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_StartMonoBehaviour_m27FB410A511845F73EE29218BDEA9CEEAB1D5246 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::set_IsPlayMode(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29_inline (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlayingOrWillChangePlaymode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlayingOrWillChangePlaymode_mDE6D686F4F53DAAD26C63F42F5D75A04F82FF1EA (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::StopMonoBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_StopMonoBehaviour_m6D5F532432F18CE6837F27A0FA9D586F55947451 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StartEditorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StartEditorUpdate_m0C8119B5324DE93D01358924686F0E5277AB4A9D (const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019 (Delegate_t* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseLogger::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger_LogMessage_mD75A87D37AD77AC7BF0463C48DDD46E7901B0106 (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method) ;
// Firebase.Platform.FirebaseAppUtilsStub Firebase.Platform.FirebaseAppUtilsStub::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* FirebaseAppUtilsStub_get_Instance_m361D43B0066F8C3067E898965964328EC136E74A_inline (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::set_AppUtils(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_AppUtils_m3CF4CEF8A89CB92676CDEAC04E59850DAFB651BA_inline (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234 (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseEditorDispatcher::ListenToPlayState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_ListenToPlayState_m26460E4F581DC3A701E81F1031D0B8FFFDFA8975 (bool ___start0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Firebase.Platform.FirebaseMonoBehaviour>()
inline FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* GameObject_AddComponent_TisFirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72_m28C6532E1F1B457178DAAA19892CC93D9FDFF73A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Create(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Create_m038F4C4C5A084C760A9340693B303F211FB3F3E4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Boolean>(System.Func`1<TResult>)
inline bool FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8C4725C3DF7F1159BEF2DA709A93954C5B7AFD18 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___f0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8C4725C3DF7F1159BEF2DA709A93954C5B7AFD18_gshared)(___f0, method);
}
// System.Void Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreatePartialOnMainThreadU3Ec__AnonStorey0__ctor_mB6F31B16A48F50779D897ECE03524D288058DF46 (U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::CreatePartialOnMainThread(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_CreatePartialOnMainThread_mCB214362F224CAD869C9563A1AD92CFBC3B4AF6F (RuntimeObject* ___appUtils0, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnityPlatformServices::SetupServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPlatformServices_SetupServices_m8BC0FADC50ED15B12820FA8AD44AD7599728DAB4 (const RuntimeMethod* method) ;
// Firebase.Dispatcher Firebase.Platform.FirebaseHandler::get_ThreadDispatcher()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* FirebaseHandler_get_ThreadDispatcher_mF4FACC8630771208FCF0A6E4ADBD9DE2B92623E3_inline (const RuntimeMethod* method) ;
// System.Void Firebase.Dispatcher::PollJobs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_PollJobs_m90DF848D76273E55DB08A80E9C246E9E92E931CE (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* __this, const RuntimeMethod* method) ;
// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler::get_AppUtils()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FirebaseHandler_get_AppUtils_mD317C324F3E2F6D3260E1CEAA946847BAB91BC2C_inline (const RuntimeMethod* method) ;
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m0B206615C9C9608E5D2CC1738CB2056F121811FB (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Void Firebase.ExceptionAggregator::ThrowAndClearPendingExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_ThrowAndClearPendingExceptions_m5678256804A44705C715EC54446D8F973C4029A6 (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs__ctor_m839E74DC0C6B72AB8A768A2D23F32ECE4A3B39AE (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::set_HasFocus(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs_set_HasFocus_m144DF1C01B04C22AC4C98A06E2FE88E89AA9C107_inline (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mAB03BE8CA671F3AB54D452480618930A1CADEE09_inline (EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* __this, RuntimeObject* ___sender0, ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*, RuntimeObject*, ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnitySynchronizationContext::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Destroy_m9D39F827AC31DC811259997B10C13894D716C086 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void Firebase.Dispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher__ctor_m20D7687CB59CF114ACF69131CD3BA289B80A8B2A (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::set_ThreadDispatcher(Firebase.Dispatcher)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_ThreadDispatcher_m2AE8411CCA401E1683B93B40D4FDCC29DF953F5A_inline (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler__ctor_m528A373696F4853B62E70CA8C61E74DD582E3442 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Boolean Firebase.Platform.FirebaseLogger::IsStackTraceLogTypeIncompatibleWithNativeLogs(UnityEngine.StackTraceLogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_IsStackTraceLogTypeIncompatibleWithNativeLogs_m017E8BD41D237084924DDCF88CB2C6ABABF237DB (int32_t ___logType0, const RuntimeMethod* method) ;
// T Firebase.Platform.MainThreadProperty`1<System.Boolean>::get_Value()
inline bool MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42 (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97*, const RuntimeMethod*))MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.MainThreadProperty`1<System.Boolean>::.ctor(System.Func`1<T>)
inline void MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083 (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___getPropertyDelegate0, const RuntimeMethod* method)
{
	((  void (*) (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97*, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083_gshared)(__this, ___getPropertyDelegate0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseMonoBehaviour::GetFirebaseHandlerOrDestroyGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m45E0E65DFD7138558207655AC144AE884F578967 (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, const RuntimeMethod* method) ;
// System.Single Firebase.Platform.PlatformInformation::get_RealtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlatformInformation_get_RealtimeSinceStartup_m954BB1B40808B6F1E4E432FC1A9A930017FD41E1 (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.PlatformInformation::set_RealtimeSinceStartupSafe(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlatformInformation_set_RealtimeSinceStartupSafe_mBA2F7097A44D7F1DF964ABCC2B23C0A951919941_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_OnApplicationFocus_mEDF45D3543635BFE0D26562C1AF3A7F8005D5054 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, bool ___hasFocus0, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::OnMonoBehaviourDestroyed(Firebase.Platform.FirebaseMonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_OnMonoBehaviourDestroyed_m5AB2EEE4B6515BFB6B75E7E7305B1519883AB519 (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* ___behaviour0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.Void System.Func`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.String>(System.Func`1<TResult>)
inline String_t* FirebaseHandler_RunOnMainThread_TisString_t_m770F390A79BCDA0CEAFB59AC51FE1229DA1A504C (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___f0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*, const RuntimeMethod*))FirebaseHandler_RunOnMainThread_TisRuntimeObject_mFBD9852B378F327A1BBA92DD45B4E2F0ABAB2CF1_gshared)(___f0, method);
}
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_m4DF6E61542E9D042CF1A5A1CEE75DB2D5631D4AD (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m09F45DDCFA0A4414AA296A595FDB0B59B44F5387 (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Default.AppConfigExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions__ctor_mAAB3762C447D2387878715D18F41BADFE2DB001F (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Default.UnityConfigExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityConfigExtensions__ctor_m7B66E6481FB0FF321D962EF1A37B737210D0C854 (UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnityLoggingService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLoggingService__ctor_mCD777147C85E451F625C68F6D3B5713E7FB00D31 (UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* __this, const RuntimeMethod* method) ;
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.UnityConfigExtensions::get_DefaultInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityConfigExtensions_get_DefaultInstance_mB4442653C9662A8DFA4B1313B8440F52712EB5A9_inline (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Services::set_AppConfig(Firebase.Platform.IAppConfigExtensions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_AppConfig_m3A9EF6EEAE013442C30B8CC432ED28B5FD4D9F2C_inline (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// Firebase.Unity.UnityLoggingService Firebase.Unity.UnityLoggingService::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* UnityLoggingService_get_Instance_mD7B53127EFA0E161C976160DACDF8C7E90B20E87_inline (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Services::set_Logging(Firebase.Platform.ILoggingService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_Logging_m0406136BE33759DC9EAC480E0FE232690A86A16A_inline (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Threading.SynchronizationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizationContext__ctor_m37D995A90765D897A69B7767A14E70E8F1845532 (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* __this, const RuntimeMethod* method) ;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB (const RuntimeMethod* method) ;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir>()
inline SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* GameObject_AddComponent_TisSynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA_m8EBC722B106AE0F77C444EF03B1FC8478BF9E7D3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::get_CallbackQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* SynchronizationContextBehavoir_get_CallbackQueue_m291C810E98C2BF128991603294E306DF9C54836E (SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnitySynchronizationContext::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_m02C29AFB8681306BC3D3761C68B805F815C169C9 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m523AD6A503FCF15DD28F0785FAE73C3A78F80048 (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* __this, int32_t ___key0, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB*, int32_t, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* __this, bool ___initialState0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m028C4569FA346D1EB7C69F4597C31397F0C6F884 (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* __this, int32_t ___key0, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB*, int32_t, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m84719BED571BDAAEE27EE05F57295C7107A74DE6 (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Void System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>::.ctor(T1,T2)
inline void Tuple_2__ctor_m23CDE129D3AD4479E1302E40EF73080C8632534F (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* __this, SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___item10, RuntimeObject* ___item21, const RuntimeMethod* method)
{
	((  void (*) (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*, SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject*, const RuntimeMethod*))Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489_gshared)(__this, ___item10, ___item21, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::Enqueue(T)
inline void Queue_1_Enqueue_m47B0A189B0B33BCBCF55992AAF6D5C4ABE7F5E83 (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* __this, Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F*, Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Void Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendU3Ec__AnonStorey3__ctor_m19D3FA46A53ECB8F3137D07F07F07AF6CE0E2AFE (U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SendOrPostCallback_Invoke_m23B949AF9D78E8635F84E1E7775A50472B4F9C28_inline (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___state0, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendU3Ec__AnonStorey4__ctor_m017E216B01439F30DA0B08599B1700D90BDA757B (U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D* __this, const RuntimeMethod* method) ;
// System.Threading.ManualResetEvent Firebase.Unity.UnitySynchronizationContext::GetThreadEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* UnitySynchronizationContext_GetThreadEvent_m427C8A60FC426FB828BFE2FD8B3F4099CCDC25D0 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>::.ctor()
inline void Dictionary_2__ctor_m72D8077DA89EFD2BE1F61E6BE812DFB87A61CE5D (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::.ctor()
inline void Queue_1__ctor_mCB766C7ACAE78532567A3CDC0DB2F2F7613E1701 (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_mB92B3147875BD33C8AD7F30C1F67B0461D936714 (U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::get_Count()
inline int32_t Queue_1_get_Count_m2948F9B0BD57935D7584835A97B91C98252B42B2_inline (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::Dequeue()
inline Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* Queue_1_Dequeue_m9F03297B32A022B56794CC307F0AF365210C556A (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* __this, const RuntimeMethod* method)
{
	return ((  Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* (*) (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// T1 System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>::get_Item1()
inline SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_inline (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* __this, const RuntimeMethod* method)
{
	return ((  SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* (*) (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*, const RuntimeMethod*))Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline)(__this, method);
}
// T2 System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>::get_Item2()
inline RuntimeObject* Tuple_2_get_Item2_m057128974F4A74EDE05F93B5652F2B6D5ECA5DBC_inline (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*, const RuntimeMethod*))Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline)(__this, method);
}
// TResult System.Func`1<System.Collections.IEnumerator>::Invoke()
inline RuntimeObject* Func_1_Invoke_mC8C2E075F688B1F6C0700B6DD0147A02A7AC1672_inline (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___uriString0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>::.ctor()
inline void Dictionary_2__ctor_m4FB85806B2D5CF8ED85E32F65BEF2CB51759EC9C (Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void Firebase.Platform.Default.SystemClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemClock__ctor_m3F79E58AE923842C64A5EFA25E36918C5DB7495A (SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor()
inline void List_1__ctor_mD910536376B8EBB5BDB30088BE4FE395391592F3 (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1<System.Exception> Firebase.ExceptionAggregator::get_Exceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* ExceptionAggregator_get_Exceptions_m972559432E5D3893ED3CE759068B981B4F3860CC (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Count()
inline int32_t List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_inline (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Exception>::get_Item(System.Int32)
inline Exception_t* List_1_get_Item_m8915FA10115EA488EBCCFED6C74E11364E162A23 (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Exception_t* (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T[] System.Collections.Generic.List`1<System.Exception>::ToArray()
inline ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* List_1_ToArray_m0B7B24FBD852FDE8C9EEC3AC5A3AD4E932EB6674 (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, const RuntimeMethod* method)
{
	return ((  ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.AggregateException::.ctor(System.Collections.Generic.IEnumerable`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggregateException__ctor_m36C9769557880F4E90AE5EE44C39F98D86347E1F (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, RuntimeObject* ___innerExceptions0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Exception>::Clear()
inline void List_1_Clear_m77AB6DB3A46250AD8149B5CB7B5768D64D3F4012_inline (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Exception Firebase.ExceptionAggregator::GetAndClearPendingExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionAggregator_GetAndClearPendingExceptions_m7E2429EE2556341124AB3D82CB1725543365A28A (const RuntimeMethod* method) ;
// System.Exception Firebase.ExceptionAggregator::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionAggregator_LogException_m3058016DA78DA3A3204AEA89C92BB0826C2F11F3 (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.AggregateException System.AggregateException::Flatten()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t51B6205846DFB356B94452702201DD239D44422F* AggregateException_Flatten_m60F51FEE2794F91B3E47529599BE98971B7CA291 (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* AggregateException_get_InnerExceptions_m3044DE61416F827389F2975C67AC1AD89EA050A5_inline (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC (ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886*, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m487A0501D6F875A04F7D8F93F1CB3C813994AA64_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_mE405D676C6881553258F8BAD40A20B462D611068 (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Exception>::Add(T)
inline void List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_inline (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, Exception_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, Exception_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Firebase.Platform.DebugLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger__ctor_m975238F7F458467754AB4691AA1175EBB3BE7C9B (DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* __this, const RuntimeMethod* method) ;
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.AppConfigExtensions::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AppConfigExtensions_get_Instance_mE7CD33CD1BA6F7AB1C77ECA12204C46D8CF0FA17_inline (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Services::set_Clock(Firebase.Platform.IClockService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_Clock_m6EA7AA445A3CCC399FA5BB9DFD5AF4E6DECACE88_inline (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// Firebase.Platform.DebugLogger Firebase.Platform.DebugLogger::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* DebugLogger_get_Instance_mA20E9232A5C60CAA50C641FAE996FA62A5D82A33_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor()
inline void Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272 (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count()
inline int32_t Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<System.Action>::Dequeue()
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void Firebase.Platform.FirebaseAppUtilsStub::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub__ctor_m26C823CCA8BC46F64579375E15FA2B1766402132 (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Type Firebase.Platform.FirebaseEditorDispatcher::get_EditorApplicationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* FirebaseEditorDispatcher_get_EditorApplicationType_m744C3F7A8A4F0111A7428A471FF1832EE21E9F4F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_get_EditorApplicationType_m744C3F7A8A4F0111A7428A471FF1832EE21E9F4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral896A2A117718A23135B6923C80A00C014390CF99);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_0;
		L_0 = il2cpp_codegen_get_type(_stringLiteral896A2A117718A23135B6923C80A00C014390CF99, Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var, FirebaseEditorDispatcher_get_EditorApplicationType_m744C3F7A8A4F0111A7428A471FF1832EE21E9F4F_RuntimeMethod_var);
		V_0 = L_0;
		Type_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlaying_m1E0AD5FC35B4CC8CBF3CB9C979888AF2385B167A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A00A52D746A79D3B1B788CFBF70D40C304302E1);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	PropertyInfo_t* V_1 = NULL;
	{
		Type_t* L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_m744C3F7A8A4F0111A7428A471FF1832EE21E9F4F(NULL);
		V_0 = L_0;
		Type_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		PropertyInfo_t* L_3;
		L_3 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_2, _stringLiteral5A00A52D746A79D3B1B788CFBF70D40C304302E1, NULL);
		V_1 = L_3;
		PropertyInfo_t* L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		PropertyInfo_t* L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(19 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_5, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		return ((*(bool*)((bool*)(bool*)UnBox(L_6, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
	}

IL_002c:
	{
		return (bool)1;
	}
}
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlayingOrWillChangePlaymode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlayingOrWillChangePlaymode_mDE6D686F4F53DAAD26C63F42F5D75A04F82FF1EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F900F58C3A67CA9C0902E5993677B7671078EDE);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	PropertyInfo_t* V_1 = NULL;
	{
		Type_t* L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_m744C3F7A8A4F0111A7428A471FF1832EE21E9F4F(NULL);
		V_0 = L_0;
		Type_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		PropertyInfo_t* L_3;
		L_3 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_2, _stringLiteral7F900F58C3A67CA9C0902E5993677B7671078EDE, NULL);
		V_1 = L_3;
		PropertyInfo_t* L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		PropertyInfo_t* L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(19 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_5, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		return ((*(bool*)((bool*)(bool*)UnBox(L_6, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
	}

IL_002c:
	{
		return (bool)1;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StartEditorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StartEditorUpdate_m0C8119B5324DE93D01358924686F0E5277AB4A9D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_Update_mF6AC2EC58DD196A30C1D9A95B37546F193E4214A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3433AED96C62C86E15C34BD631F69FC3120A45E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	FieldInfo_t* G_B3_0 = NULL;
	FieldInfo_t* G_B2_0 = NULL;
	{
		Type_t* L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_m744C3F7A8A4F0111A7428A471FF1832EE21E9F4F(NULL);
		V_0 = L_0;
		Type_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		FieldInfo_t* L_3;
		L_3 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_2, _stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_0;
		G_B2_0 = L_3;
		if (L_4)
		{
			G_B3_0 = L_3;
			goto IL_002f;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, NULL, (intptr_t)((void*)FirebaseEditorDispatcher_Update_mF6AC2EC58DD196A30C1D9A95B37546F193E4214A_RuntimeMethod_var), NULL);
		((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_0), (void*)L_5);
		G_B3_0 = G_B2_0;
	}

IL_002f:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_0;
		FirebaseEditorDispatcher_AddRemoveCallbackToField_mDA1FE1B11F0931F52F72E71C495E2CB124F0F33B(G_B3_0, L_6, NULL, (bool)1, _stringLiteral3433AED96C62C86E15C34BD631F69FC3120A45E7, NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StopEditorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StopEditorUpdate_mEBA51CC256D7E6F74C078B41991EC7E16406FCB2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_Update_mF6AC2EC58DD196A30C1D9A95B37546F193E4214A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	FieldInfo_t* G_B3_0 = NULL;
	FieldInfo_t* G_B2_0 = NULL;
	{
		Type_t* L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_m744C3F7A8A4F0111A7428A471FF1832EE21E9F4F(NULL);
		V_0 = L_0;
		Type_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		FieldInfo_t* L_3;
		L_3 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_2, _stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_1;
		G_B2_0 = L_3;
		if (L_4)
		{
			G_B3_0 = L_3;
			goto IL_002f;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, NULL, (intptr_t)((void*)FirebaseEditorDispatcher_Update_mF6AC2EC58DD196A30C1D9A95B37546F193E4214A_RuntimeMethod_var), NULL);
		((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_1), (void*)L_5);
		G_B3_0 = G_B2_0;
	}

IL_002f:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_1;
		FirebaseEditorDispatcher_AddRemoveCallbackToField_mDA1FE1B11F0931F52F72E71C495E2CB124F0F33B(G_B3_0, L_6, NULL, (bool)0, (String_t*)NULL, NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_Update_mF6AC2EC58DD196A30C1D9A95B37546F193E4214A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0;
		L_0 = FirebaseHandler_get_DefaultInstance_mAE0FC8CDB594816EE0DC5A552501A20500655F1E_inline(NULL);
		NullCheck(L_0);
		FirebaseHandler_Update_mDBFD412D735E6C3F328C9BA3E5B3C5ECFBF49138(L_0, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::ListenToPlayState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_ListenToPlayState_m26460E4F581DC3A701E81F1031D0B8FFFDFA8975 (bool ___start0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_ListenToPlayState_m26460E4F581DC3A701E81F1031D0B8FFFDFA8975_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_PlayModeStateChanged_mEBABF2E4EC5AFD6F6ED10B2471759E9531DE011C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral174B9BBC1D59366161BECBD73C2048B5A97F4837);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28C266F303F178CE0931272538E30F328A704472);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69A7A27A97142E232EA28BA2557E507697865243);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF906AF52934523A28A29533224E8CEEDAC1486F2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	EventInfo_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	Delegate_t* V_4 = NULL;
	FieldInfo_t* V_5 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_6 = NULL;
	bool V_7 = false;
	{
		Type_t* L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_m744C3F7A8A4F0111A7428A471FF1832EE21E9F4F(NULL);
		V_0 = L_0;
		Type_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c0;
		}
	}
	{
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		EventInfo_t* L_3;
		L_3 = Type_GetEvent_mB4D71EF747D967D102846CB4FADA5DA0291E6A83(L_2, _stringLiteral69A7A27A97142E232EA28BA2557E507697865243, NULL);
		V_1 = L_3;
		EventInfo_t* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = il2cpp_codegen_get_type(_stringLiteral28C266F303F178CE0931272538E30F328A704472, Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var, FirebaseEditorDispatcher_ListenToPlayState_m26460E4F581DC3A701E81F1031D0B8FFFDFA8975_RuntimeMethod_var);
		V_2 = L_5;
		Type_t* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0084;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		NullCheck(L_8);
		MethodInfo_t* L_9;
		L_9 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(L_8, _stringLiteralF906AF52934523A28A29533224E8CEEDAC1486F2, ((int32_t)40), NULL);
		V_3 = L_9;
		MethodInfo_t* L_10 = V_3;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = L_11;
		Type_t* L_13 = V_2;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_13);
		NullCheck(L_10);
		MethodInfo_t* L_14;
		L_14 = VirtualFuncInvoker1< MethodInfo_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(37 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, L_10, L_12);
		V_3 = L_14;
		EventInfo_t* L_15 = V_1;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = VirtualFuncInvoker0< Type_t* >::Invoke(19 /* System.Type System.Reflection.EventInfo::get_EventHandlerType() */, L_15);
		MethodInfo_t* L_17 = V_3;
		Delegate_t* L_18;
		L_18 = Delegate_CreateDelegate_m54D60E94C8F2D3C551E447D63FE7F549A6FEBECD(L_16, NULL, L_17, NULL);
		V_4 = L_18;
		bool L_19 = ___start0;
		if (!L_19)
		{
			goto IL_007a;
		}
	}
	{
		EventInfo_t* L_20 = V_1;
		Delegate_t* L_21 = V_4;
		NullCheck(L_20);
		VirtualActionInvoker2< RuntimeObject*, Delegate_t* >::Invoke(21 /* System.Void System.Reflection.EventInfo::AddEventHandler(System.Object,System.Delegate) */, L_20, NULL, L_21);
		goto IL_0083;
	}

IL_007a:
	{
		EventInfo_t* L_22 = V_1;
		Delegate_t* L_23 = V_4;
		NullCheck(L_22);
		VirtualActionInvoker2< RuntimeObject*, Delegate_t* >::Invoke(20 /* System.Void System.Reflection.EventInfo::RemoveEventHandler(System.Object,System.Delegate) */, L_22, NULL, L_23);
	}

IL_0083:
	{
		return;
	}

IL_0084:
	{
		Type_t* L_24 = V_0;
		NullCheck(L_24);
		FieldInfo_t* L_25;
		L_25 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_24, _stringLiteral174B9BBC1D59366161BECBD73C2048B5A97F4837, NULL);
		V_5 = L_25;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_26 = ((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache2_2;
		if (L_26)
		{
			goto IL_00a9;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_27 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_27, NULL, (intptr_t)((void*)FirebaseEditorDispatcher_PlayModeStateChanged_mEBABF2E4EC5AFD6F6ED10B2471759E9531DE011C_RuntimeMethod_var), NULL);
		((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache2_2 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache2_2), (void*)L_27);
	}

IL_00a9:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_28 = ((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache2_2;
		V_6 = L_28;
		bool L_29 = ___start0;
		V_7 = L_29;
		FieldInfo_t* L_30 = V_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_31 = V_6;
		bool L_32 = V_7;
		FirebaseEditorDispatcher_AddRemoveCallbackToField_mDA1FE1B11F0931F52F72E71C495E2CB124F0F33B(L_30, L_31, NULL, L_32, (String_t*)NULL, NULL);
	}

IL_00c0:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::PlayModeStateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_PlayModeStateChanged_mEBABF2E4EC5AFD6F6ED10B2471759E9531DE011C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0;
		L_0 = FirebaseHandler_get_DefaultInstance_mAE0FC8CDB594816EE0DC5A552501A20500655F1E_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		bool L_2;
		L_2 = FirebaseEditorDispatcher_get_EditorIsPlaying_m1E0AD5FC35B4CC8CBF3CB9C979888AF2385B167A(NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		FirebaseEditorDispatcher_StopEditorUpdate_mEBA51CC256D7E6F74C078B41991EC7E16406FCB2(NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_3;
		L_3 = FirebaseHandler_get_DefaultInstance_mAE0FC8CDB594816EE0DC5A552501A20500655F1E_inline(NULL);
		NullCheck(L_3);
		FirebaseHandler_StartMonoBehaviour_m27FB410A511845F73EE29218BDEA9CEEAB1D5246(L_3, NULL);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_4;
		L_4 = FirebaseHandler_get_DefaultInstance_mAE0FC8CDB594816EE0DC5A552501A20500655F1E_inline(NULL);
		NullCheck(L_4);
		FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29_inline(L_4, (bool)1, NULL);
		goto IL_006b;
	}

IL_0038:
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_5;
		L_5 = FirebaseHandler_get_DefaultInstance_mAE0FC8CDB594816EE0DC5A552501A20500655F1E_inline(NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		bool L_7;
		L_7 = FirebaseEditorDispatcher_get_EditorIsPlayingOrWillChangePlaymode_mDE6D686F4F53DAAD26C63F42F5D75A04F82FF1EA(NULL);
		if (L_7)
		{
			goto IL_006b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_8;
		L_8 = FirebaseHandler_get_DefaultInstance_mAE0FC8CDB594816EE0DC5A552501A20500655F1E_inline(NULL);
		NullCheck(L_8);
		FirebaseHandler_StopMonoBehaviour_m6D5F532432F18CE6837F27A0FA9D586F55947451(L_8, NULL);
		FirebaseEditorDispatcher_StartEditorUpdate_m0C8119B5324DE93D01358924686F0E5277AB4A9D(NULL);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_9;
		L_9 = FirebaseHandler_get_DefaultInstance_mAE0FC8CDB594816EE0DC5A552501A20500655F1E_inline(NULL);
		NullCheck(L_9);
		FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29_inline(L_9, (bool)0, NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::AddRemoveCallbackToField(System.Reflection.FieldInfo,System.Action,System.Object,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_AddRemoveCallbackToField_mDA1FE1B11F0931F52F72E71C495E2CB124F0F33B (FieldInfo_t* ___eventField0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, RuntimeObject* ___target2, bool ___add3, String_t* ___errorMessage4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	Delegate_t* V_1 = NULL;
	Delegate_t* V_2 = NULL;
	{
		FieldInfo_t* L_0 = ___eventField0;
		if (!L_0)
		{
			goto IL_0076;
		}
	}
	{
		FieldInfo_t* L_1 = ___eventField0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(20 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_1, NULL);
		V_0 = ((Delegate_t*)IsInstClass((RuntimeObject*)L_2, Delegate_t_il2cpp_TypeInfo_var));
		bool L_3 = ___add3;
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		FieldInfo_t* L_4 = ___eventField0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_4);
		RuntimeObject* L_6 = ___target2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___callback1;
		NullCheck(L_7);
		MethodInfo_t* L_8;
		L_8 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_7, NULL);
		Delegate_t* L_9;
		L_9 = Delegate_CreateDelegate_m54D60E94C8F2D3C551E447D63FE7F549A6FEBECD(L_5, L_6, L_8, NULL);
		V_1 = L_9;
		Delegate_t* L_10 = V_0;
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		FieldInfo_t* L_11 = ___eventField0;
		Delegate_t* L_12 = V_0;
		Delegate_t* L_13 = V_1;
		Delegate_t* L_14;
		L_14 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_12, L_13, NULL);
		NullCheck(L_11);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_11, NULL, L_14, NULL);
		goto IL_004d;
	}

IL_0045:
	{
		FieldInfo_t* L_15 = ___eventField0;
		Delegate_t* L_16 = V_1;
		NullCheck(L_15);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_15, NULL, L_16, NULL);
	}

IL_004d:
	{
		return;
	}

IL_004e:
	{
		Delegate_t* L_17 = V_0;
		if (!L_17)
		{
			goto IL_0076;
		}
	}
	{
		FieldInfo_t* L_18 = ___eventField0;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_18);
		RuntimeObject* L_20 = ___target2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_21 = ___callback1;
		NullCheck(L_21);
		MethodInfo_t* L_22;
		L_22 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_21, NULL);
		Delegate_t* L_23;
		L_23 = Delegate_CreateDelegate_m54D60E94C8F2D3C551E447D63FE7F549A6FEBECD(L_19, L_20, L_22, NULL);
		V_2 = L_23;
		FieldInfo_t* L_24 = ___eventField0;
		Delegate_t* L_25 = V_0;
		Delegate_t* L_26 = V_2;
		Delegate_t* L_27;
		L_27 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_25, L_26, NULL);
		NullCheck(L_24);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_24, NULL, L_27, NULL);
		return;
	}

IL_0076:
	{
		String_t* L_28 = ___errorMessage4;
		bool L_29;
		L_29 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_28, NULL);
		if (L_29)
		{
			goto IL_008a;
		}
	}
	{
		String_t* L_30 = ___errorMessage4;
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mD75A87D37AD77AC7BF0463C48DDD46E7901B0106(4, L_30, NULL);
	}

IL_008a:
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
// System.Void Firebase.Platform.FirebaseHandler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler__cctor_mBB75468D5FE6DFD867E6E5043D863E7664EAC730 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* L_0;
		L_0 = FirebaseAppUtilsStub_get_Instance_m361D43B0066F8C3067E898965964328EC136E74A_inline(NULL);
		FirebaseHandler_set_AppUtils_m3CF4CEF8A89CB92676CDEAC04E59850DAFB651BA_inline(L_0, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler__ctor_m528A373696F4853B62E70CA8C61E74DD582E3442 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0;
		L_0 = Application_get_isEditor_m0377DB707B566C8E21DA3CD99963210F6D57D234(NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = FirebaseEditorDispatcher_get_EditorIsPlaying_m1E0AD5FC35B4CC8CBF3CB9C979888AF2385B167A(NULL);
		FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29_inline(__this, L_1, NULL);
		FirebaseEditorDispatcher_ListenToPlayState_m26460E4F581DC3A701E81F1031D0B8FFFDFA8975((bool)1, NULL);
		goto IL_002d;
	}

IL_0026:
	{
		FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29_inline(__this, (bool)1, NULL);
	}

IL_002d:
	{
		bool L_2;
		L_2 = FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		FirebaseHandler_StartMonoBehaviour_m27FB410A511845F73EE29218BDEA9CEEAB1D5246(__this, NULL);
		goto IL_0048;
	}

IL_0043:
	{
		FirebaseEditorDispatcher_StartEditorUpdate_m0C8119B5324DE93D01358924686F0E5277AB4A9D(NULL);
	}

IL_0048:
	{
		return;
	}
}
// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler::get_AppUtils()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseHandler_get_AppUtils_mD317C324F3E2F6D3260E1CEAA946847BAB91BC2C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CAppUtilsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::set_AppUtils(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_set_AppUtils_m3CF4CEF8A89CB92676CDEAC04E59850DAFB651BA (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CAppUtilsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CAppUtilsU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Int32 Firebase.Platform.FirebaseHandler::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseHandler_get_TickCount_mA791188CABE0F2464FAB7E76709CB74631D4BCD1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		int32_t L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___tickCount_2;
		return L_0;
	}
}
// Firebase.Dispatcher Firebase.Platform.FirebaseHandler::get_ThreadDispatcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* FirebaseHandler_get_ThreadDispatcher_mF4FACC8630771208FCF0A6E4ADBD9DE2B92623E3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CThreadDispatcherU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::set_ThreadDispatcher(Firebase.Dispatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_set_ThreadDispatcher_m2AE8411CCA401E1683B93B40D4FDCC29DF953F5A (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CThreadDispatcherU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CThreadDispatcherU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Boolean Firebase.Platform.FirebaseHandler::get_IsPlayMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsPlayModeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::set_IsPlayMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsPlayModeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::StartMonoBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_StartMonoBehaviour_m27FB410A511845F73EE29218BDEA9CEEAB1D5246 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72_m28C6532E1F1B457178DAAA19892CC93D9FDFF73A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60FB63D7E83627D00092C51BE9FCDAAE7EC01CF5);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5), (void*)__this);
	}

IL_0010:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, _stringLiteral60FB63D7E83627D00092C51BE9FCDAAE7EC01CF5, NULL);
		V_0 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* L_3;
		L_3 = GameObject_AddComponent_TisFirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72_m28C6532E1F1B457178DAAA19892CC93D9FDFF73A(L_2, GameObject_AddComponent_TisFirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72_m28C6532E1F1B457178DAAA19892CC93D9FDFF73A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0), (void*)L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_Create_m038F4C4C5A084C760A9340693B303F211FB3F3E4(L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_5, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::StopMonoBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_StopMonoBehaviour_m6D5F532432F18CE6837F27A0FA9D586F55947451 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8C4725C3DF7F1159BEF2DA709A93954C5B7AFD18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_U3CStopMonoBehaviourU3Em__0_m7DB65876BB737146E6D9DF00E6204630555FCEA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_2 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_9;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_3 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_3, NULL, (intptr_t)((void*)FirebaseHandler_U3CStopMonoBehaviourU3Em__0_m7DB65876BB737146E6D9DF00E6204630555FCEA1_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_9), (void*)L_3);
	}

IL_0028:
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_4 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_9;
		bool L_5;
		L_5 = FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8C4725C3DF7F1159BEF2DA709A93954C5B7AFD18(L_4, FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8C4725C3DF7F1159BEF2DA709A93954C5B7AFD18_RuntimeMethod_var);
	}

IL_0033:
	{
		return;
	}
}
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* FirebaseHandler_get_DefaultInstance_mAE0FC8CDB594816EE0DC5A552501A20500655F1E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5;
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::CreatePartialOnMainThread(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_CreatePartialOnMainThread_mCB214362F224CAD869C9563A1AD92CFBC3B4AF6F (RuntimeObject* ___appUtils0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_U3CU3Em__0_m75CC84232DD114BBF6CACE54B45DB3668274556C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE* V_0 = NULL;
	{
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE* L_0 = (U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE*)il2cpp_codegen_object_new(U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0__ctor_mB6F31B16A48F50779D897ECE03524D288058DF46(L_0, NULL);
		V_0 = L_0;
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE* L_1 = V_0;
		RuntimeObject* L_2 = ___appUtils0;
		NullCheck(L_1);
		L_1->___appUtils_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___appUtils_0), (void*)L_2);
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___appUtils_0;
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_U3CU3Em__0_m75CC84232DD114BBF6CACE54B45DB3668274556C_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void Firebase.Platform.IFirebaseAppUtils::TranslateDllNotFoundException(System.Action) */, IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var, L_4, L_6);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::Create(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_Create_m551C916AE81A5ACBFF2119B36A9BD405FDEC1588 (RuntimeObject* ___appUtils0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___appUtils0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_CreatePartialOnMainThread_mCB214362F224CAD869C9563A1AD92CFBC3B4AF6F(L_0, NULL);
		UnityPlatformServices_SetupServices_m8BC0FADC50ED15B12820FA8AD44AD7599728DAB4(NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_Update_mDBFD412D735E6C3F328C9BA3E5B3C5ECFBF49138 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_U3CUpdateU3Em__1_m5E9FD5D8FC63F7B6B73F590E633BB07CE39710B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_0;
		L_0 = FirebaseHandler_get_ThreadDispatcher_mF4FACC8630771208FCF0A6E4ADBD9DE2B92623E3_inline(NULL);
		NullCheck(L_0);
		Dispatcher_PollJobs_m90DF848D76273E55DB08A80E9C246E9E92E931CE(L_0, NULL);
		RuntimeObject* L_1;
		L_1 = FirebaseHandler_get_AppUtils_mD317C324F3E2F6D3260E1CEAA946847BAB91BC2C_inline(NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Firebase.Platform.IFirebaseAppUtils::PollCallbacks() */, IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var, L_1);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = __this->___Updated_6;
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->___UpdatedEventWrapper_7;
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, __this, (intptr_t)((void*)FirebaseHandler_U3CUpdateU3Em__1_m5E9FD5D8FC63F7B6B73F590E633BB07CE39710B1_RuntimeMethod_var), NULL);
		__this->___UpdatedEventWrapper_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UpdatedEventWrapper_7), (void*)L_4);
	}

IL_003c:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = __this->___UpdatedEventWrapper_7;
		ExceptionAggregator_Wrap_m0B206615C9C9608E5D2CC1738CB2056F121811FB(L_5, NULL);
	}

IL_0047:
	{
		ExceptionAggregator_ThrowAndClearPendingExceptions_m5678256804A44705C715EC54446D8F973C4029A6(NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		int32_t L_6 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___tickCount_2;
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___tickCount_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_OnApplicationFocus_mEDF45D3543635BFE0D26562C1AF3A7F8005D5054 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, bool ___hasFocus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* V_0 = NULL;
	{
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_0 = __this->___ApplicationFocusChanged_8;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_1 = __this->___ApplicationFocusChanged_8;
		ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* L_2 = (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD*)il2cpp_codegen_object_new(ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ApplicationFocusChangedEventArgs__ctor_m839E74DC0C6B72AB8A768A2D23F32ECE4A3B39AE(L_2, NULL);
		V_0 = L_2;
		ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* L_3 = V_0;
		bool L_4 = ___hasFocus0;
		NullCheck(L_3);
		ApplicationFocusChangedEventArgs_set_HasFocus_m144DF1C01B04C22AC4C98A06E2FE88E89AA9C107_inline(L_3, L_4, NULL);
		ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* L_5 = V_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_mAB03BE8CA671F3AB54D452480618930A1CADEE09_inline(L_1, NULL, L_5, NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::OnMonoBehaviourDestroyed(Firebase.Platform.FirebaseMonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_OnMonoBehaviourDestroyed_m5AB2EEE4B6515BFB6B75E7E7305B1519883AB519 (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* ___behaviour0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* L_0 = ___behaviour0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* L_1 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0 = (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0), (void*)(FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72*)NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean Firebase.Platform.FirebaseHandler::<StopMonoBehaviour>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseHandler_U3CStopMonoBehaviourU3Em__0_m7DB65876BB737146E6D9DF00E6204630555FCEA1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_Destroy_m9D39F827AC31DC811259997B10C13894D716C086(NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* L_2 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
	}

IL_0024:
	{
		return (bool)1;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::<Update>m__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_U3CUpdateU3Em__1_m5E9FD5D8FC63F7B6B73F590E633BB07CE39710B1 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___Updated_6;
		NullCheck(L_0);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_0, __this, (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*)NULL, NULL);
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
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs__ctor_m839E74DC0C6B72AB8A768A2D23F32ECE4A3B39AE (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* __this, const RuntimeMethod* method) 
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
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::set_HasFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs_set_HasFocus_m144DF1C01B04C22AC4C98A06E2FE88E89AA9C107 (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CHasFocusU3Ek__BackingField_1 = L_0;
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
// System.Void Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreatePartialOnMainThreadU3Ec__AnonStorey0__ctor_mB6F31B16A48F50779D897ECE03524D288058DF46 (U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_U3CU3Em__0_m75CC84232DD114BBF6CACE54B45DB3668274556C (U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_2, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
				FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_4 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5;
				if (!L_4)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0055;
			}

IL_0020_1:
			{
				RuntimeObject* L_5 = __this->___appUtils_0;
				il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
				FirebaseHandler_set_AppUtils_m3CF4CEF8A89CB92676CDEAC04E59850DAFB651BA_inline(L_5, NULL);
				Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_6;
				L_6 = FirebaseHandler_get_ThreadDispatcher_mF4FACC8630771208FCF0A6E4ADBD9DE2B92623E3_inline(NULL);
				if (L_6)
				{
					goto IL_003f_1;
				}
			}
			{
				Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_7 = (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6*)il2cpp_codegen_object_new(Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				Dispatcher__ctor_m20D7687CB59CF114ACF69131CD3BA289B80A8B2A(L_7, NULL);
				il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
				FirebaseHandler_set_ThreadDispatcher_m2AE8411CCA401E1683B93B40D4FDCC29DF953F5A_inline(L_7, NULL);
			}

IL_003f_1:
			{
				FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_8 = (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586*)il2cpp_codegen_object_new(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				FirebaseHandler__ctor_m528A373696F4853B62E70CA8C61E74DD582E3442(L_8, NULL);
				il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
				((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5), (void*)L_8);
				goto IL_0055;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
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
// System.Boolean Firebase.Platform.FirebaseLogger::IsStackTraceLogTypeIncompatibleWithNativeLogs(UnityEngine.StackTraceLogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_IsStackTraceLogTypeIncompatibleWithNativeLogs_m017E8BD41D237084924DDCF88CB2C6ABABF237DB (int32_t ___logType0, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___logType0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___logType0;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
	}

IL_000d:
	{
		return (bool)((((int32_t)G_B3_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Firebase.Platform.FirebaseLogger::CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs_mC97D0928657EF657E397290DA97756027989B96E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceLogType_t2AD431F7181A4203AAE2D538963997CB3A917DF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7Bf1ff318eU2D91e6U2D436aU2D9a52U2Dac02be4f7d0eU7D_t54B8FF32EAD70318A421BB5FB5ECE4E1E50CE79C____U24fieldU2D0_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57B9206E5BA716A0B4139531B38C1431A85E8D8B);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	int32_t V_1 = 0;
	LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063* V_2 = NULL;
	int32_t V_3 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		MethodInfo_t* L_2;
		L_2 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_1, _stringLiteral57B9206E5BA716A0B4139531B38C1431A85E8D8B, NULL);
		V_0 = L_2;
		MethodInfo_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_006c;
		}
	}
	{
		LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063* L_4 = (LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063*)(LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063*)SZArrayNew(LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063_il2cpp_TypeInfo_var, (uint32_t)5);
		LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063* L_5 = L_4;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7Bf1ff318eU2D91e6U2D436aU2D9a52U2Dac02be4f7d0eU7D_t54B8FF32EAD70318A421BB5FB5ECE4E1E50CE79C____U24fieldU2D0_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_5, L_6, NULL);
		V_2 = L_5;
		V_3 = 0;
		goto IL_0063;
	}

IL_0034:
	{
		LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (int32_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		MethodInfo_t* L_11 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		NullCheck(L_11);
		RuntimeObject* L_17;
		L_17 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_11, NULL, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = FirebaseLogger_IsStackTraceLogTypeIncompatibleWithNativeLogs_m017E8BD41D237084924DDCF88CB2C6ABABF237DB(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_17, StackTraceLogType_t2AD431F7181A4203AAE2D538963997CB3A917DF6_il2cpp_TypeInfo_var)))), NULL);
		if (!L_18)
		{
			goto IL_005f;
		}
	}
	{
		return (bool)1;
	}

IL_005f:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0063:
	{
		int32_t L_20 = V_3;
		LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063* L_21 = V_2;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0034;
		}
	}

IL_006c:
	{
		return (bool)0;
	}
}
// System.Boolean Firebase.Platform.FirebaseLogger::get_CanRedirectNativeLogs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_get_CanRedirectNativeLogs_mEBA68986F4E0627B01B89A8F793B48E2224139D3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceLogType_t2AD431F7181A4203AAE2D538963997CB3A917DF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB797A4D97C7FD6146460C6DC4591BE1D9CE6A0B);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfo_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* L_0 = ((FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var))->___incompatibleStackUnwindingEnabled_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42(L_0, MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		NullCheck(L_3);
		FieldInfo_t* L_4;
		L_4 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_3, _stringLiteralDB797A4D97C7FD6146460C6DC4591BE1D9CE6A0B, NULL);
		V_0 = L_4;
		FieldInfo_t* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		FieldInfo_t* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(20 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = FirebaseLogger_IsStackTraceLogTypeIncompatibleWithNativeLogs_m017E8BD41D237084924DDCF88CB2C6ABABF237DB(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_7, StackTraceLogType_t2AD431F7181A4203AAE2D538963997CB3A917DF6_il2cpp_TypeInfo_var)))), NULL);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0044:
	{
		return (bool)1;
	}
}
// System.Void Firebase.Platform.FirebaseLogger::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger_LogMessage_mD75A87D37AD77AC7BF0463C48DDD46E7901B0106 (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = FirebaseHandler_get_AppUtils_mD317C324F3E2F6D3260E1CEAA946847BAB91BC2C_inline(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* Firebase.Platform.PlatformLogLevel Firebase.Platform.IFirebaseAppUtils::GetLogLevel() */, IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = ___logLevel0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		int32_t L_4 = ___logLevel0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_0041;
			}
			case 4:
			{
				goto IL_004c;
			}
			case 5:
			{
				goto IL_0057;
			}
		}
	}
	{
		goto IL_005c;
	}

IL_0036:
	{
		String_t* L_5 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		goto IL_005c;
	}

IL_0041:
	{
		String_t* L_6 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_6, NULL);
		goto IL_005c;
	}

IL_004c:
	{
		String_t* L_7 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_7, NULL);
		goto IL_005c;
	}

IL_0057:
	{
		goto IL_005c;
	}

IL_005c:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseLogger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger__cctor_m801A17DE81304E6096207E1925500D14421ECE95 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs_mC97D0928657EF657E397290DA97756027989B96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = ((FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_1;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_1 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_1, NULL, (intptr_t)((void*)FirebaseLogger_CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs_mC97D0928657EF657E397290DA97756027989B96E_RuntimeMethod_var), NULL);
		((FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_1), (void*)L_1);
	}

IL_0018:
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_2 = ((FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_1;
		MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* L_3 = (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97*)il2cpp_codegen_object_new(MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083(L_3, L_2, MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083_RuntimeMethod_var);
		((FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var))->___incompatibleStackUnwindingEnabled_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var))->___incompatibleStackUnwindingEnabled_0), (void*)L_3);
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
// System.Void Firebase.Platform.FirebaseMonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour__ctor_mE65E0F0D449146C96EF81AB694A08D627CE61870 (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseMonoBehaviour::GetFirebaseHandlerOrDestroyGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m45E0E65DFD7138558207655AC144AE884F578967 (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0;
		L_0 = FirebaseHandler_get_DefaultInstance_mAE0FC8CDB594816EE0DC5A552501A20500655F1E_inline(NULL);
		V_0 = L_0;
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
	}

IL_0017:
	{
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_3 = V_0;
		return L_3;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_OnEnable_mF2CFA86462A454B9C0206AAC3ACEF950FF3E3631 (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, const RuntimeMethod* method) 
{
	{
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0;
		L_0 = FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m45E0E65DFD7138558207655AC144AE884F578967(__this, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_Update_m7DEE72CA7C251D41465F5997BA4455A33B429A6C (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, const RuntimeMethod* method) 
{
	FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* V_0 = NULL;
	{
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0;
		L_0 = FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m45E0E65DFD7138558207655AC144AE884F578967(__this, NULL);
		V_0 = L_0;
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		float L_2;
		L_2 = PlatformInformation_get_RealtimeSinceStartup_m954BB1B40808B6F1E4E432FC1A9A930017FD41E1(NULL);
		PlatformInformation_set_RealtimeSinceStartupSafe_mBA2F7097A44D7F1DF964ABCC2B23C0A951919941_inline(L_2, NULL);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_3 = V_0;
		NullCheck(L_3);
		FirebaseHandler_Update_mDBFD412D735E6C3F328C9BA3E5B3C5ECFBF49138(L_3, NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_OnApplicationFocus_m47DCA45653CBECEC3CD2ED4AA93CFED775F7508C (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, bool ___hasFocus0, const RuntimeMethod* method) 
{
	FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* V_0 = NULL;
	{
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0;
		L_0 = FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m45E0E65DFD7138558207655AC144AE884F578967(__this, NULL);
		V_0 = L_0;
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_2 = V_0;
		bool L_3 = ___hasFocus0;
		NullCheck(L_2);
		FirebaseHandler_OnApplicationFocus_mEDF45D3543635BFE0D26562C1AF3A7F8005D5054(L_2, L_3, NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_OnDestroy_m92D958429C5A513836C9CD93BC6A79F1E3632BB5 (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_OnMonoBehaviourDestroyed_m5AB2EEE4B6515BFB6B75E7E7305B1519883AB519(__this, NULL);
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
// System.Boolean Firebase.Platform.PlatformInformation::get_IsAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsAndroid_m8AB95334299A6FA8FEBFD7B0A6BFE9B45CB34474 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)11)))? 1 : 0);
	}
}
// System.Boolean Firebase.Platform.PlatformInformation::get_IsIOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsIOS_mFD5800DAFA3923CEEEFEA6BA8E07FF6691EFB677 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)8))? 1 : 0);
	}
}
// System.String Firebase.Platform.PlatformInformation::get_DefaultConfigLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_DefaultConfigLocation_mAEB7514B85C90CB6B9C8DEA4B2B27B0D309A8166 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_RunOnMainThread_TisString_t_m770F390A79BCDA0CEAFB59AC51FE1229DA1A504C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_U3Cget_DefaultConfigLocationU3Em__0_mB7D05CFBAD9DFFA0789DF9735A497582C3AAD37F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_0 = ((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_2;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_1 = (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*)il2cpp_codegen_object_new(Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B(L_1, NULL, (intptr_t)((void*)PlatformInformation_U3Cget_DefaultConfigLocationU3Em__0_mB7D05CFBAD9DFFA0789DF9735A497582C3AAD37F_RuntimeMethod_var), NULL);
		((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_2), (void*)L_1);
	}

IL_0018:
	{
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_2 = ((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_2;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = FirebaseHandler_RunOnMainThread_TisString_t_m770F390A79BCDA0CEAFB59AC51FE1229DA1A504C(L_2, FirebaseHandler_RunOnMainThread_TisString_t_m770F390A79BCDA0CEAFB59AC51FE1229DA1A504C_RuntimeMethod_var);
		return L_3;
	}
}
// System.Single Firebase.Platform.PlatformInformation::get_RealtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlatformInformation_get_RealtimeSinceStartup_m954BB1B40808B6F1E4E432FC1A9A930017FD41E1 (const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		return L_0;
	}
}
// System.Void Firebase.Platform.PlatformInformation::set_RealtimeSinceStartupSafe(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformInformation_set_RealtimeSinceStartupSafe_mBA2F7097A44D7F1DF964ABCC2B23C0A951919941 (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String Firebase.Platform.PlatformInformation::get_RuntimeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_RuntimeName_m014CA17680A844F0F26164D3F01C4722182C5A90 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6;
	}
}
// System.String Firebase.Platform.PlatformInformation::get_RuntimeVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_RuntimeVersion_mD482340448C87BCF8CC6D361C0309028E808DE39 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_RunOnMainThread_TisString_t_m770F390A79BCDA0CEAFB59AC51FE1229DA1A504C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_U3Cget_RuntimeVersionU3Em__1_m3634742A6E7BAE70524BA137CE7395CF267EDE4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___runtimeVersion_0;
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_1 = ((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1_3;
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_2 = (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*)il2cpp_codegen_object_new(Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B(L_2, NULL, (intptr_t)((void*)PlatformInformation_U3Cget_RuntimeVersionU3Em__1_m3634742A6E7BAE70524BA137CE7395CF267EDE4E_RuntimeMethod_var), NULL);
		((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1_3), (void*)L_2);
	}

IL_0022:
	{
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_3 = ((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1_3;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = FirebaseHandler_RunOnMainThread_TisString_t_m770F390A79BCDA0CEAFB59AC51FE1229DA1A504C(L_3, FirebaseHandler_RunOnMainThread_TisString_t_m770F390A79BCDA0CEAFB59AC51FE1229DA1A504C_RuntimeMethod_var);
		((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___runtimeVersion_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___runtimeVersion_0), (void*)L_4);
	}

IL_0031:
	{
		String_t* L_5 = ((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___runtimeVersion_0;
		return L_5;
	}
}
// System.String Firebase.Platform.PlatformInformation::<get_DefaultConfigLocation>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_U3Cget_DefaultConfigLocationU3Em__0_mB7D05CFBAD9DFFA0789DF9735A497582C3AAD37F (const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Application_get_streamingAssetsPath_m4DF6E61542E9D042CF1A5A1CEE75DB2D5631D4AD(NULL);
		return L_0;
	}
}
// System.String Firebase.Platform.PlatformInformation::<get_RuntimeVersion>m__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_U3Cget_RuntimeVersionU3Em__1_m3634742A6E7BAE70524BA137CE7395CF267EDE4E (const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Application_get_unityVersion_m09F45DDCFA0A4414AA296A595FDB0B59B44F5387(NULL);
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
// System.Void Firebase.Platform.Default.UnityConfigExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityConfigExtensions__ctor_m7B66E6481FB0FF321D962EF1A37B737210D0C854 (UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		AppConfigExtensions__ctor_mAAB3762C447D2387878715D18F41BADFE2DB001F(__this, NULL);
		return;
	}
}
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.UnityConfigExtensions::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityConfigExtensions_get_DefaultInstance_mB4442653C9662A8DFA4B1313B8440F52712EB5A9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* L_0 = ((UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var))->____instance_5;
		return L_0;
	}
}
// System.Void Firebase.Platform.Default.UnityConfigExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityConfigExtensions__cctor_mD999998F632C47D4F6FB35B8DFDDCE96A8F51A56 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* L_0 = (UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152*)il2cpp_codegen_object_new(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityConfigExtensions__ctor_m7B66E6481FB0FF321D962EF1A37B737210D0C854(L_0, NULL);
		((UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var))->____instance_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var))->____instance_5), (void*)L_0);
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
// System.Void Firebase.Unity.UnityLoggingService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLoggingService__ctor_mCD777147C85E451F625C68F6D3B5713E7FB00D31 (UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Firebase.Unity.UnityLoggingService Firebase.Unity.UnityLoggingService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* UnityLoggingService_get_Instance_mD7B53127EFA0E161C976160DACDF8C7E90B20E87 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* L_0 = ((UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
// System.Void Firebase.Unity.UnityLoggingService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLoggingService__cctor_m83A5B3C1C5E217321C63C3704CD9920D029A955C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* L_0 = (UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB*)il2cpp_codegen_object_new(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityLoggingService__ctor_mCD777147C85E451F625C68F6D3B5713E7FB00D31(L_0, NULL);
		((UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var))->____instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var))->____instance_0), (void*)L_0);
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
// System.Void Firebase.Unity.UnityPlatformServices::SetupServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPlatformServices_SetupServices_m8BC0FADC50ED15B12820FA8AD44AD7599728DAB4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = UnityConfigExtensions_get_DefaultInstance_mB4442653C9662A8DFA4B1313B8440F52712EB5A9_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		Services_set_AppConfig_m3A9EF6EEAE013442C30B8CC432ED28B5FD4D9F2C_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* L_1;
		L_1 = UnityLoggingService_get_Instance_mD7B53127EFA0E161C976160DACDF8C7E90B20E87_inline(NULL);
		Services_set_Logging_m0406136BE33759DC9EAC480E0FE232690A86A16A_inline(L_1, NULL);
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
// System.Void Firebase.Unity.UnitySynchronizationContext::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_m02C29AFB8681306BC3D3761C68B805F815C169C9 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA_m8EBC722B106AE0F77C444EF03B1FC8478BF9E7D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SynchronizationContext__ctor_m37D995A90765D897A69B7767A14E70E8F1845532(__this, NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0;
		L_0 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_0, NULL);
		__this->___mainThreadId_4 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___gameObject0;
		NullCheck(L_2);
		SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* L_3;
		L_3 = GameObject_AddComponent_TisSynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA_m8EBC722B106AE0F77C444EF03B1FC8478BF9E7D3(L_2, GameObject_AddComponent_TisSynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA_m8EBC722B106AE0F77C444EF03B1FC8478BF9E7D3_RuntimeMethod_var);
		__this->___behavior_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___behavior_3), (void*)L_3);
		SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* L_4 = __this->___behavior_3;
		NullCheck(L_4);
		Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_5;
		L_5 = SynchronizationContextBehavoir_get_CallbackQueue_m291C810E98C2BF128991603294E306DF9C54836E(L_4, NULL);
		__this->___queue_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_2), (void*)L_5);
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Create(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Create_m038F4C4C5A084C760A9340693B303F211FB3F3E4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* L_0 = ((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___gameObject0;
		UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* L_2 = (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690*)il2cpp_codegen_object_new(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnitySynchronizationContext__ctor_m02C29AFB8681306BC3D3761C68B805F815C169C9(L_2, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1), (void*)L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Destroy_m9D39F827AC31DC811259997B10C13894D716C086 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1 = (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1), (void*)(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690*)NULL);
		return;
	}
}
// System.Threading.ManualResetEvent Firebase.Unity.UnitySynchronizationContext::GetThreadEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* UnitySynchronizationContext_GetThreadEvent_m427C8A60FC426FB828BFE2FD8B3F4099CCDC25D0 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m523AD6A503FCF15DD28F0785FAE73C3A78F80048_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m028C4569FA346D1EB7C69F4597C31397F0C6F884_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* L_0 = ((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->___signalDictionary_5;
		V_1 = L_0;
		RuntimeObject* L_1 = V_1;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0048:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_1;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
				Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* L_3 = ((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->___signalDictionary_5;
				Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_4;
				L_4 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
				NullCheck(L_4);
				int32_t L_5;
				L_5 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_4, NULL);
				NullCheck(L_3);
				bool L_6;
				L_6 = Dictionary_2_TryGetValue_m523AD6A503FCF15DD28F0785FAE73C3A78F80048(L_3, L_5, (&V_0), Dictionary_2_TryGetValue_m523AD6A503FCF15DD28F0785FAE73C3A78F80048_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0043_1;
				}
			}
			{
				ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_7 = (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)il2cpp_codegen_object_new(ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE(L_7, (bool)0, NULL);
				V_0 = L_7;
				il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
				Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* L_8 = ((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->___signalDictionary_5;
				Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_9;
				L_9 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
				NullCheck(L_9);
				int32_t L_10;
				L_10 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_9, NULL);
				ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_11 = V_0;
				NullCheck(L_8);
				Dictionary_2_set_Item_m028C4569FA346D1EB7C69F4597C31397F0C6F884(L_8, L_10, L_11, Dictionary_2_set_Item_m028C4569FA346D1EB7C69F4597C31397F0C6F884_RuntimeMethod_var);
			}

IL_0043_1:
			{
				goto IL_004f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_12 = V_0;
		NullCheck(L_12);
		bool L_13;
		L_13 = EventWaitHandle_Reset_m84719BED571BDAAEE27EE05F57295C7107A74DE6(L_12, NULL);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_14 = V_0;
		return L_14;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Post_m27CEEE71D49CB394434E47807272ADBB1B00B7A9 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___d0, RuntimeObject* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m47B0A189B0B33BCBCF55992AAF6D5C4ABE7F5E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2__ctor_m23CDE129D3AD4479E1302E40EF73080C8632534F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_0 = __this->___queue_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_3 = __this->___queue_2;
			SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_4 = ___d0;
			RuntimeObject* L_5 = ___state1;
			Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* L_6 = (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*)il2cpp_codegen_object_new(Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			Tuple_2__ctor_m23CDE129D3AD4479E1302E40EF73080C8632534F(L_6, L_4, L_5, Tuple_2__ctor_m23CDE129D3AD4479E1302E40EF73080C8632534F_RuntimeMethod_var);
			NullCheck(L_3);
			Queue_1_Enqueue_m47B0A189B0B33BCBCF55992AAF6D5C4ABE7F5E83(L_3, L_6, Queue_1_Enqueue_m47B0A189B0B33BCBCF55992AAF6D5C4ABE7F5E83_RuntimeMethod_var);
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Send(System.Threading.SendOrPostCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Send_m6287E48D5488043652D3E93E610AE279CD616D00 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___d0, RuntimeObject* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendU3Ec__AnonStorey4_U3CU3Em__0_m69DFDB921B19E4E00EEDF3FB22AD93087791EC09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB* V_0 = NULL;
	U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D* V_1 = NULL;
	{
		U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB* L_0 = (U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB*)il2cpp_codegen_object_new(U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSendU3Ec__AnonStorey3__ctor_m19D3FA46A53ECB8F3137D07F07F07AF6CE0E2AFE(L_0, NULL);
		V_0 = L_0;
		U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB* L_1 = V_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_2 = ___d0;
		NullCheck(L_1);
		L_1->___d_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___d_0), (void*)L_2);
		int32_t L_3 = __this->___mainThreadId_4;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_4;
		L_4 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_4, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0033;
		}
	}
	{
		U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB* L_6 = V_0;
		NullCheck(L_6);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_7 = L_6->___d_0;
		RuntimeObject* L_8 = ___state1;
		NullCheck(L_7);
		SendOrPostCallback_Invoke_m23B949AF9D78E8635F84E1E7775A50472B4F9C28_inline(L_7, L_8, NULL);
		goto IL_0070;
	}

IL_0033:
	{
		U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D* L_9 = (U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D*)il2cpp_codegen_object_new(U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		U3CSendU3Ec__AnonStorey4__ctor_m017E216B01439F30DA0B08599B1700D90BDA757B(L_9, NULL);
		V_1 = L_9;
		U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D* L_10 = V_1;
		U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB* L_11 = V_0;
		NullCheck(L_10);
		L_10->___U3CU3Ef__refU243_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___U3CU3Ef__refU243_1), (void*)L_11);
		U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D* L_12 = V_1;
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_13;
		L_13 = UnitySynchronizationContext_GetThreadEvent_m427C8A60FC426FB828BFE2FD8B3F4099CCDC25D0(__this, NULL);
		NullCheck(L_12);
		L_12->___newSignal_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___newSignal_0), (void*)L_13);
		U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D* L_14 = V_1;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_15 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_15, L_14, (intptr_t)((void*)U3CSendU3Ec__AnonStorey4_U3CU3Em__0_m69DFDB921B19E4E00EEDF3FB22AD93087791EC09_RuntimeMethod_var), NULL);
		RuntimeObject* L_16 = ___state1;
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, __this, L_15, L_16);
		U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D* L_17 = V_1;
		NullCheck(L_17);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_18 = L_17->___newSignal_0;
		NullCheck(L_18);
		bool L_19;
		L_19 = VirtualFuncInvoker1< bool, int32_t >::Invoke(8 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_18, ((int32_t)15000));
	}

IL_0070:
	{
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__cctor_m34420B5BE964BF2E7B480A23AD56847562DF8282 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m72D8077DA89EFD2BE1F61E6BE812DFB87A61CE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1 = (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1), (void*)(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690*)NULL);
		Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* L_0 = (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB*)il2cpp_codegen_object_new(Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m72D8077DA89EFD2BE1F61E6BE812DFB87A61CE5D(L_0, Dictionary_2__ctor_m72D8077DA89EFD2BE1F61E6BE812DFB87A61CE5D_RuntimeMethod_var);
		((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->___signalDictionary_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->___signalDictionary_5), (void*)L_0);
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
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizationContextBehavoir__ctor_m535727BFD0F4884E295BF1DD883A4A47DB5CA226 (SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::get_CallbackQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* SynchronizationContextBehavoir_get_CallbackQueue_m291C810E98C2BF128991603294E306DF9C54836E (SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCB766C7ACAE78532567A3CDC0DB2F2F7613E1701_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_0 = __this->___callbackQueue_4;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_1 = (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F*)il2cpp_codegen_object_new(Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Queue_1__ctor_mCB766C7ACAE78532567A3CDC0DB2F2F7613E1701(L_1, Queue_1__ctor_mCB766C7ACAE78532567A3CDC0DB2F2F7613E1701_RuntimeMethod_var);
		__this->___callbackQueue_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackQueue_4), (void*)L_1);
	}

IL_0016:
	{
		Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_2 = __this->___callbackQueue_4;
		return L_2;
	}
}
// System.Collections.IEnumerator Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SynchronizationContextBehavoir_Start_m138FD9256FCC72808F0F211B4578B4F1B400A507 (SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* V_0 = NULL;
	{
		U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* L_0 = (U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68*)il2cpp_codegen_object_new(U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ec__Iterator0__ctor_mB92B3147875BD33C8AD7F30C1F67B0461D936714(L_0, NULL);
		V_0 = L_0;
		U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U24this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U24this_2), (void*)__this);
		U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* L_2 = V_0;
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
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_mB92B3147875BD33C8AD7F30C1F67B0461D936714 (U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ec__Iterator0_MoveNext_m74D7C901137B1212E23317DDEE4036BE455E81E2 (U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m9F03297B32A022B56794CC307F0AF365210C556A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m2948F9B0BD57935D7584835A97B91C98252B42B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m057128974F4A74EDE05F93B5652F2B6D5ECA5DBC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U24PC_5;
		V_0 = L_0;
		__this->___U24PC_5 = (-1);
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00e8;
			}
		}
	}
	{
		goto IL_00f4;
	}

IL_0021:
	{
		__this->___U3CentryU3E__0_0 = (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CentryU3E__0_0), (void*)(Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*)NULL);
		SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* L_2 = __this->___U24this_2;
		NullCheck(L_2);
		Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_3;
		L_3 = SynchronizationContextBehavoir_get_CallbackQueue_m291C810E98C2BF128991603294E306DF9C54836E(L_2, NULL);
		__this->___U24locvar0_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U24locvar0_1), (void*)L_3);
		RuntimeObject* L_4 = __this->___U24locvar0_1;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_4, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0075:
			{// begin finally (depth: 1)
				RuntimeObject* L_5 = __this->___U24locvar0_1;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_5, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* L_6 = __this->___U24this_2;
				NullCheck(L_6);
				Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_7;
				L_7 = SynchronizationContextBehavoir_get_CallbackQueue_m291C810E98C2BF128991603294E306DF9C54836E(L_6, NULL);
				NullCheck(L_7);
				int32_t L_8;
				L_8 = Queue_1_get_Count_m2948F9B0BD57935D7584835A97B91C98252B42B2_inline(L_7, Queue_1_get_Count_m2948F9B0BD57935D7584835A97B91C98252B42B2_RuntimeMethod_var);
				if ((((int32_t)L_8) <= ((int32_t)0)))
				{
					goto IL_0070_1;
				}
			}
			{
				SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* L_9 = __this->___U24this_2;
				NullCheck(L_9);
				Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_10;
				L_10 = SynchronizationContextBehavoir_get_CallbackQueue_m291C810E98C2BF128991603294E306DF9C54836E(L_9, NULL);
				NullCheck(L_10);
				Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* L_11;
				L_11 = Queue_1_Dequeue_m9F03297B32A022B56794CC307F0AF365210C556A(L_10, Queue_1_Dequeue_m9F03297B32A022B56794CC307F0AF365210C556A_RuntimeMethod_var);
				__this->___U3CentryU3E__0_0 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CentryU3E__0_0), (void*)L_11);
			}

IL_0070_1:
			{
				goto IL_0081;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0081:
	{
		Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* L_12 = __this->___U3CentryU3E__0_0;
		if (!L_12)
		{
			goto IL_00cd;
		}
	}
	{
		Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* L_13 = __this->___U3CentryU3E__0_0;
		NullCheck(L_13);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_14;
		L_14 = Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_inline(L_13, Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_00cd;
		}
	}
	try
	{// begin try (depth: 1)
		Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* L_15 = __this->___U3CentryU3E__0_0;
		NullCheck(L_15);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_16;
		L_16 = Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_inline(L_15, Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_RuntimeMethod_var);
		Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* L_17 = __this->___U3CentryU3E__0_0;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = Tuple_2_get_Item2_m057128974F4A74EDE05F93B5652F2B6D5ECA5DBC_inline(L_17, Tuple_2_get_Item2_m057128974F4A74EDE05F93B5652F2B6D5ECA5DBC_RuntimeMethod_var);
		NullCheck(L_16);
		SendOrPostCallback_Invoke_m23B949AF9D78E8635F84E1E7775A50472B4F9C28_inline(L_16, L_18, NULL);
		goto IL_00cd;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bc;
		}
		throw e;
	}

CATCH_00bc:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_19 = V_1;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_20, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00cd;
	}// end catch (depth: 1)

IL_00cd:
	{
		__this->___U24current_3 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U24current_3), (void*)NULL);
		bool L_21 = __this->___U24disposing_4;
		if (L_21)
		{
			goto IL_00e3;
		}
	}
	{
		__this->___U24PC_5 = 1;
	}

IL_00e3:
	{
		goto IL_00f6;
	}

IL_00e8:
	{
		goto IL_0021;
	}
	// Dead block : IL_00ed: ldarg.0

IL_00f4:
	{
		return (bool)0;
	}

IL_00f6:
	{
		return (bool)1;
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2AAC88DE28B82A563A0BB4E3C38D0458B764F1B3 (U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U24current_3;
		return L_0;
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_mE1491181139081AB51A52A70BB982E6A2A2E73C1 (U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U24current_3;
		return L_0;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Dispose_m26C7172AAC9ED6A0846FBD183AE136BA28BD54D3 (U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* __this, const RuntimeMethod* method) 
{
	{
		__this->___U24disposing_4 = (bool)1;
		__this->___U24PC_5 = (-1);
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignaledCoroutineU3Ec__Iterator0__ctor_m139628D93758C39F840EA776C0735C14CD76BE77 (U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSignaledCoroutineU3Ec__Iterator0_MoveNext_m22CB69AB3959EAD0503AA5E336FA08412EE0424D (U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U24PC_4;
		V_0 = L_0;
		__this->___U24PC_4 = (-1);
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0021:
	{
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_2 = __this->___coroutine_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Func_1_Invoke_mC8C2E075F688B1F6C0700B6DD0147A02A7AC1672_inline(L_2, NULL);
		__this->___U24current_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U24current_2), (void*)L_3);
		bool L_4 = __this->___U24disposing_3;
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__this->___U24PC_4 = 1;
	}

IL_0041:
	{
		goto IL_005b;
	}

IL_0046:
	{
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_5 = __this->___newSignal_1;
		NullCheck(L_5);
		bool L_6;
		L_6 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_5, NULL);
		__this->___U24PC_4 = (-1);
	}

IL_0059:
	{
		return (bool)0;
	}

IL_005b:
	{
		return (bool)1;
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSignaledCoroutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m125588AA1FDB068CC23C3BA4390DA2A8A0374ECC (U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U24current_2;
		return L_0;
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSignaledCoroutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m535B7E70C4E6C4F14A88D54D60FF6B793A2DED71 (U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U24current_2;
		return L_0;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignaledCoroutineU3Ec__Iterator0_Dispose_mD8DB396F54F1016CB8475C4DBD2ECA87863307F9 (U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC* __this, const RuntimeMethod* method) 
{
	{
		__this->___U24disposing_3 = (bool)1;
		__this->___U24PC_4 = (-1);
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCoroutineU3Ec__AnonStorey1__ctor_m4830E000E383A20145625F857B3548A72F3B9423 (U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C* __this, const RuntimeMethod* method) 
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCoroutineU3Ec__AnonStorey2__ctor_mD55DB40213ED96F10E57064777F8938478AE9BAD (U3CSendCoroutineU3Ec__AnonStorey2_tF3318E0B5D0C9626BEE7239B69C936A6ADEB446E* __this, const RuntimeMethod* method) 
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendU3Ec__AnonStorey3__ctor_m19D3FA46A53ECB8F3137D07F07F07AF6CE0E2AFE (U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB* __this, const RuntimeMethod* method) 
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendU3Ec__AnonStorey4__ctor_m017E216B01439F30DA0B08599B1700D90BDA757B (U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4::<>m__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendU3Ec__AnonStorey4_U3CU3Em__0_m69DFDB921B19E4E00EEDF3FB22AD93087791EC09 (U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB* L_0 = __this->___U3CU3Ef__refU243_1;
		NullCheck(L_0);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_1 = L_0->___d_0;
		RuntimeObject* L_2 = ___x0;
		NullCheck(L_1);
		SendOrPostCallback_Invoke_m23B949AF9D78E8635F84E1E7775A50472B4F9C28_inline(L_1, L_2, NULL);
		goto IL_0027;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(System.Exception)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_4, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0027;
	}// end catch (depth: 1)

IL_0027:
	{
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_5 = __this->___newSignal_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_5, NULL);
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
// System.Void Firebase.Platform.Default.AppConfigExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions__ctor_mAAB3762C447D2387878715D18F41BADFE2DB001F (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.AppConfigExtensions::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppConfigExtensions_get_Instance_mE7CD33CD1BA6F7AB1C77ECA12204C46D8CF0FA17 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* L_0 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->____instance_3;
		return L_0;
	}
}
// System.Void Firebase.Platform.Default.AppConfigExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions__cctor_m29CC574E19B84AAB7D610608DC2CFCDF025AD29B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4FB85806B2D5CF8ED85E32F65BEF2CB51759EC9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41C3A91ACED7A15B540EECC0D39B93A9C07B959D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral947107DA743C5DEC8247B198CC466791C8222A85);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_0, _stringLiteral41C3A91ACED7A15B540EECC0D39B93A9C07B959D, NULL);
		((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___DefaultUpdateUrl_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___DefaultUpdateUrl_0), (void*)L_0);
		((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___Default_1 = _stringLiteral947107DA743C5DEC8247B198CC466791C8222A85;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___Default_1), (void*)_stringLiteral947107DA743C5DEC8247B198CC466791C8222A85);
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___Sync_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___Sync_2), (void*)L_1);
		AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* L_2 = (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48*)il2cpp_codegen_object_new(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AppConfigExtensions__ctor_mAAB3762C447D2387878715D18F41BADFE2DB001F(L_2, NULL);
		((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->____instance_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->____instance_3), (void*)L_2);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_3 = (Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04*)il2cpp_codegen_object_new(Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m4FB85806B2D5CF8ED85E32F65BEF2CB51759EC9C(L_3, Dictionary_2__ctor_m4FB85806B2D5CF8ED85E32F65BEF2CB51759EC9C_RuntimeMethod_var);
		((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4), (void*)L_3);
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
// System.Void Firebase.Platform.Default.SystemClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemClock__ctor_m3F79E58AE923842C64A5EFA25E36918C5DB7495A (SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Platform.Default.SystemClock::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemClock__cctor_m35B31B56AB9A62CD5044A2F5AEDD4AB62734BFE7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13* L_0 = (SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13*)il2cpp_codegen_object_new(SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SystemClock__ctor_m3F79E58AE923842C64A5EFA25E36918C5DB7495A(L_0, NULL);
		((SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_StaticFields*)il2cpp_codegen_static_fields_for(SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_StaticFields*)il2cpp_codegen_static_fields_for(SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
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
// System.Collections.Generic.List`1<System.Exception> Firebase.ExceptionAggregator::get_Exceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* ExceptionAggregator_get_Exceptions_m972559432E5D3893ED3CE759068B981B4F3860CC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD910536376B8EBB5BDB30088BE4FE395391592F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_0 = ((ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var))->___threadLocalExceptions_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_1 = (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*)il2cpp_codegen_object_new(List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mD910536376B8EBB5BDB30088BE4FE395391592F3(L_1, List_1__ctor_mD910536376B8EBB5BDB30088BE4FE395391592F3_RuntimeMethod_var);
		((ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var))->___threadLocalExceptions_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var))->___threadLocalExceptions_0), (void*)L_1);
	}

IL_0014:
	{
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_2 = ((ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var))->___threadLocalExceptions_0;
		return L_2;
	}
}
// System.Exception Firebase.ExceptionAggregator::GetAndClearPendingExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionAggregator_GetAndClearPendingExceptions_m7E2429EE2556341124AB3D82CB1725543365A28A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m77AB6DB3A46250AD8149B5CB7B5768D64D3F4012_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m0B7B24FBD852FDE8C9EEC3AC5A3AD4E932EB6674_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8915FA10115EA488EBCCFED6C74E11364E162A23_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	{
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_0;
		L_0 = ExceptionAggregator_get_Exceptions_m972559432E5D3893ED3CE759068B981B4F3860CC(NULL);
		V_0 = L_0;
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_inline(L_1, List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = (Exception_t*)NULL;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_4 = V_0;
		NullCheck(L_4);
		Exception_t* L_5;
		L_5 = List_1_get_Item_m8915FA10115EA488EBCCFED6C74E11364E162A23(L_4, 0, List_1_get_Item_m8915FA10115EA488EBCCFED6C74E11364E162A23_RuntimeMethod_var);
		V_2 = L_5;
		goto IL_0036;
	}

IL_0023:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_7 = V_0;
		NullCheck(L_7);
		ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* L_8;
		L_8 = List_1_ToArray_m0B7B24FBD852FDE8C9EEC3AC5A3AD4E932EB6674(L_7, List_1_ToArray_m0B7B24FBD852FDE8C9EEC3AC5A3AD4E932EB6674_RuntimeMethod_var);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_9 = (AggregateException_t51B6205846DFB356B94452702201DD239D44422F*)il2cpp_codegen_object_new(AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		AggregateException__ctor_m36C9769557880F4E90AE5EE44C39F98D86347E1F(L_9, (RuntimeObject*)L_8, NULL);
		V_2 = L_9;
	}

IL_0036:
	{
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_10 = V_0;
		NullCheck(L_10);
		List_1_Clear_m77AB6DB3A46250AD8149B5CB7B5768D64D3F4012_inline(L_10, List_1_Clear_m77AB6DB3A46250AD8149B5CB7B5768D64D3F4012_RuntimeMethod_var);
		Exception_t* L_11 = V_2;
		return L_11;
	}
}
// System.Void Firebase.ExceptionAggregator::ThrowAndClearPendingExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_ThrowAndClearPendingExceptions_m5678256804A44705C715EC54446D8F973C4029A6 (const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	{
		Exception_t* L_0;
		L_0 = ExceptionAggregator_GetAndClearPendingExceptions_m7E2429EE2556341124AB3D82CB1725543365A28A(NULL);
		V_0 = L_0;
		Exception_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Exception_t* L_2 = V_0;
		Exception_t* L_3;
		L_3 = ExceptionAggregator_LogException_m3058016DA78DA3A3204AEA89C92BB0826C2F11F3(L_2, NULL);
		Exception_t* L_4 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExceptionAggregator_ThrowAndClearPendingExceptions_m5678256804A44705C715EC54446D8F973C4029A6_RuntimeMethod_var)));
	}

IL_0015:
	{
		return;
	}
}
// System.Exception Firebase.ExceptionAggregator::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionAggregator_LogException_m3058016DA78DA3A3204AEA89C92BB0826C2F11F3 (Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		s_Il2CppMethodInitialized = true;
	}
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* V_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	Exception_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		Exception_t* L_0 = ___exception0;
		if (!L_0)
		{
			goto IL_0086;
		}
	}
	{
		Exception_t* L_1 = ___exception0;
		V_0 = ((AggregateException_t51B6205846DFB356B94452702201DD239D44422F*)IsInstClass((RuntimeObject*)L_1, AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var));
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_2 = V_0;
		if (!L_2)
		{
			goto IL_007a;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_1 = L_3;
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_4 = V_0;
		NullCheck(L_4);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_5;
		L_5 = AggregateException_Flatten_m60F51FEE2794F91B3E47529599BE98971B7CA291(L_4, NULL);
		NullCheck(L_5);
		ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* L_6;
		L_6 = AggregateException_get_InnerExceptions_m3044DE61416F827389F2975C67AC1AD89EA050A5_inline(L_5, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC(L_6, ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC_RuntimeMethod_var);
		V_3 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_8 = V_3;
					if (!L_8)
					{
						goto IL_005e;
					}
				}
				{
					RuntimeObject* L_9 = V_3;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_005e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0042_1;
			}

IL_002f_1:
			{
				RuntimeObject* L_10 = V_3;
				NullCheck(L_10);
				Exception_t* L_11;
				L_11 = InterfaceFuncInvoker0< Exception_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Exception>::get_Current() */, IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var, L_10);
				V_2 = L_11;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_1;
				Exception_t* L_13 = V_2;
				NullCheck(L_13);
				String_t* L_14;
				L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
				NullCheck(L_12);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, L_14, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_0042_1:
			{
				RuntimeObject* L_15 = V_3;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_002f_1;
				}
			}
			{
				goto IL_005f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = V_1;
		NullCheck(L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18;
		L_18 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_17, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		String_t* L_19;
		L_19 = String_Join_mE405D676C6881553258F8BAD40A20B462D611068(_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mD75A87D37AD77AC7BF0463C48DDD46E7901B0106(4, L_19, NULL);
		goto IL_0086;
	}

IL_007a:
	{
		Exception_t* L_20 = ___exception0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mD75A87D37AD77AC7BF0463C48DDD46E7901B0106(4, L_21, NULL);
	}

IL_0086:
	{
		Exception_t* L_22 = ___exception0;
		return L_22;
	}
}
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m0B206615C9C9608E5D2CC1738CB2056F121811FB (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___action0;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		goto IL_001c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		throw e;
	}

CATCH_000b:
	{// begin catch(System.Exception)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_1;
		L_1 = ExceptionAggregator_get_Exceptions_m972559432E5D3893ED3CE759068B981B4F3860CC(NULL);
		Exception_t* L_2 = V_0;
		NullCheck(L_1);
		List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_inline(L_1, L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001c;
	}// end catch (depth: 1)

IL_001c:
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
// System.Void Firebase.Platform.DebugLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger__ctor_m975238F7F458467754AB4691AA1175EBB3BE7C9B (DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Firebase.Platform.DebugLogger Firebase.Platform.DebugLogger::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* DebugLogger_get_Instance_mA20E9232A5C60CAA50C641FAE996FA62A5D82A33 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* L_0 = ((DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_StaticFields*)il2cpp_codegen_static_fields_for(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
// System.Void Firebase.Platform.DebugLogger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger__cctor_mF8D5A3D179D533E6CD6FA37D85BEF242D3B8AFE3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* L_0 = (DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1*)il2cpp_codegen_object_new(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DebugLogger__ctor_m975238F7F458467754AB4691AA1175EBB3BE7C9B(L_0, NULL);
		((DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_StaticFields*)il2cpp_codegen_static_fields_for(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var))->____instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_StaticFields*)il2cpp_codegen_static_fields_for(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var))->____instance_0), (void*)L_0);
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
// System.Void Firebase.Platform.Services::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Services__cctor_m4036DF2DCFD0D7BCDA089BEE0A8B31B6EFB2D00D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = AppConfigExtensions_get_Instance_mE7CD33CD1BA6F7AB1C77ECA12204C46D8CF0FA17_inline(NULL);
		Services_set_AppConfig_m3A9EF6EEAE013442C30B8CC432ED28B5FD4D9F2C_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_StaticFields*)il2cpp_codegen_static_fields_for(SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var))->___Instance_0;
		Services_set_Clock_m6EA7AA445A3CCC399FA5BB9DFD5AF4E6DECACE88_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* L_2;
		L_2 = DebugLogger_get_Instance_mA20E9232A5C60CAA50C641FAE996FA62A5D82A33_inline(NULL);
		Services_set_Logging_m0406136BE33759DC9EAC480E0FE232690A86A16A_inline(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Platform.Services::set_AppConfig(Firebase.Platform.IAppConfigExtensions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Services_set_AppConfig_m3A9EF6EEAE013442C30B8CC432ED28B5FD4D9F2C (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAppConfigU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAppConfigU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Platform.Services::set_Clock(Firebase.Platform.IClockService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Services_set_Clock_m6EA7AA445A3CCC399FA5BB9DFD5AF4E6DECACE88 (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CClockU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CClockU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Platform.Services::set_Logging(Firebase.Platform.ILoggingService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Services_set_Logging_m0406136BE33759DC9EAC480E0FE232690A86A16A (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CLoggingU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CLoggingU3Ek__BackingField_2), (void*)L_0);
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
// System.Void Firebase.Dispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher__ctor_m20D7687CB59CF114ACF69131CD3BA289B80A8B2A (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*)il2cpp_codegen_object_new(Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272(L_0, Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		__this->___queue_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_1), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_1;
		L_1 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_1, NULL);
		__this->___ownerThreadId_0 = L_2;
		return;
	}
}
// System.Boolean Firebase.Dispatcher::ManagesThisThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dispatcher_ManagesThisThread_mF00448368389637B00847E99D9DA66DEF82E118D (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* __this, const RuntimeMethod* method) 
{
	{
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0;
		L_0 = Thread_get_CurrentThread_m835AD1DF1C0D10BABE1A5427CC4B357C991B25AB(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_0, NULL);
		int32_t L_2 = __this->___ownerThreadId_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Void Firebase.Dispatcher::PollJobs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_PollJobs_m90DF848D76273E55DB08A80E9C246E9E92E931CE (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	RuntimeObject* V_1 = NULL;

IL_0000:
	{
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = __this->___queue_1;
		V_1 = L_0;
		RuntimeObject* L_1 = V_1;
		Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_1;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_3 = __this->___queue_1;
				NullCheck(L_3);
				int32_t L_4;
				L_4 = Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline(L_3, Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
				if ((((int32_t)L_4) <= ((int32_t)0)))
				{
					goto IL_002f_1;
				}
			}
			{
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_5 = __this->___queue_1;
				NullCheck(L_5);
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6;
				L_6 = Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E(L_5, Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
				V_0 = L_6;
				goto IL_0034_1;
			}

IL_002f_1:
			{
				goto IL_004b;
			}

IL_0034_1:
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_0;
		ExceptionAggregator_Wrap_m0B206615C9C9608E5D2CC1738CB2056F121811FB(L_7, NULL);
		goto IL_0000;
	}

IL_004b:
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
// System.Void Firebase.Platform.FirebaseAppUtilsStub::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub__ctor_m26C823CCA8BC46F64579375E15FA2B1766402132 (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Firebase.Platform.FirebaseAppUtilsStub Firebase.Platform.FirebaseAppUtilsStub::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* FirebaseAppUtilsStub_get_Instance_m361D43B0066F8C3067E898965964328EC136E74A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* L_0 = ((FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtilsStub::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub_TranslateDllNotFoundException_mDDDE0AFBE2714E5A360C9C26184C46E0FD6169E7 (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___action0;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtilsStub::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub_PollCallbacks_mB4F4C4556E7FE81BCAFAB9D06A2AF268E62F9463 (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Firebase.Platform.PlatformLogLevel Firebase.Platform.FirebaseAppUtilsStub::GetLogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseAppUtilsStub_GetLogLevel_mE32FBF80367DE28198974386C8E0F17CFD2B925F (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(1);
	}
}
// System.Void Firebase.Platform.FirebaseAppUtilsStub::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub__cctor_m308390A5EC41ED3A7FB17E84C7F9A8EA00F8C2FE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* L_0 = (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02*)il2cpp_codegen_object_new(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FirebaseAppUtilsStub__ctor_m26C823CCA8BC46F64579375E15FA2B1766402132(L_0, NULL);
		((FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var))->____instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var))->____instance_0), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* FirebaseHandler_get_DefaultInstance_mAE0FC8CDB594816EE0DC5A552501A20500655F1E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96_inline (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsPlayModeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29_inline (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsPlayModeU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* FirebaseAppUtilsStub_get_Instance_m361D43B0066F8C3067E898965964328EC136E74A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* L_0 = ((FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_AppUtils_m3CF4CEF8A89CB92676CDEAC04E59850DAFB651BA_inline (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CAppUtilsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CAppUtilsU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* FirebaseHandler_get_ThreadDispatcher_mF4FACC8630771208FCF0A6E4ADBD9DE2B92623E3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CThreadDispatcherU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FirebaseHandler_get_AppUtils_mD317C324F3E2F6D3260E1CEAA946847BAB91BC2C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CAppUtilsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs_set_HasFocus_m144DF1C01B04C22AC4C98A06E2FE88E89AA9C107_inline (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CHasFocusU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_ThreadDispatcher_m2AE8411CCA401E1683B93B40D4FDCC29DF953F5A_inline (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CThreadDispatcherU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CThreadDispatcherU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlatformInformation_set_RealtimeSinceStartupSafe_mBA2F7097A44D7F1DF964ABCC2B23C0A951919941_inline (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityConfigExtensions_get_DefaultInstance_mB4442653C9662A8DFA4B1313B8440F52712EB5A9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* L_0 = ((UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var))->____instance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_AppConfig_m3A9EF6EEAE013442C30B8CC432ED28B5FD4D9F2C_inline (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAppConfigU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAppConfigU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* UnityLoggingService_get_Instance_mD7B53127EFA0E161C976160DACDF8C7E90B20E87_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* L_0 = ((UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_Logging_m0406136BE33759DC9EAC480E0FE232690A86A16A_inline (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CLoggingU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CLoggingU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SendOrPostCallback_Invoke_m23B949AF9D78E8635F84E1E7775A50472B4F9C28_inline (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___state0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___state0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* AggregateException_get_InnerExceptions_m3044DE61416F827389F2975C67AC1AD89EA050A5_inline (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* L_0 = __this->___m_innerExceptions_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AppConfigExtensions_get_Instance_mE7CD33CD1BA6F7AB1C77ECA12204C46D8CF0FA17_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* L_0 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->____instance_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_Clock_m6EA7AA445A3CCC399FA5BB9DFD5AF4E6DECACE88_inline (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CClockU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CClockU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* DebugLogger_get_Instance_mA20E9232A5C60CAA50C641FAE996FA62A5D82A33_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* L_0 = ((DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_StaticFields*)il2cpp_codegen_static_fields_for(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___m_Item1_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___m_Item2_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
