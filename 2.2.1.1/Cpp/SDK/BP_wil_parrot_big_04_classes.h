﻿#pragma once

// Name: SeaOfThieves, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_wil_parrot_big_04.BP_wil_parrot_big_04_C
// 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
class ABP_wil_parrot_big_04_C : public AActor
{
public:
	class UAnimNotifyWwiseEmitterComponent*            AnimNotifyWwiseEmitter;                                    // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_wil_parrot_big_04.BP_wil_parrot_big_04_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif