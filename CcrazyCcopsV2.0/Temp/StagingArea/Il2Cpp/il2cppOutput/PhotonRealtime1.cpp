#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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

// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_tED419826E0EE97015F10253FC6CC393608EBDFBF;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t6C793F679F853BC58BE63A475DE07DBB098D0287;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_tE6B354058E0A44644DDF44940B337FE609DFD6EA;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_tCD0E0ADD3BB90F6436E1A28C59FD22F12F70F816;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t0944244D58AD91C19F568B089033378D3D73FBB2;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08;
// ExitGames.Client.Photon.Pool`1<System.Collections.Generic.Dictionary`2<System.Byte,System.Object>>
struct Pool_1_t4D3FD78175636A45880AD313F3AF495D9C958935;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_tA9090353AC371DFC4D7BA5DACA50A55DA0A3AD20;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_tDEE265DB6DA0F90F83B237FBACA5AD4E65A08969;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942;
// Photon.Realtime.ErrorInfo
struct ErrorInfo_t829D1EA10BBE2538E288DC9FAFFCBE91874225D9;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22;
// Photon.Realtime.FriendInfo[]
struct FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71;
// Photon.Realtime.IWebRpcCallback
struct IWebRpcCallback_t8E22E34D48A3C7550F423A92483771438C1B7D25;
// Photon.Realtime.IWebRpcCallback[]
struct IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3;
// Photon.Realtime.Player
struct Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202;
// Photon.Realtime.Region
struct Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99;
// Photon.Realtime.RegionHandler
struct RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF;
// Photon.Realtime.Room
struct Room_t5DFC39DD6736A2641374564EC6C31352BE33000D;
// Photon.Realtime.RoomInfo[]
struct RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9;
// Photon.Realtime.RoomOptions
struct RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906;
// Photon.Realtime.SupportLogger
struct SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA;
// Photon.Realtime.TypedLobby
struct TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5;
// Photon.Realtime.TypedLobbyInfo
struct TypedLobbyInfo_t4ADAD96C3E4BD40D2ADEA6AF8741EB96983D76E3;
// Photon.Realtime.TypedLobbyInfo[]
struct TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971;
// Photon.Realtime.WebFlags
struct WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895;
// Photon.Realtime.WebRpcResponse
struct WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t1DDB5A38F3E598F9A05A4512E46958F311A5ECE9;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_tC3A4C2D97D708A1AEC1C0D6B81DFB4C840968862;
// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_tD4F07FC3F0B08A4BE3D400AB1E3553E633312299;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Byte,System.Object>[]
struct EntryU5BU5D_tE72F338533CAB40C554B7EB60D0842E51634A883;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_t9EC04215E0A25794290249C0F6D7EA694596D2BE;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_tACF1090C1AD47AB88B96A6EC589146F41460761E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_t45171E77ABFA412BFFA2BC69FCE8561DAF9738B9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tB8F1C2204B0AE6B3C4DDC89774ACAC7BE239B1E5;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_t075DFAC960C731BE146D2B8DB2BCF82681259639;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_tA90617A2C656916626A63B98664B74DB098BCE8B;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662;
// System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>
struct List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6;
// System.Collections.Generic.List`1<Photon.Realtime.Region>
struct List_1_tB57A7A42B7678B54F23F1B6112A0973D90CF4A59;
// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>
struct List_1_t54699F3EEDF9AFE6DB103B0349A2C451C05C30A2;
// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_t2DF167EE7F886C6E1CE292988624D5634AF12DE2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.Stopwatch
struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;

IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisconnectCause_t8A969EFEB0FE2E4ABD5824250D4C9F7941F2650F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebRpcCallback_t8E22E34D48A3C7550F423A92483771438C1B7D25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LobbyType_tC10229382E36CFEC2718583263A711F1C1F35305_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_tEA01C47C00ABEBF0F0E52CFBC85DBF6D9918C08B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0BCAE45D8ADAB414DB38EA02F9292623B445C753;
IL2CPP_EXTERN_C String_t* _stringLiteral0E181279FE55F2E332C77E81D9AD00F5486D04F9;
IL2CPP_EXTERN_C String_t* _stringLiteral0E894D3036F153E19CBC956B6A5AB40E5B46BFE2;
IL2CPP_EXTERN_C String_t* _stringLiteral10081B2796EBDFF80CF5904ABFDA3DFF44F1D24D;
IL2CPP_EXTERN_C String_t* _stringLiteral1D3E5829ED7DE70BD79558BB321D57CF75539526;
IL2CPP_EXTERN_C String_t* _stringLiteral263A15B4E3E9E2F4C3E8221AC828274306B13855;
IL2CPP_EXTERN_C String_t* _stringLiteral32664F9AA6498F4C645EF8CFF0ECD74680727FE7;
IL2CPP_EXTERN_C String_t* _stringLiteral36C3EAA0E1E290F41E2810BAE8D9502C785E92D9;
IL2CPP_EXTERN_C String_t* _stringLiteral3850EA0BD3AE76F6C25B67DC9BD76AD54ED52547;
IL2CPP_EXTERN_C String_t* _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8;
IL2CPP_EXTERN_C String_t* _stringLiteral449A6A793E79A809F30A8DF7B94A45F51C03EAA7;
IL2CPP_EXTERN_C String_t* _stringLiteral4510F0D9271E0DB7D04EB79129742314C93163A9;
IL2CPP_EXTERN_C String_t* _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808;
IL2CPP_EXTERN_C String_t* _stringLiteral5E0956988995BA9D8AD545060593EC7593A248E9;
IL2CPP_EXTERN_C String_t* _stringLiteral601FC93C20392B20EEB3C9F37859C622C0D151DF;
IL2CPP_EXTERN_C String_t* _stringLiteral6124202FE8A86D323B1C5BC98700503825D454C2;
IL2CPP_EXTERN_C String_t* _stringLiteral65B5AA8DFF1B2E90A2D050D4B6B198EFD82D674E;
IL2CPP_EXTERN_C String_t* _stringLiteral6936221DCE707D23499D1653D6EE7D2BADFFBAA9;
IL2CPP_EXTERN_C String_t* _stringLiteral6C8EE3675EEC14F86A361B84718313E2562E573C;
IL2CPP_EXTERN_C String_t* _stringLiteral6E7819832982A4FC237916272FB49CFFA9624FE3;
IL2CPP_EXTERN_C String_t* _stringLiteral6ED81047DEAE3CCB5B374374798282C7FA029B8E;
IL2CPP_EXTERN_C String_t* _stringLiteral736FF8E5B8E1C7958551256FA5E5146C75A31C7B;
IL2CPP_EXTERN_C String_t* _stringLiteral747F36852E16310ED684572F30D34B6FF654D27C;
IL2CPP_EXTERN_C String_t* _stringLiteral7CB6EFB98BA5972A9B5090DC2E517FE14D12CB04;
IL2CPP_EXTERN_C String_t* _stringLiteral7CEE29B46B3ED2F432C4A7B3A8DE12CAEB5D44D7;
IL2CPP_EXTERN_C String_t* _stringLiteral7D53C873D226A601A9783CBEBEB7B758ABE2D2C7;
IL2CPP_EXTERN_C String_t* _stringLiteral810A4EA841E283333EDA34AE9D91F1789F061216;
IL2CPP_EXTERN_C String_t* _stringLiteral8227CC0BECA58310D819DA015E3EE6A267F9F559;
IL2CPP_EXTERN_C String_t* _stringLiteral8BA5EF7D138B70C6CE8ACA51A43081AB53BB3ABD;
IL2CPP_EXTERN_C String_t* _stringLiteral97CBBD581FE6B5A33E6750E4AAF42F61118114AE;
IL2CPP_EXTERN_C String_t* _stringLiteral98D82A5FBE2C48A4BA7D23C09B325D465EC799DC;
IL2CPP_EXTERN_C String_t* _stringLiteral9E226BDBF405B6893314BBDA5DF5D6DA548FA202;
IL2CPP_EXTERN_C String_t* _stringLiteralA31D6349981379C78CEA09C104C1D1E6ED527107;
IL2CPP_EXTERN_C String_t* _stringLiteralAF2F0CEF3FB17E9F3FFB6676C1CF10F475D85565;
IL2CPP_EXTERN_C String_t* _stringLiteralB32938589EB53DCC2BAD4055BB5EEBD4496BF09A;
IL2CPP_EXTERN_C String_t* _stringLiteralC114B6A8C4FCA0FA33B6A8678C504A97A63EBC26;
IL2CPP_EXTERN_C String_t* _stringLiteralC1F9BEB96CEB3FDF14C58CA7F22BEB729E6C9BD7;
IL2CPP_EXTERN_C String_t* _stringLiteralC5958D312E5DCB60470B5CABD9A95E5F86B42BCB;
IL2CPP_EXTERN_C String_t* _stringLiteralCEB032786FD44DA7017F3BA777F0F12B63B3BE37;
IL2CPP_EXTERN_C String_t* _stringLiteralD1DBE50E93BA588346E8642DECF71D0109C9A902;
IL2CPP_EXTERN_C String_t* _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC7FFB79B44AF60DEF8ECB7E95469108B1A131FDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m50709063468E77F299D9B15A5224FC5B8770F948_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA50C178A90B3A62136BA22B44CE8D3AA0B549911_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3DC15E45F109EA8ED752BBF8669EF7D6199CF358_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8998D7682A2B5B6B47F0837987B6598904297BAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1A59BC22EE5CA9B605AA85BF87051308A8EFE204_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t RoomOptions__ctor_m254044C6ACFBFED793E00A41DF8E76F953EE16CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_LogBasics_m1DD18EAF9701CABB4D230E939DC67A471B2C4B13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_LogStats_m420DC4631D59DCE0F7D33C3146C8688D08C54F94_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnApplicationPause_m394AE8B8288BFCE03DD16287100911E4D922E01B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnConnectedToMaster_mF52A4381DCC7C6CE19F3451D539020E39B2A11C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnConnected_mA89BCA9B3319032CF17DEB3BE76B87AA54C06C76_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnCreateRoomFailed_mE38FC7667E7002A91626809317BECD47D71FDCCF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnCreatedRoom_mF35AB68837976AC88555409F51F24C21C4A8C2F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnCustomAuthenticationFailed_m63D26B6876F0FD3409FD609D7354B59DCA6B6648_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnCustomAuthenticationResponse_mF5F844DB7163FEE64FB92021F75C644C44D2CF35_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnDisconnected_mDE77493509B7A736D17258EABD0BD827843C9950_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnErrorInfo_m20D7E6C6F87BF2BA88711037EEC5F34871B55C8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnFriendListUpdate_mB422AD317F908DDCA99272016652A88A22FBAF47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnJoinRandomFailed_mAE5ECBF451C6E4FDFE2F85E0DC30F525319D12F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnJoinedLobby_m3F1EFC503B05CA5A2410C4B5FF08405E6A4ECB2C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnJoinedRoom_mB37EE4EAB942E5A6A8890C6FA4E1EB6740E16B82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnLeftLobby_m33D2D8A6305BA65C80658D8B0AC3DADB7FAEC419_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnLeftRoom_m05D5834FFADC1CCD590D7606819AA48399A3C76F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnLobbyStatisticsUpdate_m9224062BC0172E2FE07283717A658EF01153EB68_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnMasterClientSwitched_m3658AC3899549A5D3788B25BD338CDDA9C842F8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnPlayerEnteredRoom_m154F337E9EB056F73C076F87B3D79F7C60203933_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnPlayerLeftRoom_m341B83040EF40500E395885DEE61E6EF45B7FD31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnPlayerPropertiesUpdate_m4CDDC3D7D59AA78AAF30E9AC5E407E09674AC886_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnRegionListReceived_mC0CEDEA1F7A9B6376FAF45AFEB99FE7F0B36A720_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnRoomListUpdate_m8268A931B26BA87B2F0B52F6F21A02B76CF7E2F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnRoomPropertiesUpdate_mEB189ED07C8A5116E98966D29B8812178A34C648_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_StartLogStats_m973A1BFAAB04C8F0F9568E1A281C6EE553384610_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_StartTrackValues_mCCA9284BFA342F2822E786C069773B61ED626F55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_Start_m1198B8A81F90188616E5942DCA38D0D79A8C7479_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_StopLogStats_m5EA95B7B9DD9BEB62FCB674FBDED85DB910C3B06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_StopTrackValues_m0806BA608466711C295BC23883AFAF6AEE153CB4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedLobbyInfo_ToString_m5C7AB7E7308A8603657D1621D9AA98C027BD467C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedLobbyInfo__ctor_m608A819C4E7B3D755880CBBE88AD68B11447F76B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedLobby_ToString_mA56D3E449966F9879512DB3400679974B80DB5AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedLobby__cctor_m9A3C3621A62B5E941CBC71894D7318FA30EE84B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebFlags__cctor_m98EB282DAF4EDC93CC587315D2B06E55CB86DDE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRpcCallbacksContainer_OnWebRpcResponse_m04402F0B3B42848A9DA6F90E3D923632EE12C80F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRpcCallbacksContainer__ctor_mC0E65E12EA20C9F14D401D8F08FDB85E806176AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRpcResponse_ToStringFull_mD16B7B3F985553A86DC907BC3836B249EC84F203_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRpcResponse__ctor_m493EF5754D2DE47245C1B8D41E959B542B4CF1A7_MetadataUsageId;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// ExitGames.Client.Photon.OperationResponse
struct  OperationResponse_tCD0E0ADD3BB90F6436E1A28C59FD22F12F70F816  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.OperationResponse::OperationCode
	uint8_t ___OperationCode_0;
	// System.Int16 ExitGames.Client.Photon.OperationResponse::ReturnCode
	int16_t ___ReturnCode_1;
	// System.String ExitGames.Client.Photon.OperationResponse::DebugMessage
	String_t* ___DebugMessage_2;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.OperationResponse::Parameters
	Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * ___Parameters_3;

public:
	inline static int32_t get_offset_of_OperationCode_0() { return static_cast<int32_t>(offsetof(OperationResponse_tCD0E0ADD3BB90F6436E1A28C59FD22F12F70F816, ___OperationCode_0)); }
	inline uint8_t get_OperationCode_0() const { return ___OperationCode_0; }
	inline uint8_t* get_address_of_OperationCode_0() { return &___OperationCode_0; }
	inline void set_OperationCode_0(uint8_t value)
	{
		___OperationCode_0 = value;
	}

	inline static int32_t get_offset_of_ReturnCode_1() { return static_cast<int32_t>(offsetof(OperationResponse_tCD0E0ADD3BB90F6436E1A28C59FD22F12F70F816, ___ReturnCode_1)); }
	inline int16_t get_ReturnCode_1() const { return ___ReturnCode_1; }
	inline int16_t* get_address_of_ReturnCode_1() { return &___ReturnCode_1; }
	inline void set_ReturnCode_1(int16_t value)
	{
		___ReturnCode_1 = value;
	}

	inline static int32_t get_offset_of_DebugMessage_2() { return static_cast<int32_t>(offsetof(OperationResponse_tCD0E0ADD3BB90F6436E1A28C59FD22F12F70F816, ___DebugMessage_2)); }
	inline String_t* get_DebugMessage_2() const { return ___DebugMessage_2; }
	inline String_t** get_address_of_DebugMessage_2() { return &___DebugMessage_2; }
	inline void set_DebugMessage_2(String_t* value)
	{
		___DebugMessage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugMessage_2), (void*)value);
	}

	inline static int32_t get_offset_of_Parameters_3() { return static_cast<int32_t>(offsetof(OperationResponse_tCD0E0ADD3BB90F6436E1A28C59FD22F12F70F816, ___Parameters_3)); }
	inline Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * get_Parameters_3() const { return ___Parameters_3; }
	inline Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D ** get_address_of_Parameters_3() { return &___Parameters_3; }
	inline void set_Parameters_3(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * value)
	{
		___Parameters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parameters_3), (void*)value);
	}
};


// Photon.Realtime.ErrorInfo
struct  ErrorInfo_t829D1EA10BBE2538E288DC9FAFFCBE91874225D9  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.ErrorInfo::Info
	String_t* ___Info_0;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(ErrorInfo_t829D1EA10BBE2538E288DC9FAFFCBE91874225D9, ___Info_0)); }
	inline String_t* get_Info_0() const { return ___Info_0; }
	inline String_t** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(String_t* value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Info_0), (void*)value);
	}
};


// Photon.Realtime.Player
struct  Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202  : public RuntimeObject
{
public:
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_3;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_5;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_t6C793F679F853BC58BE63A475DE07DBB098D0287 * ___U3CCustomPropertiesU3Ek__BackingField_6;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject * ___TagObject_7;

public:
	inline static int32_t get_offset_of_U3CRoomReferenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___U3CRoomReferenceU3Ek__BackingField_0)); }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * get_U3CRoomReferenceU3Ek__BackingField_0() const { return ___U3CRoomReferenceU3Ek__BackingField_0; }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D ** get_address_of_U3CRoomReferenceU3Ek__BackingField_0() { return &___U3CRoomReferenceU3Ek__BackingField_0; }
	inline void set_U3CRoomReferenceU3Ek__BackingField_0(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * value)
	{
		___U3CRoomReferenceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRoomReferenceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_actorNumber_1() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___actorNumber_1)); }
	inline int32_t get_actorNumber_1() const { return ___actorNumber_1; }
	inline int32_t* get_address_of_actorNumber_1() { return &___actorNumber_1; }
	inline void set_actorNumber_1(int32_t value)
	{
		___actorNumber_1 = value;
	}

	inline static int32_t get_offset_of_IsLocal_2() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___IsLocal_2)); }
	inline bool get_IsLocal_2() const { return ___IsLocal_2; }
	inline bool* get_address_of_IsLocal_2() { return &___IsLocal_2; }
	inline void set_IsLocal_2(bool value)
	{
		___IsLocal_2 = value;
	}

	inline static int32_t get_offset_of_nickName_3() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___nickName_3)); }
	inline String_t* get_nickName_3() const { return ___nickName_3; }
	inline String_t** get_address_of_nickName_3() { return &___nickName_3; }
	inline void set_nickName_3(String_t* value)
	{
		___nickName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nickName_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___U3CUserIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_4() const { return ___U3CUserIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_4() { return &___U3CUserIdU3Ek__BackingField_4; }
	inline void set_U3CUserIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsInactiveU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___U3CIsInactiveU3Ek__BackingField_5)); }
	inline bool get_U3CIsInactiveU3Ek__BackingField_5() const { return ___U3CIsInactiveU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsInactiveU3Ek__BackingField_5() { return &___U3CIsInactiveU3Ek__BackingField_5; }
	inline void set_U3CIsInactiveU3Ek__BackingField_5(bool value)
	{
		___U3CIsInactiveU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CCustomPropertiesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___U3CCustomPropertiesU3Ek__BackingField_6)); }
	inline Hashtable_t6C793F679F853BC58BE63A475DE07DBB098D0287 * get_U3CCustomPropertiesU3Ek__BackingField_6() const { return ___U3CCustomPropertiesU3Ek__BackingField_6; }
	inline Hashtable_t6C793F679F853BC58BE63A475DE07DBB098D0287 ** get_address_of_U3CCustomPropertiesU3Ek__BackingField_6() { return &___U3CCustomPropertiesU3Ek__BackingField_6; }
	inline void set_U3CCustomPropertiesU3Ek__BackingField_6(Hashtable_t6C793F679F853BC58BE63A475DE07DBB098D0287 * value)
	{
		___U3CCustomPropertiesU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomPropertiesU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_TagObject_7() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___TagObject_7)); }
	inline RuntimeObject * get_TagObject_7() const { return ___TagObject_7; }
	inline RuntimeObject ** get_address_of_TagObject_7() { return &___TagObject_7; }
	inline void set_TagObject_7(RuntimeObject * value)
	{
		___TagObject_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TagObject_7), (void*)value);
	}
};


// Photon.Realtime.RegionHandler
struct  RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Photon.Realtime.Region> Photon.Realtime.RegionHandler::<EnabledRegions>k__BackingField
	List_1_tB57A7A42B7678B54F23F1B6112A0973D90CF4A59 * ___U3CEnabledRegionsU3Ek__BackingField_1;
	// System.String Photon.Realtime.RegionHandler::availableRegionCodes
	String_t* ___availableRegionCodes_2;
	// Photon.Realtime.Region Photon.Realtime.RegionHandler::bestRegionCache
	Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 * ___bestRegionCache_3;
	// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger> Photon.Realtime.RegionHandler::pingerList
	List_1_t54699F3EEDF9AFE6DB103B0349A2C451C05C30A2 * ___pingerList_4;
	// System.Action`1<Photon.Realtime.RegionHandler> Photon.Realtime.RegionHandler::onCompleteCall
	Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A * ___onCompleteCall_5;
	// System.Int32 Photon.Realtime.RegionHandler::previousPing
	int32_t ___previousPing_6;
	// System.Boolean Photon.Realtime.RegionHandler::<IsPinging>k__BackingField
	bool ___U3CIsPingingU3Ek__BackingField_7;
	// System.String Photon.Realtime.RegionHandler::previousSummaryProvided
	String_t* ___previousSummaryProvided_8;

