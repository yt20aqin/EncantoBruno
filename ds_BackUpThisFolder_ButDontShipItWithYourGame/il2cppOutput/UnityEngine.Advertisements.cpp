﻿#include "pch-cpp.hpp"

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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Advertisements.Platform.Android.AndroidBanner
struct AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68;
// UnityEngine.Advertisements.AndroidInitializationListener
struct AndroidInitializationListener_t81DC3AD5B67C4903C65DE29B13100B53A1185804;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F;
// UnityEngine.Advertisements.AndroidLoadListener
struct AndroidLoadListener_t8DDD2563120B2652BB57BB9B5692A7D3400F7BF0;
// UnityEngine.Advertisements.Platform.Android.AndroidPlatform
struct AndroidPlatform_tE2AD5659D9387D7B97F66B4DD4ED3E6B9D1844B2;
// UnityEngine.Advertisements.AndroidShowListener
struct AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0;
// UnityEngine.Advertisements.Utilities.ApplicationQuit
struct ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383;
// UnityEngine.Advertisements.Banner
struct Banner_tB60B533B960F53183013116DC24FC2712B966C4C;
// UnityEngine.Advertisements.Platform.Android.BannerBundle
struct BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2;
// UnityEngine.Advertisements.BannerLoadOptions
struct BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E;
// UnityEngine.Advertisements.BannerOptions
struct BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A;
// UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder
struct BannerPlaceholder_t79875225F825197F77DF9DBD514598DF7853FA1E;
// UnityEngine.Advertisements.Utilities.CoroutineExecutor
struct CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.GUISettings
struct GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847;
// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.Advertisements.IBanner
struct IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Advertisements.INativeBanner
struct INativeBanner_t69BD556AFA273EB12A3A726ACB5DA01647A3F1AB;
// UnityEngine.Advertisements.INativePlatform
struct INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274;
// UnityEngine.Advertisements.Platform.IPlatform
struct IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186;
// UnityEngine.Advertisements.IUnityAdsInitializationListener
struct IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7;
// UnityEngine.Advertisements.IUnityAdsLoadListener
struct IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039;
// UnityEngine.Advertisements.IUnityAdsShowListener
struct IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD;
// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager
struct IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B;
// UnityEngine.Advertisements.MetaData
struct MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Advertisements.Platform.Platform
struct Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Advertisements.Utilities.UnityLifecycleManager
struct UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882;
// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner
struct UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF;
// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform
struct UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t44A82BA283D57E50089F2A70FCF6D8C3CA18B00D;
// UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tCEC27277BA42C7D3F0C664421D1ABF00E4DEBBDD;
// UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t9A7922ECAC6121C2C62BF923F1334E337D51C537;
// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback
struct ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029;
// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback
struct LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B;
// UnityEngine.Advertisements.BannerOptions/BannerCallback
struct BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidInitializationListener_t81DC3AD5B67C4903C65DE29B13100B53A1185804_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidLoadListener_t8DDD2563120B2652BB57BB9B5692A7D3400F7BF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidPlatform_tE2AD5659D9387D7B97F66B4DD4ED3E6B9D1844B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Banner_tB60B533B960F53183013116DC24FC2712B966C4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t1F32F711C91AEBCFA4770668CA067447D2A4F665_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t913F242211877D391217C9D75152235266FDAF10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativeBanner_t69BD556AFA273EB12A3A726ACB5DA01647A3F1AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_t44A82BA283D57E50089F2A70FCF6D8C3CA18B00D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass12_0_tCEC27277BA42C7D3F0C664421D1ABF00E4DEBBDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass20_0_t9A7922ECAC6121C2C62BF923F1334E337D51C537_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01FB309691201B1A5D72C0BC0668E49439FA11C5;
IL2CPP_EXTERN_C String_t* _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA;
IL2CPP_EXTERN_C String_t* _stringLiteral1073EDD32EA0B0FD3BCAF9C644DE00B100741265;
IL2CPP_EXTERN_C String_t* _stringLiteral1960F177DBF9ED9808DEA1773FEEF144EC8E4C7F;
IL2CPP_EXTERN_C String_t* _stringLiteral1CA693FCFD526B83AF173A1829A1703B75FEFC0E;
IL2CPP_EXTERN_C String_t* _stringLiteral1D185DB91E3DF09D623D41B1D7987E6F4A5D419D;
IL2CPP_EXTERN_C String_t* _stringLiteral1D4E110BD86EB84CCC35696802475A8556299334;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA3D52181353D83E31C59DC26E66ADDA6680C79;
IL2CPP_EXTERN_C String_t* _stringLiteral36A7D89431BEAA223457D97EF62FEE269808ED7B;
IL2CPP_EXTERN_C String_t* _stringLiteral3E6D79FB7A672657560825D4EBF2050737CCAF6E;
IL2CPP_EXTERN_C String_t* _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192;
IL2CPP_EXTERN_C String_t* _stringLiteral46308C2360498265204DA7350FCD77C6D5A57F9C;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4EC9FD747E1362F76CCE0E68488AB9A1F71729AA;
IL2CPP_EXTERN_C String_t* _stringLiteral5416DA66FCD064B00AC9807723143002DA52C7B3;
IL2CPP_EXTERN_C String_t* _stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741;
IL2CPP_EXTERN_C String_t* _stringLiteral621CE18D79B55039EFE55A04E6BFD7A549E31192;
IL2CPP_EXTERN_C String_t* _stringLiteral684D1C9AD6F5D83264667D7FCC62B008CFD8E5FD;
IL2CPP_EXTERN_C String_t* _stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80;
IL2CPP_EXTERN_C String_t* _stringLiteral750B47A9E43C9EA610F98792362D027D33B89ECB;
IL2CPP_EXTERN_C String_t* _stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58;
IL2CPP_EXTERN_C String_t* _stringLiteral7D40F3F0C41EC73A97A45783093FA83DC6B51E9F;
IL2CPP_EXTERN_C String_t* _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D;
IL2CPP_EXTERN_C String_t* _stringLiteral84B4C675C9F3E79A1D308FF8C010110E9F4D7327;
IL2CPP_EXTERN_C String_t* _stringLiteral84BD1FA2B6D34A46940BEA516DAA6B3107B0C9DD;
IL2CPP_EXTERN_C String_t* _stringLiteral8776C6B9757743C85B42D4041703FD2BFBA9F722;
IL2CPP_EXTERN_C String_t* _stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF;
IL2CPP_EXTERN_C String_t* _stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D;
IL2CPP_EXTERN_C String_t* _stringLiteral939E5F4A986FA1522F2818B2E87F98C768D55320;
IL2CPP_EXTERN_C String_t* _stringLiteral97D34C2FB9E9844A9F8172EB3FADC29227F6FFE0;
IL2CPP_EXTERN_C String_t* _stringLiteral998C6D819F4FEB5C09C82BCC9B537AD6F2280964;
IL2CPP_EXTERN_C String_t* _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralA5FDB5AC0DA6EFB2AD96E6A2A36EE08EA416A714;
IL2CPP_EXTERN_C String_t* _stringLiteralAE839BB5479CD2F5F696EC09ACD408C4D13EAEFC;
IL2CPP_EXTERN_C String_t* _stringLiteralB040439619EE49D63AB73416AB10D1423D032871;
IL2CPP_EXTERN_C String_t* _stringLiteralB8B17C2F23CF76B280EDF692D4E3AEF9A008AB26;
IL2CPP_EXTERN_C String_t* _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E;
IL2CPP_EXTERN_C String_t* _stringLiteralC2CF9460CF1354EAF3436608352EAD04C04E560A;
IL2CPP_EXTERN_C String_t* _stringLiteralC6D00A6763BDEB8C18D1862BD06DFCB3D7627412;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralCF0425E7DDA63941C9BCBB6016B6525349B18A96;
IL2CPP_EXTERN_C String_t* _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1;
IL2CPP_EXTERN_C String_t* _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052;
IL2CPP_EXTERN_C String_t* _stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBanner_U3CHideU3Eb__13_0_mA234986168275EA7EA56F38B9EBD4CE4F0533D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBanner_U3CHideU3Eb__13_1_m1B3C913F757872839F338243CC43EDF2CE3FE9AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBanner_U3ConUnityBannerClickU3Eb__19_0_m3E31000AD8114381FF258F7B217EB1FBB3D35CD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_0_mD37D62D5FB74CA7BA2259162802D8DC0C5649988_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_1_m915883D9CAE36E2821426AC509039ACE1C84CAEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_m9599B9BE8B29417C02B14C9A0DFDA540869C61F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_m7DB74A63E2585C7851C08E0242E0D9412679EDFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_m6F8B5B9665AE6C75F78A108386CD310B071F6A5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_m6761363DE05B98C2E95011035B931593CC6E25F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383_m4FFADF9D888B3931A90C66F25BA595543E200FD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m17D30C1BB355C8092073E09C980693756A35CC16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m412D7DF256107F9C7588E3399237CC35293100F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CLoadU3Eb__0_m7EF8C1F9F5714B3B9D1B80347365F02DB275BAE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__0_mE626FA2BC0E938A69C142BBFA43DB8861832567A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__1_m6C46CDF641CEE4172AEDF5695048ACC3F890364F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_0_U3ConUnityBannerErrorU3Eb__0_m0DD98663AF155A5809120293E2B451CF67DF47DC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
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
struct U3CModuleU3E_t7F3AA6E0ACE7011E29F468D1715FF29A537C5BC0 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
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

// UnityEngine.Advertisements.Advertisement
struct Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5  : public RuntimeObject
{
};

struct Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields
{
	// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Advertisement::s_Platform
	RuntimeObject* ___s_Platform_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.Advertisements.Platform.Android.AndroidPlatform
struct AndroidPlatform_tE2AD5659D9387D7B97F66B4DD4ED3E6B9D1844B2  : public RuntimeObject
{
	// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Platform.Android.AndroidPlatform::m_Platform
	RuntimeObject* ___m_Platform_0;
	// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.AndroidPlatform::m_CurrentActivity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___m_CurrentActivity_1;
	// UnityEngine.AndroidJavaClass UnityEngine.Advertisements.Platform.Android.AndroidPlatform::m_UnityAds
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___m_UnityAds_2;
};
struct Il2CppArrayBounds;

// UnityEngine.Advertisements.Banner
struct Banner_tB60B533B960F53183013116DC24FC2712B966C4C  : public RuntimeObject
{
	// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Banner::<UnityLifecycleManager>k__BackingField
	RuntimeObject* ___U3CUnityLifecycleManagerU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Advertisements.Banner::<ShowAfterLoad>k__BackingField
	bool ___U3CShowAfterLoadU3Ek__BackingField_1;
	// UnityEngine.Advertisements.INativeBanner UnityEngine.Advertisements.Banner::m_NativeBanner
	RuntimeObject* ___m_NativeBanner_2;
};

// UnityEngine.Advertisements.Platform.Android.BannerBundle
struct BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.BannerBundle::<bannerView>k__BackingField
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___U3CbannerViewU3Ek__BackingField_0;
	// System.String UnityEngine.Advertisements.Platform.Android.BannerBundle::<bannerPlacementId>k__BackingField
	String_t* ___U3CbannerPlacementIdU3Ek__BackingField_1;
};

// UnityEngine.Advertisements.BannerLoadOptions
struct BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E  : public RuntimeObject
{
	// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback UnityEngine.Advertisements.BannerLoadOptions::<loadCallback>k__BackingField
	LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* ___U3CloadCallbackU3Ek__BackingField_0;
	// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback UnityEngine.Advertisements.BannerLoadOptions::<errorCallback>k__BackingField
	ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* ___U3CerrorCallbackU3Ek__BackingField_1;
};

// UnityEngine.Advertisements.BannerOptions
struct BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A  : public RuntimeObject
{
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<showCallback>k__BackingField
	BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___U3CshowCallbackU3Ek__BackingField_0;
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<hideCallback>k__BackingField
	BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___U3ChideCallbackU3Ek__BackingField_1;
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<clickCallback>k__BackingField
	BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___U3CclickCallbackU3Ek__BackingField_2;
};

// UnityEngine.Advertisements.Utilities.EnumUtilities
struct EnumUtilities_t72D0C4D9CF8304F6D3F28D44A95705824294D781  : public RuntimeObject
{
};

// UnityEngine.Advertisements.MetaData
struct MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::m_MetaData
	RuntimeObject* ___m_MetaData_0;
	// System.String UnityEngine.Advertisements.MetaData::<category>k__BackingField
	String_t* ___U3CcategoryU3Ek__BackingField_1;
};

// UnityEngine.Advertisements.Platform.Platform
struct Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA  : public RuntimeObject
{
	// UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.Platform::<Banner>k__BackingField
	RuntimeObject* ___U3CBannerU3Ek__BackingField_0;
	// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Platform.Platform::<UnityLifecycleManager>k__BackingField
	RuntimeObject* ___U3CUnityLifecycleManagerU3Ek__BackingField_1;
	// UnityEngine.Advertisements.INativePlatform UnityEngine.Advertisements.Platform.Platform::<NativePlatform>k__BackingField
	RuntimeObject* ___U3CNativePlatformU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Advertisements.Platform.Platform::<IsShowing>k__BackingField
	bool ___U3CIsShowingU3Ek__BackingField_3;
};

// UnityEngine.Advertisements.ShowOptions
struct ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD  : public RuntimeObject
{
	// System.String UnityEngine.Advertisements.ShowOptions::<gamerSid>k__BackingField
	String_t* ___U3CgamerSidU3Ek__BackingField_0;
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

// UnityEngine.Advertisements.Utilities.UnityLifecycleManager
struct UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882  : public RuntimeObject
{
	// UnityEngine.GameObject UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.Advertisements.Utilities.CoroutineExecutor UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_CoroutineExecutor
	CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* ___m_CoroutineExecutor_1;
	// UnityEngine.Advertisements.Utilities.ApplicationQuit UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_ApplicationQuit
	ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383* ___m_ApplicationQuit_2;
	// System.Boolean UnityEngine.Advertisements.Utilities.UnityLifecycleManager::m_Disposed
	bool ___m_Disposed_3;
};

// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner
struct UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF  : public RuntimeObject
{
};

// UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform
struct UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59  : public RuntimeObject
{
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

// UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t44A82BA283D57E50089F2A70FCF6D8C3CA18B00D  : public RuntimeObject
{
	// UnityEngine.Advertisements.BannerLoadOptions UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass11_0::loadOptions
	BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* ___loadOptions_0;
};

// UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0
struct U3CU3Ec__DisplayClass12_0_tCEC27277BA42C7D3F0C664421D1ABF00E4DEBBDD  : public RuntimeObject
{
	// UnityEngine.Advertisements.Platform.Android.AndroidBanner UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0::<>4__this
	AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* ___U3CU3E4__this_0;
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0::showOptions
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___showOptions_1;
};

// UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t9A7922ECAC6121C2C62BF923F1334E337D51C537  : public RuntimeObject
{
	// UnityEngine.Advertisements.Platform.Android.AndroidBanner UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0::<>4__this
	AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* ___U3CU3E4__this_0;
	// System.String UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0::message
	String_t* ___message_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
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

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
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

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// UnityEngine.Advertisements.Platform.Android.AndroidBanner
struct AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// UnityEngine.Advertisements.IBanner UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_Banner
	RuntimeObject* ___m_Banner_4;
	// UnityEngine.AndroidJavaClass UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_BannersClass
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___m_BannersClass_5;
	// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_CurrentActivity
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___m_CurrentActivity_6;
	// UnityEngine.Advertisements.Platform.Android.BannerBundle UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_BannerBundle
	BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* ___m_BannerBundle_7;
	// UnityEngine.Advertisements.BannerLoadOptions UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_BannerLoadOptions
	BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* ___m_BannerLoadOptions_8;
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_BannerShowOptions
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___m_BannerShowOptions_9;
	// System.Boolean UnityEngine.Advertisements.Platform.Android.AndroidBanner::m_ListenerIsSet
	bool ___m_ListenerIsSet_10;
};

// UnityEngine.Advertisements.AndroidInitializationListener
struct AndroidInitializationListener_t81DC3AD5B67C4903C65DE29B13100B53A1185804  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.AndroidInitializationListener::m_Platform
	RuntimeObject* ___m_Platform_5;
	// UnityEngine.Advertisements.IUnityAdsInitializationListener UnityEngine.Advertisements.AndroidInitializationListener::m_ManagedListener
	RuntimeObject* ___m_ManagedListener_6;
};

// UnityEngine.Advertisements.AndroidLoadListener
struct AndroidLoadListener_t8DDD2563120B2652BB57BB9B5692A7D3400F7BF0  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.AndroidLoadListener::m_Platform
	RuntimeObject* ___m_Platform_5;
	// UnityEngine.Advertisements.IUnityAdsLoadListener UnityEngine.Advertisements.AndroidLoadListener::m_ManagedListener
	RuntimeObject* ___m_ManagedListener_6;
};

// UnityEngine.Advertisements.AndroidShowListener
struct AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.AndroidShowListener::m_Platform
	RuntimeObject* ___m_Platform_5;
	// UnityEngine.Advertisements.IUnityAdsShowListener UnityEngine.Advertisements.AndroidShowListener::m_ManagedListener
	RuntimeObject* ___m_ManagedListener_6;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};

struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
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

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.AndroidJavaRunnable
struct AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.GUISkin
struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_box_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_button_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_toggle_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_label_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textField_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_textArea_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_window_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalSliderThumbExtent_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSlider_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumb_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumbExtent
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalSliderThumbExtent_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_SliderMixed
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SliderMixed_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbar_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarThumb_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarLeftButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_horizontalScrollbarRightButton_22;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbar_23;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarThumb_24;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarUpButton_25;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_verticalScrollbarDownButton_26;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_ScrollView_27;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t1BA4BCF4D4D32DF07E9B84F1750D964DF33B0FEC* ___m_CustomStyles_28;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_tF2CA7E8B9F62F1FC013BFF053B5FA2709EBA3847* ___m_Settings_29;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_tEFC8016EC28460E6CE058A5F413FAB656883AA5F* ___m_Styles_31;
};

struct GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___ms_Error_30;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_tA6D456E853D58AD2EF8A599F543C7E5BA8E94B98* ___m_SkinChanged_32;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* ___current_33;
};

// System.MemberAccessException
struct MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback
struct ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback
struct LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.BannerOptions/BannerCallback
struct BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88  : public MulticastDelegate_t
{
};

// System.MissingMemberException
struct MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211  : public MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC
{
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_18;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_19;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Signature_20;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Advertisements.Utilities.ApplicationQuit
struct ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityAction UnityEngine.Advertisements.Utilities.ApplicationQuit::OnApplicationQuitEventHandler
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___OnApplicationQuitEventHandler_4;
};

// UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder
struct BannerPlaceholder_t79875225F825197F77DF9DBD514598DF7853FA1E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Texture2D UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::aTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___aTexture_4;
	// UnityEngine.Advertisements.BannerPosition UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BannerPosition
	int32_t ___BannerPosition_5;
	// UnityEngine.Advertisements.BannerOptions UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BannerOptions
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___BannerOptions_6;
	// System.Boolean UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::IsShowing
	bool ___IsShowing_7;
};

// UnityEngine.Advertisements.Utilities.CoroutineExecutor
struct CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 UnityEngine.Advertisements.Utilities.CoroutineExecutor::referenceCount
	int32_t ___referenceCount_4;
	// System.Collections.Generic.Queue`1<System.Action> UnityEngine.Advertisements.Utilities.CoroutineExecutor::queue
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* ___queue_5;
};

