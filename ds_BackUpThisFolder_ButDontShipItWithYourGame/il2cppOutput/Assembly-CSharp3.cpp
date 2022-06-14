#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,AudienceNetwork.InterstitialAdContainer>
struct Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,AudienceNetwork.RewardedVideoAdContainer>
struct Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,AudienceNetwork.InterstitialAdContainer>
struct KeyCollection_t592B5FF55766B09358994D5FE9BECF2BC8BBA75E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,AudienceNetwork.RewardedVideoAdContainer>
struct KeyCollection_t3E7117EF03450E38D854AE60433148757E7DE446;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,AudienceNetwork.InterstitialAdContainer>
struct ValueCollection_t5BD20AFD5BF38C6284B3A2DE885E533E22E39451;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,AudienceNetwork.RewardedVideoAdContainer>
struct ValueCollection_t47734AAE27B92D179F3E075520AA33CB52AFFF4F;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,AudienceNetwork.InterstitialAdContainer>[]
struct EntryU5BU5D_t4CBEA08F8574FF4ED4968576DE385D3C822266BB;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,AudienceNetwork.RewardedVideoAdContainer>[]
struct EntryU5BU5D_t253D1E53BE7F688490F6A66A38DFDC5C5FECBDB7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
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
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// AudienceNetwork.AdHandler
struct AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED;
// AudienceNetwork.Utility.AdUtilityBridge
struct AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC;
// AudienceNetwork.Utility.AdUtilityBridgeAndroid
struct AdUtilityBridgeAndroid_t98A6BD7D9108733B63E45A17FECD641462E961F0;
// AudienceNetwork.AdView
struct AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848;
// AudienceNetwork.AdViewBridgeListenerProxy
struct AdViewBridgeListenerProxy_tA177FB882AB54FE5A5D0AC9C10CAE6EB6F3047CD;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// AudienceNetwork.FBAdViewBridgeCallback
struct FBAdViewBridgeCallback_t775D067EEDC1A1C97DD807960E2534EECBECDADE;
// AudienceNetwork.FBAdViewBridgeErrorCallback
struct FBAdViewBridgeErrorCallback_tE7F0E7D7F3E0216B2D9313B13817E7740FF5B9F6;
// AudienceNetwork.FBInterstitialAdBridgeCallback
struct FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27;
// AudienceNetwork.FBInterstitialAdBridgeErrorCallback
struct FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F;
// AudienceNetwork.FBRewardedVideoAdBridgeCallback
struct FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041;
// AudienceNetwork.FBRewardedVideoAdBridgeErrorCallback
struct FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// AudienceNetwork.Utility.IAdUtilityBridge
struct IAdUtilityBridge_t6126E68A22E23982C7FE766A9505C6A0C8F808DB;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// AudienceNetwork.IInterstitialAdBridge
struct IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231;
// AudienceNetwork.IRewardedVideoAdBridge
struct IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE;
// AudienceNetwork.InterstitialAd
struct InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25;
// AudienceNetwork.InterstitialAdBridge
struct InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72;
// AudienceNetwork.InterstitialAdBridgeAndroid
struct InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583;
// AudienceNetwork.InterstitialAdBridgeListenerProxy
struct InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4;
// AudienceNetwork.InterstitialAdContainer
struct InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// AudienceNetwork.RewardData
struct RewardData_t9B7758D0D6207321E921CC95418332E9FE162812;
// AudienceNetwork.RewardedVideoAd
struct RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4;
// AudienceNetwork.RewardedVideoAdBridge
struct RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50;
// AudienceNetwork.RewardedVideoAdBridgeAndroid
struct RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB;
// AudienceNetwork.RewardedVideoAdBridgeListenerProxy
struct RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428;
// AudienceNetwork.RewardedVideoAdContainer
struct RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// AudienceNetwork.AdViewBridgeListenerProxy/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t67987DC34B480B240D19C9B66B5DDF133081B2D9;
// AudienceNetwork.InterstitialAdBridgeListenerProxy/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t4A5A3A90AF7FC1ADE6CA4D4CF236B96D4C14440E;
// AudienceNetwork.RewardedVideoAdBridgeAndroid/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t003106924C3B2AE8949D45E2C94A770651C8890D;
// AudienceNetwork.RewardedVideoAdBridgeListenerProxy/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tBFED5A61839F24F45F31C4A172516F3B51E685CB;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdUtilityBridgeAndroid_t98A6BD7D9108733B63E45A17FECD641462E961F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudienceNetworkAds_t674E34193798D6E1B4A6BD66AE111440EA011E90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAdUtilityBridge_t6126E68A22E23982C7FE766A9505C6A0C8F808DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t003106924C3B2AE8949D45E2C94A770651C8890D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t4A5A3A90AF7FC1ADE6CA4D4CF236B96D4C14440E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t67987DC34B480B240D19C9B66B5DDF133081B2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tBFED5A61839F24F45F31C4A172516F3B51E685CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1039DBC1D68055D20E181C3DC18F8139F505CE8D;
IL2CPP_EXTERN_C String_t* _stringLiteral15C44A56E1152A4E5ED66AF53F10A55DF5F58965;
IL2CPP_EXTERN_C String_t* _stringLiteral1D185DB91E3DF09D623D41B1D7987E6F4A5D419D;
IL2CPP_EXTERN_C String_t* _stringLiteral1FFECE80FF999B634D2394E613D903960BA02496;
IL2CPP_EXTERN_C String_t* _stringLiteral26B1C8371C117DF5E56AC7ED4D98F902D496FA8C;
IL2CPP_EXTERN_C String_t* _stringLiteral2ACF8BFF4E2718CBCD2657118C379EFBBDD681D2;
IL2CPP_EXTERN_C String_t* _stringLiteral2EAABAA21F597376CA154A9CB486231FAA379F3A;
IL2CPP_EXTERN_C String_t* _stringLiteral354C422C03982C21E9EA651D4447889F38C34E83;
IL2CPP_EXTERN_C String_t* _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9;
IL2CPP_EXTERN_C String_t* _stringLiteral413A6C17FD7A7B815786D74A854EDAC1083FFCAC;
IL2CPP_EXTERN_C String_t* _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192;
IL2CPP_EXTERN_C String_t* _stringLiteral42C8D8A4F88528F5E036DABA2C381FD96B56375F;
IL2CPP_EXTERN_C String_t* _stringLiteral449E90EA94A719309FD246952C6B4621E65F159A;
IL2CPP_EXTERN_C String_t* _stringLiteral49C83A6CB9E3D16269215815C5C23B6418F0F260;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral5D5AFDED92489AAB1C85E91C1BC00C93358A7F2C;
IL2CPP_EXTERN_C String_t* _stringLiteral5F1ED1ED774E29346268C897B0377F45BB1F2BF8;
IL2CPP_EXTERN_C String_t* _stringLiteral819D6596E55D94992EEDBDC81323735156EF2B7E;
IL2CPP_EXTERN_C String_t* _stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF;
IL2CPP_EXTERN_C String_t* _stringLiteral922971FBDA8AF9A064D1324CC6AB61472253CF2F;
IL2CPP_EXTERN_C String_t* _stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728;
IL2CPP_EXTERN_C String_t* _stringLiteralBAF9CA79CDB629FB50D6860547D6DEE505A9C9A8;
IL2CPP_EXTERN_C String_t* _stringLiteralC4DE7C8CA0E79E4E80296DAB1929B2376FCD3259;
IL2CPP_EXTERN_C String_t* _stringLiteralCFA9E316B423D552D5B0786D7690E94D1021AA40;
IL2CPP_EXTERN_C String_t* _stringLiteralD13CA012832E01C928BC8F3641DC11D2828465D7;
IL2CPP_EXTERN_C String_t* _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1;
IL2CPP_EXTERN_C String_t* _stringLiteralD3E7ED5F1A76ECE809E704F33A94EB0D9FDB77B1;
IL2CPP_EXTERN_C String_t* _stringLiteralDC501FD4CDD92049A95C44A8751A74C4CEE619C6;
IL2CPP_EXTERN_C String_t* _stringLiteralE5439D7958040B3739CE6947A63F9797324E63F2;
IL2CPP_EXTERN_C String_t* _stringLiteralEE81CC33A1577C34A21484F10A0F01D34F228BCB;
IL2CPP_EXTERN_C String_t* _stringLiteralF410B86E4ED2CE360EF6CD95BB41192156548F9D;
IL2CPP_EXTERN_C String_t* _stringLiteralF9D176F78693C306ACF44D7AD5AF126AB19081F1;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AdUtilityBridgeAndroid_GetPropertyOfDisplayMetrics_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3116EB7A8CD3D23C9A4AF025DBE2E7200DF6ECD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdViewBridgeListenerProxy_U3ConAdClickedU3Eb__5_0_m1FE6C08A128953255E5D837BD36E48718BAB0C40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AdViewBridgeListenerProxy_U3ConLoggingImpressionU3Eb__6_0_mFEA2510D1C0596F697A36A49664843F234A4B40D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m767C3A9CAF9D1CF95A5F3C4AA51EB437208AA622_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA3AD2E15FEFCF17797E22FAE0EE8677A198B6C96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m7B7699CB893C38F6D6B21BEFA2EB2486B0E35629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mD670DCE26CB32ED6DFFFE8FB8A818A5BC88462CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m4808DDD51B6C1F946B318D6EB02FD44CEB0333E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m55A7A4C3CDBA0C18976E19245173B4014C49D702_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3B615F2A092130DAD7292FA7BD72068CD4D3731E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m813C43A5BEFE83061F292C5122DE58A186FB9347_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED_m9343CF2029C32EBEE77A1BDEB534C80D561D343A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAdBridgeListenerProxy_U3ConAdClickedU3Eb__5_0_m581ABB927E5DEB5F0A4D7C4E0A1AAC9D525311A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAdBridgeListenerProxy_U3ConInterstitialActivityDestroyedU3Eb__9_0_m0BAF6003F12E42B6CC2089FE97DF1D551BB77009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAdBridgeListenerProxy_U3ConInterstitialDismissedU3Eb__7_0_m92362D7DFDDFA1FDAF75A331EEF152E6BCD47D51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAdBridgeListenerProxy_U3ConLoggingImpressionU3Eb__8_0_mAE0853000EAF6AFC85807386F86E689EE11D03FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CLoadAdFromDataU3Eb__44_0_m127FF710F7CA3739591A73D693B2DB3516D7F0CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedVideoAdBridgeListenerProxy_U3ConAdClickedU3Eb__5_0_mB842815494CA7A853DD880303F59F3DF60B894CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedVideoAdBridgeListenerProxy_U3ConLoggingImpressionU3Eb__11_0_m052C94762C225F204FD5037217F73B07DBFAAEDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedVideoAdBridgeListenerProxy_U3ConRewardServerFailedU3Eb__10_0_mF277208F423DD348B08D90EC7BD0003CC2E22008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedVideoAdBridgeListenerProxy_U3ConRewardServerSuccessU3Eb__9_0_m70128105A8391D3025BDEAE469442A246F5B48AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedVideoAdBridgeListenerProxy_U3ConRewardedVideoActivityDestroyedU3Eb__12_0_m17EA0E3457A2CED3D832554E28C3ABCDAEDD1884_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedVideoAdBridgeListenerProxy_U3ConRewardedVideoClosedU3Eb__7_0_m5933FF023CB75079BA91B778DF07CFBAB4A1BF8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedVideoAdBridgeListenerProxy_U3ConRewardedVideoCompletedU3Eb__8_0_mB339FE1BDD19A08DA4AA0310A37855FD5F2DA26E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedVideoAdBridgeListenerProxy_U3ConRewardedVideoDisplayedU3Eb__6_0_mD12182F2C5859E5F60D8570075BFA97CC89CE39A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedVideoAd_U3CLoadAdFromDataU3Eb__61_0_m113C89C79D2E074C458EF1789C2A6D0509C1A566_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CShowU3Eb__0_m844C438B2600B7FCBB3E982272DE01502B9E6124_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3ConErrorU3Eb__0_m510A4AD2002C4E8DB1DE203EF84FC86F111AE154_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3ConErrorU3Eb__0_m8F38B16208E0801A4DB6D2B96BB0813D291C02ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3ConErrorU3Eb__0_mEC73CBD766584959C3C64646C811F7A0DFA36DF3_RuntimeMethod_var;
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

// System.Collections.Generic.Dictionary`2<System.Int32,AudienceNetwork.InterstitialAdContainer>
struct Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4CBEA08F8574FF4ED4968576DE385D3C822266BB* ____entries_1;
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
	KeyCollection_t592B5FF55766B09358994D5FE9BECF2BC8BBA75E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5BD20AFD5BF38C6284B3A2DE885E533E22E39451* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,AudienceNetwork.RewardedVideoAdContainer>
struct Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t253D1E53BE7F688490F6A66A38DFDC5C5FECBDB7* ____entries_1;
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
	KeyCollection_t3E7117EF03450E38D854AE60433148757E7DE446* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t47734AAE27B92D179F3E075520AA33CB52AFFF4F* ____values_8;
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

// AudienceNetwork.Utility.AdUtility
struct AdUtility_t978F27EB8A77117DC6993B519808ADB079A12277  : public RuntimeObject
{
};

// AudienceNetwork.Utility.AdUtilityBridge
struct AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC  : public RuntimeObject
{
};

struct AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_StaticFields
{
	// AudienceNetwork.Utility.IAdUtilityBridge AudienceNetwork.Utility.AdUtilityBridge::Instance
	RuntimeObject* ___Instance_0;
};

// AudienceNetwork.AdView
struct AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848  : public RuntimeObject
{
	// System.Int32 AudienceNetwork.AdView::uniqueId
	int32_t ___uniqueId_0;
	// System.Boolean AudienceNetwork.AdView::isLoaded
	bool ___isLoaded_1;
	// AudienceNetwork.AdSize AudienceNetwork.AdView::size
	int32_t ___size_2;
	// AudienceNetwork.AdHandler AudienceNetwork.AdView::handler
	AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED* ___handler_3;
	// System.String AudienceNetwork.AdView::<PlacementId>k__BackingField
	String_t* ___U3CPlacementIdU3Ek__BackingField_4;
	// AudienceNetwork.FBAdViewBridgeCallback AudienceNetwork.AdView::adViewDidLoad
	FBAdViewBridgeCallback_t775D067EEDC1A1C97DD807960E2534EECBECDADE* ___adViewDidLoad_5;
	// AudienceNetwork.FBAdViewBridgeCallback AudienceNetwork.AdView::adViewWillLogImpression
	FBAdViewBridgeCallback_t775D067EEDC1A1C97DD807960E2534EECBECDADE* ___adViewWillLogImpression_6;
	// AudienceNetwork.FBAdViewBridgeErrorCallback AudienceNetwork.AdView::adViewDidFailWithError
	FBAdViewBridgeErrorCallback_tE7F0E7D7F3E0216B2D9313B13817E7740FF5B9F6* ___adViewDidFailWithError_7;
	// AudienceNetwork.FBAdViewBridgeCallback AudienceNetwork.AdView::adViewDidClick
	FBAdViewBridgeCallback_t775D067EEDC1A1C97DD807960E2534EECBECDADE* ___adViewDidClick_8;
	// AudienceNetwork.FBAdViewBridgeCallback AudienceNetwork.AdView::adViewDidFinishClick
	FBAdViewBridgeCallback_t775D067EEDC1A1C97DD807960E2534EECBECDADE* ___adViewDidFinishClick_9;
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
struct Il2CppArrayBounds;

// AudienceNetwork.AudienceNetworkAds
struct AudienceNetworkAds_t674E34193798D6E1B4A6BD66AE111440EA011E90  : public RuntimeObject
{
};

struct AudienceNetworkAds_t674E34193798D6E1B4A6BD66AE111440EA011E90_StaticFields
{
	// System.Boolean AudienceNetwork.AudienceNetworkAds::isInitialized
	bool ___isInitialized_0;
};

// AudienceNetwork.InterstitialAd
struct InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25  : public RuntimeObject
{
	// System.Int32 AudienceNetwork.InterstitialAd::uniqueId
	int32_t ___uniqueId_0;
	// System.Boolean AudienceNetwork.InterstitialAd::isLoaded
	bool ___isLoaded_1;
	// AudienceNetwork.AdHandler AudienceNetwork.InterstitialAd::handler
	AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED* ___handler_2;
	// System.String AudienceNetwork.InterstitialAd::<PlacementId>k__BackingField
	String_t* ___U3CPlacementIdU3Ek__BackingField_3;
	// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAd::interstitialAdDidLoad
	FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___interstitialAdDidLoad_4;
	// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAd::interstitialAdWillLogImpression
	FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___interstitialAdWillLogImpression_5;
	// AudienceNetwork.FBInterstitialAdBridgeErrorCallback AudienceNetwork.InterstitialAd::interstitialAdDidFailWithError
	FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* ___interstitialAdDidFailWithError_6;
	// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAd::interstitialAdDidClick
	FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___interstitialAdDidClick_7;
	// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAd::interstitialAdWillClose
	FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___interstitialAdWillClose_8;
	// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAd::interstitialAdDidClose
	FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___interstitialAdDidClose_9;
	// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAd::interstitialAdActivityDestroyed
	FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___interstitialAdActivityDestroyed_10;
};

// AudienceNetwork.InterstitialAdBridge
struct InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72  : public RuntimeObject
{
};

struct InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields
{
	// AudienceNetwork.IInterstitialAdBridge AudienceNetwork.InterstitialAdBridge::Instance
	RuntimeObject* ___Instance_0;
};

// AudienceNetwork.InterstitialAdContainer
struct InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB  : public RuntimeObject
{
	// AudienceNetwork.InterstitialAd AudienceNetwork.InterstitialAdContainer::<interstitialAd>k__BackingField
	InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* ___U3CinterstitialAdU3Ek__BackingField_0;
	// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAdContainer::<onLoad>k__BackingField
	FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___U3ConLoadU3Ek__BackingField_1;
	// UnityEngine.AndroidJavaProxy AudienceNetwork.InterstitialAdContainer::listenerProxy
	AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* ___listenerProxy_2;
	// UnityEngine.AndroidJavaObject AudienceNetwork.InterstitialAdContainer::bridgedInterstitialAd
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___bridgedInterstitialAd_3;
};

// AudienceNetwork.RewardData
struct RewardData_t9B7758D0D6207321E921CC95418332E9FE162812  : public RuntimeObject
{
	// System.String AudienceNetwork.RewardData::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_0;
	// System.String AudienceNetwork.RewardData::<Currency>k__BackingField
	String_t* ___U3CCurrencyU3Ek__BackingField_1;
};

// AudienceNetwork.RewardedVideoAd
struct RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4  : public RuntimeObject
{
	// System.Int32 AudienceNetwork.RewardedVideoAd::uniqueId
	int32_t ___uniqueId_0;
	// System.Boolean AudienceNetwork.RewardedVideoAd::isLoaded
	bool ___isLoaded_1;
	// AudienceNetwork.AdHandler AudienceNetwork.RewardedVideoAd::handler
	AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED* ___handler_2;
	// System.String AudienceNetwork.RewardedVideoAd::<PlacementId>k__BackingField
	String_t* ___U3CPlacementIdU3Ek__BackingField_3;
	// AudienceNetwork.RewardData AudienceNetwork.RewardedVideoAd::<RewardData>k__BackingField
	RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* ___U3CRewardDataU3Ek__BackingField_4;
	// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::rewardedVideoAdDidLoad
	FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___rewardedVideoAdDidLoad_5;
	// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::rewardedVideoAdWillLogImpression
	FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___rewardedVideoAdWillLogImpression_6;
	// AudienceNetwork.FBRewardedVideoAdBridgeErrorCallback AudienceNetwork.RewardedVideoAd::rewardedVideoAdDidFailWithError
	FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* ___rewardedVideoAdDidFailWithError_7;
	// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::rewardedVideoAdDidClick
	FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___rewardedVideoAdDidClick_8;
	// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::rewardedVideoAdWillClose
	FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___rewardedVideoAdWillClose_9;
	// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::rewardedVideoAdDidClose
	FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___rewardedVideoAdDidClose_10;
	// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::rewardedVideoAdComplete
	FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___rewardedVideoAdComplete_11;
	// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::rewardedVideoAdDidSucceed
	FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___rewardedVideoAdDidSucceed_12;
	// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::rewardedVideoAdDidFail
	FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___rewardedVideoAdDidFail_13;
	// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::rewardedVideoAdActivityDestroyed
	FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___rewardedVideoAdActivityDestroyed_14;
};

// AudienceNetwork.RewardedVideoAdBridge
struct RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50  : public RuntimeObject
{
};

struct RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields
{
	// AudienceNetwork.IRewardedVideoAdBridge AudienceNetwork.RewardedVideoAdBridge::Instance
	RuntimeObject* ___Instance_0;
};

// AudienceNetwork.RewardedVideoAdContainer
struct RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09  : public RuntimeObject
{
	// AudienceNetwork.RewardedVideoAd AudienceNetwork.RewardedVideoAdContainer::<rewardedVideoAd>k__BackingField
	RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* ___U3CrewardedVideoAdU3Ek__BackingField_0;
	// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAdContainer::<onLoad>k__BackingField
	FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___U3ConLoadU3Ek__BackingField_1;
	// UnityEngine.AndroidJavaProxy AudienceNetwork.RewardedVideoAdContainer::listenerProxy
	AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* ___listenerProxy_2;
	// UnityEngine.AndroidJavaObject AudienceNetwork.RewardedVideoAdContainer::bridgedRewardedVideoAd
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___bridgedRewardedVideoAd_3;
	// UnityEngine.AndroidJavaObject AudienceNetwork.RewardedVideoAdContainer::rewardData
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___rewardData_4;
};

// AudienceNetwork.SdkVersion
struct SdkVersion_tECB02C6A1B4994D60A51A1C201724E9510749003  : public RuntimeObject
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

// AudienceNetwork.AdViewBridgeListenerProxy/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t67987DC34B480B240D19C9B66B5DDF133081B2D9  : public RuntimeObject
{
	// AudienceNetwork.AdViewBridgeListenerProxy AudienceNetwork.AdViewBridgeListenerProxy/<>c__DisplayClass3_0::<>4__this
	AdViewBridgeListenerProxy_tA177FB882AB54FE5A5D0AC9C10CAE6EB6F3047CD* ___U3CU3E4__this_0;
	// System.String AudienceNetwork.AdViewBridgeListenerProxy/<>c__DisplayClass3_0::errorMessage
	String_t* ___errorMessage_1;
};

// AudienceNetwork.InterstitialAdBridgeListenerProxy/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t4A5A3A90AF7FC1ADE6CA4D4CF236B96D4C14440E  : public RuntimeObject
{
	// AudienceNetwork.InterstitialAdBridgeListenerProxy AudienceNetwork.InterstitialAdBridgeListenerProxy/<>c__DisplayClass3_0::<>4__this
	InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4* ___U3CU3E4__this_0;
	// System.String AudienceNetwork.InterstitialAdBridgeListenerProxy/<>c__DisplayClass3_0::errorMessage
	String_t* ___errorMessage_1;
};

// AudienceNetwork.RewardedVideoAdBridgeAndroid/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t003106924C3B2AE8949D45E2C94A770651C8890D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject AudienceNetwork.RewardedVideoAdBridgeAndroid/<>c__DisplayClass10_0::rewardedVideoAd
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___rewardedVideoAd_0;
};

// AudienceNetwork.RewardedVideoAdBridgeListenerProxy/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tBFED5A61839F24F45F31C4A172516F3B51E685CB  : public RuntimeObject
{
	// AudienceNetwork.RewardedVideoAdBridgeListenerProxy AudienceNetwork.RewardedVideoAdBridgeListenerProxy/<>c__DisplayClass3_0::<>4__this
	RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* ___U3CU3E4__this_0;
	// System.String AudienceNetwork.RewardedVideoAdBridgeListenerProxy/<>c__DisplayClass3_0::errorMessage
	String_t* ___errorMessage_1;
};

// AudienceNetwork.Utility.AdUtilityBridgeAndroid
struct AdUtilityBridgeAndroid_t98A6BD7D9108733B63E45A17FECD641462E961F0  : public AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC
{
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

// AudienceNetwork.InterstitialAdBridgeAndroid
struct InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583  : public InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72
{
};

struct InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,AudienceNetwork.InterstitialAdContainer> AudienceNetwork.InterstitialAdBridgeAndroid::interstitialAds
	Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81* ___interstitialAds_1;
	// System.Int32 AudienceNetwork.InterstitialAdBridgeAndroid::lastKey
	int32_t ___lastKey_2;
};

// AudienceNetwork.RewardedVideoAdBridgeAndroid
struct RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB  : public RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50
{
};

struct RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,AudienceNetwork.RewardedVideoAdContainer> AudienceNetwork.RewardedVideoAdBridgeAndroid::rewardedVideoAds
	Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464* ___rewardedVideoAds_1;
	// System.Int32 AudienceNetwork.RewardedVideoAdBridgeAndroid::lastKey
	int32_t ___lastKey_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct __StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2__padding[28];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::F667908983382D60FF48CDC5C694BABC2C2D660D19AE1BA3E00DE631632B9327
	__StaticArrayInitTypeSizeU3D28_t523FB00435F599517548D4C121316CFE1B43E6C2 ___F667908983382D60FF48CDC5C694BABC2C2D660D19AE1BA3E00DE631632B9327_1;
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

// AudienceNetwork.AdViewBridgeListenerProxy
struct AdViewBridgeListenerProxy_tA177FB882AB54FE5A5D0AC9C10CAE6EB6F3047CD  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// AudienceNetwork.AdView AudienceNetwork.AdViewBridgeListenerProxy::adView
	AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* ___adView_4;
	// UnityEngine.AndroidJavaObject AudienceNetwork.AdViewBridgeListenerProxy::bridgedAdView
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___bridgedAdView_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// AudienceNetwork.InterstitialAdBridgeListenerProxy
struct InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// AudienceNetwork.InterstitialAd AudienceNetwork.InterstitialAdBridgeListenerProxy::interstitialAd
	InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* ___interstitialAd_4;
	// UnityEngine.AndroidJavaObject AudienceNetwork.InterstitialAdBridgeListenerProxy::bridgedInterstitialAd
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___bridgedInterstitialAd_5;
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

// AudienceNetwork.RewardedVideoAdBridgeListenerProxy
struct RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// AudienceNetwork.RewardedVideoAd AudienceNetwork.RewardedVideoAdBridgeListenerProxy::rewardedVideoAd
	RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* ___rewardedVideoAd_4;
	// UnityEngine.AndroidJavaObject AudienceNetwork.RewardedVideoAdBridgeListenerProxy::bridgedRewardedVideoAd
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___bridgedRewardedVideoAd_5;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// AudienceNetwork.FBAdViewBridgeCallback
struct FBAdViewBridgeCallback_t775D067EEDC1A1C97DD807960E2534EECBECDADE  : public MulticastDelegate_t
{
};

// AudienceNetwork.FBAdViewBridgeErrorCallback
struct FBAdViewBridgeErrorCallback_tE7F0E7D7F3E0216B2D9313B13817E7740FF5B9F6  : public MulticastDelegate_t
{
};

// AudienceNetwork.FBInterstitialAdBridgeCallback
struct FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27  : public MulticastDelegate_t
{
};

// AudienceNetwork.FBInterstitialAdBridgeErrorCallback
struct FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F  : public MulticastDelegate_t
{
};

// AudienceNetwork.FBRewardedVideoAdBridgeCallback
struct FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041  : public MulticastDelegate_t
{
};

