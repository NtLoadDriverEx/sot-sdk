// Name: SeaOfThieves, Version: 2.2.1.1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_xmas_WLD_Outpost_2_Dressing.BP_xmas_WLD_Outpost_2_Dressing_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_xmas_WLD_Outpost_2_Dressing_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_xmas_WLD_Outpost_2_Dressing.BP_xmas_WLD_Outpost_2_Dressing_C.UserConstructionScript");

	ABP_xmas_WLD_Outpost_2_Dressing_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