// System.MissingMethodException
struct MissingMethodException_t3D861B41F6520C32A7994A884343802925703155  : public MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211
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
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<System.Int32Enum>(UnityEngine.AndroidJavaObject,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mB75B6A66DC1492B5E7EFD115535A3F53218389AE_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___androidJavaObject0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;

// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Advertisement::CreatePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Advertisement_CreatePlatform_mE73E928E91FC0D85B0EDDE67D173326F94BA262A (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.UnityAdsSettings::get_testMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityAdsSettings_get_testMode_mF584490F2407B9C2377622B5CF0812CAF7439638 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_mDA197541AB99B97973E574B1F52982386203D13E (String_t* ___placementId0, ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* ___showOptions1, RuntimeObject* ___showListener2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager__ctor_m7F3CBFB7673A8D646BF6913FBC851C7769037EBB (UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner__ctor_m8E723E99310838DADEF2F9B71484400282829E59 (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform__ctor_mAD4B3465710A8E295F30F1872045D1DEF696A2EC (AndroidPlatform_tE2AD5659D9387D7B97F66B4DD4ED3E6B9D1844B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Banner::.ctor(UnityEngine.Advertisements.INativeBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner__ctor_m55A8737759701A4D4E16CC7667CEA599A1C39D39 (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, RuntimeObject* ___nativeBanner0, RuntimeObject* ___unityLifecycleManager1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.Platform::.ctor(UnityEngine.Advertisements.INativePlatform,UnityEngine.Advertisements.IBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_mA912D44D83BDA67AA6F469E6138BCB9816F33EB0 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, RuntimeObject* ___nativePlatform0, RuntimeObject* ___banner1, RuntimeObject* ___unityLifecycleManager2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform__ctor_mD2AB31CC9591F51340AE7DFFDDFC53AF23D35ED6 (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner__ctor_m438F1E085E534BD57AB519D449A6EC8F9D274246 (UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.MetaData::set_category(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaData_set_category_mC0C94CD8085C0D11051DC82BBC6C897428954DF6_inline (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) ;
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<UnityEngine.Advertisements.UnityAdsInitializationError>(UnityEngine.AndroidJavaObject,T)
inline int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_m9599B9BE8B29417C02B14C9A0DFDA540869C61F3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___androidJavaObject0, int32_t ___defaultValue1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, int32_t, const RuntimeMethod*))EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mB75B6A66DC1492B5E7EFD115535A3F53218389AE_gshared)(___androidJavaObject0, ___defaultValue1, method);
}
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<UnityEngine.Advertisements.UnityAdsLoadError>(UnityEngine.AndroidJavaObject,T)
inline int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_m7DB74A63E2585C7851C08E0242E0D9412679EDFF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___androidJavaObject0, int32_t ___defaultValue1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, int32_t, const RuntimeMethod*))EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mB75B6A66DC1492B5E7EFD115535A3F53218389AE_gshared)(___androidJavaObject0, ___defaultValue1, method);
}
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<UnityEngine.Advertisements.UnityAdsShowError>(UnityEngine.AndroidJavaObject,T)
inline int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_m6761363DE05B98C2E95011035B931593CC6E25F8 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___androidJavaObject0, int32_t ___defaultValue1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, int32_t, const RuntimeMethod*))EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mB75B6A66DC1492B5E7EFD115535A3F53218389AE_gshared)(___androidJavaObject0, ___defaultValue1, method);
}
// T UnityEngine.Advertisements.Utilities.EnumUtilities::GetEnumFromAndroidJavaObject<UnityEngine.Advertisements.UnityAdsShowCompletionState>(UnityEngine.AndroidJavaObject,T)
inline int32_t EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_m6F8B5B9665AE6C75F78A108386CD310B071F6A5B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___androidJavaObject0, int32_t ___defaultValue1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, int32_t, const RuntimeMethod*))EnumUtilities_GetEnumFromAndroidJavaObject_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mB75B6A66DC1492B5E7EFD115535A3F53218389AE_gshared)(___androidJavaObject0, ___defaultValue1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Action>::Dequeue()
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count()
inline int32_t Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor()
inline void Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272 (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Initialize_m164E5816365E0F68B093C3EE54A47C314A3C3468 (UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Advertisements.Utilities.CoroutineExecutor>()
inline CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* GameObject_GetComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m412D7DF256107F9C7588E3399237CC35293100F9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.Advertisements.Utilities.CoroutineExecutor>()
inline CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* GameObject_AddComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m17D30C1BB355C8092073E09C980693756A35CC16 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.Advertisements.Utilities.ApplicationQuit>()
inline ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383* GameObject_AddComponent_TisApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383_m4FFADF9D888B3931A90C66F25BA595543E200FD1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Action>::Enqueue(T)
inline void Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4 (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// UnityEngine.Advertisements.INativePlatform UnityEngine.Advertisements.Platform.Platform::get_NativePlatform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_IsInitialized_m32F3455A6A3158FE972AC503E41D07121773F216 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.MetaData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData__ctor_mA3E0768F48492D2C006E7C19F8D182D71EA57034 (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, String_t* ___category0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.MetaData::Set(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_Set_m25CF8E1FC4E0775019FCD58C43ED471CA65BD539 (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m09F45DDCFA0A4414AA296A595FDB0B59B44F5387 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_SetMetaData_mFC5274052CA90924B6F13C607E3322535750F9D1 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* ___metaData0, const RuntimeMethod* method) ;
// System.String UnityEngine.Advertisements.Platform.Platform::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_get_Version_mF1750D1013A32B8297AE7EC8DDB442CF979E310C (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsShowing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Platform_get_IsShowing_m6E94928BB3D7E2720B6CDF2C25801158586BCDD7_inline (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Advertisements.ShowOptions::get_gamerSid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_m99E60DFA556B5CE71165C06A54D7BA9039E44918_inline (ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.Platform::set_IsShowing(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Platform_set_IsShowing_m6FBC75C2EC6907BAC638CCAA2E339998DC05100C_inline (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_grey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_mBCECB7841257253597D826AB06E678DA43CC4298_inline (const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BackgroundTexture(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* BannerPlaceholder_BackgroundTexture_m18C8A2DBF8AA0DEF3735BAB1FC054D696229697F (int32_t ___width0, int32_t ___height1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1 (const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* GUISkin_get_box_m21BE7FC56D903B95BAFAE8890425D330EA88D893 (GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___other0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::GetBannerRect(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D BannerPlaceholder_GetBannerRect_m188B96C4A53F0805B212EF3FEDE66B7DDEF746ED (int32_t ___position0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GUI_Button_mD0E3B3A6A199F29F307AC2956A587120C7A0E0C3 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___image1, const RuntimeMethod* method) ;
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_clickCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* BannerOptions_get_clickCallback_m7E35A638D6D69CE003CEB93C25DB33BA194F3AF0_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_inline (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_m47861618D8EFFAF8BCEF5CBC49727E0A4CC6D898 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___image1, int32_t ___scaleMode2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Box_m0BCA5753684A74B6759AF7BBB1080DECEF170643 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___position0, String_t* ___text1, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.AndroidPlatform::GetCurrentAndroidActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPlatform_GetCurrentAndroidActivity_mA7B33D7FD6B36D5B6C2CFED48ABF17104A4F78E0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mB4749FC4347BDA5F4935149B71E84CA043C5B7EE (U3CU3Ec__DisplayClass11_0_t44A82BA283D57E50089F2A70FCF6D8C3CA18B00D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String UnityEngine.Advertisements.Platform.Android.BannerBundle::get_bannerPlacementId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BannerBundle_get_bannerPlacementId_mA4916C42EA50108B4D553776443460B1C664C26E_inline (BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_Hide_mFFC62E2BF6ED3E27135D830DD56F8213625AAECE (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, bool ___destroy0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m7BB527763F003875E638B7256DD3BD3788435943 (U3CU3Ec__DisplayClass12_0_tCEC27277BA42C7D3F0C664421D1ABF00E4DEBBDD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaRunnable::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaRunnable__ctor_m000E4FEB2DE8031A1CD733610D76E2BF60490334 (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_Load_m8423A122726BD342EAEC2C8E312C24F00E9613C4 (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, String_t* ___placementId0, BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* ___loadOptions1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_hideCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* BannerOptions_get_hideCallback_mBED58861170D9007A1F6C4883ED906C151AD852A_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.Advertisements.Platform.Android.BannerBundle::.ctor(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerBundle__ctor_mA358F4E6ED2021BD4D86AE8C55BD6B13C4DD3322 (BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* __this, String_t* ___bannerPlacementId0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___bannerView1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_mF43AD6D592B49CA9F9FCF85EA3AEDAAAD7252731 (U3CU3Ec__DisplayClass20_0_t9A7922ECAC6121C2C62BF923F1334E337D51C537* __this, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.BannerBundle::get_bannerView()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* BannerBundle_get_bannerView_m981F7CB1C3C1CA95AF72D95108A42C797AEAF9D3_inline (BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* __this, const RuntimeMethod* method) ;
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_showCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* BannerOptions_get_showCallback_m0367F7A8058FA64DD2C114DC2423481F33FF531B_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) ;
// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback UnityEngine.Advertisements.BannerLoadOptions::get_loadCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* BannerLoadOptions_get_loadCallback_mECEEB150276C0E8C1744CB508B6AFF72A0796077_inline (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_inline (LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, const RuntimeMethod* method) ;
// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback UnityEngine.Advertisements.BannerLoadOptions::get_errorCallback()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* BannerLoadOptions_get_errorCallback_mB9B595EB059D86CA406DCC7F7D4B9EF59A8AB589_inline (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_inline (ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.AndroidInitializationListener::.ctor(UnityEngine.Advertisements.Platform.IPlatform,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidInitializationListener__ctor_m63EBC01C4F334E95A38BBEF36675D3152AF0E650 (AndroidInitializationListener_t81DC3AD5B67C4903C65DE29B13100B53A1185804* __this, RuntimeObject* ___platform0, RuntimeObject* ___initializationListener1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.AndroidLoadListener::.ctor(UnityEngine.Advertisements.Platform.IPlatform,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidLoadListener__ctor_mF8534E76B4660C00697F13A98652C16CB00B3D5D (AndroidLoadListener_t8DDD2563120B2652BB57BB9B5692A7D3400F7BF0* __this, RuntimeObject* ___platform0, RuntimeObject* ___loadListener1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.AndroidShowListener::.ctor(UnityEngine.Advertisements.Platform.IPlatform,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener__ctor_mDA962C9A0AE9098F61C0FB811C4B5F3475F69C3C (AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0* __this, RuntimeObject* ___platform0, RuntimeObject* ___showListener1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String UnityEngine.Advertisements.MetaData::get_category()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetaData_get_category_mE48DB3D38C741ECA2787261D7FDA8AF99D78680A_inline (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::Values()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MetaData_Values_mC60E8FEDBF17C5ACA56B847F3ACFD75208F9A5DD_inline (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___methodName0, ___args1, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared)(__this, ___methodName0, ___args1, method);
}
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.Advertisements.Advertisement::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement__cctor_m43C03F53A1262A789EE96405B40C901BEF589A07 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_Platform == null)
		RuntimeObject* L_0 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// s_Platform = CreatePlatform();
		RuntimeObject* L_1;
		L_1 = Advertisement_CreatePlatform_mE73E928E91FC0D85B0EDDE67D173326F94BA262A(NULL);
		((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0), (void*)L_1);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_m55B4E5A16566DB6F87FDC57B4E75AA708396AF6E (String_t* ___gameId0, bool ___testMode1, RuntimeObject* ___initializationListener2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8B17C2F23CF76B280EDF692D4E3AEF9A008AB26);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (testMode == false && UnityAdsSettings.testMode)
		bool L_0 = ___testMode1;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1;
		L_1 = UnityAdsSettings_get_testMode_mF584490F2407B9C2377622B5CF0812CAF7439638(NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Debug.Log("Unity Ads is initializing in test mode since test mode is enabled in Service Window.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralB8B17C2F23CF76B280EDF692D4E3AEF9A008AB26, NULL);
	}

IL_0014:
	{
		// s_Platform.Initialize(gameId, UnityAdsSettings.testMode || testMode, initializationListener);
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		String_t* L_3 = ___gameId0;
		bool L_4;
		L_4 = UnityAdsSettings_get_testMode_mF584490F2407B9C2377622B5CF0812CAF7439638(NULL);
		bool L_5 = ___testMode1;
		RuntimeObject* L_6 = ___initializationListener2;
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, bool, RuntimeObject* >::Invoke(0 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_2, L_3, (bool)((int32_t)((int32_t)L_4|(int32_t)L_5)), L_6);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Load_m18267376C71DD6875C832B7438C78656142B8F3C (String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Platform.Load(placementId, loadListener);
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		String_t* L_1 = ___placementId0;
		RuntimeObject* L_2 = ___loadListener1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_mC9F749C22FBCAF2E7581A35AA729C19EA6FE78C5 (String_t* ___placementId0, RuntimeObject* ___showListener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Show(placementId, null, showListener);
		String_t* L_0 = ___placementId0;
		RuntimeObject* L_1 = ___showListener1;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_mDA197541AB99B97973E574B1F52982386203D13E(L_0, (ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD*)NULL, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.ShowOptions,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_mDA197541AB99B97973E574B1F52982386203D13E (String_t* ___placementId0, ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* ___showOptions1, RuntimeObject* ___showListener2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Platform.Show(placementId, showOptions, showListener);
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_StaticFields*)il2cpp_codegen_static_fields_for(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var))->___s_Platform_0;
		String_t* L_1 = ___placementId0;
		ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* L_2 = ___showOptions1;
		RuntimeObject* L_3 = ___showListener2;
		NullCheck(L_0);
		InterfaceActionInvoker3< String_t*, ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD*, RuntimeObject* >::Invoke(2 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::Show(System.String,UnityEngine.Advertisements.ShowOptions,UnityEngine.Advertisements.IUnityAdsShowListener) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		// }
		return;
	}
}
// UnityEngine.Advertisements.Platform.IPlatform UnityEngine.Advertisements.Advertisement::CreatePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Advertisement_CreatePlatform_mE73E928E91FC0D85B0EDDE67D173326F94BA262A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidPlatform_tE2AD5659D9387D7B97F66B4DD4ED3E6B9D1844B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Banner_tB60B533B960F53183013116DC24FC2712B966C4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t* V_4 = NULL;
	UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* V_5 = NULL;
	Banner_tB60B533B960F53183013116DC24FC2712B966C4C* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	try
	{// begin try (depth: 1)
		// IUnityLifecycleManager unityLifecycleManager = new UnityLifecycleManager();
		UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* L_0 = (UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882*)il2cpp_codegen_object_new(UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityLifecycleManager__ctor_m7F3CBFB7673A8D646BF6913FBC851C7769037EBB(L_0, NULL);
		V_0 = L_0;
		// nativeBanner = new Platform.Android.AndroidBanner();
		AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* L_1 = (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68*)il2cpp_codegen_object_new(AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidBanner__ctor_m8E723E99310838DADEF2F9B71484400282829E59(L_1, NULL);
		// nativePlatform = new Platform.Android.AndroidPlatform();;
		AndroidPlatform_tE2AD5659D9387D7B97F66B4DD4ED3E6B9D1844B2* L_2 = (AndroidPlatform_tE2AD5659D9387D7B97F66B4DD4ED3E6B9D1844B2*)il2cpp_codegen_object_new(AndroidPlatform_tE2AD5659D9387D7B97F66B4DD4ED3E6B9D1844B2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidPlatform__ctor_mAD4B3465710A8E295F30F1872045D1DEF696A2EC(L_2, NULL);
		V_1 = L_2;
		// IBanner banner = new Advertisements.Banner(nativeBanner, unityLifecycleManager);
		RuntimeObject* L_3 = V_0;
		Banner_tB60B533B960F53183013116DC24FC2712B966C4C* L_4 = (Banner_tB60B533B960F53183013116DC24FC2712B966C4C*)il2cpp_codegen_object_new(Banner_tB60B533B960F53183013116DC24FC2712B966C4C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Banner__ctor_m55A8737759701A4D4E16CC7667CEA599A1C39D39(L_4, L_1, L_3, NULL);
		V_2 = L_4;
		// return new Platform.Platform(nativePlatform, banner, unityLifecycleManager);
		RuntimeObject* L_5 = V_1;
		RuntimeObject* L_6 = V_2;
		RuntimeObject* L_7 = V_0;
		Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* L_8 = (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA*)il2cpp_codegen_object_new(Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Platform__ctor_mA912D44D83BDA67AA6F469E6138BCB9816F33EB0(L_8, L_5, L_6, L_7, NULL);
		V_3 = L_8;
		goto IL_0066;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{// begin catch(System.Exception)
		{
			// catch (Exception exception)
			V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		try
		{// begin try (depth: 2)
			// Debug.LogError("Initializing Unity Ads.");
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral750B47A9E43C9EA610F98792362D027D33B89ECB)), NULL);
			// Debug.LogError(exception.Message);
			Exception_t* L_9 = V_4;
			NullCheck(L_9);
			String_t* L_10;
			L_10 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.Exception::get_Message() */, L_9);
			Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_10, NULL);
			// }
			goto IL_0040;
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_003d;
			}
			throw e;
		}

CATCH_003d:
		{// begin catch(System.MissingMethodException)
			// catch (MissingMethodException)
			// {}
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0040;
		}// end catch (depth: 2)

IL_0040:
		{
			// var unsupportedPlatform = new Platform.Unsupported.UnsupportedPlatform();
			UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* L_11 = (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59_il2cpp_TypeInfo_var)));
			NullCheck(L_11);
			UnsupportedPlatform__ctor_mD2AB31CC9591F51340AE7DFFDDFC53AF23D35ED6(L_11, NULL);
			// var coroutineExecutor = new UnityLifecycleManager();
			UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* L_12 = (UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882_il2cpp_TypeInfo_var)));
			NullCheck(L_12);
			UnityLifecycleManager__ctor_m7F3CBFB7673A8D646BF6913FBC851C7769037EBB(L_12, NULL);
			V_5 = L_12;
			// var unsupportedBanner = new Platform.Unsupported.UnsupportedBanner();
			UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF* L_13 = (UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF_il2cpp_TypeInfo_var)));
			NullCheck(L_13);
			UnsupportedBanner__ctor_m438F1E085E534BD57AB519D449A6EC8F9D274246(L_13, NULL);
			// var genericBanner = new Advertisements.Banner(unsupportedBanner, coroutineExecutor);
			UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* L_14 = V_5;
			Banner_tB60B533B960F53183013116DC24FC2712B966C4C* L_15 = (Banner_tB60B533B960F53183013116DC24FC2712B966C4C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Banner_tB60B533B960F53183013116DC24FC2712B966C4C_il2cpp_TypeInfo_var)));
			NullCheck(L_15);
			Banner__ctor_m55A8737759701A4D4E16CC7667CEA599A1C39D39(L_15, L_13, L_14, NULL);
			V_6 = L_15;
			// return new Platform.Platform(unsupportedPlatform, genericBanner, coroutineExecutor);
			Banner_tB60B533B960F53183013116DC24FC2712B966C4C* L_16 = V_6;
			UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* L_17 = V_5;
			Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* L_18 = (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA_il2cpp_TypeInfo_var)));
			NullCheck(L_18);
			Platform__ctor_mA912D44D83BDA67AA6F469E6138BCB9816F33EB0(L_18, L_11, L_16, L_17, NULL);
			V_3 = L_18;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0066;
		}
	}// end catch (depth: 1)

IL_0066:
	{
		// }
		RuntimeObject* L_19 = V_3;
		return L_19;
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
// UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.Banner::get_UnityLifecycleManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Banner_get_UnityLifecycleManager_m5BB7A4F09AB21EDDF9E77A499D91C03A68B7E82E (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, const RuntimeMethod* method) 
{
	{
		// public IUnityLifecycleManager UnityLifecycleManager { get; }
		RuntimeObject* L_0 = __this->___U3CUnityLifecycleManagerU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Banner::get_ShowAfterLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Banner_get_ShowAfterLoad_m0F5758A87EC97CB00326193263FA91BAF27DB9A4 (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, const RuntimeMethod* method) 
{
	{
		// public bool ShowAfterLoad { get; set; }
		bool L_0 = __this->___U3CShowAfterLoadU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Banner::set_ShowAfterLoad(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_set_ShowAfterLoad_m4748C54A24F9F34CDCFA582DC64D5D539DCD83CF (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ShowAfterLoad { get; set; }
		bool L_0 = ___value0;
		__this->___U3CShowAfterLoadU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void UnityEngine.Advertisements.Banner::.ctor(UnityEngine.Advertisements.INativeBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner__ctor_m55A8737759701A4D4E16CC7667CEA599A1C39D39 (Banner_tB60B533B960F53183013116DC24FC2712B966C4C* __this, RuntimeObject* ___nativeBanner0, RuntimeObject* ___unityLifecycleManager1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativeBanner_t69BD556AFA273EB12A3A726ACB5DA01647A3F1AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Banner(INativeBanner nativeBanner, IUnityLifecycleManager unityLifecycleManager)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_NativeBanner = nativeBanner;
		RuntimeObject* L_0 = ___nativeBanner0;
		__this->___m_NativeBanner_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NativeBanner_2), (void*)L_0);
		// UnityLifecycleManager = unityLifecycleManager;
		RuntimeObject* L_1 = ___unityLifecycleManager1;
		__this->___U3CUnityLifecycleManagerU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUnityLifecycleManagerU3Ek__BackingField_0), (void*)L_1);
		// m_NativeBanner.SetupBanner(this);
		RuntimeObject* L_2 = __this->___m_NativeBanner_2;
		NullCheck(L_2);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void UnityEngine.Advertisements.INativeBanner::SetupBanner(UnityEngine.Advertisements.IBanner) */, INativeBanner_t69BD556AFA273EB12A3A726ACB5DA01647A3F1AB_il2cpp_TypeInfo_var, L_2, __this);
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
// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback UnityEngine.Advertisements.BannerLoadOptions::get_loadCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* BannerLoadOptions_get_loadCallback_mECEEB150276C0E8C1744CB508B6AFF72A0796077 (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, const RuntimeMethod* method) 
{
	{
		// public LoadCallback loadCallback { get; set; }
		LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* L_0 = __this->___U3CloadCallbackU3Ek__BackingField_0;
		return L_0;
	}
}
// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback UnityEngine.Advertisements.BannerLoadOptions::get_errorCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* BannerLoadOptions_get_errorCallback_mB9B595EB059D86CA406DCC7F7D4B9EF59A8AB589 (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, const RuntimeMethod* method) 
{
	{
		// public ErrorCallback errorCallback { get; set; }
		ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* L_0 = __this->___U3CerrorCallbackU3Ek__BackingField_1;
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
void LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_Multicast(LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* currentDelegate = reinterpret_cast<LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_Open(LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_OpenStaticInvoker(LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_ClosedStaticInvoker(LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B (LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCallback__ctor_m82C20B862B58A068187B9E090BA53E0F12C2E3F1 (LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_Open;
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
	__this->___extra_arg_5 = (intptr_t)&LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_Multicast;
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420 (LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, const RuntimeMethod* method) 
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
void ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_Multicast(ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, String_t* ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* currentDelegate = reinterpret_cast<ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_Open(ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_OpenStaticInvoker(ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
void ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_ClosedStaticInvoker(ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029 (ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, String_t* ___message0, const RuntimeMethod* method)
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
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback__ctor_m6C3D9F85150EFC4700A624E3946C061BA25849A9 (ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_Open;
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
			__this->___invoke_impl_1 = (intptr_t)&ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_Multicast;
}
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377 (ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, String_t* ___message0, const RuntimeMethod* method) 
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
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_showCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* BannerOptions_get_showCallback_m0367F7A8058FA64DD2C114DC2423481F33FF531B (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) 
{
	{
		// public BannerCallback showCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = __this->___U3CshowCallbackU3Ek__BackingField_0;
		return L_0;
	}
}
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_hideCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* BannerOptions_get_hideCallback_mBED58861170D9007A1F6C4883ED906C151AD852A (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) 
{
	{
		// public BannerCallback hideCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = __this->___U3ChideCallbackU3Ek__BackingField_1;
		return L_0;
	}
}
// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::get_clickCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* BannerOptions_get_clickCallback_m7E35A638D6D69CE003CEB93C25DB33BA194F3AF0 (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) 
{
	{
		// public BannerCallback clickCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = __this->___U3CclickCallbackU3Ek__BackingField_2;
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
void BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_Multicast(BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* currentDelegate = reinterpret_cast<BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_Open(BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_OpenStaticInvoker(BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_ClosedStaticInvoker(BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88 (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback__ctor_m54F3DA4DFF8463122BC222D9B3F49A6A2EF26A46 (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_Open;
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
	__this->___extra_arg_5 = (intptr_t)&BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_Multicast;
}
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236 (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, const RuntimeMethod* method) 
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
// System.String UnityEngine.Advertisements.MetaData::get_category()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MetaData_get_category_mE48DB3D38C741ECA2787261D7FDA8AF99D78680A (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, const RuntimeMethod* method) 
{
	{
		// public string category { get; private set; }
		String_t* L_0 = __this->___U3CcategoryU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::set_category(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_set_category_mC0C94CD8085C0D11051DC82BBC6C897428954DF6 (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string category { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CcategoryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcategoryU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData__ctor_mA3E0768F48492D2C006E7C19F8D182D71EA57034 (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, String_t* ___category0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly IDictionary<string, object> m_MetaData = new Dictionary<string, object>();
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		__this->___m_MetaData_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MetaData_0), (void*)L_0);
		// public MetaData(string category)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.category = category;
		String_t* L_1 = ___category0;
		MetaData_set_category_mC0C94CD8085C0D11051DC82BBC6C897428954DF6_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.MetaData::Set(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaData_Set_m25CF8E1FC4E0775019FCD58C43ED471CA65BD539 (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MetaData[key] = value;
		RuntimeObject* L_0 = __this->___m_MetaData_0;
		String_t* L_1 = ___key0;
		RuntimeObject* L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> UnityEngine.Advertisements.MetaData::Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetaData_Values_mC60E8FEDBF17C5ACA56B847F3ACFD75208F9A5DD (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, const RuntimeMethod* method) 
{
	{
		// return m_MetaData;
		RuntimeObject* L_0 = __this->___m_MetaData_0;
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
// System.Void UnityEngine.Advertisements.AndroidInitializationListener::.ctor(UnityEngine.Advertisements.Platform.IPlatform,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidInitializationListener__ctor_m63EBC01C4F334E95A38BBEF36675D3152AF0E650 (AndroidInitializationListener_t81DC3AD5B67C4903C65DE29B13100B53A1185804* __this, RuntimeObject* ___platform0, RuntimeObject* ___initializationListener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84B4C675C9F3E79A1D308FF8C010110E9F4D7327);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidInitializationListener(IPlatform platform, IUnityAdsInitializationListener initializationListener) : base(CLASS_REFERENCE) {
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral84B4C675C9F3E79A1D308FF8C010110E9F4D7327, NULL);
		// m_Platform = platform;
		RuntimeObject* L_0 = ___platform0;
		__this->___m_Platform_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Platform_5), (void*)L_0);
		// m_ManagedListener = initializationListener;
		RuntimeObject* L_1 = ___initializationListener1;
		__this->___m_ManagedListener_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ManagedListener_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidInitializationListener::onInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidInitializationListener_onInitializationComplete_mEA1FF2313E39C2428AB8927EC20BE16A54354224 (AndroidInitializationListener_t81DC3AD5B67C4903C65DE29B13100B53A1185804* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_ManagedListener?.OnInitializationComplete();
		RuntimeObject* L_0 = __this->___m_ManagedListener_6;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationComplete() */, IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidInitializationListener::onInitializationFailed(UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidInitializationListener_onInitializationFailed_mC67E18394023D0EC62A082EBA31F50092549FF1C (AndroidInitializationListener_t81DC3AD5B67C4903C65DE29B13100B53A1185804* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___error0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_m9599B9BE8B29417C02B14C9A0DFDA540869C61F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_ManagedListener?.OnInitializationFailed(EnumUtilities.GetEnumFromAndroidJavaObject(error, UnityAdsInitializationError.UNKNOWN), message);
		RuntimeObject* L_0 = __this->___m_ManagedListener_6;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___error0;
		int32_t L_3;
		L_3 = EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_m9599B9BE8B29417C02B14C9A0DFDA540869C61F3(L_2, 0, EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_m9599B9BE8B29417C02B14C9A0DFDA540869C61F3_RuntimeMethod_var);
		String_t* L_4 = ___message1;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsInitializationListener::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String) */, IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7_il2cpp_TypeInfo_var, G_B2_0, L_3, L_4);
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
// System.Void UnityEngine.Advertisements.AndroidLoadListener::.ctor(UnityEngine.Advertisements.Platform.IPlatform,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidLoadListener__ctor_mF8534E76B4660C00697F13A98652C16CB00B3D5D (AndroidLoadListener_t8DDD2563120B2652BB57BB9B5692A7D3400F7BF0* __this, RuntimeObject* ___platform0, RuntimeObject* ___loadListener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA3D52181353D83E31C59DC26E66ADDA6680C79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidLoadListener(IPlatform platform, IUnityAdsLoadListener loadListener) : base(CLASS_REFERENCE) {
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral1FA3D52181353D83E31C59DC26E66ADDA6680C79, NULL);
		// m_Platform = platform;
		RuntimeObject* L_0 = ___platform0;
		__this->___m_Platform_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Platform_5), (void*)L_0);
		// m_ManagedListener = loadListener;
		RuntimeObject* L_1 = ___loadListener1;
		__this->___m_ManagedListener_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ManagedListener_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidLoadListener::onUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidLoadListener_onUnityAdsAdLoaded_m773EFB625F840DF3DF34A6D2E5501756C8499171 (AndroidLoadListener_t8DDD2563120B2652BB57BB9B5692A7D3400F7BF0* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_ManagedListener?.OnUnityAdsAdLoaded(placementId);
		RuntimeObject* L_0 = __this->___m_ManagedListener_6;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = ___placementId0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsLoadListener::OnUnityAdsAdLoaded(System.String) */, IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidLoadListener::onUnityAdsFailedToLoad(System.String,UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidLoadListener_onUnityAdsFailedToLoad_mEF9AC0598A47727AF499E0B9BFA186A268383668 (AndroidLoadListener_t8DDD2563120B2652BB57BB9B5692A7D3400F7BF0* __this, String_t* ___placementId0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_m7DB74A63E2585C7851C08E0242E0D9412679EDFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_ManagedListener?.OnUnityAdsFailedToLoad(placementId, EnumUtilities.GetEnumFromAndroidJavaObject(error, UnityAdsLoadError.UNKNOWN), message);
		RuntimeObject* L_0 = __this->___m_ManagedListener_6;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = ___placementId0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ___error1;
		int32_t L_4;
		L_4 = EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_m7DB74A63E2585C7851C08E0242E0D9412679EDFF(L_3, 5, EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_m7DB74A63E2585C7851C08E0242E0D9412679EDFF_RuntimeMethod_var);
		String_t* L_5 = ___message2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsLoadListener::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String) */, IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039_il2cpp_TypeInfo_var, G_B2_0, L_2, L_4, L_5);
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
// System.Void UnityEngine.Advertisements.AndroidShowListener::.ctor(UnityEngine.Advertisements.Platform.IPlatform,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener__ctor_mDA962C9A0AE9098F61C0FB811C4B5F3475F69C3C (AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0* __this, RuntimeObject* ___platform0, RuntimeObject* ___showListener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral621CE18D79B55039EFE55A04E6BFD7A549E31192);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidShowListener(IPlatform platform, IUnityAdsShowListener showListener) : base(OBJECT_ID) {
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral621CE18D79B55039EFE55A04E6BFD7A549E31192, NULL);
		// m_Platform = platform;
		RuntimeObject* L_0 = ___platform0;
		__this->___m_Platform_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Platform_5), (void*)L_0);
		// m_ManagedListener = showListener;
		RuntimeObject* L_1 = ___showListener1;
		__this->___m_ManagedListener_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ManagedListener_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidShowListener::onUnityAdsShowFailure(System.String,UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener_onUnityAdsShowFailure_mBB96E70EFC1A7C4462C52CFA3FB5DCC3C78EF8CD (AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0* __this, String_t* ___placementId0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_m6761363DE05B98C2E95011035B931593CC6E25F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// var enumError = EnumUtilities.GetEnumFromAndroidJavaObject(error, UnityAdsShowError.UNKNOWN);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___error1;
		int32_t L_1;
		L_1 = EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_m6761363DE05B98C2E95011035B931593CC6E25F8(L_0, 7, EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_m6761363DE05B98C2E95011035B931593CC6E25F8_RuntimeMethod_var);
		V_0 = L_1;
		// m_Platform.OnUnityAdsShowFailure(placementId, enumError, message);
		RuntimeObject* L_2 = __this->___m_Platform_5;
		String_t* L_3 = ___placementId0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___message2;
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(3 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		// m_ManagedListener?.OnUnityAdsShowFailure(placementId, enumError, message);
		RuntimeObject* L_6 = __this->___m_ManagedListener_6;
		RuntimeObject* L_7 = L_6;
		G_B1_0 = L_7;
		if (L_7)
		{
			G_B2_0 = L_7;
			goto IL_0021;
		}
	}
	{
		return;
	}

IL_0021:
	{
		String_t* L_8 = ___placementId0;
		int32_t L_9 = V_0;
		String_t* L_10 = ___message2;
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< String_t*, int32_t, String_t* >::Invoke(0 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B2_0, L_8, L_9, L_10);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidShowListener::onUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener_onUnityAdsShowStart_mBFF0BF90241AE06FF430321832475231271F4B49 (AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_Platform.OnUnityAdsShowStart(placementId);
		RuntimeObject* L_0 = __this->___m_Platform_5;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(4 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowStart(System.String) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0, L_1);
		// m_ManagedListener?.OnUnityAdsShowStart(placementId);
		RuntimeObject* L_2 = __this->___m_ManagedListener_6;
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		String_t* L_4 = ___placementId0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(1 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowStart(System.String) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B2_0, L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidShowListener::onUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener_onUnityAdsShowClick_m9F36659AF386DBAF68A19A3690241F20262573F6 (AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// m_Platform.OnUnityAdsShowClick(placementId);
		RuntimeObject* L_0 = __this->___m_Platform_5;
		String_t* L_1 = ___placementId0;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(5 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowClick(System.String) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_0, L_1);
		// m_ManagedListener?.OnUnityAdsShowClick(placementId);
		RuntimeObject* L_2 = __this->___m_ManagedListener_6;
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0017;
		}
	}
	{
		return;
	}

IL_0017:
	{
		String_t* L_4 = ___placementId0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowClick(System.String) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B2_0, L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.AndroidShowListener::onUnityAdsShowComplete(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidShowListener_onUnityAdsShowComplete_mE8F9996F082B81F7CD29D3420A1EBE5890A690C5 (AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0* __this, String_t* ___placementId0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_m6F8B5B9665AE6C75F78A108386CD310B071F6A5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// var showCompletionState = EnumUtilities.GetEnumFromAndroidJavaObject(state, UnityAdsShowCompletionState.UNKNOWN);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___state1;
		int32_t L_1;
		L_1 = EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_m6F8B5B9665AE6C75F78A108386CD310B071F6A5B(L_0, 2, EnumUtilities_GetEnumFromAndroidJavaObject_TisUnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_m6F8B5B9665AE6C75F78A108386CD310B071F6A5B_RuntimeMethod_var);
		V_0 = L_1;
		// m_Platform.OnUnityAdsShowComplete(placementId, showCompletionState);
		RuntimeObject* L_2 = __this->___m_Platform_5;
		String_t* L_3 = ___placementId0;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(6 /* System.Void UnityEngine.Advertisements.Platform.IPlatform::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState) */, IPlatform_t2605A6191C64C3618B8FD8936DFA7BFFAA746186_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		// m_ManagedListener?.OnUnityAdsShowComplete(placementId, showCompletionState);
		RuntimeObject* L_5 = __this->___m_ManagedListener_6;
		RuntimeObject* L_6 = L_5;
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_0020;
		}
	}
	{
		return;
	}

IL_0020:
	{
		String_t* L_7 = ___placementId0;
		int32_t L_8 = V_0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void UnityEngine.Advertisements.IUnityAdsShowListener::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState) */, IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD_il2cpp_TypeInfo_var, G_B2_0, L_7, L_8);
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
// System.String UnityEngine.Advertisements.ShowOptions::get_gamerSid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_m99E60DFA556B5CE71165C06A54D7BA9039E44918 (ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* __this, const RuntimeMethod* method) 
{
	{
		// public string gamerSid { get; set; }
		String_t* L_0 = __this->___U3CgamerSidU3Ek__BackingField_0;
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
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::add_OnApplicationQuitEventHandler(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_add_OnApplicationQuitEventHandler_m39398EF751CC1915AE7EBBD6ED2FFF87570B998B (ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_2 = NULL;
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = __this->___OnApplicationQuitEventHandler_4;
		V_0 = L_0;
	}

IL_0007:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = V_0;
		V_1 = L_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = V_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_4, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var));
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7** L_5 = (&__this->___OnApplicationQuitEventHandler_4);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = V_2;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = V_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8;
		L_8 = InterlockedCompareExchangeImpl<UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*>(L_5, L_6, L_7);
		V_0 = L_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)L_9) == ((RuntimeObject*)(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::remove_OnApplicationQuitEventHandler(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_remove_OnApplicationQuitEventHandler_m4CE5EDB7A1EFB57CB6FEE7AC659836ACAE5A430E (ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_1 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* V_2 = NULL;
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = __this->___OnApplicationQuitEventHandler_4;
		V_0 = L_0;
	}

IL_0007:
	{
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = V_0;
		V_1 = L_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = V_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)CastclassSealed((RuntimeObject*)L_4, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var));
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7** L_5 = (&__this->___OnApplicationQuitEventHandler_4);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = V_2;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = V_1;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8;
		L_8 = InterlockedCompareExchangeImpl<UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*>(L_5, L_6, L_7);
		V_0 = L_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = V_1;
		if ((!(((RuntimeObject*)(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)L_9) == ((RuntimeObject*)(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit_OnApplicationQuit_m67876A4AA945EB02636BE04B62A095514FD6B6EA (ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383* __this, const RuntimeMethod* method) 
{
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B2_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B1_0 = NULL;
	{
		// OnApplicationQuitEventHandler?.Invoke();
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_0 = __this->___OnApplicationQuitEventHandler_4;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.ApplicationQuit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationQuit__ctor_m9871D183A5361C34A864EC6B2D64C057F9A4A0DD (ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383* __this, const RuntimeMethod* method) 
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
// System.Void UnityEngine.Advertisements.Utilities.CoroutineExecutor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineExecutor_Update_mFFBB1E15F39D09DB1C71B318E56FE477E49C9492 (CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* V_0 = NULL;
	bool V_1 = false;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// lock (queue)
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = __this->___queue_5;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0042;
					}
				}
				{
					Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0042:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				goto IL_0029_1;
			}

IL_0013_1:
			{
				// queue.Dequeue()?.Invoke();
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_4 = __this->___queue_5;
				NullCheck(L_4);
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5;
				L_5 = Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E(L_4, Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = L_5;
				G_B3_0 = L_6;
				if (L_6)
				{
					G_B4_0 = L_6;
					goto IL_0024_1;
				}
			}
			{
				goto IL_0029_1;
			}

IL_0024_1:
			{
				NullCheck(G_B4_0);
				Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B4_0, NULL);
			}

IL_0029_1:
			{
				// while (queue.Count > 0)
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_7 = __this->___queue_5;
				NullCheck(L_7);
				int32_t L_8;
				L_8 = Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline(L_7, Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
				if ((((int32_t)L_8) > ((int32_t)0)))
				{
					goto IL_0013_1;
				}
			}
			{
				// }
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.CoroutineExecutor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoroutineExecutor__ctor_m82424D7D43C52BB4FA3EE7284AFB4002BB7E74F6 (CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly Queue<Action> queue = new Queue<Action>();
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*)il2cpp_codegen_object_new(Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272(L_0, Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		__this->___queue_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_5), (void*)L_0);
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
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager__ctor_m7F3CBFB7673A8D646BF6913FBC851C7769037EBB (UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* __this, const RuntimeMethod* method) 
{
	{
		// public UnityLifecycleManager() {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Initialize();
		UnityLifecycleManager_Initialize_m164E5816365E0F68B093C3EE54A47C314A3C3468(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Initialize_m164E5816365E0F68B093C3EE54A47C314A3C3468 (UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383_m4FFADF9D888B3931A90C66F25BA595543E200FD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m17D30C1BB355C8092073E09C980693756A35CC16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m412D7DF256107F9C7588E3399237CC35293100F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// var existingCoroutineExecutorGameObject = GameObject.Find(gameObjectName);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58, NULL);
		V_0 = L_0;
		// if (existingCoroutineExecutorGameObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0060;
		}
	}
	{
		// m_GameObject = existingCoroutineExecutorGameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		__this->___m_GameObject_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GameObject_0), (void*)L_3);
		// m_CoroutineExecutor = m_GameObject.GetComponent<CoroutineExecutor>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___m_GameObject_0;
		NullCheck(L_4);
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_5;
		L_5 = GameObject_GetComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m412D7DF256107F9C7588E3399237CC35293100F9(L_4, GameObject_GetComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m412D7DF256107F9C7588E3399237CC35293100F9_RuntimeMethod_var);
		__this->___m_CoroutineExecutor_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoroutineExecutor_1), (void*)L_5);
		// if (m_CoroutineExecutor != null)
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_6 = __this->___m_CoroutineExecutor_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// m_CoroutineExecutor.referenceCount++;
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_8 = __this->___m_CoroutineExecutor_1;
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_9 = L_8;
		NullCheck(L_9);
		int32_t L_10 = L_9->___referenceCount_4;
		NullCheck(L_9);
		L_9->___referenceCount_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// return;
		return;
	}

IL_004e:
	{
		// GameObject.DestroyImmediate(m_GameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_GameObject_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_11, NULL);
		// m_GameObject = null;
		__this->___m_GameObject_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GameObject_0), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_0060:
	{
		// m_GameObject = new GameObject(gameObjectName) { hideFlags = HideFlags.HideInHierarchy | HideFlags.HideInInspector};
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_12, _stringLiteral79C447DEF21B28BAE483F904DE3B163B685D5E58, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12;
		NullCheck(L_13);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_13, 3, NULL);
		__this->___m_GameObject_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GameObject_0), (void*)L_13);
		// m_CoroutineExecutor = m_GameObject.AddComponent<CoroutineExecutor>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___m_GameObject_0;
		NullCheck(L_14);
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_15;
		L_15 = GameObject_AddComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m17D30C1BB355C8092073E09C980693756A35CC16(L_14, GameObject_AddComponent_TisCoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A_m17D30C1BB355C8092073E09C980693756A35CC16_RuntimeMethod_var);
		__this->___m_CoroutineExecutor_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoroutineExecutor_1), (void*)L_15);
		// m_ApplicationQuit = m_GameObject.AddComponent<ApplicationQuit>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___m_GameObject_0;
		NullCheck(L_16);
		ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383* L_17;
		L_17 = GameObject_AddComponent_TisApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383_m4FFADF9D888B3931A90C66F25BA595543E200FD1(L_16, GameObject_AddComponent_TisApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383_m4FFADF9D888B3931A90C66F25BA595543E200FD1_RuntimeMethod_var);
		__this->___m_ApplicationQuit_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ApplicationQuit_2), (void*)L_17);
		// m_CoroutineExecutor.referenceCount++;
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_18 = __this->___m_CoroutineExecutor_1;
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_19 = L_18;
		NullCheck(L_19);
		int32_t L_20 = L_19->___referenceCount_4;
		NullCheck(L_19);
		L_19->___referenceCount_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		// GameObject.DontDestroyOnLoad(m_GameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___m_GameObject_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_21, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Post(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Post_m2FB7AC24D84CAB9C180BD9A753721A816FF75A89 (UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* V_0 = NULL;
	bool V_1 = false;
	CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* G_B5_0 = NULL;
	CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* G_B4_0 = NULL;
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* G_B7_0 = NULL;
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* G_B6_0 = NULL;
	{
		// if (!m_CoroutineExecutor) {
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_0 = __this->___m_CoroutineExecutor_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Initialize();
		UnityLifecycleManager_Initialize_m164E5816365E0F68B093C3EE54A47C314A3C3468(__this, NULL);
	}

IL_0013:
	{
		// lock (m_CoroutineExecutor.queue)
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_2 = __this->___m_CoroutineExecutor_1;
		NullCheck(L_2);
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_3 = L_2->___queue_5;
		V_0 = L_3;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0048:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_1;
					if (!L_4)
					{
						goto IL_0051;
					}
				}
				{
					Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_5 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_5, NULL);
				}

IL_0051:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_6 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_6, (&V_1), NULL);
				// m_CoroutineExecutor?.queue?.Enqueue(action);
				CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_7 = __this->___m_CoroutineExecutor_1;
				CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_8 = L_7;
				G_B4_0 = L_8;
				if (L_8)
				{
					G_B5_0 = L_8;
					goto IL_0035_1;
				}
			}
			{
				goto IL_0052;
			}

IL_0035_1:
			{
				NullCheck(G_B5_0);
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_9 = G_B5_0->___queue_5;
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_10 = L_9;
				G_B6_0 = L_10;
				if (L_10)
				{
					G_B7_0 = L_10;
					goto IL_0040_1;
				}
			}
			{
				goto IL_0052;
			}

IL_0040_1:
			{
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = ___action0;
				NullCheck(G_B7_0);
				Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4(G_B7_0, L_11, Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var);
				// }
				goto IL_0052;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Utilities.UnityLifecycleManager::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLifecycleManager_Dispose_m7BFA140FE6714EB97AC5EED19B6B8531073A8E81 (UnityLifecycleManager_t58DDC074077C6E2FD325FEF868F822CC43030882* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_Disposed)
		bool L_0 = __this->___m_Disposed_3;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		// m_Disposed = true;
		__this->___m_Disposed_3 = (bool)1;
		// m_CoroutineExecutor.referenceCount--;
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_1 = __this->___m_CoroutineExecutor_1;
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->___referenceCount_4;
		NullCheck(L_2);
		L_2->___referenceCount_4 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		// if (m_CoroutineExecutor.referenceCount == 0) {
		CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A* L_4 = __this->___m_CoroutineExecutor_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___referenceCount_4;
		if (L_5)
		{
			goto IL_003a;
		}
	}
	{
		// Object.DestroyImmediate(m_GameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___m_GameObject_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_6, NULL);
	}

IL_003a:
	{
		// m_GameObject = null;
		__this->___m_GameObject_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GameObject_0), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// m_CoroutineExecutor = null;
		__this->___m_CoroutineExecutor_1 = (CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CoroutineExecutor_1), (void*)(CoroutineExecutor_tA6A4385FAACBE3A79972198115F4813F43200F9A*)NULL);
		// m_ApplicationQuit = null;
		__this->___m_ApplicationQuit_2 = (ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ApplicationQuit_2), (void*)(ApplicationQuit_t5EE0434731BF95698B00F748C69930E033B01383*)NULL);
	}

IL_004f:
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
// UnityEngine.Advertisements.INativePlatform UnityEngine.Advertisements.Platform.Platform::get_NativePlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) 
{
	{
		// public INativePlatform NativePlatform { get; }
		RuntimeObject* L_0 = __this->___U3CNativePlatformU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_IsInitialized_m32F3455A6A3158FE972AC503E41D07121773F216 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public bool IsInitialized => NativePlatform?.IsInitialized() ?? false;
		RuntimeObject* L_0;
		L_0 = Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean UnityEngine.Advertisements.INativePlatform::IsInitialized() */, INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var, G_B2_0);
		return L_2;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Platform::get_IsShowing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_get_IsShowing_m6E94928BB3D7E2720B6CDF2C25801158586BCDD7 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = __this->___U3CIsShowingU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::set_IsShowing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_set_IsShowing_m6FBC75C2EC6907BAC638CCAA2E339998DC05100C (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsShowingU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.String UnityEngine.Advertisements.Platform.Platform::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_get_Version_mF1750D1013A32B8297AE7EC8DDB442CF979E310C (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// public string Version => NativePlatform?.GetVersion() ?? "UnknownVersion";
		RuntimeObject* L_0;
		L_0 = Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String UnityEngine.Advertisements.INativePlatform::GetVersion() */, INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		String_t* L_3 = G_B3_0;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001b;
		}
	}
	{
		G_B5_0 = _stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741;
	}

IL_001b:
	{
		return G_B5_0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::.ctor(UnityEngine.Advertisements.INativePlatform,UnityEngine.Advertisements.IBanner,UnityEngine.Advertisements.Utilities.IUnityLifecycleManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_mA912D44D83BDA67AA6F469E6138BCB9816F33EB0 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, RuntimeObject* ___nativePlatform0, RuntimeObject* ___banner1, RuntimeObject* ___unityLifecycleManager2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Platform(INativePlatform nativePlatform, IBanner banner, IUnityLifecycleManager unityLifecycleManager)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// NativePlatform = nativePlatform;
		RuntimeObject* L_0 = ___nativePlatform0;
		__this->___U3CNativePlatformU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNativePlatformU3Ek__BackingField_2), (void*)L_0);
		// Banner = banner;
		RuntimeObject* L_1 = ___banner1;
		__this->___U3CBannerU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBannerU3Ek__BackingField_0), (void*)L_1);
		// UnityLifecycleManager = unityLifecycleManager;
		RuntimeObject* L_2 = ___unityLifecycleManager2;
		__this->___U3CUnityLifecycleManagerU3Ek__BackingField_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUnityLifecycleManagerU3Ek__BackingField_1), (void*)L_2);
		// NativePlatform.SetupPlatform(this);
		RuntimeObject* L_3;
		L_3 = Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline(__this, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void UnityEngine.Advertisements.INativePlatform::SetupPlatform(UnityEngine.Advertisements.Platform.IPlatform) */, INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var, L_3, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Initialize_m4B16C65F2EB6A9E82233A728C04DA46361CE6024 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, String_t* ___gameId0, bool ___testMode1, RuntimeObject* ___initializationListener2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5416DA66FCD064B00AC9807723143002DA52C7B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D40F3F0C41EC73A97A45783093FA83DC6B51E9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6D00A6763BDEB8C18D1862BD06DFCB3D7627412);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052);
		s_Il2CppMethodInitialized = true;
	}
	MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* V_0 = NULL;
	MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* V_1 = NULL;
	{
		// if (!IsInitialized)
		bool L_0;
		L_0 = Platform_get_IsInitialized_m32F3455A6A3158FE972AC503E41D07121773F216(__this, NULL);
		if (L_0)
		{
			goto IL_007b;
		}
	}
	{
		// var framework = new MetaData("framework");
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_1 = (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D*)il2cpp_codegen_object_new(MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MetaData__ctor_mA3E0768F48492D2C006E7C19F8D182D71EA57034(L_1, _stringLiteralC6D00A6763BDEB8C18D1862BD06DFCB3D7627412, NULL);
		V_0 = L_1;
		// framework.Set("name", "Unity");
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_2 = V_0;
		NullCheck(L_2);
		MetaData_Set_m25CF8E1FC4E0775019FCD58C43ED471CA65BD539(L_2, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, _stringLiteral9AC36C3A3EC82C292FD998FA2F3C73EFBC571F3A, NULL);
		// framework.Set("version", Application.unityVersion);
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_3 = V_0;
		String_t* L_4;
		L_4 = Application_get_unityVersion_m09F45DDCFA0A4414AA296A595FDB0B59B44F5387(NULL);
		NullCheck(L_3);
		MetaData_Set_m25CF8E1FC4E0775019FCD58C43ED471CA65BD539(L_3, _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052, L_4, NULL);
		// SetMetaData(framework);
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_5 = V_0;
		Platform_SetMetaData_mFC5274052CA90924B6F13C607E3322535750F9D1(__this, L_5, NULL);
		// var adapter = new MetaData("adapter");
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_6 = (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D*)il2cpp_codegen_object_new(MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		MetaData__ctor_mA3E0768F48492D2C006E7C19F8D182D71EA57034(L_6, _stringLiteral5416DA66FCD064B00AC9807723143002DA52C7B3, NULL);
		V_1 = L_6;
		// adapter.Set("name", "Packman");
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_7 = V_1;
		NullCheck(L_7);
		MetaData_Set_m25CF8E1FC4E0775019FCD58C43ED471CA65BD539(L_7, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, _stringLiteral7D40F3F0C41EC73A97A45783093FA83DC6B51E9F, NULL);
		// adapter.Set("version", Version);
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_8 = V_1;
		String_t* L_9;
		L_9 = Platform_get_Version_mF1750D1013A32B8297AE7EC8DDB442CF979E310C(__this, NULL);
		NullCheck(L_8);
		MetaData_Set_m25CF8E1FC4E0775019FCD58C43ED471CA65BD539(L_8, _stringLiteralD2D2F8D3F9F04A081FFBE6B2AF7917BAAADFC052, L_9, NULL);
		// SetMetaData(adapter);
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_10 = V_1;
		Platform_SetMetaData_mFC5274052CA90924B6F13C607E3322535750F9D1(__this, L_10, NULL);
		// NativePlatform.Initialize(gameId, testMode, initializationListener);
		RuntimeObject* L_11;
		L_11 = Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline(__this, NULL);
		String_t* L_12 = ___gameId0;
		bool L_13 = ___testMode1;
		RuntimeObject* L_14 = ___initializationListener2;
		NullCheck(L_11);
		InterfaceActionInvoker3< String_t*, bool, RuntimeObject* >::Invoke(1 /* System.Void UnityEngine.Advertisements.INativePlatform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener) */, INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var, L_11, L_12, L_13, L_14);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Load_m92B551A85073A8F911E5C60DA0D37CC603EAE938 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral939E5F4A986FA1522F2818B2E87F98C768D55320);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(placementId))
		String_t* L_0 = ___placementId0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Debug.LogError("placementId cannot be nil or empty");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral939E5F4A986FA1522F2818B2E87F98C768D55320, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// NativePlatform.Load(placementId, loadListener);
		RuntimeObject* L_2;
		L_2 = Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline(__this, NULL);
		String_t* L_3 = ___placementId0;
		RuntimeObject* L_4 = ___loadListener1;
		NullCheck(L_2);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(2 /* System.Void UnityEngine.Advertisements.INativePlatform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener) */, INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::Show(System.String,UnityEngine.Advertisements.ShowOptions,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Show_m222476A3E1855E064835A59D39725D53C924A335 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, String_t* ___placementId0, ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* ___showOptions1, RuntimeObject* ___showListener2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5FDB5AC0DA6EFB2AD96E6A2A36EE08EA416A714);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A);
		s_Il2CppMethodInitialized = true;
	}
	MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* V_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	RuntimeObject* G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	{
		// if (IsShowing) return;
		bool L_0;
		L_0 = Platform_get_IsShowing_m6E94928BB3D7E2720B6CDF2C25801158586BCDD7_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (IsShowing) return;
		return;
	}

IL_0009:
	{
		// if (showOptions != null)
		ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* L_1 = ___showOptions1;
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		// if (!string.IsNullOrEmpty(showOptions.gamerSid))
		ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* L_2 = ___showOptions1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = ShowOptions_get_gamerSid_m99E60DFA556B5CE71165C06A54D7BA9039E44918_inline(L_2, NULL);
		bool L_4;
		L_4 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_3, NULL);
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		// var player = new MetaData("player");
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_5 = (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D*)il2cpp_codegen_object_new(MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		MetaData__ctor_mA3E0768F48492D2C006E7C19F8D182D71EA57034(L_5, _stringLiteralD8431B5D5BBDD13458B95AC3252777089DFF7F0A, NULL);
		V_0 = L_5;
		// player.Set("server_id", showOptions.gamerSid);
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_6 = V_0;
		ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* L_7 = ___showOptions1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = ShowOptions_get_gamerSid_m99E60DFA556B5CE71165C06A54D7BA9039E44918_inline(L_7, NULL);
		NullCheck(L_6);
		MetaData_Set_m25CF8E1FC4E0775019FCD58C43ED471CA65BD539(L_6, _stringLiteralA5FDB5AC0DA6EFB2AD96E6A2A36EE08EA416A714, L_8, NULL);
		// SetMetaData(player);
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_9 = V_0;
		Platform_SetMetaData_mFC5274052CA90924B6F13C607E3322535750F9D1(__this, L_9, NULL);
	}

IL_003c:
	{
		// NativePlatform.Show(string.IsNullOrEmpty(placementId) ? null : placementId, showListener);
		RuntimeObject* L_10;
		L_10 = Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline(__this, NULL);
		String_t* L_11 = ___placementId0;
		bool L_12;
		L_12 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_11, NULL);
		G_B6_0 = L_10;
		if (L_12)
		{
			G_B7_0 = L_10;
			goto IL_004d;
		}
	}
	{
		String_t* L_13 = ___placementId0;
		G_B8_0 = L_13;
		G_B8_1 = G_B6_0;
		goto IL_004e;
	}

IL_004d:
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B7_0;
	}

IL_004e:
	{
		RuntimeObject* L_14 = ___showListener2;
		NullCheck(G_B8_1);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(3 /* System.Void UnityEngine.Advertisements.INativePlatform::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener) */, INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var, G_B8_1, G_B8_0, L_14);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_SetMetaData_mFC5274052CA90924B6F13C607E3322535750F9D1 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* ___metaData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NativePlatform.SetMetaData(metaData);
		RuntimeObject* L_0;
		L_0 = Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline(__this, NULL);
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_1 = ___metaData0;
		NullCheck(L_0);
		InterfaceActionInvoker1< MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* >::Invoke(4 /* System.Void UnityEngine.Advertisements.INativePlatform::SetMetaData(UnityEngine.Advertisements.MetaData) */, INativePlatform_tD1F9F9DEB4E3038C5CA9ABC3ED18F868D2E3F274_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnUnityAdsShowFailure_mDCCA09E6801CF0A7651FC9DDB16D9C242F1EDB04 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, String_t* ___placementId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	{
		// IsShowing = false;
		Platform_set_IsShowing_m6FBC75C2EC6907BAC638CCAA2E339998DC05100C_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnUnityAdsShowStart_mF1EDD719E846D414DE7058AB3648B4EDC1E80598 (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	{
		// IsShowing = true;
		Platform_set_IsShowing_m6FBC75C2EC6907BAC638CCAA2E339998DC05100C_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnUnityAdsShowClick_m9604A0686C3D0061371A9E12262B640CE2E0A95C (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Platform::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnUnityAdsShowComplete_m0FD304BDBCA98D10B1E8E65A00D260AE94854CCB (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, String_t* ___placementId0, int32_t ___completionState1, const RuntimeMethod* method) 
{
	{
		// IsShowing = false;
		Platform_set_IsShowing_m6FBC75C2EC6907BAC638CCAA2E339998DC05100C_inline(__this, (bool)0, NULL);
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
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::SetupBanner(UnityEngine.Advertisements.IBanner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner_SetupBanner_mABEF7CC1B545E9B38BAAC23F746BDDD3E7CB1CB9 (UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF* __this, RuntimeObject* ___banner0, const RuntimeMethod* method) 
{
	{
		// public void SetupBanner(IBanner banner) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedBanner__ctor_m438F1E085E534BD57AB519D449A6EC8F9D274246 (UnsupportedBanner_t582EFCFBC8234E892FFE2BDAE70A4DBE7389DBCF* __this, const RuntimeMethod* method) 
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
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::SetupPlatform(UnityEngine.Advertisements.Platform.IPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_SetupPlatform_mAE4F436A677F0018A54275C2D5D15D49A3E67AD3 (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, RuntimeObject* ___platform0, const RuntimeMethod* method) 
{
	{
		// public void SetupPlatform(IPlatform platform) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_Initialize_m440B506B6A40EAF3E382609B962D3D157507A33F (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, String_t* ___gameId0, bool ___testMode1, RuntimeObject* ___initializationListener2, const RuntimeMethod* method) 
{
	{
		// public void Initialize(string gameId, bool testMode, IUnityAdsInitializationListener initializationListener) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_Load_mEDE3F80D4B91A89692222769E61EC21AD39D9364 (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method) 
{
	{
		// public void Load(string placementId, IUnityAdsLoadListener loadListener) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_Show_mC3BCF27080E48DB7D0EDC50A806C1037B1396ED5 (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, String_t* ___placementId0, RuntimeObject* ___showListener1, const RuntimeMethod* method) 
{
	{
		// public void Show(string placementId, IUnityAdsShowListener showListener) {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform_SetMetaData_mC58DD5B86F8973F79411046EF74DA64AB5EEA2DE (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* ___metaData0, const RuntimeMethod* method) 
{
	{
		// public void SetMetaData(MetaData metaData) {}
		return;
	}
}
// System.String UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsupportedPlatform_GetVersion_m09FED2D3C4FDD5E041AEB3C2A4D6709742ADE38C (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral998C6D819F4FEB5C09C82BCC9B537AD6F2280964);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "UnsupportedPlatformVersion";
		return _stringLiteral998C6D819F4FEB5C09C82BCC9B537AD6F2280964;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsupportedPlatform_IsInitialized_mCBCC729DAD4D4DFE3D208C3BB7007C4D3DF48036 (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Unsupported.UnsupportedPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsupportedPlatform__ctor_mD2AB31CC9591F51340AE7DFFDDFC53AF23D35ED6 (UnsupportedPlatform_t38273DE97C1657F9ED6ED54446A4DFD70F122A59* __this, const RuntimeMethod* method) 
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
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_Awake_mC91F24FD02F2EBA65D54E8203896D524D8C39E08 (BannerPlaceholder_t79875225F825197F77DF9DBD514598DF7853FA1E* __this, const RuntimeMethod* method) 
{
	{
		// IsShowing = false;
		__this->___IsShowing_7 = (bool)0;
		// aTexture = BackgroundTexture(320, 50, Color.grey);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_grey_mBCECB7841257253597D826AB06E678DA43CC4298_inline(NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_1;
		L_1 = BannerPlaceholder_BackgroundTexture_m18C8A2DBF8AA0DEF3735BAB1FC054D696229697F(((int32_t)320), ((int32_t)50), L_0, NULL);
		__this->___aTexture_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aTexture_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_OnGUI_mCA8AD18DFEB7FB97C42600B64E273673F9C8F890 (BannerPlaceholder_t79875225F825197F77DF9DBD514598DF7853FA1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97D34C2FB9E9844A9F8172EB3FADC29227F6FFE0);
		s_Il2CppMethodInitialized = true;
	}
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* V_0 = NULL;
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B5_0 = NULL;
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B4_0 = NULL;
	{
		// if (!IsShowing) return;
		bool L_0 = __this->___IsShowing_7;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!IsShowing) return;
		return;
	}

IL_0009:
	{
		// var myStyle = new GUIStyle(GUI.skin.box) { alignment = TextAnchor.MiddleCenter, fontSize = 20 };
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUISkin_t8C65CE1424D4B5D8D73022E266BDAD3BDE8612D9* L_1;
		L_1 = GUI_get_skin_m65083FBB1A0F6F33052E2AED126DD43FA34653B1(NULL);
		NullCheck(L_1);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2;
		L_2 = GUISkin_get_box_m21BE7FC56D903B95BAFAE8890425D330EA88D893(L_1, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		GUIStyle__ctor_m17492C8BACB0D28C7701C11500A7132F11B5F04E(L_3, L_2, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_4 = L_3;
		NullCheck(L_4);
		GUIStyle_set_alignment_mEDC62A775C9551DBD1FEE4043F115E034EF12937(L_4, 4, NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_5 = L_4;
		NullCheck(L_5);
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(L_5, ((int32_t)20), NULL);
		V_0 = L_5;
		// if (GUI.Button(GetBannerRect(BannerPosition), aTexture))
		int32_t L_6 = __this->___BannerPosition_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		L_7 = BannerPlaceholder_GetBannerRect_m188B96C4A53F0805B212EF3FEDE66B7DDEF746ED(L_6, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = __this->___aTexture_4;
		bool L_9;
		L_9 = GUI_Button_mD0E3B3A6A199F29F307AC2956A587120C7A0E0C3(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0056;
		}
	}
	{
		// BannerOptions?.clickCallback();
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_10 = __this->___BannerOptions_6;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_11 = L_10;
		G_B4_0 = L_11;
		if (L_11)
		{
			G_B5_0 = L_11;
			goto IL_004c;
		}
	}
	{
		goto IL_0056;
	}

IL_004c:
	{
		NullCheck(G_B5_0);
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_12;
		L_12 = BannerOptions_get_clickCallback_m7E35A638D6D69CE003CEB93C25DB33BA194F3AF0_inline(G_B5_0, NULL);
		NullCheck(L_12);
		BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_inline(L_12, NULL);
	}

IL_0056:
	{
		// if (aTexture)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_13 = __this->___aTexture_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_13, NULL);
		if (!L_14)
		{
			goto IL_0086;
		}
	}
	{
		// var bannerRect = GetBannerRect(BannerPosition);
		int32_t L_15 = __this->___BannerPosition_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16;
		L_16 = BannerPlaceholder_GetBannerRect_m188B96C4A53F0805B212EF3FEDE66B7DDEF746ED(L_15, NULL);
		// GUI.DrawTexture(bannerRect, aTexture, ScaleMode.ScaleToFit);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = L_16;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_18 = __this->___aTexture_4;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DrawTexture_m47861618D8EFFAF8BCEF5CBC49727E0A4CC6D898(L_17, L_18, 2, NULL);
		// GUI.Box(bannerRect, "This would be your banner", myStyle);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_19 = V_0;
		GUI_Box_m0BCA5753684A74B6759AF7BBB1080DECEF170643(L_17, _stringLiteral97D34C2FB9E9844A9F8172EB3FADC29227F6FFE0, L_19, NULL);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::ShowBanner(UnityEngine.Advertisements.BannerPosition,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_ShowBanner_m10FF4E0DBC0E2B1852589371C3B31737E3ACB05C (BannerPlaceholder_t79875225F825197F77DF9DBD514598DF7853FA1E* __this, int32_t ___bannerPosition0, BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___bannerOptions1, const RuntimeMethod* method) 
{
	{
		// BannerPosition = bannerPosition;
		int32_t L_0 = ___bannerPosition0;
		__this->___BannerPosition_5 = L_0;
		// BannerOptions = bannerOptions;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_1 = ___bannerOptions1;
		__this->___BannerOptions_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BannerOptions_6), (void*)L_1);
		// IsShowing = true;
		__this->___IsShowing_7 = (bool)1;
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::HideBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder_HideBanner_m39E19D11C89B1ECDC7161FAACC7D0A668BAAF5CC (BannerPlaceholder_t79875225F825197F77DF9DBD514598DF7853FA1E* __this, const RuntimeMethod* method) 
{
	{
		// IsShowing = false;
		__this->___IsShowing_7 = (bool)0;
		// }
		return;
	}
}
// UnityEngine.Texture2D UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::BackgroundTexture(System.Int32,System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* BannerPlaceholder_BackgroundTexture_m18C8A2DBF8AA0DEF3735BAB1FC054D696229697F (int32_t ___width0, int32_t ___height1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var pix = new Color[width * height];
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_2 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
		V_0 = L_2;
		// for (var i = 0; i < pix.Length; i++)
		V_1 = 0;
		goto IL_0019;
	}

IL_000d:
	{
		// pix[i] = color;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_3 = V_0;
		int32_t L_4 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___color2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_5);
		// for (var i = 0; i < pix.Length; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0019:
	{
		// for (var i = 0; i < pix.Length; i++)
		int32_t L_7 = V_1;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// var result = new Texture2D(width, height);
		int32_t L_9 = ___width0;
		int32_t L_10 = ___height1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_11 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_11, L_9, L_10, NULL);
		// result.SetPixels(pix);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_12 = L_11;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_13 = V_0;
		NullCheck(L_12);
		Texture2D_SetPixels_mAE0CDFA15FA96F840D7FFADC31405D8AF20D9073(L_12, L_13, NULL);
		// result.Apply();
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_14 = L_12;
		NullCheck(L_14);
		Texture2D_Apply_mA014182C9EE0BBF6EEE3B286854F29E50EB972DC(L_14, NULL);
		// return result;
		return L_14;
	}
}
// UnityEngine.Rect UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::GetBannerRect(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D BannerPlaceholder_GetBannerRect_m188B96C4A53F0805B212EF3FEDE66B7DDEF746ED (int32_t ___position0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___position0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_004a;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0064;
			}
			case 3:
			{
				goto IL_00d5;
			}
			case 4:
			{
				goto IL_00ae;
			}
			case 5:
			{
				goto IL_00f3;
			}
			case 6:
			{
				goto IL_0085;
			}
		}
	}
	{
		goto IL_0118;
	}

IL_0027:
	{
		// return new Rect(Screen.width / 2 - 160, 0, 320, 50);
		int32_t L_1;
		L_1 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		memset((&L_2), 0, sizeof(L_2));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_2), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_1/2)), ((int32_t)160)))), (0.0f), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_2;
	}

IL_004a:
	{
		// return new Rect(0, 0, 320, 50);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_3), (0.0f), (0.0f), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_3;
	}

IL_0064:
	{
		// return new Rect(Screen.width - 320, 0, 320, 50);
		int32_t L_4;
		L_4 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		memset((&L_5), 0, sizeof(L_5));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_5), ((float)((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)320)))), (0.0f), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_5;
	}

IL_0085:
	{
		// return new Rect(Screen.width / 2 - 160, Screen.height / 2 - 25, 320, 50);
		int32_t L_6;
		L_6 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_7;
		L_7 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_8), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_6/2)), ((int32_t)160)))), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_7/2)), ((int32_t)25)))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_8;
	}

IL_00ae:
	{
		// return new Rect(Screen.width / 2 - 160, Screen.height - 50, 320, 50);
		int32_t L_9;
		L_9 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_10;
		L_10 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11;
		memset((&L_11), 0, sizeof(L_11));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_11), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_9/2)), ((int32_t)160)))), ((float)((int32_t)il2cpp_codegen_subtract(L_10, ((int32_t)50)))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_11;
	}

IL_00d5:
	{
		// return new Rect(0, Screen.height - 50, 320, 50);
		int32_t L_12;
		L_12 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13;
		memset((&L_13), 0, sizeof(L_13));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_13), (0.0f), ((float)((int32_t)il2cpp_codegen_subtract(L_12, ((int32_t)50)))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_13;
	}

IL_00f3:
	{
		// return new Rect(Screen.width - 320, Screen.height - 50, 320, 50);
		int32_t L_14;
		L_14 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_15;
		L_15 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16;
		memset((&L_16), 0, sizeof(L_16));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_16), ((float)((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)320)))), ((float)((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)50)))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_16;
	}

IL_0118:
	{
		// return new Rect(Screen.width / 2 - 160, Screen.height - 50, 320, 50);
		int32_t L_17;
		L_17 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_18;
		L_18 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_19;
		memset((&L_19), 0, sizeof(L_19));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_19), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_17/2)), ((int32_t)160)))), ((float)((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)50)))), (320.0f), (50.0f), /*hidden argument*/NULL);
		return L_19;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Editor.BannerPlaceholder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerPlaceholder__ctor_m924CEA544C2BB6BB1FB1B5F720EC76081D508828 (BannerPlaceholder_t79875225F825197F77DF9DBD514598DF7853FA1E* __this, const RuntimeMethod* method) 
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
// System.Boolean UnityEngine.Advertisements.Platform.Android.AndroidBanner::get_IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidBanner_get_IsLoaded_mA90E42EA6594C68EFDD0AFFDC94A74A80C902B09 (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsLoaded => m_BannerBundle != null;
		BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* L_0 = __this->___m_BannerBundle_7;
		return (bool)((!(((RuntimeObject*)(BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner__ctor_m8E723E99310838DADEF2F9B71484400282829E59 (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE839BB5479CD2F5F696EC09ACD408C4D13EAEFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AndroidBanner() : base("com.unity3d.services.banners.IUnityBannerListener") {}
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteralAE839BB5479CD2F5F696EC09ACD408C4D13EAEFC, NULL);
		// public AndroidBanner() : base("com.unity3d.services.banners.IUnityBannerListener") {}
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::SetupBanner(UnityEngine.Advertisements.IBanner)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_SetupBanner_m84E942C2FDB8B3C4E8077CCFFC05335A8C0516FB (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, RuntimeObject* ___banner0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF0425E7DDA63941C9BCBB6016B6525349B18A96);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Banner = banner;
		RuntimeObject* L_0 = ___banner0;
		__this->___m_Banner_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Banner_4), (void*)L_0);
		// m_BannersClass = new AndroidJavaClass("com.unity3d.services.banners.UnityBanners");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteralCF0425E7DDA63941C9BCBB6016B6525349B18A96, NULL);
		__this->___m_BannersClass_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BannersClass_5), (void*)L_1);
		// m_CurrentActivity = AndroidPlatform.GetCurrentAndroidActivity();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidPlatform_GetCurrentAndroidActivity_mA7B33D7FD6B36D5B6C2CFED48ABF17104A4F78E0(NULL);
		__this->___m_CurrentActivity_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentActivity_6), (void*)L_2);
		// m_BannerBundle = null;
		__this->___m_BannerBundle_7 = (BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BannerBundle_7), (void*)(BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_Load_m8423A122726BD342EAEC2C8E312C24F00E9613C4 (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, String_t* ___placementId0, BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* ___loadOptions1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CLoadU3Eb__0_m7EF8C1F9F5714B3B9D1B80347365F02DB275BAE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_t44A82BA283D57E50089F2A70FCF6D8C3CA18B00D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EC9FD747E1362F76CCE0E68488AB9A1F71729AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2CF9460CF1354EAF3436608352EAD04C04E560A);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_t44A82BA283D57E50089F2A70FCF6D8C3CA18B00D* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass11_0_t44A82BA283D57E50089F2A70FCF6D8C3CA18B00D* L_0 = (U3CU3Ec__DisplayClass11_0_t44A82BA283D57E50089F2A70FCF6D8C3CA18B00D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_t44A82BA283D57E50089F2A70FCF6D8C3CA18B00D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass11_0__ctor_mB4749FC4347BDA5F4935149B71E84CA043C5B7EE(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass11_0_t44A82BA283D57E50089F2A70FCF6D8C3CA18B00D* L_1 = V_0;
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_2 = ___loadOptions1;
		NullCheck(L_1);
		L_1->___loadOptions_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___loadOptions_0), (void*)L_2);
		// if (!m_ListenerIsSet) {
		bool L_3 = __this->___m_ListenerIsSet_10;
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		// m_ListenerIsSet = true;
		__this->___m_ListenerIsSet_10 = (bool)1;
		// m_BannersClass.CallStatic("setBannerListener", this);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = __this->___m_BannersClass_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, __this);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)__this);
		NullCheck(L_4);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_4, _stringLiteral4EC9FD747E1362F76CCE0E68488AB9A1F71729AA, L_6, NULL);
	}

IL_0036:
	{
		// m_BannerLoadOptions = loadOptions;
		U3CU3Ec__DisplayClass11_0_t44A82BA283D57E50089F2A70FCF6D8C3CA18B00D* L_7 = V_0;
		NullCheck(L_7);
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_8 = L_7->___loadOptions_0;
		__this->___m_BannerLoadOptions_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BannerLoadOptions_8), (void*)L_8);
		// if (m_BannerBundle != null && m_BannerBundle.bannerPlacementId.Equals(placementId))
		BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* L_9 = __this->___m_BannerBundle_7;
		if (!L_9)
		{
			goto IL_007a;
		}
	}
	{
		BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* L_10 = __this->___m_BannerBundle_7;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = BannerBundle_get_bannerPlacementId_mA4916C42EA50108B4D553776443460B1C664C26E_inline(L_10, NULL);
		String_t* L_12 = ___placementId0;
		NullCheck(L_11);
		bool L_13;
		L_13 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     loadOptions?.loadCallback();
		// });
		RuntimeObject* L_14 = __this->___m_Banner_4;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, L_14);
		U3CU3Ec__DisplayClass11_0_t44A82BA283D57E50089F2A70FCF6D8C3CA18B00D* L_16 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_17 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass11_0_U3CLoadU3Eb__0_m7EF8C1F9F5714B3B9D1B80347365F02DB275BAE2_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, L_15, L_17);
		return;
	}

IL_007a:
	{
		// if (m_BannerBundle != null)
		BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* L_18 = __this->___m_BannerBundle_7;
		if (!L_18)
		{
			goto IL_0090;
		}
	}
	{
		// Hide(true);
		AndroidBanner_Hide_mFFC62E2BF6ED3E27135D830DD56F8213625AAECE(__this, (bool)1, NULL);
		// m_BannerBundle = null;
		__this->___m_BannerBundle_7 = (BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BannerBundle_7), (void*)(BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2*)NULL);
	}

IL_0090:
	{
		// if (placementId != null)
		String_t* L_19 = ___placementId0;
		if (!L_19)
		{
			goto IL_00b7;
		}
	}
	{
		// m_BannersClass.CallStatic("loadBanner", m_CurrentActivity, placementId);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_20 = __this->___m_BannersClass_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_21;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23 = __this->___m_CurrentActivity_6;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_22;
		String_t* L_25 = ___placementId0;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_25);
		NullCheck(L_20);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_20, _stringLiteralC2CF9460CF1354EAF3436608352EAD04C04E560A, L_24, NULL);
		return;
	}