// AudienceNetwork.FBRewardedVideoAdBridgeErrorCallback
struct FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AudienceNetwork.AdHandler
struct AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED_StaticFields
{
	// System.Collections.Generic.Queue`1<System.Action> AudienceNetwork.AdHandler::executeOnMainThreadQueue
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* ___executeOnMainThreadQueue_4;
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


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// T AudienceNetwork.Utility.AdUtilityBridgeAndroid::GetPropertyOfDisplayMetrics<System.Single>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdUtilityBridgeAndroid_GetPropertyOfDisplayMetrics_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3116EB7A8CD3D23C9A4AF025DBE2E7200DF6ECD7_gshared (AdUtilityBridgeAndroid_t98A6BD7D9108733B63E45A17FECD641462E961F0* __this, String_t* ___property0, const RuntimeMethod* method) ;

// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.AdViewBridgeListenerProxy/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m4CB6FC4ABA853AF2D3B10279925AF211EC5D4788 (U3CU3Ec__DisplayClass3_0_t67987DC34B480B240D19C9B66B5DDF133081B2D9* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// AudienceNetwork.FBAdViewBridgeErrorCallback AudienceNetwork.AdView::get_AdViewDidFailWithError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBAdViewBridgeErrorCallback_tE7F0E7D7F3E0216B2D9313B13817E7740FF5B9F6* AdView_get_AdViewDidFailWithError_m4B5A5230BF887E968F26F012F4D606BC94B17378_inline (AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.AdView::ExecuteOnMainThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdView_ExecuteOnMainThread_m6F15C2D493BDBF814BA82FD3CE41916EE9CA7566 (AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.AdView::LoadAdFromData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdView_LoadAdFromData_m3E40E0C4ED9411A654EDFF5E386A1A8157F21CEB (AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* __this, const RuntimeMethod* method) ;
// AudienceNetwork.FBAdViewBridgeCallback AudienceNetwork.AdView::get_AdViewDidClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBAdViewBridgeCallback_t775D067EEDC1A1C97DD807960E2534EECBECDADE* AdView_get_AdViewDidClick_mE7E5F6BC71E6F33E7E321E3D463E18C009AD1609_inline (AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* __this, const RuntimeMethod* method) ;
// AudienceNetwork.FBAdViewBridgeCallback AudienceNetwork.AdView::get_AdViewWillLogImpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBAdViewBridgeCallback_t775D067EEDC1A1C97DD807960E2534EECBECDADE* AdView_get_AdViewWillLogImpression_mCFAF35C01F2ED04BAF6007FE5EB4D63FC0DF0B49_inline (AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* __this, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.FBAdViewBridgeCallback::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FBAdViewBridgeCallback_Invoke_m6A30B46359E32849493AC52F3A4A28B5A18E62D7_inline (FBAdViewBridgeCallback_t775D067EEDC1A1C97DD807960E2534EECBECDADE* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.FBAdViewBridgeErrorCallback::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FBAdViewBridgeErrorCallback_Invoke_mC305B139F7C2B563BD839A976F5226A7C6501C32_inline (FBAdViewBridgeErrorCallback_tE7F0E7D7F3E0216B2D9313B13817E7740FF5B9F6* __this, String_t* ___error0, const RuntimeMethod* method) ;
// System.Boolean AudienceNetwork.AudienceNetworkAds::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudienceNetworkAds_IsInitialized_m8674B06BFAD0C47E74877CC591F5A47864CA26B0 (const RuntimeMethod* method) ;
// System.String AudienceNetwork.SdkVersion::get_Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SdkVersion_get_Build_mA4D7AFE90B3AB3C3E14E658DC4FF370F8B88E668 (const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void AudienceNetwork.AudienceNetworkAds::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudienceNetworkAds_Initialize_m954E003E1265AB495918E9208D88D62D60A14381 (const RuntimeMethod* method) ;
// System.Void AudienceNetwork.InterstitialAd::set_PlacementId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InterstitialAd_set_PlacementId_m491B0D3ABB52877889D50EFAAE0683879429540E_inline (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAd::get_InterstitialAdDidLoad()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAd_get_InterstitialAdDidLoad_mE9EA30A35E2D33E084214A94E99A7C18EB90851B_inline (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) ;
// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAd::get_InterstitialAdWillLogImpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAd_get_InterstitialAdWillLogImpression_mBE1AF8E676EF850F9E86A8ED2309E5B554E0A220_inline (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) ;
// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAd::get_InterstitialAdDidClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAd_get_InterstitialAdDidClick_mC16B274285D14D412293CA12B88E1B343383108C_inline (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) ;
// AudienceNetwork.FBInterstitialAdBridgeErrorCallback AudienceNetwork.InterstitialAd::get_InterstitialAdDidFailWithError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* InterstitialAd_get_InterstitialAdDidFailWithError_m86A66F13A9B01022C830DAB214674B9FF1F17FB1_inline (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) ;
// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAd::get_InterstitialAdWillClose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAd_get_InterstitialAdWillClose_mEF531764761C134455DD517EDC10954BB3CC8901_inline (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) ;
// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAd::get_InterstitialAdDidClose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAd_get_InterstitialAdDidClose_mEA11D8098A581E106A47BBE022220321CB0263E6_inline (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) ;
// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAd::get_InterstitialAdActivityDestroyed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAd_get_InterstitialAdActivityDestroyed_mBFD62998A660D42427F60CF4076E879C5808AAF5_inline (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.InterstitialAd::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Dispose_mC77C628A99DB1417B1CB91655AED7770717E5DF8 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, bool ___iAmBeingCalledFromDisposeAndNotFinalize0, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String AudienceNetwork.InterstitialAd::get_PlacementId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InterstitialAd_get_PlacementId_mC1BD108C594367099DEE08B1B85529E84329B117_inline (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<AudienceNetwork.AdHandler>()
inline AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED* GameObject_AddComponent_TisAdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED_m9343CF2029C32EBEE77A1BDEB534C80D561D343A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void AudienceNetwork.FBInterstitialAdBridgeCallback::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FBInterstitialAdBridgeCallback_Invoke_m3F30ABD6169AB25047BB628CE40340B13014D65F_inline (FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* __this, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.AdHandler::ExecuteOnMainThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdHandler_ExecuteOnMainThread_mB5A3D62F559F7722558B4D2910E78E82CEC9DD8D (AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// AudienceNetwork.IInterstitialAdBridge AudienceNetwork.InterstitialAdBridge::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InterstitialAdBridge_CreateInstance_m2396FD04432B8BFFC33E965FBA89EE7FCF486878 (const RuntimeMethod* method) ;
// System.Void AudienceNetwork.InterstitialAdBridgeAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeAndroid__ctor_m460A72309A83E7AD2E9E5C2346B5C3B9A4DCABB3 (InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583* __this, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.InterstitialAdBridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridge__ctor_mC4498DE9D762B281CB4E125020358406C4A5F015 (InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AudienceNetwork.InterstitialAdContainer>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m55A7A4C3CDBA0C18976E19245173B4014C49D702 (Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81* __this, int32_t ___key0, InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81*, int32_t, InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void AudienceNetwork.Utility.AdUtility::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdUtility_Prepare_m15617208BCDE5D73F1897450A4ACCD292F39D7D2 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.InterstitialAdBridgeListenerProxy::.ctor(AudienceNetwork.InterstitialAd,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeListenerProxy__ctor_mEDC5994E2FB87877269C18A90F77A557B8E49A12 (InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4* __this, InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* ___interstitialAd0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___bridgedInterstitialAd1, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.InterstitialAdContainer::.ctor(AudienceNetwork.InterstitialAd)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdContainer__ctor_m9285578CE597222E697741975B7A78DADCE265FF (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* __this, InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* ___interstitialAd0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AudienceNetwork.InterstitialAdContainer>::Add(TKey,TValue)
inline void Dictionary_2_Add_mA3AD2E15FEFCF17797E22FAE0EE8677A198B6C96 (Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81* __this, int32_t ___key0, InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81*, int32_t, InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// AudienceNetwork.InterstitialAdContainer AudienceNetwork.InterstitialAdBridgeAndroid::InterstitialAdContainerForuniqueId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* InterstitialAdBridgeAndroid_InterstitialAdContainerForuniqueId_mEB1098B0DF87D2B1D829F6CCA1248A2A4CA353AE (InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583* __this, int32_t ___uniqueId0, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.InterstitialAdContainer::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdContainer_Load_m4E79DDE1F3DE129C1DFDAEE9A1A2127033A59780 (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* __this, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject AudienceNetwork.InterstitialAdBridgeAndroid::InterstitialAdForuniqueId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* InterstitialAdBridgeAndroid_InterstitialAdForuniqueId_m4C0EDD7D66BF62FE6F8881856C8323766560065F (InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583* __this, int32_t ___uniqueId0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AudienceNetwork.InterstitialAdContainer>::Remove(TKey)
inline bool Dictionary_2_Remove_mD670DCE26CB32ED6DFFFE8FB8A818A5BC88462CC (Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AudienceNetwork.InterstitialAdContainer>::.ctor()
inline void Dictionary_2__ctor_m813C43A5BEFE83061F292C5122DE58A186FB9347 (Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void AudienceNetwork.InterstitialAdContainer::set_interstitialAd(AudienceNetwork.InterstitialAd)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InterstitialAdContainer_set_interstitialAd_mA2B697E08CAAECD4C448BC564225A11354D9A0B1_inline (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* __this, InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* ___value0, const RuntimeMethod* method) ;
// AudienceNetwork.InterstitialAd AudienceNetwork.InterstitialAdContainer::get_interstitialAd()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* InterstitialAdContainer_get_interstitialAd_mB67B6A0B101A0824B95B32D247601845F4109678_inline (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* __this, const RuntimeMethod* method) ;
// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAdContainer::get_onLoad()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAdContainer_get_onLoad_m9F93DDB54D9899ED455FF641B4E04DBCBA6D9070_inline (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.InterstitialAdContainer::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdContainer_Load_m9655CA8FE8FFE6BD73186FDAC2006815E7431748 (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* __this, String_t* ___bidPayload0, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject AudienceNetwork.InterstitialAdContainer::LoadAdConfig(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* InterstitialAdContainer_LoadAdConfig_mB1749ED116522293AE6727F5938E9865754B7C74 (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* __this, String_t* ___bidPayload0, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.InterstitialAdBridgeListenerProxy/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m17A373D4CDD9E87FE5DDB3A91CDAFC85D8D01F3A (U3CU3Ec__DisplayClass3_0_t4A5A3A90AF7FC1ADE6CA4D4CF236B96D4C14440E* __this, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.InterstitialAd::ExecuteOnMainThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_ExecuteOnMainThread_m21D0D65976643939F72D64B312D41765BFCD8F32 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.InterstitialAd::LoadAdFromData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAdFromData_m84B2424DDD5CB988DDCEA3189DD929D9E44C2D65 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.FBInterstitialAdBridgeErrorCallback::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FBInterstitialAdBridgeErrorCallback_Invoke_m81FC8F00C6229EBBDDB5FD87D85F838113E2B2BB_inline (FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* __this, String_t* ___error0, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.RewardedVideoAd::.ctor(System.String,AudienceNetwork.RewardData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd__ctor_mA9B4DA4CC7D8848C14A5DCB592DB8FF36EE4819A (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, String_t* ___placementId0, RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* ___rewardData1, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.RewardedVideoAd::set_PlacementId(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RewardedVideoAd_set_PlacementId_m53135355B631289F71D0A0F219FD33C05D8C9651_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.RewardedVideoAd::set_RewardData(AudienceNetwork.RewardData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RewardedVideoAd_set_RewardData_mEF09A8875685C2406BF78450FB1422AB837C5556_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* ___value0, const RuntimeMethod* method) ;
// AudienceNetwork.RewardData AudienceNetwork.RewardedVideoAd::get_RewardData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* RewardedVideoAd_get_RewardData_mF5E3C31190ECDF4033CBD22CFDA4371B733CCF31_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) ;
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdDidLoad()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdDidLoad_m14DFCD4C4DCBFEDB7874AF9ECED60A0E6C5936F7_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) ;
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdWillLogImpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdWillLogImpression_mA7468F3067A4D2B844C4420F177F0B2B8B1A4E54_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) ;
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdDidClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdDidClick_mDDBB5168254A673D4DF48A827A18EAA9EB1A52B2_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) ;
// AudienceNetwork.FBRewardedVideoAdBridgeErrorCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdDidFailWithError()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* RewardedVideoAd_get_RewardedVideoAdDidFailWithError_mCB24562902B60225BA782845C1C9020C601F1377_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) ;
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdWillClose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdWillClose_m633DD0E6617B76A06B35201E9E1C1F142C025B55_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) ;
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdDidClose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdDidClose_m722737A392A87EAD0DA8259FE5AD59E934A5C5FB_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) ;
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdComplete_m462ABD29ECE953884337436F9BB93D1740F16E5B_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) ;
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdDidSucceed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdDidSucceed_mEB28E3FBDA25E71D6DFF414253E9D22946E53CBA_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) ;
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdDidFail()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdDidFail_m5B1123EE9B0853395F2AD15F60F4F05D6E0CDEF3_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) ;
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdActivityDestroyed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdActivityDestroyed_m246DC2E953D15F6B222829B7D06790A20080B26E_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.RewardedVideoAd::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_Dispose_m8C89561619EB587D27F15D234292381492DC3429 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, bool ___iAmBeingCalledFromDisposeAndNotFinalize0, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.AdHandler::RemoveFromParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdHandler_RemoveFromParent_m4227A457574B9EED99906159CCCED8EA84A713EC (AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED* __this, const RuntimeMethod* method) ;
// System.String AudienceNetwork.RewardedVideoAd::get_PlacementId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RewardedVideoAd_get_PlacementId_m79203F67638150A9462933CDF9BA5BF5A96BA4D4_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.FBRewardedVideoAdBridgeCallback::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_inline (FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* __this, const RuntimeMethod* method) ;
// AudienceNetwork.IRewardedVideoAdBridge AudienceNetwork.RewardedVideoAdBridge::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewardedVideoAdBridge_CreateInstance_m334182F495BAF336C0269CE2CDCE506CD1402881 (const RuntimeMethod* method) ;
// System.Void AudienceNetwork.RewardedVideoAdBridgeAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeAndroid__ctor_m182C87E5DC2793CD48C108AE8F902B4C94D95BEA (RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB* __this, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.RewardedVideoAdBridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridge__ctor_m7604E29BADB7C0685B83F95ABDC2058B104FBC33 (RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AudienceNetwork.RewardedVideoAdContainer>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m4808DDD51B6C1F946B318D6EB02FD44CEB0333E4 (Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464* __this, int32_t ___key0, RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464*, int32_t, RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::.ctor(AudienceNetwork.RewardedVideoAd,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy__ctor_mBC1A5F16FDED756049E689FBEA193426E117792D (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* ___rewardedVideoAd0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___bridgedRewardedVideoAd1, const RuntimeMethod* method) ;
// System.String AudienceNetwork.RewardData::get_UserId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RewardData_get_UserId_m65A779477569BCD25E48431426139A5D57D589D7_inline (RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* __this, const RuntimeMethod* method) ;
// System.String AudienceNetwork.RewardData::get_Currency()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RewardData_get_Currency_m33F70966C3056F904ACF66B7C5C4AE0222415C28_inline (RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* __this, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.RewardedVideoAdContainer::.ctor(AudienceNetwork.RewardedVideoAd)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdContainer__ctor_mC1D05DF8718F12B908BFD9D16F2047C9C7BD4AA5 (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* __this, RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* ___rewardedVideoAd0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AudienceNetwork.RewardedVideoAdContainer>::Add(TKey,TValue)
inline void Dictionary_2_Add_m767C3A9CAF9D1CF95A5F3C4AA51EB437208AA622 (Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464* __this, int32_t ___key0, RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464*, int32_t, RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// AudienceNetwork.RewardedVideoAdContainer AudienceNetwork.RewardedVideoAdBridgeAndroid::RewardedVideoAdContainerForUniqueId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* RewardedVideoAdBridgeAndroid_RewardedVideoAdContainerForUniqueId_mEBAE25181BBE2474759D9F6820DDC025AF7CBB4E (RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB* __this, int32_t ___uniqueId0, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.RewardedVideoAdContainer::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdContainer_Load_mCC9D273C25650E07308E2FCAF765474E4B6FB8FF (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* __this, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject AudienceNetwork.RewardedVideoAdBridgeAndroid::RewardedVideoAdForUniqueId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* RewardedVideoAdBridgeAndroid_RewardedVideoAdForUniqueId_mCF7526C86DE10ED2B75E68C7125C76812F3B5B45 (RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB* __this, int32_t ___uniqueId0, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.RewardedVideoAdBridgeAndroid/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m75C3B64F838AA94122176BE075E4D06F23466F6F (U3CU3Ec__DisplayClass10_0_t003106924C3B2AE8949D45E2C94A770651C8890D* __this, const RuntimeMethod* method) ;
// AudienceNetwork.RewardedVideoAd AudienceNetwork.RewardedVideoAdContainer::get_rewardedVideoAd()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* RewardedVideoAdContainer_get_rewardedVideoAd_m68C0CB84DAA674C467D1DF65788AB3361889F39F_inline (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* __this, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.RewardedVideoAd::ExecuteOnMainThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_ExecuteOnMainThread_m99D031E76CF4A8F01149AB49ABD035716F24C5CC (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,AudienceNetwork.RewardedVideoAdContainer>::Remove(TKey)
inline bool Dictionary_2_Remove_m7B7699CB893C38F6D6B21BEFA2EB2486B0E35629 (Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,AudienceNetwork.RewardedVideoAdContainer>::.ctor()
inline void Dictionary_2__ctor_m3B615F2A092130DAD7292FA7BD72068CD4D3731E (Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void AudienceNetwork.RewardedVideoAdContainer::set_rewardedVideoAd(AudienceNetwork.RewardedVideoAd)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RewardedVideoAdContainer_set_rewardedVideoAd_m1B0F28CA41F608909F511BEFB6D4CF224B0903C5_inline (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* __this, RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* ___value0, const RuntimeMethod* method) ;
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAdContainer::get_onLoad()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAdContainer_get_onLoad_mB2E4719AF636CE6DFB1E45633474FFA5F4D3D1F6_inline (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* __this, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.RewardedVideoAdContainer::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdContainer_Load_mA533DDF6D3CB0770051586A37F400B36603F3686 (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* __this, String_t* ___bidPayload0, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject AudienceNetwork.RewardedVideoAdContainer::LoadAdConfig(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* RewardedVideoAdContainer_LoadAdConfig_m66E6D2B778B011620203ACE21213548B615AA264 (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* __this, String_t* ___bidPayload0, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mAB5059429A7096CD23555B020E480D6FF0D0D4B1 (U3CU3Ec__DisplayClass3_0_tBFED5A61839F24F45F31C4A172516F3B51E685CB* __this, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.RewardedVideoAd::LoadAdFromData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_LoadAdFromData_m144FEDBCA9CA8193453599AFE4F6B99F7E004E06 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.FBRewardedVideoAdBridgeErrorCallback::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FBRewardedVideoAdBridgeErrorCallback_Invoke_m0E61ADCF56E4F80B6587C6F89A1D4A84A7865633_inline (FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* __this, String_t* ___error0, const RuntimeMethod* method) ;
// AudienceNetwork.Utility.IAdUtilityBridge AudienceNetwork.Utility.AdUtilityBridge::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AdUtilityBridge_CreateInstance_m0B37784FFE5B1AF41B87F621E164815AF12BD2A0 (const RuntimeMethod* method) ;
// System.Void AudienceNetwork.Utility.AdUtilityBridgeAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdUtilityBridgeAndroid__ctor_mCAB48FA91CF8DD82CA7A8FC4ABAC10C41F096AD9 (AdUtilityBridgeAndroid_t98A6BD7D9108733B63E45A17FECD641462E961F0* __this, const RuntimeMethod* method) ;
// System.Void AudienceNetwork.Utility.AdUtilityBridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdUtilityBridge__ctor_m0A963823A15E6591C458EB110DFAE4AFC536EDFA (AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC* __this, const RuntimeMethod* method) ;
// T AudienceNetwork.Utility.AdUtilityBridgeAndroid::GetPropertyOfDisplayMetrics<System.Single>(System.String)
inline float AdUtilityBridgeAndroid_GetPropertyOfDisplayMetrics_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3116EB7A8CD3D23C9A4AF025DBE2E7200DF6ECD7 (AdUtilityBridgeAndroid_t98A6BD7D9108733B63E45A17FECD641462E961F0* __this, String_t* ___property0, const RuntimeMethod* method)
{
	return ((  float (*) (AdUtilityBridgeAndroid_t98A6BD7D9108733B63E45A17FECD641462E961F0*, String_t*, const RuntimeMethod*))AdUtilityBridgeAndroid_GetPropertyOfDisplayMetrics_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3116EB7A8CD3D23C9A4AF025DBE2E7200DF6ECD7_gshared)(__this, ___property0, method);
}
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Double AudienceNetwork.Utility.AdUtilityBridgeAndroid::Density()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AdUtilityBridgeAndroid_Density_m0ED8E4A7E92E75A9A716FFC238BD6798331FEEEE (AdUtilityBridgeAndroid_t98A6BD7D9108733B63E45A17FECD641462E961F0* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AudienceNetwork.AdViewBridgeListenerProxy::.ctor(AudienceNetwork.AdView,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdViewBridgeListenerProxy__ctor_mCC5976FF4B692779997B74F01F4388BAC1D74223 (AdViewBridgeListenerProxy_tA177FB882AB54FE5A5D0AC9C10CAE6EB6F3047CD* __this, AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* ___adView0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___bridgedAdView1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4DE7C8CA0E79E4E80296DAB1929B2376FCD3259);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("com.facebook.ads.AdListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteralC4DE7C8CA0E79E4E80296DAB1929B2376FCD3259, NULL);
		// this.adView = adView;
		AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* L_0 = ___adView0;
		__this->___adView_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adView_4), (void*)L_0);
		// this.bridgedAdView = bridgedAdView;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___bridgedAdView1;
		__this->___bridgedAdView_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bridgedAdView_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void AudienceNetwork.AdViewBridgeListenerProxy::onError(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdViewBridgeListenerProxy_onError_m441EB8D3ECFDCEF7271843C0BC14E32B501B58B0 (AdViewBridgeListenerProxy_tA177FB882AB54FE5A5D0AC9C10CAE6EB6F3047CD* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ad0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3ConErrorU3Eb__0_m510A4AD2002C4E8DB1DE203EF84FC86F111AE154_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t67987DC34B480B240D19C9B66B5DDF133081B2D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral413A6C17FD7A7B815786D74A854EDAC1083FFCAC);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t67987DC34B480B240D19C9B66B5DDF133081B2D9* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t67987DC34B480B240D19C9B66B5DDF133081B2D9* L_0 = (U3CU3Ec__DisplayClass3_0_t67987DC34B480B240D19C9B66B5DDF133081B2D9*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t67987DC34B480B240D19C9B66B5DDF133081B2D9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m4CB6FC4ABA853AF2D3B10279925AF211EC5D4788(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t67987DC34B480B240D19C9B66B5DDF133081B2D9* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// string errorMessage = error.Call<string> ("getErrorMessage");
		U3CU3Ec__DisplayClass3_0_t67987DC34B480B240D19C9B66B5DDF133081B2D9* L_2 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ___error1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_3);
		String_t* L_5;
		L_5 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_3, _stringLiteral413A6C17FD7A7B815786D74A854EDAC1083FFCAC, L_4, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___errorMessage_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___errorMessage_1), (void*)L_5);
		// if (adView.AdViewDidFailWithError != null) {
		AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* L_6 = __this->___adView_4;
		NullCheck(L_6);
		FBAdViewBridgeErrorCallback_tE7F0E7D7F3E0216B2D9313B13817E7740FF5B9F6* L_7;
		L_7 = AdView_get_AdViewDidFailWithError_m4B5A5230BF887E968F26F012F4D606BC94B17378_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// adView.ExecuteOnMainThread(() => {
		//     adView.AdViewDidFailWithError(errorMessage);
		// });
		AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* L_8 = __this->___adView_4;
		U3CU3Ec__DisplayClass3_0_t67987DC34B480B240D19C9B66B5DDF133081B2D9* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3ConErrorU3Eb__0_m510A4AD2002C4E8DB1DE203EF84FC86F111AE154_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		AdView_ExecuteOnMainThread_m6F15C2D493BDBF814BA82FD3CE41916EE9CA7566(L_8, L_10, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.AdViewBridgeListenerProxy::onAdLoaded(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdViewBridgeListenerProxy_onAdLoaded_m21CD45E711594099143EF260399275F9FD81898E (AdViewBridgeListenerProxy_tA177FB882AB54FE5A5D0AC9C10CAE6EB6F3047CD* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ad0, const RuntimeMethod* method) 
{
	{
		// adView.LoadAdFromData();
		AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* L_0 = __this->___adView_4;
		NullCheck(L_0);
		AdView_LoadAdFromData_m3E40E0C4ED9411A654EDFF5E386A1A8157F21CEB(L_0, NULL);
		// }
		return;
	}
}
// System.Void AudienceNetwork.AdViewBridgeListenerProxy::onAdClicked(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdViewBridgeListenerProxy_onAdClicked_m739335F8101138FC8974A777BBE2B31126173E82 (AdViewBridgeListenerProxy_tA177FB882AB54FE5A5D0AC9C10CAE6EB6F3047CD* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ad0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdViewBridgeListenerProxy_U3ConAdClickedU3Eb__5_0_m1FE6C08A128953255E5D837BD36E48718BAB0C40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (adView.AdViewDidClick != null) {
		AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* L_0 = __this->___adView_4;
		NullCheck(L_0);
		FBAdViewBridgeCallback_t775D067EEDC1A1C97DD807960E2534EECBECDADE* L_1;
		L_1 = AdView_get_AdViewDidClick_mE7E5F6BC71E6F33E7E321E3D463E18C009AD1609_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// adView.ExecuteOnMainThread(() => {
		//     adView.AdViewDidClick();
		// });
		AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* L_2 = __this->___adView_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)AdViewBridgeListenerProxy_U3ConAdClickedU3Eb__5_0_m1FE6C08A128953255E5D837BD36E48718BAB0C40_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		AdView_ExecuteOnMainThread_m6F15C2D493BDBF814BA82FD3CE41916EE9CA7566(L_2, L_3, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.AdViewBridgeListenerProxy::onLoggingImpression(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdViewBridgeListenerProxy_onLoggingImpression_mA6C018DC458CAF831EFC20473236B11D71A2E134 (AdViewBridgeListenerProxy_tA177FB882AB54FE5A5D0AC9C10CAE6EB6F3047CD* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ad0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdViewBridgeListenerProxy_U3ConLoggingImpressionU3Eb__6_0_mFEA2510D1C0596F697A36A49664843F234A4B40D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (adView.AdViewWillLogImpression != null) {
		AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* L_0 = __this->___adView_4;
		NullCheck(L_0);
		FBAdViewBridgeCallback_t775D067EEDC1A1C97DD807960E2534EECBECDADE* L_1;
		L_1 = AdView_get_AdViewWillLogImpression_mCFAF35C01F2ED04BAF6007FE5EB4D63FC0DF0B49_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// adView.ExecuteOnMainThread(() => {
		//     adView.AdViewWillLogImpression();
		// });
		AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* L_2 = __this->___adView_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)AdViewBridgeListenerProxy_U3ConLoggingImpressionU3Eb__6_0_mFEA2510D1C0596F697A36A49664843F234A4B40D_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		AdView_ExecuteOnMainThread_m6F15C2D493BDBF814BA82FD3CE41916EE9CA7566(L_2, L_3, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.AdViewBridgeListenerProxy::<onAdClicked>b__5_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdViewBridgeListenerProxy_U3ConAdClickedU3Eb__5_0_m1FE6C08A128953255E5D837BD36E48718BAB0C40 (AdViewBridgeListenerProxy_tA177FB882AB54FE5A5D0AC9C10CAE6EB6F3047CD* __this, const RuntimeMethod* method) 
{
	{
		// adView.AdViewDidClick();
		AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* L_0 = __this->___adView_4;
		NullCheck(L_0);
		FBAdViewBridgeCallback_t775D067EEDC1A1C97DD807960E2534EECBECDADE* L_1;
		L_1 = AdView_get_AdViewDidClick_mE7E5F6BC71E6F33E7E321E3D463E18C009AD1609_inline(L_0, NULL);
		NullCheck(L_1);
		FBAdViewBridgeCallback_Invoke_m6A30B46359E32849493AC52F3A4A28B5A18E62D7_inline(L_1, NULL);
		// });
		return;
	}
}
// System.Void AudienceNetwork.AdViewBridgeListenerProxy::<onLoggingImpression>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdViewBridgeListenerProxy_U3ConLoggingImpressionU3Eb__6_0_mFEA2510D1C0596F697A36A49664843F234A4B40D (AdViewBridgeListenerProxy_tA177FB882AB54FE5A5D0AC9C10CAE6EB6F3047CD* __this, const RuntimeMethod* method) 
{
	{
		// adView.AdViewWillLogImpression();
		AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* L_0 = __this->___adView_4;
		NullCheck(L_0);
		FBAdViewBridgeCallback_t775D067EEDC1A1C97DD807960E2534EECBECDADE* L_1;
		L_1 = AdView_get_AdViewWillLogImpression_mCFAF35C01F2ED04BAF6007FE5EB4D63FC0DF0B49_inline(L_0, NULL);
		NullCheck(L_1);
		FBAdViewBridgeCallback_Invoke_m6A30B46359E32849493AC52F3A4A28B5A18E62D7_inline(L_1, NULL);
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
// System.Void AudienceNetwork.AdViewBridgeListenerProxy/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m4CB6FC4ABA853AF2D3B10279925AF211EC5D4788 (U3CU3Ec__DisplayClass3_0_t67987DC34B480B240D19C9B66B5DDF133081B2D9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AudienceNetwork.AdViewBridgeListenerProxy/<>c__DisplayClass3_0::<onError>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3ConErrorU3Eb__0_m510A4AD2002C4E8DB1DE203EF84FC86F111AE154 (U3CU3Ec__DisplayClass3_0_t67987DC34B480B240D19C9B66B5DDF133081B2D9* __this, const RuntimeMethod* method) 
{
	{
		// adView.AdViewDidFailWithError(errorMessage);
		AdViewBridgeListenerProxy_tA177FB882AB54FE5A5D0AC9C10CAE6EB6F3047CD* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* L_1 = L_0->___adView_4;
		NullCheck(L_1);
		FBAdViewBridgeErrorCallback_tE7F0E7D7F3E0216B2D9313B13817E7740FF5B9F6* L_2;
		L_2 = AdView_get_AdViewDidFailWithError_m4B5A5230BF887E968F26F012F4D606BC94B17378_inline(L_1, NULL);
		String_t* L_3 = __this->___errorMessage_1;
		NullCheck(L_2);
		FBAdViewBridgeErrorCallback_Invoke_mC305B139F7C2B563BD839A976F5226A7C6501C32_inline(L_2, L_3, NULL);
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
// System.Void AudienceNetwork.AudienceNetworkAds::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudienceNetworkAds_Initialize_m954E003E1265AB495918E9208D88D62D60A14381 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudienceNetworkAds_t674E34193798D6E1B4A6BD66AE111440EA011E90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAF9CA79CDB629FB50D6860547D6DEE505A9C9A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5439D7958040B3739CE6947A63F9797324E63F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// if (IsInitialized()) { return; }
		bool L_0;
		L_0 = AudienceNetworkAds_IsInitialized_m8674B06BFAD0C47E74877CC591F5A47864CA26B0(NULL);
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (IsInitialized()) { return; }
		return;
	}

IL_0008:
	{
		// PlayerPrefs.SetString("an_isUnitySDK", SdkVersion.Build);
		String_t* L_1;
		L_1 = SdkVersion_get_Build_mA4D7AFE90B3AB3C3E14E658DC4FF370F8B88E668(NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteralBAF9CA79CDB629FB50D6860547D6DEE505A9C9A8, L_1, NULL);
		// AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// AndroidJavaObject currentActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_2, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		// AndroidJavaObject context = currentActivity.Call<AndroidJavaObject>("getApplicationContext");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_3, _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9, L_4, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_5;
		// AndroidJavaClass audienceNetworkAds = new AndroidJavaClass("com.facebook.ads.AudienceNetworkAds");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_6 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_6, _stringLiteralE5439D7958040B3739CE6947A63F9797324E63F2, NULL);
		// audienceNetworkAds.CallStatic("initialize", context);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_0;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		NullCheck(L_6);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_6, _stringLiteralD289A15F06D391673864A3B5CEDBFF42865743C1, L_8, NULL);
		// isInitialized = true;
		((AudienceNetworkAds_t674E34193798D6E1B4A6BD66AE111440EA011E90_StaticFields*)il2cpp_codegen_static_fields_for(AudienceNetworkAds_t674E34193798D6E1B4A6BD66AE111440EA011E90_il2cpp_TypeInfo_var))->___isInitialized_0 = (bool)1;
		// }
		return;
	}
}
// System.Boolean AudienceNetwork.AudienceNetworkAds::IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudienceNetworkAds_IsInitialized_m8674B06BFAD0C47E74877CC591F5A47864CA26B0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D185DB91E3DF09D623D41B1D7987E6F4A5D419D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5439D7958040B3739CE6947A63F9797324E63F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// AndroidJavaObject currentActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		// AndroidJavaObject context = currentActivity.Call<AndroidJavaObject>("getApplicationContext");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_1, _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9, L_2, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_3;
		// AndroidJavaClass audienceNetworkAds = new AndroidJavaClass("com.facebook.ads.AudienceNetworkAds");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_4, _stringLiteralE5439D7958040B3739CE6947A63F9797324E63F2, NULL);
		// return audienceNetworkAds.CallStatic<bool>("isInitialized", context);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		NullCheck(L_4);
		bool L_8;
		L_8 = AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6(L_4, _stringLiteral1D185DB91E3DF09D623D41B1D7987E6F4A5D419D, L_6, AndroidJavaObject_CallStatic_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mE956BC9A30BEC746DE593C53C1B8DB6A685185A6_RuntimeMethod_var);
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
void FBInterstitialAdBridgeCallback_Invoke_m3F30ABD6169AB25047BB628CE40340B13014D65F_Multicast(FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* currentDelegate = reinterpret_cast<FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FBInterstitialAdBridgeCallback_Invoke_m3F30ABD6169AB25047BB628CE40340B13014D65F_Open(FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void FBInterstitialAdBridgeCallback_Invoke_m3F30ABD6169AB25047BB628CE40340B13014D65F_OpenStaticInvoker(FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void FBInterstitialAdBridgeCallback_Invoke_m3F30ABD6169AB25047BB628CE40340B13014D65F_ClosedStaticInvoker(FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27 (FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void AudienceNetwork.FBInterstitialAdBridgeCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBInterstitialAdBridgeCallback__ctor_m84E5805C989B36CE9DD6B598491602D9BFE031CA (FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&FBInterstitialAdBridgeCallback_Invoke_m3F30ABD6169AB25047BB628CE40340B13014D65F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FBInterstitialAdBridgeCallback_Invoke_m3F30ABD6169AB25047BB628CE40340B13014D65F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FBInterstitialAdBridgeCallback_Invoke_m3F30ABD6169AB25047BB628CE40340B13014D65F_Open;
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
	__this->___extra_arg_5 = (intptr_t)&FBInterstitialAdBridgeCallback_Invoke_m3F30ABD6169AB25047BB628CE40340B13014D65F_Multicast;
}
// System.Void AudienceNetwork.FBInterstitialAdBridgeCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBInterstitialAdBridgeCallback_Invoke_m3F30ABD6169AB25047BB628CE40340B13014D65F (FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* __this, const RuntimeMethod* method) 
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
void FBInterstitialAdBridgeErrorCallback_Invoke_m81FC8F00C6229EBBDDB5FD87D85F838113E2B2BB_Multicast(FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* __this, String_t* ___error0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* currentDelegate = reinterpret_cast<FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___error0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FBInterstitialAdBridgeErrorCallback_Invoke_m81FC8F00C6229EBBDDB5FD87D85F838113E2B2BB_Open(FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* __this, String_t* ___error0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___error0, method);
}
void FBInterstitialAdBridgeErrorCallback_Invoke_m81FC8F00C6229EBBDDB5FD87D85F838113E2B2BB_OpenStaticInvoker(FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* __this, String_t* ___error0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___error0);
}
void FBInterstitialAdBridgeErrorCallback_Invoke_m81FC8F00C6229EBBDDB5FD87D85F838113E2B2BB_ClosedStaticInvoker(FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* __this, String_t* ___error0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___error0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F (FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* __this, String_t* ___error0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___error0' to native representation
	char* ____error0_marshaled = NULL;
	____error0_marshaled = il2cpp_codegen_marshal_string(___error0);

	// Native function invocation
	il2cppPInvokeFunc(____error0_marshaled);

	// Marshaling cleanup of parameter '___error0' native representation
	il2cpp_codegen_marshal_free(____error0_marshaled);
	____error0_marshaled = NULL;

}
// System.Void AudienceNetwork.FBInterstitialAdBridgeErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBInterstitialAdBridgeErrorCallback__ctor_mB1F2197CB65BE16BBBE9E2D47CF0A606E4BB8A18 (FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&FBInterstitialAdBridgeErrorCallback_Invoke_m81FC8F00C6229EBBDDB5FD87D85F838113E2B2BB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FBInterstitialAdBridgeErrorCallback_Invoke_m81FC8F00C6229EBBDDB5FD87D85F838113E2B2BB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FBInterstitialAdBridgeErrorCallback_Invoke_m81FC8F00C6229EBBDDB5FD87D85F838113E2B2BB_Open;
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
			__this->___invoke_impl_1 = (intptr_t)&FBInterstitialAdBridgeErrorCallback_Invoke_m81FC8F00C6229EBBDDB5FD87D85F838113E2B2BB_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&FBInterstitialAdBridgeErrorCallback_Invoke_m81FC8F00C6229EBBDDB5FD87D85F838113E2B2BB_Multicast;
}
// System.Void AudienceNetwork.FBInterstitialAdBridgeErrorCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBInterstitialAdBridgeErrorCallback_Invoke_m81FC8F00C6229EBBDDB5FD87D85F838113E2B2BB (FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* __this, String_t* ___error0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___error0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String AudienceNetwork.InterstitialAd::get_PlacementId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InterstitialAd_get_PlacementId_mC1BD108C594367099DEE08B1B85529E84329B117 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	{
		// public string PlacementId { get; private set; }
		String_t* L_0 = __this->___U3CPlacementIdU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void AudienceNetwork.InterstitialAd::set_PlacementId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_set_PlacementId_m491B0D3ABB52877889D50EFAAE0683879429540E (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string PlacementId { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CPlacementIdU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlacementIdU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAd::get_InterstitialAdDidLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAd_get_InterstitialAdDidLoad_mE9EA30A35E2D33E084214A94E99A7C18EB90851B (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	{
		// return interstitialAdDidLoad;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0 = __this->___interstitialAdDidLoad_4;
		return L_0;
	}
}
// System.Void AudienceNetwork.InterstitialAd::set_InterstitialAdDidLoad(AudienceNetwork.FBInterstitialAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_set_InterstitialAdDidLoad_m706CF90FCC23551C07FC0E26701E04D461D805B2 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// interstitialAdDidLoad = value;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0 = ___value0;
		__this->___interstitialAdDidLoad_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitialAdDidLoad_4), (void*)L_0);
		// InterstitialAdBridge.Instance.OnLoad(uniqueId, interstitialAdDidLoad);
		il2cpp_codegen_runtime_class_init_inline(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_2 = __this->___uniqueId_0;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_3 = __this->___interstitialAdDidLoad_4;
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* >::Invoke(5 /* System.Void AudienceNetwork.IInterstitialAdBridge::OnLoad(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback) */, IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// }
		return;
	}
}
// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAd::get_InterstitialAdWillLogImpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAd_get_InterstitialAdWillLogImpression_mBE1AF8E676EF850F9E86A8ED2309E5B554E0A220 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	{
		// return interstitialAdWillLogImpression;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0 = __this->___interstitialAdWillLogImpression_5;
		return L_0;
	}
}
// System.Void AudienceNetwork.InterstitialAd::set_InterstitialAdWillLogImpression(AudienceNetwork.FBInterstitialAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_set_InterstitialAdWillLogImpression_mE819096A17363F18315886DFA335AC957CEDEF41 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// interstitialAdWillLogImpression = value;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0 = ___value0;
		__this->___interstitialAdWillLogImpression_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitialAdWillLogImpression_5), (void*)L_0);
		// InterstitialAdBridge.Instance.OnImpression(uniqueId, interstitialAdWillLogImpression);
		il2cpp_codegen_runtime_class_init_inline(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_2 = __this->___uniqueId_0;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_3 = __this->___interstitialAdWillLogImpression_5;
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* >::Invoke(6 /* System.Void AudienceNetwork.IInterstitialAdBridge::OnImpression(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback) */, IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// }
		return;
	}
}
// AudienceNetwork.FBInterstitialAdBridgeErrorCallback AudienceNetwork.InterstitialAd::get_InterstitialAdDidFailWithError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* InterstitialAd_get_InterstitialAdDidFailWithError_m86A66F13A9B01022C830DAB214674B9FF1F17FB1 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	{
		// return interstitialAdDidFailWithError;
		FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* L_0 = __this->___interstitialAdDidFailWithError_6;
		return L_0;
	}
}
// System.Void AudienceNetwork.InterstitialAd::set_InterstitialAdDidFailWithError(AudienceNetwork.FBInterstitialAdBridgeErrorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_set_InterstitialAdDidFailWithError_m4B8F0E5A1FD4DAEE4C3DA8F8E544254ED24A681C (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// interstitialAdDidFailWithError = value;
		FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* L_0 = ___value0;
		__this->___interstitialAdDidFailWithError_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitialAdDidFailWithError_6), (void*)L_0);
		// InterstitialAdBridge.Instance.OnError(uniqueId, interstitialAdDidFailWithError);
		il2cpp_codegen_runtime_class_init_inline(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_2 = __this->___uniqueId_0;
		FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* L_3 = __this->___interstitialAdDidFailWithError_6;
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* >::Invoke(8 /* System.Void AudienceNetwork.IInterstitialAdBridge::OnError(System.Int32,AudienceNetwork.FBInterstitialAdBridgeErrorCallback) */, IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// }
		return;
	}
}
// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAd::get_InterstitialAdDidClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAd_get_InterstitialAdDidClick_mC16B274285D14D412293CA12B88E1B343383108C (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	{
		// return interstitialAdDidClick;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0 = __this->___interstitialAdDidClick_7;
		return L_0;
	}
}
// System.Void AudienceNetwork.InterstitialAd::set_InterstitialAdDidClick(AudienceNetwork.FBInterstitialAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_set_InterstitialAdDidClick_mC049945613B2B200B4892B3DA13AD219F7A0328E (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// interstitialAdDidClick = value;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0 = ___value0;
		__this->___interstitialAdDidClick_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitialAdDidClick_7), (void*)L_0);
		// InterstitialAdBridge.Instance.OnClick(uniqueId, interstitialAdDidClick);
		il2cpp_codegen_runtime_class_init_inline(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_2 = __this->___uniqueId_0;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_3 = __this->___interstitialAdDidClick_7;
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* >::Invoke(7 /* System.Void AudienceNetwork.IInterstitialAdBridge::OnClick(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback) */, IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// }
		return;
	}
}
// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAd::get_InterstitialAdWillClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAd_get_InterstitialAdWillClose_mEF531764761C134455DD517EDC10954BB3CC8901 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	{
		// return interstitialAdWillClose;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0 = __this->___interstitialAdWillClose_8;
		return L_0;
	}
}
// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAd::get_InterstitialAdDidClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAd_get_InterstitialAdDidClose_mEA11D8098A581E106A47BBE022220321CB0263E6 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	{
		// return interstitialAdDidClose;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0 = __this->___interstitialAdDidClose_9;
		return L_0;
	}
}
// System.Void AudienceNetwork.InterstitialAd::set_InterstitialAdDidClose(AudienceNetwork.FBInterstitialAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_set_InterstitialAdDidClose_m3FA1CA4A93710E641DB8D4B3D26035063FCDAA1E (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// interstitialAdDidClose = value;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0 = ___value0;
		__this->___interstitialAdDidClose_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitialAdDidClose_9), (void*)L_0);
		// InterstitialAdBridge.Instance.OnDidClose(uniqueId, interstitialAdDidClose);
		il2cpp_codegen_runtime_class_init_inline(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_2 = __this->___uniqueId_0;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_3 = __this->___interstitialAdDidClose_9;
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* >::Invoke(10 /* System.Void AudienceNetwork.IInterstitialAdBridge::OnDidClose(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback) */, IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// }
		return;
	}
}
// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAd::get_InterstitialAdActivityDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAd_get_InterstitialAdActivityDestroyed_mBFD62998A660D42427F60CF4076E879C5808AAF5 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	{
		// return interstitialAdActivityDestroyed;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0 = __this->___interstitialAdActivityDestroyed_10;
		return L_0;
	}
}
// System.Void AudienceNetwork.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m239D8B61321594216EC608E2153460629BB910BA (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public InterstitialAd(string placementId)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// AudienceNetworkAds.Initialize();
		AudienceNetworkAds_Initialize_m954E003E1265AB495918E9208D88D62D60A14381(NULL);
		// PlacementId = placementId;
		String_t* L_0 = ___placementId0;
		InterstitialAd_set_PlacementId_m491B0D3ABB52877889D50EFAAE0683879429540E_inline(__this, L_0, NULL);
		// if (Application.platform != RuntimePlatform.OSXEditor)
		int32_t L_1;
		L_1 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if (!L_1)
		{
			goto IL_00c8;
		}
	}
	{
		// uniqueId = InterstitialAdBridge.Instance.Create(placementId, this);
		il2cpp_codegen_runtime_class_init_inline(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var))->___Instance_0;
		String_t* L_3 = ___placementId0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker2< int32_t, String_t*, InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* >::Invoke(0 /* System.Int32 AudienceNetwork.IInterstitialAdBridge::Create(System.String,AudienceNetwork.InterstitialAd) */, IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var, L_2, L_3, __this);
		__this->___uniqueId_0 = L_4;
		// InterstitialAdBridge.Instance.OnLoad(uniqueId, InterstitialAdDidLoad);
		RuntimeObject* L_5 = ((InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_6 = __this->___uniqueId_0;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_7;
		L_7 = InterstitialAd_get_InterstitialAdDidLoad_mE9EA30A35E2D33E084214A94E99A7C18EB90851B_inline(__this, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker2< int32_t, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* >::Invoke(5 /* System.Void AudienceNetwork.IInterstitialAdBridge::OnLoad(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback) */, IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		// InterstitialAdBridge.Instance.OnImpression(uniqueId, InterstitialAdWillLogImpression);
		RuntimeObject* L_8 = ((InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_9 = __this->___uniqueId_0;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_10;
		L_10 = InterstitialAd_get_InterstitialAdWillLogImpression_mBE1AF8E676EF850F9E86A8ED2309E5B554E0A220_inline(__this, NULL);
		NullCheck(L_8);
		InterfaceActionInvoker2< int32_t, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* >::Invoke(6 /* System.Void AudienceNetwork.IInterstitialAdBridge::OnImpression(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback) */, IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		// InterstitialAdBridge.Instance.OnClick(uniqueId, InterstitialAdDidClick);
		RuntimeObject* L_11 = ((InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_12 = __this->___uniqueId_0;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_13;
		L_13 = InterstitialAd_get_InterstitialAdDidClick_mC16B274285D14D412293CA12B88E1B343383108C_inline(__this, NULL);
		NullCheck(L_11);
		InterfaceActionInvoker2< int32_t, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* >::Invoke(7 /* System.Void AudienceNetwork.IInterstitialAdBridge::OnClick(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback) */, IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var, L_11, L_12, L_13);
		// InterstitialAdBridge.Instance.OnError(uniqueId, InterstitialAdDidFailWithError);
		RuntimeObject* L_14 = ((InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_15 = __this->___uniqueId_0;
		FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* L_16;
		L_16 = InterstitialAd_get_InterstitialAdDidFailWithError_m86A66F13A9B01022C830DAB214674B9FF1F17FB1_inline(__this, NULL);
		NullCheck(L_14);
		InterfaceActionInvoker2< int32_t, FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* >::Invoke(8 /* System.Void AudienceNetwork.IInterstitialAdBridge::OnError(System.Int32,AudienceNetwork.FBInterstitialAdBridgeErrorCallback) */, IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var, L_14, L_15, L_16);
		// InterstitialAdBridge.Instance.OnWillClose(uniqueId, InterstitialAdWillClose);
		RuntimeObject* L_17 = ((InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_18 = __this->___uniqueId_0;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_19;
		L_19 = InterstitialAd_get_InterstitialAdWillClose_mEF531764761C134455DD517EDC10954BB3CC8901_inline(__this, NULL);
		NullCheck(L_17);
		InterfaceActionInvoker2< int32_t, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* >::Invoke(9 /* System.Void AudienceNetwork.IInterstitialAdBridge::OnWillClose(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback) */, IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var, L_17, L_18, L_19);
		// InterstitialAdBridge.Instance.OnDidClose(uniqueId, InterstitialAdDidClose);
		RuntimeObject* L_20 = ((InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_21 = __this->___uniqueId_0;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_22;
		L_22 = InterstitialAd_get_InterstitialAdDidClose_mEA11D8098A581E106A47BBE022220321CB0263E6_inline(__this, NULL);
		NullCheck(L_20);
		InterfaceActionInvoker2< int32_t, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* >::Invoke(10 /* System.Void AudienceNetwork.IInterstitialAdBridge::OnDidClose(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback) */, IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var, L_20, L_21, L_22);
		// InterstitialAdBridge.Instance.OnActivityDestroyed(uniqueId, InterstitialAdActivityDestroyed);
		RuntimeObject* L_23 = ((InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_24 = __this->___uniqueId_0;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_25;
		L_25 = InterstitialAd_get_InterstitialAdActivityDestroyed_mBFD62998A660D42427F60CF4076E879C5808AAF5_inline(__this, NULL);
		NullCheck(L_23);
		InterfaceActionInvoker2< int32_t, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* >::Invoke(11 /* System.Void AudienceNetwork.IInterstitialAdBridge::OnActivityDestroyed(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback) */, IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var, L_23, L_24, L_25);
	}

IL_00c8:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAd::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Finalize_m0A6235FC25EE5880D347D61CF8B54799CAE772E6 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Dispose(false);
			InterstitialAd_Dispose_mC77C628A99DB1417B1CB91655AED7770717E5DF8(__this, (bool)0, NULL);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAd::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Dispose_m0B61AAA5708A59E9B498AF26E7BCCD4587972527 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dispose(true);
		InterstitialAd_Dispose_mC77C628A99DB1417B1CB91655AED7770717E5DF8(__this, (bool)1, NULL);
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAd::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Dispose_mC77C628A99DB1417B1CB91655AED7770717E5DF8 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, bool ___iAmBeingCalledFromDisposeAndNotFinalize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ACF8BFF4E2718CBCD2657118C379EFBBDD681D2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Interstitial Ad Disposed.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral2ACF8BFF4E2718CBCD2657118C379EFBBDD681D2, NULL);
		// InterstitialAdBridge.Instance.Release(uniqueId);
		il2cpp_codegen_runtime_class_init_inline(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_1 = __this->___uniqueId_0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void AudienceNetwork.IInterstitialAdBridge::Release(System.Int32) */, IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.String AudienceNetwork.InterstitialAd::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InterstitialAd_ToString_m55AD308886B1FAF885A89F7AB978603FBA5B5C65 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD13CA012832E01C928BC8F3641DC11D2828465D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format(
		//            "[InterstitialAd: " +
		//            "PlacementId={0}, " +
		//            "InterstitialAdDidLoad={1}, " +
		//            "InterstitialAdWillLogImpression={2}, " +
		//            "InterstitialAdDidFailWithError={3}, " +
		//            "InterstitialAdDidClick={4}, " +
		//            "InterstitialAdWillClose={5}, " +
		//            "InterstitialAdDidClose={6}], " +
		//            "InterstitialAdActivityDestroyed={7}]",
		//            PlacementId,
		//            InterstitialAdDidLoad,
		//            InterstitialAdWillLogImpression,
		//            InterstitialAdDidFailWithError,
		//            InterstitialAdDidClick,
		//            InterstitialAdWillClose,
		//            InterstitialAdDidClose,
		//            InterstitialAdActivityDestroyed);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2;
		L_2 = InterstitialAd_get_PlacementId_mC1BD108C594367099DEE08B1B85529E84329B117_inline(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_4;
		L_4 = InterstitialAd_get_InterstitialAdDidLoad_mE9EA30A35E2D33E084214A94E99A7C18EB90851B_inline(__this, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_6;
		L_6 = InterstitialAd_get_InterstitialAdWillLogImpression_mBE1AF8E676EF850F9E86A8ED2309E5B554E0A220_inline(__this, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* L_8;
		L_8 = InterstitialAd_get_InterstitialAdDidFailWithError_m86A66F13A9B01022C830DAB214674B9FF1F17FB1_inline(__this, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_10;
		L_10 = InterstitialAd_get_InterstitialAdDidClick_mC16B274285D14D412293CA12B88E1B343383108C_inline(__this, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_12;
		L_12 = InterstitialAd_get_InterstitialAdWillClose_mEF531764761C134455DD517EDC10954BB3CC8901_inline(__this, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_14;
		L_14 = InterstitialAd_get_InterstitialAdDidClose_mEA11D8098A581E106A47BBE022220321CB0263E6_inline(__this, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_16;
		L_16 = InterstitialAd_get_InterstitialAdActivityDestroyed_mBFD62998A660D42427F60CF4076E879C5808AAF5_inline(__this, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteralD13CA012832E01C928BC8F3641DC11D2828465D7, L_15, NULL);
		return L_17;
	}
}
// System.Void AudienceNetwork.InterstitialAd::Register(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Register_m5939306629CA5D011A779590EB1DDC47CCD3F236 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED_m9343CF2029C32EBEE77A1BDEB534C80D561D343A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handler = gameObject.AddComponent<AdHandler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		NullCheck(L_0);
		AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED* L_1;
		L_1 = GameObject_AddComponent_TisAdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED_m9343CF2029C32EBEE77A1BDEB534C80D561D343A(L_0, GameObject_AddComponent_TisAdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED_m9343CF2029C32EBEE77A1BDEB534C80D561D343A_RuntimeMethod_var);
		__this->___handler_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handler_2), (void*)L_1);
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAd::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_m7A1B717DD13EFB6544FD95F50189D20DD02D6741 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform != RuntimePlatform.OSXEditor)
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// InterstitialAdBridge.Instance.Load(uniqueId);
		il2cpp_codegen_runtime_class_init_inline(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_2 = __this->___uniqueId_0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 AudienceNetwork.IInterstitialAdBridge::Load(System.Int32) */, IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}

IL_0019:
	{
		// InterstitialAdDidLoad();
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_4;
		L_4 = InterstitialAd_get_InterstitialAdDidLoad_mE9EA30A35E2D33E084214A94E99A7C18EB90851B_inline(__this, NULL);
		NullCheck(L_4);
		FBInterstitialAdBridgeCallback_Invoke_m3F30ABD6169AB25047BB628CE40340B13014D65F_inline(L_4, NULL);
		// }
		return;
	}
}
// System.Boolean AudienceNetwork.InterstitialAd::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_IsValid_mD7DB971066F9990CF7EB1585AB873946A28D4BB3 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform != RuntimePlatform.OSXEditor)
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		// return (isLoaded && InterstitialAdBridge.Instance.IsValid(uniqueId));
		bool L_1 = __this->___isLoaded_1;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_3 = __this->___uniqueId_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean AudienceNetwork.IInterstitialAdBridge::IsValid(System.Int32) */, IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}

IL_0020:
	{
		return (bool)0;
	}

IL_0022:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void AudienceNetwork.InterstitialAd::LoadAdFromData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAdFromData_m84B2424DDD5CB988DDCEA3189DD929D9E44C2D65 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CLoadAdFromDataU3Eb__44_0_m127FF710F7CA3739591A73D693B2DB3516D7F0CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isLoaded = true;
		__this->___isLoaded_1 = (bool)1;
		// if (InterstitialAdDidLoad != null)
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0;
		L_0 = InterstitialAd_get_InterstitialAdDidLoad_mE9EA30A35E2D33E084214A94E99A7C18EB90851B_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// handler.ExecuteOnMainThread(() =>
		// {
		//     InterstitialAdDidLoad();
		// });
		AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED* L_1 = __this->___handler_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)InterstitialAd_U3CLoadAdFromDataU3Eb__44_0_m127FF710F7CA3739591A73D693B2DB3516D7F0CE_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AdHandler_ExecuteOnMainThread_mB5A3D62F559F7722558B4D2910E78E82CEC9DD8D(L_1, L_2, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Boolean AudienceNetwork.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_Show_m08B5B3AB2F4780C75437CA412B69D77C573C97BB (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return InterstitialAdBridge.Instance.Show(uniqueId);
		il2cpp_codegen_runtime_class_init_inline(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_1 = __this->___uniqueId_0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(3 /* System.Boolean AudienceNetwork.IInterstitialAdBridge::Show(System.Int32) */, IInterstitialAdBridge_t609C0CC0E8313FFE6E0628D260DA10DD333E7231_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void AudienceNetwork.InterstitialAd::ExecuteOnMainThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_ExecuteOnMainThread_m21D0D65976643939F72D64B312D41765BFCD8F32 (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handler)
		AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED* L_0 = __this->___handler_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// handler.ExecuteOnMainThread(action);
		AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED* L_2 = __this->___handler_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___action0;
		NullCheck(L_2);
		AdHandler_ExecuteOnMainThread_mB5A3D62F559F7722558B4D2910E78E82CEC9DD8D(L_2, L_3, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAd::<LoadAdFromData>b__44_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CLoadAdFromDataU3Eb__44_0_m127FF710F7CA3739591A73D693B2DB3516D7F0CE (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	{
		// InterstitialAdDidLoad();
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0;
		L_0 = InterstitialAd_get_InterstitialAdDidLoad_mE9EA30A35E2D33E084214A94E99A7C18EB90851B_inline(__this, NULL);
		NullCheck(L_0);
		FBInterstitialAdBridgeCallback_Invoke_m3F30ABD6169AB25047BB628CE40340B13014D65F_inline(L_0, NULL);
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
// System.Void AudienceNetwork.InterstitialAdBridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridge__ctor_mC4498DE9D762B281CB4E125020358406C4A5F015 (InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72* __this, const RuntimeMethod* method) 
{
	{
		// internal InterstitialAdBridge()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridge::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridge__cctor_mAC5E242235FD817D07F9EACA59669653674D3FC3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = InterstitialAdBridge.CreateInstance();
		RuntimeObject* L_0;
		L_0 = InterstitialAdBridge_CreateInstance_m2396FD04432B8BFFC33E965FBA89EE7FCF486878(NULL);
		((InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
		// }
		return;
	}
}
// AudienceNetwork.IInterstitialAdBridge AudienceNetwork.InterstitialAdBridge::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InterstitialAdBridge_CreateInstance_m2396FD04432B8BFFC33E965FBA89EE7FCF486878 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform != RuntimePlatform.OSXEditor)
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return new InterstitialAdBridgeAndroid();
		InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583* L_1 = (InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583*)il2cpp_codegen_object_new(InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		InterstitialAdBridgeAndroid__ctor_m460A72309A83E7AD2E9E5C2346B5C3B9A4DCABB3(L_1, NULL);
		return L_1;
	}

IL_000d:
	{
		// return new InterstitialAdBridge();
		InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72* L_2 = (InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72*)il2cpp_codegen_object_new(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		InterstitialAdBridge__ctor_mC4498DE9D762B281CB4E125020358406C4A5F015(L_2, NULL);
		return L_2;
	}
}
// System.Int32 AudienceNetwork.InterstitialAdBridge::Create(System.String,AudienceNetwork.InterstitialAd)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterstitialAdBridge_Create_mB13EE8844678509CEC60991B4A0CC5916537B05D (InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72* __this, String_t* ___placementId0, InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* ___InterstitialAd1, const RuntimeMethod* method) 
{
	{
		// return 123;
		return ((int32_t)123);
	}
}
// System.Int32 AudienceNetwork.InterstitialAdBridge::Load(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterstitialAdBridge_Load_mD58B08578D4CE4FB477F210CDE28CE2160D30816 (InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	{
		// return 123;
		return ((int32_t)123);
	}
}
// System.Boolean AudienceNetwork.InterstitialAdBridge::IsValid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAdBridge_IsValid_m376B6FA7D6EE4FCCE7136AEE402A30A3035F4EF9 (InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean AudienceNetwork.InterstitialAdBridge::Show(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAdBridge_Show_m8F5CB88811F6CD9816B890B36A49230A18FAB4A1 (InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridge::Release(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridge_Release_mBB6613D132F7693E9D1F631653990BEAF33526DA (InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridge::OnLoad(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridge_OnLoad_m14B88CE3C1597EC88B58DA0FCD4148ADC4E76974 (InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72* __this, int32_t ___uniqueId0, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___callback1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridge::OnImpression(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridge_OnImpression_m73C004F34821C8851FA924D55DEEC2643839E4DE (InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72* __this, int32_t ___uniqueId0, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___callback1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridge::OnClick(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridge_OnClick_m2E42D22BEBB8956D3CACE868C631AD30D4E162F5 (InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72* __this, int32_t ___uniqueId0, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___callback1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridge::OnError(System.Int32,AudienceNetwork.FBInterstitialAdBridgeErrorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridge_OnError_mF54A5BFC398CE066156A504412926F3784FC018B (InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72* __this, int32_t ___uniqueId0, FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* ___callback1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridge::OnWillClose(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridge_OnWillClose_mDD527746FC96D0751AC35EB0111558F557A9794A (InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72* __this, int32_t ___uniqueId0, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___callback1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridge::OnDidClose(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridge_OnDidClose_mE44E38CCCE7BCEDF029AC0F04223EEFD3B02E06C (InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72* __this, int32_t ___uniqueId0, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___callback1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridge::OnActivityDestroyed(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridge_OnActivityDestroyed_m9E46A949BCFB65E9CE0C158C003C2000F807C004 (InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72* __this, int32_t ___uniqueId0, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___callback1, const RuntimeMethod* method) 
{
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
// UnityEngine.AndroidJavaObject AudienceNetwork.InterstitialAdBridgeAndroid::InterstitialAdForuniqueId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* InterstitialAdBridgeAndroid_InterstitialAdForuniqueId_m4C0EDD7D66BF62FE6F8881856C8323766560065F (InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m55A7A4C3CDBA0C18976E19245173B4014C49D702_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* V_0 = NULL;
	{
		// InterstitialAdContainer interstitialAdContainer = null;
		V_0 = (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB*)NULL;
		// bool success = InterstitialAdBridgeAndroid.interstitialAds.TryGetValue(uniqueId, out interstitialAdContainer);
		il2cpp_codegen_runtime_class_init_inline(InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var);
		Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81* L_0 = ((InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var))->___interstitialAds_1;
		int32_t L_1 = ___uniqueId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m55A7A4C3CDBA0C18976E19245173B4014C49D702(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m55A7A4C3CDBA0C18976E19245173B4014C49D702_RuntimeMethod_var);
		// if (success)
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// return interstitialAdContainer.bridgedInterstitialAd;
		InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* L_3 = V_0;
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = L_3->___bridgedInterstitialAd_3;
		return L_4;
	}

IL_0018:
	{
		// return null;
		return (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
	}
}
// AudienceNetwork.InterstitialAdContainer AudienceNetwork.InterstitialAdBridgeAndroid::InterstitialAdContainerForuniqueId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* InterstitialAdBridgeAndroid_InterstitialAdContainerForuniqueId_mEB1098B0DF87D2B1D829F6CCA1248A2A4CA353AE (InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m55A7A4C3CDBA0C18976E19245173B4014C49D702_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* V_0 = NULL;
	{
		// InterstitialAdContainer interstitialAdContainer = null;
		V_0 = (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB*)NULL;
		// bool success = InterstitialAdBridgeAndroid.interstitialAds.TryGetValue(uniqueId, out interstitialAdContainer);
		il2cpp_codegen_runtime_class_init_inline(InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var);
		Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81* L_0 = ((InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var))->___interstitialAds_1;
		int32_t L_1 = ___uniqueId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m55A7A4C3CDBA0C18976E19245173B4014C49D702(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m55A7A4C3CDBA0C18976E19245173B4014C49D702_RuntimeMethod_var);
		// if (success)
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return interstitialAdContainer;
		InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* L_3 = V_0;
		return L_3;
	}

IL_0013:
	{
		// return null;
		return (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB*)NULL;
	}
}
// System.Int32 AudienceNetwork.InterstitialAdBridgeAndroid::Create(System.String,AudienceNetwork.InterstitialAd)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterstitialAdBridgeAndroid_Create_m8A0A62DD5E860E210F84D9C1805D1369524ABF29 (InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583* __this, String_t* ___placementId0, InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* ___interstitialAd1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA3AD2E15FEFCF17797E22FAE0EE8677A198B6C96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC501FD4CDD92049A95C44A8751A74C4CEE619C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4* V_2 = NULL;
	InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// AdUtility.Prepare();
		AdUtility_Prepare_m15617208BCDE5D73F1897450A4ACCD292F39D7D2(NULL);
		// AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// AndroidJavaObject currentActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		// AndroidJavaObject context = currentActivity.Call<AndroidJavaObject>("getApplicationContext");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_1, _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9, L_2, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_3;
		// AndroidJavaObject bridgedInterstitialAd = new AndroidJavaObject("com.facebook.ads.InterstitialAd", context, placementId);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8 = ___placementId0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_9, _stringLiteralDC501FD4CDD92049A95C44A8751A74C4CEE619C6, L_7, NULL);
		V_1 = L_9;
		// InterstitialAdBridgeListenerProxy proxy = new InterstitialAdBridgeListenerProxy(interstitialAd, bridgedInterstitialAd);
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_10 = ___interstitialAd1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = V_1;
		InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4* L_12 = (InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4*)il2cpp_codegen_object_new(InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		InterstitialAdBridgeListenerProxy__ctor_mEDC5994E2FB87877269C18A90F77A557B8E49A12(L_12, L_10, L_11, NULL);
		V_2 = L_12;
		// InterstitialAdContainer interstitialAdContainer = new InterstitialAdContainer(interstitialAd)
		// {
		//     bridgedInterstitialAd = bridgedInterstitialAd,
		//     listenerProxy = proxy
		// };
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_13 = ___interstitialAd1;
		InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* L_14 = (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB*)il2cpp_codegen_object_new(InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		InterstitialAdContainer__ctor_m9285578CE597222E697741975B7A78DADCE265FF(L_14, L_13, NULL);
		InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* L_15 = L_14;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = V_1;
		NullCheck(L_15);
		L_15->___bridgedInterstitialAd_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___bridgedInterstitialAd_3), (void*)L_16);
		InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* L_17 = L_15;
		InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4* L_18 = V_2;
		NullCheck(L_17);
		L_17->___listenerProxy_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->___listenerProxy_2), (void*)L_18);
		V_3 = L_17;
		// int key = InterstitialAdBridgeAndroid.lastKey;
		il2cpp_codegen_runtime_class_init_inline(InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var);
		int32_t L_19 = ((InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var))->___lastKey_2;
		V_4 = L_19;
		// InterstitialAdBridgeAndroid.interstitialAds.Add(key, interstitialAdContainer);
		Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81* L_20 = ((InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var))->___interstitialAds_1;
		int32_t L_21 = V_4;
		InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* L_22 = V_3;
		NullCheck(L_20);
		Dictionary_2_Add_mA3AD2E15FEFCF17797E22FAE0EE8677A198B6C96(L_20, L_21, L_22, Dictionary_2_Add_mA3AD2E15FEFCF17797E22FAE0EE8677A198B6C96_RuntimeMethod_var);
		// InterstitialAdBridgeAndroid.lastKey++;
		int32_t L_23 = ((InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var))->___lastKey_2;
		((InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var))->___lastKey_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		// return key;
		int32_t L_24 = V_4;
		return L_24;
	}
}
// System.Int32 AudienceNetwork.InterstitialAdBridgeAndroid::Load(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InterstitialAdBridgeAndroid_Load_mBEBA7BBEA3CC3AFC1579B6319F87212F7EFDC168 (InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* V_0 = NULL;
	{
		// AdUtility.Prepare();
		AdUtility_Prepare_m15617208BCDE5D73F1897450A4ACCD292F39D7D2(NULL);
		// InterstitialAdContainer interstitialAdContainer = InterstitialAdContainerForuniqueId(uniqueId);
		int32_t L_0 = ___uniqueId0;
		InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* L_1;
		L_1 = InterstitialAdBridgeAndroid_InterstitialAdContainerForuniqueId_mEB1098B0DF87D2B1D829F6CCA1248A2A4CA353AE(__this, L_0, NULL);
		V_0 = L_1;
		// if (interstitialAdContainer != null)
		InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// interstitialAdContainer.Load();
		InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* L_3 = V_0;
		NullCheck(L_3);
		InterstitialAdContainer_Load_m4E79DDE1F3DE129C1DFDAEE9A1A2127033A59780(L_3, NULL);
	}

IL_0016:
	{
		// return uniqueId;
		int32_t L_4 = ___uniqueId0;
		return L_4;
	}
}
// System.Boolean AudienceNetwork.InterstitialAdBridgeAndroid::IsValid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAdBridgeAndroid_IsValid_m04130F2CC2E2236D36839C889B00A8E3B6B55436 (InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FFECE80FF999B634D2394E613D903960BA02496);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// AndroidJavaObject interstitialAd = InterstitialAdForuniqueId(uniqueId);
		int32_t L_0 = ___uniqueId0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = InterstitialAdBridgeAndroid_InterstitialAdForuniqueId_m4C0EDD7D66BF62FE6F8881856C8323766560065F(__this, L_0, NULL);
		V_0 = L_1;
		// if (interstitialAd != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return !interstitialAd.Call<bool>("isAdInvalidated");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_3);
		bool L_5;
		L_5 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_3, _stringLiteral1FFECE80FF999B634D2394E613D903960BA02496, L_4, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_001f:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean AudienceNetwork.InterstitialAdBridgeAndroid::Show(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAdBridgeAndroid_Show_m082052D33508BAE200EBCBAB9F0C3D898EA13700 (InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// AndroidJavaObject interstitialAd = InterstitialAdForuniqueId(uniqueId);
		int32_t L_0 = ___uniqueId0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = InterstitialAdBridgeAndroid_InterstitialAdForuniqueId_m4C0EDD7D66BF62FE6F8881856C8323766560065F(__this, L_0, NULL);
		V_0 = L_1;
		// if (interstitialAd != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// return interstitialAd.Call<bool>("show");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_3);
		bool L_5;
		L_5 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_3, _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192, L_4, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return L_5;
	}

IL_001c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeAndroid::Release(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeAndroid_Release_m40073243FA382356D5FC0A690E93E1102B9CA8D6 (InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mD670DCE26CB32ED6DFFFE8FB8A818A5BC88462CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// AndroidJavaObject interstitialAd = InterstitialAdForuniqueId(uniqueId);
		int32_t L_0 = ___uniqueId0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = InterstitialAdBridgeAndroid_InterstitialAdForuniqueId_m4C0EDD7D66BF62FE6F8881856C8323766560065F(__this, L_0, NULL);
		V_0 = L_1;
		// if (interstitialAd != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// interstitialAd.Call("destroy");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_3, _stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF, L_4, NULL);
	}

IL_001b:
	{
		// InterstitialAdBridgeAndroid.interstitialAds.Remove(uniqueId);
		il2cpp_codegen_runtime_class_init_inline(InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var);
		Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81* L_5 = ((InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var))->___interstitialAds_1;
		int32_t L_6 = ___uniqueId0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_Remove_mD670DCE26CB32ED6DFFFE8FB8A818A5BC88462CC(L_5, L_6, Dictionary_2_Remove_mD670DCE26CB32ED6DFFFE8FB8A818A5BC88462CC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeAndroid::OnLoad(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeAndroid_OnLoad_m6A880B4E952604B2632E219A4E78F29ACDA9C464 (InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583* __this, int32_t ___uniqueId0, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___callback1, const RuntimeMethod* method) 
{
	{
		// public override void OnLoad(int uniqueId, FBInterstitialAdBridgeCallback callback) { }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeAndroid::OnImpression(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeAndroid_OnImpression_m0B98F118C95DF9A2C9EE8A4B6EA8492AB743E8A7 (InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583* __this, int32_t ___uniqueId0, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___callback1, const RuntimeMethod* method) 
{
	{
		// public override void OnImpression(int uniqueId, FBInterstitialAdBridgeCallback callback) { }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeAndroid::OnClick(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeAndroid_OnClick_mE27AB3D9F8840EEA2ACA4D817575594BA7020AE1 (InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583* __this, int32_t ___uniqueId0, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___callback1, const RuntimeMethod* method) 
{
	{
		// public override void OnClick(int uniqueId, FBInterstitialAdBridgeCallback callback) { }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeAndroid::OnError(System.Int32,AudienceNetwork.FBInterstitialAdBridgeErrorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeAndroid_OnError_m81E40982D673123A5534736FBD6F14C0570064DC (InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583* __this, int32_t ___uniqueId0, FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* ___callback1, const RuntimeMethod* method) 
{
	{
		// public override void OnError(int uniqueId, FBInterstitialAdBridgeErrorCallback callback) { }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeAndroid::OnWillClose(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeAndroid_OnWillClose_mCAD0EFE2DBF5D9A996EA2E8E9ABD8B8F7D9B2E1E (InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583* __this, int32_t ___uniqueId0, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___callback1, const RuntimeMethod* method) 
{
	{
		// public override void OnWillClose(int uniqueId, FBInterstitialAdBridgeCallback callback) { }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeAndroid::OnDidClose(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeAndroid_OnDidClose_mF1A238E668B7F580C5D3D7EE7AF825E3112EB278 (InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583* __this, int32_t ___uniqueId0, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___callback1, const RuntimeMethod* method) 
{
	{
		// public override void OnDidClose(int uniqueId, FBInterstitialAdBridgeCallback callback) { }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeAndroid::OnActivityDestroyed(System.Int32,AudienceNetwork.FBInterstitialAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeAndroid_OnActivityDestroyed_mEB7032270E5ABB4C288C5BDE5B979D9384C1FEB8 (InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583* __this, int32_t ___uniqueId0, FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* ___callback1, const RuntimeMethod* method) 
{
	{
		// public override void OnActivityDestroyed(int uniqueId, FBInterstitialAdBridgeCallback callback) { }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeAndroid__ctor_m460A72309A83E7AD2E9E5C2346B5C3B9A4DCABB3 (InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(InterstitialAdBridge_tBB066FB39E1525BA6F17BF698D8DD7259E44FC72_il2cpp_TypeInfo_var);
		InterstitialAdBridge__ctor_mC4498DE9D762B281CB4E125020358406C4A5F015(__this, NULL);
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeAndroid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeAndroid__cctor_m2792F71CC1740FFAF90DA5A0F5316811C783062A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m813C43A5BEFE83061F292C5122DE58A186FB9347_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<int, InterstitialAdContainer> interstitialAds = new Dictionary<int, InterstitialAdContainer>();
		Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81* L_0 = (Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81*)il2cpp_codegen_object_new(Dictionary_2_t033D54904B68703AB8268DF3431A590684C86C81_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m813C43A5BEFE83061F292C5122DE58A186FB9347(L_0, Dictionary_2__ctor_m813C43A5BEFE83061F292C5122DE58A186FB9347_RuntimeMethod_var);
		((InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var))->___interstitialAds_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_StaticFields*)il2cpp_codegen_static_fields_for(InterstitialAdBridgeAndroid_t3C132FD3097ABB2E2634F34C1C5147259C3AB583_il2cpp_TypeInfo_var))->___interstitialAds_1), (void*)L_0);
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
// AudienceNetwork.InterstitialAd AudienceNetwork.InterstitialAdContainer::get_interstitialAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* InterstitialAdContainer_get_interstitialAd_mB67B6A0B101A0824B95B32D247601845F4109678 (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* __this, const RuntimeMethod* method) 
{
	{
		// internal InterstitialAd interstitialAd { get; set; }
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_0 = __this->___U3CinterstitialAdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void AudienceNetwork.InterstitialAdContainer::set_interstitialAd(AudienceNetwork.InterstitialAd)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdContainer_set_interstitialAd_mA2B697E08CAAECD4C448BC564225A11354D9A0B1 (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* __this, InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* ___value0, const RuntimeMethod* method) 
{
	{
		// internal InterstitialAd interstitialAd { get; set; }
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_0 = ___value0;
		__this->___U3CinterstitialAdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinterstitialAdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// AudienceNetwork.FBInterstitialAdBridgeCallback AudienceNetwork.InterstitialAdContainer::get_onLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAdContainer_get_onLoad_m9F93DDB54D9899ED455FF641B4E04DBCBA6D9070 (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* __this, const RuntimeMethod* method) 
{
	{
		// internal FBInterstitialAdBridgeCallback onLoad { get; set; }
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0 = __this->___U3ConLoadU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void AudienceNetwork.InterstitialAdContainer::.ctor(AudienceNetwork.InterstitialAd)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdContainer__ctor_m9285578CE597222E697741975B7A78DADCE265FF (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* __this, InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* ___interstitialAd0, const RuntimeMethod* method) 
{
	{
		// internal InterstitialAdContainer(InterstitialAd interstitialAd)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.interstitialAd = interstitialAd;
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_0 = ___interstitialAd0;
		InterstitialAdContainer_set_interstitialAd_mA2B697E08CAAECD4C448BC564225A11354D9A0B1_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.String AudienceNetwork.InterstitialAdContainer::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InterstitialAdContainer_ToString_m3265D23A780A4C5D2149C78A12771DB437BC7A3A (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EAABAA21F597376CA154A9CB486231FAA379F3A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("[InterstitialAdContainer: interstitialAd={0}, onLoad={1}]", interstitialAd, onLoad);
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_0;
		L_0 = InterstitialAdContainer_get_interstitialAd_mB67B6A0B101A0824B95B32D247601845F4109678_inline(__this, NULL);
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_1;
		L_1 = InterstitialAdContainer_get_onLoad_m9F93DDB54D9899ED455FF641B4E04DBCBA6D9070_inline(__this, NULL);
		String_t* L_2;
		L_2 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral2EAABAA21F597376CA154A9CB486231FAA379F3A, L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.AndroidJavaObject AudienceNetwork.InterstitialAdContainer::LoadAdConfig(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* InterstitialAdContainer_LoadAdConfig_mB1749ED116522293AE6727F5938E9865754B7C74 (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* __this, String_t* ___bidPayload0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354C422C03982C21E9EA651D4447889F38C34E83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D5AFDED92489AAB1C85E91C1BC00C93358A7F2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFA9E316B423D552D5B0786D7690E94D1021AA40);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// AndroidJavaObject configBuilder = bridgedInterstitialAd.Call<AndroidJavaObject>("buildLoadAdConfig");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bridgedInterstitialAd_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteralCFA9E316B423D552D5B0786D7690E94D1021AA40, L_1, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_2;
		// configBuilder.Call<AndroidJavaObject>("withAdListener", listenerProxy);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* L_6 = __this->___listenerProxy_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_3, _stringLiteral354C422C03982C21E9EA651D4447889F38C34E83, L_5, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// if (bidPayload != null)
		String_t* L_8 = ___bidPayload0;
		if (!L_8)
		{
			goto IL_004a;
		}
	}
	{
		// configBuilder.Call<AndroidJavaObject>("withBid", bidPayload);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		String_t* L_12 = ___bidPayload0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		NullCheck(L_9);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13;
		L_13 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_9, _stringLiteral5D5AFDED92489AAB1C85E91C1BC00C93358A7F2C, L_11, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
	}

IL_004a:
	{
		// return configBuilder.Call<AndroidJavaObject>("build");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15;
		L_15 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_14);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16;
		L_16 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_14, _stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728, L_15, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		return L_16;
	}
}
// System.Void AudienceNetwork.InterstitialAdContainer::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdContainer_Load_m4E79DDE1F3DE129C1DFDAEE9A1A2127033A59780 (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* __this, const RuntimeMethod* method) 
{
	{
		// Load(null);
		InterstitialAdContainer_Load_m9655CA8FE8FFE6BD73186FDAC2006815E7431748(__this, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdContainer::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdContainer_Load_m9655CA8FE8FFE6BD73186FDAC2006815E7431748 (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* __this, String_t* ___bidPayload0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42C8D8A4F88528F5E036DABA2C381FD96B56375F);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// AndroidJavaObject loadConfig = LoadAdConfig(bidPayload);
		String_t* L_0 = ___bidPayload0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = InterstitialAdContainer_LoadAdConfig_mB1749ED116522293AE6727F5938E9865754B7C74(__this, L_0, NULL);
		V_0 = L_1;
		// bridgedInterstitialAd.Call("loadAd", loadConfig);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = __this->___bridgedInterstitialAd_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteral42C8D8A4F88528F5E036DABA2C381FD96B56375F, L_4, NULL);
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
// System.Void AudienceNetwork.InterstitialAdBridgeListenerProxy::.ctor(AudienceNetwork.InterstitialAd,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeListenerProxy__ctor_mEDC5994E2FB87877269C18A90F77A557B8E49A12 (InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4* __this, InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* ___interstitialAd0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___bridgedInterstitialAd1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral819D6596E55D94992EEDBDC81323735156EF2B7E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("com.facebook.ads.InterstitialAdExtendedListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral819D6596E55D94992EEDBDC81323735156EF2B7E, NULL);
		// this.interstitialAd = interstitialAd;
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_0 = ___interstitialAd0;
		__this->___interstitialAd_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___interstitialAd_4), (void*)L_0);
		// this.bridgedInterstitialAd = bridgedInterstitialAd;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___bridgedInterstitialAd1;
		__this->___bridgedInterstitialAd_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bridgedInterstitialAd_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeListenerProxy::onError(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeListenerProxy_onError_m3CDEC9A21F6B6174C929A858D01AA096185BA32B (InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ad0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3ConErrorU3Eb__0_mEC73CBD766584959C3C64646C811F7A0DFA36DF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t4A5A3A90AF7FC1ADE6CA4D4CF236B96D4C14440E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral413A6C17FD7A7B815786D74A854EDAC1083FFCAC);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t4A5A3A90AF7FC1ADE6CA4D4CF236B96D4C14440E* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t4A5A3A90AF7FC1ADE6CA4D4CF236B96D4C14440E* L_0 = (U3CU3Ec__DisplayClass3_0_t4A5A3A90AF7FC1ADE6CA4D4CF236B96D4C14440E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t4A5A3A90AF7FC1ADE6CA4D4CF236B96D4C14440E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m17A373D4CDD9E87FE5DDB3A91CDAFC85D8D01F3A(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t4A5A3A90AF7FC1ADE6CA4D4CF236B96D4C14440E* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// string errorMessage = error.Call<string>("getErrorMessage");
		U3CU3Ec__DisplayClass3_0_t4A5A3A90AF7FC1ADE6CA4D4CF236B96D4C14440E* L_2 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ___error1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_3);
		String_t* L_5;
		L_5 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_3, _stringLiteral413A6C17FD7A7B815786D74A854EDAC1083FFCAC, L_4, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___errorMessage_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___errorMessage_1), (void*)L_5);
		// if (interstitialAd.InterstitialAdDidFailWithError != null)
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_6 = __this->___interstitialAd_4;
		NullCheck(L_6);
		FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* L_7;
		L_7 = InterstitialAd_get_InterstitialAdDidFailWithError_m86A66F13A9B01022C830DAB214674B9FF1F17FB1_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// interstitialAd.ExecuteOnMainThread(() =>
		// {
		//     interstitialAd.InterstitialAdDidFailWithError(errorMessage);
		// });
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_8 = __this->___interstitialAd_4;
		U3CU3Ec__DisplayClass3_0_t4A5A3A90AF7FC1ADE6CA4D4CF236B96D4C14440E* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3ConErrorU3Eb__0_mEC73CBD766584959C3C64646C811F7A0DFA36DF3_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterstitialAd_ExecuteOnMainThread_m21D0D65976643939F72D64B312D41765BFCD8F32(L_8, L_10, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeListenerProxy::onAdLoaded(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeListenerProxy_onAdLoaded_m841EE1259F87047344A939CCAA0FB7C68A372C81 (InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ad0, const RuntimeMethod* method) 
{
	{
		// interstitialAd.LoadAdFromData();
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_0 = __this->___interstitialAd_4;
		NullCheck(L_0);
		InterstitialAd_LoadAdFromData_m84B2424DDD5CB988DDCEA3189DD929D9E44C2D65(L_0, NULL);
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeListenerProxy::onAdClicked(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeListenerProxy_onAdClicked_m5B392F3E55F4267EDA75726A9D4483E49AAF2B44 (InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ad0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridgeListenerProxy_U3ConAdClickedU3Eb__5_0_m581ABB927E5DEB5F0A4D7C4E0A1AAC9D525311A0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (interstitialAd.InterstitialAdDidClick != null)
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_0 = __this->___interstitialAd_4;
		NullCheck(L_0);
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_1;
		L_1 = InterstitialAd_get_InterstitialAdDidClick_mC16B274285D14D412293CA12B88E1B343383108C_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// interstitialAd.ExecuteOnMainThread(() =>
		// {
		//     interstitialAd.InterstitialAdDidClick();
		// });
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_2 = __this->___interstitialAd_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)InterstitialAdBridgeListenerProxy_U3ConAdClickedU3Eb__5_0_m581ABB927E5DEB5F0A4D7C4E0A1AAC9D525311A0_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterstitialAd_ExecuteOnMainThread_m21D0D65976643939F72D64B312D41765BFCD8F32(L_2, L_3, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeListenerProxy::onInterstitialDisplayed(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeListenerProxy_onInterstitialDisplayed_m739428DD4A06C7B90C9D69C8036D128A24F1D9E8 (InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ad0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeListenerProxy::onInterstitialDismissed(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeListenerProxy_onInterstitialDismissed_m519B89D262E6C05A62369465C607A0138881C419 (InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ad0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridgeListenerProxy_U3ConInterstitialDismissedU3Eb__7_0_m92362D7DFDDFA1FDAF75A331EEF152E6BCD47D51_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (interstitialAd.InterstitialAdDidClose != null)
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_0 = __this->___interstitialAd_4;
		NullCheck(L_0);
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_1;
		L_1 = InterstitialAd_get_InterstitialAdDidClose_mEA11D8098A581E106A47BBE022220321CB0263E6_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// interstitialAd.ExecuteOnMainThread(() =>
		// {
		//     interstitialAd.InterstitialAdDidClose();
		// });
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_2 = __this->___interstitialAd_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)InterstitialAdBridgeListenerProxy_U3ConInterstitialDismissedU3Eb__7_0_m92362D7DFDDFA1FDAF75A331EEF152E6BCD47D51_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterstitialAd_ExecuteOnMainThread_m21D0D65976643939F72D64B312D41765BFCD8F32(L_2, L_3, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeListenerProxy::onLoggingImpression(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeListenerProxy_onLoggingImpression_m805133697A706BA21FDA0C87F4B1BFC15E976C8B (InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ad0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridgeListenerProxy_U3ConLoggingImpressionU3Eb__8_0_mAE0853000EAF6AFC85807386F86E689EE11D03FA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (interstitialAd.InterstitialAdWillLogImpression != null)
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_0 = __this->___interstitialAd_4;
		NullCheck(L_0);
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_1;
		L_1 = InterstitialAd_get_InterstitialAdWillLogImpression_mBE1AF8E676EF850F9E86A8ED2309E5B554E0A220_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// interstitialAd.ExecuteOnMainThread(() =>
		// {
		//     interstitialAd.InterstitialAdWillLogImpression();
		// });
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_2 = __this->___interstitialAd_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)InterstitialAdBridgeListenerProxy_U3ConLoggingImpressionU3Eb__8_0_mAE0853000EAF6AFC85807386F86E689EE11D03FA_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterstitialAd_ExecuteOnMainThread_m21D0D65976643939F72D64B312D41765BFCD8F32(L_2, L_3, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeListenerProxy::onInterstitialActivityDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeListenerProxy_onInterstitialActivityDestroyed_mC047D9671AA86089E66372F8757EAD02B7DE602C (InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAdBridgeListenerProxy_U3ConInterstitialActivityDestroyedU3Eb__9_0_m0BAF6003F12E42B6CC2089FE97DF1D551BB77009_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (interstitialAd.InterstitialAdActivityDestroyed != null)
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_0 = __this->___interstitialAd_4;
		NullCheck(L_0);
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_1;
		L_1 = InterstitialAd_get_InterstitialAdActivityDestroyed_mBFD62998A660D42427F60CF4076E879C5808AAF5_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// interstitialAd.ExecuteOnMainThread(() =>
		// {
		//     interstitialAd.InterstitialAdActivityDestroyed();
		// });
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_2 = __this->___interstitialAd_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)InterstitialAdBridgeListenerProxy_U3ConInterstitialActivityDestroyedU3Eb__9_0_m0BAF6003F12E42B6CC2089FE97DF1D551BB77009_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InterstitialAd_ExecuteOnMainThread_m21D0D65976643939F72D64B312D41765BFCD8F32(L_2, L_3, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeListenerProxy::<onAdClicked>b__5_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeListenerProxy_U3ConAdClickedU3Eb__5_0_m581ABB927E5DEB5F0A4D7C4E0A1AAC9D525311A0 (InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4* __this, const RuntimeMethod* method) 
{
	{
		// interstitialAd.InterstitialAdDidClick();
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_0 = __this->___interstitialAd_4;
		NullCheck(L_0);
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_1;
		L_1 = InterstitialAd_get_InterstitialAdDidClick_mC16B274285D14D412293CA12B88E1B343383108C_inline(L_0, NULL);
		NullCheck(L_1);
		FBInterstitialAdBridgeCallback_Invoke_m3F30ABD6169AB25047BB628CE40340B13014D65F_inline(L_1, NULL);
		// });
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeListenerProxy::<onInterstitialDismissed>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeListenerProxy_U3ConInterstitialDismissedU3Eb__7_0_m92362D7DFDDFA1FDAF75A331EEF152E6BCD47D51 (InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4* __this, const RuntimeMethod* method) 
{
	{
		// interstitialAd.InterstitialAdDidClose();
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_0 = __this->___interstitialAd_4;
		NullCheck(L_0);
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_1;
		L_1 = InterstitialAd_get_InterstitialAdDidClose_mEA11D8098A581E106A47BBE022220321CB0263E6_inline(L_0, NULL);
		NullCheck(L_1);
		FBInterstitialAdBridgeCallback_Invoke_m3F30ABD6169AB25047BB628CE40340B13014D65F_inline(L_1, NULL);
		// });
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeListenerProxy::<onLoggingImpression>b__8_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeListenerProxy_U3ConLoggingImpressionU3Eb__8_0_mAE0853000EAF6AFC85807386F86E689EE11D03FA (InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4* __this, const RuntimeMethod* method) 
{
	{
		// interstitialAd.InterstitialAdWillLogImpression();
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_0 = __this->___interstitialAd_4;
		NullCheck(L_0);
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_1;
		L_1 = InterstitialAd_get_InterstitialAdWillLogImpression_mBE1AF8E676EF850F9E86A8ED2309E5B554E0A220_inline(L_0, NULL);
		NullCheck(L_1);
		FBInterstitialAdBridgeCallback_Invoke_m3F30ABD6169AB25047BB628CE40340B13014D65F_inline(L_1, NULL);
		// });
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeListenerProxy::<onInterstitialActivityDestroyed>b__9_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAdBridgeListenerProxy_U3ConInterstitialActivityDestroyedU3Eb__9_0_m0BAF6003F12E42B6CC2089FE97DF1D551BB77009 (InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4* __this, const RuntimeMethod* method) 
{
	{
		// interstitialAd.InterstitialAdActivityDestroyed();
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_0 = __this->___interstitialAd_4;
		NullCheck(L_0);
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_1;
		L_1 = InterstitialAd_get_InterstitialAdActivityDestroyed_mBFD62998A660D42427F60CF4076E879C5808AAF5_inline(L_0, NULL);
		NullCheck(L_1);
		FBInterstitialAdBridgeCallback_Invoke_m3F30ABD6169AB25047BB628CE40340B13014D65F_inline(L_1, NULL);
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
// System.Void AudienceNetwork.InterstitialAdBridgeListenerProxy/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m17A373D4CDD9E87FE5DDB3A91CDAFC85D8D01F3A (U3CU3Ec__DisplayClass3_0_t4A5A3A90AF7FC1ADE6CA4D4CF236B96D4C14440E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AudienceNetwork.InterstitialAdBridgeListenerProxy/<>c__DisplayClass3_0::<onError>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3ConErrorU3Eb__0_mEC73CBD766584959C3C64646C811F7A0DFA36DF3 (U3CU3Ec__DisplayClass3_0_t4A5A3A90AF7FC1ADE6CA4D4CF236B96D4C14440E* __this, const RuntimeMethod* method) 
{
	{
		// interstitialAd.InterstitialAdDidFailWithError(errorMessage);
		InterstitialAdBridgeListenerProxy_t0E1800AE40D08DF0AC5A2EA3B69934EDB7CF5FA4* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_1 = L_0->___interstitialAd_4;
		NullCheck(L_1);
		FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* L_2;
		L_2 = InterstitialAd_get_InterstitialAdDidFailWithError_m86A66F13A9B01022C830DAB214674B9FF1F17FB1_inline(L_1, NULL);
		String_t* L_3 = __this->___errorMessage_1;
		NullCheck(L_2);
		FBInterstitialAdBridgeErrorCallback_Invoke_m81FC8F00C6229EBBDDB5FD87D85F838113E2B2BB_inline(L_2, L_3, NULL);
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
void FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_Multicast(FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* currentDelegate = reinterpret_cast<FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_Open(FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_OpenStaticInvoker(FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_ClosedStaticInvoker(FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041 (FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void AudienceNetwork.FBRewardedVideoAdBridgeCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBRewardedVideoAdBridgeCallback__ctor_mE29E98F4491DEE39534279F45BFD015E402E2CBB (FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_Open;
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
	__this->___extra_arg_5 = (intptr_t)&FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_Multicast;
}
// System.Void AudienceNetwork.FBRewardedVideoAdBridgeCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA (FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* __this, const RuntimeMethod* method) 
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
void FBRewardedVideoAdBridgeErrorCallback_Invoke_m0E61ADCF56E4F80B6587C6F89A1D4A84A7865633_Multicast(FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* __this, String_t* ___error0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* currentDelegate = reinterpret_cast<FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___error0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void FBRewardedVideoAdBridgeErrorCallback_Invoke_m0E61ADCF56E4F80B6587C6F89A1D4A84A7865633_Open(FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* __this, String_t* ___error0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___error0, method);
}
void FBRewardedVideoAdBridgeErrorCallback_Invoke_m0E61ADCF56E4F80B6587C6F89A1D4A84A7865633_OpenStaticInvoker(FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* __this, String_t* ___error0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___error0);
}
void FBRewardedVideoAdBridgeErrorCallback_Invoke_m0E61ADCF56E4F80B6587C6F89A1D4A84A7865633_ClosedStaticInvoker(FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* __this, String_t* ___error0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___error0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0 (FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* __this, String_t* ___error0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___error0' to native representation
	char* ____error0_marshaled = NULL;
	____error0_marshaled = il2cpp_codegen_marshal_string(___error0);

	// Native function invocation
	il2cppPInvokeFunc(____error0_marshaled);

	// Marshaling cleanup of parameter '___error0' native representation
	il2cpp_codegen_marshal_free(____error0_marshaled);
	____error0_marshaled = NULL;

}
// System.Void AudienceNetwork.FBRewardedVideoAdBridgeErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBRewardedVideoAdBridgeErrorCallback__ctor_m2EB7F01D53D11BEA1A25DE429C9CDE833A73DB90 (FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&FBRewardedVideoAdBridgeErrorCallback_Invoke_m0E61ADCF56E4F80B6587C6F89A1D4A84A7865633_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&FBRewardedVideoAdBridgeErrorCallback_Invoke_m0E61ADCF56E4F80B6587C6F89A1D4A84A7865633_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&FBRewardedVideoAdBridgeErrorCallback_Invoke_m0E61ADCF56E4F80B6587C6F89A1D4A84A7865633_Open;
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
			__this->___invoke_impl_1 = (intptr_t)&FBRewardedVideoAdBridgeErrorCallback_Invoke_m0E61ADCF56E4F80B6587C6F89A1D4A84A7865633_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&FBRewardedVideoAdBridgeErrorCallback_Invoke_m0E61ADCF56E4F80B6587C6F89A1D4A84A7865633_Multicast;
}
// System.Void AudienceNetwork.FBRewardedVideoAdBridgeErrorCallback::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBRewardedVideoAdBridgeErrorCallback_Invoke_m0E61ADCF56E4F80B6587C6F89A1D4A84A7865633 (FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* __this, String_t* ___error0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___error0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String AudienceNetwork.RewardData::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RewardData_get_UserId_m65A779477569BCD25E48431426139A5D57D589D7 (RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* __this, const RuntimeMethod* method) 
{
	{
		// internal get;
		String_t* L_0 = __this->___U3CUserIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void AudienceNetwork.RewardData::set_UserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardData_set_UserId_m227738AF39EDD2099BC7ADFE9465F7F2547AF807 (RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set;
		String_t* L_0 = ___value0;
		__this->___U3CUserIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String AudienceNetwork.RewardData::get_Currency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RewardData_get_Currency_m33F70966C3056F904ACF66B7C5C4AE0222415C28 (RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* __this, const RuntimeMethod* method) 
{
	{
		// internal get;
		String_t* L_0 = __this->___U3CCurrencyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void AudienceNetwork.RewardData::set_Currency(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardData_set_Currency_m724A4AC8CB31CDEFB23662AC67293212EC5D87DE (RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set;
		String_t* L_0 = ___value0;
		__this->___U3CCurrencyU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrencyU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void AudienceNetwork.RewardData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardData__ctor_mC1FD98C75AAFF6E5A223B254D728B5FEA532B79A (RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* __this, const RuntimeMethod* method) 
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
// System.String AudienceNetwork.RewardedVideoAd::get_PlacementId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RewardedVideoAd_get_PlacementId_m79203F67638150A9462933CDF9BA5BF5A96BA4D4 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// public string PlacementId { get; private set; }
		String_t* L_0 = __this->___U3CPlacementIdU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::set_PlacementId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_set_PlacementId_m53135355B631289F71D0A0F219FD33C05D8C9651 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string PlacementId { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CPlacementIdU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlacementIdU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// AudienceNetwork.RewardData AudienceNetwork.RewardedVideoAd::get_RewardData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* RewardedVideoAd_get_RewardData_mF5E3C31190ECDF4033CBD22CFDA4371B733CCF31 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// public RewardData RewardData { get; private set; }
		RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* L_0 = __this->___U3CRewardDataU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::set_RewardData(AudienceNetwork.RewardData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_set_RewardData_mEF09A8875685C2406BF78450FB1422AB837C5556 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* ___value0, const RuntimeMethod* method) 
{
	{
		// public RewardData RewardData { get; private set; }
		RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* L_0 = ___value0;
		__this->___U3CRewardDataU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRewardDataU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdDidLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdDidLoad_m14DFCD4C4DCBFEDB7874AF9ECED60A0E6C5936F7 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdDidLoad;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___rewardedVideoAdDidLoad_5;
		return L_0;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::set_RewardedVideoAdDidLoad(AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_set_RewardedVideoAdDidLoad_mD3F05F7B0089C31E0C2CFD5E77A6F4943F9973B3 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rewardedVideoAdDidLoad = value;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = ___value0;
		__this->___rewardedVideoAdDidLoad_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedVideoAdDidLoad_5), (void*)L_0);
		// RewardedVideoAdBridge.Instance.OnLoad(uniqueId, rewardedVideoAdDidLoad);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_2 = __this->___uniqueId_0;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_3 = __this->___rewardedVideoAdDidLoad_5;
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* >::Invoke(5 /* System.Void AudienceNetwork.IRewardedVideoAdBridge::OnLoad(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// }
		return;
	}
}
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdWillLogImpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdWillLogImpression_mA7468F3067A4D2B844C4420F177F0B2B8B1A4E54 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdWillLogImpression;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___rewardedVideoAdWillLogImpression_6;
		return L_0;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::set_RewardedVideoAdWillLogImpression(AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_set_RewardedVideoAdWillLogImpression_mE2CE0A45C9F32625538A7DE145589CAD42A38D10 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rewardedVideoAdWillLogImpression = value;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = ___value0;
		__this->___rewardedVideoAdWillLogImpression_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedVideoAdWillLogImpression_6), (void*)L_0);
		// RewardedVideoAdBridge.Instance.OnImpression(uniqueId, rewardedVideoAdWillLogImpression);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_2 = __this->___uniqueId_0;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_3 = __this->___rewardedVideoAdWillLogImpression_6;
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* >::Invoke(6 /* System.Void AudienceNetwork.IRewardedVideoAdBridge::OnImpression(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// }
		return;
	}
}
// AudienceNetwork.FBRewardedVideoAdBridgeErrorCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdDidFailWithError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* RewardedVideoAd_get_RewardedVideoAdDidFailWithError_mCB24562902B60225BA782845C1C9020C601F1377 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdDidFailWithError;
		FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* L_0 = __this->___rewardedVideoAdDidFailWithError_7;
		return L_0;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::set_RewardedVideoAdDidFailWithError(AudienceNetwork.FBRewardedVideoAdBridgeErrorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_set_RewardedVideoAdDidFailWithError_mD31F0F4B5DD7213C4ACC9839426B5CCCD420F0FD (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rewardedVideoAdDidFailWithError = value;
		FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* L_0 = ___value0;
		__this->___rewardedVideoAdDidFailWithError_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedVideoAdDidFailWithError_7), (void*)L_0);
		// RewardedVideoAdBridge.Instance.OnError(uniqueId, rewardedVideoAdDidFailWithError);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_2 = __this->___uniqueId_0;
		FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* L_3 = __this->___rewardedVideoAdDidFailWithError_7;
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* >::Invoke(8 /* System.Void AudienceNetwork.IRewardedVideoAdBridge::OnError(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeErrorCallback) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// }
		return;
	}
}
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdDidClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdDidClick_mDDBB5168254A673D4DF48A827A18EAA9EB1A52B2 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdDidClick;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___rewardedVideoAdDidClick_8;
		return L_0;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::set_RewardedVideoAdDidClick(AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_set_RewardedVideoAdDidClick_m711E4D99437375B38D0FF35DE52C70E966D8F590 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rewardedVideoAdDidClick = value;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = ___value0;
		__this->___rewardedVideoAdDidClick_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedVideoAdDidClick_8), (void*)L_0);
		// RewardedVideoAdBridge.Instance.OnClick(uniqueId, rewardedVideoAdDidClick);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_2 = __this->___uniqueId_0;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_3 = __this->___rewardedVideoAdDidClick_8;
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* >::Invoke(7 /* System.Void AudienceNetwork.IRewardedVideoAdBridge::OnClick(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// }
		return;
	}
}
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdWillClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdWillClose_m633DD0E6617B76A06B35201E9E1C1F142C025B55 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdWillClose;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___rewardedVideoAdWillClose_9;
		return L_0;
	}
}
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdDidClose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdDidClose_m722737A392A87EAD0DA8259FE5AD59E934A5C5FB (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdDidClose;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___rewardedVideoAdDidClose_10;
		return L_0;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::set_RewardedVideoAdDidClose(AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_set_RewardedVideoAdDidClose_m56D05187E56AA6707A1B65BE0AF64324D270B768 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rewardedVideoAdDidClose = value;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = ___value0;
		__this->___rewardedVideoAdDidClose_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedVideoAdDidClose_10), (void*)L_0);
		// RewardedVideoAdBridge.Instance.OnDidClose(uniqueId, rewardedVideoAdDidClose);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_2 = __this->___uniqueId_0;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_3 = __this->___rewardedVideoAdDidClose_10;
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* >::Invoke(10 /* System.Void AudienceNetwork.IRewardedVideoAdBridge::OnDidClose(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// }
		return;
	}
}
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdComplete_m462ABD29ECE953884337436F9BB93D1740F16E5B (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdComplete;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___rewardedVideoAdComplete_11;
		return L_0;
	}
}
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdDidSucceed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdDidSucceed_mEB28E3FBDA25E71D6DFF414253E9D22946E53CBA (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdDidSucceed;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___rewardedVideoAdDidSucceed_12;
		return L_0;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::set_RewardedVideoAdDidSucceed(AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_set_RewardedVideoAdDidSucceed_mA080BC9DE3C9C8862BA705ACE24E9B54849B069C (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rewardedVideoAdDidSucceed = value;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = ___value0;
		__this->___rewardedVideoAdDidSucceed_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedVideoAdDidSucceed_12), (void*)L_0);
		// RewardedVideoAdBridge.Instance.OnDidSucceed(uniqueId, rewardedVideoAdDidSucceed);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_2 = __this->___uniqueId_0;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_3 = __this->___rewardedVideoAdDidSucceed_12;
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* >::Invoke(12 /* System.Void AudienceNetwork.IRewardedVideoAdBridge::OnDidSucceed(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// }
		return;
	}
}
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdDidFail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdDidFail_m5B1123EE9B0853395F2AD15F60F4F05D6E0CDEF3 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdDidFail;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___rewardedVideoAdDidFail_13;
		return L_0;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::set_RewardedVideoAdDidFail(AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_set_RewardedVideoAdDidFail_mD1B1F7678B360A3F3C2F05C848B2B892C4D0A432 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rewardedVideoAdDidFail = value;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = ___value0;
		__this->___rewardedVideoAdDidFail_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedVideoAdDidFail_13), (void*)L_0);
		// RewardedVideoAdBridge.Instance.OnDidFail(uniqueId, rewardedVideoAdDidFail);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_2 = __this->___uniqueId_0;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_3 = __this->___rewardedVideoAdDidFail_13;
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* >::Invoke(13 /* System.Void AudienceNetwork.IRewardedVideoAdBridge::OnDidFail(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// }
		return;
	}
}
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAd::get_RewardedVideoAdActivityDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdActivityDestroyed_m246DC2E953D15F6B222829B7D06790A20080B26E (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdActivityDestroyed;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___rewardedVideoAdActivityDestroyed_14;
		return L_0;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::set_RewardedVideoAdActivityDestroyed(AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_set_RewardedVideoAdActivityDestroyed_m1C01E72CAE28FFA9AC1FBFB83A0CFE244B498DEE (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rewardedVideoAdActivityDestroyed = value;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = ___value0;
		__this->___rewardedVideoAdActivityDestroyed_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedVideoAdActivityDestroyed_14), (void*)L_0);
		// RewardedVideoAdBridge.Instance.OnActivityDestroyed(uniqueId, rewardedVideoAdActivityDestroyed);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_2 = __this->___uniqueId_0;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_3 = __this->___rewardedVideoAdActivityDestroyed_14;
		NullCheck(L_1);
		InterfaceActionInvoker2< int32_t, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* >::Invoke(14 /* System.Void AudienceNetwork.IRewardedVideoAdBridge::OnActivityDestroyed(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd__ctor_m206D7E56B15CA641B5F114D76A901BE66FB9BDDE (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, String_t* ___placementId0, const RuntimeMethod* method) 
{
	{
		// public RewardedVideoAd(string placementId) : this(placementId, null)
		String_t* L_0 = ___placementId0;
		RewardedVideoAd__ctor_mA9B4DA4CC7D8848C14A5DCB592DB8FF36EE4819A(__this, L_0, (RewardData_t9B7758D0D6207321E921CC95418332E9FE162812*)NULL, NULL);
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::.ctor(System.String,AudienceNetwork.RewardData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd__ctor_mA9B4DA4CC7D8848C14A5DCB592DB8FF36EE4819A (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, String_t* ___placementId0, RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* ___rewardData1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public RewardedVideoAd(string placementId, RewardData rewardData)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// AudienceNetworkAds.Initialize();
		AudienceNetworkAds_Initialize_m954E003E1265AB495918E9208D88D62D60A14381(NULL);
		// PlacementId = placementId;
		String_t* L_0 = ___placementId0;
		RewardedVideoAd_set_PlacementId_m53135355B631289F71D0A0F219FD33C05D8C9651_inline(__this, L_0, NULL);
		// RewardData = rewardData;
		RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* L_1 = ___rewardData1;
		RewardedVideoAd_set_RewardData_mEF09A8875685C2406BF78450FB1422AB837C5556_inline(__this, L_1, NULL);
		// if (Application.platform != RuntimePlatform.OSXEditor)
		int32_t L_2;
		L_2 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if (!L_2)
		{
			goto IL_0117;
		}
	}
	{
		// uniqueId = RewardedVideoAdBridge.Instance.Create(placementId, RewardData, this);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		String_t* L_4 = ___placementId0;
		RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* L_5;
		L_5 = RewardedVideoAd_get_RewardData_mF5E3C31190ECDF4033CBD22CFDA4371B733CCF31_inline(__this, NULL);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker3< int32_t, String_t*, RewardData_t9B7758D0D6207321E921CC95418332E9FE162812*, RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* >::Invoke(0 /* System.Int32 AudienceNetwork.IRewardedVideoAdBridge::Create(System.String,AudienceNetwork.RewardData,AudienceNetwork.RewardedVideoAd) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_3, L_4, L_5, __this);
		__this->___uniqueId_0 = L_6;
		// RewardedVideoAdBridge.Instance.OnLoad(uniqueId, RewardedVideoAdDidLoad);
		RuntimeObject* L_7 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_8 = __this->___uniqueId_0;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_9;
		L_9 = RewardedVideoAd_get_RewardedVideoAdDidLoad_m14DFCD4C4DCBFEDB7874AF9ECED60A0E6C5936F7_inline(__this, NULL);
		NullCheck(L_7);
		InterfaceActionInvoker2< int32_t, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* >::Invoke(5 /* System.Void AudienceNetwork.IRewardedVideoAdBridge::OnLoad(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		// RewardedVideoAdBridge.Instance.OnImpression(uniqueId, RewardedVideoAdWillLogImpression);
		RuntimeObject* L_10 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_11 = __this->___uniqueId_0;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_12;
		L_12 = RewardedVideoAd_get_RewardedVideoAdWillLogImpression_mA7468F3067A4D2B844C4420F177F0B2B8B1A4E54_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* >::Invoke(6 /* System.Void AudienceNetwork.IRewardedVideoAdBridge::OnImpression(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_10, L_11, L_12);
		// RewardedVideoAdBridge.Instance.OnClick(uniqueId, RewardedVideoAdDidClick);
		RuntimeObject* L_13 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_14 = __this->___uniqueId_0;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_15;
		L_15 = RewardedVideoAd_get_RewardedVideoAdDidClick_mDDBB5168254A673D4DF48A827A18EAA9EB1A52B2_inline(__this, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker2< int32_t, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* >::Invoke(7 /* System.Void AudienceNetwork.IRewardedVideoAdBridge::OnClick(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_13, L_14, L_15);
		// RewardedVideoAdBridge.Instance.OnError(uniqueId, RewardedVideoAdDidFailWithError);
		RuntimeObject* L_16 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_17 = __this->___uniqueId_0;
		FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* L_18;
		L_18 = RewardedVideoAd_get_RewardedVideoAdDidFailWithError_mCB24562902B60225BA782845C1C9020C601F1377_inline(__this, NULL);
		NullCheck(L_16);
		InterfaceActionInvoker2< int32_t, FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* >::Invoke(8 /* System.Void AudienceNetwork.IRewardedVideoAdBridge::OnError(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeErrorCallback) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_16, L_17, L_18);
		// RewardedVideoAdBridge.Instance.OnWillClose(uniqueId, RewardedVideoAdWillClose);
		RuntimeObject* L_19 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_20 = __this->___uniqueId_0;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_21;
		L_21 = RewardedVideoAd_get_RewardedVideoAdWillClose_m633DD0E6617B76A06B35201E9E1C1F142C025B55_inline(__this, NULL);
		NullCheck(L_19);
		InterfaceActionInvoker2< int32_t, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* >::Invoke(9 /* System.Void AudienceNetwork.IRewardedVideoAdBridge::OnWillClose(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_19, L_20, L_21);
		// RewardedVideoAdBridge.Instance.OnDidClose(uniqueId, RewardedVideoAdDidClose);
		RuntimeObject* L_22 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_23 = __this->___uniqueId_0;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_24;
		L_24 = RewardedVideoAd_get_RewardedVideoAdDidClose_m722737A392A87EAD0DA8259FE5AD59E934A5C5FB_inline(__this, NULL);
		NullCheck(L_22);
		InterfaceActionInvoker2< int32_t, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* >::Invoke(10 /* System.Void AudienceNetwork.IRewardedVideoAdBridge::OnDidClose(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_22, L_23, L_24);
		// RewardedVideoAdBridge.Instance.OnComplete(uniqueId, RewardedVideoAdComplete);
		RuntimeObject* L_25 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_26 = __this->___uniqueId_0;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_27;
		L_27 = RewardedVideoAd_get_RewardedVideoAdComplete_m462ABD29ECE953884337436F9BB93D1740F16E5B_inline(__this, NULL);
		NullCheck(L_25);
		InterfaceActionInvoker2< int32_t, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* >::Invoke(11 /* System.Void AudienceNetwork.IRewardedVideoAdBridge::OnComplete(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_25, L_26, L_27);
		// RewardedVideoAdBridge.Instance.OnDidSucceed(uniqueId, RewardedVideoAdDidSucceed);
		RuntimeObject* L_28 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_29 = __this->___uniqueId_0;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_30;
		L_30 = RewardedVideoAd_get_RewardedVideoAdDidSucceed_mEB28E3FBDA25E71D6DFF414253E9D22946E53CBA_inline(__this, NULL);
		NullCheck(L_28);
		InterfaceActionInvoker2< int32_t, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* >::Invoke(12 /* System.Void AudienceNetwork.IRewardedVideoAdBridge::OnDidSucceed(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_28, L_29, L_30);
		// RewardedVideoAdBridge.Instance.OnDidFail(uniqueId, RewardedVideoAdDidFail);
		RuntimeObject* L_31 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_32 = __this->___uniqueId_0;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_33;
		L_33 = RewardedVideoAd_get_RewardedVideoAdDidFail_m5B1123EE9B0853395F2AD15F60F4F05D6E0CDEF3_inline(__this, NULL);
		NullCheck(L_31);
		InterfaceActionInvoker2< int32_t, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* >::Invoke(13 /* System.Void AudienceNetwork.IRewardedVideoAdBridge::OnDidFail(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_31, L_32, L_33);
		// RewardedVideoAdBridge.Instance.OnActivityDestroyed(uniqueId, RewardedVideoAdActivityDestroyed);
		RuntimeObject* L_34 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_35 = __this->___uniqueId_0;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_36;
		L_36 = RewardedVideoAd_get_RewardedVideoAdActivityDestroyed_m246DC2E953D15F6B222829B7D06790A20080B26E_inline(__this, NULL);
		NullCheck(L_34);
		InterfaceActionInvoker2< int32_t, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* >::Invoke(14 /* System.Void AudienceNetwork.IRewardedVideoAdBridge::OnActivityDestroyed(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_34, L_35, L_36);
	}

IL_0117:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_Finalize_m22C43594B72471B683B85FB42576142F5F96FFBA (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// Dispose(false);
			RewardedVideoAd_Dispose_m8C89561619EB587D27F15D234292381492DC3429(__this, (bool)0, NULL);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_Dispose_m0AB77D357A5D1D349C2A61C950582CF5B4DC5E39 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Dispose(true);
		RewardedVideoAd_Dispose_m8C89561619EB587D27F15D234292381492DC3429(__this, (bool)1, NULL);
		// GC.SuppressFinalize(this);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_Dispose_m8C89561619EB587D27F15D234292381492DC3429 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, bool ___iAmBeingCalledFromDisposeAndNotFinalize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1039DBC1D68055D20E181C3DC18F8139F505CE8D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handler)
		AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED* L_0 = __this->___handler_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// handler.RemoveFromParent();
		AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED* L_2 = __this->___handler_2;
		NullCheck(L_2);
		AdHandler_RemoveFromParent_m4227A457574B9EED99906159CCCED8EA84A713EC(L_2, NULL);
	}

IL_0018:
	{
		// Debug.Log("RewardedVideo Ad Disposed.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral1039DBC1D68055D20E181C3DC18F8139F505CE8D, NULL);
		// RewardedVideoAdBridge.Instance.Release(uniqueId);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_4 = __this->___uniqueId_0;
		NullCheck(L_3);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void AudienceNetwork.IRewardedVideoAdBridge::Release(System.Int32) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_3, L_4);
		// }
		return;
	}
}
// System.String AudienceNetwork.RewardedVideoAd::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RewardedVideoAd_ToString_mD8FBAC53DB38CD43A5485AE5F10267518FAB80C2 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F1ED1ED774E29346268C897B0377F45BB1F2BF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format(
		//            "[RewardedVideoAd: " +
		//            "PlacementId={0}, " +
		//            "RewardedVideoAdDidLoad={1}, " +
		//            "RewardedVideoAdWillLogImpression={2}, " +
		//            "RewardedVideoAdDidFailWithError={3}, " +
		//            "RewardedVideoAdDidClick={4}, " +
		//            "RewardedVideoAdWillClose={5}, " +
		//            "RewardedVideoAdDidClose={6}, " +
		//            "RewardedVideoAdComplete={7}, " +
		//            "RewardedVideoAdDidSucceed={8}, " +
		//            "RewardedVideoAdDidFail={9}," +
		//            "RewardedVideoAdActivityDestroyed={10}]",
		//            PlacementId,
		//            RewardedVideoAdDidLoad,
		//            RewardedVideoAdWillLogImpression,
		//            RewardedVideoAdDidFailWithError,
		//            RewardedVideoAdDidClick,
		//            RewardedVideoAdWillClose,
		//            RewardedVideoAdDidClose,
		//            RewardedVideoAdComplete,
		//            RewardedVideoAdDidSucceed,
		//            RewardedVideoAdDidFail,
		//            RewardedVideoAdActivityDestroyed);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2;
		L_2 = RewardedVideoAd_get_PlacementId_m79203F67638150A9462933CDF9BA5BF5A96BA4D4_inline(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_4;
		L_4 = RewardedVideoAd_get_RewardedVideoAdDidLoad_m14DFCD4C4DCBFEDB7874AF9ECED60A0E6C5936F7_inline(__this, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_6;
		L_6 = RewardedVideoAd_get_RewardedVideoAdWillLogImpression_mA7468F3067A4D2B844C4420F177F0B2B8B1A4E54_inline(__this, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* L_8;
		L_8 = RewardedVideoAd_get_RewardedVideoAdDidFailWithError_mCB24562902B60225BA782845C1C9020C601F1377_inline(__this, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_7;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_10;
		L_10 = RewardedVideoAd_get_RewardedVideoAdDidClick_mDDBB5168254A673D4DF48A827A18EAA9EB1A52B2_inline(__this, NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_12;
		L_12 = RewardedVideoAd_get_RewardedVideoAdWillClose_m633DD0E6617B76A06B35201E9E1C1F142C025B55_inline(__this, NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_14;
		L_14 = RewardedVideoAd_get_RewardedVideoAdDidClose_m722737A392A87EAD0DA8259FE5AD59E934A5C5FB_inline(__this, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_16;
		L_16 = RewardedVideoAd_get_RewardedVideoAdComplete_m462ABD29ECE953884337436F9BB93D1740F16E5B_inline(__this, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_18;
		L_18 = RewardedVideoAd_get_RewardedVideoAdDidSucceed_mEB28E3FBDA25E71D6DFF414253E9D22946E53CBA_inline(__this, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_17;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_20;
		L_20 = RewardedVideoAd_get_RewardedVideoAdDidFail_m5B1123EE9B0853395F2AD15F60F4F05D6E0CDEF3_inline(__this, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_19;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_22;
		L_22 = RewardedVideoAd_get_RewardedVideoAdActivityDestroyed_m246DC2E953D15F6B222829B7D06790A20080B26E_inline(__this, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral5F1ED1ED774E29346268C897B0377F45BB1F2BF8, L_21, NULL);
		return L_23;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::Register(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_Register_m35674944BBC1078A4F3ED0EDD97D9A0122AC6F12 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED_m9343CF2029C32EBEE77A1BDEB534C80D561D343A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// handler = gameObject.AddComponent<AdHandler>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		NullCheck(L_0);
		AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED* L_1;
		L_1 = GameObject_AddComponent_TisAdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED_m9343CF2029C32EBEE77A1BDEB534C80D561D343A(L_0, GameObject_AddComponent_TisAdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED_m9343CF2029C32EBEE77A1BDEB534C80D561D343A_RuntimeMethod_var);
		__this->___handler_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handler_2), (void*)L_1);
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_LoadAd_m897ED21843B26D25877E65B5CD87039A09BE27AC (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform != RuntimePlatform.OSXEditor)
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// RewardedVideoAdBridge.Instance.Load(uniqueId);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_2 = __this->___uniqueId_0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 AudienceNetwork.IRewardedVideoAdBridge::Load(System.Int32) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_1, L_2);
		return;
	}

IL_0019:
	{
		// RewardedVideoAdDidLoad();
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_4;
		L_4 = RewardedVideoAd_get_RewardedVideoAdDidLoad_m14DFCD4C4DCBFEDB7874AF9ECED60A0E6C5936F7_inline(__this, NULL);
		NullCheck(L_4);
		FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_inline(L_4, NULL);
		// }
		return;
	}
}
// System.Boolean AudienceNetwork.RewardedVideoAd::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedVideoAd_IsValid_m8AC704631039C4E0EAA441844AF581BAAD7079C1 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform != RuntimePlatform.OSXEditor)
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		// return (isLoaded && RewardedVideoAdBridge.Instance.IsValid(uniqueId));
		bool L_1 = __this->___isLoaded_1;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_3 = __this->___uniqueId_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean AudienceNetwork.IRewardedVideoAdBridge::IsValid(System.Int32) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}

IL_0020:
	{
		return (bool)0;
	}

IL_0022:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::LoadAdFromData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_LoadAdFromData_m144FEDBCA9CA8193453599AFE4F6B99F7E004E06 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAd_U3CLoadAdFromDataU3Eb__61_0_m113C89C79D2E074C458EF1789C2A6D0509C1A566_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isLoaded = true;
		__this->___isLoaded_1 = (bool)1;
		// if (RewardedVideoAdDidLoad != null)
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0;
		L_0 = RewardedVideoAd_get_RewardedVideoAdDidLoad_m14DFCD4C4DCBFEDB7874AF9ECED60A0E6C5936F7_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// handler.ExecuteOnMainThread(() =>
		// {
		//     RewardedVideoAdDidLoad();
		// });
		AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED* L_1 = __this->___handler_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, __this, (intptr_t)((void*)RewardedVideoAd_U3CLoadAdFromDataU3Eb__61_0_m113C89C79D2E074C458EF1789C2A6D0509C1A566_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AdHandler_ExecuteOnMainThread_mB5A3D62F559F7722558B4D2910E78E82CEC9DD8D(L_1, L_2, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Boolean AudienceNetwork.RewardedVideoAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedVideoAd_Show_mC78512D2669EF8B78885DB70C9DE055ED6812585 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return RewardedVideoAdBridge.Instance.Show(uniqueId);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0;
		int32_t L_1 = __this->___uniqueId_0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(3 /* System.Boolean AudienceNetwork.IRewardedVideoAdBridge::Show(System.Int32) */, IRewardedVideoAdBridge_t7F4ED4C66039EA1B06CD1B2DB389BECC0A84CDAE_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::ExecuteOnMainThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_ExecuteOnMainThread_m99D031E76CF4A8F01149AB49ABD035716F24C5CC (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (handler)
		AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED* L_0 = __this->___handler_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// handler.ExecuteOnMainThread(action);
		AdHandler_tC83ED3C4F7FE5C137134B67B70A315235D767BED* L_2 = __this->___handler_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___action0;
		NullCheck(L_2);
		AdHandler_ExecuteOnMainThread_mB5A3D62F559F7722558B4D2910E78E82CEC9DD8D(L_2, L_3, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAd::<LoadAdFromData>b__61_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAd_U3CLoadAdFromDataU3Eb__61_0_m113C89C79D2E074C458EF1789C2A6D0509C1A566 (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// RewardedVideoAdDidLoad();
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0;
		L_0 = RewardedVideoAd_get_RewardedVideoAdDidLoad_m14DFCD4C4DCBFEDB7874AF9ECED60A0E6C5936F7_inline(__this, NULL);
		NullCheck(L_0);
		FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_inline(L_0, NULL);
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
// System.Void AudienceNetwork.RewardedVideoAdBridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridge__ctor_m7604E29BADB7C0685B83F95ABDC2058B104FBC33 (RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50* __this, const RuntimeMethod* method) 
{
	{
		// internal RewardedVideoAdBridge()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridge::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridge__cctor_mEA1F8A863A0BE779B22F9B75FE70D8E1DA787477 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = RewardedVideoAdBridge.CreateInstance();
		RuntimeObject* L_0;
		L_0 = RewardedVideoAdBridge_CreateInstance_m334182F495BAF336C0269CE2CDCE506CD1402881(NULL);
		((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
		// }
		return;
	}
}
// AudienceNetwork.IRewardedVideoAdBridge AudienceNetwork.RewardedVideoAdBridge::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewardedVideoAdBridge_CreateInstance_m334182F495BAF336C0269CE2CDCE506CD1402881 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform != RuntimePlatform.OSXEditor)
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return new RewardedVideoAdBridgeAndroid();
		RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB* L_1 = (RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB*)il2cpp_codegen_object_new(RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RewardedVideoAdBridgeAndroid__ctor_m182C87E5DC2793CD48C108AE8F902B4C94D95BEA(L_1, NULL);
		return L_1;
	}

IL_000d:
	{
		// return new RewardedVideoAdBridge();
		RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50* L_2 = (RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50*)il2cpp_codegen_object_new(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RewardedVideoAdBridge__ctor_m7604E29BADB7C0685B83F95ABDC2058B104FBC33(L_2, NULL);
		return L_2;
	}
}
// System.Int32 AudienceNetwork.RewardedVideoAdBridge::Create(System.String,AudienceNetwork.RewardData,AudienceNetwork.RewardedVideoAd)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RewardedVideoAdBridge_Create_m99D85C52AFF1D290CA11CA0FF10C138320CF582A (RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50* __this, String_t* ___placementId0, RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* ___rewardData1, RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* ___RewardedVideoAd2, const RuntimeMethod* method) 
{
	{
		// return 123;
		return ((int32_t)123);
	}
}
// System.Int32 AudienceNetwork.RewardedVideoAdBridge::Load(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RewardedVideoAdBridge_Load_mDB69D7A91891B09FC908B651A2C36B9DD90FB583 (RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	{
		// return 123;
		return ((int32_t)123);
	}
}
// System.Boolean AudienceNetwork.RewardedVideoAdBridge::IsValid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedVideoAdBridge_IsValid_m0D1E4251E4221DF09D93754E82D03A82DE2DE1B2 (RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean AudienceNetwork.RewardedVideoAdBridge::Show(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedVideoAdBridge_Show_m02B33DA6E0E075748540728653D122CCD0CC9180 (RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridge::Release(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridge_Release_mE58B8ACC66C0A2A01C3EC0E002137774A45F3F62 (RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridge::OnLoad(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridge_OnLoad_m3809EA5A58DE011EFFC22BE822D8169FD15D8C84 (RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50* __this, int32_t ___uniqueId0, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___callback1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridge::OnImpression(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridge_OnImpression_m48FF53D78E76BC2374CFD85A172126DF37A81846 (RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50* __this, int32_t ___uniqueId0, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___callback1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridge::OnClick(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridge_OnClick_m96006AB463F9391090C3FB3C5583C4F5519FC487 (RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50* __this, int32_t ___uniqueId0, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___callback1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridge::OnError(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeErrorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridge_OnError_m77FB4FC98AB36EBE5417B09B46850103F51159E7 (RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50* __this, int32_t ___uniqueId0, FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* ___callback1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridge::OnWillClose(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridge_OnWillClose_mEE1D54D1A99EC68C0A2950EFFF90B1B7188F8B98 (RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50* __this, int32_t ___uniqueId0, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___callback1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridge::OnDidClose(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridge_OnDidClose_m3669C081E894BFDCD94E1F70EBA95297B87F0750 (RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50* __this, int32_t ___uniqueId0, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___callback1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridge::OnComplete(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridge_OnComplete_m5240E0BE8C516470C84CA5152511AAB17FABBFFD (RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50* __this, int32_t ___uniqueId0, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___callback1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridge::OnDidSucceed(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridge_OnDidSucceed_m9831C4C163332DE8C0C9780DC03DF16C6C21025F (RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50* __this, int32_t ___uniqueId0, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___callback1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridge::OnDidFail(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridge_OnDidFail_m7E7C1B81D4BA4D9DB8D35AD67D369ED3B78E2EDB (RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50* __this, int32_t ___uniqueId0, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___callback1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridge::OnActivityDestroyed(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridge_OnActivityDestroyed_m781010FE9596C28F1FE2FF9716B11D3151314737 (RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50* __this, int32_t ___uniqueId0, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___callback1, const RuntimeMethod* method) 
{
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
// UnityEngine.AndroidJavaObject AudienceNetwork.RewardedVideoAdBridgeAndroid::RewardedVideoAdForUniqueId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* RewardedVideoAdBridgeAndroid_RewardedVideoAdForUniqueId_mCF7526C86DE10ED2B75E68C7125C76812F3B5B45 (RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4808DDD51B6C1F946B318D6EB02FD44CEB0333E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* V_0 = NULL;
	{
		// RewardedVideoAdContainer rewardedVideoAdContainer = null;
		V_0 = (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09*)NULL;
		// bool success = RewardedVideoAdBridgeAndroid.rewardedVideoAds.TryGetValue(uniqueId, out rewardedVideoAdContainer);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var);
		Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464* L_0 = ((RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var))->___rewardedVideoAds_1;
		int32_t L_1 = ___uniqueId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m4808DDD51B6C1F946B318D6EB02FD44CEB0333E4(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m4808DDD51B6C1F946B318D6EB02FD44CEB0333E4_RuntimeMethod_var);
		// if (success) {
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// return rewardedVideoAdContainer.bridgedRewardedVideoAd;
		RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* L_3 = V_0;
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = L_3->___bridgedRewardedVideoAd_3;
		return L_4;
	}

IL_0018:
	{
		// return null;
		return (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
	}
}
// AudienceNetwork.RewardedVideoAdContainer AudienceNetwork.RewardedVideoAdBridgeAndroid::RewardedVideoAdContainerForUniqueId(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* RewardedVideoAdBridgeAndroid_RewardedVideoAdContainerForUniqueId_mEBAE25181BBE2474759D9F6820DDC025AF7CBB4E (RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4808DDD51B6C1F946B318D6EB02FD44CEB0333E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* V_0 = NULL;
	{
		// RewardedVideoAdContainer rewardedVideoAdContainer = null;
		V_0 = (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09*)NULL;
		// bool success = RewardedVideoAdBridgeAndroid.rewardedVideoAds.TryGetValue(uniqueId, out rewardedVideoAdContainer);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var);
		Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464* L_0 = ((RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var))->___rewardedVideoAds_1;
		int32_t L_1 = ___uniqueId0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m4808DDD51B6C1F946B318D6EB02FD44CEB0333E4(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m4808DDD51B6C1F946B318D6EB02FD44CEB0333E4_RuntimeMethod_var);
		// if (success) {
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return rewardedVideoAdContainer;
		RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* L_3 = V_0;
		return L_3;
	}

IL_0013:
	{
		// return null;
		return (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09*)NULL;
	}
}
// System.Int32 AudienceNetwork.RewardedVideoAdBridgeAndroid::Create(System.String,AudienceNetwork.RewardData,AudienceNetwork.RewardedVideoAd)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RewardedVideoAdBridgeAndroid_Create_mECA447FDE335FACE5955E834EF89F95A7DA5DC99 (RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB* __this, String_t* ___placementId0, RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* ___rewardData1, RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* ___rewardedVideoAd2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m767C3A9CAF9D1CF95A5F3C4AA51EB437208AA622_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3E7ED5F1A76ECE809E704F33A94EB0D9FDB77B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE81CC33A1577C34A21484F10A0F01D34F228BCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* V_2 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_3 = NULL;
	RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* V_4 = NULL;
	int32_t V_5 = 0;
	{
		// AdUtility.Prepare();
		AdUtility_Prepare_m15617208BCDE5D73F1897450A4ACCD292F39D7D2(NULL);
		// AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		// AndroidJavaObject currentActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		// AndroidJavaObject context = currentActivity.Call<AndroidJavaObject>("getApplicationContext");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_1, _stringLiteral3753DF735E896BD3C9F2E5D3740D83C85D747CF9, L_2, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_3;
		// AndroidJavaObject bridgedRewardedVideoAd = new AndroidJavaObject("com.facebook.ads.RewardedVideoAd", context, placementId);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		String_t* L_8 = ___placementId0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_9, _stringLiteralD3E7ED5F1A76ECE809E704F33A94EB0D9FDB77B1, L_7, NULL);
		V_1 = L_9;
		// RewardedVideoAdBridgeListenerProxy proxy = new RewardedVideoAdBridgeListenerProxy(rewardedVideoAd, bridgedRewardedVideoAd);
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_10 = ___rewardedVideoAd2;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = V_1;
		RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* L_12 = (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428*)il2cpp_codegen_object_new(RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		RewardedVideoAdBridgeListenerProxy__ctor_mBC1A5F16FDED756049E689FBEA193426E117792D(L_12, L_10, L_11, NULL);
		V_2 = L_12;
		// AndroidJavaObject rewardDataObj = null;
		V_3 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		// if (rewardData != null) {
		RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* L_13 = ___rewardData1;
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		// rewardDataObj = new AndroidJavaObject("com.facebook.ads.RewardData", rewardData.UserId, rewardData.Currency);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
		RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* L_16 = ___rewardData1;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = RewardData_get_UserId_m65A779477569BCD25E48431426139A5D57D589D7_inline(L_16, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_15;
		RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* L_19 = ___rewardData1;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = RewardData_get_Currency_m33F70966C3056F904ACF66B7C5C4AE0222415C28_inline(L_19, NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_20);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_21, _stringLiteralEE81CC33A1577C34A21484F10A0F01D34F228BCB, L_18, NULL);
		V_3 = L_21;
	}

IL_0072:
	{
		// RewardedVideoAdContainer rewardedVideoAdContainer = new RewardedVideoAdContainer(rewardedVideoAd)
		// {
		//     bridgedRewardedVideoAd = bridgedRewardedVideoAd,
		//     listenerProxy = proxy,
		//     rewardData = rewardDataObj
		// };
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_22 = ___rewardedVideoAd2;
		RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* L_23 = (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09*)il2cpp_codegen_object_new(RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		RewardedVideoAdContainer__ctor_mC1D05DF8718F12B908BFD9D16F2047C9C7BD4AA5(L_23, L_22, NULL);
		RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* L_24 = L_23;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25 = V_1;
		NullCheck(L_24);
		L_24->___bridgedRewardedVideoAd_3 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->___bridgedRewardedVideoAd_3), (void*)L_25);
		RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* L_26 = L_24;
		RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* L_27 = V_2;
		NullCheck(L_26);
		L_26->___listenerProxy_2 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->___listenerProxy_2), (void*)L_27);
		RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* L_28 = L_26;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29 = V_3;
		NullCheck(L_28);
		L_28->___rewardData_4 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->___rewardData_4), (void*)L_29);
		V_4 = L_28;
		// int key = RewardedVideoAdBridgeAndroid.lastKey;
		il2cpp_codegen_runtime_class_init_inline(RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var);
		int32_t L_30 = ((RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var))->___lastKey_2;
		V_5 = L_30;
		// RewardedVideoAdBridgeAndroid.rewardedVideoAds.Add(key, rewardedVideoAdContainer);
		Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464* L_31 = ((RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var))->___rewardedVideoAds_1;
		int32_t L_32 = V_5;
		RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* L_33 = V_4;
		NullCheck(L_31);
		Dictionary_2_Add_m767C3A9CAF9D1CF95A5F3C4AA51EB437208AA622(L_31, L_32, L_33, Dictionary_2_Add_m767C3A9CAF9D1CF95A5F3C4AA51EB437208AA622_RuntimeMethod_var);
		// RewardedVideoAdBridgeAndroid.lastKey++;
		int32_t L_34 = ((RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var))->___lastKey_2;
		((RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var))->___lastKey_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		// return key;
		int32_t L_35 = V_5;
		return L_35;
	}
}
// System.Int32 AudienceNetwork.RewardedVideoAdBridgeAndroid::Load(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RewardedVideoAdBridgeAndroid_Load_m6DF53C6A3629A9B7BAB5AC5B736454A74E487651 (RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* V_0 = NULL;
	{
		// AdUtility.Prepare();
		AdUtility_Prepare_m15617208BCDE5D73F1897450A4ACCD292F39D7D2(NULL);
		// RewardedVideoAdContainer rewardedVideoAdContainer = RewardedVideoAdContainerForUniqueId(uniqueId);
		int32_t L_0 = ___uniqueId0;
		RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* L_1;
		L_1 = RewardedVideoAdBridgeAndroid_RewardedVideoAdContainerForUniqueId_mEBAE25181BBE2474759D9F6820DDC025AF7CBB4E(__this, L_0, NULL);
		V_0 = L_1;
		// if (rewardedVideoAdContainer != null)
		RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// rewardedVideoAdContainer.Load();
		RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* L_3 = V_0;
		NullCheck(L_3);
		RewardedVideoAdContainer_Load_mCC9D273C25650E07308E2FCAF765474E4B6FB8FF(L_3, NULL);
	}

IL_0016:
	{
		// return uniqueId;
		int32_t L_4 = ___uniqueId0;
		return L_4;
	}
}
// System.Boolean AudienceNetwork.RewardedVideoAdBridgeAndroid::IsValid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedVideoAdBridgeAndroid_IsValid_mABEA2E745E004A988F9D1E54A44AEEC88FE33E3C (RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FFECE80FF999B634D2394E613D903960BA02496);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// AndroidJavaObject rewardedVideoAd = RewardedVideoAdForUniqueId(uniqueId);
		int32_t L_0 = ___uniqueId0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = RewardedVideoAdBridgeAndroid_RewardedVideoAdForUniqueId_mCF7526C86DE10ED2B75E68C7125C76812F3B5B45(__this, L_0, NULL);
		V_0 = L_1;
		// if (rewardedVideoAd != null) {
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return !rewardedVideoAd.Call<bool> ("isAdInvalidated");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_3);
		bool L_5;
		L_5 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_3, _stringLiteral1FFECE80FF999B634D2394E613D903960BA02496, L_4, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}

IL_001f:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean AudienceNetwork.RewardedVideoAdBridgeAndroid::Show(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedVideoAdBridgeAndroid_Show_m66E7441A75B5D14CD20DAB07ACC601BF40DD88BA (RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CShowU3Eb__0_m844C438B2600B7FCBB3E982272DE01502B9E6124_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t003106924C3B2AE8949D45E2C94A770651C8890D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_t003106924C3B2AE8949D45E2C94A770651C8890D* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass10_0_t003106924C3B2AE8949D45E2C94A770651C8890D* L_0 = (U3CU3Ec__DisplayClass10_0_t003106924C3B2AE8949D45E2C94A770651C8890D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t003106924C3B2AE8949D45E2C94A770651C8890D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass10_0__ctor_m75C3B64F838AA94122176BE075E4D06F23466F6F(L_0, NULL);
		V_0 = L_0;
		// RewardedVideoAdContainer container = RewardedVideoAdContainerForUniqueId(uniqueId);
		int32_t L_1 = ___uniqueId0;
		RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* L_2;
		L_2 = RewardedVideoAdBridgeAndroid_RewardedVideoAdContainerForUniqueId_mEBAE25181BBE2474759D9F6820DDC025AF7CBB4E(__this, L_1, NULL);
		// AndroidJavaObject rewardedVideoAd = RewardedVideoAdForUniqueId(uniqueId);
		U3CU3Ec__DisplayClass10_0_t003106924C3B2AE8949D45E2C94A770651C8890D* L_3 = V_0;
		int32_t L_4 = ___uniqueId0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = RewardedVideoAdBridgeAndroid_RewardedVideoAdForUniqueId_mCF7526C86DE10ED2B75E68C7125C76812F3B5B45(__this, L_4, NULL);
		NullCheck(L_3);
		L_3->___rewardedVideoAd_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___rewardedVideoAd_0), (void*)L_5);
		// container.rewardedVideoAd.ExecuteOnMainThread(() => {
		//     if (rewardedVideoAd != null) {
		//         rewardedVideoAd.Call<bool> ("show");
		//     }
		// });
		NullCheck(L_2);
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_6;
		L_6 = RewardedVideoAdContainer_get_rewardedVideoAd_m68C0CB84DAA674C467D1DF65788AB3361889F39F_inline(L_2, NULL);
		U3CU3Ec__DisplayClass10_0_t003106924C3B2AE8949D45E2C94A770651C8890D* L_7 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CShowU3Eb__0_m844C438B2600B7FCBB3E982272DE01502B9E6124_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		RewardedVideoAd_ExecuteOnMainThread_m99D031E76CF4A8F01149AB49ABD035716F24C5CC(L_6, L_8, NULL);
		// return true;
		return (bool)1;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeAndroid::Release(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeAndroid_Release_m312D1DE90460C974B58FA8569DA48AD4C1460E1E (RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB* __this, int32_t ___uniqueId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m7B7699CB893C38F6D6B21BEFA2EB2486B0E35629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// AndroidJavaObject rewardedVideoAd = RewardedVideoAdForUniqueId(uniqueId);
		int32_t L_0 = ___uniqueId0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = RewardedVideoAdBridgeAndroid_RewardedVideoAdForUniqueId_mCF7526C86DE10ED2B75E68C7125C76812F3B5B45(__this, L_0, NULL);
		V_0 = L_1;
		// if (rewardedVideoAd != null) {
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// rewardedVideoAd.Call("destroy");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_3, _stringLiteral8AB05959EA4107F1F91A04CDCDE7E8F07C2F52DF, L_4, NULL);
	}

IL_001b:
	{
		// RewardedVideoAdBridgeAndroid.rewardedVideoAds.Remove(uniqueId);
		il2cpp_codegen_runtime_class_init_inline(RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var);
		Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464* L_5 = ((RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var))->___rewardedVideoAds_1;
		int32_t L_6 = ___uniqueId0;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_Remove_m7B7699CB893C38F6D6B21BEFA2EB2486B0E35629(L_5, L_6, Dictionary_2_Remove_m7B7699CB893C38F6D6B21BEFA2EB2486B0E35629_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeAndroid::OnLoad(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeAndroid_OnLoad_m8943CBDD14EDCFE684860B2AEC92DCD40460473F (RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB* __this, int32_t ___uniqueId0, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___callback1, const RuntimeMethod* method) 
{
	{
		// public override void OnLoad(int uniqueId, FBRewardedVideoAdBridgeCallback callback) {}
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeAndroid::OnImpression(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeAndroid_OnImpression_m7F74A87458FFF2101F5C063B675B39D506A75EC6 (RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB* __this, int32_t ___uniqueId0, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___callback1, const RuntimeMethod* method) 
{
	{
		// public override void OnImpression(int uniqueId, FBRewardedVideoAdBridgeCallback callback) {}
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeAndroid::OnClick(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeAndroid_OnClick_m38EA89E5A2A434E28C18CC4A7096B9694486430F (RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB* __this, int32_t ___uniqueId0, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___callback1, const RuntimeMethod* method) 
{
	{
		// public override void OnClick(int uniqueId, FBRewardedVideoAdBridgeCallback callback) {}
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeAndroid::OnError(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeErrorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeAndroid_OnError_m5BC36305EBD0F8FA26668EEBB76C6A409575B95A (RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB* __this, int32_t ___uniqueId0, FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* ___callback1, const RuntimeMethod* method) 
{
	{
		// public override void OnError(int uniqueId, FBRewardedVideoAdBridgeErrorCallback callback) {}
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeAndroid::OnWillClose(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeAndroid_OnWillClose_m2DBD46E62DD2DB027AA4AD6A751362A0BB2E83CA (RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB* __this, int32_t ___uniqueId0, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___callback1, const RuntimeMethod* method) 
{
	{
		// public override void OnWillClose(int uniqueId, FBRewardedVideoAdBridgeCallback callback) {}
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeAndroid::OnDidClose(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeAndroid_OnDidClose_mDBFD095DB9C7A43C1EB6FBFC748EFBB26D02A87D (RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB* __this, int32_t ___uniqueId0, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___callback1, const RuntimeMethod* method) 
{
	{
		// public override void OnDidClose(int uniqueId, FBRewardedVideoAdBridgeCallback callback) {}
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeAndroid::OnActivityDestroyed(System.Int32,AudienceNetwork.FBRewardedVideoAdBridgeCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeAndroid_OnActivityDestroyed_m6689D87D40FABEF2194AC708EB18CA2325F56397 (RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB* __this, int32_t ___uniqueId0, FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* ___callback1, const RuntimeMethod* method) 
{
	{
		// public override void OnActivityDestroyed(int uniqueId, FBRewardedVideoAdBridgeCallback callback) { }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeAndroid__ctor_m182C87E5DC2793CD48C108AE8F902B4C94D95BEA (RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RewardedVideoAdBridge_t0EE252A17BDEB38BE11CD96218118294EF510E50_il2cpp_TypeInfo_var);
		RewardedVideoAdBridge__ctor_m7604E29BADB7C0685B83F95ABDC2058B104FBC33(__this, NULL);
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeAndroid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeAndroid__cctor_m6B34EAD7252D45650324C1E56575992EAED27517 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3B615F2A092130DAD7292FA7BD72068CD4D3731E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<int, RewardedVideoAdContainer> rewardedVideoAds = new Dictionary<int, RewardedVideoAdContainer>();
		Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464* L_0 = (Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464*)il2cpp_codegen_object_new(Dictionary_2_t990C8B048876191B5BE142BE5D3CF9864A347464_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3B615F2A092130DAD7292FA7BD72068CD4D3731E(L_0, Dictionary_2__ctor_m3B615F2A092130DAD7292FA7BD72068CD4D3731E_RuntimeMethod_var);
		((RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var))->___rewardedVideoAds_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_StaticFields*)il2cpp_codegen_static_fields_for(RewardedVideoAdBridgeAndroid_tE48800E8FD7F3686AB55D28A2DFD24C987C6CAFB_il2cpp_TypeInfo_var))->___rewardedVideoAds_1), (void*)L_0);
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
// System.Void AudienceNetwork.RewardedVideoAdBridgeAndroid/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m75C3B64F838AA94122176BE075E4D06F23466F6F (U3CU3Ec__DisplayClass10_0_t003106924C3B2AE8949D45E2C94A770651C8890D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeAndroid/<>c__DisplayClass10_0::<Show>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CShowU3Eb__0_m844C438B2600B7FCBB3E982272DE01502B9E6124 (U3CU3Ec__DisplayClass10_0_t003106924C3B2AE8949D45E2C94A770651C8890D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rewardedVideoAd != null) {
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___rewardedVideoAd_0;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// rewardedVideoAd.Call<bool> ("show");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = __this->___rewardedVideoAd_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_3;
		L_3 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_1, _stringLiteral42737D67B57D1AED1E18C475494BB867AD0AA192, L_2, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
	}

IL_001e:
	{
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
// AudienceNetwork.RewardedVideoAd AudienceNetwork.RewardedVideoAdContainer::get_rewardedVideoAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* RewardedVideoAdContainer_get_rewardedVideoAd_m68C0CB84DAA674C467D1DF65788AB3361889F39F (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* __this, const RuntimeMethod* method) 
{
	{
		// internal RewardedVideoAd rewardedVideoAd { get; set; }
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = __this->___U3CrewardedVideoAdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdContainer::set_rewardedVideoAd(AudienceNetwork.RewardedVideoAd)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdContainer_set_rewardedVideoAd_m1B0F28CA41F608909F511BEFB6D4CF224B0903C5 (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* __this, RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* ___value0, const RuntimeMethod* method) 
{
	{
		// internal RewardedVideoAd rewardedVideoAd { get; set; }
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = ___value0;
		__this->___U3CrewardedVideoAdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrewardedVideoAdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// AudienceNetwork.FBRewardedVideoAdBridgeCallback AudienceNetwork.RewardedVideoAdContainer::get_onLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAdContainer_get_onLoad_mB2E4719AF636CE6DFB1E45633474FFA5F4D3D1F6 (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* __this, const RuntimeMethod* method) 
{
	{
		// internal FBRewardedVideoAdBridgeCallback onLoad { get; set; }
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___U3ConLoadU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdContainer::.ctor(AudienceNetwork.RewardedVideoAd)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdContainer__ctor_mC1D05DF8718F12B908BFD9D16F2047C9C7BD4AA5 (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* __this, RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* ___rewardedVideoAd0, const RuntimeMethod* method) 
{
	{
		// internal RewardedVideoAdContainer(RewardedVideoAd rewardedVideoAd)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.rewardedVideoAd = rewardedVideoAd;
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = ___rewardedVideoAd0;
		RewardedVideoAdContainer_set_rewardedVideoAd_m1B0F28CA41F608909F511BEFB6D4CF224B0903C5_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.String AudienceNetwork.RewardedVideoAdContainer::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RewardedVideoAdContainer_ToString_m31FA708066DC5372098F0B2357CC965AE5A3965A (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF410B86E4ED2CE360EF6CD95BB41192156548F9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("[RewardedVideoAdContainer: rewardedVideoAd={0}, onLoad={1}]", rewardedVideoAd, onLoad);
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0;
		L_0 = RewardedVideoAdContainer_get_rewardedVideoAd_m68C0CB84DAA674C467D1DF65788AB3361889F39F_inline(__this, NULL);
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_1;
		L_1 = RewardedVideoAdContainer_get_onLoad_mB2E4719AF636CE6DFB1E45633474FFA5F4D3D1F6_inline(__this, NULL);
		String_t* L_2;
		L_2 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralF410B86E4ED2CE360EF6CD95BB41192156548F9D, L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.AndroidJavaObject AudienceNetwork.RewardedVideoAdContainer::LoadAdConfig(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* RewardedVideoAdContainer_LoadAdConfig_m66E6D2B778B011620203ACE21213548B615AA264 (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* __this, String_t* ___bidPayload0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral354C422C03982C21E9EA651D4447889F38C34E83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D5AFDED92489AAB1C85E91C1BC00C93358A7F2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFA9E316B423D552D5B0786D7690E94D1021AA40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9D176F78693C306ACF44D7AD5AF126AB19081F1);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// AndroidJavaObject configBuilder = bridgedRewardedVideoAd.Call<AndroidJavaObject>("buildLoadAdConfig");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___bridgedRewardedVideoAd_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteralCFA9E316B423D552D5B0786D7690E94D1021AA40, L_1, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_2;
		// configBuilder.Call<AndroidJavaObject>("withAdListener", listenerProxy);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* L_6 = __this->___listenerProxy_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_3, _stringLiteral354C422C03982C21E9EA651D4447889F38C34E83, L_5, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// if (rewardData != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = __this->___rewardData_4;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		// configBuilder.Call<AndroidJavaObject>("withRewardData", rewardData);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = __this->___rewardData_4;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		NullCheck(L_9);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13;
		L_13 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_9, _stringLiteralF9D176F78693C306ACF44D7AD5AF126AB19081F1, L_11, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
	}

IL_0054:
	{
		// if (bidPayload != null)
		String_t* L_14 = ___bidPayload0;
		if (!L_14)
		{
			goto IL_006d;
		}
	}
	{
		// configBuilder.Call<AndroidJavaObject>("withBid", bidPayload);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_15 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		String_t* L_18 = ___bidPayload0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_18);
		NullCheck(L_15);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_19;
		L_19 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_15, _stringLiteral5D5AFDED92489AAB1C85E91C1BC00C93358A7F2C, L_17, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
	}

IL_006d:
	{
		// return configBuilder.Call<AndroidJavaObject>("build");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21;
		L_21 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_20);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_22;
		L_22 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_20, _stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728, L_21, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		return L_22;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdContainer::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdContainer_Load_mCC9D273C25650E07308E2FCAF765474E4B6FB8FF (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* __this, const RuntimeMethod* method) 
{
	{
		// Load(null);
		RewardedVideoAdContainer_Load_mA533DDF6D3CB0770051586A37F400B36603F3686(__this, (String_t*)NULL, NULL);
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdContainer::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdContainer_Load_mA533DDF6D3CB0770051586A37F400B36603F3686 (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* __this, String_t* ___bidPayload0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42C8D8A4F88528F5E036DABA2C381FD96B56375F);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// AndroidJavaObject loadConfig = LoadAdConfig(bidPayload);
		String_t* L_0 = ___bidPayload0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = RewardedVideoAdContainer_LoadAdConfig_m66E6D2B778B011620203ACE21213548B615AA264(__this, L_0, NULL);
		V_0 = L_1;
		// bridgedRewardedVideoAd.Call("loadAd", loadConfig);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = __this->___bridgedRewardedVideoAd_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_2);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_2, _stringLiteral42C8D8A4F88528F5E036DABA2C381FD96B56375F, L_4, NULL);
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
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::.ctor(AudienceNetwork.RewardedVideoAd,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy__ctor_mBC1A5F16FDED756049E689FBEA193426E117792D (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* ___rewardedVideoAd0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___bridgedRewardedVideoAd1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26B1C8371C117DF5E56AC7ED4D98F902D496FA8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("com.facebook.ads.S2SRewardedVideoAdExtendedListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral26B1C8371C117DF5E56AC7ED4D98F902D496FA8C, NULL);
		// this.rewardedVideoAd = rewardedVideoAd;
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = ___rewardedVideoAd0;
		__this->___rewardedVideoAd_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rewardedVideoAd_4), (void*)L_0);
		// this.bridgedRewardedVideoAd = bridgedRewardedVideoAd;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___bridgedRewardedVideoAd1;
		__this->___bridgedRewardedVideoAd_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bridgedRewardedVideoAd_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::onError(UnityEngine.AndroidJavaObject,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy_onError_mE30FA6850454A0A4B2173941A7377DEAA8CE94A4 (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ad0, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3ConErrorU3Eb__0_m8F38B16208E0801A4DB6D2B96BB0813D291C02ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tBFED5A61839F24F45F31C4A172516F3B51E685CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral413A6C17FD7A7B815786D74A854EDAC1083FFCAC);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_tBFED5A61839F24F45F31C4A172516F3B51E685CB* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_tBFED5A61839F24F45F31C4A172516F3B51E685CB* L_0 = (U3CU3Ec__DisplayClass3_0_tBFED5A61839F24F45F31C4A172516F3B51E685CB*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tBFED5A61839F24F45F31C4A172516F3B51E685CB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_mAB5059429A7096CD23555B020E480D6FF0D0D4B1(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_tBFED5A61839F24F45F31C4A172516F3B51E685CB* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// string errorMessage = error.Call<string> ("getErrorMessage");
		U3CU3Ec__DisplayClass3_0_tBFED5A61839F24F45F31C4A172516F3B51E685CB* L_2 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ___error1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_3);
		String_t* L_5;
		L_5 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_3, _stringLiteral413A6C17FD7A7B815786D74A854EDAC1083FFCAC, L_4, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->___errorMessage_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___errorMessage_1), (void*)L_5);
		// if (rewardedVideoAd.RewardedVideoAdDidFailWithError != null)
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_6 = __this->___rewardedVideoAd_4;
		NullCheck(L_6);
		FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* L_7;
		L_7 = RewardedVideoAd_get_RewardedVideoAdDidFailWithError_mCB24562902B60225BA782845C1C9020C601F1377_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// rewardedVideoAd.ExecuteOnMainThread(() =>
		// {
		//     rewardedVideoAd.RewardedVideoAdDidFailWithError(errorMessage);
		// });
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_8 = __this->___rewardedVideoAd_4;
		U3CU3Ec__DisplayClass3_0_tBFED5A61839F24F45F31C4A172516F3B51E685CB* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3ConErrorU3Eb__0_m8F38B16208E0801A4DB6D2B96BB0813D291C02ED_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		RewardedVideoAd_ExecuteOnMainThread_m99D031E76CF4A8F01149AB49ABD035716F24C5CC(L_8, L_10, NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::onAdLoaded(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy_onAdLoaded_m6EDEFE1300C03E9258C3B1B907CEAA69804240EE (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ad0, const RuntimeMethod* method) 
{
	{
		// rewardedVideoAd.LoadAdFromData();
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = __this->___rewardedVideoAd_4;
		NullCheck(L_0);
		RewardedVideoAd_LoadAdFromData_m144FEDBCA9CA8193453599AFE4F6B99F7E004E06(L_0, NULL);
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::onAdClicked(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy_onAdClicked_mAFF12D9D6FD62F830E5EC986CF7B2DAF0A524A93 (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ad0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridgeListenerProxy_U3ConAdClickedU3Eb__5_0_mB842815494CA7A853DD880303F59F3DF60B894CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rewardedVideoAd.RewardedVideoAdDidClick != null)
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = __this->___rewardedVideoAd_4;
		NullCheck(L_0);
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_1;
		L_1 = RewardedVideoAd_get_RewardedVideoAdDidClick_mDDBB5168254A673D4DF48A827A18EAA9EB1A52B2_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// rewardedVideoAd.ExecuteOnMainThread(() =>
		// {
		//     rewardedVideoAd.RewardedVideoAdDidClick();
		// });
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_2 = __this->___rewardedVideoAd_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)RewardedVideoAdBridgeListenerProxy_U3ConAdClickedU3Eb__5_0_mB842815494CA7A853DD880303F59F3DF60B894CD_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		RewardedVideoAd_ExecuteOnMainThread_m99D031E76CF4A8F01149AB49ABD035716F24C5CC(L_2, L_3, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::onRewardedVideoDisplayed(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy_onRewardedVideoDisplayed_m3FA5B655E42232E0F9AAFEB79DDCB679CE5ABB5B (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ad0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridgeListenerProxy_U3ConRewardedVideoDisplayedU3Eb__6_0_mD12182F2C5859E5F60D8570075BFA97CC89CE39A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rewardedVideoAd.RewardedVideoAdWillLogImpression != null)
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = __this->___rewardedVideoAd_4;
		NullCheck(L_0);
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_1;
		L_1 = RewardedVideoAd_get_RewardedVideoAdWillLogImpression_mA7468F3067A4D2B844C4420F177F0B2B8B1A4E54_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// rewardedVideoAd.ExecuteOnMainThread(() =>
		// {
		//     rewardedVideoAd.RewardedVideoAdWillLogImpression();
		// });
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_2 = __this->___rewardedVideoAd_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)RewardedVideoAdBridgeListenerProxy_U3ConRewardedVideoDisplayedU3Eb__6_0_mD12182F2C5859E5F60D8570075BFA97CC89CE39A_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		RewardedVideoAd_ExecuteOnMainThread_m99D031E76CF4A8F01149AB49ABD035716F24C5CC(L_2, L_3, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::onRewardedVideoClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy_onRewardedVideoClosed_m7AF118B3A9B70ED0DBE781DB024DBC0772FF28D6 (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridgeListenerProxy_U3ConRewardedVideoClosedU3Eb__7_0_m5933FF023CB75079BA91B778DF07CFBAB4A1BF8C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rewardedVideoAd.RewardedVideoAdDidClose != null)
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = __this->___rewardedVideoAd_4;
		NullCheck(L_0);
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_1;
		L_1 = RewardedVideoAd_get_RewardedVideoAdDidClose_m722737A392A87EAD0DA8259FE5AD59E934A5C5FB_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// rewardedVideoAd.ExecuteOnMainThread(() =>
		// {
		//     rewardedVideoAd.RewardedVideoAdDidClose();
		// });
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_2 = __this->___rewardedVideoAd_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)RewardedVideoAdBridgeListenerProxy_U3ConRewardedVideoClosedU3Eb__7_0_m5933FF023CB75079BA91B778DF07CFBAB4A1BF8C_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		RewardedVideoAd_ExecuteOnMainThread_m99D031E76CF4A8F01149AB49ABD035716F24C5CC(L_2, L_3, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::onRewardedVideoCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy_onRewardedVideoCompleted_mB6A855DC4859C85FE6480624B10E642D7A6B9D0C (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridgeListenerProxy_U3ConRewardedVideoCompletedU3Eb__8_0_mB339FE1BDD19A08DA4AA0310A37855FD5F2DA26E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rewardedVideoAd.RewardedVideoAdComplete != null)
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = __this->___rewardedVideoAd_4;
		NullCheck(L_0);
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_1;
		L_1 = RewardedVideoAd_get_RewardedVideoAdComplete_m462ABD29ECE953884337436F9BB93D1740F16E5B_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// rewardedVideoAd.ExecuteOnMainThread(() =>
		// {
		//     rewardedVideoAd.RewardedVideoAdComplete();
		// });
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_2 = __this->___rewardedVideoAd_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)RewardedVideoAdBridgeListenerProxy_U3ConRewardedVideoCompletedU3Eb__8_0_mB339FE1BDD19A08DA4AA0310A37855FD5F2DA26E_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		RewardedVideoAd_ExecuteOnMainThread_m99D031E76CF4A8F01149AB49ABD035716F24C5CC(L_2, L_3, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::onRewardServerSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy_onRewardServerSuccess_m16A0ECAB52A49FDA48D00EF1257B81B69A79D14F (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridgeListenerProxy_U3ConRewardServerSuccessU3Eb__9_0_m70128105A8391D3025BDEAE469442A246F5B48AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rewardedVideoAd.RewardedVideoAdDidSucceed != null)
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = __this->___rewardedVideoAd_4;
		NullCheck(L_0);
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_1;
		L_1 = RewardedVideoAd_get_RewardedVideoAdDidSucceed_mEB28E3FBDA25E71D6DFF414253E9D22946E53CBA_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// rewardedVideoAd.ExecuteOnMainThread(() =>
		// {
		//     rewardedVideoAd.RewardedVideoAdDidSucceed();
		// });
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_2 = __this->___rewardedVideoAd_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)RewardedVideoAdBridgeListenerProxy_U3ConRewardServerSuccessU3Eb__9_0_m70128105A8391D3025BDEAE469442A246F5B48AC_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		RewardedVideoAd_ExecuteOnMainThread_m99D031E76CF4A8F01149AB49ABD035716F24C5CC(L_2, L_3, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::onRewardServerFailed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy_onRewardServerFailed_mC6F89C8B01EA197A6952E8CCE624BA0AFCACB83F (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridgeListenerProxy_U3ConRewardServerFailedU3Eb__10_0_mF277208F423DD348B08D90EC7BD0003CC2E22008_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rewardedVideoAd.RewardedVideoAdDidFail != null)
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = __this->___rewardedVideoAd_4;
		NullCheck(L_0);
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_1;
		L_1 = RewardedVideoAd_get_RewardedVideoAdDidFail_m5B1123EE9B0853395F2AD15F60F4F05D6E0CDEF3_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// rewardedVideoAd.ExecuteOnMainThread(() =>
		// {
		//     rewardedVideoAd.RewardedVideoAdDidFail();
		// });
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_2 = __this->___rewardedVideoAd_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)RewardedVideoAdBridgeListenerProxy_U3ConRewardServerFailedU3Eb__10_0_mF277208F423DD348B08D90EC7BD0003CC2E22008_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		RewardedVideoAd_ExecuteOnMainThread_m99D031E76CF4A8F01149AB49ABD035716F24C5CC(L_2, L_3, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::onLoggingImpression(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy_onLoggingImpression_m96585A5DC18A6126BD3159FF31A11D839E6C8DCB (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___ad0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridgeListenerProxy_U3ConLoggingImpressionU3Eb__11_0_m052C94762C225F204FD5037217F73B07DBFAAEDC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rewardedVideoAd.RewardedVideoAdWillLogImpression != null)
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = __this->___rewardedVideoAd_4;
		NullCheck(L_0);
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_1;
		L_1 = RewardedVideoAd_get_RewardedVideoAdWillLogImpression_mA7468F3067A4D2B844C4420F177F0B2B8B1A4E54_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// rewardedVideoAd.ExecuteOnMainThread(() =>
		// {
		//     rewardedVideoAd.RewardedVideoAdWillLogImpression();
		// });
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_2 = __this->___rewardedVideoAd_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)RewardedVideoAdBridgeListenerProxy_U3ConLoggingImpressionU3Eb__11_0_m052C94762C225F204FD5037217F73B07DBFAAEDC_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		RewardedVideoAd_ExecuteOnMainThread_m99D031E76CF4A8F01149AB49ABD035716F24C5CC(L_2, L_3, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::onRewardedVideoActivityDestroyed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy_onRewardedVideoActivityDestroyed_m2F93E87F08AFEABEEBBA8A18A0A661C42C21470B (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedVideoAdBridgeListenerProxy_U3ConRewardedVideoActivityDestroyedU3Eb__12_0_m17EA0E3457A2CED3D832554E28C3ABCDAEDD1884_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rewardedVideoAd.RewardedVideoAdActivityDestroyed != null)
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = __this->___rewardedVideoAd_4;
		NullCheck(L_0);
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_1;
		L_1 = RewardedVideoAd_get_RewardedVideoAdActivityDestroyed_m246DC2E953D15F6B222829B7D06790A20080B26E_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// rewardedVideoAd.ExecuteOnMainThread(() =>
		// {
		//     rewardedVideoAd.RewardedVideoAdActivityDestroyed();
		// });
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_2 = __this->___rewardedVideoAd_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)RewardedVideoAdBridgeListenerProxy_U3ConRewardedVideoActivityDestroyedU3Eb__12_0_m17EA0E3457A2CED3D832554E28C3ABCDAEDD1884_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		RewardedVideoAd_ExecuteOnMainThread_m99D031E76CF4A8F01149AB49ABD035716F24C5CC(L_2, L_3, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::<onAdClicked>b__5_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy_U3ConAdClickedU3Eb__5_0_mB842815494CA7A853DD880303F59F3DF60B894CD (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, const RuntimeMethod* method) 
{
	{
		// rewardedVideoAd.RewardedVideoAdDidClick();
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = __this->___rewardedVideoAd_4;
		NullCheck(L_0);
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_1;
		L_1 = RewardedVideoAd_get_RewardedVideoAdDidClick_mDDBB5168254A673D4DF48A827A18EAA9EB1A52B2_inline(L_0, NULL);
		NullCheck(L_1);
		FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_inline(L_1, NULL);
		// });
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::<onRewardedVideoDisplayed>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy_U3ConRewardedVideoDisplayedU3Eb__6_0_mD12182F2C5859E5F60D8570075BFA97CC89CE39A (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, const RuntimeMethod* method) 
{
	{
		// rewardedVideoAd.RewardedVideoAdWillLogImpression();
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = __this->___rewardedVideoAd_4;
		NullCheck(L_0);
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_1;
		L_1 = RewardedVideoAd_get_RewardedVideoAdWillLogImpression_mA7468F3067A4D2B844C4420F177F0B2B8B1A4E54_inline(L_0, NULL);
		NullCheck(L_1);
		FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_inline(L_1, NULL);
		// });
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::<onRewardedVideoClosed>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy_U3ConRewardedVideoClosedU3Eb__7_0_m5933FF023CB75079BA91B778DF07CFBAB4A1BF8C (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, const RuntimeMethod* method) 
{
	{
		// rewardedVideoAd.RewardedVideoAdDidClose();
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = __this->___rewardedVideoAd_4;
		NullCheck(L_0);
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_1;
		L_1 = RewardedVideoAd_get_RewardedVideoAdDidClose_m722737A392A87EAD0DA8259FE5AD59E934A5C5FB_inline(L_0, NULL);
		NullCheck(L_1);
		FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_inline(L_1, NULL);
		// });
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::<onRewardedVideoCompleted>b__8_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy_U3ConRewardedVideoCompletedU3Eb__8_0_mB339FE1BDD19A08DA4AA0310A37855FD5F2DA26E (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, const RuntimeMethod* method) 
{
	{
		// rewardedVideoAd.RewardedVideoAdComplete();
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = __this->___rewardedVideoAd_4;
		NullCheck(L_0);
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_1;
		L_1 = RewardedVideoAd_get_RewardedVideoAdComplete_m462ABD29ECE953884337436F9BB93D1740F16E5B_inline(L_0, NULL);
		NullCheck(L_1);
		FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_inline(L_1, NULL);
		// });
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::<onRewardServerSuccess>b__9_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy_U3ConRewardServerSuccessU3Eb__9_0_m70128105A8391D3025BDEAE469442A246F5B48AC (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, const RuntimeMethod* method) 
{
	{
		// rewardedVideoAd.RewardedVideoAdDidSucceed();
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = __this->___rewardedVideoAd_4;
		NullCheck(L_0);
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_1;
		L_1 = RewardedVideoAd_get_RewardedVideoAdDidSucceed_mEB28E3FBDA25E71D6DFF414253E9D22946E53CBA_inline(L_0, NULL);
		NullCheck(L_1);
		FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_inline(L_1, NULL);
		// });
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::<onRewardServerFailed>b__10_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy_U3ConRewardServerFailedU3Eb__10_0_mF277208F423DD348B08D90EC7BD0003CC2E22008 (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, const RuntimeMethod* method) 
{
	{
		// rewardedVideoAd.RewardedVideoAdDidFail();
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = __this->___rewardedVideoAd_4;
		NullCheck(L_0);
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_1;
		L_1 = RewardedVideoAd_get_RewardedVideoAdDidFail_m5B1123EE9B0853395F2AD15F60F4F05D6E0CDEF3_inline(L_0, NULL);
		NullCheck(L_1);
		FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_inline(L_1, NULL);
		// });
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::<onLoggingImpression>b__11_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy_U3ConLoggingImpressionU3Eb__11_0_m052C94762C225F204FD5037217F73B07DBFAAEDC (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, const RuntimeMethod* method) 
{
	{
		// rewardedVideoAd.RewardedVideoAdWillLogImpression();
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = __this->___rewardedVideoAd_4;
		NullCheck(L_0);
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_1;
		L_1 = RewardedVideoAd_get_RewardedVideoAdWillLogImpression_mA7468F3067A4D2B844C4420F177F0B2B8B1A4E54_inline(L_0, NULL);
		NullCheck(L_1);
		FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_inline(L_1, NULL);
		// });
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy::<onRewardedVideoActivityDestroyed>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedVideoAdBridgeListenerProxy_U3ConRewardedVideoActivityDestroyedU3Eb__12_0_m17EA0E3457A2CED3D832554E28C3ABCDAEDD1884 (RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* __this, const RuntimeMethod* method) 
{
	{
		// rewardedVideoAd.RewardedVideoAdActivityDestroyed();
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = __this->___rewardedVideoAd_4;
		NullCheck(L_0);
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_1;
		L_1 = RewardedVideoAd_get_RewardedVideoAdActivityDestroyed_m246DC2E953D15F6B222829B7D06790A20080B26E_inline(L_0, NULL);
		NullCheck(L_1);
		FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_inline(L_1, NULL);
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
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mAB5059429A7096CD23555B020E480D6FF0D0D4B1 (U3CU3Ec__DisplayClass3_0_tBFED5A61839F24F45F31C4A172516F3B51E685CB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void AudienceNetwork.RewardedVideoAdBridgeListenerProxy/<>c__DisplayClass3_0::<onError>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3ConErrorU3Eb__0_m8F38B16208E0801A4DB6D2B96BB0813D291C02ED (U3CU3Ec__DisplayClass3_0_tBFED5A61839F24F45F31C4A172516F3B51E685CB* __this, const RuntimeMethod* method) 
{
	{
		// rewardedVideoAd.RewardedVideoAdDidFailWithError(errorMessage);
		RewardedVideoAdBridgeListenerProxy_tC6193349B5CB459E5D857DBAC69E84167E627428* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_1 = L_0->___rewardedVideoAd_4;
		NullCheck(L_1);
		FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* L_2;
		L_2 = RewardedVideoAd_get_RewardedVideoAdDidFailWithError_mCB24562902B60225BA782845C1C9020C601F1377_inline(L_1, NULL);
		String_t* L_3 = __this->___errorMessage_1;
		NullCheck(L_2);
		FBRewardedVideoAdBridgeErrorCallback_Invoke_m0E61ADCF56E4F80B6587C6F89A1D4A84A7865633_inline(L_2, L_3, NULL);
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
// System.String AudienceNetwork.SdkVersion::get_Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SdkVersion_get_Build_mA4D7AFE90B3AB3C3E14E658DC4FF370F8B88E668 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49C83A6CB9E3D16269215815C5C23B6418F0F260);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return "6.4.0";
		return _stringLiteral49C83A6CB9E3D16269215815C5C23B6418F0F260;
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
// System.Double AudienceNetwork.Utility.AdUtility::Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AdUtility_Width_mD527D1A297F460CE6F9DE7FC33DCC1D2F73F4E40 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdUtilityBridge_t6126E68A22E23982C7FE766A9505C6A0C8F808DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AdUtilityBridge.Instance.Width();
		il2cpp_codegen_runtime_class_init_inline(AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_StaticFields*)il2cpp_codegen_static_fields_for(AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_il2cpp_TypeInfo_var))->___Instance_0;
		NullCheck(L_0);
		double L_1;
		L_1 = InterfaceFuncInvoker0< double >::Invoke(0 /* System.Double AudienceNetwork.Utility.IAdUtilityBridge::Width() */, IAdUtilityBridge_t6126E68A22E23982C7FE766A9505C6A0C8F808DB_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Double AudienceNetwork.Utility.AdUtility::Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AdUtility_Height_mC6FFB0B7B475570AA3800A93FBE7C3E7702EFCF5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdUtilityBridge_t6126E68A22E23982C7FE766A9505C6A0C8F808DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return AdUtilityBridge.Instance.Height();
		il2cpp_codegen_runtime_class_init_inline(AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_StaticFields*)il2cpp_codegen_static_fields_for(AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_il2cpp_TypeInfo_var))->___Instance_0;
		NullCheck(L_0);
		double L_1;
		L_1 = InterfaceFuncInvoker0< double >::Invoke(1 /* System.Double AudienceNetwork.Utility.IAdUtilityBridge::Height() */, IAdUtilityBridge_t6126E68A22E23982C7FE766A9505C6A0C8F808DB_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void AudienceNetwork.Utility.AdUtility::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdUtility_Prepare_m15617208BCDE5D73F1897450A4ACCD292F39D7D2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAdUtilityBridge_t6126E68A22E23982C7FE766A9505C6A0C8F808DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AdUtilityBridge.Instance.Prepare();
		il2cpp_codegen_runtime_class_init_inline(AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_StaticFields*)il2cpp_codegen_static_fields_for(AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_il2cpp_TypeInfo_var))->___Instance_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void AudienceNetwork.Utility.IAdUtilityBridge::Prepare() */, IAdUtilityBridge_t6126E68A22E23982C7FE766A9505C6A0C8F808DB_il2cpp_TypeInfo_var, L_0);
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
// System.Void AudienceNetwork.Utility.AdUtilityBridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdUtilityBridge__ctor_m0A963823A15E6591C458EB110DFAE4AFC536EDFA (AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC* __this, const RuntimeMethod* method) 
{
	{
		// internal AdUtilityBridge()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void AudienceNetwork.Utility.AdUtilityBridge::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdUtilityBridge__cctor_m600718D397874715D2D85C755126AF6AB9360584 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = CreateInstance();
		RuntimeObject* L_0;
		L_0 = AdUtilityBridge_CreateInstance_m0B37784FFE5B1AF41B87F621E164815AF12BD2A0(NULL);
		((AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_StaticFields*)il2cpp_codegen_static_fields_for(AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_StaticFields*)il2cpp_codegen_static_fields_for(AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
		// }
		return;
	}
}
// AudienceNetwork.Utility.IAdUtilityBridge AudienceNetwork.Utility.AdUtilityBridge::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AdUtilityBridge_CreateInstance_m0B37784FFE5B1AF41B87F621E164815AF12BD2A0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdUtilityBridgeAndroid_t98A6BD7D9108733B63E45A17FECD641462E961F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform != RuntimePlatform.OSXEditor)
		int32_t L_0;
		L_0 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return new AdUtilityBridgeAndroid();
		AdUtilityBridgeAndroid_t98A6BD7D9108733B63E45A17FECD641462E961F0* L_1 = (AdUtilityBridgeAndroid_t98A6BD7D9108733B63E45A17FECD641462E961F0*)il2cpp_codegen_object_new(AdUtilityBridgeAndroid_t98A6BD7D9108733B63E45A17FECD641462E961F0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AdUtilityBridgeAndroid__ctor_mCAB48FA91CF8DD82CA7A8FC4ABAC10C41F096AD9(L_1, NULL);
		return L_1;
	}

IL_000d:
	{
		// return new AdUtilityBridge();
		AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC* L_2 = (AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC*)il2cpp_codegen_object_new(AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AdUtilityBridge__ctor_m0A963823A15E6591C458EB110DFAE4AFC536EDFA(L_2, NULL);
		return L_2;
	}
}
// System.Double AudienceNetwork.Utility.AdUtilityBridge::Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AdUtilityBridge_Width_m46FD7B57BE4376B1799EC4F7877C6FC765E6FA64 (AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC* __this, const RuntimeMethod* method) 
{
	{
		// return 1104;
		return (1104.0);
	}
}
// System.Double AudienceNetwork.Utility.AdUtilityBridge::Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AdUtilityBridge_Height_m35EA150473621FE40192348E0F0D4D691AFF363B (AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC* __this, const RuntimeMethod* method) 
{
	{
		// return 621;
		return (621.0);
	}
}
// System.Double AudienceNetwork.Utility.AdUtilityBridge::Convert(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AdUtilityBridge_Convert_m9D472E757903B9804CC0B7712E63A6CE50B30D8A (AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC* __this, double ___deviceSize0, const RuntimeMethod* method) 
{
	{
		// return 2;
		return (2.0);
	}
}
// System.Void AudienceNetwork.Utility.AdUtilityBridge::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdUtilityBridge_Prepare_m9DEE605AFDED59E31902574D8AB3B43A8A3EA479 (AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC* __this, const RuntimeMethod* method) 
{
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
// System.Double AudienceNetwork.Utility.AdUtilityBridgeAndroid::Density()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AdUtilityBridgeAndroid_Density_m0ED8E4A7E92E75A9A716FFC238BD6798331FEEEE (AdUtilityBridgeAndroid_t98A6BD7D9108733B63E45A17FECD641462E961F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdUtilityBridgeAndroid_GetPropertyOfDisplayMetrics_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3116EB7A8CD3D23C9A4AF025DBE2E7200DF6ECD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15C44A56E1152A4E5ED66AF53F10A55DF5F58965);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetPropertyOfDisplayMetrics<float>("density");
		float L_0;
		L_0 = AdUtilityBridgeAndroid_GetPropertyOfDisplayMetrics_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3116EB7A8CD3D23C9A4AF025DBE2E7200DF6ECD7(__this, _stringLiteral15C44A56E1152A4E5ED66AF53F10A55DF5F58965, AdUtilityBridgeAndroid_GetPropertyOfDisplayMetrics_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m3116EB7A8CD3D23C9A4AF025DBE2E7200DF6ECD7_RuntimeMethod_var);
		return ((double)L_0);
	}
}
// System.Double AudienceNetwork.Utility.AdUtilityBridgeAndroid::Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AdUtilityBridgeAndroid_Width_m184FCB1F858DDAA07B53347F4E1D312DC31A33FD (AdUtilityBridgeAndroid_t98A6BD7D9108733B63E45A17FECD641462E961F0* __this, const RuntimeMethod* method) 
{
	{
		// return Convert(Screen.width);
		int32_t L_0;
		L_0 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		double L_1;
		L_1 = VirtualFuncInvoker1< double, double >::Invoke(9 /* System.Double AudienceNetwork.Utility.AdUtilityBridge::Convert(System.Double) */, __this, ((double)L_0));
		return L_1;
	}
}
// System.Double AudienceNetwork.Utility.AdUtilityBridgeAndroid::Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AdUtilityBridgeAndroid_Height_mB65AD7B91DCCDA0ABDBA05DB35CBEC2A24EFB1DE (AdUtilityBridgeAndroid_t98A6BD7D9108733B63E45A17FECD641462E961F0* __this, const RuntimeMethod* method) 
{
	{
		// return Convert(Screen.height);
		int32_t L_0;
		L_0 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		double L_1;
		L_1 = VirtualFuncInvoker1< double, double >::Invoke(9 /* System.Double AudienceNetwork.Utility.AdUtilityBridge::Convert(System.Double) */, __this, ((double)L_0));
		return L_1;
	}
}
// System.Double AudienceNetwork.Utility.AdUtilityBridgeAndroid::Convert(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AdUtilityBridgeAndroid_Convert_mDC09CA70FB26CA578470C21DAA185C970D1E6DE8 (AdUtilityBridgeAndroid_t98A6BD7D9108733B63E45A17FECD641462E961F0* __this, double ___deviceSize0, const RuntimeMethod* method) 
{
	{
		// return deviceSize / Density();
		double L_0 = ___deviceSize0;
		double L_1;
		L_1 = AdUtilityBridgeAndroid_Density_m0ED8E4A7E92E75A9A716FFC238BD6798331FEEEE(__this, NULL);
		return ((double)(L_0/L_1));
	}
}
// System.Void AudienceNetwork.Utility.AdUtilityBridgeAndroid::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdUtilityBridgeAndroid_Prepare_m329280744DEEC835F388F4E9830F7763C260EEB7 (AdUtilityBridgeAndroid_t98A6BD7D9108733B63E45A17FECD641462E961F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral449E90EA94A719309FD246952C6B4621E65F159A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral922971FBDA8AF9A064D1324CC6AB61472253CF2F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// AndroidJavaClass looperClass = new AndroidJavaClass("android.os.Looper");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral922971FBDA8AF9A064D1324CC6AB61472253CF2F, NULL);
		// looperClass.CallStatic("prepare");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral449E90EA94A719309FD246952C6B4621E65F159A, L_1, NULL);
		// }
		goto IL_001e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001b;
		}
		throw e;
	}

CATCH_001b:
	{// begin catch(System.Exception)
		// catch (Exception)
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001e;
	}// end catch (depth: 1)

IL_001e:
	{
		// }
		return;
	}
}
// System.Void AudienceNetwork.Utility.AdUtilityBridgeAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdUtilityBridgeAndroid__ctor_mCAB48FA91CF8DD82CA7A8FC4ABAC10C41F096AD9 (AdUtilityBridgeAndroid_t98A6BD7D9108733B63E45A17FECD641462E961F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AdUtilityBridge_t6B38C300FB3959A5CE74E68CC7B770662C1CE7CC_il2cpp_TypeInfo_var);
		AdUtilityBridge__ctor_m0A963823A15E6591C458EB110DFAE4AFC536EDFA(__this, NULL);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m9E43873DE0DF480D27EC1C2AA3C09E74EA77F75D (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBAdViewBridgeErrorCallback_tE7F0E7D7F3E0216B2D9313B13817E7740FF5B9F6* AdView_get_AdViewDidFailWithError_m4B5A5230BF887E968F26F012F4D606BC94B17378_inline (AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* __this, const RuntimeMethod* method) 
{
	{
		// return adViewDidFailWithError;
		FBAdViewBridgeErrorCallback_tE7F0E7D7F3E0216B2D9313B13817E7740FF5B9F6* L_0 = __this->___adViewDidFailWithError_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBAdViewBridgeCallback_t775D067EEDC1A1C97DD807960E2534EECBECDADE* AdView_get_AdViewDidClick_mE7E5F6BC71E6F33E7E321E3D463E18C009AD1609_inline (AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* __this, const RuntimeMethod* method) 
{
	{
		// return adViewDidClick;
		FBAdViewBridgeCallback_t775D067EEDC1A1C97DD807960E2534EECBECDADE* L_0 = __this->___adViewDidClick_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBAdViewBridgeCallback_t775D067EEDC1A1C97DD807960E2534EECBECDADE* AdView_get_AdViewWillLogImpression_mCFAF35C01F2ED04BAF6007FE5EB4D63FC0DF0B49_inline (AdView_t9AB873FC724D0A9B82999D26237D2CED5E4E8848* __this, const RuntimeMethod* method) 
{
	{
		// return adViewWillLogImpression;
		FBAdViewBridgeCallback_t775D067EEDC1A1C97DD807960E2534EECBECDADE* L_0 = __this->___adViewWillLogImpression_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FBAdViewBridgeCallback_Invoke_m6A30B46359E32849493AC52F3A4A28B5A18E62D7_inline (FBAdViewBridgeCallback_t775D067EEDC1A1C97DD807960E2534EECBECDADE* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FBAdViewBridgeErrorCallback_Invoke_mC305B139F7C2B563BD839A976F5226A7C6501C32_inline (FBAdViewBridgeErrorCallback_tE7F0E7D7F3E0216B2D9313B13817E7740FF5B9F6* __this, String_t* ___error0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___error0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InterstitialAd_set_PlacementId_m491B0D3ABB52877889D50EFAAE0683879429540E_inline (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string PlacementId { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CPlacementIdU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlacementIdU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAd_get_InterstitialAdDidLoad_mE9EA30A35E2D33E084214A94E99A7C18EB90851B_inline (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	{
		// return interstitialAdDidLoad;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0 = __this->___interstitialAdDidLoad_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAd_get_InterstitialAdWillLogImpression_mBE1AF8E676EF850F9E86A8ED2309E5B554E0A220_inline (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	{
		// return interstitialAdWillLogImpression;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0 = __this->___interstitialAdWillLogImpression_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAd_get_InterstitialAdDidClick_mC16B274285D14D412293CA12B88E1B343383108C_inline (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	{
		// return interstitialAdDidClick;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0 = __this->___interstitialAdDidClick_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* InterstitialAd_get_InterstitialAdDidFailWithError_m86A66F13A9B01022C830DAB214674B9FF1F17FB1_inline (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	{
		// return interstitialAdDidFailWithError;
		FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* L_0 = __this->___interstitialAdDidFailWithError_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAd_get_InterstitialAdWillClose_mEF531764761C134455DD517EDC10954BB3CC8901_inline (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	{
		// return interstitialAdWillClose;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0 = __this->___interstitialAdWillClose_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAd_get_InterstitialAdDidClose_mEA11D8098A581E106A47BBE022220321CB0263E6_inline (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	{
		// return interstitialAdDidClose;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0 = __this->___interstitialAdDidClose_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAd_get_InterstitialAdActivityDestroyed_mBFD62998A660D42427F60CF4076E879C5808AAF5_inline (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	{
		// return interstitialAdActivityDestroyed;
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0 = __this->___interstitialAdActivityDestroyed_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InterstitialAd_get_PlacementId_mC1BD108C594367099DEE08B1B85529E84329B117_inline (InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* __this, const RuntimeMethod* method) 
{
	{
		// public string PlacementId { get; private set; }
		String_t* L_0 = __this->___U3CPlacementIdU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FBInterstitialAdBridgeCallback_Invoke_m3F30ABD6169AB25047BB628CE40340B13014D65F_inline (FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InterstitialAdContainer_set_interstitialAd_mA2B697E08CAAECD4C448BC564225A11354D9A0B1_inline (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* __this, InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* ___value0, const RuntimeMethod* method) 
{
	{
		// internal InterstitialAd interstitialAd { get; set; }
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_0 = ___value0;
		__this->___U3CinterstitialAdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinterstitialAdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* InterstitialAdContainer_get_interstitialAd_mB67B6A0B101A0824B95B32D247601845F4109678_inline (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* __this, const RuntimeMethod* method) 
{
	{
		// internal InterstitialAd interstitialAd { get; set; }
		InterstitialAd_t8854DA2B3AC6056B1ABB95C42D97C217344C8D25* L_0 = __this->___U3CinterstitialAdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* InterstitialAdContainer_get_onLoad_m9F93DDB54D9899ED455FF641B4E04DBCBA6D9070_inline (InterstitialAdContainer_t7AF544C07B38C5D3BF3D62D99AA86543F20EA0AB* __this, const RuntimeMethod* method) 
{
	{
		// internal FBInterstitialAdBridgeCallback onLoad { get; set; }
		FBInterstitialAdBridgeCallback_t9598003E547FD92040621BC359EAB7A5AE546F27* L_0 = __this->___U3ConLoadU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FBInterstitialAdBridgeErrorCallback_Invoke_m81FC8F00C6229EBBDDB5FD87D85F838113E2B2BB_inline (FBInterstitialAdBridgeErrorCallback_t987437198D672E7A96B8E50F66BE77E3355D417F* __this, String_t* ___error0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___error0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RewardedVideoAd_set_PlacementId_m53135355B631289F71D0A0F219FD33C05D8C9651_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string PlacementId { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CPlacementIdU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlacementIdU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RewardedVideoAd_set_RewardData_mEF09A8875685C2406BF78450FB1422AB837C5556_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* ___value0, const RuntimeMethod* method) 
{
	{
		// public RewardData RewardData { get; private set; }
		RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* L_0 = ___value0;
		__this->___U3CRewardDataU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRewardDataU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* RewardedVideoAd_get_RewardData_mF5E3C31190ECDF4033CBD22CFDA4371B733CCF31_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// public RewardData RewardData { get; private set; }
		RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* L_0 = __this->___U3CRewardDataU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdDidLoad_m14DFCD4C4DCBFEDB7874AF9ECED60A0E6C5936F7_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdDidLoad;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___rewardedVideoAdDidLoad_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdWillLogImpression_mA7468F3067A4D2B844C4420F177F0B2B8B1A4E54_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdWillLogImpression;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___rewardedVideoAdWillLogImpression_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdDidClick_mDDBB5168254A673D4DF48A827A18EAA9EB1A52B2_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdDidClick;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___rewardedVideoAdDidClick_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* RewardedVideoAd_get_RewardedVideoAdDidFailWithError_mCB24562902B60225BA782845C1C9020C601F1377_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdDidFailWithError;
		FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* L_0 = __this->___rewardedVideoAdDidFailWithError_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdWillClose_m633DD0E6617B76A06B35201E9E1C1F142C025B55_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdWillClose;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___rewardedVideoAdWillClose_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdDidClose_m722737A392A87EAD0DA8259FE5AD59E934A5C5FB_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdDidClose;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___rewardedVideoAdDidClose_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdComplete_m462ABD29ECE953884337436F9BB93D1740F16E5B_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdComplete;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___rewardedVideoAdComplete_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdDidSucceed_mEB28E3FBDA25E71D6DFF414253E9D22946E53CBA_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdDidSucceed;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___rewardedVideoAdDidSucceed_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdDidFail_m5B1123EE9B0853395F2AD15F60F4F05D6E0CDEF3_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdDidFail;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___rewardedVideoAdDidFail_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAd_get_RewardedVideoAdActivityDestroyed_m246DC2E953D15F6B222829B7D06790A20080B26E_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// return rewardedVideoAdActivityDestroyed;
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___rewardedVideoAdActivityDestroyed_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RewardedVideoAd_get_PlacementId_m79203F67638150A9462933CDF9BA5BF5A96BA4D4_inline (RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* __this, const RuntimeMethod* method) 
{
	{
		// public string PlacementId { get; private set; }
		String_t* L_0 = __this->___U3CPlacementIdU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FBRewardedVideoAdBridgeCallback_Invoke_m6C0DF3940C44A4CB144ACFEBEB2E7E1CC8AB3ACA_inline (FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RewardData_get_UserId_m65A779477569BCD25E48431426139A5D57D589D7_inline (RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* __this, const RuntimeMethod* method) 
{
	{
		// internal get;
		String_t* L_0 = __this->___U3CUserIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* RewardData_get_Currency_m33F70966C3056F904ACF66B7C5C4AE0222415C28_inline (RewardData_t9B7758D0D6207321E921CC95418332E9FE162812* __this, const RuntimeMethod* method) 
{
	{
		// internal get;
		String_t* L_0 = __this->___U3CCurrencyU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* RewardedVideoAdContainer_get_rewardedVideoAd_m68C0CB84DAA674C467D1DF65788AB3361889F39F_inline (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* __this, const RuntimeMethod* method) 
{
	{
		// internal RewardedVideoAd rewardedVideoAd { get; set; }
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = __this->___U3CrewardedVideoAdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RewardedVideoAdContainer_set_rewardedVideoAd_m1B0F28CA41F608909F511BEFB6D4CF224B0903C5_inline (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* __this, RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* ___value0, const RuntimeMethod* method) 
{
	{
		// internal RewardedVideoAd rewardedVideoAd { get; set; }
		RewardedVideoAd_tCCCBDEAA9EE597516AA23309CC2A669DC2B994D4* L_0 = ___value0;
		__this->___U3CrewardedVideoAdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrewardedVideoAdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* RewardedVideoAdContainer_get_onLoad_mB2E4719AF636CE6DFB1E45633474FFA5F4D3D1F6_inline (RewardedVideoAdContainer_t56494AD955057D158642A6816541ABFDD0BE5D09* __this, const RuntimeMethod* method) 
{
	{
		// internal FBRewardedVideoAdBridgeCallback onLoad { get; set; }
		FBRewardedVideoAdBridgeCallback_t19AF151E6D648CB9E36568DBED20DD8476F58041* L_0 = __this->___U3ConLoadU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FBRewardedVideoAdBridgeErrorCallback_Invoke_m0E61ADCF56E4F80B6587C6F89A1D4A84A7865633_inline (FBRewardedVideoAdBridgeErrorCallback_t68C7921CED0F95EEAD1BF5ED0F23A995F3670CF0* __this, String_t* ___error0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___error0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
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
