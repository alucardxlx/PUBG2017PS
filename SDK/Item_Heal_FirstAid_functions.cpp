#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Item_Heal_FirstAid

#include "Basic.hpp"

#include "Item_Heal_FirstAid_classes.hpp"
#include "Item_Heal_FirstAid_parameters.hpp"


namespace SDK
{

// Function Item_Heal_FirstAid.Item_Heal_FirstAid_C.UseBy
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslCharacter*                    Character_0                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UItem_Heal_FirstAid_C::UseBy(class ATslCharacter* Character_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_Heal_FirstAid_C", "UseBy");

	Params::Item_Heal_FirstAid_C_UseBy Parms{};

	Parms.Character_0 = Character_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function Item_Heal_FirstAid.Item_Heal_FirstAid_C.Heal
// (Public, BlueprintCallable, BlueprintEvent)

void UItem_Heal_FirstAid_C::Heal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_Heal_FirstAid_C", "Heal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Item_Heal_FirstAid.Item_Heal_FirstAid_C.PrintCastingTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItem_Heal_FirstAid_C::PrintCastingTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_Heal_FirstAid_C", "PrintCastingTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Item_Heal_FirstAid.Item_Heal_FirstAid_C.IsCastable
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class ATslCharacter*                    Character_0                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UItem_Heal_FirstAid_C::IsCastable(class ATslCharacter* Character_0) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_Heal_FirstAid_C", "IsCastable");

	Params::Item_Heal_FirstAid_C_IsCastable Parms{};

	Parms.Character_0 = Character_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