IL_00b7:
	{
		// m_BannersClass.CallStatic("loadBanner", m_CurrentActivity);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_26 = __this->___m_BannersClass_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = L_27;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29 = __this->___m_CurrentActivity_6;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_29);
		NullCheck(L_26);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_26, _stringLiteralC2CF9460CF1354EAF3436608352EAD04C04E560A, L_28, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::Show(System.String,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_Show_m06CF344B822E045EFA05982F3A10774C3A3EE132 (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, String_t* ___placementId0, BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___showOptions1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__0_mE626FA2BC0E938A69C142BBFA43DB8861832567A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__1_m6C46CDF641CEE4172AEDF5695048ACC3F890364F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass12_0_tCEC27277BA42C7D3F0C664421D1ABF00E4DEBBDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass12_0_tCEC27277BA42C7D3F0C664421D1ABF00E4DEBBDD* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass12_0_tCEC27277BA42C7D3F0C664421D1ABF00E4DEBBDD* L_0 = (U3CU3Ec__DisplayClass12_0_tCEC27277BA42C7D3F0C664421D1ABF00E4DEBBDD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass12_0_tCEC27277BA42C7D3F0C664421D1ABF00E4DEBBDD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass12_0__ctor_m7BB527763F003875E638B7256DD3BD3788435943(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass12_0_tCEC27277BA42C7D3F0C664421D1ABF00E4DEBBDD* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass12_0_tCEC27277BA42C7D3F0C664421D1ABF00E4DEBBDD* L_2 = V_0;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_3 = ___showOptions1;
		NullCheck(L_2);
		L_2->___showOptions_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___showOptions_1), (void*)L_3);
		// m_BannerShowOptions = showOptions;
		U3CU3Ec__DisplayClass12_0_tCEC27277BA42C7D3F0C664421D1ABF00E4DEBBDD* L_4 = V_0;
		NullCheck(L_4);
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_5 = L_4->___showOptions_1;
		__this->___m_BannerShowOptions_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BannerShowOptions_9), (void*)L_5);
		// if (m_BannerBundle != null && (string.IsNullOrEmpty(placementId) || m_BannerBundle.bannerPlacementId.Equals(placementId)))
		BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* L_6 = __this->___m_BannerBundle_7;
		if (!L_6)
		{
			goto IL_0085;
		}
	}
	{
		String_t* L_7 = ___placementId0;
		bool L_8;
		L_8 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_7, NULL);
		if (L_8)
		{
			goto IL_0043;
		}
	}
	{
		BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* L_9 = __this->___m_BannerBundle_7;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = BannerBundle_get_bannerPlacementId_mA4916C42EA50108B4D553776443460B1C664C26E_inline(L_9, NULL);
		String_t* L_11 = ___placementId0;
		NullCheck(L_10);
		bool L_12;
		L_12 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_0085;
		}
	}

