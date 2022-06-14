#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1>
struct InvokerActionInvoker1;
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
struct InvokerActionInvoker2;
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
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
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
struct InvokerFuncInvoker2;
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

// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tD81F54C87D78FE70A5DE7DAA170AE5EB4E54E8C3;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t070EAA8A0D7DC2B4DA1223E3809A83B3933BF21A;
// System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>
struct EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>
struct EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Int32>
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
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
// Firebase.Messaging.FirebaseMessage
struct FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Firebase.Messaging.MessageReceivedEventArgs
struct MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// System.OutOfMemoryException
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
// Firebase.Messaging.TokenReceivedEventArgs
struct TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_tC2B37930B020E09BB7E6EBC451C2864B0B29DE73;
// Firebase.Messaging.FirebaseMessaging/Listener
struct Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9;
// Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0
struct U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C;
// Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1
struct U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48;
// Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate
struct MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC;
// Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate
struct TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5;
// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C const RuntimeMethod* ExceptionAggregator_Wrap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5447A3972A4136101F5E77F152B651E1B7F9820B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessage_get_From_m6A8B7F66B7C0E65663FF0054C694CF5C957AC8E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_SendPendingEvents_m72B528593E6FBEFD66D80879CA15AAF7F76FFBEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_SetListenerCallbacksEnabled_mE847151A63AF1F8EBA69F6289B6DE5AD627523A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseMessaging_SetListenerCallbacks_mF036CA51FA8A0C9EF1D1899B8763F97190A61DEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Listener_MessageReceivedDelegateMethod_m266687B42E6D150FFBA5041DC71A1B0791C9C454_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Listener_TokenReceivedDelegateMethod_mE95E3F55EDE41E8B309CE94AFF582DBC9E1DAF8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m0EC2E596EC0479E6DDC25D23A5C00C21C3FAC67A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m26122FFFD93449BA4AF951C6615B1E4D246DD266_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_m271FFF809B24E35BF8C4DFC8EEF8DA75C455873F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m37AF233CD8A4D39CAB3C2423B10C9308AB3C9D52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m73E32FFDBCDE38001506299F698974CECF188088_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_mAD182EDD91512C091A4579D0A893D26950E9EFA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_mBA7C5D6DB92EB7E2DCBD53055BCD69CD59AE2345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA72FE799D29D12D35F49523CA4BA44803DBACE44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m0AB68407FDFC1741FCE0FEFFEE364F90C8AAFE6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m61264DEDBE3617AF6D713816E469262E1F22A47F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_mA73D46D17E94C49C02A95526DEE12EA8CBCA603A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_mFF785890124119DF8C098CAF3EFB965C726668D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_mF56F0A2DC619A9226A9A7E410DB353C5F9D766F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m4C14BAAA23752523F57A8EB062C85A8008A1CAF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m949F545E2EE86BEE39CE01D577B58F9DF28A85C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_m95C1D01C7A2503745F9979AEEFC24AC266C6A01A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_U3CU3Em__0_mD7FEE9E350C8DA15A5810CE09D1E6306186FDF1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_U3CU3Em__0_m39CC1C02602244E79D6C1CCE642F6BA3CBF57013_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7C255661816635D8A9BB487082288EDF4DC1B1F7 
{
};
struct Il2CppArrayBounds;

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// Firebase.Messaging.FirebaseMessaging
struct FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3  : public RuntimeObject
{
};

struct FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields
{
	// System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs> Firebase.Messaging.FirebaseMessaging::MessageReceivedInternal
	EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* ___MessageReceivedInternal_0;
	// System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs> Firebase.Messaging.FirebaseMessaging::TokenReceivedInternal
	EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* ___TokenReceivedInternal_1;
	// Firebase.Messaging.FirebaseMessaging/Listener Firebase.Messaging.FirebaseMessaging::listener
	Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* ___listener_2;
};

// Firebase.Messaging.FirebaseMessagingPINVOKE
struct FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F  : public RuntimeObject
{
};