public:
	inline static int32_t get_offset_of_U3CEnabledRegionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___U3CEnabledRegionsU3Ek__BackingField_1)); }
	inline List_1_tB57A7A42B7678B54F23F1B6112A0973D90CF4A59 * get_U3CEnabledRegionsU3Ek__BackingField_1() const { return ___U3CEnabledRegionsU3Ek__BackingField_1; }
	inline List_1_tB57A7A42B7678B54F23F1B6112A0973D90CF4A59 ** get_address_of_U3CEnabledRegionsU3Ek__BackingField_1() { return &___U3CEnabledRegionsU3Ek__BackingField_1; }
	inline void set_U3CEnabledRegionsU3Ek__BackingField_1(List_1_tB57A7A42B7678B54F23F1B6112A0973D90CF4A59 * value)
	{
		___U3CEnabledRegionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEnabledRegionsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_availableRegionCodes_2() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___availableRegionCodes_2)); }
	inline String_t* get_availableRegionCodes_2() const { return ___availableRegionCodes_2; }
	inline String_t** get_address_of_availableRegionCodes_2() { return &___availableRegionCodes_2; }
	inline void set_availableRegionCodes_2(String_t* value)
	{
		___availableRegionCodes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___availableRegionCodes_2), (void*)value);
	}

	inline static int32_t get_offset_of_bestRegionCache_3() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___bestRegionCache_3)); }
	inline Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 * get_bestRegionCache_3() const { return ___bestRegionCache_3; }
	inline Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 ** get_address_of_bestRegionCache_3() { return &___bestRegionCache_3; }
	inline void set_bestRegionCache_3(Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 * value)
	{
		___bestRegionCache_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bestRegionCache_3), (void*)value);
	}

	inline static int32_t get_offset_of_pingerList_4() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___pingerList_4)); }
	inline List_1_t54699F3EEDF9AFE6DB103B0349A2C451C05C30A2 * get_pingerList_4() const { return ___pingerList_4; }
	inline List_1_t54699F3EEDF9AFE6DB103B0349A2C451C05C30A2 ** get_address_of_pingerList_4() { return &___pingerList_4; }
	inline void set_pingerList_4(List_1_t54699F3EEDF9AFE6DB103B0349A2C451C05C30A2 * value)
	{
		___pingerList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pingerList_4), (void*)value);
	}

	inline static int32_t get_offset_of_onCompleteCall_5() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___onCompleteCall_5)); }
	inline Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A * get_onCompleteCall_5() const { return ___onCompleteCall_5; }
	inline Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A ** get_address_of_onCompleteCall_5() { return &___onCompleteCall_5; }
	inline void set_onCompleteCall_5(Action_1_tC84686CB6F9054DF1E6C26140DC07335B37EBC1A * value)
	{
		___onCompleteCall_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCompleteCall_5), (void*)value);
	}

	inline static int32_t get_offset_of_previousPing_6() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___previousPing_6)); }
	inline int32_t get_previousPing_6() const { return ___previousPing_6; }
	inline int32_t* get_address_of_previousPing_6() { return &___previousPing_6; }
	inline void set_previousPing_6(int32_t value)
	{
		___previousPing_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsPingingU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___U3CIsPingingU3Ek__BackingField_7)); }
	inline bool get_U3CIsPingingU3Ek__BackingField_7() const { return ___U3CIsPingingU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsPingingU3Ek__BackingField_7() { return &___U3CIsPingingU3Ek__BackingField_7; }
	inline void set_U3CIsPingingU3Ek__BackingField_7(bool value)
	{
		___U3CIsPingingU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_previousSummaryProvided_8() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___previousSummaryProvided_8)); }
	inline String_t* get_previousSummaryProvided_8() const { return ___previousSummaryProvided_8; }
	inline String_t** get_address_of_previousSummaryProvided_8() { return &___previousSummaryProvided_8; }
	inline void set_previousSummaryProvided_8(String_t* value)
	{
		___previousSummaryProvided_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousSummaryProvided_8), (void*)value);
	}
};

struct RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF_StaticFields
{
public:
	// System.Type Photon.Realtime.RegionHandler::PingImplementation
	Type_t * ___PingImplementation_0;

public:
	inline static int32_t get_offset_of_PingImplementation_0() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF_StaticFields, ___PingImplementation_0)); }
	inline Type_t * get_PingImplementation_0() const { return ___PingImplementation_0; }
	inline Type_t ** get_address_of_PingImplementation_0() { return &___PingImplementation_0; }
	inline void set_PingImplementation_0(Type_t * value)
	{
		___PingImplementation_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PingImplementation_0), (void*)value);
	}
};


// Photon.Realtime.RoomInfo
struct  RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2  : public RuntimeObject
{
public:
	// System.Boolean Photon.Realtime.RoomInfo::RemovedFromList
	bool ___RemovedFromList_0;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::customProperties
	Hashtable_t6C793F679F853BC58BE63A475DE07DBB098D0287 * ___customProperties_1;
	// System.Byte Photon.Realtime.RoomInfo::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Int32 Photon.Realtime.RoomInfo::emptyRoomTtl
	int32_t ___emptyRoomTtl_3;
	// System.Int32 Photon.Realtime.RoomInfo::playerTtl
	int32_t ___playerTtl_4;
	// System.String[] Photon.Realtime.RoomInfo::expectedUsers
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___expectedUsers_5;
	// System.Boolean Photon.Realtime.RoomInfo::isOpen
	bool ___isOpen_6;
	// System.Boolean Photon.Realtime.RoomInfo::isVisible
	bool ___isVisible_7;
	// System.Boolean Photon.Realtime.RoomInfo::autoCleanUp
	bool ___autoCleanUp_8;
	// System.String Photon.Realtime.RoomInfo::name
	String_t* ___name_9;
	// System.Int32 Photon.Realtime.RoomInfo::masterClientId
	int32_t ___masterClientId_10;
	// System.String[] Photon.Realtime.RoomInfo::propertiesListedInLobby
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___propertiesListedInLobby_11;
	// System.Int32 Photon.Realtime.RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_RemovedFromList_0() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___RemovedFromList_0)); }
	inline bool get_RemovedFromList_0() const { return ___RemovedFromList_0; }
	inline bool* get_address_of_RemovedFromList_0() { return &___RemovedFromList_0; }
	inline void set_RemovedFromList_0(bool value)
	{
		___RemovedFromList_0 = value;
	}

	inline static int32_t get_offset_of_customProperties_1() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___customProperties_1)); }
	inline Hashtable_t6C793F679F853BC58BE63A475DE07DBB098D0287 * get_customProperties_1() const { return ___customProperties_1; }
	inline Hashtable_t6C793F679F853BC58BE63A475DE07DBB098D0287 ** get_address_of_customProperties_1() { return &___customProperties_1; }
	inline void set_customProperties_1(Hashtable_t6C793F679F853BC58BE63A475DE07DBB098D0287 * value)
	{
		___customProperties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customProperties_1), (void*)value);
	}

	inline static int32_t get_offset_of_maxPlayers_2() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___maxPlayers_2)); }
	inline uint8_t get_maxPlayers_2() const { return ___maxPlayers_2; }
	inline uint8_t* get_address_of_maxPlayers_2() { return &___maxPlayers_2; }
	inline void set_maxPlayers_2(uint8_t value)
	{
		___maxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_emptyRoomTtl_3() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___emptyRoomTtl_3)); }
	inline int32_t get_emptyRoomTtl_3() const { return ___emptyRoomTtl_3; }
	inline int32_t* get_address_of_emptyRoomTtl_3() { return &___emptyRoomTtl_3; }
	inline void set_emptyRoomTtl_3(int32_t value)
	{
		___emptyRoomTtl_3 = value;
	}

	inline static int32_t get_offset_of_playerTtl_4() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___playerTtl_4)); }
	inline int32_t get_playerTtl_4() const { return ___playerTtl_4; }
	inline int32_t* get_address_of_playerTtl_4() { return &___playerTtl_4; }
	inline void set_playerTtl_4(int32_t value)
	{
		___playerTtl_4 = value;
	}

	inline static int32_t get_offset_of_expectedUsers_5() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___expectedUsers_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_expectedUsers_5() const { return ___expectedUsers_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_expectedUsers_5() { return &___expectedUsers_5; }
	inline void set_expectedUsers_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___expectedUsers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expectedUsers_5), (void*)value);
	}

	inline static int32_t get_offset_of_isOpen_6() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___isOpen_6)); }
	inline bool get_isOpen_6() const { return ___isOpen_6; }
	inline bool* get_address_of_isOpen_6() { return &___isOpen_6; }
	inline void set_isOpen_6(bool value)
	{
		___isOpen_6 = value;
	}

	inline static int32_t get_offset_of_isVisible_7() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___isVisible_7)); }
	inline bool get_isVisible_7() const { return ___isVisible_7; }
	inline bool* get_address_of_isVisible_7() { return &___isVisible_7; }
	inline void set_isVisible_7(bool value)
	{
		___isVisible_7 = value;
	}

	inline static int32_t get_offset_of_autoCleanUp_8() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___autoCleanUp_8)); }
	inline bool get_autoCleanUp_8() const { return ___autoCleanUp_8; }
	inline bool* get_address_of_autoCleanUp_8() { return &___autoCleanUp_8; }
	inline void set_autoCleanUp_8(bool value)
	{
		___autoCleanUp_8 = value;
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_masterClientId_10() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___masterClientId_10)); }
	inline int32_t get_masterClientId_10() const { return ___masterClientId_10; }
	inline int32_t* get_address_of_masterClientId_10() { return &___masterClientId_10; }
	inline void set_masterClientId_10(int32_t value)
	{
		___masterClientId_10 = value;
	}

	inline static int32_t get_offset_of_propertiesListedInLobby_11() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___propertiesListedInLobby_11)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_propertiesListedInLobby_11() const { return ___propertiesListedInLobby_11; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_propertiesListedInLobby_11() { return &___propertiesListedInLobby_11; }
	inline void set_propertiesListedInLobby_11(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___propertiesListedInLobby_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertiesListedInLobby_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayerCountU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___U3CPlayerCountU3Ek__BackingField_12)); }
	inline int32_t get_U3CPlayerCountU3Ek__BackingField_12() const { return ___U3CPlayerCountU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CPlayerCountU3Ek__BackingField_12() { return &___U3CPlayerCountU3Ek__BackingField_12; }
	inline void set_U3CPlayerCountU3Ek__BackingField_12(int32_t value)
	{
		___U3CPlayerCountU3Ek__BackingField_12 = value;
	}
};


// Photon.Realtime.RoomOptions
struct  RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906  : public RuntimeObject
{
public:
	// System.Boolean Photon.Realtime.RoomOptions::isVisible
	bool ___isVisible_0;
	// System.Boolean Photon.Realtime.RoomOptions::isOpen
	bool ___isOpen_1;
	// System.Byte Photon.Realtime.RoomOptions::MaxPlayers
	uint8_t ___MaxPlayers_2;
	// System.Int32 Photon.Realtime.RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Int32 Photon.Realtime.RoomOptions::EmptyRoomTtl
	int32_t ___EmptyRoomTtl_4;
	// System.Boolean Photon.Realtime.RoomOptions::cleanupCacheOnLeave
	bool ___cleanupCacheOnLeave_5;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomOptions::CustomRoomProperties
	Hashtable_t6C793F679F853BC58BE63A475DE07DBB098D0287 * ___CustomRoomProperties_6;
	// System.String[] Photon.Realtime.RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___CustomRoomPropertiesForLobby_7;
	// System.String[] Photon.Realtime.RoomOptions::Plugins
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___Plugins_8;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_9;
	// System.Boolean Photon.Realtime.RoomOptions::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.RoomOptions::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_11;
	// System.Boolean Photon.Realtime.RoomOptions::broadcastPropsChangeToAll
	bool ___broadcastPropsChangeToAll_12;

public:
	inline static int32_t get_offset_of_isVisible_0() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___isVisible_0)); }
	inline bool get_isVisible_0() const { return ___isVisible_0; }
	inline bool* get_address_of_isVisible_0() { return &___isVisible_0; }
	inline void set_isVisible_0(bool value)
	{
		___isVisible_0 = value;
	}

	inline static int32_t get_offset_of_isOpen_1() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___isOpen_1)); }
	inline bool get_isOpen_1() const { return ___isOpen_1; }
	inline bool* get_address_of_isOpen_1() { return &___isOpen_1; }
	inline void set_isOpen_1(bool value)
	{
		___isOpen_1 = value;
	}

	inline static int32_t get_offset_of_MaxPlayers_2() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___MaxPlayers_2)); }
	inline uint8_t get_MaxPlayers_2() const { return ___MaxPlayers_2; }
	inline uint8_t* get_address_of_MaxPlayers_2() { return &___MaxPlayers_2; }
	inline void set_MaxPlayers_2(uint8_t value)
	{
		___MaxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_PlayerTtl_3() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___PlayerTtl_3)); }
	inline int32_t get_PlayerTtl_3() const { return ___PlayerTtl_3; }
	inline int32_t* get_address_of_PlayerTtl_3() { return &___PlayerTtl_3; }
	inline void set_PlayerTtl_3(int32_t value)
	{
		___PlayerTtl_3 = value;
	}

	inline static int32_t get_offset_of_EmptyRoomTtl_4() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___EmptyRoomTtl_4)); }
	inline int32_t get_EmptyRoomTtl_4() const { return ___EmptyRoomTtl_4; }
	inline int32_t* get_address_of_EmptyRoomTtl_4() { return &___EmptyRoomTtl_4; }
	inline void set_EmptyRoomTtl_4(int32_t value)
	{
		___EmptyRoomTtl_4 = value;
	}

	inline static int32_t get_offset_of_cleanupCacheOnLeave_5() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___cleanupCacheOnLeave_5)); }
	inline bool get_cleanupCacheOnLeave_5() const { return ___cleanupCacheOnLeave_5; }
	inline bool* get_address_of_cleanupCacheOnLeave_5() { return &___cleanupCacheOnLeave_5; }
	inline void set_cleanupCacheOnLeave_5(bool value)
	{
		___cleanupCacheOnLeave_5 = value;
	}

	inline static int32_t get_offset_of_CustomRoomProperties_6() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___CustomRoomProperties_6)); }
	inline Hashtable_t6C793F679F853BC58BE63A475DE07DBB098D0287 * get_CustomRoomProperties_6() const { return ___CustomRoomProperties_6; }
	inline Hashtable_t6C793F679F853BC58BE63A475DE07DBB098D0287 ** get_address_of_CustomRoomProperties_6() { return &___CustomRoomProperties_6; }
	inline void set_CustomRoomProperties_6(Hashtable_t6C793F679F853BC58BE63A475DE07DBB098D0287 * value)
	{
		___CustomRoomProperties_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomRoomProperties_6), (void*)value);
	}

	inline static int32_t get_offset_of_CustomRoomPropertiesForLobby_7() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___CustomRoomPropertiesForLobby_7)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_CustomRoomPropertiesForLobby_7() const { return ___CustomRoomPropertiesForLobby_7; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_CustomRoomPropertiesForLobby_7() { return &___CustomRoomPropertiesForLobby_7; }
	inline void set_CustomRoomPropertiesForLobby_7(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___CustomRoomPropertiesForLobby_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomRoomPropertiesForLobby_7), (void*)value);
	}

	inline static int32_t get_offset_of_Plugins_8() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___Plugins_8)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_Plugins_8() const { return ___Plugins_8; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_Plugins_8() { return &___Plugins_8; }
	inline void set_Plugins_8(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___Plugins_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Plugins_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSuppressRoomEventsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___U3CSuppressRoomEventsU3Ek__BackingField_9)); }
	inline bool get_U3CSuppressRoomEventsU3Ek__BackingField_9() const { return ___U3CSuppressRoomEventsU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CSuppressRoomEventsU3Ek__BackingField_9() { return &___U3CSuppressRoomEventsU3Ek__BackingField_9; }
	inline void set_U3CSuppressRoomEventsU3Ek__BackingField_9(bool value)
	{
		___U3CSuppressRoomEventsU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CPublishUserIdU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___U3CPublishUserIdU3Ek__BackingField_10)); }
	inline bool get_U3CPublishUserIdU3Ek__BackingField_10() const { return ___U3CPublishUserIdU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CPublishUserIdU3Ek__BackingField_10() { return &___U3CPublishUserIdU3Ek__BackingField_10; }
	inline void set_U3CPublishUserIdU3Ek__BackingField_10(bool value)
	{
		___U3CPublishUserIdU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CDeleteNullPropertiesU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___U3CDeleteNullPropertiesU3Ek__BackingField_11)); }
	inline bool get_U3CDeleteNullPropertiesU3Ek__BackingField_11() const { return ___U3CDeleteNullPropertiesU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CDeleteNullPropertiesU3Ek__BackingField_11() { return &___U3CDeleteNullPropertiesU3Ek__BackingField_11; }
	inline void set_U3CDeleteNullPropertiesU3Ek__BackingField_11(bool value)
	{
		___U3CDeleteNullPropertiesU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_broadcastPropsChangeToAll_12() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___broadcastPropsChangeToAll_12)); }
	inline bool get_broadcastPropsChangeToAll_12() const { return ___broadcastPropsChangeToAll_12; }
	inline bool* get_address_of_broadcastPropsChangeToAll_12() { return &___broadcastPropsChangeToAll_12; }
	inline void set_broadcastPropsChangeToAll_12(bool value)
	{
		___broadcastPropsChangeToAll_12 = value;
	}
};


// Photon.Realtime.WebFlags
struct  WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE  : public RuntimeObject
{
public:
	// System.Byte Photon.Realtime.WebFlags::WebhookFlags
	uint8_t ___WebhookFlags_1;

public:
	inline static int32_t get_offset_of_WebhookFlags_1() { return static_cast<int32_t>(offsetof(WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE, ___WebhookFlags_1)); }
	inline uint8_t get_WebhookFlags_1() const { return ___WebhookFlags_1; }
	inline uint8_t* get_address_of_WebhookFlags_1() { return &___WebhookFlags_1; }
	inline void set_WebhookFlags_1(uint8_t value)
	{
		___WebhookFlags_1 = value;
	}
};

struct WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE_StaticFields
{
public:
	// Photon.Realtime.WebFlags Photon.Realtime.WebFlags::Default
	WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE_StaticFields, ___Default_0)); }
	inline WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * get_Default_0() const { return ___Default_0; }
	inline WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// Photon.Realtime.WebRpcResponse
struct  WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.WebRpcResponse::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.WebRpcResponse::<ResultCode>k__BackingField
	int32_t ___U3CResultCodeU3Ek__BackingField_1;
	// System.String Photon.Realtime.WebRpcResponse::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::<Parameters>k__BackingField
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___U3CParametersU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422, ___U3CResultCodeU3Ek__BackingField_1)); }
	inline int32_t get_U3CResultCodeU3Ek__BackingField_1() const { return ___U3CResultCodeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CResultCodeU3Ek__BackingField_1() { return &___U3CResultCodeU3Ek__BackingField_1; }
	inline void set_U3CResultCodeU3Ek__BackingField_1(int32_t value)
	{
		___U3CResultCodeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422, ___U3CMessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_2() const { return ___U3CMessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_2() { return &___U3CMessageU3Ek__BackingField_2; }
	inline void set_U3CMessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParametersU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422, ___U3CParametersU3Ek__BackingField_3)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_U3CParametersU3Ek__BackingField_3() const { return ___U3CParametersU3Ek__BackingField_3; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_U3CParametersU3Ek__BackingField_3() { return &___U3CParametersU3Ek__BackingField_3; }
	inline void set_U3CParametersU3Ek__BackingField_3(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___U3CParametersU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParametersU3Ek__BackingField_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct  Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE72F338533CAB40C554B7EB60D0842E51634A883* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tACF1090C1AD47AB88B96A6EC589146F41460761E * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t45171E77ABFA412BFFA2BC69FCE8561DAF9738B9 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ___entries_1)); }
	inline EntryU5BU5D_tE72F338533CAB40C554B7EB60D0842E51634A883* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE72F338533CAB40C554B7EB60D0842E51634A883** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE72F338533CAB40C554B7EB60D0842E51634A883* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ___keys_7)); }
	inline KeyCollection_tACF1090C1AD47AB88B96A6EC589146F41460761E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tACF1090C1AD47AB88B96A6EC589146F41460761E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tACF1090C1AD47AB88B96A6EC589146F41460761E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ___values_8)); }
	inline ValueCollection_t45171E77ABFA412BFFA2BC69FCE8561DAF9738B9 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t45171E77ABFA412BFFA2BC69FCE8561DAF9738B9 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t45171E77ABFA412BFFA2BC69FCE8561DAF9738B9 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct  Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t9EC04215E0A25794290249C0F6D7EA694596D2BE* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___entries_1)); }
	inline EntryU5BU5D_t9EC04215E0A25794290249C0F6D7EA694596D2BE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t9EC04215E0A25794290249C0F6D7EA694596D2BE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t9EC04215E0A25794290249C0F6D7EA694596D2BE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___keys_7)); }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___values_8)); }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___entries_1)); }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___keys_7)); }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___values_8)); }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct  List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662, ____items_1)); }
	inline FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* get__items_1() const { return ____items_1; }
	inline FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662_StaticFields, ____emptyArray_5)); }
	inline FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>