IL_0043:
	{
		// m_CurrentActivity.Call("runOnUiThread", new AndroidJavaRunnable(() =>
		// {
		//     var parent = m_BannerBundle.bannerView.Call<AndroidJavaObject>("getParent");
		//     if (parent == null)
		//     {
		//         var layoutParams = m_BannerBundle.bannerView.Call<AndroidJavaObject>("getLayoutParams");
		//         m_CurrentActivity.Call("addContentView", m_BannerBundle.bannerView, layoutParams);
		//     }
		// }));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = __this->___m_CurrentActivity_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
		U3CU3Ec__DisplayClass12_0_tCEC27277BA42C7D3F0C664421D1ABF00E4DEBBDD* L_16 = V_0;
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* L_17 = (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)il2cpp_codegen_object_new(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		AndroidJavaRunnable__ctor_m000E4FEB2DE8031A1CD733610D76E2BF60490334(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__0_mE626FA2BC0E938A69C142BBFA43DB8861832567A_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
		NullCheck(L_13);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_13, _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D, L_15, NULL);
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     showOptions?.showCallback();
		// });
		RuntimeObject* L_18 = __this->___m_Banner_4;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, L_18);
		U3CU3Ec__DisplayClass12_0_tCEC27277BA42C7D3F0C664421D1ABF00E4DEBBDD* L_20 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_21 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_21, L_20, (intptr_t)((void*)U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__1_m6C46CDF641CEE4172AEDF5695048ACC3F890364F_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, L_19, L_21);
		return;
	}

