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

// BlueprintGeneratedClass tls_wld_torch_skull_a.tls_wld_torch_skull_a_C
// 0x0010 (FullSize[0x03F0] - InheritedSize[0x03E0])
class Atls_wld_torch_skull_a_C : public AStaticMeshActor
{
public:
	class UPointLightComponent*                        PointLight;                                                // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UParticleSystemComponent*                    Fire;                                                      // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass tls_wld_torch_skull_a.tls_wld_torch_skull_a_C");
		return ptr;
	}



	void UserConstructionScript();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