struct  List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6, ____items_1)); }
	inline IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3* get__items_1() const { return ____items_1; }
	inline IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6_StaticFields, ____emptyArray_5)); }
	inline IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct  List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28, ____items_1)); }
	inline RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* get__items_1() const { return ____items_1; }
	inline RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28_StaticFields, ____emptyArray_5)); }
	inline RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct  List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459, ____items_1)); }
	inline TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* get__items_1() const { return ____items_1; }
	inline TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459_StaticFields, ____emptyArray_5)); }
	inline TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Diagnostics.Stopwatch
struct  Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// ExitGames.Client.Photon.Hashtable
struct  Hashtable_t6C793F679F853BC58BE63A475DE07DBB098D0287  : public Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA
{
public:

public:
};


// Photon.Realtime.Room
struct  Room_t5DFC39DD6736A2641374564EC6C31352BE33000D  : public RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::<LoadBalancingClient>k__BackingField
	LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___U3CLoadBalancingClientU3Ek__BackingField_13;
	// System.Boolean Photon.Realtime.Room::isOffline
	bool ___isOffline_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::players
	Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * ___players_15;
	// System.Boolean Photon.Realtime.Room::<BroadcastPropertiesChangeToAll>k__BackingField
	bool ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CLoadBalancingClientU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___U3CLoadBalancingClientU3Ek__BackingField_13)); }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * get_U3CLoadBalancingClientU3Ek__BackingField_13() const { return ___U3CLoadBalancingClientU3Ek__BackingField_13; }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A ** get_address_of_U3CLoadBalancingClientU3Ek__BackingField_13() { return &___U3CLoadBalancingClientU3Ek__BackingField_13; }
	inline void set_U3CLoadBalancingClientU3Ek__BackingField_13(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * value)
	{
		___U3CLoadBalancingClientU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadBalancingClientU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_isOffline_14() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___isOffline_14)); }
	inline bool get_isOffline_14() const { return ___isOffline_14; }
	inline bool* get_address_of_isOffline_14() { return &___isOffline_14; }
	inline void set_isOffline_14(bool value)
	{
		___isOffline_14 = value;
	}

	inline static int32_t get_offset_of_players_15() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___players_15)); }
	inline Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * get_players_15() const { return ___players_15; }
	inline Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 ** get_address_of_players_15() { return &___players_15; }
	inline void set_players_15(Dictionary_2_tA8C1FE9FA1FB583BFC17676FCF9DFF7D606CB346 * value)
	{
		___players_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___players_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16)); }
	inline bool get_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() const { return ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() { return &___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16; }
	inline void set_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16(bool value)
	{
		___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16 = value;
	}
};


// Photon.Realtime.WebRpcCallbacksContainer
struct  WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895  : public List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.WebRpcCallbacksContainer::client
	LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___client_6;

public:
	inline static int32_t get_offset_of_client_6() { return static_cast<int32_t>(offsetof(WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895, ___client_6)); }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * get_client_6() const { return ___client_6; }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A ** get_address_of_client_6() { return &___client_6; }
	inline void set_client_6(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * value)
	{
		___client_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_6), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<Photon.Realtime.IWebRpcCallback>
struct  Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909, ___list_0)); }
	inline List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6 * get_list_0() const { return ___list_0; }
	inline List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_t9275D5D5481EE2B7127EF942AFFE987B5CE27AB0 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_t9275D5D5481EE2B7127EF942AFFE987B5CE27AB0, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DebugLevel
struct  DebugLevel_tFDF42EB9A26BDC73F87F90B97A5C323676FC1292 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_tFDF42EB9A26BDC73F87F90B97A5C323676FC1292, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.SerializationProtocol
struct  SerializationProtocol_t5A09577A698BFDFB37E5569E7401C416BD60FC96 
{
public:
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationProtocol_t5A09577A698BFDFB37E5569E7401C416BD60FC96, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.AuthModeOption
struct  AuthModeOption_tD09E4DA95C4EC0B4CC7EFC735D512F177EC4F829 
{
public:
	// System.Int32 Photon.Realtime.AuthModeOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthModeOption_tD09E4DA95C4EC0B4CC7EFC735D512F177EC4F829, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ClientState
struct  ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282 
{
public:
	// System.Int32 Photon.Realtime.ClientState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.DisconnectCause
struct  DisconnectCause_t8A969EFEB0FE2E4ABD5824250D4C9F7941F2650F 
{
public:
	// System.Int32 Photon.Realtime.DisconnectCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisconnectCause_t8A969EFEB0FE2E4ABD5824250D4C9F7941F2650F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.EncryptionMode
struct  EncryptionMode_t5BA959815A4DD1ABC4458E9951E81CB988CBE1F3 
{
public:
	// System.Int32 Photon.Realtime.EncryptionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EncryptionMode_t5BA959815A4DD1ABC4458E9951E81CB988CBE1F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.JoinType
struct  JoinType_t7BE6E5A9E95DEC68F63C8255504A5B53342028E0 
{
public:
	// System.Int32 Photon.Realtime.JoinType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoinType_t7BE6E5A9E95DEC68F63C8255504A5B53342028E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.LobbyType
struct  LobbyType_tC10229382E36CFEC2718583263A711F1C1F35305 
{
public:
	// System.Byte Photon.Realtime.LobbyType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LobbyType_tC10229382E36CFEC2718583263A711F1C1F35305, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.RoomOptionBit
struct  RoomOptionBit_t651750BA2A7E08AAE25A72C3A2CDA7B90ABAF8A5 
{
public:
	// System.Int32 Photon.Realtime.RoomOptionBit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RoomOptionBit_t651750BA2A7E08AAE25A72C3A2CDA7B90ABAF8A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ServerConnection
struct  ServerConnection_t5E49560AE3E1B85523C39B5EAB7EA09FE5363F68 
{
public:
	// System.Int32 Photon.Realtime.ServerConnection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServerConnection_t5E49560AE3E1B85523C39B5EAB7EA09FE5363F68, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// ExitGames.Client.Photon.PhotonPeer
struct  PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_6;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_7;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_12;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_t075DFAC960C731BE146D2B8DB2BCF82681259639 * ___SocketImplementationConfig_13;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t * ___U3CSocketImplementationU3Ek__BackingField_14;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_15;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_16;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_17;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendInCreationOrder
	bool ___SendInCreationOrder_18;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_19;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_20;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMinConnections
	int32_t ___RhttpMinConnections_21;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::RhttpMaxConnections
	int32_t ___RhttpMaxConnections_22;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::EnableEncryptedFlag
	bool ___EnableEncryptedFlag_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_25;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_26;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::InitialResendTimeMax
	int32_t ___InitialResendTimeMax_27;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_28;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::DisconnectTimeout
	int32_t ___DisconnectTimeout_29;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_30;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_32;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_33;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_35;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___RandomizedSequenceNumbers_36;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_tA9090353AC371DFC4D7BA5DACA50A55DA0A3AD20 * ___U3CTrafficStatsIncomingU3Ek__BackingField_37;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_tA9090353AC371DFC4D7BA5DACA50A55DA0A3AD20 * ___U3CTrafficStatsOutgoingU3Ek__BackingField_38;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_tDEE265DB6DA0F90F83B237FBACA5AD4E65A08969 * ___U3CTrafficStatsGameLevelU3Ek__BackingField_39;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___trafficStatsStopwatch_40;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_41;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_t0944244D58AD91C19F568B089033378D3D73FBB2 * ___peerBase_42;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject * ___SendOutgoingLockObject_43;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject * ___DispatchLockObject_44;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject * ___EnqueueLock_45;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___PayloadEncryptionSecret_46;
	// System.Type ExitGames.Client.Photon.PhotonPeer::encryptorType
	Type_t * ___encryptorType_47;
	// ExitGames.Client.Photon.Encryption.IPhotonEncryptor ExitGames.Client.Photon.PhotonPeer::Encryptor
	RuntimeObject* ___Encryptor_48;

public:
	inline static int32_t get_offset_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___U3CCommandBufferSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCommandBufferSizeU3Ek__BackingField_0() const { return ___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return &___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline void set_U3CCommandBufferSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCommandBufferSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1)); }
	inline int32_t get_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() const { return ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return &___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline void set_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1(int32_t value)
	{
		___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_WarningSize_2() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___WarningSize_2)); }
	inline int32_t get_WarningSize_2() const { return ___WarningSize_2; }
	inline int32_t* get_address_of_WarningSize_2() { return &___WarningSize_2; }
	inline void set_WarningSize_2(int32_t value)
	{
		___WarningSize_2 = value;
	}

	inline static int32_t get_offset_of_ClientSdkId_6() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___ClientSdkId_6)); }
	inline uint8_t get_ClientSdkId_6() const { return ___ClientSdkId_6; }
	inline uint8_t* get_address_of_ClientSdkId_6() { return &___ClientSdkId_6; }
	inline void set_ClientSdkId_6(uint8_t value)
	{
		___ClientSdkId_6 = value;
	}

	inline static int32_t get_offset_of_clientVersion_7() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___clientVersion_7)); }
	inline String_t* get_clientVersion_7() const { return ___clientVersion_7; }
	inline String_t** get_address_of_clientVersion_7() { return &___clientVersion_7; }
	inline void set_clientVersion_7(String_t* value)
	{
		___clientVersion_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientVersion_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSerializationProtocolTypeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___U3CSerializationProtocolTypeU3Ek__BackingField_12)); }
	inline int32_t get_U3CSerializationProtocolTypeU3Ek__BackingField_12() const { return ___U3CSerializationProtocolTypeU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CSerializationProtocolTypeU3Ek__BackingField_12() { return &___U3CSerializationProtocolTypeU3Ek__BackingField_12; }
	inline void set_U3CSerializationProtocolTypeU3Ek__BackingField_12(int32_t value)
	{
		___U3CSerializationProtocolTypeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_SocketImplementationConfig_13() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___SocketImplementationConfig_13)); }
	inline Dictionary_2_t075DFAC960C731BE146D2B8DB2BCF82681259639 * get_SocketImplementationConfig_13() const { return ___SocketImplementationConfig_13; }
	inline Dictionary_2_t075DFAC960C731BE146D2B8DB2BCF82681259639 ** get_address_of_SocketImplementationConfig_13() { return &___SocketImplementationConfig_13; }
	inline void set_SocketImplementationConfig_13(Dictionary_2_t075DFAC960C731BE146D2B8DB2BCF82681259639 * value)
	{
		___SocketImplementationConfig_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SocketImplementationConfig_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSocketImplementationU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___U3CSocketImplementationU3Ek__BackingField_14)); }
	inline Type_t * get_U3CSocketImplementationU3Ek__BackingField_14() const { return ___U3CSocketImplementationU3Ek__BackingField_14; }
	inline Type_t ** get_address_of_U3CSocketImplementationU3Ek__BackingField_14() { return &___U3CSocketImplementationU3Ek__BackingField_14; }
	inline void set_U3CSocketImplementationU3Ek__BackingField_14(Type_t * value)
	{
		___U3CSocketImplementationU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSocketImplementationU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_DebugOut_15() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___DebugOut_15)); }
	inline uint8_t get_DebugOut_15() const { return ___DebugOut_15; }
	inline uint8_t* get_address_of_DebugOut_15() { return &___DebugOut_15; }
	inline void set_DebugOut_15(uint8_t value)
	{
		___DebugOut_15 = value;
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___U3CListenerU3Ek__BackingField_16)); }
	inline RuntimeObject* get_U3CListenerU3Ek__BackingField_16() const { return ___U3CListenerU3Ek__BackingField_16; }
	inline RuntimeObject** get_address_of_U3CListenerU3Ek__BackingField_16() { return &___U3CListenerU3Ek__BackingField_16; }
	inline void set_U3CListenerU3Ek__BackingField_16(RuntimeObject* value)
	{
		___U3CListenerU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CListenerU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_reuseEventInstance_17() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___reuseEventInstance_17)); }
	inline bool get_reuseEventInstance_17() const { return ___reuseEventInstance_17; }
	inline bool* get_address_of_reuseEventInstance_17() { return &___reuseEventInstance_17; }
	inline void set_reuseEventInstance_17(bool value)
	{
		___reuseEventInstance_17 = value;
	}

	inline static int32_t get_offset_of_SendInCreationOrder_18() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___SendInCreationOrder_18)); }
	inline bool get_SendInCreationOrder_18() const { return ___SendInCreationOrder_18; }
	inline bool* get_address_of_SendInCreationOrder_18() { return &___SendInCreationOrder_18; }
	inline void set_SendInCreationOrder_18(bool value)
	{
		___SendInCreationOrder_18 = value;
	}

	inline static int32_t get_offset_of_U3CEnableServerTracingU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___U3CEnableServerTracingU3Ek__BackingField_19)); }
	inline bool get_U3CEnableServerTracingU3Ek__BackingField_19() const { return ___U3CEnableServerTracingU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CEnableServerTracingU3Ek__BackingField_19() { return &___U3CEnableServerTracingU3Ek__BackingField_19; }
	inline void set_U3CEnableServerTracingU3Ek__BackingField_19(bool value)
	{
		___U3CEnableServerTracingU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_quickResendAttempts_20() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___quickResendAttempts_20)); }
	inline uint8_t get_quickResendAttempts_20() const { return ___quickResendAttempts_20; }
	inline uint8_t* get_address_of_quickResendAttempts_20() { return &___quickResendAttempts_20; }
	inline void set_quickResendAttempts_20(uint8_t value)
	{
		___quickResendAttempts_20 = value;
	}

	inline static int32_t get_offset_of_RhttpMinConnections_21() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___RhttpMinConnections_21)); }
	inline int32_t get_RhttpMinConnections_21() const { return ___RhttpMinConnections_21; }
	inline int32_t* get_address_of_RhttpMinConnections_21() { return &___RhttpMinConnections_21; }
	inline void set_RhttpMinConnections_21(int32_t value)
	{
		___RhttpMinConnections_21 = value;
	}

	inline static int32_t get_offset_of_RhttpMaxConnections_22() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___RhttpMaxConnections_22)); }
	inline int32_t get_RhttpMaxConnections_22() const { return ___RhttpMaxConnections_22; }
	inline int32_t* get_address_of_RhttpMaxConnections_22() { return &___RhttpMaxConnections_22; }
	inline void set_RhttpMaxConnections_22(int32_t value)
	{
		___RhttpMaxConnections_22 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_23() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___ChannelCount_23)); }
	inline uint8_t get_ChannelCount_23() const { return ___ChannelCount_23; }
	inline uint8_t* get_address_of_ChannelCount_23() { return &___ChannelCount_23; }
	inline void set_ChannelCount_23(uint8_t value)
	{
		___ChannelCount_23 = value;
	}

	inline static int32_t get_offset_of_EnableEncryptedFlag_24() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___EnableEncryptedFlag_24)); }
	inline bool get_EnableEncryptedFlag_24() const { return ___EnableEncryptedFlag_24; }
	inline bool* get_address_of_EnableEncryptedFlag_24() { return &___EnableEncryptedFlag_24; }
	inline void set_EnableEncryptedFlag_24(bool value)
	{
		___EnableEncryptedFlag_24 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_25() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___crcEnabled_25)); }
	inline bool get_crcEnabled_25() const { return ___crcEnabled_25; }
	inline bool* get_address_of_crcEnabled_25() { return &___crcEnabled_25; }
	inline void set_crcEnabled_25(bool value)
	{
		___crcEnabled_25 = value;
	}

	inline static int32_t get_offset_of_SentCountAllowance_26() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___SentCountAllowance_26)); }
	inline int32_t get_SentCountAllowance_26() const { return ___SentCountAllowance_26; }
	inline int32_t* get_address_of_SentCountAllowance_26() { return &___SentCountAllowance_26; }
	inline void set_SentCountAllowance_26(int32_t value)
	{
		___SentCountAllowance_26 = value;
	}

	inline static int32_t get_offset_of_InitialResendTimeMax_27() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___InitialResendTimeMax_27)); }
	inline int32_t get_InitialResendTimeMax_27() const { return ___InitialResendTimeMax_27; }
	inline int32_t* get_address_of_InitialResendTimeMax_27() { return &___InitialResendTimeMax_27; }
	inline void set_InitialResendTimeMax_27(int32_t value)
	{
		___InitialResendTimeMax_27 = value;
	}

	inline static int32_t get_offset_of_TimePingInterval_28() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___TimePingInterval_28)); }
	inline int32_t get_TimePingInterval_28() const { return ___TimePingInterval_28; }
	inline int32_t* get_address_of_TimePingInterval_28() { return &___TimePingInterval_28; }
	inline void set_TimePingInterval_28(int32_t value)
	{
		___TimePingInterval_28 = value;
	}

	inline static int32_t get_offset_of_DisconnectTimeout_29() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___DisconnectTimeout_29)); }
	inline int32_t get_DisconnectTimeout_29() const { return ___DisconnectTimeout_29; }
	inline int32_t* get_address_of_DisconnectTimeout_29() { return &___DisconnectTimeout_29; }
	inline void set_DisconnectTimeout_29(int32_t value)
	{
		___DisconnectTimeout_29 = value;
	}

	inline static int32_t get_offset_of_U3CTransportProtocolU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___U3CTransportProtocolU3Ek__BackingField_30)); }
	inline uint8_t get_U3CTransportProtocolU3Ek__BackingField_30() const { return ___U3CTransportProtocolU3Ek__BackingField_30; }
	inline uint8_t* get_address_of_U3CTransportProtocolU3Ek__BackingField_30() { return &___U3CTransportProtocolU3Ek__BackingField_30; }
	inline void set_U3CTransportProtocolU3Ek__BackingField_30(uint8_t value)
	{
		___U3CTransportProtocolU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_mtu_32() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___mtu_32)); }
	inline int32_t get_mtu_32() const { return ___mtu_32; }
	inline int32_t* get_address_of_mtu_32() { return &___mtu_32; }
	inline void set_mtu_32(int32_t value)
	{
		___mtu_32 = value;
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___U3CIsSendingOnlyAcksU3Ek__BackingField_33)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_33() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_33; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_33() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_33; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_33(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_RandomizeSequenceNumbers_35() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___RandomizeSequenceNumbers_35)); }
	inline bool get_RandomizeSequenceNumbers_35() const { return ___RandomizeSequenceNumbers_35; }
	inline bool* get_address_of_RandomizeSequenceNumbers_35() { return &___RandomizeSequenceNumbers_35; }
	inline void set_RandomizeSequenceNumbers_35(bool value)
	{
		___RandomizeSequenceNumbers_35 = value;
	}

	inline static int32_t get_offset_of_RandomizedSequenceNumbers_36() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___RandomizedSequenceNumbers_36)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_RandomizedSequenceNumbers_36() const { return ___RandomizedSequenceNumbers_36; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_RandomizedSequenceNumbers_36() { return &___RandomizedSequenceNumbers_36; }
	inline void set_RandomizedSequenceNumbers_36(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___RandomizedSequenceNumbers_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomizedSequenceNumbers_36), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsIncomingU3Ek__BackingField_37() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___U3CTrafficStatsIncomingU3Ek__BackingField_37)); }
	inline TrafficStats_tA9090353AC371DFC4D7BA5DACA50A55DA0A3AD20 * get_U3CTrafficStatsIncomingU3Ek__BackingField_37() const { return ___U3CTrafficStatsIncomingU3Ek__BackingField_37; }
	inline TrafficStats_tA9090353AC371DFC4D7BA5DACA50A55DA0A3AD20 ** get_address_of_U3CTrafficStatsIncomingU3Ek__BackingField_37() { return &___U3CTrafficStatsIncomingU3Ek__BackingField_37; }
	inline void set_U3CTrafficStatsIncomingU3Ek__BackingField_37(TrafficStats_tA9090353AC371DFC4D7BA5DACA50A55DA0A3AD20 * value)
	{
		___U3CTrafficStatsIncomingU3Ek__BackingField_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsIncomingU3Ek__BackingField_37), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsOutgoingU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___U3CTrafficStatsOutgoingU3Ek__BackingField_38)); }
	inline TrafficStats_tA9090353AC371DFC4D7BA5DACA50A55DA0A3AD20 * get_U3CTrafficStatsOutgoingU3Ek__BackingField_38() const { return ___U3CTrafficStatsOutgoingU3Ek__BackingField_38; }
	inline TrafficStats_tA9090353AC371DFC4D7BA5DACA50A55DA0A3AD20 ** get_address_of_U3CTrafficStatsOutgoingU3Ek__BackingField_38() { return &___U3CTrafficStatsOutgoingU3Ek__BackingField_38; }
	inline void set_U3CTrafficStatsOutgoingU3Ek__BackingField_38(TrafficStats_tA9090353AC371DFC4D7BA5DACA50A55DA0A3AD20 * value)
	{
		___U3CTrafficStatsOutgoingU3Ek__BackingField_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsOutgoingU3Ek__BackingField_38), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsGameLevelU3Ek__BackingField_39() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___U3CTrafficStatsGameLevelU3Ek__BackingField_39)); }
	inline TrafficStatsGameLevel_tDEE265DB6DA0F90F83B237FBACA5AD4E65A08969 * get_U3CTrafficStatsGameLevelU3Ek__BackingField_39() const { return ___U3CTrafficStatsGameLevelU3Ek__BackingField_39; }
	inline TrafficStatsGameLevel_tDEE265DB6DA0F90F83B237FBACA5AD4E65A08969 ** get_address_of_U3CTrafficStatsGameLevelU3Ek__BackingField_39() { return &___U3CTrafficStatsGameLevelU3Ek__BackingField_39; }
	inline void set_U3CTrafficStatsGameLevelU3Ek__BackingField_39(TrafficStatsGameLevel_tDEE265DB6DA0F90F83B237FBACA5AD4E65A08969 * value)
	{
		___U3CTrafficStatsGameLevelU3Ek__BackingField_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsGameLevelU3Ek__BackingField_39), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsStopwatch_40() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___trafficStatsStopwatch_40)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_trafficStatsStopwatch_40() const { return ___trafficStatsStopwatch_40; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_trafficStatsStopwatch_40() { return &___trafficStatsStopwatch_40; }
	inline void set_trafficStatsStopwatch_40(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___trafficStatsStopwatch_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trafficStatsStopwatch_40), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_41() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___trafficStatsEnabled_41)); }
	inline bool get_trafficStatsEnabled_41() const { return ___trafficStatsEnabled_41; }
	inline bool* get_address_of_trafficStatsEnabled_41() { return &___trafficStatsEnabled_41; }
	inline void set_trafficStatsEnabled_41(bool value)
	{
		___trafficStatsEnabled_41 = value;
	}

	inline static int32_t get_offset_of_peerBase_42() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___peerBase_42)); }
	inline PeerBase_t0944244D58AD91C19F568B089033378D3D73FBB2 * get_peerBase_42() const { return ___peerBase_42; }
	inline PeerBase_t0944244D58AD91C19F568B089033378D3D73FBB2 ** get_address_of_peerBase_42() { return &___peerBase_42; }
	inline void set_peerBase_42(PeerBase_t0944244D58AD91C19F568B089033378D3D73FBB2 * value)
	{
		___peerBase_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_42), (void*)value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_43() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___SendOutgoingLockObject_43)); }
	inline RuntimeObject * get_SendOutgoingLockObject_43() const { return ___SendOutgoingLockObject_43; }
	inline RuntimeObject ** get_address_of_SendOutgoingLockObject_43() { return &___SendOutgoingLockObject_43; }
	inline void set_SendOutgoingLockObject_43(RuntimeObject * value)
	{
		___SendOutgoingLockObject_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendOutgoingLockObject_43), (void*)value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_44() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___DispatchLockObject_44)); }
	inline RuntimeObject * get_DispatchLockObject_44() const { return ___DispatchLockObject_44; }
	inline RuntimeObject ** get_address_of_DispatchLockObject_44() { return &___DispatchLockObject_44; }
	inline void set_DispatchLockObject_44(RuntimeObject * value)
	{
		___DispatchLockObject_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DispatchLockObject_44), (void*)value);
	}

	inline static int32_t get_offset_of_EnqueueLock_45() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___EnqueueLock_45)); }
	inline RuntimeObject * get_EnqueueLock_45() const { return ___EnqueueLock_45; }
	inline RuntimeObject ** get_address_of_EnqueueLock_45() { return &___EnqueueLock_45; }
	inline void set_EnqueueLock_45(RuntimeObject * value)
	{
		___EnqueueLock_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnqueueLock_45), (void*)value);
	}

	inline static int32_t get_offset_of_PayloadEncryptionSecret_46() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___PayloadEncryptionSecret_46)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_PayloadEncryptionSecret_46() const { return ___PayloadEncryptionSecret_46; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_PayloadEncryptionSecret_46() { return &___PayloadEncryptionSecret_46; }
	inline void set_PayloadEncryptionSecret_46(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___PayloadEncryptionSecret_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PayloadEncryptionSecret_46), (void*)value);
	}

	inline static int32_t get_offset_of_encryptorType_47() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___encryptorType_47)); }
	inline Type_t * get_encryptorType_47() const { return ___encryptorType_47; }
	inline Type_t ** get_address_of_encryptorType_47() { return &___encryptorType_47; }
	inline void set_encryptorType_47(Type_t * value)
	{
		___encryptorType_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encryptorType_47), (void*)value);
	}

	inline static int32_t get_offset_of_Encryptor_48() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08, ___Encryptor_48)); }
	inline RuntimeObject* get_Encryptor_48() const { return ___Encryptor_48; }
	inline RuntimeObject** get_address_of_Encryptor_48() { return &___Encryptor_48; }
	inline void set_Encryptor_48(RuntimeObject* value)
	{
		___Encryptor_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Encryptor_48), (void*)value);
	}
};