IL_0085:
	{
		// if (m_BannerBundle != null)
		BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* L_22 = __this->___m_BannerBundle_7;
		if (!L_22)
		{
			goto IL_009b;
		}
	}
	{
		// Hide(true);
		AndroidBanner_Hide_mFFC62E2BF6ED3E27135D830DD56F8213625AAECE(__this, (bool)1, NULL);
		// m_BannerBundle = null;
		__this->___m_BannerBundle_7 = (BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BannerBundle_7), (void*)(BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2*)NULL);
	}

IL_009b:
	{
		// m_Banner.ShowAfterLoad = true;
		RuntimeObject* L_23 = __this->___m_Banner_4;
		NullCheck(L_23);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.Advertisements.IBanner::set_ShowAfterLoad(System.Boolean) */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, L_23, (bool)1);
		// Load(placementId, null);
		String_t* L_24 = ___placementId0;
		AndroidBanner_Load_m8423A122726BD342EAEC2C8E312C24F00E9613C4(__this, L_24, (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E*)NULL, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_Hide_mFFC62E2BF6ED3E27135D830DD56F8213625AAECE (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, bool ___destroy0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBanner_U3CHideU3Eb__13_0_mA234986168275EA7EA56F38B9EBD4CE4F0533D22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBanner_U3CHideU3Eb__13_1_m1B3C913F757872839F338243CC43EDF2CE3FE9AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF);
		s_Il2CppMethodInitialized = true;
	}
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B5_0 = NULL;
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B4_0 = NULL;
	BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* G_B6_0 = NULL;
	{
		// if (m_BannerBundle != null)
		BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* L_0 = __this->___m_BannerBundle_7;
		if (!L_0)
		{
			goto IL_007d;
		}
	}
	{
		// if (destroy)
		bool L_1 = ___destroy0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// m_BannerBundle = null;
		__this->___m_BannerBundle_7 = (BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BannerBundle_7), (void*)(BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2*)NULL);
		// m_BannersClass.CallStatic("destroy");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = __this->___m_BannersClass_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_2, _stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF, L_3, NULL);
		return;
	}