struct FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_StaticFields
{
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper Firebase.Messaging.FirebaseMessagingPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C* ___swigExceptionHelper_0;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper Firebase.Messaging.FirebaseMessagingPINVOKE::swigStringHelper
	SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9* ___swigStringHelper_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// Firebase.Messaging.FirebaseMessaging/Listener
struct Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7  : public RuntimeObject
{
	// Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate Firebase.Messaging.FirebaseMessaging/Listener::messageReceivedDelegate
	MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* ___messageReceivedDelegate_0;
	// Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate Firebase.Messaging.FirebaseMessaging/Listener::tokenReceivedDelegate
	TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* ___tokenReceivedDelegate_1;
	// Firebase.FirebaseApp Firebase.Messaging.FirebaseMessaging/Listener::app
	FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* ___app_2;
};

struct Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields
{
	// Firebase.Messaging.FirebaseMessaging/Listener Firebase.Messaging.FirebaseMessaging/Listener::listener
	Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* ___listener_3;
};

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C  : public RuntimeObject
{
};

struct SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields
{
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___applicationDelegate_0;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___arithmeticDelegate_1;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___divideByZeroDelegate_2;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___indexOutOfRangeDelegate_3;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___invalidCastDelegate_4;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___invalidOperationDelegate_5;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___ioDelegate_6;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___nullReferenceDelegate_7;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___outOfMemoryDelegate_8;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___overflowDelegate_9;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___systemDelegate_10;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* ___argumentDelegate_11;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* ___argumentNullDelegate_12;
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* ___argumentOutOfRangeDelegate_13;
};

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException
struct SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909  : public RuntimeObject
{
};

struct SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_StaticFields
{
	// System.Int32 Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;
};

struct SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_ThreadStaticFields
{
	// System.Exception Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::pendingException
	Exception_t* ___pendingException_0;
};

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9  : public RuntimeObject
{
};

struct SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_StaticFields
{
	// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* ___stringDelegate_0;
};

// Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1
struct U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48  : public RuntimeObject
{
	// System.String Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1::token
	String_t* ___token_0;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
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

// Firebase.Messaging.MessageReceivedEventArgs
struct MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// Firebase.Messaging.FirebaseMessage Firebase.Messaging.MessageReceivedEventArgs::<Message>k__BackingField
	FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* ___U3CMessageU3Ek__BackingField_1;
};

// Firebase.Messaging.TokenReceivedEventArgs
struct TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String Firebase.Messaging.TokenReceivedEventArgs::<Token>k__BackingField
	String_t* ___U3CTokenU3Ek__BackingField_1;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0
struct U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C  : public RuntimeObject
{
	// System.IntPtr Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0::message
	intptr_t ___message_0;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
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

// Firebase.Messaging.FirebaseMessage
struct FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F  : public RuntimeObject
{
	// System.Runtime.InteropServices.HandleRef Firebase.Messaging.FirebaseMessage::swigCPtr
	HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___swigCPtr_0;
	// System.Boolean Firebase.Messaging.FirebaseMessage::swigCMemOwn
	bool ___swigCMemOwn_1;
};

struct FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F_StaticFields
{
	// System.DateTime Firebase.Messaging.FirebaseMessage::UnixEpochUtc
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpochUtc_2;
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

// System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>
struct EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>
struct EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0  : public MulticastDelegate_t
{
};

// System.Func`1<System.Int32>
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD  : public MulticastDelegate_t
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

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
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

// Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate
struct MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC  : public MulticastDelegate_t
{
};

// Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate
struct TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0  : public MulticastDelegate_t
{
};

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110  : public MulticastDelegate_t
{
};

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5  : public MulticastDelegate_t
{
};

// Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6  : public MulticastDelegate_t
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


// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1_gshared (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T Firebase.ExceptionAggregator::Wrap<System.Int32>(System.Func`1<T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExceptionAggregator_Wrap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5447A3972A4136101F5E77F152B651E1B7F9820B_gshared (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ___func0, int32_t ___errorValue1, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) ;

// Firebase.Messaging.FirebaseMessaging/Listener Firebase.Messaging.FirebaseMessaging/Listener::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* Listener_Create_m1579CC44B820C41B8EAEB1B66867D96D26B43F98 (const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m2F86C66A2C7C7D8D4A7CC05AF72E3AE3AAB4E529 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Destroy_m73CAD48B8E1116F5DA0763162D7E3D33D8A9B673 (const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacksEnabled_mE847151A63AF1F8EBA69F6289B6DE5AD627523A7 (bool ___message_callback_enabled0, bool ___token_callback_enabled1, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging::SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SendPendingEvents_m72B528593E6FBEFD66D80879CA15AAF7F76FFBEB (const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging::add_MessageReceivedInternal(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_MessageReceivedInternal_mAB0A8E865C7510376E57DF1952848D02419B46A7 (EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging::CreateOrDestroyListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_CreateOrDestroyListener_mB7D28F9BE1B48DF3F364FE6BC2091AD99AAE0620 (const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging::remove_MessageReceivedInternal(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_MessageReceivedInternal_mAFDE75F59F9C6D497B99FE04ABCC5FDEDAF32628 (EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging::add_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_TokenReceivedInternal_m6704D09B3578B076797EC87802A6B6F47C4D9629 (EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging::remove_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_TokenReceivedInternal_m482E8C5ADD9B369A58963B84350C3F040EC7C027 (EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SetListenerCallbacks_mF8AA5FD5588E00D69740B597E1B34D7D32CC739C (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* ___jarg10, TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* ___jarg21, const RuntimeMethod* method) ;
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538 (const RuntimeMethod* method) ;
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF (const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SetListenerCallbacksEnabled_m2C733F8CD49BC05970F0AD98C12B7EB043CBCAF5 (bool ___jarg10, bool ___jarg21, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SendPendingEvents_mDEF612485C786368F12503590D6947BF538FA3A9 (const RuntimeMethod* method) ;
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener::MessageReceivedDelegateMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Listener_MessageReceivedDelegateMethod_m266687B42E6D150FFBA5041DC71A1B0791C9C454 (intptr_t ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::TokenReceivedDelegateMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_TokenReceivedDelegateMethod_mE95E3F55EDE41E8B309CE94AFF582DBC9E1DAF8E (String_t* ___token0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate__ctor_m7C746AD1F9449816B6CFE442E53CB22D66785344 (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedDelegate__ctor_m7213BFF7CDB058058B92B871EFE65B9C5C906EF3 (TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* FirebaseApp_get_DefaultInstance_mCA6FC0DE0B25880FC6ACEAD5585ED84407690C61 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacks_mF036CA51FA8A0C9EF1D1899B8763F97190A61DEE (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* ___messageCallback0, TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* ___tokenCallback1, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener__ctor_m87D2A4FC1D1CFAF89AB68D83165777A9F92E63C0 (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Dispose_m3C1C99DA6E56534E4A654434061702E518946B19 (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0__ctor_m762A83BDCF700C20F4D5EB358FEBA76246EED9FC (U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1 (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1_gshared)(__this, ___object0, ___method1, method);
}
// T Firebase.ExceptionAggregator::Wrap<System.Int32>(System.Func`1<T>,T)
inline int32_t ExceptionAggregator_Wrap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5447A3972A4136101F5E77F152B651E1B7F9820B (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ___func0, int32_t ___errorValue1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD*, int32_t, const RuntimeMethod*))ExceptionAggregator_Wrap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5447A3972A4136101F5E77F152B651E1B7F9820B_gshared)(___func0, ___errorValue1, method);
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1__ctor_mF49B2EA70CE3B50B376905BF0379B60147A466C5 (U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m0B206615C9C9608E5D2CC1738CB2056F121811FB (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessage::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage__ctor_mC5C9E0BADB0E232C7A30880B214C00E725862884 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.MessageReceivedEventArgs::.ctor(Firebase.Messaging.FirebaseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedEventArgs__ctor_mF420D689ACEE65740BA0E1A253DF2D33CBAFC061 (MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5* __this, FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* ___msg0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mE74D513905186175FB8E2AD6A88D306119DEF974_inline (EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* __this, RuntimeObject* ___sender0, MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*, RuntimeObject*, MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void Firebase.Messaging.TokenReceivedEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedEventArgs__ctor_m834B72CF7DB04F86A4929BBDEFA7E969BFC09D21 (TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C* __this, String_t* ___token0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m5B2B0750695D46F73D20A0615F8626851F4A80E4_inline (EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* __this, RuntimeObject* ___sender0, TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*, RuntimeObject*, TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m74E1F593CDD0E2FA4B49CBD999705045945E5EB9 (SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m374221329F17BCC4EED8997888A382721EFCF171 (SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m0EC2E596EC0479E6DDC25D23A5C00C21C3FAC67A (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m73E32FFDBCDE38001506299F698974CECF188088 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mAD182EDD91512C091A4579D0A893D26950E9EFA9 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA72FE799D29D12D35F49523CA4BA44803DBACE44 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m0AB68407FDFC1741FCE0FEFFEE364F90C8AAFE6F (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m61264DEDBE3617AF6D713816E469262E1F22A47F (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mBA7C5D6DB92EB7E2DCBD53055BCD69CD59AE2345 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_mA73D46D17E94C49C02A95526DEE12EA8CBCA603A (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mFF785890124119DF8C098CAF3EFB965C726668D9 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mF56F0A2DC619A9226A9A7E410DB353C5F9D766F8 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m4C14BAAA23752523F57A8EB062C85A8008A1CAF7 (String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m26122FFFD93449BA4AF951C6615B1E4D246DD266 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m271FFF809B24E35BF8C4DFC8EEF8DA75C455873F (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m37AF233CD8A4D39CAB3C2423B10C9308AB3C9D52 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33 (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mD3AE8F3B0E1894F62FBDE8481B860EC23B3402C4 (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseMessaging_m4FD021DFE87F643C2E06BF92695F90F89841EFDC (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___applicationDelegate0, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___arithmeticDelegate1, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___divideByZeroDelegate2, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___indexOutOfRangeDelegate3, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___invalidCastDelegate4, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___invalidOperationDelegate5, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___ioDelegate6, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___nullReferenceDelegate7, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___outOfMemoryDelegate8, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___overflowDelegate9, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___systemExceptionDelegate10, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging_m02843964CA7D2770F56B83768E564EC195F11C9A (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* ___argumentDelegate0, ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* ___argumentNullDelegate1, ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* ___argumentOutOfRangeDelegate2, const RuntimeMethod* method) ;
// System.Exception Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m268DFCFF3EAFA772DC873BAF9B891664228AB2FE (const RuntimeMethod* method) ;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m949F545E2EE86BEE39CE01D577B58F9DF28A85C2 (Exception_t* ___e0, const RuntimeMethod* method) ;
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
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m95C1D01C7A2503745F9979AEEFC24AC266C6A01A (String_t* ___cString0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m959EEC67F999197EA2457A7CD4684BD8588DE11E (SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FirebaseMessaging_mC693645CB9DDC7654B74404F03765EA635FCEC60 (SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* ___stringDelegate0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage_Dispose_mDF6750A30E95068A13849BA85014E518D949D461 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m2055005E349E895499E1B3B826C89228FFAC4C17_inline (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m2F715312CBFCE7E1A81D0689F68B97218E37E5D1 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::delete_FirebaseMessage(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_delete_FirebaseMessage_m5CDB7E92A4913470D3AB3B6E892C5DF2731E4881 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_From_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_From_get_mFF1613B91FE580171341ED64CB94A9D87BF28E16 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, int32_t ___kind7, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.MessageReceivedEventArgs::set_Message(Firebase.Messaging.FirebaseMessage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageReceivedEventArgs_set_Message_m237AEA7C0AAB2533F89A673BA3F288F4E1F3D04A_inline (MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5* __this, FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Messaging.TokenReceivedEventArgs::set_Token(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenReceivedEventArgs_set_Token_mC42B0EC030BD8880FA31346108580505D1C4A318_inline (TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C* __this, String_t* ___value0, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_delete_FirebaseMessage(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Messaging_CSharp_FirebaseMessage_From_get(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_SetListenerCallbacks(Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_SetListenerCallbacksEnabled(int32_t, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Messaging_CSharp_SendPendingEvents();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_FirebaseMessaging(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionArgumentCallbacks_FirebaseMessaging(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_FirebaseMessaging(Il2CppMethodPointer);
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
// System.Void Firebase.Messaging.FirebaseMessaging::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging__cctor_m19EE552E639268535870A794500CA5005DB2D90A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_0;
		L_0 = Listener_Create_m1579CC44B820C41B8EAEB1B66867D96D26B43F98(NULL);
		((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___listener_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___listener_2), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::add_MessageReceivedInternal(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_MessageReceivedInternal_mAB0A8E865C7510376E57DF1952848D02419B46A7 (EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* V_0 = NULL;
	EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_0 = ((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___MessageReceivedInternal_0;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_1 = V_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_2 = V_1;
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_5 = V_0;
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_6;
		L_6 = InterlockedCompareExchangeImpl<EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*>((&((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___MessageReceivedInternal_0), ((EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*)Castclass((RuntimeObject*)L_4, EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_7 = V_0;
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*)L_7) == ((RuntimeObject*)(EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::remove_MessageReceivedInternal(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_MessageReceivedInternal_mAFDE75F59F9C6D497B99FE04ABCC5FDEDAF32628 (EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* V_0 = NULL;
	EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_0 = ((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___MessageReceivedInternal_0;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_1 = V_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_2 = V_1;
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_5 = V_0;
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_6;
		L_6 = InterlockedCompareExchangeImpl<EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*>((&((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___MessageReceivedInternal_0), ((EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*)Castclass((RuntimeObject*)L_4, EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_7 = V_0;
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*)L_7) == ((RuntimeObject*)(EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::add_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_TokenReceivedInternal_m6704D09B3578B076797EC87802A6B6F47C4D9629 (EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* V_0 = NULL;
	EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_0 = ((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___TokenReceivedInternal_1;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_1 = V_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_2 = V_1;
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_5 = V_0;
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_6;
		L_6 = InterlockedCompareExchangeImpl<EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*>((&((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___TokenReceivedInternal_1), ((EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*)Castclass((RuntimeObject*)L_4, EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_7 = V_0;
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*)L_7) == ((RuntimeObject*)(EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::remove_TokenReceivedInternal(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_TokenReceivedInternal_m482E8C5ADD9B369A58963B84350C3F040EC7C027 (EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* V_0 = NULL;
	EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_0 = ((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___TokenReceivedInternal_1;
		V_0 = L_0;
	}

IL_0006:
	{
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_1 = V_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_2 = V_1;
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_5 = V_0;
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_6;
		L_6 = InterlockedCompareExchangeImpl<EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*>((&((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___TokenReceivedInternal_1), ((EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*)Castclass((RuntimeObject*)L_4, EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_7 = V_0;
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_8 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*)L_7) == ((RuntimeObject*)(EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::CreateOrDestroyListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_CreateOrDestroyListener_mB7D28F9BE1B48DF3F364FE6BC2091AD99AAE0620 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var) };
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

FINALLY_0062:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
				EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_4 = ((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___MessageReceivedInternal_0;
				V_1 = (bool)((((int32_t)((((RuntimeObject*)(EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_5 = ((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___TokenReceivedInternal_1;
				V_2 = (bool)((((int32_t)((((RuntimeObject*)(EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
				bool L_6 = V_1;
				if (L_6)
				{
					goto IL_0035_1;
				}
			}
			{
				bool L_7 = V_2;
				if (!L_7)
				{
					goto IL_0040_1;
				}
			}

IL_0035_1:
			{
				Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_8;
				L_8 = Listener_Create_m1579CC44B820C41B8EAEB1B66867D96D26B43F98(NULL);
				goto IL_0045_1;
			}

IL_0040_1:
			{
				Listener_Destroy_m73CAD48B8E1116F5DA0763162D7E3D33D8A9B673(NULL);
			}

IL_0045_1:
			{
				bool L_9 = V_1;
				bool L_10 = V_2;
				il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
				FirebaseMessaging_SetListenerCallbacksEnabled_mE847151A63AF1F8EBA69F6289B6DE5AD627523A7(L_9, L_10, NULL);
				bool L_11 = V_1;
				if (L_11)
				{
					goto IL_0058_1;
				}
			}
			{
				bool L_12 = V_2;
				if (!L_12)
				{
					goto IL_005d_1;
				}
			}

IL_0058_1:
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
				FirebaseMessaging_SendPendingEvents_m72B528593E6FBEFD66D80879CA15AAF7F76FFBEB(NULL);
			}

IL_005d_1:
			{
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
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::add_MessageReceived(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_MessageReceived_m7971A52EA50C19834AA245F26DAE8A145A456E96 (EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var) };
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

FINALLY_0021:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_4 = ___value0;
			il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
			FirebaseMessaging_add_MessageReceivedInternal_mAB0A8E865C7510376E57DF1952848D02419B46A7(L_4, NULL);
			FirebaseMessaging_CreateOrDestroyListener_mB7D28F9BE1B48DF3F364FE6BC2091AD99AAE0620(NULL);
			goto IL_0028;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0028:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::remove_MessageReceived(System.EventHandler`1<Firebase.Messaging.MessageReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_MessageReceived_mF836CB7140295040CBC357F7955DA7E20B4746FC (EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var) };
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

FINALLY_0021:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_4 = ___value0;
			il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
			FirebaseMessaging_remove_MessageReceivedInternal_mAFDE75F59F9C6D497B99FE04ABCC5FDEDAF32628(L_4, NULL);
			FirebaseMessaging_CreateOrDestroyListener_mB7D28F9BE1B48DF3F364FE6BC2091AD99AAE0620(NULL);
			goto IL_0028;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0028:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::add_TokenReceived(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_add_TokenReceived_m163C96F53C5B6503CFC7774D59001F1FE0F00444 (EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var) };
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

FINALLY_0021:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_4 = ___value0;
			il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
			FirebaseMessaging_add_TokenReceivedInternal_m6704D09B3578B076797EC87802A6B6F47C4D9629(L_4, NULL);
			FirebaseMessaging_CreateOrDestroyListener_mB7D28F9BE1B48DF3F364FE6BC2091AD99AAE0620(NULL);
			goto IL_0028;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0028:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::remove_TokenReceived(System.EventHandler`1<Firebase.Messaging.TokenReceivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_remove_TokenReceived_m37BFE80CA4BF36024CDE7207550A132BD66285E0 (EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var) };
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

FINALLY_0021:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_4 = ___value0;
			il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
			FirebaseMessaging_remove_TokenReceivedInternal_m482E8C5ADD9B369A58963B84350C3F040EC7C027(L_4, NULL);
			FirebaseMessaging_CreateOrDestroyListener_mB7D28F9BE1B48DF3F364FE6BC2091AD99AAE0620(NULL);
			goto IL_0028;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0028:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacks_mF036CA51FA8A0C9EF1D1899B8763F97190A61DEE (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* ___messageCallback0, TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* ___tokenCallback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* L_0 = ___messageCallback0;
		TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* L_1 = ___tokenCallback1;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_SetListenerCallbacks_mF8AA5FD5588E00D69740B597E1B34D7D32CC739C(L_0, L_1, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessaging_SetListenerCallbacks_mF036CA51FA8A0C9EF1D1899B8763F97190A61DEE_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SetListenerCallbacksEnabled_mE847151A63AF1F8EBA69F6289B6DE5AD627523A7 (bool ___message_callback_enabled0, bool ___token_callback_enabled1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___message_callback_enabled0;
		bool L_1 = ___token_callback_enabled1;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_SetListenerCallbacksEnabled_m2C733F8CD49BC05970F0AD98C12B7EB043CBCAF5(L_0, L_1, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessaging_SetListenerCallbacksEnabled_mE847151A63AF1F8EBA69F6289B6DE5AD627523A7_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging::SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessaging_SendPendingEvents_m72B528593E6FBEFD66D80879CA15AAF7F76FFBEB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		FirebaseMessagingPINVOKE_SendPendingEvents_mDEF612485C786368F12503590D6947BF538FA3A9(NULL);
		bool L_0;
		L_0 = SWIGPendingException_get_Pending_m0BEE83B2B2559DE231EE2A87DF09649355775538(NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Exception_t* L_1;
		L_1 = SWIGPendingException_Retrieve_m5C29154CE762C145ECCBA0E7A37F5579366647BF(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessaging_SendPendingEvents_m72B528593E6FBEFD66D80879CA15AAF7F76FFBEB_RuntimeMethod_var)));
	}

IL_0015:
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
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_Listener_MessageReceivedDelegateMethod_m266687B42E6D150FFBA5041DC71A1B0791C9C454(intptr_t ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	returnValue = Listener_MessageReceivedDelegateMethod_m266687B42E6D150FFBA5041DC71A1B0791C9C454(___message0, NULL);

	return returnValue;
}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Listener_TokenReceivedDelegateMethod_mE95E3F55EDE41E8B309CE94AFF582DBC9E1DAF8E(char* ___token0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___token0' to managed representation
	String_t* ____token0_unmarshaled = NULL;
	____token0_unmarshaled = il2cpp_codegen_marshal_string_result(___token0);

	// Managed method invocation
	Listener_TokenReceivedDelegateMethod_mE95E3F55EDE41E8B309CE94AFF582DBC9E1DAF8E(____token0_unmarshaled, NULL);

}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener__ctor_m87D2A4FC1D1CFAF89AB68D83165777A9F92E63C0 (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_MessageReceivedDelegateMethod_m266687B42E6D150FFBA5041DC71A1B0791C9C454_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_TokenReceivedDelegateMethod_mE95E3F55EDE41E8B309CE94AFF582DBC9E1DAF8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* L_0 = (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC*)il2cpp_codegen_object_new(MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MessageReceivedDelegate__ctor_m7C746AD1F9449816B6CFE442E53CB22D66785344(L_0, NULL, (intptr_t)((void*)Listener_MessageReceivedDelegateMethod_m266687B42E6D150FFBA5041DC71A1B0791C9C454_RuntimeMethod_var), NULL);
		__this->___messageReceivedDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messageReceivedDelegate_0), (void*)L_0);
		TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* L_1 = (TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0*)il2cpp_codegen_object_new(TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TokenReceivedDelegate__ctor_m7213BFF7CDB058058B92B871EFE65B9C5C906EF3(L_1, NULL, (intptr_t)((void*)Listener_TokenReceivedDelegateMethod_mE95E3F55EDE41E8B309CE94AFF582DBC9E1DAF8E_RuntimeMethod_var), NULL);
		__this->___tokenReceivedDelegate_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tokenReceivedDelegate_1), (void*)L_1);
		il2cpp_codegen_runtime_class_init_inline(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25* L_2;
		L_2 = FirebaseApp_get_DefaultInstance_mCA6FC0DE0B25880FC6ACEAD5585ED84407690C61(NULL);
		__this->___app_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___app_2), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* L_3 = __this->___messageReceivedDelegate_0;
		TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* L_4 = __this->___tokenReceivedDelegate_1;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		FirebaseMessaging_SetListenerCallbacks_mF036CA51FA8A0C9EF1D1899B8763F97190A61DEE(L_3, L_4, NULL);
		return;
	}
}
// Firebase.Messaging.FirebaseMessaging/Listener Firebase.Messaging.FirebaseMessaging/Listener::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* Listener_Create_m1579CC44B820C41B8EAEB1B66867D96D26B43F98 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var) };
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

FINALLY_003b:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_4 = ((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3;
				if (!L_4)
				{
					goto IL_0026_1;
				}
			}
			{
				Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_5 = ((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3;
				V_1 = L_5;
				goto IL_0042;
			}

IL_0026_1:
			{
				Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_6 = (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7*)il2cpp_codegen_object_new(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				Listener__ctor_m87D2A4FC1D1CFAF89AB68D83165777A9F92E63C0(L_6, NULL);
				((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3), (void*)L_6);
				Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_7 = ((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3;
				V_1 = L_7;
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
		Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_8 = V_1;
		return L_8;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Destroy_m73CAD48B8E1116F5DA0763162D7E3D33D8A9B673 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var) };
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

FINALLY_002f:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_4 = ((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3;
				if (L_4)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0036;
			}

IL_0020_1:
			{
				Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_5 = ((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3;
				NullCheck(L_5);
				Listener_Dispose_m3C1C99DA6E56534E4A654434061702E518946B19(L_5, NULL);
				goto IL_0036;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0036:
	{
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Finalize_m1B8FDFA1B1FFD19A9F42B1C93B211A3274BD4851 (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* __this, const RuntimeMethod* method) 
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
			Listener_Dispose_m3C1C99DA6E56534E4A654434061702E518946B19(__this, NULL);
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
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_Dispose_m3C1C99DA6E56534E4A654434061702E518946B19 (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_0_0_0_var) };
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

FINALLY_0035:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7* L_4 = ((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3;
				if ((!(((RuntimeObject*)(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7*)L_4) == ((RuntimeObject*)(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7*)__this))))
				{
					goto IL_0030_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
				FirebaseMessaging_SetListenerCallbacks_mF036CA51FA8A0C9EF1D1899B8763F97190A61DEE((MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC*)NULL, (TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0*)NULL, NULL);
				((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3 = (Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&((Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_StaticFields*)il2cpp_codegen_static_fields_for(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7_il2cpp_TypeInfo_var))->___listener_3), (void*)(Listener_tC16E83118F05783B5CA41A3F81ABF1A2C83D7BF7*)NULL);
				__this->___app_2 = (FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___app_2), (void*)(FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25*)NULL);
			}

IL_0030_1:
			{
				goto IL_003c;
			}
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
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener::MessageReceivedDelegateMethod(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Listener_MessageReceivedDelegateMethod_m266687B42E6D150FFBA5041DC71A1B0791C9C454 (intptr_t ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_Wrap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5447A3972A4136101F5E77F152B651E1B7F9820B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_U3CU3Em__0_mD7FEE9E350C8DA15A5810CE09D1E6306186FDF1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C* V_0 = NULL;
	{
		U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C* L_0 = (U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C*)il2cpp_codegen_object_new(U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0__ctor_m762A83BDCF700C20F4D5EB358FEBA76246EED9FC(L_0, NULL);
		V_0 = L_0;
		U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C* L_1 = V_0;
		intptr_t L_2 = ___message0;
		NullCheck(L_1);
		L_1->___message_0 = L_2;
		U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C* L_3 = V_0;
		Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* L_4 = (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD*)il2cpp_codegen_object_new(Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_1__ctor_m475512287B9508E6D4721B3022635FED517234D1(L_4, L_3, (intptr_t)((void*)U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_U3CU3Em__0_mD7FEE9E350C8DA15A5810CE09D1E6306186FDF1E_RuntimeMethod_var), NULL);
		int32_t L_5;
		L_5 = ExceptionAggregator_Wrap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5447A3972A4136101F5E77F152B651E1B7F9820B(L_4, 0, ExceptionAggregator_Wrap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5447A3972A4136101F5E77F152B651E1B7F9820B_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener::TokenReceivedDelegateMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Listener_TokenReceivedDelegateMethod_mE95E3F55EDE41E8B309CE94AFF582DBC9E1DAF8E (String_t* ___token0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_U3CU3Em__0_m39CC1C02602244E79D6C1CCE642F6BA3CBF57013_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48* V_0 = NULL;
	{
		U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48* L_0 = (U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48*)il2cpp_codegen_object_new(U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1__ctor_mF49B2EA70CE3B50B376905BF0379B60147A466C5(L_0, NULL);
		V_0 = L_0;
		U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48* L_1 = V_0;
		String_t* L_2 = ___token0;
		NullCheck(L_1);
		L_1->___token_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___token_0), (void*)L_2);
		U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48* L_3 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_4, L_3, (intptr_t)((void*)U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_U3CU3Em__0_m39CC1C02602244E79D6C1CCE642F6BA3CBF57013_RuntimeMethod_var), NULL);
		ExceptionAggregator_Wrap_m0B206615C9C9608E5D2CC1738CB2056F121811FB(L_4, NULL);
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
int32_t MessageReceivedDelegate_Invoke_mF0C934D7A2A469F4B8A32D59984AB41641151EDF_Multicast(MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* __this, intptr_t ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* currentDelegate = reinterpret_cast<MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t MessageReceivedDelegate_Invoke_mF0C934D7A2A469F4B8A32D59984AB41641151EDF_Open(MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* __this, intptr_t ___message0, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
int32_t MessageReceivedDelegate_Invoke_mF0C934D7A2A469F4B8A32D59984AB41641151EDF_OpenStaticInvoker(MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* __this, intptr_t ___message0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< int32_t, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
int32_t MessageReceivedDelegate_Invoke_mF0C934D7A2A469F4B8A32D59984AB41641151EDF_ClosedStaticInvoker(MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* __this, intptr_t ___message0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< int32_t, RuntimeObject*, intptr_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* __this, intptr_t ___message0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___message0);

	return returnValue;
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedDelegate__ctor_m7C746AD1F9449816B6CFE442E53CB22D66785344 (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&MessageReceivedDelegate_Invoke_mF0C934D7A2A469F4B8A32D59984AB41641151EDF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MessageReceivedDelegate_Invoke_mF0C934D7A2A469F4B8A32D59984AB41641151EDF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageReceivedDelegate_Invoke_mF0C934D7A2A469F4B8A32D59984AB41641151EDF_Open;
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
	__this->___extra_arg_5 = (intptr_t)&MessageReceivedDelegate_Invoke_mF0C934D7A2A469F4B8A32D59984AB41641151EDF_Multicast;
}
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MessageReceivedDelegate_Invoke_mF0C934D7A2A469F4B8A32D59984AB41641151EDF (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* __this, intptr_t ___message0, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
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
void TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0_Multicast(TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* __this, String_t* ___token0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* currentDelegate = reinterpret_cast<TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___token0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0_Open(TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* __this, String_t* ___token0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___token0, method);
}
void TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0_OpenStaticInvoker(TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* __this, String_t* ___token0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___token0);
}
void TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0_ClosedStaticInvoker(TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* __this, String_t* ___token0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___token0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0 (TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* __this, String_t* ___token0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___token0' to native representation
	char* ____token0_marshaled = NULL;
	____token0_marshaled = il2cpp_codegen_marshal_string(___token0);

	// Native function invocation
	il2cppPInvokeFunc(____token0_marshaled);

	// Marshaling cleanup of parameter '___token0' native representation
	il2cpp_codegen_marshal_free(____token0_marshaled);
	____token0_marshaled = NULL;

}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedDelegate__ctor_m7213BFF7CDB058058B92B871EFE65B9C5C906EF3 (TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0_Open;
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
			__this->___invoke_impl_1 = (intptr_t)&TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0_Multicast;
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedDelegate_Invoke_m63E4E2B3A6D238DAF46E0B9B1A119BAD5E1259A0 (TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* __this, String_t* ___token0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___token0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0__ctor_m762A83BDCF700C20F4D5EB358FEBA76246EED9FC (U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Firebase.Messaging.FirebaseMessaging/Listener/<MessageReceivedDelegateMethod>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_U3CU3Em__0_mD7FEE9E350C8DA15A5810CE09D1E6306186FDF1E (U3CMessageReceivedDelegateMethodU3Ec__AnonStorey0_t522D1A0BD277B4D9560EE11B8C4B6147D72D9C6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_0 = ((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___MessageReceivedInternal_0;
		V_0 = L_0;
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		EventHandler_1_tF3AA5EB88F494B5147D2E245A3AF5AB3CDF8D72B* L_2 = V_0;
		intptr_t L_3 = __this->___message_0;
		FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* L_4 = (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F*)il2cpp_codegen_object_new(FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FirebaseMessage__ctor_mC5C9E0BADB0E232C7A30880B214C00E725862884(L_4, L_3, (bool)1, NULL);
		MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5* L_5 = (MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5*)il2cpp_codegen_object_new(MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		MessageReceivedEventArgs__ctor_mF420D689ACEE65740BA0E1A253DF2D33CBAFC061(L_5, L_4, NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_mE74D513905186175FB8E2AD6A88D306119DEF974_inline(L_2, NULL, L_5, NULL);
		return 1;
	}

IL_0026:
	{
		return 0;
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
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1__ctor_mF49B2EA70CE3B50B376905BF0379B60147A466C5 (U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessaging/Listener/<TokenReceivedDelegateMethod>c__AnonStorey1::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_U3CU3Em__0_m39CC1C02602244E79D6C1CCE642F6BA3CBF57013 (U3CTokenReceivedDelegateMethodU3Ec__AnonStorey1_t7B9B1F8EA01DA9EDF63D27A60D3D214AC248BD48* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var);
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_0 = ((FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessaging_tAF3E6E43968D1C156E887454B8F9BDB7723036D3_il2cpp_TypeInfo_var))->___TokenReceivedInternal_1;
		V_0 = L_0;
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		EventHandler_1_t628C7697D75CC4686AD6125D745540AC427C28A0* L_2 = V_0;
		String_t* L_3 = __this->___token_0;
		TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C* L_4 = (TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C*)il2cpp_codegen_object_new(TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TokenReceivedEventArgs__ctor_m834B72CF7DB04F86A4929BBDEFA7E969BFC09D21(L_4, L_3, NULL);
		NullCheck(L_2);
		EventHandler_1_Invoke_m5B2B0750695D46F73D20A0615F8626851F4A80E4_inline(L_2, NULL, L_4, NULL);
	}

IL_001e:
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE__cctor_m814BF53ABB85986AC726CF6D42293A7A22F7FCD9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C* L_0 = (SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C*)il2cpp_codegen_object_new(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGExceptionHelper__ctor_m74E1F593CDD0E2FA4B49CBD999705045945E5EB9(L_0, NULL);
		((FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var))->___swigExceptionHelper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var))->___swigExceptionHelper_0), (void*)L_0);
		SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9* L_1 = (SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9*)il2cpp_codegen_object_new(SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SWIGStringHelper__ctor_m374221329F17BCC4EED8997888A382721EFCF171(L_1, NULL);
		((FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var))->___swigStringHelper_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var))->___swigStringHelper_1), (void*)L_1);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::delete_FirebaseMessage(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_delete_FirebaseMessage_m5CDB7E92A4913470D3AB3B6E892C5DF2731E4881 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Messaging_CSharp_delete_FirebaseMessage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_delete_FirebaseMessage)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE::FirebaseMessage_From_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessagingPINVOKE_FirebaseMessage_From_get_mFF1613B91FE580171341ED64CB94A9D87BF28E16 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___jarg10, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Messaging_CSharp_FirebaseMessage_From_get", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.____handle_1;

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_FirebaseMessage_From_get)(____jarg10_marshaled);
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SetListenerCallbacks(Firebase.Messaging.FirebaseMessaging/Listener/MessageReceivedDelegate,Firebase.Messaging.FirebaseMessaging/Listener/TokenReceivedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SetListenerCallbacks_mF8AA5FD5588E00D69740B597E1B34D7D32CC739C (MessageReceivedDelegate_t0426330610D984E008DF662FD99680187AEA49DC* ___jarg10, TokenReceivedDelegate_t3893429AE7EEC18BBD788219BAE8961E21EC4AE0* ___jarg21, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Messaging_CSharp_SetListenerCallbacks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_SetListenerCallbacks)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SetListenerCallbacksEnabled(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SetListenerCallbacksEnabled_m2C733F8CD49BC05970F0AD98C12B7EB043CBCAF5 (bool ___jarg10, bool ___jarg21, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4 + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Messaging_CSharp_SetListenerCallbacksEnabled", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_SetListenerCallbacksEnabled)(static_cast<int32_t>(___jarg10), static_cast<int32_t>(___jarg21));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___jarg10), static_cast<int32_t>(___jarg21));
	#endif

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE::SendPendingEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessagingPINVOKE_SendPendingEvents_mDEF612485C786368F12503590D6947BF538FA3A9 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "Firebase_Messaging_CSharp_SendPendingEvents", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Messaging_CSharp_SendPendingEvents)();
	#else
	il2cppPInvokeFunc();
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m0EC2E596EC0479E6DDC25D23A5C00C21C3FAC67A(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m0EC2E596EC0479E6DDC25D23A5C00C21C3FAC67A(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m73E32FFDBCDE38001506299F698974CECF188088(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m73E32FFDBCDE38001506299F698974CECF188088(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_mAD182EDD91512C091A4579D0A893D26950E9EFA9(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_mAD182EDD91512C091A4579D0A893D26950E9EFA9(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA72FE799D29D12D35F49523CA4BA44803DBACE44(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA72FE799D29D12D35F49523CA4BA44803DBACE44(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m0AB68407FDFC1741FCE0FEFFEE364F90C8AAFE6F(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m0AB68407FDFC1741FCE0FEFFEE364F90C8AAFE6F(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m61264DEDBE3617AF6D713816E469262E1F22A47F(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m61264DEDBE3617AF6D713816E469262E1F22A47F(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_mBA7C5D6DB92EB7E2DCBD53055BCD69CD59AE2345(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_mBA7C5D6DB92EB7E2DCBD53055BCD69CD59AE2345(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_mA73D46D17E94C49C02A95526DEE12EA8CBCA603A(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_mA73D46D17E94C49C02A95526DEE12EA8CBCA603A(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_mFF785890124119DF8C098CAF3EFB965C726668D9(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_mFF785890124119DF8C098CAF3EFB965C726668D9(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_mF56F0A2DC619A9226A9A7E410DB353C5F9D766F8(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_mF56F0A2DC619A9226A9A7E410DB353C5F9D766F8(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m4C14BAAA23752523F57A8EB062C85A8008A1CAF7(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m4C14BAAA23752523F57A8EB062C85A8008A1CAF7(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m26122FFFD93449BA4AF951C6615B1E4D246DD266(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m26122FFFD93449BA4AF951C6615B1E4D246DD266(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m271FFF809B24E35BF8C4DFC8EEF8DA75C455873F(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_m271FFF809B24E35BF8C4DFC8EEF8DA75C455873F(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m37AF233CD8A4D39CAB3C2423B10C9308AB3C9D52(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m37AF233CD8A4D39CAB3C2423B10C9308AB3C9D52(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_m7B565778834BC0C922431BDF17820D2DB7E353AC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_m0EC2E596EC0479E6DDC25D23A5C00C21C3FAC67A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_m26122FFFD93449BA4AF951C6615B1E4D246DD266_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_m271FFF809B24E35BF8C4DFC8EEF8DA75C455873F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m37AF233CD8A4D39CAB3C2423B10C9308AB3C9D52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_m73E32FFDBCDE38001506299F698974CECF188088_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_mAD182EDD91512C091A4579D0A893D26950E9EFA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_mBA7C5D6DB92EB7E2DCBD53055BCD69CD59AE2345_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA72FE799D29D12D35F49523CA4BA44803DBACE44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_m0AB68407FDFC1741FCE0FEFFEE364F90C8AAFE6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_m61264DEDBE3617AF6D713816E469262E1F22A47F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_mA73D46D17E94C49C02A95526DEE12EA8CBCA603A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_mFF785890124119DF8C098CAF3EFB965C726668D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_mF56F0A2DC619A9226A9A7E410DB353C5F9D766F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_m4C14BAAA23752523F57A8EB062C85A8008A1CAF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_0 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_0, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingApplicationException_m0EC2E596EC0479E6DDC25D23A5C00C21C3FAC67A_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___applicationDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___applicationDelegate_0), (void*)L_0);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_1 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_1, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArithmeticException_m73E32FFDBCDE38001506299F698974CECF188088_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___arithmeticDelegate_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___arithmeticDelegate_1), (void*)L_1);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_2 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_2, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingDivideByZeroException_mAD182EDD91512C091A4579D0A893D26950E9EFA9_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2), (void*)L_2);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_3 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_3, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA72FE799D29D12D35F49523CA4BA44803DBACE44_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3), (void*)L_3);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_4 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_4, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidCastException_m0AB68407FDFC1741FCE0FEFFEE364F90C8AAFE6F_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___invalidCastDelegate_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___invalidCastDelegate_4), (void*)L_4);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_5 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_5, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingInvalidOperationException_m61264DEDBE3617AF6D713816E469262E1F22A47F_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5), (void*)L_5);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_6 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_6, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingIOException_mBA7C5D6DB92EB7E2DCBD53055BCD69CD59AE2345_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___ioDelegate_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___ioDelegate_6), (void*)L_6);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_7 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_7, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingNullReferenceException_mA73D46D17E94C49C02A95526DEE12EA8CBCA603A_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7), (void*)L_7);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_8 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_8, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOutOfMemoryException_mFF785890124119DF8C098CAF3EFB965C726668D9_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8), (void*)L_8);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_9 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_9, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingOverflowException_mF56F0A2DC619A9226A9A7E410DB353C5F9D766F8_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___overflowDelegate_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___overflowDelegate_9), (void*)L_9);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_10 = (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*)il2cpp_codegen_object_new(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33(L_10, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingSystemException_m4C14BAAA23752523F57A8EB062C85A8008A1CAF7_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___systemDelegate_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___systemDelegate_10), (void*)L_10);
		ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* L_11 = (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ExceptionArgumentDelegate__ctor_mD3AE8F3B0E1894F62FBDE8481B860EC23B3402C4(L_11, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentException_m26122FFFD93449BA4AF951C6615B1E4D246DD266_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___argumentDelegate_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___argumentDelegate_11), (void*)L_11);
		ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* L_12 = (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ExceptionArgumentDelegate__ctor_mD3AE8F3B0E1894F62FBDE8481B860EC23B3402C4(L_12, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentNullException_m271FFF809B24E35BF8C4DFC8EEF8DA75C455873F_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___argumentNullDelegate_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___argumentNullDelegate_12), (void*)L_12);
		ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* L_13 = (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110*)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		ExceptionArgumentDelegate__ctor_mD3AE8F3B0E1894F62FBDE8481B860EC23B3402C4(L_13, NULL, (intptr_t)((void*)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m37AF233CD8A4D39CAB3C2423B10C9308AB3C9D52_RuntimeMethod_var), NULL);
		((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13), (void*)L_13);
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_14 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___applicationDelegate_0;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_15 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___arithmeticDelegate_1;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_16 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___divideByZeroDelegate_2;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_17 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___indexOutOfRangeDelegate_3;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_18 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___invalidCastDelegate_4;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_19 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___invalidOperationDelegate_5;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_20 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___ioDelegate_6;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_21 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___nullReferenceDelegate_7;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_22 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___outOfMemoryDelegate_8;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_23 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___overflowDelegate_9;
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* L_24 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___systemDelegate_10;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseMessaging_m4FD021DFE87F643C2E06BF92695F90F89841EFDC(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, NULL);
		ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* L_25 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___argumentDelegate_11;
		ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* L_26 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___argumentNullDelegate_12;
		ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* L_27 = ((SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C_il2cpp_TypeInfo_var))->___argumentOutOfRangeDelegate_13;
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging_m02843964CA7D2770F56B83768E564EC195F11C9A(L_25, L_26, L_27, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m74E1F593CDD0E2FA4B49CBD999705045945E5EB9 (SWIGExceptionHelper_t1232776ACBAF1CAC4A098D8C4420E1570424930C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_FirebaseMessaging_m4FD021DFE87F643C2E06BF92695F90F89841EFDC (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___applicationDelegate0, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___arithmeticDelegate1, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___divideByZeroDelegate2, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___indexOutOfRangeDelegate3, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___invalidCastDelegate4, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___invalidOperationDelegate5, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___ioDelegate6, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___nullReferenceDelegate7, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___outOfMemoryDelegate8, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___overflowDelegate9, ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* ___systemExceptionDelegate10, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "SWIGRegisterExceptionCallbacks_FirebaseMessaging", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_FirebaseMessaging)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#else
	il2cppPInvokeFunc(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#endif

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_FirebaseMessaging_m02843964CA7D2770F56B83768E564EC195F11C9A (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* ___argumentDelegate0, ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* ___argumentNullDelegate1, ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* ___argumentOutOfRangeDelegate2, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "SWIGRegisterExceptionArgumentCallbacks_FirebaseMessaging", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
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
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionArgumentCallbacks_FirebaseMessaging)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#else
	il2cppPInvokeFunc(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#endif

}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m0EC2E596EC0479E6DDC25D23A5C00C21C3FAC67A (String_t* ___message0, const RuntimeMethod* method) 
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
		L_1 = SWIGPendingException_Retrieve_m268DFCFF3EAFA772DC873BAF9B891664228AB2FE(NULL);
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_2 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m949F545E2EE86BEE39CE01D577B58F9DF28A85C2(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m73E32FFDBCDE38001506299F698974CECF188088 (String_t* ___message0, const RuntimeMethod* method) 
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
		L_1 = SWIGPendingException_Retrieve_m268DFCFF3EAFA772DC873BAF9B891664228AB2FE(NULL);
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_2 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArithmeticException__ctor_m880D58CC9B6CD2F0E867298BA748343216D89A8B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m949F545E2EE86BEE39CE01D577B58F9DF28A85C2(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_mAD182EDD91512C091A4579D0A893D26950E9EFA9 (String_t* ___message0, const RuntimeMethod* method) 
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
		L_1 = SWIGPendingException_Retrieve_m268DFCFF3EAFA772DC873BAF9B891664228AB2FE(NULL);
		DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279* L_2 = (DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279*)il2cpp_codegen_object_new(DivideByZeroException_tC43171E50A38F5CD4242D258D0B0C6B74898C279_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DivideByZeroException__ctor_mE15900048AEEE9B66A4DD9F2ACAC4448D85D4F23(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m949F545E2EE86BEE39CE01D577B58F9DF28A85C2(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mA72FE799D29D12D35F49523CA4BA44803DBACE44 (String_t* ___message0, const RuntimeMethod* method) 
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
		L_1 = SWIGPendingException_Retrieve_m268DFCFF3EAFA772DC873BAF9B891664228AB2FE(NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_2 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IndexOutOfRangeException__ctor_m390691571A232F79022C84ED002FDEF8974255E1(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m949F545E2EE86BEE39CE01D577B58F9DF28A85C2(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m0AB68407FDFC1741FCE0FEFFEE364F90C8AAFE6F (String_t* ___message0, const RuntimeMethod* method) 
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
		L_1 = SWIGPendingException_Retrieve_m268DFCFF3EAFA772DC873BAF9B891664228AB2FE(NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidCastException__ctor_m40BCFD6C1C79DE81191B829AF71BEB590E300396(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m949F545E2EE86BEE39CE01D577B58F9DF28A85C2(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m61264DEDBE3617AF6D713816E469262E1F22A47F (String_t* ___message0, const RuntimeMethod* method) 
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
		L_1 = SWIGPendingException_Retrieve_m268DFCFF3EAFA772DC873BAF9B891664228AB2FE(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m949F545E2EE86BEE39CE01D577B58F9DF28A85C2(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mBA7C5D6DB92EB7E2DCBD53055BCD69CD59AE2345 (String_t* ___message0, const RuntimeMethod* method) 
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
		L_1 = SWIGPendingException_Retrieve_m268DFCFF3EAFA772DC873BAF9B891664228AB2FE(NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_2 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IOException__ctor_mFA9F39D1AF43FBC40BFA68A7BFE07852D1EF8B1B(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m949F545E2EE86BEE39CE01D577B58F9DF28A85C2(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_mA73D46D17E94C49C02A95526DEE12EA8CBCA603A (String_t* ___message0, const RuntimeMethod* method) 
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
		L_1 = SWIGPendingException_Retrieve_m268DFCFF3EAFA772DC873BAF9B891664228AB2FE(NULL);
		NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_2 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		NullReferenceException__ctor_mD00D7FE987C285C8DB23883700F44BC0025F55EF(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m949F545E2EE86BEE39CE01D577B58F9DF28A85C2(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mFF785890124119DF8C098CAF3EFB965C726668D9 (String_t* ___message0, const RuntimeMethod* method) 
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
		L_1 = SWIGPendingException_Retrieve_m268DFCFF3EAFA772DC873BAF9B891664228AB2FE(NULL);
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_2 = (OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)il2cpp_codegen_object_new(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OutOfMemoryException__ctor_mC60E0CF8E50CA43F0518570ACC051F6BA8A1D1F2(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m949F545E2EE86BEE39CE01D577B58F9DF28A85C2(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_mF56F0A2DC619A9226A9A7E410DB353C5F9D766F8 (String_t* ___message0, const RuntimeMethod* method) 
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
		L_1 = SWIGPendingException_Retrieve_m268DFCFF3EAFA772DC873BAF9B891664228AB2FE(NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_2 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OverflowException__ctor_mB00A07CDB7E5230B8D2BB31696E63F3CB1C36EF9(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m949F545E2EE86BEE39CE01D577B58F9DF28A85C2(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m4C14BAAA23752523F57A8EB062C85A8008A1CAF7 (String_t* ___message0, const RuntimeMethod* method) 
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
		L_1 = SWIGPendingException_Retrieve_m268DFCFF3EAFA772DC873BAF9B891664228AB2FE(NULL);
		SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* L_2 = (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295*)il2cpp_codegen_object_new(SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SystemException__ctor_m0FC84CACD2A5D66222998AA601A5C41CEC36A611(L_2, L_0, L_1, NULL);
		SWIGPendingException_Set_m949F545E2EE86BEE39CE01D577B58F9DF28A85C2(L_2, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m26122FFFD93449BA4AF951C6615B1E4D246DD266 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) 
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
		L_2 = SWIGPendingException_Retrieve_m268DFCFF3EAFA772DC873BAF9B891664228AB2FE(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0(L_3, L_0, L_1, L_2, NULL);
		SWIGPendingException_Set_m949F545E2EE86BEE39CE01D577B58F9DF28A85C2(L_3, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m271FFF809B24E35BF8C4DFC8EEF8DA75C455873F (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) 
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
		L_0 = SWIGPendingException_Retrieve_m268DFCFF3EAFA772DC873BAF9B891664228AB2FE(NULL);
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
		SWIGPendingException_Set_m949F545E2EE86BEE39CE01D577B58F9DF28A85C2(L_8, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m37AF233CD8A4D39CAB3C2423B10C9308AB3C9D52 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) 
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
		L_0 = SWIGPendingException_Retrieve_m268DFCFF3EAFA772DC873BAF9B891664228AB2FE(NULL);
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
		SWIGPendingException_Set_m949F545E2EE86BEE39CE01D577B58F9DF28A85C2(L_8, NULL);
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
void ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391_Multicast(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* __this, String_t* ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* currentDelegate = reinterpret_cast<ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391_Open(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391_OpenStaticInvoker(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
void ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391_ClosedStaticInvoker(ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5 (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_m789977303B33F17AAA5360A3292D4A151C792D33 (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391_Open;
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
			__this->___invoke_impl_1 = (intptr_t)&ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391_Multicast;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m4737E00FCEEDA47189CF121FBEF56854B2D0D391 (ExceptionDelegate_t9CD06E85552169C8AB7F8AD922D5B550352373D5* __this, String_t* ___message0, const RuntimeMethod* method) 
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
void ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113_Multicast(ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* currentDelegate = reinterpret_cast<ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, ___paramName1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113_Open(ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, ___paramName1, method);
}
void ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113_OpenStaticInvoker(ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0, ___paramName1);
}
void ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113_ClosedStaticInvoker(ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0, ___paramName1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110 (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_mD3AE8F3B0E1894F62FBDE8481B860EC23B3402C4 (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113_Open;
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
			__this->___invoke_impl_1 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113_Multicast;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m98FEABFD2FC468FC00EDB504A85955B083FDC113 (ExceptionArgumentDelegate_t1B9CEFDA449A0679DCC7B832B88DB9E6864A4110* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) 
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m949F545E2EE86BEE39CE01D577B58F9DF28A85C2 (Exception_t* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Exception_t* L_0 = ((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___pendingException_0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t* L_1 = ((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))))->___pendingException_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), NULL);
		Exception_t* L_4 = ___e0;
		ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A* L_5 = (ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ApplicationException__ctor_m924E77609BAFA0595453363EB8B7BCCBA03B32DD(L_5, L_3, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_m949F545E2EE86BEE39CE01D577B58F9DF28A85C2_RuntimeMethod_var)));
	}

IL_002a:
	{
		Exception_t* L_6 = ___e0;
		((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___pendingException_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___pendingException_0), (void*)L_6);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_0_0_0_var) };
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
			int32_t L_11 = ((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
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
// System.Exception Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* SWIGPendingException_Retrieve_m268DFCFF3EAFA772DC873BAF9B891664228AB2FE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		V_0 = (Exception_t*)NULL;
		int32_t L_0 = ((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Exception_t* L_1 = ((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___pendingException_0;
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t* L_2 = ((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___pendingException_0;
		V_0 = L_2;
		((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___pendingException_0 = (Exception_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___pendingException_0), (void*)(Exception_t*)NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_0_0_0_var) };
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
			int32_t L_7 = ((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___numExceptionsPending_1;
			((SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t0409902F046D41D7A8D2333129C7E51E76EC1909_il2cpp_TypeInfo_var))->___numExceptionsPending_1 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m95C1D01C7A2503745F9979AEEFC24AC266C6A01A(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_m95C1D01C7A2503745F9979AEEFC24AC266C6A01A(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m450FBEAA821531023B1BDD3CE4B0798407C82A39 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_m95C1D01C7A2503745F9979AEEFC24AC266C6A01A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* L_0 = (SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6*)il2cpp_codegen_object_new(SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SWIGStringDelegate__ctor_m959EEC67F999197EA2457A7CD4684BD8588DE11E(L_0, NULL, (intptr_t)((void*)SWIGStringHelper_CreateString_m95C1D01C7A2503745F9979AEEFC24AC266C6A01A_RuntimeMethod_var), NULL);
		((SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_il2cpp_TypeInfo_var))->___stringDelegate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_il2cpp_TypeInfo_var))->___stringDelegate_0), (void*)L_0);
		SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* L_1 = ((SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9_il2cpp_TypeInfo_var))->___stringDelegate_0;
		SWIGStringHelper_SWIGRegisterStringCallback_FirebaseMessaging_mC693645CB9DDC7654B74404F03765EA635FCEC60(L_1, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m374221329F17BCC4EED8997888A382721EFCF171 (SWIGStringHelper_t953C1EA2870BB0BF9A25500F62877BBBA6D44AE9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_FirebaseMessaging(Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_FirebaseMessaging_mC693645CB9DDC7654B74404F03765EA635FCEC60 (SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* ___stringDelegate0, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-8_9_0"), "SWIGRegisterStringCallback_FirebaseMessaging", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_8_9_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_FirebaseMessaging)(____stringDelegate0_marshaled);
	#else
	il2cppPInvokeFunc(____stringDelegate0_marshaled);
	#endif

}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_m95C1D01C7A2503745F9979AEEFC24AC266C6A01A (String_t* ___cString0, const RuntimeMethod* method) 
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
String_t* SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74_Multicast(SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* __this, String_t* ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	String_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* currentDelegate = reinterpret_cast<SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6*>(delegatesToInvoke[i]);
		typedef String_t* (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
String_t* SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74_Open(SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
String_t* SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74_OpenStaticInvoker(SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* __this, String_t* ___message0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< String_t*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
String_t* SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74_ClosedStaticInvoker(SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* __this, String_t* ___message0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< String_t*, RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6 (SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.Void Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m959EEC67F999197EA2457A7CD4684BD8588DE11E (SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74_Open;
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
			__this->___invoke_impl_1 = (intptr_t)&SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74_Multicast;
}
// System.String Firebase.Messaging.FirebaseMessagingPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m866ADA89F2872028E0F92D392D9C9CE98DD5CE74 (SWIGStringDelegate_t3DABDDBE55902B8931CDE0C135374D8CBDD52CE6* __this, String_t* ___message0, const RuntimeMethod* method) 
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
// System.Void Firebase.Messaging.FirebaseMessage::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage__ctor_mC5C9E0BADB0E232C7A30880B214C00E725862884 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) 
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
// System.Void Firebase.Messaging.FirebaseMessage::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage_Finalize_m4252175F6CDBBE170F715C29E46FDCFCF3939209 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
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
			FirebaseMessage_Dispose_mDF6750A30E95068A13849BA85014E518D949D461(__this, NULL);
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
// System.Void Firebase.Messaging.FirebaseMessage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage_Dispose_mDF6750A30E95068A13849BA85014E518D949D461 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_tD23C437863A3502177988D1382B58820B0571A25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
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
				il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
				FirebaseMessagingPINVOKE_delete_FirebaseMessage_m5CDB7E92A4913470D3AB3B6E892C5DF2731E4881(L_7, NULL);
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
// System.String Firebase.Messaging.FirebaseMessage::get_From()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseMessage_get_From_m6A8B7F66B7C0E65663FF0054C694CF5C957AC8E4 (FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_0 = __this->___swigCPtr_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseMessagingPINVOKE_t8D162519505D2E2C12BFCD6037CFE376283ABF4F_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = FirebaseMessagingPINVOKE_FirebaseMessage_From_get_mFF1613B91FE580171341ED64CB94A9D87BF28E16(L_0, NULL);
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
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseMessage_get_From_m6A8B7F66B7C0E65663FF0054C694CF5C957AC8E4_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.Messaging.FirebaseMessage::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMessage__cctor_m117366FBD2FA2D58B9E433B4520E0B031496774E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, /*hidden argument*/NULL);
		((FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F_il2cpp_TypeInfo_var))->___UnixEpochUtc_2 = L_0;
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
// System.Void Firebase.Messaging.MessageReceivedEventArgs::.ctor(Firebase.Messaging.FirebaseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedEventArgs__ctor_mF420D689ACEE65740BA0E1A253DF2D33CBAFC061 (MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5* __this, FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* ___msg0, const RuntimeMethod* method) 
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
		FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* L_0 = ___msg0;
		MessageReceivedEventArgs_set_Message_m237AEA7C0AAB2533F89A673BA3F288F4E1F3D04A_inline(__this, L_0, NULL);
		return;
	}
}
// Firebase.Messaging.FirebaseMessage Firebase.Messaging.MessageReceivedEventArgs::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* MessageReceivedEventArgs_get_Message_mB05C315AA155A3A35925369C5093FFB8B91C2BF6 (MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5* __this, const RuntimeMethod* method) 
{
	{
		FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* L_0 = __this->___U3CMessageU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Firebase.Messaging.MessageReceivedEventArgs::set_Message(Firebase.Messaging.FirebaseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageReceivedEventArgs_set_Message_m237AEA7C0AAB2533F89A673BA3F288F4E1F3D04A (MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5* __this, FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* ___value0, const RuntimeMethod* method) 
{
	{
		FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
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
// System.Void Firebase.Messaging.TokenReceivedEventArgs::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedEventArgs__ctor_m834B72CF7DB04F86A4929BBDEFA7E969BFC09D21 (TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C* __this, String_t* ___token0, const RuntimeMethod* method) 
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
		String_t* L_0 = ___token0;
		TokenReceivedEventArgs_set_Token_mC42B0EC030BD8880FA31346108580505D1C4A318_inline(__this, L_0, NULL);
		return;
	}
}
// System.String Firebase.Messaging.TokenReceivedEventArgs::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TokenReceivedEventArgs_get_Token_m238B04731212F820259074BD576723DCED8B719A (TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTokenU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Firebase.Messaging.TokenReceivedEventArgs::set_Token(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TokenReceivedEventArgs_set_Token_mC42B0EC030BD8880FA31346108580505D1C4A318 (TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTokenU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenU3Ek__BackingField_1), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageReceivedEventArgs_set_Message_m237AEA7C0AAB2533F89A673BA3F288F4E1F3D04A_inline (MessageReceivedEventArgs_tAFDBCC69B3DEC0F5EB76ACAA8D97A404E61F73E5* __this, FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* ___value0, const RuntimeMethod* method) 
{
	{
		FirebaseMessage_t09E58AB584806FC5C23F419AD7CDCE53969FE20F* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TokenReceivedEventArgs_set_Token_mC42B0EC030BD8880FA31346108580505D1C4A318_inline (TokenReceivedEventArgs_t91FA07EA184701BF44700D7581779A5C84C7B98C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTokenU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