struct PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08_StaticFields
{
public:
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::checkedNativeLibs
	bool ___checkedNativeLibs_8;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useSocketNative
	bool ___useSocketNative_9;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useDiffieHellmanCryptoProvider
	bool ___useDiffieHellmanCryptoProvider_10;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useEncryptorNative
	bool ___useEncryptorNative_11;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_31;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_34;

public:
	inline static int32_t get_offset_of_checkedNativeLibs_8() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08_StaticFields, ___checkedNativeLibs_8)); }
	inline bool get_checkedNativeLibs_8() const { return ___checkedNativeLibs_8; }
	inline bool* get_address_of_checkedNativeLibs_8() { return &___checkedNativeLibs_8; }
	inline void set_checkedNativeLibs_8(bool value)
	{
		___checkedNativeLibs_8 = value;
	}

	inline static int32_t get_offset_of_useSocketNative_9() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08_StaticFields, ___useSocketNative_9)); }
	inline bool get_useSocketNative_9() const { return ___useSocketNative_9; }
	inline bool* get_address_of_useSocketNative_9() { return &___useSocketNative_9; }
	inline void set_useSocketNative_9(bool value)
	{
		___useSocketNative_9 = value;
	}

	inline static int32_t get_offset_of_useDiffieHellmanCryptoProvider_10() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08_StaticFields, ___useDiffieHellmanCryptoProvider_10)); }
	inline bool get_useDiffieHellmanCryptoProvider_10() const { return ___useDiffieHellmanCryptoProvider_10; }
	inline bool* get_address_of_useDiffieHellmanCryptoProvider_10() { return &___useDiffieHellmanCryptoProvider_10; }
	inline void set_useDiffieHellmanCryptoProvider_10(bool value)
	{
		___useDiffieHellmanCryptoProvider_10 = value;
	}

	inline static int32_t get_offset_of_useEncryptorNative_11() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08_StaticFields, ___useEncryptorNative_11)); }
	inline bool get_useEncryptorNative_11() const { return ___useEncryptorNative_11; }
	inline bool* get_address_of_useEncryptorNative_11() { return &___useEncryptorNative_11; }
	inline void set_useEncryptorNative_11(bool value)
	{
		___useEncryptorNative_11 = value;
	}

	inline static int32_t get_offset_of_OutgoingStreamBufferSize_31() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08_StaticFields, ___OutgoingStreamBufferSize_31)); }
	inline int32_t get_OutgoingStreamBufferSize_31() const { return ___OutgoingStreamBufferSize_31; }
	inline int32_t* get_address_of_OutgoingStreamBufferSize_31() { return &___OutgoingStreamBufferSize_31; }
	inline void set_OutgoingStreamBufferSize_31(int32_t value)
	{
		___OutgoingStreamBufferSize_31 = value;
	}

	inline static int32_t get_offset_of_AsyncKeyExchange_34() { return static_cast<int32_t>(offsetof(PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08_StaticFields, ___AsyncKeyExchange_34)); }
	inline bool get_AsyncKeyExchange_34() const { return ___AsyncKeyExchange_34; }
	inline bool* get_address_of_AsyncKeyExchange_34() { return &___AsyncKeyExchange_34; }
	inline void set_AsyncKeyExchange_34(bool value)
	{
		___AsyncKeyExchange_34 = value;
	}
};