IL_0028:
	{
		// m_CurrentActivity.Call("runOnUiThread", new AndroidJavaRunnable(() => {
		//     var parent = m_BannerBundle.bannerView.Call<AndroidJavaObject>("getParent");
		//     parent?.Call("removeView", m_BannerBundle.bannerView);
		// }));
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = __this->___m_CurrentActivity_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F* L_7 = (AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F*)il2cpp_codegen_object_new(AndroidJavaRunnable_tF23B9BBDA8C99A48BCEEA6335A47DA3C0EF34A7F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		AndroidJavaRunnable__ctor_m000E4FEB2DE8031A1CD733610D76E2BF60490334(L_7, __this, (intptr_t)((void*)AndroidBanner_U3CHideU3Eb__13_0_mA234986168275EA7EA56F38B9EBD4CE4F0533D22_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_4);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteral7D5D6BBF8281151C9F5F57DE5D5BABB7140A651D, L_6, NULL);
		// if (m_BannerShowOptions?.hideCallback != null)
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_8 = __this->___m_BannerShowOptions_9;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_9 = L_8;
		G_B4_0 = L_9;
		if (L_9)
		{
			G_B5_0 = L_9;
			goto IL_005a;
		}
	}
	{
		G_B6_0 = ((BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88*)(NULL));
		goto IL_005f;
	}

IL_005a:
	{
		NullCheck(G_B5_0);
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_10;
		L_10 = BannerOptions_get_hideCallback_mBED58861170D9007A1F6C4883ED906C151AD852A_inline(G_B5_0, NULL);
		G_B6_0 = L_10;
	}

IL_005f:
	{
		if (!G_B6_0)
		{
			goto IL_007d;
		}
	}
	{
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     m_BannerShowOptions?.hideCallback();
		// });
		RuntimeObject* L_11 = __this->___m_Banner_4;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, L_11);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_13, __this, (intptr_t)((void*)AndroidBanner_U3CHideU3Eb__13_1_m1B3C913F757872839F338243CC43EDF2CE3FE9AC_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::SetPosition(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_SetPosition_m1370055994F0B01C4EC807BACB09C66CA6636560 (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, int32_t ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1960F177DBF9ED9808DEA1773FEEF144EC8E4C7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36A7D89431BEAA223457D97EF62FEE269808ED7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB040439619EE49D63AB73416AB10D1423D032871);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	{
		// var index = (int)position;
		int32_t L_0 = ___position0;
		V_0 = L_0;
		// var enumClass = new AndroidJavaClass("com.unity3d.services.banners.view.BannerPosition");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral36A7D89431BEAA223457D97EF62FEE269808ED7B, NULL);
		// var values = enumClass.CallStatic<AndroidJavaObject>("values");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_1, _stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6, L_2, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		V_1 = L_3;
		// var bannerPosition = new AndroidJavaClass("java.lang.reflect.Array").CallStatic<AndroidJavaObject>("get", values, index);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_4, _stringLiteralB040439619EE49D63AB73416AB10D1423D032871, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_11);
		NullCheck(L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12;
		L_12 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_4, _stringLiteralBF68B5E8806879817720F1AA46DC7730FCB8187E, L_8, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		V_2 = L_12;
		// m_BannersClass.CallStatic("setBannerPosition", bannerPosition);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_13 = __this->___m_BannersClass_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = V_2;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		NullCheck(L_13);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_13, _stringLiteral1960F177DBF9ED9808DEA1773FEEF144EC8E4C7F, L_15, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::onUnityBannerShow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_onUnityBannerShow_mCB47141A40C6E6EFC046BB4023F272DAA716C54B (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::onUnityBannerHide(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_onUnityBannerHide_m79062BDF8A0C2EF344B74827BD2EB3232DF73663 (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::onUnityBannerLoaded(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_onUnityBannerLoaded_m77D16A54777CCF59CA929166B1A6D33B01533763 (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, String_t* ___placementId0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___view1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_0_mD37D62D5FB74CA7BA2259162802D8DC0C5649988_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_1_m915883D9CAE36E2821426AC509039ACE1C84CAEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1073EDD32EA0B0FD3BCAF9C644DE00B100741265);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E6D79FB7A672657560825D4EBF2050737CCAF6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8776C6B9757743C85B42D4041703FD2BFBA9F722);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// m_BannerBundle = new BannerBundle(placementId, view);
		String_t* L_0 = ___placementId0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___view1;
		BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* L_2 = (BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2*)il2cpp_codegen_object_new(BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BannerBundle__ctor_mA358F4E6ED2021BD4D86AE8C55BD6B13C4DD3322(L_2, L_0, L_1, NULL);
		__this->___m_BannerBundle_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BannerBundle_7), (void*)L_2);
		// view.Call("setBackgroundColor", UnityEngine.Advertisements.Utilities.Color.Transparent);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ___view1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		int32_t L_6 = 0;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_3);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_3, _stringLiteral1073EDD32EA0B0FD3BCAF9C644DE00B100741265, L_5, NULL);
		// if (m_Banner.ShowAfterLoad)
		RuntimeObject* L_8 = __this->___m_Banner_4;
		NullCheck(L_8);
		bool L_9;
		L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.Advertisements.IBanner::get_ShowAfterLoad() */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, L_8);
		if (!L_9)
		{
			goto IL_008b;
		}
	}
	{
		// m_Banner.ShowAfterLoad = false;
		RuntimeObject* L_10 = __this->___m_Banner_4;
		NullCheck(L_10);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.Advertisements.IBanner::set_ShowAfterLoad(System.Boolean) */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, L_10, (bool)0);
		// var layoutParams = view.Call<AndroidJavaObject>("getLayoutParams");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = ___view1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
		L_12 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_11);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13;
		L_13 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_11, _stringLiteral8776C6B9757743C85B42D4041703FD2BFBA9F722, L_12, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_13;
		// m_CurrentActivity.Call("addContentView", view, layoutParams);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = __this->___m_CurrentActivity_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = ___view1;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_16;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_19 = V_0;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_19);
		NullCheck(L_14);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_14, _stringLiteral3E6D79FB7A672657560825D4EBF2050737CCAF6E, L_18, NULL);
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     m_BannerShowOptions?.showCallback();
		// });
		RuntimeObject* L_20 = __this->___m_Banner_4;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, L_20);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_22 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_22, __this, (intptr_t)((void*)AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_1_m915883D9CAE36E2821426AC509039ACE1C84CAEC_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, L_21, L_22);
	}

IL_008b:
	{
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     m_BannerLoadOptions?.loadCallback();
		// });
		RuntimeObject* L_23 = __this->___m_Banner_4;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, L_23);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_25 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_25, __this, (intptr_t)((void*)AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_0_mD37D62D5FB74CA7BA2259162802D8DC0C5649988_RuntimeMethod_var), NULL);
		NullCheck(L_24);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, L_24, L_25);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::onUnityBannerUnloaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_onUnityBannerUnloaded_mCF7398E2DF04D901135C06930007BBE942A57C6C (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::onUnityBannerClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_onUnityBannerClick_mBC9DA7FEAB2FAC2FC61BDFA1D930536130110FF0 (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidBanner_U3ConUnityBannerClickU3Eb__19_0_m3E31000AD8114381FF258F7B217EB1FBB3D35CD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     m_BannerShowOptions?.clickCallback();
		// });
		RuntimeObject* L_0 = __this->___m_Banner_4;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, L_0);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)AndroidBanner_U3ConUnityBannerClickU3Eb__19_0_m3E31000AD8114381FF258F7B217EB1FBB3D35CD6_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::onUnityBannerError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_onUnityBannerError_m4379E165441326ACEB9CC6509E736DDACDBDEBF5 (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_U3ConUnityBannerErrorU3Eb__0_m0DD98663AF155A5809120293E2B451CF67DF47DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass20_0_t9A7922ECAC6121C2C62BF923F1334E337D51C537_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass20_0_t9A7922ECAC6121C2C62BF923F1334E337D51C537* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass20_0_t9A7922ECAC6121C2C62BF923F1334E337D51C537* L_0 = (U3CU3Ec__DisplayClass20_0_t9A7922ECAC6121C2C62BF923F1334E337D51C537*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass20_0_t9A7922ECAC6121C2C62BF923F1334E337D51C537_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass20_0__ctor_mF43AD6D592B49CA9F9FCF85EA3AEDAAAD7252731(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass20_0_t9A7922ECAC6121C2C62BF923F1334E337D51C537* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass20_0_t9A7922ECAC6121C2C62BF923F1334E337D51C537* L_2 = V_0;
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		L_2->___message_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___message_1), (void*)L_3);
		// m_Banner.UnityLifecycleManager.Post(() =>
		// {
		//     m_BannerLoadOptions?.errorCallback(message);
		// });
		RuntimeObject* L_4 = __this->___m_Banner_4;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.Advertisements.Utilities.IUnityLifecycleManager UnityEngine.Advertisements.IBanner::get_UnityLifecycleManager() */, IBanner_t235537E80BB5F23F53EB3341017C99B4EE0E1862_il2cpp_TypeInfo_var, L_4);
		U3CU3Ec__DisplayClass20_0_t9A7922ECAC6121C2C62BF923F1334E337D51C537* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass20_0_U3ConUnityBannerErrorU3Eb__0_m0DD98663AF155A5809120293E2B451CF67DF47DC_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void UnityEngine.Advertisements.Utilities.IUnityLifecycleManager::Post(System.Action) */, IUnityLifecycleManager_tC8E8AE8638D56592EF1167492A98367486A9757B_il2cpp_TypeInfo_var, L_5, L_7);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::<Hide>b__13_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_U3CHideU3Eb__13_0_mA234986168275EA7EA56F38B9EBD4CE4F0533D22 (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D4E110BD86EB84CCC35696802475A8556299334);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral684D1C9AD6F5D83264667D7FCC62B008CFD8E5FD);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B2_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* G_B1_0 = NULL;
	{
		// var parent = m_BannerBundle.bannerView.Call<AndroidJavaObject>("getParent");
		BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* L_0 = __this->___m_BannerBundle_7;
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = BannerBundle_get_bannerView_m981F7CB1C3C1CA95AF72D95108A42C797AEAF9D3_inline(L_0, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_1, _stringLiteral1D4E110BD86EB84CCC35696802475A8556299334, L_2, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// parent?.Call("removeView", m_BannerBundle.bannerView);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = L_3;
		G_B1_0 = L_4;
		if (L_4)
		{
			G_B2_0 = L_4;
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* L_7 = __this->___m_BannerBundle_7;
		NullCheck(L_7);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = BannerBundle_get_bannerView_m981F7CB1C3C1CA95AF72D95108A42C797AEAF9D3_inline(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		NullCheck(G_B2_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(G_B2_0, _stringLiteral684D1C9AD6F5D83264667D7FCC62B008CFD8E5FD, L_6, NULL);
		// }));
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::<Hide>b__13_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_U3CHideU3Eb__13_1_m1B3C913F757872839F338243CC43EDF2CE3FE9AC (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, const RuntimeMethod* method) 
{
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B2_0 = NULL;
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B1_0 = NULL;
	{
		// m_BannerShowOptions?.hideCallback();
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_0 = __this->___m_BannerShowOptions_9;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_2;
		L_2 = BannerOptions_get_hideCallback_mBED58861170D9007A1F6C4883ED906C151AD852A_inline(G_B2_0, NULL);
		NullCheck(L_2);
		BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_inline(L_2, NULL);
		// });
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::<onUnityBannerLoaded>b__17_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_1_m915883D9CAE36E2821426AC509039ACE1C84CAEC (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, const RuntimeMethod* method) 
{
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B2_0 = NULL;
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B1_0 = NULL;
	{
		// m_BannerShowOptions?.showCallback();
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_0 = __this->___m_BannerShowOptions_9;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_2;
		L_2 = BannerOptions_get_showCallback_m0367F7A8058FA64DD2C114DC2423481F33FF531B_inline(G_B2_0, NULL);
		NullCheck(L_2);
		BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_inline(L_2, NULL);
		// });
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::<onUnityBannerLoaded>b__17_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_U3ConUnityBannerLoadedU3Eb__17_0_mD37D62D5FB74CA7BA2259162802D8DC0C5649988 (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, const RuntimeMethod* method) 
{
	BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* G_B2_0 = NULL;
	BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* G_B1_0 = NULL;
	{
		// m_BannerLoadOptions?.loadCallback();
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_0 = __this->___m_BannerLoadOptions_8;
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* L_2;
		L_2 = BannerLoadOptions_get_loadCallback_mECEEB150276C0E8C1744CB508B6AFF72A0796077_inline(G_B2_0, NULL);
		NullCheck(L_2);
		LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_inline(L_2, NULL);
		// });
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner::<onUnityBannerClick>b__19_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidBanner_U3ConUnityBannerClickU3Eb__19_0_m3E31000AD8114381FF258F7B217EB1FBB3D35CD6 (AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* __this, const RuntimeMethod* method) 
{
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B2_0 = NULL;
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B1_0 = NULL;
	{
		// m_BannerShowOptions?.clickCallback();
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_0 = __this->___m_BannerShowOptions_9;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_2;
		L_2 = BannerOptions_get_clickCallback_m7E35A638D6D69CE003CEB93C25DB33BA194F3AF0_inline(G_B2_0, NULL);
		NullCheck(L_2);
		BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_inline(L_2, NULL);
		// });
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
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mB4749FC4347BDA5F4935149B71E84CA043C5B7EE (U3CU3Ec__DisplayClass11_0_t44A82BA283D57E50089F2A70FCF6D8C3CA18B00D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass11_0::<Load>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CLoadU3Eb__0_m7EF8C1F9F5714B3B9D1B80347365F02DB275BAE2 (U3CU3Ec__DisplayClass11_0_t44A82BA283D57E50089F2A70FCF6D8C3CA18B00D* __this, const RuntimeMethod* method) 
{
	BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* G_B2_0 = NULL;
	BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* G_B1_0 = NULL;
	{
		// loadOptions?.loadCallback();
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_0 = __this->___loadOptions_0;
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* L_2;
		L_2 = BannerLoadOptions_get_loadCallback_mECEEB150276C0E8C1744CB508B6AFF72A0796077_inline(G_B2_0, NULL);
		NullCheck(L_2);
		LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_inline(L_2, NULL);
		// });
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
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0__ctor_m7BB527763F003875E638B7256DD3BD3788435943 (U3CU3Ec__DisplayClass12_0_tCEC27277BA42C7D3F0C664421D1ABF00E4DEBBDD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0::<Show>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__0_mE626FA2BC0E938A69C142BBFA43DB8861832567A (U3CU3Ec__DisplayClass12_0_tCEC27277BA42C7D3F0C664421D1ABF00E4DEBBDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D4E110BD86EB84CCC35696802475A8556299334);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E6D79FB7A672657560825D4EBF2050737CCAF6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8776C6B9757743C85B42D4041703FD2BFBA9F722);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// var parent = m_BannerBundle.bannerView.Call<AndroidJavaObject>("getParent");
		AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* L_1 = L_0->___m_BannerBundle_7;
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = BannerBundle_get_bannerView_m981F7CB1C3C1CA95AF72D95108A42C797AEAF9D3_inline(L_1, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_2, _stringLiteral1D4E110BD86EB84CCC35696802475A8556299334, L_3, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// if (parent == null)
		if (L_4)
		{
			goto IL_0073;
		}
	}
	{
		// var layoutParams = m_BannerBundle.bannerView.Call<AndroidJavaObject>("getLayoutParams");
		AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* L_5 = __this->___U3CU3E4__this_0;
		NullCheck(L_5);
		BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* L_6 = L_5->___m_BannerBundle_7;
		NullCheck(L_6);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = BannerBundle_get_bannerView_m981F7CB1C3C1CA95AF72D95108A42C797AEAF9D3_inline(L_6, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
		L_8 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_7);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9;
		L_9 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_7, _stringLiteral8776C6B9757743C85B42D4041703FD2BFBA9F722, L_8, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_9;
		// m_CurrentActivity.Call("addContentView", m_BannerBundle.bannerView, layoutParams);
		AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* L_10 = __this->___U3CU3E4__this_0;
		NullCheck(L_10);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = L_10->___m_CurrentActivity_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* L_14 = __this->___U3CU3E4__this_0;
		NullCheck(L_14);
		BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* L_15 = L_14->___m_BannerBundle_7;
		NullCheck(L_15);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16;
		L_16 = BannerBundle_get_bannerView_m981F7CB1C3C1CA95AF72D95108A42C797AEAF9D3_inline(L_15, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18 = V_0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_18);
		NullCheck(L_11);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_11, _stringLiteral3E6D79FB7A672657560825D4EBF2050737CCAF6E, L_17, NULL);
	}

IL_0073:
	{
		// }));
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass12_0::<Show>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass12_0_U3CShowU3Eb__1_m6C46CDF641CEE4172AEDF5695048ACC3F890364F (U3CU3Ec__DisplayClass12_0_tCEC27277BA42C7D3F0C664421D1ABF00E4DEBBDD* __this, const RuntimeMethod* method) 
{
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B2_0 = NULL;
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* G_B1_0 = NULL;
	{
		// showOptions?.showCallback();
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_0 = __this->___showOptions_1;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_2;
		L_2 = BannerOptions_get_showCallback_m0367F7A8058FA64DD2C114DC2423481F33FF531B_inline(G_B2_0, NULL);
		NullCheck(L_2);
		BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_inline(L_2, NULL);
		// });
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
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_mF43AD6D592B49CA9F9FCF85EA3AEDAAAD7252731 (U3CU3Ec__DisplayClass20_0_t9A7922ECAC6121C2C62BF923F1334E337D51C537* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidBanner/<>c__DisplayClass20_0::<onUnityBannerError>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0_U3ConUnityBannerErrorU3Eb__0_m0DD98663AF155A5809120293E2B451CF67DF47DC (U3CU3Ec__DisplayClass20_0_t9A7922ECAC6121C2C62BF923F1334E337D51C537* __this, const RuntimeMethod* method) 
{
	BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* G_B2_0 = NULL;
	BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* G_B1_0 = NULL;
	{
		// m_BannerLoadOptions?.errorCallback(message);
		AndroidBanner_t7FE429C096FA9FD1F5B449921710B998AB8ACC68* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_1 = L_0->___m_BannerLoadOptions_8;
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		NullCheck(G_B2_0);
		ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* L_3;
		L_3 = BannerLoadOptions_get_errorCallback_mB9B595EB059D86CA406DCC7F7D4B9EF59A8AB589_inline(G_B2_0, NULL);
		String_t* L_4 = __this->___message_1;
		NullCheck(L_3);
		ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_inline(L_3, L_4, NULL);
		// });
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
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::SetupPlatform(UnityEngine.Advertisements.Platform.IPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform_SetupPlatform_m39E6D013E149BED8ABB45D6B35D568B37E508466 (AndroidPlatform_tE2AD5659D9387D7B97F66B4DD4ED3E6B9D1844B2* __this, RuntimeObject* ___platform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CA693FCFD526B83AF173A1829A1703B75FEFC0E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Platform = platform;
		RuntimeObject* L_0 = ___platform0;
		__this->___m_Platform_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Platform_0), (void*)L_0);
		// m_CurrentActivity = GetCurrentAndroidActivity();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidPlatform_GetCurrentAndroidActivity_mA7B33D7FD6B36D5B6C2CFED48ABF17104A4F78E0(NULL);
		__this->___m_CurrentActivity_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentActivity_1), (void*)L_1);
		// m_UnityAds = new AndroidJavaClass(ADS_BASE_CLASS);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral1CA693FCFD526B83AF173A1829A1703B75FEFC0E, NULL);
		__this->___m_UnityAds_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UnityAds_2), (void*)L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform_Initialize_m72FBCA1EDCF1542425028D983DE6ABE95FD85585 (AndroidPlatform_tE2AD5659D9387D7B97F66B4DD4ED3E6B9D1844B2* __this, String_t* ___gameId0, bool ___testMode1, RuntimeObject* ___initializationListener2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidInitializationListener_t81DC3AD5B67C4903C65DE29B13100B53A1185804_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B2_0 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B1_0 = NULL;
	{
		// m_UnityAds?.CallStatic("initialize", m_CurrentActivity, gameId, testMode, new AndroidInitializationListener(m_Platform, initializationListener));
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->___m_UnityAds_2;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = __this->___m_CurrentActivity_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___gameId0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		bool L_8 = ___testMode1;
		bool L_9 = L_8;
		RuntimeObject* L_10 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		RuntimeObject* L_12 = __this->___m_Platform_0;
		RuntimeObject* L_13 = ___initializationListener2;
		AndroidInitializationListener_t81DC3AD5B67C4903C65DE29B13100B53A1185804* L_14 = (AndroidInitializationListener_t81DC3AD5B67C4903C65DE29B13100B53A1185804*)il2cpp_codegen_object_new(AndroidInitializationListener_t81DC3AD5B67C4903C65DE29B13100B53A1185804_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		AndroidInitializationListener__ctor_m63EBC01C4F334E95A38BBEF36675D3152AF0E650(L_14, L_12, L_13, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_14);
		NullCheck(G_B2_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(G_B2_0, _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1, L_11, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform_Load_m44B5EF9945174C5681BEAD595361D433EDADE3AF (AndroidPlatform_tE2AD5659D9387D7B97F66B4DD4ED3E6B9D1844B2* __this, String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidLoadListener_t8DDD2563120B2652BB57BB9B5692A7D3400F7BF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B2_0 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B1_0 = NULL;
	{
		// m_UnityAds?.CallStatic("load", placementId, new AndroidLoadListener(m_Platform, loadListener));
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->___m_UnityAds_2;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___placementId0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		RuntimeObject* L_6 = __this->___m_Platform_0;
		RuntimeObject* L_7 = ___loadListener1;
		AndroidLoadListener_t8DDD2563120B2652BB57BB9B5692A7D3400F7BF0* L_8 = (AndroidLoadListener_t8DDD2563120B2652BB57BB9B5692A7D3400F7BF0*)il2cpp_codegen_object_new(AndroidLoadListener_t8DDD2563120B2652BB57BB9B5692A7D3400F7BF0_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		AndroidLoadListener__ctor_mF8534E76B4660C00697F13A98652C16CB00B3D5D(L_8, L_6, L_7, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		NullCheck(G_B2_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(G_B2_0, _stringLiteral6D0FB6A57B014AF249173AD2C602950C4A35AF80, L_5, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform_Show_m21C060B4C4A142EC3F017E4F546C8D623E467BF4 (AndroidPlatform_tE2AD5659D9387D7B97F66B4DD4ED3E6B9D1844B2* __this, String_t* ___placementId0, RuntimeObject* ___showListener1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B2_0 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B1_0 = NULL;
	{
		// m_UnityAds?.CallStatic("show", m_CurrentActivity, placementId, new AndroidShowListener(m_Platform, showListener));
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->___m_UnityAds_2;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = __this->___m_CurrentActivity_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = ___placementId0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		RuntimeObject* L_8 = __this->___m_Platform_0;
		RuntimeObject* L_9 = ___showListener1;
		AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0* L_10 = (AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0*)il2cpp_codegen_object_new(AndroidShowListener_t90E85176240BFE0A328F3FBAD363F1E7B74183B0_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		AndroidShowListener__ctor_mDA962C9A0AE9098F61C0FB811C4B5F3475F69C3C(L_10, L_8, L_9, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		NullCheck(G_B2_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(G_B2_0, _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192, L_7, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::SetMetaData(UnityEngine.Advertisements.MetaData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform_SetMetaData_m188743603BA4C26155853CC315E917148711C15C (AndroidPlatform_tE2AD5659D9387D7B97F66B4DD4ED3E6B9D1844B2* __this, MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* ___metaData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t1F32F711C91AEBCFA4770668CA067447D2A4F665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t913F242211877D391217C9D75152235266FDAF10_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01FB309691201B1A5D72C0BC0668E49439FA11C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46308C2360498265204DA7350FCD77C6D5A57F9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84BD1FA2B6D34A46940BEA516DAA6B3107B0C9DD);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var metaDataObject = new AndroidJavaObject(ADS_METADATA_CLASS, m_CurrentActivity);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = __this->___m_CurrentActivity_1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_3, _stringLiteral01FB309691201B1A5D72C0BC0668E49439FA11C5, L_1, NULL);
		V_0 = L_3;
		// metaDataObject.Call("setCategory", metaData.category);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_7 = ___metaData0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = MetaData_get_category_mE48DB3D38C741ECA2787261D7FDA8AF99D78680A_inline(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		NullCheck(L_4);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_4, _stringLiteral84BD1FA2B6D34A46940BEA516DAA6B3107B0C9DD, L_6, NULL);
		// foreach (var entry in metaData.Values())
		MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* L_9 = ___metaData0;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = MetaData_Values_mC60E8FEDBF17C5ACA56B847F3ACFD75208F9A5DD_inline(L_9, NULL);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::GetEnumerator() */, IEnumerable_1_t1F32F711C91AEBCFA4770668CA067447D2A4F665_il2cpp_TypeInfo_var, L_10);
		V_1 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0079:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_12 = V_1;
					if (!L_12)
					{
						goto IL_0082;
					}
				}
				{
					RuntimeObject* L_13 = V_1;
					NullCheck(L_13);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
				}

IL_0082:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006f_1;
			}

IL_0042_1:
			{
				// foreach (var entry in metaData.Values())
				RuntimeObject* L_14 = V_1;
				NullCheck(L_14);
				KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_15;
				L_15 = InterfaceFuncInvoker0< KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Current() */, IEnumerator_1_t913F242211877D391217C9D75152235266FDAF10_il2cpp_TypeInfo_var, L_14);
				V_2 = L_15;
				// metaDataObject.Call<bool>("set", entry.Key, entry.Value);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = V_0;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
				String_t* L_19;
				L_19 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_2), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				NullCheck(L_18);
				ArrayElementTypeCheck (L_18, L_19);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_19);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_18;
				RuntimeObject* L_21;
				L_21 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_2), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				NullCheck(L_20);
				ArrayElementTypeCheck (L_20, L_21);
				(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_21);
				NullCheck(L_16);
				bool L_22;
				L_22 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_16, _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA, L_20, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
			}

IL_006f_1:
			{
				// foreach (var entry in metaData.Values())
				RuntimeObject* L_23 = V_1;
				NullCheck(L_23);
				bool L_24;
				L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_23);
				if (L_24)
				{
					goto IL_0042_1;
				}
			}
			{
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
		// metaDataObject.Call("commit");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26;
		L_26 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_25);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_25, _stringLiteral46308C2360498265204DA7350FCD77C6D5A57F9C, L_26, NULL);
		// }
		return;
	}
}
// System.String UnityEngine.Advertisements.Platform.Android.AndroidPlatform::GetVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidPlatform_GetVersion_m3BA0BBDBF5FAEA9684782B8F6BF5F3A7B1B1BDD8 (AndroidPlatform_tE2AD5659D9387D7B97F66B4DD4ED3E6B9D1844B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B2_0 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		// return m_UnityAds?.CallStatic<string>("getVersion") ?? "UnknownVersion";
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->___m_UnityAds_2;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_001c;
	}

IL_000d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(G_B2_0);
		String_t* L_3;
		L_3 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(G_B2_0, _stringLiteral8CAC7A1CF27146D11E92BE39054D8E4594FE9B3D, L_2, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		G_B3_0 = L_3;
	}

IL_001c:
	{
		String_t* L_4 = G_B3_0;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_0025;
		}
	}
	{
		G_B5_0 = _stringLiteral56102DF890452E944B80D5A28A4BAF287A5D9741;
	}

IL_0025:
	{
		return G_B5_0;
	}
}
// System.Boolean UnityEngine.Advertisements.Platform.Android.AndroidPlatform::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidPlatform_IsInitialized_m442E73B0DC39E3F0D718CFBD58CFE8AA60973A6B (AndroidPlatform_tE2AD5659D9387D7B97F66B4DD4ED3E6B9D1844B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D185DB91E3DF09D623D41B1D7987E6F4A5D419D);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B2_0 = NULL;
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* G_B1_0 = NULL;
	{
		// return m_UnityAds?.CallStatic<bool>("isInitialized") ?? false;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = __this->___m_UnityAds_2;
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(G_B2_0);
		bool L_3;
		L_3 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(G_B2_0, _stringLiteral1D185DB91E3DF09D623D41B1D7987E6F4A5D419D, L_2, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		return L_3;
	}
}
// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.AndroidPlatform::GetCurrentAndroidActivity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidPlatform_GetCurrentAndroidActivity_mA7B33D7FD6B36D5B6C2CFED48ABF17104A4F78E0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var unityPlayerClass = new AndroidJavaClass(UNITY_PLAYER_CLASS);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// return unityPlayerClass.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.AndroidPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidPlatform__ctor_mAD4B3465710A8E295F30F1872045D1DEF696A2EC (AndroidPlatform_tE2AD5659D9387D7B97F66B4DD4ED3E6B9D1844B2* __this, const RuntimeMethod* method) 
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
// UnityEngine.AndroidJavaObject UnityEngine.Advertisements.Platform.Android.BannerBundle::get_bannerView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* BannerBundle_get_bannerView_m981F7CB1C3C1CA95AF72D95108A42C797AEAF9D3 (BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* __this, const RuntimeMethod* method) 
{
	{
		// public AndroidJavaObject bannerView { get; }
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___U3CbannerViewU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String UnityEngine.Advertisements.Platform.Android.BannerBundle::get_bannerPlacementId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BannerBundle_get_bannerPlacementId_mA4916C42EA50108B4D553776443460B1C664C26E (BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* __this, const RuntimeMethod* method) 
{
	{
		// public string bannerPlacementId { get; }
		String_t* L_0 = __this->___U3CbannerPlacementIdU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.Advertisements.Platform.Android.BannerBundle::.ctor(System.String,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerBundle__ctor_mA358F4E6ED2021BD4D86AE8C55BD6B13C4DD3322 (BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* __this, String_t* ___bannerPlacementId0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___bannerView1, const RuntimeMethod* method) 
{
	{
		// public BannerBundle(string bannerPlacementId, AndroidJavaObject bannerView)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.bannerPlacementId = bannerPlacementId;
		String_t* L_0 = ___bannerPlacementId0;
		__this->___U3CbannerPlacementIdU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbannerPlacementIdU3Ek__BackingField_1), (void*)L_0);
		// this.bannerView = bannerView;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___bannerView1;
		__this->___U3CbannerViewU3Ek__BackingField_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CbannerViewU3Ek__BackingField_0), (void*)L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MetaData_set_category_mC0C94CD8085C0D11051DC82BBC6C897428954DF6_inline (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string category { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CcategoryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcategoryU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Platform_get_NativePlatform_mFD8A6BC4C9E4B1A10B2144E968785BE6855A15CE_inline (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) 
{
	{
		// public INativePlatform NativePlatform { get; }
		RuntimeObject* L_0 = __this->___U3CNativePlatformU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Platform_get_IsShowing_m6E94928BB3D7E2720B6CDF2C25801158586BCDD7_inline (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = __this->___U3CIsShowingU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ShowOptions_get_gamerSid_m99E60DFA556B5CE71165C06A54D7BA9039E44918_inline (ShowOptions_tDA1A59BF003D28428A54F598D159F1450A8D4ABD* __this, const RuntimeMethod* method) 
{
	{
		// public string gamerSid { get; set; }
		String_t* L_0 = __this->___U3CgamerSidU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Platform_set_IsShowing_m6FBC75C2EC6907BAC638CCAA2E339998DC05100C_inline (Platform_t5FC2F1B4EFEE1A4A020564DD87287BA3A2AC37BA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsShowingU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_grey_mBCECB7841257253597D826AB06E678DA43CC4298_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* BannerOptions_get_clickCallback_m7E35A638D6D69CE003CEB93C25DB33BA194F3AF0_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) 
{
	{
		// public BannerCallback clickCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = __this->___U3CclickCallbackU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerCallback_Invoke_m1826BD07878E285004632455BF5C2226B26C4236_inline (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* BannerBundle_get_bannerPlacementId_mA4916C42EA50108B4D553776443460B1C664C26E_inline (BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* __this, const RuntimeMethod* method) 
{
	{
		// public string bannerPlacementId { get; }
		String_t* L_0 = __this->___U3CbannerPlacementIdU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* BannerOptions_get_hideCallback_mBED58861170D9007A1F6C4883ED906C151AD852A_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) 
{
	{
		// public BannerCallback hideCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = __this->___U3ChideCallbackU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* BannerBundle_get_bannerView_m981F7CB1C3C1CA95AF72D95108A42C797AEAF9D3_inline (BannerBundle_tF00DFB69362F521DE31C1B3E8F9AE9B4583BFEC2* __this, const RuntimeMethod* method) 
{
	{
		// public AndroidJavaObject bannerView { get; }
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___U3CbannerViewU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* BannerOptions_get_showCallback_m0367F7A8058FA64DD2C114DC2423481F33FF531B_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) 
{
	{
		// public BannerCallback showCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = __this->___U3CshowCallbackU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* BannerLoadOptions_get_loadCallback_mECEEB150276C0E8C1744CB508B6AFF72A0796077_inline (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, const RuntimeMethod* method) 
{
	{
		// public LoadCallback loadCallback { get; set; }
		LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* L_0 = __this->___U3CloadCallbackU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LoadCallback_Invoke_mFEB8CEEF9C2B011B55E8B61D80B7FC98AA000420_inline (LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* BannerLoadOptions_get_errorCallback_mB9B595EB059D86CA406DCC7F7D4B9EF59A8AB589_inline (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, const RuntimeMethod* method) 
{
	{
		// public ErrorCallback errorCallback { get; set; }
		ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* L_0 = __this->___U3CerrorCallbackU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ErrorCallback_Invoke_m8D78A1ACBA0018E30AC198C4C179E74F1F5E0377_inline (ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MetaData_get_category_mE48DB3D38C741ECA2787261D7FDA8AF99D78680A_inline (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, const RuntimeMethod* method) 
{
	{
		// public string category { get; private set; }
		String_t* L_0 = __this->___U3CcategoryU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MetaData_Values_mC60E8FEDBF17C5ACA56B847F3ACFD75208F9A5DD_inline (MetaData_t020AC72D45D18EFCF4E83DC4EEF5F50EE471178D* __this, const RuntimeMethod* method) 
{
	{
		// return m_MetaData;
		RuntimeObject* L_0 = __this->___m_MetaData_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