// Photon.Realtime.LoadBalancingClient
struct  LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A  : public RuntimeObject
{
public:
	// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::<LoadBalancingPeer>k__BackingField
	LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * ___U3CLoadBalancingPeerU3Ek__BackingField_0;
	// System.String Photon.Realtime.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String Photon.Realtime.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * ___U3CAuthValuesU3Ek__BackingField_3;
	// Photon.Realtime.AuthModeOption Photon.Realtime.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_4;
	// Photon.Realtime.EncryptionMode Photon.Realtime.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_5;
	// ExitGames.Client.Photon.ConnectionProtocol Photon.Realtime.LoadBalancingClient::ExpectedProtocol
	uint8_t ___ExpectedProtocol_6;
	// System.String Photon.Realtime.LoadBalancingClient::tokenCache
	String_t* ___tokenCache_7;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_8;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_9;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHttp
	String_t* ___NameServerHttp_10;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12;
	// System.String Photon.Realtime.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_13;
	// System.String Photon.Realtime.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_14;
	// Photon.Realtime.ServerConnection Photon.Realtime.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_15;
	// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::state
	int32_t ___state_16;
	// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState> Photon.Realtime.LoadBalancingClient::StateChanged
	Action_2_tD4F07FC3F0B08A4BE3D400AB1E3553E633312299 * ___StateChanged_17;
	// System.Action`1<ExitGames.Client.Photon.EventData> Photon.Realtime.LoadBalancingClient::EventReceived
	Action_1_t1DDB5A38F3E598F9A05A4512E46958F311A5ECE9 * ___EventReceived_18;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_tC3A4C2D97D708A1AEC1C0D6B81DFB4C840968862 * ___OpResponseReceived_19;
	// Photon.Realtime.ConnectionCallbacksContainer Photon.Realtime.LoadBalancingClient::ConnectionCallbackTargets
	ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 * ___ConnectionCallbackTargets_20;
	// Photon.Realtime.MatchMakingCallbacksContainer Photon.Realtime.LoadBalancingClient::MatchMakingCallbackTargets
	MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 * ___MatchMakingCallbackTargets_21;
	// Photon.Realtime.InRoomCallbacksContainer Photon.Realtime.LoadBalancingClient::InRoomCallbackTargets
	InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D * ___InRoomCallbackTargets_22;
	// Photon.Realtime.LobbyCallbacksContainer Photon.Realtime.LoadBalancingClient::LobbyCallbackTargets
	LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 * ___LobbyCallbackTargets_23;
	// Photon.Realtime.WebRpcCallbacksContainer Photon.Realtime.LoadBalancingClient::WebRpcCallbackTargets
	WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * ___WebRpcCallbackTargets_24;
	// Photon.Realtime.ErrorInfoCallbacksContainer Photon.Realtime.LoadBalancingClient::ErrorInfoCallbackTargets
	ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 * ___ErrorInfoCallbackTargets_25;
	// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_26;
	// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * ___U3CCurrentLobbyU3Ek__BackingField_27;
	// System.Boolean Photon.Realtime.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_28;
	// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo> Photon.Realtime.LoadBalancingClient::lobbyStatistics
	List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459 * ___lobbyStatistics_29;
	// Photon.Realtime.Player Photon.Realtime.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___U3CLocalPlayerU3Ek__BackingField_30;
	// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::<CurrentRoom>k__BackingField
	Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * ___U3CCurrentRoomU3Ek__BackingField_31;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_32;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_33;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_34;
	// Photon.Realtime.JoinType Photon.Realtime.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_35;
	// Photon.Realtime.EnterRoomParams Photon.Realtime.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * ___enterRoomParamsCache_36;
	// ExitGames.Client.Photon.OperationResponse Photon.Realtime.LoadBalancingClient::failedRoomEntryOperation
	OperationResponse_tCD0E0ADD3BB90F6436E1A28C59FD22F12F70F816 * ___failedRoomEntryOperation_37;
	// System.String[] Photon.Realtime.LoadBalancingClient::friendListRequested
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___friendListRequested_39;
	// System.String Photon.Realtime.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_40;
	// System.String Photon.Realtime.LoadBalancingClient::<CurrentCluster>k__BackingField
	String_t* ___U3CCurrentClusterU3Ek__BackingField_41;
	// Photon.Realtime.RegionHandler Photon.Realtime.LoadBalancingClient::RegionHandler
	RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * ___RegionHandler_42;
	// System.String Photon.Realtime.LoadBalancingClient::bestRegionSummaryFromStorage
	String_t* ___bestRegionSummaryFromStorage_43;
	// System.String Photon.Realtime.LoadBalancingClient::SummaryToCache
	String_t* ___SummaryToCache_44;
	// System.Boolean Photon.Realtime.LoadBalancingClient::connectToBestRegion
	bool ___connectToBestRegion_45;
	// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient_CallbackTargetChange> Photon.Realtime.LoadBalancingClient::callbackTargetChanges
	Queue_1_t2DF167EE7F886C6E1CE292988624D5634AF12DE2 * ___callbackTargetChanges_46;
	// System.Collections.Generic.HashSet`1<System.Object> Photon.Realtime.LoadBalancingClient::callbackTargets
	HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5 * ___callbackTargets_47;

public:
	inline static int32_t get_offset_of_U3CLoadBalancingPeerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CLoadBalancingPeerU3Ek__BackingField_0)); }
	inline LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * get_U3CLoadBalancingPeerU3Ek__BackingField_0() const { return ___U3CLoadBalancingPeerU3Ek__BackingField_0; }
	inline LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 ** get_address_of_U3CLoadBalancingPeerU3Ek__BackingField_0() { return &___U3CLoadBalancingPeerU3Ek__BackingField_0; }
	inline void set_U3CLoadBalancingPeerU3Ek__BackingField_0(LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * value)
	{
		___U3CLoadBalancingPeerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadBalancingPeerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CAppVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_1() const { return ___U3CAppVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_1() { return &___U3CAppVersionU3Ek__BackingField_1; }
	inline void set_U3CAppVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CAppIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_2() const { return ___U3CAppIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_2() { return &___U3CAppIdU3Ek__BackingField_2; }
	inline void set_U3CAppIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppIdU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CAuthValuesU3Ek__BackingField_3)); }
	inline AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * get_U3CAuthValuesU3Ek__BackingField_3() const { return ___U3CAuthValuesU3Ek__BackingField_3; }
	inline AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 ** get_address_of_U3CAuthValuesU3Ek__BackingField_3() { return &___U3CAuthValuesU3Ek__BackingField_3; }
	inline void set_U3CAuthValuesU3Ek__BackingField_3(AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * value)
	{
		___U3CAuthValuesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthValuesU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_AuthMode_4() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___AuthMode_4)); }
	inline int32_t get_AuthMode_4() const { return ___AuthMode_4; }
	inline int32_t* get_address_of_AuthMode_4() { return &___AuthMode_4; }
	inline void set_AuthMode_4(int32_t value)
	{
		___AuthMode_4 = value;
	}

	inline static int32_t get_offset_of_EncryptionMode_5() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___EncryptionMode_5)); }
	inline int32_t get_EncryptionMode_5() const { return ___EncryptionMode_5; }
	inline int32_t* get_address_of_EncryptionMode_5() { return &___EncryptionMode_5; }
	inline void set_EncryptionMode_5(int32_t value)
	{
		___EncryptionMode_5 = value;
	}

	inline static int32_t get_offset_of_ExpectedProtocol_6() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___ExpectedProtocol_6)); }
	inline uint8_t get_ExpectedProtocol_6() const { return ___ExpectedProtocol_6; }
	inline uint8_t* get_address_of_ExpectedProtocol_6() { return &___ExpectedProtocol_6; }
	inline void set_ExpectedProtocol_6(uint8_t value)
	{
		___ExpectedProtocol_6 = value;
	}

	inline static int32_t get_offset_of_tokenCache_7() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___tokenCache_7)); }
	inline String_t* get_tokenCache_7() const { return ___tokenCache_7; }
	inline String_t** get_address_of_tokenCache_7() { return &___tokenCache_7; }
	inline void set_tokenCache_7(String_t* value)
	{
		___tokenCache_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenCache_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsUsingNameServerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CIsUsingNameServerU3Ek__BackingField_8)); }
	inline bool get_U3CIsUsingNameServerU3Ek__BackingField_8() const { return ___U3CIsUsingNameServerU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsUsingNameServerU3Ek__BackingField_8() { return &___U3CIsUsingNameServerU3Ek__BackingField_8; }
	inline void set_U3CIsUsingNameServerU3Ek__BackingField_8(bool value)
	{
		___U3CIsUsingNameServerU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_NameServerHost_9() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___NameServerHost_9)); }
	inline String_t* get_NameServerHost_9() const { return ___NameServerHost_9; }
	inline String_t** get_address_of_NameServerHost_9() { return &___NameServerHost_9; }
	inline void set_NameServerHost_9(String_t* value)
	{
		___NameServerHost_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameServerHost_9), (void*)value);
	}

	inline static int32_t get_offset_of_NameServerHttp_10() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___NameServerHttp_10)); }
	inline String_t* get_NameServerHttp_10() const { return ___NameServerHttp_10; }
	inline String_t** get_address_of_NameServerHttp_10() { return &___NameServerHttp_10; }
	inline void set_NameServerHttp_10(String_t* value)
	{
		___NameServerHttp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameServerHttp_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12)); }
	inline bool get_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() const { return ___U3CUseAlternativeUdpPortsU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_12() { return &___U3CUseAlternativeUdpPortsU3Ek__BackingField_12; }
	inline void set_U3CUseAlternativeUdpPortsU3Ek__BackingField_12(bool value)
	{
		___U3CUseAlternativeUdpPortsU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CMasterServerAddressU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CMasterServerAddressU3Ek__BackingField_13)); }
	inline String_t* get_U3CMasterServerAddressU3Ek__BackingField_13() const { return ___U3CMasterServerAddressU3Ek__BackingField_13; }
	inline String_t** get_address_of_U3CMasterServerAddressU3Ek__BackingField_13() { return &___U3CMasterServerAddressU3Ek__BackingField_13; }
	inline void set_U3CMasterServerAddressU3Ek__BackingField_13(String_t* value)
	{
		___U3CMasterServerAddressU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMasterServerAddressU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameServerAddressU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CGameServerAddressU3Ek__BackingField_14)); }
	inline String_t* get_U3CGameServerAddressU3Ek__BackingField_14() const { return ___U3CGameServerAddressU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CGameServerAddressU3Ek__BackingField_14() { return &___U3CGameServerAddressU3Ek__BackingField_14; }
	inline void set_U3CGameServerAddressU3Ek__BackingField_14(String_t* value)
	{
		___U3CGameServerAddressU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameServerAddressU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CServerU3Ek__BackingField_15)); }
	inline int32_t get_U3CServerU3Ek__BackingField_15() const { return ___U3CServerU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CServerU3Ek__BackingField_15() { return &___U3CServerU3Ek__BackingField_15; }
	inline void set_U3CServerU3Ek__BackingField_15(int32_t value)
	{
		___U3CServerU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_state_16() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___state_16)); }
	inline int32_t get_state_16() const { return ___state_16; }
	inline int32_t* get_address_of_state_16() { return &___state_16; }
	inline void set_state_16(int32_t value)
	{
		___state_16 = value;
	}

	inline static int32_t get_offset_of_StateChanged_17() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___StateChanged_17)); }
	inline Action_2_tD4F07FC3F0B08A4BE3D400AB1E3553E633312299 * get_StateChanged_17() const { return ___StateChanged_17; }
	inline Action_2_tD4F07FC3F0B08A4BE3D400AB1E3553E633312299 ** get_address_of_StateChanged_17() { return &___StateChanged_17; }
	inline void set_StateChanged_17(Action_2_tD4F07FC3F0B08A4BE3D400AB1E3553E633312299 * value)
	{
		___StateChanged_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateChanged_17), (void*)value);
	}

	inline static int32_t get_offset_of_EventReceived_18() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___EventReceived_18)); }
	inline Action_1_t1DDB5A38F3E598F9A05A4512E46958F311A5ECE9 * get_EventReceived_18() const { return ___EventReceived_18; }
	inline Action_1_t1DDB5A38F3E598F9A05A4512E46958F311A5ECE9 ** get_address_of_EventReceived_18() { return &___EventReceived_18; }
	inline void set_EventReceived_18(Action_1_t1DDB5A38F3E598F9A05A4512E46958F311A5ECE9 * value)
	{
		___EventReceived_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventReceived_18), (void*)value);
	}

	inline static int32_t get_offset_of_OpResponseReceived_19() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___OpResponseReceived_19)); }
	inline Action_1_tC3A4C2D97D708A1AEC1C0D6B81DFB4C840968862 * get_OpResponseReceived_19() const { return ___OpResponseReceived_19; }
	inline Action_1_tC3A4C2D97D708A1AEC1C0D6B81DFB4C840968862 ** get_address_of_OpResponseReceived_19() { return &___OpResponseReceived_19; }
	inline void set_OpResponseReceived_19(Action_1_tC3A4C2D97D708A1AEC1C0D6B81DFB4C840968862 * value)
	{
		___OpResponseReceived_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OpResponseReceived_19), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectionCallbackTargets_20() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___ConnectionCallbackTargets_20)); }
	inline ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 * get_ConnectionCallbackTargets_20() const { return ___ConnectionCallbackTargets_20; }
	inline ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 ** get_address_of_ConnectionCallbackTargets_20() { return &___ConnectionCallbackTargets_20; }
	inline void set_ConnectionCallbackTargets_20(ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 * value)
	{
		___ConnectionCallbackTargets_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionCallbackTargets_20), (void*)value);
	}

	inline static int32_t get_offset_of_MatchMakingCallbackTargets_21() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___MatchMakingCallbackTargets_21)); }
	inline MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 * get_MatchMakingCallbackTargets_21() const { return ___MatchMakingCallbackTargets_21; }
	inline MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 ** get_address_of_MatchMakingCallbackTargets_21() { return &___MatchMakingCallbackTargets_21; }
	inline void set_MatchMakingCallbackTargets_21(MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 * value)
	{
		___MatchMakingCallbackTargets_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MatchMakingCallbackTargets_21), (void*)value);
	}

	inline static int32_t get_offset_of_InRoomCallbackTargets_22() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___InRoomCallbackTargets_22)); }
	inline InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D * get_InRoomCallbackTargets_22() const { return ___InRoomCallbackTargets_22; }
	inline InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D ** get_address_of_InRoomCallbackTargets_22() { return &___InRoomCallbackTargets_22; }
	inline void set_InRoomCallbackTargets_22(InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D * value)
	{
		___InRoomCallbackTargets_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InRoomCallbackTargets_22), (void*)value);
	}

	inline static int32_t get_offset_of_LobbyCallbackTargets_23() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___LobbyCallbackTargets_23)); }
	inline LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 * get_LobbyCallbackTargets_23() const { return ___LobbyCallbackTargets_23; }
	inline LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 ** get_address_of_LobbyCallbackTargets_23() { return &___LobbyCallbackTargets_23; }
	inline void set_LobbyCallbackTargets_23(LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 * value)
	{
		___LobbyCallbackTargets_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LobbyCallbackTargets_23), (void*)value);
	}

	inline static int32_t get_offset_of_WebRpcCallbackTargets_24() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___WebRpcCallbackTargets_24)); }
	inline WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * get_WebRpcCallbackTargets_24() const { return ___WebRpcCallbackTargets_24; }
	inline WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 ** get_address_of_WebRpcCallbackTargets_24() { return &___WebRpcCallbackTargets_24; }
	inline void set_WebRpcCallbackTargets_24(WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * value)
	{
		___WebRpcCallbackTargets_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WebRpcCallbackTargets_24), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorInfoCallbackTargets_25() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___ErrorInfoCallbackTargets_25)); }
	inline ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 * get_ErrorInfoCallbackTargets_25() const { return ___ErrorInfoCallbackTargets_25; }
	inline ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 ** get_address_of_ErrorInfoCallbackTargets_25() { return &___ErrorInfoCallbackTargets_25; }
	inline void set_ErrorInfoCallbackTargets_25(ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 * value)
	{
		___ErrorInfoCallbackTargets_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorInfoCallbackTargets_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CDisconnectedCauseU3Ek__BackingField_26)); }
	inline int32_t get_U3CDisconnectedCauseU3Ek__BackingField_26() const { return ___U3CDisconnectedCauseU3Ek__BackingField_26; }
	inline int32_t* get_address_of_U3CDisconnectedCauseU3Ek__BackingField_26() { return &___U3CDisconnectedCauseU3Ek__BackingField_26; }
	inline void set_U3CDisconnectedCauseU3Ek__BackingField_26(int32_t value)
	{
		___U3CDisconnectedCauseU3Ek__BackingField_26 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentLobbyU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCurrentLobbyU3Ek__BackingField_27)); }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * get_U3CCurrentLobbyU3Ek__BackingField_27() const { return ___U3CCurrentLobbyU3Ek__BackingField_27; }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 ** get_address_of_U3CCurrentLobbyU3Ek__BackingField_27() { return &___U3CCurrentLobbyU3Ek__BackingField_27; }
	inline void set_U3CCurrentLobbyU3Ek__BackingField_27(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * value)
	{
		___U3CCurrentLobbyU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentLobbyU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_EnableLobbyStatistics_28() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___EnableLobbyStatistics_28)); }
	inline bool get_EnableLobbyStatistics_28() const { return ___EnableLobbyStatistics_28; }
	inline bool* get_address_of_EnableLobbyStatistics_28() { return &___EnableLobbyStatistics_28; }
	inline void set_EnableLobbyStatistics_28(bool value)
	{
		___EnableLobbyStatistics_28 = value;
	}

	inline static int32_t get_offset_of_lobbyStatistics_29() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___lobbyStatistics_29)); }
	inline List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459 * get_lobbyStatistics_29() const { return ___lobbyStatistics_29; }
	inline List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459 ** get_address_of_lobbyStatistics_29() { return &___lobbyStatistics_29; }
	inline void set_lobbyStatistics_29(List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459 * value)
	{
		___lobbyStatistics_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lobbyStatistics_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocalPlayerU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CLocalPlayerU3Ek__BackingField_30)); }
	inline Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * get_U3CLocalPlayerU3Ek__BackingField_30() const { return ___U3CLocalPlayerU3Ek__BackingField_30; }
	inline Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 ** get_address_of_U3CLocalPlayerU3Ek__BackingField_30() { return &___U3CLocalPlayerU3Ek__BackingField_30; }
	inline void set_U3CLocalPlayerU3Ek__BackingField_30(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * value)
	{
		___U3CLocalPlayerU3Ek__BackingField_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalPlayerU3Ek__BackingField_30), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentRoomU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCurrentRoomU3Ek__BackingField_31)); }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * get_U3CCurrentRoomU3Ek__BackingField_31() const { return ___U3CCurrentRoomU3Ek__BackingField_31; }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D ** get_address_of_U3CCurrentRoomU3Ek__BackingField_31() { return &___U3CCurrentRoomU3Ek__BackingField_31; }
	inline void set_U3CCurrentRoomU3Ek__BackingField_31(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * value)
	{
		___U3CCurrentRoomU3Ek__BackingField_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentRoomU3Ek__BackingField_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayersOnMasterCountU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CPlayersOnMasterCountU3Ek__BackingField_32)); }
	inline int32_t get_U3CPlayersOnMasterCountU3Ek__BackingField_32() const { return ___U3CPlayersOnMasterCountU3Ek__BackingField_32; }
	inline int32_t* get_address_of_U3CPlayersOnMasterCountU3Ek__BackingField_32() { return &___U3CPlayersOnMasterCountU3Ek__BackingField_32; }
	inline void set_U3CPlayersOnMasterCountU3Ek__BackingField_32(int32_t value)
	{
		___U3CPlayersOnMasterCountU3Ek__BackingField_32 = value;
	}

	inline static int32_t get_offset_of_U3CPlayersInRoomsCountU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CPlayersInRoomsCountU3Ek__BackingField_33)); }
	inline int32_t get_U3CPlayersInRoomsCountU3Ek__BackingField_33() const { return ___U3CPlayersInRoomsCountU3Ek__BackingField_33; }
	inline int32_t* get_address_of_U3CPlayersInRoomsCountU3Ek__BackingField_33() { return &___U3CPlayersInRoomsCountU3Ek__BackingField_33; }
	inline void set_U3CPlayersInRoomsCountU3Ek__BackingField_33(int32_t value)
	{
		___U3CPlayersInRoomsCountU3Ek__BackingField_33 = value;
	}

	inline static int32_t get_offset_of_U3CRoomsCountU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CRoomsCountU3Ek__BackingField_34)); }
	inline int32_t get_U3CRoomsCountU3Ek__BackingField_34() const { return ___U3CRoomsCountU3Ek__BackingField_34; }
	inline int32_t* get_address_of_U3CRoomsCountU3Ek__BackingField_34() { return &___U3CRoomsCountU3Ek__BackingField_34; }
	inline void set_U3CRoomsCountU3Ek__BackingField_34(int32_t value)
	{
		___U3CRoomsCountU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_lastJoinType_35() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___lastJoinType_35)); }
	inline int32_t get_lastJoinType_35() const { return ___lastJoinType_35; }
	inline int32_t* get_address_of_lastJoinType_35() { return &___lastJoinType_35; }
	inline void set_lastJoinType_35(int32_t value)
	{
		___lastJoinType_35 = value;
	}

	inline static int32_t get_offset_of_enterRoomParamsCache_36() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___enterRoomParamsCache_36)); }
	inline EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * get_enterRoomParamsCache_36() const { return ___enterRoomParamsCache_36; }
	inline EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 ** get_address_of_enterRoomParamsCache_36() { return &___enterRoomParamsCache_36; }
	inline void set_enterRoomParamsCache_36(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * value)
	{
		___enterRoomParamsCache_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enterRoomParamsCache_36), (void*)value);
	}

	inline static int32_t get_offset_of_failedRoomEntryOperation_37() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___failedRoomEntryOperation_37)); }
	inline OperationResponse_tCD0E0ADD3BB90F6436E1A28C59FD22F12F70F816 * get_failedRoomEntryOperation_37() const { return ___failedRoomEntryOperation_37; }
	inline OperationResponse_tCD0E0ADD3BB90F6436E1A28C59FD22F12F70F816 ** get_address_of_failedRoomEntryOperation_37() { return &___failedRoomEntryOperation_37; }
	inline void set_failedRoomEntryOperation_37(OperationResponse_tCD0E0ADD3BB90F6436E1A28C59FD22F12F70F816 * value)
	{
		___failedRoomEntryOperation_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___failedRoomEntryOperation_37), (void*)value);
	}

	inline static int32_t get_offset_of_friendListRequested_39() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___friendListRequested_39)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_friendListRequested_39() const { return ___friendListRequested_39; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_friendListRequested_39() { return &___friendListRequested_39; }
	inline void set_friendListRequested_39(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___friendListRequested_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___friendListRequested_39), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloudRegionU3Ek__BackingField_40() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCloudRegionU3Ek__BackingField_40)); }
	inline String_t* get_U3CCloudRegionU3Ek__BackingField_40() const { return ___U3CCloudRegionU3Ek__BackingField_40; }
	inline String_t** get_address_of_U3CCloudRegionU3Ek__BackingField_40() { return &___U3CCloudRegionU3Ek__BackingField_40; }
	inline void set_U3CCloudRegionU3Ek__BackingField_40(String_t* value)
	{
		___U3CCloudRegionU3Ek__BackingField_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCloudRegionU3Ek__BackingField_40), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentClusterU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCurrentClusterU3Ek__BackingField_41)); }
	inline String_t* get_U3CCurrentClusterU3Ek__BackingField_41() const { return ___U3CCurrentClusterU3Ek__BackingField_41; }
	inline String_t** get_address_of_U3CCurrentClusterU3Ek__BackingField_41() { return &___U3CCurrentClusterU3Ek__BackingField_41; }
	inline void set_U3CCurrentClusterU3Ek__BackingField_41(String_t* value)
	{
		___U3CCurrentClusterU3Ek__BackingField_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentClusterU3Ek__BackingField_41), (void*)value);
	}

	inline static int32_t get_offset_of_RegionHandler_42() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___RegionHandler_42)); }
	inline RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * get_RegionHandler_42() const { return ___RegionHandler_42; }
	inline RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF ** get_address_of_RegionHandler_42() { return &___RegionHandler_42; }
	inline void set_RegionHandler_42(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * value)
	{
		___RegionHandler_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RegionHandler_42), (void*)value);
	}

	inline static int32_t get_offset_of_bestRegionSummaryFromStorage_43() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___bestRegionSummaryFromStorage_43)); }
	inline String_t* get_bestRegionSummaryFromStorage_43() const { return ___bestRegionSummaryFromStorage_43; }
	inline String_t** get_address_of_bestRegionSummaryFromStorage_43() { return &___bestRegionSummaryFromStorage_43; }
	inline void set_bestRegionSummaryFromStorage_43(String_t* value)
	{
		___bestRegionSummaryFromStorage_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bestRegionSummaryFromStorage_43), (void*)value);
	}

	inline static int32_t get_offset_of_SummaryToCache_44() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___SummaryToCache_44)); }
	inline String_t* get_SummaryToCache_44() const { return ___SummaryToCache_44; }
	inline String_t** get_address_of_SummaryToCache_44() { return &___SummaryToCache_44; }
	inline void set_SummaryToCache_44(String_t* value)
	{
		___SummaryToCache_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SummaryToCache_44), (void*)value);
	}

	inline static int32_t get_offset_of_connectToBestRegion_45() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___connectToBestRegion_45)); }
	inline bool get_connectToBestRegion_45() const { return ___connectToBestRegion_45; }
	inline bool* get_address_of_connectToBestRegion_45() { return &___connectToBestRegion_45; }
	inline void set_connectToBestRegion_45(bool value)
	{
		___connectToBestRegion_45 = value;
	}

	inline static int32_t get_offset_of_callbackTargetChanges_46() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___callbackTargetChanges_46)); }
	inline Queue_1_t2DF167EE7F886C6E1CE292988624D5634AF12DE2 * get_callbackTargetChanges_46() const { return ___callbackTargetChanges_46; }
	inline Queue_1_t2DF167EE7F886C6E1CE292988624D5634AF12DE2 ** get_address_of_callbackTargetChanges_46() { return &___callbackTargetChanges_46; }
	inline void set_callbackTargetChanges_46(Queue_1_t2DF167EE7F886C6E1CE292988624D5634AF12DE2 * value)
	{
		___callbackTargetChanges_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackTargetChanges_46), (void*)value);
	}

	inline static int32_t get_offset_of_callbackTargets_47() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___callbackTargets_47)); }
	inline HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5 * get_callbackTargets_47() const { return ___callbackTargets_47; }
	inline HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5 ** get_address_of_callbackTargets_47() { return &___callbackTargets_47; }
	inline void set_callbackTargets_47(HashSet_1_t20C647F44B285CB7C061931B00ED43A230F311E5 * value)
	{
		___callbackTargets_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackTargets_47), (void*)value);
	}
};

struct LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_tB8F1C2204B0AE6B3C4DDC89774ACAC7BE239B1E5 * ___ProtocolToNameServerPort_11;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_11() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A_StaticFields, ___ProtocolToNameServerPort_11)); }
	inline Dictionary_2_tB8F1C2204B0AE6B3C4DDC89774ACAC7BE239B1E5 * get_ProtocolToNameServerPort_11() const { return ___ProtocolToNameServerPort_11; }
	inline Dictionary_2_tB8F1C2204B0AE6B3C4DDC89774ACAC7BE239B1E5 ** get_address_of_ProtocolToNameServerPort_11() { return &___ProtocolToNameServerPort_11; }
	inline void set_ProtocolToNameServerPort_11(Dictionary_2_tB8F1C2204B0AE6B3C4DDC89774ACAC7BE239B1E5 * value)
	{
		___ProtocolToNameServerPort_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProtocolToNameServerPort_11), (void*)value);
	}
};


// Photon.Realtime.TypedLobby
struct  TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.TypedLobby::Name
	String_t* ___Name_0;
	// Photon.Realtime.LobbyType Photon.Realtime.TypedLobby::Type
	uint8_t ___Type_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5, ___Type_1)); }
	inline uint8_t get_Type_1() const { return ___Type_1; }
	inline uint8_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(uint8_t value)
	{
		___Type_1 = value;
	}
};

struct TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_StaticFields
{
public:
	// Photon.Realtime.TypedLobby Photon.Realtime.TypedLobby::Default
	TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * ___Default_2;

public:
	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_StaticFields, ___Default_2)); }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * get_Default_2() const { return ___Default_2; }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_2), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// Photon.Realtime.LoadBalancingPeer
struct  LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14  : public PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08
{
public:
	// ExitGames.Client.Photon.Pool`1<System.Collections.Generic.Dictionary`2<System.Byte,System.Object>> Photon.Realtime.LoadBalancingPeer::paramDictionaryPool
	Pool_1_t4D3FD78175636A45880AD313F3AF495D9C958935 * ___paramDictionaryPool_49;

public:
	inline static int32_t get_offset_of_paramDictionaryPool_49() { return static_cast<int32_t>(offsetof(LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14, ___paramDictionaryPool_49)); }
	inline Pool_1_t4D3FD78175636A45880AD313F3AF495D9C958935 * get_paramDictionaryPool_49() const { return ___paramDictionaryPool_49; }
	inline Pool_1_t4D3FD78175636A45880AD313F3AF495D9C958935 ** get_address_of_paramDictionaryPool_49() { return &___paramDictionaryPool_49; }
	inline void set_paramDictionaryPool_49(Pool_1_t4D3FD78175636A45880AD313F3AF495D9C958935 * value)
	{
		___paramDictionaryPool_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paramDictionaryPool_49), (void*)value);
	}
};


// Photon.Realtime.TypedLobbyInfo
struct  TypedLobbyInfo_t4ADAD96C3E4BD40D2ADEA6AF8741EB96983D76E3  : public TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5
{
public:
	// System.Int32 Photon.Realtime.TypedLobbyInfo::PlayerCount
	int32_t ___PlayerCount_3;
	// System.Int32 Photon.Realtime.TypedLobbyInfo::RoomCount
	int32_t ___RoomCount_4;

public:
	inline static int32_t get_offset_of_PlayerCount_3() { return static_cast<int32_t>(offsetof(TypedLobbyInfo_t4ADAD96C3E4BD40D2ADEA6AF8741EB96983D76E3, ___PlayerCount_3)); }
	inline int32_t get_PlayerCount_3() const { return ___PlayerCount_3; }
	inline int32_t* get_address_of_PlayerCount_3() { return &___PlayerCount_3; }
	inline void set_PlayerCount_3(int32_t value)
	{
		___PlayerCount_3 = value;
	}

	inline static int32_t get_offset_of_RoomCount_4() { return static_cast<int32_t>(offsetof(TypedLobbyInfo_t4ADAD96C3E4BD40D2ADEA6AF8741EB96983D76E3, ___RoomCount_4)); }
	inline int32_t get_RoomCount_4() const { return ___RoomCount_4; }
	inline int32_t* get_address_of_RoomCount_4() { return &___RoomCount_4; }
	inline void set_RoomCount_4(int32_t value)
	{
		___RoomCount_4 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Photon.Realtime.SupportLogger
struct  SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Photon.Realtime.SupportLogger::LogTrafficStats
	bool ___LogTrafficStats_4;
	// System.Boolean Photon.Realtime.SupportLogger::loggedStillOfflineMessage
	bool ___loggedStillOfflineMessage_5;
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.SupportLogger::client
	LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___client_6;
	// System.Diagnostics.Stopwatch Photon.Realtime.SupportLogger::startStopwatch
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___startStopwatch_7;
	// System.Int32 Photon.Realtime.SupportLogger::pingMax
	int32_t ___pingMax_8;
	// System.Int32 Photon.Realtime.SupportLogger::pingMin
	int32_t ___pingMin_9;

public:
	inline static int32_t get_offset_of_LogTrafficStats_4() { return static_cast<int32_t>(offsetof(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA, ___LogTrafficStats_4)); }
	inline bool get_LogTrafficStats_4() const { return ___LogTrafficStats_4; }
	inline bool* get_address_of_LogTrafficStats_4() { return &___LogTrafficStats_4; }
	inline void set_LogTrafficStats_4(bool value)
	{
		___LogTrafficStats_4 = value;
	}

	inline static int32_t get_offset_of_loggedStillOfflineMessage_5() { return static_cast<int32_t>(offsetof(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA, ___loggedStillOfflineMessage_5)); }
	inline bool get_loggedStillOfflineMessage_5() const { return ___loggedStillOfflineMessage_5; }
	inline bool* get_address_of_loggedStillOfflineMessage_5() { return &___loggedStillOfflineMessage_5; }
	inline void set_loggedStillOfflineMessage_5(bool value)
	{
		___loggedStillOfflineMessage_5 = value;
	}

	inline static int32_t get_offset_of_client_6() { return static_cast<int32_t>(offsetof(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA, ___client_6)); }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * get_client_6() const { return ___client_6; }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A ** get_address_of_client_6() { return &___client_6; }
	inline void set_client_6(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * value)
	{
		___client_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_6), (void*)value);
	}

	inline static int32_t get_offset_of_startStopwatch_7() { return static_cast<int32_t>(offsetof(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA, ___startStopwatch_7)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_startStopwatch_7() const { return ___startStopwatch_7; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_startStopwatch_7() { return &___startStopwatch_7; }
	inline void set_startStopwatch_7(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___startStopwatch_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startStopwatch_7), (void*)value);
	}

	inline static int32_t get_offset_of_pingMax_8() { return static_cast<int32_t>(offsetof(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA, ___pingMax_8)); }
	inline int32_t get_pingMax_8() const { return ___pingMax_8; }
	inline int32_t* get_address_of_pingMax_8() { return &___pingMax_8; }
	inline void set_pingMax_8(int32_t value)
	{
		___pingMax_8 = value;
	}

	inline static int32_t get_offset_of_pingMin_9() { return static_cast<int32_t>(offsetof(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA, ___pingMin_9)); }
	inline int32_t get_pingMin_9() const { return ___pingMin_9; }
	inline int32_t* get_address_of_pingMin_9() { return &___pingMin_9; }
	inline void set_pingMin_9(int32_t value)
	{
		___pingMin_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
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
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841_gshared (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * __this, uint8_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::RemoveCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_RemoveCallbackTarget_mA166E163D02518ED621B80E8F07B31FFE79507A0 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::AddCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_AddCallbackTarget_m17553A4C53D4BC96DF74BD3DFE8D8487E3B52565 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.SupportLogger::GetFormattedTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301 (bool* __this, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_get_IsConnected_m90DAE8B064E99BA87DC5CDAC811D38647D468C2C (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_m6ACF5FC83F8FE5A6E744CE1E83A94CB3B0A8B7EF (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_m99F21547D281B3F835745B681E5472F070E7E593 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_mDD95225EF4DFBB8C00B865468DE8AFEB5D30490F (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  Stopwatch_get_Elapsed_m6735B32BFB466FC4F52112AC3493D37404D184BB (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Seconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Seconds_m33764DE0DB67C2D1A2654BEE31E379A13571EED8 (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Milliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Milliseconds_m03218976DBB2BBDFB8B7F8A7F9452C19096312CA (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::get_LoadBalancingPeer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonPeer_get_RoundTripTime_m697DCF07137E2EDD78D02D1367406024BB831372 (PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08 * __this, const RuntimeMethod* method);
// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_mDCC22D02A85973C68623C764C96BE9A862C8BD11 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::VitalStatsToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_VitalStatsToString_mDED666166FC96E760F9F0DB380C139D7909F9E7F (PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08 * __this, bool ___all0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_AppId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppId_m49A1261CC79356CABF9A709AAC4674B406ECA1DD_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_AppVersion()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_m2D816CED5CD4B71B47C03B33D2C5DFAE08997B9D_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::get_PeerID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_PeerID_m2E21DB979D7AA1A6983BE75E786F8567AB9F6A90 (PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08 * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_UserId_mE44D3E9907F0B72F57E8D6CBF3A0E80B07064AA8 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m23742FE1E3C60341F37C243EB6BEE06AE444C774 (StringBuilder_t * __this, String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_CurrentServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CurrentServerAddress_m617D5473B405AA52AA10EBC3FB8CEC4E65252A02 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerIpAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_ServerIpAddress_mBE46D5034133B76EEAC3721B6DA8043D8E281ED6 (PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08 * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_CloudRegion()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CloudRegion_m0AAC37B5520321CC88C90C625E56EBEC822C3DEB_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::LogBasics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogBasics_m1DD18EAF9701CABB4D230E939DC67A471B2C4B13 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPeer_set_TrafficStatsEnabled_m740D1CF7F324243F4D3F32672893BC42F6A5317E (PhotonPeer_t31C749AE639138B67DB0456C42AFD0E4906A8C08 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StartLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartLogStats_m973A1BFAAB04C8F0F9568E1A281C6EE553384610 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StartTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartTrackValues_mCCA9284BFA342F2822E786C069773B61ED626F55 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::get_CurrentLobby()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * LoadBalancingClient_get_CurrentLobby_mA012C41E1DF7DF53F0CF4A024C9E0FABDDDC2456_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::get_CurrentRoom()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * LoadBalancingClient_get_CurrentRoom_mA294529AE11CDDF17597FADE478A392B8B534002_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_GameServerAddress()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_GameServerAddress_m572210F250D42394A3E6E0FAB7E15DBD6EE78E05_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StopLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopLogStats_m5EA95B7B9DD9BEB62FCB674FBDED85DB910C3B06 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StopTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopTrackValues_m0806BA608466711C295BC23883AFAF6AEE153CB4 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::LogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogStats_m420DC4631D59DCE0F7D33C3146C8688D08C54F94 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>::get_Count()
inline int32_t List_1_get_Count_m1A59BC22EE5CA9B605AA85BF87051308A8EFE204_inline (List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.String Photon.Realtime.Extensions::ToStringFull(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_ToStringFull_m7D5DC29B4341359CC4354664509068EF620E9DCC (RuntimeObject* ___origin0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.TypedLobby::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__ctor_m00923523872B0E50E15357CBBED9A08D5F944586 (TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebFlags::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__ctor_mF30D282AD9F1D728C06672D22FCB7E108BCB1993 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, uint8_t ___webhookFlags0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>::.ctor()
inline void List_1__ctor_m8998D7682A2B5B6B47F0837987B6598904297BAF (List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void Photon.Realtime.LoadBalancingClient::UpdateCallbackTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_UpdateCallbackTargets_m4F0C56B00E0DC74B26294FA61A83186A710DBFFA (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>::GetEnumerator()
inline Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909  List_1_GetEnumerator_m3DC15E45F109EA8ED752BBF8669EF7D6199CF358 (List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909  (*) (List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Photon.Realtime.IWebRpcCallback>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mA50C178A90B3A62136BA22B44CE8D3AA0B549911_inline (Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Photon.Realtime.IWebRpcCallback>::MoveNext()
inline bool Enumerator_MoveNext_m50709063468E77F299D9B15A5224FC5B8770F948 (Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Photon.Realtime.IWebRpcCallback>::Dispose()
inline void Enumerator_Dispose_mC7FFB79B44AF60DEF8ECB7E95469108B1A131FDD (Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Int32 Photon.Realtime.WebRpcResponse::get_ResultCode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_mFC73DF1E0EF9021C8C3E53EC0EF548915B566886_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.WebRpcResponse::get_Message()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_m9F817E8E921967871322B123F6C1BEF6F8BF5138_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841 (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * __this, uint8_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D *, uint8_t, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Photon.Realtime.WebRpcResponse::set_Name(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_mEADC4EB6ED220410F817BB3A5864230A0215CA01_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebRpcResponse::set_ResultCode(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_m8E4EE89F34D749CCFEA3B1D2D777A5A8D3FA33AA_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_mC93C08CE135944569FF91BC362C850E628E0563A_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebRpcResponse::set_Message(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_m0A4DB2E9F565AD93775CAE27C140A9DB4E411B78_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Photon.Realtime.WebRpcResponse::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_m0B6E38116B73FE932B4809D1510013A2D0E75FEB_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::get_Parameters()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * WebRpcResponse_get_Parameters_m73734E2B75DC69FF24E5EBFE1C58383DB7F01969_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_mF1C6E005A0E224ED96C1E11A0B9D56F5FD23A26C (RuntimeObject* ___dictionary0, const RuntimeMethod* method);
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
// System.Boolean Photon.Realtime.RoomOptions::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_IsVisible_mEBC48A6E7D7A0422A0CEA3A4AD339EA8B7061976 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		bool L_0 = __this->get_isVisible_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_IsVisible_mC18F0091F40004E92A6B0D65DADE6B8ACE4FC4AC (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		bool L_0 = ___value0;
		__this->set_isVisible_0(L_0);
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_IsOpen_m63600C2FCC2227779869060317764624F9536147 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool IsOpen { get { return this.isOpen; } set { this.isOpen = value; } }
		bool L_0 = __this->get_isOpen_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool IsOpen { get { return this.isOpen; } set { this.isOpen = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_IsOpen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_IsOpen_mB8FC22B596C9CD2534DB1F5911B352D9FC73F031 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsOpen { get { return this.isOpen; } set { this.isOpen = value; } }
		bool L_0 = ___value0;
		__this->set_isOpen_1(L_0);
		// public bool IsOpen { get { return this.isOpen; } set { this.isOpen = value; } }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_CleanupCacheOnLeave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_CleanupCacheOnLeave_m5BC86AE25FB6DCE474527C5FDB7363F1212C120B (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool CleanupCacheOnLeave { get { return this.cleanupCacheOnLeave; } set { this.cleanupCacheOnLeave = value; } }
		bool L_0 = __this->get_cleanupCacheOnLeave_5();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool CleanupCacheOnLeave { get { return this.cleanupCacheOnLeave; } set { this.cleanupCacheOnLeave = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_CleanupCacheOnLeave(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_CleanupCacheOnLeave_mC9C34F080C4EDFD2FF80D959CAEC057DC619D48B (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool CleanupCacheOnLeave { get { return this.cleanupCacheOnLeave; } set { this.cleanupCacheOnLeave = value; } }
		bool L_0 = ___value0;
		__this->set_cleanupCacheOnLeave_5(L_0);
		// public bool CleanupCacheOnLeave { get { return this.cleanupCacheOnLeave; } set { this.cleanupCacheOnLeave = value; } }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_SuppressRoomEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_SuppressRoomEvents_mD4FCCD8AFF0DD842C04BA3D385FF0F9A128D1F50 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool SuppressRoomEvents { get; set; }
		bool L_0 = __this->get_U3CSuppressRoomEventsU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_SuppressRoomEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_SuppressRoomEvents_mDE84DE82AACEB351CC93E17B781149D52E97DB1E (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SuppressRoomEvents { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CSuppressRoomEventsU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_PublishUserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_PublishUserId_mEFF1EA9F5F3310DCED3A7BF9DE99174274DC5766 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishUserId { get; set; }
		bool L_0 = __this->get_U3CPublishUserIdU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_PublishUserId(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_PublishUserId_m2D2C26B98C031D132D3A7D450299BE55EBE2DE12 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishUserId { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishUserIdU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_DeleteNullProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_DeleteNullProperties_m63EDCA05FFC2792D99F87A8BCB52F8D535236277 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool DeleteNullProperties { get; set; }
		bool L_0 = __this->get_U3CDeleteNullPropertiesU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_DeleteNullProperties(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_DeleteNullProperties_mD834C5A7E29312EAEBDE491AD005FCD7C4983AF2 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool DeleteNullProperties { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CDeleteNullPropertiesU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_BroadcastPropsChangeToAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_BroadcastPropsChangeToAll_m148AB75D5E3A17B735D739B8C2217DA72774BE99 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool BroadcastPropsChangeToAll { get { return this.broadcastPropsChangeToAll; } set { this.broadcastPropsChangeToAll = value; } }
		bool L_0 = __this->get_broadcastPropsChangeToAll_12();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool BroadcastPropsChangeToAll { get { return this.broadcastPropsChangeToAll; } set { this.broadcastPropsChangeToAll = value; } }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_BroadcastPropsChangeToAll(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_BroadcastPropsChangeToAll_m79EAEFCFEB7472FDD91FD10152BB60F6A1F0C9E7 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool BroadcastPropsChangeToAll { get { return this.broadcastPropsChangeToAll; } set { this.broadcastPropsChangeToAll = value; } }
		bool L_0 = ___value0;
		__this->set_broadcastPropsChangeToAll_12(L_0);
		// public bool BroadcastPropsChangeToAll { get { return this.broadcastPropsChangeToAll; } set { this.broadcastPropsChangeToAll = value; } }
		return;
	}
}
// System.Void Photon.Realtime.RoomOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions__ctor_m254044C6ACFBFED793E00A41DF8E76F953EE16CF (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomOptions__ctor_m254044C6ACFBFED793E00A41DF8E76F953EE16CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool isVisible = true;
		__this->set_isVisible_0((bool)1);
		// private bool isOpen = true;
		__this->set_isOpen_1((bool)1);
		// private bool cleanupCacheOnLeave = true;
		__this->set_cleanupCacheOnLeave_5((bool)1);
		// public string[] CustomRoomPropertiesForLobby = new string[0];
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_CustomRoomPropertiesForLobby_7(L_0);
		// private bool broadcastPropsChangeToAll = true;
		__this->set_broadcastPropsChangeToAll_12((bool)1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// Photon.Realtime.LoadBalancingClient Photon.Realtime.SupportLogger::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * SupportLogger_get_Client_mB26343CDA21A09F3EA30AD740275EAFC083D52B7 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * V_0 = NULL;
	{
		// get { return this.client; }
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_client_6();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.client; }
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.SupportLogger::set_Client(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_set_Client_m166B9D97ABDFAA4A8E7792F8C8861BE4C7193976 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (this.client != value)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_client_6();
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A *)L_0) == ((RuntimeObject*)(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A *)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0052;
		}
	}
	{
		// if (this.client != null)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_3 = __this->get_client_6();
		V_1 = (bool)((!(((RuntimeObject*)(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A *)L_3) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		// this.client.RemoveCallbackTarget(this);
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_5 = __this->get_client_6();
		NullCheck(L_5);
		LoadBalancingClient_RemoveCallbackTarget_mA166E163D02518ED621B80E8F07B31FFE79507A0(L_5, __this, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// this.client = value;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_6 = ___value0;
		__this->set_client_6(L_6);
		// if (this.client != null)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_7 = __this->get_client_6();
		V_2 = (bool)((!(((RuntimeObject*)(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		// this.client.AddCallbackTarget(this);
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_9 = __this->get_client_6();
		NullCheck(L_9);
		LoadBalancingClient_AddCallbackTarget_m17553A4C53D4BC96DF74BD3DFE8D8487E3B52565(L_9, __this, /*hidden argument*/NULL);
	}

IL_0051:
	{
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_Start_m1198B8A81F90188616E5942DCA38D0D79A8C7479 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_Start_m1198B8A81F90188616E5942DCA38D0D79A8C7479_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.startStopwatch == null)
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_0 = __this->get_startStopwatch_7();
		V_0 = (bool)((((RuntimeObject*)(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// this.startStopwatch = new Stopwatch();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_2 = (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 *)il2cpp_codegen_object_new(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860(L_2, /*hidden argument*/NULL);
		__this->set_startStopwatch_7(L_2);
		// this.startStopwatch.Start();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_3 = __this->get_startStopwatch_7();
		NullCheck(L_3);
		Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A(L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnApplicationPause_m394AE8B8288BFCE03DD16287100911E4D922E01B (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, bool ___pause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnApplicationPause_m394AE8B8288BFCE03DD16287100911E4D922E01B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B2_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B1_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B3_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B3_3 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnApplicationPause: " + pause + " connected: " + (this.client == null ? "false" : this.client.IsConnected.ToString()));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral98D82A5FBE2C48A4BA7D23C09B325D465EC799DC);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral98D82A5FBE2C48A4BA7D23C09B325D465EC799DC);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		String_t* L_5 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)(&___pause0), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral0BCAE45D8ADAB414DB38EA02F9292623B445C753);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral0BCAE45D8ADAB414DB38EA02F9292623B445C753);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_8 = __this->get_client_6();
		G_B1_0 = 4;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		if (!L_8)
		{
			G_B2_0 = 4;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			goto IL_0049;
		}
	}
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_9 = __this->get_client_6();
		NullCheck(L_9);
		bool L_10 = LoadBalancingClient_get_IsConnected_m90DAE8B064E99BA87DC5CDAC811D38647D468C2C(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_11;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_004e;
	}

IL_0049:
	{
		G_B3_0 = _stringLiteral7CB6EFB98BA5972A9B5090DC2E517FE14D12CB04;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_004e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		String_t* L_12 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(G_B3_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnApplicationQuit_mF14FE14659F54814A80D0DDCA9A8FFEC532CEC81 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	{
		// this.CancelInvoke();
		MonoBehaviour_CancelInvoke_m6ACF5FC83F8FE5A6E744CE1E83A94CB3B0A8B7EF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StartLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartLogStats_m973A1BFAAB04C8F0F9568E1A281C6EE553384610 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_StartLogStats_m973A1BFAAB04C8F0F9568E1A281C6EE553384610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.InvokeRepeating("LogStats", 10, 10);
		MonoBehaviour_InvokeRepeating_m99F21547D281B3F835745B681E5472F070E7E593(__this, _stringLiteral97CBBD581FE6B5A33E6750E4AAF42F61118114AE, (10.0f), (10.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StopLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopLogStats_m5EA95B7B9DD9BEB62FCB674FBDED85DB910C3B06 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_StopLogStats_m5EA95B7B9DD9BEB62FCB674FBDED85DB910C3B06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.CancelInvoke("LogStats");
		MonoBehaviour_CancelInvoke_mDD95225EF4DFBB8C00B865468DE8AFEB5D30490F(__this, _stringLiteral97CBBD581FE6B5A33E6750E4AAF42F61118114AE, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StartTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartTrackValues_mCCA9284BFA342F2822E786C069773B61ED626F55 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_StartTrackValues_mCCA9284BFA342F2822E786C069773B61ED626F55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.InvokeRepeating("TrackValues", 0.5f, 0.5f);
		MonoBehaviour_InvokeRepeating_m99F21547D281B3F835745B681E5472F070E7E593(__this, _stringLiteral747F36852E16310ED684572F30D34B6FF654D27C, (0.5f), (0.5f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StopTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopTrackValues_m0806BA608466711C295BC23883AFAF6AEE153CB4 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_StopTrackValues_m0806BA608466711C295BC23883AFAF6AEE153CB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.CancelInvoke("TrackValues");
		MonoBehaviour_CancelInvoke_mDD95225EF4DFBB8C00B865468DE8AFEB5D30490F(__this, _stringLiteral747F36852E16310ED684572F30D34B6FF654D27C, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Photon.Realtime.SupportLogger::GetFormattedTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		// if (this.startStopwatch == null)
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_0 = __this->get_startStopwatch_7();
		V_0 = (bool)((((RuntimeObject*)(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// this.startStopwatch = new Stopwatch();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_2 = (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 *)il2cpp_codegen_object_new(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860(L_2, /*hidden argument*/NULL);
		__this->set_startStopwatch_7(L_2);
		// this.startStopwatch.Start();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_3 = __this->get_startStopwatch_7();
		NullCheck(L_3);
		Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A(L_3, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// return string.Format("[{0}.{1}]", this.startStopwatch.Elapsed.Seconds, this.startStopwatch.Elapsed.Milliseconds);
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_4 = __this->get_startStopwatch_7();
		NullCheck(L_4);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_5 = Stopwatch_get_Elapsed_m6735B32BFB466FC4F52112AC3493D37404D184BB(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = TimeSpan_get_Seconds_m33764DE0DB67C2D1A2654BEE31E379A13571EED8((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_9 = __this->get_startStopwatch_7();
		NullCheck(L_9);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_10 = Stopwatch_get_Elapsed_m6735B32BFB466FC4F52112AC3493D37404D184BB(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		int32_t L_11 = TimeSpan_get_Milliseconds_m03218976DBB2BBDFB8B7F8A7F9452C19096312CA((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_1), /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6ED81047DEAE3CCB5B374374798282C7FA029B8E, L_8, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		goto IL_0064;
	}

IL_0064:
	{
		// }
		String_t* L_15 = V_2;
		return L_15;
	}
}
// System.Void Photon.Realtime.SupportLogger::TrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_TrackValues_m66D40C21DDFC4AA2988C44ACAF53AE3FE76FC39C (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (this.client != null)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_client_6();
		V_0 = (bool)((!(((RuntimeObject*)(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004d;
		}
	}
	{
		// int currentRtt = this.client.LoadBalancingPeer.RoundTripTime;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_2 = __this->get_client_6();
		NullCheck(L_2);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_3 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = PhotonPeer_get_RoundTripTime_m697DCF07137E2EDD78D02D1367406024BB831372(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (currentRtt > this.pingMax)
		int32_t L_5 = V_1;
		int32_t L_6 = __this->get_pingMax_8();
		V_2 = (bool)((((int32_t)L_5) > ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		// this.pingMax = currentRtt;
		int32_t L_8 = V_1;
		__this->set_pingMax_8(L_8);
	}

IL_0036:
	{
		// if (currentRtt < this.pingMin)
		int32_t L_9 = V_1;
		int32_t L_10 = __this->get_pingMin_9();
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		// this.pingMin = currentRtt;
		int32_t L_12 = V_1;
		__this->set_pingMin_9(L_12);
	}

IL_004c:
	{
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::LogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogStats_m420DC4631D59DCE0F7D33C3146C8688D08C54F94 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_LogStats_m420DC4631D59DCE0F7D33C3146C8688D08C54F94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (this.client == null || this.client.State == ClientState.PeerCreated)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_client_6();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_1 = __this->get_client_6();
		NullCheck(L_1);
		int32_t L_2 = LoadBalancingClient_get_State_mDCC22D02A85973C68623C764C96BE9A862C8BD11(L_1, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// return;
		goto IL_008f;
	}

IL_0021:
	{
		// if (this.LogTrafficStats)
		bool L_4 = __this->get_LogTrafficStats_4();
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_008f;
		}
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger " + this.client.LoadBalancingPeer.VitalStatsToString(false) + " Ping min/max: " + this.pingMin + "/" + this.pingMax);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		String_t* L_8 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralCEB032786FD44DA7017F3BA777F0F12B63B3BE37);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralCEB032786FD44DA7017F3BA777F0F12B63B3BE37);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_9;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_11 = __this->get_client_6();
		NullCheck(L_11);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_12 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_13 = PhotonPeer_VitalStatsToString_mDED666166FC96E760F9F0DB380C139D7909F9E7F(L_12, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_13);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_14 = L_10;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral6C8EE3675EEC14F86A361B84718313E2562E573C);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral6C8EE3675EEC14F86A361B84718313E2562E573C);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_14;
		int32_t L_16 = __this->get_pingMin_9();
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_18);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_19 = L_15;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_19;
		int32_t L_21 = __this->get_pingMax_8();
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_23);
		String_t* L_24 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_24, /*hidden argument*/NULL);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::LogBasics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogBasics_m1DD18EAF9701CABB4D230E939DC67A471B2C4B13 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_LogBasics_m1DD18EAF9701CABB4D230E939DC67A471B2C4B13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	StringBuilder_t * V_1 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B4_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	StringBuilder_t * G_B4_4 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B2_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	StringBuilder_t * G_B2_4 = NULL;
	int32_t G_B3_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B3_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	StringBuilder_t * G_B3_4 = NULL;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B5_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B5_3 = NULL;
	String_t* G_B5_4 = NULL;
	StringBuilder_t * G_B5_5 = NULL;
	{
		// if (this.client != null)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_client_6();
		V_0 = (bool)((!(((RuntimeObject*)(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0118;
		}
	}
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t * L_2 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		// sb.AppendFormat("{0} SupportLogger Info: ", this.GetFormattedTimestamp());
		StringBuilder_t * L_3 = V_1;
		String_t* L_4 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_3, _stringLiteral7CEE29B46B3ED2F432C4A7B3A8DE12CAEB5D44D7, L_4, /*hidden argument*/NULL);
		// sb.AppendFormat("AppID: \"{0}\" AppVersion: \"{1}\" UserId: {3} PeerID: {2} ",
		//     string.IsNullOrEmpty(this.client.AppId) || this.client.AppId.Length < 8
		//         ? this.client.AppId
		//         : string.Concat(this.client.AppId.Substring(0, 8), "***"), this.client.AppVersion, this.client.LoadBalancingPeer.PeerID,
		//     this.client.UserId);
		StringBuilder_t * L_5 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_6;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_8 = __this->get_client_6();
		NullCheck(L_8);
		String_t* L_9 = LoadBalancingClient_get_AppId_m49A1261CC79356CABF9A709AAC4674B406ECA1DD_inline(L_8, /*hidden argument*/NULL);
		bool L_10 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_9, /*hidden argument*/NULL);
		G_B2_0 = 0;
		G_B2_1 = L_7;
		G_B2_2 = L_7;
		G_B2_3 = _stringLiteralA31D6349981379C78CEA09C104C1D1E6ED527107;
		G_B2_4 = L_5;
		if (L_10)
		{
			G_B4_0 = 0;
			G_B4_1 = L_7;
			G_B4_2 = L_7;
			G_B4_3 = _stringLiteralA31D6349981379C78CEA09C104C1D1E6ED527107;
			G_B4_4 = L_5;
			goto IL_007b;
		}
	}
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_11 = __this->get_client_6();
		NullCheck(L_11);
		String_t* L_12 = LoadBalancingClient_get_AppId_m49A1261CC79356CABF9A709AAC4674B406ECA1DD_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_12, /*hidden argument*/NULL);
		G_B3_0 = G_B2_0;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
		G_B3_4 = G_B2_4;
		if ((((int32_t)L_13) < ((int32_t)8)))
		{
			G_B4_0 = G_B2_0;
			G_B4_1 = G_B2_1;
			G_B4_2 = G_B2_2;
			G_B4_3 = G_B2_3;
			G_B4_4 = G_B2_4;
			goto IL_007b;
		}
	}
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_14 = __this->get_client_6();
		NullCheck(L_14);
		String_t* L_15 = LoadBalancingClient_get_AppId_m49A1261CC79356CABF9A709AAC4674B406ECA1DD_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_15, 0, 8, /*hidden argument*/NULL);
		String_t* L_17 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_16, _stringLiteral36C3EAA0E1E290F41E2810BAE8D9502C785E92D9, /*hidden argument*/NULL);
		G_B5_0 = L_17;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		G_B5_3 = G_B3_2;
		G_B5_4 = G_B3_3;
		G_B5_5 = G_B3_4;
		goto IL_0086;
	}

IL_007b:
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_18 = __this->get_client_6();
		NullCheck(L_18);
		String_t* L_19 = LoadBalancingClient_get_AppId_m49A1261CC79356CABF9A709AAC4674B406ECA1DD_inline(L_18, /*hidden argument*/NULL);
		G_B5_0 = L_19;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
		G_B5_4 = G_B4_3;
		G_B5_5 = G_B4_4;
	}

IL_0086:
	{
		NullCheck(G_B5_2);
		ArrayElementTypeCheck (G_B5_2, G_B5_0);
		(G_B5_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B5_1), (RuntimeObject *)G_B5_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = G_B5_3;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_21 = __this->get_client_6();
		NullCheck(L_21);
		String_t* L_22 = LoadBalancingClient_get_AppVersion_m2D816CED5CD4B71B47C03B33D2C5DFAE08997B9D_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_22);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_22);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_23 = L_20;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_24 = __this->get_client_6();
		NullCheck(L_24);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_25 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		String_t* L_26 = PhotonPeer_get_PeerID_m2E21DB979D7AA1A6983BE75E786F8567AB9F6A90(L_25, /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_26);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_26);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = L_23;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_28 = __this->get_client_6();
		NullCheck(L_28);
		String_t* L_29 = LoadBalancingClient_get_UserId_mE44D3E9907F0B72F57E8D6CBF3A0E80B07064AA8(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_29);
		NullCheck(G_B5_5);
		StringBuilder_AppendFormat_m23742FE1E3C60341F37C243EB6BEE06AE444C774(G_B5_5, G_B5_4, L_27, /*hidden argument*/NULL);
		// sb.AppendFormat("NameServer: {0} Server: {1} IP: {2} Region: {3}", this.client.NameServerHost, this.client.CurrentServerAddress, this.client.LoadBalancingPeer.ServerIpAddress, this.client.CloudRegion);
		StringBuilder_t * L_30 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_31 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = L_31;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_33 = __this->get_client_6();
		NullCheck(L_33);
		String_t* L_34 = L_33->get_NameServerHost_9();
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_34);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_34);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_35 = L_32;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_36 = __this->get_client_6();
		NullCheck(L_36);
		String_t* L_37 = LoadBalancingClient_get_CurrentServerAddress_m617D5473B405AA52AA10EBC3FB8CEC4E65252A02(L_36, /*hidden argument*/NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_37);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_38 = L_35;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_39 = __this->get_client_6();
		NullCheck(L_39);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_40 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		String_t* L_41 = PhotonPeer_get_ServerIpAddress_mBE46D5034133B76EEAC3721B6DA8043D8E281ED6(L_40, /*hidden argument*/NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_41);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_42 = L_38;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_43 = __this->get_client_6();
		NullCheck(L_43);
		String_t* L_44 = LoadBalancingClient_get_CloudRegion_m0AAC37B5520321CC88C90C625E56EBEC822C3DEB_inline(L_43, /*hidden argument*/NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_44);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_44);
		NullCheck(L_30);
		StringBuilder_AppendFormat_m23742FE1E3C60341F37C243EB6BEE06AE444C774(L_30, _stringLiteralC1F9BEB96CEB3FDF14C58CA7F22BEB729E6C9BD7, L_42, /*hidden argument*/NULL);
		// Debug.Log(sb.ToString());
		StringBuilder_t * L_45 = V_1;
		NullCheck(L_45);
		String_t* L_46 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_45);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_46, /*hidden argument*/NULL);
	}

IL_0118:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnConnected_mA89BCA9B3319032CF17DEB3BE76B87AA54C06C76 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnConnected_mA89BCA9B3319032CF17DEB3BE76B87AA54C06C76_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnConnected().");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteralAF2F0CEF3FB17E9F3FFB6676C1CF10F475D85565, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// this.pingMax = 0;
		__this->set_pingMax_8(0);
		// this.pingMin = this.client.LoadBalancingPeer.RoundTripTime;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_2 = __this->get_client_6();
		NullCheck(L_2);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_3 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = PhotonPeer_get_RoundTripTime_m697DCF07137E2EDD78D02D1367406024BB831372(L_3, /*hidden argument*/NULL);
		__this->set_pingMin_9(L_4);
		// this.LogBasics();
		SupportLogger_LogBasics_m1DD18EAF9701CABB4D230E939DC67A471B2C4B13(__this, /*hidden argument*/NULL);
		// if (this.LogTrafficStats)
		bool L_5 = __this->get_LogTrafficStats_4();
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0072;
		}
	}
	{
		// this.client.LoadBalancingPeer.TrafficStatsEnabled = false;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_7 = __this->get_client_6();
		NullCheck(L_7);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_8 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		PhotonPeer_set_TrafficStatsEnabled_m740D1CF7F324243F4D3F32672893BC42F6A5317E(L_8, (bool)0, /*hidden argument*/NULL);
		// this.client.LoadBalancingPeer.TrafficStatsEnabled = true;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_9 = __this->get_client_6();
		NullCheck(L_9);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_10 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		PhotonPeer_set_TrafficStatsEnabled_m740D1CF7F324243F4D3F32672893BC42F6A5317E(L_10, (bool)1, /*hidden argument*/NULL);
		// this.StartLogStats();
		SupportLogger_StartLogStats_m973A1BFAAB04C8F0F9568E1A281C6EE553384610(__this, /*hidden argument*/NULL);
	}

IL_0072:
	{
		// this.StartTrackValues();
		SupportLogger_StartTrackValues_mCCA9284BFA342F2822E786C069773B61ED626F55(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnConnectedToMaster_mF52A4381DCC7C6CE19F3451D539020E39B2A11C4 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnConnectedToMaster_mF52A4381DCC7C6CE19F3451D539020E39B2A11C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnConnectedToMaster().");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteralB32938589EB53DCC2BAD4055BB5EEBD4496BF09A, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnFriendListUpdate(System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnFriendListUpdate_mB422AD317F908DDCA99272016652A88A22FBAF47 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, List_1_t3DA6F1AB97BAFEF248A508070B7EEB7A8D226662 * ___friendList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnFriendListUpdate_mB422AD317F908DDCA99272016652A88A22FBAF47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnFriendListUpdate(friendList).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral65B5AA8DFF1B2E90A2D050D4B6B198EFD82D674E, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinedLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinedLobby_m3F1EFC503B05CA5A2410C4B5FF08405E6A4ECB2C (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnJoinedLobby_m3F1EFC503B05CA5A2410C4B5FF08405E6A4ECB2C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinedLobby(" + this.client.CurrentLobby + ").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral601FC93C20392B20EEB3C9F37859C622C0D151DF);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral601FC93C20392B20EEB3C9F37859C622C0D151DF);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_5 = __this->get_client_6();
		NullCheck(L_5);
		TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * L_6 = LoadBalancingClient_get_CurrentLobby_mA012C41E1DF7DF53F0CF4A024C9E0FABDDDC2456_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_8 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLeftLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLeftLobby_m33D2D8A6305BA65C80658D8B0AC3DADB7FAEC419 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnLeftLobby_m33D2D8A6305BA65C80658D8B0AC3DADB7FAEC419_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLeftLobby().");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral8BA5EF7D138B70C6CE8ACA51A43081AB53BB3ABD, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCreateRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCreateRoomFailed_mE38FC7667E7002A91626809317BECD47D71FDCCF (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnCreateRoomFailed_mE38FC7667E7002A91626809317BECD47D71FDCCF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCreateRoomFailed(" + returnCode+","+message+").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral7D53C873D226A601A9783CBEBEB7B758ABE2D2C7);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral7D53C873D226A601A9783CBEBEB7B758ABE2D2C7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		int16_t L_5 = ___returnCode0;
		int16_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_8;
		String_t* L_10 = ___message1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_12 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinedRoom_mB37EE4EAB942E5A6A8890C6FA4E1EB6740E16B82 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnJoinedRoom_mB37EE4EAB942E5A6A8890C6FA4E1EB6740E16B82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinedRoom(" + this.client.CurrentRoom + "). " + this.client.CurrentLobby + " GameServer:" + this.client.GameServerAddress);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral32664F9AA6498F4C645EF8CFF0ECD74680727FE7);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral32664F9AA6498F4C645EF8CFF0ECD74680727FE7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_5 = __this->get_client_6();
		NullCheck(L_5);
		Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * L_6 = LoadBalancingClient_get_CurrentRoom_mA294529AE11CDDF17597FADE478A392B8B534002_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral449A6A793E79A809F30A8DF7B94A45F51C03EAA7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral449A6A793E79A809F30A8DF7B94A45F51C03EAA7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_9 = __this->get_client_6();
		NullCheck(L_9);
		TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * L_10 = LoadBalancingClient_get_CurrentLobby_mA012C41E1DF7DF53F0CF4A024C9E0FABDDDC2456_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral1D3E5829ED7DE70BD79558BB321D57CF75539526);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral1D3E5829ED7DE70BD79558BB321D57CF75539526);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_13 = __this->get_client_6();
		NullCheck(L_13);
		String_t* L_14 = LoadBalancingClient_get_GameServerAddress_m572210F250D42394A3E6E0FAB7E15DBD6EE78E05_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_14);
		String_t* L_15 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinRoomFailed_m3488EE58BF74437B2142A96EBF18DCB6B4B2C48C (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinRandomFailed_mAE5ECBF451C6E4FDFE2F85E0DC30F525319D12F0 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnJoinRandomFailed_mAE5ECBF451C6E4FDFE2F85E0DC30F525319D12F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinRandomFailed(" + returnCode+","+message+").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral5E0956988995BA9D8AD545060593EC7593A248E9);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral5E0956988995BA9D8AD545060593EC7593A248E9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		int16_t L_5 = ___returnCode0;
		int16_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_8;
		String_t* L_10 = ___message1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_12 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCreatedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCreatedRoom_mF35AB68837976AC88555409F51F24C21C4A8C2F2 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnCreatedRoom_mF35AB68837976AC88555409F51F24C21C4A8C2F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCreatedRoom(" + this.client.CurrentRoom + "). " + this.client.CurrentLobby + " GameServer:" + this.client.GameServerAddress);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral6E7819832982A4FC237916272FB49CFFA9624FE3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral6E7819832982A4FC237916272FB49CFFA9624FE3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_5 = __this->get_client_6();
		NullCheck(L_5);
		Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * L_6 = LoadBalancingClient_get_CurrentRoom_mA294529AE11CDDF17597FADE478A392B8B534002_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral449A6A793E79A809F30A8DF7B94A45F51C03EAA7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral449A6A793E79A809F30A8DF7B94A45F51C03EAA7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_9 = __this->get_client_6();
		NullCheck(L_9);
		TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * L_10 = LoadBalancingClient_get_CurrentLobby_mA012C41E1DF7DF53F0CF4A024C9E0FABDDDC2456_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral1D3E5829ED7DE70BD79558BB321D57CF75539526);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral1D3E5829ED7DE70BD79558BB321D57CF75539526);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_13 = __this->get_client_6();
		NullCheck(L_13);
		String_t* L_14 = LoadBalancingClient_get_GameServerAddress_m572210F250D42394A3E6E0FAB7E15DBD6EE78E05_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_14);
		String_t* L_15 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLeftRoom_m05D5834FFADC1CCD590D7606819AA48399A3C76F (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnLeftRoom_m05D5834FFADC1CCD590D7606819AA48399A3C76F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLeftRoom().");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral0E894D3036F153E19CBC956B6A5AB40E5B46BFE2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnDisconnected(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnDisconnected_mDE77493509B7A736D17258EABD0BD827843C9950 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnDisconnected_mDE77493509B7A736D17258EABD0BD827843C9950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.StopLogStats();
		SupportLogger_StopLogStats_m5EA95B7B9DD9BEB62FCB674FBDED85DB910C3B06(__this, /*hidden argument*/NULL);
		// this.StopTrackValues();
		SupportLogger_StopTrackValues_m0806BA608466711C295BC23883AFAF6AEE153CB4(__this, /*hidden argument*/NULL);
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnDisconnected(" + cause + ").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralC114B6A8C4FCA0FA33B6A8678C504A97A63EBC26);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralC114B6A8C4FCA0FA33B6A8678C504A97A63EBC26);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		int32_t L_5 = ___cause0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(DisconnectCause_t8A969EFEB0FE2E4ABD5824250D4C9F7941F2650F_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_9 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_9, /*hidden argument*/NULL);
		// this.LogBasics();
		SupportLogger_LogBasics_m1DD18EAF9701CABB4D230E939DC67A471B2C4B13(__this, /*hidden argument*/NULL);
		// this.LogStats();
		SupportLogger_LogStats_m420DC4631D59DCE0F7D33C3146C8688D08C54F94(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRegionListReceived(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRegionListReceived_mC0CEDEA1F7A9B6376FAF45AFEB99FE7F0B36A720 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * ___regionHandler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnRegionListReceived_mC0CEDEA1F7A9B6376FAF45AFEB99FE7F0B36A720_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRegionListReceived(regionHandler).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral10081B2796EBDFF80CF5904ABFDA3DFF44F1D24D, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// this.LogBasics();
		SupportLogger_LogBasics_m1DD18EAF9701CABB4D230E939DC67A471B2C4B13(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRoomListUpdate(System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRoomListUpdate_m8268A931B26BA87B2F0B52F6F21A02B76CF7E2F5 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28 * ___roomList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnRoomListUpdate_m8268A931B26BA87B2F0B52F6F21A02B76CF7E2F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRoomListUpdate(roomList). roomList.Count: " + roomList.Count);
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		List_1_t42FAB330CD9CA06C0E6615C867470E33CE04AB28 * L_1 = ___roomList0;
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m1A59BC22EE5CA9B605AA85BF87051308A8EFE204_inline(L_1, /*hidden argument*/List_1_get_Count_m1A59BC22EE5CA9B605AA85BF87051308A8EFE204_RuntimeMethod_var);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(L_0, _stringLiteral0E181279FE55F2E332C77E81D9AD00F5486D04F9, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerEnteredRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerEnteredRoom_m154F337E9EB056F73C076F87B3D79F7C60203933 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___newPlayer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnPlayerEnteredRoom_m154F337E9EB056F73C076F87B3D79F7C60203933_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerEnteredRoom(" + newPlayer+").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral736FF8E5B8E1C7958551256FA5E5146C75A31C7B);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral736FF8E5B8E1C7958551256FA5E5146C75A31C7B);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_5 = ___newPlayer0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_7 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerLeftRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerLeftRoom_m341B83040EF40500E395885DEE61E6EF45B7FD31 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___otherPlayer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnPlayerLeftRoom_m341B83040EF40500E395885DEE61E6EF45B7FD31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerLeftRoom(" + otherPlayer+").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3850EA0BD3AE76F6C25B67DC9BD76AD54ED52547);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3850EA0BD3AE76F6C25B67DC9BD76AD54ED52547);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_5 = ___otherPlayer0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_7 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRoomPropertiesUpdate_mEB189ED07C8A5116E98966D29B8812178A34C648 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, Hashtable_t6C793F679F853BC58BE63A475DE07DBB098D0287 * ___propertiesThatChanged0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnRoomPropertiesUpdate_mEB189ED07C8A5116E98966D29B8812178A34C648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRoomPropertiesUpdate(propertiesThatChanged).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral6936221DCE707D23499D1653D6EE7D2BADFFBAA9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerPropertiesUpdate(Photon.Realtime.Player,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerPropertiesUpdate_m4CDDC3D7D59AA78AAF30E9AC5E407E09674AC886 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___targetPlayer0, Hashtable_t6C793F679F853BC58BE63A475DE07DBB098D0287 * ___changedProps1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnPlayerPropertiesUpdate_m4CDDC3D7D59AA78AAF30E9AC5E407E09674AC886_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerPropertiesUpdate(targetPlayer,changedProps).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral6124202FE8A86D323B1C5BC98700503825D454C2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnMasterClientSwitched(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnMasterClientSwitched_m3658AC3899549A5D3788B25BD338CDDA9C842F8D (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___newMasterClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnMasterClientSwitched_m3658AC3899549A5D3788B25BD338CDDA9C842F8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnMasterClientSwitched(" + newMasterClient+").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral263A15B4E3E9E2F4C3E8221AC828274306B13855);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral263A15B4E3E9E2F4C3E8221AC828274306B13855);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_5 = ___newMasterClient0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_7 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCustomAuthenticationResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCustomAuthenticationResponse_mF5F844DB7163FEE64FB92021F75C644C44D2CF35 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnCustomAuthenticationResponse_mF5F844DB7163FEE64FB92021F75C644C44D2CF35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCustomAuthenticationResponse(" + data.ToStringFull()+").");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_1 = ___data0;
		String_t* L_2 = Extensions_ToStringFull_m7D5DC29B4341359CC4354664509068EF620E9DCC(L_1, /*hidden argument*/NULL);
		String_t* L_3 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_0, _stringLiteralC5958D312E5DCB60470B5CABD9A95E5F86B42BCB, L_2, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCustomAuthenticationFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCustomAuthenticationFailed_m63D26B6876F0FD3409FD609D7354B59DCA6B6648 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, String_t* ___debugMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnCustomAuthenticationFailed_m63D26B6876F0FD3409FD609D7354B59DCA6B6648_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCustomAuthenticationFailed(" + debugMessage+").");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___debugMessage0;
		String_t* L_2 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_0, _stringLiteral4510F0D9271E0DB7D04EB79129742314C93163A9, L_1, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLobbyStatisticsUpdate(System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLobbyStatisticsUpdate_m9224062BC0172E2FE07283717A658EF01153EB68 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, List_1_t6C9FCEA5B81789209C0373EEE6952A0DC27D1459 * ___lobbyStatistics0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnLobbyStatisticsUpdate_m9224062BC0172E2FE07283717A658EF01153EB68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLobbyStatisticsUpdate(lobbyStatistics).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_m32FC37B0F0AE804113DD4C24DB3BE4AE6193D821(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral810A4EA841E283333EDA34AE9D91F1789F061216, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnErrorInfo(Photon.Realtime.ErrorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnErrorInfo_m20D7E6C6F87BF2BA88711037EEC5F34871B55C8D (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, ErrorInfo_t829D1EA10BBE2538E288DC9FAFFCBE91874225D9 * ___errorInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnErrorInfo_m20D7E6C6F87BF2BA88711037EEC5F34871B55C8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(errorInfo.ToString());
		ErrorInfo_t829D1EA10BBE2538E288DC9FAFFCBE91874225D9 * L_0 = ___errorInfo0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger__ctor_m17A4C242A97DE0BC726D88511103F1AB72B49653 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	{
		// public bool LogTrafficStats = true;
		__this->set_LogTrafficStats_4((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Boolean Photon.Realtime.TypedLobby::get_IsDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypedLobby_get_IsDefault_m9EABBD862010C30DC98DCFAC650D5DE378BDE77C (TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public bool IsDefault { get { return string.IsNullOrEmpty(this.Name); } }
		String_t* L_0 = __this->get_Name_0();
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public bool IsDefault { get { return string.IsNullOrEmpty(this.Name); } }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Photon.Realtime.TypedLobby::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__ctor_m00923523872B0E50E15357CBBED9A08D5F944586 (TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * __this, const RuntimeMethod* method)
{
	{
		// internal TypedLobby()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.TypedLobby::.ctor(System.String,Photon.Realtime.LobbyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__ctor_mE5A5B745646CA0B8228EE2B6451B06BBE02D561D (TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * __this, String_t* ___name0, uint8_t ___type1, const RuntimeMethod* method)
{
	{
		// public TypedLobby(string name, LobbyType type)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.Name = name;
		String_t* L_0 = ___name0;
		__this->set_Name_0(L_0);
		// this.Type = type;
		uint8_t L_1 = ___type1;
		__this->set_Type_1(L_1);
		// }
		return;
	}
}
// System.String Photon.Realtime.TypedLobby::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypedLobby_ToString_mA56D3E449966F9879512DB3400679974B80DB5AA (TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobby_ToString_mA56D3E449966F9879512DB3400679974B80DB5AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("lobby '{0}'[{1}]", this.Name, this.Type);
		String_t* L_0 = __this->get_Name_0();
		uint8_t L_1 = __this->get_Type_1();
		uint8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(LobbyType_tC10229382E36CFEC2718583263A711F1C1F35305_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral8227CC0BECA58310D819DA015E3EE6A267F9F559, L_0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		String_t* L_5 = V_0;
		return L_5;
	}
}
// System.Void Photon.Realtime.TypedLobby::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__cctor_m9A3C3621A62B5E941CBC71894D7318FA30EE84B7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobby__cctor_m9A3C3621A62B5E941CBC71894D7318FA30EE84B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly TypedLobby Default = new TypedLobby();
		TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * L_0 = (TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 *)il2cpp_codegen_object_new(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_il2cpp_TypeInfo_var);
		TypedLobby__ctor_m00923523872B0E50E15357CBBED9A08D5F944586(L_0, /*hidden argument*/NULL);
		((TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_StaticFields*)il2cpp_codegen_static_fields_for(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_il2cpp_TypeInfo_var))->set_Default_2(L_0);
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
// System.String Photon.Realtime.TypedLobbyInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypedLobbyInfo_ToString_m5C7AB7E7308A8603657D1621D9AA98C027BD467C (TypedLobbyInfo_t4ADAD96C3E4BD40D2ADEA6AF8741EB96983D76E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobbyInfo_ToString_m5C7AB7E7308A8603657D1621D9AA98C027BD467C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("TypedLobbyInfo '{0}'[{1}] rooms: {2} players: {3}", this.Name, this.Type, this.RoomCount, this.PlayerCount);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = ((TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 *)__this)->get_Name_0();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		uint8_t L_4 = ((TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 *)__this)->get_Type_1();
		uint8_t L_5 = L_4;
		RuntimeObject * L_6 = Box(LobbyType_tC10229382E36CFEC2718583263A711F1C1F35305_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_3;
		int32_t L_8 = __this->get_RoomCount_4();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_7;
		int32_t L_12 = __this->get_PlayerCount_3();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteralD1DBE50E93BA588346E8642DECF71D0109C9A902, L_11, /*hidden argument*/NULL);
		V_0 = L_15;
		goto IL_0047;
	}

IL_0047:
	{
		// }
		String_t* L_16 = V_0;
		return L_16;
	}
}
// System.Void Photon.Realtime.TypedLobbyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobbyInfo__ctor_m608A819C4E7B3D755880CBBE88AD68B11447F76B (TypedLobbyInfo_t4ADAD96C3E4BD40D2ADEA6AF8741EB96983D76E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobbyInfo__ctor_m608A819C4E7B3D755880CBBE88AD68B11447F76B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_il2cpp_TypeInfo_var);
		TypedLobby__ctor_m00923523872B0E50E15357CBBED9A08D5F944586(__this, /*hidden argument*/NULL);
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
// System.Boolean Photon.Realtime.WebFlags::get_HttpForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_HttpForward_m06B3FF0980DD3F3AC493ECF0897CFAFEB6101AB7 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return (WebhookFlags & HttpForwardConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// get { return (WebhookFlags & HttpForwardConst) != 0; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.WebFlags::set_HttpForward(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_HttpForward_m5057520D45E0EE8B75146FF633C741C88E6DB1E5 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (value)
		bool L_0 = ___value0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// WebhookFlags |= HttpForwardConst;
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2|(int32_t)1))))));
		goto IL_002b;
	}

IL_0019:
	{
		// WebhookFlags = (byte) (WebhookFlags & ~(1 << 0));
		uint8_t L_3 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)-2)))))));
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.WebFlags::get_SendAuthCookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_SendAuthCookie_m4C3809BF83E26E6A0A0BBCF1B656FB420DB099C5 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return (WebhookFlags & SendAuthCookieConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// get { return (WebhookFlags & SendAuthCookieConst) != 0; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.WebFlags::set_SendAuthCookie(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_SendAuthCookie_m67D7AF57044292DA159A46AE8F4DC27F1DD3A46E (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (value)
		bool L_0 = ___value0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// WebhookFlags |= SendAuthCookieConst;
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2|(int32_t)2))))));
		goto IL_002b;
	}

IL_0019:
	{
		// WebhookFlags = (byte)(WebhookFlags & ~(1 << 1));
		uint8_t L_3 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)-3)))))));
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.WebFlags::get_SendSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_SendSync_m8E4500A08237E7ACF599CF7A77EF1F0B419D7FE2 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return (WebhookFlags & SendSyncConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)4))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// get { return (WebhookFlags & SendSyncConst) != 0; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.WebFlags::set_SendSync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_SendSync_m1C9961C96558BF31ED185876EA55990A4F54CAE3 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (value)
		bool L_0 = ___value0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// WebhookFlags |= SendSyncConst;
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2|(int32_t)4))))));
		goto IL_002b;
	}

IL_0019:
	{
		// WebhookFlags = (byte)(WebhookFlags & ~(1 << 2));
		uint8_t L_3 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)-5)))))));
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.WebFlags::get_SendState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_SendState_m7085E7394ECDB9CDC07BF0A4C2A0037E344076C5 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return (WebhookFlags & SendStateConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		V_0 = (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)8))) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// get { return (WebhookFlags & SendStateConst) != 0; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Photon.Realtime.WebFlags::set_SendState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_SendState_m772DFC77F5169E3548302A9F601B87DC11765909 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, bool ___value0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (value)
		bool L_0 = ___value0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// WebhookFlags |= SendStateConst;
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2|(int32_t)8))))));
		goto IL_002b;
	}

IL_0019:
	{
		// WebhookFlags = (byte)(WebhookFlags & ~(1 << 3));
		uint8_t L_3 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)-9)))))));
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.WebFlags::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__ctor_mF30D282AD9F1D728C06672D22FCB7E108BCB1993 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, uint8_t ___webhookFlags0, const RuntimeMethod* method)
{
	{
		// public WebFlags(byte webhookFlags)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// WebhookFlags = webhookFlags;
		uint8_t L_0 = ___webhookFlags0;
		__this->set_WebhookFlags_1(L_0);
		// }
		return;
	}
}
// System.Void Photon.Realtime.WebFlags::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__cctor_m98EB282DAF4EDC93CC587315D2B06E55CB86DDE0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebFlags__cctor_m98EB282DAF4EDC93CC587315D2B06E55CB86DDE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly static WebFlags Default = new WebFlags(0);
		WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * L_0 = (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE *)il2cpp_codegen_object_new(WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE_il2cpp_TypeInfo_var);
		WebFlags__ctor_mF30D282AD9F1D728C06672D22FCB7E108BCB1993(L_0, (uint8_t)0, /*hidden argument*/NULL);
		((WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE_StaticFields*)il2cpp_codegen_static_fields_for(WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE_il2cpp_TypeInfo_var))->set_Default_0(L_0);
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
// System.Void Photon.Realtime.WebRpcCallbacksContainer::.ctor(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcCallbacksContainer__ctor_mC0E65E12EA20C9F14D401D8F08FDB85E806176AF (WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * __this, LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___client0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRpcCallbacksContainer__ctor_mC0E65E12EA20C9F14D401D8F08FDB85E806176AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebRpcCallbacksContainer(LoadBalancingClient client)
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t2C7E2F41C3DE09F59C56B540E731621E408416A6_il2cpp_TypeInfo_var);
		List_1__ctor_m8998D7682A2B5B6B47F0837987B6598904297BAF(__this, /*hidden argument*/List_1__ctor_m8998D7682A2B5B6B47F0837987B6598904297BAF_RuntimeMethod_var);
		// this.client = client;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = ___client0;
		__this->set_client_6(L_0);
		// }
		return;
	}
}
// System.Void Photon.Realtime.WebRpcCallbacksContainer::OnWebRpcResponse(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcCallbacksContainer_OnWebRpcResponse_m04402F0B3B42848A9DA6F90E3D923632EE12C80F (WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * __this, OperationResponse_tCD0E0ADD3BB90F6436E1A28C59FD22F12F70F816 * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRpcCallbacksContainer_OnWebRpcResponse_m04402F0B3B42848A9DA6F90E3D923632EE12C80F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// this.client.UpdateCallbackTargets();
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_client_6();
		NullCheck(L_0);
		LoadBalancingClient_UpdateCallbackTargets_m4F0C56B00E0DC74B26294FA61A83186A710DBFFA(L_0, /*hidden argument*/NULL);
		// foreach (IWebRpcCallback target in this)
		Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909  L_1 = List_1_GetEnumerator_m3DC15E45F109EA8ED752BBF8669EF7D6199CF358(__this, /*hidden argument*/List_1_GetEnumerator_m3DC15E45F109EA8ED752BBF8669EF7D6199CF358_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_0017:
		{
			// foreach (IWebRpcCallback target in this)
			RuntimeObject* L_2 = Enumerator_get_Current_mA50C178A90B3A62136BA22B44CE8D3AA0B549911_inline((Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mA50C178A90B3A62136BA22B44CE8D3AA0B549911_RuntimeMethod_var);
			V_1 = L_2;
			// target.OnWebRpcResponse(response);
			RuntimeObject* L_3 = V_1;
			OperationResponse_tCD0E0ADD3BB90F6436E1A28C59FD22F12F70F816 * L_4 = ___response0;
			NullCheck(L_3);
			InterfaceActionInvoker1< OperationResponse_tCD0E0ADD3BB90F6436E1A28C59FD22F12F70F816 * >::Invoke(0 /* System.Void Photon.Realtime.IWebRpcCallback::OnWebRpcResponse(ExitGames.Client.Photon.OperationResponse) */, IWebRpcCallback_t8E22E34D48A3C7550F423A92483771438C1B7D25_il2cpp_TypeInfo_var, L_3, L_4);
		}

IL_0029:
		{
			// foreach (IWebRpcCallback target in this)
			bool L_5 = Enumerator_MoveNext_m50709063468E77F299D9B15A5224FC5B8770F948((Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m50709063468E77F299D9B15A5224FC5B8770F948_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0017;
			}
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x43, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC7FFB79B44AF60DEF8ECB7E95469108B1A131FDD((Enumerator_t20B3A40E8249ACB5B049D52AA34F3CE71C0AD909 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mC7FFB79B44AF60DEF8ECB7E95469108B1A131FDD_RuntimeMethod_var);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0043:
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
// System.String Photon.Realtime.WebRpcResponse::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_m0B6E38116B73FE932B4809D1510013A2D0E75FEB (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_mEADC4EB6ED220410F817BB3A5864230A0215CA01 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 Photon.Realtime.WebRpcResponse::get_ResultCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_mFC73DF1E0EF9021C8C3E53EC0EF548915B566886 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = __this->get_U3CResultCodeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_ResultCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_m8E4EE89F34D749CCFEA3B1D2D777A5A8D3FA33AA (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CResultCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 Photon.Realtime.WebRpcResponse::get_ReturnCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ReturnCode_mC2DB2985F6E1F2AB60A26975A4D7DC88C5D7562A (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return ResultCode; }
		int32_t L_0 = WebRpcResponse_get_ResultCode_mFC73DF1E0EF9021C8C3E53EC0EF548915B566886_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return ResultCode; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String Photon.Realtime.WebRpcResponse::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_m9F817E8E921967871322B123F6C1BEF6F8BF5138 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_m0A4DB2E9F565AD93775CAE27C140A9DB4E411B78 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Photon.Realtime.WebRpcResponse::get_DebugMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_DebugMessage_mD4740D583D4CF227657519753D2145759B371714 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// get { return Message; }
		String_t* L_0 = WebRpcResponse_get_Message_m9F817E8E921967871322B123F6C1BEF6F8BF5138_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return Message; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * WebRpcResponse_get_Parameters_m73734E2B75DC69FF24E5EBFE1C58383DB7F01969 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = __this->get_U3CParametersU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_mC93C08CE135944569FF91BC362C850E628E0563A (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___value0, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = ___value0;
		__this->set_U3CParametersU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::.ctor(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse__ctor_m493EF5754D2DE47245C1B8D41E959B542B4CF1A7 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, OperationResponse_tCD0E0ADD3BB90F6436E1A28C59FD22F12F70F816 * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRpcResponse__ctor_m493EF5754D2DE47245C1B8D41E959B542B4CF1A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// public WebRpcResponse(OperationResponse response)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// if (response.Parameters.TryGetValue(ParameterCode.UriPath, out value))
		OperationResponse_tCD0E0ADD3BB90F6436E1A28C59FD22F12F70F816 * L_0 = ___response0;
		NullCheck(L_0);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_1 = L_0->get_Parameters_3();
		NullCheck(L_1);
		bool L_2 = Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841(L_1, (uint8_t)((int32_t)209), (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841_RuntimeMethod_var);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// this.Name = value as string;
		RuntimeObject * L_4 = V_0;
		WebRpcResponse_set_Name_mEADC4EB6ED220410F817BB3A5864230A0215CA01_inline(__this, ((String_t*)IsInstSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_002d:
	{
		// this.ResultCode = -1;
		WebRpcResponse_set_ResultCode_m8E4EE89F34D749CCFEA3B1D2D777A5A8D3FA33AA_inline(__this, (-1), /*hidden argument*/NULL);
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcReturnCode, out value))
		OperationResponse_tCD0E0ADD3BB90F6436E1A28C59FD22F12F70F816 * L_5 = ___response0;
		NullCheck(L_5);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_6 = L_5->get_Parameters_3();
		NullCheck(L_6);
		bool L_7 = Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841(L_6, (uint8_t)((int32_t)207), (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841_RuntimeMethod_var);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		// this.ResultCode = (byte)value;
		RuntimeObject * L_9 = V_0;
		WebRpcResponse_set_ResultCode_m8E4EE89F34D749CCFEA3B1D2D777A5A8D3FA33AA_inline(__this, ((*(uint8_t*)((uint8_t*)UnBox(L_9, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_005a:
	{
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcParameters, out value))
		OperationResponse_tCD0E0ADD3BB90F6436E1A28C59FD22F12F70F816 * L_10 = ___response0;
		NullCheck(L_10);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_11 = L_10->get_Parameters_3();
		NullCheck(L_11);
		bool L_12 = Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841(L_11, (uint8_t)((int32_t)208), (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841_RuntimeMethod_var);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		// this.Parameters = value as Dictionary<string, object>;
		RuntimeObject * L_14 = V_0;
		WebRpcResponse_set_Parameters_mC93C08CE135944569FF91BC362C850E628E0563A_inline(__this, ((Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)IsInstClass((RuntimeObject*)L_14, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_007f:
	{
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcReturnMessage, out value))
		OperationResponse_tCD0E0ADD3BB90F6436E1A28C59FD22F12F70F816 * L_15 = ___response0;
		NullCheck(L_15);
		Dictionary_2_t9B5BD8E7A4C7EADD189175CF887E6C5F917E965D * L_16 = L_15->get_Parameters_3();
		NullCheck(L_16);
		bool L_17 = Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841(L_16, (uint8_t)((int32_t)206), (RuntimeObject **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m8B39ED539B994181791D0F9DBD399F7A90AF5841_RuntimeMethod_var);
		V_4 = L_17;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_00a6;
		}
	}
	{
		// this.Message = value as string;
		RuntimeObject * L_19 = V_0;
		WebRpcResponse_set_Message_m0A4DB2E9F565AD93775CAE27C140A9DB4E411B78_inline(__this, ((String_t*)IsInstSealed((RuntimeObject*)L_19, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.String Photon.Realtime.WebRpcResponse::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_ToStringFull_mD16B7B3F985553A86DC907BC3836B249EC84F203 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRpcResponse_ToStringFull_mD16B7B3F985553A86DC907BC3836B249EC84F203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("{0}={2}: {1} \"{3}\"", this.Name, SupportClass.DictionaryToString(this.Parameters), this.ResultCode, this.Message);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = WebRpcResponse_get_Name_m0B6E38116B73FE932B4809D1510013A2D0E75FEB_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_4 = WebRpcResponse_get_Parameters_m73734E2B75DC69FF24E5EBFE1C58383DB7F01969_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tEA01C47C00ABEBF0F0E52CFBC85DBF6D9918C08B_il2cpp_TypeInfo_var);
		String_t* L_5 = SupportClass_DictionaryToString_mF1C6E005A0E224ED96C1E11A0B9D56F5FD23A26C(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_3;
		int32_t L_7 = WebRpcResponse_get_ResultCode_mFC73DF1E0EF9021C8C3E53EC0EF548915B566886_inline(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_6;
		String_t* L_11 = WebRpcResponse_get_Message_m9F817E8E921967871322B123F6C1BEF6F8BF5138_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		String_t* L_12 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral9E226BDBF405B6893314BBDA5DF5D6DA548FA202, L_10, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		String_t* L_13 = V_0;
		return L_13;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public LoadBalancingPeer LoadBalancingPeer { get; private set; }
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_0 = __this->get_U3CLoadBalancingPeerU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppId_m49A1261CC79356CABF9A709AAC4674B406ECA1DD_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public string AppId { get; set; }
		String_t* L_0 = __this->get_U3CAppIdU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_m2D816CED5CD4B71B47C03B33D2C5DFAE08997B9D_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; set; }
		String_t* L_0 = __this->get_U3CAppVersionU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CloudRegion_m0AAC37B5520321CC88C90C625E56EBEC822C3DEB_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public string CloudRegion { get; private set; }
		String_t* L_0 = __this->get_U3CCloudRegionU3Ek__BackingField_40();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * LoadBalancingClient_get_CurrentLobby_mA012C41E1DF7DF53F0CF4A024C9E0FABDDDC2456_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public TypedLobby CurrentLobby { get; internal set; }
		TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * L_0 = __this->get_U3CCurrentLobbyU3Ek__BackingField_27();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * LoadBalancingClient_get_CurrentRoom_mA294529AE11CDDF17597FADE478A392B8B534002_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public Room CurrentRoom { get; set; }
		Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * L_0 = __this->get_U3CCurrentRoomU3Ek__BackingField_31();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_GameServerAddress_m572210F250D42394A3E6E0FAB7E15DBD6EE78E05_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public string GameServerAddress { get; protected internal set; }
		String_t* L_0 = __this->get_U3CGameServerAddressU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_mFC73DF1E0EF9021C8C3E53EC0EF548915B566886_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = __this->get_U3CResultCodeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_m9F817E8E921967871322B123F6C1BEF6F8BF5138_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_mEADC4EB6ED220410F817BB3A5864230A0215CA01_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_m8E4EE89F34D749CCFEA3B1D2D777A5A8D3FA33AA_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CResultCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_mC93C08CE135944569FF91BC362C850E628E0563A_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___value0, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = ___value0;
		__this->set_U3CParametersU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_m0A4DB2E9F565AD93775CAE27C140A9DB4E411B78_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_m0B6E38116B73FE932B4809D1510013A2D0E75FEB_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * WebRpcResponse_get_Parameters_m73734E2B75DC69FF24E5EBFE1C58383DB7F01969_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = __this->get_U3CParametersU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
